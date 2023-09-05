#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *graph_utils___strongly_connected_components_env_setup(PyTypeObject *type);
PyObject *CPyDef_graph_utils___strongly_connected_components_env(void);

static PyObject *
graph_utils___strongly_connected_components_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_graph_utils___strongly_connected_components_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return graph_utils___strongly_connected_components_env_setup(type);
}

static int
graph_utils___strongly_connected_components_env_traverse(mypy___graph_utils___strongly_connected_components_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_vertices);
    Py_VISIT(self->_edges);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->_boundaries);
    Py_VISIT(self->_identified);
    Py_VISIT(self->_index);
    Py_VISIT(self->_stack);
    Py_VISIT(self->_dfs);
    Py_VISIT(self->___mypyc_temp__4);
    Py_VISIT(self->___mypyc_temp__5);
    Py_VISIT(self->_v);
    Py_VISIT(self->___mypyc_temp__6);
    Py_VISIT(self->___mypyc_temp__7.f0);
    Py_VISIT(self->___mypyc_temp__7.f1);
    Py_VISIT(self->___mypyc_temp__7.f2);
    return 0;
}

static int
graph_utils___strongly_connected_components_env_clear(mypy___graph_utils___strongly_connected_components_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_vertices);
    Py_CLEAR(self->_edges);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_boundaries);
    Py_CLEAR(self->_identified);
    Py_CLEAR(self->_index);
    Py_CLEAR(self->_stack);
    Py_CLEAR(self->_dfs);
    Py_CLEAR(self->___mypyc_temp__4);
    Py_CLEAR(self->___mypyc_temp__5);
    Py_CLEAR(self->_v);
    Py_CLEAR(self->___mypyc_temp__6);
    Py_CLEAR(self->___mypyc_temp__7.f0);
    Py_CLEAR(self->___mypyc_temp__7.f1);
    Py_CLEAR(self->___mypyc_temp__7.f2);
    return 0;
}

static void
graph_utils___strongly_connected_components_env_dealloc(mypy___graph_utils___strongly_connected_components_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, graph_utils___strongly_connected_components_env_dealloc)
    graph_utils___strongly_connected_components_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem graph_utils___strongly_connected_components_env_vtable[1];
static bool
CPyDef_graph_utils___strongly_connected_components_env_trait_vtable_setup(void)
{
    CPyVTableItem graph_utils___strongly_connected_components_env_vtable_scratch[] = {
        NULL
    };
    memcpy(graph_utils___strongly_connected_components_env_vtable, graph_utils___strongly_connected_components_env_vtable_scratch, sizeof(graph_utils___strongly_connected_components_env_vtable));
    return 1;
}

