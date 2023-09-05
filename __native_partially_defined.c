#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
partially_defined___BranchState_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *partially_defined___BranchState_setup(PyTypeObject *type);
PyObject *CPyDef_partially_defined___BranchState(PyObject *cpy_r_must_be_defined, PyObject *cpy_r_may_be_defined, char cpy_r_skipped);

static PyObject *
partially_defined___BranchState_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_partially_defined___BranchState) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = partially_defined___BranchState_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_partially_defined___BranchState_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
partially_defined___BranchState_traverse(mypy___partially_defined___BranchStateObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_may_be_defined);
    Py_VISIT(self->_must_be_defined);
    return 0;
}

static int
partially_defined___BranchState_clear(mypy___partially_defined___BranchStateObject *self)
{
    Py_CLEAR(self->_may_be_defined);
    Py_CLEAR(self->_must_be_defined);
    return 0;
}

static void
partially_defined___BranchState_dealloc(mypy___partially_defined___BranchStateObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, partially_defined___BranchState_dealloc)
    partially_defined___BranchState_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem partially_defined___BranchState_vtable[2];
static bool
CPyDef_partially_defined___BranchState_trait_vtable_setup(void)
{
    CPyVTableItem partially_defined___BranchState_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_partially_defined___BranchState_____init__,
        (CPyVTableItem)CPyDef_partially_defined___BranchState___copy,
    };
    memcpy(partially_defined___BranchState_vtable, partially_defined___BranchState_vtable_scratch, sizeof(partially_defined___BranchState_vtable));
    return 1;
}

static PyObject *
partially_defined___BranchState_get_may_be_defined(mypy___partially_defined___BranchStateObject *self, void *closure);
static int
partially_defined___BranchState_set_may_be_defined(mypy___partially_defined___BranchStateObject *self, PyObject *value, void *closure);
static PyObject *
partially_defined___BranchState_get_must_be_defined(mypy___partially_defined___BranchStateObject *self, void *closure);
static int
partially_defined___BranchState_set_must_be_defined(mypy___partially_defined___BranchStateObject *self, PyObject *value, void *closure);
static PyObject *
partially_defined___BranchState_get_skipped(mypy___partially_defined___BranchStateObject *self, void *closure);
static int
partially_defined___BranchState_set_skipped(mypy___partially_defined___BranchStateObject *self, PyObject *value, void *closure);

