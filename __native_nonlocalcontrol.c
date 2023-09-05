#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *nonlocalcontrol___NonlocalControl_setup(PyTypeObject *type);
PyObject *CPyDef_nonlocalcontrol___NonlocalControl(void);

static PyObject *
nonlocalcontrol___NonlocalControl_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_nonlocalcontrol___NonlocalControl) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return nonlocalcontrol___NonlocalControl_setup(type);
}

static int
nonlocalcontrol___NonlocalControl_traverse(mypyc___irbuild___nonlocalcontrol___NonlocalControlObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
nonlocalcontrol___NonlocalControl_clear(mypyc___irbuild___nonlocalcontrol___NonlocalControlObject *self)
{
    return 0;
}

static void
nonlocalcontrol___NonlocalControl_dealloc(mypyc___irbuild___nonlocalcontrol___NonlocalControlObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, nonlocalcontrol___NonlocalControl_dealloc)
    nonlocalcontrol___NonlocalControl_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem nonlocalcontrol___NonlocalControl_vtable[3];
static bool
CPyDef_nonlocalcontrol___NonlocalControl_trait_vtable_setup(void)
{
    CPyVTableItem nonlocalcontrol___NonlocalControl_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_nonlocalcontrol___NonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___NonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___NonlocalControl___gen_return,
    };
    memcpy(nonlocalcontrol___NonlocalControl_vtable, nonlocalcontrol___NonlocalControl_vtable_scratch, sizeof(nonlocalcontrol___NonlocalControl_vtable));
    return 1;
}