static PyMethodDef graph_utils___strongly_connected_components_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_graph_utils___strongly_connected_components_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "strongly_connected_components_env",
    .tp_new = graph_utils___strongly_connected_components_env_new,
    .tp_dealloc = (destructor)graph_utils___strongly_connected_components_env_dealloc,
    .tp_traverse = (traverseproc)graph_utils___strongly_connected_components_env_traverse,
    .tp_clear = (inquiry)graph_utils___strongly_connected_components_env_clear,
    .tp_methods = graph_utils___strongly_connected_components_env_methods,
    .tp_basicsize = sizeof(mypy___graph_utils___strongly_connected_components_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_graph_utils___strongly_connected_components_env_template = &CPyType_graph_utils___strongly_connected_components_env_template_;

static PyObject *
graph_utils___strongly_connected_components_env_setup(PyTypeObject *type)
{
    mypy___graph_utils___strongly_connected_components_envObject *self;
    self = (mypy___graph_utils___strongly_connected_components_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = graph_utils___strongly_connected_components_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__7 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_graph_utils___strongly_connected_components_env(void)
{
    PyObject *self = graph_utils___strongly_connected_components_env_setup(CPyType_graph_utils___strongly_connected_components_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *graph_utils___strongly_connected_components_gen_setup(PyTypeObject *type);
PyObject *CPyDef_graph_utils___strongly_connected_components_gen(void);

static PyObject *
graph_utils___strongly_connected_components_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_graph_utils___strongly_connected_components_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return graph_utils___strongly_connected_components_gen_setup(type);
}

static int
graph_utils___strongly_connected_components_gen_traverse(mypy___graph_utils___strongly_connected_components_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
graph_utils___strongly_connected_components_gen_clear(mypy___graph_utils___strongly_connected_components_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
graph_utils___strongly_connected_components_gen_dealloc(mypy___graph_utils___strongly_connected_components_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, graph_utils___strongly_connected_components_gen_dealloc)
    graph_utils___strongly_connected_components_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem graph_utils___strongly_connected_components_gen_vtable[6];
static bool
CPyDef_graph_utils___strongly_connected_components_gen_trait_vtable_setup(void)
{
    CPyVTableItem graph_utils___strongly_connected_components_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_graph_utils___strongly_connected_components_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_graph_utils___strongly_connected_components_gen_____next__,
        (CPyVTableItem)CPyDef_graph_utils___strongly_connected_components_gen___send,
        (CPyVTableItem)CPyDef_graph_utils___strongly_connected_components_gen_____iter__,
        (CPyVTableItem)CPyDef_graph_utils___strongly_connected_components_gen___throw,
        (CPyVTableItem)CPyDef_graph_utils___strongly_connected_components_gen___close,
    };
    memcpy(graph_utils___strongly_connected_components_gen_vtable, graph_utils___strongly_connected_components_gen_vtable_scratch, sizeof(graph_utils___strongly_connected_components_gen_vtable));
    return 1;
}

static PyMethodDef graph_utils___strongly_connected_components_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_graph_utils___strongly_connected_components_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_graph_utils___strongly_connected_components_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_graph_utils___strongly_connected_components_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_graph_utils___strongly_connected_components_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_graph_utils___strongly_connected_components_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_graph_utils___strongly_connected_components_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_graph_utils___strongly_connected_components_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "strongly_connected_components_gen",
    .tp_new = graph_utils___strongly_connected_components_gen_new,
    .tp_dealloc = (destructor)graph_utils___strongly_connected_components_gen_dealloc,
    .tp_traverse = (traverseproc)graph_utils___strongly_connected_components_gen_traverse,
    .tp_clear = (inquiry)graph_utils___strongly_connected_components_gen_clear,
    .tp_methods = graph_utils___strongly_connected_components_gen_methods,
    .tp_iter = CPyDef_graph_utils___strongly_connected_components_gen_____iter__,
    .tp_iternext = CPyDef_graph_utils___strongly_connected_components_gen_____next__,
    .tp_basicsize = sizeof(mypy___graph_utils___strongly_connected_components_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_graph_utils___strongly_connected_components_gen_template = &CPyType_graph_utils___strongly_connected_components_gen_template_;

static PyObject *
graph_utils___strongly_connected_components_gen_setup(PyTypeObject *type)
{
    mypy___graph_utils___strongly_connected_components_genObject *self;
    self = (mypy___graph_utils___strongly_connected_components_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = graph_utils___strongly_connected_components_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_graph_utils___strongly_connected_components_gen(void)
{
    PyObject *self = graph_utils___strongly_connected_components_gen_setup(CPyType_graph_utils___strongly_connected_components_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *graph_utils___dfs_strongly_connected_components_env_setup(PyTypeObject *type);
PyObject *CPyDef_graph_utils___dfs_strongly_connected_components_env(void);

static PyObject *
graph_utils___dfs_strongly_connected_components_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_graph_utils___dfs_strongly_connected_components_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return graph_utils___dfs_strongly_connected_components_env_setup(type);
}

static int
graph_utils___dfs_strongly_connected_components_env_traverse(mypy___graph_utils___dfs_strongly_connected_components_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(self->_v);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->_w);
    Py_VISIT(self->___mypyc_temp__2);
    Py_VISIT(self->___mypyc_temp__3.f0);
    Py_VISIT(self->___mypyc_temp__3.f1);
    Py_VISIT(self->___mypyc_temp__3.f2);
    Py_VISIT(self->_scc);
    return 0;
}

static int
graph_utils___dfs_strongly_connected_components_env_clear(mypy___graph_utils___dfs_strongly_connected_components_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(self->_v);
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
    Py_CLEAR(self->_w);
    Py_CLEAR(self->___mypyc_temp__2);
    Py_CLEAR(self->___mypyc_temp__3.f0);
    Py_CLEAR(self->___mypyc_temp__3.f1);
    Py_CLEAR(self->___mypyc_temp__3.f2);
    Py_CLEAR(self->_scc);
    return 0;
}

static void
graph_utils___dfs_strongly_connected_components_env_dealloc(mypy___graph_utils___dfs_strongly_connected_components_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, graph_utils___dfs_strongly_connected_components_env_dealloc)
    graph_utils___dfs_strongly_connected_components_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem graph_utils___dfs_strongly_connected_components_env_vtable[1];
static bool
CPyDef_graph_utils___dfs_strongly_connected_components_env_trait_vtable_setup(void)
{
    CPyVTableItem graph_utils___dfs_strongly_connected_components_env_vtable_scratch[] = {
        NULL
    };
    memcpy(graph_utils___dfs_strongly_connected_components_env_vtable, graph_utils___dfs_strongly_connected_components_env_vtable_scratch, sizeof(graph_utils___dfs_strongly_connected_components_env_vtable));
    return 1;
}

static PyMethodDef graph_utils___dfs_strongly_connected_components_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_graph_utils___dfs_strongly_connected_components_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "dfs_strongly_connected_components_env",
    .tp_new = graph_utils___dfs_strongly_connected_components_env_new,
    .tp_dealloc = (destructor)graph_utils___dfs_strongly_connected_components_env_dealloc,
    .tp_traverse = (traverseproc)graph_utils___dfs_strongly_connected_components_env_traverse,
    .tp_clear = (inquiry)graph_utils___dfs_strongly_connected_components_env_clear,
    .tp_methods = graph_utils___dfs_strongly_connected_components_env_methods,
    .tp_basicsize = sizeof(mypy___graph_utils___dfs_strongly_connected_components_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_graph_utils___dfs_strongly_connected_components_env_template = &CPyType_graph_utils___dfs_strongly_connected_components_env_template_;

static PyObject *
graph_utils___dfs_strongly_connected_components_env_setup(PyTypeObject *type)
{
    mypy___graph_utils___dfs_strongly_connected_components_envObject *self;
    self = (mypy___graph_utils___dfs_strongly_connected_components_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = graph_utils___dfs_strongly_connected_components_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__1 = CPY_INT_TAG;
    self->___mypyc_temp__3 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_graph_utils___dfs_strongly_connected_components_env(void)
{
    PyObject *self = graph_utils___dfs_strongly_connected_components_env_setup(CPyType_graph_utils___dfs_strongly_connected_components_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__graph_utils___dfs_strongly_connected_components_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_graph_utils___dfs_strongly_connected_components_obj_____get__(self, instance, owner);
}
PyMemberDef graph_utils___dfs_strongly_connected_components_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___graph_utils___dfs_strongly_connected_components_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___graph_utils___dfs_strongly_connected_components_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *graph_utils___dfs_strongly_connected_components_obj_setup(PyTypeObject *type);
PyObject *CPyDef_graph_utils___dfs_strongly_connected_components_obj(void);

static PyObject *
graph_utils___dfs_strongly_connected_components_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_graph_utils___dfs_strongly_connected_components_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return graph_utils___dfs_strongly_connected_components_obj_setup(type);
}

static int
graph_utils___dfs_strongly_connected_components_obj_traverse(mypy___graph_utils___dfs_strongly_connected_components_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___graph_utils___dfs_strongly_connected_components_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___graph_utils___dfs_strongly_connected_components_objObject))));
    return 0;
}

static int
graph_utils___dfs_strongly_connected_components_obj_clear(mypy___graph_utils___dfs_strongly_connected_components_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___graph_utils___dfs_strongly_connected_components_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___graph_utils___dfs_strongly_connected_components_objObject))));
    return 0;
}

static void
graph_utils___dfs_strongly_connected_components_obj_dealloc(mypy___graph_utils___dfs_strongly_connected_components_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, graph_utils___dfs_strongly_connected_components_obj_dealloc)
    graph_utils___dfs_strongly_connected_components_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem graph_utils___dfs_strongly_connected_components_obj_vtable[2];
static bool
CPyDef_graph_utils___dfs_strongly_connected_components_obj_trait_vtable_setup(void)
{
    CPyVTableItem graph_utils___dfs_strongly_connected_components_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_graph_utils___dfs_strongly_connected_components_obj_____call__,
        (CPyVTableItem)CPyDef_graph_utils___dfs_strongly_connected_components_obj_____get__,
    };
    memcpy(graph_utils___dfs_strongly_connected_components_obj_vtable, graph_utils___dfs_strongly_connected_components_obj_vtable_scratch, sizeof(graph_utils___dfs_strongly_connected_components_obj_vtable));
    return 1;
}

static PyMethodDef graph_utils___dfs_strongly_connected_components_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_graph_utils___dfs_strongly_connected_components_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_graph_utils___dfs_strongly_connected_components_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_graph_utils___dfs_strongly_connected_components_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "dfs_strongly_connected_components_obj",
    .tp_new = graph_utils___dfs_strongly_connected_components_obj_new,
    .tp_dealloc = (destructor)graph_utils___dfs_strongly_connected_components_obj_dealloc,
    .tp_traverse = (traverseproc)graph_utils___dfs_strongly_connected_components_obj_traverse,
    .tp_clear = (inquiry)graph_utils___dfs_strongly_connected_components_obj_clear,
    .tp_methods = graph_utils___dfs_strongly_connected_components_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__graph_utils___dfs_strongly_connected_components_obj,
    .tp_members = graph_utils___dfs_strongly_connected_components_obj_members,
    .tp_basicsize = sizeof(mypy___graph_utils___dfs_strongly_connected_components_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___graph_utils___dfs_strongly_connected_components_objObject),
    .tp_weaklistoffset = sizeof(mypy___graph_utils___dfs_strongly_connected_components_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___graph_utils___dfs_strongly_connected_components_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_graph_utils___dfs_strongly_connected_components_obj_template = &CPyType_graph_utils___dfs_strongly_connected_components_obj_template_;

static PyObject *
graph_utils___dfs_strongly_connected_components_obj_setup(PyTypeObject *type)
{
    mypy___graph_utils___dfs_strongly_connected_components_objObject *self;
    self = (mypy___graph_utils___dfs_strongly_connected_components_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = graph_utils___dfs_strongly_connected_components_obj_vtable;
    self->vectorcall = CPyPy_graph_utils___dfs_strongly_connected_components_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_graph_utils___dfs_strongly_connected_components_obj(void)
{
    PyObject *self = graph_utils___dfs_strongly_connected_components_obj_setup(CPyType_graph_utils___dfs_strongly_connected_components_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *graph_utils___dfs_strongly_connected_components_gen_setup(PyTypeObject *type);
PyObject *CPyDef_graph_utils___dfs_strongly_connected_components_gen(void);

static PyObject *
graph_utils___dfs_strongly_connected_components_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_graph_utils___dfs_strongly_connected_components_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return graph_utils___dfs_strongly_connected_components_gen_setup(type);
}

static int
graph_utils___dfs_strongly_connected_components_gen_traverse(mypy___graph_utils___dfs_strongly_connected_components_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
graph_utils___dfs_strongly_connected_components_gen_clear(mypy___graph_utils___dfs_strongly_connected_components_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
graph_utils___dfs_strongly_connected_components_gen_dealloc(mypy___graph_utils___dfs_strongly_connected_components_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, graph_utils___dfs_strongly_connected_components_gen_dealloc)
    graph_utils___dfs_strongly_connected_components_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem graph_utils___dfs_strongly_connected_components_gen_vtable[6];
static bool
CPyDef_graph_utils___dfs_strongly_connected_components_gen_trait_vtable_setup(void)
{
    CPyVTableItem graph_utils___dfs_strongly_connected_components_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_graph_utils___dfs_strongly_connected_components_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_graph_utils___dfs_strongly_connected_components_gen_____next__,
        (CPyVTableItem)CPyDef_graph_utils___dfs_strongly_connected_components_gen___send,
        (CPyVTableItem)CPyDef_graph_utils___dfs_strongly_connected_components_gen_____iter__,
        (CPyVTableItem)CPyDef_graph_utils___dfs_strongly_connected_components_gen___throw,
        (CPyVTableItem)CPyDef_graph_utils___dfs_strongly_connected_components_gen___close,
    };
    memcpy(graph_utils___dfs_strongly_connected_components_gen_vtable, graph_utils___dfs_strongly_connected_components_gen_vtable_scratch, sizeof(graph_utils___dfs_strongly_connected_components_gen_vtable));
    return 1;
}

static PyMethodDef graph_utils___dfs_strongly_connected_components_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_graph_utils___dfs_strongly_connected_components_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_graph_utils___dfs_strongly_connected_components_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_graph_utils___dfs_strongly_connected_components_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_graph_utils___dfs_strongly_connected_components_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_graph_utils___dfs_strongly_connected_components_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_graph_utils___dfs_strongly_connected_components_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_graph_utils___dfs_strongly_connected_components_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "dfs_strongly_connected_components_gen",
    .tp_new = graph_utils___dfs_strongly_connected_components_gen_new,
    .tp_dealloc = (destructor)graph_utils___dfs_strongly_connected_components_gen_dealloc,
    .tp_traverse = (traverseproc)graph_utils___dfs_strongly_connected_components_gen_traverse,
    .tp_clear = (inquiry)graph_utils___dfs_strongly_connected_components_gen_clear,
    .tp_methods = graph_utils___dfs_strongly_connected_components_gen_methods,
    .tp_iter = CPyDef_graph_utils___dfs_strongly_connected_components_gen_____iter__,
    .tp_iternext = CPyDef_graph_utils___dfs_strongly_connected_components_gen_____next__,
    .tp_basicsize = sizeof(mypy___graph_utils___dfs_strongly_connected_components_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_graph_utils___dfs_strongly_connected_components_gen_template = &CPyType_graph_utils___dfs_strongly_connected_components_gen_template_;

static PyObject *
graph_utils___dfs_strongly_connected_components_gen_setup(PyTypeObject *type)
{
    mypy___graph_utils___dfs_strongly_connected_components_genObject *self;
    self = (mypy___graph_utils___dfs_strongly_connected_components_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = graph_utils___dfs_strongly_connected_components_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_graph_utils___dfs_strongly_connected_components_gen(void)
{
    PyObject *self = graph_utils___dfs_strongly_connected_components_gen_setup(CPyType_graph_utils___dfs_strongly_connected_components_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *graph_utils___topsort_env_setup(PyTypeObject *type);
PyObject *CPyDef_graph_utils___topsort_env(void);

static PyObject *
graph_utils___topsort_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_graph_utils___topsort_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return graph_utils___topsort_env_setup(type);
}

static int
graph_utils___topsort_env_traverse(mypy___graph_utils___topsort_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_data);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__8);
    Py_VISIT(self->___mypyc_temp__11);
    Py_VISIT(self->_k);
    Py_VISIT(self->_v);
    Py_VISIT(self->___mypyc_temp__12);
    Py_VISIT(self->___mypyc_temp__13);
    Py_VISIT(self->_item);
    Py_VISIT(self->___mypyc_temp__14);
    Py_VISIT(self->___mypyc_temp__15);
    Py_VISIT(self->___mypyc_temp__18);
    Py_VISIT(self->_dep);
    Py_VISIT(self->_ready);
    Py_VISIT(self->___mypyc_temp__19);
    Py_VISIT(self->___mypyc_temp__20);
    Py_VISIT(self->___mypyc_temp__23);
    return 0;
}

static int
graph_utils___topsort_env_clear(mypy___graph_utils___topsort_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_data);
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
    Py_CLEAR(self->___mypyc_temp__11);
    Py_CLEAR(self->_k);
    Py_CLEAR(self->_v);
    Py_CLEAR(self->___mypyc_temp__12);
    Py_CLEAR(self->___mypyc_temp__13);
    Py_CLEAR(self->_item);
    Py_CLEAR(self->___mypyc_temp__14);
    Py_CLEAR(self->___mypyc_temp__15);
    Py_CLEAR(self->___mypyc_temp__18);
    Py_CLEAR(self->_dep);
    Py_CLEAR(self->_ready);
    Py_CLEAR(self->___mypyc_temp__19);
    Py_CLEAR(self->___mypyc_temp__20);
    Py_CLEAR(self->___mypyc_temp__23);
    return 0;
}

static void
graph_utils___topsort_env_dealloc(mypy___graph_utils___topsort_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, graph_utils___topsort_env_dealloc)
    graph_utils___topsort_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem graph_utils___topsort_env_vtable[1];
static bool
CPyDef_graph_utils___topsort_env_trait_vtable_setup(void)
{
    CPyVTableItem graph_utils___topsort_env_vtable_scratch[] = {
        NULL
    };
    memcpy(graph_utils___topsort_env_vtable, graph_utils___topsort_env_vtable_scratch, sizeof(graph_utils___topsort_env_vtable));
    return 1;
}

static PyMethodDef graph_utils___topsort_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_graph_utils___topsort_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "topsort_env",
    .tp_new = graph_utils___topsort_env_new,
    .tp_dealloc = (destructor)graph_utils___topsort_env_dealloc,
    .tp_traverse = (traverseproc)graph_utils___topsort_env_traverse,
    .tp_clear = (inquiry)graph_utils___topsort_env_clear,
    .tp_methods = graph_utils___topsort_env_methods,
    .tp_basicsize = sizeof(mypy___graph_utils___topsort_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_graph_utils___topsort_env_template = &CPyType_graph_utils___topsort_env_template_;

static PyObject *
graph_utils___topsort_env_setup(PyTypeObject *type)
{
    mypy___graph_utils___topsort_envObject *self;
    self = (mypy___graph_utils___topsort_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = graph_utils___topsort_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__9 = CPY_INT_TAG;
    self->___mypyc_temp__10 = CPY_INT_TAG;
    self->___mypyc_temp__16 = CPY_INT_TAG;
    self->___mypyc_temp__17 = CPY_INT_TAG;
    self->___mypyc_temp__21 = CPY_INT_TAG;
    self->___mypyc_temp__22 = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_graph_utils___topsort_env(void)
{
    PyObject *self = graph_utils___topsort_env_setup(CPyType_graph_utils___topsort_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *graph_utils___topsort_gen_setup(PyTypeObject *type);
PyObject *CPyDef_graph_utils___topsort_gen(void);

static PyObject *
graph_utils___topsort_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_graph_utils___topsort_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return graph_utils___topsort_gen_setup(type);
}

static int
graph_utils___topsort_gen_traverse(mypy___graph_utils___topsort_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
graph_utils___topsort_gen_clear(mypy___graph_utils___topsort_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
graph_utils___topsort_gen_dealloc(mypy___graph_utils___topsort_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, graph_utils___topsort_gen_dealloc)
    graph_utils___topsort_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem graph_utils___topsort_gen_vtable[6];
static bool
CPyDef_graph_utils___topsort_gen_trait_vtable_setup(void)
{
    CPyVTableItem graph_utils___topsort_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_graph_utils___topsort_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_graph_utils___topsort_gen_____next__,
        (CPyVTableItem)CPyDef_graph_utils___topsort_gen___send,
        (CPyVTableItem)CPyDef_graph_utils___topsort_gen_____iter__,
        (CPyVTableItem)CPyDef_graph_utils___topsort_gen___throw,
        (CPyVTableItem)CPyDef_graph_utils___topsort_gen___close,
    };
    memcpy(graph_utils___topsort_gen_vtable, graph_utils___topsort_gen_vtable_scratch, sizeof(graph_utils___topsort_gen_vtable));
    return 1;
}

static PyMethodDef graph_utils___topsort_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_graph_utils___topsort_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_graph_utils___topsort_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_graph_utils___topsort_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_graph_utils___topsort_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_graph_utils___topsort_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_graph_utils___topsort_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_graph_utils___topsort_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "topsort_gen",
    .tp_new = graph_utils___topsort_gen_new,
    .tp_dealloc = (destructor)graph_utils___topsort_gen_dealloc,
    .tp_traverse = (traverseproc)graph_utils___topsort_gen_traverse,
    .tp_clear = (inquiry)graph_utils___topsort_gen_clear,
    .tp_methods = graph_utils___topsort_gen_methods,
    .tp_iter = CPyDef_graph_utils___topsort_gen_____iter__,
    .tp_iternext = CPyDef_graph_utils___topsort_gen_____next__,
    .tp_basicsize = sizeof(mypy___graph_utils___topsort_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_graph_utils___topsort_gen_template = &CPyType_graph_utils___topsort_gen_template_;

static PyObject *
graph_utils___topsort_gen_setup(PyTypeObject *type)
{
    mypy___graph_utils___topsort_genObject *self;
    self = (mypy___graph_utils___topsort_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = graph_utils___topsort_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_graph_utils___topsort_gen(void)
{
    PyObject *self = graph_utils___topsort_gen_setup(CPyType_graph_utils___topsort_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef graph_utilsmodule_methods[] = {
    {"strongly_connected_components", (PyCFunction)CPyPy_graph_utils___strongly_connected_components, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"prepare_sccs", (PyCFunction)CPyPy_graph_utils___prepare_sccs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"topsort", (PyCFunction)CPyPy_graph_utils___topsort, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef graph_utilsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.graph_utils",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    graph_utilsmodule_methods
};

PyObject *CPyInit_mypy___graph_utils(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___graph_utils_internal) {
        Py_INCREF(CPyModule_mypy___graph_utils_internal);
        return CPyModule_mypy___graph_utils_internal;
    }
    CPyModule_mypy___graph_utils_internal = PyModule_Create(&graph_utilsmodule);
    if (unlikely(CPyModule_mypy___graph_utils_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___graph_utils_internal, "__name__");
    CPyStatic_graph_utils___globals = PyModule_GetDict(CPyModule_mypy___graph_utils_internal);
    if (unlikely(CPyStatic_graph_utils___globals == NULL))
        goto fail;
    CPyType_graph_utils___strongly_connected_components_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_graph_utils___strongly_connected_components_env_template, NULL, modname);
    if (unlikely(!CPyType_graph_utils___strongly_connected_components_env))
        goto fail;
    CPyType_graph_utils___strongly_connected_components_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_graph_utils___strongly_connected_components_gen_template, NULL, modname);
    if (unlikely(!CPyType_graph_utils___strongly_connected_components_gen))
        goto fail;
    CPyType_graph_utils___dfs_strongly_connected_components_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_graph_utils___dfs_strongly_connected_components_env_template, NULL, modname);
    if (unlikely(!CPyType_graph_utils___dfs_strongly_connected_components_env))
        goto fail;
    CPyType_graph_utils___dfs_strongly_connected_components_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_graph_utils___dfs_strongly_connected_components_obj_template, NULL, modname);
    if (unlikely(!CPyType_graph_utils___dfs_strongly_connected_components_obj))
        goto fail;
    CPyType_graph_utils___dfs_strongly_connected_components_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_graph_utils___dfs_strongly_connected_components_gen_template, NULL, modname);
    if (unlikely(!CPyType_graph_utils___dfs_strongly_connected_components_gen))
        goto fail;
    CPyType_graph_utils___topsort_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_graph_utils___topsort_env_template, NULL, modname);
    if (unlikely(!CPyType_graph_utils___topsort_env))
        goto fail;
    CPyType_graph_utils___topsort_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_graph_utils___topsort_gen_template, NULL, modname);
    if (unlikely(!CPyType_graph_utils___topsort_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_graph_utils_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___graph_utils_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___graph_utils_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_graph_utils___strongly_connected_components_env);
    Py_CLEAR(CPyType_graph_utils___strongly_connected_components_gen);
    Py_CLEAR(CPyType_graph_utils___dfs_strongly_connected_components_env);
    Py_CLEAR(CPyType_graph_utils___dfs_strongly_connected_components_obj);
    Py_CLEAR(CPyType_graph_utils___dfs_strongly_connected_components_gen);
    Py_CLEAR(CPyType_graph_utils___topsort_env);
    Py_CLEAR(CPyType_graph_utils___topsort_gen);
    return NULL;
}

PyObject *CPyDef_graph_utils___dfs_strongly_connected_components_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_graph_utils___dfs_strongly_connected_components_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_graph_utils___dfs_strongly_connected_components_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "__get__", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___dfs_strongly_connected_components_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_dfs;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    tuple_T3OOO cpy_r_r67;
    char cpy_r_r68;
    PyObject **cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    tuple_T3OOO cpy_r_r73;
    char cpy_r_r74;
    tuple_T3OOO cpy_r_r75;
    tuple_T3OOO cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyTagged cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyTagged cpy_r_r93;
    int64_t cpy_r_r94;
    char cpy_r_r95;
    int64_t cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyTagged cpy_r_r102;
    CPyTagged cpy_r_r103;
    CPyTagged cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    CPyTagged cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    CPyTagged cpy_r_r112;
    int64_t cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    CPyTagged cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    CPyTagged cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    CPyTagged cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    int64_t cpy_r_r150;
    char cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    char cpy_r_r154;
    int64_t cpy_r_r155;
    char cpy_r_r156;
    char cpy_r_r157;
    char cpy_r_r158;
    char cpy_r_r159;
    int64_t cpy_r_r160;
    char cpy_r_r161;
    char cpy_r_r162;
    char cpy_r_r163;
    char cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((mypy___graph_utils___dfs_strongly_connected_components_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_gen", "__mypyc_env__", 32, CPyStatic_graph_utils___globals);
        goto CPyL151;
    }
    CPy_INCREF(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "__mypyc_next_label__", 32, CPyStatic_graph_utils___globals);
        goto CPyL152;
    }
    CPyTagged_INCREF(cpy_r_r3);
CPyL2: ;
    cpy_r_r4 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_env__;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "__mypyc_env__", 32, CPyStatic_graph_utils___globals);
        goto CPyL153;
    }
    CPy_INCREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_env__;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "__mypyc_env__", -1, CPyStatic_graph_utils___globals);
        goto CPyL154;
    }
    CPy_INCREF(cpy_r_r5);
CPyL4: ;
    cpy_r_r6 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r5)->_dfs;
    if (unlikely(cpy_r_r6 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'dfs' of 'strongly_connected_components_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r6);
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", -1, CPyStatic_graph_utils___globals);
        goto CPyL154;
    }
CPyL5: ;
    cpy_r_dfs = cpy_r_r6;
    goto CPyL136;
CPyL6: ;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_type != cpy_r_r7;
    if (cpy_r_r8) {
        goto CPyL155;
    } else
        goto CPyL9;
CPyL7: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 32, CPyStatic_graph_utils___globals);
        goto CPyL150;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r9 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_stack;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "stack", 33, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r9);
CPyL10: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_index;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "index", 33, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r13);
CPyL11: ;
    cpy_r_r14 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_v;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "v", 33, CPyStatic_graph_utils___globals);
        goto CPyL157;
    }
    CPy_INCREF(cpy_r_r14);
CPyL12: ;
    cpy_r_r15 = CPyTagged_StealAsObject(cpy_r_r12);
    cpy_r_r16 = CPyDict_SetItem(cpy_r_r13, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 33, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    cpy_r_r18 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_stack;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "stack", 34, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r18);
CPyL14: ;
    cpy_r_r19 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_v;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "v", 34, CPyStatic_graph_utils___globals);
        goto CPyL158;
    }
    CPy_INCREF(cpy_r_r19);
CPyL15: ;
    cpy_r_r20 = PyList_Append(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 34, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    cpy_r_r22 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_boundaries;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "boundaries", 35, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r22);
CPyL17: ;
    cpy_r_r23 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_index;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "index", 35, CPyStatic_graph_utils___globals);
        goto CPyL159;
    }
    CPy_INCREF(cpy_r_r23);