static PyGetSetDef partially_defined___BranchState_getseters[] = {
    {"may_be_defined",
     (getter)partially_defined___BranchState_get_may_be_defined, (setter)partially_defined___BranchState_set_may_be_defined,
     NULL, NULL},
    {"must_be_defined",
     (getter)partially_defined___BranchState_get_must_be_defined, (setter)partially_defined___BranchState_set_must_be_defined,
     NULL, NULL},
    {"skipped",
     (getter)partially_defined___BranchState_get_skipped, (setter)partially_defined___BranchState_set_skipped,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef partially_defined___BranchState_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_partially_defined___BranchState_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"copy",
     (PyCFunction)CPyPy_partially_defined___BranchState___copy,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_partially_defined___BranchState_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "BranchState",
    .tp_new = partially_defined___BranchState_new,
    .tp_dealloc = (destructor)partially_defined___BranchState_dealloc,
    .tp_traverse = (traverseproc)partially_defined___BranchState_traverse,
    .tp_clear = (inquiry)partially_defined___BranchState_clear,
    .tp_getset = partially_defined___BranchState_getseters,
    .tp_methods = partially_defined___BranchState_methods,
    .tp_init = partially_defined___BranchState_init,
    .tp_basicsize = sizeof(mypy___partially_defined___BranchStateObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_partially_defined___BranchState_template = &CPyType_partially_defined___BranchState_template_;

static PyObject *
partially_defined___BranchState_setup(PyTypeObject *type)
{
    mypy___partially_defined___BranchStateObject *self;
    self = (mypy___partially_defined___BranchStateObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = partially_defined___BranchState_vtable;
    self->_skipped = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_partially_defined___BranchState(PyObject *cpy_r_must_be_defined, PyObject *cpy_r_may_be_defined, char cpy_r_skipped)
{
    PyObject *self = partially_defined___BranchState_setup(CPyType_partially_defined___BranchState);
    if (self == NULL)
        return NULL;
    char res = CPyDef_partially_defined___BranchState_____init__(self, cpy_r_must_be_defined, cpy_r_may_be_defined, cpy_r_skipped);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
partially_defined___BranchState_get_may_be_defined(mypy___partially_defined___BranchStateObject *self, void *closure)
{
    if (unlikely(self->_may_be_defined == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'may_be_defined' of 'BranchState' undefined");
        return NULL;
    }
    CPy_INCREF(self->_may_be_defined);
    PyObject *retval = self->_may_be_defined;
    return retval;
}

static int
partially_defined___BranchState_set_may_be_defined(mypy___partially_defined___BranchStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BranchState' object attribute 'may_be_defined' cannot be deleted");
        return -1;
    }
    if (self->_may_be_defined != NULL) {
        CPy_DECREF(self->_may_be_defined);
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
    self->_may_be_defined = tmp;
    return 0;
}

static PyObject *
partially_defined___BranchState_get_must_be_defined(mypy___partially_defined___BranchStateObject *self, void *closure)
{
    if (unlikely(self->_must_be_defined == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'must_be_defined' of 'BranchState' undefined");
        return NULL;
    }
    CPy_INCREF(self->_must_be_defined);
    PyObject *retval = self->_must_be_defined;
    return retval;
}

static int
partially_defined___BranchState_set_must_be_defined(mypy___partially_defined___BranchStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BranchState' object attribute 'must_be_defined' cannot be deleted");
        return -1;
    }
    if (self->_must_be_defined != NULL) {
        CPy_DECREF(self->_must_be_defined);
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
    self->_must_be_defined = tmp;
    return 0;
}

static PyObject *
partially_defined___BranchState_get_skipped(mypy___partially_defined___BranchStateObject *self, void *closure)
{
    PyObject *retval = self->_skipped ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
partially_defined___BranchState_set_skipped(mypy___partially_defined___BranchStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BranchState' object attribute 'skipped' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_skipped = tmp;
    return 0;
}

static int
partially_defined___BranchStatement_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *partially_defined___BranchStatement_setup(PyTypeObject *type);
PyObject *CPyDef_partially_defined___BranchStatement(PyObject *cpy_r_initial_state);

static PyObject *
partially_defined___BranchStatement_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_partially_defined___BranchStatement) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = partially_defined___BranchStatement_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_partially_defined___BranchStatement_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
partially_defined___BranchStatement_traverse(mypy___partially_defined___BranchStatementObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_initial_state);
    Py_VISIT(self->_branches);
    return 0;
}

static int
partially_defined___BranchStatement_clear(mypy___partially_defined___BranchStatementObject *self)
{
    Py_CLEAR(self->_initial_state);
    Py_CLEAR(self->_branches);
    return 0;
}

static void
partially_defined___BranchStatement_dealloc(mypy___partially_defined___BranchStatementObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, partially_defined___BranchStatement_dealloc)
    partially_defined___BranchStatement_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem partially_defined___BranchStatement_vtable[11];
static bool
CPyDef_partially_defined___BranchStatement_trait_vtable_setup(void)
{
    CPyVTableItem partially_defined___BranchStatement_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_partially_defined___BranchStatement_____init__,
        (CPyVTableItem)CPyDef_partially_defined___BranchStatement___copy,
        (CPyVTableItem)CPyDef_partially_defined___BranchStatement___next_branch,
        (CPyVTableItem)CPyDef_partially_defined___BranchStatement___record_definition,
        (CPyVTableItem)CPyDef_partially_defined___BranchStatement___delete_var,
        (CPyVTableItem)CPyDef_partially_defined___BranchStatement___record_nested_branch,
        (CPyVTableItem)CPyDef_partially_defined___BranchStatement___skip_branch,
        (CPyVTableItem)CPyDef_partially_defined___BranchStatement___is_possibly_undefined,
        (CPyVTableItem)CPyDef_partially_defined___BranchStatement___is_undefined,
        (CPyVTableItem)CPyDef_partially_defined___BranchStatement___is_defined_in_a_branch,
        (CPyVTableItem)CPyDef_partially_defined___BranchStatement___done,
    };
    memcpy(partially_defined___BranchStatement_vtable, partially_defined___BranchStatement_vtable_scratch, sizeof(partially_defined___BranchStatement_vtable));
    return 1;
}

static PyObject *
partially_defined___BranchStatement_get_initial_state(mypy___partially_defined___BranchStatementObject *self, void *closure);
static int
partially_defined___BranchStatement_set_initial_state(mypy___partially_defined___BranchStatementObject *self, PyObject *value, void *closure);
static PyObject *
partially_defined___BranchStatement_get_branches(mypy___partially_defined___BranchStatementObject *self, void *closure);
static int
partially_defined___BranchStatement_set_branches(mypy___partially_defined___BranchStatementObject *self, PyObject *value, void *closure);

static PyGetSetDef partially_defined___BranchStatement_getseters[] = {
    {"initial_state",
     (getter)partially_defined___BranchStatement_get_initial_state, (setter)partially_defined___BranchStatement_set_initial_state,
     NULL, NULL},
    {"branches",
     (getter)partially_defined___BranchStatement_get_branches, (setter)partially_defined___BranchStatement_set_branches,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef partially_defined___BranchStatement_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_partially_defined___BranchStatement_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"copy",
     (PyCFunction)CPyPy_partially_defined___BranchStatement___copy,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"next_branch",
     (PyCFunction)CPyPy_partially_defined___BranchStatement___next_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_definition",
     (PyCFunction)CPyPy_partially_defined___BranchStatement___record_definition,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"delete_var",
     (PyCFunction)CPyPy_partially_defined___BranchStatement___delete_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_nested_branch",
     (PyCFunction)CPyPy_partially_defined___BranchStatement___record_nested_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"skip_branch",
     (PyCFunction)CPyPy_partially_defined___BranchStatement___skip_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_possibly_undefined",
     (PyCFunction)CPyPy_partially_defined___BranchStatement___is_possibly_undefined,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_undefined",
     (PyCFunction)CPyPy_partially_defined___BranchStatement___is_undefined,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_defined_in_a_branch",
     (PyCFunction)CPyPy_partially_defined___BranchStatement___is_defined_in_a_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"done",
     (PyCFunction)CPyPy_partially_defined___BranchStatement___done,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_partially_defined___BranchStatement_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "BranchStatement",
    .tp_new = partially_defined___BranchStatement_new,
    .tp_dealloc = (destructor)partially_defined___BranchStatement_dealloc,
    .tp_traverse = (traverseproc)partially_defined___BranchStatement_traverse,
    .tp_clear = (inquiry)partially_defined___BranchStatement_clear,
    .tp_getset = partially_defined___BranchStatement_getseters,
    .tp_methods = partially_defined___BranchStatement_methods,
    .tp_init = partially_defined___BranchStatement_init,
    .tp_basicsize = sizeof(mypy___partially_defined___BranchStatementObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_partially_defined___BranchStatement_template = &CPyType_partially_defined___BranchStatement_template_;

static PyObject *
partially_defined___BranchStatement_setup(PyTypeObject *type)
{
    mypy___partially_defined___BranchStatementObject *self;
    self = (mypy___partially_defined___BranchStatementObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = partially_defined___BranchStatement_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_partially_defined___BranchStatement(PyObject *cpy_r_initial_state)
{
    PyObject *self = partially_defined___BranchStatement_setup(CPyType_partially_defined___BranchStatement);
    if (self == NULL)
        return NULL;
    char res = CPyDef_partially_defined___BranchStatement_____init__(self, cpy_r_initial_state);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
partially_defined___BranchStatement_get_initial_state(mypy___partially_defined___BranchStatementObject *self, void *closure)
{
    if (unlikely(self->_initial_state == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'initial_state' of 'BranchStatement' undefined");
        return NULL;
    }
    CPy_INCREF(self->_initial_state);
    PyObject *retval = self->_initial_state;
    return retval;
}

static int
partially_defined___BranchStatement_set_initial_state(mypy___partially_defined___BranchStatementObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BranchStatement' object attribute 'initial_state' cannot be deleted");
        return -1;
    }
    if (self->_initial_state != NULL) {
        CPy_DECREF(self->_initial_state);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_partially_defined___BranchState))
        tmp = value;
    else {
        CPy_TypeError("mypy.partially_defined.BranchState", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_initial_state = tmp;
    return 0;
}

static PyObject *
partially_defined___BranchStatement_get_branches(mypy___partially_defined___BranchStatementObject *self, void *closure)
{
    if (unlikely(self->_branches == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'branches' of 'BranchStatement' undefined");
        return NULL;
    }
    CPy_INCREF(self->_branches);
    PyObject *retval = self->_branches;
    return retval;
}

static int
partially_defined___BranchStatement_set_branches(mypy___partially_defined___BranchStatementObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BranchStatement' object attribute 'branches' cannot be deleted");
        return -1;
    }
    if (self->_branches != NULL) {
        CPy_DECREF(self->_branches);
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
    self->_branches = tmp;
    return 0;
}

static int
partially_defined___Scope_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *partially_defined___Scope_setup(PyTypeObject *type);
PyObject *CPyDef_partially_defined___Scope(PyObject *cpy_r_stmts, PyObject *cpy_r_scope_type);

static PyObject *
partially_defined___Scope_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_partially_defined___Scope) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = partially_defined___Scope_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_partially_defined___Scope_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
partially_defined___Scope_traverse(mypy___partially_defined___ScopeObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_branch_stmts);
    Py_VISIT(self->_scope_type);
    Py_VISIT(self->_undefined_refs);
    return 0;
}

static int
partially_defined___Scope_clear(mypy___partially_defined___ScopeObject *self)
{
    Py_CLEAR(self->_branch_stmts);
    Py_CLEAR(self->_scope_type);
    Py_CLEAR(self->_undefined_refs);
    return 0;
}

static void
partially_defined___Scope_dealloc(mypy___partially_defined___ScopeObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, partially_defined___Scope_dealloc)
    partially_defined___Scope_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem partially_defined___Scope_vtable[4];
static bool
CPyDef_partially_defined___Scope_trait_vtable_setup(void)
{
    CPyVTableItem partially_defined___Scope_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_partially_defined___Scope_____init__,
        (CPyVTableItem)CPyDef_partially_defined___Scope___copy,
        (CPyVTableItem)CPyDef_partially_defined___Scope___record_undefined_ref,
        (CPyVTableItem)CPyDef_partially_defined___Scope___pop_undefined_ref,
    };
    memcpy(partially_defined___Scope_vtable, partially_defined___Scope_vtable_scratch, sizeof(partially_defined___Scope_vtable));
    return 1;
}

static PyObject *
partially_defined___Scope_get_branch_stmts(mypy___partially_defined___ScopeObject *self, void *closure);
static int
partially_defined___Scope_set_branch_stmts(mypy___partially_defined___ScopeObject *self, PyObject *value, void *closure);
static PyObject *
partially_defined___Scope_get_scope_type(mypy___partially_defined___ScopeObject *self, void *closure);
static int
partially_defined___Scope_set_scope_type(mypy___partially_defined___ScopeObject *self, PyObject *value, void *closure);
static PyObject *
partially_defined___Scope_get_undefined_refs(mypy___partially_defined___ScopeObject *self, void *closure);
static int
partially_defined___Scope_set_undefined_refs(mypy___partially_defined___ScopeObject *self, PyObject *value, void *closure);

static PyGetSetDef partially_defined___Scope_getseters[] = {
    {"branch_stmts",
     (getter)partially_defined___Scope_get_branch_stmts, (setter)partially_defined___Scope_set_branch_stmts,
     NULL, NULL},
    {"scope_type",
     (getter)partially_defined___Scope_get_scope_type, (setter)partially_defined___Scope_set_scope_type,
     NULL, NULL},
    {"undefined_refs",
     (getter)partially_defined___Scope_get_undefined_refs, (setter)partially_defined___Scope_set_undefined_refs,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef partially_defined___Scope_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_partially_defined___Scope_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"copy",
     (PyCFunction)CPyPy_partially_defined___Scope___copy,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_undefined_ref",
     (PyCFunction)CPyPy_partially_defined___Scope___record_undefined_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"pop_undefined_ref",
     (PyCFunction)CPyPy_partially_defined___Scope___pop_undefined_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_partially_defined___Scope_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Scope",
    .tp_new = partially_defined___Scope_new,
    .tp_dealloc = (destructor)partially_defined___Scope_dealloc,
    .tp_traverse = (traverseproc)partially_defined___Scope_traverse,
    .tp_clear = (inquiry)partially_defined___Scope_clear,
    .tp_getset = partially_defined___Scope_getseters,
    .tp_methods = partially_defined___Scope_methods,
    .tp_init = partially_defined___Scope_init,
    .tp_basicsize = sizeof(mypy___partially_defined___ScopeObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_partially_defined___Scope_template = &CPyType_partially_defined___Scope_template_;

static PyObject *
partially_defined___Scope_setup(PyTypeObject *type)
{
    mypy___partially_defined___ScopeObject *self;
    self = (mypy___partially_defined___ScopeObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = partially_defined___Scope_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_partially_defined___Scope(PyObject *cpy_r_stmts, PyObject *cpy_r_scope_type)
{
    PyObject *self = partially_defined___Scope_setup(CPyType_partially_defined___Scope);
    if (self == NULL)
        return NULL;
    char res = CPyDef_partially_defined___Scope_____init__(self, cpy_r_stmts, cpy_r_scope_type);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
partially_defined___Scope_get_branch_stmts(mypy___partially_defined___ScopeObject *self, void *closure)
{
    if (unlikely(self->_branch_stmts == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'branch_stmts' of 'Scope' undefined");
        return NULL;
    }
    CPy_INCREF(self->_branch_stmts);
    PyObject *retval = self->_branch_stmts;
    return retval;
}

static int
partially_defined___Scope_set_branch_stmts(mypy___partially_defined___ScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Scope' object attribute 'branch_stmts' cannot be deleted");
        return -1;
    }
    if (self->_branch_stmts != NULL) {
        CPy_DECREF(self->_branch_stmts);
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
    self->_branch_stmts = tmp;
    return 0;
}

static PyObject *
partially_defined___Scope_get_scope_type(mypy___partially_defined___ScopeObject *self, void *closure)
{
    if (unlikely(self->_scope_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'scope_type' of 'Scope' undefined");
        return NULL;
    }
    CPy_INCREF(self->_scope_type);
    PyObject *retval = self->_scope_type;
    return retval;
}

static int
partially_defined___Scope_set_scope_type(mypy___partially_defined___ScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Scope' object attribute 'scope_type' cannot be deleted");
        return -1;
    }
    if (self->_scope_type != NULL) {
        CPy_DECREF(self->_scope_type);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_partially_defined___ScopeType))
        tmp = value;
    else {
        CPy_TypeError("mypy.partially_defined.ScopeType", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_scope_type = tmp;
    return 0;
}

static PyObject *
partially_defined___Scope_get_undefined_refs(mypy___partially_defined___ScopeObject *self, void *closure)
{
    if (unlikely(self->_undefined_refs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'undefined_refs' of 'Scope' undefined");
        return NULL;
    }
    CPy_INCREF(self->_undefined_refs);
    PyObject *retval = self->_undefined_refs;
    return retval;
}

static int
partially_defined___Scope_set_undefined_refs(mypy___partially_defined___ScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Scope' object attribute 'undefined_refs' cannot be deleted");
        return -1;
    }
    if (self->_undefined_refs != NULL) {
        CPy_DECREF(self->_undefined_refs);
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
    self->_undefined_refs = tmp;
    return 0;
}

static int
partially_defined___DefinedVariableTracker_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *partially_defined___DefinedVariableTracker_setup(PyTypeObject *type);
PyObject *CPyDef_partially_defined___DefinedVariableTracker(void);

static PyObject *
partially_defined___DefinedVariableTracker_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_partially_defined___DefinedVariableTracker) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = partially_defined___DefinedVariableTracker_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_partially_defined___DefinedVariableTracker_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
partially_defined___DefinedVariableTracker_traverse(mypy___partially_defined___DefinedVariableTrackerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_scopes);
    return 0;
}

static int
partially_defined___DefinedVariableTracker_clear(mypy___partially_defined___DefinedVariableTrackerObject *self)
{
    Py_CLEAR(self->_scopes);
    return 0;
}

static void
partially_defined___DefinedVariableTracker_dealloc(mypy___partially_defined___DefinedVariableTrackerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, partially_defined___DefinedVariableTracker_dealloc)
    partially_defined___DefinedVariableTracker_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem partially_defined___DefinedVariableTracker_vtable[17];
static bool
CPyDef_partially_defined___DefinedVariableTracker_trait_vtable_setup(void)
{
    CPyVTableItem partially_defined___DefinedVariableTracker_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker_____init__,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___copy,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker____scope,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___enter_scope,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___exit_scope,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___in_scope,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___start_branch_statement,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___next_branch,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___end_branch_statement,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___skip_branch,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___record_definition,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___delete_var,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___record_undefined_ref,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___pop_undefined_ref,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___is_possibly_undefined,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___is_defined_in_different_branch,
        (CPyVTableItem)CPyDef_partially_defined___DefinedVariableTracker___is_undefined,
    };
    memcpy(partially_defined___DefinedVariableTracker_vtable, partially_defined___DefinedVariableTracker_vtable_scratch, sizeof(partially_defined___DefinedVariableTracker_vtable));
    return 1;
}

static PyObject *
partially_defined___DefinedVariableTracker_get_scopes(mypy___partially_defined___DefinedVariableTrackerObject *self, void *closure);
static int
partially_defined___DefinedVariableTracker_set_scopes(mypy___partially_defined___DefinedVariableTrackerObject *self, PyObject *value, void *closure);
static PyObject *
partially_defined___DefinedVariableTracker_get_disable_branch_skip(mypy___partially_defined___DefinedVariableTrackerObject *self, void *closure);
static int
partially_defined___DefinedVariableTracker_set_disable_branch_skip(mypy___partially_defined___DefinedVariableTrackerObject *self, PyObject *value, void *closure);

static PyGetSetDef partially_defined___DefinedVariableTracker_getseters[] = {
    {"scopes",
     (getter)partially_defined___DefinedVariableTracker_get_scopes, (setter)partially_defined___DefinedVariableTracker_set_scopes,
     NULL, NULL},
    {"disable_branch_skip",
     (getter)partially_defined___DefinedVariableTracker_get_disable_branch_skip, (setter)partially_defined___DefinedVariableTracker_set_disable_branch_skip,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef partially_defined___DefinedVariableTracker_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"copy",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___copy,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_scope",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker____scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"enter_scope",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___enter_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"exit_scope",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___exit_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"in_scope",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___in_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"start_branch_statement",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___start_branch_statement,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"next_branch",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___next_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"end_branch_statement",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___end_branch_statement,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"skip_branch",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___skip_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_definition",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___record_definition,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"delete_var",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___delete_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_undefined_ref",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___record_undefined_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"pop_undefined_ref",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___pop_undefined_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_possibly_undefined",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___is_possibly_undefined,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_defined_in_different_branch",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___is_defined_in_different_branch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_undefined",
     (PyCFunction)CPyPy_partially_defined___DefinedVariableTracker___is_undefined,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_partially_defined___DefinedVariableTracker_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "DefinedVariableTracker",
    .tp_new = partially_defined___DefinedVariableTracker_new,
    .tp_dealloc = (destructor)partially_defined___DefinedVariableTracker_dealloc,
    .tp_traverse = (traverseproc)partially_defined___DefinedVariableTracker_traverse,
    .tp_clear = (inquiry)partially_defined___DefinedVariableTracker_clear,
    .tp_getset = partially_defined___DefinedVariableTracker_getseters,
    .tp_methods = partially_defined___DefinedVariableTracker_methods,
    .tp_init = partially_defined___DefinedVariableTracker_init,
    .tp_basicsize = sizeof(mypy___partially_defined___DefinedVariableTrackerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_partially_defined___DefinedVariableTracker_template = &CPyType_partially_defined___DefinedVariableTracker_template_;

static PyObject *
partially_defined___DefinedVariableTracker_setup(PyTypeObject *type)
{
    mypy___partially_defined___DefinedVariableTrackerObject *self;
    self = (mypy___partially_defined___DefinedVariableTrackerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = partially_defined___DefinedVariableTracker_vtable;
    self->_disable_branch_skip = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_partially_defined___DefinedVariableTracker(void)
{
    PyObject *self = partially_defined___DefinedVariableTracker_setup(CPyType_partially_defined___DefinedVariableTracker);
    if (self == NULL)
        return NULL;
    char res = CPyDef_partially_defined___DefinedVariableTracker_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
partially_defined___DefinedVariableTracker_get_scopes(mypy___partially_defined___DefinedVariableTrackerObject *self, void *closure)
{
    if (unlikely(self->_scopes == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'scopes' of 'DefinedVariableTracker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_scopes);
    PyObject *retval = self->_scopes;
    return retval;
}

static int
partially_defined___DefinedVariableTracker_set_scopes(mypy___partially_defined___DefinedVariableTrackerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DefinedVariableTracker' object attribute 'scopes' cannot be deleted");
        return -1;
    }
    if (self->_scopes != NULL) {
        CPy_DECREF(self->_scopes);
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
    self->_scopes = tmp;
    return 0;
}

static PyObject *
partially_defined___DefinedVariableTracker_get_disable_branch_skip(mypy___partially_defined___DefinedVariableTrackerObject *self, void *closure)
{
    PyObject *retval = self->_disable_branch_skip ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
partially_defined___DefinedVariableTracker_set_disable_branch_skip(mypy___partially_defined___DefinedVariableTrackerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DefinedVariableTracker' object attribute 'disable_branch_skip' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_disable_branch_skip = tmp;
    return 0;
}

static int
partially_defined___Loop_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *partially_defined___Loop_setup(PyTypeObject *type);
PyObject *CPyDef_partially_defined___Loop(void);

static PyObject *
partially_defined___Loop_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_partially_defined___Loop) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = partially_defined___Loop_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_partially_defined___Loop_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
partially_defined___Loop_traverse(mypy___partially_defined___LoopObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
partially_defined___Loop_clear(mypy___partially_defined___LoopObject *self)
{
    return 0;
}

static void
partially_defined___Loop_dealloc(mypy___partially_defined___LoopObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, partially_defined___Loop_dealloc)
    partially_defined___Loop_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem partially_defined___Loop_vtable[1];
static bool
CPyDef_partially_defined___Loop_trait_vtable_setup(void)
{
    CPyVTableItem partially_defined___Loop_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_partially_defined___Loop_____init__,
    };
    memcpy(partially_defined___Loop_vtable, partially_defined___Loop_vtable_scratch, sizeof(partially_defined___Loop_vtable));
    return 1;
}

static PyObject *
partially_defined___Loop_get_has_break(mypy___partially_defined___LoopObject *self, void *closure);
static int
partially_defined___Loop_set_has_break(mypy___partially_defined___LoopObject *self, PyObject *value, void *closure);

static PyGetSetDef partially_defined___Loop_getseters[] = {
    {"has_break",
     (getter)partially_defined___Loop_get_has_break, (setter)partially_defined___Loop_set_has_break,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef partially_defined___Loop_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_partially_defined___Loop_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_partially_defined___Loop_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Loop",
    .tp_new = partially_defined___Loop_new,
    .tp_dealloc = (destructor)partially_defined___Loop_dealloc,
    .tp_traverse = (traverseproc)partially_defined___Loop_traverse,
    .tp_clear = (inquiry)partially_defined___Loop_clear,
    .tp_getset = partially_defined___Loop_getseters,
    .tp_methods = partially_defined___Loop_methods,
    .tp_init = partially_defined___Loop_init,
    .tp_basicsize = sizeof(mypy___partially_defined___LoopObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_partially_defined___Loop_template = &CPyType_partially_defined___Loop_template_;

static PyObject *
partially_defined___Loop_setup(PyTypeObject *type)
{
    mypy___partially_defined___LoopObject *self;
    self = (mypy___partially_defined___LoopObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = partially_defined___Loop_vtable;
    self->_has_break = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_partially_defined___Loop(void)
{
    PyObject *self = partially_defined___Loop_setup(CPyType_partially_defined___Loop);
    if (self == NULL)
        return NULL;
    char res = CPyDef_partially_defined___Loop_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
partially_defined___Loop_get_has_break(mypy___partially_defined___LoopObject *self, void *closure)
{
    PyObject *retval = self->_has_break ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
partially_defined___Loop_set_has_break(mypy___partially_defined___LoopObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Loop' object attribute 'has_break' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_has_break = tmp;
    return 0;
}

static int
partially_defined___PossiblyUndefinedVariableVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef partially_defined___PossiblyUndefinedVariableVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *partially_defined___PossiblyUndefinedVariableVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor(PyObject *cpy_r_msg, PyObject *cpy_r_type_map, PyObject *cpy_r_options, PyObject *cpy_r_names);

static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_partially_defined___PossiblyUndefinedVariableVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = partially_defined___PossiblyUndefinedVariableVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_partially_defined___PossiblyUndefinedVariableVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
partially_defined___PossiblyUndefinedVariableVisitor_traverse(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_msg);
    Py_VISIT(self->_type_map);
    Py_VISIT(self->_options);
    Py_VISIT(self->_builtins);
    Py_VISIT(self->_loops);
    if (CPyTagged_CheckLong(self->_try_depth)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_try_depth));
    }
    Py_VISIT(self->_tracker);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject))));
    return 0;
}

static int
partially_defined___PossiblyUndefinedVariableVisitor_clear(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self)
{
    Py_CLEAR(self->_msg);
    Py_CLEAR(self->_type_map);
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_builtins);
    Py_CLEAR(self->_loops);
    if (CPyTagged_CheckLong(self->_try_depth)) {
        CPyTagged __tmp = self->_try_depth;
        self->_try_depth = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_tracker);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject))));
    return 0;
}

static void
partially_defined___PossiblyUndefinedVariableVisitor_dealloc(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, partially_defined___PossiblyUndefinedVariableVisitor_dealloc)
    partially_defined___PossiblyUndefinedVariableVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem partially_defined___PossiblyUndefinedVariableVisitor_vtable[208];
static CPyVTableItem partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_partially_defined___PossiblyUndefinedVariableVisitor_trait_vtable_setup(void)
{
    CPyVTableItem partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_block__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_operator_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_del_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_pass_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_str_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_bytes_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_float_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_complex_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_ellipsis__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_star_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_member_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_from_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_op_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_comparison_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_cast_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_type_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_reveal_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_super_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_unary_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_index_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_application__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_slice_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_conditional_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_paramspec_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_enum_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_await_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_or_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_value_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_singleton_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_sequence_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mapping_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_pattern__NodeVisitor_glue,
    };
    memcpy(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___NodeVisitor_trait_vtable, partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___NodeVisitor_offset_table, partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_int_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_str_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_bytes_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_float_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_complex_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_ellipsis__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_application__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_slice_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_conditional_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_paramspec_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_namedtuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_enum_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_typeddict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_newtype_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_await_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
    };
    memcpy(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___ExpressionVisitor_offset_table, partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_block__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_operator_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_pass_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt__StatementVisitor_glue,
    };
    memcpy(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___StatementVisitor_trait_vtable, partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___StatementVisitor_offset_table, partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_singleton_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___PatternVisitor_trait_vtable, partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___PatternVisitor_offset_table, partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem partially_defined___PossiblyUndefinedVariableVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)partially_defined___PossiblyUndefinedVariableVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor_____init__,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_pattern,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_pass_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_str_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_bytes_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_float_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_complex_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_ellipsis__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_paramspec_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_enum_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_singleton_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_traverser___ExtendedTraverserVisitor___visit_class_pattern,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor_____init__,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___var_used_before_def,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___variable_may_be_undefined,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_definition,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_try_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import,
        (CPyVTableItem)CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from,
    };
    memcpy(partially_defined___PossiblyUndefinedVariableVisitor_vtable, partially_defined___PossiblyUndefinedVariableVisitor_vtable_scratch, sizeof(partially_defined___PossiblyUndefinedVariableVisitor_vtable));
    return 1;
}

static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_get_msg(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, void *closure);
static int
partially_defined___PossiblyUndefinedVariableVisitor_set_msg(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, PyObject *value, void *closure);
static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_get_type_map(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, void *closure);
static int
partially_defined___PossiblyUndefinedVariableVisitor_set_type_map(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, PyObject *value, void *closure);
static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_get_options(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, void *closure);
static int
partially_defined___PossiblyUndefinedVariableVisitor_set_options(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, PyObject *value, void *closure);
static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_get_builtins(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, void *closure);
static int
partially_defined___PossiblyUndefinedVariableVisitor_set_builtins(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, PyObject *value, void *closure);
static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_get_loops(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, void *closure);
static int
partially_defined___PossiblyUndefinedVariableVisitor_set_loops(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, PyObject *value, void *closure);
static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_get_try_depth(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, void *closure);
static int
partially_defined___PossiblyUndefinedVariableVisitor_set_try_depth(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, PyObject *value, void *closure);
static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_get_tracker(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, void *closure);
static int
partially_defined___PossiblyUndefinedVariableVisitor_set_tracker(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef partially_defined___PossiblyUndefinedVariableVisitor_getseters[] = {
    {"msg",
     (getter)partially_defined___PossiblyUndefinedVariableVisitor_get_msg, (setter)partially_defined___PossiblyUndefinedVariableVisitor_set_msg,
     NULL, NULL},
    {"type_map",
     (getter)partially_defined___PossiblyUndefinedVariableVisitor_get_type_map, (setter)partially_defined___PossiblyUndefinedVariableVisitor_set_type_map,
     NULL, NULL},
    {"options",
     (getter)partially_defined___PossiblyUndefinedVariableVisitor_get_options, (setter)partially_defined___PossiblyUndefinedVariableVisitor_set_options,
     NULL, NULL},
    {"builtins",
     (getter)partially_defined___PossiblyUndefinedVariableVisitor_get_builtins, (setter)partially_defined___PossiblyUndefinedVariableVisitor_set_builtins,
     NULL, NULL},
    {"loops",
     (getter)partially_defined___PossiblyUndefinedVariableVisitor_get_loops, (setter)partially_defined___PossiblyUndefinedVariableVisitor_set_loops,
     NULL, NULL},
    {"try_depth",
     (getter)partially_defined___PossiblyUndefinedVariableVisitor_get_try_depth, (setter)partially_defined___PossiblyUndefinedVariableVisitor_set_try_depth,
     NULL, NULL},
    {"tracker",
     (getter)partially_defined___PossiblyUndefinedVariableVisitor_get_tracker, (setter)partially_defined___PossiblyUndefinedVariableVisitor_set_tracker,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef partially_defined___PossiblyUndefinedVariableVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"var_used_before_def",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___var_used_before_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"variable_may_be_undefined",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___variable_may_be_undefined,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_definition",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___process_definition,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_global_decl",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_nonlocal_decl",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_lvalue",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_stmt",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_expr",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_if_stmt",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_match_stmt",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_func,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_generator_expr",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dictionary_comprehension",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_for_stmt",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return_stmt",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_lambda_expr",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assert_stmt",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_raise_stmt",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_continue_stmt",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_break_stmt",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_expression_stmt",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_try_stmt",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_try_stmt",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___process_try_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_while_stmt",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_as_pattern",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_starred_pattern",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_with_stmt",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_def",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_import,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_from",
     (PyCFunction)CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_partially_defined___PossiblyUndefinedVariableVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "PossiblyUndefinedVariableVisitor",
    .tp_new = partially_defined___PossiblyUndefinedVariableVisitor_new,
    .tp_dealloc = (destructor)partially_defined___PossiblyUndefinedVariableVisitor_dealloc,
    .tp_traverse = (traverseproc)partially_defined___PossiblyUndefinedVariableVisitor_traverse,
    .tp_clear = (inquiry)partially_defined___PossiblyUndefinedVariableVisitor_clear,
    .tp_getset = partially_defined___PossiblyUndefinedVariableVisitor_getseters,
    .tp_methods = partially_defined___PossiblyUndefinedVariableVisitor_methods,
    .tp_init = partially_defined___PossiblyUndefinedVariableVisitor_init,
    .tp_members = partially_defined___PossiblyUndefinedVariableVisitor_members,
    .tp_basicsize = sizeof(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_partially_defined___PossiblyUndefinedVariableVisitor_template = &CPyType_partially_defined___PossiblyUndefinedVariableVisitor_template_;

static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_setup(PyTypeObject *type)
{
    mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self;
    self = (mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = partially_defined___PossiblyUndefinedVariableVisitor_vtable + 12;
    self->_try_depth = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor(PyObject *cpy_r_msg, PyObject *cpy_r_type_map, PyObject *cpy_r_options, PyObject *cpy_r_names)
{
    PyObject *self = partially_defined___PossiblyUndefinedVariableVisitor_setup(CPyType_partially_defined___PossiblyUndefinedVariableVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor_____init__(self, cpy_r_msg, cpy_r_type_map, cpy_r_options, cpy_r_names);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_get_msg(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, void *closure)
{
    if (unlikely(self->_msg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'msg' of 'PossiblyUndefinedVariableVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_msg);
    PyObject *retval = self->_msg;
    return retval;
}

static int
partially_defined___PossiblyUndefinedVariableVisitor_set_msg(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PossiblyUndefinedVariableVisitor' object attribute 'msg' cannot be deleted");
        return -1;
    }
    if (self->_msg != NULL) {
        CPy_DECREF(self->_msg);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_messages___MessageBuilder))
        tmp = value;
    else {
        CPy_TypeError("mypy.messages.MessageBuilder", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_msg = tmp;
    return 0;
}

static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_get_type_map(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, void *closure)
{
    if (unlikely(self->_type_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type_map' of 'PossiblyUndefinedVariableVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type_map);
    PyObject *retval = self->_type_map;
    return retval;
}

static int
partially_defined___PossiblyUndefinedVariableVisitor_set_type_map(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PossiblyUndefinedVariableVisitor' object attribute 'type_map' cannot be deleted");
        return -1;
    }
    if (self->_type_map != NULL) {
        CPy_DECREF(self->_type_map);
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
    self->_type_map = tmp;
    return 0;
}

static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_get_options(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'PossiblyUndefinedVariableVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
partially_defined___PossiblyUndefinedVariableVisitor_set_options(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PossiblyUndefinedVariableVisitor' object attribute 'options' cannot be deleted");
        return -1;
    }
    if (self->_options != NULL) {
        CPy_DECREF(self->_options);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypy___options___Options))
        tmp = value;
    else {
        CPy_TypeError("mypy.options.Options", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_options = tmp;
    return 0;
}

static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_get_builtins(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, void *closure)
{
    if (unlikely(self->_builtins == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'builtins' of 'PossiblyUndefinedVariableVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_builtins);
    PyObject *retval = self->_builtins;
    return retval;
}

static int
partially_defined___PossiblyUndefinedVariableVisitor_set_builtins(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PossiblyUndefinedVariableVisitor' object attribute 'builtins' cannot be deleted");
        return -1;
    }
    if (self->_builtins != NULL) {
        CPy_DECREF(self->_builtins);
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
    self->_builtins = tmp;
    return 0;
}

static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_get_loops(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, void *closure)
{
    if (unlikely(self->_loops == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'loops' of 'PossiblyUndefinedVariableVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_loops);
    PyObject *retval = self->_loops;
    return retval;
}

static int
partially_defined___PossiblyUndefinedVariableVisitor_set_loops(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PossiblyUndefinedVariableVisitor' object attribute 'loops' cannot be deleted");
        return -1;
    }
    if (self->_loops != NULL) {
        CPy_DECREF(self->_loops);
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
    self->_loops = tmp;
    return 0;
}

static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_get_try_depth(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, void *closure)
{
    if (unlikely(self->_try_depth == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'try_depth' of 'PossiblyUndefinedVariableVisitor' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_try_depth);
    PyObject *retval = CPyTagged_StealAsObject(self->_try_depth);
    return retval;
}

static int
partially_defined___PossiblyUndefinedVariableVisitor_set_try_depth(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PossiblyUndefinedVariableVisitor' object attribute 'try_depth' cannot be deleted");
        return -1;
    }
    if (self->_try_depth != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_try_depth);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_try_depth = tmp;
    return 0;
}

static PyObject *
partially_defined___PossiblyUndefinedVariableVisitor_get_tracker(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, void *closure)
{
    if (unlikely(self->_tracker == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'tracker' of 'PossiblyUndefinedVariableVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_tracker);
    PyObject *retval = self->_tracker;
    return retval;
}

static int
partially_defined___PossiblyUndefinedVariableVisitor_set_tracker(mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PossiblyUndefinedVariableVisitor' object attribute 'tracker' cannot be deleted");
        return -1;
    }
    if (self->_tracker != NULL) {
        CPy_DECREF(self->_tracker);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_partially_defined___DefinedVariableTracker))
        tmp = value;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_tracker = tmp;
    return 0;
}
static PyMethodDef partially_definedmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef partially_definedmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.partially_defined",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    partially_definedmodule_methods
};

PyObject *CPyInit_mypy___partially_defined(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___partially_defined_internal) {
        Py_INCREF(CPyModule_mypy___partially_defined_internal);
        return CPyModule_mypy___partially_defined_internal;
    }
    CPyModule_mypy___partially_defined_internal = PyModule_Create(&partially_definedmodule);
    if (unlikely(CPyModule_mypy___partially_defined_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___partially_defined_internal, "__name__");
    CPyStatic_partially_defined___globals = PyModule_GetDict(CPyModule_mypy___partially_defined_internal);
    if (unlikely(CPyStatic_partially_defined___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_partially_defined_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___partially_defined_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___partially_defined_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_partially_defined___ScopeType___Global);
    CPyStatic_partially_defined___ScopeType___Global = NULL;
    CPy_XDECREF(CPyStatic_partially_defined___ScopeType___Class);
    CPyStatic_partially_defined___ScopeType___Class = NULL;
    CPy_XDECREF(CPyStatic_partially_defined___ScopeType___Func);
    CPyStatic_partially_defined___ScopeType___Func = NULL;
    CPy_XDECREF(CPyStatic_partially_defined___ScopeType___Generator);
    CPyStatic_partially_defined___ScopeType___Generator = NULL;
    Py_CLEAR(CPyType_partially_defined___BranchState);
    Py_CLEAR(CPyType_partially_defined___BranchStatement);
    Py_CLEAR(CPyType_partially_defined___ScopeType);
    Py_CLEAR(CPyType_partially_defined___Scope);
    Py_CLEAR(CPyType_partially_defined___DefinedVariableTracker);
    Py_CLEAR(CPyType_partially_defined___Loop);
    Py_CLEAR(CPyType_partially_defined___PossiblyUndefinedVariableVisitor);
    return NULL;
}

char CPyDef_partially_defined___BranchState_____init__(PyObject *cpy_r_self, PyObject *cpy_r_must_be_defined, PyObject *cpy_r_may_be_defined, char cpy_r_skipped) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    if (cpy_r_must_be_defined != NULL) goto CPyL18;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_must_be_defined = cpy_r_r0;
CPyL2: ;
    if (cpy_r_may_be_defined != NULL) goto CPyL19;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_may_be_defined = cpy_r_r1;
CPyL4: ;
    if (cpy_r_skipped != 2) goto CPyL6;
    cpy_r_skipped = 0;
CPyL6: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_may_be_defined == cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL20;
    } else
        goto CPyL9;
CPyL7: ;
    cpy_r_r4 = PySet_New(NULL);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 65, CPyStatic_partially_defined___globals);
        goto CPyL21;
    }
    cpy_r_may_be_defined = cpy_r_r4;
CPyL9: ;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_must_be_defined == cpy_r_r5;
    if (cpy_r_r6) {
        goto CPyL22;
    } else
        goto CPyL12;
CPyL10: ;
    cpy_r_r7 = PySet_New(NULL);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 67, CPyStatic_partially_defined___globals);
        goto CPyL23;
    }
    cpy_r_must_be_defined = cpy_r_r7;
CPyL12: ;
    if (likely(cpy_r_may_be_defined != Py_None))
        cpy_r_r8 = cpy_r_may_be_defined;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "__init__", 69, CPyStatic_partially_defined___globals, "set", cpy_r_may_be_defined);
        goto CPyL21;
    }
    cpy_r_r9 = PySet_New(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 69, CPyStatic_partially_defined___globals);
        goto CPyL21;
    }
    ((mypy___partially_defined___BranchStateObject *)cpy_r_self)->_may_be_defined = cpy_r_r9;
    if (likely(cpy_r_must_be_defined != Py_None))
        cpy_r_r10 = cpy_r_must_be_defined;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "__init__", 70, CPyStatic_partially_defined___globals, "set", cpy_r_must_be_defined);
        goto CPyL17;
    }
    cpy_r_r11 = PySet_New(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 70, CPyStatic_partially_defined___globals);
        goto CPyL17;
    }
    ((mypy___partially_defined___BranchStateObject *)cpy_r_self)->_must_be_defined = cpy_r_r11;
    ((mypy___partially_defined___BranchStateObject *)cpy_r_self)->_skipped = cpy_r_skipped;
    return 1;
CPyL17: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL18: ;
    CPy_INCREF(cpy_r_must_be_defined);
    goto CPyL2;
CPyL19: ;
    CPy_INCREF(cpy_r_may_be_defined);
    goto CPyL4;
CPyL20: ;
    CPy_DECREF(cpy_r_may_be_defined);
    goto CPyL7;
CPyL21: ;
    CPy_DecRef(cpy_r_must_be_defined);
    goto CPyL17;
CPyL22: ;
    CPy_DECREF(cpy_r_must_be_defined);
    goto CPyL10;
CPyL23: ;
    CPy_DecRef(cpy_r_may_be_defined);
    goto CPyL17;
}

PyObject *CPyPy_partially_defined___BranchState_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"must_be_defined", "may_be_defined", "skipped", 0};
    PyObject *obj_must_be_defined = NULL;
    PyObject *obj_may_be_defined = NULL;
    PyObject *obj_skipped = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "|OOO", "__init__", kwlist, &obj_must_be_defined, &obj_may_be_defined, &obj_skipped)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___BranchState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.BranchState", obj_self); 
        goto fail;
    }
    PyObject *arg_must_be_defined;
    if (obj_must_be_defined == NULL) {
        arg_must_be_defined = NULL;
        goto __LL4618;
    }
    if (PySet_Check(obj_must_be_defined))
        arg_must_be_defined = obj_must_be_defined;
    else {
        arg_must_be_defined = NULL;
    }
    if (arg_must_be_defined != NULL) goto __LL4618;
    if (obj_must_be_defined == Py_None)
        arg_must_be_defined = obj_must_be_defined;
    else {
        arg_must_be_defined = NULL;
    }
    if (arg_must_be_defined != NULL) goto __LL4618;
    CPy_TypeError("set or None", obj_must_be_defined); 
    goto fail;
__LL4618: ;
    PyObject *arg_may_be_defined;
    if (obj_may_be_defined == NULL) {
        arg_may_be_defined = NULL;
        goto __LL4619;
    }
    if (PySet_Check(obj_may_be_defined))
        arg_may_be_defined = obj_may_be_defined;
    else {
        arg_may_be_defined = NULL;
    }
    if (arg_may_be_defined != NULL) goto __LL4619;
    if (obj_may_be_defined == Py_None)
        arg_may_be_defined = obj_may_be_defined;
    else {
        arg_may_be_defined = NULL;
    }
    if (arg_may_be_defined != NULL) goto __LL4619;
    CPy_TypeError("set or None", obj_may_be_defined); 
    goto fail;
__LL4619: ;
    char arg_skipped;
    if (obj_skipped == NULL) {
        arg_skipped = 2;
    } else if (unlikely(!PyBool_Check(obj_skipped))) {
        CPy_TypeError("bool", obj_skipped); goto fail;
    } else
        arg_skipped = obj_skipped == Py_True;
    char retval = CPyDef_partially_defined___BranchState_____init__(arg_self, arg_must_be_defined, arg_may_be_defined, arg_skipped);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "__init__", 58, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___BranchState___copy(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___partially_defined___BranchStateObject *)cpy_r_self)->_must_be_defined;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PySet_New(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 75, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypy___partially_defined___BranchStateObject *)cpy_r_self)->_may_be_defined;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = PySet_New(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 76, CPyStatic_partially_defined___globals);
        goto CPyL5;
    }
    cpy_r_r4 = ((mypy___partially_defined___BranchStateObject *)cpy_r_self)->_skipped;
    cpy_r_r5 = CPyDef_partially_defined___BranchState(cpy_r_r1, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 74, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_partially_defined___BranchState___copy(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":copy", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___BranchState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.BranchState", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___BranchState___copy(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "copy", 73, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___BranchStatement_____init__(PyObject *cpy_r_self, PyObject *cpy_r_initial_state) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    CPyPtr cpy_r_r16;
    char cpy_r_r17;
    if (cpy_r_initial_state != NULL) goto CPyL10;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_initial_state = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_initial_state == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL11;
    } else
        goto CPyL5;
CPyL3: ;
    cpy_r_r3 = NULL;
    cpy_r_r4 = NULL;
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_partially_defined___BranchState(cpy_r_r3, cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 84, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_initial_state = cpy_r_r6;
CPyL5: ;
    if (likely(cpy_r_initial_state != Py_None))
        cpy_r_r7 = cpy_r_initial_state;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "__init__", 85, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_initial_state);
        goto CPyL9;
    }
    ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_initial_state = cpy_r_r7;
    cpy_r_r8 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_initial_state;
    cpy_r_r9 = ((mypy___partially_defined___BranchStateObject *)cpy_r_r8)->_must_be_defined;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_initial_state;
    cpy_r_r11 = ((mypy___partially_defined___BranchStateObject *)cpy_r_r10)->_may_be_defined;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = 2;
    cpy_r_r13 = CPyDef_partially_defined___BranchState(cpy_r_r9, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 87, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_r14 = PyList_New(1);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 86, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
    cpy_r_r15 = (CPyPtr)&((PyListObject *)cpy_r_r14)->ob_item;
    cpy_r_r16 = *(CPyPtr *)cpy_r_r15;
    *(PyObject * *)cpy_r_r16 = cpy_r_r13;
    ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches = cpy_r_r14;
    return 1;
CPyL9: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL10: ;
    CPy_INCREF(cpy_r_initial_state);
    goto CPyL2;
CPyL11: ;
    CPy_DECREF(cpy_r_initial_state);
    goto CPyL3;
CPyL12: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL9;
}

PyObject *CPyPy_partially_defined___BranchStatement_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"initial_state", 0};
    PyObject *obj_initial_state = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "|O", "__init__", kwlist, &obj_initial_state)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___BranchStatement))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.BranchStatement", obj_self); 
        goto fail;
    }
    PyObject *arg_initial_state;
    if (obj_initial_state == NULL) {
        arg_initial_state = NULL;
        goto __LL4620;
    }
    if (Py_TYPE(obj_initial_state) == CPyType_partially_defined___BranchState)
        arg_initial_state = obj_initial_state;
    else {
        arg_initial_state = NULL;
    }
    if (arg_initial_state != NULL) goto __LL4620;
    if (obj_initial_state == Py_None)
        arg_initial_state = obj_initial_state;
    else {
        arg_initial_state = NULL;
    }
    if (arg_initial_state != NULL) goto __LL4620;
    CPy_TypeError("mypy.partially_defined.BranchState or None", obj_initial_state); 
    goto fail;
__LL4620: ;
    char retval = CPyDef_partially_defined___BranchStatement_____init__(arg_self, arg_initial_state);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "__init__", 82, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___BranchStatement___copy(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_b;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_initial_state;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_partially_defined___BranchStatement(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 94, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_result = cpy_r_r1;
    cpy_r_r2 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = PyList_New(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 95, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    cpy_r_r6 = 0;
CPyL3: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL11;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r6);
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_partially_defined___BranchState))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "copy", 95, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r11);
        goto CPyL12;
    }
    cpy_r_b = cpy_r_r12;
    cpy_r_r13 = CPyDef_partially_defined___BranchState___copy(cpy_r_b);
    CPy_DECREF(cpy_r_b);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 95, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
    cpy_r_r14 = CPyList_SetItemUnsafe(cpy_r_r5, cpy_r_r6, cpy_r_r13);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 95, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
    cpy_r_r15 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r15;
    goto CPyL3;
CPyL8: ;
    CPy_DECREF(((mypy___partially_defined___BranchStatementObject *)cpy_r_result)->_branches);
    ((mypy___partially_defined___BranchStatementObject *)cpy_r_result)->_branches = cpy_r_r5;
    return cpy_r_result;
CPyL9: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL10: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL9;
}

PyObject *CPyPy_partially_defined___BranchStatement___copy(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":copy", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___BranchStatement))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.BranchStatement", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___BranchStatement___copy(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "copy", 93, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___BranchStatement___next_branch(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_initial_state;
    cpy_r_r2 = ((mypy___partially_defined___BranchStateObject *)cpy_r_r1)->_must_be_defined;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_initial_state;
    cpy_r_r4 = ((mypy___partially_defined___BranchStateObject *)cpy_r_r3)->_may_be_defined;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_partially_defined___BranchState(cpy_r_r2, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "next_branch", 100, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
    cpy_r_r7 = PyList_Append(cpy_r_r0, cpy_r_r6);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/partially_defined.py", "next_branch", 99, CPyStatic_partially_defined___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_partially_defined___BranchStatement___next_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":next_branch", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___BranchStatement))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.BranchStatement", obj_self); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___BranchStatement___next_branch(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "next_branch", 98, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___BranchStatement___record_definition(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)0;
    if (cpy_r_r4) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_definition", 107, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r6 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r7 = CPyList_GetItemShortBorrow(cpy_r_r6, -2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_definition", 108, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_partially_defined___BranchState))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "record_definition", 108, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r7);
        goto CPyL10;
    }
    cpy_r_r9 = ((mypy___partially_defined___BranchStateObject *)cpy_r_r8)->_must_be_defined;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = PySet_Add(cpy_r_r9, cpy_r_name);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_definition", 108, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    cpy_r_r12 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r13 = CPyList_GetItemShortBorrow(cpy_r_r12, -2);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_definition", 109, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_partially_defined___BranchState))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "record_definition", 109, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r13);
        goto CPyL10;
    }
    cpy_r_r15 = ((mypy___partially_defined___BranchStateObject *)cpy_r_r14)->_may_be_defined;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = PySet_Discard(cpy_r_r15, cpy_r_name);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_definition", 109, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
}

