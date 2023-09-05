#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *objgraph___get_edge_candidates_env_setup(PyTypeObject *type);
PyObject *CPyDef_objgraph___get_edge_candidates_env(void);

static PyObject *
objgraph___get_edge_candidates_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_objgraph___get_edge_candidates_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return objgraph___get_edge_candidates_env_setup(type);
}

static int
objgraph___get_edge_candidates_env_traverse(mypy___server___objgraph___get_edge_candidates_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_o);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->_attr);
    Py_VISIT(self->_e);
    Py_VISIT(self->___mypyc_temp__2.f0);
    Py_VISIT(self->___mypyc_temp__2.f1);
    Py_VISIT(self->___mypyc_temp__2.f2);
    Py_VISIT(self->___mypyc_temp__3);
    Py_VISIT(self->___mypyc_temp__4.f0);
    Py_VISIT(self->___mypyc_temp__4.f1);
    Py_VISIT(self->___mypyc_temp__4.f2);
    if (CPyTagged_CheckLong(self->_i)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_i));
    }
    Py_VISIT(self->___mypyc_temp__6);
    Py_VISIT(self->___mypyc_temp__7);
    return 0;
}

static int
objgraph___get_edge_candidates_env_clear(mypy___server___objgraph___get_edge_candidates_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_o);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->_attr);
    Py_CLEAR(self->_e);
    Py_CLEAR(self->___mypyc_temp__2.f0);
    Py_CLEAR(self->___mypyc_temp__2.f1);
    Py_CLEAR(self->___mypyc_temp__2.f2);
    Py_CLEAR(self->___mypyc_temp__3);
    Py_CLEAR(self->___mypyc_temp__4.f0);
    Py_CLEAR(self->___mypyc_temp__4.f1);
    Py_CLEAR(self->___mypyc_temp__4.f2);
    if (CPyTagged_CheckLong(self->_i)) {
        CPyTagged __tmp = self->_i;
        self->_i = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__6);
    Py_CLEAR(self->___mypyc_temp__7);
    return 0;
}

static void
objgraph___get_edge_candidates_env_dealloc(mypy___server___objgraph___get_edge_candidates_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, objgraph___get_edge_candidates_env_dealloc)
    objgraph___get_edge_candidates_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem objgraph___get_edge_candidates_env_vtable[1];
static bool
CPyDef_objgraph___get_edge_candidates_env_trait_vtable_setup(void)
{
    CPyVTableItem objgraph___get_edge_candidates_env_vtable_scratch[] = {
        NULL
    };
    memcpy(objgraph___get_edge_candidates_env_vtable, objgraph___get_edge_candidates_env_vtable_scratch, sizeof(objgraph___get_edge_candidates_env_vtable));
    return 1;
}