CPyL18: ;
    cpy_r_r24 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_v;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "v", 35, CPyStatic_graph_utils___globals);
        goto CPyL160;
    }
    CPy_INCREF(cpy_r_r24);
CPyL19: ;
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 35, CPyStatic_graph_utils___globals);
        goto CPyL159;
    }
    if (likely(PyLong_Check(cpy_r_r25)))
        cpy_r_r26 = CPyTagged_FromObject(cpy_r_r25);
    else {
        CPy_TypeError("int", cpy_r_r25); cpy_r_r26 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 35, CPyStatic_graph_utils___globals);
        goto CPyL159;
    }
    cpy_r_r27 = CPyTagged_StealAsObject(cpy_r_r26);
    cpy_r_r28 = PyList_Append(cpy_r_r22, cpy_r_r27);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 35, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    cpy_r_r30 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_edges;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "edges", 37, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r30);
CPyL23: ;
    cpy_r_r31 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_v;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "v", 37, CPyStatic_graph_utils___globals);
        goto CPyL161;
    }
    CPy_INCREF(cpy_r_r31);
CPyL24: ;
    cpy_r_r32 = CPyDict_GetItem(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 37, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    if (likely(PyList_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/graph_utils.py", "dfs", 37, CPyStatic_graph_utils___globals, "list", cpy_r_r32);
        goto CPyL156;
    }
    if (((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__0);
    }
    ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__0 = cpy_r_r33;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", -1, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__1 = 0;
    cpy_r_r35 = 1;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", -1, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
CPyL28: ;
    cpy_r_r36 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__0;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "__mypyc_temp__0", 37, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r36);
CPyL29: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r36)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    CPy_DECREF(cpy_r_r36);
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__1;
    if (unlikely(cpy_r_r40 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "__mypyc_temp__1", 37, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
CPyL30: ;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r40 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r41) goto CPyL162;
    cpy_r_r42 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__0;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "__mypyc_temp__0", 37, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r42);
CPyL32: ;
    cpy_r_r43 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__1;
    if (unlikely(cpy_r_r43 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "__mypyc_temp__1", 37, CPyStatic_graph_utils___globals);
        goto CPyL163;
    }
CPyL33: ;
    cpy_r_r44 = CPyList_GetItemUnsafe(cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    if (((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_w != NULL) {
        CPy_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_w);
    }
    ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_w = cpy_r_r44;
    cpy_r_r45 = 1;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 37, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    cpy_r_r46 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_w;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "w", 38, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r46);
CPyL35: ;
    cpy_r_r47 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_index;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "index", 38, CPyStatic_graph_utils___globals);
        goto CPyL164;
    }
    CPy_INCREF(cpy_r_r47);
CPyL36: ;
    cpy_r_r48 = PyDict_Contains(cpy_r_r47, cpy_r_r46);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 38, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    cpy_r_r50 = cpy_r_r48;
    cpy_r_r51 = cpy_r_r50 ^ 1;
    if (!cpy_r_r51) goto CPyL75;
    cpy_r_r52 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_w;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "w", 39, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r52);
CPyL39: ;
    PyObject *cpy_r_r53[1] = {cpy_r_r52};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = _PyObject_Vectorcall(cpy_r_dfs, cpy_r_r54, 1, 0);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 39, CPyStatic_graph_utils___globals);
        goto CPyL165;
    }
    CPy_DECREF(cpy_r_r52);
    cpy_r_r56 = PyObject_GetIter(cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 39, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    if (((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__2);
    }
    ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__2 = cpy_r_r56;
    cpy_r_r57 = 1;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", -1, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    cpy_r_r58 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "__mypyc_temp__2", -1, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r58);
CPyL43: ;
    cpy_r_r59 = CPyIter_Next(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (cpy_r_r59 != NULL) goto CPyL46;
    cpy_r_r60 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 39, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    cpy_r_r61 = cpy_r_r60;
    CPy_DECREF(cpy_r_r61);
    goto CPyL93;
CPyL46: ;
    cpy_r_r62 = cpy_r_r59;
CPyL47: ;
    if (((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__ = 2;
    cpy_r_r63 = 1;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 39, CPyStatic_graph_utils___globals);
        goto CPyL166;
    } else
        goto CPyL167;
CPyL48: ;
    return cpy_r_r62;
CPyL49: ;
    cpy_r_r64 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r65 = cpy_r_type != cpy_r_r64;
    if (!cpy_r_r65) goto CPyL52;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 39, CPyStatic_graph_utils___globals);
        goto CPyL53;
    } else
        goto CPyL168;
CPyL51: ;
    CPy_Unreachable();
CPyL52: ;
    CPy_INCREF(cpy_r_arg);
    cpy_r_r66 = cpy_r_arg;
    goto CPyL70;
CPyL53: ;
    cpy_r_r67 = CPy_CatchError();
    if (((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__3.f0 != NULL) {
        CPy_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__3.f0);
        CPy_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__3.f1);
        CPy_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__3.f2);
    }
    ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__3 = cpy_r_r67;
    cpy_r_r68 = 1;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", -1, CPyStatic_graph_utils___globals);
        goto CPyL169;
    }
    cpy_r_r69 = (PyObject **)&cpy_r_r1;
    cpy_r_r70 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "__mypyc_temp__2", -1, CPyStatic_graph_utils___globals);
        goto CPyL169;
    }
    CPy_INCREF(cpy_r_r70);
CPyL55: ;
    cpy_r_r71 = CPy_YieldFromErrorHandle(cpy_r_r70, cpy_r_r69);
    CPy_DecRef(cpy_r_r70);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 39, CPyStatic_graph_utils___globals);
        goto CPyL169;
    }
    if (cpy_r_r71) goto CPyL62;
    if (cpy_r_r1 == NULL) {
        goto CPyL170;
    } else
        goto CPyL60;
CPyL58: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r72 = 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", -1, CPyStatic_graph_utils___globals);
        goto CPyL67;
    } else
        goto CPyL171;
CPyL59: ;
    CPy_Unreachable();
CPyL60: ;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r62 = cpy_r_r1;
    cpy_r_r73 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r73.f0 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "__mypyc_temp__3", -1, CPyStatic_graph_utils___globals);
        goto CPyL172;
    }
    CPy_INCREF(cpy_r_r73.f0);
    CPy_INCREF(cpy_r_r73.f1);
    CPy_INCREF(cpy_r_r73.f2);
CPyL61: ;
    CPy_RestoreExcInfo(cpy_r_r73);
    CPy_DecRef(cpy_r_r73.f0);
    CPy_DecRef(cpy_r_r73.f1);
    CPy_DecRef(cpy_r_r73.f2);
    goto CPyL47;
CPyL62: ;
    if (cpy_r_r1 == NULL) {
        goto CPyL173;
    } else
        goto CPyL65;
CPyL63: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r74 = 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", -1, CPyStatic_graph_utils___globals);
        goto CPyL67;
    } else
        goto CPyL174;
CPyL64: ;
    CPy_Unreachable();
CPyL65: ;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r61 = cpy_r_r1;
    CPy_DecRef(cpy_r_r61);
    cpy_r_r75 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r75.f0 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "__mypyc_temp__3", -1, CPyStatic_graph_utils___globals);
        goto CPyL169;
    }
    CPy_INCREF(cpy_r_r75.f0);
    CPy_INCREF(cpy_r_r75.f1);
    CPy_INCREF(cpy_r_r75.f2);
CPyL66: ;
    CPy_RestoreExcInfo(cpy_r_r75);
    CPy_DecRef(cpy_r_r75.f0);
    CPy_DecRef(cpy_r_r75.f1);
    CPy_DecRef(cpy_r_r75.f2);
    goto CPyL93;
CPyL67: ;
    cpy_r_r76 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r76.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__3' of 'dfs_strongly_connected_components_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r76.f0);
        CPy_INCREF(cpy_r_r76.f1);
        CPy_INCREF(cpy_r_r76.f2);
    }
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r76.f0 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", -1, CPyStatic_graph_utils___globals);
        goto CPyL150;
    }
CPyL68: ;
    CPy_RestoreExcInfo(cpy_r_r76);
    CPy_DecRef(cpy_r_r76.f0);
    CPy_DecRef(cpy_r_r76.f1);
    CPy_DecRef(cpy_r_r76.f2);
    cpy_r_r77 = CPy_KeepPropagating();
    if (!cpy_r_r77) goto CPyL150;
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r78 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "__mypyc_temp__2", -1, CPyStatic_graph_utils___globals);
        goto CPyL175;
    }
    CPy_INCREF(cpy_r_r78);
CPyL71: ;
    cpy_r_r79 = CPyIter_Send(cpy_r_r78, cpy_r_r66);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r66);
    if (cpy_r_r79 == NULL) goto CPyL73;
    cpy_r_r62 = cpy_r_r79;
    goto CPyL47;
CPyL73: ;
    cpy_r_r80 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 39, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    cpy_r_r61 = cpy_r_r80;
    CPy_DECREF(cpy_r_r61);
    goto CPyL93;
CPyL75: ;
    cpy_r_r81 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_w;
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "w", 40, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r81);
CPyL76: ;
    cpy_r_r82 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_identified;
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "identified", 40, CPyStatic_graph_utils___globals);
        goto CPyL176;
    }
    CPy_INCREF(cpy_r_r82);
CPyL77: ;
    cpy_r_r83 = PySet_Contains(cpy_r_r82, cpy_r_r81);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 40, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    cpy_r_r85 = cpy_r_r83;
    cpy_r_r86 = cpy_r_r85 ^ 1;
    if (!cpy_r_r86) goto CPyL93;
CPyL79: ;
    cpy_r_r87 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_index;
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "index", 41, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r87);
CPyL80: ;
    cpy_r_r88 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_w;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "w", 41, CPyStatic_graph_utils___globals);
        goto CPyL177;
    }
    CPy_INCREF(cpy_r_r88);
CPyL81: ;
    cpy_r_r89 = CPyDict_GetItem(cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 41, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    if (likely(PyLong_Check(cpy_r_r89)))
        cpy_r_r90 = CPyTagged_FromObject(cpy_r_r89);
    else {
        CPy_TypeError("int", cpy_r_r89); cpy_r_r90 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 41, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    cpy_r_r91 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_boundaries;
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "boundaries", 41, CPyStatic_graph_utils___globals);
        goto CPyL178;
    }
    CPy_INCREF(cpy_r_r91);