PyObject *CPyPy_partially_defined___BranchStatement___record_definition(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:record_definition", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___BranchStatement))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.BranchStatement", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___BranchStatement___record_definition(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "record_definition", 106, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___BranchStatement___delete_var(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)0;
    if (cpy_r_r4) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/partially_defined.py", "delete_var", 112, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r6 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r7 = CPyList_GetItemShortBorrow(cpy_r_r6, -2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "delete_var", 113, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_partially_defined___BranchState))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "delete_var", 113, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r7);
        goto CPyL10;
    }
    cpy_r_r9 = ((mypy___partially_defined___BranchStateObject *)cpy_r_r8)->_must_be_defined;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = PySet_Discard(cpy_r_r9, cpy_r_name);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/partially_defined.py", "delete_var", 113, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    cpy_r_r12 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r13 = CPyList_GetItemShortBorrow(cpy_r_r12, -2);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "delete_var", 114, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_partially_defined___BranchState))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "delete_var", 114, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r13);
        goto CPyL10;
    }
    cpy_r_r15 = ((mypy___partially_defined___BranchStateObject *)cpy_r_r14)->_may_be_defined;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = PySet_Discard(cpy_r_r15, cpy_r_name);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/partially_defined.py", "delete_var", 114, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
}

PyObject *CPyPy_partially_defined___BranchStatement___delete_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:delete_var", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___BranchStatement))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.BranchStatement", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___BranchStatement___delete_var(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "delete_var", 111, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___BranchStatement___record_nested_branch(PyObject *cpy_r_self, PyObject *cpy_r_state) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_current_branch;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)0;
    if (cpy_r_r4) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_nested_branch", 117, CPyStatic_partially_defined___globals);
        goto CPyL11;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r6 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r7 = CPyList_GetItemShort(cpy_r_r6, -2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_nested_branch", 118, CPyStatic_partially_defined___globals);
        goto CPyL11;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_partially_defined___BranchState))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "record_nested_branch", 118, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r7);
        goto CPyL11;
    }
    cpy_r_current_branch = cpy_r_r8;
    cpy_r_r9 = ((mypy___partially_defined___BranchStateObject *)cpy_r_state)->_skipped;
    if (!cpy_r_r9) goto CPyL7;
CPyL6: ;
    ((mypy___partially_defined___BranchStateObject *)cpy_r_current_branch)->_skipped = 1;
    CPy_DECREF(cpy_r_current_branch);
    return 1;
CPyL7: ;
    cpy_r_r11 = ((mypy___partially_defined___BranchStateObject *)cpy_r_current_branch)->_must_be_defined;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = ((mypy___partially_defined___BranchStateObject *)cpy_r_state)->_must_be_defined;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = _PySet_Update(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_nested_branch", 122, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
    cpy_r_r15 = ((mypy___partially_defined___BranchStateObject *)cpy_r_current_branch)->_may_be_defined;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = ((mypy___partially_defined___BranchStateObject *)cpy_r_state)->_may_be_defined;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = _PySet_Update(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_nested_branch", 123, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
    cpy_r_r19 = ((mypy___partially_defined___BranchStateObject *)cpy_r_current_branch)->_may_be_defined;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = ((mypy___partially_defined___BranchStateObject *)cpy_r_current_branch)->_must_be_defined;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_current_branch);
    cpy_r_r21 = CPyStatics[4314]; /* 'difference_update' */
    PyObject *cpy_r_r22[2] = {cpy_r_r19, cpy_r_r20};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = PyObject_VectorcallMethod(cpy_r_r21, cpy_r_r23, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_nested_branch", 124, CPyStatic_partially_defined___globals);
        goto CPyL13;
    } else
        goto CPyL14;
CPyL10: ;
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r20);
    return 1;
CPyL11: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL12: ;
    CPy_DecRef(cpy_r_current_branch);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    goto CPyL11;
CPyL14: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL10;
}

PyObject *CPyPy_partially_defined___BranchStatement___record_nested_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"state", 0};
    static CPyArg_Parser parser = {"O:record_nested_branch", kwlist, 0};
    PyObject *obj_state;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_state)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___BranchStatement))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.BranchStatement", obj_self); 
        goto fail;
    }
    PyObject *arg_state;
    if (likely(Py_TYPE(obj_state) == CPyType_partially_defined___BranchState))
        arg_state = obj_state;
    else {
        CPy_TypeError("mypy.partially_defined.BranchState", obj_state); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___BranchStatement___record_nested_branch(arg_self, arg_state);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "record_nested_branch", 116, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___BranchStatement___skip_branch(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)0;
    if (cpy_r_r4) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/partially_defined.py", "skip_branch", 127, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r6 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r7 = CPyList_GetItemShortBorrow(cpy_r_r6, -2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "skip_branch", 128, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_partially_defined___BranchState))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "skip_branch", 128, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r7);
        goto CPyL6;
    }
    ((mypy___partially_defined___BranchStateObject *)cpy_r_r8)->_skipped = 1;
    return 1;
CPyL6: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
}

PyObject *CPyPy_partially_defined___BranchStatement___skip_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":skip_branch", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___BranchStatement))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.BranchStatement", obj_self); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___BranchStatement___skip_branch(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "skip_branch", 126, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___BranchStatement___is_possibly_undefined(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)0;
    if (cpy_r_r4) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_possibly_undefined", 131, CPyStatic_partially_defined___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r6 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r7 = CPyList_GetItemShortBorrow(cpy_r_r6, -2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_possibly_undefined", 132, CPyStatic_partially_defined___globals);
        goto CPyL7;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_partially_defined___BranchState))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "is_possibly_undefined", 132, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r7);
        goto CPyL7;
    }
    cpy_r_r9 = ((mypy___partially_defined___BranchStateObject *)cpy_r_r8)->_may_be_defined;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = PySet_Contains(cpy_r_r9, cpy_r_name);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_possibly_undefined", 132, CPyStatic_partially_defined___globals);
        goto CPyL7;
    }
    cpy_r_r12 = cpy_r_r10;
    return cpy_r_r12;
CPyL7: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}

PyObject *CPyPy_partially_defined___BranchStatement___is_possibly_undefined(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:is_possibly_undefined", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___BranchStatement))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.BranchStatement", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___BranchStatement___is_possibly_undefined(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "is_possibly_undefined", 130, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___BranchStatement___is_undefined(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_branch;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)0;
    if (cpy_r_r4) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_undefined", 135, CPyStatic_partially_defined___globals);
        goto CPyL11;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r6 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r7 = CPyList_GetItemShort(cpy_r_r6, -2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_undefined", 136, CPyStatic_partially_defined___globals);
        goto CPyL11;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_partially_defined___BranchState))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "is_undefined", 136, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r7);
        goto CPyL11;
    }
    cpy_r_branch = cpy_r_r8;
    cpy_r_r9 = ((mypy___partially_defined___BranchStateObject *)cpy_r_branch)->_may_be_defined;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = PySet_Contains(cpy_r_r9, cpy_r_name);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_undefined", 137, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
    cpy_r_r12 = cpy_r_r10;
    cpy_r_r13 = cpy_r_r12 ^ 1;
    if (cpy_r_r13) {
        goto CPyL8;
    } else
        goto CPyL13;
CPyL7: ;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL10;
CPyL8: ;
    cpy_r_r15 = ((mypy___partially_defined___BranchStateObject *)cpy_r_branch)->_must_be_defined;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_branch);
    cpy_r_r16 = PySet_Contains(cpy_r_r15, cpy_r_name);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_undefined", 137, CPyStatic_partially_defined___globals);
        goto CPyL11;
    }
    cpy_r_r18 = cpy_r_r16;
    cpy_r_r19 = cpy_r_r18 ^ 1;
    cpy_r_r14 = cpy_r_r19;
CPyL10: ;
    return cpy_r_r14;
CPyL11: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL12: ;
    CPy_DecRef(cpy_r_branch);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_branch);
    goto CPyL7;
}

PyObject *CPyPy_partially_defined___BranchStatement___is_undefined(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:is_undefined", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___BranchStatement))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.BranchStatement", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___BranchStatement___is_undefined(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "is_undefined", 134, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___BranchStatement___is_defined_in_a_branch(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_b;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)0;
    if (cpy_r_r4) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_defined_in_a_branch", 140, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r6 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = 0;
CPyL4: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL14;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r6, cpy_r_r7);
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_partially_defined___BranchState))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "is_defined_in_a_branch", 141, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r12);
        goto CPyL15;
    }
    cpy_r_b = cpy_r_r13;
    cpy_r_r14 = ((mypy___partially_defined___BranchStateObject *)cpy_r_b)->_must_be_defined;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = PySet_Contains(cpy_r_r14, cpy_r_name);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_defined_in_a_branch", 142, CPyStatic_partially_defined___globals);
        goto CPyL16;
    }
    cpy_r_r17 = cpy_r_r15;
    if (cpy_r_r17) goto CPyL17;
    cpy_r_r18 = ((mypy___partially_defined___BranchStateObject *)cpy_r_b)->_may_be_defined;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_b);
    cpy_r_r19 = PySet_Contains(cpy_r_r18, cpy_r_name);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_defined_in_a_branch", 142, CPyStatic_partially_defined___globals);
        goto CPyL15;
    }
    cpy_r_r21 = cpy_r_r19;
    if (cpy_r_r21) {
        goto CPyL18;
    } else
        goto CPyL11;
CPyL10: ;
    return 1;
CPyL11: ;
    cpy_r_r22 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r22;
    goto CPyL4;
CPyL12: ;
    return 0;
CPyL13: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL14: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_b);
    goto CPyL13;
CPyL17: ;
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_b);
    goto CPyL10;
CPyL18: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL10;
}

PyObject *CPyPy_partially_defined___BranchStatement___is_defined_in_a_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:is_defined_in_a_branch", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___BranchStatement))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.BranchStatement", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___BranchStatement___is_defined_in_a_branch(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "is_defined_in_a_branch", 139, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___BranchStatement___done(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_all_vars;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_b;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_b_2;
    char cpy_r_r25;
    char cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_non_skipped_branches;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_must_be_defined;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_may_be_defined;
    CPyPtr cpy_r_r58;
    int64_t cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "done", 150, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    cpy_r_all_vars = cpy_r_r0;
    cpy_r_r1 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL32;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_partially_defined___BranchState))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "done", 151, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r7);
        goto CPyL33;
    }
    cpy_r_b = cpy_r_r8;
    cpy_r_r9 = ((mypy___partially_defined___BranchStateObject *)cpy_r_b)->_may_be_defined;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = _PySet_Update(cpy_r_all_vars, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/partially_defined.py", "done", 152, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    cpy_r_r12 = ((mypy___partially_defined___BranchStateObject *)cpy_r_b)->_must_be_defined;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_b);
    cpy_r_r13 = _PySet_Update(cpy_r_all_vars, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/partially_defined.py", "done", 153, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    cpy_r_r15 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r15;
    goto CPyL2;
CPyL7: ;
    cpy_r_r16 = PyList_New(0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "done", 155, CPyStatic_partially_defined___globals);
        goto CPyL35;
    }
    cpy_r_r17 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_self)->_branches;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = 0;
CPyL9: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL36;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_r17, cpy_r_r18);
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_partially_defined___BranchState))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "done", 155, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r23);
        goto CPyL37;
    }
    cpy_r_b_2 = cpy_r_r24;
    cpy_r_r25 = ((mypy___partially_defined___BranchStateObject *)cpy_r_b_2)->_skipped;
    cpy_r_r26 = cpy_r_r25 ^ 1;
    if (!cpy_r_r26) goto CPyL38;
    cpy_r_r27 = PyList_Append(cpy_r_r16, cpy_r_b_2);
    CPy_DECREF(cpy_r_b_2);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/partially_defined.py", "done", 155, CPyStatic_partially_defined___globals);
        goto CPyL37;
    }
CPyL13: ;
    cpy_r_r29 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r29;
    goto CPyL9;
CPyL14: ;
    cpy_r_non_skipped_branches = cpy_r_r16;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_non_skipped_branches)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = cpy_r_r32 != 0;
    if (!cpy_r_r33) goto CPyL25;
    cpy_r_r34 = CPyList_GetItemShortBorrow(cpy_r_non_skipped_branches, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "done", 157, CPyStatic_partially_defined___globals);
        goto CPyL39;
    }
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_partially_defined___BranchState))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "done", 157, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r34);
        goto CPyL39;
    }
    cpy_r_r36 = ((mypy___partially_defined___BranchStateObject *)cpy_r_r35)->_must_be_defined;
    CPy_INCREF(cpy_r_r36);
    cpy_r_must_be_defined = cpy_r_r36;
    cpy_r_r37 = CPyList_GetSlice(cpy_r_non_skipped_branches, 2, 9223372036854775806LL);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "done", 158, CPyStatic_partially_defined___globals);
        goto CPyL40;
    }
    if (likely(PyList_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "done", 158, CPyStatic_partially_defined___globals, "list", cpy_r_r37);
        goto CPyL40;
    }
    cpy_r_r39 = 0;
CPyL20: ;
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_r38)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 << 1;
    cpy_r_r43 = (Py_ssize_t)cpy_r_r39 < (Py_ssize_t)cpy_r_r42;
    if (!cpy_r_r43) goto CPyL41;
    cpy_r_r44 = CPyList_GetItemUnsafe(cpy_r_r38, cpy_r_r39);
    if (likely(Py_TYPE(cpy_r_r44) == CPyType_partially_defined___BranchState))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "done", 158, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r44);
        goto CPyL42;
    }
    cpy_r_b = cpy_r_r45;
    cpy_r_r46 = ((mypy___partially_defined___BranchStateObject *)cpy_r_b)->_must_be_defined;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_b);
    cpy_r_r47 = CPyStatics[4315]; /* 'intersection_update' */
    PyObject *cpy_r_r48[2] = {cpy_r_must_be_defined, cpy_r_r46};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = PyObject_VectorcallMethod(cpy_r_r47, cpy_r_r49, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "done", 159, CPyStatic_partially_defined___globals);
        goto CPyL43;
    } else
        goto CPyL44;
CPyL23: ;
    CPy_DECREF(cpy_r_r46);
    cpy_r_r51 = cpy_r_r39 + 2;
    cpy_r_r39 = cpy_r_r51;
    goto CPyL20;
CPyL25: ;
    cpy_r_r52 = PySet_New(NULL);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "done", 161, CPyStatic_partially_defined___globals);
        goto CPyL39;
    }
    cpy_r_must_be_defined = cpy_r_r52;
CPyL27: ;
    cpy_r_r53 = CPyStatics[4316]; /* 'difference' */
    PyObject *cpy_r_r54[2] = {cpy_r_all_vars, cpy_r_must_be_defined};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = PyObject_VectorcallMethod(cpy_r_r53, cpy_r_r55, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "done", 164, CPyStatic_partially_defined___globals);
        goto CPyL40;
    }
    CPy_DECREF(cpy_r_all_vars);
    if (likely(PySet_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "done", 164, CPyStatic_partially_defined___globals, "set", cpy_r_r56);
        goto CPyL45;
    }
    cpy_r_may_be_defined = cpy_r_r57;
    cpy_r_r58 = (CPyPtr)&((PyVarObject *)cpy_r_non_skipped_branches)->ob_size;
    cpy_r_r59 = *(int64_t *)cpy_r_r58;
    CPy_DECREF(cpy_r_non_skipped_branches);
    cpy_r_r60 = cpy_r_r59 << 1;
    cpy_r_r61 = cpy_r_r60 == 0;
    cpy_r_r62 = CPyDef_partially_defined___BranchState(cpy_r_must_be_defined, cpy_r_may_be_defined, cpy_r_r61);
    CPy_DECREF(cpy_r_must_be_defined);
    CPy_DECREF(cpy_r_may_be_defined);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "done", 165, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    return cpy_r_r62;
CPyL31: ;
    cpy_r_r63 = NULL;
    return cpy_r_r63;
CPyL32: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL33: ;
    CPy_DecRef(cpy_r_all_vars);
    CPy_DecRef(cpy_r_r1);
    goto CPyL31;
CPyL34: ;
    CPy_DecRef(cpy_r_all_vars);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_b);
    goto CPyL31;
CPyL35: ;
    CPy_DecRef(cpy_r_all_vars);
    goto CPyL31;
CPyL36: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL14;
CPyL37: ;
    CPy_DecRef(cpy_r_all_vars);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    goto CPyL31;
CPyL38: ;
    CPy_DECREF(cpy_r_b_2);
    goto CPyL13;
CPyL39: ;
    CPy_DecRef(cpy_r_all_vars);
    CPy_DecRef(cpy_r_non_skipped_branches);
    goto CPyL31;
CPyL40: ;
    CPy_DecRef(cpy_r_all_vars);
    CPy_DecRef(cpy_r_non_skipped_branches);
    CPy_DecRef(cpy_r_must_be_defined);
    goto CPyL31;
CPyL41: ;
    CPy_DECREF(cpy_r_r38);
    goto CPyL27;
CPyL42: ;
    CPy_DecRef(cpy_r_all_vars);
    CPy_DecRef(cpy_r_non_skipped_branches);
    CPy_DecRef(cpy_r_must_be_defined);
    CPy_DecRef(cpy_r_r38);
    goto CPyL31;
CPyL43: ;
    CPy_DecRef(cpy_r_all_vars);
    CPy_DecRef(cpy_r_non_skipped_branches);
    CPy_DecRef(cpy_r_must_be_defined);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    goto CPyL31;
CPyL44: ;
    CPy_DECREF(cpy_r_r50);
    goto CPyL23;
CPyL45: ;
    CPy_DecRef(cpy_r_non_skipped_branches);
    CPy_DecRef(cpy_r_must_be_defined);
    goto CPyL31;
}

PyObject *CPyPy_partially_defined___BranchStatement___done(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":done", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___BranchStatement))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.BranchStatement", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___BranchStatement___done(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "done", 146, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___Scope_____init__(PyObject *cpy_r_self, PyObject *cpy_r_stmts, PyObject *cpy_r_scope_type) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_stmts);
    ((mypy___partially_defined___ScopeObject *)cpy_r_self)->_branch_stmts = cpy_r_stmts;
    CPy_INCREF(cpy_r_scope_type);
    ((mypy___partially_defined___ScopeObject *)cpy_r_self)->_scope_type = cpy_r_scope_type;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 183, CPyStatic_partially_defined___globals);
        goto CPyL2;
    }
    ((mypy___partially_defined___ScopeObject *)cpy_r_self)->_undefined_refs = cpy_r_r0;
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_partially_defined___Scope_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmts", "scope_type", 0};
    PyObject *obj_stmts;
    PyObject *obj_scope_type;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_stmts, &obj_scope_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.Scope", obj_self); 
        goto fail;
    }
    PyObject *arg_stmts;
    if (likely(PyList_Check(obj_stmts)))
        arg_stmts = obj_stmts;
    else {
        CPy_TypeError("list", obj_stmts); 
        goto fail;
    }
    PyObject *arg_scope_type;
    if (likely(Py_TYPE(obj_scope_type) == CPyType_partially_defined___ScopeType))
        arg_scope_type = obj_scope_type;
    else {
        CPy_TypeError("mypy.partially_defined.ScopeType", obj_scope_type); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___Scope_____init__(arg_self, arg_stmts, arg_scope_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "__init__", 180, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___Scope___copy(PyObject *cpy_r_self) {
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
    PyObject *cpy_r_s;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = ((mypy___partially_defined___ScopeObject *)cpy_r_self)->_branch_stmts;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 186, CPyStatic_partially_defined___globals);
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
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_partially_defined___BranchStatement))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "copy", 186, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchStatement", cpy_r_r9);
        goto CPyL13;
    }
    cpy_r_s = cpy_r_r10;
    cpy_r_r11 = CPyDef_partially_defined___BranchStatement___copy(cpy_r_s);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 186, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    cpy_r_r12 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 186, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    cpy_r_r13 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r13;
    goto CPyL2;
CPyL7: ;
    cpy_r_r14 = ((mypy___partially_defined___ScopeObject *)cpy_r_self)->_scope_type;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyDef_partially_defined___Scope(cpy_r_r3, cpy_r_r14);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 186, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    cpy_r_result = cpy_r_r15;
    cpy_r_r16 = ((mypy___partially_defined___ScopeObject *)cpy_r_self)->_undefined_refs;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDict_Copy(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 187, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    CPy_DECREF(((mypy___partially_defined___ScopeObject *)cpy_r_result)->_undefined_refs);
    ((mypy___partially_defined___ScopeObject *)cpy_r_result)->_undefined_refs = cpy_r_r17;
    return cpy_r_result;
CPyL10: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL10;
}