static PyMethodDef objgraph___get_edge_candidates_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_objgraph___get_edge_candidates_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_edge_candidates_env",
    .tp_new = objgraph___get_edge_candidates_env_new,
    .tp_dealloc = (destructor)objgraph___get_edge_candidates_env_dealloc,
    .tp_traverse = (traverseproc)objgraph___get_edge_candidates_env_traverse,
    .tp_clear = (inquiry)objgraph___get_edge_candidates_env_clear,
    .tp_methods = objgraph___get_edge_candidates_env_methods,
    .tp_basicsize = sizeof(mypy___server___objgraph___get_edge_candidates_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_objgraph___get_edge_candidates_env_template = &CPyType_objgraph___get_edge_candidates_env_template_;

static PyObject *
objgraph___get_edge_candidates_env_setup(PyTypeObject *type)
{
    mypy___server___objgraph___get_edge_candidates_envObject *self;
    self = (mypy___server___objgraph___get_edge_candidates_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = objgraph___get_edge_candidates_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__1 = CPY_INT_TAG;
    self->___mypyc_temp__2 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__4 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__5 = CPY_INT_TAG;
    self->_i = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_objgraph___get_edge_candidates_env(void)
{
    PyObject *self = objgraph___get_edge_candidates_env_setup(CPyType_objgraph___get_edge_candidates_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *objgraph___get_edge_candidates_gen_setup(PyTypeObject *type);
PyObject *CPyDef_objgraph___get_edge_candidates_gen(void);

static PyObject *
objgraph___get_edge_candidates_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_objgraph___get_edge_candidates_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return objgraph___get_edge_candidates_gen_setup(type);
}

static int
objgraph___get_edge_candidates_gen_traverse(mypy___server___objgraph___get_edge_candidates_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
objgraph___get_edge_candidates_gen_clear(mypy___server___objgraph___get_edge_candidates_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
objgraph___get_edge_candidates_gen_dealloc(mypy___server___objgraph___get_edge_candidates_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, objgraph___get_edge_candidates_gen_dealloc)
    objgraph___get_edge_candidates_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem objgraph___get_edge_candidates_gen_vtable[6];
static bool
CPyDef_objgraph___get_edge_candidates_gen_trait_vtable_setup(void)
{
    CPyVTableItem objgraph___get_edge_candidates_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_objgraph___get_edge_candidates_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_objgraph___get_edge_candidates_gen_____next__,
        (CPyVTableItem)CPyDef_objgraph___get_edge_candidates_gen___send,
        (CPyVTableItem)CPyDef_objgraph___get_edge_candidates_gen_____iter__,
        (CPyVTableItem)CPyDef_objgraph___get_edge_candidates_gen___throw,
        (CPyVTableItem)CPyDef_objgraph___get_edge_candidates_gen___close,
    };
    memcpy(objgraph___get_edge_candidates_gen_vtable, objgraph___get_edge_candidates_gen_vtable_scratch, sizeof(objgraph___get_edge_candidates_gen_vtable));
    return 1;
}

static PyMethodDef objgraph___get_edge_candidates_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_objgraph___get_edge_candidates_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_objgraph___get_edge_candidates_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_objgraph___get_edge_candidates_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_objgraph___get_edge_candidates_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_objgraph___get_edge_candidates_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_objgraph___get_edge_candidates_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_objgraph___get_edge_candidates_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_edge_candidates_gen",
    .tp_new = objgraph___get_edge_candidates_gen_new,
    .tp_dealloc = (destructor)objgraph___get_edge_candidates_gen_dealloc,
    .tp_traverse = (traverseproc)objgraph___get_edge_candidates_gen_traverse,
    .tp_clear = (inquiry)objgraph___get_edge_candidates_gen_clear,
    .tp_methods = objgraph___get_edge_candidates_gen_methods,
    .tp_iter = CPyDef_objgraph___get_edge_candidates_gen_____iter__,
    .tp_iternext = CPyDef_objgraph___get_edge_candidates_gen_____next__,
    .tp_basicsize = sizeof(mypy___server___objgraph___get_edge_candidates_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_objgraph___get_edge_candidates_gen_template = &CPyType_objgraph___get_edge_candidates_gen_template_;

static PyObject *
objgraph___get_edge_candidates_gen_setup(PyTypeObject *type)
{
    mypy___server___objgraph___get_edge_candidates_genObject *self;
    self = (mypy___server___objgraph___get_edge_candidates_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = objgraph___get_edge_candidates_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_objgraph___get_edge_candidates_gen(void)
{
    PyObject *self = objgraph___get_edge_candidates_gen_setup(CPyType_objgraph___get_edge_candidates_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *objgraph___get_edges_env_setup(PyTypeObject *type);
PyObject *CPyDef_objgraph___get_edges_env(void);

static PyObject *
objgraph___get_edges_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_objgraph___get_edges_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return objgraph___get_edges_env_setup(type);
}

static int
objgraph___get_edges_env_traverse(mypy___server___objgraph___get_edges_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_o);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__8);
    Py_VISIT(self->___mypyc_temp__9);
    Py_VISIT(self->_s);
    Py_VISIT(self->_e);
    Py_VISIT(self->_se);
    return 0;
}

static int
objgraph___get_edges_env_clear(mypy___server___objgraph___get_edges_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_o);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__8);
    Py_CLEAR(self->___mypyc_temp__9);
    Py_CLEAR(self->_s);
    Py_CLEAR(self->_e);
    Py_CLEAR(self->_se);
    return 0;
}

static void
objgraph___get_edges_env_dealloc(mypy___server___objgraph___get_edges_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, objgraph___get_edges_env_dealloc)
    objgraph___get_edges_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem objgraph___get_edges_env_vtable[1];
static bool
CPyDef_objgraph___get_edges_env_trait_vtable_setup(void)
{
    CPyVTableItem objgraph___get_edges_env_vtable_scratch[] = {
        NULL
    };
    memcpy(objgraph___get_edges_env_vtable, objgraph___get_edges_env_vtable_scratch, sizeof(objgraph___get_edges_env_vtable));
    return 1;
}

static PyMethodDef objgraph___get_edges_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_objgraph___get_edges_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_edges_env",
    .tp_new = objgraph___get_edges_env_new,
    .tp_dealloc = (destructor)objgraph___get_edges_env_dealloc,
    .tp_traverse = (traverseproc)objgraph___get_edges_env_traverse,
    .tp_clear = (inquiry)objgraph___get_edges_env_clear,
    .tp_methods = objgraph___get_edges_env_methods,
    .tp_basicsize = sizeof(mypy___server___objgraph___get_edges_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_objgraph___get_edges_env_template = &CPyType_objgraph___get_edges_env_template_;

static PyObject *
objgraph___get_edges_env_setup(PyTypeObject *type)
{
    mypy___server___objgraph___get_edges_envObject *self;
    self = (mypy___server___objgraph___get_edges_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = objgraph___get_edges_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_objgraph___get_edges_env(void)
{
    PyObject *self = objgraph___get_edges_env_setup(CPyType_objgraph___get_edges_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *objgraph___get_edges_gen_setup(PyTypeObject *type);
PyObject *CPyDef_objgraph___get_edges_gen(void);

static PyObject *
objgraph___get_edges_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_objgraph___get_edges_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return objgraph___get_edges_gen_setup(type);
}

static int
objgraph___get_edges_gen_traverse(mypy___server___objgraph___get_edges_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
objgraph___get_edges_gen_clear(mypy___server___objgraph___get_edges_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
objgraph___get_edges_gen_dealloc(mypy___server___objgraph___get_edges_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, objgraph___get_edges_gen_dealloc)
    objgraph___get_edges_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem objgraph___get_edges_gen_vtable[6];
static bool
CPyDef_objgraph___get_edges_gen_trait_vtable_setup(void)
{
    CPyVTableItem objgraph___get_edges_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_objgraph___get_edges_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_objgraph___get_edges_gen_____next__,
        (CPyVTableItem)CPyDef_objgraph___get_edges_gen___send,
        (CPyVTableItem)CPyDef_objgraph___get_edges_gen_____iter__,
        (CPyVTableItem)CPyDef_objgraph___get_edges_gen___throw,
        (CPyVTableItem)CPyDef_objgraph___get_edges_gen___close,
    };
    memcpy(objgraph___get_edges_gen_vtable, objgraph___get_edges_gen_vtable_scratch, sizeof(objgraph___get_edges_gen_vtable));
    return 1;
}

static PyMethodDef objgraph___get_edges_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_objgraph___get_edges_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_objgraph___get_edges_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_objgraph___get_edges_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_objgraph___get_edges_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_objgraph___get_edges_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_objgraph___get_edges_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_objgraph___get_edges_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_edges_gen",
    .tp_new = objgraph___get_edges_gen_new,
    .tp_dealloc = (destructor)objgraph___get_edges_gen_dealloc,
    .tp_traverse = (traverseproc)objgraph___get_edges_gen_traverse,
    .tp_clear = (inquiry)objgraph___get_edges_gen_clear,
    .tp_methods = objgraph___get_edges_gen_methods,
    .tp_iter = CPyDef_objgraph___get_edges_gen_____iter__,
    .tp_iternext = CPyDef_objgraph___get_edges_gen_____next__,
    .tp_basicsize = sizeof(mypy___server___objgraph___get_edges_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_objgraph___get_edges_gen_template = &CPyType_objgraph___get_edges_gen_template_;

static PyObject *
objgraph___get_edges_gen_setup(PyTypeObject *type)
{
    mypy___server___objgraph___get_edges_genObject *self;
    self = (mypy___server___objgraph___get_edges_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = objgraph___get_edges_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_objgraph___get_edges_gen(void)
{
    PyObject *self = objgraph___get_edges_gen_setup(CPyType_objgraph___get_edges_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef objgraphmodule_methods[] = {
    {"isproperty", (PyCFunction)CPyPy_objgraph___isproperty, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_edge_candidates", (PyCFunction)CPyPy_objgraph___get_edge_candidates, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_edges", (PyCFunction)CPyPy_objgraph___get_edges, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_reachable_graph", (PyCFunction)CPyPy_objgraph___get_reachable_graph, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_path", (PyCFunction)CPyPy_objgraph___get_path, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef objgraphmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.server.objgraph",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    objgraphmodule_methods
};

PyObject *CPyInit_mypy___server___objgraph(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___server___objgraph_internal) {
        Py_INCREF(CPyModule_mypy___server___objgraph_internal);
        return CPyModule_mypy___server___objgraph_internal;
    }
    CPyModule_mypy___server___objgraph_internal = PyModule_Create(&objgraphmodule);
    if (unlikely(CPyModule_mypy___server___objgraph_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___server___objgraph_internal, "__name__");
    CPyStatic_objgraph___globals = PyModule_GetDict(CPyModule_mypy___server___objgraph_internal);
    if (unlikely(CPyStatic_objgraph___globals == NULL))
        goto fail;
    CPyType_objgraph___get_edge_candidates_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_objgraph___get_edge_candidates_env_template, NULL, modname);
    if (unlikely(!CPyType_objgraph___get_edge_candidates_env))
        goto fail;
    CPyType_objgraph___get_edge_candidates_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_objgraph___get_edge_candidates_gen_template, NULL, modname);
    if (unlikely(!CPyType_objgraph___get_edge_candidates_gen))
        goto fail;
    CPyType_objgraph___get_edges_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_objgraph___get_edges_env_template, NULL, modname);
    if (unlikely(!CPyType_objgraph___get_edges_env))
        goto fail;
    CPyType_objgraph___get_edges_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_objgraph___get_edges_gen_template, NULL, modname);
    if (unlikely(!CPyType_objgraph___get_edges_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_objgraph_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___server___objgraph_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___server___objgraph_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_objgraph___method_descriptor_type);
    CPyStatic_objgraph___method_descriptor_type = NULL;
    CPy_XDECREF(CPyStatic_objgraph___method_wrapper_type);
    CPyStatic_objgraph___method_wrapper_type = NULL;
    CPy_XDECREF(CPyStatic_objgraph___wrapper_descriptor_type);
    CPyStatic_objgraph___wrapper_descriptor_type = NULL;
    CPy_XDECREF(CPyStatic_objgraph___FUNCTION_TYPES.f0);
    CPy_XDECREF(CPyStatic_objgraph___FUNCTION_TYPES.f1);
    CPy_XDECREF(CPyStatic_objgraph___FUNCTION_TYPES.f2);
    CPy_XDECREF(CPyStatic_objgraph___FUNCTION_TYPES.f3);
    CPy_XDECREF(CPyStatic_objgraph___FUNCTION_TYPES.f4);
    CPy_XDECREF(CPyStatic_objgraph___FUNCTION_TYPES.f5);
    CPyStatic_objgraph___FUNCTION_TYPES = (tuple_T6OOOOOO) { NULL, NULL, NULL, NULL, NULL, NULL };
    CPy_XDECREF(CPyStatic_objgraph___ATTR_BLACKLIST);
    CPyStatic_objgraph___ATTR_BLACKLIST = NULL;
    CPy_XDECREF(CPyStatic_objgraph___ATOMIC_TYPE_BLACKLIST);
    CPyStatic_objgraph___ATOMIC_TYPE_BLACKLIST = NULL;
    CPy_XDECREF(CPyStatic_objgraph___COLLECTION_TYPE_BLACKLIST);
    CPyStatic_objgraph___COLLECTION_TYPE_BLACKLIST = NULL;
    CPy_XDECREF(CPyStatic_objgraph___TYPE_BLACKLIST);
    CPyStatic_objgraph___TYPE_BLACKLIST = NULL;
    Py_CLEAR(CPyType_objgraph___get_edge_candidates_env);
    Py_CLEAR(CPyType_objgraph___get_edge_candidates_gen);
    Py_CLEAR(CPyType_objgraph___get_edges_env);
    Py_CLEAR(CPyType_objgraph___get_edges_gen);
    return NULL;
}

char CPyDef_objgraph___isproperty(PyObject *cpy_r_o, PyObject *cpy_r_attr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = PyObject_Type(cpy_r_o);
    cpy_r_r1 = Py_None;
    cpy_r_r2 = CPyObject_GetAttr3(cpy_r_r0, cpy_r_attr, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "isproperty", 36, CPyStatic_objgraph___globals);
        goto CPyL4;
    }
    cpy_r_r3 = CPyModule_builtins;
    cpy_r_r4 = CPyStatics[4870]; /* 'property' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "isproperty", 36, CPyStatic_objgraph___globals);
        goto CPyL5;
    }
    cpy_r_r6 = PyObject_IsInstance(cpy_r_r2, cpy_r_r5);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "isproperty", 36, CPyStatic_objgraph___globals);
        goto CPyL4;
    }
    cpy_r_r8 = cpy_r_r6;
    return cpy_r_r8;
CPyL4: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL5: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_objgraph___isproperty(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"o", "attr", 0};
    static CPyArg_Parser parser = {"OO:isproperty", kwlist, 0};
    PyObject *obj_o;
    PyObject *obj_attr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_o, &obj_attr)) {
        return NULL;
    }
    PyObject *arg_o = obj_o;
    PyObject *arg_attr;
    if (likely(PyUnicode_Check(obj_attr)))
        arg_attr = obj_attr;
    else {
        CPy_TypeError("str", obj_attr); 
        goto fail;
    }
    char retval = CPyDef_objgraph___isproperty(arg_o, arg_attr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "isproperty", 35, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_edge_candidates_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    int64_t cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    tuple_T2OO cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    tuple_T3OOO cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    tuple_T3OOO cpy_r_r83;
    tuple_T3OOO cpy_r_r84;
    char cpy_r_r85;
    CPyTagged cpy_r_r86;
    CPyTagged cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject **cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    tuple_T3OOO cpy_r_r112;
    char cpy_r_r113;
    PyObject **cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    tuple_T3OOO cpy_r_r118;
    char cpy_r_r119;
    tuple_T3OOO cpy_r_r120;
    tuple_T3OOO cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    int32_t cpy_r_r130;
    char cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    int32_t cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    CPyTagged cpy_r_r147;
    PyObject *cpy_r_r148;
    tuple_T2IO cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    CPyTagged cpy_r_r154;
    CPyTagged cpy_r_r155;
    char cpy_r_r156;
    char cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    int64_t cpy_r_r161;
    char cpy_r_r162;
    char cpy_r_r163;
    char cpy_r_r164;
    char cpy_r_r165;
    int64_t cpy_r_r166;
    char cpy_r_r167;
    char cpy_r_r168;
    char cpy_r_r169;
    char cpy_r_r170;
    int64_t cpy_r_r171;
    char cpy_r_r172;
    char cpy_r_r173;
    char cpy_r_r174;
    char cpy_r_r175;
    int64_t cpy_r_r176;
    char cpy_r_r177;
    char cpy_r_r178;
    char cpy_r_r179;
    char cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((mypy___server___objgraph___get_edge_candidates_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_gen", "__mypyc_env__", 39, CPyStatic_objgraph___globals);
        goto CPyL163;
    }
    CPy_INCREF(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "__mypyc_next_label__", 39, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    CPyTagged_INCREF(cpy_r_r3);
    goto CPyL144;
CPyL2: ;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_type != cpy_r_r4;
    if (cpy_r_r5) {
        goto CPyL165;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 39, CPyStatic_objgraph___globals);
        goto CPyL162;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = CPyStatics[726]; /* '__getattribute__' */
    cpy_r_r7 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_o;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "o", 41, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    CPy_INCREF(cpy_r_r7);
CPyL6: ;
    cpy_r_r8 = PyObject_Type(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 41, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    cpy_r_r11 = PySequence_Contains(cpy_r_r10, cpy_r_r6);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 41, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    cpy_r_r13 = cpy_r_r11;
    if (cpy_r_r13) {
        goto CPyL166;
    } else
        goto CPyL12;
CPyL9: ;
    cpy_r_r14 = Py_None;
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__ = -2;
    cpy_r_r15 = 1;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 42, CPyStatic_objgraph___globals);
        goto CPyL162;
    }
    CPyGen_SetStopIterationValue(cpy_r_r14);
    if (!0) goto CPyL162;
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r16 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_o;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "o", 43, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    CPy_INCREF(cpy_r_r16);
CPyL13: ;
    cpy_r_r17 = PyObject_Type(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = CPyStatic_objgraph___COLLECTION_TYPE_BLACKLIST;
    if (unlikely(cpy_r_r18 == NULL)) {
        goto CPyL167;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"COLLECTION_TYPE_BLACKLIST\" was not set");
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 43, CPyStatic_objgraph___globals);
        goto CPyL162;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r20 = PySet_Contains(cpy_r_r18, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 43, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    cpy_r_r22 = cpy_r_r20;
    cpy_r_r23 = cpy_r_r22 ^ 1;
    if (!cpy_r_r23) goto CPyL73;
    cpy_r_r24 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_o;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "o", 44, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    CPy_INCREF(cpy_r_r24);
CPyL19: ;
    cpy_r_r25 = CPyModule_builtins;
    cpy_r_r26 = CPyStatics[5339]; /* 'dir' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 44, CPyStatic_objgraph___globals);
        goto CPyL168;
    }
    PyObject *cpy_r_r28[1] = {cpy_r_r24};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = _PyObject_Vectorcall(cpy_r_r27, cpy_r_r29, 1, 0);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 44, CPyStatic_objgraph___globals);
        goto CPyL168;
    }
    CPy_DECREF(cpy_r_r24);
    if (likely(PyList_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/server/objgraph.py", "get_edge_candidates", 44, CPyStatic_objgraph___globals, "list", cpy_r_r30);
        goto CPyL164;
    }
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__0);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__0 = cpy_r_r31;
    cpy_r_r32 = 1;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", -1, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__1 = 0;
    cpy_r_r33 = 1;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", -1, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
CPyL24: ;
    cpy_r_r34 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__0;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "__mypyc_temp__0", 44, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    CPy_INCREF(cpy_r_r34);
CPyL25: ;
    cpy_r_r35 = (CPyPtr)&((PyVarObject *)cpy_r_r34)->ob_size;
    cpy_r_r36 = *(int64_t *)cpy_r_r35;
    CPy_DECREF(cpy_r_r34);
    cpy_r_r37 = cpy_r_r36 << 1;
    cpy_r_r38 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__1;
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "__mypyc_temp__1", 44, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
CPyL26: ;
    cpy_r_r39 = (Py_ssize_t)cpy_r_r38 < (Py_ssize_t)cpy_r_r37;
    if (!cpy_r_r39) goto CPyL73;
    cpy_r_r40 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__0;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "__mypyc_temp__0", 44, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    CPy_INCREF(cpy_r_r40);
CPyL28: ;
    cpy_r_r41 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__1;
    if (unlikely(cpy_r_r41 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "__mypyc_temp__1", 44, CPyStatic_objgraph___globals);
        goto CPyL169;
    }
CPyL29: ;
    cpy_r_r42 = CPyList_GetItemUnsafe(cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (likely(PyUnicode_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/server/objgraph.py", "get_edge_candidates", 44, CPyStatic_objgraph___globals, "str", cpy_r_r42);
        goto CPyL164;
    }
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_attr != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_attr);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_attr = cpy_r_r43;
    cpy_r_r44 = 1;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 44, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    cpy_r_r45 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_attr;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "attr", 46, CPyStatic_objgraph___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r45);
CPyL32: ;
    cpy_r_r46 = CPyStatic_objgraph___ATTR_BLACKLIST;
    if (unlikely(cpy_r_r46 == NULL)) {
        goto CPyL170;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ATTR_BLACKLIST\" was not set");
    cpy_r_r47 = 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 46, CPyStatic_objgraph___globals);
        goto CPyL61;
    } else
        goto CPyL171;
CPyL34: ;
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r48 = PySet_Contains(cpy_r_r46, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 46, CPyStatic_objgraph___globals);
        goto CPyL61;
    }
    cpy_r_r50 = cpy_r_r48;
    cpy_r_r51 = cpy_r_r50 ^ 1;
    if (!cpy_r_r51) goto CPyL71;
    cpy_r_r52 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_o;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "o", 46, CPyStatic_objgraph___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r52);
CPyL38: ;
    cpy_r_r53 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_attr;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "attr", 46, CPyStatic_objgraph___globals);
        goto CPyL172;
    }
    CPy_INCREF(cpy_r_r53);
CPyL39: ;
    cpy_r_r54 = PyObject_HasAttr(cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r53);
    if (!cpy_r_r54) goto CPyL71;
    cpy_r_r55 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_o;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "o", 46, CPyStatic_objgraph___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r55);
CPyL41: ;
    cpy_r_r56 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_attr;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "attr", 46, CPyStatic_objgraph___globals);
        goto CPyL173;
    }
    CPy_INCREF(cpy_r_r56);
CPyL42: ;
    cpy_r_r57 = CPyDef_objgraph___isproperty(cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 46, CPyStatic_objgraph___globals);
        goto CPyL61;
    }
    if (cpy_r_r57) goto CPyL71;
    cpy_r_r58 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_o;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "o", 47, CPyStatic_objgraph___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r58);
CPyL45: ;
    cpy_r_r59 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_attr;
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "attr", 47, CPyStatic_objgraph___globals);
        goto CPyL174;
    }
    CPy_INCREF(cpy_r_r59);
CPyL46: ;
    cpy_r_r60 = CPyObject_GetAttr(cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 47, CPyStatic_objgraph___globals);
        goto CPyL61;
    }
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_e != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_e);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_e = cpy_r_r60;
    cpy_r_r61 = 1;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 47, CPyStatic_objgraph___globals);
        goto CPyL61;
    }
    cpy_r_r62 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_e;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "e", 48, CPyStatic_objgraph___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r62);
CPyL49: ;
    cpy_r_r63 = PyObject_Type(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r64 = CPyStatic_objgraph___ATOMIC_TYPE_BLACKLIST;
    if (unlikely(cpy_r_r64 == NULL)) {
        goto CPyL175;
    } else
        goto CPyL52;
CPyL50: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ATOMIC_TYPE_BLACKLIST\" was not set");
    cpy_r_r65 = 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 48, CPyStatic_objgraph___globals);
        goto CPyL61;
    } else
        goto CPyL176;
CPyL51: ;
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r66 = PySet_Contains(cpy_r_r64, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 48, CPyStatic_objgraph___globals);
        goto CPyL61;
    }
    cpy_r_r68 = cpy_r_r66;
    cpy_r_r69 = cpy_r_r68 ^ 1;
    if (!cpy_r_r69) goto CPyL71;
    cpy_r_r70 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_attr;
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "attr", 49, CPyStatic_objgraph___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r70);
CPyL55: ;
    cpy_r_r71 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_e;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "e", 49, CPyStatic_objgraph___globals);
        goto CPyL177;
    }
    CPy_INCREF(cpy_r_r71);
CPyL56: ;
    cpy_r_r72.f0 = cpy_r_r70;
    cpy_r_r72.f1 = cpy_r_r71;
    CPy_INCREF(cpy_r_r72.f0);
    CPy_INCREF(cpy_r_r72.f1);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r73 = PyTuple_New(2);
    if (unlikely(cpy_r_r73 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6566 = cpy_r_r72.f0;
    PyTuple_SET_ITEM(cpy_r_r73, 0, __tmp6566);
    PyObject *__tmp6567 = cpy_r_r72.f1;
    PyTuple_SET_ITEM(cpy_r_r73, 1, __tmp6567);
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__ = 2;
    cpy_r_r74 = 1;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 49, CPyStatic_objgraph___globals);
        goto CPyL178;
    } else
        goto CPyL179;
CPyL57: ;
    return cpy_r_r73;
CPyL58: ;
    cpy_r_r75 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r76 = cpy_r_type != cpy_r_r75;
    if (!cpy_r_r76) goto CPyL71;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 49, CPyStatic_objgraph___globals);
        goto CPyL61;
    } else
        goto CPyL180;
CPyL60: ;
    CPy_Unreachable();
CPyL61: ;
    cpy_r_r77 = CPy_CatchError();
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__2.f0 != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__2.f0);
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__2.f1);
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__2.f2);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__2 = cpy_r_r77;
    cpy_r_r78 = 1;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", -1, CPyStatic_objgraph___globals);
        goto CPyL181;
    }
    cpy_r_r79 = CPyModule_builtins;
    cpy_r_r80 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r81 = CPyObject_GetAttr(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 50, CPyStatic_objgraph___globals);
        goto CPyL181;
    }
    cpy_r_r82 = CPy_ExceptionMatches(cpy_r_r81);
    CPy_DecRef(cpy_r_r81);
    if (cpy_r_r82) {
        goto CPyL66;
    } else
        goto CPyL182;
CPyL64: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL68;
    } else
        goto CPyL183;
CPyL65: ;
    CPy_Unreachable();
CPyL66: ;
    cpy_r_r83 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r83.f0 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "__mypyc_temp__2", -1, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    CPy_INCREF(cpy_r_r83.f0);
    CPy_INCREF(cpy_r_r83.f1);
    CPy_INCREF(cpy_r_r83.f2);
CPyL67: ;
    CPy_RestoreExcInfo(cpy_r_r83);
    CPy_DecRef(cpy_r_r83.f0);
    CPy_DecRef(cpy_r_r83.f1);
    CPy_DecRef(cpy_r_r83.f2);
    goto CPyL71;
CPyL68: ;
    cpy_r_r84 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r84.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__2' of 'get_edge_candidates_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r84.f0);
        CPy_INCREF(cpy_r_r84.f1);
        CPy_INCREF(cpy_r_r84.f2);
    }
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r84.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", -1, CPyStatic_objgraph___globals);
        goto CPyL162;
    }
CPyL69: ;
    CPy_RestoreExcInfo(cpy_r_r84);
    CPy_DecRef(cpy_r_r84.f0);
    CPy_DecRef(cpy_r_r84.f1);
    CPy_DecRef(cpy_r_r84.f2);
    cpy_r_r85 = CPy_KeepPropagating();
    if (!cpy_r_r85) goto CPyL162;
    CPy_Unreachable();
CPyL71: ;
    cpy_r_r86 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__1;
    if (unlikely(cpy_r_r86 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "__mypyc_temp__1", 44, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
CPyL72: ;
    cpy_r_r87 = cpy_r_r86 + 2;
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__1 = cpy_r_r87;
    cpy_r_r88 = 1;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 44, CPyStatic_objgraph___globals);
        goto CPyL164;
    } else
        goto CPyL24;
CPyL73: ;
    cpy_r_r89 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_o;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "o", 52, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    CPy_INCREF(cpy_r_r89);
CPyL74: ;
    cpy_r_r90 = CPyStatic_objgraph___globals;
    cpy_r_r91 = CPyStatics[511]; /* 'Mapping' */
    cpy_r_r92 = CPyDict_GetItem(cpy_r_r90, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 52, CPyStatic_objgraph___globals);
        goto CPyL184;
    }
    cpy_r_r93 = PyObject_IsInstance(cpy_r_r89, cpy_r_r92);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 52, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    cpy_r_r95 = cpy_r_r93;
    if (!cpy_r_r95) goto CPyL185;
    cpy_r_r96 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_o;
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "o", 53, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    CPy_INCREF(cpy_r_r96);
CPyL78: ;
    cpy_r_r97 = CPyStatics[219]; /* 'items' */
    PyObject *cpy_r_r98[1] = {cpy_r_r96};
    cpy_r_r99 = (PyObject **)&cpy_r_r98;
    cpy_r_r100 = PyObject_VectorcallMethod(cpy_r_r97, cpy_r_r99, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 53, CPyStatic_objgraph___globals);
        goto CPyL186;
    }
    CPy_DECREF(cpy_r_r96);
    cpy_r_r101 = PyObject_GetIter(cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 53, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__3 != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__3);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__3 = cpy_r_r101;
    cpy_r_r102 = 1;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", -1, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    cpy_r_r103 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "__mypyc_temp__3", -1, CPyStatic_objgraph___globals);
        goto CPyL164;
    }
    CPy_INCREF(cpy_r_r103);
CPyL82: ;
    cpy_r_r104 = CPyIter_Next(cpy_r_r103);
    CPy_DECREF(cpy_r_r103);
    if (cpy_r_r104 == NULL) {
        goto CPyL187;
    } else
        goto CPyL85;
CPyL83: ;
    cpy_r_r105 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 53, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
    cpy_r_r106 = cpy_r_r105;
    CPy_DECREF(cpy_r_r106);
    goto CPyL141;
CPyL85: ;
    cpy_r_r107 = cpy_r_r104;
CPyL86: ;
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__ = 4;
    cpy_r_r108 = 1;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 53, CPyStatic_objgraph___globals);
        goto CPyL189;
    } else
        goto CPyL190;
CPyL87: ;
    return cpy_r_r107;
CPyL88: ;
    cpy_r_r109 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r110 = cpy_r_type != cpy_r_r109;
    if (!cpy_r_r110) goto CPyL91;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 53, CPyStatic_objgraph___globals);
        goto CPyL92;
    } else
        goto CPyL191;
CPyL90: ;
    CPy_Unreachable();
CPyL91: ;
    CPy_INCREF(cpy_r_arg);
    cpy_r_r111 = cpy_r_arg;
    goto CPyL109;
CPyL92: ;
    cpy_r_r112 = CPy_CatchError();
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__4.f0 != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__4.f0);
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__4.f1);
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__4.f2);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__4 = cpy_r_r112;
    cpy_r_r113 = 1;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", -1, CPyStatic_objgraph___globals);
        goto CPyL192;
    }
    cpy_r_r114 = (PyObject **)&cpy_r_r1;
    cpy_r_r115 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "__mypyc_temp__3", -1, CPyStatic_objgraph___globals);
        goto CPyL192;
    }
    CPy_INCREF(cpy_r_r115);