CPyL84: ;
    cpy_r_r92 = CPyList_GetItemShortBorrow(cpy_r_r91, -2);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 41, CPyStatic_graph_utils___globals);
        goto CPyL179;
    }
    if (likely(PyLong_Check(cpy_r_r92)))
        cpy_r_r93 = CPyTagged_FromObject(cpy_r_r92);
    else {
        CPy_TypeError("int", cpy_r_r92); cpy_r_r93 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r93 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 41, CPyStatic_graph_utils___globals);
        goto CPyL179;
    }
    cpy_r_r94 = cpy_r_r90 & 1;
    cpy_r_r95 = cpy_r_r94 != 0;
    if (cpy_r_r95) goto CPyL180;
    cpy_r_r96 = cpy_r_r93 & 1;
    cpy_r_r97 = cpy_r_r96 != 0;
    CPy_DECREF(cpy_r_r91);
    if (!cpy_r_r97) goto CPyL89;
CPyL88: ;
    cpy_r_r98 = CPyTagged_IsLt_(cpy_r_r90, cpy_r_r93);
    CPyTagged_DECREF(cpy_r_r90);
    CPyTagged_DECREF(cpy_r_r93);
    if (cpy_r_r98) {
        goto CPyL90;
    } else
        goto CPyL93;
CPyL89: ;
    cpy_r_r99 = (Py_ssize_t)cpy_r_r90 < (Py_ssize_t)cpy_r_r93;
    CPyTagged_DECREF(cpy_r_r90);
    CPyTagged_DECREF(cpy_r_r93);
    if (!cpy_r_r99) goto CPyL93;
CPyL90: ;
    cpy_r_r100 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_boundaries;
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "boundaries", 42, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r100);
CPyL91: ;
    cpy_r_r101 = CPyList_PopLast(cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 42, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    if (likely(PyLong_Check(cpy_r_r101)))
        cpy_r_r102 = CPyTagged_FromObject(cpy_r_r101);
    else {
        CPy_TypeError("int", cpy_r_r101); cpy_r_r102 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 42, CPyStatic_graph_utils___globals);
        goto CPyL156;
    } else
        goto CPyL181;
CPyL93: ;
    cpy_r_r103 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__1;
    if (unlikely(cpy_r_r103 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "__mypyc_temp__1", 37, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
CPyL94: ;
    cpy_r_r104 = cpy_r_r103 + 2;
    ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__1 = cpy_r_r104;
    cpy_r_r105 = 1;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 37, CPyStatic_graph_utils___globals);
        goto CPyL156;
    } else
        goto CPyL28;
CPyL95: ;
    cpy_r_r106 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_boundaries;
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "boundaries", 44, CPyStatic_graph_utils___globals);
        goto CPyL182;
    }
    CPy_INCREF(cpy_r_r106);
CPyL96: ;
    cpy_r_r107 = CPyList_GetItemShort(cpy_r_r106, -2);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 44, CPyStatic_graph_utils___globals);
        goto CPyL182;
    }
    if (likely(PyLong_Check(cpy_r_r107)))
        cpy_r_r108 = CPyTagged_FromObject(cpy_r_r107);
    else {
        CPy_TypeError("int", cpy_r_r107); cpy_r_r108 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 44, CPyStatic_graph_utils___globals);
        goto CPyL182;
    }
    cpy_r_r109 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_index;
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "index", 44, CPyStatic_graph_utils___globals);
        goto CPyL183;
    }
    CPy_INCREF(cpy_r_r109);
CPyL99: ;
    cpy_r_r110 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_v;
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "v", 44, CPyStatic_graph_utils___globals);
        goto CPyL184;
    }
    CPy_INCREF(cpy_r_r110);
CPyL100: ;
    cpy_r_r111 = CPyDict_GetItem(cpy_r_r109, cpy_r_r110);
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 44, CPyStatic_graph_utils___globals);
        goto CPyL183;
    }
    if (likely(PyLong_Check(cpy_r_r111)))
        cpy_r_r112 = CPyTagged_FromObject(cpy_r_r111);
    else {
        CPy_TypeError("int", cpy_r_r111); cpy_r_r112 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 44, CPyStatic_graph_utils___globals);
        goto CPyL183;
    }
    cpy_r_r113 = cpy_r_r108 & 1;
    cpy_r_r114 = cpy_r_r113 != 0;
    if (!cpy_r_r114) goto CPyL104;
    cpy_r_r115 = CPyTagged_IsEq_(cpy_r_r108, cpy_r_r112);
    CPyTagged_DECREF(cpy_r_r108);
    CPyTagged_DECREF(cpy_r_r112);
    if (cpy_r_r115) {
        goto CPyL105;
    } else
        goto CPyL185;
CPyL104: ;
    cpy_r_r116 = cpy_r_r108 == cpy_r_r112;
    CPyTagged_DECREF(cpy_r_r108);
    CPyTagged_DECREF(cpy_r_r112);
    if (!cpy_r_r116) goto CPyL185;
CPyL105: ;
    cpy_r_r117 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_boundaries;
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "boundaries", 45, CPyStatic_graph_utils___globals);
        goto CPyL182;
    }
    CPy_INCREF(cpy_r_r117);
CPyL106: ;
    cpy_r_r118 = CPyList_PopLast(cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 45, CPyStatic_graph_utils___globals);
        goto CPyL182;
    }
    if (likely(PyLong_Check(cpy_r_r118)))
        cpy_r_r119 = CPyTagged_FromObject(cpy_r_r118);
    else {
        CPy_TypeError("int", cpy_r_r118); cpy_r_r119 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 45, CPyStatic_graph_utils___globals);
        goto CPyL182;
    } else
        goto CPyL186;
CPyL108: ;
    cpy_r_r120 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_stack;
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "stack", 46, CPyStatic_graph_utils___globals);
        goto CPyL182;
    }
    CPy_INCREF(cpy_r_r120);
CPyL109: ;
    cpy_r_r121 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_index;
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "index", 46, CPyStatic_graph_utils___globals);
        goto CPyL187;
    }
    CPy_INCREF(cpy_r_r121);
CPyL110: ;
    cpy_r_r122 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_v;
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "v", 46, CPyStatic_graph_utils___globals);
        goto CPyL188;
    }
    CPy_INCREF(cpy_r_r122);
CPyL111: ;
    cpy_r_r123 = CPyDict_GetItem(cpy_r_r121, cpy_r_r122);
    CPy_DECREF(cpy_r_r121);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 46, CPyStatic_graph_utils___globals);
        goto CPyL187;
    }
    if (likely(PyLong_Check(cpy_r_r123)))
        cpy_r_r124 = CPyTagged_FromObject(cpy_r_r123);
    else {
        CPy_TypeError("int", cpy_r_r123); cpy_r_r124 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r124 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 46, CPyStatic_graph_utils___globals);
        goto CPyL187;
    }
    cpy_r_r125 = CPyList_GetSlice(cpy_r_r120, cpy_r_r124, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r120);
    CPyTagged_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 46, CPyStatic_graph_utils___globals);
        goto CPyL182;
    }
    if (likely(PyList_Check(cpy_r_r125)))
        cpy_r_r126 = cpy_r_r125;
    else {
        CPy_TypeErrorTraceback("mypy/graph_utils.py", "dfs", 46, CPyStatic_graph_utils___globals, "list", cpy_r_r125);
        goto CPyL182;
    }
    cpy_r_r127 = PySet_New(cpy_r_r126);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 46, CPyStatic_graph_utils___globals);
        goto CPyL182;
    }
    if (((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_scc != NULL) {
        CPy_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_scc);
    }
    ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_scc = cpy_r_r127;
    cpy_r_r128 = 1;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 46, CPyStatic_graph_utils___globals);
        goto CPyL182;
    }
    cpy_r_r129 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_stack;
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "stack", 47, CPyStatic_graph_utils___globals);
        goto CPyL182;
    }
    CPy_INCREF(cpy_r_r129);
CPyL118: ;
    cpy_r_r130 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_index;
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "index", 47, CPyStatic_graph_utils___globals);
        goto CPyL189;
    }
    CPy_INCREF(cpy_r_r130);
CPyL119: ;
    cpy_r_r131 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_v;
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "v", 47, CPyStatic_graph_utils___globals);
        goto CPyL190;
    }
    CPy_INCREF(cpy_r_r131);
CPyL120: ;
    cpy_r_r132 = CPyDict_GetItem(cpy_r_r130, cpy_r_r131);
    CPy_DECREF(cpy_r_r130);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 47, CPyStatic_graph_utils___globals);
        goto CPyL189;
    }
    if (likely(PyLong_Check(cpy_r_r132)))
        cpy_r_r133 = CPyTagged_FromObject(cpy_r_r132);
    else {
        CPy_TypeError("int", cpy_r_r132); cpy_r_r133 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r133 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 47, CPyStatic_graph_utils___globals);
        goto CPyL189;
    }
    cpy_r_r134 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r135 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r136 = CPyTagged_StealAsObject(cpy_r_r133);
    cpy_r_r137 = PySlice_New(cpy_r_r136, cpy_r_r134, cpy_r_r135);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 47, CPyStatic_graph_utils___globals);
        goto CPyL189;
    }
    cpy_r_r138 = PyObject_DelItem(cpy_r_r129, cpy_r_r137);
    CPy_DECREF(cpy_r_r129);
    CPy_DECREF(cpy_r_r137);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 47, CPyStatic_graph_utils___globals);
        goto CPyL182;
    }
    cpy_r_r140 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r4)->_identified;
    if (unlikely(cpy_r_r140 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'identified' of 'strongly_connected_components_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r140);
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 48, CPyStatic_graph_utils___globals);
        goto CPyL191;
    }
CPyL125: ;
    cpy_r_r141 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_scc;
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "scc", 48, CPyStatic_graph_utils___globals);
        goto CPyL192;
    }
    CPy_INCREF(cpy_r_r141);
CPyL126: ;
    cpy_r_r142 = _PySet_Update(cpy_r_r140, cpy_r_r141);
    CPy_DECREF(cpy_r_r140);
    CPy_DECREF(cpy_r_r141);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 48, CPyStatic_graph_utils___globals);
        goto CPyL191;
    }
    cpy_r_r144 = ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_scc;
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_env", "scc", 49, CPyStatic_graph_utils___globals);
        goto CPyL191;
    }
    CPy_INCREF(cpy_r_r144);
CPyL128: ;
    if (((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__ = 4;
    cpy_r_r145 = 1;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 49, CPyStatic_graph_utils___globals);
        goto CPyL193;
    }
    return cpy_r_r144;
CPyL130: ;
    cpy_r_r146 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r147 = cpy_r_type != cpy_r_r146;
    if (cpy_r_r147) {
        goto CPyL194;
    } else
        goto CPyL133;
CPyL131: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 49, CPyStatic_graph_utils___globals);
        goto CPyL150;
    }
    CPy_Unreachable();
CPyL133: ;
    cpy_r_r148 = Py_None;
    if (((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__ = -2;
    cpy_r_r149 = 1;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 32, CPyStatic_graph_utils___globals);
        goto CPyL150;
    }
    CPyGen_SetStopIterationValue(cpy_r_r148);
    if (!0) goto CPyL150;
    CPy_Unreachable();
CPyL136: ;
    cpy_r_r150 = cpy_r_r3 & 1;
    cpy_r_r151 = cpy_r_r150 == 0;
    if (!cpy_r_r151) goto CPyL138;
    cpy_r_r152 = cpy_r_r3 == 0;
    cpy_r_r153 = cpy_r_r152;
    goto CPyL139;
CPyL138: ;
    cpy_r_r154 = CPyTagged_IsEq_(cpy_r_r3, 0);
    cpy_r_r153 = cpy_r_r154;
CPyL139: ;
    if (cpy_r_r153) goto CPyL195;
    cpy_r_r155 = cpy_r_r3 & 1;
    cpy_r_r156 = cpy_r_r155 == 0;
    if (!cpy_r_r156) goto CPyL142;
    cpy_r_r157 = cpy_r_r3 == 2;
    cpy_r_r158 = cpy_r_r157;
    goto CPyL143;
CPyL142: ;
    cpy_r_r159 = CPyTagged_IsEq_(cpy_r_r3, 2);
    cpy_r_r158 = cpy_r_r159;
CPyL143: ;
    if (cpy_r_r158) {
        goto CPyL196;
    } else
        goto CPyL197;
CPyL144: ;
    cpy_r_r160 = cpy_r_r3 & 1;
    cpy_r_r161 = cpy_r_r160 == 0;
    if (!cpy_r_r161) goto CPyL146;
    cpy_r_r162 = cpy_r_r3 == 4;
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r163 = cpy_r_r162;
    goto CPyL147;
CPyL146: ;
    cpy_r_r164 = CPyTagged_IsEq_(cpy_r_r3, 4);
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r163 = cpy_r_r164;
CPyL147: ;
    if (cpy_r_r163) {
        goto CPyL130;
    } else
        goto CPyL198;
CPyL148: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r165 = 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 32, CPyStatic_graph_utils___globals);
        goto CPyL150;
    }
    CPy_Unreachable();
CPyL150: ;
    cpy_r_r166 = NULL;
    return cpy_r_r166;
CPyL151: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL150;
CPyL152: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL150;
CPyL153: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r3);
    goto CPyL150;
CPyL154: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL150;
CPyL155: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_dfs);
    goto CPyL7;
CPyL156: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    goto CPyL150;
CPyL157: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    CPy_DecRef(cpy_r_r13);
    goto CPyL150;
CPyL158: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    CPy_DecRef(cpy_r_r18);
    goto CPyL150;
CPyL159: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    CPy_DecRef(cpy_r_r22);
    goto CPyL150;
CPyL160: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    goto CPyL150;
CPyL161: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    CPy_DecRef(cpy_r_r30);
    goto CPyL150;
CPyL162: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_dfs);
    goto CPyL95;
CPyL163: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    CPy_DecRef(cpy_r_r42);
    goto CPyL150;