PyObject *CPyPy_partially_defined___Scope___copy(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":copy", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.Scope", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___Scope___copy(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "copy", 185, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___Scope___record_undefined_ref(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___partially_defined___ScopeObject *)cpy_r_self)->_undefined_refs;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyDict_Contains(cpy_r_r1, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_undefined_ref", 191, CPyStatic_partially_defined___globals);
        goto CPyL8;
    }
    cpy_r_r4 = cpy_r_r2;
    cpy_r_r5 = cpy_r_r4 ^ 1;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = PySet_New(NULL);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_undefined_ref", 192, CPyStatic_partially_defined___globals);
        goto CPyL8;
    }
    cpy_r_r7 = ((mypy___partially_defined___ScopeObject *)cpy_r_self)->_undefined_refs;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDict_SetItem(cpy_r_r7, cpy_r_r8, cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_undefined_ref", 192, CPyStatic_partially_defined___globals);
        goto CPyL8;
    }
CPyL4: ;
    cpy_r_r11 = ((mypy___partially_defined___ScopeObject *)cpy_r_self)->_undefined_refs;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_undefined_ref", 193, CPyStatic_partially_defined___globals);
        goto CPyL8;
    }
    if (likely(PySet_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "record_undefined_ref", 193, CPyStatic_partially_defined___globals, "set", cpy_r_r13);
        goto CPyL8;
    }
    cpy_r_r15 = PySet_Add(cpy_r_r14, cpy_r_o);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_undefined_ref", 193, CPyStatic_partially_defined___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
}

PyObject *CPyPy_partially_defined___Scope___record_undefined_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:record_undefined_ref", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.Scope", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___Scope___record_undefined_ref(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "record_undefined_ref", 190, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___Scope___pop_undefined_ref(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___partially_defined___ScopeObject *)cpy_r_self)->_undefined_refs;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "pop_undefined_ref", 196, CPyStatic_partially_defined___globals);
        goto CPyL5;
    }
    cpy_r_r2 = CPyStatics[795]; /* 'pop' */
    PyObject *cpy_r_r3[3] = {cpy_r_r0, cpy_r_name, cpy_r_r1};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "pop_undefined_ref", 196, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (likely(PySet_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "pop_undefined_ref", 196, CPyStatic_partially_defined___globals, "set", cpy_r_r5);
        goto CPyL4;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_partially_defined___Scope___pop_undefined_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:pop_undefined_ref", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.Scope", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___Scope___pop_undefined_ref(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "pop_undefined_ref", 195, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___DefinedVariableTracker_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = NULL;
    cpy_r_r1 = CPyDef_partially_defined___BranchStatement(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 204, CPyStatic_partially_defined___globals);
        goto CPyL8;
    }
    cpy_r_r2 = PyList_New(1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 204, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r1;
    cpy_r_r5 = CPyStatic_partially_defined___ScopeType___Global;
    if (unlikely(cpy_r_r5 == NULL)) {
        goto CPyL10;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"Global\" was not set");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 204, CPyStatic_partially_defined___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r7 = CPyDef_partially_defined___Scope(cpy_r_r2, cpy_r_r5);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 204, CPyStatic_partially_defined___globals);
        goto CPyL8;
    }
    cpy_r_r8 = PyList_New(1);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 204, CPyStatic_partially_defined___globals);
        goto CPyL11;
    }
    cpy_r_r9 = (CPyPtr)&((PyListObject *)cpy_r_r8)->ob_item;
    cpy_r_r10 = *(CPyPtr *)cpy_r_r9;
    *(PyObject * *)cpy_r_r10 = cpy_r_r7;
    ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_scopes = cpy_r_r8;
    ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_disable_branch_skip = 0;
    return 1;
CPyL8: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL3;
CPyL11: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL8;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___DefinedVariableTracker_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "__init__", 202, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___DefinedVariableTracker___copy(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
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
    PyObject *cpy_r_s;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = CPyDef_partially_defined___DefinedVariableTracker();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 210, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_scopes;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 211, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    cpy_r_r5 = 0;
CPyL3: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL11;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_partially_defined___Scope))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "copy", 211, CPyStatic_partially_defined___globals, "mypy.partially_defined.Scope", cpy_r_r10);
        goto CPyL12;
    }
    cpy_r_s = cpy_r_r11;
    cpy_r_r12 = CPyDef_partially_defined___Scope___copy(cpy_r_s);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 211, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
    cpy_r_r13 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r12);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/partially_defined.py", "copy", 211, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
    cpy_r_r14 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r14;
    goto CPyL3;
CPyL8: ;
    CPy_DECREF(((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_result)->_scopes);
    ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_result)->_scopes = cpy_r_r4;
    cpy_r_r16 = ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_disable_branch_skip;
    ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_result)->_disable_branch_skip = cpy_r_r16;
    return cpy_r_result;
CPyL9: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL10: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL9;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___copy(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":copy", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___DefinedVariableTracker___copy(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "copy", 209, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___DefinedVariableTracker____scope(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_scopes;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)0;
    if (cpy_r_r4) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/partially_defined.py", "_scope", 216, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r6 = ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_scopes;
    cpy_r_r7 = CPyList_GetItemShort(cpy_r_r6, -2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "_scope", 217, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_partially_defined___Scope))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "_scope", 217, CPyStatic_partially_defined___globals, "mypy.partially_defined.Scope", cpy_r_r7);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker____scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":_scope", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___DefinedVariableTracker____scope(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "_scope", 215, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___DefinedVariableTracker___enter_scope(PyObject *cpy_r_self, PyObject *cpy_r_scope_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_initial_state;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
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
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "enter_scope", 220, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    cpy_r_r1 = ((mypy___partially_defined___ScopeObject *)cpy_r_r0)->_branch_stmts;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r4 > (Py_ssize_t)0;
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r5) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/partially_defined.py", "enter_scope", 220, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    cpy_r_initial_state = cpy_r_r7;
    cpy_r_r8 = CPyStatic_partially_defined___ScopeType___Generator;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL20;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"Generator\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/partially_defined.py", "enter_scope", 222, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r10 = cpy_r_scope_type == cpy_r_r8;
    if (cpy_r_r10) {
        goto CPyL21;
    } else
        goto CPyL14;
CPyL8: ;
    cpy_r_r11 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "enter_scope", 224, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    cpy_r_r12 = ((mypy___partially_defined___ScopeObject *)cpy_r_r11)->_branch_stmts;
    cpy_r_r13 = CPyList_GetItemShortBorrow(cpy_r_r12, -2);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "enter_scope", 224, CPyStatic_partially_defined___globals);
        goto CPyL22;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_partially_defined___BranchStatement))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "enter_scope", 224, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchStatement", cpy_r_r13);
        goto CPyL22;
    }
    cpy_r_r15 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_r14)->_branches;
    cpy_r_r16 = CPyList_GetItemShort(cpy_r_r15, -2);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "enter_scope", 224, CPyStatic_partially_defined___globals);
        goto CPyL22;
    }
    if (likely(Py_TYPE(cpy_r_r16) == CPyType_partially_defined___BranchState))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "enter_scope", 224, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r16);
        goto CPyL22;
    }
    CPy_DECREF(cpy_r_r11);
    cpy_r_initial_state = cpy_r_r17;
CPyL14: ;
    cpy_r_r18 = ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_scopes;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_partially_defined___BranchStatement(cpy_r_initial_state);
    CPy_DECREF(cpy_r_initial_state);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "enter_scope", 225, CPyStatic_partially_defined___globals);
        goto CPyL23;
    }
    cpy_r_r20 = PyList_New(1);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "enter_scope", 225, CPyStatic_partially_defined___globals);
        goto CPyL24;
    }
    cpy_r_r21 = (CPyPtr)&((PyListObject *)cpy_r_r20)->ob_item;
    cpy_r_r22 = *(CPyPtr *)cpy_r_r21;
    *(PyObject * *)cpy_r_r22 = cpy_r_r19;
    cpy_r_r23 = CPyDef_partially_defined___Scope(cpy_r_r20, cpy_r_scope_type);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "enter_scope", 225, CPyStatic_partially_defined___globals);
        goto CPyL23;
    }
    cpy_r_r24 = PyList_Append(cpy_r_r18, cpy_r_r23);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/partially_defined.py", "enter_scope", 225, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    return 1;
CPyL19: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL20: ;
    CPy_DecRef(cpy_r_initial_state);
    goto CPyL5;
CPyL21: ;
    CPy_DECREF(cpy_r_initial_state);
    goto CPyL8;
CPyL22: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL19;
CPyL23: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL19;
CPyL24: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL19;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___enter_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"scope_type", 0};
    static CPyArg_Parser parser = {"O:enter_scope", kwlist, 0};
    PyObject *obj_scope_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_scope_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    PyObject *arg_scope_type;
    if (likely(Py_TYPE(obj_scope_type) == CPyType_partially_defined___ScopeType))
        arg_scope_type = obj_scope_type;
    else {
        CPy_TypeError("mypy.partially_defined.ScopeType", obj_scope_type); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___DefinedVariableTracker___enter_scope(arg_self, arg_scope_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "enter_scope", 219, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___DefinedVariableTracker___exit_scope(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_scopes;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyList_PopLast(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "exit_scope", 228, CPyStatic_partially_defined___globals);
        goto CPyL3;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_partially_defined___Scope))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeError("mypy.partially_defined.Scope", cpy_r_r1); 
        cpy_r_r2 = NULL;
    }
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "exit_scope", 228, CPyStatic_partially_defined___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
CPyL4: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL2;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___exit_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":exit_scope", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___DefinedVariableTracker___exit_scope(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "exit_scope", 227, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___DefinedVariableTracker___in_scope(PyObject *cpy_r_self, PyObject *cpy_r_scope_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "in_scope", 231, CPyStatic_partially_defined___globals);
        goto CPyL2;
    }
    cpy_r_r1 = ((mypy___partially_defined___ScopeObject *)cpy_r_r0)->_scope_type;
    CPy_INCREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 == cpy_r_scope_type;
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___in_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"scope_type", 0};
    static CPyArg_Parser parser = {"O:in_scope", kwlist, 0};
    PyObject *obj_scope_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_scope_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    PyObject *arg_scope_type;
    if (likely(Py_TYPE(obj_scope_type) == CPyType_partially_defined___ScopeType))
        arg_scope_type = obj_scope_type;
    else {
        CPy_TypeError("mypy.partially_defined.ScopeType", obj_scope_type); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___DefinedVariableTracker___in_scope(arg_self, arg_scope_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "in_scope", 230, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___DefinedVariableTracker___start_branch_statement(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
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
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "start_branch_statement", 234, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    cpy_r_r1 = ((mypy___partially_defined___ScopeObject *)cpy_r_r0)->_branch_stmts;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r4 > (Py_ssize_t)0;
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r5) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/partially_defined.py", "start_branch_statement", 234, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "start_branch_statement", 235, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    cpy_r_r8 = ((mypy___partially_defined___ScopeObject *)cpy_r_r7)->_branch_stmts;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "start_branch_statement", 236, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    cpy_r_r10 = ((mypy___partially_defined___ScopeObject *)cpy_r_r9)->_branch_stmts;
    cpy_r_r11 = CPyList_GetItemShortBorrow(cpy_r_r10, -2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "start_branch_statement", 236, CPyStatic_partially_defined___globals);
        goto CPyL15;
    }
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_partially_defined___BranchStatement))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "start_branch_statement", 236, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchStatement", cpy_r_r11);
        goto CPyL15;
    }
    cpy_r_r13 = ((mypy___partially_defined___BranchStatementObject *)cpy_r_r12)->_branches;
    cpy_r_r14 = CPyList_GetItemShort(cpy_r_r13, -2);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "start_branch_statement", 236, CPyStatic_partially_defined___globals);
        goto CPyL15;
    }
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_partially_defined___BranchState))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "start_branch_statement", 236, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchState", cpy_r_r14);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_r9);
    cpy_r_r16 = CPyDef_partially_defined___BranchStatement(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "start_branch_statement", 236, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    cpy_r_r17 = PyList_Append(cpy_r_r8, cpy_r_r16);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/partially_defined.py", "start_branch_statement", 235, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL14: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL13;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___start_branch_statement(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":start_branch_statement", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___DefinedVariableTracker___start_branch_statement(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "start_branch_statement", 233, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___DefinedVariableTracker___next_branch(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "next_branch", 240, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_r1 = ((mypy___partially_defined___ScopeObject *)cpy_r_r0)->_branch_stmts;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r4 > (Py_ssize_t)2;
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r5) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/partially_defined.py", "next_branch", 240, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "next_branch", 241, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_r8 = ((mypy___partially_defined___ScopeObject *)cpy_r_r7)->_branch_stmts;
    cpy_r_r9 = CPyList_GetItemShort(cpy_r_r8, -2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "next_branch", 241, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_partially_defined___BranchStatement))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "next_branch", 241, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchStatement", cpy_r_r9);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r7);
    cpy_r_r11 = CPyDef_partially_defined___BranchStatement___next_branch(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "next_branch", 241, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL10: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL9;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___next_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":next_branch", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___DefinedVariableTracker___next_branch(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "next_branch", 239, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___DefinedVariableTracker___end_branch_statement(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "end_branch_statement", 244, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    cpy_r_r1 = ((mypy___partially_defined___ScopeObject *)cpy_r_r0)->_branch_stmts;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r4 > (Py_ssize_t)2;
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r5) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/partially_defined.py", "end_branch_statement", 244, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "end_branch_statement", 245, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    cpy_r_r8 = ((mypy___partially_defined___ScopeObject *)cpy_r_r7)->_branch_stmts;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = CPyList_PopLast(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "end_branch_statement", 245, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_partially_defined___BranchStatement))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "end_branch_statement", 245, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchStatement", cpy_r_r9);
        goto CPyL13;
    }
    cpy_r_r11 = CPyDef_partially_defined___BranchStatement___done(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "end_branch_statement", 245, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    cpy_r_result = cpy_r_r11;
    cpy_r_r12 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "end_branch_statement", 246, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    cpy_r_r13 = ((mypy___partially_defined___ScopeObject *)cpy_r_r12)->_branch_stmts;
    cpy_r_r14 = CPyList_GetItemShort(cpy_r_r13, -2);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "end_branch_statement", 246, CPyStatic_partially_defined___globals);
        goto CPyL15;
    }
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_partially_defined___BranchStatement))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "end_branch_statement", 246, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchStatement", cpy_r_r14);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_r12);
    cpy_r_r16 = CPyDef_partially_defined___BranchStatement___record_nested_branch(cpy_r_r15, cpy_r_result);
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "end_branch_statement", 246, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL14: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r12);
    goto CPyL13;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___end_branch_statement(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":end_branch_statement", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___DefinedVariableTracker___end_branch_statement(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "end_branch_statement", 243, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___DefinedVariableTracker___skip_branch(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "skip_branch", 250, CPyStatic_partially_defined___globals);
        goto CPyL8;
    }
    cpy_r_r1 = ((mypy___partially_defined___ScopeObject *)cpy_r_r0)->_branch_stmts;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r4 > (Py_ssize_t)2;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r5) goto CPyL7;
    cpy_r_r6 = ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_disable_branch_skip;
    if (cpy_r_r6) goto CPyL7;
CPyL3: ;
    cpy_r_r7 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "skip_branch", 251, CPyStatic_partially_defined___globals);
        goto CPyL8;
    }
    cpy_r_r8 = ((mypy___partially_defined___ScopeObject *)cpy_r_r7)->_branch_stmts;
    cpy_r_r9 = CPyList_GetItemShort(cpy_r_r8, -2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "skip_branch", 251, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_partially_defined___BranchStatement))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "skip_branch", 251, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchStatement", cpy_r_r9);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r7);
    cpy_r_r11 = CPyDef_partially_defined___BranchStatement___skip_branch(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "skip_branch", 251, CPyStatic_partially_defined___globals);
        goto CPyL8;
    }
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL9: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL8;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___skip_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":skip_branch", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___DefinedVariableTracker___skip_branch(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "skip_branch", 248, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___DefinedVariableTracker___record_definition(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_scopes;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)0;
    if (cpy_r_r4) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_definition", 254, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r6 = ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_scopes;
    cpy_r_r7 = CPyList_GetItemShortBorrow(cpy_r_r6, -2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_definition", 255, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_partially_defined___Scope))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "record_definition", 255, CPyStatic_partially_defined___globals, "mypy.partially_defined.Scope", cpy_r_r7);
        goto CPyL13;
    }
    cpy_r_r9 = ((mypy___partially_defined___ScopeObject *)cpy_r_r8)->_branch_stmts;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r12 > (Py_ssize_t)0;
    if (cpy_r_r13) goto CPyL8;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_definition", 255, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r15 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_definition", 256, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    cpy_r_r16 = ((mypy___partially_defined___ScopeObject *)cpy_r_r15)->_branch_stmts;
    cpy_r_r17 = CPyList_GetItemShort(cpy_r_r16, -2);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_definition", 256, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_partially_defined___BranchStatement))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "record_definition", 256, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchStatement", cpy_r_r17);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r15);
    cpy_r_r19 = CPyDef_partially_defined___BranchStatement___record_definition(cpy_r_r18, cpy_r_name);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_definition", 256, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL14: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL13;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___record_definition(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:record_definition", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___DefinedVariableTracker___record_definition(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "record_definition", 253, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___DefinedVariableTracker___delete_var(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_scopes;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)0;
    if (cpy_r_r4) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/partially_defined.py", "delete_var", 259, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r6 = ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_scopes;
    cpy_r_r7 = CPyList_GetItemShortBorrow(cpy_r_r6, -2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "delete_var", 260, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_partially_defined___Scope))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "delete_var", 260, CPyStatic_partially_defined___globals, "mypy.partially_defined.Scope", cpy_r_r7);
        goto CPyL13;
    }
    cpy_r_r9 = ((mypy___partially_defined___ScopeObject *)cpy_r_r8)->_branch_stmts;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r12 > (Py_ssize_t)0;
    if (cpy_r_r13) goto CPyL8;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/partially_defined.py", "delete_var", 260, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r15 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "delete_var", 261, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    cpy_r_r16 = ((mypy___partially_defined___ScopeObject *)cpy_r_r15)->_branch_stmts;
    cpy_r_r17 = CPyList_GetItemShort(cpy_r_r16, -2);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "delete_var", 261, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_partially_defined___BranchStatement))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "delete_var", 261, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchStatement", cpy_r_r17);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r15);
    cpy_r_r19 = CPyDef_partially_defined___BranchStatement___delete_var(cpy_r_r18, cpy_r_name);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "delete_var", 261, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL14: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL13;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___delete_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:delete_var", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___DefinedVariableTracker___delete_var(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "delete_var", 258, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___DefinedVariableTracker___record_undefined_ref(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_scopes;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)0;
    if (cpy_r_r4) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_undefined_ref", 265, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r6 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_undefined_ref", 266, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
    cpy_r_r7 = CPyDef_partially_defined___Scope___record_undefined_ref(cpy_r_r6, cpy_r_o);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "record_undefined_ref", 266, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___record_undefined_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:record_undefined_ref", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___DefinedVariableTracker___record_undefined_ref(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "record_undefined_ref", 263, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___DefinedVariableTracker___pop_undefined_ref(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_self)->_scopes;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r3 > (Py_ssize_t)0;
    if (cpy_r_r4) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/partially_defined.py", "pop_undefined_ref", 270, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r6 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "pop_undefined_ref", 271, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
    cpy_r_r7 = CPyDef_partially_defined___Scope___pop_undefined_ref(cpy_r_r6, cpy_r_name);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "pop_undefined_ref", 271, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
    return cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___pop_undefined_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:pop_undefined_ref", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___DefinedVariableTracker___pop_undefined_ref(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "pop_undefined_ref", 268, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___DefinedVariableTracker___is_possibly_undefined(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_possibly_undefined", 274, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_r1 = ((mypy___partially_defined___ScopeObject *)cpy_r_r0)->_branch_stmts;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r4 > (Py_ssize_t)0;
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r5) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_possibly_undefined", 274, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_possibly_undefined", 276, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_r8 = ((mypy___partially_defined___ScopeObject *)cpy_r_r7)->_branch_stmts;
    cpy_r_r9 = CPyList_GetItemShort(cpy_r_r8, -2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_possibly_undefined", 276, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_partially_defined___BranchStatement))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "is_possibly_undefined", 276, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchStatement", cpy_r_r9);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r7);
    cpy_r_r11 = CPyDef_partially_defined___BranchStatement___is_possibly_undefined(cpy_r_r10, cpy_r_name);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_possibly_undefined", 276, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    return cpy_r_r11;
CPyL9: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL10: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL9;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___is_possibly_undefined(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:is_possibly_undefined", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___DefinedVariableTracker___is_possibly_undefined(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "is_possibly_undefined", 273, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___DefinedVariableTracker___is_defined_in_different_branch(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_stmt;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_defined_in_different_branch", 280, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    cpy_r_r1 = ((mypy___partially_defined___ScopeObject *)cpy_r_r0)->_branch_stmts;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r4 > (Py_ssize_t)0;
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r5) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_defined_in_different_branch", 280, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_defined_in_different_branch", 281, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    cpy_r_r8 = ((mypy___partially_defined___ScopeObject *)cpy_r_r7)->_branch_stmts;
    cpy_r_r9 = CPyList_GetItemShort(cpy_r_r8, -2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_defined_in_different_branch", 281, CPyStatic_partially_defined___globals);
        goto CPyL20;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_partially_defined___BranchStatement))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "is_defined_in_different_branch", 281, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchStatement", cpy_r_r9);
        goto CPyL20;
    }
    CPy_DECREF(cpy_r_r7);
    cpy_r_stmt = cpy_r_r10;
    cpy_r_r11 = CPyDef_partially_defined___BranchStatement___is_undefined(cpy_r_stmt, cpy_r_name);
    CPy_DECREF(cpy_r_stmt);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_defined_in_different_branch", 282, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    if (cpy_r_r11) goto CPyL10;
    return 0;
CPyL10: ;
    cpy_r_r12 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_defined_in_different_branch", 284, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    cpy_r_r13 = ((mypy___partially_defined___ScopeObject *)cpy_r_r12)->_branch_stmts;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = 0;
CPyL12: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL21;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r14);
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_partially_defined___BranchStatement))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "is_defined_in_different_branch", 284, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchStatement", cpy_r_r19);
        goto CPyL22;
    }
    cpy_r_stmt = cpy_r_r20;
    cpy_r_r21 = CPyDef_partially_defined___BranchStatement___is_defined_in_a_branch(cpy_r_stmt, cpy_r_name);
    CPy_DECREF(cpy_r_stmt);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_defined_in_different_branch", 285, CPyStatic_partially_defined___globals);
        goto CPyL22;
    }
    if (cpy_r_r21) {
        goto CPyL23;
    } else
        goto CPyL17;
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r22 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r22;
    goto CPyL12;
CPyL18: ;
    return 0;
CPyL19: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL20: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL19;
CPyL21: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL19;
CPyL23: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL16;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___is_defined_in_different_branch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:is_defined_in_different_branch", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___DefinedVariableTracker___is_defined_in_different_branch(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "is_defined_in_different_branch", 278, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___DefinedVariableTracker___is_undefined(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_undefined", 290, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_r1 = ((mypy___partially_defined___ScopeObject *)cpy_r_r0)->_branch_stmts;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r4 > (Py_ssize_t)0;
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r5) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_undefined", 290, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = CPyDef_partially_defined___DefinedVariableTracker____scope(cpy_r_self);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_undefined", 291, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_r8 = ((mypy___partially_defined___ScopeObject *)cpy_r_r7)->_branch_stmts;
    cpy_r_r9 = CPyList_GetItemShort(cpy_r_r8, -2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_undefined", 291, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_partially_defined___BranchStatement))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "is_undefined", 291, CPyStatic_partially_defined___globals, "mypy.partially_defined.BranchStatement", cpy_r_r9);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r7);
    cpy_r_r11 = CPyDef_partially_defined___BranchStatement___is_undefined(cpy_r_r10, cpy_r_name);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "is_undefined", 291, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    return cpy_r_r11;
CPyL9: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL10: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL9;
}