static PyGetSetDef nonlocalcontrol___NonlocalControl_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef nonlocalcontrol___NonlocalControl_methods[] = {
    {"gen_break",
     (PyCFunction)CPyPy_nonlocalcontrol___NonlocalControl___gen_break,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_continue",
     (PyCFunction)CPyPy_nonlocalcontrol___NonlocalControl___gen_continue,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_return",
     (PyCFunction)CPyPy_nonlocalcontrol___NonlocalControl___gen_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_nonlocalcontrol___NonlocalControl_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "NonlocalControl",
    .tp_new = nonlocalcontrol___NonlocalControl_new,
    .tp_dealloc = (destructor)nonlocalcontrol___NonlocalControl_dealloc,
    .tp_traverse = (traverseproc)nonlocalcontrol___NonlocalControl_traverse,
    .tp_clear = (inquiry)nonlocalcontrol___NonlocalControl_clear,
    .tp_getset = nonlocalcontrol___NonlocalControl_getseters,
    .tp_methods = nonlocalcontrol___NonlocalControl_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___nonlocalcontrol___NonlocalControlObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_nonlocalcontrol___NonlocalControl_template = &CPyType_nonlocalcontrol___NonlocalControl_template_;

static PyObject *
nonlocalcontrol___NonlocalControl_setup(PyTypeObject *type)
{
    mypyc___irbuild___nonlocalcontrol___NonlocalControlObject *self;
    self = (mypyc___irbuild___nonlocalcontrol___NonlocalControlObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = nonlocalcontrol___NonlocalControl_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_nonlocalcontrol___NonlocalControl(void)
{
    PyObject *self = nonlocalcontrol___NonlocalControl_setup(CPyType_nonlocalcontrol___NonlocalControl);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *nonlocalcontrol___BaseNonlocalControl_setup(PyTypeObject *type);
PyObject *CPyDef_nonlocalcontrol___BaseNonlocalControl(void);

static PyObject *
nonlocalcontrol___BaseNonlocalControl_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_nonlocalcontrol___BaseNonlocalControl) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return nonlocalcontrol___BaseNonlocalControl_setup(type);
}

static int
nonlocalcontrol___BaseNonlocalControl_traverse(mypyc___irbuild___nonlocalcontrol___BaseNonlocalControlObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
nonlocalcontrol___BaseNonlocalControl_clear(mypyc___irbuild___nonlocalcontrol___BaseNonlocalControlObject *self)
{
    return 0;
}

static void
nonlocalcontrol___BaseNonlocalControl_dealloc(mypyc___irbuild___nonlocalcontrol___BaseNonlocalControlObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, nonlocalcontrol___BaseNonlocalControl_dealloc)
    nonlocalcontrol___BaseNonlocalControl_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem nonlocalcontrol___BaseNonlocalControl_vtable[6];
static bool
CPyDef_nonlocalcontrol___BaseNonlocalControl_trait_vtable_setup(void)
{
    CPyVTableItem nonlocalcontrol___BaseNonlocalControl_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_return,
        (CPyVTableItem)CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_return,
    };
    memcpy(nonlocalcontrol___BaseNonlocalControl_vtable, nonlocalcontrol___BaseNonlocalControl_vtable_scratch, sizeof(nonlocalcontrol___BaseNonlocalControl_vtable));
    return 1;
}


static PyGetSetDef nonlocalcontrol___BaseNonlocalControl_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef nonlocalcontrol___BaseNonlocalControl_methods[] = {
    {"gen_break",
     (PyCFunction)CPyPy_nonlocalcontrol___BaseNonlocalControl___gen_break,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_continue",
     (PyCFunction)CPyPy_nonlocalcontrol___BaseNonlocalControl___gen_continue,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_return",
     (PyCFunction)CPyPy_nonlocalcontrol___BaseNonlocalControl___gen_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_nonlocalcontrol___BaseNonlocalControl_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "BaseNonlocalControl",
    .tp_new = nonlocalcontrol___BaseNonlocalControl_new,
    .tp_dealloc = (destructor)nonlocalcontrol___BaseNonlocalControl_dealloc,
    .tp_traverse = (traverseproc)nonlocalcontrol___BaseNonlocalControl_traverse,
    .tp_clear = (inquiry)nonlocalcontrol___BaseNonlocalControl_clear,
    .tp_getset = nonlocalcontrol___BaseNonlocalControl_getseters,
    .tp_methods = nonlocalcontrol___BaseNonlocalControl_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___nonlocalcontrol___BaseNonlocalControlObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_nonlocalcontrol___BaseNonlocalControl_template = &CPyType_nonlocalcontrol___BaseNonlocalControl_template_;

static PyObject *
nonlocalcontrol___BaseNonlocalControl_setup(PyTypeObject *type)
{
    mypyc___irbuild___nonlocalcontrol___BaseNonlocalControlObject *self;
    self = (mypyc___irbuild___nonlocalcontrol___BaseNonlocalControlObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = nonlocalcontrol___BaseNonlocalControl_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_nonlocalcontrol___BaseNonlocalControl(void)
{
    PyObject *self = nonlocalcontrol___BaseNonlocalControl_setup(CPyType_nonlocalcontrol___BaseNonlocalControl);
    if (self == NULL)
        return NULL;
    return self;
}


static int
nonlocalcontrol___LoopNonlocalControl_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *nonlocalcontrol___LoopNonlocalControl_setup(PyTypeObject *type);
PyObject *CPyDef_nonlocalcontrol___LoopNonlocalControl(PyObject *cpy_r_outer, PyObject *cpy_r_continue_block, PyObject *cpy_r_break_block);

static PyObject *
nonlocalcontrol___LoopNonlocalControl_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_nonlocalcontrol___LoopNonlocalControl) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = nonlocalcontrol___LoopNonlocalControl_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_nonlocalcontrol___LoopNonlocalControl_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
nonlocalcontrol___LoopNonlocalControl_traverse(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_outer);
    Py_VISIT(self->_continue_block);
    Py_VISIT(self->_break_block);
    return 0;
}

static int
nonlocalcontrol___LoopNonlocalControl_clear(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self)
{
    Py_CLEAR(self->_outer);
    Py_CLEAR(self->_continue_block);
    Py_CLEAR(self->_break_block);
    return 0;
}

static void
nonlocalcontrol___LoopNonlocalControl_dealloc(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, nonlocalcontrol___LoopNonlocalControl_dealloc)
    nonlocalcontrol___LoopNonlocalControl_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem nonlocalcontrol___LoopNonlocalControl_vtable[7];
static bool
CPyDef_nonlocalcontrol___LoopNonlocalControl_trait_vtable_setup(void)
{
    CPyVTableItem nonlocalcontrol___LoopNonlocalControl_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_nonlocalcontrol___LoopNonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___LoopNonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___LoopNonlocalControl___gen_return,
        (CPyVTableItem)CPyDef_nonlocalcontrol___LoopNonlocalControl_____init__,
        (CPyVTableItem)CPyDef_nonlocalcontrol___LoopNonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___LoopNonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___LoopNonlocalControl___gen_return,
    };
    memcpy(nonlocalcontrol___LoopNonlocalControl_vtable, nonlocalcontrol___LoopNonlocalControl_vtable_scratch, sizeof(nonlocalcontrol___LoopNonlocalControl_vtable));
    return 1;
}

static PyObject *
nonlocalcontrol___LoopNonlocalControl_get_outer(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self, void *closure);
static int
nonlocalcontrol___LoopNonlocalControl_set_outer(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self, PyObject *value, void *closure);
static PyObject *
nonlocalcontrol___LoopNonlocalControl_get_continue_block(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self, void *closure);
static int
nonlocalcontrol___LoopNonlocalControl_set_continue_block(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self, PyObject *value, void *closure);
static PyObject *
nonlocalcontrol___LoopNonlocalControl_get_break_block(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self, void *closure);
static int
nonlocalcontrol___LoopNonlocalControl_set_break_block(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self, PyObject *value, void *closure);

static PyGetSetDef nonlocalcontrol___LoopNonlocalControl_getseters[] = {
    {"outer",
     (getter)nonlocalcontrol___LoopNonlocalControl_get_outer, (setter)nonlocalcontrol___LoopNonlocalControl_set_outer,
     NULL, NULL},
    {"continue_block",
     (getter)nonlocalcontrol___LoopNonlocalControl_get_continue_block, (setter)nonlocalcontrol___LoopNonlocalControl_set_continue_block,
     NULL, NULL},
    {"break_block",
     (getter)nonlocalcontrol___LoopNonlocalControl_get_break_block, (setter)nonlocalcontrol___LoopNonlocalControl_set_break_block,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef nonlocalcontrol___LoopNonlocalControl_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_nonlocalcontrol___LoopNonlocalControl_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_break",
     (PyCFunction)CPyPy_nonlocalcontrol___LoopNonlocalControl___gen_break,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_continue",
     (PyCFunction)CPyPy_nonlocalcontrol___LoopNonlocalControl___gen_continue,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_return",
     (PyCFunction)CPyPy_nonlocalcontrol___LoopNonlocalControl___gen_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_nonlocalcontrol___LoopNonlocalControl_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "LoopNonlocalControl",
    .tp_new = nonlocalcontrol___LoopNonlocalControl_new,
    .tp_dealloc = (destructor)nonlocalcontrol___LoopNonlocalControl_dealloc,
    .tp_traverse = (traverseproc)nonlocalcontrol___LoopNonlocalControl_traverse,
    .tp_clear = (inquiry)nonlocalcontrol___LoopNonlocalControl_clear,
    .tp_getset = nonlocalcontrol___LoopNonlocalControl_getseters,
    .tp_methods = nonlocalcontrol___LoopNonlocalControl_methods,
    .tp_init = nonlocalcontrol___LoopNonlocalControl_init,
    .tp_basicsize = sizeof(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_nonlocalcontrol___LoopNonlocalControl_template = &CPyType_nonlocalcontrol___LoopNonlocalControl_template_;

static PyObject *
nonlocalcontrol___LoopNonlocalControl_setup(PyTypeObject *type)
{
    mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self;
    self = (mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = nonlocalcontrol___LoopNonlocalControl_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_nonlocalcontrol___LoopNonlocalControl(PyObject *cpy_r_outer, PyObject *cpy_r_continue_block, PyObject *cpy_r_break_block)
{
    PyObject *self = nonlocalcontrol___LoopNonlocalControl_setup(CPyType_nonlocalcontrol___LoopNonlocalControl);
    if (self == NULL)
        return NULL;
    char res = CPyDef_nonlocalcontrol___LoopNonlocalControl_____init__(self, cpy_r_outer, cpy_r_continue_block, cpy_r_break_block);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
nonlocalcontrol___LoopNonlocalControl_get_outer(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self, void *closure)
{
    if (unlikely(self->_outer == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'outer' of 'LoopNonlocalControl' undefined");
        return NULL;
    }
    CPy_INCREF(self->_outer);
    PyObject *retval = self->_outer;
    return retval;
}

static int
nonlocalcontrol___LoopNonlocalControl_set_outer(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'LoopNonlocalControl' object attribute 'outer' cannot be deleted");
        return -1;
    }
    if (self->_outer != NULL) {
        CPy_DECREF(self->_outer);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_nonlocalcontrol___NonlocalControl)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_outer = tmp;
    return 0;
}

static PyObject *
nonlocalcontrol___LoopNonlocalControl_get_continue_block(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self, void *closure)
{
    if (unlikely(self->_continue_block == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'continue_block' of 'LoopNonlocalControl' undefined");
        return NULL;
    }
    CPy_INCREF(self->_continue_block);
    PyObject *retval = self->_continue_block;
    return retval;
}

static int
nonlocalcontrol___LoopNonlocalControl_set_continue_block(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'LoopNonlocalControl' object attribute 'continue_block' cannot be deleted");
        return -1;
    }
    if (self->_continue_block != NULL) {
        CPy_DECREF(self->_continue_block);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_ops___BasicBlock))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_continue_block = tmp;
    return 0;
}

static PyObject *
nonlocalcontrol___LoopNonlocalControl_get_break_block(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self, void *closure)
{
    if (unlikely(self->_break_block == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'break_block' of 'LoopNonlocalControl' undefined");
        return NULL;
    }
    CPy_INCREF(self->_break_block);
    PyObject *retval = self->_break_block;
    return retval;
}

static int
nonlocalcontrol___LoopNonlocalControl_set_break_block(mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'LoopNonlocalControl' object attribute 'break_block' cannot be deleted");
        return -1;
    }
    if (self->_break_block != NULL) {
        CPy_DECREF(self->_break_block);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_ops___BasicBlock))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_break_block = tmp;
    return 0;
}

static PyObject *nonlocalcontrol___GeneratorNonlocalControl_setup(PyTypeObject *type);
PyObject *CPyDef_nonlocalcontrol___GeneratorNonlocalControl(void);

static PyObject *
nonlocalcontrol___GeneratorNonlocalControl_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_nonlocalcontrol___GeneratorNonlocalControl) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return nonlocalcontrol___GeneratorNonlocalControl_setup(type);
}

static int
nonlocalcontrol___GeneratorNonlocalControl_traverse(mypyc___irbuild___nonlocalcontrol___GeneratorNonlocalControlObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
nonlocalcontrol___GeneratorNonlocalControl_clear(mypyc___irbuild___nonlocalcontrol___GeneratorNonlocalControlObject *self)
{
    return 0;
}

static void
nonlocalcontrol___GeneratorNonlocalControl_dealloc(mypyc___irbuild___nonlocalcontrol___GeneratorNonlocalControlObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, nonlocalcontrol___GeneratorNonlocalControl_dealloc)
    nonlocalcontrol___GeneratorNonlocalControl_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem nonlocalcontrol___GeneratorNonlocalControl_vtable[7];
static bool
CPyDef_nonlocalcontrol___GeneratorNonlocalControl_trait_vtable_setup(void)
{
    CPyVTableItem nonlocalcontrol___GeneratorNonlocalControl_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___GeneratorNonlocalControl___gen_return,
        (CPyVTableItem)CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___GeneratorNonlocalControl___gen_return,
        (CPyVTableItem)CPyDef_nonlocalcontrol___GeneratorNonlocalControl___gen_return,
    };
    memcpy(nonlocalcontrol___GeneratorNonlocalControl_vtable, nonlocalcontrol___GeneratorNonlocalControl_vtable_scratch, sizeof(nonlocalcontrol___GeneratorNonlocalControl_vtable));
    return 1;
}


static PyGetSetDef nonlocalcontrol___GeneratorNonlocalControl_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef nonlocalcontrol___GeneratorNonlocalControl_methods[] = {
    {"gen_return",
     (PyCFunction)CPyPy_nonlocalcontrol___GeneratorNonlocalControl___gen_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_nonlocalcontrol___GeneratorNonlocalControl_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "GeneratorNonlocalControl",
    .tp_new = nonlocalcontrol___GeneratorNonlocalControl_new,
    .tp_dealloc = (destructor)nonlocalcontrol___GeneratorNonlocalControl_dealloc,
    .tp_traverse = (traverseproc)nonlocalcontrol___GeneratorNonlocalControl_traverse,
    .tp_clear = (inquiry)nonlocalcontrol___GeneratorNonlocalControl_clear,
    .tp_getset = nonlocalcontrol___GeneratorNonlocalControl_getseters,
    .tp_methods = nonlocalcontrol___GeneratorNonlocalControl_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___nonlocalcontrol___GeneratorNonlocalControlObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_nonlocalcontrol___GeneratorNonlocalControl_template = &CPyType_nonlocalcontrol___GeneratorNonlocalControl_template_;

static PyObject *
nonlocalcontrol___GeneratorNonlocalControl_setup(PyTypeObject *type)
{
    mypyc___irbuild___nonlocalcontrol___GeneratorNonlocalControlObject *self;
    self = (mypyc___irbuild___nonlocalcontrol___GeneratorNonlocalControlObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = nonlocalcontrol___GeneratorNonlocalControl_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_nonlocalcontrol___GeneratorNonlocalControl(void)
{
    PyObject *self = nonlocalcontrol___GeneratorNonlocalControl_setup(CPyType_nonlocalcontrol___GeneratorNonlocalControl);
    if (self == NULL)
        return NULL;
    return self;
}


static int
nonlocalcontrol___CleanupNonlocalControl_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *nonlocalcontrol___CleanupNonlocalControl_setup(PyTypeObject *type);
PyObject *CPyDef_nonlocalcontrol___CleanupNonlocalControl(PyObject *cpy_r_outer);

static PyObject *
nonlocalcontrol___CleanupNonlocalControl_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_nonlocalcontrol___CleanupNonlocalControl) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = nonlocalcontrol___CleanupNonlocalControl_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_nonlocalcontrol___CleanupNonlocalControl_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
nonlocalcontrol___CleanupNonlocalControl_traverse(mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_outer);
    return 0;
}

static int
nonlocalcontrol___CleanupNonlocalControl_clear(mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject *self)
{
    Py_CLEAR(self->_outer);
    return 0;
}

static void
nonlocalcontrol___CleanupNonlocalControl_dealloc(mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, nonlocalcontrol___CleanupNonlocalControl_dealloc)
    nonlocalcontrol___CleanupNonlocalControl_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem nonlocalcontrol___CleanupNonlocalControl_vtable[8];
static bool
CPyDef_nonlocalcontrol___CleanupNonlocalControl_trait_vtable_setup(void)
{
    CPyVTableItem nonlocalcontrol___CleanupNonlocalControl_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_return,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl_____init__,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_cleanup,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_return,
    };
    memcpy(nonlocalcontrol___CleanupNonlocalControl_vtable, nonlocalcontrol___CleanupNonlocalControl_vtable_scratch, sizeof(nonlocalcontrol___CleanupNonlocalControl_vtable));
    return 1;
}

static PyObject *
nonlocalcontrol___CleanupNonlocalControl_get_outer(mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject *self, void *closure);
static int
nonlocalcontrol___CleanupNonlocalControl_set_outer(mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject *self, PyObject *value, void *closure);

static PyGetSetDef nonlocalcontrol___CleanupNonlocalControl_getseters[] = {
    {"outer",
     (getter)nonlocalcontrol___CleanupNonlocalControl_get_outer, (setter)nonlocalcontrol___CleanupNonlocalControl_set_outer,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef nonlocalcontrol___CleanupNonlocalControl_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_nonlocalcontrol___CleanupNonlocalControl_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_cleanup",
     (PyCFunction)CPyPy_nonlocalcontrol___CleanupNonlocalControl___gen_cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_break",
     (PyCFunction)CPyPy_nonlocalcontrol___CleanupNonlocalControl___gen_break,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_continue",
     (PyCFunction)CPyPy_nonlocalcontrol___CleanupNonlocalControl___gen_continue,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_return",
     (PyCFunction)CPyPy_nonlocalcontrol___CleanupNonlocalControl___gen_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_nonlocalcontrol___CleanupNonlocalControl_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "CleanupNonlocalControl",
    .tp_new = nonlocalcontrol___CleanupNonlocalControl_new,
    .tp_dealloc = (destructor)nonlocalcontrol___CleanupNonlocalControl_dealloc,
    .tp_traverse = (traverseproc)nonlocalcontrol___CleanupNonlocalControl_traverse,
    .tp_clear = (inquiry)nonlocalcontrol___CleanupNonlocalControl_clear,
    .tp_getset = nonlocalcontrol___CleanupNonlocalControl_getseters,
    .tp_methods = nonlocalcontrol___CleanupNonlocalControl_methods,
    .tp_init = nonlocalcontrol___CleanupNonlocalControl_init,
    .tp_basicsize = sizeof(mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_nonlocalcontrol___CleanupNonlocalControl_template = &CPyType_nonlocalcontrol___CleanupNonlocalControl_template_;

static PyObject *
nonlocalcontrol___CleanupNonlocalControl_setup(PyTypeObject *type)
{
    mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject *self;
    self = (mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = nonlocalcontrol___CleanupNonlocalControl_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_nonlocalcontrol___CleanupNonlocalControl(PyObject *cpy_r_outer)
{
    PyObject *self = nonlocalcontrol___CleanupNonlocalControl_setup(CPyType_nonlocalcontrol___CleanupNonlocalControl);
    if (self == NULL)
        return NULL;
    char res = CPyDef_nonlocalcontrol___CleanupNonlocalControl_____init__(self, cpy_r_outer);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
nonlocalcontrol___CleanupNonlocalControl_get_outer(mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject *self, void *closure)
{
    if (unlikely(self->_outer == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'outer' of 'CleanupNonlocalControl' undefined");
        return NULL;
    }
    CPy_INCREF(self->_outer);
    PyObject *retval = self->_outer;
    return retval;
}

static int
nonlocalcontrol___CleanupNonlocalControl_set_outer(mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CleanupNonlocalControl' object attribute 'outer' cannot be deleted");
        return -1;
    }
    if (self->_outer != NULL) {
        CPy_DECREF(self->_outer);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_nonlocalcontrol___NonlocalControl)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_outer = tmp;
    return 0;
}

static int
nonlocalcontrol___TryFinallyNonlocalControl_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *nonlocalcontrol___TryFinallyNonlocalControl_setup(PyTypeObject *type);
PyObject *CPyDef_nonlocalcontrol___TryFinallyNonlocalControl(PyObject *cpy_r_target);

static PyObject *
nonlocalcontrol___TryFinallyNonlocalControl_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_nonlocalcontrol___TryFinallyNonlocalControl) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = nonlocalcontrol___TryFinallyNonlocalControl_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_nonlocalcontrol___TryFinallyNonlocalControl_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
nonlocalcontrol___TryFinallyNonlocalControl_traverse(mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_target);
    Py_VISIT(self->_ret_reg);
    return 0;
}

static int
nonlocalcontrol___TryFinallyNonlocalControl_clear(mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *self)
{
    Py_CLEAR(self->_target);
    Py_CLEAR(self->_ret_reg);
    return 0;
}

static void
nonlocalcontrol___TryFinallyNonlocalControl_dealloc(mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, nonlocalcontrol___TryFinallyNonlocalControl_dealloc)
    nonlocalcontrol___TryFinallyNonlocalControl_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem nonlocalcontrol___TryFinallyNonlocalControl_vtable[7];
static bool
CPyDef_nonlocalcontrol___TryFinallyNonlocalControl_trait_vtable_setup(void)
{
    CPyVTableItem nonlocalcontrol___TryFinallyNonlocalControl_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_nonlocalcontrol___TryFinallyNonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___TryFinallyNonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___TryFinallyNonlocalControl___gen_return,
        (CPyVTableItem)CPyDef_nonlocalcontrol___TryFinallyNonlocalControl_____init__,
        (CPyVTableItem)CPyDef_nonlocalcontrol___TryFinallyNonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___TryFinallyNonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___TryFinallyNonlocalControl___gen_return,
    };
    memcpy(nonlocalcontrol___TryFinallyNonlocalControl_vtable, nonlocalcontrol___TryFinallyNonlocalControl_vtable_scratch, sizeof(nonlocalcontrol___TryFinallyNonlocalControl_vtable));
    return 1;
}

static PyObject *
nonlocalcontrol___TryFinallyNonlocalControl_get_target(mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *self, void *closure);
static int
nonlocalcontrol___TryFinallyNonlocalControl_set_target(mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *self, PyObject *value, void *closure);
static PyObject *
nonlocalcontrol___TryFinallyNonlocalControl_get_ret_reg(mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *self, void *closure);
static int
nonlocalcontrol___TryFinallyNonlocalControl_set_ret_reg(mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *self, PyObject *value, void *closure);

static PyGetSetDef nonlocalcontrol___TryFinallyNonlocalControl_getseters[] = {
    {"target",
     (getter)nonlocalcontrol___TryFinallyNonlocalControl_get_target, (setter)nonlocalcontrol___TryFinallyNonlocalControl_set_target,
     NULL, NULL},
    {"ret_reg",
     (getter)nonlocalcontrol___TryFinallyNonlocalControl_get_ret_reg, (setter)nonlocalcontrol___TryFinallyNonlocalControl_set_ret_reg,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef nonlocalcontrol___TryFinallyNonlocalControl_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_nonlocalcontrol___TryFinallyNonlocalControl_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_break",
     (PyCFunction)CPyPy_nonlocalcontrol___TryFinallyNonlocalControl___gen_break,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_continue",
     (PyCFunction)CPyPy_nonlocalcontrol___TryFinallyNonlocalControl___gen_continue,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_return",
     (PyCFunction)CPyPy_nonlocalcontrol___TryFinallyNonlocalControl___gen_return,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_nonlocalcontrol___TryFinallyNonlocalControl_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TryFinallyNonlocalControl",
    .tp_new = nonlocalcontrol___TryFinallyNonlocalControl_new,
    .tp_dealloc = (destructor)nonlocalcontrol___TryFinallyNonlocalControl_dealloc,
    .tp_traverse = (traverseproc)nonlocalcontrol___TryFinallyNonlocalControl_traverse,
    .tp_clear = (inquiry)nonlocalcontrol___TryFinallyNonlocalControl_clear,
    .tp_getset = nonlocalcontrol___TryFinallyNonlocalControl_getseters,
    .tp_methods = nonlocalcontrol___TryFinallyNonlocalControl_methods,
    .tp_init = nonlocalcontrol___TryFinallyNonlocalControl_init,
    .tp_basicsize = sizeof(mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_nonlocalcontrol___TryFinallyNonlocalControl_template = &CPyType_nonlocalcontrol___TryFinallyNonlocalControl_template_;

static PyObject *
nonlocalcontrol___TryFinallyNonlocalControl_setup(PyTypeObject *type)
{
    mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *self;
    self = (mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = nonlocalcontrol___TryFinallyNonlocalControl_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_nonlocalcontrol___TryFinallyNonlocalControl(PyObject *cpy_r_target)
{
    PyObject *self = nonlocalcontrol___TryFinallyNonlocalControl_setup(CPyType_nonlocalcontrol___TryFinallyNonlocalControl);
    if (self == NULL)
        return NULL;
    char res = CPyDef_nonlocalcontrol___TryFinallyNonlocalControl_____init__(self, cpy_r_target);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
nonlocalcontrol___TryFinallyNonlocalControl_get_target(mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *self, void *closure)
{
    if (unlikely(self->_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'target' of 'TryFinallyNonlocalControl' undefined");
        return NULL;
    }
    CPy_INCREF(self->_target);
    PyObject *retval = self->_target;
    return retval;
}

static int
nonlocalcontrol___TryFinallyNonlocalControl_set_target(mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TryFinallyNonlocalControl' object attribute 'target' cannot be deleted");
        return -1;
    }
    if (self->_target != NULL) {
        CPy_DECREF(self->_target);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_ops___BasicBlock))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_target = tmp;
    return 0;
}

static PyObject *
nonlocalcontrol___TryFinallyNonlocalControl_get_ret_reg(mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *self, void *closure)
{
    if (unlikely(self->_ret_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ret_reg' of 'TryFinallyNonlocalControl' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ret_reg);
    PyObject *retval = self->_ret_reg;
    return retval;
}

static int
nonlocalcontrol___TryFinallyNonlocalControl_set_ret_reg(mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TryFinallyNonlocalControl' object attribute 'ret_reg' cannot be deleted");
        return -1;
    }
    if (self->_ret_reg != NULL) {
        CPy_DECREF(self->_ret_reg);
    }
    PyObject *tmp;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10392;
    if (Py_TYPE(value) == CPyType_ops___Register)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10392;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10392;
    CPy_TypeError("union[None, mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10392: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_ret_reg = tmp;
    return 0;
}

static int
nonlocalcontrol___ExceptNonlocalControl_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *nonlocalcontrol___ExceptNonlocalControl_setup(PyTypeObject *type);
PyObject *CPyDef_nonlocalcontrol___ExceptNonlocalControl(PyObject *cpy_r_outer, PyObject *cpy_r_saved);

static PyObject *
nonlocalcontrol___ExceptNonlocalControl_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_nonlocalcontrol___ExceptNonlocalControl) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = nonlocalcontrol___ExceptNonlocalControl_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_nonlocalcontrol___ExceptNonlocalControl_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
nonlocalcontrol___ExceptNonlocalControl_traverse(mypyc___irbuild___nonlocalcontrol___ExceptNonlocalControlObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_outer);
    Py_VISIT(self->_saved);
    return 0;
}

static int
nonlocalcontrol___ExceptNonlocalControl_clear(mypyc___irbuild___nonlocalcontrol___ExceptNonlocalControlObject *self)
{
    Py_CLEAR(self->_outer);
    Py_CLEAR(self->_saved);
    return 0;
}

static void
nonlocalcontrol___ExceptNonlocalControl_dealloc(mypyc___irbuild___nonlocalcontrol___ExceptNonlocalControlObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, nonlocalcontrol___ExceptNonlocalControl_dealloc)
    nonlocalcontrol___ExceptNonlocalControl_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem nonlocalcontrol___ExceptNonlocalControl_vtable[10];
static bool
CPyDef_nonlocalcontrol___ExceptNonlocalControl_trait_vtable_setup(void)
{
    CPyVTableItem nonlocalcontrol___ExceptNonlocalControl_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_return,
        (CPyVTableItem)CPyDef_nonlocalcontrol___ExceptNonlocalControl_____init__,
        (CPyVTableItem)CPyDef_nonlocalcontrol___ExceptNonlocalControl___gen_cleanup,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_return,
        (CPyVTableItem)CPyDef_nonlocalcontrol___ExceptNonlocalControl_____init__,
        (CPyVTableItem)CPyDef_nonlocalcontrol___ExceptNonlocalControl___gen_cleanup,
    };
    memcpy(nonlocalcontrol___ExceptNonlocalControl_vtable, nonlocalcontrol___ExceptNonlocalControl_vtable_scratch, sizeof(nonlocalcontrol___ExceptNonlocalControl_vtable));
    return 1;
}

static PyObject *
nonlocalcontrol___ExceptNonlocalControl_get_saved(mypyc___irbuild___nonlocalcontrol___ExceptNonlocalControlObject *self, void *closure);
static int
nonlocalcontrol___ExceptNonlocalControl_set_saved(mypyc___irbuild___nonlocalcontrol___ExceptNonlocalControlObject *self, PyObject *value, void *closure);

static PyGetSetDef nonlocalcontrol___ExceptNonlocalControl_getseters[] = {
    {"saved",
     (getter)nonlocalcontrol___ExceptNonlocalControl_get_saved, (setter)nonlocalcontrol___ExceptNonlocalControl_set_saved,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef nonlocalcontrol___ExceptNonlocalControl_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_nonlocalcontrol___ExceptNonlocalControl_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_cleanup",
     (PyCFunction)CPyPy_nonlocalcontrol___ExceptNonlocalControl___gen_cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_nonlocalcontrol___ExceptNonlocalControl_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ExceptNonlocalControl",
    .tp_new = nonlocalcontrol___ExceptNonlocalControl_new,
    .tp_dealloc = (destructor)nonlocalcontrol___ExceptNonlocalControl_dealloc,
    .tp_traverse = (traverseproc)nonlocalcontrol___ExceptNonlocalControl_traverse,
    .tp_clear = (inquiry)nonlocalcontrol___ExceptNonlocalControl_clear,
    .tp_getset = nonlocalcontrol___ExceptNonlocalControl_getseters,
    .tp_methods = nonlocalcontrol___ExceptNonlocalControl_methods,
    .tp_init = nonlocalcontrol___ExceptNonlocalControl_init,
    .tp_basicsize = sizeof(mypyc___irbuild___nonlocalcontrol___ExceptNonlocalControlObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_nonlocalcontrol___ExceptNonlocalControl_template = &CPyType_nonlocalcontrol___ExceptNonlocalControl_template_;

static PyObject *
nonlocalcontrol___ExceptNonlocalControl_setup(PyTypeObject *type)
{
    mypyc___irbuild___nonlocalcontrol___ExceptNonlocalControlObject *self;
    self = (mypyc___irbuild___nonlocalcontrol___ExceptNonlocalControlObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = nonlocalcontrol___ExceptNonlocalControl_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_nonlocalcontrol___ExceptNonlocalControl(PyObject *cpy_r_outer, PyObject *cpy_r_saved)
{
    PyObject *self = nonlocalcontrol___ExceptNonlocalControl_setup(CPyType_nonlocalcontrol___ExceptNonlocalControl);
    if (self == NULL)
        return NULL;
    char res = CPyDef_nonlocalcontrol___ExceptNonlocalControl_____init__(self, cpy_r_outer, cpy_r_saved);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
nonlocalcontrol___ExceptNonlocalControl_get_saved(mypyc___irbuild___nonlocalcontrol___ExceptNonlocalControlObject *self, void *closure)
{
    if (unlikely(self->_saved == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'saved' of 'ExceptNonlocalControl' undefined");
        return NULL;
    }
    CPy_INCREF(self->_saved);
    PyObject *retval = self->_saved;
    return retval;
}

static int
nonlocalcontrol___ExceptNonlocalControl_set_saved(mypyc___irbuild___nonlocalcontrol___ExceptNonlocalControlObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ExceptNonlocalControl' object attribute 'saved' cannot be deleted");
        return -1;
    }
    if (self->_saved != NULL) {
        CPy_DECREF(self->_saved);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10393;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10393;
    CPy_TypeError("union[mypyc.ir.ops.Value, mypyc.irbuild.targets.AssignmentTarget]", value); 
    tmp = NULL;
__LL10393: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_saved = tmp;
    return 0;
}

static int
nonlocalcontrol___FinallyNonlocalControl_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *nonlocalcontrol___FinallyNonlocalControl_setup(PyTypeObject *type);
PyObject *CPyDef_nonlocalcontrol___FinallyNonlocalControl(PyObject *cpy_r_outer, PyObject *cpy_r_saved);

static PyObject *
nonlocalcontrol___FinallyNonlocalControl_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_nonlocalcontrol___FinallyNonlocalControl) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = nonlocalcontrol___FinallyNonlocalControl_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_nonlocalcontrol___FinallyNonlocalControl_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
nonlocalcontrol___FinallyNonlocalControl_traverse(mypyc___irbuild___nonlocalcontrol___FinallyNonlocalControlObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_outer);
    Py_VISIT(self->_saved);
    return 0;
}

static int
nonlocalcontrol___FinallyNonlocalControl_clear(mypyc___irbuild___nonlocalcontrol___FinallyNonlocalControlObject *self)
{
    Py_CLEAR(self->_outer);
    Py_CLEAR(self->_saved);
    return 0;
}

static void
nonlocalcontrol___FinallyNonlocalControl_dealloc(mypyc___irbuild___nonlocalcontrol___FinallyNonlocalControlObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, nonlocalcontrol___FinallyNonlocalControl_dealloc)
    nonlocalcontrol___FinallyNonlocalControl_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem nonlocalcontrol___FinallyNonlocalControl_vtable[10];
static bool
CPyDef_nonlocalcontrol___FinallyNonlocalControl_trait_vtable_setup(void)
{
    CPyVTableItem nonlocalcontrol___FinallyNonlocalControl_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_return,
        (CPyVTableItem)CPyDef_nonlocalcontrol___FinallyNonlocalControl_____init__,
        (CPyVTableItem)CPyDef_nonlocalcontrol___FinallyNonlocalControl___gen_cleanup,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_break,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_continue,
        (CPyVTableItem)CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_return,
        (CPyVTableItem)CPyDef_nonlocalcontrol___FinallyNonlocalControl_____init__,
        (CPyVTableItem)CPyDef_nonlocalcontrol___FinallyNonlocalControl___gen_cleanup,
    };
    memcpy(nonlocalcontrol___FinallyNonlocalControl_vtable, nonlocalcontrol___FinallyNonlocalControl_vtable_scratch, sizeof(nonlocalcontrol___FinallyNonlocalControl_vtable));
    return 1;
}

static PyObject *
nonlocalcontrol___FinallyNonlocalControl_get_saved(mypyc___irbuild___nonlocalcontrol___FinallyNonlocalControlObject *self, void *closure);
static int
nonlocalcontrol___FinallyNonlocalControl_set_saved(mypyc___irbuild___nonlocalcontrol___FinallyNonlocalControlObject *self, PyObject *value, void *closure);

static PyGetSetDef nonlocalcontrol___FinallyNonlocalControl_getseters[] = {
    {"saved",
     (getter)nonlocalcontrol___FinallyNonlocalControl_get_saved, (setter)nonlocalcontrol___FinallyNonlocalControl_set_saved,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef nonlocalcontrol___FinallyNonlocalControl_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_nonlocalcontrol___FinallyNonlocalControl_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gen_cleanup",
     (PyCFunction)CPyPy_nonlocalcontrol___FinallyNonlocalControl___gen_cleanup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_nonlocalcontrol___FinallyNonlocalControl_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FinallyNonlocalControl",
    .tp_new = nonlocalcontrol___FinallyNonlocalControl_new,
    .tp_dealloc = (destructor)nonlocalcontrol___FinallyNonlocalControl_dealloc,
    .tp_traverse = (traverseproc)nonlocalcontrol___FinallyNonlocalControl_traverse,
    .tp_clear = (inquiry)nonlocalcontrol___FinallyNonlocalControl_clear,
    .tp_getset = nonlocalcontrol___FinallyNonlocalControl_getseters,
    .tp_methods = nonlocalcontrol___FinallyNonlocalControl_methods,
    .tp_init = nonlocalcontrol___FinallyNonlocalControl_init,
    .tp_basicsize = sizeof(mypyc___irbuild___nonlocalcontrol___FinallyNonlocalControlObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_nonlocalcontrol___FinallyNonlocalControl_template = &CPyType_nonlocalcontrol___FinallyNonlocalControl_template_;

static PyObject *
nonlocalcontrol___FinallyNonlocalControl_setup(PyTypeObject *type)
{
    mypyc___irbuild___nonlocalcontrol___FinallyNonlocalControlObject *self;
    self = (mypyc___irbuild___nonlocalcontrol___FinallyNonlocalControlObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = nonlocalcontrol___FinallyNonlocalControl_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_nonlocalcontrol___FinallyNonlocalControl(PyObject *cpy_r_outer, PyObject *cpy_r_saved)
{
    PyObject *self = nonlocalcontrol___FinallyNonlocalControl_setup(CPyType_nonlocalcontrol___FinallyNonlocalControl);
    if (self == NULL)
        return NULL;
    char res = CPyDef_nonlocalcontrol___FinallyNonlocalControl_____init__(self, cpy_r_outer, cpy_r_saved);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
nonlocalcontrol___FinallyNonlocalControl_get_saved(mypyc___irbuild___nonlocalcontrol___FinallyNonlocalControlObject *self, void *closure)
{
    if (unlikely(self->_saved == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'saved' of 'FinallyNonlocalControl' undefined");
        return NULL;
    }
    CPy_INCREF(self->_saved);
    PyObject *retval = self->_saved;
    return retval;
}

static int
nonlocalcontrol___FinallyNonlocalControl_set_saved(mypyc___irbuild___nonlocalcontrol___FinallyNonlocalControlObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FinallyNonlocalControl' object attribute 'saved' cannot be deleted");
        return -1;
    }
    if (self->_saved != NULL) {
        CPy_DECREF(self->_saved);
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
    self->_saved = tmp;
    return 0;
}
static PyMethodDef nonlocalcontrolmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef nonlocalcontrolmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.nonlocalcontrol",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    nonlocalcontrolmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___nonlocalcontrol(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___nonlocalcontrol_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___nonlocalcontrol_internal);
        return CPyModule_mypyc___irbuild___nonlocalcontrol_internal;
    }
    CPyModule_mypyc___irbuild___nonlocalcontrol_internal = PyModule_Create(&nonlocalcontrolmodule);
    if (unlikely(CPyModule_mypyc___irbuild___nonlocalcontrol_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___nonlocalcontrol_internal, "__name__");
    CPyStatic_nonlocalcontrol___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___nonlocalcontrol_internal);
    if (unlikely(CPyStatic_nonlocalcontrol___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_nonlocalcontrol_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___nonlocalcontrol_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___nonlocalcontrol_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_nonlocalcontrol___NonlocalControl);
    Py_CLEAR(CPyType_nonlocalcontrol___BaseNonlocalControl);
    Py_CLEAR(CPyType_nonlocalcontrol___LoopNonlocalControl);
    Py_CLEAR(CPyType_nonlocalcontrol___GeneratorNonlocalControl);
    Py_CLEAR(CPyType_nonlocalcontrol___CleanupNonlocalControl);
    Py_CLEAR(CPyType_nonlocalcontrol___TryFinallyNonlocalControl);
    Py_CLEAR(CPyType_nonlocalcontrol___ExceptNonlocalControl);
    Py_CLEAR(CPyType_nonlocalcontrol___FinallyNonlocalControl);
    return NULL;
}

char CPyDef_nonlocalcontrol___NonlocalControl___gen_break(PyObject *cpy_r_self, PyObject *cpy_r_builder, CPyTagged cpy_r_line) {
    return 1;
}

PyObject *CPyPy_nonlocalcontrol___NonlocalControl___gen_break(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "line", 0};
    static CPyArg_Parser parser = {"OO:gen_break", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_nonlocalcontrol___NonlocalControl)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___NonlocalControl___gen_break(arg_self, arg_builder, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_break", 42, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___NonlocalControl___gen_continue(PyObject *cpy_r_self, PyObject *cpy_r_builder, CPyTagged cpy_r_line) {
    return 1;
}

PyObject *CPyPy_nonlocalcontrol___NonlocalControl___gen_continue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "line", 0};
    static CPyArg_Parser parser = {"OO:gen_continue", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_nonlocalcontrol___NonlocalControl)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___NonlocalControl___gen_continue(arg_self, arg_builder, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_continue", 46, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___NonlocalControl___gen_return(PyObject *cpy_r_self, PyObject *cpy_r_builder, PyObject *cpy_r_value, CPyTagged cpy_r_line) {
    return 1;
}

PyObject *CPyPy_nonlocalcontrol___NonlocalControl___gen_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "value", "line", 0};
    static CPyArg_Parser parser = {"OOO:gen_return", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_value;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_value, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_nonlocalcontrol___NonlocalControl)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyObject_TypeCheck(obj_value, CPyType_ops___Value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_value); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___NonlocalControl___gen_return(arg_self, arg_builder, arg_value, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 50, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_break(PyObject *cpy_r_self, PyObject *cpy_r_builder, CPyTagged cpy_r_line) {
    char cpy_r_r0;
    char cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "break outside of loop");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_break", 58, CPyStatic_nonlocalcontrol___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_nonlocalcontrol___BaseNonlocalControl___gen_break(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "line", 0};
    static CPyArg_Parser parser = {"OO:gen_break", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_nonlocalcontrol___GeneratorNonlocalControl) || (Py_TYPE(obj_self) == CPyType_nonlocalcontrol___BaseNonlocalControl)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.BaseNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_break(arg_self, arg_builder, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_break", 57, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_continue(PyObject *cpy_r_self, PyObject *cpy_r_builder, CPyTagged cpy_r_line) {
    char cpy_r_r0;
    char cpy_r_r1;
    if (0) goto CPyL3;
    PyErr_SetString(PyExc_AssertionError, "continue outside of loop");
    cpy_r_r0 = 0;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_continue", 61, CPyStatic_nonlocalcontrol___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_nonlocalcontrol___BaseNonlocalControl___gen_continue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "line", 0};
    static CPyArg_Parser parser = {"OO:gen_continue", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_nonlocalcontrol___GeneratorNonlocalControl) || (Py_TYPE(obj_self) == CPyType_nonlocalcontrol___BaseNonlocalControl)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.BaseNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_continue(arg_self, arg_builder, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_continue", 60, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_return(PyObject *cpy_r_self, PyObject *cpy_r_builder, PyObject *cpy_r_value, CPyTagged cpy_r_line) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPyDef_ops___Return(cpy_r_value, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 64, CPyStatic_nonlocalcontrol___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 64, CPyStatic_nonlocalcontrol___globals);
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

PyObject *CPyPy_nonlocalcontrol___BaseNonlocalControl___gen_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "value", "line", 0};
    static CPyArg_Parser parser = {"OOO:gen_return", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_value;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_value, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_nonlocalcontrol___GeneratorNonlocalControl) || (Py_TYPE(obj_self) == CPyType_nonlocalcontrol___BaseNonlocalControl)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.BaseNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyObject_TypeCheck(obj_value, CPyType_ops___Value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_value); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___BaseNonlocalControl___gen_return(arg_self, arg_builder, arg_value, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 63, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___LoopNonlocalControl_____init__(PyObject *cpy_r_self, PyObject *cpy_r_outer, PyObject *cpy_r_continue_block, PyObject *cpy_r_break_block) {
    CPy_INCREF(cpy_r_outer);
    ((mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *)cpy_r_self)->_outer = cpy_r_outer;
    CPy_INCREF(cpy_r_continue_block);
    ((mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *)cpy_r_self)->_continue_block = cpy_r_continue_block;
    CPy_INCREF(cpy_r_break_block);
    ((mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *)cpy_r_self)->_break_block = cpy_r_break_block;
    return 1;
}

PyObject *CPyPy_nonlocalcontrol___LoopNonlocalControl_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"outer", "continue_block", "break_block", 0};
    PyObject *obj_outer;
    PyObject *obj_continue_block;
    PyObject *obj_break_block;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO", "__init__", kwlist, &obj_outer, &obj_continue_block, &obj_break_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_nonlocalcontrol___LoopNonlocalControl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.LoopNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_outer;
    if (likely(PyObject_TypeCheck(obj_outer, CPyType_nonlocalcontrol___NonlocalControl)))
        arg_outer = obj_outer;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", obj_outer); 
        goto fail;
    }
    PyObject *arg_continue_block;
    if (likely(Py_TYPE(obj_continue_block) == CPyType_ops___BasicBlock))
        arg_continue_block = obj_continue_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_continue_block); 
        goto fail;
    }
    PyObject *arg_break_block;
    if (likely(Py_TYPE(obj_break_block) == CPyType_ops___BasicBlock))
        arg_break_block = obj_break_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_break_block); 
        goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___LoopNonlocalControl_____init__(arg_self, arg_outer, arg_continue_block, arg_break_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "__init__", 70, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___LoopNonlocalControl___gen_break(PyObject *cpy_r_self, PyObject *cpy_r_builder, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *)cpy_r_self)->_break_block;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_ops___Goto(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_break", 78, CPyStatic_nonlocalcontrol___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_break", 78, CPyStatic_nonlocalcontrol___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
CPyL4: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL2;
}

PyObject *CPyPy_nonlocalcontrol___LoopNonlocalControl___gen_break(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "line", 0};
    static CPyArg_Parser parser = {"OO:gen_break", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_nonlocalcontrol___LoopNonlocalControl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.LoopNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___LoopNonlocalControl___gen_break(arg_self, arg_builder, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_break", 77, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___LoopNonlocalControl___gen_continue(PyObject *cpy_r_self, PyObject *cpy_r_builder, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *)cpy_r_self)->_continue_block;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_ops___Goto(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_continue", 81, CPyStatic_nonlocalcontrol___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_continue", 81, CPyStatic_nonlocalcontrol___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
CPyL4: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL2;
}

PyObject *CPyPy_nonlocalcontrol___LoopNonlocalControl___gen_continue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "line", 0};
    static CPyArg_Parser parser = {"OO:gen_continue", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_nonlocalcontrol___LoopNonlocalControl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.LoopNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___LoopNonlocalControl___gen_continue(arg_self, arg_builder, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_continue", 80, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___LoopNonlocalControl___gen_return(PyObject *cpy_r_self, PyObject *cpy_r_builder, PyObject *cpy_r_value, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___nonlocalcontrol___LoopNonlocalControlObject *)cpy_r_self)->_outer;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_nonlocalcontrol___NonlocalControl, 2, mypyc___irbuild___nonlocalcontrol___NonlocalControlObject, char (*)(PyObject *, PyObject *, PyObject *, CPyTagged))(cpy_r_r0, cpy_r_builder, cpy_r_value, cpy_r_line); /* gen_return */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 84, CPyStatic_nonlocalcontrol___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_nonlocalcontrol___LoopNonlocalControl___gen_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "value", "line", 0};
    static CPyArg_Parser parser = {"OOO:gen_return", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_value;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_value, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_nonlocalcontrol___LoopNonlocalControl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.LoopNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyObject_TypeCheck(obj_value, CPyType_ops___Value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_value); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___LoopNonlocalControl___gen_return(arg_self, arg_builder, arg_value, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 83, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___GeneratorNonlocalControl___gen_return(PyObject *cpy_r_self, PyObject *cpy_r_builder, PyObject *cpy_r_value, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 94, CPyStatic_nonlocalcontrol___globals);
        goto CPyL17;
    }
CPyL1: ;
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_r1, CPyType_context___GeneratorClass, 10, mypyc___irbuild___context___GeneratorClassObject, PyObject *); /* next_label_target */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 94, CPyStatic_nonlocalcontrol___globals);
        goto CPyL17;
    }
CPyL2: ;
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_ops___Integer(-2, cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 94, CPyStatic_nonlocalcontrol___globals);
        goto CPyL18;
    }
    cpy_r_r6 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r2, cpy_r_r5, cpy_r_line);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 94, CPyStatic_nonlocalcontrol___globals);
        goto CPyL17;
    }
    cpy_r_r7 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = Py_None;
    cpy_r_r9 = CPyDef_ll_builder___LowLevelIRBuilder___push_error_handler(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 101, CPyStatic_nonlocalcontrol___globals);
        goto CPyL17;
    }
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPyDef_ops___BasicBlock(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 102, CPyStatic_nonlocalcontrol___globals);
        goto CPyL17;
    }
    cpy_r_r12 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_builder, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 102, CPyStatic_nonlocalcontrol___globals);
        goto CPyL17;
    }
    cpy_r_r13 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r14 = CPyStatics[8488]; /* 'set_stop_iteration_value' */
    cpy_r_r15 = CPyDict_GetItem(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 111, CPyStatic_nonlocalcontrol___globals);
        goto CPyL17;
    }
    if (likely(PyTuple_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 111, CPyStatic_nonlocalcontrol___globals, "tuple", cpy_r_r15);
        goto CPyL17;
    }
    cpy_r_r17 = PyList_New(1);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 111, CPyStatic_nonlocalcontrol___globals);
        goto CPyL19;
    }
    cpy_r_r18 = (CPyPtr)&((PyListObject *)cpy_r_r17)->ob_item;
    cpy_r_r19 = *(CPyPtr *)cpy_r_r18;
    CPy_INCREF(cpy_r_value);
    *(PyObject * *)cpy_r_r19 = cpy_r_value;
    cpy_r_r20 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r21 = CPyStatics[7827]; /* 'NO_TRACEBACK_LINE_NO' */
    cpy_r_r22 = CPyDict_GetItem(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 111, CPyStatic_nonlocalcontrol___globals);
        goto CPyL20;
    }
    if (likely(PyLong_Check(cpy_r_r22)))
        cpy_r_r23 = CPyTagged_FromObject(cpy_r_r22);
    else {
        CPy_TypeError("int", cpy_r_r22); cpy_r_r23 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 111, CPyStatic_nonlocalcontrol___globals);
        goto CPyL20;
    }
    cpy_r_r24 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r16, cpy_r_r17, cpy_r_r23);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r17);
    CPyTagged_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 111, CPyStatic_nonlocalcontrol___globals);
        goto CPyL17;
    } else
        goto CPyL21;
CPyL13: ;
    cpy_r_r25 = CPY_INT_TAG;
    cpy_r_r26 = CPyDef_ops___Unreachable(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 112, CPyStatic_nonlocalcontrol___globals);
        goto CPyL17;
    }
    cpy_r_r27 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 112, CPyStatic_nonlocalcontrol___globals);
        goto CPyL17;
    } else
        goto CPyL22;