CPyL164: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    CPy_DecRef(cpy_r_r46);
    goto CPyL150;
CPyL165: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    CPy_DecRef(cpy_r_r52);
    goto CPyL150;
CPyL166: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL53;
CPyL167: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_dfs);
    goto CPyL48;
CPyL168: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_dfs);
    goto CPyL51;
CPyL169: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    goto CPyL67;
CPyL170: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    goto CPyL58;
CPyL171: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL59;
CPyL172: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    CPy_DecRef(cpy_r_r62);
    goto CPyL67;
CPyL173: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    goto CPyL63;
CPyL174: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL64;
CPyL175: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    CPy_DecRef(cpy_r_r66);
    goto CPyL150;
CPyL176: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    CPy_DecRef(cpy_r_r81);
    goto CPyL150;
CPyL177: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    CPy_DecRef(cpy_r_r87);
    goto CPyL150;
CPyL178: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    CPyTagged_DecRef(cpy_r_r90);
    goto CPyL150;
CPyL179: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_dfs);
    CPyTagged_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_r91);
    goto CPyL150;
CPyL180: ;
    CPy_DECREF(cpy_r_r91);
    goto CPyL88;
CPyL181: ;
    CPyTagged_DECREF(cpy_r_r102);
    goto CPyL79;
CPyL182: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    goto CPyL150;
CPyL183: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r108);
    goto CPyL150;
CPyL184: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_r109);
    goto CPyL150;
CPyL185: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL133;
CPyL186: ;
    CPyTagged_DECREF(cpy_r_r119);
    goto CPyL108;
CPyL187: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r120);
    goto CPyL150;
CPyL188: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r121);
    goto CPyL150;
CPyL189: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r129);
    goto CPyL150;
CPyL190: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r130);
    goto CPyL150;
CPyL191: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL150;
CPyL192: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r140);
    goto CPyL150;
CPyL193: ;
    CPy_DecRef(cpy_r_r144);
    goto CPyL150;
CPyL194: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL131;
CPyL195: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL6;
CPyL196: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL49;
CPyL197: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_dfs);
    goto CPyL144;
CPyL198: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL148;
}

PyObject *CPyPy_graph_utils___dfs_strongly_connected_components_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_graph_utils___dfs_strongly_connected_components_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "dfs", 32, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___dfs_strongly_connected_components_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_graph_utils___dfs_strongly_connected_components_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_graph_utils___dfs_strongly_connected_components_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___dfs_strongly_connected_components_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.dfs_strongly_connected_components_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_graph_utils___dfs_strongly_connected_components_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "__next__", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___dfs_strongly_connected_components_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_graph_utils___dfs_strongly_connected_components_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_graph_utils___dfs_strongly_connected_components_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___dfs_strongly_connected_components_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.dfs_strongly_connected_components_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_graph_utils___dfs_strongly_connected_components_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "send", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___dfs_strongly_connected_components_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_graph_utils___dfs_strongly_connected_components_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___dfs_strongly_connected_components_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.dfs_strongly_connected_components_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_graph_utils___dfs_strongly_connected_components_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "__iter__", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___dfs_strongly_connected_components_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_graph_utils___dfs_strongly_connected_components_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_graph_utils___dfs_strongly_connected_components_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___dfs_strongly_connected_components_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.dfs_strongly_connected_components_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_graph_utils___dfs_strongly_connected_components_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "throw", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___dfs_strongly_connected_components_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_graph_utils___dfs_strongly_connected_components_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp2925 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp2925);
    PyObject *__tmp2926 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp2926);
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

PyObject *CPyPy_graph_utils___dfs_strongly_connected_components_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___dfs_strongly_connected_components_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.dfs_strongly_connected_components_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_graph_utils___dfs_strongly_connected_components_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "close", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___dfs_strongly_connected_components_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_v) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_dfs;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___graph_utils___dfs_strongly_connected_components_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "dfs_strongly_connected_components_obj", "__mypyc_env__", 32, CPyStatic_graph_utils___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r0)->_dfs;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "dfs", "strongly_connected_components_env", "dfs", -1, CPyStatic_graph_utils___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_dfs = cpy_r_r1;
    CPy_DECREF(cpy_r_dfs);
    cpy_r_r2 = CPyDef_graph_utils___dfs_strongly_connected_components_env();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 32, CPyStatic_graph_utils___globals);
        goto CPyL10;
    }
    if (((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 32, CPyStatic_graph_utils___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_v);
    if (((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_v != NULL) {
        CPy_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_v);
    }
    ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->_v = cpy_r_v;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 32, CPyStatic_graph_utils___globals);
        goto CPyL11;
    }
    cpy_r_r5 = CPyDef_graph_utils___dfs_strongly_connected_components_gen();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 32, CPyStatic_graph_utils___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r2);
    if (((mypy___graph_utils___dfs_strongly_connected_components_genObject *)cpy_r_r5)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_genObject *)cpy_r_r5)->___mypyc_env__);
    }
    ((mypy___graph_utils___dfs_strongly_connected_components_genObject *)cpy_r_r5)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 32, CPyStatic_graph_utils___globals);
        goto CPyL12;
    }
    if (((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___graph_utils___dfs_strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__ = 0;
    cpy_r_r7 = 1;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/graph_utils.py", "dfs", 32, CPyStatic_graph_utils___globals);
        goto CPyL13;
    }
    return cpy_r_r5;
CPyL9: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL9;
}

PyObject *CPyPy_graph_utils___dfs_strongly_connected_components_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"v", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_v;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_v)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_v = obj_v;
    PyObject *retval = CPyDef_graph_utils___dfs_strongly_connected_components_obj_____call__(arg___mypyc_self__, arg_v);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "dfs", 32, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___strongly_connected_components_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    tuple_T3OOO cpy_r_r46;
    char cpy_r_r47;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    tuple_T3OOO cpy_r_r52;
    char cpy_r_r53;
    tuple_T3OOO cpy_r_r54;
    tuple_T3OOO cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    int64_t cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    int64_t cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((mypy___graph_utils___strongly_connected_components_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "strongly_connected_components", "strongly_connected_components_gen", "__mypyc_env__", 10, CPyStatic_graph_utils___globals);
        goto CPyL80;
    }
    CPy_INCREF(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/graph_utils.py", "strongly_connected_components", "strongly_connected_components_env", "__mypyc_next_label__", 10, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    CPyTagged_INCREF(cpy_r_r3);
    goto CPyL69;
CPyL2: ;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_type != cpy_r_r4;
    if (cpy_r_r5) {
        goto CPyL82;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 10, CPyStatic_graph_utils___globals);
        goto CPyL79;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = PySet_New(NULL);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 27, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_identified != NULL) {
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_identified);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_identified = cpy_r_r6;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 27, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 28, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_stack != NULL) {
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_stack);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_stack = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 28, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    cpy_r_r10 = PyDict_New();
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 29, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_index != NULL) {
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_index);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_index = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 29, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 30, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_boundaries != NULL) {
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_boundaries);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_boundaries = cpy_r_r12;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 30, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    cpy_r_r14 = CPyDef_graph_utils___dfs_strongly_connected_components_obj();
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 32, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r2);
    if (((mypy___graph_utils___dfs_strongly_connected_components_objObject *)cpy_r_r14)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___graph_utils___dfs_strongly_connected_components_objObject *)cpy_r_r14)->___mypyc_env__);
    }
    ((mypy___graph_utils___dfs_strongly_connected_components_objObject *)cpy_r_r14)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 32, CPyStatic_graph_utils___globals);
        goto CPyL83;
    }
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_dfs != NULL) {
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_dfs);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_dfs = cpy_r_r14;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 32, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    cpy_r_r17 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_vertices;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "strongly_connected_components", "strongly_connected_components_env", "vertices", 51, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r17);
CPyL17: ;
    cpy_r_r18 = PyObject_GetIter(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 51, CPyStatic_graph_utils___globals);
        goto CPyL84;
    }
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__4);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__4 = cpy_r_r17;
    cpy_r_r19 = 1;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", -1, CPyStatic_graph_utils___globals);
        goto CPyL85;
    }
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__5 != NULL) {
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__5);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__5 = cpy_r_r18;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", -1, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
CPyL20: ;
    cpy_r_r21 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__5;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "strongly_connected_components", "strongly_connected_components_env", "__mypyc_temp__5", 51, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r21);
CPyL21: ;
    cpy_r_r22 = PyIter_Next(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (cpy_r_r22 == NULL) goto CPyL86;
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_v != NULL) {
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_v);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_v = cpy_r_r22;
    cpy_r_r23 = 1;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 51, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    cpy_r_r24 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_v;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "strongly_connected_components", "strongly_connected_components_env", "v", 52, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r24);
CPyL24: ;
    cpy_r_r25 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_index;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "strongly_connected_components", "strongly_connected_components_env", "index", 52, CPyStatic_graph_utils___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r25);
CPyL25: ;
    cpy_r_r26 = PyDict_Contains(cpy_r_r25, cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 52, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    cpy_r_r28 = cpy_r_r26;
    cpy_r_r29 = cpy_r_r28 ^ 1;
    if (!cpy_r_r29) goto CPyL20;
    cpy_r_r30 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_v;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "strongly_connected_components", "strongly_connected_components_env", "v", 53, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r30);
CPyL28: ;
    cpy_r_r31 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->_dfs;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "strongly_connected_components", "strongly_connected_components_env", "dfs", 53, CPyStatic_graph_utils___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r31);
CPyL29: ;
    PyObject *cpy_r_r32[1] = {cpy_r_r30};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r31, cpy_r_r33, 1, 0);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 53, CPyStatic_graph_utils___globals);
        goto CPyL88;
    }
    CPy_DECREF(cpy_r_r30);
    cpy_r_r35 = PyObject_GetIter(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 53, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__6 != NULL) {
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__6);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__6 = cpy_r_r35;
    cpy_r_r36 = 1;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", -1, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    cpy_r_r37 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__6;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "strongly_connected_components", "strongly_connected_components_env", "__mypyc_temp__6", -1, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r37);
CPyL33: ;
    cpy_r_r38 = CPyIter_Next(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (cpy_r_r38 != NULL) goto CPyL36;
    cpy_r_r39 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 53, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    cpy_r_r40 = cpy_r_r39;
    CPy_DECREF(cpy_r_r40);
    goto CPyL20;
CPyL36: ;
    cpy_r_r41 = cpy_r_r38;
CPyL37: ;
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__ = 2;
    cpy_r_r42 = 1;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 53, CPyStatic_graph_utils___globals);
        goto CPyL89;
    } else
        goto CPyL90;
CPyL38: ;
    return cpy_r_r41;
CPyL39: ;
    cpy_r_r43 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r44 = cpy_r_type != cpy_r_r43;
    if (!cpy_r_r44) goto CPyL42;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 53, CPyStatic_graph_utils___globals);
        goto CPyL43;
    } else
        goto CPyL91;
CPyL41: ;
    CPy_Unreachable();
CPyL42: ;
    CPy_INCREF(cpy_r_arg);
    cpy_r_r45 = cpy_r_arg;
    goto CPyL60;
CPyL43: ;
    cpy_r_r46 = CPy_CatchError();
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__7.f0 != NULL) {
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__7.f0);
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__7.f1);
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__7.f2);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__7 = cpy_r_r46;
    cpy_r_r47 = 1;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", -1, CPyStatic_graph_utils___globals);
        goto CPyL92;
    }
    cpy_r_r48 = (PyObject **)&cpy_r_r1;
    cpy_r_r49 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__6;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "strongly_connected_components", "strongly_connected_components_env", "__mypyc_temp__6", -1, CPyStatic_graph_utils___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r49);
CPyL45: ;
    cpy_r_r50 = CPy_YieldFromErrorHandle(cpy_r_r49, cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 53, CPyStatic_graph_utils___globals);
        goto CPyL92;
    }
    if (cpy_r_r50) goto CPyL52;
    if (cpy_r_r1 != NULL) goto CPyL50;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", -1, CPyStatic_graph_utils___globals);
        goto CPyL57;
    } else
        goto CPyL93;
CPyL49: ;
    CPy_Unreachable();
CPyL50: ;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r41 = cpy_r_r1;
    cpy_r_r52 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__7;
    if (unlikely(cpy_r_r52.f0 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "strongly_connected_components", "strongly_connected_components_env", "__mypyc_temp__7", -1, CPyStatic_graph_utils___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r52.f0);
    CPy_INCREF(cpy_r_r52.f1);
    CPy_INCREF(cpy_r_r52.f2);
CPyL51: ;
    CPy_RestoreExcInfo(cpy_r_r52);
    CPy_DecRef(cpy_r_r52.f0);
    CPy_DecRef(cpy_r_r52.f1);
    CPy_DecRef(cpy_r_r52.f2);
    goto CPyL37;
CPyL52: ;
    if (cpy_r_r1 != NULL) goto CPyL55;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r53 = 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", -1, CPyStatic_graph_utils___globals);
        goto CPyL57;
    } else
        goto CPyL95;
CPyL54: ;
    CPy_Unreachable();
CPyL55: ;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r40 = cpy_r_r1;
    CPy_DecRef(cpy_r_r40);
    cpy_r_r54 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__7;
    if (unlikely(cpy_r_r54.f0 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "strongly_connected_components", "strongly_connected_components_env", "__mypyc_temp__7", -1, CPyStatic_graph_utils___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r54.f0);
    CPy_INCREF(cpy_r_r54.f1);
    CPy_INCREF(cpy_r_r54.f2);
CPyL56: ;
    CPy_RestoreExcInfo(cpy_r_r54);
    CPy_DecRef(cpy_r_r54.f0);
    CPy_DecRef(cpy_r_r54.f1);
    CPy_DecRef(cpy_r_r54.f2);
    goto CPyL20;
CPyL57: ;
    cpy_r_r55 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__7;
    if (unlikely(cpy_r_r55.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__7' of 'strongly_connected_components_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r55.f0);
        CPy_INCREF(cpy_r_r55.f1);
        CPy_INCREF(cpy_r_r55.f2);
    }
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r55.f0 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", -1, CPyStatic_graph_utils___globals);
        goto CPyL79;
    }