PyObject *CPyPy_partially_defined___DefinedVariableTracker___is_undefined(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:is_undefined", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___DefinedVariableTracker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.DefinedVariableTracker", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___DefinedVariableTracker___is_undefined(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "is_undefined", 289, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___Loop_____init__(PyObject *cpy_r_self) {
    ((mypy___partially_defined___LoopObject *)cpy_r_self)->_has_break = 0;
    return 1;
}

PyObject *CPyPy_partially_defined___Loop_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___Loop))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.Loop", obj_self); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___Loop_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "__init__", 295, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_type_map, PyObject *cpy_r_options, PyObject *cpy_r_names) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_builtins_mod;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    tuple_T3CIO cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    CPy_INCREF(cpy_r_msg);
    if (((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_msg != NULL) {
        CPy_DECREF(((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_msg);
    }
    ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_msg = cpy_r_msg;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 324, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_type_map);
    if (((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_type_map != NULL) {
        CPy_DECREF(((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_type_map);
    }
    ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_type_map = cpy_r_type_map;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 325, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_options);
    if (((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_options != NULL) {
        CPy_DECREF(((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_options);
    }
    ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_options = cpy_r_options;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 326, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    cpy_r_r3 = (PyObject *)CPyType_nodes___SymbolTable;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r3, 0, 0, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 327, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    if (likely(PyDict_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "__init__", 327, CPyStatic_partially_defined___globals, "dict", cpy_r_r4);
        goto CPyL33;
    }
    if (((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_builtins != NULL) {
        CPy_DECREF(((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_builtins);
    }
    ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_builtins = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 327, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    cpy_r_r7 = CPyStatics[875]; /* '__builtins__' */
    cpy_r_r8 = Py_None;
    cpy_r_r9 = CPyDict_Get(cpy_r_names, cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 328, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    if (Py_TYPE(cpy_r_r9) == CPyType_nodes___SymbolTableNode)
        cpy_r_r10 = cpy_r_r9;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL4621;
    if (cpy_r_r9 == Py_None)
        cpy_r_r10 = cpy_r_r9;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL4621;
    CPy_TypeErrorTraceback("mypy/partially_defined.py", "__init__", 328, CPyStatic_partially_defined___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r9);
    goto CPyL33;
__LL4621: ;
    cpy_r_builtins_mod = cpy_r_r10;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_builtins_mod != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL34;
    if (likely(cpy_r_builtins_mod != Py_None))
        cpy_r_r13 = cpy_r_builtins_mod;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "__init__", 330, CPyStatic_partially_defined___globals, "mypy.nodes.SymbolTableNode", cpy_r_builtins_mod);
        goto CPyL35;
    }
    cpy_r_r14 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r13)->_node;
    cpy_r_r15 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_r14)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (cpy_r_r18) {
        goto CPyL13;
    } else
        goto CPyL36;
CPyL11: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 330, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL13: ;
    if (likely(cpy_r_builtins_mod != Py_None))
        cpy_r_r20 = cpy_r_builtins_mod;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "__init__", 331, CPyStatic_partially_defined___globals, "mypy.nodes.SymbolTableNode", cpy_r_builtins_mod);
        goto CPyL35;
    }
    cpy_r_r21 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r20)->_node;
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_nodes___MypyFile))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "__init__", 331, CPyStatic_partially_defined___globals, "mypy.nodes.MypyFile", cpy_r_r21);
        goto CPyL35;
    }
    cpy_r_r23 = ((mypy___nodes___MypyFileObject *)cpy_r_r22)->_names;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "__init__", "MypyFile", "names", 331, CPyStatic_partially_defined___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r23);
CPyL16: ;
    CPy_DECREF(cpy_r_builtins_mod);
    if (((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_builtins != NULL) {
        CPy_DECREF(((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_builtins);
    }
    ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_builtins = cpy_r_r23;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 331, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
CPyL17: ;
    cpy_r_r25 = PyList_New(0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 332, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    if (((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_loops != NULL) {
        CPy_DECREF(((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_loops);
    }
    ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_loops = cpy_r_r25;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 332, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    if (((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_try_depth != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_try_depth);
    }
    ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_try_depth = 0;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 333, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    cpy_r_r28 = CPyDef_partially_defined___DefinedVariableTracker();
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 334, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    if (((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker != NULL) {
        CPy_DECREF(((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker);
    }
    ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker = cpy_r_r28;
    cpy_r_r29 = 1;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 334, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    cpy_r_r30 = CPyStatic_nodes___implicit_module_attrs;
    if (likely(cpy_r_r30 != NULL)) goto CPyL25;
    PyErr_SetString(PyExc_NameError, "value for final name \"implicit_module_attrs\" was not set");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 335, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r32 = 0;
    cpy_r_r33 = PyDict_Size(cpy_r_r30);
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = CPyDict_GetKeysIter(cpy_r_r30);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 335, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
CPyL26: ;
    cpy_r_r36 = CPyDict_NextKey(cpy_r_r35, cpy_r_r32);
    cpy_r_r37 = cpy_r_r36.f1;
    cpy_r_r32 = cpy_r_r37;
    cpy_r_r38 = cpy_r_r36.f0;
    if (!cpy_r_r38) goto CPyL37;
    cpy_r_r39 = cpy_r_r36.f2;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r36.f2);
    if (likely(PyUnicode_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "__init__", 335, CPyStatic_partially_defined___globals, "str", cpy_r_r39);
        goto CPyL38;
    }
    cpy_r_name = cpy_r_r40;
    cpy_r_r41 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "__init__", "PossiblyUndefinedVariableVisitor", "tracker", 336, CPyStatic_partially_defined___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r41);
CPyL29: ;
    cpy_r_r42 = CPyDef_partially_defined___DefinedVariableTracker___record_definition(cpy_r_r41, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 336, CPyStatic_partially_defined___globals);
        goto CPyL38;
    }
    cpy_r_r43 = CPyDict_CheckSize(cpy_r_r30, cpy_r_r34);
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 335, CPyStatic_partially_defined___globals);
        goto CPyL38;
    } else
        goto CPyL26;
CPyL31: ;
    cpy_r_r44 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/partially_defined.py", "__init__", 335, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    return 1;
CPyL33: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
CPyL34: ;
    CPy_DECREF(cpy_r_builtins_mod);
    goto CPyL17;
CPyL35: ;
    CPy_DecRef(cpy_r_builtins_mod);
    goto CPyL33;
CPyL36: ;
    CPy_DECREF(cpy_r_builtins_mod);
    goto CPyL11;
CPyL37: ;
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r36.f2);
    goto CPyL31;
CPyL38: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL33;
CPyL39: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_name);
    goto CPyL33;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "type_map", "options", "names", 0};
    PyObject *obj_msg;
    PyObject *obj_type_map;
    PyObject *obj_options;
    PyObject *obj_names;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOO", "__init__", kwlist, &obj_msg, &obj_type_map, &obj_options, &obj_names)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(Py_TYPE(obj_msg) == CPyType_messages___MessageBuilder))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("mypy.messages.MessageBuilder", obj_msg); 
        goto fail;
    }
    PyObject *arg_type_map;
    if (likely(PyDict_Check(obj_type_map)))
        arg_type_map = obj_type_map;
    else {
        CPy_TypeError("dict", obj_type_map); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(PyDict_Check(obj_names)))
        arg_names = obj_names;
    else {
        CPy_TypeError("dict", obj_names); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor_____init__(arg_self, arg_msg, arg_type_map, arg_options, arg_names);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "__init__", 317, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___var_used_before_def(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "var_used_before_def", "PossiblyUndefinedVariableVisitor", "msg", 339, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
CPyL1: ;
    cpy_r_r1 = ((mypy___messages___MessageBuilderObject *)cpy_r_r0)->_errors;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatic_errorcodes___USED_BEFORE_DEF;
    if (unlikely(cpy_r_r2 == NULL)) {
        goto CPyL10;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"USED_BEFORE_DEF\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/partially_defined.py", "var_used_before_def", 339, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r4 = CPyDef_mypy___errors___Errors___is_error_code_enabled(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "var_used_before_def", 339, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    if (!cpy_r_r4) goto CPyL8;
    cpy_r_r5 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "var_used_before_def", "PossiblyUndefinedVariableVisitor", "msg", 340, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r5);
CPyL7: ;
    cpy_r_r6 = CPyDef_messages___MessageBuilder___var_used_before_def(cpy_r_r5, cpy_r_name, cpy_r_context);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "var_used_before_def", 340, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___var_used_before_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "context", 0};
    static CPyArg_Parser parser = {"OO:var_used_before_def", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___var_used_before_def(arg_self, arg_name, arg_context);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "var_used_before_def", 338, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___variable_may_be_undefined(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "variable_may_be_undefined", "PossiblyUndefinedVariableVisitor", "msg", 343, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
CPyL1: ;
    cpy_r_r1 = ((mypy___messages___MessageBuilderObject *)cpy_r_r0)->_errors;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatic_errorcodes___POSSIBLY_UNDEFINED;
    if (unlikely(cpy_r_r2 == NULL)) {
        goto CPyL10;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"POSSIBLY_UNDEFINED\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/partially_defined.py", "variable_may_be_undefined", 343, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r4 = CPyDef_mypy___errors___Errors___is_error_code_enabled(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "variable_may_be_undefined", 343, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    if (!cpy_r_r4) goto CPyL8;
    cpy_r_r5 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "variable_may_be_undefined", "PossiblyUndefinedVariableVisitor", "msg", 344, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r5);
CPyL7: ;
    cpy_r_r6 = CPyDef_messages___MessageBuilder___variable_may_be_undefined(cpy_r_r5, cpy_r_name, cpy_r_context);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "variable_may_be_undefined", 344, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___variable_may_be_undefined(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "context", 0};
    static CPyArg_Parser parser = {"OO:variable_may_be_undefined", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___variable_may_be_undefined(arg_self, arg_name, arg_context);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "variable_may_be_undefined", 342, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_definition(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_refs;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_ref;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "process_definition", "PossiblyUndefinedVariableVisitor", "tracker", 348, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatic_partially_defined___ScopeType___Class;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL20;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"Class\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_definition", 348, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = CPyDef_partially_defined___DefinedVariableTracker___in_scope(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_definition", 348, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    if (cpy_r_r3) goto CPyL16;
    cpy_r_r4 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "process_definition", "PossiblyUndefinedVariableVisitor", "tracker", 349, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r4);
CPyL7: ;
    cpy_r_r5 = CPyDef_partially_defined___DefinedVariableTracker___pop_undefined_ref(cpy_r_r4, cpy_r_name);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_definition", 349, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    cpy_r_refs = cpy_r_r5;
    cpy_r_r6 = PyObject_GetIter(cpy_r_refs);
    CPy_DECREF(cpy_r_refs);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_definition", 350, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
CPyL9: ;
    cpy_r_r7 = PyIter_Next(cpy_r_r6);
    if (cpy_r_r7 == NULL) goto CPyL21;
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_nodes___NameExpr))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_definition", 350, CPyStatic_partially_defined___globals, "mypy.nodes.NameExpr", cpy_r_r7);
        goto CPyL22;
    }
    cpy_r_ref = cpy_r_r8;
    cpy_r_r9 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_loops;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "process_definition", "PossiblyUndefinedVariableVisitor", "loops", 351, CPyStatic_partially_defined___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r9);
CPyL12: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = cpy_r_r12 != 0;
    if (!cpy_r_r13) goto CPyL14;
    cpy_r_r14 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___variable_may_be_undefined(cpy_r_self, cpy_r_name, cpy_r_ref);
    CPy_DECREF(cpy_r_ref);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_definition", 352, CPyStatic_partially_defined___globals);
        goto CPyL22;
    } else
        goto CPyL9;
CPyL14: ;
    cpy_r_r15 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___var_used_before_def(cpy_r_self, cpy_r_name, cpy_r_ref);
    CPy_DECREF(cpy_r_ref);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_definition", 354, CPyStatic_partially_defined___globals);
        goto CPyL22;
    } else
        goto CPyL9;
CPyL15: ;
    cpy_r_r16 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_definition", 350, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
CPyL16: ;
    cpy_r_r17 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "process_definition", "PossiblyUndefinedVariableVisitor", "tracker", 358, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r17);
CPyL17: ;
    cpy_r_r18 = CPyDef_partially_defined___DefinedVariableTracker___record_definition(cpy_r_r17, cpy_r_name);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_definition", 358, CPyStatic_partially_defined___globals);
        goto CPyL19;
    }
    return 1;
CPyL19: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL2;
CPyL21: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL15;
CPyL22: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL19;
CPyL23: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_ref);
    goto CPyL19;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___process_definition(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:process_definition", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_definition(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "process_definition", 346, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_name;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypy___nodes___GlobalDeclObject *)cpy_r_o)->_names;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL8;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_global_decl", 361, CPyStatic_partially_defined___globals, "str", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_name = cpy_r_r7;
    cpy_r_r8 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_definition(cpy_r_self, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_global_decl", 362, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL5: ;
    cpy_r_r10 = CPyDef_traverser___ExtendedTraverserVisitor___visit_global_decl(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_global_decl", 363, CPyStatic_partially_defined___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL8: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_global_decl", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GlobalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GlobalDecl", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_global_decl", 360, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_global_decl__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GlobalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GlobalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_global_decl__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_global_decl__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GlobalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GlobalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_global_decl__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_global_decl__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_name;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypy___nodes___NonlocalDeclObject *)cpy_r_o)->_names;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL8;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_nonlocal_decl", 366, CPyStatic_partially_defined___globals, "str", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_name = cpy_r_r7;
    cpy_r_r8 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_definition(cpy_r_self, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_nonlocal_decl", 367, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL5: ;
    cpy_r_r10 = CPyDef_traverser___ExtendedTraverserVisitor___visit_nonlocal_decl(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_nonlocal_decl", 368, CPyStatic_partially_defined___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL8: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_nonlocal_decl", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NonlocalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NonlocalDecl", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_nonlocal_decl", 365, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_nonlocal_decl__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NonlocalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NonlocalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_nonlocal_decl__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_nonlocal_decl__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NonlocalDecl))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NonlocalDecl", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_nonlocal_decl__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_nonlocal_decl__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue(PyObject *cpy_r_self, PyObject *cpy_r_lvalue) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
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
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_item;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL3;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r4 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_lvalue", 372, CPyStatic_partially_defined___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL22;
    }
    cpy_r_r5 = ((mypy___nodes___NameExprObject *)cpy_r_r4)->_name;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_definition(cpy_r_self, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_lvalue", 372, CPyStatic_partially_defined___globals);
        goto CPyL22;
    } else
        goto CPyL21;
CPyL3: ;
    cpy_r_r7 = (PyObject *)CPyType_nodes___StarExpr;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL6;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___StarExpr))
        cpy_r_r11 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_lvalue", 374, CPyStatic_partially_defined___globals, "mypy.nodes.StarExpr", cpy_r_lvalue);
        goto CPyL22;
    }
    cpy_r_r12 = ((mypy___nodes___StarExprObject *)cpy_r_r11)->_expr;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue(cpy_r_self, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_lvalue", 374, CPyStatic_partially_defined___globals);
        goto CPyL22;
    } else
        goto CPyL21;
CPyL6: ;
    cpy_r_r14 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL8;
    cpy_r_r18 = cpy_r_r17;
    goto CPyL9;
CPyL8: ;
    cpy_r_r19 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    cpy_r_r18 = cpy_r_r22;
CPyL9: ;
    if (!cpy_r_r18) goto CPyL21;
    CPy_INCREF(cpy_r_lvalue);
    if (Py_TYPE(cpy_r_lvalue) == CPyType_nodes___ListExpr)
        cpy_r_r23 = cpy_r_lvalue;
    else {
        cpy_r_r23 = NULL;
    }
    if (cpy_r_r23 != NULL) goto __LL4622;
    if (Py_TYPE(cpy_r_lvalue) == CPyType_nodes___TupleExpr)
        cpy_r_r23 = cpy_r_lvalue;
    else {
        cpy_r_r23 = NULL;
    }
    if (cpy_r_r23 != NULL) goto __LL4622;
    CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_lvalue", 376, CPyStatic_partially_defined___globals, "union[mypy.nodes.ListExpr, mypy.nodes.TupleExpr]", cpy_r_lvalue);
    goto CPyL22;
__LL4622: ;
    cpy_r_r24 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_r23)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_nodes___ListExpr))
        cpy_r_r28 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_lvalue", 376, CPyStatic_partially_defined___globals, "mypy.nodes.ListExpr", cpy_r_r23);
        goto CPyL22;
    }
    cpy_r_r29 = ((mypy___nodes___ListExprObject *)cpy_r_r28)->_items;
    CPy_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29;
    goto CPyL16;
CPyL14: ;
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_nodes___TupleExpr))
        cpy_r_r31 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_lvalue", 376, CPyStatic_partially_defined___globals, "mypy.nodes.TupleExpr", cpy_r_r23);
        goto CPyL22;
    }
    cpy_r_r32 = ((mypy___nodes___TupleExprObject *)cpy_r_r31)->_items;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r30 = cpy_r_r32;
CPyL16: ;
    cpy_r_r33 = 0;
CPyL17: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r30)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL23;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_r30, cpy_r_r33);
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_nodes___Expression)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_lvalue", 376, CPyStatic_partially_defined___globals, "mypy.nodes.Expression", cpy_r_r38);
        goto CPyL24;
    }
    cpy_r_item = cpy_r_r39;
    cpy_r_r40 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_lvalue", 377, CPyStatic_partially_defined___globals);
        goto CPyL24;
    }
    cpy_r_r41 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r41;
    goto CPyL17;
CPyL21: ;
    return 1;
CPyL22: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL23: ;
    CPy_DECREF(cpy_r_r30);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL22;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lvalue", 0};
    static CPyArg_Parser parser = {"O:process_lvalue", kwlist, 0};
    PyObject *obj_lvalue;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_lvalue)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_lvalue;
    if (PyObject_TypeCheck(obj_lvalue, CPyType_nodes___Expression))
        arg_lvalue = obj_lvalue;
    else {
        arg_lvalue = NULL;
    }
    if (arg_lvalue != NULL) goto __LL4623;
    if (obj_lvalue == Py_None)
        arg_lvalue = obj_lvalue;
    else {
        arg_lvalue = NULL;
    }
    if (arg_lvalue != NULL) goto __LL4623;
    CPy_TypeError("mypy.nodes.Expression or None", obj_lvalue); 
    goto fail;
__LL4623: ;
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue(arg_self, arg_lvalue);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "process_lvalue", 370, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_lvalue;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_lvalues;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL8;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_nodes___Expression)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_assignment_stmt", 380, CPyStatic_partially_defined___globals, "mypy.nodes.Expression", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_lvalue = cpy_r_r7;
    cpy_r_r8 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue(cpy_r_self, cpy_r_lvalue);
    CPy_DECREF(cpy_r_lvalue);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_assignment_stmt", 381, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL5: ;
    cpy_r_r10 = CPyDef_traverser___ExtendedTraverserVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_assignment_stmt", 382, CPyStatic_partially_defined___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL8: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_assignment_stmt", 379, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_assignment_stmt__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___nodes___AssignmentExprObject *)cpy_r_o)->_value;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_assignment_expr", 385, CPyStatic_partially_defined___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL1: ;
    cpy_r_r2 = ((mypy___nodes___AssignmentExprObject *)cpy_r_o)->_target;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_assignment_expr", 386, CPyStatic_partially_defined___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
CPyL4: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_assignment_expr", 384, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_assignment_expr__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assignment_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_assignment_expr__ExpressionVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_b;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    cpy_r_r0 = ((mypy___nodes___IfStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL26;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_nodes___Expression)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_if_stmt", 389, CPyStatic_partially_defined___globals, "mypy.nodes.Expression", cpy_r_r6);
        goto CPyL27;
    }
    cpy_r_e = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD_TRAIT(cpy_r_e, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_e, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_e);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_if_stmt", 390, CPyStatic_partially_defined___globals);
        goto CPyL27;
    } else
        goto CPyL28;
CPyL4: ;
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL5: ;
    cpy_r_r10 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_if_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 391, CPyStatic_partially_defined___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r10);
CPyL6: ;
    cpy_r_r11 = CPyDef_partially_defined___DefinedVariableTracker___start_branch_statement(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_if_stmt", 391, CPyStatic_partially_defined___globals);
        goto CPyL25;
    }
    cpy_r_r12 = ((mypy___nodes___IfStmtObject *)cpy_r_o)->_body;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = 0;
CPyL8: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL29;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_r12, cpy_r_r13);
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_nodes___Block))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_if_stmt", 392, CPyStatic_partially_defined___globals, "mypy.nodes.Block", cpy_r_r18);
        goto CPyL30;
    }
    cpy_r_b = cpy_r_r19;
    cpy_r_r20 = ((mypy___nodes___BlockObject *)cpy_r_b)->_is_unreachable;
    if (cpy_r_r20) goto CPyL31;
CPyL11: ;
    cpy_r_r21 = CPyDef_nodes___Block___accept(cpy_r_b, cpy_r_self);
    CPy_DECREF(cpy_r_b);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_if_stmt", 395, CPyStatic_partially_defined___globals);
        goto CPyL30;
    } else
        goto CPyL32;
CPyL12: ;
    cpy_r_r22 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_if_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 396, CPyStatic_partially_defined___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r22);
CPyL13: ;
    cpy_r_r23 = CPyDef_partially_defined___DefinedVariableTracker___next_branch(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_if_stmt", 396, CPyStatic_partially_defined___globals);
        goto CPyL30;
    }
CPyL14: ;
    cpy_r_r24 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r24;
    goto CPyL8;
CPyL15: ;
    cpy_r_r25 = ((mypy___nodes___IfStmtObject *)cpy_r_o)->_else_body;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_r25 != cpy_r_r26;
    CPy_DECREF(cpy_r_r25);
    if (!cpy_r_r27) goto CPyL22;
    cpy_r_r28 = ((mypy___nodes___IfStmtObject *)cpy_r_o)->_else_body;
    if (likely(cpy_r_r28 != Py_None))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_if_stmt", 398, CPyStatic_partially_defined___globals, "mypy.nodes.Block", cpy_r_r28);
        goto CPyL25;
    }
    cpy_r_r30 = ((mypy___nodes___BlockObject *)cpy_r_r29)->_is_unreachable;
    if (cpy_r_r30) goto CPyL20;
CPyL18: ;
    cpy_r_r31 = ((mypy___nodes___IfStmtObject *)cpy_r_o)->_else_body;
    CPy_INCREF(cpy_r_r31);
    if (likely(cpy_r_r31 != Py_None))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_if_stmt", 399, CPyStatic_partially_defined___globals, "mypy.nodes.Block", cpy_r_r31);
        goto CPyL25;
    }
    cpy_r_r33 = CPyDef_nodes___Block___accept(cpy_r_r32, cpy_r_self);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_if_stmt", 399, CPyStatic_partially_defined___globals);
        goto CPyL25;
    } else
        goto CPyL33;
CPyL20: ;
    cpy_r_r34 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_if_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 401, CPyStatic_partially_defined___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r34);
CPyL21: ;
    cpy_r_r35 = CPyDef_partially_defined___DefinedVariableTracker___skip_branch(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_if_stmt", 401, CPyStatic_partially_defined___globals);
        goto CPyL25;
    }
CPyL22: ;
    cpy_r_r36 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_if_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 402, CPyStatic_partially_defined___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r36);
CPyL23: ;
    cpy_r_r37 = CPyDef_partially_defined___DefinedVariableTracker___end_branch_statement(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_if_stmt", 402, CPyStatic_partially_defined___globals);
        goto CPyL25;
    }
    return 1;
CPyL25: ;
    cpy_r_r38 = 2;
    return cpy_r_r38;
CPyL26: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL25;
CPyL28: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL4;
CPyL29: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL15;
CPyL30: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL25;
CPyL31: ;
    CPy_DECREF(cpy_r_b);
    goto CPyL14;
CPyL32: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL12;
CPyL33: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL22;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IfStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_if_stmt", 388, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IfStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_if_stmt__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IfStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_if_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_if_stmt__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_i;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_pattern;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_guard;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    int64_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_is_catchall;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_subject;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt", 405, CPyStatic_partially_defined___globals);
        goto CPyL32;
    } else
        goto CPyL33;
CPyL1: ;
    cpy_r_r2 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_match_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 406, CPyStatic_partially_defined___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r2);
CPyL2: ;
    cpy_r_r3 = CPyDef_partially_defined___DefinedVariableTracker___start_branch_statement(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt", 406, CPyStatic_partially_defined___globals);
        goto CPyL32;
    }
    cpy_r_r4 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_patterns;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = 0;
    cpy_r_i = cpy_r_r8;
CPyL4: ;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r9) goto CPyL34;
    cpy_r_r10 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_patterns;
    cpy_r_r11 = CPyList_GetItem(cpy_r_r10, cpy_r_i);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt", 408, CPyStatic_partially_defined___globals);
        goto CPyL35;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_patterns___Pattern)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_match_stmt", 408, CPyStatic_partially_defined___globals, "mypy.patterns.Pattern", cpy_r_r11);
        goto CPyL35;
    }
    cpy_r_pattern = cpy_r_r12;
    cpy_r_r13 = CPY_GET_METHOD_TRAIT(cpy_r_pattern, CPyType_patterns___Pattern, 5, mypy___patterns___PatternObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_pattern, cpy_r_self); /* accept */
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt", 409, CPyStatic_partially_defined___globals);
        goto CPyL36;
    } else
        goto CPyL37;
CPyL8: ;
    cpy_r_r14 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_guards;
    cpy_r_r15 = CPyList_GetItem(cpy_r_r14, cpy_r_i);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt", 410, CPyStatic_partially_defined___globals);
        goto CPyL36;
    }
    if (PyObject_TypeCheck(cpy_r_r15, CPyType_nodes___Expression))
        cpy_r_r16 = cpy_r_r15;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL4624;
    if (cpy_r_r15 == Py_None)
        cpy_r_r16 = cpy_r_r15;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL4624;
    CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_match_stmt", 410, CPyStatic_partially_defined___globals, "mypy.nodes.Expression or None", cpy_r_r15);
    goto CPyL36;
__LL4624: ;
    cpy_r_guard = cpy_r_r16;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_guard != cpy_r_r17;
    if (!cpy_r_r18) goto CPyL38;
    if (likely(cpy_r_guard != Py_None))
        cpy_r_r19 = cpy_r_guard;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_match_stmt", 412, CPyStatic_partially_defined___globals, "mypy.nodes.Expression", cpy_r_guard);
        goto CPyL36;
    }
    cpy_r_r20 = CPY_GET_METHOD_TRAIT(cpy_r_r19, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r19, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt", 412, CPyStatic_partially_defined___globals);
        goto CPyL36;
    } else
        goto CPyL39;