CPyL94: ;
    cpy_r_r116 = CPy_YieldFromErrorHandle(cpy_r_r115, cpy_r_r114);
    CPy_DecRef(cpy_r_r115);
    if (unlikely(cpy_r_r116 == 2)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 53, CPyStatic_objgraph___globals);
        goto CPyL192;
    }
    if (cpy_r_r116) goto CPyL101;
    if (cpy_r_r1 != NULL) goto CPyL99;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r117 = 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", -1, CPyStatic_objgraph___globals);
        goto CPyL106;
    } else
        goto CPyL193;
CPyL98: ;
    CPy_Unreachable();
CPyL99: ;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r107 = cpy_r_r1;
    cpy_r_r118 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__4;
    if (unlikely(cpy_r_r118.f0 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "__mypyc_temp__4", -1, CPyStatic_objgraph___globals);
        goto CPyL194;
    }
    CPy_INCREF(cpy_r_r118.f0);
    CPy_INCREF(cpy_r_r118.f1);
    CPy_INCREF(cpy_r_r118.f2);
CPyL100: ;
    CPy_RestoreExcInfo(cpy_r_r118);
    CPy_DecRef(cpy_r_r118.f0);
    CPy_DecRef(cpy_r_r118.f1);
    CPy_DecRef(cpy_r_r118.f2);
    goto CPyL86;
CPyL101: ;
    if (cpy_r_r1 != NULL) goto CPyL104;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r119 = 0;
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", -1, CPyStatic_objgraph___globals);
        goto CPyL106;
    } else
        goto CPyL195;
CPyL103: ;
    CPy_Unreachable();