CPyL15: ;
    cpy_r_r28 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDef_ll_builder___LowLevelIRBuilder___pop_error_handler(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 113, CPyStatic_nonlocalcontrol___globals);
        goto CPyL17;
    } else
        goto CPyL23;
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL18: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    goto CPyL17;
CPyL21: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL13;
CPyL22: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL15;
CPyL23: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL16;
}

PyObject *CPyPy_nonlocalcontrol___GeneratorNonlocalControl___gen_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "value", "line", 0};
    static CPyArg_Parser parser = {"OOO:gen_return", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_value;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_value, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_nonlocalcontrol___GeneratorNonlocalControl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.GeneratorNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyObject_TypeCheck(obj_value, CPyType_ops___Value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_value); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___GeneratorNonlocalControl___gen_return(arg_self, arg_builder, arg_value, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 90, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___CleanupNonlocalControl_____init__(PyObject *cpy_r_self, PyObject *cpy_r_outer) {
    CPy_INCREF(cpy_r_outer);
    ((mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject *)cpy_r_self)->_outer = cpy_r_outer;
    return 1;
}

PyObject *CPyPy_nonlocalcontrol___CleanupNonlocalControl_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"outer", 0};
    PyObject *obj_outer;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_outer)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_nonlocalcontrol___ExceptNonlocalControl) || (Py_TYPE(obj_self) == CPyType_nonlocalcontrol___FinallyNonlocalControl)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.CleanupNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_outer;
    if (likely(PyObject_TypeCheck(obj_outer, CPyType_nonlocalcontrol___NonlocalControl)))
        arg_outer = obj_outer;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", obj_outer); 
        goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___CleanupNonlocalControl_____init__(arg_self, arg_outer);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "__init__", 119, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_cleanup(PyObject *cpy_r_self, PyObject *cpy_r_builder, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = (PyObject *)&_Py_EllipsisObject;
    return 1;
}