CPyL13: ;
    cpy_r_r21 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_bodies;
    cpy_r_r22 = CPyList_GetItemBorrow(cpy_r_r21, cpy_r_i);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt", 413, CPyStatic_partially_defined___globals);
        goto CPyL36;
    }
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_nodes___Block))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_match_stmt", 413, CPyStatic_partially_defined___globals, "mypy.nodes.Block", cpy_r_r22);
        goto CPyL36;
    }
    cpy_r_r24 = ((mypy___nodes___BlockObject *)cpy_r_r23)->_is_unreachable;
    if (cpy_r_r24) goto CPyL40;
CPyL16: ;
    cpy_r_r25 = ((mypy___nodes___MatchStmtObject *)cpy_r_o)->_bodies;
    cpy_r_r26 = CPyList_GetItem(cpy_r_r25, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt", 414, CPyStatic_partially_defined___globals);
        goto CPyL41;
    }
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_nodes___Block))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_match_stmt", 414, CPyStatic_partially_defined___globals, "mypy.nodes.Block", cpy_r_r26);
        goto CPyL41;
    }
    cpy_r_r28 = CPyDef_nodes___Block___accept(cpy_r_r27, cpy_r_self);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt", 414, CPyStatic_partially_defined___globals);
        goto CPyL41;
    } else
        goto CPyL42;
CPyL19: ;
    cpy_r_r29 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_match_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 416, CPyStatic_partially_defined___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r29);
CPyL20: ;
    cpy_r_r30 = CPyDef_partially_defined___DefinedVariableTracker___skip_branch(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt", 416, CPyStatic_partially_defined___globals);
        goto CPyL41;
    }
CPyL21: ;
    cpy_r_r31 = CPyDef_reachability___infer_pattern_value(cpy_r_pattern);
    CPy_DECREF(cpy_r_pattern);
    if (unlikely(cpy_r_r31 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt", 417, CPyStatic_partially_defined___globals);
        goto CPyL32;
    }
    cpy_r_r32 = cpy_r_r31 & 1;
    cpy_r_r33 = cpy_r_r32 == 0;
    if (!cpy_r_r33) goto CPyL24;
    cpy_r_r34 = cpy_r_r31 == 2;
    CPyTagged_DECREF(cpy_r_r31);
    cpy_r_r35 = cpy_r_r34;
    goto CPyL25;
CPyL24: ;
    cpy_r_r36 = CPyTagged_IsEq_(cpy_r_r31, 2);
    CPyTagged_DECREF(cpy_r_r31);
    cpy_r_r35 = cpy_r_r36;
CPyL25: ;
    cpy_r_is_catchall = cpy_r_r35;
    if (cpy_r_is_catchall) goto CPyL28;
    cpy_r_r37 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_match_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 419, CPyStatic_partially_defined___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r37);
CPyL27: ;
    cpy_r_r38 = CPyDef_partially_defined___DefinedVariableTracker___next_branch(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt", 419, CPyStatic_partially_defined___globals);
        goto CPyL32;
    }
CPyL28: ;
    cpy_r_r39 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r39;
    cpy_r_i = cpy_r_r39;
    goto CPyL4;
CPyL29: ;
    cpy_r_r40 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_match_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 420, CPyStatic_partially_defined___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r40);
CPyL30: ;
    cpy_r_r41 = CPyDef_partially_defined___DefinedVariableTracker___end_branch_statement(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt", 420, CPyStatic_partially_defined___globals);
        goto CPyL32;
    }
    return 1;
CPyL32: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL33: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
CPyL34: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL29;
CPyL35: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL32;
CPyL36: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_pattern);
    goto CPyL32;
CPyL37: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL8;
CPyL38: ;
    CPy_DECREF(cpy_r_guard);
    goto CPyL13;
CPyL39: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL13;
CPyL40: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL19;
CPyL41: ;
    CPy_DecRef(cpy_r_pattern);
    goto CPyL32;
CPyL42: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL21;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt", 404, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_match_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_match_stmt__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_func_def", 423, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
CPyL1: ;
    cpy_r_r1 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_definition(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_func_def", 423, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
    cpy_r_r2 = CPyDef_traverser___ExtendedTraverserVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_func_def", 424, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_func_def", 422, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_args;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_o, CPyType_nodes___FuncItem, 10, mypy___nodes___FuncItemObject, char (*)(PyObject *))(cpy_r_o); /* is_dynamic */
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_func", 427, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    if (!cpy_r_r0) goto CPyL5;
    cpy_r_r1 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_func", "PossiblyUndefinedVariableVisitor", "options", 427, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
CPyL3: ;
    cpy_r_r2 = ((mypy___options___OptionsObject *)cpy_r_r1)->_check_untyped_defs;
    if (cpy_r_r2) goto CPyL5;
CPyL4: ;
    return 1;
CPyL5: ;
    cpy_r_r3 = ((mypy___nodes___FuncItemObject *)cpy_r_o)->_arguments;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_func", "FuncItem", "arguments", 430, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r3);
CPyL6: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = cpy_r_r6 != 0;
    if (!cpy_r_r7) goto CPyL34;
    cpy_r_r8 = cpy_r_r3;
    goto CPyL10;
CPyL8: ;
    cpy_r_r9 = PyList_New(0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_func", 430, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    cpy_r_r8 = cpy_r_r9;
CPyL10: ;
    cpy_r_args = cpy_r_r8;
    cpy_r_r10 = 0;
CPyL11: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL17;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r10);
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_nodes___Argument))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_func", 432, CPyStatic_partially_defined___globals, "mypy.nodes.Argument", cpy_r_r15);
        goto CPyL35;
    }
    cpy_r_arg = cpy_r_r16;
    cpy_r_r17 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_initializer;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 != cpy_r_r18;
    if (!cpy_r_r19) goto CPyL36;
    cpy_r_r20 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_initializer;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_arg);
    if (likely(cpy_r_r20 != Py_None))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_func", 434, CPyStatic_partially_defined___globals, "mypy.nodes.Expression", cpy_r_r20);
        goto CPyL35;
    }
    cpy_r_r22 = CPY_GET_METHOD_TRAIT(cpy_r_r21, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r21, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_func", 434, CPyStatic_partially_defined___globals);
        goto CPyL35;
    } else
        goto CPyL37;
CPyL16: ;
    cpy_r_r23 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r23;
    goto CPyL11;
CPyL17: ;
    cpy_r_r24 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_func", "PossiblyUndefinedVariableVisitor", "tracker", 436, CPyStatic_partially_defined___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r24);
CPyL18: ;
    cpy_r_r25 = CPyStatic_partially_defined___ScopeType___Func;
    if (unlikely(cpy_r_r25 == NULL)) {
        goto CPyL38;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"Func\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_func", 436, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r27 = CPyDef_partially_defined___DefinedVariableTracker___enter_scope(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_func", 436, CPyStatic_partially_defined___globals);
        goto CPyL35;
    }
    cpy_r_r28 = 0;
CPyL23: ;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r28 < (Py_ssize_t)cpy_r_r31;
    if (!cpy_r_r32) goto CPyL39;
    cpy_r_r33 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r28);
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_nodes___Argument))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_func", 437, CPyStatic_partially_defined___globals, "mypy.nodes.Argument", cpy_r_r33);
        goto CPyL35;
    }
    cpy_r_arg = cpy_r_r34;
    cpy_r_r35 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_r35, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_func", 438, CPyStatic_partially_defined___globals);
        goto CPyL40;
    }
CPyL26: ;
    cpy_r_r37 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_definition(cpy_r_self, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_func", 438, CPyStatic_partially_defined___globals);
        goto CPyL40;
    }
    cpy_r_r38 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r39 = CPyDef_mypy___visitor___NodeVisitor___visit_var(cpy_r_self, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_func", 439, CPyStatic_partially_defined___globals);
        goto CPyL35;
    } else
        goto CPyL41;
CPyL28: ;
    cpy_r_r40 = cpy_r_r28 + 2;
    cpy_r_r28 = cpy_r_r40;
    goto CPyL23;
CPyL29: ;
    cpy_r_r41 = ((mypy___nodes___FuncItemObject *)cpy_r_o)->_body;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = CPyDef_nodes___Block___accept(cpy_r_r41, cpy_r_self);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_func", 440, CPyStatic_partially_defined___globals);
        goto CPyL33;
    } else
        goto CPyL42;
CPyL30: ;
    cpy_r_r43 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_func", "PossiblyUndefinedVariableVisitor", "tracker", 441, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r43);
CPyL31: ;
    cpy_r_r44 = CPyDef_partially_defined___DefinedVariableTracker___exit_scope(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_func", 441, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    return 1;
CPyL33: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
CPyL34: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL8;
CPyL35: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL33;
CPyL36: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL16;
CPyL37: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL16;
CPyL38: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r24);
    goto CPyL19;
CPyL39: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL29;
CPyL40: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg);
    goto CPyL33;
CPyL41: ;
    CPy_DECREF(cpy_r_r39);
    goto CPyL28;
CPyL42: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL30;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_func(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely((Py_TYPE(obj_o) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_func(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_func", 426, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_idx;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_generator_expr", "PossiblyUndefinedVariableVisitor", "tracker", 444, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatic_partially_defined___ScopeType___Generator;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL15;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"Generator\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_generator_expr", 444, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = CPyDef_partially_defined___DefinedVariableTracker___enter_scope(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_generator_expr", 444, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    cpy_r_r4 = ((mypy___nodes___GeneratorExprObject *)cpy_r_o)->_indices;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = 0;
CPyL6: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL16;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r4, cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_nodes___Expression)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_generator_expr", 445, CPyStatic_partially_defined___globals, "mypy.nodes.Expression", cpy_r_r10);
        goto CPyL17;
    }
    cpy_r_idx = cpy_r_r11;
    cpy_r_r12 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue(cpy_r_self, cpy_r_idx);
    CPy_DECREF(cpy_r_idx);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_generator_expr", 446, CPyStatic_partially_defined___globals);
        goto CPyL17;
    }
    cpy_r_r13 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r13;
    goto CPyL6;
CPyL10: ;
    cpy_r_r14 = CPyDef_traverser___ExtendedTraverserVisitor___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_generator_expr", 447, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    cpy_r_r15 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_generator_expr", "PossiblyUndefinedVariableVisitor", "tracker", 448, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r15);
CPyL12: ;
    cpy_r_r16 = CPyDef_partially_defined___DefinedVariableTracker___exit_scope(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_generator_expr", 448, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL2;
CPyL16: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL10;
CPyL17: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL14;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_generator_expr", 443, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_generator_expr__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_generator_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_generator_expr__ExpressionVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_idx;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_dictionary_comprehension", "PossiblyUndefinedVariableVisitor", "tracker", 451, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatic_partially_defined___ScopeType___Generator;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL15;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"Generator\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_dictionary_comprehension", 451, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = CPyDef_partially_defined___DefinedVariableTracker___enter_scope(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_dictionary_comprehension", 451, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    cpy_r_r4 = ((mypy___nodes___DictionaryComprehensionObject *)cpy_r_o)->_indices;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = 0;
CPyL6: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL16;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r4, cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_nodes___Expression)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_dictionary_comprehension", 452, CPyStatic_partially_defined___globals, "mypy.nodes.Expression", cpy_r_r10);
        goto CPyL17;
    }
    cpy_r_idx = cpy_r_r11;
    cpy_r_r12 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue(cpy_r_self, cpy_r_idx);
    CPy_DECREF(cpy_r_idx);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_dictionary_comprehension", 453, CPyStatic_partially_defined___globals);
        goto CPyL17;
    }
    cpy_r_r13 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r13;
    goto CPyL6;
CPyL10: ;
    cpy_r_r14 = CPyDef_traverser___ExtendedTraverserVisitor___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_dictionary_comprehension", 454, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    cpy_r_r15 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_dictionary_comprehension", "PossiblyUndefinedVariableVisitor", "tracker", 455, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r15);
CPyL12: ;
    cpy_r_r16 = CPyDef_partially_defined___DefinedVariableTracker___exit_scope(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_dictionary_comprehension", 455, CPyStatic_partially_defined___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL2;
CPyL16: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL10;
CPyL17: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL14;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_dictionary_comprehension", 450, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_dictionary_comprehension__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_dictionary_comprehension__ExpressionVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_loop;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_has_break;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 458, CPyStatic_partially_defined___globals);
        goto CPyL28;
    } else
        goto CPyL29;
CPyL1: ;
    cpy_r_r2 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_index;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 459, CPyStatic_partially_defined___globals);
        goto CPyL28;
    }
    cpy_r_r4 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_index;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPY_GET_METHOD_TRAIT(cpy_r_r4, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r4, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 460, CPyStatic_partially_defined___globals);
        goto CPyL28;
    } else
        goto CPyL30;
CPyL3: ;
    cpy_r_r6 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_for_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 461, CPyStatic_partially_defined___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyDef_partially_defined___DefinedVariableTracker___start_branch_statement(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 461, CPyStatic_partially_defined___globals);
        goto CPyL28;
    }
    cpy_r_r8 = CPyDef_partially_defined___Loop();
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 462, CPyStatic_partially_defined___globals);
        goto CPyL28;
    }
    cpy_r_loop = cpy_r_r8;
    cpy_r_r9 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_loops;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_for_stmt", "PossiblyUndefinedVariableVisitor", "loops", 463, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r9);
CPyL7: ;
    cpy_r_r10 = PyList_Append(cpy_r_r9, cpy_r_loop);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 463, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    cpy_r_r12 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_body;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_nodes___Block___accept(cpy_r_r12, cpy_r_self);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 464, CPyStatic_partially_defined___globals);
        goto CPyL31;
    } else
        goto CPyL32;
CPyL9: ;
    cpy_r_r14 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_for_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 465, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r14);
CPyL10: ;
    cpy_r_r15 = CPyDef_partially_defined___DefinedVariableTracker___next_branch(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 465, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    cpy_r_r16 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_for_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 466, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r16);
CPyL12: ;
    cpy_r_r17 = CPyDef_partially_defined___DefinedVariableTracker___end_branch_statement(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 466, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    cpy_r_r18 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_else_body;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_r18 != cpy_r_r19;
    if (!cpy_r_r20) goto CPyL33;
    cpy_r_r21 = ((mypy___partially_defined___LoopObject *)cpy_r_loop)->_has_break;
    CPy_DECREF(cpy_r_loop);
    cpy_r_has_break = cpy_r_r21;
    if (!cpy_r_has_break) goto CPyL19;
    cpy_r_r22 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_for_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 473, CPyStatic_partially_defined___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r22);
CPyL16: ;
    cpy_r_r23 = CPyDef_partially_defined___DefinedVariableTracker___start_branch_statement(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 473, CPyStatic_partially_defined___globals);
        goto CPyL28;
    }
    cpy_r_r24 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_for_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 474, CPyStatic_partially_defined___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r24);
CPyL18: ;
    cpy_r_r25 = CPyDef_partially_defined___DefinedVariableTracker___next_branch(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 474, CPyStatic_partially_defined___globals);
        goto CPyL28;
    }
CPyL19: ;
    cpy_r_r26 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_else_body;
    CPy_INCREF(cpy_r_r26);
    if (likely(cpy_r_r26 != Py_None))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_for_stmt", 475, CPyStatic_partially_defined___globals, "mypy.nodes.Block", cpy_r_r26);
        goto CPyL28;
    }
    cpy_r_r28 = CPyDef_nodes___Block___accept(cpy_r_r27, cpy_r_self);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 475, CPyStatic_partially_defined___globals);
        goto CPyL28;
    } else
        goto CPyL34;
CPyL21: ;
    if (!cpy_r_has_break) goto CPyL24;
    cpy_r_r29 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_for_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 477, CPyStatic_partially_defined___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r29);
CPyL23: ;
    cpy_r_r30 = CPyDef_partially_defined___DefinedVariableTracker___end_branch_statement(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 477, CPyStatic_partially_defined___globals);
        goto CPyL28;
    }
CPyL24: ;
    cpy_r_r31 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_loops;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_for_stmt", "PossiblyUndefinedVariableVisitor", "loops", 478, CPyStatic_partially_defined___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r31);
CPyL25: ;
    cpy_r_r32 = CPyList_PopLast(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 478, CPyStatic_partially_defined___globals);
        goto CPyL28;
    }
    if (likely(Py_TYPE(cpy_r_r32) == CPyType_partially_defined___Loop))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeError("mypy.partially_defined.Loop", cpy_r_r32); 
        cpy_r_r33 = NULL;
    }
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 478, CPyStatic_partially_defined___globals);
        goto CPyL28;
    } else
        goto CPyL35;
CPyL27: ;
    return 1;
CPyL28: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
CPyL29: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
CPyL30: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL3;
CPyL31: ;
    CPy_DecRef(cpy_r_loop);
    goto CPyL28;
CPyL32: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL9;
CPyL33: ;
    CPy_DECREF(cpy_r_loop);
    goto CPyL24;
CPyL34: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL21;
CPyL35: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL27;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt", 457, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_for_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_for_stmt__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_traverser___ExtendedTraverserVisitor___visit_return_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_return_stmt", 481, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_return_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 482, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyDef_partially_defined___DefinedVariableTracker___skip_branch(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_return_stmt", 482, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_return_stmt", 480, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_return_stmt__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_return_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_return_stmt__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_lambda_expr", "PossiblyUndefinedVariableVisitor", "tracker", 485, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatic_partially_defined___ScopeType___Func;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL10;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"Func\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_lambda_expr", 485, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = CPyDef_partially_defined___DefinedVariableTracker___enter_scope(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_lambda_expr", 485, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_r4 = CPyDef_traverser___ExtendedTraverserVisitor___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_lambda_expr", 486, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    cpy_r_r5 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_lambda_expr", "PossiblyUndefinedVariableVisitor", "tracker", 487, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r5);
CPyL7: ;
    cpy_r_r6 = CPyDef_partially_defined___DefinedVariableTracker___exit_scope(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_lambda_expr", 487, CPyStatic_partially_defined___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_lambda_expr", 484, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_lambda_expr__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_lambda_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_lambda_expr__ExpressionVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyDef_traverser___ExtendedTraverserVisitor___visit_assert_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_assert_stmt", 490, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
    cpy_r_r1 = ((mypy___nodes___AssertStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_checker___is_false_literal(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_assert_stmt", 491, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_assert_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 492, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = CPyDef_partially_defined___DefinedVariableTracker___skip_branch(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_assert_stmt", 492, CPyStatic_partially_defined___globals);
        goto CPyL6;
    }
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_assert_stmt", 489, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_assert_stmt__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_assert_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_assert_stmt__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_traverser___ExtendedTraverserVisitor___visit_raise_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_raise_stmt", 495, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_raise_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 496, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyDef_partially_defined___DefinedVariableTracker___skip_branch(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_raise_stmt", 496, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_raise_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RaiseStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RaiseStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_raise_stmt", 494, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_raise_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RaiseStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RaiseStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_raise_stmt__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_raise_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RaiseStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RaiseStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_raise_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_raise_stmt__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_traverser___ExtendedTraverserVisitor___visit_continue_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_continue_stmt", 499, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_continue_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 500, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyDef_partially_defined___DefinedVariableTracker___skip_branch(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_continue_stmt", 500, CPyStatic_partially_defined___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ContinueStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_continue_stmt", 498, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ContinueStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_continue_stmt__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_continue_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ContinueStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_continue_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_continue_stmt__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPyDef_traverser___ExtendedTraverserVisitor___visit_break_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_break_stmt", 503, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    cpy_r_r1 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_loops;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_break_stmt", "PossiblyUndefinedVariableVisitor", "loops", 504, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_r4 != 0;
    if (!cpy_r_r5) goto CPyL7;
    cpy_r_r6 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_loops;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_break_stmt", "PossiblyUndefinedVariableVisitor", "loops", 505, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
CPyL4: ;
    cpy_r_r7 = CPyList_GetItemShortBorrow(cpy_r_r6, -2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_break_stmt", 505, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_partially_defined___Loop))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_break_stmt", 505, CPyStatic_partially_defined___globals, "mypy.partially_defined.Loop", cpy_r_r7);
        goto CPyL10;
    }
    ((mypy___partially_defined___LoopObject *)cpy_r_r8)->_has_break = 1;
CPyL7: ;
    cpy_r_r10 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_break_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 506, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r10);
CPyL8: ;
    cpy_r_r11 = CPyDef_partially_defined___DefinedVariableTracker___skip_branch(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_break_stmt", 506, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BreakStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_break_stmt", 502, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BreakStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_break_stmt__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_break_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BreakStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_break_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_break_stmt__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_type_map;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_expression_stmt", "PossiblyUndefinedVariableVisitor", "type_map", 509, CPyStatic_partially_defined___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___ExpressionStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = Py_None;
    cpy_r_r3 = CPyDict_Get(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_expression_stmt", 509, CPyStatic_partially_defined___globals);
        goto CPyL7;
    }
    cpy_r_r4 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    CPy_DECREF(cpy_r_r3);
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_expression_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 510, CPyStatic_partially_defined___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r8);
CPyL4: ;
    cpy_r_r9 = CPyDef_partially_defined___DefinedVariableTracker___skip_branch(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_expression_stmt", 510, CPyStatic_partially_defined___globals);
        goto CPyL7;
    }
CPyL5: ;
    cpy_r_r10 = CPyDef_traverser___ExtendedTraverserVisitor___visit_expression_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_expression_stmt", 511, CPyStatic_partially_defined___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_expression_stmt", 508, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_expression_stmt__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_expression_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_expression_stmt__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_old_tracker;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_try_depth;
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_try_stmt", "PossiblyUndefinedVariableVisitor", "try_depth", 531, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
CPyL1: ;
    cpy_r_r1 = CPyTagged_Add(cpy_r_r0, 2);
    if (((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_try_depth != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_try_depth);
    }
    ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_try_depth = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_try_stmt", 531, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
    cpy_r_r3 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_finally_body;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL8;
    cpy_r_r6 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_try_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 538, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyDef_partially_defined___DefinedVariableTracker___copy(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_try_stmt", 538, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
    cpy_r_old_tracker = cpy_r_r7;
    cpy_r_r8 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_try_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 539, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
CPyL6: ;
    ((mypy___partially_defined___DefinedVariableTrackerObject *)cpy_r_r8)->_disable_branch_skip = 1;
    cpy_r_r10 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_try_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_try_stmt", 540, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    if (((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker != NULL) {
        CPy_DECREF(((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker);
    }
    ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker = cpy_r_old_tracker;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_try_stmt", 541, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
CPyL8: ;
    cpy_r_r12 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_try_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_try_stmt", 542, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
    cpy_r_r13 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_try_depth;
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_try_stmt", "PossiblyUndefinedVariableVisitor", "try_depth", 543, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
CPyL10: ;
    cpy_r_r14 = CPyTagged_Subtract(cpy_r_r13, 2);
    if (((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_try_depth != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_try_depth);
    }
    ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_try_depth = cpy_r_r14;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_try_stmt", 543, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL13: ;
    CPy_DecRef(cpy_r_old_tracker);
    goto CPyL12;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TryStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_try_stmt", 513, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TryStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_try_stmt__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_try_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TryStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_try_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_try_stmt__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_try_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_i;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_exc_type;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_var;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    cpy_r_r0 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "process_try_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 559, CPyStatic_partially_defined___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_partially_defined___DefinedVariableTracker___start_branch_statement(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 559, CPyStatic_partially_defined___globals);
        goto CPyL43;
    }
    cpy_r_r2 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_body;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_nodes___Block___accept(cpy_r_r2, cpy_r_self);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 560, CPyStatic_partially_defined___globals);
        goto CPyL43;
    } else
        goto CPyL44;
CPyL3: ;
    cpy_r_r4 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_else_body;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL6;
    cpy_r_r7 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_else_body;
    CPy_INCREF(cpy_r_r7);
    if (likely(cpy_r_r7 != Py_None))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_try_stmt", 562, CPyStatic_partially_defined___globals, "mypy.nodes.Block", cpy_r_r7);
        goto CPyL43;
    }
    cpy_r_r9 = CPyDef_nodes___Block___accept(cpy_r_r8, cpy_r_self);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 562, CPyStatic_partially_defined___globals);
        goto CPyL43;
    } else
        goto CPyL45;
CPyL6: ;
    cpy_r_r10 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_handlers;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r13 > (Py_ssize_t)0;
    if (!cpy_r_r14) goto CPyL37;
    cpy_r_r15 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_handlers;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r15)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_vars;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = cpy_r_r18 == cpy_r_r22;
    if (cpy_r_r23) goto CPyL9;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL10;
CPyL9: ;
    cpy_r_r25 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_types;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_r25)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = cpy_r_r22 == cpy_r_r28;
    cpy_r_r24 = cpy_r_r29;
CPyL10: ;
    if (cpy_r_r24) goto CPyL13;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 564, CPyStatic_partially_defined___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r31 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_handlers;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_r31)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = 0;
    cpy_r_i = cpy_r_r35;
CPyL14: ;
    cpy_r_r36 = (Py_ssize_t)cpy_r_r35 < (Py_ssize_t)cpy_r_r34;
    if (!cpy_r_r36) goto CPyL46;
    cpy_r_r37 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "process_try_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 566, CPyStatic_partially_defined___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r37);