CPyL104: ;
    cpy_r_r106 = cpy_r_r1;
    CPy_DecRef(cpy_r_r106);
    cpy_r_r120 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__4;
    if (unlikely(cpy_r_r120.f0 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "__mypyc_temp__4", -1, CPyStatic_objgraph___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r120.f0);
    CPy_INCREF(cpy_r_r120.f1);
    CPy_INCREF(cpy_r_r120.f2);
CPyL105: ;
    CPy_RestoreExcInfo(cpy_r_r120);
    CPy_DecRef(cpy_r_r120.f0);
    CPy_DecRef(cpy_r_r120.f1);
    CPy_DecRef(cpy_r_r120.f2);
    goto CPyL141;
CPyL106: ;
    cpy_r_r121 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__4;
    if (unlikely(cpy_r_r121.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__4' of 'get_edge_candidates_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r121.f0);
        CPy_INCREF(cpy_r_r121.f1);
        CPy_INCREF(cpy_r_r121.f2);
    }
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r121.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", -1, CPyStatic_objgraph___globals);
        goto CPyL162;
    }
CPyL107: ;
    CPy_RestoreExcInfo(cpy_r_r121);
    CPy_DecRef(cpy_r_r121.f0);
    CPy_DecRef(cpy_r_r121.f1);
    CPy_DecRef(cpy_r_r121.f2);
    cpy_r_r122 = CPy_KeepPropagating();
    if (!cpy_r_r122) goto CPyL162;
    CPy_Unreachable();
CPyL109: ;
    cpy_r_r123 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "__mypyc_temp__3", -1, CPyStatic_objgraph___globals);
        goto CPyL196;
    }
    CPy_INCREF(cpy_r_r123);
CPyL110: ;
    cpy_r_r124 = CPyIter_Send(cpy_r_r123, cpy_r_r111);
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_r111);
    if (cpy_r_r124 == NULL) goto CPyL197;
    cpy_r_r107 = cpy_r_r124;
    goto CPyL86;
CPyL112: ;
    cpy_r_r125 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 53, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
    cpy_r_r106 = cpy_r_r125;
    CPy_DECREF(cpy_r_r106);
    goto CPyL141;
CPyL114: ;
    cpy_r_r126 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_o;
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "o", 54, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
    CPy_INCREF(cpy_r_r126);
CPyL115: ;
    cpy_r_r127 = CPyStatic_objgraph___globals;
    cpy_r_r128 = CPyStatics[901]; /* 'Iterable' */
    cpy_r_r129 = CPyDict_GetItem(cpy_r_r127, cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 54, CPyStatic_objgraph___globals);
        goto CPyL198;
    }
    cpy_r_r130 = PyObject_IsInstance(cpy_r_r126, cpy_r_r129);
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_r129);
    cpy_r_r131 = cpy_r_r130 >= 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 54, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
    cpy_r_r132 = cpy_r_r130;
    if (!cpy_r_r132) goto CPyL141;
    cpy_r_r133 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_o;
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "o", 54, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
    CPy_INCREF(cpy_r_r133);
CPyL119: ;
    cpy_r_r134 = (PyObject *)&PyUnicode_Type;
    cpy_r_r135 = PyObject_IsInstance(cpy_r_r133, cpy_r_r134);
    CPy_DECREF(cpy_r_r133);
    cpy_r_r136 = cpy_r_r135 >= 0;
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 54, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
    cpy_r_r137 = cpy_r_r135;
    if (cpy_r_r137) goto CPyL141;
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__5 = 0;
    cpy_r_r138 = 1;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", -1, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_i != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_i);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_i = 0;
    cpy_r_r139 = 1;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 55, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
    cpy_r_r140 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_o;
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "o", 55, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
    CPy_INCREF(cpy_r_r140);
CPyL124: ;
    cpy_r_r141 = PyObject_GetIter(cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 55, CPyStatic_objgraph___globals);
        goto CPyL199;
    }
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__6 != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__6);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__6 = cpy_r_r140;
    cpy_r_r142 = 1;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", -1, CPyStatic_objgraph___globals);
        goto CPyL200;
    }
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__7 != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__7);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__7 = cpy_r_r141;
    cpy_r_r143 = 1;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", -1, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
CPyL127: ;
    cpy_r_r144 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__7;
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "__mypyc_temp__7", 55, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
    CPy_INCREF(cpy_r_r144);
CPyL128: ;
    cpy_r_r145 = PyIter_Next(cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    if (cpy_r_r145 == NULL) goto CPyL140;
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_e != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_e);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_e = cpy_r_r145;
    cpy_r_r146 = 1;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 55, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
    cpy_r_r147 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_i;
    if (unlikely(cpy_r_r147 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "i", 56, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
    CPyTagged_INCREF(cpy_r_r147);
CPyL131: ;
    cpy_r_r148 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_e;
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "e", 56, CPyStatic_objgraph___globals);
        goto CPyL201;
    }
    CPy_INCREF(cpy_r_r148);
CPyL132: ;
    cpy_r_r149.f0 = cpy_r_r147;
    cpy_r_r149.f1 = cpy_r_r148;
    CPyTagged_INCREF(cpy_r_r149.f0);
    CPy_INCREF(cpy_r_r149.f1);
    CPyTagged_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r148);
    cpy_r_r150 = PyTuple_New(2);
    if (unlikely(cpy_r_r150 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6568 = CPyTagged_StealAsObject(cpy_r_r149.f0);
    PyTuple_SET_ITEM(cpy_r_r150, 0, __tmp6568);
    PyObject *__tmp6569 = cpy_r_r149.f1;
    PyTuple_SET_ITEM(cpy_r_r150, 1, __tmp6569);
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__ = 6;
    cpy_r_r151 = 1;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 56, CPyStatic_objgraph___globals);
        goto CPyL202;
    }
    return cpy_r_r150;
CPyL134: ;
    cpy_r_r152 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r153 = cpy_r_type != cpy_r_r152;
    if (cpy_r_r153) {
        goto CPyL203;
    } else
        goto CPyL137;
CPyL135: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 56, CPyStatic_objgraph___globals);
        goto CPyL162;
    }
    CPy_Unreachable();
CPyL137: ;
    cpy_r_r154 = ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__5;
    if (unlikely(cpy_r_r154 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edge_candidates", "get_edge_candidates_env", "__mypyc_temp__5", 55, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
CPyL138: ;
    cpy_r_r155 = cpy_r_r154 + 2;
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_temp__5 = cpy_r_r155;
    cpy_r_r156 = 1;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 55, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_i != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_i);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->_i = cpy_r_r155;
    cpy_r_r157 = 1;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 55, CPyStatic_objgraph___globals);
        goto CPyL188;
    } else
        goto CPyL127;
CPyL140: ;
    cpy_r_r158 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r158)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 55, CPyStatic_objgraph___globals);
        goto CPyL188;
    }
CPyL141: ;
    cpy_r_r159 = Py_None;
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r2)->___mypyc_next_label__ = -2;
    cpy_r_r160 = 1;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 39, CPyStatic_objgraph___globals);
        goto CPyL162;
    }
    CPyGen_SetStopIterationValue(cpy_r_r159);
    if (!0) goto CPyL162;
    CPy_Unreachable();
CPyL144: ;
    cpy_r_r161 = cpy_r_r3 & 1;
    cpy_r_r162 = cpy_r_r161 == 0;
    if (!cpy_r_r162) goto CPyL146;
    cpy_r_r163 = cpy_r_r3 == 0;
    cpy_r_r164 = cpy_r_r163;
    goto CPyL147;
CPyL146: ;
    cpy_r_r165 = CPyTagged_IsEq_(cpy_r_r3, 0);
    cpy_r_r164 = cpy_r_r165;
CPyL147: ;
    if (cpy_r_r164) goto CPyL204;
    cpy_r_r166 = cpy_r_r3 & 1;
    cpy_r_r167 = cpy_r_r166 == 0;
    if (!cpy_r_r167) goto CPyL150;
    cpy_r_r168 = cpy_r_r3 == 2;
    cpy_r_r169 = cpy_r_r168;
    goto CPyL151;
CPyL150: ;
    cpy_r_r170 = CPyTagged_IsEq_(cpy_r_r3, 2);
    cpy_r_r169 = cpy_r_r170;
CPyL151: ;
    if (cpy_r_r169) goto CPyL205;
    cpy_r_r171 = cpy_r_r3 & 1;
    cpy_r_r172 = cpy_r_r171 == 0;
    if (!cpy_r_r172) goto CPyL154;
    cpy_r_r173 = cpy_r_r3 == 4;
    cpy_r_r174 = cpy_r_r173;
    goto CPyL155;
CPyL154: ;
    cpy_r_r175 = CPyTagged_IsEq_(cpy_r_r3, 4);
    cpy_r_r174 = cpy_r_r175;
CPyL155: ;
    if (cpy_r_r174) {
        goto CPyL206;
    } else
        goto CPyL207;
CPyL156: ;
    cpy_r_r176 = cpy_r_r3 & 1;
    cpy_r_r177 = cpy_r_r176 == 0;
    if (!cpy_r_r177) goto CPyL158;
    cpy_r_r178 = cpy_r_r3 == 6;
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r179 = cpy_r_r178;
    goto CPyL159;
CPyL158: ;
    cpy_r_r180 = CPyTagged_IsEq_(cpy_r_r3, 6);
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r179 = cpy_r_r180;
CPyL159: ;
    if (cpy_r_r179) {
        goto CPyL134;
    } else
        goto CPyL208;
CPyL160: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r181 = 0;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 39, CPyStatic_objgraph___globals);
        goto CPyL162;
    }
    CPy_Unreachable();
CPyL162: ;
    cpy_r_r182 = NULL;
    return cpy_r_r182;
CPyL163: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL162;
CPyL164: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL162;
CPyL165: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL3;
CPyL166: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL9;
CPyL167: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r17);
    goto CPyL14;
CPyL168: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r24);
    goto CPyL162;
CPyL169: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r40);
    goto CPyL162;
CPyL170: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL33;
CPyL171: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL34;
CPyL172: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL61;
CPyL173: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL61;
CPyL174: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL61;
CPyL175: ;
    CPy_DecRef(cpy_r_r63);
    goto CPyL50;
CPyL176: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL51;
CPyL177: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL61;
CPyL178: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL61;
CPyL179: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL57;
CPyL180: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL60;
CPyL181: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL68;
CPyL182: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL64;
CPyL183: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL65;
CPyL184: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r89);
    goto CPyL162;
CPyL185: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL114;
CPyL186: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r96);
    goto CPyL162;
CPyL187: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL83;
CPyL188: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL162;
CPyL189: ;
    CPy_DecRef(cpy_r_r107);
    goto CPyL92;
CPyL190: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL87;
CPyL191: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL90;
CPyL192: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL106;
CPyL193: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL98;
CPyL194: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r107);
    goto CPyL106;
CPyL195: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL103;
CPyL196: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r111);
    goto CPyL162;
CPyL197: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL112;
CPyL198: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r126);
    goto CPyL162;
CPyL199: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r140);
    goto CPyL162;
CPyL200: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r141);
    goto CPyL162;
CPyL201: ;
    CPy_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r147);
    goto CPyL162;
CPyL202: ;
    CPy_DecRef(cpy_r_r150);
    goto CPyL162;
CPyL203: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL135;
CPyL204: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL2;
CPyL205: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL58;
CPyL206: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL88;
CPyL207: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL156;
CPyL208: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL160;
}