PyObject *CPyPy_nonlocalcontrol___CleanupNonlocalControl___gen_cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "line", 0};
    static CPyArg_Parser parser = {"OO:gen_cleanup", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_nonlocalcontrol___ExceptNonlocalControl) || (Py_TYPE(obj_self) == CPyType_nonlocalcontrol___FinallyNonlocalControl)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.CleanupNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_cleanup(arg_self, arg_builder, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 123, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_break(PyObject *cpy_r_self, PyObject *cpy_r_builder, CPyTagged cpy_r_line) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_nonlocalcontrol___CleanupNonlocalControl, 4, mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject, char (*)(PyObject *, PyObject *, CPyTagged))(cpy_r_self, cpy_r_builder, cpy_r_line); /* gen_cleanup */
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_break", 127, CPyStatic_nonlocalcontrol___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject *)cpy_r_self)->_outer;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_r1, CPyType_nonlocalcontrol___NonlocalControl, 0, mypyc___irbuild___nonlocalcontrol___NonlocalControlObject, char (*)(PyObject *, PyObject *, CPyTagged))(cpy_r_r1, cpy_r_builder, cpy_r_line); /* gen_break */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_break", 128, CPyStatic_nonlocalcontrol___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_nonlocalcontrol___CleanupNonlocalControl___gen_break(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "line", 0};
    static CPyArg_Parser parser = {"OO:gen_break", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_nonlocalcontrol___ExceptNonlocalControl) || (Py_TYPE(obj_self) == CPyType_nonlocalcontrol___FinallyNonlocalControl)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.CleanupNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_break(arg_self, arg_builder, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_break", 126, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_continue(PyObject *cpy_r_self, PyObject *cpy_r_builder, CPyTagged cpy_r_line) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_nonlocalcontrol___CleanupNonlocalControl, 4, mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject, char (*)(PyObject *, PyObject *, CPyTagged))(cpy_r_self, cpy_r_builder, cpy_r_line); /* gen_cleanup */
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_continue", 131, CPyStatic_nonlocalcontrol___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject *)cpy_r_self)->_outer;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_r1, CPyType_nonlocalcontrol___NonlocalControl, 1, mypyc___irbuild___nonlocalcontrol___NonlocalControlObject, char (*)(PyObject *, PyObject *, CPyTagged))(cpy_r_r1, cpy_r_builder, cpy_r_line); /* gen_continue */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_continue", 132, CPyStatic_nonlocalcontrol___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_nonlocalcontrol___CleanupNonlocalControl___gen_continue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "line", 0};
    static CPyArg_Parser parser = {"OO:gen_continue", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_nonlocalcontrol___ExceptNonlocalControl) || (Py_TYPE(obj_self) == CPyType_nonlocalcontrol___FinallyNonlocalControl)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.CleanupNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_continue(arg_self, arg_builder, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_continue", 130, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_return(PyObject *cpy_r_self, PyObject *cpy_r_builder, PyObject *cpy_r_value, CPyTagged cpy_r_line) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_nonlocalcontrol___CleanupNonlocalControl, 4, mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject, char (*)(PyObject *, PyObject *, CPyTagged))(cpy_r_self, cpy_r_builder, cpy_r_line); /* gen_cleanup */
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 135, CPyStatic_nonlocalcontrol___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypyc___irbuild___nonlocalcontrol___CleanupNonlocalControlObject *)cpy_r_self)->_outer;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_r1, CPyType_nonlocalcontrol___NonlocalControl, 2, mypyc___irbuild___nonlocalcontrol___NonlocalControlObject, char (*)(PyObject *, PyObject *, PyObject *, CPyTagged))(cpy_r_r1, cpy_r_builder, cpy_r_value, cpy_r_line); /* gen_return */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 136, CPyStatic_nonlocalcontrol___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_nonlocalcontrol___CleanupNonlocalControl___gen_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "value", "line", 0};
    static CPyArg_Parser parser = {"OOO:gen_return", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_value;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_value, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_nonlocalcontrol___ExceptNonlocalControl) || (Py_TYPE(obj_self) == CPyType_nonlocalcontrol___FinallyNonlocalControl)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.CleanupNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyObject_TypeCheck(obj_value, CPyType_ops___Value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_value); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___CleanupNonlocalControl___gen_return(arg_self, arg_builder, arg_value, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 134, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___TryFinallyNonlocalControl_____init__(PyObject *cpy_r_self, PyObject *cpy_r_target) {
    PyObject *cpy_r_r0;
    CPy_INCREF(cpy_r_target);
    ((mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *)cpy_r_self)->_target = cpy_r_target;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    ((mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *)cpy_r_self)->_ret_reg = cpy_r_r0;
    return 1;
}

PyObject *CPyPy_nonlocalcontrol___TryFinallyNonlocalControl_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", 0};
    PyObject *obj_target;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_target)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_nonlocalcontrol___TryFinallyNonlocalControl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.TryFinallyNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(Py_TYPE(obj_target) == CPyType_ops___BasicBlock))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_target); 
        goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___TryFinallyNonlocalControl_____init__(arg_self, arg_target);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "__init__", 142, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___TryFinallyNonlocalControl___gen_break(PyObject *cpy_r_self, PyObject *cpy_r_builder, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyStatics[8489]; /* 'break inside try/finally block is unimplemented' */
    cpy_r_r1 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r0, cpy_r_line);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_break", 147, CPyStatic_nonlocalcontrol___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_nonlocalcontrol___TryFinallyNonlocalControl___gen_break(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "line", 0};
    static CPyArg_Parser parser = {"OO:gen_break", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_nonlocalcontrol___TryFinallyNonlocalControl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.TryFinallyNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___TryFinallyNonlocalControl___gen_break(arg_self, arg_builder, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_break", 146, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___TryFinallyNonlocalControl___gen_continue(PyObject *cpy_r_self, PyObject *cpy_r_builder, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyStatics[8490]; /* 'continue inside try/finally block is unimplemented' */
    cpy_r_r1 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r0, cpy_r_line);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_continue", 150, CPyStatic_nonlocalcontrol___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_nonlocalcontrol___TryFinallyNonlocalControl___gen_continue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "line", 0};
    static CPyArg_Parser parser = {"OO:gen_continue", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_nonlocalcontrol___TryFinallyNonlocalControl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.TryFinallyNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___TryFinallyNonlocalControl___gen_continue(arg_self, arg_builder, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_continue", 149, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___TryFinallyNonlocalControl___gen_return(PyObject *cpy_r_self, PyObject *cpy_r_builder, PyObject *cpy_r_value, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = ((mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *)cpy_r_self)->_ret_reg;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (!cpy_r_r2) goto CPyL11;
    cpy_r_r3 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPY_GET_ATTR(cpy_r_r3, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 154, CPyStatic_nonlocalcontrol___globals);
        goto CPyL22;
    }
CPyL2: ;
    if (!cpy_r_r4) goto CPyL7;
CPyL3: ;
    cpy_r_r5 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_ret_types;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, -2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 155, CPyStatic_nonlocalcontrol___globals);
        goto CPyL22;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_rtypes___RType)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 155, CPyStatic_nonlocalcontrol___globals, "mypyc.ir.rtypes.RType", cpy_r_r6);
        goto CPyL22;
    }
    cpy_r_r8 = CPyDef_builder___IRBuilder___make_spill_target(cpy_r_builder, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 155, CPyStatic_nonlocalcontrol___globals);
        goto CPyL22;
    }
    CPy_DECREF(((mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *)cpy_r_self)->_ret_reg);
    ((mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *)cpy_r_self)->_ret_reg = cpy_r_r8;
    goto CPyL11;