CPyL16: ;
    cpy_r_r38 = CPyDef_partially_defined___DefinedVariableTracker___next_branch(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 566, CPyStatic_partially_defined___globals);
        goto CPyL47;
    }
    cpy_r_r39 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_types;
    cpy_r_r40 = CPyList_GetItem(cpy_r_r39, cpy_r_i);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 567, CPyStatic_partially_defined___globals);
        goto CPyL47;
    }
    if (PyObject_TypeCheck(cpy_r_r40, CPyType_nodes___Expression))
        cpy_r_r41 = cpy_r_r40;
    else {
        cpy_r_r41 = NULL;
    }
    if (cpy_r_r41 != NULL) goto __LL4625;
    if (cpy_r_r40 == Py_None)
        cpy_r_r41 = cpy_r_r40;
    else {
        cpy_r_r41 = NULL;
    }
    if (cpy_r_r41 != NULL) goto __LL4625;
    CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_try_stmt", 567, CPyStatic_partially_defined___globals, "mypy.nodes.Expression or None", cpy_r_r40);
    goto CPyL47;
__LL4625: ;
    cpy_r_exc_type = cpy_r_r41;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_exc_type != cpy_r_r42;
    if (!cpy_r_r43) goto CPyL48;
    if (likely(cpy_r_exc_type != Py_None))
        cpy_r_r44 = cpy_r_exc_type;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_try_stmt", 569, CPyStatic_partially_defined___globals, "mypy.nodes.Expression", cpy_r_exc_type);
        goto CPyL47;
    }
    cpy_r_r45 = CPY_GET_METHOD_TRAIT(cpy_r_r44, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r44, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 569, CPyStatic_partially_defined___globals);
        goto CPyL47;
    } else
        goto CPyL49;
CPyL22: ;
    cpy_r_r46 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_vars;
    cpy_r_r47 = CPyList_GetItem(cpy_r_r46, cpy_r_i);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 570, CPyStatic_partially_defined___globals);
        goto CPyL47;
    }
    if (Py_TYPE(cpy_r_r47) == CPyType_nodes___NameExpr)
        cpy_r_r48 = cpy_r_r47;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL4626;
    if (cpy_r_r47 == Py_None)
        cpy_r_r48 = cpy_r_r47;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL4626;
    CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_try_stmt", 570, CPyStatic_partially_defined___globals, "mypy.nodes.NameExpr or None", cpy_r_r47);
    goto CPyL47;
__LL4626: ;
    cpy_r_var = cpy_r_r48;
    cpy_r_r49 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r50 = cpy_r_var != cpy_r_r49;
    if (!cpy_r_r50) goto CPyL29;
    if (likely(cpy_r_var != Py_None))
        cpy_r_r51 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_try_stmt", 572, CPyStatic_partially_defined___globals, "mypy.nodes.NameExpr", cpy_r_var);
        goto CPyL50;
    }
    cpy_r_r52 = ((mypy___nodes___NameExprObject *)cpy_r_r51)->_name;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_definition(cpy_r_self, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 572, CPyStatic_partially_defined___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_var);
    if (likely(cpy_r_var != Py_None))
        cpy_r_r54 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_try_stmt", 573, CPyStatic_partially_defined___globals, "mypy.nodes.NameExpr", cpy_r_var);
        goto CPyL50;
    }
    cpy_r_r55 = CPyDef_nodes___NameExpr___accept(cpy_r_r54, cpy_r_self);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 573, CPyStatic_partially_defined___globals);
        goto CPyL50;
    } else
        goto CPyL51;
CPyL29: ;
    cpy_r_r56 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_handlers;
    cpy_r_r57 = CPyList_GetItem(cpy_r_r56, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 574, CPyStatic_partially_defined___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r57) == CPyType_nodes___Block))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_try_stmt", 574, CPyStatic_partially_defined___globals, "mypy.nodes.Block", cpy_r_r57);
        goto CPyL52;
    }
    cpy_r_r59 = CPyDef_nodes___Block___accept(cpy_r_r58, cpy_r_self);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 574, CPyStatic_partially_defined___globals);
        goto CPyL52;
    } else
        goto CPyL53;
CPyL32: ;
    cpy_r_r60 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r61 = cpy_r_var != cpy_r_r60;
    if (!cpy_r_r61) goto CPyL54;
    cpy_r_r62 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "process_try_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 576, CPyStatic_partially_defined___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r62);
CPyL34: ;
    if (likely(cpy_r_var != Py_None))
        cpy_r_r63 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_try_stmt", 576, CPyStatic_partially_defined___globals, "mypy.nodes.NameExpr", cpy_r_var);
        goto CPyL55;
    }
    cpy_r_r64 = ((mypy___nodes___NameExprObject *)cpy_r_r63)->_name;
    CPy_INCREF(cpy_r_r64);
    CPy_DECREF(cpy_r_var);
    cpy_r_r65 = CPyDef_partially_defined___DefinedVariableTracker___delete_var(cpy_r_r62, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 576, CPyStatic_partially_defined___globals);
        goto CPyL43;
    }
CPyL36: ;
    cpy_r_r66 = cpy_r_r35 + 2;
    cpy_r_r35 = cpy_r_r66;
    cpy_r_i = cpy_r_r66;
    goto CPyL14;
CPyL37: ;
    cpy_r_r67 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "process_try_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 577, CPyStatic_partially_defined___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r67);
CPyL38: ;
    cpy_r_r68 = CPyDef_partially_defined___DefinedVariableTracker___end_branch_statement(cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 577, CPyStatic_partially_defined___globals);
        goto CPyL43;
    }
    cpy_r_r69 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_finally_body;
    cpy_r_r70 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r71 = cpy_r_r69 != cpy_r_r70;
    if (!cpy_r_r71) goto CPyL42;
    cpy_r_r72 = ((mypy___nodes___TryStmtObject *)cpy_r_o)->_finally_body;
    CPy_INCREF(cpy_r_r72);
    if (likely(cpy_r_r72 != Py_None))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "process_try_stmt", 580, CPyStatic_partially_defined___globals, "mypy.nodes.Block", cpy_r_r72);
        goto CPyL43;
    }
    cpy_r_r74 = CPyDef_nodes___Block___accept(cpy_r_r73, cpy_r_self);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 580, CPyStatic_partially_defined___globals);
        goto CPyL43;
    } else
        goto CPyL56;
CPyL42: ;
    return 1;
CPyL43: ;
    cpy_r_r75 = 2;
    return cpy_r_r75;
CPyL44: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL3;
CPyL45: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL6;
CPyL46: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL37;
CPyL47: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL43;
CPyL48: ;
    CPy_DECREF(cpy_r_exc_type);
    goto CPyL22;
CPyL49: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL22;
CPyL50: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_var);
    goto CPyL43;
CPyL51: ;
    CPy_DECREF(cpy_r_r55);
    goto CPyL29;
CPyL52: ;
    CPy_DecRef(cpy_r_var);
    goto CPyL43;
CPyL53: ;
    CPy_DECREF(cpy_r_r59);
    goto CPyL32;
CPyL54: ;
    CPy_DECREF(cpy_r_var);
    goto CPyL36;
CPyL55: ;
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_r62);
    goto CPyL43;
CPyL56: ;
    CPy_DECREF(cpy_r_r74);
    goto CPyL42;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___process_try_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:process_try_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TryStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_try_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "process_try_stmt", 545, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_loop;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_has_break;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
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
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    cpy_r_r0 = ((mypy___nodes___WhileStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 583, CPyStatic_partially_defined___globals);
        goto CPyL31;
    } else
        goto CPyL32;
CPyL1: ;
    cpy_r_r2 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_while_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 584, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r2);
CPyL2: ;
    cpy_r_r3 = CPyDef_partially_defined___DefinedVariableTracker___start_branch_statement(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 584, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    cpy_r_r4 = CPyDef_partially_defined___Loop();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 585, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    cpy_r_loop = cpy_r_r4;
    cpy_r_r5 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_loops;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_while_stmt", "PossiblyUndefinedVariableVisitor", "loops", 586, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = PyList_Append(cpy_r_r5, cpy_r_loop);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 586, CPyStatic_partially_defined___globals);
        goto CPyL33;
    }
    cpy_r_r8 = ((mypy___nodes___WhileStmtObject *)cpy_r_o)->_body;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_nodes___Block___accept(cpy_r_r8, cpy_r_self);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 587, CPyStatic_partially_defined___globals);
        goto CPyL33;
    } else
        goto CPyL34;
CPyL7: ;
    cpy_r_r10 = ((mypy___partially_defined___LoopObject *)cpy_r_loop)->_has_break;
    CPy_DECREF(cpy_r_loop);
    cpy_r_has_break = cpy_r_r10;
    cpy_r_r11 = ((mypy___nodes___WhileStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_checker___is_true_literal(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 589, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    if (cpy_r_r12) goto CPyL11;
    cpy_r_r13 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_while_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 593, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r13);
CPyL10: ;
    cpy_r_r14 = CPyDef_partially_defined___DefinedVariableTracker___next_branch(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 593, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
CPyL11: ;
    cpy_r_r15 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_while_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 594, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r15);
CPyL12: ;
    cpy_r_r16 = CPyDef_partially_defined___DefinedVariableTracker___end_branch_statement(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 594, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    cpy_r_r17 = ((mypy___nodes___WhileStmtObject *)cpy_r_o)->_else_body;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 != cpy_r_r18;
    if (!cpy_r_r19) goto CPyL27;
    if (!cpy_r_has_break) goto CPyL19;
    cpy_r_r20 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_while_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 600, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r20);
CPyL16: ;
    cpy_r_r21 = CPyDef_partially_defined___DefinedVariableTracker___start_branch_statement(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 600, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    cpy_r_r22 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_while_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 601, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r22);
CPyL18: ;
    cpy_r_r23 = CPyDef_partially_defined___DefinedVariableTracker___next_branch(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 601, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
CPyL19: ;
    cpy_r_r24 = ((mypy___nodes___WhileStmtObject *)cpy_r_o)->_else_body;
    CPy_INCREF(cpy_r_r24);
    if (likely(cpy_r_r24 != Py_None))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_while_stmt", 602, CPyStatic_partially_defined___globals, "mypy.nodes.Block", cpy_r_r24);
        goto CPyL31;
    }
    cpy_r_r26 = PyObject_IsTrue(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 602, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL24;
    cpy_r_r29 = ((mypy___nodes___WhileStmtObject *)cpy_r_o)->_else_body;
    CPy_INCREF(cpy_r_r29);
    if (likely(cpy_r_r29 != Py_None))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_while_stmt", 603, CPyStatic_partially_defined___globals, "mypy.nodes.Block", cpy_r_r29);
        goto CPyL31;
    }
    cpy_r_r31 = CPyDef_nodes___Block___accept(cpy_r_r30, cpy_r_self);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 603, CPyStatic_partially_defined___globals);
        goto CPyL31;
    } else
        goto CPyL35;
CPyL24: ;
    if (!cpy_r_has_break) goto CPyL27;
    cpy_r_r32 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_while_stmt", "PossiblyUndefinedVariableVisitor", "tracker", 605, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r32);
CPyL26: ;
    cpy_r_r33 = CPyDef_partially_defined___DefinedVariableTracker___end_branch_statement(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 605, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
CPyL27: ;
    cpy_r_r34 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_loops;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_while_stmt", "PossiblyUndefinedVariableVisitor", "loops", 606, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r34);
CPyL28: ;
    cpy_r_r35 = CPyList_PopLast(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 606, CPyStatic_partially_defined___globals);
        goto CPyL31;
    }
    if (likely(Py_TYPE(cpy_r_r35) == CPyType_partially_defined___Loop))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeError("mypy.partially_defined.Loop", cpy_r_r35); 
        cpy_r_r36 = NULL;
    }
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 606, CPyStatic_partially_defined___globals);
        goto CPyL31;
    } else
        goto CPyL36;
CPyL30: ;
    return 1;
CPyL31: ;
    cpy_r_r37 = 2;
    return cpy_r_r37;
CPyL32: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
CPyL33: ;
    CPy_DecRef(cpy_r_loop);
    goto CPyL31;
CPyL34: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL7;
CPyL35: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL24;
CPyL36: ;
    CPy_DECREF(cpy_r_r36);
    goto CPyL30;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WhileStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt", 582, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WhileStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_while_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WhileStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_while_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_while_stmt__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypy___patterns___AsPatternObject *)cpy_r_o)->_name;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = ((mypy___patterns___AsPatternObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_as_pattern", 610, CPyStatic_partially_defined___globals, "mypy.nodes.NameExpr", cpy_r_r3);
        goto CPyL5;
    }
    cpy_r_r5 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_as_pattern", 610, CPyStatic_partially_defined___globals);
        goto CPyL5;
    }
CPyL3: ;
    cpy_r_r6 = CPyDef_traverser___ExtendedTraverserVisitor___visit_as_pattern(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_as_pattern", 611, CPyStatic_partially_defined___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___AsPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_as_pattern", 608, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___AsPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_as_pattern__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___AsPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_as_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_as_pattern__PatternVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypy___patterns___StarredPatternObject *)cpy_r_o)->_capture;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = ((mypy___patterns___StarredPatternObject *)cpy_r_o)->_capture;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_starred_pattern", 615, CPyStatic_partially_defined___globals, "mypy.nodes.NameExpr", cpy_r_r3);
        goto CPyL5;
    }
    cpy_r_r5 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue(cpy_r_self, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_starred_pattern", 615, CPyStatic_partially_defined___globals);
        goto CPyL5;
    }
CPyL3: ;
    cpy_r_r6 = CPyDef_traverser___ExtendedTraverserVisitor___visit_starred_pattern(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_starred_pattern", 616, CPyStatic_partially_defined___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_starred_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___StarredPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.StarredPattern", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_starred_pattern", 613, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_starred_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___StarredPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.StarredPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_starred_pattern__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_starred_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___StarredPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.StarredPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_starred_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_starred_pattern__PatternVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    int64_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    cpy_r_r0 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_builtins;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_name_expr", "PossiblyUndefinedVariableVisitor", "builtins", 619, CPyStatic_partially_defined___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PyDict_Contains(cpy_r_r1, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr", 619, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL10;
    cpy_r_r5 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_name_expr", "PossiblyUndefinedVariableVisitor", "tracker", 619, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r5);
CPyL4: ;
    cpy_r_r6 = CPyStatic_partially_defined___ScopeType___Global;
    if (unlikely(cpy_r_r6 == NULL)) {
        goto CPyL36;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"Global\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr", 619, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r8 = CPyDef_partially_defined___DefinedVariableTracker___in_scope(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr", 619, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    if (!cpy_r_r8) goto CPyL10;
    return 1;
CPyL10: ;
    cpy_r_r9 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_name_expr", "PossiblyUndefinedVariableVisitor", "tracker", 621, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r9);
CPyL11: ;
    cpy_r_r10 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_partially_defined___DefinedVariableTracker___is_possibly_undefined(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr", 621, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    if (!cpy_r_r11) goto CPyL16;
    cpy_r_r12 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___variable_may_be_undefined(cpy_r_self, cpy_r_r12, cpy_r_o);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr", 623, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    cpy_r_r14 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_name_expr", "PossiblyUndefinedVariableVisitor", "tracker", 625, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r14);
CPyL15: ;
    cpy_r_r15 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyDef_partially_defined___DefinedVariableTracker___record_definition(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr", 625, CPyStatic_partially_defined___globals);
        goto CPyL34;
    } else
        goto CPyL32;
CPyL16: ;
    cpy_r_r17 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_name_expr", "PossiblyUndefinedVariableVisitor", "tracker", 626, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r17);
CPyL17: ;
    cpy_r_r18 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_partially_defined___DefinedVariableTracker___is_defined_in_different_branch(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr", 626, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    if (!cpy_r_r19) goto CPyL27;
    cpy_r_r20 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_loops;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_name_expr", "PossiblyUndefinedVariableVisitor", "loops", 628, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r20);
CPyL20: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    CPy_DECREF(cpy_r_r20);
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = cpy_r_r23 != 0;
    if (cpy_r_r24) goto CPyL25;
    cpy_r_r25 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_try_depth;
    if (unlikely(cpy_r_r25 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_name_expr", "PossiblyUndefinedVariableVisitor", "try_depth", 628, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
CPyL22: ;
    cpy_r_r26 = cpy_r_r25 & 1;
    cpy_r_r27 = cpy_r_r26 != 0;
    if (!cpy_r_r27) goto CPyL24;
    cpy_r_r28 = CPyTagged_IsLt_(0, cpy_r_r25);
    if (cpy_r_r28) {
        goto CPyL25;
    } else
        goto CPyL26;
CPyL24: ;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r25 > (Py_ssize_t)0;
    if (!cpy_r_r29) goto CPyL26;
CPyL25: ;
    cpy_r_r30 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___variable_may_be_undefined(cpy_r_self, cpy_r_r30, cpy_r_o);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr", 631, CPyStatic_partially_defined___globals);
        goto CPyL34;
    } else
        goto CPyL32;
CPyL26: ;
    cpy_r_r32 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___var_used_before_def(cpy_r_self, cpy_r_r32, cpy_r_o);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr", 633, CPyStatic_partially_defined___globals);
        goto CPyL34;
    } else
        goto CPyL32;
CPyL27: ;
    cpy_r_r34 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_name_expr", "PossiblyUndefinedVariableVisitor", "tracker", 634, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r34);
CPyL28: ;
    cpy_r_r35 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyDef_partially_defined___DefinedVariableTracker___is_undefined(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr", 634, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    if (!cpy_r_r36) goto CPyL32;
    cpy_r_r37 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_name_expr", "PossiblyUndefinedVariableVisitor", "tracker", 641, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r37);
CPyL31: ;
    cpy_r_r38 = CPyDef_partially_defined___DefinedVariableTracker___record_undefined_ref(cpy_r_r37, cpy_r_o);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr", 641, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
CPyL32: ;
    cpy_r_r39 = CPyDef_traverser___ExtendedTraverserVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr", 642, CPyStatic_partially_defined___globals);
        goto CPyL34;
    }
    return 1;
CPyL34: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL5;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr", 618, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_idx;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    cpy_r_r0 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
    cpy_r_r2 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_target;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
CPyL1: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL11;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL11;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_nodes___Expression)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_with_stmt", 645, CPyStatic_partially_defined___globals, "mypy.nodes.Expression", cpy_r_r12);
        goto CPyL12;
    }
    cpy_r_expr = cpy_r_r13;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (PyObject_TypeCheck(cpy_r_r14, CPyType_nodes___Expression))
        cpy_r_r15 = cpy_r_r14;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL4627;
    if (cpy_r_r14 == Py_None)
        cpy_r_r15 = cpy_r_r14;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL4627;
    CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_with_stmt", 645, CPyStatic_partially_defined___globals, "mypy.nodes.Expression or None", cpy_r_r14);
    goto CPyL13;
__LL4627: ;
    cpy_r_idx = cpy_r_r15;
    cpy_r_r16 = CPY_GET_METHOD_TRAIT(cpy_r_expr, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_expr, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_expr);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_with_stmt", 646, CPyStatic_partially_defined___globals);
        goto CPyL14;
    } else
        goto CPyL15;
CPyL6: ;
    cpy_r_r17 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_lvalue(cpy_r_self, cpy_r_idx);
    CPy_DECREF(cpy_r_idx);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_with_stmt", 647, CPyStatic_partially_defined___globals);
        goto CPyL12;
    }
    cpy_r_r18 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r18;
    cpy_r_r19 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r19;
    goto CPyL1;
CPyL8: ;
    cpy_r_r20 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_body;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyDef_nodes___Block___accept(cpy_r_r20, cpy_r_self);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_with_stmt", 648, CPyStatic_partially_defined___globals);
        goto CPyL10;
    } else
        goto CPyL16;
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r22 = 2;
    return cpy_r_r22;
CPyL11: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_expr);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_idx);
    goto CPyL10;
CPyL15: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL6;
CPyL16: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL9;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_with_stmt", 644, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_with_stmt__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_with_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_with_stmt__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___process_definition(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_class_def", 651, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    cpy_r_r2 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_class_def", "PossiblyUndefinedVariableVisitor", "tracker", 652, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r2);
CPyL2: ;
    cpy_r_r3 = CPyStatic_partially_defined___ScopeType___Class;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL11;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"Class\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_class_def", 652, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r5 = CPyDef_partially_defined___DefinedVariableTracker___enter_scope(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_class_def", 652, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    cpy_r_r6 = CPyDef_traverser___ExtendedTraverserVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_class_def", 653, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    cpy_r_r7 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_class_def", "PossiblyUndefinedVariableVisitor", "tracker", 654, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r7);
CPyL8: ;
    cpy_r_r8 = CPyDef_partially_defined___DefinedVariableTracker___exit_scope(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_class_def", 654, CPyStatic_partially_defined___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL11: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL3;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_class_def", 650, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_class_def__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_class_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_class_def__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_mod;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_alias;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_names;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = ((mypy___nodes___ImportObject *)cpy_r_o)->_ids;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL17;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    PyObject *__tmp4628;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp4628 = NULL;
        goto __LL4629;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp4628 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp4628 = NULL;
    }
    if (__tmp4628 == NULL) goto __LL4629;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 1)))
        __tmp4628 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp4628 = NULL;
    }
    if (__tmp4628 != NULL) goto __LL4630;
    if (PyTuple_GET_ITEM(cpy_r_r6, 1) == Py_None)
        __tmp4628 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp4628 = NULL;
    }
    if (__tmp4628 != NULL) goto __LL4630;
    __tmp4628 = NULL;
__LL4630: ;
    if (__tmp4628 == NULL) goto __LL4629;
    __tmp4628 = cpy_r_r6;
__LL4629: ;
    if (unlikely(__tmp4628 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r6); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp4631 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp4631);
        PyObject *__tmp4632;
        if (likely(PyUnicode_Check(__tmp4631)))
            __tmp4632 = __tmp4631;
        else {
            CPy_TypeError("str", __tmp4631); 
            __tmp4632 = NULL;
        }
        cpy_r_r7.f0 = __tmp4632;
        PyObject *__tmp4633 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp4633);
        PyObject *__tmp4634;
        if (PyUnicode_Check(__tmp4633))
            __tmp4634 = __tmp4633;
        else {
            __tmp4634 = NULL;
        }
        if (__tmp4634 != NULL) goto __LL4635;
        if (__tmp4633 == Py_None)
            __tmp4634 = __tmp4633;
        else {
            __tmp4634 = NULL;
        }
        if (__tmp4634 != NULL) goto __LL4635;
        CPy_TypeError("str or None", __tmp4633); 
        __tmp4634 = NULL;
__LL4635: ;
        cpy_r_r7.f1 = __tmp4634;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_import", 657, CPyStatic_partially_defined___globals);
        goto CPyL18;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_mod = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r_alias = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_alias != cpy_r_r10;
    if (cpy_r_r11) {
        goto CPyL19;
    } else
        goto CPyL20;
CPyL4: ;
    cpy_r_r12 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_import", "PossiblyUndefinedVariableVisitor", "tracker", 659, CPyStatic_partially_defined___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r12);
CPyL5: ;
    if (likely(cpy_r_alias != Py_None))
        cpy_r_r13 = cpy_r_alias;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_import", 659, CPyStatic_partially_defined___globals, "str", cpy_r_alias);
        goto CPyL22;
    }
    cpy_r_r14 = CPyDef_partially_defined___DefinedVariableTracker___record_definition(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_import", 659, CPyStatic_partially_defined___globals);
        goto CPyL18;
    } else
        goto CPyL13;
CPyL7: ;
    cpy_r_r15 = CPyStatics[224]; /* '.' */
    cpy_r_r16 = PyUnicode_Split(cpy_r_mod, cpy_r_r15, -1);
    CPy_DECREF(cpy_r_mod);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_import", 662, CPyStatic_partially_defined___globals);
        goto CPyL18;
    }
    cpy_r_names = cpy_r_r16;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_names)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = cpy_r_r19 != 0;
    if (!cpy_r_r20) goto CPyL23;
    cpy_r_r21 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_import", "PossiblyUndefinedVariableVisitor", "tracker", 666, CPyStatic_partially_defined___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r21);
CPyL10: ;
    cpy_r_r22 = CPyList_GetItemShort(cpy_r_names, 0);
    CPy_DECREF(cpy_r_names);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_import", 666, CPyStatic_partially_defined___globals);
        goto CPyL25;
    }
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_import", 666, CPyStatic_partially_defined___globals, "str", cpy_r_r22);
        goto CPyL25;
    }
    cpy_r_r24 = CPyDef_partially_defined___DefinedVariableTracker___record_definition(cpy_r_r21, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_import", 666, CPyStatic_partially_defined___globals);
        goto CPyL18;
    }
CPyL13: ;
    cpy_r_r25 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r25;
    goto CPyL1;
CPyL14: ;
    cpy_r_r26 = CPyDef_traverser___ExtendedTraverserVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_import", 667, CPyStatic_partially_defined___globals);
        goto CPyL16;
    }
    return 1;
CPyL16: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
CPyL17: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL16;
CPyL19: ;
    CPy_DECREF(cpy_r_mod);
    goto CPyL4;
CPyL20: ;
    CPy_DECREF(cpy_r_alias);
    goto CPyL7;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_alias);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    goto CPyL16;