CPyL58: ;
    CPy_RestoreExcInfo(cpy_r_r55);
    CPy_DecRef(cpy_r_r55.f0);
    CPy_DecRef(cpy_r_r55.f1);
    CPy_DecRef(cpy_r_r55.f2);
    cpy_r_r56 = CPy_KeepPropagating();
    if (!cpy_r_r56) goto CPyL79;
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r57 = ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_temp__6;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "strongly_connected_components", "strongly_connected_components_env", "__mypyc_temp__6", -1, CPyStatic_graph_utils___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r57);
CPyL61: ;
    cpy_r_r58 = CPyIter_Send(cpy_r_r57, cpy_r_r45);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r45);
    if (cpy_r_r58 == NULL) goto CPyL63;
    cpy_r_r41 = cpy_r_r58;
    goto CPyL37;
CPyL63: ;
    cpy_r_r59 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 53, CPyStatic_graph_utils___globals);
        goto CPyL81;
    }
    cpy_r_r40 = cpy_r_r59;
    CPy_DECREF(cpy_r_r40);
    goto CPyL20;
CPyL65: ;
    cpy_r_r60 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 51, CPyStatic_graph_utils___globals);
        goto CPyL97;
    }
    cpy_r_r61 = Py_None;
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r2)->___mypyc_next_label__ = -2;
    cpy_r_r62 = 1;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 10, CPyStatic_graph_utils___globals);
        goto CPyL79;
    }
    CPyGen_SetStopIterationValue(cpy_r_r61);
    if (!0) goto CPyL79;
    CPy_Unreachable();
CPyL69: ;
    cpy_r_r63 = cpy_r_r3 & 1;
    cpy_r_r64 = cpy_r_r63 == 0;
    if (!cpy_r_r64) goto CPyL71;
    cpy_r_r65 = cpy_r_r3 == 0;
    cpy_r_r66 = cpy_r_r65;
    goto CPyL72;
CPyL71: ;
    cpy_r_r67 = CPyTagged_IsEq_(cpy_r_r3, 0);
    cpy_r_r66 = cpy_r_r67;
CPyL72: ;
    if (cpy_r_r66) goto CPyL98;
    cpy_r_r68 = cpy_r_r3 & 1;
    cpy_r_r69 = cpy_r_r68 == 0;
    if (!cpy_r_r69) goto CPyL75;
    cpy_r_r70 = cpy_r_r3 == 2;
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r71 = cpy_r_r70;
    goto CPyL76;
CPyL75: ;
    cpy_r_r72 = CPyTagged_IsEq_(cpy_r_r3, 2);
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r71 = cpy_r_r72;
CPyL76: ;
    if (cpy_r_r71) {
        goto CPyL39;
    } else
        goto CPyL99;
CPyL77: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r73 = 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 10, CPyStatic_graph_utils___globals);
        goto CPyL79;
    }
    CPy_Unreachable();
CPyL79: ;
    cpy_r_r74 = NULL;
    return cpy_r_r74;
CPyL80: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL79;
CPyL81: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL79;
CPyL82: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL3;
CPyL83: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r14);
    goto CPyL79;
CPyL84: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r17);
    goto CPyL79;
CPyL85: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r18);
    goto CPyL79;
CPyL86: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL65;
CPyL87: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r24);
    goto CPyL79;
CPyL88: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r30);
    goto CPyL79;
CPyL89: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL43;
CPyL90: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL38;
CPyL91: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL41;
CPyL92: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL57;
CPyL93: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL49;
CPyL94: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r41);
    goto CPyL57;
CPyL95: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL54;
CPyL96: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r45);
    goto CPyL79;
CPyL97: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL79;
CPyL98: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL2;
CPyL99: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL77;
}

PyObject *CPyPy_graph_utils___strongly_connected_components_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_graph_utils___strongly_connected_components_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 10, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___strongly_connected_components_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_graph_utils___strongly_connected_components_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_graph_utils___strongly_connected_components_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___strongly_connected_components_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.strongly_connected_components_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_graph_utils___strongly_connected_components_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "__next__", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___strongly_connected_components_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_graph_utils___strongly_connected_components_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_graph_utils___strongly_connected_components_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___strongly_connected_components_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.strongly_connected_components_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_graph_utils___strongly_connected_components_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "send", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___strongly_connected_components_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_graph_utils___strongly_connected_components_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___strongly_connected_components_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.strongly_connected_components_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_graph_utils___strongly_connected_components_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "__iter__", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___strongly_connected_components_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_graph_utils___strongly_connected_components_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_graph_utils___strongly_connected_components_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___strongly_connected_components_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.strongly_connected_components_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_graph_utils___strongly_connected_components_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "throw", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___strongly_connected_components_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_graph_utils___strongly_connected_components_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp2927 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp2927);
    PyObject *__tmp2928 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp2928);
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

PyObject *CPyPy_graph_utils___strongly_connected_components_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___strongly_connected_components_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.strongly_connected_components_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_graph_utils___strongly_connected_components_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "close", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___strongly_connected_components(PyObject *cpy_r_vertices, PyObject *cpy_r_edges) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_graph_utils___strongly_connected_components_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 10, CPyStatic_graph_utils___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_vertices);
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r0)->_vertices != NULL) {
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r0)->_vertices);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r0)->_vertices = cpy_r_vertices;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 10, CPyStatic_graph_utils___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_edges);
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r0)->_edges != NULL) {
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r0)->_edges);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r0)->_edges = cpy_r_edges;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 10, CPyStatic_graph_utils___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_graph_utils___strongly_connected_components_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 10, CPyStatic_graph_utils___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___graph_utils___strongly_connected_components_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___graph_utils___strongly_connected_components_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___graph_utils___strongly_connected_components_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 10, CPyStatic_graph_utils___globals);
        goto CPyL9;
    }
    if (((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___graph_utils___strongly_connected_components_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 10, CPyStatic_graph_utils___globals);
        goto CPyL10;
    }
    return cpy_r_r3;
CPyL7: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
}

PyObject *CPyPy_graph_utils___strongly_connected_components(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"vertices", "edges", 0};
    static CPyArg_Parser parser = {"OO:strongly_connected_components", kwlist, 0};
    PyObject *obj_vertices;
    PyObject *obj_edges;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_vertices, &obj_edges)) {
        return NULL;
    }
    PyObject *arg_vertices = obj_vertices;
    PyObject *arg_edges;
    if (likely(PyDict_Check(obj_edges)))
        arg_edges = obj_edges;
    else {
        CPy_TypeError("dict", obj_edges); 
        goto fail;
    }
    PyObject *retval = CPyDef_graph_utils___strongly_connected_components(arg_vertices, arg_edges);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "strongly_connected_components", 10, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___prepare_sccs(PyObject *cpy_r_sccs, PyObject *cpy_r_edges) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_scc;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_sccsmap;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_data;
    CPyTagged cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_scc_2;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_deps;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_v_2;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 60, CPyStatic_graph_utils___globals);
        goto CPyL31;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_sccs)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL10;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_sccs, cpy_r_r1);
    if (likely(PySet_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/graph_utils.py", "prepare_sccs", 60, CPyStatic_graph_utils___globals, "set", cpy_r_r6);
        goto CPyL32;
    }
    cpy_r_scc = cpy_r_r7;
    cpy_r_r8 = PyObject_GetIter(cpy_r_scc);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 60, CPyStatic_graph_utils___globals);
        goto CPyL33;
    }
CPyL5: ;
    cpy_r_r9 = PyIter_Next(cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL34;
    cpy_r_v = cpy_r_r9;
    cpy_r_r10 = PyFrozenSet_New(cpy_r_scc);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 60, CPyStatic_graph_utils___globals);
        goto CPyL35;
    }
    cpy_r_r11 = CPyDict_SetItem(cpy_r_r0, cpy_r_v, cpy_r_r10);
    CPy_DECREF(cpy_r_v);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 60, CPyStatic_graph_utils___globals);
        goto CPyL36;
    } else
        goto CPyL5;
CPyL8: ;
    cpy_r_r13 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 60, CPyStatic_graph_utils___globals);
        goto CPyL32;
    }
    cpy_r_r14 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r14;
    goto CPyL2;
CPyL10: ;
    cpy_r_sccsmap = cpy_r_r0;
    cpy_r_r15 = PyDict_New();
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 61, CPyStatic_graph_utils___globals);
        goto CPyL37;
    }
    cpy_r_data = cpy_r_r15;
    cpy_r_r16 = 0;
CPyL12: ;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_sccs)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = (Py_ssize_t)cpy_r_r16 < (Py_ssize_t)cpy_r_r19;
    if (!cpy_r_r20) goto CPyL38;
    cpy_r_r21 = CPyList_GetItemUnsafe(cpy_r_sccs, cpy_r_r16);
    if (likely(PySet_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/graph_utils.py", "prepare_sccs", 62, CPyStatic_graph_utils___globals, "set", cpy_r_r21);
        goto CPyL39;
    }
    cpy_r_scc_2 = cpy_r_r22;
    cpy_r_r23 = PySet_New(NULL);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 63, CPyStatic_graph_utils___globals);
        goto CPyL40;
    }
    cpy_r_deps = cpy_r_r23;
    cpy_r_r24 = PyObject_GetIter(cpy_r_scc_2);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 64, CPyStatic_graph_utils___globals);
        goto CPyL41;
    }
CPyL16: ;
    cpy_r_r25 = PyIter_Next(cpy_r_r24);
    if (cpy_r_r25 == NULL) goto CPyL42;
    cpy_r_v_2 = cpy_r_r25;
    cpy_r_r26 = CPyDict_GetItem(cpy_r_edges, cpy_r_v_2);
    CPy_DECREF(cpy_r_v_2);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 65, CPyStatic_graph_utils___globals);
        goto CPyL43;
    }
    if (likely(PyList_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/graph_utils.py", "prepare_sccs", 65, CPyStatic_graph_utils___globals, "list", cpy_r_r26);
        goto CPyL43;
    }
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_r27)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = PyList_New(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 65, CPyStatic_graph_utils___globals);
        goto CPyL44;
    }
    cpy_r_r31 = 0;
CPyL21: ;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_r27)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = (Py_ssize_t)cpy_r_r31 < (Py_ssize_t)cpy_r_r34;
    if (!cpy_r_r35) goto CPyL45;
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_r27, cpy_r_r31);
    cpy_r_x = cpy_r_r36;
    cpy_r_r37 = CPyDict_GetItem(cpy_r_sccsmap, cpy_r_x);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 65, CPyStatic_graph_utils___globals);
        goto CPyL46;
    }
    cpy_r_r38 = CPyList_SetItemUnsafe(cpy_r_r30, cpy_r_r31, cpy_r_r37);
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 65, CPyStatic_graph_utils___globals);
        goto CPyL46;
    }
    cpy_r_r39 = cpy_r_r31 + 2;
    cpy_r_r31 = cpy_r_r39;
    goto CPyL21;
CPyL25: ;
    cpy_r_r40 = _PySet_Update(cpy_r_deps, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 65, CPyStatic_graph_utils___globals);
        goto CPyL43;
    } else
        goto CPyL16;
CPyL26: ;
    cpy_r_r42 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 64, CPyStatic_graph_utils___globals);
        goto CPyL41;
    }
    cpy_r_r43 = PyFrozenSet_New(cpy_r_scc_2);
    CPy_DECREF(cpy_r_scc_2);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 66, CPyStatic_graph_utils___globals);
        goto CPyL47;
    }
    cpy_r_r44 = CPyDict_SetItem(cpy_r_data, cpy_r_r43, cpy_r_deps);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_deps);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 66, CPyStatic_graph_utils___globals);
        goto CPyL39;
    }
    cpy_r_r46 = cpy_r_r16 + 2;
    cpy_r_r16 = cpy_r_r46;
    goto CPyL12;
CPyL30: ;
    return cpy_r_data;
CPyL31: ;
    cpy_r_r47 = NULL;
    return cpy_r_r47;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_scc);
    goto CPyL31;
CPyL34: ;
    CPy_DECREF(cpy_r_scc);
    CPy_DECREF(cpy_r_r8);
    goto CPyL8;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_scc);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_v);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_scc);
    CPy_DecRef(cpy_r_r8);
    goto CPyL31;
CPyL37: ;
    CPy_DecRef(cpy_r_sccsmap);
    goto CPyL31;
CPyL38: ;
    CPy_DECREF(cpy_r_sccsmap);
    goto CPyL30;
CPyL39: ;
    CPy_DecRef(cpy_r_sccsmap);
    CPy_DecRef(cpy_r_data);
    goto CPyL31;
CPyL40: ;
    CPy_DecRef(cpy_r_sccsmap);
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_scc_2);
    goto CPyL31;
CPyL41: ;
    CPy_DecRef(cpy_r_sccsmap);
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_scc_2);
    CPy_DecRef(cpy_r_deps);
    goto CPyL31;
CPyL42: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL26;
CPyL43: ;
    CPy_DecRef(cpy_r_sccsmap);
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_scc_2);
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r24);
    goto CPyL31;
CPyL44: ;
    CPy_DecRef(cpy_r_sccsmap);
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_scc_2);
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    goto CPyL31;
CPyL45: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL25;
CPyL46: ;
    CPy_DecRef(cpy_r_sccsmap);
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_scc_2);
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r30);
    goto CPyL31;
CPyL47: ;
    CPy_DecRef(cpy_r_sccsmap);
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_deps);
    goto CPyL31;
}