CPyL7: ;
    cpy_r_r10 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_ret_types;
    cpy_r_r11 = CPyList_GetItemShort(cpy_r_r10, -2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 157, CPyStatic_nonlocalcontrol___globals);
        goto CPyL22;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_rtypes___RType)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 157, CPyStatic_nonlocalcontrol___globals, "mypyc.ir.rtypes.RType", cpy_r_r11);
        goto CPyL22;
    }
    cpy_r_r13 = NULL;
    cpy_r_r14 = 2;
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = CPyDef_ops___Register(cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 157, CPyStatic_nonlocalcontrol___globals);
        goto CPyL22;
    }
    CPy_DECREF(((mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *)cpy_r_self)->_ret_reg);
    ((mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *)cpy_r_self)->_ret_reg = cpy_r_r16;
CPyL11: ;
    cpy_r_r18 = ((mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *)cpy_r_self)->_ret_reg;
    cpy_r_r19 = (PyObject *)CPyType_ops___Register;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_r18)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    if (!cpy_r_r22) goto CPyL13;
    cpy_r_r23 = cpy_r_r22;
    goto CPyL14;
CPyL13: ;
    cpy_r_r24 = (PyObject *)CPyType_targets___AssignmentTarget;
    cpy_r_r25 = CPy_TypeCheck(cpy_r_r18, cpy_r_r24);
    cpy_r_r23 = cpy_r_r25;