CPyL23: ;
    CPy_DECREF(cpy_r_names);
    goto CPyL13;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_names);
    goto CPyL16;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    goto CPyL16;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_import", 656, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_import__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_import__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_import__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_import__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_mod;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_alias;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypy___nodes___ImportFromObject *)cpy_r_o)->_names;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL12;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    PyObject *__tmp4636;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp4636 = NULL;
        goto __LL4637;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp4636 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp4636 = NULL;
    }
    if (__tmp4636 == NULL) goto __LL4637;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 1)))
        __tmp4636 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp4636 = NULL;
    }
    if (__tmp4636 != NULL) goto __LL4638;
    if (PyTuple_GET_ITEM(cpy_r_r6, 1) == Py_None)
        __tmp4636 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp4636 = NULL;
    }
    if (__tmp4636 != NULL) goto __LL4638;
    __tmp4636 = NULL;
__LL4638: ;
    if (__tmp4636 == NULL) goto __LL4637;
    __tmp4636 = cpy_r_r6;
__LL4637: ;
    if (unlikely(__tmp4636 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r6); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp4639 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp4639);
        PyObject *__tmp4640;
        if (likely(PyUnicode_Check(__tmp4639)))
            __tmp4640 = __tmp4639;
        else {
            CPy_TypeError("str", __tmp4639); 
            __tmp4640 = NULL;
        }
        cpy_r_r7.f0 = __tmp4640;
        PyObject *__tmp4641 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp4641);
        PyObject *__tmp4642;
        if (PyUnicode_Check(__tmp4641))
            __tmp4642 = __tmp4641;
        else {
            __tmp4642 = NULL;
        }
        if (__tmp4642 != NULL) goto __LL4643;
        if (__tmp4641 == Py_None)
            __tmp4642 = __tmp4641;
        else {
            __tmp4642 = NULL;
        }
        if (__tmp4642 != NULL) goto __LL4643;
        CPy_TypeError("str or None", __tmp4641); 
        __tmp4642 = NULL;
__LL4643: ;
        cpy_r_r7.f1 = __tmp4642;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_import_from", 670, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_mod = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r_alias = cpy_r_r9;
    cpy_r_name = cpy_r_alias;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_name == cpy_r_r10;
    if (cpy_r_r11) {
        goto CPyL14;
    } else
        goto CPyL15;
CPyL4: ;
    cpy_r_name = cpy_r_mod;
CPyL5: ;
    cpy_r_r12 = ((mypy___partially_defined___PossiblyUndefinedVariableVisitorObject *)cpy_r_self)->_tracker;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/partially_defined.py", "visit_import_from", "PossiblyUndefinedVariableVisitor", "tracker", 674, CPyStatic_partially_defined___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r12);
CPyL6: ;
    if (likely(cpy_r_name != Py_None))
        cpy_r_r13 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "visit_import_from", 674, CPyStatic_partially_defined___globals, "str", cpy_r_name);
        goto CPyL17;
    }
    cpy_r_r14 = CPyDef_partially_defined___DefinedVariableTracker___record_definition(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_import_from", 674, CPyStatic_partially_defined___globals);
        goto CPyL13;
    }
    cpy_r_r15 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r15;
    goto CPyL1;
CPyL9: ;
    cpy_r_r16 = CPyDef_traverser___ExtendedTraverserVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "visit_import_from", 675, CPyStatic_partially_defined___globals);
        goto CPyL11;
    }
    return 1;
CPyL11: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL12: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL14: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL4;
CPyL15: ;
    CPy_DECREF(cpy_r_mod);
    goto CPyL5;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_name);
    goto CPyL11;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    goto CPyL11;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    char retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_import_from", 669, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_import_from__NodeVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

PyObject *CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_partially_defined___PossiblyUndefinedVariableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.partially_defined.PossiblyUndefinedVariableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor___visit_import_from__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/partially_defined.py", "visit_import_from__StatementVisitor_glue", -1, CPyStatic_partially_defined___globals);
    return NULL;
}

char CPyDef_partially_defined_____top_level__(void) {
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
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
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
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    int32_t cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    PyObject **cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    int32_t cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    int32_t cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    int32_t cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    int32_t cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    int32_t cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    int32_t cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    int32_t cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    int32_t cpy_r_r219;
    char cpy_r_r220;
    char cpy_r_r221;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", -1, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_partially_defined___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 1, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9565]; /* ('Enum',) */
    cpy_r_r10 = CPyStatics[3876]; /* 'enum' */
    cpy_r_r11 = CPyStatic_partially_defined___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 3, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyModule_enum = cpy_r_r12;
    CPy_INCREF(CPyModule_enum);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9566]; /* ('checker', 'errorcodes') */
    cpy_r_r14 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r15 = CPyStatic_partially_defined___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 5, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyModule_mypy = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9135]; /* ('MessageBuilder',) */
    cpy_r_r18 = CPyStatics[530]; /* 'mypy.messages' */
    cpy_r_r19 = CPyStatic_partially_defined___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 6, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyModule_mypy___messages = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___messages);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9567]; /* ('AssertStmt', 'AssignmentExpr', 'AssignmentStmt',
                                     'BreakStmt', 'ClassDef', 'Context', 'ContinueStmt',
                                     'DictionaryComprehension', 'Expression',
                                     'ExpressionStmt', 'ForStmt', 'FuncDef', 'FuncItem',
                                     'GeneratorExpr', 'GlobalDecl', 'IfStmt', 'Import',
                                     'ImportFrom', 'LambdaExpr', 'ListExpr', 'Lvalue',
                                     'MatchStmt', 'MypyFile', 'NameExpr', 'NonlocalDecl',
                                     'RaiseStmt', 'ReturnStmt', 'StarExpr', 'SymbolTable',
                                     'TryStmt', 'TupleExpr', 'WhileStmt', 'WithStmt',
                                     'implicit_module_attrs') */
    cpy_r_r22 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r23 = CPyStatic_partially_defined___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 7, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyModule_mypy___nodes = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r26 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r27 = CPyStatic_partially_defined___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 43, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyModule_mypy___options = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9193]; /* ('AsPattern', 'StarredPattern') */
    cpy_r_r30 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r31 = CPyStatic_partially_defined___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 44, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyModule_mypy___patterns = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___patterns);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9568]; /* ('ALWAYS_TRUE', 'infer_pattern_value') */
    cpy_r_r34 = CPyStatics[2491]; /* 'mypy.reachability' */
    cpy_r_r35 = CPyStatic_partially_defined___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 45, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyModule_mypy___reachability = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___reachability);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9436]; /* ('ExtendedTraverserVisitor',) */
    cpy_r_r38 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r39 = CPyStatic_partially_defined___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 46, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyModule_mypy___traverser = cpy_r_r40;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[9569]; /* ('Type', 'UninhabitedType') */
    cpy_r_r42 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r43 = CPyStatic_partially_defined___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 47, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyModule_mypy___types = cpy_r_r44;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = NULL;
    cpy_r_r46 = CPyStatics[538]; /* 'mypy.partially_defined' */
    cpy_r_r47 = (PyObject *)CPyType_partially_defined___BranchState_template;
    cpy_r_r48 = CPyType_FromTemplate(cpy_r_r47, cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 50, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r49 = CPyDef_partially_defined___BranchState_trait_vtable_setup();
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", -1, CPyStatic_partially_defined___globals);
        goto CPyL74;
    }
    cpy_r_r50 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r51 = CPyStatics[4320]; /* 'may_be_defined' */
    cpy_r_r52 = CPyStatics[4321]; /* 'must_be_defined' */
    cpy_r_r53 = CPyStatics[4322]; /* 'skipped' */
    cpy_r_r54 = PyTuple_Pack(3, cpy_r_r51, cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 50, CPyStatic_partially_defined___globals);
        goto CPyL74;
    }
    cpy_r_r55 = PyObject_SetAttr(cpy_r_r48, cpy_r_r50, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 50, CPyStatic_partially_defined___globals);
        goto CPyL74;
    }
    CPyType_partially_defined___BranchState = (PyTypeObject *)cpy_r_r48;
    CPy_INCREF(CPyType_partially_defined___BranchState);
    cpy_r_r57 = CPyStatic_partially_defined___globals;
    cpy_r_r58 = CPyStatics[4323]; /* 'BranchState' */
    cpy_r_r59 = CPyDict_SetItem(cpy_r_r57, cpy_r_r58, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 50, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r61 = NULL;
    cpy_r_r62 = CPyStatics[538]; /* 'mypy.partially_defined' */
    cpy_r_r63 = (PyObject *)CPyType_partially_defined___BranchStatement_template;
    cpy_r_r64 = CPyType_FromTemplate(cpy_r_r63, cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 81, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r65 = CPyDef_partially_defined___BranchStatement_trait_vtable_setup();
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", -1, CPyStatic_partially_defined___globals);
        goto CPyL75;
    }
    cpy_r_r66 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r67 = CPyStatics[4324]; /* 'initial_state' */
    cpy_r_r68 = CPyStatics[4325]; /* 'branches' */
    cpy_r_r69 = PyTuple_Pack(2, cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 81, CPyStatic_partially_defined___globals);
        goto CPyL75;
    }
    cpy_r_r70 = PyObject_SetAttr(cpy_r_r64, cpy_r_r66, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 81, CPyStatic_partially_defined___globals);
        goto CPyL75;
    }
    CPyType_partially_defined___BranchStatement = (PyTypeObject *)cpy_r_r64;
    CPy_INCREF(CPyType_partially_defined___BranchStatement);
    cpy_r_r72 = CPyStatic_partially_defined___globals;
    cpy_r_r73 = CPyStatics[4326]; /* 'BranchStatement' */
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r72, cpy_r_r73, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 81, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r76 = CPyModule_enum;
    cpy_r_r77 = CPyStatics[3874]; /* 'Enum' */
    cpy_r_r78 = CPyObject_GetAttr(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r79 = PyTuple_Pack(1, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r80 = (PyObject *)&PyType_Type;
    cpy_r_r81 = CPy_CalculateMetaclass(cpy_r_r80, cpy_r_r79);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL76;
    }
    cpy_r_r82 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r83 = PyObject_HasAttr(cpy_r_r81, cpy_r_r82);
    if (!cpy_r_r83) goto CPyL31;
    cpy_r_r84 = CPyStatics[4327]; /* 'ScopeType' */
    cpy_r_r85 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r81, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL76;
    }
    PyObject *cpy_r_r87[2] = {cpy_r_r84, cpy_r_r79};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = _PyObject_Vectorcall(cpy_r_r86, cpy_r_r88, 2, 0);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL76;
    }
    if (likely(PyDict_Check(cpy_r_r89)))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals, "dict", cpy_r_r89);
        goto CPyL76;
    }
    cpy_r_r91 = cpy_r_r90;
    goto CPyL33;
CPyL31: ;
    cpy_r_r92 = PyDict_New();
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL76;
    }
    cpy_r_r91 = cpy_r_r92;
CPyL33: ;
    cpy_r_r93 = PyDict_New();
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL77;
    }
    cpy_r_r94 = (PyObject *)&PyLong_Type;
    cpy_r_r95 = CPyStatics[4328]; /* 'Global' */
    cpy_r_r96 = CPyDict_SetItem(cpy_r_r93, cpy_r_r95, cpy_r_r94);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 173, CPyStatic_partially_defined___globals);
        goto CPyL78;
    }
    cpy_r_r98 = CPyStatics[4328]; /* 'Global' */
    cpy_r_r99 = CPyStatics[9016]; /* 1 */
    cpy_r_r100 = CPyDict_SetItem(cpy_r_r91, cpy_r_r98, cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 173, CPyStatic_partially_defined___globals);
        goto CPyL78;
    }
    cpy_r_r102 = (PyObject *)&PyLong_Type;
    cpy_r_r103 = CPyStatics[4329]; /* 'Class' */
    cpy_r_r104 = CPyDict_SetItem(cpy_r_r93, cpy_r_r103, cpy_r_r102);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 174, CPyStatic_partially_defined___globals);
        goto CPyL78;
    }
    cpy_r_r106 = CPyStatics[4329]; /* 'Class' */
    cpy_r_r107 = CPyStatics[9018]; /* 2 */
    cpy_r_r108 = CPyDict_SetItem(cpy_r_r91, cpy_r_r106, cpy_r_r107);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 174, CPyStatic_partially_defined___globals);
        goto CPyL78;
    }
    cpy_r_r110 = (PyObject *)&PyLong_Type;
    cpy_r_r111 = CPyStatics[4330]; /* 'Func' */
    cpy_r_r112 = CPyDict_SetItem(cpy_r_r93, cpy_r_r111, cpy_r_r110);
    cpy_r_r113 = cpy_r_r112 >= 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 175, CPyStatic_partially_defined___globals);
        goto CPyL78;
    }
    cpy_r_r114 = CPyStatics[4330]; /* 'Func' */
    cpy_r_r115 = CPyStatics[9026]; /* 3 */
    cpy_r_r116 = CPyDict_SetItem(cpy_r_r91, cpy_r_r114, cpy_r_r115);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 175, CPyStatic_partially_defined___globals);
        goto CPyL78;
    }
    cpy_r_r118 = (PyObject *)&PyLong_Type;
    cpy_r_r119 = CPyStatics[4331]; /* 'Generator' */
    cpy_r_r120 = CPyDict_SetItem(cpy_r_r93, cpy_r_r119, cpy_r_r118);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 176, CPyStatic_partially_defined___globals);
        goto CPyL78;
    }
    cpy_r_r122 = CPyStatics[4331]; /* 'Generator' */
    cpy_r_r123 = CPyStatics[9025]; /* 4 */
    cpy_r_r124 = CPyDict_SetItem(cpy_r_r91, cpy_r_r122, cpy_r_r123);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 176, CPyStatic_partially_defined___globals);
        goto CPyL78;
    }
    cpy_r_r126 = CPyStatics[4327]; /* 'ScopeType' */
    cpy_r_r127 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r128 = CPyDict_SetItem(cpy_r_r91, cpy_r_r127, cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL77;
    }
    cpy_r_r130 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r131 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r132 = CPyDict_SetItem(cpy_r_r91, cpy_r_r131, cpy_r_r130);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL77;
    }
    cpy_r_r134 = CPyStatics[538]; /* 'mypy.partially_defined' */
    cpy_r_r135 = CPyStatics[619]; /* '__module__' */
    cpy_r_r136 = CPyDict_SetItem(cpy_r_r91, cpy_r_r135, cpy_r_r134);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL77;
    }
    PyObject *cpy_r_r138[3] = {cpy_r_r126, cpy_r_r79, cpy_r_r91};
    cpy_r_r139 = (PyObject **)&cpy_r_r138;
    cpy_r_r140 = _PyObject_Vectorcall(cpy_r_r81, cpy_r_r139, 3, 0);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL77;
    }
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r91);
    CPyType_partially_defined___ScopeType = (PyTypeObject *)cpy_r_r140;
    CPy_INCREF(CPyType_partially_defined___ScopeType);
    cpy_r_r141 = CPyStatic_partially_defined___globals;
    cpy_r_r142 = CPyStatics[4327]; /* 'ScopeType' */
    cpy_r_r143 = CPyDict_SetItem(cpy_r_r141, cpy_r_r142, cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    cpy_r_r144 = cpy_r_r143 >= 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r145 = (PyObject *)CPyType_partially_defined___ScopeType;
    cpy_r_r146 = CPyStatics[4328]; /* 'Global' */
    cpy_r_r147 = CPyObject_GetAttr(cpy_r_r145, cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyStatic_partially_defined___ScopeType___Global = cpy_r_r147;
    CPy_INCREF(CPyStatic_partially_defined___ScopeType___Global);
    CPy_DECREF(cpy_r_r147);
    cpy_r_r148 = CPyStatics[4329]; /* 'Class' */
    cpy_r_r149 = CPyObject_GetAttr(cpy_r_r145, cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyStatic_partially_defined___ScopeType___Class = cpy_r_r149;
    CPy_INCREF(CPyStatic_partially_defined___ScopeType___Class);
    CPy_DECREF(cpy_r_r149);
    cpy_r_r150 = CPyStatics[4330]; /* 'Func' */
    cpy_r_r151 = CPyObject_GetAttr(cpy_r_r145, cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyStatic_partially_defined___ScopeType___Func = cpy_r_r151;
    CPy_INCREF(CPyStatic_partially_defined___ScopeType___Func);
    CPy_DECREF(cpy_r_r151);
    cpy_r_r152 = CPyStatics[4331]; /* 'Generator' */
    cpy_r_r153 = CPyObject_GetAttr(cpy_r_r145, cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 172, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    CPyStatic_partially_defined___ScopeType___Generator = cpy_r_r153;
    CPy_INCREF(CPyStatic_partially_defined___ScopeType___Generator);
    CPy_DECREF(cpy_r_r153);
    cpy_r_r154 = NULL;
    cpy_r_r155 = CPyStatics[538]; /* 'mypy.partially_defined' */
    cpy_r_r156 = (PyObject *)CPyType_partially_defined___Scope_template;
    cpy_r_r157 = CPyType_FromTemplate(cpy_r_r156, cpy_r_r154, cpy_r_r155);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 179, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r158 = CPyDef_partially_defined___Scope_trait_vtable_setup();
    if (unlikely(cpy_r_r158 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", -1, CPyStatic_partially_defined___globals);
        goto CPyL79;
    }
    cpy_r_r159 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r160 = CPyStatics[4332]; /* 'branch_stmts' */
    cpy_r_r161 = CPyStatics[4333]; /* 'scope_type' */
    cpy_r_r162 = CPyStatics[4334]; /* 'undefined_refs' */
    cpy_r_r163 = PyTuple_Pack(3, cpy_r_r160, cpy_r_r161, cpy_r_r162);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 179, CPyStatic_partially_defined___globals);
        goto CPyL79;
    }
    cpy_r_r164 = PyObject_SetAttr(cpy_r_r157, cpy_r_r159, cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 179, CPyStatic_partially_defined___globals);
        goto CPyL79;
    }
    CPyType_partially_defined___Scope = (PyTypeObject *)cpy_r_r157;
    CPy_INCREF(CPyType_partially_defined___Scope);
    cpy_r_r166 = CPyStatic_partially_defined___globals;
    cpy_r_r167 = CPyStatics[1009]; /* 'Scope' */
    cpy_r_r168 = CPyDict_SetItem(cpy_r_r166, cpy_r_r167, cpy_r_r157);
    CPy_DECREF(cpy_r_r157);
    cpy_r_r169 = cpy_r_r168 >= 0;
    if (unlikely(!cpy_r_r169)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 179, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r170 = NULL;
    cpy_r_r171 = CPyStatics[538]; /* 'mypy.partially_defined' */
    cpy_r_r172 = (PyObject *)CPyType_partially_defined___DefinedVariableTracker_template;
    cpy_r_r173 = CPyType_FromTemplate(cpy_r_r172, cpy_r_r170, cpy_r_r171);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 199, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r174 = CPyDef_partially_defined___DefinedVariableTracker_trait_vtable_setup();
    if (unlikely(cpy_r_r174 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", -1, CPyStatic_partially_defined___globals);
        goto CPyL80;
    }
    cpy_r_r175 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r176 = CPyStatics[4335]; /* 'scopes' */
    cpy_r_r177 = CPyStatics[4336]; /* 'disable_branch_skip' */
    cpy_r_r178 = PyTuple_Pack(2, cpy_r_r176, cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 199, CPyStatic_partially_defined___globals);
        goto CPyL80;
    }
    cpy_r_r179 = PyObject_SetAttr(cpy_r_r173, cpy_r_r175, cpy_r_r178);
    CPy_DECREF(cpy_r_r178);
    cpy_r_r180 = cpy_r_r179 >= 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 199, CPyStatic_partially_defined___globals);
        goto CPyL80;
    }
    CPyType_partially_defined___DefinedVariableTracker = (PyTypeObject *)cpy_r_r173;
    CPy_INCREF(CPyType_partially_defined___DefinedVariableTracker);
    cpy_r_r181 = CPyStatic_partially_defined___globals;
    cpy_r_r182 = CPyStatics[4337]; /* 'DefinedVariableTracker' */
    cpy_r_r183 = CPyDict_SetItem(cpy_r_r181, cpy_r_r182, cpy_r_r173);
    CPy_DECREF(cpy_r_r173);
    cpy_r_r184 = cpy_r_r183 >= 0;
    if (unlikely(!cpy_r_r184)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 199, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r185 = NULL;
    cpy_r_r186 = CPyStatics[538]; /* 'mypy.partially_defined' */
    cpy_r_r187 = (PyObject *)CPyType_partially_defined___Loop_template;
    cpy_r_r188 = CPyType_FromTemplate(cpy_r_r187, cpy_r_r185, cpy_r_r186);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 294, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r189 = CPyDef_partially_defined___Loop_trait_vtable_setup();
    if (unlikely(cpy_r_r189 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", -1, CPyStatic_partially_defined___globals);
        goto CPyL81;
    }
    cpy_r_r190 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r191 = CPyStatics[4338]; /* 'has_break' */
    cpy_r_r192 = PyTuple_Pack(1, cpy_r_r191);
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 294, CPyStatic_partially_defined___globals);
        goto CPyL81;
    }
    cpy_r_r193 = PyObject_SetAttr(cpy_r_r188, cpy_r_r190, cpy_r_r192);
    CPy_DECREF(cpy_r_r192);
    cpy_r_r194 = cpy_r_r193 >= 0;
    if (unlikely(!cpy_r_r194)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 294, CPyStatic_partially_defined___globals);
        goto CPyL81;
    }
    CPyType_partially_defined___Loop = (PyTypeObject *)cpy_r_r188;
    CPy_INCREF(CPyType_partially_defined___Loop);
    cpy_r_r195 = CPyStatic_partially_defined___globals;
    cpy_r_r196 = CPyStatics[4339]; /* 'Loop' */
    cpy_r_r197 = CPyDict_SetItem(cpy_r_r195, cpy_r_r196, cpy_r_r188);
    CPy_DECREF(cpy_r_r188);
    cpy_r_r198 = cpy_r_r197 >= 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 294, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r199 = (PyObject *)CPyType_traverser___ExtendedTraverserVisitor;
    cpy_r_r200 = PyTuple_Pack(1, cpy_r_r199);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 299, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r201 = CPyStatics[538]; /* 'mypy.partially_defined' */
    cpy_r_r202 = (PyObject *)CPyType_partially_defined___PossiblyUndefinedVariableVisitor_template;
    cpy_r_r203 = CPyType_FromTemplate(cpy_r_r202, cpy_r_r200, cpy_r_r201);
    CPy_DECREF(cpy_r_r200);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 299, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    cpy_r_r204 = CPyDef_partially_defined___PossiblyUndefinedVariableVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r204 == 2)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", -1, CPyStatic_partially_defined___globals);
        goto CPyL82;
    }
    cpy_r_r205 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r206 = CPyStatics[1098]; /* 'msg' */
    cpy_r_r207 = CPyStatics[4340]; /* 'type_map' */
    cpy_r_r208 = CPyStatics[159]; /* 'options' */
    cpy_r_r209 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r210 = CPyStatics[4341]; /* 'loops' */
    cpy_r_r211 = CPyStatics[4342]; /* 'try_depth' */
    cpy_r_r212 = CPyStatics[4343]; /* 'tracker' */
    cpy_r_r213 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r214 = PyTuple_Pack(8, cpy_r_r206, cpy_r_r207, cpy_r_r208, cpy_r_r209, cpy_r_r210, cpy_r_r211, cpy_r_r212, cpy_r_r213);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 299, CPyStatic_partially_defined___globals);
        goto CPyL82;
    }
    cpy_r_r215 = PyObject_SetAttr(cpy_r_r203, cpy_r_r205, cpy_r_r214);
    CPy_DECREF(cpy_r_r214);
    cpy_r_r216 = cpy_r_r215 >= 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 299, CPyStatic_partially_defined___globals);
        goto CPyL82;
    }
    CPyType_partially_defined___PossiblyUndefinedVariableVisitor = (PyTypeObject *)cpy_r_r203;
    CPy_INCREF(CPyType_partially_defined___PossiblyUndefinedVariableVisitor);
    cpy_r_r217 = CPyStatic_partially_defined___globals;
    cpy_r_r218 = CPyStatics[537]; /* 'PossiblyUndefinedVariableVisitor' */
    cpy_r_r219 = CPyDict_SetItem(cpy_r_r217, cpy_r_r218, cpy_r_r203);
    CPy_DECREF(cpy_r_r203);
    cpy_r_r220 = cpy_r_r219 >= 0;
    if (unlikely(!cpy_r_r220)) {
        CPy_AddTraceback("mypy/partially_defined.py", "<module>", 299, CPyStatic_partially_defined___globals);
        goto CPyL73;
    }
    return 1;
CPyL73: ;
    cpy_r_r221 = 2;
    return cpy_r_r221;
CPyL74: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL73;
CPyL75: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL73;
CPyL76: ;
    CPy_DecRef(cpy_r_r79);
    goto CPyL73;
CPyL77: ;
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r91);
    goto CPyL73;
CPyL78: ;
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r93);
    goto CPyL73;
CPyL79: ;
    CPy_DecRef(cpy_r_r157);
    goto CPyL73;
CPyL80: ;
    CPy_DecRef(cpy_r_r173);
    goto CPyL73;
CPyL81: ;
    CPy_DecRef(cpy_r_r188);
    goto CPyL73;
CPyL82: ;
    CPy_DecRef(cpy_r_r203);
    goto CPyL73;
}