PyObject *CPyPy_graph_utils___prepare_sccs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"sccs", "edges", 0};
    static CPyArg_Parser parser = {"OO:prepare_sccs", kwlist, 0};
    PyObject *obj_sccs;
    PyObject *obj_edges;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sccs, &obj_edges)) {
        return NULL;
    }
    PyObject *arg_sccs;
    if (likely(PyList_Check(obj_sccs)))
        arg_sccs = obj_sccs;
    else {
        CPy_TypeError("list", obj_sccs); 
        goto fail;
    }
    PyObject *arg_edges;
    if (likely(PyDict_Check(obj_edges)))
        arg_edges = obj_edges;
    else {
        CPy_TypeError("dict", obj_edges); 
        goto fail;
    }
    PyObject *retval = CPyDef_graph_utils___prepare_sccs(arg_sccs, arg_edges);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "prepare_sccs", 56, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___topsort_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    tuple_T4CIOO cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
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
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    int64_t cpy_r_r66;
    CPyTagged cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyTagged cpy_r_r72;
    tuple_T4CIOO cpy_r_r73;
    CPyTagged cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyTagged cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    int64_t cpy_r_r110;
    CPyTagged cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    CPyTagged cpy_r_r116;
    tuple_T4CIOO cpy_r_r117;
    CPyTagged cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    int32_t cpy_r_r128;
    char cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    CPyTagged cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    int32_t cpy_r_r147;
    char cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject **cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    CPyPtr cpy_r_r161;
    CPyPtr cpy_r_r162;
    CPyPtr cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject **cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    int64_t cpy_r_r173;
    char cpy_r_r174;
    char cpy_r_r175;
    char cpy_r_r176;
    char cpy_r_r177;
    int64_t cpy_r_r178;
    char cpy_r_r179;
    char cpy_r_r180;
    char cpy_r_r181;
    char cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    cpy_r_r0 = ((mypy___graph_utils___topsort_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_gen", "__mypyc_env__", 70, CPyStatic_graph_utils___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_next_label__", 70, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL137;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL149;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 70, CPyStatic_graph_utils___globals);
        goto CPyL147;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_data;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "data", 102, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    CPy_INCREF(cpy_r_r4);
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__8 != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__8);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__8 = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL150;
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__9 = 0;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL150;
    }
    cpy_r_r7 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__8;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__8", 102, CPyStatic_graph_utils___globals);
        goto CPyL150;
    }
    CPy_INCREF(cpy_r_r7);
CPyL9: ;
    cpy_r_r8 = PyDict_Size(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 << 1;
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__10 = cpy_r_r9;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL150;
    }
    cpy_r_r11 = CPyDict_GetItemsIter(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 102, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__11 != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__11);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__11 = cpy_r_r11;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
CPyL12: ;
    cpy_r_r13 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__11;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__11", 102, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r13);
CPyL13: ;
    cpy_r_r14 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__9;
    if (unlikely(cpy_r_r14 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__9", 102, CPyStatic_graph_utils___globals);
        goto CPyL151;
    }
CPyL14: ;
    cpy_r_r15 = CPyDict_NextItem(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15.f1;
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__9 = cpy_r_r16;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 102, CPyStatic_graph_utils___globals);
        goto CPyL152;
    }
    cpy_r_r18 = cpy_r_r15.f0;
    if (!cpy_r_r18) goto CPyL153;
    cpy_r_r19 = cpy_r_r15.f2;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = cpy_r_r15.f3;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r15.f2);
    CPy_DECREF(cpy_r_r15.f3);
    if (likely(PySet_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/graph_utils.py", "topsort", 102, CPyStatic_graph_utils___globals, "set", cpy_r_r20);
        goto CPyL154;
    }
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_k != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_k);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_k = cpy_r_r19;
    cpy_r_r22 = 1;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 102, CPyStatic_graph_utils___globals);
        goto CPyL155;
    }
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_v != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_v);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_v = cpy_r_r21;
    cpy_r_r23 = 1;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 102, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r24 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_v;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "v", 103, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r24);
CPyL20: ;
    cpy_r_r25 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_k;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "k", 103, CPyStatic_graph_utils___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r25);
CPyL21: ;
    cpy_r_r26 = PySet_Discard(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 103, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r28 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__8;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__8", 102, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r28);
CPyL23: ;
    cpy_r_r29 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__10;
    if (unlikely(cpy_r_r29 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__10", 102, CPyStatic_graph_utils___globals);
        goto CPyL157;
    }
CPyL24: ;
    cpy_r_r30 = CPyDict_CheckSize(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 102, CPyStatic_graph_utils___globals);
        goto CPyL148;
    } else
        goto CPyL12;
CPyL25: ;
    cpy_r_r31 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 102, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r32 = (PyObject *)&PySet_Type;
    cpy_r_r33 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_data;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "data", 104, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r33);
CPyL27: ;
    cpy_r_r34 = CPyDict_ValuesView(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r35 = CPyStatics[2631]; /* 'union' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals);
        goto CPyL158;
    }
    cpy_r_r37 = PyList_New(0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals);
        goto CPyL159;
    }
    cpy_r_r38 = CPyList_Extend(cpy_r_r37, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals);
        goto CPyL160;
    } else
        goto CPyL161;
CPyL31: ;
    cpy_r_r39 = PyList_AsTuple(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals);
        goto CPyL162;
    }
    cpy_r_r40 = PyDict_New();
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals);
        goto CPyL163;
    }
    cpy_r_r41 = PyObject_Call(cpy_r_r36, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    if (likely(PySet_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals, "set", cpy_r_r41);
        goto CPyL148;
    }
    cpy_r_r43 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_data;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "data", 104, CPyStatic_graph_utils___globals);
        goto CPyL164;
    }
    CPy_INCREF(cpy_r_r43);
CPyL36: ;
    cpy_r_r44 = CPyDict_KeysView(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals);
        goto CPyL164;
    }
    cpy_r_r45 = PySet_New(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals);
        goto CPyL164;
    }
    cpy_r_r46 = PyNumber_Subtract(cpy_r_r42, cpy_r_r45);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    if (likely(PySet_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals, "set", cpy_r_r46);
        goto CPyL148;
    }
    cpy_r_r48 = PyObject_GetIter(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals);
        goto CPyL165;
    }
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__12 != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__12);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__12 = cpy_r_r47;
    cpy_r_r49 = 1;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL166;
    }
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__13 != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__13);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__13 = cpy_r_r48;
    cpy_r_r50 = 1;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
CPyL43: ;
    cpy_r_r51 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__13;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__13", 104, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r51);
CPyL44: ;
    cpy_r_r52 = PyIter_Next(cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (cpy_r_r52 == NULL) goto CPyL50;
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_item != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_item);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_item = cpy_r_r52;
    cpy_r_r53 = 1;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r54 = PySet_New(NULL);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 105, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r55 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_data;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "data", 105, CPyStatic_graph_utils___globals);
        goto CPyL167;
    }
    CPy_INCREF(cpy_r_r55);
CPyL48: ;
    cpy_r_r56 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_item;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "item", 105, CPyStatic_graph_utils___globals);
        goto CPyL168;
    }
    CPy_INCREF(cpy_r_r56);
CPyL49: ;
    cpy_r_r57 = CPyDict_SetItem(cpy_r_r55, cpy_r_r56, cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 105, CPyStatic_graph_utils___globals);
        goto CPyL148;
    } else
        goto CPyL43;
CPyL50: ;
    cpy_r_r59 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 104, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
CPyL51: ;
    if (!1) goto CPyL122;
    cpy_r_r60 = PySet_New(NULL);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 107, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__14 != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__14);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__14 = cpy_r_r60;
    cpy_r_r61 = 1;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r62 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_data;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "data", 107, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r62);
CPyL55: ;
    CPy_INCREF(cpy_r_r62);
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__15 != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__15);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__15 = cpy_r_r62;
    cpy_r_r63 = 1;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL169;
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__16 = 0;
    cpy_r_r64 = 1;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL169;
    }
    cpy_r_r65 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__15;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__15", 107, CPyStatic_graph_utils___globals);
        goto CPyL169;
    }
    CPy_INCREF(cpy_r_r65);
CPyL58: ;
    cpy_r_r66 = PyDict_Size(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 << 1;
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__17 = cpy_r_r67;
    cpy_r_r68 = 1;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL169;
    }
    cpy_r_r69 = CPyDict_GetItemsIter(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 107, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__18 != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__18);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__18 = cpy_r_r69;
    cpy_r_r70 = 1;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
CPyL61: ;
    cpy_r_r71 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__18;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__18", 107, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r71);
CPyL62: ;
    cpy_r_r72 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__16;
    if (unlikely(cpy_r_r72 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__16", 107, CPyStatic_graph_utils___globals);
        goto CPyL170;
    }
CPyL63: ;
    cpy_r_r73 = CPyDict_NextItem(cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r74 = cpy_r_r73.f1;
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__16 = cpy_r_r74;
    cpy_r_r75 = 1;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 107, CPyStatic_graph_utils___globals);
        goto CPyL171;
    }
    cpy_r_r76 = cpy_r_r73.f0;
    if (!cpy_r_r76) goto CPyL172;
    cpy_r_r77 = cpy_r_r73.f2;
    CPy_INCREF(cpy_r_r77);
    cpy_r_r78 = cpy_r_r73.f3;
    CPy_INCREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r73.f2);
    CPy_DECREF(cpy_r_r73.f3);
    if (likely(PySet_Check(cpy_r_r78)))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/graph_utils.py", "topsort", 107, CPyStatic_graph_utils___globals, "set", cpy_r_r78);
        goto CPyL173;
    }
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_item != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_item);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_item = cpy_r_r77;
    cpy_r_r80 = 1;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 107, CPyStatic_graph_utils___globals);
        goto CPyL174;
    }
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_dep != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_dep);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_dep = cpy_r_r79;
    cpy_r_r81 = 1;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 107, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r82 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_dep;
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "dep", 107, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r82);
CPyL69: ;
    cpy_r_r83 = PyObject_Not(cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 107, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r85 = cpy_r_r83;
    if (!cpy_r_r85) goto CPyL74;
    cpy_r_r86 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_item;
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "item", 107, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r86);
CPyL72: ;
    cpy_r_r87 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__14;
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__14", -1, CPyStatic_graph_utils___globals);
        goto CPyL175;
    }
    CPy_INCREF(cpy_r_r87);
CPyL73: ;
    cpy_r_r88 = PySet_Add(cpy_r_r87, cpy_r_r86);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 107, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
CPyL74: ;
    cpy_r_r90 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__15;
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__15", 107, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r90);
CPyL75: ;
    cpy_r_r91 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__17;
    if (unlikely(cpy_r_r91 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__17", 107, CPyStatic_graph_utils___globals);
        goto CPyL176;
    }
CPyL76: ;
    cpy_r_r92 = CPyDict_CheckSize(cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 107, CPyStatic_graph_utils___globals);
        goto CPyL148;
    } else
        goto CPyL61;
CPyL77: ;
    cpy_r_r93 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 107, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r94 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__14;
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__14", -1, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r94);
CPyL79: ;
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_ready != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_ready);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_ready = cpy_r_r94;
    cpy_r_r95 = 1;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 107, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r96 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_ready;
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "ready", 108, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r96);
CPyL81: ;
    cpy_r_r97 = PyObject_IsTrue(cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 108, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r99 = cpy_r_r97;
    if (!cpy_r_r99) goto CPyL122;
    cpy_r_r100 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_ready;
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "ready", 110, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r100);
CPyL84: ;
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r101 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 110, CPyStatic_graph_utils___globals);
        goto CPyL177;
    }
    return cpy_r_r100;
CPyL86: ;
    cpy_r_r102 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r103 = cpy_r_type != cpy_r_r102;
    if (cpy_r_r103) {
        goto CPyL178;
    } else
        goto CPyL89;
CPyL87: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 110, CPyStatic_graph_utils___globals);
        goto CPyL147;
    }
    CPy_Unreachable();
CPyL89: ;
    cpy_r_r104 = PyDict_New();
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 111, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__19 != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__19);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__19 = cpy_r_r104;
    cpy_r_r105 = 1;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r106 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_data;
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "data", 111, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r106);
CPyL92: ;
    CPy_INCREF(cpy_r_r106);
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__20 != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__20);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__20 = cpy_r_r106;
    cpy_r_r107 = 1;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL179;
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__21 = 0;
    cpy_r_r108 = 1;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL179;
    }
    cpy_r_r109 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__20;
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__20", 111, CPyStatic_graph_utils___globals);
        goto CPyL179;
    }
    CPy_INCREF(cpy_r_r109);
CPyL95: ;
    cpy_r_r110 = PyDict_Size(cpy_r_r109);
    CPy_DECREF(cpy_r_r109);
    cpy_r_r111 = cpy_r_r110 << 1;
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__22 = cpy_r_r111;
    cpy_r_r112 = 1;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL179;
    }
    cpy_r_r113 = CPyDict_GetItemsIter(cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 111, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__23 != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__23);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__23 = cpy_r_r113;
    cpy_r_r114 = 1;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", -1, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
CPyL98: ;
    cpy_r_r115 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__23;
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__23", 111, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r115);
CPyL99: ;
    cpy_r_r116 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__21;
    if (unlikely(cpy_r_r116 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__21", 111, CPyStatic_graph_utils___globals);
        goto CPyL180;
    }
CPyL100: ;
    cpy_r_r117 = CPyDict_NextItem(cpy_r_r115, cpy_r_r116);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r118 = cpy_r_r117.f1;
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__21 = cpy_r_r118;
    cpy_r_r119 = 1;
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 111, CPyStatic_graph_utils___globals);
        goto CPyL181;
    }
    cpy_r_r120 = cpy_r_r117.f0;
    if (!cpy_r_r120) goto CPyL182;
    cpy_r_r121 = cpy_r_r117.f2;
    CPy_INCREF(cpy_r_r121);
    cpy_r_r122 = cpy_r_r117.f3;
    CPy_INCREF(cpy_r_r122);
    CPy_DECREF(cpy_r_r117.f2);
    CPy_DECREF(cpy_r_r117.f3);
    if (likely(PySet_Check(cpy_r_r122)))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypy/graph_utils.py", "topsort", 111, CPyStatic_graph_utils___globals, "set", cpy_r_r122);
        goto CPyL183;
    }
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_item != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_item);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_item = cpy_r_r121;
    cpy_r_r124 = 1;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 111, CPyStatic_graph_utils___globals);
        goto CPyL184;
    }
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_dep != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_dep);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_dep = cpy_r_r123;
    cpy_r_r125 = 1;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 111, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r126 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_item;
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "item", 111, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r126);
CPyL106: ;
    cpy_r_r127 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_ready;
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "ready", 111, CPyStatic_graph_utils___globals);
        goto CPyL185;
    }
    CPy_INCREF(cpy_r_r127);
CPyL107: ;
    cpy_r_r128 = PySet_Contains(cpy_r_r127, cpy_r_r126);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r126);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 111, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r130 = cpy_r_r128;
    cpy_r_r131 = cpy_r_r130 ^ 1;
    if (!cpy_r_r131) goto CPyL116;
    cpy_r_r132 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_item;
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "item", 111, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r132);
CPyL110: ;
    cpy_r_r133 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_dep;
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "dep", 111, CPyStatic_graph_utils___globals);
        goto CPyL186;
    }
    CPy_INCREF(cpy_r_r133);
CPyL111: ;
    cpy_r_r134 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_ready;
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "ready", 111, CPyStatic_graph_utils___globals);
        goto CPyL187;
    }
    CPy_INCREF(cpy_r_r134);
CPyL112: ;
    cpy_r_r135 = PyNumber_Subtract(cpy_r_r133, cpy_r_r134);
    CPy_DECREF(cpy_r_r133);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 111, CPyStatic_graph_utils___globals);
        goto CPyL186;
    }
    if (likely(PySet_Check(cpy_r_r135)))
        cpy_r_r136 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypy/graph_utils.py", "topsort", 111, CPyStatic_graph_utils___globals, "set", cpy_r_r135);
        goto CPyL186;
    }
    cpy_r_r137 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__19;
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__19", -1, CPyStatic_graph_utils___globals);
        goto CPyL188;
    }
    CPy_INCREF(cpy_r_r137);
CPyL115: ;
    cpy_r_r138 = CPyDict_SetItem(cpy_r_r137, cpy_r_r132, cpy_r_r136);
    CPy_DECREF(cpy_r_r137);
    CPy_DECREF(cpy_r_r132);
    CPy_DECREF(cpy_r_r136);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 111, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
CPyL116: ;
    cpy_r_r140 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__20;
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__20", 111, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r140);
CPyL117: ;
    cpy_r_r141 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__22;
    if (unlikely(cpy_r_r141 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__22", 111, CPyStatic_graph_utils___globals);
        goto CPyL189;
    }
CPyL118: ;
    cpy_r_r142 = CPyDict_CheckSize(cpy_r_r140, cpy_r_r141);
    CPy_DECREF(cpy_r_r140);
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 111, CPyStatic_graph_utils___globals);
        goto CPyL148;
    } else
        goto CPyL98;
CPyL119: ;
    cpy_r_r143 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 111, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r144 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_temp__19;
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "__mypyc_temp__19", -1, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r144);
CPyL121: ;
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_data != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_data);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_data = cpy_r_r144;
    cpy_r_r145 = 1;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 111, CPyStatic_graph_utils___globals);
        goto CPyL148;
    } else
        goto CPyL51;
CPyL122: ;
    cpy_r_r146 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_data;
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AttributeError("mypy/graph_utils.py", "topsort", "topsort_env", "data", 112, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r146);
CPyL123: ;
    cpy_r_r147 = PyObject_Not(cpy_r_r146);
    CPy_DECREF(cpy_r_r146);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 112, CPyStatic_graph_utils___globals);
        goto CPyL148;
    }
    cpy_r_r149 = cpy_r_r147;
    if (cpy_r_r149) goto CPyL134;
    cpy_r_r150 = CPyStatics[163]; /* '' */
    cpy_r_r151 = CPyStatics[2632]; /* 'A cyclic dependency exists amongst ' */
    cpy_r_r152 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r153 = ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_data;
    if (unlikely(cpy_r_r153 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'data' of 'topsort_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r153);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 112, CPyStatic_graph_utils___globals);
        goto CPyL147;
    }
CPyL126: ;
    cpy_r_r154 = CPyStatics[163]; /* '' */
    cpy_r_r155 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r156[3] = {cpy_r_r152, cpy_r_r153, cpy_r_r154};
    cpy_r_r157 = (PyObject **)&cpy_r_r156;
    cpy_r_r158 = PyObject_VectorcallMethod(cpy_r_r155, cpy_r_r157, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 112, CPyStatic_graph_utils___globals);
        goto CPyL190;
    }
    CPy_DECREF(cpy_r_r153);
    if (likely(PyUnicode_Check(cpy_r_r158)))
        cpy_r_r159 = cpy_r_r158;
    else {
        CPy_TypeErrorTraceback("mypy/graph_utils.py", "topsort", 112, CPyStatic_graph_utils___globals, "str", cpy_r_r158);
        goto CPyL147;
    }
    cpy_r_r160 = PyList_New(2);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 112, CPyStatic_graph_utils___globals);
        goto CPyL191;
    }
    cpy_r_r161 = (CPyPtr)&((PyListObject *)cpy_r_r160)->ob_item;
    cpy_r_r162 = *(CPyPtr *)cpy_r_r161;
    CPy_INCREF(cpy_r_r151);
    *(PyObject * *)cpy_r_r162 = cpy_r_r151;
    cpy_r_r163 = cpy_r_r162 + 8;
    *(PyObject * *)cpy_r_r163 = cpy_r_r159;
    cpy_r_r164 = PyUnicode_Join(cpy_r_r150, cpy_r_r160);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 112, CPyStatic_graph_utils___globals);
        goto CPyL147;
    }
    cpy_r_r165 = CPyModule_builtins;
    cpy_r_r166 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r167 = CPyObject_GetAttr(cpy_r_r165, cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 112, CPyStatic_graph_utils___globals);
        goto CPyL192;
    }
    PyObject *cpy_r_r168[1] = {cpy_r_r164};
    cpy_r_r169 = (PyObject **)&cpy_r_r168;
    cpy_r_r170 = _PyObject_Vectorcall(cpy_r_r167, cpy_r_r169, 1, 0);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 112, CPyStatic_graph_utils___globals);
        goto CPyL192;
    }
    CPy_DECREF(cpy_r_r164);
    CPy_Raise(cpy_r_r170);
    CPy_DECREF(cpy_r_r170);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 112, CPyStatic_graph_utils___globals);
        goto CPyL147;
    }
    CPy_Unreachable();