CPyL14: ;
    if (cpy_r_r23) goto CPyL17;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 160, CPyStatic_nonlocalcontrol___globals);
        goto CPyL22;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r27 = ((mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *)cpy_r_self)->_ret_reg;
    CPy_INCREF(cpy_r_r27);
    if (Py_TYPE(cpy_r_r27) == CPyType_ops___Register)
        cpy_r_r28 = cpy_r_r27;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL10394;
    if (PyObject_TypeCheck(cpy_r_r27, CPyType_targets___AssignmentTarget))
        cpy_r_r28 = cpy_r_r27;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL10394;
    CPy_TypeErrorTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 161, CPyStatic_nonlocalcontrol___globals, "union[mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget]", cpy_r_r27);
    goto CPyL22;
__LL10394: ;
    cpy_r_r29 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r28, cpy_r_value, cpy_r_line);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 161, CPyStatic_nonlocalcontrol___globals);
        goto CPyL22;
    }
    cpy_r_r30 = ((mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *)cpy_r_self)->_target;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = CPY_INT_TAG;
    cpy_r_r32 = CPyDef_ops___Goto(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 163, CPyStatic_nonlocalcontrol___globals);
        goto CPyL22;
    }
    cpy_r_r33 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 163, CPyStatic_nonlocalcontrol___globals);
        goto CPyL22;
    } else
        goto CPyL23;
CPyL21: ;
    return 1;
CPyL22: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
CPyL23: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL21;
}

PyObject *CPyPy_nonlocalcontrol___TryFinallyNonlocalControl___gen_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "value", "line", 0};
    static CPyArg_Parser parser = {"OOO:gen_return", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_value;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_value, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_nonlocalcontrol___TryFinallyNonlocalControl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.TryFinallyNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyObject_TypeCheck(obj_value, CPyType_ops___Value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_value); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___TryFinallyNonlocalControl___gen_return(arg_self, arg_builder, arg_value, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_return", 152, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___ExceptNonlocalControl_____init__(PyObject *cpy_r_self, PyObject *cpy_r_outer, PyObject *cpy_r_saved) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_nonlocalcontrol___CleanupNonlocalControl_____init__(cpy_r_self, cpy_r_outer);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "__init__", 174, CPyStatic_nonlocalcontrol___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_saved);
    ((mypyc___irbuild___nonlocalcontrol___ExceptNonlocalControlObject *)cpy_r_self)->_saved = cpy_r_saved;
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_nonlocalcontrol___ExceptNonlocalControl_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"outer", "saved", 0};
    PyObject *obj_outer;
    PyObject *obj_saved;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_outer, &obj_saved)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_nonlocalcontrol___ExceptNonlocalControl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.ExceptNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_outer;
    if (likely(PyObject_TypeCheck(obj_outer, CPyType_nonlocalcontrol___NonlocalControl)))
        arg_outer = obj_outer;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", obj_outer); 
        goto fail;
    }
    PyObject *arg_saved;
    if (PyObject_TypeCheck(obj_saved, CPyType_ops___Value))
        arg_saved = obj_saved;
    else {
        arg_saved = NULL;
    }
    if (arg_saved != NULL) goto __LL10395;
    if (PyObject_TypeCheck(obj_saved, CPyType_targets___AssignmentTarget))
        arg_saved = obj_saved;
    else {
        arg_saved = NULL;
    }
    if (arg_saved != NULL) goto __LL10395;
    CPy_TypeError("union[mypyc.ir.ops.Value, mypyc.irbuild.targets.AssignmentTarget]", obj_saved); 
    goto fail;