PyObject *CPyPy_objgraph___get_edge_candidates_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_objgraph___get_edge_candidates_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 39, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_edge_candidates_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_objgraph___get_edge_candidates_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_objgraph___get_edge_candidates_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_objgraph___get_edge_candidates_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.objgraph.get_edge_candidates_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_objgraph___get_edge_candidates_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "__next__", -1, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_edge_candidates_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_objgraph___get_edge_candidates_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_objgraph___get_edge_candidates_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_objgraph___get_edge_candidates_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.objgraph.get_edge_candidates_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_objgraph___get_edge_candidates_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "send", -1, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_edge_candidates_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_objgraph___get_edge_candidates_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_objgraph___get_edge_candidates_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.objgraph.get_edge_candidates_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_objgraph___get_edge_candidates_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "__iter__", -1, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_edge_candidates_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_objgraph___get_edge_candidates_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_objgraph___get_edge_candidates_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_objgraph___get_edge_candidates_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.objgraph.get_edge_candidates_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_objgraph___get_edge_candidates_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "throw", -1, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_edge_candidates_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[74]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_objgraph___get_edge_candidates_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[75]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    CPy_INCREF(cpy_r_r10.f0);
    CPy_INCREF(cpy_r_r10.f1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6570 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp6570);
    PyObject *__tmp6571 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp6571);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_objgraph___get_edge_candidates_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_objgraph___get_edge_candidates_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.objgraph.get_edge_candidates_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_objgraph___get_edge_candidates_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "close", -1, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_edge_candidates(PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_objgraph___get_edge_candidates_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 39, CPyStatic_objgraph___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_o);
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r0)->_o != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r0)->_o);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r0)->_o = cpy_r_o;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 39, CPyStatic_objgraph___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_objgraph___get_edge_candidates_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 39, CPyStatic_objgraph___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___server___objgraph___get_edge_candidates_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edge_candidates_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___server___objgraph___get_edge_candidates_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 39, CPyStatic_objgraph___globals);
        goto CPyL8;
    }
    if (((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___server___objgraph___get_edge_candidates_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 39, CPyStatic_objgraph___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_objgraph___get_edge_candidates(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:get_edge_candidates", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_o = obj_o;
    PyObject *retval = CPyDef_objgraph___get_edge_candidates(arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "get_edge_candidates", 39, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_edges_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    tuple_T2OO cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    tuple_T6OOOOOO cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    tuple_T2OO cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    tuple_T2T2OOO cpy_r_r32;
    tuple_T2T2OOO cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    tuple_T2OO cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    tuple_T2OO cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    int64_t cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    int64_t cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    int64_t cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    int64_t cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    cpy_r_r0 = ((mypy___server___objgraph___get_edges_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_gen", "__mypyc_env__", 59, CPyStatic_objgraph___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "__mypyc_next_label__", 59, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL69;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL89;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 59, CPyStatic_objgraph___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "o", 60, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = CPyDef_objgraph___get_edge_candidates(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 60, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    cpy_r_r6 = PyObject_GetIter(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 60, CPyStatic_objgraph___globals);
        goto CPyL90;
    }
    if (((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_temp__8 != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_temp__8);
    }
    ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_temp__8 = cpy_r_r5;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", -1, CPyStatic_objgraph___globals);
        goto CPyL91;
    }
    if (((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_temp__9 != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_temp__9);
    }
    ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_temp__9 = cpy_r_r6;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", -1, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
CPyL10: ;
    cpy_r_r9 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_temp__9;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "__mypyc_temp__9", 60, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r9);
CPyL11: ;
    cpy_r_r10 = PyIter_Next(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (cpy_r_r10 == NULL) goto CPyL65;
    PyObject *__tmp6572;
    if (unlikely(!(PyTuple_Check(cpy_r_r10) && PyTuple_GET_SIZE(cpy_r_r10) == 2))) {
        __tmp6572 = NULL;
        goto __LL6573;
    }
    __tmp6572 = PyTuple_GET_ITEM(cpy_r_r10, 0);
    if (__tmp6572 == NULL) goto __LL6573;
    __tmp6572 = PyTuple_GET_ITEM(cpy_r_r10, 1);
    if (__tmp6572 == NULL) goto __LL6573;
    __tmp6572 = cpy_r_r10;
__LL6573: ;
    if (unlikely(__tmp6572 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r10); cpy_r_r11 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6574 = PyTuple_GET_ITEM(cpy_r_r10, 0);
        CPy_INCREF(__tmp6574);
        PyObject *__tmp6575;
        __tmp6575 = __tmp6574;
        cpy_r_r11.f0 = __tmp6575;
        PyObject *__tmp6576 = PyTuple_GET_ITEM(cpy_r_r10, 1);
        CPy_INCREF(__tmp6576);
        PyObject *__tmp6577;
        __tmp6577 = __tmp6576;
        cpy_r_r11.f1 = __tmp6577;
    }
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 60, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    cpy_r_r12 = cpy_r_r11.f0;
    CPy_INCREF(cpy_r_r12);
    if (((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_s != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_s);
    }
    ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_s = cpy_r_r12;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 60, CPyStatic_objgraph___globals);
        goto CPyL92;
    }
    cpy_r_r14 = cpy_r_r11.f1;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r11.f0);
    CPy_DECREF(cpy_r_r11.f1);
    if (((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_e != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_e);
    }
    ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_e = cpy_r_r14;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 60, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    cpy_r_r16 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "e", 61, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r16);
CPyL16: ;
    cpy_r_r17 = CPyStatic_objgraph___FUNCTION_TYPES;
    if (unlikely(cpy_r_r17.f0 == NULL)) {
        goto CPyL93;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"FUNCTION_TYPES\" was not set");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 61, CPyStatic_objgraph___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL19: ;
    CPy_INCREF(cpy_r_r17.f0);
    CPy_INCREF(cpy_r_r17.f1);
    CPy_INCREF(cpy_r_r17.f2);
    CPy_INCREF(cpy_r_r17.f3);
    CPy_INCREF(cpy_r_r17.f4);
    CPy_INCREF(cpy_r_r17.f5);
    cpy_r_r19 = PyTuple_New(6);
    if (unlikely(cpy_r_r19 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6578 = cpy_r_r17.f0;
    PyTuple_SET_ITEM(cpy_r_r19, 0, __tmp6578);
    PyObject *__tmp6579 = cpy_r_r17.f1;
    PyTuple_SET_ITEM(cpy_r_r19, 1, __tmp6579);
    PyObject *__tmp6580 = cpy_r_r17.f2;
    PyTuple_SET_ITEM(cpy_r_r19, 2, __tmp6580);
    PyObject *__tmp6581 = cpy_r_r17.f3;
    PyTuple_SET_ITEM(cpy_r_r19, 3, __tmp6581);
    PyObject *__tmp6582 = cpy_r_r17.f4;
    PyTuple_SET_ITEM(cpy_r_r19, 4, __tmp6582);
    PyObject *__tmp6583 = cpy_r_r17.f5;
    PyTuple_SET_ITEM(cpy_r_r19, 5, __tmp6583);
    cpy_r_r20 = PyObject_IsInstance(cpy_r_r16, cpy_r_r19);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 61, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    cpy_r_r22 = cpy_r_r20;
    if (!cpy_r_r22) goto CPyL52;
    cpy_r_r23 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "e", 65, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r23);
CPyL22: ;
    cpy_r_r24 = CPyStatics[5340]; /* '__closure__' */
    cpy_r_r25 = PyObject_HasAttr(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (!cpy_r_r25) goto CPyL31;
    cpy_r_r26 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_s;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "s", 66, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r26);
CPyL24: ;
    cpy_r_r27 = CPyStatics[5340]; /* '__closure__' */
    cpy_r_r28.f0 = cpy_r_r26;
    cpy_r_r28.f1 = cpy_r_r27;
    CPy_INCREF(cpy_r_r28.f0);
    CPy_INCREF(cpy_r_r28.f1);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r29 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "e", 66, CPyStatic_objgraph___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r29);
CPyL25: ;
    cpy_r_r30 = CPyStatics[5340]; /* '__closure__' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 66, CPyStatic_objgraph___globals);
        goto CPyL94;
    }
    cpy_r_r32.f0 = cpy_r_r28;
    cpy_r_r32.f1 = cpy_r_r31;
    CPy_INCREF(cpy_r_r32.f0.f0);
    CPy_INCREF(cpy_r_r32.f0.f1);
    CPy_INCREF(cpy_r_r32.f1);
    CPy_DECREF(cpy_r_r32.f0.f0);
    CPy_DECREF(cpy_r_r32.f0.f1);
    CPy_DECREF(cpy_r_r32.f1);
    cpy_r_r33.f0 = cpy_r_r28;
    cpy_r_r33.f1 = cpy_r_r31;
    CPy_INCREF(cpy_r_r33.f0.f0);
    CPy_INCREF(cpy_r_r33.f0.f1);
    CPy_INCREF(cpy_r_r33.f1);
    CPy_DECREF(cpy_r_r28.f0);
    CPy_DECREF(cpy_r_r28.f1);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r34 = PyTuple_New(2);
    if (unlikely(cpy_r_r34 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6584 = PyTuple_New(2);
    if (unlikely(__tmp6584 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6585 = cpy_r_r33.f0.f0;
    PyTuple_SET_ITEM(__tmp6584, 0, __tmp6585);
    PyObject *__tmp6586 = cpy_r_r33.f0.f1;
    PyTuple_SET_ITEM(__tmp6584, 1, __tmp6586);
    PyTuple_SET_ITEM(cpy_r_r34, 0, __tmp6584);
    PyObject *__tmp6587 = cpy_r_r33.f1;
    PyTuple_SET_ITEM(cpy_r_r34, 1, __tmp6587);
    if (((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r35 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 66, CPyStatic_objgraph___globals);
        goto CPyL95;
    }
    return cpy_r_r34;
CPyL28: ;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_type != cpy_r_r36;
    if (cpy_r_r37) {
        goto CPyL96;
    } else
        goto CPyL31;
CPyL29: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 66, CPyStatic_objgraph___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r38 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "e", 67, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r38);
CPyL32: ;
    cpy_r_r39 = CPyStatics[5341]; /* '__self__' */
    cpy_r_r40 = PyObject_HasAttr(cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (!cpy_r_r40) goto CPyL10;
    cpy_r_r41 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "e", 68, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r41);
CPyL34: ;
    cpy_r_r42 = CPyStatics[5341]; /* '__self__' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 68, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    if (((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_se != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_se);
    }
    ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_se = cpy_r_r43;
    cpy_r_r44 = 1;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 68, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    cpy_r_r45 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_se;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "se", 69, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r45);
CPyL37: ;
    cpy_r_r46 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "o", 69, CPyStatic_objgraph___globals);
        goto CPyL97;
    }
    CPy_INCREF(cpy_r_r46);
CPyL38: ;
    cpy_r_r47 = cpy_r_r45 == cpy_r_r46;
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 ^ 1;
    if (!cpy_r_r48) goto CPyL10;
    cpy_r_r49 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_se;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "se", 69, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r49);
CPyL40: ;
    cpy_r_r50 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "o", 69, CPyStatic_objgraph___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r50);
CPyL41: ;
    cpy_r_r51 = PyObject_Type(cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r49 == cpy_r_r51;
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 ^ 1;
    if (!cpy_r_r53) goto CPyL10;
    cpy_r_r54 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_s;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "s", 69, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r54);
CPyL43: ;
    cpy_r_r55 = CPyStatics[5341]; /* '__self__' */
    cpy_r_r56 = PyObject_HasAttr(cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (!cpy_r_r56) goto CPyL10;
    cpy_r_r57 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_s;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "s", 70, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r57);
CPyL45: ;
    cpy_r_r58 = CPyStatics[5341]; /* '__self__' */
    cpy_r_r59 = CPyObject_GetAttr(cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 70, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    cpy_r_r60 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_se;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "se", 70, CPyStatic_objgraph___globals);
        goto CPyL99;
    }
    CPy_INCREF(cpy_r_r60);
CPyL47: ;
    cpy_r_r61.f0 = cpy_r_r59;
    cpy_r_r61.f1 = cpy_r_r60;
    CPy_INCREF(cpy_r_r61.f0);
    CPy_INCREF(cpy_r_r61.f1);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = PyTuple_New(2);
    if (unlikely(cpy_r_r62 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6588 = cpy_r_r61.f0;
    PyTuple_SET_ITEM(cpy_r_r62, 0, __tmp6588);
    PyObject *__tmp6589 = cpy_r_r61.f1;
    PyTuple_SET_ITEM(cpy_r_r62, 1, __tmp6589);
    if (((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__ = 4;
    cpy_r_r63 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 70, CPyStatic_objgraph___globals);
        goto CPyL100;
    }
    return cpy_r_r62;
CPyL49: ;
    cpy_r_r64 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r65 = cpy_r_type != cpy_r_r64;
    if (cpy_r_r65) {
        goto CPyL101;
    } else
        goto CPyL10;
CPyL50: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 70, CPyStatic_objgraph___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r66 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "e", 72, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r66);
CPyL53: ;
    cpy_r_r67 = PyObject_Type(cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = CPyStatic_objgraph___TYPE_BLACKLIST;
    if (unlikely(cpy_r_r68 == NULL)) {
        goto CPyL102;
    } else
        goto CPyL56;
CPyL54: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPE_BLACKLIST\" was not set");
    cpy_r_r69 = 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 72, CPyStatic_objgraph___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r70 = PySet_Contains(cpy_r_r68, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 72, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    cpy_r_r72 = cpy_r_r70;
    cpy_r_r73 = cpy_r_r72 ^ 1;
    if (!cpy_r_r73) goto CPyL10;
    cpy_r_r74 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_s;
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "s", 73, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r74);
CPyL59: ;
    cpy_r_r75 = ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_e;
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AttributeError("mypy/server/objgraph.py", "get_edges", "get_edges_env", "e", 73, CPyStatic_objgraph___globals);
        goto CPyL103;
    }
    CPy_INCREF(cpy_r_r75);
CPyL60: ;
    cpy_r_r76.f0 = cpy_r_r74;
    cpy_r_r76.f1 = cpy_r_r75;
    CPy_INCREF(cpy_r_r76.f0);
    CPy_INCREF(cpy_r_r76.f1);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = PyTuple_New(2);
    if (unlikely(cpy_r_r77 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6590 = cpy_r_r76.f0;
    PyTuple_SET_ITEM(cpy_r_r77, 0, __tmp6590);
    PyObject *__tmp6591 = cpy_r_r76.f1;
    PyTuple_SET_ITEM(cpy_r_r77, 1, __tmp6591);
    if (((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__ = 6;
    cpy_r_r78 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 73, CPyStatic_objgraph___globals);
        goto CPyL104;
    }
    return cpy_r_r77;
CPyL62: ;
    cpy_r_r79 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r80 = cpy_r_type != cpy_r_r79;
    if (cpy_r_r80) {
        goto CPyL105;
    } else
        goto CPyL10;
CPyL63: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 73, CPyStatic_objgraph___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r81 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 60, CPyStatic_objgraph___globals);
        goto CPyL88;
    }
    cpy_r_r82 = Py_None;
    if (((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r83 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 59, CPyStatic_objgraph___globals);
        goto CPyL87;
    }
    CPyGen_SetStopIterationValue(cpy_r_r82);
    if (!0) goto CPyL87;
    CPy_Unreachable();
CPyL69: ;
    cpy_r_r84 = cpy_r_r1 & 1;
    cpy_r_r85 = cpy_r_r84 == 0;
    if (!cpy_r_r85) goto CPyL71;
    cpy_r_r86 = cpy_r_r1 == 0;
    cpy_r_r87 = cpy_r_r86;
    goto CPyL72;
CPyL71: ;
    cpy_r_r88 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r87 = cpy_r_r88;
CPyL72: ;
    if (cpy_r_r87) goto CPyL106;
    cpy_r_r89 = cpy_r_r1 & 1;
    cpy_r_r90 = cpy_r_r89 == 0;
    if (!cpy_r_r90) goto CPyL75;
    cpy_r_r91 = cpy_r_r1 == 2;
    cpy_r_r92 = cpy_r_r91;
    goto CPyL76;
CPyL75: ;
    cpy_r_r93 = CPyTagged_IsEq_(cpy_r_r1, 2);
    cpy_r_r92 = cpy_r_r93;
CPyL76: ;
    if (cpy_r_r92) goto CPyL107;
    cpy_r_r94 = cpy_r_r1 & 1;
    cpy_r_r95 = cpy_r_r94 == 0;
    if (!cpy_r_r95) goto CPyL79;
    cpy_r_r96 = cpy_r_r1 == 4;
    cpy_r_r97 = cpy_r_r96;
    goto CPyL80;
CPyL79: ;
    cpy_r_r98 = CPyTagged_IsEq_(cpy_r_r1, 4);
    cpy_r_r97 = cpy_r_r98;
CPyL80: ;
    if (cpy_r_r97) goto CPyL108;
    cpy_r_r99 = cpy_r_r1 & 1;
    cpy_r_r100 = cpy_r_r99 == 0;
    if (!cpy_r_r100) goto CPyL83;
    cpy_r_r101 = cpy_r_r1 == 6;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r102 = cpy_r_r101;
    goto CPyL84;
CPyL83: ;
    cpy_r_r103 = CPyTagged_IsEq_(cpy_r_r1, 6);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r102 = cpy_r_r103;
CPyL84: ;
    if (cpy_r_r102) {
        goto CPyL62;
    } else
        goto CPyL109;
CPyL85: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r104 = 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 59, CPyStatic_objgraph___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL87: ;
    cpy_r_r105 = NULL;
    return cpy_r_r105;
CPyL88: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL87;
CPyL89: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL90: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL87;
CPyL91: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    goto CPyL87;
CPyL92: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11.f0);
    CPy_DecRef(cpy_r_r11.f1);
    goto CPyL87;
CPyL93: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    goto CPyL17;
CPyL94: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r28.f0);
    CPy_DecRef(cpy_r_r28.f1);
    goto CPyL87;
CPyL95: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL87;
CPyL96: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL29;
CPyL97: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r45);
    goto CPyL87;
CPyL98: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r49);
    goto CPyL87;
CPyL99: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r59);
    goto CPyL87;
CPyL100: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL87;
CPyL101: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL50;
CPyL102: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r67);
    goto CPyL54;
CPyL103: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r74);
    goto CPyL87;