CPyL134: ;
    cpy_r_r171 = Py_None;
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r172 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 70, CPyStatic_graph_utils___globals);
        goto CPyL147;
    }
    CPyGen_SetStopIterationValue(cpy_r_r171);
    if (!0) goto CPyL147;
    CPy_Unreachable();
CPyL137: ;
    cpy_r_r173 = cpy_r_r1 & 1;
    cpy_r_r174 = cpy_r_r173 == 0;
    if (!cpy_r_r174) goto CPyL139;
    cpy_r_r175 = cpy_r_r1 == 0;
    cpy_r_r176 = cpy_r_r175;
    goto CPyL140;
CPyL139: ;
    cpy_r_r177 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r176 = cpy_r_r177;
CPyL140: ;
    if (cpy_r_r176) goto CPyL193;
    cpy_r_r178 = cpy_r_r1 & 1;
    cpy_r_r179 = cpy_r_r178 == 0;
    if (!cpy_r_r179) goto CPyL143;
    cpy_r_r180 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r181 = cpy_r_r180;
    goto CPyL144;
CPyL143: ;
    cpy_r_r182 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r181 = cpy_r_r182;
CPyL144: ;
    if (cpy_r_r181) {
        goto CPyL86;
    } else
        goto CPyL194;
CPyL145: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r183 = 0;
    if (unlikely(!cpy_r_r183)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 70, CPyStatic_graph_utils___globals);
        goto CPyL147;
    }
    CPy_Unreachable();
CPyL147: ;
    cpy_r_r184 = NULL;
    return cpy_r_r184;
CPyL148: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL147;
CPyL149: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL150: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL147;
CPyL151: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r13);
    goto CPyL147;
CPyL152: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r15.f2);
    CPy_DecRef(cpy_r_r15.f3);
    goto CPyL147;
CPyL153: ;
    CPy_DECREF(cpy_r_r15.f2);
    CPy_DECREF(cpy_r_r15.f3);
    goto CPyL25;
CPyL154: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r19);
    goto CPyL147;
CPyL155: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    goto CPyL147;
CPyL156: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    goto CPyL147;
CPyL157: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r28);
    goto CPyL147;
CPyL158: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r34);
    goto CPyL147;
CPyL159: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    goto CPyL147;
CPyL160: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r37);
    goto CPyL147;
CPyL161: ;
    CPy_DECREF(cpy_r_r38);
    goto CPyL31;
CPyL162: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r36);
    goto CPyL147;
CPyL163: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r39);
    goto CPyL147;
CPyL164: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r42);
    goto CPyL147;
CPyL165: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r47);
    goto CPyL147;
CPyL166: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r48);
    goto CPyL147;
CPyL167: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r54);
    goto CPyL147;
CPyL168: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r55);
    goto CPyL147;
CPyL169: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r62);
    goto CPyL147;
CPyL170: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r71);
    goto CPyL147;
CPyL171: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r73.f2);
    CPy_DecRef(cpy_r_r73.f3);
    goto CPyL147;
CPyL172: ;
    CPy_DECREF(cpy_r_r73.f2);
    CPy_DECREF(cpy_r_r73.f3);
    goto CPyL77;
CPyL173: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r77);
    goto CPyL147;
CPyL174: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r79);
    goto CPyL147;
CPyL175: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r86);
    goto CPyL147;
CPyL176: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r90);
    goto CPyL147;
CPyL177: ;
    CPy_DecRef(cpy_r_r100);
    goto CPyL147;
CPyL178: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL87;
CPyL179: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r106);
    goto CPyL147;
CPyL180: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r115);
    goto CPyL147;
CPyL181: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r117.f2);
    CPy_DecRef(cpy_r_r117.f3);
    goto CPyL147;
CPyL182: ;
    CPy_DECREF(cpy_r_r117.f2);
    CPy_DECREF(cpy_r_r117.f3);
    goto CPyL119;
CPyL183: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r121);
    goto CPyL147;
CPyL184: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r123);
    goto CPyL147;
CPyL185: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r126);
    goto CPyL147;
CPyL186: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r132);
    goto CPyL147;
CPyL187: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r132);
    CPy_DecRef(cpy_r_r133);
    goto CPyL147;
CPyL188: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r132);
    CPy_DecRef(cpy_r_r136);
    goto CPyL147;
CPyL189: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r140);
    goto CPyL147;
CPyL190: ;
    CPy_DecRef(cpy_r_r153);
    goto CPyL147;
CPyL191: ;
    CPy_DecRef(cpy_r_r159);
    goto CPyL147;
CPyL192: ;
    CPy_DecRef(cpy_r_r164);
    goto CPyL147;
CPyL193: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL194: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL145;
}

PyObject *CPyPy_graph_utils___topsort_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_graph_utils___topsort_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "topsort", 70, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___topsort_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_graph_utils___topsort_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_graph_utils___topsort_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___topsort_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.topsort_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_graph_utils___topsort_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "__next__", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___topsort_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_graph_utils___topsort_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_graph_utils___topsort_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___topsort_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.topsort_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_graph_utils___topsort_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "send", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___topsort_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_graph_utils___topsort_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___topsort_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.topsort_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_graph_utils___topsort_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "__iter__", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___topsort_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_graph_utils___topsort_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_graph_utils___topsort_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___topsort_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.topsort_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_graph_utils___topsort_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "throw", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___topsort_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_graph_utils___topsort_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp2929 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp2929);
    PyObject *__tmp2930 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp2930);
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

PyObject *CPyPy_graph_utils___topsort_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_graph_utils___topsort_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.graph_utils.topsort_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_graph_utils___topsort_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "close", -1, CPyStatic_graph_utils___globals);
    return NULL;
}

PyObject *CPyDef_graph_utils___topsort(PyObject *cpy_r_data) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_graph_utils___topsort_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 70, CPyStatic_graph_utils___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_data);
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_data != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_data);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->_data = cpy_r_data;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 70, CPyStatic_graph_utils___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_graph_utils___topsort_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 70, CPyStatic_graph_utils___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___graph_utils___topsort_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___graph_utils___topsort_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___graph_utils___topsort_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 70, CPyStatic_graph_utils___globals);
        goto CPyL8;
    }
    if (((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___graph_utils___topsort_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/graph_utils.py", "topsort", 70, CPyStatic_graph_utils___globals);
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

PyObject *CPyPy_graph_utils___topsort(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"data", 0};
    static CPyArg_Parser parser = {"O:topsort", kwlist, 0};
    PyObject *obj_data;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_data)) {
        return NULL;
    }
    PyObject *arg_data;
    if (likely(PyDict_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("dict", obj_data); 
        goto fail;
    }
    PyObject *retval = CPyDef_graph_utils___topsort(arg_data);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/graph_utils.py", "topsort", 70, CPyStatic_graph_utils___globals);
    return NULL;
}

char CPyDef_graph_utils_____top_level__(void) {
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
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "<module>", -1, CPyStatic_graph_utils___globals);
        goto CPyL9;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_graph_utils___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "<module>", 3, CPyStatic_graph_utils___globals);
        goto CPyL9;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9419]; /* ('AbstractSet', 'Iterable', 'Iterator', 'TypeVar') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_graph_utils___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "<module>", 5, CPyStatic_graph_utils___globals);
        goto CPyL9;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[1088]; /* 'T' */
    cpy_r_r14 = CPyStatic_graph_utils___globals;
    cpy_r_r15 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "<module>", 7, CPyStatic_graph_utils___globals);
        goto CPyL9;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_r13};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/graph_utils.py", "<module>", 7, CPyStatic_graph_utils___globals);
        goto CPyL9;
    }
    cpy_r_r20 = CPyStatic_graph_utils___globals;
    cpy_r_r21 = CPyStatics[1088]; /* 'T' */
    cpy_r_r22 = CPyDict_SetItem(cpy_r_r20, cpy_r_r21, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/graph_utils.py", "<module>", 7, CPyStatic_graph_utils___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r24 = 2;
    return cpy_r_r24;
}