__LL10395: ;
    char retval = CPyDef_nonlocalcontrol___ExceptNonlocalControl_____init__(arg_self, arg_outer, arg_saved);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "__init__", 173, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___ExceptNonlocalControl___gen_cleanup(PyObject *cpy_r_self, PyObject *cpy_r_builder, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r1 = CPyStatics[8379]; /* 'restore_exc_info_op' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 178, CPyStatic_nonlocalcontrol___globals);
        goto CPyL6;
    }
    if (likely(PyTuple_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 178, CPyStatic_nonlocalcontrol___globals, "tuple", cpy_r_r2);
        goto CPyL6;
    }
    cpy_r_r4 = ((mypyc___irbuild___nonlocalcontrol___ExceptNonlocalControlObject *)cpy_r_self)->_saved;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = 2;
    cpy_r_r7 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r4, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 178, CPyStatic_nonlocalcontrol___globals);
        goto CPyL7;
    }
    cpy_r_r8 = PyList_New(1);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 178, CPyStatic_nonlocalcontrol___globals);
        goto CPyL8;
    }
    cpy_r_r9 = (CPyPtr)&((PyListObject *)cpy_r_r8)->ob_item;
    cpy_r_r10 = *(CPyPtr *)cpy_r_r9;
    *(PyObject * *)cpy_r_r10 = cpy_r_r7;
    cpy_r_r11 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r3, cpy_r_r8, cpy_r_line);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 178, CPyStatic_nonlocalcontrol___globals);
        goto CPyL6;
    } else
        goto CPyL9;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL7: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    goto CPyL6;
CPyL9: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL5;
}

PyObject *CPyPy_nonlocalcontrol___ExceptNonlocalControl___gen_cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "line", 0};
    static CPyArg_Parser parser = {"OO:gen_cleanup", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_nonlocalcontrol___ExceptNonlocalControl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.ExceptNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___ExceptNonlocalControl___gen_cleanup(arg_self, arg_builder, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 177, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___FinallyNonlocalControl_____init__(PyObject *cpy_r_self, PyObject *cpy_r_outer, PyObject *cpy_r_saved) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_nonlocalcontrol___CleanupNonlocalControl_____init__(cpy_r_self, cpy_r_outer);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "__init__", 189, CPyStatic_nonlocalcontrol___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_saved);
    ((mypyc___irbuild___nonlocalcontrol___FinallyNonlocalControlObject *)cpy_r_self)->_saved = cpy_r_saved;
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_nonlocalcontrol___FinallyNonlocalControl_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"outer", "saved", 0};
    PyObject *obj_outer;
    PyObject *obj_saved;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_outer, &obj_saved)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_nonlocalcontrol___FinallyNonlocalControl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.FinallyNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_outer;
    if (likely(PyObject_TypeCheck(obj_outer, CPyType_nonlocalcontrol___NonlocalControl)))
        arg_outer = obj_outer;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", obj_outer); 
        goto fail;
    }
    PyObject *arg_saved;
    if (likely(PyObject_TypeCheck(obj_saved, CPyType_ops___Value)))
        arg_saved = obj_saved;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_saved); 
        goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___FinallyNonlocalControl_____init__(arg_self, arg_outer, arg_saved);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "__init__", 188, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol___FinallyNonlocalControl___gen_cleanup(PyObject *cpy_r_self, PyObject *cpy_r_builder, CPyTagged cpy_r_line) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_target;
    PyObject *cpy_r_cleanup;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPyDef_ops___BasicBlock(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 194, CPyStatic_nonlocalcontrol___globals);
        goto CPyL11;
    }
    cpy_r_r2 = cpy_r_r1;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_ops___BasicBlock(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 194, CPyStatic_nonlocalcontrol___globals);
        goto CPyL12;
    }
    cpy_r_r5 = cpy_r_r4;
    cpy_r_target = cpy_r_r2;
    cpy_r_cleanup = cpy_r_r5;
    cpy_r_r6 = ((mypyc___irbuild___nonlocalcontrol___FinallyNonlocalControlObject *)cpy_r_self)->_saved;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_ops___Branch(cpy_r_r6, cpy_r_target, cpy_r_cleanup, 202, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 195, CPyStatic_nonlocalcontrol___globals);
        goto CPyL13;
    }
    cpy_r_r10 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 195, CPyStatic_nonlocalcontrol___globals);
        goto CPyL13;
    } else
        goto CPyL14;
CPyL4: ;
    cpy_r_r11 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_cleanup);
    CPy_DECREF(cpy_r_cleanup);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 196, CPyStatic_nonlocalcontrol___globals);
        goto CPyL15;
    }
    cpy_r_r12 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r13 = CPyStatics[8379]; /* 'restore_exc_info_op' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 197, CPyStatic_nonlocalcontrol___globals);
        goto CPyL15;
    }
    if (likely(PyTuple_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 197, CPyStatic_nonlocalcontrol___globals, "tuple", cpy_r_r14);
        goto CPyL15;
    }
    cpy_r_r16 = ((mypyc___irbuild___nonlocalcontrol___FinallyNonlocalControlObject *)cpy_r_self)->_saved;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = PyList_New(1);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 197, CPyStatic_nonlocalcontrol___globals);
        goto CPyL16;
    }
    cpy_r_r18 = (CPyPtr)&((PyListObject *)cpy_r_r17)->ob_item;
    cpy_r_r19 = *(CPyPtr *)cpy_r_r18;
    *(PyObject * *)cpy_r_r19 = cpy_r_r16;
    cpy_r_r20 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r15, cpy_r_r17, cpy_r_line);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 197, CPyStatic_nonlocalcontrol___globals);
        goto CPyL15;
    } else
        goto CPyL17;
CPyL9: ;
    cpy_r_r21 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_builder, cpy_r_target);
    CPy_DECREF(cpy_r_target);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 198, CPyStatic_nonlocalcontrol___globals);
        goto CPyL11;
    }
    return 1;
CPyL11: ;
    cpy_r_r22 = 2;
    return cpy_r_r22;
CPyL12: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_cleanup);
    goto CPyL11;
CPyL14: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL4;
CPyL15: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL11;
CPyL16: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    goto CPyL11;
CPyL17: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL9;
}

PyObject *CPyPy_nonlocalcontrol___FinallyNonlocalControl___gen_cleanup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "line", 0};
    static CPyArg_Parser parser = {"OO:gen_cleanup", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_nonlocalcontrol___FinallyNonlocalControl))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.FinallyNonlocalControl", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_nonlocalcontrol___FinallyNonlocalControl___gen_cleanup(arg_self, arg_builder, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "gen_cleanup", 192, CPyStatic_nonlocalcontrol___globals);
    return NULL;
}

char CPyDef_nonlocalcontrol_____top_level__(void) {
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
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
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
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
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
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
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
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    int32_t cpy_r_r152;
    char cpy_r_r153;
    char cpy_r_r154;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", -1, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 6, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9527]; /* ('abstractmethod',) */
    cpy_r_r10 = CPyStatics[602]; /* 'abc' */
    cpy_r_r11 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 8, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    CPyModule_abc = cpy_r_r12;
    CPy_INCREF(CPyModule_abc);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10201]; /* ('TYPE_CHECKING',) */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 9, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10202]; /* ('NO_TRACEBACK_LINE_NO', 'BasicBlock', 'Branch', 'Goto',
                                      'Integer', 'Register', 'Return', 'Unreachable',
                                      'Value') */
    cpy_r_r18 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r19 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 11, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10082]; /* ('AssignmentTarget',) */
    cpy_r_r22 = CPyStatics[8098]; /* 'mypyc.irbuild.targets' */
    cpy_r_r23 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 22, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    CPyModule_mypyc___irbuild___targets = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___irbuild___targets);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10203]; /* ('restore_exc_info_op', 'set_stop_iteration_value') */
    cpy_r_r26 = CPyStatics[8289]; /* 'mypyc.primitives.exc_ops' */
    cpy_r_r27 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 23, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    CPyModule_mypyc___primitives___exc_ops = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___primitives___exc_ops);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r30 = CPyStatics[58]; /* 'TYPE_CHECKING' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 25, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    if (unlikely(!PyBool_Check(cpy_r_r31))) {
        CPy_TypeError("bool", cpy_r_r31); cpy_r_r32 = 2;
    } else
        cpy_r_r32 = cpy_r_r31 == Py_True;
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 25, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r33 = NULL;
    cpy_r_r34 = CPyStatics[8089]; /* 'mypyc.irbuild.nonlocalcontrol' */
    cpy_r_r35 = (PyObject *)CPyType_nonlocalcontrol___NonlocalControl_template;
    cpy_r_r36 = CPyType_FromTemplate(cpy_r_r35, cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 29, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r37 = CPyDef_nonlocalcontrol___NonlocalControl_trait_vtable_setup();
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", -1, CPyStatic_nonlocalcontrol___globals);
        goto CPyL61;
    }
    cpy_r_r38 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r39 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 29, CPyStatic_nonlocalcontrol___globals);
        goto CPyL61;
    }
    cpy_r_r40 = PyObject_SetAttr(cpy_r_r36, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 29, CPyStatic_nonlocalcontrol___globals);
        goto CPyL61;
    }
    CPyType_nonlocalcontrol___NonlocalControl = (PyTypeObject *)cpy_r_r36;
    CPy_INCREF(CPyType_nonlocalcontrol___NonlocalControl);
    cpy_r_r42 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r43 = CPyStatics[8088]; /* 'NonlocalControl' */
    cpy_r_r44 = CPyDict_SetItem(cpy_r_r42, cpy_r_r43, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 29, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r46 = (PyObject *)CPyType_nonlocalcontrol___NonlocalControl;
    cpy_r_r47 = PyTuple_Pack(1, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 54, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r48 = CPyStatics[8089]; /* 'mypyc.irbuild.nonlocalcontrol' */
    cpy_r_r49 = (PyObject *)CPyType_nonlocalcontrol___BaseNonlocalControl_template;
    cpy_r_r50 = CPyType_FromTemplate(cpy_r_r49, cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 54, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r51 = CPyDef_nonlocalcontrol___BaseNonlocalControl_trait_vtable_setup();
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", -1, CPyStatic_nonlocalcontrol___globals);
        goto CPyL62;
    }
    cpy_r_r52 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r53 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 54, CPyStatic_nonlocalcontrol___globals);
        goto CPyL62;
    }
    cpy_r_r54 = PyObject_SetAttr(cpy_r_r50, cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 54, CPyStatic_nonlocalcontrol___globals);
        goto CPyL62;
    }
    CPyType_nonlocalcontrol___BaseNonlocalControl = (PyTypeObject *)cpy_r_r50;
    CPy_INCREF(CPyType_nonlocalcontrol___BaseNonlocalControl);
    cpy_r_r56 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r57 = CPyStatics[8085]; /* 'BaseNonlocalControl' */
    cpy_r_r58 = CPyDict_SetItem(cpy_r_r56, cpy_r_r57, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 54, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r60 = (PyObject *)CPyType_nonlocalcontrol___NonlocalControl;
    cpy_r_r61 = PyTuple_Pack(1, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 67, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r62 = CPyStatics[8089]; /* 'mypyc.irbuild.nonlocalcontrol' */
    cpy_r_r63 = (PyObject *)CPyType_nonlocalcontrol___LoopNonlocalControl_template;
    cpy_r_r64 = CPyType_FromTemplate(cpy_r_r63, cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 67, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r65 = CPyDef_nonlocalcontrol___LoopNonlocalControl_trait_vtable_setup();
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", -1, CPyStatic_nonlocalcontrol___globals);
        goto CPyL63;
    }
    cpy_r_r66 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r67 = CPyStatics[8491]; /* 'outer' */
    cpy_r_r68 = CPyStatics[8492]; /* 'continue_block' */
    cpy_r_r69 = CPyStatics[8493]; /* 'break_block' */
    cpy_r_r70 = PyTuple_Pack(3, cpy_r_r67, cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 67, CPyStatic_nonlocalcontrol___globals);
        goto CPyL63;
    }
    cpy_r_r71 = PyObject_SetAttr(cpy_r_r64, cpy_r_r66, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 67, CPyStatic_nonlocalcontrol___globals);
        goto CPyL63;
    }
    CPyType_nonlocalcontrol___LoopNonlocalControl = (PyTypeObject *)cpy_r_r64;
    CPy_INCREF(CPyType_nonlocalcontrol___LoopNonlocalControl);
    cpy_r_r73 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r74 = CPyStatics[8087]; /* 'LoopNonlocalControl' */
    cpy_r_r75 = CPyDict_SetItem(cpy_r_r73, cpy_r_r74, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 67, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r77 = (PyObject *)CPyType_nonlocalcontrol___BaseNonlocalControl;
    cpy_r_r78 = PyTuple_Pack(1, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 87, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r79 = CPyStatics[8089]; /* 'mypyc.irbuild.nonlocalcontrol' */
    cpy_r_r80 = (PyObject *)CPyType_nonlocalcontrol___GeneratorNonlocalControl_template;
    cpy_r_r81 = CPyType_FromTemplate(cpy_r_r80, cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 87, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r82 = CPyDef_nonlocalcontrol___GeneratorNonlocalControl_trait_vtable_setup();
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", -1, CPyStatic_nonlocalcontrol___globals);
        goto CPyL64;
    }
    cpy_r_r83 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r84 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 87, CPyStatic_nonlocalcontrol___globals);
        goto CPyL64;
    }
    cpy_r_r85 = PyObject_SetAttr(cpy_r_r81, cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 87, CPyStatic_nonlocalcontrol___globals);
        goto CPyL64;
    }
    CPyType_nonlocalcontrol___GeneratorNonlocalControl = (PyTypeObject *)cpy_r_r81;
    CPy_INCREF(CPyType_nonlocalcontrol___GeneratorNonlocalControl);
    cpy_r_r87 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r88 = CPyStatics[8086]; /* 'GeneratorNonlocalControl' */
    cpy_r_r89 = CPyDict_SetItem(cpy_r_r87, cpy_r_r88, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 87, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r91 = (PyObject *)CPyType_nonlocalcontrol___NonlocalControl;
    cpy_r_r92 = PyTuple_Pack(1, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 116, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r93 = CPyStatics[8089]; /* 'mypyc.irbuild.nonlocalcontrol' */
    cpy_r_r94 = (PyObject *)CPyType_nonlocalcontrol___CleanupNonlocalControl_template;
    cpy_r_r95 = CPyType_FromTemplate(cpy_r_r94, cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 116, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r96 = CPyDef_nonlocalcontrol___CleanupNonlocalControl_trait_vtable_setup();
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", -1, CPyStatic_nonlocalcontrol___globals);
        goto CPyL65;
    }
    cpy_r_r97 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r98 = CPyStatics[8491]; /* 'outer' */
    cpy_r_r99 = PyTuple_Pack(1, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 116, CPyStatic_nonlocalcontrol___globals);
        goto CPyL65;
    }
    cpy_r_r100 = PyObject_SetAttr(cpy_r_r95, cpy_r_r97, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 116, CPyStatic_nonlocalcontrol___globals);
        goto CPyL65;
    }
    CPyType_nonlocalcontrol___CleanupNonlocalControl = (PyTypeObject *)cpy_r_r95;
    CPy_INCREF(CPyType_nonlocalcontrol___CleanupNonlocalControl);
    cpy_r_r102 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r103 = CPyStatics[8494]; /* 'CleanupNonlocalControl' */
    cpy_r_r104 = CPyDict_SetItem(cpy_r_r102, cpy_r_r103, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 116, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r106 = (PyObject *)CPyType_nonlocalcontrol___NonlocalControl;
    cpy_r_r107 = PyTuple_Pack(1, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 139, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r108 = CPyStatics[8089]; /* 'mypyc.irbuild.nonlocalcontrol' */
    cpy_r_r109 = (PyObject *)CPyType_nonlocalcontrol___TryFinallyNonlocalControl_template;
    cpy_r_r110 = CPyType_FromTemplate(cpy_r_r109, cpy_r_r107, cpy_r_r108);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 139, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r111 = CPyDef_nonlocalcontrol___TryFinallyNonlocalControl_trait_vtable_setup();
    if (unlikely(cpy_r_r111 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", -1, CPyStatic_nonlocalcontrol___globals);
        goto CPyL66;
    }
    cpy_r_r112 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r113 = CPyStatics[1629]; /* 'target' */
    cpy_r_r114 = CPyStatics[8495]; /* 'ret_reg' */
    cpy_r_r115 = PyTuple_Pack(2, cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 139, CPyStatic_nonlocalcontrol___globals);
        goto CPyL66;
    }
    cpy_r_r116 = PyObject_SetAttr(cpy_r_r110, cpy_r_r112, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 139, CPyStatic_nonlocalcontrol___globals);
        goto CPyL66;
    }
    CPyType_nonlocalcontrol___TryFinallyNonlocalControl = (PyTypeObject *)cpy_r_r110;
    CPy_INCREF(CPyType_nonlocalcontrol___TryFinallyNonlocalControl);
    cpy_r_r118 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r119 = CPyStatics[8496]; /* 'TryFinallyNonlocalControl' */
    cpy_r_r120 = CPyDict_SetItem(cpy_r_r118, cpy_r_r119, cpy_r_r110);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 139, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r122 = (PyObject *)CPyType_nonlocalcontrol___CleanupNonlocalControl;
    cpy_r_r123 = PyTuple_Pack(1, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 166, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r124 = CPyStatics[8089]; /* 'mypyc.irbuild.nonlocalcontrol' */
    cpy_r_r125 = (PyObject *)CPyType_nonlocalcontrol___ExceptNonlocalControl_template;
    cpy_r_r126 = CPyType_FromTemplate(cpy_r_r125, cpy_r_r123, cpy_r_r124);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 166, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r127 = CPyDef_nonlocalcontrol___ExceptNonlocalControl_trait_vtable_setup();
    if (unlikely(cpy_r_r127 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", -1, CPyStatic_nonlocalcontrol___globals);
        goto CPyL67;
    }
    cpy_r_r128 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r129 = CPyStatics[8497]; /* 'saved' */
    cpy_r_r130 = CPyStatics[8491]; /* 'outer' */
    cpy_r_r131 = PyTuple_Pack(2, cpy_r_r129, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 166, CPyStatic_nonlocalcontrol___globals);
        goto CPyL67;
    }
    cpy_r_r132 = PyObject_SetAttr(cpy_r_r126, cpy_r_r128, cpy_r_r131);
    CPy_DECREF(cpy_r_r131);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 166, CPyStatic_nonlocalcontrol___globals);
        goto CPyL67;
    }
    CPyType_nonlocalcontrol___ExceptNonlocalControl = (PyTypeObject *)cpy_r_r126;
    CPy_INCREF(CPyType_nonlocalcontrol___ExceptNonlocalControl);
    cpy_r_r134 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r135 = CPyStatics[8384]; /* 'ExceptNonlocalControl' */
    cpy_r_r136 = CPyDict_SetItem(cpy_r_r134, cpy_r_r135, cpy_r_r126);
    CPy_DECREF(cpy_r_r126);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 166, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r138 = (PyObject *)CPyType_nonlocalcontrol___CleanupNonlocalControl;
    cpy_r_r139 = PyTuple_Pack(1, cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 181, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r140 = CPyStatics[8089]; /* 'mypyc.irbuild.nonlocalcontrol' */
    cpy_r_r141 = (PyObject *)CPyType_nonlocalcontrol___FinallyNonlocalControl_template;
    cpy_r_r142 = CPyType_FromTemplate(cpy_r_r141, cpy_r_r139, cpy_r_r140);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 181, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    cpy_r_r143 = CPyDef_nonlocalcontrol___FinallyNonlocalControl_trait_vtable_setup();
    if (unlikely(cpy_r_r143 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", -1, CPyStatic_nonlocalcontrol___globals);
        goto CPyL68;
    }
    cpy_r_r144 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r145 = CPyStatics[8497]; /* 'saved' */
    cpy_r_r146 = CPyStatics[8491]; /* 'outer' */
    cpy_r_r147 = PyTuple_Pack(2, cpy_r_r145, cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 181, CPyStatic_nonlocalcontrol___globals);
        goto CPyL68;
    }
    cpy_r_r148 = PyObject_SetAttr(cpy_r_r142, cpy_r_r144, cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 181, CPyStatic_nonlocalcontrol___globals);
        goto CPyL68;
    }
    CPyType_nonlocalcontrol___FinallyNonlocalControl = (PyTypeObject *)cpy_r_r142;
    CPy_INCREF(CPyType_nonlocalcontrol___FinallyNonlocalControl);
    cpy_r_r150 = CPyStatic_nonlocalcontrol___globals;
    cpy_r_r151 = CPyStatics[8498]; /* 'FinallyNonlocalControl' */
    cpy_r_r152 = CPyDict_SetItem(cpy_r_r150, cpy_r_r151, cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    cpy_r_r153 = cpy_r_r152 >= 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("mypyc/irbuild/nonlocalcontrol.py", "<module>", 181, CPyStatic_nonlocalcontrol___globals);
        goto CPyL60;
    }
    return 1;
CPyL60: ;
    cpy_r_r154 = 2;
    return cpy_r_r154;
CPyL61: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL60;
CPyL62: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL60;
CPyL63: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL60;
CPyL64: ;
    CPy_DecRef(cpy_r_r81);
    goto CPyL60;
CPyL65: ;
    CPy_DecRef(cpy_r_r95);
    goto CPyL60;
CPyL66: ;
    CPy_DecRef(cpy_r_r110);
    goto CPyL60;
CPyL67: ;
    CPy_DecRef(cpy_r_r126);
    goto CPyL60;
CPyL68: ;
    CPy_DecRef(cpy_r_r142);
    goto CPyL60;
}