CPyL104: ;
    CPy_DecRef(cpy_r_r77);
    goto CPyL87;
CPyL105: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL63;
CPyL106: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL107: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL28;
CPyL108: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL49;
CPyL109: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL85;
}

PyObject *CPyPy_objgraph___get_edges_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_objgraph___get_edges_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 59, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_edges_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_objgraph___get_edges_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_objgraph___get_edges_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_objgraph___get_edges_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.objgraph.get_edges_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_objgraph___get_edges_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "__next__", -1, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_edges_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_objgraph___get_edges_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_objgraph___get_edges_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_objgraph___get_edges_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.objgraph.get_edges_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_objgraph___get_edges_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "send", -1, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_edges_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_objgraph___get_edges_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_objgraph___get_edges_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.objgraph.get_edges_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_objgraph___get_edges_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "__iter__", -1, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_edges_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_objgraph___get_edges_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_objgraph___get_edges_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_objgraph___get_edges_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.objgraph.get_edges_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_objgraph___get_edges_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "throw", -1, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_edges_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[74]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_objgraph___get_edges_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[75]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    CPy_INCREF(cpy_r_r10.f0);
    CPy_INCREF(cpy_r_r10.f1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6592 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp6592);
    PyObject *__tmp6593 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp6593);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_objgraph___get_edges_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_objgraph___get_edges_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.server.objgraph.get_edges_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_objgraph___get_edges_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "close", -1, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_edges(PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_objgraph___get_edges_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 59, CPyStatic_objgraph___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_o);
    if (((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_o != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_o);
    }
    ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->_o = cpy_r_o;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 59, CPyStatic_objgraph___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_objgraph___get_edges_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 59, CPyStatic_objgraph___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___server___objgraph___get_edges_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___server___objgraph___get_edges_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___server___objgraph___get_edges_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 59, CPyStatic_objgraph___globals);
        goto CPyL8;
    }
    if (((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___server___objgraph___get_edges_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 59, CPyStatic_objgraph___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_objgraph___get_edges(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:get_edges", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_o = obj_o;
    PyObject *retval = CPyDef_objgraph___get_edges(arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "get_edges", 59, CPyStatic_objgraph___globals);
    return NULL;
}

tuple_T2OO CPyDef_objgraph___get_reachable_graph(PyObject *cpy_r_root) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_parents;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_seen;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_worklist;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_o;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T2OO cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_e;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    tuple_T2IO cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    tuple_T2OO cpy_r_r37;
    tuple_T2OO cpy_r_r38;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_reachable_graph", 77, CPyStatic_objgraph___globals);
        goto CPyL17;
    }
    cpy_r_parents = cpy_r_r0;
    cpy_r_r1 = CPyTagged_Id(cpy_r_root);
    cpy_r_r2 = CPyTagged_StealAsObject(cpy_r_r1);
    cpy_r_r3 = CPyDict_Build(1, cpy_r_r2, cpy_r_root);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_reachable_graph", 78, CPyStatic_objgraph___globals);
        goto CPyL18;
    }
    cpy_r_seen = cpy_r_r3;
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_reachable_graph", 79, CPyStatic_objgraph___globals);
        goto CPyL19;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    CPy_INCREF(cpy_r_root);
    *(PyObject * *)cpy_r_r6 = cpy_r_root;
    cpy_r_worklist = cpy_r_r4;
CPyL4: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_worklist)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = cpy_r_r9 != 0;
    if (!cpy_r_r10) goto CPyL20;
    cpy_r_r11 = CPyList_PopLast(cpy_r_worklist);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_reachable_graph", 81, CPyStatic_objgraph___globals);
        goto CPyL21;
    }
    cpy_r_o = cpy_r_r11;
    cpy_r_r12 = CPyDef_objgraph___get_edges(cpy_r_o);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_reachable_graph", 82, CPyStatic_objgraph___globals);
        goto CPyL22;
    }
    cpy_r_r13 = PyObject_GetIter(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_reachable_graph", 82, CPyStatic_objgraph___globals);
        goto CPyL22;
    }
CPyL8: ;
    cpy_r_r14 = PyIter_Next(cpy_r_r13);
    if (cpy_r_r14 == NULL) goto CPyL23;
    PyObject *__tmp6594;
    if (unlikely(!(PyTuple_Check(cpy_r_r14) && PyTuple_GET_SIZE(cpy_r_r14) == 2))) {
        __tmp6594 = NULL;
        goto __LL6595;
    }
    __tmp6594 = PyTuple_GET_ITEM(cpy_r_r14, 0);
    if (__tmp6594 == NULL) goto __LL6595;
    __tmp6594 = PyTuple_GET_ITEM(cpy_r_r14, 1);
    if (__tmp6594 == NULL) goto __LL6595;
    __tmp6594 = cpy_r_r14;
__LL6595: ;
    if (unlikely(__tmp6594 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r14); cpy_r_r15 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6596 = PyTuple_GET_ITEM(cpy_r_r14, 0);
        CPy_INCREF(__tmp6596);
        PyObject *__tmp6597;
        __tmp6597 = __tmp6596;
        cpy_r_r15.f0 = __tmp6597;
        PyObject *__tmp6598 = PyTuple_GET_ITEM(cpy_r_r14, 1);
        CPy_INCREF(__tmp6598);
        PyObject *__tmp6599;
        __tmp6599 = __tmp6598;
        cpy_r_r15.f1 = __tmp6599;
    }
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_reachable_graph", 82, CPyStatic_objgraph___globals);
        goto CPyL24;
    }
    cpy_r_r16 = cpy_r_r15.f0;
    CPy_INCREF(cpy_r_r16);
    cpy_r_s = cpy_r_r16;
    cpy_r_r17 = cpy_r_r15.f1;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r15.f0);
    CPy_DECREF(cpy_r_r15.f1);
    cpy_r_e = cpy_r_r17;
    cpy_r_r18 = CPyTagged_Id(cpy_r_e);
    cpy_r_r19 = CPyTagged_StealAsObject(cpy_r_r18);
    cpy_r_r20 = PyDict_Contains(cpy_r_seen, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_reachable_graph", 83, CPyStatic_objgraph___globals);
        goto CPyL25;
    }
    cpy_r_r22 = cpy_r_r20;
    if (cpy_r_r22) goto CPyL26;
    cpy_r_r23 = CPyTagged_Id(cpy_r_o);
    cpy_r_r24.f0 = cpy_r_r23;
    cpy_r_r24.f1 = cpy_r_s;
    CPyTagged_INCREF(cpy_r_r24.f0);
    CPy_INCREF(cpy_r_r24.f1);
    CPyTagged_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_s);
    cpy_r_r25 = CPyTagged_Id(cpy_r_e);
    cpy_r_r26 = CPyTagged_StealAsObject(cpy_r_r25);
    cpy_r_r27 = PyTuple_New(2);
    if (unlikely(cpy_r_r27 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6600 = CPyTagged_StealAsObject(cpy_r_r24.f0);
    PyTuple_SET_ITEM(cpy_r_r27, 0, __tmp6600);
    PyObject *__tmp6601 = cpy_r_r24.f1;
    PyTuple_SET_ITEM(cpy_r_r27, 1, __tmp6601);
    cpy_r_r28 = CPyDict_SetItem(cpy_r_parents, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_reachable_graph", 85, CPyStatic_objgraph___globals);
        goto CPyL27;
    }
    cpy_r_r30 = CPyTagged_Id(cpy_r_e);
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_r30);
    cpy_r_r32 = CPyDict_SetItem(cpy_r_seen, cpy_r_r31, cpy_r_e);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_reachable_graph", 86, CPyStatic_objgraph___globals);
        goto CPyL27;
    }
    cpy_r_r34 = PyList_Append(cpy_r_worklist, cpy_r_e);
    CPy_DECREF(cpy_r_e);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_reachable_graph", 87, CPyStatic_objgraph___globals);
        goto CPyL24;
    } else
        goto CPyL8;
CPyL15: ;
    cpy_r_r36 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_reachable_graph", 82, CPyStatic_objgraph___globals);
        goto CPyL21;
    } else
        goto CPyL4;
CPyL16: ;
    cpy_r_r37.f0 = cpy_r_seen;
    cpy_r_r37.f1 = cpy_r_parents;
    CPy_INCREF(cpy_r_r37.f0);
    CPy_INCREF(cpy_r_r37.f1);
    CPy_DECREF(cpy_r_seen);
    CPy_DECREF(cpy_r_parents);
    return cpy_r_r37;
CPyL17: ;
    tuple_T2OO __tmp6602 = { NULL, NULL };
    cpy_r_r38 = __tmp6602;
    return cpy_r_r38;
CPyL18: ;
    CPy_DecRef(cpy_r_parents);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_seen);
    goto CPyL17;
CPyL20: ;
    CPy_DECREF(cpy_r_worklist);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_worklist);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_o);
    goto CPyL17;
CPyL23: ;
    CPy_DECREF(cpy_r_o);
    CPy_DECREF(cpy_r_r13);
    goto CPyL15;
CPyL24: ;
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_o);
    CPy_DecRef(cpy_r_r13);
    goto CPyL17;
CPyL25: ;
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_o);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_e);
    goto CPyL17;
CPyL26: ;
    CPy_DECREF(cpy_r_s);
    CPy_DECREF(cpy_r_e);
    goto CPyL8;
CPyL27: ;
    CPy_DecRef(cpy_r_parents);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_o);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_e);
    goto CPyL17;
}

PyObject *CPyPy_objgraph___get_reachable_graph(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"root", 0};
    static CPyArg_Parser parser = {"O:get_reachable_graph", kwlist, 0};
    PyObject *obj_root;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_root)) {
        return NULL;
    }
    PyObject *arg_root = obj_root;
    tuple_T2OO retval = CPyDef_objgraph___get_reachable_graph(arg_root);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6603 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp6603);
    PyObject *__tmp6604 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp6604);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "get_reachable_graph", 76, CPyStatic_objgraph___globals);
    return NULL;
}

PyObject *CPyDef_objgraph___get_path(PyObject *cpy_r_o, PyObject *cpy_r_seen, PyObject *cpy_r_parents) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_path;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T2IO cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_pid;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    tuple_T2OO cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_path", 95, CPyStatic_objgraph___globals);
        goto CPyL10;
    }
    cpy_r_path = cpy_r_r0;
    goto CPyL11;
CPyL2: ;
    cpy_r_r1 = CPyTagged_Id(cpy_r_o);
    cpy_r_r2 = CPyTagged_StealAsObject(cpy_r_r1);
    cpy_r_r3 = PyDict_Contains(cpy_r_parents, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_path", 96, CPyStatic_objgraph___globals);
        goto CPyL12;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL13;
    cpy_r_r6 = CPyTagged_Id(cpy_r_o);
    CPy_DECREF(cpy_r_o);
    cpy_r_r7 = CPyTagged_StealAsObject(cpy_r_r6);
    cpy_r_r8 = CPyDict_GetItem(cpy_r_parents, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_path", 97, CPyStatic_objgraph___globals);
        goto CPyL14;
    }
    PyObject *__tmp6605;
    if (unlikely(!(PyTuple_Check(cpy_r_r8) && PyTuple_GET_SIZE(cpy_r_r8) == 2))) {
        __tmp6605 = NULL;
        goto __LL6606;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r8, 0))))
        __tmp6605 = PyTuple_GET_ITEM(cpy_r_r8, 0);
    else {
        __tmp6605 = NULL;
    }
    if (__tmp6605 == NULL) goto __LL6606;
    __tmp6605 = PyTuple_GET_ITEM(cpy_r_r8, 1);
    if (__tmp6605 == NULL) goto __LL6606;
    __tmp6605 = cpy_r_r8;
__LL6606: ;
    if (unlikely(__tmp6605 == NULL)) {
        CPy_TypeError("tuple[int, object]", cpy_r_r8); cpy_r_r9 = (tuple_T2IO) { CPY_INT_TAG, NULL };
    } else {
        PyObject *__tmp6607 = PyTuple_GET_ITEM(cpy_r_r8, 0);
        CPyTagged __tmp6608;
        if (likely(PyLong_Check(__tmp6607)))
            __tmp6608 = CPyTagged_FromObject(__tmp6607);
        else {
            CPy_TypeError("int", __tmp6607); __tmp6608 = CPY_INT_TAG;
        }
        cpy_r_r9.f0 = __tmp6608;
        PyObject *__tmp6609 = PyTuple_GET_ITEM(cpy_r_r8, 1);
        CPy_INCREF(__tmp6609);
        PyObject *__tmp6610;
        __tmp6610 = __tmp6609;
        cpy_r_r9.f1 = __tmp6610;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_path", 97, CPyStatic_objgraph___globals);
        goto CPyL14;
    }
    cpy_r_r10 = cpy_r_r9.f0;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_pid = cpy_r_r10;
    cpy_r_r11 = cpy_r_r9.f1;
    CPy_INCREF(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r9.f0);
    CPy_DECREF(cpy_r_r9.f1);
    cpy_r_attr = cpy_r_r11;
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_pid);
    cpy_r_r13 = CPyDict_GetItem(cpy_r_seen, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_path", 98, CPyStatic_objgraph___globals);
        goto CPyL15;
    }
    cpy_r_o = cpy_r_r13;
    cpy_r_r14.f0 = cpy_r_attr;
    cpy_r_r14.f1 = cpy_r_o;
    CPy_INCREF(cpy_r_r14.f0);
    CPy_INCREF(cpy_r_r14.f1);
    CPy_DECREF(cpy_r_attr);
    cpy_r_r15 = PyTuple_New(2);
    if (unlikely(cpy_r_r15 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6611 = cpy_r_r14.f0;
    PyTuple_SET_ITEM(cpy_r_r15, 0, __tmp6611);
    PyObject *__tmp6612 = cpy_r_r14.f1;
    PyTuple_SET_ITEM(cpy_r_r15, 1, __tmp6612);
    cpy_r_r16 = PyList_Append(cpy_r_path, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_path", 99, CPyStatic_objgraph___globals);
        goto CPyL12;
    } else
        goto CPyL2;
CPyL8: ;
    cpy_r_r18 = PyList_Reverse(cpy_r_path);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "get_path", 100, CPyStatic_objgraph___globals);
        goto CPyL14;
    }
    return cpy_r_path;
CPyL10: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL11: ;
    CPy_INCREF(cpy_r_o);
    goto CPyL2;
CPyL12: ;
    CPy_DecRef(cpy_r_o);
    CPy_DecRef(cpy_r_path);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_o);
    goto CPyL8;
CPyL14: ;
    CPy_DecRef(cpy_r_path);
    goto CPyL10;
CPyL15: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_attr);
    goto CPyL10;
}

PyObject *CPyPy_objgraph___get_path(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"o", "seen", "parents", 0};
    static CPyArg_Parser parser = {"OOO:get_path", kwlist, 0};
    PyObject *obj_o;
    PyObject *obj_seen;
    PyObject *obj_parents;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_o, &obj_seen, &obj_parents)) {
        return NULL;
    }
    PyObject *arg_o = obj_o;
    PyObject *arg_seen;
    if (likely(PyDict_Check(obj_seen)))
        arg_seen = obj_seen;
    else {
        CPy_TypeError("dict", obj_seen); 
        goto fail;
    }
    PyObject *arg_parents;
    if (likely(PyDict_Check(obj_parents)))
        arg_parents = obj_parents;
    else {
        CPy_TypeError("dict", obj_parents); 
        goto fail;
    }
    PyObject *retval = CPyDef_objgraph___get_path(arg_o, arg_seen, arg_parents);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/objgraph.py", "get_path", 92, CPyStatic_objgraph___globals);
    return NULL;
}

char CPyDef_objgraph_____top_level__(void) {
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
    PyObject **cpy_r_r10;
    void *cpy_r_r12;
    void *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
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
    int32_t cpy_r_r47;
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
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    tuple_T6OOOOOO cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
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
    int32_t cpy_r_r107;
    char cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    int32_t cpy_r_r128;
    char cpy_r_r129;
    int32_t cpy_r_r130;
    char cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    int32_t cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    char cpy_r_r150;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", -1, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_objgraph___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 3, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_types;
    cpy_r_r10 = (PyObject **)&CPyModule_weakref;
    PyObject **cpy_r_r11[2] = {cpy_r_r9, cpy_r_r10};
    cpy_r_r12 = (void *)&cpy_r_r11;
    int64_t cpy_r_r13[2] = {5, 6};
    cpy_r_r14 = (void *)&cpy_r_r13;
    cpy_r_r15 = CPyStatics[9765]; /* (('types', 'types', 'types'),
                                     ('weakref', 'weakref', 'weakref')) */
    cpy_r_r16 = CPyStatic_objgraph___globals;
    cpy_r_r17 = CPyStatics[5343]; /* 'mypy/server/objgraph.py' */
    cpy_r_r18 = CPyStatics[17]; /* '<module>' */
    cpy_r_r19 = CPyImport_ImportMany(cpy_r_r15, cpy_r_r12, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r14);
    if (!cpy_r_r19) goto CPyL56;
    cpy_r_r20 = CPyStatics[9766]; /* ('Iterable',) */
    cpy_r_r21 = CPyStatics[601]; /* 'collections.abc' */
    cpy_r_r22 = CPyStatic_objgraph___globals;
    cpy_r_r23 = CPyImport_ImportFromMany(cpy_r_r21, cpy_r_r20, cpy_r_r20, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 7, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    CPyModule_collections___abc = cpy_r_r23;
    CPy_INCREF(CPyModule_collections___abc);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r24 = CPyStatics[9767]; /* ('Final', 'Iterator', 'Mapping') */
    cpy_r_r25 = CPyStatics[21]; /* 'typing' */
    cpy_r_r26 = CPyStatic_objgraph___globals;
    cpy_r_r27 = CPyImport_ImportFromMany(cpy_r_r25, cpy_r_r24, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 8, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    CPyModule_typing = cpy_r_r27;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r28 = CPyModule_builtins;
    cpy_r_r29 = CPyStatics[2314]; /* 'object' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 10, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r31 = CPyStatics[5344]; /* '__dir__' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 10, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r33 = PyObject_Type(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    CPyStatic_objgraph___method_descriptor_type = cpy_r_r33;
    CPy_INCREF(CPyStatic_objgraph___method_descriptor_type);
    cpy_r_r34 = CPyStatic_objgraph___globals;
    cpy_r_r35 = CPyStatics[5345]; /* 'method_descriptor_type' */
    cpy_r_r36 = CPyDict_SetItem(cpy_r_r34, cpy_r_r35, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 10, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r38 = CPyModule_builtins;
    cpy_r_r39 = CPyStatics[2314]; /* 'object' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 11, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r41 = _PyObject_Vectorcall(cpy_r_r40, 0, 0, 0);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 11, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r42 = CPyStatics[754]; /* '__ne__' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 11, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r44 = PyObject_Type(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    CPyStatic_objgraph___method_wrapper_type = cpy_r_r44;
    CPy_INCREF(CPyStatic_objgraph___method_wrapper_type);
    cpy_r_r45 = CPyStatic_objgraph___globals;
    cpy_r_r46 = CPyStatics[5346]; /* 'method_wrapper_type' */
    cpy_r_r47 = CPyDict_SetItem(cpy_r_r45, cpy_r_r46, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 11, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r49 = CPyModule_builtins;
    cpy_r_r50 = CPyStatics[2314]; /* 'object' */
    cpy_r_r51 = CPyObject_GetAttr(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 12, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r52 = CPyStatics[754]; /* '__ne__' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 12, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r54 = PyObject_Type(cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    CPyStatic_objgraph___wrapper_descriptor_type = cpy_r_r54;
    CPy_INCREF(CPyStatic_objgraph___wrapper_descriptor_type);
    cpy_r_r55 = CPyStatic_objgraph___globals;
    cpy_r_r56 = CPyStatics[5347]; /* 'wrapper_descriptor_type' */
    cpy_r_r57 = CPyDict_SetItem(cpy_r_r55, cpy_r_r56, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 12, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r59 = CPyModule_types;
    cpy_r_r60 = CPyStatics[5348]; /* 'BuiltinFunctionType' */
    cpy_r_r61 = CPyObject_GetAttr(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 15, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r62 = CPyModule_types;
    cpy_r_r63 = CPyStatics[2378]; /* 'FunctionType' */
    cpy_r_r64 = CPyObject_GetAttr(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 16, CPyStatic_objgraph___globals);
        goto CPyL57;
    }
    cpy_r_r65 = CPyModule_types;
    cpy_r_r66 = CPyStatics[5349]; /* 'MethodType' */
    cpy_r_r67 = CPyObject_GetAttr(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 17, CPyStatic_objgraph___globals);
        goto CPyL58;
    }
    cpy_r_r68 = CPyStatic_objgraph___method_descriptor_type;
    if (unlikely(cpy_r_r68 == NULL)) {
        goto CPyL59;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"method_descriptor_type\" was not set");
    cpy_r_r69 = 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 18, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r70 = CPyStatic_objgraph___wrapper_descriptor_type;
    if (unlikely(cpy_r_r70 == NULL)) {
        goto CPyL60;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"wrapper_descriptor_type\" was not set");
    cpy_r_r71 = 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 19, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r72 = CPyStatic_objgraph___method_wrapper_type;
    if (unlikely(cpy_r_r72 == NULL)) {
        goto CPyL61;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"method_wrapper_type\" was not set");
    cpy_r_r73 = 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 20, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r74.f0 = cpy_r_r61;
    cpy_r_r74.f1 = cpy_r_r64;
    cpy_r_r74.f2 = cpy_r_r67;
    cpy_r_r74.f3 = cpy_r_r68;
    cpy_r_r74.f4 = cpy_r_r70;
    cpy_r_r74.f5 = cpy_r_r72;
    CPy_INCREF(cpy_r_r74.f0);
    CPy_INCREF(cpy_r_r74.f1);
    CPy_INCREF(cpy_r_r74.f2);
    CPy_INCREF(cpy_r_r74.f3);
    CPy_INCREF(cpy_r_r74.f4);
    CPy_INCREF(cpy_r_r74.f5);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r67);
    CPyStatic_objgraph___FUNCTION_TYPES = cpy_r_r74;
    CPy_INCREF(CPyStatic_objgraph___FUNCTION_TYPES.f0);
    CPy_INCREF(CPyStatic_objgraph___FUNCTION_TYPES.f1);
    CPy_INCREF(CPyStatic_objgraph___FUNCTION_TYPES.f2);
    CPy_INCREF(CPyStatic_objgraph___FUNCTION_TYPES.f3);
    CPy_INCREF(CPyStatic_objgraph___FUNCTION_TYPES.f4);
    CPy_INCREF(CPyStatic_objgraph___FUNCTION_TYPES.f5);
    cpy_r_r75 = CPyStatic_objgraph___globals;
    cpy_r_r76 = CPyStatics[5350]; /* 'FUNCTION_TYPES' */
    cpy_r_r77 = PyTuple_New(6);
    if (unlikely(cpy_r_r77 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6613 = cpy_r_r74.f0;
    PyTuple_SET_ITEM(cpy_r_r77, 0, __tmp6613);
    PyObject *__tmp6614 = cpy_r_r74.f1;
    PyTuple_SET_ITEM(cpy_r_r77, 1, __tmp6614);
    PyObject *__tmp6615 = cpy_r_r74.f2;
    PyTuple_SET_ITEM(cpy_r_r77, 2, __tmp6615);
    PyObject *__tmp6616 = cpy_r_r74.f3;
    PyTuple_SET_ITEM(cpy_r_r77, 3, __tmp6616);
    PyObject *__tmp6617 = cpy_r_r74.f4;
    PyTuple_SET_ITEM(cpy_r_r77, 4, __tmp6617);
    PyObject *__tmp6618 = cpy_r_r74.f5;
    PyTuple_SET_ITEM(cpy_r_r77, 5, __tmp6618);
    cpy_r_r78 = CPyDict_SetItem(cpy_r_r75, cpy_r_r76, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 14, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r80 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r81 = CPyStatics[197]; /* '__name__' */
    cpy_r_r82 = CPyStatics[1945]; /* '__class__' */
    cpy_r_r83 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r84 = PySet_New(NULL);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 23, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r85 = PySet_Add(cpy_r_r84, cpy_r_r80);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 23, CPyStatic_objgraph___globals);
        goto CPyL62;
    }
    cpy_r_r87 = PySet_Add(cpy_r_r84, cpy_r_r81);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 23, CPyStatic_objgraph___globals);
        goto CPyL62;
    }
    cpy_r_r89 = PySet_Add(cpy_r_r84, cpy_r_r82);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 23, CPyStatic_objgraph___globals);
        goto CPyL62;
    }
    cpy_r_r91 = PySet_Add(cpy_r_r84, cpy_r_r83);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 23, CPyStatic_objgraph___globals);
        goto CPyL62;
    }
    CPyStatic_objgraph___ATTR_BLACKLIST = cpy_r_r84;
    CPy_INCREF(CPyStatic_objgraph___ATTR_BLACKLIST);
    cpy_r_r93 = CPyStatic_objgraph___globals;
    cpy_r_r94 = CPyStatics[5351]; /* 'ATTR_BLACKLIST' */
    cpy_r_r95 = CPyDict_SetItem(cpy_r_r93, cpy_r_r94, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 23, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r97 = (PyObject *)&PyBool_Type;
    cpy_r_r98 = (PyObject *)&PyLong_Type;
    cpy_r_r99 = (PyObject *)&PyFloat_Type;
    cpy_r_r100 = (PyObject *)&PyUnicode_Type;
    cpy_r_r101 = Py_None;
    cpy_r_r102 = PyObject_Type(cpy_r_r101);
    cpy_r_r103 = CPyModule_builtins;
    cpy_r_r104 = CPyStatics[2314]; /* 'object' */
    cpy_r_r105 = CPyObject_GetAttr(cpy_r_r103, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 26, CPyStatic_objgraph___globals);
        goto CPyL63;
    }
    cpy_r_r106 = PySet_New(NULL);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 26, CPyStatic_objgraph___globals);
        goto CPyL64;
    }
    cpy_r_r107 = PySet_Add(cpy_r_r106, cpy_r_r97);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 26, CPyStatic_objgraph___globals);
        goto CPyL65;
    }
    cpy_r_r109 = PySet_Add(cpy_r_r106, cpy_r_r98);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 26, CPyStatic_objgraph___globals);
        goto CPyL65;
    }
    cpy_r_r111 = PySet_Add(cpy_r_r106, cpy_r_r99);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 26, CPyStatic_objgraph___globals);
        goto CPyL65;
    }
    cpy_r_r113 = PySet_Add(cpy_r_r106, cpy_r_r100);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 26, CPyStatic_objgraph___globals);
        goto CPyL65;
    }
    cpy_r_r115 = PySet_Add(cpy_r_r106, cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 26, CPyStatic_objgraph___globals);
        goto CPyL66;
    }
    cpy_r_r117 = PySet_Add(cpy_r_r106, cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 26, CPyStatic_objgraph___globals);
        goto CPyL67;
    }
    CPyStatic_objgraph___ATOMIC_TYPE_BLACKLIST = cpy_r_r106;
    CPy_INCREF(CPyStatic_objgraph___ATOMIC_TYPE_BLACKLIST);
    cpy_r_r119 = CPyStatic_objgraph___globals;
    cpy_r_r120 = CPyStatics[5352]; /* 'ATOMIC_TYPE_BLACKLIST' */
    cpy_r_r121 = CPyDict_SetItem(cpy_r_r119, cpy_r_r120, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 26, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r123 = (PyObject *)&PyList_Type;
    cpy_r_r124 = (PyObject *)&PySet_Type;
    cpy_r_r125 = (PyObject *)&PyDict_Type;
    cpy_r_r126 = (PyObject *)&PyTuple_Type;
    cpy_r_r127 = PySet_New(NULL);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 29, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r128 = PySet_Add(cpy_r_r127, cpy_r_r123);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 29, CPyStatic_objgraph___globals);
        goto CPyL68;
    }
    cpy_r_r130 = PySet_Add(cpy_r_r127, cpy_r_r124);
    cpy_r_r131 = cpy_r_r130 >= 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 29, CPyStatic_objgraph___globals);
        goto CPyL68;
    }
    cpy_r_r132 = PySet_Add(cpy_r_r127, cpy_r_r125);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 29, CPyStatic_objgraph___globals);
        goto CPyL68;
    }
    cpy_r_r134 = PySet_Add(cpy_r_r127, cpy_r_r126);
    cpy_r_r135 = cpy_r_r134 >= 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 29, CPyStatic_objgraph___globals);
        goto CPyL68;
    }
    CPyStatic_objgraph___COLLECTION_TYPE_BLACKLIST = cpy_r_r127;
    CPy_INCREF(CPyStatic_objgraph___COLLECTION_TYPE_BLACKLIST);
    cpy_r_r136 = CPyStatic_objgraph___globals;
    cpy_r_r137 = CPyStatics[5353]; /* 'COLLECTION_TYPE_BLACKLIST' */
    cpy_r_r138 = CPyDict_SetItem(cpy_r_r136, cpy_r_r137, cpy_r_r127);
    CPy_DECREF(cpy_r_r127);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 29, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r140 = CPyModule_weakref;
    cpy_r_r141 = CPyStatics[5354]; /* 'ReferenceType' */
    cpy_r_r142 = CPyObject_GetAttr(cpy_r_r140, cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 32, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    cpy_r_r143 = PySet_New(NULL);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 32, CPyStatic_objgraph___globals);
        goto CPyL69;
    }
    cpy_r_r144 = PySet_Add(cpy_r_r143, cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 32, CPyStatic_objgraph___globals);
        goto CPyL70;
    }
    CPyStatic_objgraph___TYPE_BLACKLIST = cpy_r_r143;
    CPy_INCREF(CPyStatic_objgraph___TYPE_BLACKLIST);
    cpy_r_r146 = CPyStatic_objgraph___globals;
    cpy_r_r147 = CPyStatics[5355]; /* 'TYPE_BLACKLIST' */
    cpy_r_r148 = CPyDict_SetItem(cpy_r_r146, cpy_r_r147, cpy_r_r143);
    CPy_DECREF(cpy_r_r143);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/server/objgraph.py", "<module>", 32, CPyStatic_objgraph___globals);
        goto CPyL56;
    }
    return 1;
CPyL56: ;
    cpy_r_r150 = 2;
    return cpy_r_r150;
CPyL57: ;
    CPy_DecRef(cpy_r_r61);
    goto CPyL56;
CPyL58: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    goto CPyL56;
CPyL59: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    goto CPyL21;
CPyL60: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    goto CPyL24;
CPyL61: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    goto CPyL27;
CPyL62: ;
    CPy_DecRef(cpy_r_r84);
    goto CPyL56;
CPyL63: ;
    CPy_DecRef(cpy_r_r102);
    goto CPyL56;
CPyL64: ;
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r105);
    goto CPyL56;
CPyL65: ;
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r105);
    CPy_DecRef(cpy_r_r106);
    goto CPyL56;
CPyL66: ;
    CPy_DecRef(cpy_r_r105);
    CPy_DecRef(cpy_r_r106);
    goto CPyL56;
CPyL67: ;
    CPy_DecRef(cpy_r_r106);
    goto CPyL56;
CPyL68: ;
    CPy_DecRef(cpy_r_r127);
    goto CPyL56;
CPyL69: ;
    CPy_DecRef(cpy_r_r142);
    goto CPyL56;
CPyL70: ;
    CPy_DecRef(cpy_r_r143);
    goto CPyL56;
}
