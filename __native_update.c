#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
update___FineGrainedBuildManager_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *update___FineGrainedBuildManager_setup(PyTypeObject *type);
PyObject *CPyDef_update___FineGrainedBuildManager(PyObject *cpy_r_result);

static PyObject *
update___FineGrainedBuildManager_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_update___FineGrainedBuildManager) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = update___FineGrainedBuildManager_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_update___FineGrainedBuildManager_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
update___FineGrainedBuildManager_traverse(mypy___server___update___FineGrainedBuildManagerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_manager);
    Py_VISIT(self->_graph);
    Py_VISIT(self->_previous_modules);
    Py_VISIT(self->_deps);
    Py_VISIT(self->_previous_targets_with_errors);
    Py_VISIT(self->_previous_messages);
    Py_VISIT(self->_blocking_error);
    Py_VISIT(self->_stale);
    Py_VISIT(self->_triggered);
    Py_VISIT(self->_changed_modules);
    Py_VISIT(self->_updated_modules);
    Py_VISIT(self->_processed_targets);
    return 0;
}

static int
update___FineGrainedBuildManager_clear(mypy___server___update___FineGrainedBuildManagerObject *self)
{
    Py_CLEAR(self->_manager);
    Py_CLEAR(self->_graph);
    Py_CLEAR(self->_previous_modules);
    Py_CLEAR(self->_deps);
    Py_CLEAR(self->_previous_targets_with_errors);
    Py_CLEAR(self->_previous_messages);
    Py_CLEAR(self->_blocking_error);
    Py_CLEAR(self->_stale);
    Py_CLEAR(self->_triggered);
    Py_CLEAR(self->_changed_modules);
    Py_CLEAR(self->_updated_modules);
    Py_CLEAR(self->_processed_targets);
    return 0;
}

static void
update___FineGrainedBuildManager_dealloc(mypy___server___update___FineGrainedBuildManagerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, update___FineGrainedBuildManager_dealloc)
    update___FineGrainedBuildManager_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem update___FineGrainedBuildManager_vtable[6];
static bool
CPyDef_update___FineGrainedBuildManager_trait_vtable_setup(void)
{
    CPyVTableItem update___FineGrainedBuildManager_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_update___FineGrainedBuildManager_____init__,
        (CPyVTableItem)CPyDef_update___FineGrainedBuildManager___update,
        (CPyVTableItem)CPyDef_update___FineGrainedBuildManager___trigger,
        (CPyVTableItem)CPyDef_update___FineGrainedBuildManager___flush_cache,
        (CPyVTableItem)CPyDef_update___FineGrainedBuildManager___update_one,
        (CPyVTableItem)CPyDef_update___FineGrainedBuildManager___update_module,
    };
    memcpy(update___FineGrainedBuildManager_vtable, update___FineGrainedBuildManager_vtable_scratch, sizeof(update___FineGrainedBuildManager_vtable));
    return 1;
}

static PyObject *
update___FineGrainedBuildManager_get_manager(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure);
static int
update___FineGrainedBuildManager_set_manager(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure);
static PyObject *
update___FineGrainedBuildManager_get_graph(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure);
static int
update___FineGrainedBuildManager_set_graph(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure);
static PyObject *
update___FineGrainedBuildManager_get_previous_modules(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure);
static int
update___FineGrainedBuildManager_set_previous_modules(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure);
static PyObject *
update___FineGrainedBuildManager_get_deps(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure);
static int
update___FineGrainedBuildManager_set_deps(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure);
static PyObject *
update___FineGrainedBuildManager_get_previous_targets_with_errors(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure);
static int
update___FineGrainedBuildManager_set_previous_targets_with_errors(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure);
static PyObject *
update___FineGrainedBuildManager_get_previous_messages(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure);
static int
update___FineGrainedBuildManager_set_previous_messages(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure);
static PyObject *
update___FineGrainedBuildManager_get_blocking_error(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure);
static int
update___FineGrainedBuildManager_set_blocking_error(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure);
static PyObject *
update___FineGrainedBuildManager_get_stale(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure);
static int
update___FineGrainedBuildManager_set_stale(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure);
static PyObject *
update___FineGrainedBuildManager_get_triggered(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure);
static int
update___FineGrainedBuildManager_set_triggered(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure);
static PyObject *
update___FineGrainedBuildManager_get_changed_modules(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure);
static int
update___FineGrainedBuildManager_set_changed_modules(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure);
static PyObject *
update___FineGrainedBuildManager_get_updated_modules(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure);
static int
update___FineGrainedBuildManager_set_updated_modules(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure);
static PyObject *
update___FineGrainedBuildManager_get_processed_targets(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure);
static int
update___FineGrainedBuildManager_set_processed_targets(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure);

static PyGetSetDef update___FineGrainedBuildManager_getseters[] = {
    {"manager",
     (getter)update___FineGrainedBuildManager_get_manager, (setter)update___FineGrainedBuildManager_set_manager,
     NULL, NULL},
    {"graph",
     (getter)update___FineGrainedBuildManager_get_graph, (setter)update___FineGrainedBuildManager_set_graph,
     NULL, NULL},
    {"previous_modules",
     (getter)update___FineGrainedBuildManager_get_previous_modules, (setter)update___FineGrainedBuildManager_set_previous_modules,
     NULL, NULL},
    {"deps",
     (getter)update___FineGrainedBuildManager_get_deps, (setter)update___FineGrainedBuildManager_set_deps,
     NULL, NULL},
    {"previous_targets_with_errors",
     (getter)update___FineGrainedBuildManager_get_previous_targets_with_errors, (setter)update___FineGrainedBuildManager_set_previous_targets_with_errors,
     NULL, NULL},
    {"previous_messages",
     (getter)update___FineGrainedBuildManager_get_previous_messages, (setter)update___FineGrainedBuildManager_set_previous_messages,
     NULL, NULL},
    {"blocking_error",
     (getter)update___FineGrainedBuildManager_get_blocking_error, (setter)update___FineGrainedBuildManager_set_blocking_error,
     NULL, NULL},
    {"stale",
     (getter)update___FineGrainedBuildManager_get_stale, (setter)update___FineGrainedBuildManager_set_stale,
     NULL, NULL},
    {"triggered",
     (getter)update___FineGrainedBuildManager_get_triggered, (setter)update___FineGrainedBuildManager_set_triggered,
     NULL, NULL},
    {"changed_modules",
     (getter)update___FineGrainedBuildManager_get_changed_modules, (setter)update___FineGrainedBuildManager_set_changed_modules,
     NULL, NULL},
    {"updated_modules",
     (getter)update___FineGrainedBuildManager_get_updated_modules, (setter)update___FineGrainedBuildManager_set_updated_modules,
     NULL, NULL},
    {"processed_targets",
     (getter)update___FineGrainedBuildManager_get_processed_targets, (setter)update___FineGrainedBuildManager_set_processed_targets,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef update___FineGrainedBuildManager_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_update___FineGrainedBuildManager_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"update",
     (PyCFunction)CPyPy_update___FineGrainedBuildManager___update,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"trigger",
     (PyCFunction)CPyPy_update___FineGrainedBuildManager___trigger,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"flush_cache",
     (PyCFunction)CPyPy_update___FineGrainedBuildManager___flush_cache,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"update_one",
     (PyCFunction)CPyPy_update___FineGrainedBuildManager___update_one,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"update_module",
     (PyCFunction)CPyPy_update___FineGrainedBuildManager___update_module,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_update___FineGrainedBuildManager_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FineGrainedBuildManager",
    .tp_new = update___FineGrainedBuildManager_new,
    .tp_dealloc = (destructor)update___FineGrainedBuildManager_dealloc,
    .tp_traverse = (traverseproc)update___FineGrainedBuildManager_traverse,
    .tp_clear = (inquiry)update___FineGrainedBuildManager_clear,
    .tp_getset = update___FineGrainedBuildManager_getseters,
    .tp_methods = update___FineGrainedBuildManager_methods,
    .tp_init = update___FineGrainedBuildManager_init,
    .tp_basicsize = sizeof(mypy___server___update___FineGrainedBuildManagerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_update___FineGrainedBuildManager_template = &CPyType_update___FineGrainedBuildManager_template_;

static PyObject *
update___FineGrainedBuildManager_setup(PyTypeObject *type)
{
    mypy___server___update___FineGrainedBuildManagerObject *self;
    self = (mypy___server___update___FineGrainedBuildManagerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = update___FineGrainedBuildManager_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_update___FineGrainedBuildManager(PyObject *cpy_r_result)
{
    PyObject *self = update___FineGrainedBuildManager_setup(CPyType_update___FineGrainedBuildManager);
    if (self == NULL)
        return NULL;
    char res = CPyDef_update___FineGrainedBuildManager_____init__(self, cpy_r_result);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
update___FineGrainedBuildManager_get_manager(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure)
{
    if (unlikely(self->_manager == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'manager' of 'FineGrainedBuildManager' undefined");
        return NULL;
    }
    CPy_INCREF(self->_manager);
    PyObject *retval = self->_manager;
    return retval;
}

static int
update___FineGrainedBuildManager_set_manager(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FineGrainedBuildManager' object attribute 'manager' cannot be deleted");
        return -1;
    }
    if (self->_manager != NULL) {
        CPy_DECREF(self->_manager);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypy___build___BuildManager))
        tmp = value;
    else {
        CPy_TypeError("mypy.build.BuildManager", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_manager = tmp;
    return 0;
}

static PyObject *
update___FineGrainedBuildManager_get_graph(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure)
{
    if (unlikely(self->_graph == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'graph' of 'FineGrainedBuildManager' undefined");
        return NULL;
    }
    CPy_INCREF(self->_graph);
    PyObject *retval = self->_graph;
    return retval;
}

static int
update___FineGrainedBuildManager_set_graph(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FineGrainedBuildManager' object attribute 'graph' cannot be deleted");
        return -1;
    }
    if (self->_graph != NULL) {
        CPy_DECREF(self->_graph);
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
    self->_graph = tmp;
    return 0;
}

static PyObject *
update___FineGrainedBuildManager_get_previous_modules(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure)
{
    if (unlikely(self->_previous_modules == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'previous_modules' of 'FineGrainedBuildManager' undefined");
        return NULL;
    }
    CPy_INCREF(self->_previous_modules);
    PyObject *retval = self->_previous_modules;
    return retval;
}

static int
update___FineGrainedBuildManager_set_previous_modules(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FineGrainedBuildManager' object attribute 'previous_modules' cannot be deleted");
        return -1;
    }
    if (self->_previous_modules != NULL) {
        CPy_DECREF(self->_previous_modules);
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
    self->_previous_modules = tmp;
    return 0;
}

static PyObject *
update___FineGrainedBuildManager_get_deps(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure)
{
    if (unlikely(self->_deps == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'deps' of 'FineGrainedBuildManager' undefined");
        return NULL;
    }
    CPy_INCREF(self->_deps);
    PyObject *retval = self->_deps;
    return retval;
}

static int
update___FineGrainedBuildManager_set_deps(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FineGrainedBuildManager' object attribute 'deps' cannot be deleted");
        return -1;
    }
    if (self->_deps != NULL) {
        CPy_DECREF(self->_deps);
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
    self->_deps = tmp;
    return 0;
}

static PyObject *
update___FineGrainedBuildManager_get_previous_targets_with_errors(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure)
{
    if (unlikely(self->_previous_targets_with_errors == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'previous_targets_with_errors' of 'FineGrainedBuildManager' undefined");
        return NULL;
    }
    CPy_INCREF(self->_previous_targets_with_errors);
    PyObject *retval = self->_previous_targets_with_errors;
    return retval;
}

static int
update___FineGrainedBuildManager_set_previous_targets_with_errors(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FineGrainedBuildManager' object attribute 'previous_targets_with_errors' cannot be deleted");
        return -1;
    }
    if (self->_previous_targets_with_errors != NULL) {
        CPy_DECREF(self->_previous_targets_with_errors);
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
    self->_previous_targets_with_errors = tmp;
    return 0;
}

static PyObject *
update___FineGrainedBuildManager_get_previous_messages(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure)
{
    if (unlikely(self->_previous_messages == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'previous_messages' of 'FineGrainedBuildManager' undefined");
        return NULL;
    }
    CPy_INCREF(self->_previous_messages);
    PyObject *retval = self->_previous_messages;
    return retval;
}

static int
update___FineGrainedBuildManager_set_previous_messages(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FineGrainedBuildManager' object attribute 'previous_messages' cannot be deleted");
        return -1;
    }
    if (self->_previous_messages != NULL) {
        CPy_DECREF(self->_previous_messages);
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
    self->_previous_messages = tmp;
    return 0;
}

static PyObject *
update___FineGrainedBuildManager_get_blocking_error(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure)
{
    if (unlikely(self->_blocking_error == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'blocking_error' of 'FineGrainedBuildManager' undefined");
        return NULL;
    }
    CPy_INCREF(self->_blocking_error);
    PyObject *retval = self->_blocking_error;
    return retval;
}

static int
update___FineGrainedBuildManager_set_blocking_error(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FineGrainedBuildManager' object attribute 'blocking_error' cannot be deleted");
        return -1;
    }
    if (self->_blocking_error != NULL) {
        CPy_DECREF(self->_blocking_error);
    }
    PyObject *tmp;
    if (unlikely(!(PyTuple_Check(value) && PyTuple_GET_SIZE(value) == 2))) {
        tmp = NULL;
        goto __LL6620;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(value, 0))))
        tmp = PyTuple_GET_ITEM(value, 0);
    else {
        tmp = NULL;
    }
    if (tmp == NULL) goto __LL6620;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(value, 1))))
        tmp = PyTuple_GET_ITEM(value, 1);
    else {
        tmp = NULL;
    }
    if (tmp == NULL) goto __LL6620;
    tmp = value;
__LL6620: ;
    if (tmp != NULL) goto __LL6619;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL6619;
    CPy_TypeError("tuple[str, str] or None", value); 
    tmp = NULL;
__LL6619: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_blocking_error = tmp;
    return 0;
}

static PyObject *
update___FineGrainedBuildManager_get_stale(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure)
{
    if (unlikely(self->_stale == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'stale' of 'FineGrainedBuildManager' undefined");
        return NULL;
    }
    CPy_INCREF(self->_stale);
    PyObject *retval = self->_stale;
    return retval;
}

static int
update___FineGrainedBuildManager_set_stale(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FineGrainedBuildManager' object attribute 'stale' cannot be deleted");
        return -1;
    }
    if (self->_stale != NULL) {
        CPy_DECREF(self->_stale);
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
    self->_stale = tmp;
    return 0;
}

static PyObject *
update___FineGrainedBuildManager_get_triggered(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure)
{
    if (unlikely(self->_triggered == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'triggered' of 'FineGrainedBuildManager' undefined");
        return NULL;
    }
    CPy_INCREF(self->_triggered);
    PyObject *retval = self->_triggered;
    return retval;
}

static int
update___FineGrainedBuildManager_set_triggered(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FineGrainedBuildManager' object attribute 'triggered' cannot be deleted");
        return -1;
    }
    if (self->_triggered != NULL) {
        CPy_DECREF(self->_triggered);
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
    self->_triggered = tmp;
    return 0;
}

static PyObject *
update___FineGrainedBuildManager_get_changed_modules(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure)
{
    if (unlikely(self->_changed_modules == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'changed_modules' of 'FineGrainedBuildManager' undefined");
        return NULL;
    }
    CPy_INCREF(self->_changed_modules);
    PyObject *retval = self->_changed_modules;
    return retval;
}

static int
update___FineGrainedBuildManager_set_changed_modules(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FineGrainedBuildManager' object attribute 'changed_modules' cannot be deleted");
        return -1;
    }
    if (self->_changed_modules != NULL) {
        CPy_DECREF(self->_changed_modules);
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
    self->_changed_modules = tmp;
    return 0;
}

static PyObject *
update___FineGrainedBuildManager_get_updated_modules(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure)
{
    if (unlikely(self->_updated_modules == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'updated_modules' of 'FineGrainedBuildManager' undefined");
        return NULL;
    }
    CPy_INCREF(self->_updated_modules);
    PyObject *retval = self->_updated_modules;
    return retval;
}

static int
update___FineGrainedBuildManager_set_updated_modules(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FineGrainedBuildManager' object attribute 'updated_modules' cannot be deleted");
        return -1;
    }
    if (self->_updated_modules != NULL) {
        CPy_DECREF(self->_updated_modules);
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
    self->_updated_modules = tmp;
    return 0;
}

static PyObject *
update___FineGrainedBuildManager_get_processed_targets(mypy___server___update___FineGrainedBuildManagerObject *self, void *closure)
{
    if (unlikely(self->_processed_targets == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'processed_targets' of 'FineGrainedBuildManager' undefined");
        return NULL;
    }
    CPy_INCREF(self->_processed_targets);
    PyObject *retval = self->_processed_targets;
    return retval;
}

static int
update___FineGrainedBuildManager_set_processed_targets(mypy___server___update___FineGrainedBuildManagerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FineGrainedBuildManager' object attribute 'processed_targets' cannot be deleted");
        return -1;
    }
    if (self->_processed_targets != NULL) {
        CPy_DECREF(self->_processed_targets);
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
    self->_processed_targets = tmp;
    return 0;
}

static PyObject *update___update_module_isolated_env_setup(PyTypeObject *type);
PyObject *CPyDef_update___update_module_isolated_env(void);

static PyObject *
update___update_module_isolated_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_update___update_module_isolated_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return update___update_module_isolated_env_setup(type);
}

static int
update___update_module_isolated_env_traverse(mypy___server___update___update_module_isolated_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_manager);
    Py_VISIT(self->_graph);
    Py_VISIT(self->_orig_module);
    Py_VISIT(self->_orig_state);
    Py_VISIT(self->_orig_tree);
    Py_VISIT(self->_restore);
    Py_VISIT(self->_module);
    Py_VISIT(self->_path);
    Py_VISIT(self->_previous_modules);
    Py_VISIT(self->_sources);
    return 0;
}

static int
update___update_module_isolated_env_clear(mypy___server___update___update_module_isolated_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_manager);
    Py_CLEAR(self->_graph);
    Py_CLEAR(self->_orig_module);
    Py_CLEAR(self->_orig_state);
    Py_CLEAR(self->_orig_tree);
    Py_CLEAR(self->_restore);
    Py_CLEAR(self->_module);
    Py_CLEAR(self->_path);
    Py_CLEAR(self->_previous_modules);
    Py_CLEAR(self->_sources);
    return 0;
}

static void
update___update_module_isolated_env_dealloc(mypy___server___update___update_module_isolated_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, update___update_module_isolated_env_dealloc)
    update___update_module_isolated_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem update___update_module_isolated_env_vtable[1];
static bool
CPyDef_update___update_module_isolated_env_trait_vtable_setup(void)
{
    CPyVTableItem update___update_module_isolated_env_vtable_scratch[] = {
        NULL
    };
    memcpy(update___update_module_isolated_env_vtable, update___update_module_isolated_env_vtable_scratch, sizeof(update___update_module_isolated_env_vtable));
    return 1;
}

static PyMethodDef update___update_module_isolated_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_update___update_module_isolated_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "update_module_isolated_env",
    .tp_new = update___update_module_isolated_env_new,
    .tp_dealloc = (destructor)update___update_module_isolated_env_dealloc,
    .tp_traverse = (traverseproc)update___update_module_isolated_env_traverse,
    .tp_clear = (inquiry)update___update_module_isolated_env_clear,
    .tp_methods = update___update_module_isolated_env_methods,
    .tp_basicsize = sizeof(mypy___server___update___update_module_isolated_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_update___update_module_isolated_env_template = &CPyType_update___update_module_isolated_env_template_;

static PyObject *
update___update_module_isolated_env_setup(PyTypeObject *type)
{
    mypy___server___update___update_module_isolated_envObject *self;
    self = (mypy___server___update___update_module_isolated_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = update___update_module_isolated_env_vtable;
    self->_force_removed = 2;
    self->_followed = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_update___update_module_isolated_env(void)
{
    PyObject *self = update___update_module_isolated_env_setup(CPyType_update___update_module_isolated_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__update___restore_update_module_isolated_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_update___restore_update_module_isolated_obj_____get__(self, instance, owner);
}
PyMemberDef update___restore_update_module_isolated_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___server___update___restore_update_module_isolated_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___server___update___restore_update_module_isolated_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *update___restore_update_module_isolated_obj_setup(PyTypeObject *type);
PyObject *CPyDef_update___restore_update_module_isolated_obj(void);

static PyObject *
update___restore_update_module_isolated_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_update___restore_update_module_isolated_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return update___restore_update_module_isolated_obj_setup(type);
}

static int
update___restore_update_module_isolated_obj_traverse(mypy___server___update___restore_update_module_isolated_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___server___update___restore_update_module_isolated_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___update___restore_update_module_isolated_objObject))));
    return 0;
}

static int
update___restore_update_module_isolated_obj_clear(mypy___server___update___restore_update_module_isolated_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___server___update___restore_update_module_isolated_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___update___restore_update_module_isolated_objObject))));
    return 0;
}

static void
update___restore_update_module_isolated_obj_dealloc(mypy___server___update___restore_update_module_isolated_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, update___restore_update_module_isolated_obj_dealloc)
    update___restore_update_module_isolated_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem update___restore_update_module_isolated_obj_vtable[2];
static bool
CPyDef_update___restore_update_module_isolated_obj_trait_vtable_setup(void)
{
    CPyVTableItem update___restore_update_module_isolated_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_update___restore_update_module_isolated_obj_____call__,
        (CPyVTableItem)CPyDef_update___restore_update_module_isolated_obj_____get__,
    };
    memcpy(update___restore_update_module_isolated_obj_vtable, update___restore_update_module_isolated_obj_vtable_scratch, sizeof(update___restore_update_module_isolated_obj_vtable));
    return 1;
}

static PyMethodDef update___restore_update_module_isolated_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_update___restore_update_module_isolated_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_update___restore_update_module_isolated_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_update___restore_update_module_isolated_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "restore_update_module_isolated_obj",
    .tp_new = update___restore_update_module_isolated_obj_new,
    .tp_dealloc = (destructor)update___restore_update_module_isolated_obj_dealloc,
    .tp_traverse = (traverseproc)update___restore_update_module_isolated_obj_traverse,
    .tp_clear = (inquiry)update___restore_update_module_isolated_obj_clear,
    .tp_methods = update___restore_update_module_isolated_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__update___restore_update_module_isolated_obj,
    .tp_members = update___restore_update_module_isolated_obj_members,
    .tp_basicsize = sizeof(mypy___server___update___restore_update_module_isolated_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___server___update___restore_update_module_isolated_objObject),
    .tp_weaklistoffset = sizeof(mypy___server___update___restore_update_module_isolated_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___server___update___restore_update_module_isolated_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_update___restore_update_module_isolated_obj_template = &CPyType_update___restore_update_module_isolated_obj_template_;

static PyObject *
update___restore_update_module_isolated_obj_setup(PyTypeObject *type)
{
    mypy___server___update___restore_update_module_isolated_objObject *self;
    self = (mypy___server___update___restore_update_module_isolated_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = update___restore_update_module_isolated_obj_vtable;
    self->vectorcall = CPyPy_update___restore_update_module_isolated_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_update___restore_update_module_isolated_obj(void)
{
    PyObject *self = update___restore_update_module_isolated_obj_setup(CPyType_update___restore_update_module_isolated_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *update___propagate_changes_using_dependencies_env_setup(PyTypeObject *type);
PyObject *CPyDef_update___propagate_changes_using_dependencies_env(void);

static PyObject *
update___propagate_changes_using_dependencies_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_update___propagate_changes_using_dependencies_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return update___propagate_changes_using_dependencies_env_setup(type);
}

static int
update___propagate_changes_using_dependencies_env_traverse(mypy___server___update___propagate_changes_using_dependencies_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_manager);
    Py_VISIT(self->_graph);
    Py_VISIT(self->_deps);
    Py_VISIT(self->_triggered);
    Py_VISIT(self->_up_to_date_modules);
    Py_VISIT(self->_targets_with_errors);
    Py_VISIT(self->_processed_targets);
    if (CPyTagged_CheckLong(self->_num_iter)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_iter));
    }
    Py_VISIT(self->_remaining_modules);
    Py_VISIT(self->_todo);
    Py_VISIT(self->_unloaded);
    Py_VISIT(self->_stale_protos);
    Py_VISIT(self->_id);
    Py_VISIT(self->_target);
    Py_VISIT(self->_more_nodes);
    Py_VISIT(self->__);
    Py_VISIT(self->_info);
    return 0;
}

static int
update___propagate_changes_using_dependencies_env_clear(mypy___server___update___propagate_changes_using_dependencies_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_manager);
    Py_CLEAR(self->_graph);
    Py_CLEAR(self->_deps);
    Py_CLEAR(self->_triggered);
    Py_CLEAR(self->_up_to_date_modules);
    Py_CLEAR(self->_targets_with_errors);
    Py_CLEAR(self->_processed_targets);
    if (CPyTagged_CheckLong(self->_num_iter)) {
        CPyTagged __tmp = self->_num_iter;
        self->_num_iter = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_remaining_modules);
    Py_CLEAR(self->_todo);
    Py_CLEAR(self->_unloaded);
    Py_CLEAR(self->_stale_protos);
    Py_CLEAR(self->_id);
    Py_CLEAR(self->_target);
    Py_CLEAR(self->_more_nodes);
    Py_CLEAR(self->__);
    Py_CLEAR(self->_info);
    return 0;
}

static void
update___propagate_changes_using_dependencies_env_dealloc(mypy___server___update___propagate_changes_using_dependencies_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, update___propagate_changes_using_dependencies_env_dealloc)
    update___propagate_changes_using_dependencies_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem update___propagate_changes_using_dependencies_env_vtable[1];
static bool
CPyDef_update___propagate_changes_using_dependencies_env_trait_vtable_setup(void)
{
    CPyVTableItem update___propagate_changes_using_dependencies_env_vtable_scratch[] = {
        NULL
    };
    memcpy(update___propagate_changes_using_dependencies_env_vtable, update___propagate_changes_using_dependencies_env_vtable_scratch, sizeof(update___propagate_changes_using_dependencies_env_vtable));
    return 1;
}

static PyMethodDef update___propagate_changes_using_dependencies_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_update___propagate_changes_using_dependencies_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "propagate_changes_using_dependencies_env",
    .tp_new = update___propagate_changes_using_dependencies_env_new,
    .tp_dealloc = (destructor)update___propagate_changes_using_dependencies_env_dealloc,
    .tp_traverse = (traverseproc)update___propagate_changes_using_dependencies_env_traverse,
    .tp_clear = (inquiry)update___propagate_changes_using_dependencies_env_clear,
    .tp_methods = update___propagate_changes_using_dependencies_env_methods,
    .tp_basicsize = sizeof(mypy___server___update___propagate_changes_using_dependencies_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_update___propagate_changes_using_dependencies_env_template = &CPyType_update___propagate_changes_using_dependencies_env_template_;

static PyObject *
update___propagate_changes_using_dependencies_env_setup(PyTypeObject *type)
{
    mypy___server___update___propagate_changes_using_dependencies_envObject *self;
    self = (mypy___server___update___propagate_changes_using_dependencies_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = update___propagate_changes_using_dependencies_env_vtable;
    self->_num_iter = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_update___propagate_changes_using_dependencies_env(void)
{
    PyObject *self = update___propagate_changes_using_dependencies_env_setup(CPyType_update___propagate_changes_using_dependencies_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_____get__(self, instance, owner);
}
PyMemberDef update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_setup(PyTypeObject *type);
PyObject *CPyDef_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj(void);

static PyObject *
update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_setup(type);
}

static int
update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_traverse(mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject))));
    return 0;
}

static int
update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_clear(mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject))));
    return 0;
}

static void
update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_dealloc(mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_dealloc)
    update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_vtable[2];
static bool
CPyDef_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_trait_vtable_setup(void)
{
    CPyVTableItem update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_____call__,
        (CPyVTableItem)CPyDef_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_____get__,
    };
    memcpy(update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_vtable, update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_vtable_scratch, sizeof(update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_vtable));
    return 1;
}

static PyMethodDef update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_propagate_changes_using_dependencies_obj",
    .tp_new = update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_new,
    .tp_dealloc = (destructor)update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_dealloc,
    .tp_traverse = (traverseproc)update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_traverse,
    .tp_clear = (inquiry)update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_clear,
    .tp_methods = update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj,
    .tp_members = update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_members,
    .tp_basicsize = sizeof(mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject),
    .tp_weaklistoffset = sizeof(mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_template = &CPyType_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_template_;

static PyObject *
update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_setup(PyTypeObject *type)
{
    mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject *self;
    self = (mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_vtable;
    self->vectorcall = CPyPy_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj(void)
{
    PyObject *self = update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_setup(CPyType_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *update___reprocess_nodes_env_setup(PyTypeObject *type);
PyObject *CPyDef_update___reprocess_nodes_env(void);

static PyObject *
update___reprocess_nodes_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_update___reprocess_nodes_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return update___reprocess_nodes_env_setup(type);
}

static int
update___reprocess_nodes_env_traverse(mypy___server___update___reprocess_nodes_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_key);
    Py_VISIT(self->_manager);
    Py_VISIT(self->_graph);
    Py_VISIT(self->_module_id);
    Py_VISIT(self->_nodeset);
    Py_VISIT(self->_deps);
    Py_VISIT(self->_processed_targets);
    Py_VISIT(self->_file_node);
    Py_VISIT(self->_old_symbols);
    Py_VISIT(self->_name);
    Py_VISIT(self->_names);
    Py_VISIT(self->_old_symbols_snapshot);
    return 0;
}

static int
update___reprocess_nodes_env_clear(mypy___server___update___reprocess_nodes_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_key);
    Py_CLEAR(self->_manager);
    Py_CLEAR(self->_graph);
    Py_CLEAR(self->_module_id);
    Py_CLEAR(self->_nodeset);
    Py_CLEAR(self->_deps);
    Py_CLEAR(self->_processed_targets);
    Py_CLEAR(self->_file_node);
    Py_CLEAR(self->_old_symbols);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_names);
    Py_CLEAR(self->_old_symbols_snapshot);
    return 0;
}

static void
update___reprocess_nodes_env_dealloc(mypy___server___update___reprocess_nodes_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, update___reprocess_nodes_env_dealloc)
    update___reprocess_nodes_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem update___reprocess_nodes_env_vtable[1];
static bool
CPyDef_update___reprocess_nodes_env_trait_vtable_setup(void)
{
    CPyVTableItem update___reprocess_nodes_env_vtable_scratch[] = {
        NULL
    };
    memcpy(update___reprocess_nodes_env_vtable, update___reprocess_nodes_env_vtable_scratch, sizeof(update___reprocess_nodes_env_vtable));
    return 1;
}

static PyMethodDef update___reprocess_nodes_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_update___reprocess_nodes_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "reprocess_nodes_env",
    .tp_new = update___reprocess_nodes_env_new,
    .tp_dealloc = (destructor)update___reprocess_nodes_env_dealloc,
    .tp_traverse = (traverseproc)update___reprocess_nodes_env_traverse,
    .tp_clear = (inquiry)update___reprocess_nodes_env_clear,
    .tp_methods = update___reprocess_nodes_env_methods,
    .tp_basicsize = sizeof(mypy___server___update___reprocess_nodes_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_update___reprocess_nodes_env_template = &CPyType_update___reprocess_nodes_env_template_;

static PyObject *
update___reprocess_nodes_env_setup(PyTypeObject *type)
{
    mypy___server___update___reprocess_nodes_envObject *self;
    self = (mypy___server___update___reprocess_nodes_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = update___reprocess_nodes_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_update___reprocess_nodes_env(void)
{
    PyObject *self = update___reprocess_nodes_env_setup(CPyType_update___reprocess_nodes_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__update___key_reprocess_nodes_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_update___key_reprocess_nodes_obj_____get__(self, instance, owner);
}
PyMemberDef update___key_reprocess_nodes_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___server___update___key_reprocess_nodes_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___server___update___key_reprocess_nodes_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *update___key_reprocess_nodes_obj_setup(PyTypeObject *type);
PyObject *CPyDef_update___key_reprocess_nodes_obj(void);

static PyObject *
update___key_reprocess_nodes_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_update___key_reprocess_nodes_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return update___key_reprocess_nodes_obj_setup(type);
}

static int
update___key_reprocess_nodes_obj_traverse(mypy___server___update___key_reprocess_nodes_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___server___update___key_reprocess_nodes_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___update___key_reprocess_nodes_objObject))));
    return 0;
}

static int
update___key_reprocess_nodes_obj_clear(mypy___server___update___key_reprocess_nodes_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___server___update___key_reprocess_nodes_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___update___key_reprocess_nodes_objObject))));
    return 0;
}

static void
update___key_reprocess_nodes_obj_dealloc(mypy___server___update___key_reprocess_nodes_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, update___key_reprocess_nodes_obj_dealloc)
    update___key_reprocess_nodes_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem update___key_reprocess_nodes_obj_vtable[2];
static bool
CPyDef_update___key_reprocess_nodes_obj_trait_vtable_setup(void)
{
    CPyVTableItem update___key_reprocess_nodes_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_update___key_reprocess_nodes_obj_____call__,
        (CPyVTableItem)CPyDef_update___key_reprocess_nodes_obj_____get__,
    };
    memcpy(update___key_reprocess_nodes_obj_vtable, update___key_reprocess_nodes_obj_vtable_scratch, sizeof(update___key_reprocess_nodes_obj_vtable));
    return 1;
}

static PyMethodDef update___key_reprocess_nodes_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_update___key_reprocess_nodes_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_update___key_reprocess_nodes_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_update___key_reprocess_nodes_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "key_reprocess_nodes_obj",
    .tp_new = update___key_reprocess_nodes_obj_new,
    .tp_dealloc = (destructor)update___key_reprocess_nodes_obj_dealloc,
    .tp_traverse = (traverseproc)update___key_reprocess_nodes_obj_traverse,
    .tp_clear = (inquiry)update___key_reprocess_nodes_obj_clear,
    .tp_methods = update___key_reprocess_nodes_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__update___key_reprocess_nodes_obj,
    .tp_members = update___key_reprocess_nodes_obj_members,
    .tp_basicsize = sizeof(mypy___server___update___key_reprocess_nodes_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___server___update___key_reprocess_nodes_objObject),
    .tp_weaklistoffset = sizeof(mypy___server___update___key_reprocess_nodes_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___server___update___key_reprocess_nodes_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_update___key_reprocess_nodes_obj_template = &CPyType_update___key_reprocess_nodes_obj_template_;

static PyObject *
update___key_reprocess_nodes_obj_setup(PyTypeObject *type)
{
    mypy___server___update___key_reprocess_nodes_objObject *self;
    self = (mypy___server___update___key_reprocess_nodes_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = update___key_reprocess_nodes_obj_vtable;
    self->vectorcall = CPyPy_update___key_reprocess_nodes_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_update___key_reprocess_nodes_obj(void)
{
    PyObject *self = update___key_reprocess_nodes_obj_setup(CPyType_update___key_reprocess_nodes_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *update___lookup_target_env_setup(PyTypeObject *type);
PyObject *CPyDef_update___lookup_target_env(void);

static PyObject *
update___lookup_target_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_update___lookup_target_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return update___lookup_target_env_setup(type);
}

static int
update___lookup_target_env_traverse(mypy___server___update___lookup_target_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_manager);
    Py_VISIT(self->_target);
    Py_VISIT(self->_not_found);
    return 0;
}

static int
update___lookup_target_env_clear(mypy___server___update___lookup_target_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_manager);
    Py_CLEAR(self->_target);
    Py_CLEAR(self->_not_found);
    return 0;
}

static void
update___lookup_target_env_dealloc(mypy___server___update___lookup_target_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, update___lookup_target_env_dealloc)
    update___lookup_target_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem update___lookup_target_env_vtable[1];
static bool
CPyDef_update___lookup_target_env_trait_vtable_setup(void)
{
    CPyVTableItem update___lookup_target_env_vtable_scratch[] = {
        NULL
    };
    memcpy(update___lookup_target_env_vtable, update___lookup_target_env_vtable_scratch, sizeof(update___lookup_target_env_vtable));
    return 1;
}

static PyMethodDef update___lookup_target_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_update___lookup_target_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "lookup_target_env",
    .tp_new = update___lookup_target_env_new,
    .tp_dealloc = (destructor)update___lookup_target_env_dealloc,
    .tp_traverse = (traverseproc)update___lookup_target_env_traverse,
    .tp_clear = (inquiry)update___lookup_target_env_clear,
    .tp_methods = update___lookup_target_env_methods,
    .tp_basicsize = sizeof(mypy___server___update___lookup_target_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_update___lookup_target_env_template = &CPyType_update___lookup_target_env_template_;

static PyObject *
update___lookup_target_env_setup(PyTypeObject *type)
{
    mypy___server___update___lookup_target_envObject *self;
    self = (mypy___server___update___lookup_target_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = update___lookup_target_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_update___lookup_target_env(void)
{
    PyObject *self = update___lookup_target_env_setup(CPyType_update___lookup_target_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__update___not_found_lookup_target_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_update___not_found_lookup_target_obj_____get__(self, instance, owner);
}
PyMemberDef update___not_found_lookup_target_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___server___update___not_found_lookup_target_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___server___update___not_found_lookup_target_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *update___not_found_lookup_target_obj_setup(PyTypeObject *type);
PyObject *CPyDef_update___not_found_lookup_target_obj(void);

static PyObject *
update___not_found_lookup_target_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_update___not_found_lookup_target_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return update___not_found_lookup_target_obj_setup(type);
}

static int
update___not_found_lookup_target_obj_traverse(mypy___server___update___not_found_lookup_target_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___server___update___not_found_lookup_target_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___update___not_found_lookup_target_objObject))));
    return 0;
}

static int
update___not_found_lookup_target_obj_clear(mypy___server___update___not_found_lookup_target_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___server___update___not_found_lookup_target_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___update___not_found_lookup_target_objObject))));
    return 0;
}

static void
update___not_found_lookup_target_obj_dealloc(mypy___server___update___not_found_lookup_target_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, update___not_found_lookup_target_obj_dealloc)
    update___not_found_lookup_target_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem update___not_found_lookup_target_obj_vtable[2];
static bool
CPyDef_update___not_found_lookup_target_obj_trait_vtable_setup(void)
{
    CPyVTableItem update___not_found_lookup_target_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_update___not_found_lookup_target_obj_____call__,
        (CPyVTableItem)CPyDef_update___not_found_lookup_target_obj_____get__,
    };
    memcpy(update___not_found_lookup_target_obj_vtable, update___not_found_lookup_target_obj_vtable_scratch, sizeof(update___not_found_lookup_target_obj_vtable));
    return 1;
}

static PyMethodDef update___not_found_lookup_target_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_update___not_found_lookup_target_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_update___not_found_lookup_target_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_update___not_found_lookup_target_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "not_found_lookup_target_obj",
    .tp_new = update___not_found_lookup_target_obj_new,
    .tp_dealloc = (destructor)update___not_found_lookup_target_obj_dealloc,
    .tp_traverse = (traverseproc)update___not_found_lookup_target_obj_traverse,
    .tp_clear = (inquiry)update___not_found_lookup_target_obj_clear,
    .tp_methods = update___not_found_lookup_target_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__update___not_found_lookup_target_obj,
    .tp_members = update___not_found_lookup_target_obj_members,
    .tp_basicsize = sizeof(mypy___server___update___not_found_lookup_target_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___server___update___not_found_lookup_target_objObject),
    .tp_weaklistoffset = sizeof(mypy___server___update___not_found_lookup_target_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___server___update___not_found_lookup_target_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_update___not_found_lookup_target_obj_template = &CPyType_update___not_found_lookup_target_obj_template_;

static PyObject *
update___not_found_lookup_target_obj_setup(PyTypeObject *type)
{
    mypy___server___update___not_found_lookup_target_objObject *self;
    self = (mypy___server___update___not_found_lookup_target_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = update___not_found_lookup_target_obj_vtable;
    self->vectorcall = CPyPy_update___not_found_lookup_target_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_update___not_found_lookup_target_obj(void)
{
    PyObject *self = update___not_found_lookup_target_obj_setup(CPyType_update___not_found_lookup_target_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *update___sort_messages_preserving_file_order_env_setup(PyTypeObject *type);
PyObject *CPyDef_update___sort_messages_preserving_file_order_env(void);

static PyObject *
update___sort_messages_preserving_file_order_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_update___sort_messages_preserving_file_order_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return update___sort_messages_preserving_file_order_env_setup(type);
}

static int
update___sort_messages_preserving_file_order_env_traverse(mypy___server___update___sort_messages_preserving_file_order_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_messages);
    Py_VISIT(self->_prev_messages);
    if (CPyTagged_CheckLong(self->_n)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_n));
    }
    Py_VISIT(self->_order);
    Py_VISIT(self->_msg);
    Py_VISIT(self->_fnam);
    Py_VISIT(self->_groups);
    if (CPyTagged_CheckLong(self->_i)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_i));
    }
    Py_VISIT(self->_maybe_fnam);
    Py_VISIT(self->_group);
    return 0;
}

static int
update___sort_messages_preserving_file_order_env_clear(mypy___server___update___sort_messages_preserving_file_order_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_messages);
    Py_CLEAR(self->_prev_messages);
    if (CPyTagged_CheckLong(self->_n)) {
        CPyTagged __tmp = self->_n;
        self->_n = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_order);
    Py_CLEAR(self->_msg);
    Py_CLEAR(self->_fnam);
    Py_CLEAR(self->_groups);
    if (CPyTagged_CheckLong(self->_i)) {
        CPyTagged __tmp = self->_i;
        self->_i = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_maybe_fnam);
    Py_CLEAR(self->_group);
    return 0;
}

static void
update___sort_messages_preserving_file_order_env_dealloc(mypy___server___update___sort_messages_preserving_file_order_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, update___sort_messages_preserving_file_order_env_dealloc)
    update___sort_messages_preserving_file_order_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem update___sort_messages_preserving_file_order_env_vtable[1];
static bool
CPyDef_update___sort_messages_preserving_file_order_env_trait_vtable_setup(void)
{
    CPyVTableItem update___sort_messages_preserving_file_order_env_vtable_scratch[] = {
        NULL
    };
    memcpy(update___sort_messages_preserving_file_order_env_vtable, update___sort_messages_preserving_file_order_env_vtable_scratch, sizeof(update___sort_messages_preserving_file_order_env_vtable));
    return 1;
}

static PyMethodDef update___sort_messages_preserving_file_order_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_update___sort_messages_preserving_file_order_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "sort_messages_preserving_file_order_env",
    .tp_new = update___sort_messages_preserving_file_order_env_new,
    .tp_dealloc = (destructor)update___sort_messages_preserving_file_order_env_dealloc,
    .tp_traverse = (traverseproc)update___sort_messages_preserving_file_order_env_traverse,
    .tp_clear = (inquiry)update___sort_messages_preserving_file_order_env_clear,
    .tp_methods = update___sort_messages_preserving_file_order_env_methods,
    .tp_basicsize = sizeof(mypy___server___update___sort_messages_preserving_file_order_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_update___sort_messages_preserving_file_order_env_template = &CPyType_update___sort_messages_preserving_file_order_env_template_;

static PyObject *
update___sort_messages_preserving_file_order_env_setup(PyTypeObject *type)
{
    mypy___server___update___sort_messages_preserving_file_order_envObject *self;
    self = (mypy___server___update___sort_messages_preserving_file_order_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = update___sort_messages_preserving_file_order_env_vtable;
    self->_n = CPY_INT_TAG;
    self->_i = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_update___sort_messages_preserving_file_order_env(void)
{
    PyObject *self = update___sort_messages_preserving_file_order_env_setup(CPyType_update___sort_messages_preserving_file_order_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_____get__(self, instance, owner);
}
PyMemberDef update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_setup(PyTypeObject *type);
PyObject *CPyDef_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj(void);

static PyObject *
update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_setup(type);
}

static int
update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_traverse(mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject))));
    return 0;
}

static int
update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_clear(mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject))));
    return 0;
}

static void
update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_dealloc(mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_dealloc)
    update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_vtable[2];
static bool
CPyDef_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_trait_vtable_setup(void)
{
    CPyVTableItem update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_____call__,
        (CPyVTableItem)CPyDef_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_____get__,
    };
    memcpy(update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_vtable, update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_vtable_scratch, sizeof(update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_vtable));
    return 1;
}

static PyMethodDef update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__1_sort_messages_preserving_file_order_obj",
    .tp_new = update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_new,
    .tp_dealloc = (destructor)update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_dealloc,
    .tp_traverse = (traverseproc)update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_traverse,
    .tp_clear = (inquiry)update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_clear,
    .tp_methods = update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj,
    .tp_members = update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_members,
    .tp_basicsize = sizeof(mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject),
    .tp_weaklistoffset = sizeof(mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_template = &CPyType_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_template_;

static PyObject *
update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_setup(PyTypeObject *type)
{
    mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject *self;
    self = (mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_vtable;
    self->vectorcall = CPyPy_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj(void)
{
    PyObject *self = update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_setup(CPyType_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef updatemodule_methods[] = {
    {"find_unloaded_deps", (PyCFunction)CPyPy_update___find_unloaded_deps, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"ensure_deps_loaded", (PyCFunction)CPyPy_update___ensure_deps_loaded, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"ensure_trees_loaded", (PyCFunction)CPyPy_update___ensure_trees_loaded, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"update_module_isolated", (PyCFunction)CPyPy_update___update_module_isolated, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_relative_leaf_module", (PyCFunction)CPyPy_update___find_relative_leaf_module, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"delete_module", (PyCFunction)CPyPy_update___delete_module, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"dedupe_modules", (PyCFunction)CPyPy_update___dedupe_modules, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_module_to_path_map", (PyCFunction)CPyPy_update___get_module_to_path_map, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_sources", (PyCFunction)CPyPy_update___get_sources, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"calculate_active_triggers", (PyCFunction)CPyPy_update___calculate_active_triggers, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"replace_modules_with_new_variants", (PyCFunction)CPyPy_update___replace_modules_with_new_variants, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"propagate_changes_using_dependencies", (PyCFunction)CPyPy_update___propagate_changes_using_dependencies, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_targets_recursive", (PyCFunction)CPyPy_update___find_targets_recursive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"reprocess_nodes", (PyCFunction)CPyPy_update___reprocess_nodes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_symbol_tables_recursive", (PyCFunction)CPyPy_update___find_symbol_tables_recursive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"update_deps", (PyCFunction)CPyPy_update___update_deps, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"lookup_target", (PyCFunction)CPyPy_update___lookup_target, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_verbose", (PyCFunction)CPyPy_update___is_verbose, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"target_from_node", (PyCFunction)CPyPy_update___target_from_node, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"refresh_suppressed_submodules", (PyCFunction)CPyPy_update___refresh_suppressed_submodules, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"extract_fnam_from_message", (PyCFunction)CPyPy_update___extract_fnam_from_message, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"extract_possible_fnam_from_message", (PyCFunction)CPyPy_update___extract_possible_fnam_from_message, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"sort_messages_preserving_file_order", (PyCFunction)CPyPy_update___sort_messages_preserving_file_order, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef updatemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.server.update",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    updatemodule_methods
};

PyObject *CPyInit_mypy___server___update(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___server___update_internal) {
        Py_INCREF(CPyModule_mypy___server___update_internal);
        return CPyModule_mypy___server___update_internal;
    }
    CPyModule_mypy___server___update_internal = PyModule_Create(&updatemodule);
    if (unlikely(CPyModule_mypy___server___update_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___server___update_internal, "__name__");
    CPyStatic_update___globals = PyModule_GetDict(CPyModule_mypy___server___update_internal);
    if (unlikely(CPyStatic_update___globals == NULL))
        goto fail;
    CPyType_update___update_module_isolated_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_update___update_module_isolated_env_template, NULL, modname);
    if (unlikely(!CPyType_update___update_module_isolated_env))
        goto fail;
    CPyType_update___restore_update_module_isolated_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_update___restore_update_module_isolated_obj_template, NULL, modname);
    if (unlikely(!CPyType_update___restore_update_module_isolated_obj))
        goto fail;
    CPyType_update___propagate_changes_using_dependencies_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_update___propagate_changes_using_dependencies_env_template, NULL, modname);
    if (unlikely(!CPyType_update___propagate_changes_using_dependencies_env))
        goto fail;
    CPyType_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_template, NULL, modname);
    if (unlikely(!CPyType_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj))
        goto fail;
    CPyType_update___reprocess_nodes_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_update___reprocess_nodes_env_template, NULL, modname);
    if (unlikely(!CPyType_update___reprocess_nodes_env))
        goto fail;
    CPyType_update___key_reprocess_nodes_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_update___key_reprocess_nodes_obj_template, NULL, modname);
    if (unlikely(!CPyType_update___key_reprocess_nodes_obj))
        goto fail;
    CPyType_update___lookup_target_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_update___lookup_target_env_template, NULL, modname);
    if (unlikely(!CPyType_update___lookup_target_env))
        goto fail;
    CPyType_update___not_found_lookup_target_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_update___not_found_lookup_target_obj_template, NULL, modname);
    if (unlikely(!CPyType_update___not_found_lookup_target_obj))
        goto fail;
    CPyType_update___sort_messages_preserving_file_order_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_update___sort_messages_preserving_file_order_env_template, NULL, modname);
    if (unlikely(!CPyType_update___sort_messages_preserving_file_order_env))
        goto fail;
    CPyType_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_template, NULL, modname);
    if (unlikely(!CPyType_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_update_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___server___update_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___server___update_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_update___INIT_SUFFIXES.f0);
    CPy_XDECREF(CPyStatic_update___INIT_SUFFIXES.f1);
    CPyStatic_update___INIT_SUFFIXES = (tuple_T2OO) { NULL, NULL };
    Py_CLEAR(CPyType_update___FineGrainedBuildManager);
    Py_CLEAR(CPyType_update___NormalUpdate);
    Py_CLEAR(CPyType_update___BlockedUpdate);
    Py_CLEAR(CPyType_update___update_module_isolated_env);
    Py_CLEAR(CPyType_update___restore_update_module_isolated_obj);
    Py_CLEAR(CPyType_update___propagate_changes_using_dependencies_env);
    Py_CLEAR(CPyType_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj);
    Py_CLEAR(CPyType_update___reprocess_nodes_env);
    Py_CLEAR(CPyType_update___key_reprocess_nodes_obj);
    Py_CLEAR(CPyType_update___lookup_target_env);
    Py_CLEAR(CPyType_update___not_found_lookup_target_obj);
    Py_CLEAR(CPyType_update___sort_messages_preserving_file_order_env);
    Py_CLEAR(CPyType_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj);
    return NULL;
}

char CPyDef_update___FineGrainedBuildManager_____init__(PyObject *cpy_r_self, PyObject *cpy_r_result) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_manager;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = ((mypy___build___BuildResultObject *)cpy_r_result)->_manager;
    CPy_INCREF(cpy_r_r0);
    cpy_r_manager = cpy_r_r0;
    CPy_INCREF(cpy_r_manager);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager = cpy_r_manager;
    cpy_r_r1 = ((mypy___build___BuildResultObject *)cpy_r_result)->_graph;
    CPy_INCREF(cpy_r_r1);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_graph = cpy_r_r1;
    cpy_r_r2 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_graph;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_update___get_module_to_path_map(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "__init__", 185, CPyStatic_update___globals);
        goto CPyL13;
    }
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_modules = cpy_r_r3;
    cpy_r_r4 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_fg_deps;
    CPy_INCREF(cpy_r_r4);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_deps = cpy_r_r4;
    cpy_r_r5 = CPyStatics[245]; /* '@root' */
    cpy_r_r6 = CPyDef_mypy___build___BuildManager___load_fine_grained_deps(cpy_r_manager, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "__init__", 188, CPyStatic_update___globals);
        goto CPyL13;
    }
    cpy_r_r7 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_deps;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_deps___merge_dependencies(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "__init__", 188, CPyStatic_update___globals);
        goto CPyL13;
    }
    cpy_r_r9 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_errors;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_manager);
    cpy_r_r10 = CPyDef_mypy___errors___Errors___targets(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "__init__", 189, CPyStatic_update___globals);
        goto CPyL12;
    }
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_targets_with_errors = cpy_r_r10;
    cpy_r_r11 = ((mypy___build___BuildResultObject *)cpy_r_result)->_errors;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r13[1] = {cpy_r_r11};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r14, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "__init__", 190, CPyStatic_update___globals);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r11);
    if (likely(PyList_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "__init__", 190, CPyStatic_update___globals, "list", cpy_r_r15);
        goto CPyL12;
    }
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_messages = cpy_r_r16;
    cpy_r_r17 = Py_None;
    CPy_INCREF(cpy_r_r17);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_blocking_error = cpy_r_r17;
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "__init__", 194, CPyStatic_update___globals);
        goto CPyL12;
    }
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_stale = cpy_r_r18;
    cpy_r_r19 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    ((mypy___build___BuildManagerObject *)cpy_r_r19)->_cache_enabled = 0;
    cpy_r_r21 = PyList_New(0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "__init__", 201, CPyStatic_update___globals);
        goto CPyL12;
    }
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_triggered = cpy_r_r21;
    cpy_r_r22 = PyList_New(0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "__init__", 203, CPyStatic_update___globals);
        goto CPyL12;
    }
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_changed_modules = cpy_r_r22;
    cpy_r_r23 = PyList_New(0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "__init__", 205, CPyStatic_update___globals);
        goto CPyL12;
    }
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_updated_modules = cpy_r_r23;
    cpy_r_r24 = PyList_New(0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "__init__", 207, CPyStatic_update___globals);
        goto CPyL12;
    }
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_processed_targets = cpy_r_r24;
    return 1;
CPyL12: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL13: ;
    CPy_DecRef(cpy_r_manager);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL12;
}

PyObject *CPyPy_update___FineGrainedBuildManager_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"result", 0};
    PyObject *obj_result;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_result)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_update___FineGrainedBuildManager))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.update.FineGrainedBuildManager", obj_self); 
        goto fail;
    }
    PyObject *arg_result;
    if (likely(Py_TYPE(obj_result) == CPyType_mypy___build___BuildResult))
        arg_result = obj_result;
    else {
        CPy_TypeError("mypy.build.BuildResult", obj_result); 
        goto fail;
    }
    char retval = CPyDef_update___FineGrainedBuildManager_____init__(arg_self, arg_result);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "__init__", 173, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___FineGrainedBuildManager___update(PyObject *cpy_r_self, PyObject *cpy_r_changed_modules, PyObject *cpy_r_removed_modules, char cpy_r_followed) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_messages;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T2OO cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r17;
    PyObject *cpy_r__;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_removed_set;
    char cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    tuple_T2OO cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r47;
    PyObject *cpy_r___2;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_initial_set;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    int64_t cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    tuple_T2OO cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_id_2;
    PyObject *cpy_r_r64;
    PyObject *cpy_r___3;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject **cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    CPyTagged cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_blocking_error;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    tuple_T2OO cpy_r_r104;
    PyObject *cpy_r_r105;
    int32_t cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    tuple_T2OO cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    tuple_T2OO cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyPtr cpy_r_r121;
    CPyPtr cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    tuple_T2OO cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    tuple_T3OT2OOO cpy_r_r131;
    tuple_T3OT2OOO cpy_r_result;
    PyObject *cpy_r_r132;
    tuple_T2OO cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_next_id;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_next_path;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_blocker_messages;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    tuple_T2OO cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    CPyPtr cpy_r_r144;
    int64_t cpy_r_r145;
    CPyTagged cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    int32_t cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    CPyPtr cpy_r_r159;
    int64_t cpy_r_r160;
    CPyTagged cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject **cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    cpy_r_r0 = NULL;
    cpy_r_messages = cpy_r_r0;
    if (cpy_r_followed != 2) goto CPyL2;
    cpy_r_followed = 0;
CPyL2: ;
    cpy_r_r1 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_processed_targets;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[1550]; /* 'clear' */
    PyObject *cpy_r_r3[1] = {cpy_r_r1};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 234, CPyStatic_update___globals);
        goto CPyL87;
    } else
        goto CPyL88;
CPyL3: ;
    CPy_DECREF(cpy_r_r1);
    cpy_r_r6 = PyNumber_Add(cpy_r_changed_modules, cpy_r_removed_modules);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 235, CPyStatic_update___globals);
        goto CPyL89;
    }
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update", 235, CPyStatic_update___globals, "list", cpy_r_r6);
        goto CPyL89;
    }
    cpy_r_changed_modules = cpy_r_r7;
    cpy_r_r8 = PySet_New(NULL);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 236, CPyStatic_update___globals);
        goto CPyL90;
    }
    cpy_r_r9 = 0;
CPyL7: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_removed_modules)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL11;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_removed_modules, cpy_r_r9);
    PyObject *__tmp6621;
    if (unlikely(!(PyTuple_Check(cpy_r_r14) && PyTuple_GET_SIZE(cpy_r_r14) == 2))) {
        __tmp6621 = NULL;
        goto __LL6622;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r14, 0))))
        __tmp6621 = PyTuple_GET_ITEM(cpy_r_r14, 0);
    else {
        __tmp6621 = NULL;
    }
    if (__tmp6621 == NULL) goto __LL6622;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r14, 1))))
        __tmp6621 = PyTuple_GET_ITEM(cpy_r_r14, 1);
    else {
        __tmp6621 = NULL;
    }
    if (__tmp6621 == NULL) goto __LL6622;
    __tmp6621 = cpy_r_r14;
__LL6622: ;
    if (unlikely(__tmp6621 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r14); cpy_r_r15 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6623 = PyTuple_GET_ITEM(cpy_r_r14, 0);
        CPy_INCREF(__tmp6623);
        PyObject *__tmp6624;
        if (likely(PyUnicode_Check(__tmp6623)))
            __tmp6624 = __tmp6623;
        else {
            CPy_TypeError("str", __tmp6623); 
            __tmp6624 = NULL;
        }
        cpy_r_r15.f0 = __tmp6624;
        PyObject *__tmp6625 = PyTuple_GET_ITEM(cpy_r_r14, 1);
        CPy_INCREF(__tmp6625);
        PyObject *__tmp6626;
        if (likely(PyUnicode_Check(__tmp6625)))
            __tmp6626 = __tmp6625;
        else {
            CPy_TypeError("str", __tmp6625); 
            __tmp6626 = NULL;
        }
        cpy_r_r15.f1 = __tmp6626;
    }
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 236, CPyStatic_update___globals);
        goto CPyL91;
    }
    cpy_r_r16 = cpy_r_r15.f0;
    CPy_INCREF(cpy_r_r16);
    cpy_r_module = cpy_r_r16;
    cpy_r_r17 = cpy_r_r15.f1;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r15.f0);
    CPy_DECREF(cpy_r_r15.f1);
    cpy_r__ = cpy_r_r17;
    CPy_DECREF(cpy_r__);
    cpy_r_r18 = PySet_Add(cpy_r_r8, cpy_r_module);
    CPy_DECREF(cpy_r_module);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 236, CPyStatic_update___globals);
        goto CPyL91;
    }
    cpy_r_r20 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r20;
    goto CPyL7;
CPyL11: ;
    cpy_r_removed_set = cpy_r_r8;
    CPy_INCREF(cpy_r_changed_modules);
    CPy_DECREF(((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_changed_modules);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_changed_modules = cpy_r_changed_modules;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_changed_modules)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = cpy_r_r24 != 0;
    if (cpy_r_r25) {
        goto CPyL13;
    } else
        goto CPyL92;
CPyL12: ;
    cpy_r_r26 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_messages;
    CPy_INCREF(cpy_r_r26);
    return cpy_r_r26;
CPyL13: ;
    cpy_r_r27 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    cpy_r_r28 = ((mypy___build___BuildManagerObject *)cpy_r_r27)->_find_module_cache;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDef_modulefinder___FindModuleCache___clear(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 243, CPyStatic_update___globals);
        goto CPyL93;
    }
    cpy_r_r30 = PyList_New(0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 245, CPyStatic_update___globals);
        goto CPyL93;
    }
    CPy_DECREF(((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_triggered);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_triggered = cpy_r_r30;
    cpy_r_r32 = PyList_New(0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 246, CPyStatic_update___globals);
        goto CPyL93;
    }
    CPy_DECREF(((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_updated_modules);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_updated_modules = cpy_r_r32;
    cpy_r_r34 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_stale;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = PyNumber_Add(cpy_r_changed_modules, cpy_r_r34);
    CPy_DECREF(cpy_r_changed_modules);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 247, CPyStatic_update___globals);
        goto CPyL94;
    }
    if (likely(PyList_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update", 247, CPyStatic_update___globals, "list", cpy_r_r35);
        goto CPyL94;
    }
    cpy_r_r37 = CPyDef_update___dedupe_modules(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 247, CPyStatic_update___globals);
        goto CPyL94;
    }
    cpy_r_changed_modules = cpy_r_r37;
    cpy_r_r38 = PySet_New(NULL);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 248, CPyStatic_update___globals);
        goto CPyL93;
    }
    cpy_r_r39 = 0;
CPyL21: ;
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_changed_modules)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 << 1;
    cpy_r_r43 = (Py_ssize_t)cpy_r_r39 < (Py_ssize_t)cpy_r_r42;
    if (!cpy_r_r43) goto CPyL25;
    cpy_r_r44 = CPyList_GetItemUnsafe(cpy_r_changed_modules, cpy_r_r39);
    PyObject *__tmp6627;
    if (unlikely(!(PyTuple_Check(cpy_r_r44) && PyTuple_GET_SIZE(cpy_r_r44) == 2))) {
        __tmp6627 = NULL;
        goto __LL6628;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r44, 0))))
        __tmp6627 = PyTuple_GET_ITEM(cpy_r_r44, 0);
    else {
        __tmp6627 = NULL;
    }
    if (__tmp6627 == NULL) goto __LL6628;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r44, 1))))
        __tmp6627 = PyTuple_GET_ITEM(cpy_r_r44, 1);
    else {
        __tmp6627 = NULL;
    }
    if (__tmp6627 == NULL) goto __LL6628;
    __tmp6627 = cpy_r_r44;
__LL6628: ;
    if (unlikely(__tmp6627 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r44); cpy_r_r45 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6629 = PyTuple_GET_ITEM(cpy_r_r44, 0);
        CPy_INCREF(__tmp6629);
        PyObject *__tmp6630;
        if (likely(PyUnicode_Check(__tmp6629)))
            __tmp6630 = __tmp6629;
        else {
            CPy_TypeError("str", __tmp6629); 
            __tmp6630 = NULL;
        }
        cpy_r_r45.f0 = __tmp6630;
        PyObject *__tmp6631 = PyTuple_GET_ITEM(cpy_r_r44, 1);
        CPy_INCREF(__tmp6631);
        PyObject *__tmp6632;
        if (likely(PyUnicode_Check(__tmp6631)))
            __tmp6632 = __tmp6631;
        else {
            CPy_TypeError("str", __tmp6631); 
            __tmp6632 = NULL;
        }
        cpy_r_r45.f1 = __tmp6632;
    }
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 248, CPyStatic_update___globals);
        goto CPyL95;
    }
    cpy_r_r46 = cpy_r_r45.f0;
    CPy_INCREF(cpy_r_r46);
    cpy_r_id = cpy_r_r46;
    cpy_r_r47 = cpy_r_r45.f1;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r45.f0);
    CPy_DECREF(cpy_r_r45.f1);
    cpy_r___2 = cpy_r_r47;
    CPy_DECREF(cpy_r___2);
    cpy_r_r48 = PySet_Add(cpy_r_r38, cpy_r_id);
    CPy_DECREF(cpy_r_id);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 248, CPyStatic_update___globals);
        goto CPyL95;
    }
    cpy_r_r50 = cpy_r_r39 + 2;
    cpy_r_r39 = cpy_r_r50;
    goto CPyL21;
CPyL25: ;
    cpy_r_initial_set = cpy_r_r38;
    cpy_r_r51 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = CPyStatics[71]; /* ', ' */
    cpy_r_r53 = (CPyPtr)&((PyVarObject *)cpy_r_changed_modules)->ob_size;
    cpy_r_r54 = *(int64_t *)cpy_r_r53;
    cpy_r_r55 = PyList_New(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 250, CPyStatic_update___globals);
        goto CPyL96;
    }
    cpy_r_r56 = 0;
CPyL27: ;
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_changed_modules)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 << 1;
    cpy_r_r60 = (Py_ssize_t)cpy_r_r56 < (Py_ssize_t)cpy_r_r59;
    if (!cpy_r_r60) goto CPyL34;
    cpy_r_r61 = CPyList_GetItemUnsafe(cpy_r_changed_modules, cpy_r_r56);
    PyObject *__tmp6633;
    if (unlikely(!(PyTuple_Check(cpy_r_r61) && PyTuple_GET_SIZE(cpy_r_r61) == 2))) {
        __tmp6633 = NULL;
        goto __LL6634;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r61, 0))))
        __tmp6633 = PyTuple_GET_ITEM(cpy_r_r61, 0);
    else {
        __tmp6633 = NULL;
    }
    if (__tmp6633 == NULL) goto __LL6634;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r61, 1))))
        __tmp6633 = PyTuple_GET_ITEM(cpy_r_r61, 1);
    else {
        __tmp6633 = NULL;
    }
    if (__tmp6633 == NULL) goto __LL6634;
    __tmp6633 = cpy_r_r61;
__LL6634: ;
    if (unlikely(__tmp6633 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r61); cpy_r_r62 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6635 = PyTuple_GET_ITEM(cpy_r_r61, 0);
        CPy_INCREF(__tmp6635);
        PyObject *__tmp6636;
        if (likely(PyUnicode_Check(__tmp6635)))
            __tmp6636 = __tmp6635;
        else {
            CPy_TypeError("str", __tmp6635); 
            __tmp6636 = NULL;
        }
        cpy_r_r62.f0 = __tmp6636;
        PyObject *__tmp6637 = PyTuple_GET_ITEM(cpy_r_r61, 1);
        CPy_INCREF(__tmp6637);
        PyObject *__tmp6638;
        if (likely(PyUnicode_Check(__tmp6637)))
            __tmp6638 = __tmp6637;
        else {
            CPy_TypeError("str", __tmp6637); 
            __tmp6638 = NULL;
        }
        cpy_r_r62.f1 = __tmp6638;
    }
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 250, CPyStatic_update___globals);
        goto CPyL97;
    }
    cpy_r_r63 = cpy_r_r62.f0;
    CPy_INCREF(cpy_r_r63);
    cpy_r_id_2 = cpy_r_r63;
    cpy_r_r64 = cpy_r_r62.f1;
    CPy_INCREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r62.f0);
    CPy_DECREF(cpy_r_r62.f1);
    cpy_r___3 = cpy_r_r64;
    CPy_DECREF(cpy_r___3);
    cpy_r_r65 = CPyModule_builtins;
    cpy_r_r66 = CPyStatics[146]; /* 'repr' */
    cpy_r_r67 = CPyObject_GetAttr(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 250, CPyStatic_update___globals);
        goto CPyL98;
    }
    PyObject *cpy_r_r68[1] = {cpy_r_id_2};
    cpy_r_r69 = (PyObject **)&cpy_r_r68;
    cpy_r_r70 = _PyObject_Vectorcall(cpy_r_r67, cpy_r_r69, 1, 0);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 250, CPyStatic_update___globals);
        goto CPyL98;
    }
    CPy_DECREF(cpy_r_id_2);
    if (likely(PyUnicode_Check(cpy_r_r70)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update", 250, CPyStatic_update___globals, "str", cpy_r_r70);
        goto CPyL97;
    }
    cpy_r_r72 = CPyList_SetItemUnsafe(cpy_r_r55, cpy_r_r56, cpy_r_r71);
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 250, CPyStatic_update___globals);
        goto CPyL97;
    }
    cpy_r_r73 = cpy_r_r56 + 2;
    cpy_r_r56 = cpy_r_r73;
    goto CPyL27;
CPyL34: ;
    cpy_r_r74 = PyUnicode_Join(cpy_r_r52, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 250, CPyStatic_update___globals);
        goto CPyL96;
    }
    cpy_r_r75 = CPyStatics[5361]; /* '==== update ' */
    cpy_r_r76 = CPyStatics[5362]; /* ' ====' */
    cpy_r_r77 = CPyStr_Build(3, cpy_r_r75, cpy_r_r74, cpy_r_r76);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 250, CPyStatic_update___globals);
        goto CPyL96;
    }
    cpy_r_r78 = PyTuple_Pack(1, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 249, CPyStatic_update___globals);
        goto CPyL96;
    }
    cpy_r_r79 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_r51, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r79 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 249, CPyStatic_update___globals);
        goto CPyL99;
    }
    cpy_r_r80 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_targets_with_errors;
    CPy_INCREF(cpy_r_r80);
    cpy_r_r81 = PyObject_IsTrue(cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 252, CPyStatic_update___globals);
        goto CPyL99;
    }
    cpy_r_r83 = cpy_r_r81;
    if (!cpy_r_r83) goto CPyL49;
    cpy_r_r84 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    CPy_INCREF(cpy_r_r84);
    cpy_r_r85 = CPyDef_update___is_verbose(cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 252, CPyStatic_update___globals);
        goto CPyL99;
    }
    if (!cpy_r_r85) goto CPyL49;
    cpy_r_r86 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_targets_with_errors;
    CPy_INCREF(cpy_r_r87);
    cpy_r_r88 = CPyModule_builtins;
    cpy_r_r89 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r90 = CPyObject_GetAttr(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 254, CPyStatic_update___globals);
        goto CPyL100;
    }
    PyObject *cpy_r_r91[1] = {cpy_r_r87};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = _PyObject_Vectorcall(cpy_r_r90, cpy_r_r92, 1, 0);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 254, CPyStatic_update___globals);
        goto CPyL100;
    }
    CPy_DECREF(cpy_r_r87);
    if (likely(PyList_Check(cpy_r_r93)))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update", 254, CPyStatic_update___globals, "list", cpy_r_r93);
        goto CPyL101;
    }
    cpy_r_r95 = PyObject_Str(cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 254, CPyStatic_update___globals);
        goto CPyL101;
    }
    cpy_r_r96 = CPyStatics[5363]; /* 'previous targets with errors: ' */
    cpy_r_r97 = CPyStr_Build(2, cpy_r_r96, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 254, CPyStatic_update___globals);
        goto CPyL101;
    }
    cpy_r_r98 = PyTuple_Pack(1, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 253, CPyStatic_update___globals);
        goto CPyL101;
    }
    cpy_r_r99 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_r86, cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r99 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 253, CPyStatic_update___globals);
        goto CPyL99;
    }
CPyL49: ;
    cpy_r_r100 = Py_None;
    CPy_INCREF(cpy_r_r100);
    cpy_r_blocking_error = cpy_r_r100;
    cpy_r_r101 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_blocking_error;
    CPy_INCREF(cpy_r_r101);
    cpy_r_r102 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r103 = cpy_r_r101 != cpy_r_r102;
    if (!cpy_r_r103) goto CPyL102;
    PyObject *__tmp6639;
    if (unlikely(!(PyTuple_Check(cpy_r_r101) && PyTuple_GET_SIZE(cpy_r_r101) == 2))) {
        __tmp6639 = NULL;
        goto __LL6640;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r101, 0))))
        __tmp6639 = PyTuple_GET_ITEM(cpy_r_r101, 0);
    else {
        __tmp6639 = NULL;
    }
    if (__tmp6639 == NULL) goto __LL6640;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r101, 1))))
        __tmp6639 = PyTuple_GET_ITEM(cpy_r_r101, 1);
    else {
        __tmp6639 = NULL;
    }
    if (__tmp6639 == NULL) goto __LL6640;
    __tmp6639 = cpy_r_r101;
__LL6640: ;
    if (unlikely(__tmp6639 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r101); cpy_r_r104 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6641 = PyTuple_GET_ITEM(cpy_r_r101, 0);
        CPy_INCREF(__tmp6641);
        PyObject *__tmp6642;
        if (likely(PyUnicode_Check(__tmp6641)))
            __tmp6642 = __tmp6641;
        else {
            CPy_TypeError("str", __tmp6641); 
            __tmp6642 = NULL;
        }
        cpy_r_r104.f0 = __tmp6642;
        PyObject *__tmp6643 = PyTuple_GET_ITEM(cpy_r_r101, 1);
        CPy_INCREF(__tmp6643);
        PyObject *__tmp6644;
        if (likely(PyUnicode_Check(__tmp6643)))
            __tmp6644 = __tmp6643;
        else {
            CPy_TypeError("str", __tmp6643); 
            __tmp6644 = NULL;
        }
        cpy_r_r104.f1 = __tmp6644;
    }
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r104.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 258, CPyStatic_update___globals);
        goto CPyL103;
    }
    cpy_r_r105 = PyTuple_New(2);
    if (unlikely(cpy_r_r105 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6645 = cpy_r_r104.f0;
    PyTuple_SET_ITEM(cpy_r_r105, 0, __tmp6645);
    PyObject *__tmp6646 = cpy_r_r104.f1;
    PyTuple_SET_ITEM(cpy_r_r105, 1, __tmp6646);
    cpy_r_r106 = PyObject_IsTrue(cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 258, CPyStatic_update___globals);
        goto CPyL103;
    }
    cpy_r_r108 = cpy_r_r106;
    if (cpy_r_r108) {
        goto CPyL104;
    } else
        goto CPyL64;
CPyL53: ;
    cpy_r_r109 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    CPy_INCREF(cpy_r_r109);
    cpy_r_r110 = CPyStatics[5364]; /* 'existing blocker: ' */
    cpy_r_r111 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_blocking_error;
    CPy_INCREF(cpy_r_r111);
    PyObject *__tmp6647;
    if (unlikely(!(PyTuple_Check(cpy_r_r111) && PyTuple_GET_SIZE(cpy_r_r111) == 2))) {
        __tmp6647 = NULL;
        goto __LL6648;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r111, 0))))
        __tmp6647 = PyTuple_GET_ITEM(cpy_r_r111, 0);
    else {
        __tmp6647 = NULL;
    }
    if (__tmp6647 == NULL) goto __LL6648;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r111, 1))))
        __tmp6647 = PyTuple_GET_ITEM(cpy_r_r111, 1);
    else {
        __tmp6647 = NULL;
    }
    if (__tmp6647 == NULL) goto __LL6648;
    __tmp6647 = cpy_r_r111;
__LL6648: ;
    if (unlikely(__tmp6647 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r111); cpy_r_r112 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6649 = PyTuple_GET_ITEM(cpy_r_r111, 0);
        CPy_INCREF(__tmp6649);
        PyObject *__tmp6650;
        if (likely(PyUnicode_Check(__tmp6649)))
            __tmp6650 = __tmp6649;
        else {
            CPy_TypeError("str", __tmp6649); 
            __tmp6650 = NULL;
        }
        cpy_r_r112.f0 = __tmp6650;
        PyObject *__tmp6651 = PyTuple_GET_ITEM(cpy_r_r111, 1);
        CPy_INCREF(__tmp6651);
        PyObject *__tmp6652;
        if (likely(PyUnicode_Check(__tmp6651)))
            __tmp6652 = __tmp6651;
        else {
            CPy_TypeError("str", __tmp6651); 
            __tmp6652 = NULL;
        }
        cpy_r_r112.f1 = __tmp6652;
    }
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 261, CPyStatic_update___globals);
        goto CPyL105;
    }
    cpy_r_r113 = cpy_r_r112.f0;
    CPy_INCREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r112.f0);
    CPy_DECREF(cpy_r_r112.f1);
    cpy_r_r114 = CPyStr_Build(2, cpy_r_r110, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 261, CPyStatic_update___globals);
        goto CPyL105;
    }
    cpy_r_r115 = PyTuple_Pack(1, cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 261, CPyStatic_update___globals);
        goto CPyL105;
    }
    cpy_r_r116 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_r109, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r116 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 261, CPyStatic_update___globals);
        goto CPyL99;
    }
    cpy_r_r117 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_blocking_error;
    CPy_INCREF(cpy_r_r117);
    PyObject *__tmp6653;
    if (unlikely(!(PyTuple_Check(cpy_r_r117) && PyTuple_GET_SIZE(cpy_r_r117) == 2))) {
        __tmp6653 = NULL;
        goto __LL6654;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r117, 0))))
        __tmp6653 = PyTuple_GET_ITEM(cpy_r_r117, 0);
    else {
        __tmp6653 = NULL;
    }
    if (__tmp6653 == NULL) goto __LL6654;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r117, 1))))
        __tmp6653 = PyTuple_GET_ITEM(cpy_r_r117, 1);
    else {
        __tmp6653 = NULL;
    }
    if (__tmp6653 == NULL) goto __LL6654;
    __tmp6653 = cpy_r_r117;
__LL6654: ;
    if (unlikely(__tmp6653 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r117); cpy_r_r118 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6655 = PyTuple_GET_ITEM(cpy_r_r117, 0);
        CPy_INCREF(__tmp6655);
        PyObject *__tmp6656;
        if (likely(PyUnicode_Check(__tmp6655)))
            __tmp6656 = __tmp6655;
        else {
            CPy_TypeError("str", __tmp6655); 
            __tmp6656 = NULL;
        }
        cpy_r_r118.f0 = __tmp6656;
        PyObject *__tmp6657 = PyTuple_GET_ITEM(cpy_r_r117, 1);
        CPy_INCREF(__tmp6657);
        PyObject *__tmp6658;
        if (likely(PyUnicode_Check(__tmp6657)))
            __tmp6658 = __tmp6657;
        else {
            CPy_TypeError("str", __tmp6657); 
            __tmp6658 = NULL;
        }
        cpy_r_r118.f1 = __tmp6658;
    }
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r118.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 262, CPyStatic_update___globals);
        goto CPyL99;
    }
    cpy_r_r119 = PyList_New(1);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 262, CPyStatic_update___globals);
        goto CPyL106;
    }
    cpy_r_r120 = PyTuple_New(2);
    if (unlikely(cpy_r_r120 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6659 = cpy_r_r118.f0;
    PyTuple_SET_ITEM(cpy_r_r120, 0, __tmp6659);
    PyObject *__tmp6660 = cpy_r_r118.f1;
    PyTuple_SET_ITEM(cpy_r_r120, 1, __tmp6660);
    cpy_r_r121 = (CPyPtr)&((PyListObject *)cpy_r_r119)->ob_item;
    cpy_r_r122 = *(CPyPtr *)cpy_r_r121;
    *(PyObject * *)cpy_r_r122 = cpy_r_r120;
    cpy_r_r123 = PyNumber_Add(cpy_r_r119, cpy_r_changed_modules);
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_changed_modules);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 262, CPyStatic_update___globals);
        goto CPyL107;
    }
    if (likely(PyList_Check(cpy_r_r123)))
        cpy_r_r124 = cpy_r_r123;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update", 262, CPyStatic_update___globals, "list", cpy_r_r123);
        goto CPyL107;
    }
    cpy_r_r125 = CPyDef_update___dedupe_modules(cpy_r_r124);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 262, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_changed_modules = cpy_r_r125;
    cpy_r_r126 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_blocking_error;
    CPy_INCREF(cpy_r_r126);
    PyObject *__tmp6661;
    if (unlikely(!(PyTuple_Check(cpy_r_r126) && PyTuple_GET_SIZE(cpy_r_r126) == 2))) {
        __tmp6661 = NULL;
        goto __LL6662;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r126, 0))))
        __tmp6661 = PyTuple_GET_ITEM(cpy_r_r126, 0);
    else {
        __tmp6661 = NULL;
    }
    if (__tmp6661 == NULL) goto __LL6662;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r126, 1))))
        __tmp6661 = PyTuple_GET_ITEM(cpy_r_r126, 1);
    else {
        __tmp6661 = NULL;
    }
    if (__tmp6661 == NULL) goto __LL6662;
    __tmp6661 = cpy_r_r126;
__LL6662: ;
    if (unlikely(__tmp6661 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r126); cpy_r_r127 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6663 = PyTuple_GET_ITEM(cpy_r_r126, 0);
        CPy_INCREF(__tmp6663);
        PyObject *__tmp6664;
        if (likely(PyUnicode_Check(__tmp6663)))
            __tmp6664 = __tmp6663;
        else {
            CPy_TypeError("str", __tmp6663); 
            __tmp6664 = NULL;
        }
        cpy_r_r127.f0 = __tmp6664;
        PyObject *__tmp6665 = PyTuple_GET_ITEM(cpy_r_r126, 1);
        CPy_INCREF(__tmp6665);
        PyObject *__tmp6666;
        if (likely(PyUnicode_Check(__tmp6665)))
            __tmp6666 = __tmp6665;
        else {
            CPy_TypeError("str", __tmp6665); 
            __tmp6666 = NULL;
        }
        cpy_r_r127.f1 = __tmp6666;
    }
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r127.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 263, CPyStatic_update___globals);
        goto CPyL99;
    }
    cpy_r_r128 = cpy_r_r127.f0;
    CPy_INCREF(cpy_r_r128);
    CPy_DECREF(cpy_r_r127.f0);
    CPy_DECREF(cpy_r_r127.f1);
    cpy_r_blocking_error = cpy_r_r128;
    cpy_r_r129 = Py_None;
    CPy_INCREF(cpy_r_r129);
    CPy_DECREF(((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_blocking_error);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_blocking_error = cpy_r_r129;
CPyL64: ;
    if (!1) goto CPyL108;
    cpy_r_r131 = CPyDef_update___FineGrainedBuildManager___update_one(cpy_r_self, cpy_r_changed_modules, cpy_r_initial_set, cpy_r_removed_set, cpy_r_blocking_error, cpy_r_followed);
    CPy_DECREF(cpy_r_changed_modules);
    if (unlikely(cpy_r_r131.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 267, CPyStatic_update___globals);
        goto CPyL109;
    }
    cpy_r_result = cpy_r_r131;
    cpy_r_r132 = cpy_r_result.f0;
    CPy_INCREF(cpy_r_r132);
    cpy_r_changed_modules = cpy_r_r132;
    cpy_r_r133 = cpy_r_result.f1;
    CPy_INCREF(cpy_r_r133.f0);
    CPy_INCREF(cpy_r_r133.f1);
    cpy_r_r134 = cpy_r_r133.f0;
    CPy_INCREF(cpy_r_r134);
    cpy_r_next_id = cpy_r_r134;
    cpy_r_r135 = cpy_r_r133.f1;
    CPy_INCREF(cpy_r_r135);
    CPy_DECREF(cpy_r_r133.f0);
    CPy_DECREF(cpy_r_r133.f1);
    cpy_r_next_path = cpy_r_r135;
    cpy_r_r136 = cpy_r_result.f2;
    CPy_INCREF(cpy_r_r136);
    CPy_DECREF(cpy_r_result.f0);
    CPy_DECREF(cpy_r_result.f1.f0);
    CPy_DECREF(cpy_r_result.f1.f1);
    CPy_DECREF(cpy_r_result.f2);
    cpy_r_blocker_messages = cpy_r_r136;
    cpy_r_r137 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r138 = cpy_r_blocker_messages != cpy_r_r137;
    if (cpy_r_r138) {
        goto CPyL110;
    } else
        goto CPyL111;
CPyL67: ;
    cpy_r_r139.f0 = cpy_r_next_id;
    cpy_r_r139.f1 = cpy_r_next_path;
    CPy_INCREF(cpy_r_r139.f0);
    CPy_INCREF(cpy_r_r139.f1);
    CPy_DECREF(cpy_r_next_id);
    CPy_DECREF(cpy_r_next_path);
    cpy_r_r140 = PyTuple_New(2);
    if (unlikely(cpy_r_r140 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6667 = cpy_r_r139.f0;
    PyTuple_SET_ITEM(cpy_r_r140, 0, __tmp6667);
    PyObject *__tmp6668 = cpy_r_r139.f1;
    PyTuple_SET_ITEM(cpy_r_r140, 1, __tmp6668);
    CPy_DECREF(((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_blocking_error);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_blocking_error = cpy_r_r140;
    CPy_DECREF(((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_stale);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_stale = cpy_r_changed_modules;
    if (likely(cpy_r_blocker_messages != Py_None))
        cpy_r_r143 = cpy_r_blocker_messages;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update", 275, CPyStatic_update___globals, "list", cpy_r_blocker_messages);
        goto CPyL86;
    }
    cpy_r_messages = cpy_r_r143;
    goto CPyL79;
CPyL69: ;
    cpy_r_r144 = (CPyPtr)&((PyVarObject *)cpy_r_changed_modules)->ob_size;
    cpy_r_r145 = *(int64_t *)cpy_r_r144;
    cpy_r_r146 = cpy_r_r145 << 1;
    cpy_r_r147 = cpy_r_r146 != 0;
    if (cpy_r_r147) {
        goto CPyL112;
    } else
        goto CPyL113;
CPyL70: ;
    cpy_r_r148 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    CPy_INCREF(cpy_r_r148);
    cpy_r_r149 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_graph;
    CPy_INCREF(cpy_r_r149);
    cpy_r_r150 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_deps;
    CPy_INCREF(cpy_r_r150);
    cpy_r_r151 = PySet_New(NULL);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 292, CPyStatic_update___globals);
        goto CPyL114;
    }
    cpy_r_r152 = PySet_New(NULL);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 293, CPyStatic_update___globals);
        goto CPyL115;
    }
    cpy_r_r153 = PySet_Add(cpy_r_r152, cpy_r_next_id);
    CPy_DECREF(cpy_r_next_id);
    cpy_r_r154 = cpy_r_r153 >= 0;
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 293, CPyStatic_update___globals);
        goto CPyL116;
    }
    cpy_r_r155 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_targets_with_errors;
    CPy_INCREF(cpy_r_r155);
    cpy_r_r156 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_processed_targets;
    CPy_INCREF(cpy_r_r156);
    cpy_r_r157 = CPyDef_update___propagate_changes_using_dependencies(cpy_r_r148, cpy_r_r149, cpy_r_r150, cpy_r_r151, cpy_r_r152, cpy_r_r155, cpy_r_r156);
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_r149);
    CPy_DECREF(cpy_r_r150);
    CPy_DECREF(cpy_r_r151);
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_r155);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 288, CPyStatic_update___globals);
        goto CPyL109;
    }
    cpy_r_changed_modules = cpy_r_r157;
    cpy_r_r158 = CPyDef_update___dedupe_modules(cpy_r_changed_modules);
    CPy_DECREF(cpy_r_changed_modules);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 297, CPyStatic_update___globals);
        goto CPyL109;
    }
    cpy_r_changed_modules = cpy_r_r158;
    cpy_r_r159 = (CPyPtr)&((PyVarObject *)cpy_r_changed_modules)->ob_size;
    cpy_r_r160 = *(int64_t *)cpy_r_r159;
    cpy_r_r161 = cpy_r_r160 << 1;
    cpy_r_r162 = cpy_r_r161 != 0;
    if (cpy_r_r162) {
        goto CPyL64;
    } else
        goto CPyL117;
CPyL76: ;
    cpy_r_r163 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    cpy_r_r164 = ((mypy___build___BuildManagerObject *)cpy_r_r163)->_errors;
    CPy_INCREF(cpy_r_r164);
    cpy_r_r165 = CPyDef_mypy___errors___Errors___targets(cpy_r_r164);
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 300, CPyStatic_update___globals);
        goto CPyL86;
    }
    CPy_DECREF(((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_targets_with_errors);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_targets_with_errors = cpy_r_r165;
    cpy_r_r167 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    cpy_r_r168 = ((mypy___build___BuildManagerObject *)cpy_r_r167)->_errors;
    CPy_INCREF(cpy_r_r168);
    cpy_r_r169 = CPyDef_mypy___errors___Errors___new_messages(cpy_r_r168);
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 301, CPyStatic_update___globals);
        goto CPyL86;
    }
    cpy_r_messages = cpy_r_r169;
CPyL79: ;
    cpy_r_r170 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_messages;
    CPy_INCREF(cpy_r_r170);
    if (cpy_r_messages == NULL) {
        goto CPyL118;
    } else
        goto CPyL82;
CPyL80: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"messages\" referenced before assignment");
    cpy_r_r171 = 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 304, CPyStatic_update___globals);
        goto CPyL86;
    }
    CPy_Unreachable();
CPyL82: ;
    cpy_r_r172 = CPyDef_update___sort_messages_preserving_file_order(cpy_r_messages, cpy_r_r170);
    CPy_XDECREF(cpy_r_messages);
    CPy_DECREF(cpy_r_r170);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 304, CPyStatic_update___globals);
        goto CPyL86;
    }
    cpy_r_messages = cpy_r_r172;
    cpy_r_r173 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r174[1] = {cpy_r_messages};
    cpy_r_r175 = (PyObject **)&cpy_r_r174;
    cpy_r_r176 = PyObject_VectorcallMethod(cpy_r_r173, cpy_r_r175, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update", 305, CPyStatic_update___globals);
        goto CPyL119;
    }
    if (likely(PyList_Check(cpy_r_r176)))
        cpy_r_r177 = cpy_r_r176;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update", 305, CPyStatic_update___globals, "list", cpy_r_r176);
        goto CPyL119;
    }
    CPy_DECREF(((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_messages);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_messages = cpy_r_r177;
    return cpy_r_messages;
CPyL86: ;
    cpy_r_r179 = NULL;
    return cpy_r_r179;
CPyL87: ;
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r1);
    goto CPyL86;
CPyL88: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL3;
CPyL89: ;
    CPy_XDecRef(cpy_r_messages);
    goto CPyL86;
CPyL90: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_XDecRef(cpy_r_messages);
    goto CPyL86;
CPyL91: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r8);
    goto CPyL86;
CPyL92: ;
    CPy_DECREF(cpy_r_changed_modules);
    CPy_XDECREF(cpy_r_messages);
    CPy_DECREF(cpy_r_removed_set);
    goto CPyL12;
CPyL93: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    goto CPyL86;
CPyL94: ;
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    goto CPyL86;
CPyL95: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_r38);
    goto CPyL86;
CPyL96: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_initial_set);
    CPy_DecRef(cpy_r_r51);
    goto CPyL86;
CPyL97: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_initial_set);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    goto CPyL86;
CPyL98: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_initial_set);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_id_2);
    goto CPyL86;
CPyL99: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_initial_set);
    goto CPyL86;
CPyL100: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_initial_set);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r87);
    goto CPyL86;
CPyL101: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_initial_set);
    CPy_DecRef(cpy_r_r86);
    goto CPyL86;
CPyL102: ;
    CPy_DECREF(cpy_r_r101);
    goto CPyL64;
CPyL103: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_initial_set);
    CPy_DecRef(cpy_r_blocking_error);
    goto CPyL86;
CPyL104: ;
    CPy_DECREF(cpy_r_blocking_error);
    goto CPyL53;
CPyL105: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_initial_set);
    CPy_DecRef(cpy_r_r109);
    goto CPyL86;
CPyL106: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_initial_set);
    CPy_DecRef(cpy_r_r118.f0);
    CPy_DecRef(cpy_r_r118.f1);
    goto CPyL86;
CPyL107: ;
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_initial_set);
    goto CPyL86;
CPyL108: ;
    CPy_DECREF(cpy_r_changed_modules);
    CPy_DECREF(cpy_r_removed_set);
    CPy_DECREF(cpy_r_initial_set);
    CPy_DECREF(cpy_r_blocking_error);
    goto CPyL79;
CPyL109: ;
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_initial_set);
    CPy_DecRef(cpy_r_blocking_error);
    goto CPyL86;
CPyL110: ;
    CPy_XDECREF(cpy_r_messages);
    CPy_DECREF(cpy_r_removed_set);
    CPy_DECREF(cpy_r_initial_set);
    CPy_DECREF(cpy_r_blocking_error);
    goto CPyL67;
CPyL111: ;
    CPy_DECREF(cpy_r_next_path);
    CPy_DECREF(cpy_r_blocker_messages);
    goto CPyL69;
CPyL112: ;
    CPy_DECREF(cpy_r_next_id);
    goto CPyL64;
CPyL113: ;
    CPy_DECREF(cpy_r_changed_modules);
    goto CPyL70;
CPyL114: ;
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_initial_set);
    CPy_DecRef(cpy_r_blocking_error);
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r150);
    goto CPyL86;
CPyL115: ;
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_initial_set);
    CPy_DecRef(cpy_r_blocking_error);
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r151);
    goto CPyL86;
CPyL116: ;
    CPy_XDecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_removed_set);
    CPy_DecRef(cpy_r_initial_set);
    CPy_DecRef(cpy_r_blocking_error);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r152);
    goto CPyL86;
CPyL117: ;
    CPy_DECREF(cpy_r_changed_modules);
    CPy_XDECREF(cpy_r_messages);
    CPy_DECREF(cpy_r_removed_set);
    CPy_DECREF(cpy_r_initial_set);
    CPy_DECREF(cpy_r_blocking_error);
    goto CPyL76;
CPyL118: ;
    CPy_DECREF(cpy_r_r170);
    goto CPyL80;
CPyL119: ;
    CPy_DecRef(cpy_r_messages);
    goto CPyL86;
}

PyObject *CPyPy_update___FineGrainedBuildManager___update(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"changed_modules", "removed_modules", "followed", 0};
    static CPyArg_Parser parser = {"OO|O:update", kwlist, 0};
    PyObject *obj_changed_modules;
    PyObject *obj_removed_modules;
    PyObject *obj_followed = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_changed_modules, &obj_removed_modules, &obj_followed)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_update___FineGrainedBuildManager))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.update.FineGrainedBuildManager", obj_self); 
        goto fail;
    }
    PyObject *arg_changed_modules;
    if (likely(PyList_Check(obj_changed_modules)))
        arg_changed_modules = obj_changed_modules;
    else {
        CPy_TypeError("list", obj_changed_modules); 
        goto fail;
    }
    PyObject *arg_removed_modules;
    if (likely(PyList_Check(obj_removed_modules)))
        arg_removed_modules = obj_removed_modules;
    else {
        CPy_TypeError("list", obj_removed_modules); 
        goto fail;
    }
    char arg_followed;
    if (obj_followed == NULL) {
        arg_followed = 2;
    } else if (unlikely(!PyBool_Check(obj_followed))) {
        CPy_TypeError("bool", obj_followed); goto fail;
    } else
        arg_followed = obj_followed == Py_True;
    PyObject *retval = CPyDef_update___FineGrainedBuildManager___update(arg_self, arg_changed_modules, arg_removed_modules, arg_followed);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "update", 209, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___FineGrainedBuildManager___trigger(PyObject *cpy_r_self, PyObject *cpy_r_target) {
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
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_changed_modules;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    cpy_r_r1 = ((mypy___build___BuildManagerObject *)cpy_r_r0)->_errors;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_mypy___errors___Errors___reset(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "trigger", 313, CPyStatic_update___globals);
        goto CPyL16;
    }
    cpy_r_r3 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_graph;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_deps;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = PySet_New(NULL);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "trigger", 318, CPyStatic_update___globals);
        goto CPyL17;
    }
    cpy_r_r7 = PySet_New(NULL);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "trigger", 319, CPyStatic_update___globals);
        goto CPyL18;
    }
    cpy_r_r8 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_targets_with_errors;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = PySet_New(NULL);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "trigger", 320, CPyStatic_update___globals);
        goto CPyL19;
    }
    cpy_r_r10 = PySet_Add(cpy_r_r9, cpy_r_target);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/server/update.py", "trigger", 320, CPyStatic_update___globals);
        goto CPyL20;
    }
    cpy_r_r12 = PyNumber_Or(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "trigger", 320, CPyStatic_update___globals);
        goto CPyL21;
    }
    if (likely(PySet_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "trigger", 320, CPyStatic_update___globals, "set", cpy_r_r12);
        goto CPyL21;
    }
    cpy_r_r14 = PyList_New(0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "trigger", 321, CPyStatic_update___globals);
        goto CPyL22;
    }
    cpy_r_r15 = CPyDef_update___propagate_changes_using_dependencies(cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "trigger", 314, CPyStatic_update___globals);
        goto CPyL16;
    }
    cpy_r_changed_modules = cpy_r_r15;
    cpy_r_r16 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    cpy_r_r17 = ((mypy___build___BuildManagerObject *)cpy_r_r16)->_errors;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyDef_mypy___errors___Errors___targets(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "trigger", 324, CPyStatic_update___globals);
        goto CPyL23;
    }
    CPy_DECREF(((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_targets_with_errors);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_targets_with_errors = cpy_r_r18;
    cpy_r_r20 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    cpy_r_r21 = ((mypy___build___BuildManagerObject *)cpy_r_r20)->_errors;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_mypy___errors___Errors___new_messages(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "trigger", 325, CPyStatic_update___globals);
        goto CPyL23;
    }
    cpy_r_r23 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r24[1] = {cpy_r_r22};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = PyObject_VectorcallMethod(cpy_r_r23, cpy_r_r25, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "trigger", 325, CPyStatic_update___globals);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_r22);
    if (likely(PyList_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "trigger", 325, CPyStatic_update___globals, "list", cpy_r_r26);
        goto CPyL23;
    }
    CPy_DECREF(((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_messages);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_messages = cpy_r_r27;
    cpy_r_r29 = PyList_New(0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "trigger", 326, CPyStatic_update___globals);
        goto CPyL23;
    }
    cpy_r_r30 = 2;
    cpy_r_r31 = CPyDef_update___FineGrainedBuildManager___update(cpy_r_self, cpy_r_changed_modules, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_changed_modules);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "trigger", 326, CPyStatic_update___globals);
        goto CPyL16;
    }
    return cpy_r_r31;
CPyL16: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL17: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r13);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_changed_modules);
    goto CPyL16;
CPyL24: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_DecRef(cpy_r_r22);
    goto CPyL16;
}

PyObject *CPyPy_update___FineGrainedBuildManager___trigger(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", 0};
    static CPyArg_Parser parser = {"O:trigger", kwlist, 0};
    PyObject *obj_target;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_target)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_update___FineGrainedBuildManager))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.update.FineGrainedBuildManager", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(PyUnicode_Check(obj_target)))
        arg_target = obj_target;
    else {
        CPy_TypeError("str", obj_target); 
        goto fail;
    }
    PyObject *retval = CPyDef_update___FineGrainedBuildManager___trigger(arg_self, arg_target);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "trigger", 308, CPyStatic_update___globals);
    return NULL;
}

char CPyDef_update___FineGrainedBuildManager___flush_cache(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    cpy_r_r1 = ((mypy___build___BuildManagerObject *)cpy_r_r0)->_ast_cache;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "flush_cache", "BuildManager", "ast_cache", 334, CPyStatic_update___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = CPyDict_Clear(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/update.py", "flush_cache", 334, CPyStatic_update___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_update___FineGrainedBuildManager___flush_cache(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":flush_cache", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_update___FineGrainedBuildManager))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.update.FineGrainedBuildManager", obj_self); 
        goto fail;
    }
    char retval = CPyDef_update___FineGrainedBuildManager___flush_cache(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "flush_cache", 328, CPyStatic_update___globals);
    return NULL;
}

tuple_T3OT2OOO CPyDef_update___FineGrainedBuildManager___update_one(PyObject *cpy_r_self, PyObject *cpy_r_changed_modules, PyObject *cpy_r_initial_set, PyObject *cpy_r_removed_set, PyObject *cpy_r_blocking_error, char cpy_r_followed) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    double cpy_r_r4;
    char cpy_r_r5;
    double cpy_r_t0;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_next_id;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_next_path;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    CPyPtr cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    tuple_T2OO cpy_r_r41;
    tuple_T3OT2OOC cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    tuple_T3OT2OOO cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    tuple_T3OT2OOO cpy_r_r49;
    tuple_T3OT2OOO cpy_r_result;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_remaining;
    tuple_T2OO cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_blocker_messages;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    tuple_T2OO cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_path;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    tuple_T2OO cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    double cpy_r_r83;
    char cpy_r_r84;
    double cpy_r_t1;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    double cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    CPyPtr cpy_r_r108;
    int64_t cpy_r_r109;
    CPyTagged cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject **cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyPtr cpy_r_r120;
    CPyPtr cpy_r_r121;
    CPyPtr cpy_r_r122;
    CPyPtr cpy_r_r123;
    CPyPtr cpy_r_r124;
    CPyPtr cpy_r_r125;
    CPyPtr cpy_r_r126;
    CPyPtr cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    tuple_T2OO cpy_r_r131;
    tuple_T3OT2OOO cpy_r_r132;
    tuple_T3OT2OOO cpy_r_r133;
    cpy_r_r0 = CPyModule_time;
    cpy_r_r1 = CPyStatics[147]; /* 'time' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 353, CPyStatic_update___globals);
        goto CPyL50;
    }
    cpy_r_r3 = _PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 353, CPyStatic_update___globals);
        goto CPyL50;
    }
    cpy_r_r4 = PyFloat_AsDouble(cpy_r_r3);
    if (cpy_r_r4 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r3); cpy_r_r4 = -113.0;
    }
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 == -113.0;
    if (unlikely(cpy_r_r5)) goto CPyL4;
CPyL3: ;
    cpy_r_t0 = cpy_r_r4;
    cpy_r_r6 = CPyList_Pop(cpy_r_changed_modules, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 354, CPyStatic_update___globals);
        goto CPyL50;
    } else
        goto CPyL5;
CPyL4: ;
    cpy_r_r7 = PyErr_Occurred();
    if (unlikely(cpy_r_r7 != NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 353, CPyStatic_update___globals);
        goto CPyL50;
    } else
        goto CPyL3;
CPyL5: ;
    PyObject *__tmp6669;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp6669 = NULL;
        goto __LL6670;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp6669 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp6669 = NULL;
    }
    if (__tmp6669 == NULL) goto __LL6670;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 1))))
        __tmp6669 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp6669 = NULL;
    }
    if (__tmp6669 == NULL) goto __LL6670;
    __tmp6669 = cpy_r_r6;
__LL6670: ;
    if (unlikely(__tmp6669 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r6); cpy_r_r8 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6671 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp6671);
        PyObject *__tmp6672;
        if (likely(PyUnicode_Check(__tmp6671)))
            __tmp6672 = __tmp6671;
        else {
            CPy_TypeError("str", __tmp6671); 
            __tmp6672 = NULL;
        }
        cpy_r_r8.f0 = __tmp6672;
        PyObject *__tmp6673 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp6673);
        PyObject *__tmp6674;
        if (likely(PyUnicode_Check(__tmp6673)))
            __tmp6674 = __tmp6673;
        else {
            CPy_TypeError("str", __tmp6673); 
            __tmp6674 = NULL;
        }
        cpy_r_r8.f1 = __tmp6674;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 354, CPyStatic_update___globals);
        goto CPyL50;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r9);
    cpy_r_next_id = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f1;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r8.f1);
    cpy_r_next_path = cpy_r_r10;
    cpy_r_r11 = PyObject_RichCompare(cpy_r_next_id, cpy_r_blocking_error, 2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 360, CPyStatic_update___globals);
        goto CPyL51;
    }
    if (unlikely(!PyBool_Check(cpy_r_r11))) {
        CPy_TypeError("bool", cpy_r_r11); cpy_r_r12 = 2;
    } else
        cpy_r_r12 = cpy_r_r11 == Py_True;
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 360, CPyStatic_update___globals);
        goto CPyL51;
    }
    if (!cpy_r_r12) goto CPyL20;
    cpy_r_r13 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_modules;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = PyDict_Contains(cpy_r_r13, cpy_r_next_id);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 361, CPyStatic_update___globals);
        goto CPyL51;
    }
    cpy_r_r16 = cpy_r_r14;
    cpy_r_r17 = cpy_r_r16 ^ 1;
    if (!cpy_r_r17) goto CPyL20;
    cpy_r_r18 = PySet_Contains(cpy_r_initial_set, cpy_r_next_id);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 362, CPyStatic_update___globals);
        goto CPyL51;
    }
    cpy_r_r20 = cpy_r_r18;
    cpy_r_r21 = cpy_r_r20 ^ 1;
    if (!cpy_r_r21) goto CPyL20;
    cpy_r_r22 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[163]; /* '' */
    cpy_r_r24 = CPyStatics[5365]; /* 'skip ' */
    cpy_r_r25 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r26 = CPyStatics[163]; /* '' */
    cpy_r_r27 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r28[3] = {cpy_r_r25, cpy_r_next_id, cpy_r_r26};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = PyObject_VectorcallMethod(cpy_r_r27, cpy_r_r29, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 365, CPyStatic_update___globals);
        goto CPyL52;
    }
    if (likely(PyUnicode_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_one", 365, CPyStatic_update___globals, "str", cpy_r_r30);
        goto CPyL52;
    }
    cpy_r_r32 = CPyStatics[5366]; /* ' (module with blocking error not in import graph)' */
    cpy_r_r33 = PyList_New(3);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 365, CPyStatic_update___globals);
        goto CPyL53;
    }
    cpy_r_r34 = (CPyPtr)&((PyListObject *)cpy_r_r33)->ob_item;
    cpy_r_r35 = *(CPyPtr *)cpy_r_r34;
    CPy_INCREF(cpy_r_r24);
    *(PyObject * *)cpy_r_r35 = cpy_r_r24;
    cpy_r_r36 = cpy_r_r35 + 8;
    *(PyObject * *)cpy_r_r36 = cpy_r_r31;
    cpy_r_r37 = cpy_r_r35 + 16;
    CPy_INCREF(cpy_r_r32);
    *(PyObject * *)cpy_r_r37 = cpy_r_r32;
    cpy_r_r38 = PyUnicode_Join(cpy_r_r23, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 365, CPyStatic_update___globals);
        goto CPyL52;
    }
    cpy_r_r39 = PyTuple_Pack(1, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 364, CPyStatic_update___globals);
        goto CPyL52;
    }
    cpy_r_r40 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_r22, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 364, CPyStatic_update___globals);
        goto CPyL51;
    }
    cpy_r_r41.f0 = cpy_r_next_id;
    cpy_r_r41.f1 = cpy_r_next_path;
    CPy_INCREF(cpy_r_r41.f0);
    CPy_INCREF(cpy_r_r41.f1);
    CPy_DECREF(cpy_r_next_id);
    CPy_DECREF(cpy_r_next_path);
    cpy_r_r42.f0 = cpy_r_changed_modules;
    cpy_r_r42.f1 = cpy_r_r41;
    cpy_r_r42.f2 = 1;
    CPy_INCREF(cpy_r_r42.f0);
    CPy_INCREF(cpy_r_r42.f1.f0);
    CPy_INCREF(cpy_r_r42.f1.f1);
    cpy_r_r43 = cpy_r_r42.f0;
    CPy_INCREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r42.f0);
    CPy_DECREF(cpy_r_r42.f1.f0);
    CPy_DECREF(cpy_r_r42.f1.f1);
    cpy_r_r44 = Py_None;
    cpy_r_r45.f0 = cpy_r_r43;
    cpy_r_r45.f1 = cpy_r_r41;
    cpy_r_r45.f2 = cpy_r_r44;
    CPy_INCREF(cpy_r_r45.f0);
    CPy_INCREF(cpy_r_r45.f1.f0);
    CPy_INCREF(cpy_r_r45.f1.f1);
    CPy_INCREF(cpy_r_r45.f2);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r41.f0);
    CPy_DECREF(cpy_r_r41.f1);
    return cpy_r_r45;
CPyL20: ;
    cpy_r_r46 = PySet_Contains(cpy_r_removed_set, cpy_r_next_id);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 369, CPyStatic_update___globals);
        goto CPyL51;
    }
    cpy_r_r48 = cpy_r_r46;
    cpy_r_r49 = CPyDef_update___FineGrainedBuildManager___update_module(cpy_r_self, cpy_r_next_id, cpy_r_next_path, cpy_r_r48, cpy_r_followed);
    CPy_DECREF(cpy_r_next_id);
    CPy_DECREF(cpy_r_next_path);
    if (unlikely(cpy_r_r49.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 369, CPyStatic_update___globals);
        goto CPyL50;
    }
    cpy_r_result = cpy_r_r49;
    cpy_r_r50 = cpy_r_result.f0;
    CPy_INCREF(cpy_r_r50);
    cpy_r_remaining = cpy_r_r50;
    cpy_r_r51 = cpy_r_result.f1;
    CPy_INCREF(cpy_r_r51.f0);
    CPy_INCREF(cpy_r_r51.f1);
    cpy_r_r52 = cpy_r_r51.f0;
    CPy_INCREF(cpy_r_r52);
    cpy_r_next_id = cpy_r_r52;
    cpy_r_r53 = cpy_r_r51.f1;
    CPy_INCREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r51.f0);
    CPy_DECREF(cpy_r_r51.f1);
    cpy_r_next_path = cpy_r_r53;
    cpy_r_r54 = cpy_r_result.f2;
    CPy_INCREF(cpy_r_r54);
    CPy_DECREF(cpy_r_result.f0);
    CPy_DECREF(cpy_r_result.f1.f0);
    CPy_DECREF(cpy_r_result.f1.f1);
    CPy_DECREF(cpy_r_result.f2);
    cpy_r_blocker_messages = cpy_r_r54;
    cpy_r_r55 = PyList_New(0);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 371, CPyStatic_update___globals);
        goto CPyL54;
    }
    cpy_r_r56 = 0;
CPyL24: ;
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_changed_modules)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 << 1;
    cpy_r_r60 = (Py_ssize_t)cpy_r_r56 < (Py_ssize_t)cpy_r_r59;
    if (!cpy_r_r60) goto CPyL32;
    cpy_r_r61 = CPyList_GetItemUnsafe(cpy_r_changed_modules, cpy_r_r56);
    PyObject *__tmp6675;
    if (unlikely(!(PyTuple_Check(cpy_r_r61) && PyTuple_GET_SIZE(cpy_r_r61) == 2))) {
        __tmp6675 = NULL;
        goto __LL6676;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r61, 0))))
        __tmp6675 = PyTuple_GET_ITEM(cpy_r_r61, 0);
    else {
        __tmp6675 = NULL;
    }
    if (__tmp6675 == NULL) goto __LL6676;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r61, 1))))
        __tmp6675 = PyTuple_GET_ITEM(cpy_r_r61, 1);
    else {
        __tmp6675 = NULL;
    }
    if (__tmp6675 == NULL) goto __LL6676;
    __tmp6675 = cpy_r_r61;
__LL6676: ;
    if (unlikely(__tmp6675 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r61); cpy_r_r62 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6677 = PyTuple_GET_ITEM(cpy_r_r61, 0);
        CPy_INCREF(__tmp6677);
        PyObject *__tmp6678;
        if (likely(PyUnicode_Check(__tmp6677)))
            __tmp6678 = __tmp6677;
        else {
            CPy_TypeError("str", __tmp6677); 
            __tmp6678 = NULL;
        }
        cpy_r_r62.f0 = __tmp6678;
        PyObject *__tmp6679 = PyTuple_GET_ITEM(cpy_r_r61, 1);
        CPy_INCREF(__tmp6679);
        PyObject *__tmp6680;
        if (likely(PyUnicode_Check(__tmp6679)))
            __tmp6680 = __tmp6679;
        else {
            CPy_TypeError("str", __tmp6679); 
            __tmp6680 = NULL;
        }
        cpy_r_r62.f1 = __tmp6680;
    }
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 371, CPyStatic_update___globals);
        goto CPyL55;
    }
    cpy_r_r63 = cpy_r_r62.f0;
    CPy_INCREF(cpy_r_r63);
    cpy_r_id = cpy_r_r63;
    cpy_r_r64 = cpy_r_r62.f1;
    CPy_INCREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r62.f0);
    CPy_DECREF(cpy_r_r62.f1);
    cpy_r_path = cpy_r_r64;
    cpy_r_r65 = PyUnicode_Compare(cpy_r_id, cpy_r_next_id);
    cpy_r_r66 = cpy_r_r65 == -1;
    if (!cpy_r_r66) goto CPyL29;
    cpy_r_r67 = PyErr_Occurred();
    cpy_r_r68 = cpy_r_r67 != NULL;
    if (!cpy_r_r68) goto CPyL29;
    cpy_r_r69 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 371, CPyStatic_update___globals);
        goto CPyL56;
    }
CPyL29: ;
    cpy_r_r70 = cpy_r_r65 != 0;
    if (!cpy_r_r70) goto CPyL57;
    cpy_r_r71.f0 = cpy_r_id;
    cpy_r_r71.f1 = cpy_r_path;
    CPy_INCREF(cpy_r_r71.f0);
    CPy_INCREF(cpy_r_r71.f1);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_path);
    cpy_r_r72 = PyTuple_New(2);
    if (unlikely(cpy_r_r72 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6681 = cpy_r_r71.f0;
    PyTuple_SET_ITEM(cpy_r_r72, 0, __tmp6681);
    PyObject *__tmp6682 = cpy_r_r71.f1;
    PyTuple_SET_ITEM(cpy_r_r72, 1, __tmp6682);
    cpy_r_r73 = PyList_Append(cpy_r_r55, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 371, CPyStatic_update___globals);
        goto CPyL55;
    }
CPyL31: ;
    cpy_r_r75 = cpy_r_r56 + 2;
    cpy_r_r56 = cpy_r_r75;
    goto CPyL24;
CPyL32: ;
    cpy_r_changed_modules = cpy_r_r55;
    cpy_r_r76 = PyNumber_Add(cpy_r_remaining, cpy_r_changed_modules);
    CPy_DECREF(cpy_r_remaining);
    CPy_DECREF(cpy_r_changed_modules);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 372, CPyStatic_update___globals);
        goto CPyL58;
    }
    if (likely(PyList_Check(cpy_r_r76)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_one", 372, CPyStatic_update___globals, "list", cpy_r_r76);
        goto CPyL58;
    }
    cpy_r_r78 = CPyDef_update___dedupe_modules(cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 372, CPyStatic_update___globals);
        goto CPyL58;
    }
    cpy_r_changed_modules = cpy_r_r78;
    cpy_r_r79 = CPyModule_time;
    cpy_r_r80 = CPyStatics[147]; /* 'time' */
    cpy_r_r81 = CPyObject_GetAttr(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 373, CPyStatic_update___globals);
        goto CPyL59;
    }
    cpy_r_r82 = _PyObject_Vectorcall(cpy_r_r81, 0, 0, 0);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 373, CPyStatic_update___globals);
        goto CPyL59;
    }
    cpy_r_r83 = PyFloat_AsDouble(cpy_r_r82);
    if (cpy_r_r83 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r82); cpy_r_r83 = -113.0;
    }
    CPy_DECREF(cpy_r_r82);
    cpy_r_r84 = cpy_r_r83 == -113.0;
    if (unlikely(cpy_r_r84)) goto CPyL39;
CPyL38: ;
    cpy_r_t1 = cpy_r_r83;
    cpy_r_r85 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    CPy_INCREF(cpy_r_r85);
    cpy_r_r86 = CPyStatics[163]; /* '' */
    cpy_r_r87 = CPyStatics[5367]; /* 'update once: ' */
    cpy_r_r88 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r89 = CPyStatics[163]; /* '' */
    cpy_r_r90 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r91[3] = {cpy_r_r88, cpy_r_next_id, cpy_r_r89};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = PyObject_VectorcallMethod(cpy_r_r90, cpy_r_r92, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 376, CPyStatic_update___globals);
        goto CPyL60;
    } else
        goto CPyL40;
CPyL39: ;
    cpy_r_r94 = PyErr_Occurred();
    if (unlikely(cpy_r_r94 != NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 373, CPyStatic_update___globals);
        goto CPyL59;
    } else
        goto CPyL38;
CPyL40: ;
    if (likely(PyUnicode_Check(cpy_r_r93)))
        cpy_r_r95 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_one", 376, CPyStatic_update___globals, "str", cpy_r_r93);
        goto CPyL60;
    }
    cpy_r_r96 = CPyStatics[3477]; /* ' in ' */
    cpy_r_r97 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r98 = cpy_r_t1 - cpy_r_t0;
    cpy_r_r99 = CPyStatics[440]; /* '.3f' */
    cpy_r_r100 = CPyStatics[193]; /* 'format' */
    cpy_r_r101 = PyFloat_FromDouble(cpy_r_r98);
    PyObject *cpy_r_r102[3] = {cpy_r_r97, cpy_r_r101, cpy_r_r99};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = PyObject_VectorcallMethod(cpy_r_r100, cpy_r_r103, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 376, CPyStatic_update___globals);
        goto CPyL61;
    }
    CPy_DECREF(cpy_r_r101);
    if (likely(PyUnicode_Check(cpy_r_r104)))
        cpy_r_r105 = cpy_r_r104;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_one", 376, CPyStatic_update___globals, "str", cpy_r_r104);
        goto CPyL62;
    }
    cpy_r_r106 = CPyStatics[5368]; /* 's - ' */
    cpy_r_r107 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r108 = (CPyPtr)&((PyVarObject *)cpy_r_changed_modules)->ob_size;
    cpy_r_r109 = *(int64_t *)cpy_r_r108;
    cpy_r_r110 = cpy_r_r109 << 1;
    cpy_r_r111 = CPyStatics[163]; /* '' */
    cpy_r_r112 = CPyStatics[193]; /* 'format' */
    cpy_r_r113 = CPyTagged_StealAsObject(cpy_r_r110);
    PyObject *cpy_r_r114[3] = {cpy_r_r107, cpy_r_r113, cpy_r_r111};
    cpy_r_r115 = (PyObject **)&cpy_r_r114;
    cpy_r_r116 = PyObject_VectorcallMethod(cpy_r_r112, cpy_r_r115, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 376, CPyStatic_update___globals);
        goto CPyL63;
    }
    CPy_DECREF(cpy_r_r113);
    if (likely(PyUnicode_Check(cpy_r_r116)))
        cpy_r_r117 = cpy_r_r116;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_one", 376, CPyStatic_update___globals, "str", cpy_r_r116);
        goto CPyL64;
    }
    cpy_r_r118 = CPyStatics[5369]; /* ' left' */
    cpy_r_r119 = PyList_New(7);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 376, CPyStatic_update___globals);
        goto CPyL65;
    }
    cpy_r_r120 = (CPyPtr)&((PyListObject *)cpy_r_r119)->ob_item;
    cpy_r_r121 = *(CPyPtr *)cpy_r_r120;
    CPy_INCREF(cpy_r_r87);
    *(PyObject * *)cpy_r_r121 = cpy_r_r87;
    cpy_r_r122 = cpy_r_r121 + 8;
    *(PyObject * *)cpy_r_r122 = cpy_r_r95;
    cpy_r_r123 = cpy_r_r121 + 16;
    CPy_INCREF(cpy_r_r96);
    *(PyObject * *)cpy_r_r123 = cpy_r_r96;
    cpy_r_r124 = cpy_r_r121 + 24;
    *(PyObject * *)cpy_r_r124 = cpy_r_r105;
    cpy_r_r125 = cpy_r_r121 + 32;
    CPy_INCREF(cpy_r_r106);
    *(PyObject * *)cpy_r_r125 = cpy_r_r106;
    cpy_r_r126 = cpy_r_r121 + 40;
    *(PyObject * *)cpy_r_r126 = cpy_r_r117;
    cpy_r_r127 = cpy_r_r121 + 48;
    CPy_INCREF(cpy_r_r118);
    *(PyObject * *)cpy_r_r127 = cpy_r_r118;
    cpy_r_r128 = PyUnicode_Join(cpy_r_r86, cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 376, CPyStatic_update___globals);
        goto CPyL60;
    }
    cpy_r_r129 = PyTuple_Pack(1, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 375, CPyStatic_update___globals);
        goto CPyL60;
    }
    cpy_r_r130 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_r85, cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r130 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_one", 375, CPyStatic_update___globals);
        goto CPyL59;
    }
    cpy_r_r131.f0 = cpy_r_next_id;
    cpy_r_r131.f1 = cpy_r_next_path;
    CPy_INCREF(cpy_r_r131.f0);
    CPy_INCREF(cpy_r_r131.f1);
    CPy_DECREF(cpy_r_next_id);
    CPy_DECREF(cpy_r_next_path);
    cpy_r_r132.f0 = cpy_r_changed_modules;
    cpy_r_r132.f1 = cpy_r_r131;
    cpy_r_r132.f2 = cpy_r_blocker_messages;
    CPy_INCREF(cpy_r_r132.f0);
    CPy_INCREF(cpy_r_r132.f1.f0);
    CPy_INCREF(cpy_r_r132.f1.f1);
    CPy_INCREF(cpy_r_r132.f2);
    CPy_DECREF(cpy_r_changed_modules);
    CPy_DECREF(cpy_r_r131.f0);
    CPy_DECREF(cpy_r_r131.f1);
    CPy_DECREF(cpy_r_blocker_messages);
    return cpy_r_r132;
CPyL50: ;
    tuple_T3OT2OOO __tmp6683 = { NULL, (tuple_T2OO) { NULL, NULL }, NULL };
    cpy_r_r133 = __tmp6683;
    return cpy_r_r133;
CPyL51: ;
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_next_path);
    goto CPyL50;
CPyL52: ;
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_next_path);
    CPy_DecRef(cpy_r_r22);
    goto CPyL50;
CPyL53: ;
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_next_path);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r31);
    goto CPyL50;
CPyL54: ;
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_next_path);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_blocker_messages);
    goto CPyL50;
CPyL55: ;
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_next_path);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_blocker_messages);
    CPy_DecRef(cpy_r_r55);
    goto CPyL50;
CPyL56: ;
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_next_path);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_blocker_messages);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_path);
    goto CPyL50;
CPyL57: ;
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_path);
    goto CPyL31;
CPyL58: ;
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_next_path);
    CPy_DecRef(cpy_r_blocker_messages);
    goto CPyL50;
CPyL59: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_next_path);
    CPy_DecRef(cpy_r_blocker_messages);
    goto CPyL50;
CPyL60: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_next_path);
    CPy_DecRef(cpy_r_blocker_messages);
    CPy_DecRef(cpy_r_r85);
    goto CPyL50;
CPyL61: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_next_path);
    CPy_DecRef(cpy_r_blocker_messages);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r101);
    goto CPyL50;
CPyL62: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_next_path);
    CPy_DecRef(cpy_r_blocker_messages);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r95);
    goto CPyL50;
CPyL63: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_next_path);
    CPy_DecRef(cpy_r_blocker_messages);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r105);
    CPy_DecRef(cpy_r_r113);
    goto CPyL50;
CPyL64: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_next_path);
    CPy_DecRef(cpy_r_blocker_messages);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r105);
    goto CPyL50;
CPyL65: ;
    CPy_DecRef(cpy_r_changed_modules);
    CPy_DecRef(cpy_r_next_id);
    CPy_DecRef(cpy_r_next_path);
    CPy_DecRef(cpy_r_blocker_messages);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r105);
    CPy_DecRef(cpy_r_r117);
    goto CPyL50;
}

PyObject *CPyPy_update___FineGrainedBuildManager___update_one(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"changed_modules", "initial_set", "removed_set", "blocking_error", "followed", 0};
    static CPyArg_Parser parser = {"OOOOO:update_one", kwlist, 0};
    PyObject *obj_changed_modules;
    PyObject *obj_initial_set;
    PyObject *obj_removed_set;
    PyObject *obj_blocking_error;
    PyObject *obj_followed;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_changed_modules, &obj_initial_set, &obj_removed_set, &obj_blocking_error, &obj_followed)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_update___FineGrainedBuildManager))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.update.FineGrainedBuildManager", obj_self); 
        goto fail;
    }
    PyObject *arg_changed_modules;
    if (likely(PyList_Check(obj_changed_modules)))
        arg_changed_modules = obj_changed_modules;
    else {
        CPy_TypeError("list", obj_changed_modules); 
        goto fail;
    }
    PyObject *arg_initial_set;
    if (likely(PySet_Check(obj_initial_set)))
        arg_initial_set = obj_initial_set;
    else {
        CPy_TypeError("set", obj_initial_set); 
        goto fail;
    }
    PyObject *arg_removed_set;
    if (likely(PySet_Check(obj_removed_set)))
        arg_removed_set = obj_removed_set;
    else {
        CPy_TypeError("set", obj_removed_set); 
        goto fail;
    }
    PyObject *arg_blocking_error;
    if (PyUnicode_Check(obj_blocking_error))
        arg_blocking_error = obj_blocking_error;
    else {
        arg_blocking_error = NULL;
    }
    if (arg_blocking_error != NULL) goto __LL6684;
    if (obj_blocking_error == Py_None)
        arg_blocking_error = obj_blocking_error;
    else {
        arg_blocking_error = NULL;
    }
    if (arg_blocking_error != NULL) goto __LL6684;
    CPy_TypeError("str or None", obj_blocking_error); 
    goto fail;
__LL6684: ;
    char arg_followed;
    if (unlikely(!PyBool_Check(obj_followed))) {
        CPy_TypeError("bool", obj_followed); goto fail;
    } else
        arg_followed = obj_followed == Py_True;
    tuple_T3OT2OOO retval = CPyDef_update___FineGrainedBuildManager___update_one(arg_self, arg_changed_modules, arg_initial_set, arg_removed_set, arg_blocking_error, arg_followed);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6685 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp6685);
    PyObject *__tmp6686 = PyTuple_New(2);
    if (unlikely(__tmp6686 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6687 = retval.f1.f0;
    PyTuple_SET_ITEM(__tmp6686, 0, __tmp6687);
    PyObject *__tmp6688 = retval.f1.f1;
    PyTuple_SET_ITEM(__tmp6686, 1, __tmp6688);
    PyTuple_SET_ITEM(retbox, 1, __tmp6686);
    PyObject *__tmp6689 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp6689);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "update_one", 336, CPyStatic_update___globals);
    return NULL;
}

tuple_T3OT2OOO CPyDef_update___FineGrainedBuildManager___update_module(PyObject *cpy_r_self, PyObject *cpy_r_module, PyObject *cpy_r_path, char cpy_r_force_removed, char cpy_r_followed) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    tuple_T2OO cpy_r_r30;
    tuple_T3OT2OOC cpy_r_r31;
    PyObject *cpy_r_r32;
    tuple_T3OT2OOO cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_manager;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_previous_modules;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_graph;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    double cpy_r_r47;
    char cpy_r_r48;
    double cpy_r_t0;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_old_snapshots;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_snapshot;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_remaining;
    PyObject *cpy_r_errors;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    tuple_T2OO cpy_r_r84;
    tuple_T3OT2OOO cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    tuple_T3OT2OOO cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyPtr cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_tree;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    double cpy_r_r108;
    char cpy_r_r109;
    double cpy_r_t1;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_triggered;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_trigger;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_filtered;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject **cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject **cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    CPyPtr cpy_r_r143;
    CPyPtr cpy_r_r144;
    CPyPtr cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    int32_t cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    double cpy_r_r177;
    char cpy_r_r178;
    double cpy_r_t2;
    double cpy_r_r179;
    double cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    int32_t cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    char cpy_r_r194;
    tuple_T2OO cpy_r_r195;
    tuple_T3OT2OOC cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    tuple_T3OT2OOO cpy_r_r199;
    tuple_T3OT2OOO cpy_r_r200;
    cpy_r_r0 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[163]; /* '' */
    cpy_r_r2 = CPyStatics[5370]; /* '--- update single ' */
    cpy_r_r3 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r4 = CPyStatics[163]; /* '' */
    cpy_r_r5 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r6[3] = {cpy_r_r3, cpy_r_module, cpy_r_r4};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 403, CPyStatic_update___globals);
        goto CPyL107;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 403, CPyStatic_update___globals, "str", cpy_r_r8);
        goto CPyL107;
    }
    cpy_r_r10 = CPyStatics[5371]; /* ' ---' */
    cpy_r_r11 = PyList_New(3);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 403, CPyStatic_update___globals);
        goto CPyL108;
    }
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    CPy_INCREF(cpy_r_r2);
    *(PyObject * *)cpy_r_r13 = cpy_r_r2;
    cpy_r_r14 = cpy_r_r13 + 8;
    *(PyObject * *)cpy_r_r14 = cpy_r_r9;
    cpy_r_r15 = cpy_r_r13 + 16;
    CPy_INCREF(cpy_r_r10);
    *(PyObject * *)cpy_r_r15 = cpy_r_r10;
    cpy_r_r16 = PyUnicode_Join(cpy_r_r1, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 403, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r17 = PyTuple_Pack(1, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 403, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r18 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_r0, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 403, CPyStatic_update___globals);
        goto CPyL106;
    }
    cpy_r_r19 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_updated_modules;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = PyList_Append(cpy_r_r19, cpy_r_module);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 404, CPyStatic_update___globals);
        goto CPyL106;
    }
    cpy_r_r22 = CPyStatic_update___globals;
    cpy_r_r23 = CPyStatics[5372]; /* 'SENSITIVE_INTERNAL_MODULES' */
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 409, CPyStatic_update___globals);
        goto CPyL106;
    }
    if (likely(PyTuple_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 409, CPyStatic_update___globals, "tuple", cpy_r_r24);
        goto CPyL106;
    }
    cpy_r_r26 = PySequence_Contains(cpy_r_r25, cpy_r_module);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 409, CPyStatic_update___globals);
        goto CPyL106;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL13;
    cpy_r_r29 = PyList_New(0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 410, CPyStatic_update___globals);
        goto CPyL106;
    }
    cpy_r_r30.f0 = cpy_r_module;
    cpy_r_r30.f1 = cpy_r_path;
    CPy_INCREF(cpy_r_r30.f0);
    CPy_INCREF(cpy_r_r30.f1);
    cpy_r_r31.f0 = cpy_r_r29;
    cpy_r_r31.f1 = cpy_r_r30;
    cpy_r_r31.f2 = 1;
    CPy_INCREF(cpy_r_r31.f0);
    CPy_INCREF(cpy_r_r31.f1.f0);
    CPy_INCREF(cpy_r_r31.f1.f1);
    CPy_DECREF(cpy_r_r31.f0);
    CPy_DECREF(cpy_r_r31.f1.f0);
    CPy_DECREF(cpy_r_r31.f1.f1);
    cpy_r_r32 = Py_None;
    cpy_r_r33.f0 = cpy_r_r29;
    cpy_r_r33.f1 = cpy_r_r30;
    cpy_r_r33.f2 = cpy_r_r32;
    CPy_INCREF(cpy_r_r33.f0);
    CPy_INCREF(cpy_r_r33.f1.f0);
    CPy_INCREF(cpy_r_r33.f1.f1);
    CPy_INCREF(cpy_r_r33.f2);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r30.f0);
    CPy_DECREF(cpy_r_r30.f1);
    return cpy_r_r33;
CPyL13: ;
    cpy_r_r34 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    CPy_INCREF(cpy_r_r34);
    cpy_r_manager = cpy_r_r34;
    cpy_r_r35 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_modules;
    CPy_INCREF(cpy_r_r35);
    cpy_r_previous_modules = cpy_r_r35;
    cpy_r_r36 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_graph;
    CPy_INCREF(cpy_r_r36);
    cpy_r_graph = cpy_r_r36;
    cpy_r_r37 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_deps;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = CPyDef_update___ensure_deps_loaded(cpy_r_module, cpy_r_r37, cpy_r_graph);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 416, CPyStatic_update___globals);
        goto CPyL109;
    }
    cpy_r_r39 = PyList_New(1);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 420, CPyStatic_update___globals);
        goto CPyL109;
    }
    cpy_r_r40 = (CPyPtr)&((PyListObject *)cpy_r_r39)->ob_item;
    cpy_r_r41 = *(CPyPtr *)cpy_r_r40;
    CPy_INCREF(cpy_r_module);
    *(PyObject * *)cpy_r_r41 = cpy_r_module;
    cpy_r_r42 = CPyDef_update___ensure_trees_loaded(cpy_r_manager, cpy_r_graph, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 420, CPyStatic_update___globals);
        goto CPyL109;
    }
    cpy_r_r43 = CPyModule_time;
    cpy_r_r44 = CPyStatics[147]; /* 'time' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 422, CPyStatic_update___globals);
        goto CPyL109;
    }
    cpy_r_r46 = _PyObject_Vectorcall(cpy_r_r45, 0, 0, 0);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 422, CPyStatic_update___globals);
        goto CPyL109;
    }
    cpy_r_r47 = PyFloat_AsDouble(cpy_r_r46);
    if (cpy_r_r47 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r46); cpy_r_r47 = -113.0;
    }
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 == -113.0;
    if (unlikely(cpy_r_r48)) goto CPyL20;
CPyL19: ;
    cpy_r_t0 = cpy_r_r47;
    cpy_r_r49 = PyDict_New();
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 424, CPyStatic_update___globals);
        goto CPyL109;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r50 = PyErr_Occurred();
    if (unlikely(cpy_r_r50 != NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 422, CPyStatic_update___globals);
        goto CPyL109;
    } else
        goto CPyL19;
CPyL21: ;
    cpy_r_old_snapshots = cpy_r_r49;
    cpy_r_r51 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_modules;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = PyDict_Contains(cpy_r_r51, cpy_r_module);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 425, CPyStatic_update___globals);
        goto CPyL110;
    }
    cpy_r_r54 = cpy_r_r52;
    if (!cpy_r_r54) goto CPyL28;
    cpy_r_r55 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_modules;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = CPyDict_GetItem(cpy_r_r55, cpy_r_module);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 426, CPyStatic_update___globals);
        goto CPyL110;
    }
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_nodes___MypyFile))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 426, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_r56);
        goto CPyL110;
    }
    cpy_r_r58 = ((mypy___nodes___MypyFileObject *)cpy_r_r57)->_names;
    if (unlikely(cpy_r_r58 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'MypyFile' undefined");
    } else {
        CPy_INCREF(cpy_r_r58);
    }
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 426, CPyStatic_update___globals);
        goto CPyL110;
    }
CPyL26: ;
    cpy_r_r59 = CPyDef_astdiff___snapshot_symbol_table(cpy_r_module, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 426, CPyStatic_update___globals);
        goto CPyL110;
    }
    cpy_r_snapshot = cpy_r_r59;
    cpy_r_r60 = CPyDict_SetItem(cpy_r_old_snapshots, cpy_r_module, cpy_r_snapshot);
    CPy_DECREF(cpy_r_snapshot);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 427, CPyStatic_update___globals);
        goto CPyL110;
    }
CPyL28: ;
    cpy_r_r62 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_errors;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = CPyDef_mypy___errors___Errors___reset(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 429, CPyStatic_update___globals);
        goto CPyL110;
    }
    cpy_r_r64 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_processed_targets;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65 = PyList_Append(cpy_r_r64, cpy_r_module);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 430, CPyStatic_update___globals);
        goto CPyL110;
    }
    cpy_r_r67 = CPyDef_update___update_module_isolated(cpy_r_module, cpy_r_path, cpy_r_manager, cpy_r_previous_modules, cpy_r_graph, cpy_r_force_removed, cpy_r_followed);
    CPy_DECREF(cpy_r_previous_modules);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 431, CPyStatic_update___globals);
        goto CPyL111;
    }
    cpy_r_result = cpy_r_r67;
    cpy_r_r68 = (PyObject *)CPyType_update___BlockedUpdate;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_result)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    if (cpy_r_r71) {
        goto CPyL112;
    } else
        goto CPyL43;
CPyL32: ;
    cpy_r_r72 = CPySequence_CheckUnpackCount(cpy_r_result, 4);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 436, CPyStatic_update___globals);
        goto CPyL113;
    }
    cpy_r_r74 = CPySequenceTuple_GetItem(cpy_r_result, 0);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 436, CPyStatic_update___globals);
        goto CPyL113;
    }
    if (likely(PyUnicode_Check(cpy_r_r74)))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 436, CPyStatic_update___globals, "str", cpy_r_r74);
        goto CPyL113;
    }
    cpy_r_r76 = CPySequenceTuple_GetItem(cpy_r_result, 2);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 436, CPyStatic_update___globals);
        goto CPyL114;
    }
    if (likely(PyUnicode_Check(cpy_r_r76)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 436, CPyStatic_update___globals, "str", cpy_r_r76);
        goto CPyL114;
    }
    cpy_r_r78 = CPySequenceTuple_GetItem(cpy_r_result, 4);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 436, CPyStatic_update___globals);
        goto CPyL115;
    }
    if (likely(PyList_Check(cpy_r_r78)))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 436, CPyStatic_update___globals, "list", cpy_r_r78);
        goto CPyL115;
    }
    cpy_r_r80 = CPySequenceTuple_GetItem(cpy_r_result, 6);
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 436, CPyStatic_update___globals);
        goto CPyL116;
    }
    if (likely(PyList_Check(cpy_r_r80)))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 436, CPyStatic_update___globals, "list", cpy_r_r80);
        goto CPyL116;
    }
    cpy_r_module = cpy_r_r75;
    cpy_r_path = cpy_r_r77;
    cpy_r_remaining = cpy_r_r79;
    cpy_r_errors = cpy_r_r81;
    cpy_r_r82 = CPyDef_update___get_module_to_path_map(cpy_r_graph);
    CPy_DECREF(cpy_r_graph);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 437, CPyStatic_update___globals);
        goto CPyL117;
    }
    CPy_DECREF(((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_modules);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_modules = cpy_r_r82;
    cpy_r_r84.f0 = cpy_r_module;
    cpy_r_r84.f1 = cpy_r_path;
    CPy_INCREF(cpy_r_r84.f0);
    CPy_INCREF(cpy_r_r84.f1);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_path);
    cpy_r_r85.f0 = cpy_r_remaining;
    cpy_r_r85.f1 = cpy_r_r84;
    cpy_r_r85.f2 = cpy_r_errors;
    CPy_INCREF(cpy_r_r85.f0);
    CPy_INCREF(cpy_r_r85.f1.f0);
    CPy_INCREF(cpy_r_r85.f1.f1);
    CPy_INCREF(cpy_r_r85.f2);
    CPy_DECREF(cpy_r_remaining);
    CPy_DECREF(cpy_r_errors);
    cpy_r_r86 = cpy_r_r85.f0;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = cpy_r_r85.f2;
    CPy_INCREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r85.f0);
    CPy_DECREF(cpy_r_r85.f1.f0);
    CPy_DECREF(cpy_r_r85.f1.f1);
    CPy_DECREF(cpy_r_r85.f2);
    cpy_r_r88.f0 = cpy_r_r86;
    cpy_r_r88.f1 = cpy_r_r84;
    cpy_r_r88.f2 = cpy_r_r87;
    CPy_INCREF(cpy_r_r88.f0);
    CPy_INCREF(cpy_r_r88.f1.f0);
    CPy_INCREF(cpy_r_r88.f1.f1);
    CPy_INCREF(cpy_r_r88.f2);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r84.f0);
    CPy_DECREF(cpy_r_r84.f1);
    CPy_DECREF(cpy_r_r87);
    return cpy_r_r88;
CPyL43: ;
    cpy_r_r89 = (PyObject *)CPyType_update___NormalUpdate;
    cpy_r_r90 = (CPyPtr)&((PyObject *)cpy_r_result)->ob_type;
    cpy_r_r91 = *(PyObject * *)cpy_r_r90;
    cpy_r_r92 = cpy_r_r91 == cpy_r_r89;
    if (cpy_r_r92) {
        goto CPyL46;
    } else
        goto CPyL118;
CPyL44: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r93 = 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 439, CPyStatic_update___globals);
        goto CPyL106;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r94 = CPySequence_CheckUnpackCount(cpy_r_result, 4);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 440, CPyStatic_update___globals);
        goto CPyL119;
    }
    cpy_r_r96 = CPySequenceTuple_GetItem(cpy_r_result, 0);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 440, CPyStatic_update___globals);
        goto CPyL119;
    }
    if (likely(PyUnicode_Check(cpy_r_r96)))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 440, CPyStatic_update___globals, "str", cpy_r_r96);
        goto CPyL119;
    }
    cpy_r_r98 = CPySequenceTuple_GetItem(cpy_r_result, 2);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 440, CPyStatic_update___globals);
        goto CPyL120;
    }
    if (likely(PyUnicode_Check(cpy_r_r98)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 440, CPyStatic_update___globals, "str", cpy_r_r98);
        goto CPyL120;
    }
    cpy_r_r100 = CPySequenceTuple_GetItem(cpy_r_result, 4);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 440, CPyStatic_update___globals);
        goto CPyL121;
    }
    if (likely(PyList_Check(cpy_r_r100)))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 440, CPyStatic_update___globals, "list", cpy_r_r100);
        goto CPyL121;
    }
    cpy_r_r102 = CPySequenceTuple_GetItem(cpy_r_result, 6);
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 440, CPyStatic_update___globals);
        goto CPyL122;
    }
    if (Py_TYPE(cpy_r_r102) == CPyType_nodes___MypyFile)
        cpy_r_r103 = cpy_r_r102;
    else {
        cpy_r_r103 = NULL;
    }
    if (cpy_r_r103 != NULL) goto __LL6690;
    if (cpy_r_r102 == Py_None)
        cpy_r_r103 = cpy_r_r102;
    else {
        cpy_r_r103 = NULL;
    }
    if (cpy_r_r103 != NULL) goto __LL6690;
    CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 440, CPyStatic_update___globals, "mypy.nodes.MypyFile or None", cpy_r_r102);
    goto CPyL122;
__LL6690: ;
    cpy_r_module = cpy_r_r97;
    cpy_r_path = cpy_r_r99;
    cpy_r_remaining = cpy_r_r101;
    cpy_r_tree = cpy_r_r103;
    cpy_r_r104 = CPyModule_time;
    cpy_r_r105 = CPyStatics[147]; /* 'time' */
    cpy_r_r106 = CPyObject_GetAttr(cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 443, CPyStatic_update___globals);
        goto CPyL123;
    }
    cpy_r_r107 = _PyObject_Vectorcall(cpy_r_r106, 0, 0, 0);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 443, CPyStatic_update___globals);
        goto CPyL123;
    }
    cpy_r_r108 = PyFloat_AsDouble(cpy_r_r107);
    if (cpy_r_r108 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r107); cpy_r_r108 = -113.0;
    }
    CPy_DECREF(cpy_r_r107);
    cpy_r_r109 = cpy_r_r108 == -113.0;
    if (unlikely(cpy_r_r109)) goto CPyL59;
CPyL58: ;
    cpy_r_t1 = cpy_r_r108;
    cpy_r_r110 = CPyDict_Build(1, cpy_r_module, cpy_r_tree);
    CPy_DECREF(cpy_r_tree);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 444, CPyStatic_update___globals);
        goto CPyL124;
    } else
        goto CPyL60;
CPyL59: ;
    cpy_r_r111 = PyErr_Occurred();
    if (unlikely(cpy_r_r111 != NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 443, CPyStatic_update___globals);
        goto CPyL123;
    } else
        goto CPyL58;
CPyL60: ;
    cpy_r_r112 = CPyDef_update___calculate_active_triggers(cpy_r_manager, cpy_r_old_snapshots, cpy_r_r110);
    CPy_DECREF(cpy_r_old_snapshots);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 444, CPyStatic_update___globals);
        goto CPyL125;
    }
    cpy_r_triggered = cpy_r_r112;
    cpy_r_r113 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    CPy_INCREF(cpy_r_r113);
    cpy_r_r114 = CPyDef_update___is_verbose(cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 445, CPyStatic_update___globals);
        goto CPyL126;
    }
    if (!cpy_r_r114) goto CPyL79;
    cpy_r_r115 = PyList_New(0);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 446, CPyStatic_update___globals);
        goto CPyL126;
    }
    cpy_r_r116 = PyObject_GetIter(cpy_r_triggered);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 446, CPyStatic_update___globals);
        goto CPyL127;
    }
CPyL65: ;
    cpy_r_r117 = PyIter_Next(cpy_r_r116);
    if (cpy_r_r117 == NULL) goto CPyL128;
    if (likely(PyUnicode_Check(cpy_r_r117)))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 446, CPyStatic_update___globals, "str", cpy_r_r117);
        goto CPyL129;
    }
    cpy_r_trigger = cpy_r_r118;
    cpy_r_r119 = CPyStatics[5373]; /* '__>' */
    cpy_r_r120 = CPyStr_Endswith(cpy_r_trigger, cpy_r_r119);
    cpy_r_r121 = cpy_r_r120 ^ 1;
    if (!cpy_r_r121) goto CPyL130;
    cpy_r_r122 = PyList_Append(cpy_r_r115, cpy_r_trigger);
    CPy_DECREF(cpy_r_trigger);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 446, CPyStatic_update___globals);
        goto CPyL129;
    } else
        goto CPyL65;
CPyL69: ;
    cpy_r_r124 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 446, CPyStatic_update___globals);
        goto CPyL127;
    }
    cpy_r_filtered = cpy_r_r115;
    cpy_r_r125 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_manager;
    CPy_INCREF(cpy_r_r125);
    cpy_r_r126 = CPyStatics[163]; /* '' */
    cpy_r_r127 = CPyStatics[5374]; /* 'triggered: ' */
    cpy_r_r128 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r129 = CPyModule_builtins;
    cpy_r_r130 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r131 = CPyObject_GetAttr(cpy_r_r129, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 447, CPyStatic_update___globals);
        goto CPyL131;
    }
    PyObject *cpy_r_r132[1] = {cpy_r_filtered};
    cpy_r_r133 = (PyObject **)&cpy_r_r132;
    cpy_r_r134 = _PyObject_Vectorcall(cpy_r_r131, cpy_r_r133, 1, 0);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 447, CPyStatic_update___globals);
        goto CPyL131;
    }
    CPy_DECREF(cpy_r_filtered);
    if (likely(PyList_Check(cpy_r_r134)))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 447, CPyStatic_update___globals, "list", cpy_r_r134);
        goto CPyL132;
    }
    cpy_r_r136 = CPyStatics[163]; /* '' */
    cpy_r_r137 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r138[3] = {cpy_r_r128, cpy_r_r135, cpy_r_r136};
    cpy_r_r139 = (PyObject **)&cpy_r_r138;
    cpy_r_r140 = PyObject_VectorcallMethod(cpy_r_r137, cpy_r_r139, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 447, CPyStatic_update___globals);
        goto CPyL133;
    }
    CPy_DECREF(cpy_r_r135);
    if (likely(PyUnicode_Check(cpy_r_r140)))
        cpy_r_r141 = cpy_r_r140;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 447, CPyStatic_update___globals, "str", cpy_r_r140);
        goto CPyL132;
    }
    cpy_r_r142 = PyList_New(2);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 447, CPyStatic_update___globals);
        goto CPyL134;
    }
    cpy_r_r143 = (CPyPtr)&((PyListObject *)cpy_r_r142)->ob_item;
    cpy_r_r144 = *(CPyPtr *)cpy_r_r143;
    CPy_INCREF(cpy_r_r127);
    *(PyObject * *)cpy_r_r144 = cpy_r_r127;
    cpy_r_r145 = cpy_r_r144 + 8;
    *(PyObject * *)cpy_r_r145 = cpy_r_r141;
    cpy_r_r146 = PyUnicode_Join(cpy_r_r126, cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 447, CPyStatic_update___globals);
        goto CPyL132;
    }
    cpy_r_r147 = PyTuple_Pack(1, cpy_r_r146);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 447, CPyStatic_update___globals);
        goto CPyL132;
    }
    cpy_r_r148 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_r125, cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r148 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 447, CPyStatic_update___globals);
        goto CPyL126;
    }
CPyL79: ;
    cpy_r_r149 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_triggered;
    CPy_INCREF(cpy_r_r149);
    cpy_r_r150 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_targets_with_errors;
    CPy_INCREF(cpy_r_r150);
    cpy_r_r151 = PyNumber_Or(cpy_r_triggered, cpy_r_r150);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 448, CPyStatic_update___globals);
        goto CPyL135;
    }
    if (likely(PySet_Check(cpy_r_r151)))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 448, CPyStatic_update___globals, "set", cpy_r_r151);
        goto CPyL135;
    }
    cpy_r_r153 = CPyList_Extend(cpy_r_r149, cpy_r_r152);
    CPy_DECREF(cpy_r_r149);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 448, CPyStatic_update___globals);
        goto CPyL126;
    } else
        goto CPyL136;
CPyL82: ;
    cpy_r_r154 = PyDict_Contains(cpy_r_graph, cpy_r_module);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 449, CPyStatic_update___globals);
        goto CPyL126;
    }
    cpy_r_r156 = cpy_r_r154;
    if (!cpy_r_r156) goto CPyL90;
    cpy_r_r157 = CPyDict_GetItem(cpy_r_graph, cpy_r_module);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 450, CPyStatic_update___globals);
        goto CPyL126;
    }
    if (likely(Py_TYPE(cpy_r_r157) == CPyType_mypy___build___State))
        cpy_r_r158 = cpy_r_r157;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 450, CPyStatic_update___globals, "mypy.build.State", cpy_r_r157);
        goto CPyL126;
    }
    cpy_r_r159 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_deps;
    CPy_INCREF(cpy_r_r159);
    cpy_r_r160 = CPyDef_mypy___build___State___update_fine_grained_deps(cpy_r_r158, cpy_r_r159);
    CPy_DECREF(cpy_r_r159);
    CPy_DECREF(cpy_r_r158);
    if (unlikely(cpy_r_r160 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 450, CPyStatic_update___globals);
        goto CPyL126;
    }
    cpy_r_r161 = CPyDict_GetItem(cpy_r_graph, cpy_r_module);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 451, CPyStatic_update___globals);
        goto CPyL126;
    }
    if (likely(Py_TYPE(cpy_r_r161) == CPyType_mypy___build___State))
        cpy_r_r162 = cpy_r_r161;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 451, CPyStatic_update___globals, "mypy.build.State", cpy_r_r161);
        goto CPyL126;
    }
    cpy_r_r163 = CPyDef_mypy___build___State___free_state(cpy_r_r162);
    CPy_DECREF(cpy_r_r162);
    if (unlikely(cpy_r_r163 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 451, CPyStatic_update___globals);
        goto CPyL126;
    }
CPyL90: ;
    cpy_r_r164 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_deps;
    CPy_INCREF(cpy_r_r164);
    cpy_r_r165 = PySet_New(NULL);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 457, CPyStatic_update___globals);
        goto CPyL137;
    }
    cpy_r_r166 = PySet_Add(cpy_r_r165, cpy_r_module);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 457, CPyStatic_update___globals);
        goto CPyL138;
    }
    cpy_r_r168 = PySet_New(NULL);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 458, CPyStatic_update___globals);
        goto CPyL138;
    }
    cpy_r_r169 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_processed_targets;
    CPy_INCREF(cpy_r_r169);
    cpy_r_r170 = CPyDef_update___propagate_changes_using_dependencies(cpy_r_manager, cpy_r_graph, cpy_r_r164, cpy_r_triggered, cpy_r_r165, cpy_r_r168, cpy_r_r169);
    CPy_DECREF(cpy_r_r164);
    CPy_DECREF(cpy_r_triggered);
    CPy_DECREF(cpy_r_r165);
    CPy_DECREF(cpy_r_r168);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 452, CPyStatic_update___globals);
        goto CPyL125;
    }
    cpy_r_r171 = PyNumber_InPlaceAdd(cpy_r_remaining, cpy_r_r170);
    CPy_DECREF(cpy_r_remaining);
    CPy_DECREF(cpy_r_r170);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 452, CPyStatic_update___globals);
        goto CPyL139;
    }
    if (likely(PyList_Check(cpy_r_r171)))
        cpy_r_r172 = cpy_r_r171;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module", 452, CPyStatic_update___globals, "list", cpy_r_r171);
        goto CPyL139;
    }
    cpy_r_remaining = cpy_r_r172;
    cpy_r_r173 = CPyModule_time;
    cpy_r_r174 = CPyStatics[147]; /* 'time' */
    cpy_r_r175 = CPyObject_GetAttr(cpy_r_r173, cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 461, CPyStatic_update___globals);
        goto CPyL125;
    }
    cpy_r_r176 = _PyObject_Vectorcall(cpy_r_r175, 0, 0, 0);
    CPy_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 461, CPyStatic_update___globals);
        goto CPyL125;
    }
    cpy_r_r177 = PyFloat_AsDouble(cpy_r_r176);
    if (cpy_r_r177 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r176); cpy_r_r177 = -113.0;
    }
    CPy_DECREF(cpy_r_r176);
    cpy_r_r178 = cpy_r_r177 == -113.0;
    if (unlikely(cpy_r_r178)) goto CPyL100;
CPyL99: ;
    cpy_r_t2 = cpy_r_r177;
    cpy_r_r179 = cpy_r_t1 - cpy_r_t0;
    cpy_r_r180 = cpy_r_t2 - cpy_r_t1;
    cpy_r_r181 = CPyStatics[5375]; /* 'update_isolated_time' */
    cpy_r_r182 = CPyStatics[5376]; /* 'propagate_time' */
    cpy_r_r183 = PyFloat_FromDouble(cpy_r_r179);
    cpy_r_r184 = PyFloat_FromDouble(cpy_r_r180);
    cpy_r_r185 = CPyDict_Build(2, cpy_r_r181, cpy_r_r183, cpy_r_r182, cpy_r_r184);
    CPy_DECREF(cpy_r_r183);
    CPy_DECREF(cpy_r_r184);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 462, CPyStatic_update___globals);
        goto CPyL125;
    } else
        goto CPyL101;
CPyL100: ;
    cpy_r_r186 = PyErr_Occurred();
    if (unlikely(cpy_r_r186 != NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 461, CPyStatic_update___globals);
        goto CPyL125;
    } else
        goto CPyL99;
CPyL101: ;
    cpy_r_r187 = CPyDef_mypy___build___BuildManager___add_stats(cpy_r_manager, cpy_r_r185);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r187 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 462, CPyStatic_update___globals);
        goto CPyL125;
    }
    cpy_r_r188 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_targets_with_errors;
    CPy_INCREF(cpy_r_r188);
    cpy_r_r189 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_errors;
    CPy_INCREF(cpy_r_r189);
    CPy_DECREF(cpy_r_manager);
    cpy_r_r190 = CPyDef_mypy___errors___Errors___targets(cpy_r_r189);
    CPy_DECREF(cpy_r_r189);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 465, CPyStatic_update___globals);
        goto CPyL140;
    }
    cpy_r_r191 = _PySet_Update(cpy_r_r188, cpy_r_r190);
    CPy_DECREF(cpy_r_r188);
    CPy_DECREF(cpy_r_r190);
    cpy_r_r192 = cpy_r_r191 >= 0;
    if (unlikely(!cpy_r_r192)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 465, CPyStatic_update___globals);
        goto CPyL141;
    }
    cpy_r_r193 = CPyDef_update___get_module_to_path_map(cpy_r_graph);
    CPy_DECREF(cpy_r_graph);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module", 466, CPyStatic_update___globals);
        goto CPyL142;
    }
    CPy_DECREF(((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_modules);
    ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_self)->_previous_modules = cpy_r_r193;
    cpy_r_r195.f0 = cpy_r_module;
    cpy_r_r195.f1 = cpy_r_path;
    CPy_INCREF(cpy_r_r195.f0);
    CPy_INCREF(cpy_r_r195.f1);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_path);
    cpy_r_r196.f0 = cpy_r_remaining;
    cpy_r_r196.f1 = cpy_r_r195;
    cpy_r_r196.f2 = 1;
    CPy_INCREF(cpy_r_r196.f0);
    CPy_INCREF(cpy_r_r196.f1.f0);
    CPy_INCREF(cpy_r_r196.f1.f1);
    CPy_DECREF(cpy_r_remaining);
    cpy_r_r197 = cpy_r_r196.f0;
    CPy_INCREF(cpy_r_r197);
    CPy_DECREF(cpy_r_r196.f0);
    CPy_DECREF(cpy_r_r196.f1.f0);
    CPy_DECREF(cpy_r_r196.f1.f1);
    cpy_r_r198 = Py_None;
    cpy_r_r199.f0 = cpy_r_r197;
    cpy_r_r199.f1 = cpy_r_r195;
    cpy_r_r199.f2 = cpy_r_r198;
    CPy_INCREF(cpy_r_r199.f0);
    CPy_INCREF(cpy_r_r199.f1.f0);
    CPy_INCREF(cpy_r_r199.f1.f1);
    CPy_INCREF(cpy_r_r199.f2);
    CPy_DECREF(cpy_r_r197);
    CPy_DECREF(cpy_r_r195.f0);
    CPy_DECREF(cpy_r_r195.f1);
    return cpy_r_r199;
CPyL106: ;
    tuple_T3OT2OOO __tmp6691 = { NULL, (tuple_T2OO) { NULL, NULL }, NULL };
    cpy_r_r200 = __tmp6691;
    return cpy_r_r200;
CPyL107: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL106;
CPyL108: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    goto CPyL106;
CPyL109: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_previous_modules);
    CPy_DecRef(cpy_r_graph);
    goto CPyL106;
CPyL110: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_previous_modules);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_old_snapshots);
    goto CPyL106;
CPyL111: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_old_snapshots);
    goto CPyL106;
CPyL112: ;
    CPy_DECREF(cpy_r_manager);
    CPy_DECREF(cpy_r_old_snapshots);
    goto CPyL32;
CPyL113: ;
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_result);
    goto CPyL106;
CPyL114: ;
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r75);
    goto CPyL106;
CPyL115: ;
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r77);
    goto CPyL106;
CPyL116: ;
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r79);
    goto CPyL106;
CPyL117: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_errors);
    goto CPyL106;
CPyL118: ;
    CPy_DECREF(cpy_r_manager);
    CPy_DECREF(cpy_r_graph);
    CPy_DECREF(cpy_r_old_snapshots);
    CPy_DECREF(cpy_r_result);
    goto CPyL44;
CPyL119: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_old_snapshots);
    CPy_DecRef(cpy_r_result);
    goto CPyL106;
CPyL120: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_old_snapshots);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r97);
    goto CPyL106;
CPyL121: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_old_snapshots);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r99);
    goto CPyL106;
CPyL122: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_old_snapshots);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r101);
    goto CPyL106;
CPyL123: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_old_snapshots);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_tree);
    goto CPyL106;
CPyL124: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_old_snapshots);
    CPy_DecRef(cpy_r_remaining);
    goto CPyL106;
CPyL125: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_remaining);
    goto CPyL106;
CPyL126: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_triggered);
    goto CPyL106;
CPyL127: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_r115);
    goto CPyL106;
CPyL128: ;
    CPy_DECREF(cpy_r_r116);
    goto CPyL69;
CPyL129: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r116);
    goto CPyL106;
CPyL130: ;
    CPy_DECREF(cpy_r_trigger);
    goto CPyL65;
CPyL131: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_filtered);
    CPy_DecRef(cpy_r_r125);
    goto CPyL106;
CPyL132: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_r125);
    goto CPyL106;
CPyL133: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r135);
    goto CPyL106;
CPyL134: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r141);
    goto CPyL106;
CPyL135: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_r149);
    goto CPyL106;
CPyL136: ;
    CPy_DECREF(cpy_r_r153);
    goto CPyL82;
CPyL137: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_r164);
    goto CPyL106;
CPyL138: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r165);
    goto CPyL106;
CPyL139: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_graph);
    goto CPyL106;
CPyL140: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_r188);
    goto CPyL106;
CPyL141: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_remaining);
    goto CPyL106;
CPyL142: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_remaining);
    goto CPyL106;
}

PyObject *CPyPy_update___FineGrainedBuildManager___update_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", "path", "force_removed", "followed", 0};
    static CPyArg_Parser parser = {"OOOO:update_module", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_path;
    PyObject *obj_force_removed;
    PyObject *obj_followed;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module, &obj_path, &obj_force_removed, &obj_followed)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_update___FineGrainedBuildManager))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.server.update.FineGrainedBuildManager", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    char arg_force_removed;
    if (unlikely(!PyBool_Check(obj_force_removed))) {
        CPy_TypeError("bool", obj_force_removed); goto fail;
    } else
        arg_force_removed = obj_force_removed == Py_True;
    char arg_followed;
    if (unlikely(!PyBool_Check(obj_followed))) {
        CPy_TypeError("bool", obj_followed); goto fail;
    } else
        arg_followed = obj_followed == Py_True;
    tuple_T3OT2OOO retval = CPyDef_update___FineGrainedBuildManager___update_module(arg_self, arg_module, arg_path, arg_force_removed, arg_followed);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6692 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp6692);
    PyObject *__tmp6693 = PyTuple_New(2);
    if (unlikely(__tmp6693 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6694 = retval.f1.f0;
    PyTuple_SET_ITEM(__tmp6693, 0, __tmp6694);
    PyObject *__tmp6695 = retval.f1.f1;
    PyTuple_SET_ITEM(__tmp6693, 1, __tmp6695);
    PyTuple_SET_ITEM(retbox, 1, __tmp6693);
    PyObject *__tmp6696 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp6696);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "update_module", 381, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___find_unloaded_deps(PyObject *cpy_r_manager, PyObject *cpy_r_graph, PyObject *cpy_r_initial) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_worklist;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_seen;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_unloaded;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_node;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_ancestors;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = PySequence_List(cpy_r_initial);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 483, CPyStatic_update___globals);
        goto CPyL31;
    }
    cpy_r_worklist = cpy_r_r0;
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 484, CPyStatic_update___globals);
        goto CPyL32;
    }
    cpy_r_seen = cpy_r_r1;
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 485, CPyStatic_update___globals);
        goto CPyL33;
    }
    cpy_r_unloaded = cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_worklist)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = cpy_r_r5 != 0;
    if (!cpy_r_r6) goto CPyL34;
    cpy_r_r7 = CPyList_PopLast(cpy_r_worklist);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 487, CPyStatic_update___globals);
        goto CPyL35;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_unloaded_deps", 487, CPyStatic_update___globals, "str", cpy_r_r7);
        goto CPyL35;
    }
    cpy_r_node = cpy_r_r8;
    cpy_r_r9 = PySet_Contains(cpy_r_seen, cpy_r_node);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 488, CPyStatic_update___globals);
        goto CPyL36;
    }
    cpy_r_r11 = cpy_r_r9;
    if (cpy_r_r11) goto CPyL37;
    cpy_r_r12 = PyDict_Contains(cpy_r_graph, cpy_r_node);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 488, CPyStatic_update___globals);
        goto CPyL36;
    }
    cpy_r_r14 = cpy_r_r12;
    cpy_r_r15 = cpy_r_r14 ^ 1;
    if (cpy_r_r15) goto CPyL37;
    cpy_r_r16 = PySet_Add(cpy_r_seen, cpy_r_node);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 490, CPyStatic_update___globals);
        goto CPyL36;
    }
    cpy_r_r18 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_modules;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = PyDict_Contains(cpy_r_r18, cpy_r_node);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 491, CPyStatic_update___globals);
        goto CPyL36;
    }
    cpy_r_r21 = cpy_r_r19;
    cpy_r_r22 = cpy_r_r21 ^ 1;
    if (!cpy_r_r22) goto CPyL37;
    cpy_r_r23 = CPyDict_GetItem(cpy_r_graph, cpy_r_node);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 492, CPyStatic_update___globals);
        goto CPyL36;
    }
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_mypy___build___State))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_unloaded_deps", 492, CPyStatic_update___globals, "mypy.build.State", cpy_r_r23);
        goto CPyL36;
    }
    cpy_r_r25 = ((mypy___build___StateObject *)cpy_r_r24)->_ancestors;
    CPy_INCREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_r25 != cpy_r_r26;
    if (!cpy_r_r27) goto CPyL38;
    CPy_INCREF(cpy_r_r25);
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r28 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_unloaded_deps", 492, CPyStatic_update___globals, "list", cpy_r_r25);
        goto CPyL39;
    }
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_r28)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    CPy_DECREF(cpy_r_r28);
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = cpy_r_r31 != 0;
    if (!cpy_r_r32) goto CPyL38;
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r33 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_unloaded_deps", 492, CPyStatic_update___globals, "list", cpy_r_r25);
        goto CPyL36;
    }
    cpy_r_r34 = cpy_r_r33;
    goto CPyL23;
CPyL21: ;
    cpy_r_r35 = PyList_New(0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 492, CPyStatic_update___globals);
        goto CPyL36;
    }
    cpy_r_r34 = cpy_r_r35;
CPyL23: ;
    cpy_r_ancestors = cpy_r_r34;
    cpy_r_r36 = CPyDict_GetItem(cpy_r_graph, cpy_r_node);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 493, CPyStatic_update___globals);
        goto CPyL40;
    }
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_mypy___build___State))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_unloaded_deps", 493, CPyStatic_update___globals, "mypy.build.State", cpy_r_r36);
        goto CPyL40;
    }
    cpy_r_r38 = ((mypy___build___StateObject *)cpy_r_r37)->_dependencies;
    if (unlikely(cpy_r_r38 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'dependencies' of 'State' undefined");
    } else {
        CPy_INCREF(cpy_r_r38);
    }
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 493, CPyStatic_update___globals);
        goto CPyL40;
    }
CPyL26: ;
    cpy_r_r39 = PyNumber_Add(cpy_r_r38, cpy_r_ancestors);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_ancestors);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 493, CPyStatic_update___globals);
        goto CPyL36;
    }
    if (likely(PyList_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_unloaded_deps", 493, CPyStatic_update___globals, "list", cpy_r_r39);
        goto CPyL36;
    }
    cpy_r_r41 = CPyList_Extend(cpy_r_worklist, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 493, CPyStatic_update___globals);
        goto CPyL36;
    } else
        goto CPyL41;
CPyL29: ;
    cpy_r_r42 = PyList_Append(cpy_r_unloaded, cpy_r_node);
    CPy_DECREF(cpy_r_node);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 494, CPyStatic_update___globals);
        goto CPyL35;
    } else
        goto CPyL4;
CPyL30: ;
    return cpy_r_unloaded;
CPyL31: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL32: ;
    CPy_DecRef(cpy_r_worklist);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_seen);
    goto CPyL31;
CPyL34: ;
    CPy_DECREF(cpy_r_worklist);
    CPy_DECREF(cpy_r_seen);
    goto CPyL30;
CPyL35: ;
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unloaded);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unloaded);
    CPy_DecRef(cpy_r_node);
    goto CPyL31;
CPyL37: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL4;
CPyL38: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL21;
CPyL39: ;
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unloaded);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r25);
    goto CPyL31;
CPyL40: ;
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_unloaded);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_ancestors);
    goto CPyL31;
CPyL41: ;
    CPy_DECREF(cpy_r_r41);
    goto CPyL29;
}

PyObject *CPyPy_update___find_unloaded_deps(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"manager", "graph", "initial", 0};
    static CPyArg_Parser parser = {"OOO:find_unloaded_deps", kwlist, 0};
    PyObject *obj_manager;
    PyObject *obj_graph;
    PyObject *obj_initial;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_manager, &obj_graph, &obj_initial)) {
        return NULL;
    }
    PyObject *arg_manager;
    if (likely(Py_TYPE(obj_manager) == CPyType_mypy___build___BuildManager))
        arg_manager = obj_manager;
    else {
        CPy_TypeError("mypy.build.BuildManager", obj_manager); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_initial = obj_initial;
    PyObject *retval = CPyDef_update___find_unloaded_deps(arg_manager, arg_graph, arg_initial);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "find_unloaded_deps", 471, CPyStatic_update___globals);
    return NULL;
}

char CPyDef_update___ensure_deps_loaded(PyObject *cpy_r_module, PyObject *cpy_r_deps, PyObject *cpy_r_graph) {
    int32_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_parts;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_i;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_base;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = PyDict_Contains(cpy_r_graph, cpy_r_module);
    cpy_r_r1 = cpy_r_r0 >= 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_deps_loaded", 508, CPyStatic_update___globals);
        goto CPyL26;
    }
    cpy_r_r2 = cpy_r_r0;
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = CPyDict_GetItem(cpy_r_graph, cpy_r_module);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_deps_loaded", 508, CPyStatic_update___globals);
        goto CPyL26;
    }
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_mypy___build___State))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "ensure_deps_loaded", 508, CPyStatic_update___globals, "mypy.build.State", cpy_r_r3);
        goto CPyL26;
    }
    cpy_r_r5 = ((mypy___build___StateObject *)cpy_r_r4)->_fine_grained_deps_loaded;
    CPy_DECREF(cpy_r_r4);
    if (!cpy_r_r5) goto CPyL6;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r6 = CPyStatics[224]; /* '.' */
    cpy_r_r7 = PyUnicode_Split(cpy_r_module, cpy_r_r6, -1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_deps_loaded", 510, CPyStatic_update___globals);
        goto CPyL26;
    }
    cpy_r_parts = cpy_r_r7;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_parts)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = 0;
    cpy_r_i = cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r12) goto CPyL27;
    cpy_r_r13 = CPyStatics[224]; /* '.' */
    cpy_r_r14 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r15 = CPyList_GetSlice(cpy_r_parts, 0, cpy_r_r14);
    CPyTagged_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_deps_loaded", 512, CPyStatic_update___globals);
        goto CPyL28;
    }
    if (likely(PyList_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "ensure_deps_loaded", 512, CPyStatic_update___globals, "list", cpy_r_r15);
        goto CPyL28;
    }
    cpy_r_r17 = PyUnicode_Join(cpy_r_r13, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_deps_loaded", 512, CPyStatic_update___globals);
        goto CPyL28;
    }
    cpy_r_base = cpy_r_r17;
    cpy_r_r18 = PyDict_Contains(cpy_r_graph, cpy_r_base);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_deps_loaded", 513, CPyStatic_update___globals);
        goto CPyL29;
    }
    cpy_r_r20 = cpy_r_r18;
    if (!cpy_r_r20) goto CPyL30;
    cpy_r_r21 = CPyDict_GetItem(cpy_r_graph, cpy_r_base);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_deps_loaded", 513, CPyStatic_update___globals);
        goto CPyL29;
    }
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_mypy___build___State))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "ensure_deps_loaded", 513, CPyStatic_update___globals, "mypy.build.State", cpy_r_r21);
        goto CPyL29;
    }
    cpy_r_r23 = ((mypy___build___StateObject *)cpy_r_r22)->_fine_grained_deps_loaded;
    CPy_DECREF(cpy_r_r22);
    if (cpy_r_r23) goto CPyL30;
CPyL17: ;
    cpy_r_r24 = CPyDict_GetItem(cpy_r_graph, cpy_r_base);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_deps_loaded", 514, CPyStatic_update___globals);
        goto CPyL29;
    }
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_mypy___build___State))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "ensure_deps_loaded", 514, CPyStatic_update___globals, "mypy.build.State", cpy_r_r24);
        goto CPyL29;
    }
    cpy_r_r26 = CPyDef_mypy___build___State___load_fine_grained_deps(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_deps_loaded", 514, CPyStatic_update___globals);
        goto CPyL29;
    }
    cpy_r_r27 = CPyDef_deps___merge_dependencies(cpy_r_r26, cpy_r_deps);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_deps_loaded", 514, CPyStatic_update___globals);
        goto CPyL29;
    }
    cpy_r_r28 = CPyDict_GetItem(cpy_r_graph, cpy_r_base);
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_deps_loaded", 515, CPyStatic_update___globals);
        goto CPyL28;
    }
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_mypy___build___State))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "ensure_deps_loaded", 515, CPyStatic_update___globals, "mypy.build.State", cpy_r_r28);
        goto CPyL28;
    }
    ((mypy___build___StateObject *)cpy_r_r29)->_fine_grained_deps_loaded = 1;
    CPy_DECREF(cpy_r_r29);
CPyL24: ;
    cpy_r_r31 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r31;
    cpy_r_i = cpy_r_r31;
    goto CPyL8;
CPyL25: ;
    return 1;
CPyL26: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL27: ;
    CPy_DECREF(cpy_r_parts);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_parts);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_parts);
    CPy_DecRef(cpy_r_base);
    goto CPyL26;
CPyL30: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL24;
}

PyObject *CPyPy_update___ensure_deps_loaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module", "deps", "graph", 0};
    static CPyArg_Parser parser = {"OOO:ensure_deps_loaded", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_deps;
    PyObject *obj_graph;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module, &obj_deps, &obj_graph)) {
        return NULL;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *arg_deps;
    if (likely(PyDict_Check(obj_deps)))
        arg_deps = obj_deps;
    else {
        CPy_TypeError("dict", obj_deps); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    char retval = CPyDef_update___ensure_deps_loaded(arg_module, arg_deps, arg_graph);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "ensure_deps_loaded", 499, CPyStatic_update___globals);
    return NULL;
}

char CPyDef_update___ensure_trees_loaded(PyObject *cpy_r_manager, PyObject *cpy_r_graph, PyObject *cpy_r_initial) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_to_process;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = CPyDef_update___find_unloaded_deps(cpy_r_manager, cpy_r_graph, cpy_r_initial);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_trees_loaded", 522, CPyStatic_update___globals);
        goto CPyL14;
    }
    cpy_r_to_process = cpy_r_r0;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_to_process)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (!cpy_r_r4) goto CPyL15;
    cpy_r_r5 = CPyDef_update___is_verbose(cpy_r_manager);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_trees_loaded", 524, CPyStatic_update___globals);
        goto CPyL16;
    }
    if (!cpy_r_r5) goto CPyL12;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_to_process)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = CPyTagged_Str(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_trees_loaded", 526, CPyStatic_update___globals);
        goto CPyL16;
    }
    cpy_r_r10 = CPyModule_builtins;
    cpy_r_r11 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_trees_loaded", 527, CPyStatic_update___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r13[1] = {cpy_r_to_process};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_trees_loaded", 527, CPyStatic_update___globals);
        goto CPyL17;
    }
    if (likely(PyList_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "ensure_trees_loaded", 527, CPyStatic_update___globals, "list", cpy_r_r15);
        goto CPyL17;
    }
    cpy_r_r17 = PyObject_Str(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_trees_loaded", 526, CPyStatic_update___globals);
        goto CPyL17;
    }
    cpy_r_r18 = CPyStatics[5377]; /* 'Calling process_fresh_modules on set of size ' */
    cpy_r_r19 = CPyStatics[368]; /* ' (' */
    cpy_r_r20 = CPyStatics[72]; /* ')' */
    cpy_r_r21 = CPyStr_Build(5, cpy_r_r18, cpy_r_r9, cpy_r_r19, cpy_r_r17, cpy_r_r20);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_trees_loaded", 526, CPyStatic_update___globals);
        goto CPyL16;
    }
    cpy_r_r22 = PyTuple_Pack(1, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_trees_loaded", 525, CPyStatic_update___globals);
        goto CPyL16;
    }
    cpy_r_r23 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_manager, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_trees_loaded", 525, CPyStatic_update___globals);
        goto CPyL16;
    }
CPyL12: ;
    cpy_r_r24 = CPyDef_mypy___build___process_fresh_modules(cpy_r_graph, cpy_r_to_process, cpy_r_manager);
    CPy_DECREF(cpy_r_to_process);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "ensure_trees_loaded", 530, CPyStatic_update___globals);
        goto CPyL14;
    }
CPyL13: ;
    return 1;
CPyL14: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL15: ;
    CPy_DECREF(cpy_r_to_process);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_to_process);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_to_process);
    CPy_DecRef(cpy_r_r9);
    goto CPyL14;
}

PyObject *CPyPy_update___ensure_trees_loaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"manager", "graph", "initial", 0};
    static CPyArg_Parser parser = {"OOO:ensure_trees_loaded", kwlist, 0};
    PyObject *obj_manager;
    PyObject *obj_graph;
    PyObject *obj_initial;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_manager, &obj_graph, &obj_initial)) {
        return NULL;
    }
    PyObject *arg_manager;
    if (likely(Py_TYPE(obj_manager) == CPyType_mypy___build___BuildManager))
        arg_manager = obj_manager;
    else {
        CPy_TypeError("mypy.build.BuildManager", obj_manager); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_initial = obj_initial;
    char retval = CPyDef_update___ensure_trees_loaded(arg_manager, arg_graph, arg_initial);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "ensure_trees_loaded", 518, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___restore_update_module_isolated_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_update___restore_update_module_isolated_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_update___restore_update_module_isolated_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "__get__", -1, CPyStatic_update___globals);
    return NULL;
}

char CPyDef_update___restore_update_module_isolated_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_ids) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_restore;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    cpy_r_r0 = ((mypy___server___update___restore_update_module_isolated_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "restore", "restore_update_module_isolated_obj", "__mypyc_env__", 600, CPyStatic_update___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_restore;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "restore", "update_module_isolated_env", "restore", -1, CPyStatic_update___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_restore = cpy_r_r1;
    CPy_DECREF(cpy_r_restore);
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_ids)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL41;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_ids, cpy_r_r2);
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "restore", 604, CPyStatic_update___globals, "str", cpy_r_r7);
        goto CPyL40;
    }
    cpy_r_id = cpy_r_r8;
    cpy_r_r9 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_module;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "restore", "update_module_isolated_env", "orig_module", 605, CPyStatic_update___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r9);
CPyL6: ;
    cpy_r_r10 = PyUnicode_Compare(cpy_r_id, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 == -1;
    if (!cpy_r_r11) goto CPyL9;
    cpy_r_r12 = PyErr_Occurred();
    cpy_r_r13 = cpy_r_r12 != NULL;
    if (!cpy_r_r13) goto CPyL9;
    cpy_r_r14 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/server/update.py", "restore", 605, CPyStatic_update___globals);
        goto CPyL42;
    }
CPyL9: ;
    cpy_r_r15 = cpy_r_r10 == 0;
    if (!cpy_r_r15) goto CPyL16;
    cpy_r_r16 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_tree;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "restore", "update_module_isolated_env", "orig_tree", 605, CPyStatic_update___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r16);
CPyL11: ;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_r16 != cpy_r_r17;
    CPy_DECREF(cpy_r_r16);
    if (!cpy_r_r18) goto CPyL16;
    cpy_r_r19 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_tree;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "restore", "update_module_isolated_env", "orig_tree", 606, CPyStatic_update___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r19);
CPyL13: ;
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "restore", 606, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_r19);
        goto CPyL42;
    }
    cpy_r_r21 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "restore", "update_module_isolated_env", "manager", 606, CPyStatic_update___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r21);
CPyL15: ;
    cpy_r_r22 = ((mypy___build___BuildManagerObject *)cpy_r_r21)->_modules;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = CPyDict_SetItem(cpy_r_r22, cpy_r_id, cpy_r_r20);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/server/update.py", "restore", 606, CPyStatic_update___globals);
        goto CPyL42;
    } else
        goto CPyL21;
CPyL16: ;
    cpy_r_r25 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "restore", "update_module_isolated_env", "manager", 607, CPyStatic_update___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r25);
CPyL17: ;
    cpy_r_r26 = ((mypy___build___BuildManagerObject *)cpy_r_r25)->_modules;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = PyDict_Contains(cpy_r_r26, cpy_r_id);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/server/update.py", "restore", 607, CPyStatic_update___globals);
        goto CPyL42;
    }
    cpy_r_r29 = cpy_r_r27;
    if (!cpy_r_r29) goto CPyL21;
    cpy_r_r30 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "restore", "update_module_isolated_env", "manager", 608, CPyStatic_update___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r30);
CPyL20: ;
    cpy_r_r31 = ((mypy___build___BuildManagerObject *)cpy_r_r30)->_modules;
    CPy_INCREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = PyObject_DelItem(cpy_r_r31, cpy_r_id);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/server/update.py", "restore", 608, CPyStatic_update___globals);
        goto CPyL42;
    }
CPyL21: ;
    cpy_r_r34 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_module;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "restore", "update_module_isolated_env", "orig_module", 609, CPyStatic_update___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r34);
CPyL22: ;
    cpy_r_r35 = PyUnicode_Compare(cpy_r_id, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 == -1;
    if (!cpy_r_r36) goto CPyL25;
    cpy_r_r37 = PyErr_Occurred();
    cpy_r_r38 = cpy_r_r37 != NULL;
    if (!cpy_r_r38) goto CPyL25;
    cpy_r_r39 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/server/update.py", "restore", 609, CPyStatic_update___globals);
        goto CPyL42;
    }
CPyL25: ;
    cpy_r_r40 = cpy_r_r35 == 0;
    if (!cpy_r_r40) goto CPyL32;
    cpy_r_r41 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_state;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "restore", "update_module_isolated_env", "orig_state", 609, CPyStatic_update___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r41);
CPyL27: ;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_r41 != cpy_r_r42;
    CPy_DECREF(cpy_r_r41);
    if (!cpy_r_r43) goto CPyL32;
    cpy_r_r44 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_state;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "restore", "update_module_isolated_env", "orig_state", 610, CPyStatic_update___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r44);
CPyL29: ;
    if (likely(cpy_r_r44 != Py_None))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "restore", 610, CPyStatic_update___globals, "mypy.build.State", cpy_r_r44);
        goto CPyL42;
    }
    cpy_r_r46 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "restore", "update_module_isolated_env", "graph", 610, CPyStatic_update___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r46);
CPyL31: ;
    cpy_r_r47 = CPyDict_SetItem(cpy_r_r46, cpy_r_id, cpy_r_r45);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/server/update.py", "restore", 610, CPyStatic_update___globals);
        goto CPyL40;
    } else
        goto CPyL37;
CPyL32: ;
    cpy_r_r49 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "restore", "update_module_isolated_env", "graph", 611, CPyStatic_update___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r49);
CPyL33: ;
    cpy_r_r50 = PyDict_Contains(cpy_r_r49, cpy_r_id);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/server/update.py", "restore", 611, CPyStatic_update___globals);
        goto CPyL42;
    }
    cpy_r_r52 = cpy_r_r50;
    if (!cpy_r_r52) goto CPyL45;
    cpy_r_r53 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "restore", "update_module_isolated_env", "graph", 612, CPyStatic_update___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r53);
CPyL36: ;
    cpy_r_r54 = PyObject_DelItem(cpy_r_r53, cpy_r_id);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_id);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/server/update.py", "restore", 612, CPyStatic_update___globals);
        goto CPyL40;
    }
CPyL37: ;
    cpy_r_r56 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r56;
    goto CPyL3;
CPyL38: ;
    return 1;
CPyL39: ;
    cpy_r_r57 = 2;
    return cpy_r_r57;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL39;
CPyL41: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL38;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_id);
    goto CPyL39;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r20);
    goto CPyL39;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r45);
    goto CPyL39;
CPyL45: ;
    CPy_DECREF(cpy_r_id);
    goto CPyL37;
}

PyObject *CPyPy_update___restore_update_module_isolated_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"ids", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_ids;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_ids)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_ids;
    if (likely(PyList_Check(obj_ids)))
        arg_ids = obj_ids;
    else {
        CPy_TypeError("list", obj_ids); 
        goto fail;
    }
    char retval = CPyDef_update___restore_update_module_isolated_obj_____call__(arg___mypyc_self__, arg_ids);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "restore", 600, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___update_module_isolated(PyObject *cpy_r_module, PyObject *cpy_r_path, PyObject *cpy_r_manager, PyObject *cpy_r_previous_modules, PyObject *cpy_r_graph, char cpy_r_force_removed, char cpy_r_followed) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
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
    PyObject *cpy_r_r35;
    PyObject **cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T2OO cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    CPyPtr cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_sources;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_new_modules;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    tuple_T3OOO cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyPtr cpy_r_r94;
    CPyPtr cpy_r_r95;
    CPyPtr cpy_r_r96;
    int64_t cpy_r_r97;
    PyObject *cpy_r_r98;
    CPyTagged cpy_r_r99;
    CPyPtr cpy_r_r100;
    int64_t cpy_r_r101;
    CPyTagged cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_st;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    CPyTagged cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject **cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject **cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    CPyPtr cpy_r_r137;
    int64_t cpy_r_r138;
    PyObject *cpy_r_r139;
    CPyTagged cpy_r_r140;
    CPyPtr cpy_r_r141;
    int64_t cpy_r_r142;
    CPyTagged cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_st_2;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    tuple_T2OO cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    CPyTagged cpy_r_r152;
    PyObject *cpy_r_changed_modules;
    CPyPtr cpy_r_r153;
    int64_t cpy_r_r154;
    CPyTagged cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    tuple_T2OO cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    tuple_T2OO cpy_r_r161;
    PyObject *cpy_r_r162;
    int32_t cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_remaining_modules;
    CPyPtr cpy_r_r165;
    int64_t cpy_r_r166;
    PyObject *cpy_r_r167;
    CPyTagged cpy_r_r168;
    CPyPtr cpy_r_r169;
    int64_t cpy_r_r170;
    CPyTagged cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    tuple_T2OO cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r176;
    PyObject *cpy_r__;
    char cpy_r_r177;
    CPyTagged cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject **cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject **cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    CPyPtr cpy_r_r195;
    CPyPtr cpy_r_r196;
    CPyPtr cpy_r_r197;
    CPyPtr cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_state;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    char cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    double cpy_r_r215;
    char cpy_r_r216;
    double cpy_r_t0;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    CPyPtr cpy_r_r221;
    CPyPtr cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    char cpy_r_r225;
    tuple_T3OOO cpy_r_r226;
    PyObject *cpy_r_r227;
    char cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    CPyPtr cpy_r_r232;
    CPyPtr cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject **cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject **cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    char cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_new_modules_dict;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    double cpy_r_r262;
    char cpy_r_r263;
    double cpy_r_t1;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    char cpy_r_r266;
    char cpy_r_r267;
    char cpy_r_r268;
    char cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    double cpy_r_r274;
    char cpy_r_r275;
    double cpy_r_t2;
    char cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    double cpy_r_r282;
    char cpy_r_r283;
    double cpy_r_t3;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    double cpy_r_r286;
    double cpy_r_r287;
    double cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    char cpy_r_r296;
    PyObject *cpy_r_r297;
    int32_t cpy_r_r298;
    char cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject **cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    cpy_r_r0 = CPyDef_update___update_module_isolated_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 560, CPyStatic_update___globals);
        goto CPyL192;
    }
    CPy_INCREF(cpy_r_manager);
    if (((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager != NULL) {
        CPy_DECREF(((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager);
    }
    ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager = cpy_r_manager;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 560, CPyStatic_update___globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_graph);
    if (((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph != NULL) {
        CPy_DECREF(((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph);
    }
    ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph = cpy_r_graph;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 560, CPyStatic_update___globals);
        goto CPyL193;
    }
    cpy_r_r3 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "graph", 584, CPyStatic_update___globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = PyDict_Contains(cpy_r_r3, cpy_r_module);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 584, CPyStatic_update___globals);
        goto CPyL193;
    }
    cpy_r_r6 = cpy_r_r4;
    cpy_r_r7 = cpy_r_r6 ^ 1;
    if (!cpy_r_r7) goto CPyL13;
    cpy_r_r8 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "manager", 585, CPyStatic_update___globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    cpy_r_r9 = CPyStatics[163]; /* '' */
    cpy_r_r10 = CPyStatics[5378]; /* 'new module ' */
    cpy_r_r11 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r12 = CPyStatics[163]; /* '' */
    cpy_r_r13 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r14[3] = {cpy_r_r11, cpy_r_module, cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 585, CPyStatic_update___globals);
        goto CPyL194;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 585, CPyStatic_update___globals, "str", cpy_r_r16);
        goto CPyL194;
    }
    cpy_r_r18 = PyList_New(2);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 585, CPyStatic_update___globals);
        goto CPyL195;
    }
    cpy_r_r19 = (CPyPtr)&((PyListObject *)cpy_r_r18)->ob_item;
    cpy_r_r20 = *(CPyPtr *)cpy_r_r19;
    CPy_INCREF(cpy_r_r10);
    *(PyObject * *)cpy_r_r20 = cpy_r_r10;
    cpy_r_r21 = cpy_r_r20 + 8;
    *(PyObject * *)cpy_r_r21 = cpy_r_r17;
    cpy_r_r22 = PyUnicode_Join(cpy_r_r9, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 585, CPyStatic_update___globals);
        goto CPyL194;
    }
    cpy_r_r23 = PyTuple_Pack(1, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 585, CPyStatic_update___globals);
        goto CPyL194;
    }
    cpy_r_r24 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_r8, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 585, CPyStatic_update___globals);
        goto CPyL193;
    }
CPyL13: ;
    cpy_r_r25 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "manager", 587, CPyStatic_update___globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r25);
CPyL14: ;
    cpy_r_r26 = ((mypy___build___BuildManagerObject *)cpy_r_r25)->_fscache;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = CPY_GET_METHOD(cpy_r_r26, CPyType_fscache___FileSystemCache, 7, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r26, cpy_r_path); /* isfile */
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 587, CPyStatic_update___globals);
        goto CPyL193;
    }
    if (!cpy_r_r27) goto CPyL17;
    if (!cpy_r_force_removed) goto CPyL25;
CPyL17: ;
    cpy_r_r28 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "graph", 588, CPyStatic_update___globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r28);
CPyL18: ;
    cpy_r_r29 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r29 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'manager' of 'update_module_isolated_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r29);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 588, CPyStatic_update___globals);
        goto CPyL196;
    }
CPyL19: ;
    cpy_r_r30 = CPyDef_update___delete_module(cpy_r_module, cpy_r_path, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 588, CPyStatic_update___globals);
        goto CPyL192;
    }
    cpy_r_r31 = PyList_New(0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 589, CPyStatic_update___globals);
        goto CPyL192;
    }
    cpy_r_r32 = CPyStatic_update___globals;
    cpy_r_r33 = CPyStatics[5379]; /* 'NormalUpdate' */
    cpy_r_r34 = CPyDict_GetItem(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 589, CPyStatic_update___globals);
        goto CPyL197;
    }
    cpy_r_r35 = Py_None;
    PyObject *cpy_r_r36[4] = {cpy_r_module, cpy_r_path, cpy_r_r31, cpy_r_r35};
    cpy_r_r37 = (PyObject **)&cpy_r_r36;
    cpy_r_r38 = _PyObject_Vectorcall(cpy_r_r34, cpy_r_r37, 4, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 589, CPyStatic_update___globals);
        goto CPyL197;
    }
    CPy_DECREF(cpy_r_r31);
    if (likely(PyTuple_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 589, CPyStatic_update___globals, "tuple", cpy_r_r38);
        goto CPyL192;
    }
    return cpy_r_r39;
CPyL25: ;
    cpy_r_r40 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "manager", 591, CPyStatic_update___globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r40);
CPyL26: ;
    cpy_r_r41 = ((mypy___build___BuildManagerObject *)cpy_r_r40)->_fscache;
    CPy_INCREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42.f0 = cpy_r_module;
    cpy_r_r42.f1 = cpy_r_path;
    CPy_INCREF(cpy_r_r42.f0);
    CPy_INCREF(cpy_r_r42.f1);
    cpy_r_r43 = PyList_New(1);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 591, CPyStatic_update___globals);
        goto CPyL198;
    }
    cpy_r_r44 = PyTuple_New(2);
    if (unlikely(cpy_r_r44 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6697 = cpy_r_r42.f0;
    PyTuple_SET_ITEM(cpy_r_r44, 0, __tmp6697);
    PyObject *__tmp6698 = cpy_r_r42.f1;
    PyTuple_SET_ITEM(cpy_r_r44, 1, __tmp6698);
    cpy_r_r45 = (CPyPtr)&((PyListObject *)cpy_r_r43)->ob_item;
    cpy_r_r46 = *(CPyPtr *)cpy_r_r45;
    *(PyObject * *)cpy_r_r46 = cpy_r_r44;
    cpy_r_r47 = CPyDef_update___get_sources(cpy_r_r41, cpy_r_previous_modules, cpy_r_r43, cpy_r_followed);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 591, CPyStatic_update___globals);
        goto CPyL193;
    }
    cpy_r_sources = cpy_r_r47;
    cpy_r_r48 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "manager", 593, CPyStatic_update___globals);
        goto CPyL199;
    }
    CPy_INCREF(cpy_r_r48);
CPyL29: ;
    cpy_r_r49 = ((mypy___build___BuildManagerObject *)cpy_r_r48)->_missing_modules;
    CPy_INCREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = PySet_Contains(cpy_r_r49, cpy_r_module);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 593, CPyStatic_update___globals);
        goto CPyL199;
    }
    cpy_r_r52 = cpy_r_r50;
    if (!cpy_r_r52) goto CPyL33;
    cpy_r_r53 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "manager", 594, CPyStatic_update___globals);
        goto CPyL199;
    }
    CPy_INCREF(cpy_r_r53);
CPyL32: ;
    cpy_r_r54 = ((mypy___build___BuildManagerObject *)cpy_r_r53)->_missing_modules;
    CPy_INCREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = CPySet_Remove(cpy_r_r54, cpy_r_module);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 594, CPyStatic_update___globals);
        goto CPyL199;
    }
CPyL33: ;
    CPy_INCREF(cpy_r_module);
    if (((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_module != NULL) {
        CPy_DECREF(((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_module);
    }
    ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_module = cpy_r_module;
    cpy_r_r56 = 1;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 596, CPyStatic_update___globals);
        goto CPyL199;
    }
    cpy_r_r57 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "graph", 597, CPyStatic_update___globals);
        goto CPyL199;
    }
    CPy_INCREF(cpy_r_r57);
CPyL35: ;
    cpy_r_r58 = CPyDict_GetWithNone(cpy_r_r57, cpy_r_module);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 597, CPyStatic_update___globals);
        goto CPyL199;
    }
    if (Py_TYPE(cpy_r_r58) == CPyType_mypy___build___State)
        cpy_r_r59 = cpy_r_r58;
    else {
        cpy_r_r59 = NULL;
    }
    if (cpy_r_r59 != NULL) goto __LL6699;
    if (cpy_r_r58 == Py_None)
        cpy_r_r59 = cpy_r_r58;
    else {
        cpy_r_r59 = NULL;
    }
    if (cpy_r_r59 != NULL) goto __LL6699;
    CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 597, CPyStatic_update___globals, "mypy.build.State or None", cpy_r_r58);
    goto CPyL199;
__LL6699: ;
    if (((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_state != NULL) {
        CPy_DECREF(((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_state);
    }
    ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_state = cpy_r_r59;
    cpy_r_r60 = 1;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 597, CPyStatic_update___globals);
        goto CPyL199;
    }
    cpy_r_r61 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "manager", 598, CPyStatic_update___globals);
        goto CPyL199;
    }
    CPy_INCREF(cpy_r_r61);
CPyL39: ;
    cpy_r_r62 = ((mypy___build___BuildManagerObject *)cpy_r_r61)->_modules;
    CPy_INCREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = CPyDict_GetWithNone(cpy_r_r62, cpy_r_module);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 598, CPyStatic_update___globals);
        goto CPyL199;
    }
    if (Py_TYPE(cpy_r_r63) == CPyType_nodes___MypyFile)
        cpy_r_r64 = cpy_r_r63;
    else {
        cpy_r_r64 = NULL;
    }
    if (cpy_r_r64 != NULL) goto __LL6700;
    if (cpy_r_r63 == Py_None)
        cpy_r_r64 = cpy_r_r63;
    else {
        cpy_r_r64 = NULL;
    }
    if (cpy_r_r64 != NULL) goto __LL6700;
    CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 598, CPyStatic_update___globals, "mypy.nodes.MypyFile or None", cpy_r_r63);
    goto CPyL199;
__LL6700: ;
    if (((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_tree != NULL) {
        CPy_DECREF(((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_tree);
    }
    ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_tree = cpy_r_r64;
    cpy_r_r65 = 1;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 598, CPyStatic_update___globals);
        goto CPyL199;
    }
    cpy_r_r66 = CPyDef_update___restore_update_module_isolated_obj();
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 600, CPyStatic_update___globals);
        goto CPyL199;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___server___update___restore_update_module_isolated_objObject *)cpy_r_r66)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___server___update___restore_update_module_isolated_objObject *)cpy_r_r66)->___mypyc_env__);
    }
    ((mypy___server___update___restore_update_module_isolated_objObject *)cpy_r_r66)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r67 = 1;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 600, CPyStatic_update___globals);
        goto CPyL200;
    }
    if (((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_restore != NULL) {
        CPy_DECREF(((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_restore);
    }
    ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_restore = cpy_r_r66;
    cpy_r_r68 = 1;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 600, CPyStatic_update___globals);
        goto CPyL199;
    }
    cpy_r_r69 = PyList_New(0);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 614, CPyStatic_update___globals);
        goto CPyL199;
    }
    cpy_r_new_modules = cpy_r_r69;
    cpy_r_r70 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "graph", 616, CPyStatic_update___globals);
        goto CPyL201;
    }
    CPy_INCREF(cpy_r_r70);
CPyL48: ;
    cpy_r_r71 = PyDict_Contains(cpy_r_r70, cpy_r_module);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 616, CPyStatic_update___globals);
        goto CPyL201;
    }
    cpy_r_r73 = cpy_r_r71;
    if (!cpy_r_r73) goto CPyL52;
    cpy_r_r74 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "graph", 617, CPyStatic_update___globals);
        goto CPyL201;
    }
    CPy_INCREF(cpy_r_r74);
CPyL51: ;
    cpy_r_r75 = PyObject_DelItem(cpy_r_r74, cpy_r_module);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 617, CPyStatic_update___globals);
        goto CPyL201;
    }
CPyL52: ;
    cpy_r_r77 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "manager", 618, CPyStatic_update___globals);
        goto CPyL201;
    }
    CPy_INCREF(cpy_r_r77);
CPyL53: ;
    cpy_r_r78 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "graph", 618, CPyStatic_update___globals);
        goto CPyL202;
    }
    CPy_INCREF(cpy_r_r78);
CPyL54: ;
    cpy_r_r79 = CPyDef_mypy___build___load_graph(cpy_r_sources, cpy_r_r77, cpy_r_r78, cpy_r_new_modules);
    CPy_DECREF(cpy_r_sources);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 618, CPyStatic_update___globals);
    } else
        goto CPyL203;
CPyL55: ;
    cpy_r_r80 = CPy_CatchError();
    cpy_r_r81 = (PyObject *)CPyType_mypy___errors___CompileError;
    cpy_r_r82 = CPy_ExceptionMatches(cpy_r_r81);
    if (!cpy_r_r82) goto CPyL204;
    cpy_r_r83 = CPy_GetExcValue();
    if (likely(Py_TYPE(cpy_r_r83) == CPyType_mypy___errors___CompileError))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 619, CPyStatic_update___globals, "mypy.errors.CompileError", cpy_r_r83);
        goto CPyL205;
    }
    cpy_r_err = cpy_r_r84;
    cpy_r_r85 = CPyStatics[382]; /* 'module_with_blocker' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_err, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 621, CPyStatic_update___globals);
        goto CPyL206;
    }
    if (PyUnicode_Check(cpy_r_r86))
        cpy_r_r87 = cpy_r_r86;
    else {
        cpy_r_r87 = NULL;
    }
    if (cpy_r_r87 != NULL) goto __LL6701;
    if (cpy_r_r86 == Py_None)
        cpy_r_r87 = cpy_r_r86;
    else {
        cpy_r_r87 = NULL;
    }
    if (cpy_r_r87 != NULL) goto __LL6701;
    CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 621, CPyStatic_update___globals, "str or None", cpy_r_r86);
    goto CPyL206;
__LL6701: ;
    cpy_r_r88 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r89 = cpy_r_r87 != cpy_r_r88;
    if (!cpy_r_r89) goto CPyL207;
    if (likely(cpy_r_r87 != Py_None))
        cpy_r_r90 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 621, CPyStatic_update___globals, "str", cpy_r_r87);
        goto CPyL206;
    }
    cpy_r_r91 = CPyStr_IsTrue(cpy_r_r90);
    CPy_DecRef(cpy_r_r90);
    if (cpy_r_r91) {
        goto CPyL64;
    } else
        goto CPyL208;
CPyL62: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r92 = 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 621, CPyStatic_update___globals);
        goto CPyL87;
    } else
        goto CPyL209;
CPyL63: ;
    CPy_Unreachable();
CPyL64: ;
    cpy_r_r93 = PyList_New(1);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 622, CPyStatic_update___globals);
        goto CPyL206;
    }
    cpy_r_r94 = (CPyPtr)&((PyListObject *)cpy_r_r93)->ob_item;
    cpy_r_r95 = *(CPyPtr *)cpy_r_r94;
    CPy_INCREF(cpy_r_module);
    *(PyObject * *)cpy_r_r95 = cpy_r_module;
    cpy_r_r96 = (CPyPtr)&((PyVarObject *)cpy_r_new_modules)->ob_size;
    cpy_r_r97 = *(int64_t *)cpy_r_r96;
    cpy_r_r98 = PyList_New(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 622, CPyStatic_update___globals);
        goto CPyL210;
    }
    cpy_r_r99 = 0;
CPyL67: ;
    cpy_r_r100 = (CPyPtr)&((PyVarObject *)cpy_r_new_modules)->ob_size;
    cpy_r_r101 = *(int64_t *)cpy_r_r100;
    cpy_r_r102 = cpy_r_r101 << 1;
    cpy_r_r103 = (Py_ssize_t)cpy_r_r99 < (Py_ssize_t)cpy_r_r102;
    if (!cpy_r_r103) goto CPyL211;
    cpy_r_r104 = CPyList_GetItemUnsafe(cpy_r_new_modules, cpy_r_r99);
    if (likely(Py_TYPE(cpy_r_r104) == CPyType_mypy___build___State))
        cpy_r_r105 = cpy_r_r104;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 622, CPyStatic_update___globals, "mypy.build.State", cpy_r_r104);
        goto CPyL212;
    }
    cpy_r_st = cpy_r_r105;
    cpy_r_r106 = ((mypy___build___StateObject *)cpy_r_st)->_id;
    if (unlikely(cpy_r_r106 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'id' of 'State' undefined");
    } else {
        CPy_INCREF(cpy_r_r106);
    }
    CPy_DecRef(cpy_r_st);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 622, CPyStatic_update___globals);
        goto CPyL212;
    }
CPyL70: ;
    cpy_r_r107 = CPyList_SetItemUnsafe(cpy_r_r98, cpy_r_r99, cpy_r_r106);
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 622, CPyStatic_update___globals);
        goto CPyL212;
    }
    cpy_r_r108 = cpy_r_r99 + 2;
    cpy_r_r99 = cpy_r_r108;
    goto CPyL67;
CPyL72: ;
    cpy_r_r109 = PyNumber_Add(cpy_r_r93, cpy_r_r98);
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r98);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 622, CPyStatic_update___globals);
        goto CPyL213;
    }
    if (likely(PyList_Check(cpy_r_r109)))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 622, CPyStatic_update___globals, "list", cpy_r_r109);
        goto CPyL213;
    }
    cpy_r_r111 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_restore;
    if (unlikely(cpy_r_r111 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'restore' of 'update_module_isolated_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r111);
    }
    CPy_DecRef(cpy_r_r0);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 622, CPyStatic_update___globals);
        goto CPyL214;
    }
CPyL75: ;
    PyObject *cpy_r_r112[1] = {cpy_r_r110};
    cpy_r_r113 = (PyObject **)&cpy_r_r112;
    cpy_r_r114 = _PyObject_Vectorcall(cpy_r_r111, cpy_r_r113, 1, 0);
    CPy_DecRef(cpy_r_r111);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 622, CPyStatic_update___globals);
        goto CPyL214;
    } else
        goto CPyL215;
CPyL76: ;
    CPy_DecRef(cpy_r_r110);
    cpy_r_r115 = CPyStatics[382]; /* 'module_with_blocker' */
    cpy_r_r116 = CPyObject_GetAttr(cpy_r_err, cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 623, CPyStatic_update___globals);
        goto CPyL216;
    }
    if (likely(PyUnicode_Check(cpy_r_r116)))
        cpy_r_r117 = cpy_r_r116;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 623, CPyStatic_update___globals, "str", cpy_r_r116);
        goto CPyL216;
    }
    cpy_r_r118 = PyList_New(0);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 623, CPyStatic_update___globals);
        goto CPyL217;
    }
    cpy_r_r119 = CPyStatics[135]; /* 'messages' */
    cpy_r_r120 = CPyObject_GetAttr(cpy_r_err, cpy_r_r119);
    CPy_DecRef(cpy_r_err);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 623, CPyStatic_update___globals);
        goto CPyL218;
    }
    if (likely(PyList_Check(cpy_r_r120)))
        cpy_r_r121 = cpy_r_r120;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 623, CPyStatic_update___globals, "list", cpy_r_r120);
        goto CPyL218;
    }
    cpy_r_r122 = CPyStatic_update___globals;
    cpy_r_r123 = CPyStatics[5380]; /* 'BlockedUpdate' */
    cpy_r_r124 = CPyDict_GetItem(cpy_r_r122, cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 623, CPyStatic_update___globals);
        goto CPyL219;
    }
    PyObject *cpy_r_r125[4] = {cpy_r_r117, cpy_r_path, cpy_r_r118, cpy_r_r121};
    cpy_r_r126 = (PyObject **)&cpy_r_r125;
    cpy_r_r127 = _PyObject_Vectorcall(cpy_r_r124, cpy_r_r126, 4, 0);
    CPy_DecRef(cpy_r_r124);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 623, CPyStatic_update___globals);
        goto CPyL219;
    }
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r121);
    if (likely(PyTuple_Check(cpy_r_r127)))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 623, CPyStatic_update___globals, "tuple", cpy_r_r127);
        goto CPyL87;
    }
    CPy_RestoreExcInfo(cpy_r_r80);
    CPy_DecRef(cpy_r_r80.f0);
    CPy_DecRef(cpy_r_r80.f1);
    CPy_DecRef(cpy_r_r80.f2);
    return cpy_r_r128;
CPyL85: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL87;
    } else
        goto CPyL220;
CPyL86: ;
    CPy_Unreachable();
CPyL87: ;
    CPy_RestoreExcInfo(cpy_r_r80);
    CPy_DecRef(cpy_r_r80.f0);
    CPy_DecRef(cpy_r_r80.f1);
    CPy_DecRef(cpy_r_r80.f2);
    cpy_r_r129 = CPy_KeepPropagating();
    if (!cpy_r_r129) goto CPyL192;
    CPy_Unreachable();
CPyL89: ;
    cpy_r_r130 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "manager", 629, CPyStatic_update___globals);
        goto CPyL221;
    }
    CPy_INCREF(cpy_r_r130);
CPyL90: ;
    cpy_r_r131 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "graph", 629, CPyStatic_update___globals);
        goto CPyL222;
    }
    CPy_INCREF(cpy_r_r131);
CPyL91: ;
    cpy_r_r132 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "graph", 629, CPyStatic_update___globals);
        goto CPyL223;
    }
    CPy_INCREF(cpy_r_r132);
CPyL92: ;
    cpy_r_r133 = CPyDict_GetItem(cpy_r_r132, cpy_r_module);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 629, CPyStatic_update___globals);
        goto CPyL223;
    }
    if (likely(Py_TYPE(cpy_r_r133) == CPyType_mypy___build___State))
        cpy_r_r134 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 629, CPyStatic_update___globals, "mypy.build.State", cpy_r_r133);
        goto CPyL223;
    }
    cpy_r_r135 = ((mypy___build___StateObject *)cpy_r_r134)->_dependencies;
    if (unlikely(cpy_r_r135 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'dependencies' of 'State' undefined");
    } else {
        CPy_INCREF(cpy_r_r135);
    }
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 629, CPyStatic_update___globals);
        goto CPyL223;
    }
CPyL95: ;
    cpy_r_r136 = CPyDef_update___ensure_trees_loaded(cpy_r_r130, cpy_r_r131, cpy_r_r135);
    CPy_DECREF(cpy_r_r130);
    CPy_DECREF(cpy_r_r131);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r136 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 629, CPyStatic_update___globals);
        goto CPyL221;
    }
    cpy_r_r137 = (CPyPtr)&((PyVarObject *)cpy_r_new_modules)->ob_size;
    cpy_r_r138 = *(int64_t *)cpy_r_r137;
    cpy_r_r139 = PyList_New(cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 632, CPyStatic_update___globals);
        goto CPyL221;
    }
    cpy_r_r140 = 0;
CPyL98: ;
    cpy_r_r141 = (CPyPtr)&((PyVarObject *)cpy_r_new_modules)->ob_size;
    cpy_r_r142 = *(int64_t *)cpy_r_r141;
    cpy_r_r143 = cpy_r_r142 << 1;
    cpy_r_r144 = (Py_ssize_t)cpy_r_r140 < (Py_ssize_t)cpy_r_r143;
    if (!cpy_r_r144) goto CPyL224;
    cpy_r_r145 = CPyList_GetItemUnsafe(cpy_r_new_modules, cpy_r_r140);
    if (likely(Py_TYPE(cpy_r_r145) == CPyType_mypy___build___State))
        cpy_r_r146 = cpy_r_r145;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 632, CPyStatic_update___globals, "mypy.build.State", cpy_r_r145);
        goto CPyL225;
    }
    cpy_r_st_2 = cpy_r_r146;
    cpy_r_r147 = ((mypy___build___StateObject *)cpy_r_st_2)->_id;
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "State", "id", 632, CPyStatic_update___globals);
        goto CPyL226;
    }
    CPy_INCREF(cpy_r_r147);
CPyL101: ;
    cpy_r_r148 = ((mypy___build___StateObject *)cpy_r_st_2)->_xpath;
    CPy_INCREF(cpy_r_r148);
    CPy_DECREF(cpy_r_st_2);
    cpy_r_r149.f0 = cpy_r_r147;
    cpy_r_r149.f1 = cpy_r_r148;
    CPy_INCREF(cpy_r_r149.f0);
    CPy_INCREF(cpy_r_r149.f1);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r148);
    cpy_r_r150 = PyTuple_New(2);
    if (unlikely(cpy_r_r150 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6702 = cpy_r_r149.f0;
    PyTuple_SET_ITEM(cpy_r_r150, 0, __tmp6702);
    PyObject *__tmp6703 = cpy_r_r149.f1;
    PyTuple_SET_ITEM(cpy_r_r150, 1, __tmp6703);
    cpy_r_r151 = CPyList_SetItemUnsafe(cpy_r_r139, cpy_r_r140, cpy_r_r150);
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 632, CPyStatic_update___globals);
        goto CPyL225;
    }
    cpy_r_r152 = cpy_r_r140 + 2;
    cpy_r_r140 = cpy_r_r152;
    goto CPyL98;
CPyL103: ;
    cpy_r_changed_modules = cpy_r_r139;
    cpy_r_r153 = (CPyPtr)&((PyVarObject *)cpy_r_changed_modules)->ob_size;
    cpy_r_r154 = *(int64_t *)cpy_r_r153;
    cpy_r_r155 = cpy_r_r154 << 1;
    cpy_r_r156 = (Py_ssize_t)cpy_r_r155 > (Py_ssize_t)2;
    if (!cpy_r_r156) goto CPyL227;
    cpy_r_r157 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "graph", 638, CPyStatic_update___globals);
        goto CPyL228;
    }
    CPy_INCREF(cpy_r_r157);
CPyL105: ;
    cpy_r_r158 = CPyDef_update___find_relative_leaf_module(cpy_r_changed_modules, cpy_r_r157);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r158.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 638, CPyStatic_update___globals);
        goto CPyL228;
    }
    cpy_r_r159 = cpy_r_r158.f0;
    CPy_INCREF(cpy_r_r159);
    cpy_r_module = cpy_r_r159;
    cpy_r_r160 = cpy_r_r158.f1;
    CPy_INCREF(cpy_r_r160);
    CPy_DECREF(cpy_r_r158.f0);
    CPy_DECREF(cpy_r_r158.f1);
    cpy_r_path = cpy_r_r160;
    cpy_r_r161.f0 = cpy_r_module;
    cpy_r_r161.f1 = cpy_r_path;
    CPy_INCREF(cpy_r_r161.f0);
    CPy_INCREF(cpy_r_r161.f1);
    cpy_r_r162 = PyTuple_New(2);
    if (unlikely(cpy_r_r162 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6704 = cpy_r_r161.f0;
    PyTuple_SET_ITEM(cpy_r_r162, 0, __tmp6704);
    PyObject *__tmp6705 = cpy_r_r161.f1;
    PyTuple_SET_ITEM(cpy_r_r162, 1, __tmp6705);
    cpy_r_r163 = CPyList_Remove(cpy_r_changed_modules, cpy_r_r162);
    CPy_DECREF(cpy_r_r162);
    cpy_r_r164 = cpy_r_r163 >= 0;
    if (unlikely(!cpy_r_r164)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 639, CPyStatic_update___globals);
        goto CPyL229;
    }
    cpy_r_remaining_modules = cpy_r_changed_modules;
    cpy_r_r165 = (CPyPtr)&((PyVarObject *)cpy_r_remaining_modules)->ob_size;
    cpy_r_r166 = *(int64_t *)cpy_r_r165;
    cpy_r_r167 = PyList_New(cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 642, CPyStatic_update___globals);
        goto CPyL230;
    }
    cpy_r_r168 = 0;
CPyL109: ;
    cpy_r_r169 = (CPyPtr)&((PyVarObject *)cpy_r_remaining_modules)->ob_size;
    cpy_r_r170 = *(int64_t *)cpy_r_r169;
    cpy_r_r171 = cpy_r_r170 << 1;
    cpy_r_r172 = (Py_ssize_t)cpy_r_r168 < (Py_ssize_t)cpy_r_r171;
    if (!cpy_r_r172) goto CPyL113;
    cpy_r_r173 = CPyList_GetItemUnsafe(cpy_r_remaining_modules, cpy_r_r168);
    PyObject *__tmp6706;
    if (unlikely(!(PyTuple_Check(cpy_r_r173) && PyTuple_GET_SIZE(cpy_r_r173) == 2))) {
        __tmp6706 = NULL;
        goto __LL6707;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r173, 0))))
        __tmp6706 = PyTuple_GET_ITEM(cpy_r_r173, 0);
    else {
        __tmp6706 = NULL;
    }
    if (__tmp6706 == NULL) goto __LL6707;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r173, 1))))
        __tmp6706 = PyTuple_GET_ITEM(cpy_r_r173, 1);
    else {
        __tmp6706 = NULL;
    }
    if (__tmp6706 == NULL) goto __LL6707;
    __tmp6706 = cpy_r_r173;
__LL6707: ;
    if (unlikely(__tmp6706 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r173); cpy_r_r174 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6708 = PyTuple_GET_ITEM(cpy_r_r173, 0);
        CPy_INCREF(__tmp6708);
        PyObject *__tmp6709;
        if (likely(PyUnicode_Check(__tmp6708)))
            __tmp6709 = __tmp6708;
        else {
            CPy_TypeError("str", __tmp6708); 
            __tmp6709 = NULL;
        }
        cpy_r_r174.f0 = __tmp6709;
        PyObject *__tmp6710 = PyTuple_GET_ITEM(cpy_r_r173, 1);
        CPy_INCREF(__tmp6710);
        PyObject *__tmp6711;
        if (likely(PyUnicode_Check(__tmp6710)))
            __tmp6711 = __tmp6710;
        else {
            CPy_TypeError("str", __tmp6710); 
            __tmp6711 = NULL;
        }
        cpy_r_r174.f1 = __tmp6711;
    }
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r174.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 642, CPyStatic_update___globals);
        goto CPyL231;
    }
    cpy_r_r175 = cpy_r_r174.f0;
    CPy_INCREF(cpy_r_r175);
    cpy_r_id = cpy_r_r175;
    cpy_r_r176 = cpy_r_r174.f1;
    CPy_INCREF(cpy_r_r176);
    CPy_DECREF(cpy_r_r174.f0);
    CPy_DECREF(cpy_r_r174.f1);
    cpy_r__ = cpy_r_r176;
    CPy_DECREF(cpy_r__);
    cpy_r_r177 = CPyList_SetItemUnsafe(cpy_r_r167, cpy_r_r168, cpy_r_id);
    if (unlikely(!cpy_r_r177)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 642, CPyStatic_update___globals);
        goto CPyL231;
    }
    cpy_r_r178 = cpy_r_r168 + 2;
    cpy_r_r168 = cpy_r_r178;
    goto CPyL109;
CPyL113: ;
    cpy_r_r179 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_restore;
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "restore", 642, CPyStatic_update___globals);
        goto CPyL231;
    }
    CPy_INCREF(cpy_r_r179);
CPyL114: ;
    PyObject *cpy_r_r180[1] = {cpy_r_r167};
    cpy_r_r181 = (PyObject **)&cpy_r_r180;
    cpy_r_r182 = _PyObject_Vectorcall(cpy_r_r179, cpy_r_r181, 1, 0);
    CPy_DECREF(cpy_r_r179);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 642, CPyStatic_update___globals);
        goto CPyL231;
    } else
        goto CPyL232;
CPyL115: ;
    CPy_DECREF(cpy_r_r167);
    cpy_r_r183 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "manager", 643, CPyStatic_update___globals);
        goto CPyL230;
    }
    CPy_INCREF(cpy_r_r183);
CPyL116: ;
    cpy_r_r184 = CPyStatics[163]; /* '' */
    cpy_r_r185 = CPyStatics[5381]; /* '--> ' */
    cpy_r_r186 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r187 = CPyStatics[163]; /* '' */
    cpy_r_r188 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r189[3] = {cpy_r_r186, cpy_r_module, cpy_r_r187};
    cpy_r_r190 = (PyObject **)&cpy_r_r189;
    cpy_r_r191 = PyObject_VectorcallMethod(cpy_r_r188, cpy_r_r190, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 643, CPyStatic_update___globals);
        goto CPyL233;
    }
    if (likely(PyUnicode_Check(cpy_r_r191)))
        cpy_r_r192 = cpy_r_r191;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 643, CPyStatic_update___globals, "str", cpy_r_r191);
        goto CPyL233;
    }
    cpy_r_r193 = CPyStatics[5382]; /* ' (newly imported)' */
    cpy_r_r194 = PyList_New(3);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 643, CPyStatic_update___globals);
        goto CPyL234;
    }
    cpy_r_r195 = (CPyPtr)&((PyListObject *)cpy_r_r194)->ob_item;
    cpy_r_r196 = *(CPyPtr *)cpy_r_r195;
    CPy_INCREF(cpy_r_r185);
    *(PyObject * *)cpy_r_r196 = cpy_r_r185;
    cpy_r_r197 = cpy_r_r196 + 8;
    *(PyObject * *)cpy_r_r197 = cpy_r_r192;
    cpy_r_r198 = cpy_r_r196 + 16;
    CPy_INCREF(cpy_r_r193);
    *(PyObject * *)cpy_r_r198 = cpy_r_r193;
    cpy_r_r199 = PyUnicode_Join(cpy_r_r184, cpy_r_r194);
    CPy_DECREF(cpy_r_r194);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 643, CPyStatic_update___globals);
        goto CPyL233;
    }
    cpy_r_r200 = PyTuple_Pack(1, cpy_r_r199);
    CPy_DECREF(cpy_r_r199);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 643, CPyStatic_update___globals);
        goto CPyL233;
    }
    cpy_r_r201 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_r183, cpy_r_r200);
    CPy_DECREF(cpy_r_r200);
    CPy_DECREF(cpy_r_r183);
    if (unlikely(cpy_r_r201 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 643, CPyStatic_update___globals);
        goto CPyL230;
    } else
        goto CPyL124;
CPyL122: ;
    cpy_r_r202 = PyList_New(0);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 645, CPyStatic_update___globals);
        goto CPyL193;
    }
    cpy_r_remaining_modules = cpy_r_r202;
    goto CPyL235;
CPyL124: ;
    cpy_r_r203 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "graph", 647, CPyStatic_update___globals);
        goto CPyL230;
    }
    CPy_INCREF(cpy_r_r203);
CPyL125: ;
    cpy_r_r204 = CPyDict_GetItem(cpy_r_r203, cpy_r_module);
    CPy_DECREF(cpy_r_r203);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 647, CPyStatic_update___globals);
        goto CPyL230;
    }
    if (likely(Py_TYPE(cpy_r_r204) == CPyType_mypy___build___State))
        cpy_r_r205 = cpy_r_r204;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 647, CPyStatic_update___globals, "mypy.build.State", cpy_r_r204);
        goto CPyL230;
    }
    cpy_r_state = cpy_r_r205;
    cpy_r_r206 = CPyDef_mypy___build___State___parse_file(cpy_r_state);
    if (unlikely(cpy_r_r206 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 650, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r207 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    cpy_r_r208 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r209 = cpy_r_r207 != cpy_r_r208;
    if (cpy_r_r209) {
        goto CPyL131;
    } else
        goto CPyL237;
CPyL129: ;
    PyErr_SetString(PyExc_AssertionError, "file must be at least parsed");
    cpy_r_r210 = 0;
    if (unlikely(!cpy_r_r210)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 651, CPyStatic_update___globals);
        goto CPyL192;
    }
    CPy_Unreachable();
CPyL131: ;
    cpy_r_r211 = CPyModule_time;
    cpy_r_r212 = CPyStatics[147]; /* 'time' */
    cpy_r_r213 = CPyObject_GetAttr(cpy_r_r211, cpy_r_r212);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 652, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r214 = _PyObject_Vectorcall(cpy_r_r213, 0, 0, 0);
    CPy_DECREF(cpy_r_r213);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 652, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r215 = PyFloat_AsDouble(cpy_r_r214);
    if (cpy_r_r215 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r214); cpy_r_r215 = -113.0;
    }
    CPy_DECREF(cpy_r_r214);
    cpy_r_r216 = cpy_r_r215 == -113.0;
    if (unlikely(cpy_r_r216)) goto CPyL135;
CPyL134: ;
    cpy_r_t0 = cpy_r_r215;
    goto CPyL136;
CPyL135: ;
    cpy_r_r217 = PyErr_Occurred();
    if (unlikely(cpy_r_r217 != NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 652, CPyStatic_update___globals);
        goto CPyL236;
    } else
        goto CPyL134;
CPyL136: ;
    cpy_r_r218 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "graph", 654, CPyStatic_update___globals);
        goto CPyL238;
    }
    CPy_INCREF(cpy_r_r218);
CPyL137: ;
    cpy_r_r219 = ((mypy___build___StateObject *)cpy_r_state)->_id;
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "State", "id", 654, CPyStatic_update___globals);
        goto CPyL239;
    }
    CPy_INCREF(cpy_r_r219);
CPyL138: ;
    cpy_r_r220 = PyList_New(1);
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 654, CPyStatic_update___globals);
        goto CPyL240;
    }
    cpy_r_r221 = (CPyPtr)&((PyListObject *)cpy_r_r220)->ob_item;
    cpy_r_r222 = *(CPyPtr *)cpy_r_r221;
    *(PyObject * *)cpy_r_r222 = cpy_r_r219;
    cpy_r_r223 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "manager", 654, CPyStatic_update___globals);
        goto CPyL241;
    }
    CPy_INCREF(cpy_r_r223);
CPyL140: ;
    cpy_r_r224 = ((mypy___build___BuildManagerObject *)cpy_r_r223)->_errors;
    CPy_INCREF(cpy_r_r224);
    CPy_DECREF(cpy_r_r223);
    cpy_r_r225 = CPyDef_semanal_main___semantic_analysis_for_scc(cpy_r_r218, cpy_r_r220, cpy_r_r224);
    CPy_DECREF(cpy_r_r218);
    CPy_DECREF(cpy_r_r220);
    CPy_DECREF(cpy_r_r224);
    if (unlikely(cpy_r_r225 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 654, CPyStatic_update___globals);
        goto CPyL238;
    } else
        goto CPyL156;
CPyL141: ;
    cpy_r_r226 = CPy_CatchError();
    cpy_r_r227 = (PyObject *)CPyType_mypy___errors___CompileError;
    cpy_r_r228 = CPy_ExceptionMatches(cpy_r_r227);
    if (!cpy_r_r228) goto CPyL242;
    cpy_r_r229 = CPy_GetExcValue();
    if (likely(Py_TYPE(cpy_r_r229) == CPyType_mypy___errors___CompileError))
        cpy_r_r230 = cpy_r_r229;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 655, CPyStatic_update___globals, "mypy.errors.CompileError", cpy_r_r229);
        goto CPyL243;
    }
    cpy_r_err = cpy_r_r230;
    cpy_r_r231 = PyList_New(1);
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 657, CPyStatic_update___globals);
        goto CPyL244;
    }
    cpy_r_r232 = (CPyPtr)&((PyListObject *)cpy_r_r231)->ob_item;
    cpy_r_r233 = *(CPyPtr *)cpy_r_r232;
    CPy_INCREF(cpy_r_module);
    *(PyObject * *)cpy_r_r233 = cpy_r_module;
    cpy_r_r234 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_restore;
    if (unlikely(cpy_r_r234 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'restore' of 'update_module_isolated_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r234);
    }
    CPy_DecRef(cpy_r_r0);
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 657, CPyStatic_update___globals);
        goto CPyL245;
    }
CPyL145: ;
    PyObject *cpy_r_r235[1] = {cpy_r_r231};
    cpy_r_r236 = (PyObject **)&cpy_r_r235;
    cpy_r_r237 = _PyObject_Vectorcall(cpy_r_r234, cpy_r_r236, 1, 0);
    CPy_DecRef(cpy_r_r234);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 657, CPyStatic_update___globals);
        goto CPyL245;
    } else
        goto CPyL246;
CPyL146: ;
    CPy_DecRef(cpy_r_r231);
    cpy_r_r238 = CPyStatics[135]; /* 'messages' */
    cpy_r_r239 = CPyObject_GetAttr(cpy_r_err, cpy_r_r238);
    CPy_DecRef(cpy_r_err);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 658, CPyStatic_update___globals);
        goto CPyL247;
    }
    if (likely(PyList_Check(cpy_r_r239)))
        cpy_r_r240 = cpy_r_r239;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 658, CPyStatic_update___globals, "list", cpy_r_r239);
        goto CPyL247;
    }
    cpy_r_r241 = CPyStatic_update___globals;
    cpy_r_r242 = CPyStatics[5380]; /* 'BlockedUpdate' */
    cpy_r_r243 = CPyDict_GetItem(cpy_r_r241, cpy_r_r242);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 658, CPyStatic_update___globals);
        goto CPyL248;
    }
    PyObject *cpy_r_r244[4] = {cpy_r_module, cpy_r_path, cpy_r_remaining_modules, cpy_r_r240};
    cpy_r_r245 = (PyObject **)&cpy_r_r244;
    cpy_r_r246 = _PyObject_Vectorcall(cpy_r_r243, cpy_r_r245, 4, 0);
    CPy_DecRef(cpy_r_r243);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 658, CPyStatic_update___globals);
        goto CPyL248;
    }
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_r240);
    if (likely(PyTuple_Check(cpy_r_r246)))
        cpy_r_r247 = cpy_r_r246;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 658, CPyStatic_update___globals, "tuple", cpy_r_r246);
        goto CPyL154;
    }
    CPy_RestoreExcInfo(cpy_r_r226);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r226.f2);
    return cpy_r_r247;
CPyL152: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL154;
    } else
        goto CPyL249;
CPyL153: ;
    CPy_Unreachable();
CPyL154: ;
    CPy_RestoreExcInfo(cpy_r_r226);
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r226.f2);
    cpy_r_r248 = CPy_KeepPropagating();
    if (!cpy_r_r248) goto CPyL192;
    CPy_Unreachable();
CPyL156: ;
    cpy_r_r249 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    CPy_INCREF(cpy_r_r249);
    if (likely(cpy_r_r249 != Py_None))
        cpy_r_r250 = cpy_r_r249;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 661, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_r249);
        goto CPyL236;
    }
    cpy_r_r251 = CPyDict_Build(1, cpy_r_module, cpy_r_r250);
    CPy_DECREF(cpy_r_r250);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 661, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_new_modules_dict = cpy_r_r251;
    cpy_r_r252 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "manager", 662, CPyStatic_update___globals);
        goto CPyL250;
    }
    CPy_INCREF(cpy_r_r252);
CPyL159: ;
    cpy_r_r253 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "graph", 662, CPyStatic_update___globals);
        goto CPyL251;
    }
    CPy_INCREF(cpy_r_r253);
CPyL160: ;
    cpy_r_r254 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_module;
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "orig_module", 662, CPyStatic_update___globals);
        goto CPyL252;
    }
    CPy_INCREF(cpy_r_r254);
CPyL161: ;
    cpy_r_r255 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_orig_tree;
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "orig_tree", 662, CPyStatic_update___globals);
        goto CPyL253;
    }
    CPy_INCREF(cpy_r_r255);
CPyL162: ;
    cpy_r_r256 = CPyDict_Build(1, cpy_r_r254, cpy_r_r255);
    CPy_DECREF(cpy_r_r254);
    CPy_DECREF(cpy_r_r255);
    if (unlikely(cpy_r_r256 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 662, CPyStatic_update___globals);
        goto CPyL252;
    }
    cpy_r_r257 = CPyDef_update___replace_modules_with_new_variants(cpy_r_r252, cpy_r_r253, cpy_r_r256, cpy_r_new_modules_dict);
    CPy_DECREF(cpy_r_r252);
    CPy_DECREF(cpy_r_r253);
    CPy_DECREF(cpy_r_r256);
    CPy_DECREF(cpy_r_new_modules_dict);
    if (unlikely(cpy_r_r257 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 662, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r258 = CPyModule_time;
    cpy_r_r259 = CPyStatics[147]; /* 'time' */
    cpy_r_r260 = CPyObject_GetAttr(cpy_r_r258, cpy_r_r259);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 664, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r261 = _PyObject_Vectorcall(cpy_r_r260, 0, 0, 0);
    CPy_DECREF(cpy_r_r260);
    if (unlikely(cpy_r_r261 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 664, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r262 = PyFloat_AsDouble(cpy_r_r261);
    if (cpy_r_r262 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r261); cpy_r_r262 = -113.0;
    }
    CPy_DECREF(cpy_r_r261);
    cpy_r_r263 = cpy_r_r262 == -113.0;
    if (unlikely(cpy_r_r263)) goto CPyL168;
CPyL167: ;
    cpy_r_t1 = cpy_r_r262;
    cpy_r_r264 = CPyDef_mypy___build___State___type_checker(cpy_r_state);
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 666, CPyStatic_update___globals);
        goto CPyL236;
    } else
        goto CPyL169;
CPyL168: ;
    cpy_r_r265 = PyErr_Occurred();
    if (unlikely(cpy_r_r265 != NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 664, CPyStatic_update___globals);
        goto CPyL236;
    } else
        goto CPyL167;
CPyL169: ;
    cpy_r_r266 = CPyDef_checker___TypeChecker___reset(cpy_r_r264);
    CPy_DECREF(cpy_r_r264);
    if (unlikely(cpy_r_r266 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 666, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r267 = CPyDef_mypy___build___State___type_check_first_pass(cpy_r_state);
    if (unlikely(cpy_r_r267 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 667, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r268 = CPyDef_mypy___build___State___type_check_second_pass(cpy_r_state);
    if (unlikely(cpy_r_r268 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 668, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r269 = CPyDef_mypy___build___State___detect_possibly_undefined_vars(cpy_r_state);
    if (unlikely(cpy_r_r269 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 669, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r270 = CPyModule_time;
    cpy_r_r271 = CPyStatics[147]; /* 'time' */
    cpy_r_r272 = CPyObject_GetAttr(cpy_r_r270, cpy_r_r271);
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 670, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r273 = _PyObject_Vectorcall(cpy_r_r272, 0, 0, 0);
    CPy_DECREF(cpy_r_r272);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 670, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r274 = PyFloat_AsDouble(cpy_r_r273);
    if (cpy_r_r274 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r273); cpy_r_r274 = -113.0;
    }
    CPy_DECREF(cpy_r_r273);
    cpy_r_r275 = cpy_r_r274 == -113.0;
    if (unlikely(cpy_r_r275)) goto CPyL177;
CPyL176: ;
    cpy_r_t2 = cpy_r_r274;
    cpy_r_r276 = CPyDef_mypy___build___State___finish_passes(cpy_r_state);
    if (unlikely(cpy_r_r276 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 671, CPyStatic_update___globals);
        goto CPyL236;
    } else
        goto CPyL178;
CPyL177: ;
    cpy_r_r277 = PyErr_Occurred();
    if (unlikely(cpy_r_r277 != NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 670, CPyStatic_update___globals);
        goto CPyL236;
    } else
        goto CPyL176;
CPyL178: ;
    cpy_r_r278 = CPyModule_time;
    cpy_r_r279 = CPyStatics[147]; /* 'time' */
    cpy_r_r280 = CPyObject_GetAttr(cpy_r_r278, cpy_r_r279);
    if (unlikely(cpy_r_r280 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 672, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r281 = _PyObject_Vectorcall(cpy_r_r280, 0, 0, 0);
    CPy_DECREF(cpy_r_r280);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 672, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r282 = PyFloat_AsDouble(cpy_r_r281);
    if (cpy_r_r282 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r281); cpy_r_r282 = -113.0;
    }
    CPy_DECREF(cpy_r_r281);
    cpy_r_r283 = cpy_r_r282 == -113.0;
    if (unlikely(cpy_r_r283)) goto CPyL182;
CPyL181: ;
    cpy_r_t3 = cpy_r_r282;
    cpy_r_r284 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r284 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "update_module_isolated", "update_module_isolated_env", "manager", 673, CPyStatic_update___globals);
        goto CPyL236;
    }
    CPy_INCREF(cpy_r_r284);
    goto CPyL183;
CPyL182: ;
    cpy_r_r285 = PyErr_Occurred();
    if (unlikely(cpy_r_r285 != NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 672, CPyStatic_update___globals);
        goto CPyL236;
    } else
        goto CPyL181;
CPyL183: ;
    cpy_r_r286 = cpy_r_t1 - cpy_r_t0;
    cpy_r_r287 = cpy_r_t2 - cpy_r_t1;
    cpy_r_r288 = cpy_r_t3 - cpy_r_t2;
    cpy_r_r289 = CPyStatics[5383]; /* 'semanal_time' */
    cpy_r_r290 = CPyStatics[5384]; /* 'typecheck_time' */
    cpy_r_r291 = CPyStatics[5385]; /* 'finish_passes_time' */
    cpy_r_r292 = PyFloat_FromDouble(cpy_r_r286);
    cpy_r_r293 = PyFloat_FromDouble(cpy_r_r287);
    cpy_r_r294 = PyFloat_FromDouble(cpy_r_r288);
    cpy_r_r295 = CPyDict_Build(3, cpy_r_r289, cpy_r_r292, cpy_r_r290, cpy_r_r293, cpy_r_r291, cpy_r_r294);
    CPy_DECREF(cpy_r_r292);
    CPy_DECREF(cpy_r_r293);
    CPy_DECREF(cpy_r_r294);
    if (unlikely(cpy_r_r295 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 673, CPyStatic_update___globals);
        goto CPyL254;
    }
    cpy_r_r296 = CPyDef_mypy___build___BuildManager___add_stats(cpy_r_r284, cpy_r_r295);
    CPy_DECREF(cpy_r_r295);
    CPy_DECREF(cpy_r_r284);
    if (unlikely(cpy_r_r296 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 673, CPyStatic_update___globals);
        goto CPyL236;
    }
    cpy_r_r297 = ((mypy___server___update___update_module_isolated_envObject *)cpy_r_r0)->_graph;
    if (unlikely(cpy_r_r297 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'graph' of 'update_module_isolated_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r297);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r297 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 675, CPyStatic_update___globals);
        goto CPyL255;
    }
CPyL186: ;
    cpy_r_r298 = CPyDict_SetItem(cpy_r_r297, cpy_r_module, cpy_r_state);
    CPy_DECREF(cpy_r_r297);
    cpy_r_r299 = cpy_r_r298 >= 0;
    if (unlikely(!cpy_r_r299)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 675, CPyStatic_update___globals);
        goto CPyL255;
    }
    cpy_r_r300 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    CPy_INCREF(cpy_r_r300);
    CPy_DECREF(cpy_r_state);
    if (likely(cpy_r_r300 != Py_None))
        cpy_r_r301 = cpy_r_r300;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 677, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_r300);
        goto CPyL256;
    }
    cpy_r_r302 = CPyStatic_update___globals;
    cpy_r_r303 = CPyStatics[5379]; /* 'NormalUpdate' */
    cpy_r_r304 = CPyDict_GetItem(cpy_r_r302, cpy_r_r303);
    if (unlikely(cpy_r_r304 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 677, CPyStatic_update___globals);
        goto CPyL257;
    }
    PyObject *cpy_r_r305[4] = {cpy_r_module, cpy_r_path, cpy_r_remaining_modules, cpy_r_r301};
    cpy_r_r306 = (PyObject **)&cpy_r_r305;
    cpy_r_r307 = _PyObject_Vectorcall(cpy_r_r304, cpy_r_r306, 4, 0);
    CPy_DECREF(cpy_r_r304);
    if (unlikely(cpy_r_r307 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 677, CPyStatic_update___globals);
        goto CPyL257;
    }
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_remaining_modules);
    CPy_DECREF(cpy_r_r301);
    if (likely(PyTuple_Check(cpy_r_r307)))
        cpy_r_r308 = cpy_r_r307;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_module_isolated", 677, CPyStatic_update___globals, "tuple", cpy_r_r307);
        goto CPyL192;
    }
    return cpy_r_r308;
CPyL192: ;
    cpy_r_r309 = NULL;
    return cpy_r_r309;
CPyL193: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL192;
CPyL194: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    goto CPyL192;
CPyL195: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r17);
    goto CPyL192;
CPyL196: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL192;
CPyL197: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL192;
CPyL198: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42.f0);
    CPy_DecRef(cpy_r_r42.f1);
    goto CPyL192;
CPyL199: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sources);
    goto CPyL192;
CPyL200: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r66);
    goto CPyL192;
CPyL201: ;
    CPy_DecRef(cpy_r_sources);
    goto CPyL55;
CPyL202: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r77);
    goto CPyL55;
CPyL203: ;
    CPy_DECREF(cpy_r_r79);
    goto CPyL89;
CPyL204: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_new_modules);
    goto CPyL85;
CPyL205: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_new_modules);
    goto CPyL87;
CPyL206: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_new_modules);
    CPy_DecRef(cpy_r_err);
    goto CPyL87;
CPyL207: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_new_modules);
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r87);
    goto CPyL62;
CPyL208: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_new_modules);
    CPy_DecRef(cpy_r_err);
    goto CPyL62;
CPyL209: ;
    CPy_DecRef(cpy_r_r80.f0);
    CPy_DecRef(cpy_r_r80.f1);
    CPy_DecRef(cpy_r_r80.f2);
    goto CPyL63;
CPyL210: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_new_modules);
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r93);
    goto CPyL87;
CPyL211: ;
    CPy_DecRef(cpy_r_new_modules);
    goto CPyL72;
CPyL212: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_new_modules);
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r98);
    goto CPyL87;
CPyL213: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_err);
    goto CPyL87;
CPyL214: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r110);
    goto CPyL87;
CPyL215: ;
    CPy_DecRef(cpy_r_r114);
    goto CPyL76;
CPyL216: ;
    CPy_DecRef(cpy_r_err);
    goto CPyL87;
CPyL217: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r117);
    goto CPyL87;
CPyL218: ;
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r118);
    goto CPyL87;
CPyL219: ;
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r121);
    goto CPyL87;
CPyL220: ;
    CPy_DecRef(cpy_r_r80.f0);
    CPy_DecRef(cpy_r_r80.f1);
    CPy_DecRef(cpy_r_r80.f2);
    goto CPyL86;
CPyL221: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_new_modules);
    goto CPyL192;
CPyL222: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_new_modules);
    CPy_DecRef(cpy_r_r130);
    goto CPyL192;
CPyL223: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_new_modules);
    CPy_DecRef(cpy_r_r130);
    CPy_DecRef(cpy_r_r131);
    goto CPyL192;
CPyL224: ;
    CPy_DECREF(cpy_r_new_modules);
    goto CPyL103;
CPyL225: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_new_modules);
    CPy_DecRef(cpy_r_r139);
    goto CPyL192;
CPyL226: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_new_modules);
    CPy_DecRef(cpy_r_r139);
    CPy_DecRef(cpy_r_st_2);
    goto CPyL192;
CPyL227: ;
    CPy_DECREF(cpy_r_changed_modules);
    goto CPyL122;
CPyL228: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_changed_modules);
    goto CPyL192;
CPyL229: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_changed_modules);
    goto CPyL192;
CPyL230: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_remaining_modules);
    goto CPyL192;
CPyL231: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_r167);
    goto CPyL192;
CPyL232: ;
    CPy_DECREF(cpy_r_r182);
    goto CPyL115;
CPyL233: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_r183);
    goto CPyL192;
CPyL234: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_r192);
    goto CPyL192;
CPyL235: ;
    CPy_INCREF(cpy_r_module);
    CPy_INCREF(cpy_r_path);
    goto CPyL124;
CPyL236: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_state);
    goto CPyL192;
CPyL237: ;
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_remaining_modules);
    CPy_DECREF(cpy_r_state);
    goto CPyL129;
CPyL238: ;
    CPy_DecRef(cpy_r_state);
    goto CPyL141;
CPyL239: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r218);
    goto CPyL141;
CPyL240: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r218);
    CPy_DecRef(cpy_r_r219);
    goto CPyL141;
CPyL241: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r218);
    CPy_DecRef(cpy_r_r220);
    goto CPyL141;
CPyL242: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_remaining_modules);
    goto CPyL152;
CPyL243: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_remaining_modules);
    goto CPyL154;
CPyL244: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_remaining_modules);
    goto CPyL154;
CPyL245: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_r231);
    goto CPyL154;
CPyL246: ;
    CPy_DecRef(cpy_r_r237);
    goto CPyL146;
CPyL247: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_remaining_modules);
    goto CPyL154;
CPyL248: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_r240);
    goto CPyL154;
CPyL249: ;
    CPy_DecRef(cpy_r_r226.f0);
    CPy_DecRef(cpy_r_r226.f1);
    CPy_DecRef(cpy_r_r226.f2);
    goto CPyL153;
CPyL250: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_new_modules_dict);
    goto CPyL192;
CPyL251: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_new_modules_dict);
    CPy_DecRef(cpy_r_r252);
    goto CPyL192;
CPyL252: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_new_modules_dict);
    CPy_DecRef(cpy_r_r252);
    CPy_DecRef(cpy_r_r253);
    goto CPyL192;
CPyL253: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_new_modules_dict);
    CPy_DecRef(cpy_r_r252);
    CPy_DecRef(cpy_r_r253);
    CPy_DecRef(cpy_r_r254);
    goto CPyL192;
CPyL254: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r284);
    goto CPyL192;
CPyL255: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_state);
    goto CPyL192;
CPyL256: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_remaining_modules);
    goto CPyL192;
CPyL257: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_r301);
    goto CPyL192;
}

PyObject *CPyPy_update___update_module_isolated(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module", "path", "manager", "previous_modules", "graph", "force_removed", "followed", 0};
    static CPyArg_Parser parser = {"OOOOOOO:update_module_isolated", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_path;
    PyObject *obj_manager;
    PyObject *obj_previous_modules;
    PyObject *obj_graph;
    PyObject *obj_force_removed;
    PyObject *obj_followed;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module, &obj_path, &obj_manager, &obj_previous_modules, &obj_graph, &obj_force_removed, &obj_followed)) {
        return NULL;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_manager;
    if (likely(Py_TYPE(obj_manager) == CPyType_mypy___build___BuildManager))
        arg_manager = obj_manager;
    else {
        CPy_TypeError("mypy.build.BuildManager", obj_manager); 
        goto fail;
    }
    PyObject *arg_previous_modules;
    if (likely(PyDict_Check(obj_previous_modules)))
        arg_previous_modules = obj_previous_modules;
    else {
        CPy_TypeError("dict", obj_previous_modules); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    char arg_force_removed;
    if (unlikely(!PyBool_Check(obj_force_removed))) {
        CPy_TypeError("bool", obj_force_removed); goto fail;
    } else
        arg_force_removed = obj_force_removed == Py_True;
    char arg_followed;
    if (unlikely(!PyBool_Check(obj_followed))) {
        CPy_TypeError("bool", obj_followed); goto fail;
    } else
        arg_followed = obj_followed == Py_True;
    PyObject *retval = CPyDef_update___update_module_isolated(arg_module, arg_path, arg_manager, arg_previous_modules, arg_graph, arg_force_removed, arg_followed);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "update_module_isolated", 560, CPyStatic_update___globals);
    return NULL;
}

tuple_T2OO CPyDef_update___find_relative_leaf_module(PyObject *cpy_r_modules, PyObject *cpy_r_graph) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T2OO cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r21;
    PyObject *cpy_r__;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_module_set;
    CPyTagged cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    tuple_T2OO cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_module_2;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_state;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    tuple_T2OO cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T2OO cpy_r_r47;
    tuple_T2OO cpy_r_r48;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    if (cpy_r_r3) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/server/update.py", "find_relative_leaf_module", 694, CPyStatic_update___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_relative_leaf_module", 696, CPyStatic_update___globals);
        goto CPyL27;
    }
    PyObject *cpy_r_r8[1] = {cpy_r_modules};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r9, 1, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_relative_leaf_module", 696, CPyStatic_update___globals);
        goto CPyL27;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_relative_leaf_module", 696, CPyStatic_update___globals, "list", cpy_r_r10);
        goto CPyL27;
    }
    cpy_r_modules = cpy_r_r11;
    cpy_r_r12 = PySet_New(NULL);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_relative_leaf_module", 697, CPyStatic_update___globals);
        goto CPyL28;
    }
    cpy_r_r13 = 0;
CPyL8: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL12;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_modules, cpy_r_r13);
    PyObject *__tmp6712;
    if (unlikely(!(PyTuple_Check(cpy_r_r18) && PyTuple_GET_SIZE(cpy_r_r18) == 2))) {
        __tmp6712 = NULL;
        goto __LL6713;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r18, 0))))
        __tmp6712 = PyTuple_GET_ITEM(cpy_r_r18, 0);
    else {
        __tmp6712 = NULL;
    }
    if (__tmp6712 == NULL) goto __LL6713;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r18, 1))))
        __tmp6712 = PyTuple_GET_ITEM(cpy_r_r18, 1);
    else {
        __tmp6712 = NULL;
    }
    if (__tmp6712 == NULL) goto __LL6713;
    __tmp6712 = cpy_r_r18;
__LL6713: ;
    if (unlikely(__tmp6712 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r18); cpy_r_r19 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6714 = PyTuple_GET_ITEM(cpy_r_r18, 0);
        CPy_INCREF(__tmp6714);
        PyObject *__tmp6715;
        if (likely(PyUnicode_Check(__tmp6714)))
            __tmp6715 = __tmp6714;
        else {
            CPy_TypeError("str", __tmp6714); 
            __tmp6715 = NULL;
        }
        cpy_r_r19.f0 = __tmp6715;
        PyObject *__tmp6716 = PyTuple_GET_ITEM(cpy_r_r18, 1);
        CPy_INCREF(__tmp6716);
        PyObject *__tmp6717;
        if (likely(PyUnicode_Check(__tmp6716)))
            __tmp6717 = __tmp6716;
        else {
            CPy_TypeError("str", __tmp6716); 
            __tmp6717 = NULL;
        }
        cpy_r_r19.f1 = __tmp6717;
    }
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_relative_leaf_module", 697, CPyStatic_update___globals);
        goto CPyL29;
    }
    cpy_r_r20 = cpy_r_r19.f0;
    CPy_INCREF(cpy_r_r20);
    cpy_r_module = cpy_r_r20;
    cpy_r_r21 = cpy_r_r19.f1;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r19.f0);
    CPy_DECREF(cpy_r_r19.f1);
    cpy_r__ = cpy_r_r21;
    CPy_DECREF(cpy_r__);
    cpy_r_r22 = PySet_Add(cpy_r_r12, cpy_r_module);
    CPy_DECREF(cpy_r_module);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/server/update.py", "find_relative_leaf_module", 697, CPyStatic_update___globals);
        goto CPyL29;
    }
    cpy_r_r24 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r24;
    goto CPyL8;
CPyL12: ;
    cpy_r_module_set = cpy_r_r12;
    cpy_r_r25 = 0;
CPyL13: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r29) goto CPyL30;
    cpy_r_r30 = CPyList_GetItemUnsafe(cpy_r_modules, cpy_r_r25);
    PyObject *__tmp6718;
    if (unlikely(!(PyTuple_Check(cpy_r_r30) && PyTuple_GET_SIZE(cpy_r_r30) == 2))) {
        __tmp6718 = NULL;
        goto __LL6719;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r30, 0))))
        __tmp6718 = PyTuple_GET_ITEM(cpy_r_r30, 0);
    else {
        __tmp6718 = NULL;
    }
    if (__tmp6718 == NULL) goto __LL6719;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r30, 1))))
        __tmp6718 = PyTuple_GET_ITEM(cpy_r_r30, 1);
    else {
        __tmp6718 = NULL;
    }
    if (__tmp6718 == NULL) goto __LL6719;
    __tmp6718 = cpy_r_r30;
__LL6719: ;
    if (unlikely(__tmp6718 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r30); cpy_r_r31 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6720 = PyTuple_GET_ITEM(cpy_r_r30, 0);
        CPy_INCREF(__tmp6720);
        PyObject *__tmp6721;
        if (likely(PyUnicode_Check(__tmp6720)))
            __tmp6721 = __tmp6720;
        else {
            CPy_TypeError("str", __tmp6720); 
            __tmp6721 = NULL;
        }
        cpy_r_r31.f0 = __tmp6721;
        PyObject *__tmp6722 = PyTuple_GET_ITEM(cpy_r_r30, 1);
        CPy_INCREF(__tmp6722);
        PyObject *__tmp6723;
        if (likely(PyUnicode_Check(__tmp6722)))
            __tmp6723 = __tmp6722;
        else {
            CPy_TypeError("str", __tmp6722); 
            __tmp6723 = NULL;
        }
        cpy_r_r31.f1 = __tmp6723;
    }
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_relative_leaf_module", 698, CPyStatic_update___globals);
        goto CPyL31;
    }
    cpy_r_r32 = cpy_r_r31.f0;
    CPy_INCREF(cpy_r_r32);
    cpy_r_module_2 = cpy_r_r32;
    cpy_r_r33 = cpy_r_r31.f1;
    CPy_INCREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r31.f0);
    CPy_DECREF(cpy_r_r31.f1);
    cpy_r_path = cpy_r_r33;
    cpy_r_r34 = CPyDict_GetItem(cpy_r_graph, cpy_r_module_2);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_relative_leaf_module", 699, CPyStatic_update___globals);
        goto CPyL32;
    }
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_mypy___build___State))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_relative_leaf_module", 699, CPyStatic_update___globals, "mypy.build.State", cpy_r_r34);
        goto CPyL32;
    }
    cpy_r_state = cpy_r_r35;
    cpy_r_r36 = ((mypy___build___StateObject *)cpy_r_state)->_dependencies;
    if (unlikely(cpy_r_r36 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'dependencies' of 'State' undefined");
    } else {
        CPy_INCREF(cpy_r_r36);
    }
    CPy_DECREF(cpy_r_state);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_relative_leaf_module", 700, CPyStatic_update___globals);
        goto CPyL32;
    }
CPyL18: ;
    cpy_r_r37 = PySet_New(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_relative_leaf_module", 700, CPyStatic_update___globals);
        goto CPyL32;
    }
    cpy_r_r38 = PyNumber_And(cpy_r_r37, cpy_r_module_set);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_relative_leaf_module", 700, CPyStatic_update___globals);
        goto CPyL32;
    }
    if (likely(PySet_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_relative_leaf_module", 700, CPyStatic_update___globals, "set", cpy_r_r38);
        goto CPyL32;
    }
    cpy_r_r40 = (CPyPtr)&((PySetObject *)cpy_r_r39)->used;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    CPy_DECREF(cpy_r_r39);
    cpy_r_r42 = cpy_r_r41 << 1;
    cpy_r_r43 = cpy_r_r42 == 0;
    if (cpy_r_r43) {
        goto CPyL33;
    } else
        goto CPyL34;
CPyL22: ;
    cpy_r_r44.f0 = cpy_r_module_2;
    cpy_r_r44.f1 = cpy_r_path;
    CPy_INCREF(cpy_r_r44.f0);
    CPy_INCREF(cpy_r_r44.f1);
    CPy_DECREF(cpy_r_module_2);
    CPy_DECREF(cpy_r_path);
    return cpy_r_r44;
CPyL23: ;
    cpy_r_r45 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r45;
    goto CPyL13;
CPyL24: ;
    cpy_r_r46 = CPyList_GetItemShort(cpy_r_modules, 0);
    CPy_DECREF(cpy_r_modules);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_relative_leaf_module", 704, CPyStatic_update___globals);
        goto CPyL27;
    }
    PyObject *__tmp6724;
    if (unlikely(!(PyTuple_Check(cpy_r_r46) && PyTuple_GET_SIZE(cpy_r_r46) == 2))) {
        __tmp6724 = NULL;
        goto __LL6725;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r46, 0))))
        __tmp6724 = PyTuple_GET_ITEM(cpy_r_r46, 0);
    else {
        __tmp6724 = NULL;
    }
    if (__tmp6724 == NULL) goto __LL6725;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r46, 1))))
        __tmp6724 = PyTuple_GET_ITEM(cpy_r_r46, 1);
    else {
        __tmp6724 = NULL;
    }
    if (__tmp6724 == NULL) goto __LL6725;
    __tmp6724 = cpy_r_r46;
__LL6725: ;
    if (unlikely(__tmp6724 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r46); cpy_r_r47 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6726 = PyTuple_GET_ITEM(cpy_r_r46, 0);
        CPy_INCREF(__tmp6726);
        PyObject *__tmp6727;
        if (likely(PyUnicode_Check(__tmp6726)))
            __tmp6727 = __tmp6726;
        else {
            CPy_TypeError("str", __tmp6726); 
            __tmp6727 = NULL;
        }
        cpy_r_r47.f0 = __tmp6727;
        PyObject *__tmp6728 = PyTuple_GET_ITEM(cpy_r_r46, 1);
        CPy_INCREF(__tmp6728);
        PyObject *__tmp6729;
        if (likely(PyUnicode_Check(__tmp6728)))
            __tmp6729 = __tmp6728;
        else {
            CPy_TypeError("str", __tmp6728); 
            __tmp6729 = NULL;
        }
        cpy_r_r47.f1 = __tmp6729;
    }
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_relative_leaf_module", 704, CPyStatic_update___globals);
        goto CPyL27;
    }
    return cpy_r_r47;
CPyL27: ;
    tuple_T2OO __tmp6730 = { NULL, NULL };
    cpy_r_r48 = __tmp6730;
    return cpy_r_r48;
CPyL28: ;
    CPy_DecRef(cpy_r_modules);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r12);
    goto CPyL27;
CPyL30: ;
    CPy_DECREF(cpy_r_module_set);
    goto CPyL24;
CPyL31: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_module_set);
    goto CPyL27;
CPyL32: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_module_set);
    CPy_DecRef(cpy_r_module_2);
    CPy_DecRef(cpy_r_path);
    goto CPyL27;
CPyL33: ;
    CPy_DECREF(cpy_r_modules);
    CPy_DECREF(cpy_r_module_set);
    goto CPyL22;
CPyL34: ;
    CPy_DECREF(cpy_r_module_2);
    CPy_DECREF(cpy_r_path);
    goto CPyL23;
}

PyObject *CPyPy_update___find_relative_leaf_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"modules", "graph", 0};
    static CPyArg_Parser parser = {"OO:find_relative_leaf_module", kwlist, 0};
    PyObject *obj_modules;
    PyObject *obj_graph;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_modules, &obj_graph)) {
        return NULL;
    }
    PyObject *arg_modules;
    if (likely(PyList_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("list", obj_modules); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_update___find_relative_leaf_module(arg_modules, arg_graph);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6731 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp6731);
    PyObject *__tmp6732 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp6732);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "find_relative_leaf_module", 680, CPyStatic_update___globals);
    return NULL;
}

char CPyDef_update___delete_module(PyObject *cpy_r_module_id, PyObject *cpy_r_path, PyObject *cpy_r_graph, PyObject *cpy_r_manager) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_components;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_parent_id;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_parent;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    cpy_r_r1 = CPyStatics[5386]; /* 'delete module ' */
    cpy_r_r2 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r3 = CPyStatics[163]; /* '' */
    cpy_r_r4 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r5[3] = {cpy_r_r2, cpy_r_module_id, cpy_r_r3};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 708, CPyStatic_update___globals);
        goto CPyL34;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "delete_module", 708, CPyStatic_update___globals, "str", cpy_r_r7);
        goto CPyL34;
    }
    cpy_r_r9 = PyList_New(2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 708, CPyStatic_update___globals);
        goto CPyL35;
    }
    cpy_r_r10 = (CPyPtr)&((PyListObject *)cpy_r_r9)->ob_item;
    cpy_r_r11 = *(CPyPtr *)cpy_r_r10;
    CPy_INCREF(cpy_r_r1);
    *(PyObject * *)cpy_r_r11 = cpy_r_r1;
    cpy_r_r12 = cpy_r_r11 + 8;
    *(PyObject * *)cpy_r_r12 = cpy_r_r8;
    cpy_r_r13 = PyUnicode_Join(cpy_r_r0, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 708, CPyStatic_update___globals);
        goto CPyL34;
    }
    cpy_r_r14 = PyTuple_Pack(1, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 708, CPyStatic_update___globals);
        goto CPyL34;
    }
    cpy_r_r15 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_manager, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 708, CPyStatic_update___globals);
        goto CPyL34;
    }
    cpy_r_r16 = PyDict_Contains(cpy_r_graph, cpy_r_module_id);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 710, CPyStatic_update___globals);
        goto CPyL34;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL9;
    cpy_r_r19 = PyObject_DelItem(cpy_r_graph, cpy_r_module_id);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 711, CPyStatic_update___globals);
        goto CPyL34;
    }
CPyL9: ;
    cpy_r_r21 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_modules;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = PyDict_Contains(cpy_r_r21, cpy_r_module_id);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 712, CPyStatic_update___globals);
        goto CPyL34;
    }
    cpy_r_r24 = cpy_r_r22;
    if (!cpy_r_r24) goto CPyL12;
    cpy_r_r25 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_modules;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = PyObject_DelItem(cpy_r_r25, cpy_r_module_id);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 713, CPyStatic_update___globals);
        goto CPyL34;
    }
CPyL12: ;
    cpy_r_r28 = CPyStatics[224]; /* '.' */
    cpy_r_r29 = PyUnicode_Split(cpy_r_module_id, cpy_r_r28, -1);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 714, CPyStatic_update___globals);
        goto CPyL34;
    }
    cpy_r_components = cpy_r_r29;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_components)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r32 > (Py_ssize_t)2;
    if (!cpy_r_r33) goto CPyL36;
    cpy_r_r34 = CPyStatics[224]; /* '.' */
    cpy_r_r35 = CPyList_GetSlice(cpy_r_components, 0, -2);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 717, CPyStatic_update___globals);
        goto CPyL37;
    }
    if (likely(PyList_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "delete_module", 717, CPyStatic_update___globals, "list", cpy_r_r35);
        goto CPyL37;
    }
    cpy_r_r37 = PyUnicode_Join(cpy_r_r34, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 717, CPyStatic_update___globals);
        goto CPyL37;
    }
    cpy_r_parent_id = cpy_r_r37;
    cpy_r_r38 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_modules;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = PyDict_Contains(cpy_r_r38, cpy_r_parent_id);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 719, CPyStatic_update___globals);
        goto CPyL38;
    }
    cpy_r_r41 = cpy_r_r39;
    if (!cpy_r_r41) goto CPyL39;
    cpy_r_r42 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_modules;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = CPyDict_GetItem(cpy_r_r42, cpy_r_parent_id);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_parent_id);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 720, CPyStatic_update___globals);
        goto CPyL37;
    }
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_nodes___MypyFile))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "delete_module", 720, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_r43);
        goto CPyL37;
    }
    cpy_r_parent = cpy_r_r44;
    cpy_r_r45 = CPyList_GetItemShort(cpy_r_components, -2);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 721, CPyStatic_update___globals);
        goto CPyL40;
    }
    if (likely(PyUnicode_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "delete_module", 721, CPyStatic_update___globals, "str", cpy_r_r45);
        goto CPyL40;
    }
    cpy_r_r47 = ((mypy___nodes___MypyFileObject *)cpy_r_parent)->_names;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "delete_module", "MypyFile", "names", 721, CPyStatic_update___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r47);
CPyL24: ;
    cpy_r_r48 = PyDict_Contains(cpy_r_r47, cpy_r_r46);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 721, CPyStatic_update___globals);
        goto CPyL40;
    }
    cpy_r_r50 = cpy_r_r48;
    if (!cpy_r_r50) goto CPyL42;
    cpy_r_r51 = ((mypy___nodes___MypyFileObject *)cpy_r_parent)->_names;
    if (unlikely(cpy_r_r51 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'MypyFile' undefined");
    } else {
        CPy_INCREF(cpy_r_r51);
    }
    CPy_DECREF(cpy_r_parent);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 722, CPyStatic_update___globals);
        goto CPyL37;
    }
CPyL27: ;
    cpy_r_r52 = CPyList_GetItemShort(cpy_r_components, -2);
    CPy_DECREF(cpy_r_components);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 722, CPyStatic_update___globals);
        goto CPyL43;
    }
    if (likely(PyUnicode_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "delete_module", 722, CPyStatic_update___globals, "str", cpy_r_r52);
        goto CPyL43;
    }
    cpy_r_r54 = PyObject_DelItem(cpy_r_r51, cpy_r_r53);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 722, CPyStatic_update___globals);
        goto CPyL34;
    }
CPyL30: ;
    cpy_r_r56 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_fscache;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = CPY_GET_METHOD(cpy_r_r56, CPyType_fscache___FileSystemCache, 7, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r56, cpy_r_path); /* isfile */
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 725, CPyStatic_update___globals);
        goto CPyL34;
    }
    if (!cpy_r_r57) goto CPyL33;
    cpy_r_r58 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_missing_modules;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = PySet_Add(cpy_r_r58, cpy_r_module_id);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/server/update.py", "delete_module", 726, CPyStatic_update___globals);
        goto CPyL34;
    }
CPyL33: ;
    return 1;
CPyL34: ;
    cpy_r_r61 = 2;
    return cpy_r_r61;
CPyL35: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL34;
CPyL36: ;
    CPy_DECREF(cpy_r_components);
    goto CPyL30;
CPyL37: ;
    CPy_DecRef(cpy_r_components);
    goto CPyL34;
CPyL38: ;
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_parent_id);
    goto CPyL34;
CPyL39: ;
    CPy_DECREF(cpy_r_components);
    CPy_DECREF(cpy_r_parent_id);
    goto CPyL30;
CPyL40: ;
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_parent);
    goto CPyL34;
CPyL41: ;
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r46);
    goto CPyL34;
CPyL42: ;
    CPy_DECREF(cpy_r_components);
    CPy_DECREF(cpy_r_parent);
    goto CPyL30;
CPyL43: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL34;
}

PyObject *CPyPy_update___delete_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module_id", "path", "graph", "manager", 0};
    static CPyArg_Parser parser = {"OOOO:delete_module", kwlist, 0};
    PyObject *obj_module_id;
    PyObject *obj_path;
    PyObject *obj_graph;
    PyObject *obj_manager;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module_id, &obj_path, &obj_graph, &obj_manager)) {
        return NULL;
    }
    PyObject *arg_module_id;
    if (likely(PyUnicode_Check(obj_module_id)))
        arg_module_id = obj_module_id;
    else {
        CPy_TypeError("str", obj_module_id); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_manager;
    if (likely(Py_TYPE(obj_manager) == CPyType_mypy___build___BuildManager))
        arg_manager = obj_manager;
    else {
        CPy_TypeError("mypy.build.BuildManager", obj_manager); 
        goto fail;
    }
    char retval = CPyDef_update___delete_module(arg_module_id, arg_path, arg_graph, arg_manager);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "delete_module", 707, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___dedupe_modules(PyObject *cpy_r_modules) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_seen;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_path;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    tuple_T2OO cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "dedupe_modules", 730, CPyStatic_update___globals);
        goto CPyL11;
    }
    cpy_r_seen = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "dedupe_modules", 731, CPyStatic_update___globals);
        goto CPyL12;
    }
    cpy_r_result = cpy_r_r1;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL13;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_modules, cpy_r_r2);
    PyObject *__tmp6733;
    if (unlikely(!(PyTuple_Check(cpy_r_r7) && PyTuple_GET_SIZE(cpy_r_r7) == 2))) {
        __tmp6733 = NULL;
        goto __LL6734;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r7, 0))))
        __tmp6733 = PyTuple_GET_ITEM(cpy_r_r7, 0);
    else {
        __tmp6733 = NULL;
    }
    if (__tmp6733 == NULL) goto __LL6734;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r7, 1))))
        __tmp6733 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp6733 = NULL;
    }
    if (__tmp6733 == NULL) goto __LL6734;
    __tmp6733 = cpy_r_r7;
__LL6734: ;
    if (unlikely(__tmp6733 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r7); cpy_r_r8 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6735 = PyTuple_GET_ITEM(cpy_r_r7, 0);
        CPy_INCREF(__tmp6735);
        PyObject *__tmp6736;
        if (likely(PyUnicode_Check(__tmp6735)))
            __tmp6736 = __tmp6735;
        else {
            CPy_TypeError("str", __tmp6735); 
            __tmp6736 = NULL;
        }
        cpy_r_r8.f0 = __tmp6736;
        PyObject *__tmp6737 = PyTuple_GET_ITEM(cpy_r_r7, 1);
        CPy_INCREF(__tmp6737);
        PyObject *__tmp6738;
        if (likely(PyUnicode_Check(__tmp6737)))
            __tmp6738 = __tmp6737;
        else {
            CPy_TypeError("str", __tmp6737); 
            __tmp6738 = NULL;
        }
        cpy_r_r8.f1 = __tmp6738;
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "dedupe_modules", 732, CPyStatic_update___globals);
        goto CPyL14;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r9);
    cpy_r_id = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f1;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r8.f1);
    cpy_r_path = cpy_r_r10;
    cpy_r_r11 = PySet_Contains(cpy_r_seen, cpy_r_id);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/server/update.py", "dedupe_modules", 733, CPyStatic_update___globals);
        goto CPyL15;
    }
    cpy_r_r13 = cpy_r_r11;
    cpy_r_r14 = cpy_r_r13 ^ 1;
    if (!cpy_r_r14) goto CPyL16;
    cpy_r_r15 = PySet_Add(cpy_r_seen, cpy_r_id);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/server/update.py", "dedupe_modules", 734, CPyStatic_update___globals);
        goto CPyL15;
    }
    cpy_r_r17.f0 = cpy_r_id;
    cpy_r_r17.f1 = cpy_r_path;
    CPy_INCREF(cpy_r_r17.f0);
    CPy_INCREF(cpy_r_r17.f1);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_path);
    cpy_r_r18 = PyTuple_New(2);
    if (unlikely(cpy_r_r18 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6739 = cpy_r_r17.f0;
    PyTuple_SET_ITEM(cpy_r_r18, 0, __tmp6739);
    PyObject *__tmp6740 = cpy_r_r17.f1;
    PyTuple_SET_ITEM(cpy_r_r18, 1, __tmp6740);
    cpy_r_r19 = PyList_Append(cpy_r_result, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/server/update.py", "dedupe_modules", 735, CPyStatic_update___globals);
        goto CPyL14;
    }
CPyL9: ;
    cpy_r_r21 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r21;
    goto CPyL3;
CPyL10: ;
    return cpy_r_result;
CPyL11: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL12: ;
    CPy_DecRef(cpy_r_seen);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_seen);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_result);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_path);
    goto CPyL11;
CPyL16: ;
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_path);
    goto CPyL9;
}

PyObject *CPyPy_update___dedupe_modules(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"modules", 0};
    static CPyArg_Parser parser = {"O:dedupe_modules", kwlist, 0};
    PyObject *obj_modules;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_modules)) {
        return NULL;
    }
    PyObject *arg_modules;
    if (likely(PyList_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("list", obj_modules); 
        goto fail;
    }
    PyObject *retval = CPyDef_update___dedupe_modules(arg_modules);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "dedupe_modules", 729, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___get_module_to_path_map(PyObject *cpy_r_graph) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T4CIOO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_module;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "get_module_to_path_map", 740, CPyStatic_update___globals);
        goto CPyL9;
    }
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_graph);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetItemsIter(cpy_r_graph);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "get_module_to_path_map", 740, CPyStatic_update___globals);
        goto CPyL10;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextItem(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL11;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_r5.f3;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r10 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "get_module_to_path_map", 740, CPyStatic_update___globals, "str", cpy_r_r8);
        goto CPyL12;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_mypy___build___State))
        cpy_r_r11 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "get_module_to_path_map", 740, CPyStatic_update___globals, "mypy.build.State", cpy_r_r9);
        goto CPyL13;
    }
    cpy_r_module = cpy_r_r10;
    cpy_r_node = cpy_r_r11;
    cpy_r_r12 = ((mypy___build___StateObject *)cpy_r_node)->_xpath;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_node);
    cpy_r_r13 = CPyDict_SetItem(cpy_r_r0, cpy_r_module, cpy_r_r12);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/server/update.py", "get_module_to_path_map", 740, CPyStatic_update___globals);
        goto CPyL14;
    }
    cpy_r_r15 = CPyDict_CheckSize(cpy_r_graph, cpy_r_r3);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/server/update.py", "get_module_to_path_map", 740, CPyStatic_update___globals);
        goto CPyL14;
    } else
        goto CPyL2;
CPyL7: ;
    cpy_r_r16 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/server/update.py", "get_module_to_path_map", 740, CPyStatic_update___globals);
        goto CPyL10;
    }
    return cpy_r_r0;
CPyL9: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    goto CPyL7;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r9);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r10);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL9;
}

PyObject *CPyPy_update___get_module_to_path_map(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"graph", 0};
    static CPyArg_Parser parser = {"O:get_module_to_path_map", kwlist, 0};
    PyObject *obj_graph;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_graph)) {
        return NULL;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *retval = CPyDef_update___get_module_to_path_map(arg_graph);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "get_module_to_path_map", 739, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___get_sources(PyObject *cpy_r_fscache, PyObject *cpy_r_modules, PyObject *cpy_r_changed_modules, char cpy_r_followed) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_sources;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_path;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "get_sources", 749, CPyStatic_update___globals);
        goto CPyL10;
    }
    cpy_r_sources = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_changed_modules)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL9;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_changed_modules, cpy_r_r1);
    PyObject *__tmp6741;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp6741 = NULL;
        goto __LL6742;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp6741 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp6741 = NULL;
    }
    if (__tmp6741 == NULL) goto __LL6742;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 1))))
        __tmp6741 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp6741 = NULL;
    }
    if (__tmp6741 == NULL) goto __LL6742;
    __tmp6741 = cpy_r_r6;
__LL6742: ;
    if (unlikely(__tmp6741 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r6); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6743 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp6743);
        PyObject *__tmp6744;
        if (likely(PyUnicode_Check(__tmp6743)))
            __tmp6744 = __tmp6743;
        else {
            CPy_TypeError("str", __tmp6743); 
            __tmp6744 = NULL;
        }
        cpy_r_r7.f0 = __tmp6744;
        PyObject *__tmp6745 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp6745);
        PyObject *__tmp6746;
        if (likely(PyUnicode_Check(__tmp6745)))
            __tmp6746 = __tmp6745;
        else {
            CPy_TypeError("str", __tmp6745); 
            __tmp6746 = NULL;
        }
        cpy_r_r7.f1 = __tmp6746;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "get_sources", 750, CPyStatic_update___globals);
        goto CPyL11;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_id = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r_path = cpy_r_r9;
    cpy_r_r10 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 7, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_fscache, cpy_r_path); /* isfile */
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "get_sources", 751, CPyStatic_update___globals);
        goto CPyL12;
    }
    if (!cpy_r_r10) goto CPyL13;
    cpy_r_r11 = Py_None;
    cpy_r_r12 = NULL;
    cpy_r_r13 = CPyDef_modulefinder___BuildSource(cpy_r_path, cpy_r_id, cpy_r_r11, cpy_r_r12, cpy_r_followed);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_id);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "get_sources", 752, CPyStatic_update___globals);
        goto CPyL11;
    }
    cpy_r_r14 = PyList_Append(cpy_r_sources, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/server/update.py", "get_sources", 752, CPyStatic_update___globals);
        goto CPyL11;
    }
CPyL8: ;
    cpy_r_r16 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r16;
    goto CPyL2;
CPyL9: ;
    return cpy_r_sources;
CPyL10: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL11: ;
    CPy_DecRef(cpy_r_sources);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_path);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_path);
    goto CPyL8;
}

PyObject *CPyPy_update___get_sources(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fscache", "modules", "changed_modules", "followed", 0};
    static CPyArg_Parser parser = {"OOOO:get_sources", kwlist, 0};
    PyObject *obj_fscache;
    PyObject *obj_modules;
    PyObject *obj_changed_modules;
    PyObject *obj_followed;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fscache, &obj_modules, &obj_changed_modules, &obj_followed)) {
        return NULL;
    }
    PyObject *arg_fscache;
    if (likely(PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache)))
        arg_fscache = obj_fscache;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_fscache); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    PyObject *arg_changed_modules;
    if (likely(PyList_Check(obj_changed_modules)))
        arg_changed_modules = obj_changed_modules;
    else {
        CPy_TypeError("list", obj_changed_modules); 
        goto fail;
    }
    char arg_followed;
    if (unlikely(!PyBool_Check(obj_followed))) {
        CPy_TypeError("bool", obj_followed); goto fail;
    } else
        arg_followed = obj_followed == Py_True;
    PyObject *retval = CPyDef_update___get_sources(arg_fscache, arg_modules, arg_changed_modules, arg_followed);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "get_sources", 743, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___calculate_active_triggers(PyObject *cpy_r_manager, PyObject *cpy_r_old_snapshots, PyObject *cpy_r_new_modules) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_names;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T3CIO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_snapshot1;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_snapshot2;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_diff;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyTagged cpy_r_package_nesting_level;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    CPyTagged cpy_r_r52;
    int64_t cpy_r_r53;
    char cpy_r_r54;
    int64_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    CPyTagged cpy_r_r127;
    CPyTagged cpy_r_r128;
    int64_t cpy_r_r129;
    char cpy_r_r130;
    int64_t cpy_r_r131;
    char cpy_r_r132;
    char cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject **cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    int32_t cpy_r_r146;
    char cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 766, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_names = cpy_r_r0;
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_new_modules);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetKeysIter(cpy_r_new_modules);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 767, CPyStatic_update___globals);
        goto CPyL108;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextKey(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL109;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r5.f2);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 767, CPyStatic_update___globals, "str", cpy_r_r8);
        goto CPyL110;
    }
    cpy_r_id = cpy_r_r9;
    cpy_r_r10 = CPyDict_GetWithNone(cpy_r_old_snapshots, cpy_r_id);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 768, CPyStatic_update___globals);
        goto CPyL111;
    }
    if (PyDict_Check(cpy_r_r10))
        cpy_r_r11 = cpy_r_r10;
    else {
        cpy_r_r11 = NULL;
    }
    if (cpy_r_r11 != NULL) goto __LL6747;
    if (cpy_r_r10 == Py_None)
        cpy_r_r11 = cpy_r_r10;
    else {
        cpy_r_r11 = NULL;
    }
    if (cpy_r_r11 != NULL) goto __LL6747;
    CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 768, CPyStatic_update___globals, "dict or None", cpy_r_r10);
    goto CPyL111;
__LL6747: ;
    cpy_r_snapshot1 = cpy_r_r11;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_snapshot1 == cpy_r_r12;
    if (cpy_r_r13) {
        goto CPyL112;
    } else
        goto CPyL10;
CPyL7: ;
    cpy_r_r14 = PySet_Add(cpy_r_names, cpy_r_id);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 770, CPyStatic_update___globals);
        goto CPyL111;
    }
    cpy_r_r16 = PyDict_New();
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 771, CPyStatic_update___globals);
        goto CPyL111;
    }
    cpy_r_snapshot1 = cpy_r_r16;
CPyL10: ;
    cpy_r_r17 = CPyDict_GetItem(cpy_r_new_modules, cpy_r_id);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 772, CPyStatic_update___globals);
        goto CPyL113;
    }
    if (Py_TYPE(cpy_r_r17) == CPyType_nodes___MypyFile)
        cpy_r_r18 = cpy_r_r17;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL6748;
    if (cpy_r_r17 == Py_None)
        cpy_r_r18 = cpy_r_r17;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL6748;
    CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 772, CPyStatic_update___globals, "mypy.nodes.MypyFile or None", cpy_r_r17);
    goto CPyL113;
__LL6748: ;
    cpy_r_new = cpy_r_r18;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_new == cpy_r_r19;
    if (cpy_r_r20) {
        goto CPyL114;
    } else
        goto CPyL17;
CPyL13: ;
    cpy_r_r21 = (PyObject *)CPyType_nodes___SymbolTable;
    cpy_r_r22 = _PyObject_Vectorcall(cpy_r_r21, 0, 0, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 774, CPyStatic_update___globals);
        goto CPyL113;
    }
    if (likely(PyDict_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 774, CPyStatic_update___globals, "dict", cpy_r_r22);
        goto CPyL113;
    }
    cpy_r_r24 = CPyDef_astdiff___snapshot_symbol_table(cpy_r_id, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 774, CPyStatic_update___globals);
        goto CPyL113;
    }
    cpy_r_snapshot2 = cpy_r_r24;
    cpy_r_r25 = PySet_Add(cpy_r_names, cpy_r_id);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 775, CPyStatic_update___globals);
        goto CPyL115;
    } else
        goto CPyL21;
CPyL17: ;
    if (likely(cpy_r_new != Py_None))
        cpy_r_r27 = cpy_r_new;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 777, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_new);
        goto CPyL116;
    }
    cpy_r_r28 = ((mypy___nodes___MypyFileObject *)cpy_r_r27)->_names;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "calculate_active_triggers", "MypyFile", "names", 777, CPyStatic_update___globals);
        goto CPyL116;
    }
    CPy_INCREF(cpy_r_r28);
CPyL19: ;
    CPy_DECREF(cpy_r_new);
    cpy_r_r29 = CPyDef_astdiff___snapshot_symbol_table(cpy_r_id, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 777, CPyStatic_update___globals);
        goto CPyL113;
    }
    cpy_r_snapshot2 = cpy_r_r29;
CPyL21: ;
    if (likely(cpy_r_snapshot1 != Py_None))
        cpy_r_r30 = cpy_r_snapshot1;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 778, CPyStatic_update___globals, "dict", cpy_r_snapshot1);
        goto CPyL117;
    }
    cpy_r_r31 = CPyDef_astdiff___compare_symbol_table_snapshots(cpy_r_id, cpy_r_r30, cpy_r_snapshot2);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_snapshot2);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 778, CPyStatic_update___globals);
        goto CPyL111;
    }
    cpy_r_diff = cpy_r_r31;
    cpy_r_r32 = CPyStatics[224]; /* '.' */
    cpy_r_r33 = CPyStatics[226]; /* 'count' */
    PyObject *cpy_r_r34[2] = {cpy_r_id, cpy_r_r32};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = PyObject_VectorcallMethod(cpy_r_r33, cpy_r_r35, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 779, CPyStatic_update___globals);
        goto CPyL118;
    }
    if (likely(PyLong_Check(cpy_r_r36)))
        cpy_r_r37 = CPyTagged_FromObject(cpy_r_r36);
    else {
        CPy_TypeError("int", cpy_r_r36); cpy_r_r37 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 779, CPyStatic_update___globals);
        goto CPyL118;
    }
    cpy_r_package_nesting_level = cpy_r_r37;
    cpy_r_r38 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r39[1] = {cpy_r_diff};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = PyObject_VectorcallMethod(cpy_r_r38, cpy_r_r40, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 780, CPyStatic_update___globals);
        goto CPyL119;
    }
    if (likely(PySet_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 780, CPyStatic_update___globals, "set", cpy_r_r41);
        goto CPyL119;
    }
    cpy_r_r43 = PyObject_GetIter(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 780, CPyStatic_update___globals);
        goto CPyL119;
    }
CPyL28: ;
    cpy_r_r44 = PyIter_Next(cpy_r_r43);
    if (cpy_r_r44 == NULL) goto CPyL120;
    if (likely(PyUnicode_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 780, CPyStatic_update___globals, "str", cpy_r_r44);
        goto CPyL121;
    }
    cpy_r_item = cpy_r_r45;
    cpy_r_r46 = CPyStatics[224]; /* '.' */
    cpy_r_r47 = CPyStatics[226]; /* 'count' */
    PyObject *cpy_r_r48[2] = {cpy_r_item, cpy_r_r46};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = PyObject_VectorcallMethod(cpy_r_r47, cpy_r_r49, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals);
        goto CPyL122;
    }
    if (likely(PyLong_Check(cpy_r_r50)))
        cpy_r_r51 = CPyTagged_FromObject(cpy_r_r50);
    else {
        CPy_TypeError("int", cpy_r_r50); cpy_r_r51 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals);
        goto CPyL122;
    }
    cpy_r_r52 = CPyTagged_Add(cpy_r_package_nesting_level, 2);
    cpy_r_r53 = cpy_r_r51 & 1;
    cpy_r_r54 = cpy_r_r53 != 0;
    if (cpy_r_r54) goto CPyL34;
    cpy_r_r55 = cpy_r_r52 & 1;
    cpy_r_r56 = cpy_r_r55 != 0;
    if (!cpy_r_r56) goto CPyL35;
CPyL34: ;
    cpy_r_r57 = CPyTagged_IsLt_(cpy_r_r52, cpy_r_r51);
    CPyTagged_DECREF(cpy_r_r52);
    CPyTagged_DECREF(cpy_r_r51);
    if (cpy_r_r57) {
        goto CPyL81;
    } else
        goto CPyL36;
CPyL35: ;
    cpy_r_r58 = (Py_ssize_t)cpy_r_r51 <= (Py_ssize_t)cpy_r_r52;
    CPyTagged_DECREF(cpy_r_r51);
    CPyTagged_DECREF(cpy_r_r52);
    if (!cpy_r_r58) goto CPyL81;
CPyL36: ;
    cpy_r_r59 = CPyStatics[224]; /* '.' */
    cpy_r_r60 = PyUnicode_Split(cpy_r_item, cpy_r_r59, -1);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals);
        goto CPyL122;
    }
    cpy_r_r61 = CPyList_GetItemShort(cpy_r_r60, -2);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals);
        goto CPyL122;
    }
    if (likely(PyUnicode_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals, "str", cpy_r_r61);
        goto CPyL122;
    }
    cpy_r_r63 = CPyStatics[875]; /* '__builtins__' */
    cpy_r_r64 = PyUnicode_Compare(cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r65 = cpy_r_r64 == -1;
    if (!cpy_r_r65) goto CPyL42;
    cpy_r_r66 = PyErr_Occurred();
    cpy_r_r67 = cpy_r_r66 != NULL;
    if (!cpy_r_r67) goto CPyL42;
    cpy_r_r68 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", -1, CPyStatic_update___globals);
        goto CPyL122;
    }
CPyL42: ;
    cpy_r_r69 = cpy_r_r64 != 0;
    if (cpy_r_r69) goto CPyL44;
    cpy_r_r70 = cpy_r_r69;
    goto CPyL51;
CPyL44: ;
    cpy_r_r71 = CPyStatics[224]; /* '.' */
    cpy_r_r72 = PyUnicode_Split(cpy_r_item, cpy_r_r71, -1);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals);
        goto CPyL122;
    }
    cpy_r_r73 = CPyList_GetItemShort(cpy_r_r72, -2);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals);
        goto CPyL122;
    }
    if (likely(PyUnicode_Check(cpy_r_r73)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals, "str", cpy_r_r73);
        goto CPyL122;
    }
    cpy_r_r75 = CPyStatics[150]; /* '__file__' */
    cpy_r_r76 = PyUnicode_Compare(cpy_r_r74, cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r77 = cpy_r_r76 == -1;
    if (!cpy_r_r77) goto CPyL50;
    cpy_r_r78 = PyErr_Occurred();
    cpy_r_r79 = cpy_r_r78 != NULL;
    if (!cpy_r_r79) goto CPyL50;
    cpy_r_r80 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", -1, CPyStatic_update___globals);
        goto CPyL122;
    }
CPyL50: ;
    cpy_r_r81 = cpy_r_r76 != 0;
    cpy_r_r70 = cpy_r_r81;
CPyL51: ;
    if (cpy_r_r70) goto CPyL53;
    cpy_r_r82 = cpy_r_r70;
    goto CPyL60;
CPyL53: ;
    cpy_r_r83 = CPyStatics[224]; /* '.' */
    cpy_r_r84 = PyUnicode_Split(cpy_r_item, cpy_r_r83, -1);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals);
        goto CPyL122;
    }
    cpy_r_r85 = CPyList_GetItemShort(cpy_r_r84, -2);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals);
        goto CPyL122;
    }
    if (likely(PyUnicode_Check(cpy_r_r85)))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals, "str", cpy_r_r85);
        goto CPyL122;
    }
    cpy_r_r87 = CPyStatics[197]; /* '__name__' */
    cpy_r_r88 = PyUnicode_Compare(cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r89 = cpy_r_r88 == -1;
    if (!cpy_r_r89) goto CPyL59;
    cpy_r_r90 = PyErr_Occurred();
    cpy_r_r91 = cpy_r_r90 != NULL;
    if (!cpy_r_r91) goto CPyL59;
    cpy_r_r92 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", -1, CPyStatic_update___globals);
        goto CPyL122;
    }
CPyL59: ;
    cpy_r_r93 = cpy_r_r88 != 0;
    cpy_r_r82 = cpy_r_r93;
CPyL60: ;
    if (cpy_r_r82) goto CPyL62;
    cpy_r_r94 = cpy_r_r82;
    goto CPyL69;
CPyL62: ;
    cpy_r_r95 = CPyStatics[224]; /* '.' */
    cpy_r_r96 = PyUnicode_Split(cpy_r_item, cpy_r_r95, -1);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals);
        goto CPyL122;
    }
    cpy_r_r97 = CPyList_GetItemShort(cpy_r_r96, -2);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals);
        goto CPyL122;
    }
    if (likely(PyUnicode_Check(cpy_r_r97)))
        cpy_r_r98 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals, "str", cpy_r_r97);
        goto CPyL122;
    }
    cpy_r_r99 = CPyStatics[4061]; /* '__package__' */
    cpy_r_r100 = PyUnicode_Compare(cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r101 = cpy_r_r100 == -1;
    if (!cpy_r_r101) goto CPyL68;
    cpy_r_r102 = PyErr_Occurred();
    cpy_r_r103 = cpy_r_r102 != NULL;
    if (!cpy_r_r103) goto CPyL68;
    cpy_r_r104 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", -1, CPyStatic_update___globals);
        goto CPyL122;
    }
CPyL68: ;
    cpy_r_r105 = cpy_r_r100 != 0;
    cpy_r_r94 = cpy_r_r105;
CPyL69: ;
    if (cpy_r_r94) goto CPyL71;
    cpy_r_r106 = cpy_r_r94;
    goto CPyL78;
CPyL71: ;
    cpy_r_r107 = CPyStatics[224]; /* '.' */
    cpy_r_r108 = PyUnicode_Split(cpy_r_item, cpy_r_r107, -1);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals);
        goto CPyL122;
    }
    cpy_r_r109 = CPyList_GetItemShort(cpy_r_r108, -2);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals);
        goto CPyL122;
    }
    if (likely(PyUnicode_Check(cpy_r_r109)))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 781, CPyStatic_update___globals, "str", cpy_r_r109);
        goto CPyL122;
    }
    cpy_r_r111 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r112 = PyUnicode_Compare(cpy_r_r110, cpy_r_r111);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r113 = cpy_r_r112 == -1;
    if (!cpy_r_r113) goto CPyL77;
    cpy_r_r114 = PyErr_Occurred();
    cpy_r_r115 = cpy_r_r114 != NULL;
    if (!cpy_r_r115) goto CPyL77;
    cpy_r_r116 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", -1, CPyStatic_update___globals);
        goto CPyL122;
    }
CPyL77: ;
    cpy_r_r117 = cpy_r_r112 != 0;
    cpy_r_r106 = cpy_r_r117;
CPyL78: ;
    if (!cpy_r_r106) goto CPyL81;
    cpy_r_r118 = CPyStatics[5359]; /* '[wildcard]' */
    cpy_r_r119 = PyUnicode_Concat(cpy_r_id, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 795, CPyStatic_update___globals);
        goto CPyL122;
    }
    cpy_r_r120 = PySet_Add(cpy_r_diff, cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 795, CPyStatic_update___globals);
        goto CPyL122;
    }
CPyL81: ;
    cpy_r_r122 = CPyStatics[224]; /* '.' */
    cpy_r_r123 = CPyStatics[226]; /* 'count' */
    PyObject *cpy_r_r124[2] = {cpy_r_item, cpy_r_r122};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = PyObject_VectorcallMethod(cpy_r_r123, cpy_r_r125, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 796, CPyStatic_update___globals);
        goto CPyL122;
    }
    if (likely(PyLong_Check(cpy_r_r126)))
        cpy_r_r127 = CPyTagged_FromObject(cpy_r_r126);
    else {
        CPy_TypeError("int", cpy_r_r126); cpy_r_r127 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r127 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 796, CPyStatic_update___globals);
        goto CPyL122;
    }
    cpy_r_r128 = CPyTagged_Add(cpy_r_package_nesting_level, 2);
    cpy_r_r129 = cpy_r_r127 & 1;
    cpy_r_r130 = cpy_r_r129 != 0;
    if (cpy_r_r130) goto CPyL85;
    cpy_r_r131 = cpy_r_r128 & 1;
    cpy_r_r132 = cpy_r_r131 != 0;
    if (!cpy_r_r132) goto CPyL86;
CPyL85: ;
    cpy_r_r133 = CPyTagged_IsLt_(cpy_r_r128, cpy_r_r127);
    CPyTagged_DECREF(cpy_r_r128);
    CPyTagged_DECREF(cpy_r_r127);
    if (cpy_r_r133) {
        goto CPyL87;
    } else
        goto CPyL123;
CPyL86: ;
    cpy_r_r134 = (Py_ssize_t)cpy_r_r127 > (Py_ssize_t)cpy_r_r128;
    CPyTagged_DECREF(cpy_r_r127);
    CPyTagged_DECREF(cpy_r_r128);
    if (!cpy_r_r134) goto CPyL123;
CPyL87: ;
    cpy_r_r135 = CPyStatics[224]; /* '.' */
    cpy_r_r136 = CPyStatics[173]; /* 'rsplit' */
    cpy_r_r137 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r138[3] = {cpy_r_item, cpy_r_r135, cpy_r_r137};
    cpy_r_r139 = (PyObject **)&cpy_r_r138;
    cpy_r_r140 = PyObject_VectorcallMethod(cpy_r_r136, cpy_r_r139, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 798, CPyStatic_update___globals);
        goto CPyL122;
    }
    CPy_DECREF(cpy_r_item);
    if (likely(PyList_Check(cpy_r_r140)))
        cpy_r_r141 = cpy_r_r140;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 798, CPyStatic_update___globals, "list", cpy_r_r140);
        goto CPyL124;
    }
    cpy_r_r142 = CPyList_GetItemShort(cpy_r_r141, 0);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 798, CPyStatic_update___globals);
        goto CPyL124;
    }
    if (likely(PyUnicode_Check(cpy_r_r142)))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 798, CPyStatic_update___globals, "str", cpy_r_r142);
        goto CPyL124;
    }
    CPy_DECREF(cpy_r_r140);
    cpy_r_r144 = CPyStatics[5359]; /* '[wildcard]' */
    cpy_r_r145 = PyUnicode_Concat(cpy_r_r143, cpy_r_r144);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 798, CPyStatic_update___globals);
        goto CPyL121;
    }
    cpy_r_r146 = PySet_Add(cpy_r_diff, cpy_r_r145);
    CPy_DECREF(cpy_r_r145);
    cpy_r_r147 = cpy_r_r146 >= 0;
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 798, CPyStatic_update___globals);
        goto CPyL121;
    } else
        goto CPyL28;
CPyL93: ;
    cpy_r_r148 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 780, CPyStatic_update___globals);
        goto CPyL125;
    }
    cpy_r_r149 = PyNumber_InPlaceOr(cpy_r_names, cpy_r_diff);
    CPy_DECREF(cpy_r_names);
    CPy_DECREF(cpy_r_diff);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 800, CPyStatic_update___globals);
        goto CPyL126;
    }
    if (likely(PySet_Check(cpy_r_r149)))
        cpy_r_r150 = cpy_r_r149;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 800, CPyStatic_update___globals, "set", cpy_r_r149);
        goto CPyL126;
    }
    cpy_r_names = cpy_r_r150;
    cpy_r_r151 = CPyDict_CheckSize(cpy_r_new_modules, cpy_r_r3);
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 767, CPyStatic_update___globals);
        goto CPyL110;
    } else
        goto CPyL2;
CPyL98: ;
    cpy_r_r152 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 767, CPyStatic_update___globals);
        goto CPyL108;
    }
    cpy_r_r153 = PySet_New(NULL);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 801, CPyStatic_update___globals);
        goto CPyL108;
    }
    cpy_r_r154 = PyObject_GetIter(cpy_r_names);
    CPy_DECREF(cpy_r_names);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 801, CPyStatic_update___globals);
        goto CPyL127;
    }
CPyL101: ;
    cpy_r_r155 = PyIter_Next(cpy_r_r154);
    if (cpy_r_r155 == NULL) goto CPyL128;
    if (likely(PyUnicode_Check(cpy_r_r155)))
        cpy_r_r156 = cpy_r_r155;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "calculate_active_triggers", 801, CPyStatic_update___globals, "str", cpy_r_r155);
        goto CPyL129;
    }
    cpy_r_name = cpy_r_r156;
    cpy_r_r157 = CPyDef_trigger___make_trigger(cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 801, CPyStatic_update___globals);
        goto CPyL129;
    }
    cpy_r_r158 = PySet_Add(cpy_r_r153, cpy_r_r157);
    CPy_DECREF(cpy_r_r157);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 801, CPyStatic_update___globals);
        goto CPyL129;
    } else
        goto CPyL101;
CPyL105: ;
    cpy_r_r160 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 801, CPyStatic_update___globals);
        goto CPyL127;
    }
    return cpy_r_r153;
CPyL107: ;
    cpy_r_r161 = NULL;
    return cpy_r_r161;
CPyL108: ;
    CPy_DecRef(cpy_r_names);
    goto CPyL107;
CPyL109: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    goto CPyL98;
CPyL110: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r4);
    goto CPyL107;
CPyL111: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_id);
    goto CPyL107;
CPyL112: ;
    CPy_DECREF(cpy_r_snapshot1);
    goto CPyL7;
CPyL113: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_snapshot1);
    goto CPyL107;
CPyL114: ;
    CPy_DECREF(cpy_r_new);
    goto CPyL13;
CPyL115: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_snapshot1);
    CPy_DecRef(cpy_r_snapshot2);
    goto CPyL107;
CPyL116: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_snapshot1);
    CPy_DecRef(cpy_r_new);
    goto CPyL107;
CPyL117: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_snapshot2);
    goto CPyL107;
CPyL118: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_diff);
    goto CPyL107;
CPyL119: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_diff);
    CPyTagged_DecRef(cpy_r_package_nesting_level);
    goto CPyL107;
CPyL120: ;
    CPy_DECREF(cpy_r_id);
    CPyTagged_DECREF(cpy_r_package_nesting_level);
    CPy_DECREF(cpy_r_r43);
    goto CPyL93;
CPyL121: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_diff);
    CPyTagged_DecRef(cpy_r_package_nesting_level);
    CPy_DecRef(cpy_r_r43);
    goto CPyL107;
CPyL122: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_diff);
    CPyTagged_DecRef(cpy_r_package_nesting_level);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_item);
    goto CPyL107;
CPyL123: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL28;
CPyL124: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_diff);
    CPyTagged_DecRef(cpy_r_package_nesting_level);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r140);
    goto CPyL107;
CPyL125: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_diff);
    goto CPyL107;
CPyL126: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL107;
CPyL127: ;
    CPy_DecRef(cpy_r_r153);
    goto CPyL107;
CPyL128: ;
    CPy_DECREF(cpy_r_r154);
    goto CPyL105;
CPyL129: ;
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r154);
    goto CPyL107;
}

PyObject *CPyPy_update___calculate_active_triggers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"manager", "old_snapshots", "new_modules", 0};
    static CPyArg_Parser parser = {"OOO:calculate_active_triggers", kwlist, 0};
    PyObject *obj_manager;
    PyObject *obj_old_snapshots;
    PyObject *obj_new_modules;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_manager, &obj_old_snapshots, &obj_new_modules)) {
        return NULL;
    }
    PyObject *arg_manager;
    if (likely(Py_TYPE(obj_manager) == CPyType_mypy___build___BuildManager))
        arg_manager = obj_manager;
    else {
        CPy_TypeError("mypy.build.BuildManager", obj_manager); 
        goto fail;
    }
    PyObject *arg_old_snapshots;
    if (likely(PyDict_Check(obj_old_snapshots)))
        arg_old_snapshots = obj_old_snapshots;
    else {
        CPy_TypeError("dict", obj_old_snapshots); 
        goto fail;
    }
    PyObject *arg_new_modules;
    if (likely(PyDict_Check(obj_new_modules)))
        arg_new_modules = obj_new_modules;
    else {
        CPy_TypeError("dict", obj_new_modules); 
        goto fail;
    }
    PyObject *retval = CPyDef_update___calculate_active_triggers(arg_manager, arg_old_snapshots, arg_new_modules);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "calculate_active_triggers", 756, CPyStatic_update___globals);
    return NULL;
}

char CPyDef_update___replace_modules_with_new_variants(PyObject *cpy_r_manager, PyObject *cpy_r_graph, PyObject *cpy_r_old_modules, PyObject *cpy_r_new_modules) {
    CPyTagged cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T3CIO cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_preserved_module;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_new_module;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = 0;
    cpy_r_r1 = PyDict_Size(cpy_r_new_modules);
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = CPyDict_GetKeysIter(cpy_r_new_modules);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 819, CPyStatic_update___globals);
        goto CPyL25;
    }
CPyL1: ;
    cpy_r_r4 = CPyDict_NextKey(cpy_r_r3, cpy_r_r0);
    cpy_r_r5 = cpy_r_r4.f1;
    cpy_r_r0 = cpy_r_r5;
    cpy_r_r6 = cpy_r_r4.f0;
    if (!cpy_r_r6) goto CPyL26;
    cpy_r_r7 = cpy_r_r4.f2;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r4.f2);
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 819, CPyStatic_update___globals, "str", cpy_r_r7);
        goto CPyL27;
    }
    cpy_r_id = cpy_r_r8;
    cpy_r_r9 = CPyDict_GetWithNone(cpy_r_old_modules, cpy_r_id);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 820, CPyStatic_update___globals);
        goto CPyL28;
    }
    if (Py_TYPE(cpy_r_r9) == CPyType_nodes___MypyFile)
        cpy_r_r10 = cpy_r_r9;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL6749;
    if (cpy_r_r9 == Py_None)
        cpy_r_r10 = cpy_r_r9;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL6749;
    CPy_TypeErrorTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 820, CPyStatic_update___globals, "mypy.nodes.MypyFile or None", cpy_r_r9);
    goto CPyL28;
__LL6749: ;
    cpy_r_preserved_module = cpy_r_r10;
    cpy_r_r11 = CPyDict_GetItem(cpy_r_new_modules, cpy_r_id);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 821, CPyStatic_update___globals);
        goto CPyL29;
    }
    if (Py_TYPE(cpy_r_r11) == CPyType_nodes___MypyFile)
        cpy_r_r12 = cpy_r_r11;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL6750;
    if (cpy_r_r11 == Py_None)
        cpy_r_r12 = cpy_r_r11;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL6750;
    CPy_TypeErrorTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 821, CPyStatic_update___globals, "mypy.nodes.MypyFile or None", cpy_r_r11);
    goto CPyL29;
__LL6750: ;
    cpy_r_new_module = cpy_r_r12;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_preserved_module != cpy_r_r13;
    if (!cpy_r_r14) goto CPyL30;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_new_module != cpy_r_r15;
    if (!cpy_r_r16) goto CPyL30;
    CPy_INCREF(cpy_r_preserved_module);
    if (likely(cpy_r_preserved_module != Py_None))
        cpy_r_r17 = cpy_r_preserved_module;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 823, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_preserved_module);
        goto CPyL31;
    }
    if (likely(cpy_r_preserved_module != Py_None))
        cpy_r_r18 = cpy_r_preserved_module;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 823, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_preserved_module);
        goto CPyL32;
    }
    cpy_r_r19 = ((mypy___nodes___MypyFileObject *)cpy_r_r18)->_names;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "replace_modules_with_new_variants", "MypyFile", "names", 823, CPyStatic_update___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r19);
CPyL12: ;
    CPy_INCREF(cpy_r_new_module);
    if (likely(cpy_r_new_module != Py_None))
        cpy_r_r20 = cpy_r_new_module;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 823, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_new_module);
        goto CPyL33;
    }
    if (likely(cpy_r_new_module != Py_None))
        cpy_r_r21 = cpy_r_new_module;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 823, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_new_module);
        goto CPyL34;
    }
    cpy_r_r22 = ((mypy___nodes___MypyFileObject *)cpy_r_r21)->_names;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "replace_modules_with_new_variants", "MypyFile", "names", 823, CPyStatic_update___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r22);
CPyL15: ;
    CPy_DECREF(cpy_r_new_module);
    cpy_r_r23 = CPyDef_astmerge___merge_asts(cpy_r_r17, cpy_r_r19, cpy_r_r20, cpy_r_r22);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 823, CPyStatic_update___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_preserved_module);
    if (likely(cpy_r_preserved_module != Py_None))
        cpy_r_r24 = cpy_r_preserved_module;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 824, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_preserved_module);
        goto CPyL29;
    }
    cpy_r_r25 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_modules;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyDict_SetItem(cpy_r_r25, cpy_r_id, cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 824, CPyStatic_update___globals);
        goto CPyL29;
    }
    if (likely(cpy_r_preserved_module != Py_None))
        cpy_r_r28 = cpy_r_preserved_module;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 825, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_preserved_module);
        goto CPyL28;
    }
    cpy_r_r29 = CPyDict_GetItem(cpy_r_graph, cpy_r_id);
    CPy_DECREF(cpy_r_id);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 825, CPyStatic_update___globals);
        goto CPyL35;
    }
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_mypy___build___State))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 825, CPyStatic_update___globals, "mypy.build.State", cpy_r_r29);
        goto CPyL35;
    }
    CPy_DECREF(((mypy___build___StateObject *)cpy_r_r30)->_tree);
    ((mypy___build___StateObject *)cpy_r_r30)->_tree = cpy_r_r28;
    CPy_DECREF(cpy_r_r30);
CPyL22: ;
    cpy_r_r32 = CPyDict_CheckSize(cpy_r_new_modules, cpy_r_r2);
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 819, CPyStatic_update___globals);
        goto CPyL27;
    } else
        goto CPyL1;
CPyL23: ;
    cpy_r_r33 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 819, CPyStatic_update___globals);
        goto CPyL25;
    }
    return 1;
CPyL25: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
CPyL26: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4.f2);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_id);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_preserved_module);
    goto CPyL25;
CPyL30: ;
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_preserved_module);
    CPy_DECREF(cpy_r_new_module);
    goto CPyL22;
CPyL31: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_preserved_module);
    CPy_DecRef(cpy_r_new_module);
    goto CPyL25;
CPyL32: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_preserved_module);
    CPy_DecRef(cpy_r_new_module);
    CPy_DecRef(cpy_r_r17);
    goto CPyL25;
CPyL33: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_preserved_module);
    CPy_DecRef(cpy_r_new_module);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r19);
    goto CPyL25;
CPyL34: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_preserved_module);
    CPy_DecRef(cpy_r_new_module);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    goto CPyL25;
CPyL35: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r28);
    goto CPyL25;
}

PyObject *CPyPy_update___replace_modules_with_new_variants(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"manager", "graph", "old_modules", "new_modules", 0};
    static CPyArg_Parser parser = {"OOOO:replace_modules_with_new_variants", kwlist, 0};
    PyObject *obj_manager;
    PyObject *obj_graph;
    PyObject *obj_old_modules;
    PyObject *obj_new_modules;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_manager, &obj_graph, &obj_old_modules, &obj_new_modules)) {
        return NULL;
    }
    PyObject *arg_manager;
    if (likely(Py_TYPE(obj_manager) == CPyType_mypy___build___BuildManager))
        arg_manager = obj_manager;
    else {
        CPy_TypeError("mypy.build.BuildManager", obj_manager); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_old_modules;
    if (likely(PyDict_Check(obj_old_modules)))
        arg_old_modules = obj_old_modules;
    else {
        CPy_TypeError("dict", obj_old_modules); 
        goto fail;
    }
    PyObject *arg_new_modules;
    if (likely(PyDict_Check(obj_new_modules)))
        arg_new_modules = obj_new_modules;
    else {
        CPy_TypeError("dict", obj_new_modules); 
        goto fail;
    }
    char retval = CPyDef_update___replace_modules_with_new_variants(arg_manager, arg_graph, arg_old_modules, arg_new_modules);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "replace_modules_with_new_variants", 804, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "__get__", -1, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_____call__(PyObject *cpy_r___mypyc_self__, tuple_T2OO cpy_r_x) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "<lambda>", "__mypyc_lambda__0_propagate_changes_using_dependencies_obj", "__mypyc_env__", 879, CPyStatic_update___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL3;
CPyL1: ;
    cpy_r_r1 = cpy_r_x.f0;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL3: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"x", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_x;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_x)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    tuple_T2OO arg_x;
    PyObject *__tmp6751;
    if (unlikely(!(PyTuple_Check(obj_x) && PyTuple_GET_SIZE(obj_x) == 2))) {
        __tmp6751 = NULL;
        goto __LL6752;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(obj_x, 0))))
        __tmp6751 = PyTuple_GET_ITEM(obj_x, 0);
    else {
        __tmp6751 = NULL;
    }
    if (__tmp6751 == NULL) goto __LL6752;
    if (likely(PySet_Check(PyTuple_GET_ITEM(obj_x, 1))))
        __tmp6751 = PyTuple_GET_ITEM(obj_x, 1);
    else {
        __tmp6751 = NULL;
    }
    if (__tmp6751 == NULL) goto __LL6752;
    __tmp6751 = obj_x;
__LL6752: ;
    if (unlikely(__tmp6751 == NULL)) {
        CPy_TypeError("tuple[str, set]", obj_x); goto fail;
    } else {
        PyObject *__tmp6753 = PyTuple_GET_ITEM(obj_x, 0);
        PyObject *__tmp6754;
        if (likely(PyUnicode_Check(__tmp6753)))
            __tmp6754 = __tmp6753;
        else {
            CPy_TypeError("str", __tmp6753); 
            __tmp6754 = NULL;
        }
        arg_x.f0 = __tmp6754;
        PyObject *__tmp6755 = PyTuple_GET_ITEM(obj_x, 1);
        PyObject *__tmp6756;
        if (likely(PySet_Check(__tmp6755)))
            __tmp6756 = __tmp6755;
        else {
            CPy_TypeError("set", __tmp6755); 
            __tmp6756 = NULL;
        }
        arg_x.f1 = __tmp6756;
    }
    PyObject *retval = CPyDef_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj_____call__(arg___mypyc_self__, arg_x);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "<lambda>", 879, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___propagate_changes_using_dependencies(PyObject *cpy_r_manager, PyObject *cpy_r_graph, PyObject *cpy_r_deps, PyObject *cpy_r_triggered, PyObject *cpy_r_up_to_date_modules, PyObject *cpy_r_targets_with_errors, PyObject *cpy_r_processed_targets) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_num_iter;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_remaining_modules;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    CPyTagged cpy_r_r8;
    int64_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T3OOO cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_todo;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_unloaded;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_stale_protos;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T2OO cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_id_2;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    tuple_T2OO cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_more_nodes;
    PyObject *cpy_r_r78;
    PyObject *cpy_r__;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject **cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyTagged cpy_r_r104;
    CPyPtr cpy_r_r105;
    int64_t cpy_r_r106;
    CPyTagged cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    tuple_T2OO cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_nodes;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    CPyTagged cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject **cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    CPyPtr cpy_r_r138;
    CPyPtr cpy_r_r139;
    CPyPtr cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    cpy_r_r0 = CPyDef_update___propagate_changes_using_dependencies_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 828, CPyStatic_update___globals);
        goto CPyL93;
    }
    cpy_r_num_iter = 0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 847, CPyStatic_update___globals);
        goto CPyL94;
    }
    cpy_r_remaining_modules = cpy_r_r1;
    goto CPyL95;
CPyL3: ;
    cpy_r_r2 = PyObject_IsTrue(cpy_r_triggered);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 832, CPyStatic_update___globals);
        goto CPyL96;
    }
    cpy_r_r4 = cpy_r_r2;
    if (cpy_r_r4) goto CPyL7;
    cpy_r_r5 = PyObject_IsTrue(cpy_r_targets_with_errors);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 834, CPyStatic_update___globals);
        goto CPyL96;
    }
    cpy_r_r7 = cpy_r_r5;
    if (!cpy_r_r7) goto CPyL97;
CPyL7: ;
    cpy_r_r8 = CPyTagged_Add(cpy_r_num_iter, 2);
    CPyTagged_DECREF(cpy_r_num_iter);
    cpy_r_num_iter = cpy_r_r8;
    cpy_r_r9 = cpy_r_num_iter & 1;
    cpy_r_r10 = cpy_r_r9 != 0;
    if (!cpy_r_r10) goto CPyL9;
    cpy_r_r11 = CPyTagged_IsLt_(2000, cpy_r_num_iter);
    if (cpy_r_r11) {
        goto CPyL98;
    } else
        goto CPyL16;
CPyL9: ;
    cpy_r_r12 = (Py_ssize_t)cpy_r_num_iter > (Py_ssize_t)2000;
    if (cpy_r_r12) {
        goto CPyL98;
    } else
        goto CPyL16;
CPyL10: ;
    cpy_r_r13 = CPyTagged_Str(2000);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 854, CPyStatic_update___globals);
        goto CPyL93;
    }
    cpy_r_r14 = CPyStatics[5387]; /* 'Max number of iterations (' */
    cpy_r_r15 = CPyStatics[5388]; /* ') reached (endless loop?)' */
    cpy_r_r16 = CPyStr_Build(3, cpy_r_r14, cpy_r_r13, cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 854, CPyStatic_update___globals);
        goto CPyL93;
    }
    cpy_r_r17 = CPyModule_builtins;
    cpy_r_r18 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 854, CPyStatic_update___globals);
        goto CPyL99;
    }
    PyObject *cpy_r_r20[1] = {cpy_r_r16};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = _PyObject_Vectorcall(cpy_r_r19, cpy_r_r21, 1, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 854, CPyStatic_update___globals);
        goto CPyL99;
    }
    CPy_DECREF(cpy_r_r16);
    CPy_Raise(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 854, CPyStatic_update___globals);
        goto CPyL93;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r23 = CPyDef_update___find_targets_recursive(cpy_r_manager, cpy_r_graph, cpy_r_triggered, cpy_r_deps, cpy_r_up_to_date_modules);
    CPy_DECREF(cpy_r_triggered);
    if (unlikely(cpy_r_r23.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 856, CPyStatic_update___globals);
        goto CPyL100;
    }
    cpy_r_r24 = cpy_r_r23.f0;
    CPy_INCREF(cpy_r_r24);
    cpy_r_todo = cpy_r_r24;
    cpy_r_r25 = cpy_r_r23.f1;
    CPy_INCREF(cpy_r_r25);
    cpy_r_unloaded = cpy_r_r25;
    cpy_r_r26 = cpy_r_r23.f2;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r23.f0);
    CPy_DECREF(cpy_r_r23.f1);
    CPy_DECREF(cpy_r_r23.f2);
    cpy_r_stale_protos = cpy_r_r26;
    cpy_r_r27 = CPyModule_builtins;
    cpy_r_r28 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 860, CPyStatic_update___globals);
        goto CPyL101;
    }
    PyObject *cpy_r_r30[1] = {cpy_r_unloaded};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_r29, cpy_r_r31, 1, 0);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 860, CPyStatic_update___globals);
        goto CPyL101;
    }
    CPy_DECREF(cpy_r_unloaded);
    if (likely(PyList_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 860, CPyStatic_update___globals, "list", cpy_r_r32);
        goto CPyL102;
    }
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r33)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = PyList_New(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 860, CPyStatic_update___globals);
        goto CPyL103;
    }
    cpy_r_r37 = 0;
CPyL22: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r33)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r40;
    if (!cpy_r_r41) goto CPyL104;
    cpy_r_r42 = CPyList_GetItemUnsafe(cpy_r_r33, cpy_r_r37);
    if (likely(PyUnicode_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 860, CPyStatic_update___globals, "str", cpy_r_r42);
        goto CPyL105;
    }
    cpy_r_id = cpy_r_r43;
    cpy_r_r44 = CPyDict_GetItem(cpy_r_graph, cpy_r_id);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 860, CPyStatic_update___globals);
        goto CPyL106;
    }
    if (likely(Py_TYPE(cpy_r_r44) == CPyType_mypy___build___State))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 860, CPyStatic_update___globals, "mypy.build.State", cpy_r_r44);
        goto CPyL106;
    }
    cpy_r_r46 = ((mypy___build___StateObject *)cpy_r_r45)->_xpath;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47.f0 = cpy_r_id;
    cpy_r_r47.f1 = cpy_r_r46;
    CPy_INCREF(cpy_r_r47.f0);
    CPy_INCREF(cpy_r_r47.f1);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = PyTuple_New(2);
    if (unlikely(cpy_r_r48 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6757 = cpy_r_r47.f0;
    PyTuple_SET_ITEM(cpy_r_r48, 0, __tmp6757);
    PyObject *__tmp6758 = cpy_r_r47.f1;
    PyTuple_SET_ITEM(cpy_r_r48, 1, __tmp6758);
    cpy_r_r49 = CPyList_SetItemUnsafe(cpy_r_r36, cpy_r_r37, cpy_r_r48);
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 860, CPyStatic_update___globals);
        goto CPyL105;
    }
    cpy_r_r50 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r50;
    goto CPyL22;
CPyL28: ;
    cpy_r_r51 = CPyList_Extend(cpy_r_remaining_modules, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 860, CPyStatic_update___globals);
        goto CPyL102;
    } else
        goto CPyL107;
CPyL29: ;
    cpy_r_r52 = PyObject_GetIter(cpy_r_targets_with_errors);
    CPy_DECREF(cpy_r_targets_with_errors);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 863, CPyStatic_update___globals);
        goto CPyL108;
    }
CPyL30: ;
    cpy_r_r53 = PyIter_Next(cpy_r_r52);
    if (cpy_r_r53 == NULL) goto CPyL109;
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 863, CPyStatic_update___globals, "str", cpy_r_r53);
        goto CPyL110;
    }
    cpy_r_target = cpy_r_r54;
    cpy_r_r55 = CPyDef_mypy___util___module_prefix(cpy_r_graph, cpy_r_target);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 864, CPyStatic_update___globals);
        goto CPyL111;
    }
    cpy_r_id_2 = cpy_r_r55;
    cpy_r_r56 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r57 = cpy_r_id_2 != cpy_r_r56;
    if (!cpy_r_r57) goto CPyL112;
    CPy_INCREF(cpy_r_id_2);
    if (likely(cpy_r_id_2 != Py_None))
        cpy_r_r58 = cpy_r_id_2;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 865, CPyStatic_update___globals, "str", cpy_r_id_2);
        goto CPyL113;
    }
    cpy_r_r59 = PySet_Contains(cpy_r_up_to_date_modules, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 865, CPyStatic_update___globals);
        goto CPyL113;
    }
    cpy_r_r61 = cpy_r_r59;
    cpy_r_r62 = cpy_r_r61 ^ 1;
    if (!cpy_r_r62) goto CPyL112;
    CPy_INCREF(cpy_r_id_2);
    if (likely(cpy_r_id_2 != Py_None))
        cpy_r_r63 = cpy_r_id_2;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 866, CPyStatic_update___globals, "str", cpy_r_id_2);
        goto CPyL113;
    }
    cpy_r_r64 = PyDict_Contains(cpy_r_todo, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 866, CPyStatic_update___globals);
        goto CPyL113;
    }
    cpy_r_r66 = cpy_r_r64;
    cpy_r_r67 = cpy_r_r66 ^ 1;
    if (!cpy_r_r67) goto CPyL43;
    cpy_r_r68 = PySet_New(NULL);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 867, CPyStatic_update___globals);
        goto CPyL113;
    }
    CPy_INCREF(cpy_r_id_2);
    if (likely(cpy_r_id_2 != Py_None))
        cpy_r_r69 = cpy_r_id_2;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 867, CPyStatic_update___globals, "str", cpy_r_id_2);
        goto CPyL114;
    }
    cpy_r_r70 = CPyDict_SetItem(cpy_r_todo, cpy_r_r69, cpy_r_r68);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 867, CPyStatic_update___globals);
        goto CPyL113;
    }
CPyL43: ;
    cpy_r_r72 = CPyStatics[5389]; /* 'process target with error: ' */
    cpy_r_r73 = CPyStr_Build(2, cpy_r_r72, cpy_r_target);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 868, CPyStatic_update___globals);
        goto CPyL113;
    }
    cpy_r_r74 = PyTuple_Pack(1, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 868, CPyStatic_update___globals);
        goto CPyL113;
    }
    cpy_r_r75 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_manager, cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 868, CPyStatic_update___globals);
        goto CPyL113;
    }
    cpy_r_r76 = CPyDef_update___lookup_target(cpy_r_manager, cpy_r_target);
    CPy_DECREF(cpy_r_target);
    if (unlikely(cpy_r_r76.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 869, CPyStatic_update___globals);
        goto CPyL115;
    }
    cpy_r_r77 = cpy_r_r76.f0;
    CPy_INCREF(cpy_r_r77);
    cpy_r_more_nodes = cpy_r_r77;
    cpy_r_r78 = cpy_r_r76.f1;
    CPy_INCREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r76.f0);
    CPy_DECREF(cpy_r_r76.f1);
    cpy_r__ = cpy_r_r78;
    CPy_DECREF(cpy_r__);
    if (likely(cpy_r_id_2 != Py_None))
        cpy_r_r79 = cpy_r_id_2;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 870, CPyStatic_update___globals, "str", cpy_r_id_2);
        goto CPyL116;
    }
    cpy_r_r80 = CPyDict_GetItem(cpy_r_todo, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 870, CPyStatic_update___globals);
        goto CPyL116;
    }
    if (likely(PySet_Check(cpy_r_r80)))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 870, CPyStatic_update___globals, "set", cpy_r_r80);
        goto CPyL116;
    }
    cpy_r_r82 = _PySet_Update(cpy_r_r81, cpy_r_more_nodes);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_more_nodes);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 870, CPyStatic_update___globals);
        goto CPyL110;
    } else
        goto CPyL30;
CPyL51: ;
    cpy_r_r84 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 863, CPyStatic_update___globals);
        goto CPyL108;
    }
    cpy_r_r85 = PySet_New(NULL);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 871, CPyStatic_update___globals);
        goto CPyL108;
    }
    cpy_r_triggered = cpy_r_r85;
    cpy_r_r86 = PyObject_GetIter(cpy_r_stale_protos);
    CPy_DECREF(cpy_r_stale_protos);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 875, CPyStatic_update___globals);
        goto CPyL117;
    }
CPyL54: ;
    cpy_r_r87 = PyIter_Next(cpy_r_r86);
    if (cpy_r_r87 == NULL) goto CPyL118;
    if (likely((Py_TYPE(cpy_r_r87) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r87) == CPyType_nodes___TypeInfo)))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 875, CPyStatic_update___globals, "mypy.nodes.TypeInfo", cpy_r_r87);
        goto CPyL119;
    }
    cpy_r_info = cpy_r_r88;
    cpy_r_r89 = CPyStatic_typestate___type_state;
    if (unlikely(cpy_r_r89 == NULL)) {
        goto CPyL120;
    } else
        goto CPyL59;
CPyL57: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"type_state\" was not set");
    cpy_r_r90 = 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 876, CPyStatic_update___globals);
        goto CPyL93;
    }
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r91 = CPyDef_typestate___TypeState___reset_subtype_caches_for(cpy_r_r89, cpy_r_info);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 876, CPyStatic_update___globals);
        goto CPyL119;
    } else
        goto CPyL54;
CPyL60: ;
    cpy_r_r92 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 875, CPyStatic_update___globals);
        goto CPyL117;
    }
    cpy_r_r93 = CPyDict_ItemsView(cpy_r_todo);
    CPy_DECREF(cpy_r_todo);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 879, CPyStatic_update___globals);
        goto CPyL121;
    }
    cpy_r_r94 = CPyDef_update_____mypyc_lambda__0_propagate_changes_using_dependencies_obj();
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 879, CPyStatic_update___globals);
        goto CPyL122;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject *)cpy_r_r94)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject *)cpy_r_r94)->___mypyc_env__);
    }
    ((mypy___server___update_____mypyc_lambda__0_propagate_changes_using_dependencies_objObject *)cpy_r_r94)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r95 = 1;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 879, CPyStatic_update___globals);
        goto CPyL123;
    }
    cpy_r_r96 = CPyModule_builtins;
    cpy_r_r97 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r98 = CPyObject_GetAttr(cpy_r_r96, cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 879, CPyStatic_update___globals);
        goto CPyL123;
    }
    PyObject *cpy_r_r99[2] = {cpy_r_r93, cpy_r_r94};
    cpy_r_r100 = (PyObject **)&cpy_r_r99;
    cpy_r_r101 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r102 = _PyObject_Vectorcall(cpy_r_r98, cpy_r_r100, 1, cpy_r_r101);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 879, CPyStatic_update___globals);
        goto CPyL123;
    }
    CPy_DECREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r94);
    if (likely(PyList_Check(cpy_r_r102)))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 879, CPyStatic_update___globals, "list", cpy_r_r102);
        goto CPyL121;
    }
    cpy_r_r104 = 0;
CPyL68: ;
    cpy_r_r105 = (CPyPtr)&((PyVarObject *)cpy_r_r103)->ob_size;
    cpy_r_r106 = *(int64_t *)cpy_r_r105;
    cpy_r_r107 = cpy_r_r106 << 1;
    cpy_r_r108 = (Py_ssize_t)cpy_r_r104 < (Py_ssize_t)cpy_r_r107;
    if (!cpy_r_r108) goto CPyL124;
    cpy_r_r109 = CPyList_GetItemUnsafe(cpy_r_r103, cpy_r_r104);
    PyObject *__tmp6759;
    if (unlikely(!(PyTuple_Check(cpy_r_r109) && PyTuple_GET_SIZE(cpy_r_r109) == 2))) {
        __tmp6759 = NULL;
        goto __LL6760;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r109, 0))))
        __tmp6759 = PyTuple_GET_ITEM(cpy_r_r109, 0);
    else {
        __tmp6759 = NULL;
    }
    if (__tmp6759 == NULL) goto __LL6760;
    if (likely(PySet_Check(PyTuple_GET_ITEM(cpy_r_r109, 1))))
        __tmp6759 = PyTuple_GET_ITEM(cpy_r_r109, 1);
    else {
        __tmp6759 = NULL;
    }
    if (__tmp6759 == NULL) goto __LL6760;
    __tmp6759 = cpy_r_r109;
__LL6760: ;
    if (unlikely(__tmp6759 == NULL)) {
        CPy_TypeError("tuple[str, set]", cpy_r_r109); cpy_r_r110 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6761 = PyTuple_GET_ITEM(cpy_r_r109, 0);
        CPy_INCREF(__tmp6761);
        PyObject *__tmp6762;
        if (likely(PyUnicode_Check(__tmp6761)))
            __tmp6762 = __tmp6761;
        else {
            CPy_TypeError("str", __tmp6761); 
            __tmp6762 = NULL;
        }
        cpy_r_r110.f0 = __tmp6762;
        PyObject *__tmp6763 = PyTuple_GET_ITEM(cpy_r_r109, 1);
        CPy_INCREF(__tmp6763);
        PyObject *__tmp6764;
        if (likely(PySet_Check(__tmp6763)))
            __tmp6764 = __tmp6763;
        else {
            CPy_TypeError("set", __tmp6763); 
            __tmp6764 = NULL;
        }
        cpy_r_r110.f1 = __tmp6764;
    }
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r110.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 879, CPyStatic_update___globals);
        goto CPyL125;
    }
    cpy_r_r111 = cpy_r_r110.f0;
    CPy_INCREF(cpy_r_r111);
    cpy_r_id_2 = cpy_r_r111;
    cpy_r_r112 = cpy_r_r110.f1;
    CPy_INCREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r110.f0);
    CPy_DECREF(cpy_r_r110.f1);
    cpy_r_nodes = cpy_r_r112;
    CPy_INCREF(cpy_r_id_2);
    if (likely(cpy_r_id_2 != Py_None))
        cpy_r_r113 = cpy_r_id_2;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 880, CPyStatic_update___globals, "str", cpy_r_id_2);
        goto CPyL126;
    }
    cpy_r_r114 = PySet_Contains(cpy_r_up_to_date_modules, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r115 = cpy_r_r114 >= 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 880, CPyStatic_update___globals);
        goto CPyL126;
    }
    cpy_r_r116 = cpy_r_r114;
    cpy_r_r117 = cpy_r_r116 ^ 1;
    if (cpy_r_r117) {
        goto CPyL75;
    } else
        goto CPyL127;
CPyL73: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r118 = 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 880, CPyStatic_update___globals);
        goto CPyL93;
    }
    CPy_Unreachable();
CPyL75: ;
    if (likely(cpy_r_id_2 != Py_None))
        cpy_r_r119 = cpy_r_id_2;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 881, CPyStatic_update___globals, "str", cpy_r_id_2);
        goto CPyL128;
    }
    cpy_r_r120 = CPyDef_update___reprocess_nodes(cpy_r_manager, cpy_r_graph, cpy_r_r119, cpy_r_nodes, cpy_r_deps, cpy_r_processed_targets);
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_nodes);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 881, CPyStatic_update___globals);
        goto CPyL125;
    }
    cpy_r_r121 = PyNumber_InPlaceOr(cpy_r_triggered, cpy_r_r120);
    CPy_DECREF(cpy_r_triggered);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 881, CPyStatic_update___globals);
        goto CPyL129;
    }
    if (likely(PySet_Check(cpy_r_r121)))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 881, CPyStatic_update___globals, "set", cpy_r_r121);
        goto CPyL129;
    }
    cpy_r_triggered = cpy_r_r122;
    cpy_r_r123 = cpy_r_r104 + 2;
    cpy_r_r104 = cpy_r_r123;
    goto CPyL68;
CPyL81: ;
    cpy_r_r124 = PySet_New(NULL);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 885, CPyStatic_update___globals);
        goto CPyL130;
    }
    cpy_r_up_to_date_modules = cpy_r_r124;
    cpy_r_r125 = PySet_New(NULL);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 886, CPyStatic_update___globals);
        goto CPyL121;
    }
    cpy_r_targets_with_errors = cpy_r_r125;
    cpy_r_r126 = CPyDef_update___is_verbose(cpy_r_manager);
    if (unlikely(cpy_r_r126 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 887, CPyStatic_update___globals);
        goto CPyL96;
    }
    if (!cpy_r_r126) goto CPyL3;
    cpy_r_r127 = CPyStatics[163]; /* '' */
    cpy_r_r128 = CPyStatics[5374]; /* 'triggered: ' */
    cpy_r_r129 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r130 = PySequence_List(cpy_r_triggered);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 888, CPyStatic_update___globals);
        goto CPyL96;
    }
    cpy_r_r131 = CPyStatics[163]; /* '' */
    cpy_r_r132 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r133[3] = {cpy_r_r129, cpy_r_r130, cpy_r_r131};
    cpy_r_r134 = (PyObject **)&cpy_r_r133;
    cpy_r_r135 = PyObject_VectorcallMethod(cpy_r_r132, cpy_r_r134, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 888, CPyStatic_update___globals);
        goto CPyL131;
    }
    CPy_DECREF(cpy_r_r130);
    if (likely(PyUnicode_Check(cpy_r_r135)))
        cpy_r_r136 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 888, CPyStatic_update___globals, "str", cpy_r_r135);
        goto CPyL96;
    }
    cpy_r_r137 = PyList_New(2);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 888, CPyStatic_update___globals);
        goto CPyL132;
    }
    cpy_r_r138 = (CPyPtr)&((PyListObject *)cpy_r_r137)->ob_item;
    cpy_r_r139 = *(CPyPtr *)cpy_r_r138;
    CPy_INCREF(cpy_r_r128);
    *(PyObject * *)cpy_r_r139 = cpy_r_r128;
    cpy_r_r140 = cpy_r_r139 + 8;
    *(PyObject * *)cpy_r_r140 = cpy_r_r136;
    cpy_r_r141 = PyUnicode_Join(cpy_r_r127, cpy_r_r137);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 888, CPyStatic_update___globals);
        goto CPyL96;
    }
    cpy_r_r142 = PyTuple_Pack(1, cpy_r_r141);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 888, CPyStatic_update___globals);
        goto CPyL96;
    }
    cpy_r_r143 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_manager, cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r143 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 888, CPyStatic_update___globals);
        goto CPyL96;
    } else
        goto CPyL3;
CPyL92: ;
    return cpy_r_remaining_modules;
CPyL93: ;
    cpy_r_r144 = NULL;
    return cpy_r_r144;
CPyL94: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    goto CPyL93;
CPyL95: ;
    CPy_INCREF(cpy_r_triggered);
    CPy_INCREF(cpy_r_up_to_date_modules);
    CPy_INCREF(cpy_r_targets_with_errors);
    goto CPyL3;
CPyL96: ;
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_targets_with_errors);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    goto CPyL93;
CPyL97: ;
    CPy_DECREF(cpy_r_triggered);
    CPy_DECREF(cpy_r_up_to_date_modules);
    CPy_DECREF(cpy_r_targets_with_errors);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_num_iter);
    goto CPyL92;
CPyL98: ;
    CPy_DECREF(cpy_r_triggered);
    CPy_DECREF(cpy_r_up_to_date_modules);
    CPy_DECREF(cpy_r_targets_with_errors);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_num_iter);
    CPy_DECREF(cpy_r_remaining_modules);
    goto CPyL10;
CPyL99: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL93;
CPyL100: ;
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_targets_with_errors);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    goto CPyL93;
CPyL101: ;
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_targets_with_errors);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    CPy_DecRef(cpy_r_unloaded);
    CPy_DecRef(cpy_r_stale_protos);
    goto CPyL93;
CPyL102: ;
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_targets_with_errors);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    CPy_DecRef(cpy_r_stale_protos);
    goto CPyL93;
CPyL103: ;
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_targets_with_errors);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_r33);
    goto CPyL93;
CPyL104: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL28;
CPyL105: ;
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_targets_with_errors);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r36);
    goto CPyL93;
CPyL106: ;
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_targets_with_errors);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_id);
    goto CPyL93;
CPyL107: ;
    CPy_DECREF(cpy_r_r51);
    goto CPyL29;
CPyL108: ;
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    CPy_DecRef(cpy_r_stale_protos);
    goto CPyL93;
CPyL109: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL51;
CPyL110: ;
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_r52);
    goto CPyL93;
CPyL111: ;
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_target);
    goto CPyL93;
CPyL112: ;
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_id_2);
    goto CPyL30;
CPyL113: ;
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_id_2);
    goto CPyL93;
CPyL114: ;
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_id_2);
    CPy_DecRef(cpy_r_r68);
    goto CPyL93;
CPyL115: ;
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_id_2);
    goto CPyL93;
CPyL116: ;
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_more_nodes);
    goto CPyL93;
CPyL117: ;
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    goto CPyL93;
CPyL118: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL60;
CPyL119: ;
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    CPy_DecRef(cpy_r_r86);
    goto CPyL93;
CPyL120: ;
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_todo);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_info);
    goto CPyL57;
CPyL121: ;
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    goto CPyL93;
CPyL122: ;
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_r93);
    goto CPyL93;
CPyL123: ;
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r94);
    goto CPyL93;
CPyL124: ;
    CPy_DECREF(cpy_r_up_to_date_modules);
    CPy_DECREF(cpy_r_r103);
    goto CPyL81;
CPyL125: ;
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_r103);
    goto CPyL93;
CPyL126: ;
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_id_2);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_nodes);
    goto CPyL93;
CPyL127: ;
    CPy_DECREF(cpy_r_triggered);
    CPy_DECREF(cpy_r_up_to_date_modules);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_num_iter);
    CPy_DECREF(cpy_r_remaining_modules);
    CPy_DECREF(cpy_r_id_2);
    CPy_DECREF(cpy_r_r103);
    CPy_DECREF(cpy_r_nodes);
    goto CPyL73;
CPyL128: ;
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_nodes);
    goto CPyL93;
CPyL129: ;
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_r103);
    goto CPyL93;
CPyL130: ;
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    goto CPyL93;
CPyL131: ;
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_targets_with_errors);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_r130);
    goto CPyL93;
CPyL132: ;
    CPy_DecRef(cpy_r_triggered);
    CPy_DecRef(cpy_r_up_to_date_modules);
    CPy_DecRef(cpy_r_targets_with_errors);
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_num_iter);
    CPy_DecRef(cpy_r_remaining_modules);
    CPy_DecRef(cpy_r_r136);
    goto CPyL93;
}

PyObject *CPyPy_update___propagate_changes_using_dependencies(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"manager", "graph", "deps", "triggered", "up_to_date_modules", "targets_with_errors", "processed_targets", 0};
    static CPyArg_Parser parser = {"OOOOOOO:propagate_changes_using_dependencies", kwlist, 0};
    PyObject *obj_manager;
    PyObject *obj_graph;
    PyObject *obj_deps;
    PyObject *obj_triggered;
    PyObject *obj_up_to_date_modules;
    PyObject *obj_targets_with_errors;
    PyObject *obj_processed_targets;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_manager, &obj_graph, &obj_deps, &obj_triggered, &obj_up_to_date_modules, &obj_targets_with_errors, &obj_processed_targets)) {
        return NULL;
    }
    PyObject *arg_manager;
    if (likely(Py_TYPE(obj_manager) == CPyType_mypy___build___BuildManager))
        arg_manager = obj_manager;
    else {
        CPy_TypeError("mypy.build.BuildManager", obj_manager); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_deps;
    if (likely(PyDict_Check(obj_deps)))
        arg_deps = obj_deps;
    else {
        CPy_TypeError("dict", obj_deps); 
        goto fail;
    }
    PyObject *arg_triggered;
    if (likely(PySet_Check(obj_triggered)))
        arg_triggered = obj_triggered;
    else {
        CPy_TypeError("set", obj_triggered); 
        goto fail;
    }
    PyObject *arg_up_to_date_modules;
    if (likely(PySet_Check(obj_up_to_date_modules)))
        arg_up_to_date_modules = obj_up_to_date_modules;
    else {
        CPy_TypeError("set", obj_up_to_date_modules); 
        goto fail;
    }
    PyObject *arg_targets_with_errors;
    if (likely(PySet_Check(obj_targets_with_errors)))
        arg_targets_with_errors = obj_targets_with_errors;
    else {
        CPy_TypeError("set", obj_targets_with_errors); 
        goto fail;
    }
    PyObject *arg_processed_targets;
    if (likely(PyList_Check(obj_processed_targets)))
        arg_processed_targets = obj_processed_targets;
    else {
        CPy_TypeError("list", obj_processed_targets); 
        goto fail;
    }
    PyObject *retval = CPyDef_update___propagate_changes_using_dependencies(arg_manager, arg_graph, arg_deps, arg_triggered, arg_up_to_date_modules, arg_targets_with_errors, arg_processed_targets);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "propagate_changes_using_dependencies", 828, CPyStatic_update___globals);
    return NULL;
}

tuple_T3OOO CPyDef_update___find_targets_recursive(PyObject *cpy_r_manager, PyObject *cpy_r_graph, PyObject *cpy_r_triggers, PyObject *cpy_r_deps, PyObject *cpy_r_up_to_date_modules) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_worklist;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_processed;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_stale_protos;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_unloaded_files;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_current;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_module_id;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
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
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    tuple_T2OO cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_deferred;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_stale_proto;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    tuple_T3OOO cpy_r_r80;
    tuple_T3OOO cpy_r_r81;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 906, CPyStatic_update___globals);
        goto CPyL65;
    }
    cpy_r_result = cpy_r_r0;
    CPy_INCREF(cpy_r_triggers);
    cpy_r_worklist = cpy_r_triggers;
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 908, CPyStatic_update___globals);
        goto CPyL66;
    }
    cpy_r_processed = cpy_r_r1;
    cpy_r_r2 = PySet_New(NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 909, CPyStatic_update___globals);
        goto CPyL67;
    }
    cpy_r_stale_protos = cpy_r_r2;
    cpy_r_r3 = PySet_New(NULL);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 910, CPyStatic_update___globals);
        goto CPyL68;
    }
    cpy_r_unloaded_files = cpy_r_r3;
CPyL5: ;
    cpy_r_r4 = PyObject_IsTrue(cpy_r_worklist);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 907, CPyStatic_update___globals);
        goto CPyL69;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL70;
    cpy_r_r7 = PyNumber_InPlaceOr(cpy_r_processed, cpy_r_worklist);
    CPy_DECREF(cpy_r_processed);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 916, CPyStatic_update___globals);
        goto CPyL71;
    }
    if (likely(PySet_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 916, CPyStatic_update___globals, "set", cpy_r_r7);
        goto CPyL71;
    }
    cpy_r_processed = cpy_r_r8;
    cpy_r_current = cpy_r_worklist;
    cpy_r_r9 = PySet_New(NULL);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 918, CPyStatic_update___globals);
        goto CPyL72;
    }
    cpy_r_worklist = cpy_r_r9;
    cpy_r_r10 = PyObject_GetIter(cpy_r_current);
    CPy_DECREF(cpy_r_current);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 919, CPyStatic_update___globals);
        goto CPyL69;
    }
CPyL11: ;
    cpy_r_r11 = PyIter_Next(cpy_r_r10);
    if (cpy_r_r11 == NULL) goto CPyL73;
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 919, CPyStatic_update___globals, "str", cpy_r_r11);
        goto CPyL74;
    }
    cpy_r_target = cpy_r_r12;
    cpy_r_r13 = CPyStatics[2465]; /* '<' */
    cpy_r_r14 = CPyStr_Startswith(cpy_r_target, cpy_r_r13);
    if (!cpy_r_r14) goto CPyL29;
    cpy_r_r15 = CPyDef_target___trigger_to_target(cpy_r_target);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 921, CPyStatic_update___globals);
        goto CPyL75;
    }
    cpy_r_r16 = CPyDef_mypy___util___module_prefix(cpy_r_graph, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 921, CPyStatic_update___globals);
        goto CPyL75;
    }
    cpy_r_module_id = cpy_r_r16;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_module_id != cpy_r_r17;
    if (!cpy_r_r18) goto CPyL76;
    CPy_INCREF(cpy_r_module_id);
    if (likely(cpy_r_module_id != Py_None))
        cpy_r_r19 = cpy_r_module_id;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 921, CPyStatic_update___globals, "str", cpy_r_module_id);
        goto CPyL77;
    }
    cpy_r_r20 = CPyStr_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (!cpy_r_r20) goto CPyL76;
    if (likely(cpy_r_module_id != Py_None))
        cpy_r_r21 = cpy_r_module_id;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 923, CPyStatic_update___globals, "str", cpy_r_module_id);
        goto CPyL75;
    }
    cpy_r_r22 = CPyDef_update___ensure_deps_loaded(cpy_r_r21, cpy_r_deps, cpy_r_graph);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 923, CPyStatic_update___globals);
        goto CPyL75;
    }
CPyL21: ;
    cpy_r_r23 = PySet_New(NULL);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 925, CPyStatic_update___globals);
        goto CPyL75;
    }
    cpy_r_r24 = CPyDict_Get(cpy_r_deps, cpy_r_target, cpy_r_r23);
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 925, CPyStatic_update___globals);
        goto CPyL74;
    }
    if (likely(PySet_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 925, CPyStatic_update___globals, "set", cpy_r_r24);
        goto CPyL74;
    }
    cpy_r_r26 = PyNumber_Subtract(cpy_r_r25, cpy_r_processed);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 925, CPyStatic_update___globals);
        goto CPyL74;
    }
    if (likely(PySet_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 925, CPyStatic_update___globals, "set", cpy_r_r26);
        goto CPyL74;
    }
    cpy_r_r28 = PyNumber_InPlaceOr(cpy_r_worklist, cpy_r_r27);
    CPy_DECREF(cpy_r_worklist);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 925, CPyStatic_update___globals);
        goto CPyL78;
    }
    if (likely(PySet_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 925, CPyStatic_update___globals, "set", cpy_r_r28);
        goto CPyL78;
    }
    cpy_r_worklist = cpy_r_r29;
    goto CPyL11;
CPyL29: ;
    cpy_r_r30 = CPyDef_mypy___util___module_prefix(cpy_r_graph, cpy_r_target);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 927, CPyStatic_update___globals);
        goto CPyL75;
    }
    cpy_r_module_id = cpy_r_r30;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_module_id == cpy_r_r31;
    if (cpy_r_r32) goto CPyL79;
    CPy_INCREF(cpy_r_module_id);
    if (likely(cpy_r_module_id != Py_None))
        cpy_r_r33 = cpy_r_module_id;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 931, CPyStatic_update___globals, "str", cpy_r_module_id);
        goto CPyL77;
    }
    cpy_r_r34 = PySet_Contains(cpy_r_up_to_date_modules, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 931, CPyStatic_update___globals);
        goto CPyL77;
    }
    cpy_r_r36 = cpy_r_r34;
    if (cpy_r_r36) goto CPyL79;
    CPy_INCREF(cpy_r_module_id);
    if (likely(cpy_r_module_id != Py_None))
        cpy_r_r37 = cpy_r_module_id;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 935, CPyStatic_update___globals, "str", cpy_r_module_id);
        goto CPyL77;
    }
    cpy_r_r38 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_modules;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = PyDict_Contains(cpy_r_r38, cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 935, CPyStatic_update___globals);
        goto CPyL77;
    }
    cpy_r_r41 = cpy_r_r39;
    cpy_r_r42 = cpy_r_r41 ^ 1;
    if (cpy_r_r42) goto CPyL80;
    cpy_r_r43 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_modules;
    CPy_INCREF(cpy_r_r43);
    CPy_INCREF(cpy_r_module_id);
    if (likely(cpy_r_module_id != Py_None))
        cpy_r_r44 = cpy_r_module_id;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 936, CPyStatic_update___globals, "str", cpy_r_module_id);
        goto CPyL81;
    }
    cpy_r_r45 = CPyDict_GetItem(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 936, CPyStatic_update___globals);
        goto CPyL77;
    }
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_nodes___MypyFile))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 936, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_r45);
        goto CPyL77;
    }
    cpy_r_r47 = ((mypy___nodes___MypyFileObject *)cpy_r_r46)->_is_cache_skeleton;
    CPy_DECREF(cpy_r_r46);
    if (cpy_r_r47) {
        goto CPyL80;
    } else
        goto CPyL43;
CPyL41: ;
    if (likely(cpy_r_module_id != Py_None))
        cpy_r_r48 = cpy_r_module_id;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 941, CPyStatic_update___globals, "str", cpy_r_module_id);
        goto CPyL74;
    }
    cpy_r_r49 = PySet_Add(cpy_r_unloaded_files, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 941, CPyStatic_update___globals);
        goto CPyL74;
    } else
        goto CPyL11;
CPyL43: ;
    CPy_INCREF(cpy_r_module_id);
    if (likely(cpy_r_module_id != Py_None))
        cpy_r_r51 = cpy_r_module_id;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 944, CPyStatic_update___globals, "str", cpy_r_module_id);
        goto CPyL77;
    }
    cpy_r_r52 = PyDict_Contains(cpy_r_result, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 944, CPyStatic_update___globals);
        goto CPyL77;
    }
    cpy_r_r54 = cpy_r_r52;
    cpy_r_r55 = cpy_r_r54 ^ 1;
    if (!cpy_r_r55) goto CPyL49;
    cpy_r_r56 = PySet_New(NULL);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 945, CPyStatic_update___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_module_id);
    if (likely(cpy_r_module_id != Py_None))
        cpy_r_r57 = cpy_r_module_id;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 945, CPyStatic_update___globals, "str", cpy_r_module_id);
        goto CPyL82;
    }
    cpy_r_r58 = CPyDict_SetItem(cpy_r_result, cpy_r_r57, cpy_r_r56);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 945, CPyStatic_update___globals);
        goto CPyL77;
    }
CPyL49: ;
    cpy_r_r60 = CPyStatics[5390]; /* 'process: ' */
    cpy_r_r61 = CPyStr_Build(2, cpy_r_r60, cpy_r_target);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 946, CPyStatic_update___globals);
        goto CPyL77;
    }
    cpy_r_r62 = PyTuple_Pack(1, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 946, CPyStatic_update___globals);
        goto CPyL77;
    }
    cpy_r_r63 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_manager, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 946, CPyStatic_update___globals);
        goto CPyL77;
    }
    cpy_r_r64 = CPyDef_update___lookup_target(cpy_r_manager, cpy_r_target);
    CPy_DECREF(cpy_r_target);
    if (unlikely(cpy_r_r64.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 947, CPyStatic_update___globals);
        goto CPyL83;
    }
    cpy_r_r65 = cpy_r_r64.f0;
    CPy_INCREF(cpy_r_r65);
    cpy_r_deferred = cpy_r_r65;
    cpy_r_r66 = cpy_r_r64.f1;
    CPy_INCREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r64.f0);
    CPy_DECREF(cpy_r_r64.f1);
    cpy_r_stale_proto = cpy_r_r66;
    cpy_r_r67 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r68 = cpy_r_stale_proto != cpy_r_r67;
    if (!cpy_r_r68) goto CPyL84;
    CPy_INCREF(cpy_r_stale_proto);
    if (likely(cpy_r_stale_proto != Py_None))
        cpy_r_r69 = cpy_r_stale_proto;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 947, CPyStatic_update___globals, "mypy.nodes.TypeInfo", cpy_r_stale_proto);
        goto CPyL85;
    }
    cpy_r_r70 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 947, CPyStatic_update___globals);
        goto CPyL85;
    }
    if (!cpy_r_r70) goto CPyL84;
    if (likely(cpy_r_stale_proto != Py_None))
        cpy_r_r71 = cpy_r_stale_proto;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 949, CPyStatic_update___globals, "mypy.nodes.TypeInfo", cpy_r_stale_proto);
        goto CPyL86;
    }
    cpy_r_r72 = PySet_Add(cpy_r_stale_protos, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 949, CPyStatic_update___globals);
        goto CPyL86;
    }
CPyL59: ;
    if (likely(cpy_r_module_id != Py_None))
        cpy_r_r74 = cpy_r_module_id;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 950, CPyStatic_update___globals, "str", cpy_r_module_id);
        goto CPyL87;
    }
    cpy_r_r75 = CPyDict_GetItem(cpy_r_result, cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 950, CPyStatic_update___globals);
        goto CPyL87;
    }
    if (likely(PySet_Check(cpy_r_r75)))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_targets_recursive", 950, CPyStatic_update___globals, "set", cpy_r_r75);
        goto CPyL87;
    }
    cpy_r_r77 = _PySet_Update(cpy_r_r76, cpy_r_deferred);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_deferred);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 950, CPyStatic_update___globals);
        goto CPyL74;
    } else
        goto CPyL11;
CPyL63: ;
    cpy_r_r79 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 919, CPyStatic_update___globals);
        goto CPyL69;
    } else
        goto CPyL5;
CPyL64: ;
    cpy_r_r80.f0 = cpy_r_result;
    cpy_r_r80.f1 = cpy_r_unloaded_files;
    cpy_r_r80.f2 = cpy_r_stale_protos;
    CPy_INCREF(cpy_r_r80.f0);
    CPy_INCREF(cpy_r_r80.f1);
    CPy_INCREF(cpy_r_r80.f2);
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_unloaded_files);
    CPy_DECREF(cpy_r_stale_protos);
    return cpy_r_r80;
CPyL65: ;
    tuple_T3OOO __tmp6765 = { NULL, NULL, NULL };
    cpy_r_r81 = __tmp6765;
    return cpy_r_r81;
CPyL66: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    goto CPyL65;
CPyL67: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_processed);
    goto CPyL65;
CPyL68: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_processed);
    CPy_DecRef(cpy_r_stale_protos);
    goto CPyL65;
CPyL69: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_processed);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_unloaded_files);
    goto CPyL65;
CPyL70: ;
    CPy_DECREF(cpy_r_worklist);
    CPy_DECREF(cpy_r_processed);
    goto CPyL64;
CPyL71: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_unloaded_files);
    goto CPyL65;
CPyL72: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_processed);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_unloaded_files);
    CPy_DecRef(cpy_r_current);
    goto CPyL65;
CPyL73: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL63;
CPyL74: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_processed);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_unloaded_files);
    CPy_DecRef(cpy_r_r10);
    goto CPyL65;
CPyL75: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_processed);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_unloaded_files);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_target);
    goto CPyL65;
CPyL76: ;
    CPy_DECREF(cpy_r_module_id);
    goto CPyL21;
CPyL77: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_processed);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_unloaded_files);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_module_id);
    goto CPyL65;
CPyL78: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_processed);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_unloaded_files);
    CPy_DecRef(cpy_r_r10);
    goto CPyL65;
CPyL79: ;
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_module_id);
    goto CPyL11;
CPyL80: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL41;
CPyL81: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_processed);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_unloaded_files);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_module_id);
    CPy_DecRef(cpy_r_r43);
    goto CPyL65;
CPyL82: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_processed);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_unloaded_files);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_module_id);
    CPy_DecRef(cpy_r_r56);
    goto CPyL65;
CPyL83: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_processed);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_unloaded_files);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_module_id);
    goto CPyL65;
CPyL84: ;
    CPy_DECREF(cpy_r_stale_proto);
    goto CPyL59;
CPyL85: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_processed);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_unloaded_files);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_module_id);
    CPy_DecRef(cpy_r_deferred);
    CPy_DecRef(cpy_r_stale_proto);
    goto CPyL65;
CPyL86: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_processed);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_unloaded_files);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_module_id);
    CPy_DecRef(cpy_r_deferred);
    goto CPyL65;
CPyL87: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_processed);
    CPy_DecRef(cpy_r_stale_protos);
    CPy_DecRef(cpy_r_unloaded_files);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_deferred);
    goto CPyL65;
}

PyObject *CPyPy_update___find_targets_recursive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"manager", "graph", "triggers", "deps", "up_to_date_modules", 0};
    static CPyArg_Parser parser = {"OOOOO:find_targets_recursive", kwlist, 0};
    PyObject *obj_manager;
    PyObject *obj_graph;
    PyObject *obj_triggers;
    PyObject *obj_deps;
    PyObject *obj_up_to_date_modules;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_manager, &obj_graph, &obj_triggers, &obj_deps, &obj_up_to_date_modules)) {
        return NULL;
    }
    PyObject *arg_manager;
    if (likely(Py_TYPE(obj_manager) == CPyType_mypy___build___BuildManager))
        arg_manager = obj_manager;
    else {
        CPy_TypeError("mypy.build.BuildManager", obj_manager); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_triggers;
    if (likely(PySet_Check(obj_triggers)))
        arg_triggers = obj_triggers;
    else {
        CPy_TypeError("set", obj_triggers); 
        goto fail;
    }
    PyObject *arg_deps;
    if (likely(PyDict_Check(obj_deps)))
        arg_deps = obj_deps;
    else {
        CPy_TypeError("dict", obj_deps); 
        goto fail;
    }
    PyObject *arg_up_to_date_modules;
    if (likely(PySet_Check(obj_up_to_date_modules)))
        arg_up_to_date_modules = obj_up_to_date_modules;
    else {
        CPy_TypeError("set", obj_up_to_date_modules); 
        goto fail;
    }
    tuple_T3OOO retval = CPyDef_update___find_targets_recursive(arg_manager, arg_graph, arg_triggers, arg_deps, arg_up_to_date_modules);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6766 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp6766);
    PyObject *__tmp6767 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp6767);
    PyObject *__tmp6768 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp6768);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "find_targets_recursive", 893, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___key_reprocess_nodes_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_update___key_reprocess_nodes_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_update___key_reprocess_nodes_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "__get__", -1, CPyStatic_update___globals);
    return NULL;
}

CPyTagged CPyDef_update___key_reprocess_nodes_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    cpy_r_r0 = ((mypy___server___update___key_reprocess_nodes_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "key", "key_reprocess_nodes_obj", "__mypyc_env__", 976, CPyStatic_update___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___server___update___reprocess_nodes_envObject *)cpy_r_r0)->_key;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'key' of 'reprocess_nodes_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "key", -1, CPyStatic_update___globals);
        goto CPyL13;
    }
CPyL2: ;
    cpy_r_key = cpy_r_r1;
    CPy_DECREF(cpy_r_key);
    cpy_r_r2 = CPySequenceTuple_GetItem(cpy_r_node, 0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "key", 980, CPyStatic_update___globals);
        goto CPyL13;
    }
    if (Py_TYPE(cpy_r_r2) == CPyType_nodes___FuncDef)
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL6769;
    if (Py_TYPE(cpy_r_r2) == CPyType_nodes___MypyFile)
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL6769;
    if (Py_TYPE(cpy_r_r2) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL6769;
    CPy_TypeErrorTraceback("mypy/server/update.py", "key", 980, CPyStatic_update___globals, "union[mypy.nodes.FuncDef, mypy.nodes.MypyFile, mypy.nodes.OverloadedFuncDef]", cpy_r_r2);
    goto CPyL13;
__LL6769: ;
    cpy_r_r4 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL7;
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_nodes___FuncDef))
        cpy_r_r8 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "key", 980, CPyStatic_update___globals, "mypy.nodes.FuncDef", cpy_r_r3);
        goto CPyL13;
    }
    cpy_r_r9 = ((mypy___nodes___FuncDefObject *)cpy_r_r8)->_line;
    CPyTagged_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9;
    goto CPyL12;
CPyL7: ;
    cpy_r_r11 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL10;
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_nodes___MypyFile))
        cpy_r_r15 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "key", 980, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_r3);
        goto CPyL13;
    }
    cpy_r_r16 = ((mypy___nodes___MypyFileObject *)cpy_r_r15)->_line;
    CPyTagged_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r10 = cpy_r_r16;
    goto CPyL12;
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r17 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "key", 980, CPyStatic_update___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r3);
        goto CPyL13;
    }
    cpy_r_r18 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r17)->_line;
    CPyTagged_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r10 = cpy_r_r18;
CPyL12: ;
    return cpy_r_r10;
CPyL13: ;
    cpy_r_r19 = CPY_INT_TAG;
    return cpy_r_r19;
}

PyObject *CPyPy_update___key_reprocess_nodes_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject * arg_node;
    if (likely(PyTuple_Check(obj_node)))
        arg_node = obj_node;
    else {
        CPy_TypeError("tuple", obj_node); 
        goto fail;
    }
    CPyTagged retval = CPyDef_update___key_reprocess_nodes_obj_____call__(arg___mypyc_self__, arg_node);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "key", 976, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___reprocess_nodes(PyObject *cpy_r_manager, PyObject *cpy_r_graph, PyObject *cpy_r_module_id, PyObject *cpy_r_nodeset, PyObject *cpy_r_deps, PyObject *cpy_r_processed_targets) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_file_node;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_old_symbols;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    tuple_T4CIOO cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_name;
    PyObject *cpy_r_names;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_old_symbols_snapshot;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_nodes;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_state;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_options;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_targets;
    CPyTagged cpy_r_r63;
    CPyPtr cpy_r_r64;
    int64_t cpy_r_r65;
    CPyTagged cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    CPyTagged cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyTagged cpy_r_r95;
    CPyPtr cpy_r_r96;
    int64_t cpy_r_r97;
    CPyTagged cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    CPyTagged cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_saved_attrs;
    CPyTagged cpy_r_r107;
    CPyPtr cpy_r_r108;
    int64_t cpy_r_r109;
    CPyTagged cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_deferred;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    CPyPtr cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    CPyPtr cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    CPyTagged cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_new_symbols;
    CPyTagged cpy_r_r143;
    int64_t cpy_r_r144;
    CPyTagged cpy_r_r145;
    PyObject *cpy_r_r146;
    tuple_T3CIO cpy_r_r147;
    CPyTagged cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_name_2;
    int32_t cpy_r_r152;
    char cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    char cpy_r_r159;
    char cpy_r_r160;
    char cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_checker;
    char cpy_r_r165;
    char cpy_r_r166;
    char cpy_r_r167;
    char cpy_r_r168;
    char cpy_r_more;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    int32_t cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_new_symbols_snapshot;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_changed;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_name_3;
    PyObject *cpy_r_r191;
    int32_t cpy_r_r192;
    char cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_new_triggered;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    char cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    cpy_r_r0 = CPyDef_update___reprocess_nodes_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 955, CPyStatic_update___globals);
        goto CPyL149;
    }
    cpy_r_r1 = PyDict_Contains(cpy_r_graph, cpy_r_module_id);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 967, CPyStatic_update___globals);
        goto CPyL150;
    }
    cpy_r_r3 = cpy_r_r1;
    cpy_r_r4 = cpy_r_r3 ^ 1;
    if (cpy_r_r4) {
        goto CPyL151;
    } else
        goto CPyL8;
CPyL3: ;
    cpy_r_r5 = CPyStatics[5391]; /* ' not in graph (blocking errors or deleted?)' */
    cpy_r_r6 = CPyStr_Build(2, cpy_r_module_id, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 968, CPyStatic_update___globals);
        goto CPyL149;
    }
    cpy_r_r7 = PyTuple_Pack(1, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 968, CPyStatic_update___globals);
        goto CPyL149;
    }
    cpy_r_r8 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_manager, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 968, CPyStatic_update___globals);
        goto CPyL149;
    }
    cpy_r_r9 = PySet_New(NULL);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 969, CPyStatic_update___globals);
        goto CPyL149;
    }
    return cpy_r_r9;
CPyL8: ;
    cpy_r_r10 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_modules;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r10, cpy_r_module_id);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 971, CPyStatic_update___globals);
        goto CPyL150;
    }
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_nodes___MypyFile))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 971, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_r11);
        goto CPyL150;
    }
    cpy_r_file_node = cpy_r_r12;
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_file_node, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 972, CPyStatic_update___globals);
        goto CPyL152;
    }
CPyL11: ;
    cpy_r_r14 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_names;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "reprocess_nodes", "MypyFile", "names", 972, CPyStatic_update___globals);
        goto CPyL153;
    }
    CPy_INCREF(cpy_r_r14);
CPyL12: ;
    cpy_r_r15 = CPyDef_update___find_symbol_tables_recursive(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 972, CPyStatic_update___globals);
        goto CPyL152;
    }
    cpy_r_old_symbols = cpy_r_r15;
    cpy_r_r16 = PyDict_New();
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 973, CPyStatic_update___globals);
        goto CPyL154;
    }
    cpy_r_r17 = 0;
    cpy_r_r18 = PyDict_Size(cpy_r_old_symbols);
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = CPyDict_GetItemsIter(cpy_r_old_symbols);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 973, CPyStatic_update___globals);
        goto CPyL155;
    }
CPyL15: ;
    cpy_r_r21 = CPyDict_NextItem(cpy_r_r20, cpy_r_r17);
    cpy_r_r22 = cpy_r_r21.f1;
    cpy_r_r17 = cpy_r_r22;
    cpy_r_r23 = cpy_r_r21.f0;
    if (!cpy_r_r23) goto CPyL156;
    cpy_r_r24 = cpy_r_r21.f2;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = cpy_r_r21.f3;
    CPy_INCREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r21.f2);
    CPy_DECREF(cpy_r_r21.f3);
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r26 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 973, CPyStatic_update___globals, "str", cpy_r_r24);
        goto CPyL157;
    }
    if (likely(PyDict_Check(cpy_r_r25)))
        cpy_r_r27 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 973, CPyStatic_update___globals, "dict", cpy_r_r25);
        goto CPyL158;
    }
    cpy_r_name = cpy_r_r26;
    cpy_r_names = cpy_r_r27;
    cpy_r_r28 = CPyDict_Copy(cpy_r_names);
    CPy_DECREF(cpy_r_names);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 973, CPyStatic_update___globals);
        goto CPyL159;
    }
    cpy_r_r29 = CPyDict_SetItem(cpy_r_r16, cpy_r_name, cpy_r_r28);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 973, CPyStatic_update___globals);
        goto CPyL160;
    }
    cpy_r_r31 = CPyDict_CheckSize(cpy_r_old_symbols, cpy_r_r19);
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 973, CPyStatic_update___globals);
        goto CPyL160;
    } else
        goto CPyL15;
CPyL21: ;
    cpy_r_r32 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 973, CPyStatic_update___globals);
        goto CPyL161;
    }
    cpy_r_old_symbols = cpy_r_r16;
    cpy_r_r33 = CPY_GET_ATTR(cpy_r_file_node, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 974, CPyStatic_update___globals);
        goto CPyL154;
    }
CPyL23: ;
    cpy_r_r34 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_names;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "reprocess_nodes", "MypyFile", "names", 974, CPyStatic_update___globals);
        goto CPyL162;
    }
    CPy_INCREF(cpy_r_r34);
CPyL24: ;
    cpy_r_r35 = CPyDef_astdiff___snapshot_symbol_table(cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 974, CPyStatic_update___globals);
        goto CPyL154;
    }
    cpy_r_old_symbols_snapshot = cpy_r_r35;
    cpy_r_r36 = CPyDef_update___key_reprocess_nodes_obj();
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 976, CPyStatic_update___globals);
        goto CPyL163;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___server___update___key_reprocess_nodes_objObject *)cpy_r_r36)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___server___update___key_reprocess_nodes_objObject *)cpy_r_r36)->___mypyc_env__);
    }
    ((mypy___server___update___key_reprocess_nodes_objObject *)cpy_r_r36)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r37 = 1;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 976, CPyStatic_update___globals);
        goto CPyL164;
    }
    if (((mypy___server___update___reprocess_nodes_envObject *)cpy_r_r0)->_key != NULL) {
        CPy_DECREF(((mypy___server___update___reprocess_nodes_envObject *)cpy_r_r0)->_key);
    }
    ((mypy___server___update___reprocess_nodes_envObject *)cpy_r_r0)->_key = cpy_r_r36;
    cpy_r_r38 = 1;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 976, CPyStatic_update___globals);
        goto CPyL163;
    }
    cpy_r_r39 = ((mypy___server___update___reprocess_nodes_envObject *)cpy_r_r0)->_key;
    if (unlikely(cpy_r_r39 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'key' of 'reprocess_nodes_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r39);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 982, CPyStatic_update___globals);
        goto CPyL165;
    }
CPyL29: ;
    cpy_r_r40 = CPyModule_builtins;
    cpy_r_r41 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 982, CPyStatic_update___globals);
        goto CPyL166;
    }
    PyObject *cpy_r_r43[2] = {cpy_r_nodeset, cpy_r_r39};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r46 = _PyObject_Vectorcall(cpy_r_r42, cpy_r_r44, 1, cpy_r_r45);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 982, CPyStatic_update___globals);
        goto CPyL166;
    }
    CPy_DECREF(cpy_r_r39);
    if (likely(PyList_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 982, CPyStatic_update___globals, "list", cpy_r_r46);
        goto CPyL165;
    }
    cpy_r_nodes = cpy_r_r47;
    cpy_r_r48 = CPyDict_GetItem(cpy_r_graph, cpy_r_module_id);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 984, CPyStatic_update___globals);
        goto CPyL167;
    }
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_mypy___build___State))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 984, CPyStatic_update___globals, "mypy.build.State", cpy_r_r48);
        goto CPyL167;
    }
    cpy_r_state = cpy_r_r49;
    cpy_r_r50 = ((mypy___build___StateObject *)cpy_r_state)->_options;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "reprocess_nodes", "State", "options", 985, CPyStatic_update___globals);
        goto CPyL168;
    }
    CPy_INCREF(cpy_r_r50);
CPyL35: ;
    cpy_r_options = cpy_r_r50;
    cpy_r_r51 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_errors;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_path;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_ignored_lines;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = ((mypy___options___OptionsObject *)cpy_r_options)->_ignore_errors;
    if (cpy_r_r54) {
        goto CPyL169;
    } else
        goto CPyL37;
CPyL36: ;
    cpy_r_r55 = cpy_r_r54;
    goto CPyL38;
CPyL37: ;
    cpy_r_r56 = ((mypy___build___StateObject *)cpy_r_state)->_ignore_all;
    CPy_DECREF(cpy_r_state);
    cpy_r_r55 = cpy_r_r56;
CPyL38: ;
    cpy_r_r57 = CPyDef_mypy___errors___Errors___set_file_ignored_lines(cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r55);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 986, CPyStatic_update___globals);
        goto CPyL170;
    }
    cpy_r_r58 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_errors;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_path;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_skipped_lines;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = CPyDef_mypy___errors___Errors___set_skipped_lines(cpy_r_r58, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 989, CPyStatic_update___globals);
        goto CPyL170;
    }
    cpy_r_r62 = PySet_New(NULL);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 991, CPyStatic_update___globals);
        goto CPyL170;
    }
    cpy_r_targets = cpy_r_r62;
    cpy_r_r63 = 0;
CPyL42: ;
    cpy_r_r64 = (CPyPtr)&((PyVarObject *)cpy_r_nodes)->ob_size;
    cpy_r_r65 = *(int64_t *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 << 1;
    cpy_r_r67 = (Py_ssize_t)cpy_r_r63 < (Py_ssize_t)cpy_r_r66;
    if (!cpy_r_r67) goto CPyL51;
    cpy_r_r68 = CPyList_GetItemUnsafe(cpy_r_nodes, cpy_r_r63);
    if (likely(PyTuple_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 992, CPyStatic_update___globals, "tuple", cpy_r_r68);
        goto CPyL171;
    }
    cpy_r_node = cpy_r_r69;
    cpy_r_r70 = CPySequenceTuple_GetItem(cpy_r_node, 0);
    CPy_DECREF(cpy_r_node);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 993, CPyStatic_update___globals);
        goto CPyL171;
    }
    if (Py_TYPE(cpy_r_r70) == CPyType_nodes___FuncDef)
        cpy_r_r71 = cpy_r_r70;
    else {
        cpy_r_r71 = NULL;
    }
    if (cpy_r_r71 != NULL) goto __LL6770;
    if (Py_TYPE(cpy_r_r70) == CPyType_nodes___MypyFile)
        cpy_r_r71 = cpy_r_r70;
    else {
        cpy_r_r71 = NULL;
    }
    if (cpy_r_r71 != NULL) goto __LL6770;
    if (Py_TYPE(cpy_r_r70) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r71 = cpy_r_r70;
    else {
        cpy_r_r71 = NULL;
    }
    if (cpy_r_r71 != NULL) goto __LL6770;
    CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 993, CPyStatic_update___globals, "union[mypy.nodes.FuncDef, mypy.nodes.MypyFile, mypy.nodes.OverloadedFuncDef]", cpy_r_r70);
    goto CPyL171;
__LL6770: ;
    cpy_r_r72 = CPyDef_update___target_from_node(cpy_r_module_id, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 993, CPyStatic_update___globals);
        goto CPyL171;
    }
    cpy_r_target = cpy_r_r72;
    cpy_r_r73 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r74 = cpy_r_target != cpy_r_r73;
    if (!cpy_r_r74) goto CPyL172;
    if (likely(cpy_r_target != Py_None))
        cpy_r_r75 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 995, CPyStatic_update___globals, "str", cpy_r_target);
        goto CPyL171;
    }
    cpy_r_r76 = PySet_Add(cpy_r_targets, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 995, CPyStatic_update___globals);
        goto CPyL171;
    }
CPyL50: ;
    cpy_r_r78 = cpy_r_r63 + 2;
    cpy_r_r63 = cpy_r_r78;
    goto CPyL42;
CPyL51: ;
    cpy_r_r79 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_errors;
    CPy_INCREF(cpy_r_r79);
    cpy_r_r80 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_path;
    CPy_INCREF(cpy_r_r80);
    cpy_r_r81 = CPyDef_mypy___errors___Errors___clear_errors_in_targets(cpy_r_r79, cpy_r_r80, cpy_r_targets);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r81 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 996, CPyStatic_update___globals);
        goto CPyL171;
    }
    cpy_r_r82 = PyObject_GetIter(cpy_r_targets);
    CPy_DECREF(cpy_r_targets);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1000, CPyStatic_update___globals);
        goto CPyL170;
    }
CPyL53: ;
    cpy_r_r83 = PyIter_Next(cpy_r_r82);
    if (cpy_r_r83 == NULL) goto CPyL173;
    if (likely(PyUnicode_Check(cpy_r_r83)))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1000, CPyStatic_update___globals, "str", cpy_r_r83);
        goto CPyL174;
    }
    cpy_r_target = cpy_r_r84;
    if (likely(cpy_r_target != Py_None))
        cpy_r_r85 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1001, CPyStatic_update___globals, "str", cpy_r_target);
        goto CPyL174;
    }
    cpy_r_r86 = PyUnicode_Compare(cpy_r_r85, cpy_r_module_id);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r87 = cpy_r_r86 == -1;
    if (!cpy_r_r87) goto CPyL59;
    cpy_r_r88 = PyErr_Occurred();
    cpy_r_r89 = cpy_r_r88 != NULL;
    if (!cpy_r_r89) goto CPyL59;
    cpy_r_r90 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1001, CPyStatic_update___globals);
        goto CPyL174;
    }
CPyL59: ;
    cpy_r_r91 = cpy_r_r86 == 0;
    if (!cpy_r_r91) goto CPyL53;
    cpy_r_r92 = CPyDict_GetItem(cpy_r_graph, cpy_r_module_id);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1002, CPyStatic_update___globals);
        goto CPyL174;
    }
    if (likely(Py_TYPE(cpy_r_r92) == CPyType_mypy___build___State))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1002, CPyStatic_update___globals, "mypy.build.State", cpy_r_r92);
        goto CPyL174;
    }
    cpy_r_r94 = ((mypy___build___StateObject *)cpy_r_r93)->_early_errors;
    if (unlikely(cpy_r_r94 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'early_errors' of 'State' undefined");
    } else {
        CPy_INCREF(cpy_r_r94);
    }
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1002, CPyStatic_update___globals);
        goto CPyL174;
    }
CPyL63: ;
    cpy_r_r95 = 0;
CPyL64: ;
    cpy_r_r96 = (CPyPtr)&((PyVarObject *)cpy_r_r94)->ob_size;
    cpy_r_r97 = *(int64_t *)cpy_r_r96;
    cpy_r_r98 = cpy_r_r97 << 1;
    cpy_r_r99 = (Py_ssize_t)cpy_r_r95 < (Py_ssize_t)cpy_r_r98;
    if (!cpy_r_r99) goto CPyL175;
    cpy_r_r100 = CPyList_GetItemUnsafe(cpy_r_r94, cpy_r_r95);
    if (likely(Py_TYPE(cpy_r_r100) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1002, CPyStatic_update___globals, "mypy.errors.ErrorInfo", cpy_r_r100);
        goto CPyL176;
    }
    cpy_r_info = cpy_r_r101;
    cpy_r_r102 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_errors;
    CPy_INCREF(cpy_r_r102);
    cpy_r_r103 = CPyDef_mypy___errors___Errors___add_error_info(cpy_r_r102, cpy_r_info);
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1003, CPyStatic_update___globals);
        goto CPyL176;
    }
    cpy_r_r104 = cpy_r_r95 + 2;
    cpy_r_r95 = cpy_r_r104;
    goto CPyL64;
CPyL68: ;
    cpy_r_r105 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1000, CPyStatic_update___globals);
        goto CPyL170;
    }
    cpy_r_r106 = PyDict_New();
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1006, CPyStatic_update___globals);
        goto CPyL170;
    }
    cpy_r_saved_attrs = cpy_r_r106;
    cpy_r_r107 = 0;
CPyL71: ;
    cpy_r_r108 = (CPyPtr)&((PyVarObject *)cpy_r_nodes)->ob_size;
    cpy_r_r109 = *(int64_t *)cpy_r_r108;
    cpy_r_r110 = cpy_r_r109 << 1;
    cpy_r_r111 = (Py_ssize_t)cpy_r_r107 < (Py_ssize_t)cpy_r_r110;
    if (!cpy_r_r111) goto CPyL91;
    cpy_r_r112 = CPyList_GetItemUnsafe(cpy_r_nodes, cpy_r_r107);
    if (likely(PyTuple_Check(cpy_r_r112)))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1007, CPyStatic_update___globals, "tuple", cpy_r_r112);
        goto CPyL177;
    }
    cpy_r_deferred = cpy_r_r113;
    cpy_r_r114 = CPySequenceTuple_GetItem(cpy_r_deferred, 0);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1008, CPyStatic_update___globals);
        goto CPyL178;
    }
    if (Py_TYPE(cpy_r_r114) == CPyType_nodes___FuncDef)
        cpy_r_r115 = cpy_r_r114;
    else {
        cpy_r_r115 = NULL;
    }
    if (cpy_r_r115 != NULL) goto __LL6771;
    if (Py_TYPE(cpy_r_r114) == CPyType_nodes___MypyFile)
        cpy_r_r115 = cpy_r_r114;
    else {
        cpy_r_r115 = NULL;
    }
    if (cpy_r_r115 != NULL) goto __LL6771;
    if (Py_TYPE(cpy_r_r114) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r115 = cpy_r_r114;
    else {
        cpy_r_r115 = NULL;
    }
    if (cpy_r_r115 != NULL) goto __LL6771;
    CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1008, CPyStatic_update___globals, "union[mypy.nodes.FuncDef, mypy.nodes.MypyFile, mypy.nodes.OverloadedFuncDef]", cpy_r_r114);
    goto CPyL178;
__LL6771: ;
    cpy_r_r116 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r117 = (CPyPtr)&((PyObject *)cpy_r_r115)->ob_type;
    cpy_r_r118 = *(PyObject * *)cpy_r_r117;
    cpy_r_r119 = cpy_r_r118 == cpy_r_r116;
    if (!cpy_r_r119) goto CPyL79;
    if (likely(Py_TYPE(cpy_r_r115) == CPyType_nodes___FuncDef))
        cpy_r_r120 = cpy_r_r115;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1008, CPyStatic_update___globals, "mypy.nodes.FuncDef", cpy_r_r115);
        goto CPyL178;
    }
    cpy_r_r121 = CPY_GET_ATTR(cpy_r_r120, CPyType_nodes___FuncDef, 7, mypy___nodes___FuncDefObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1008, CPyStatic_update___globals);
        goto CPyL178;
    }
CPyL78: ;
    cpy_r_r122 = cpy_r_r121;
    goto CPyL86;
CPyL79: ;
    cpy_r_r123 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r124 = (CPyPtr)&((PyObject *)cpy_r_r115)->ob_type;
    cpy_r_r125 = *(PyObject * *)cpy_r_r124;
    cpy_r_r126 = cpy_r_r125 == cpy_r_r123;
    if (!cpy_r_r126) goto CPyL83;
    if (likely(Py_TYPE(cpy_r_r115) == CPyType_nodes___MypyFile))
        cpy_r_r127 = cpy_r_r115;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1008, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_r115);
        goto CPyL178;
    }
    cpy_r_r128 = CPY_GET_ATTR(cpy_r_r127, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1008, CPyStatic_update___globals);
        goto CPyL178;
    }
CPyL82: ;
    cpy_r_r122 = cpy_r_r128;
    goto CPyL86;
CPyL83: ;
    if (likely(Py_TYPE(cpy_r_r115) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r129 = cpy_r_r115;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1008, CPyStatic_update___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r115);
        goto CPyL178;
    }
    cpy_r_r130 = CPY_GET_ATTR(cpy_r_r129, CPyType_nodes___OverloadedFuncDef, 7, mypy___nodes___OverloadedFuncDefObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1008, CPyStatic_update___globals);
        goto CPyL178;
    }
CPyL85: ;
    cpy_r_r122 = cpy_r_r130;
CPyL86: ;
    cpy_r_r131 = PyList_Append(cpy_r_processed_targets, cpy_r_r122);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1008, CPyStatic_update___globals);
        goto CPyL178;
    }
    cpy_r_r133 = CPySequenceTuple_GetItem(cpy_r_deferred, 0);
    CPy_DECREF(cpy_r_deferred);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1009, CPyStatic_update___globals);
        goto CPyL177;
    }
    if (Py_TYPE(cpy_r_r133) == CPyType_nodes___FuncDef)
        cpy_r_r134 = cpy_r_r133;
    else {
        cpy_r_r134 = NULL;
    }
    if (cpy_r_r134 != NULL) goto __LL6772;
    if (Py_TYPE(cpy_r_r133) == CPyType_nodes___MypyFile)
        cpy_r_r134 = cpy_r_r133;
    else {
        cpy_r_r134 = NULL;
    }
    if (cpy_r_r134 != NULL) goto __LL6772;
    if (Py_TYPE(cpy_r_r133) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r134 = cpy_r_r133;
    else {
        cpy_r_r134 = NULL;
    }
    if (cpy_r_r134 != NULL) goto __LL6772;
    CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1009, CPyStatic_update___globals, "union[mypy.nodes.FuncDef, mypy.nodes.MypyFile, mypy.nodes.OverloadedFuncDef]", cpy_r_r133);
    goto CPyL177;
__LL6772: ;
    cpy_r_r135 = CPyDef_aststrip___strip_target(cpy_r_r134, cpy_r_saved_attrs);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r135 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1009, CPyStatic_update___globals);
        goto CPyL177;
    }
    cpy_r_r136 = cpy_r_r107 + 2;
    cpy_r_r107 = cpy_r_r136;
    goto CPyL71;
CPyL91: ;
    cpy_r_r137 = CPyDict_GetItem(cpy_r_graph, cpy_r_module_id);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1010, CPyStatic_update___globals);
        goto CPyL177;
    }
    if (likely(Py_TYPE(cpy_r_r137) == CPyType_mypy___build___State))
        cpy_r_r138 = cpy_r_r137;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1010, CPyStatic_update___globals, "mypy.build.State", cpy_r_r137);
        goto CPyL177;
    }
    cpy_r_r139 = CPyDef_semanal_main___semantic_analysis_for_targets(cpy_r_r138, cpy_r_nodes, cpy_r_graph, cpy_r_saved_attrs);
    CPy_DECREF(cpy_r_r138);
    CPy_DECREF(cpy_r_saved_attrs);
    if (unlikely(cpy_r_r139 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1010, CPyStatic_update___globals);
        goto CPyL170;
    }
    cpy_r_r140 = CPY_GET_ATTR(cpy_r_file_node, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1014, CPyStatic_update___globals);
        goto CPyL170;
    }
CPyL95: ;
    cpy_r_r141 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_names;
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "reprocess_nodes", "MypyFile", "names", 1014, CPyStatic_update___globals);
        goto CPyL179;
    }
    CPy_INCREF(cpy_r_r141);
CPyL96: ;
    cpy_r_r142 = CPyDef_update___find_symbol_tables_recursive(cpy_r_r140, cpy_r_r141);
    CPy_DECREF(cpy_r_r140);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1014, CPyStatic_update___globals);
        goto CPyL170;
    }
    cpy_r_new_symbols = cpy_r_r142;
    cpy_r_r143 = 0;
    cpy_r_r144 = PyDict_Size(cpy_r_old_symbols);
    cpy_r_r145 = cpy_r_r144 << 1;
    cpy_r_r146 = CPyDict_GetKeysIter(cpy_r_old_symbols);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1015, CPyStatic_update___globals);
        goto CPyL180;
    }
CPyL98: ;
    cpy_r_r147 = CPyDict_NextKey(cpy_r_r146, cpy_r_r143);
    cpy_r_r148 = cpy_r_r147.f1;
    cpy_r_r143 = cpy_r_r148;
    cpy_r_r149 = cpy_r_r147.f0;
    if (!cpy_r_r149) goto CPyL181;
    cpy_r_r150 = cpy_r_r147.f2;
    CPy_INCREF(cpy_r_r150);
    CPy_DECREF(cpy_r_r147.f2);
    if (likely(PyUnicode_Check(cpy_r_r150)))
        cpy_r_r151 = cpy_r_r150;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1015, CPyStatic_update___globals, "str", cpy_r_r150);
        goto CPyL182;
    }
    cpy_r_name_2 = cpy_r_r151;
    cpy_r_r152 = PyDict_Contains(cpy_r_new_symbols, cpy_r_name_2);
    cpy_r_r153 = cpy_r_r152 >= 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1016, CPyStatic_update___globals);
        goto CPyL183;
    }
    cpy_r_r154 = cpy_r_r152;
    if (!cpy_r_r154) goto CPyL184;
    cpy_r_r155 = CPyDict_GetItem(cpy_r_old_symbols, cpy_r_name_2);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1017, CPyStatic_update___globals);
        goto CPyL183;
    }
    if (likely(PyDict_Check(cpy_r_r155)))
        cpy_r_r156 = cpy_r_r155;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1017, CPyStatic_update___globals, "dict", cpy_r_r155);
        goto CPyL183;
    }
    cpy_r_r157 = CPyDict_GetItem(cpy_r_new_symbols, cpy_r_name_2);
    CPy_DECREF(cpy_r_name_2);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1017, CPyStatic_update___globals);
        goto CPyL185;
    }
    if (likely(PyDict_Check(cpy_r_r157)))
        cpy_r_r158 = cpy_r_r157;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1017, CPyStatic_update___globals, "dict", cpy_r_r157);
        goto CPyL185;
    }
    cpy_r_r159 = CPyDef_astmerge___merge_asts(cpy_r_file_node, cpy_r_r156, cpy_r_file_node, cpy_r_r158);
    CPy_DECREF(cpy_r_r156);
    CPy_DECREF(cpy_r_r158);
    if (unlikely(cpy_r_r159 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1017, CPyStatic_update___globals);
        goto CPyL182;
    }
CPyL107: ;
    cpy_r_r160 = CPyDict_CheckSize(cpy_r_old_symbols, cpy_r_r145);
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1015, CPyStatic_update___globals);
        goto CPyL182;
    } else
        goto CPyL98;
CPyL108: ;
    cpy_r_r161 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1015, CPyStatic_update___globals);
        goto CPyL186;
    }
    cpy_r_r162 = CPyDict_GetItem(cpy_r_graph, cpy_r_module_id);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1020, CPyStatic_update___globals);
        goto CPyL186;
    }
    if (likely(Py_TYPE(cpy_r_r162) == CPyType_mypy___build___State))
        cpy_r_r163 = cpy_r_r162;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1020, CPyStatic_update___globals, "mypy.build.State", cpy_r_r162);
        goto CPyL186;
    }
    cpy_r_r164 = CPyDef_mypy___build___State___type_checker(cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1020, CPyStatic_update___globals);
        goto CPyL186;
    }
    cpy_r_checker = cpy_r_r164;
    cpy_r_r165 = CPyDef_checker___TypeChecker___reset(cpy_r_checker);
    if (unlikely(cpy_r_r165 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1021, CPyStatic_update___globals);
        goto CPyL187;
    }
    if (((mypy___checker___TypeCheckerObject *)cpy_r_checker)->_pass_num != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___checker___TypeCheckerObject *)cpy_r_checker)->_pass_num);
    }
    ((mypy___checker___TypeCheckerObject *)cpy_r_checker)->_pass_num = 0;
    cpy_r_r166 = 1;
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1023, CPyStatic_update___globals);
        goto CPyL187;
    }
    if (((mypy___checker___TypeCheckerObject *)cpy_r_checker)->_last_pass != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___checker___TypeCheckerObject *)cpy_r_checker)->_last_pass);
    }
    ((mypy___checker___TypeCheckerObject *)cpy_r_checker)->_last_pass = 6;
    cpy_r_r167 = 1;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1024, CPyStatic_update___globals);
        goto CPyL187;
    }
    cpy_r_r168 = CPyDef_checker___TypeChecker___check_second_pass(cpy_r_checker, cpy_r_nodes);
    CPy_DECREF(cpy_r_checker);
    if (unlikely(cpy_r_r168 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1025, CPyStatic_update___globals);
        goto CPyL186;
    }
    cpy_r_more = cpy_r_r168;
CPyL117: ;
    if (!cpy_r_more) goto CPyL124;
    cpy_r_more = 0;
    cpy_r_r169 = CPyDict_GetItem(cpy_r_graph, cpy_r_module_id);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1028, CPyStatic_update___globals);
        goto CPyL186;
    }
    if (likely(Py_TYPE(cpy_r_r169) == CPyType_mypy___build___State))
        cpy_r_r170 = cpy_r_r169;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1028, CPyStatic_update___globals, "mypy.build.State", cpy_r_r169);
        goto CPyL186;
    }
    cpy_r_r171 = CPyDef_mypy___build___State___type_checker(cpy_r_r170);
    CPy_DECREF(cpy_r_r170);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1028, CPyStatic_update___globals);
        goto CPyL186;
    }
    cpy_r_r172 = NULL;
    cpy_r_r173 = CPyDef_checker___TypeChecker___check_second_pass(cpy_r_r171, cpy_r_r172);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r173 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1028, CPyStatic_update___globals);
        goto CPyL186;
    }
    if (!cpy_r_r173) goto CPyL117;
    cpy_r_more = 1;
    goto CPyL117;
CPyL124: ;
    cpy_r_r174 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_options;
    cpy_r_r175 = ((mypy___options___OptionsObject *)cpy_r_r174)->_export_types;
    if (!cpy_r_r175) goto CPyL129;
CPyL125: ;
    cpy_r_r176 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_all_types;
    CPy_INCREF(cpy_r_r176);
    cpy_r_r177 = CPyDict_GetItem(cpy_r_graph, cpy_r_module_id);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1032, CPyStatic_update___globals);
        goto CPyL188;
    }
    if (likely(Py_TYPE(cpy_r_r177) == CPyType_mypy___build___State))
        cpy_r_r178 = cpy_r_r177;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1032, CPyStatic_update___globals, "mypy.build.State", cpy_r_r177);
        goto CPyL188;
    }
    cpy_r_r179 = CPyDef_mypy___build___State___type_map(cpy_r_r178);
    CPy_DECREF(cpy_r_r178);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1032, CPyStatic_update___globals);
        goto CPyL188;
    }
    cpy_r_r180 = CPyDict_Update(cpy_r_r176, cpy_r_r179);
    CPy_DECREF(cpy_r_r176);
    CPy_DECREF(cpy_r_r179);
    cpy_r_r181 = cpy_r_r180 >= 0;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1032, CPyStatic_update___globals);
        goto CPyL186;
    }
CPyL129: ;
    cpy_r_r182 = CPY_GET_ATTR(cpy_r_file_node, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1034, CPyStatic_update___globals);
        goto CPyL186;
    }
CPyL130: ;
    cpy_r_r183 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_names;
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "reprocess_nodes", "MypyFile", "names", 1034, CPyStatic_update___globals);
        goto CPyL189;
    }
    CPy_INCREF(cpy_r_r183);
CPyL131: ;
    cpy_r_r184 = CPyDef_astdiff___snapshot_symbol_table(cpy_r_r182, cpy_r_r183);
    CPy_DECREF(cpy_r_r182);
    CPy_DECREF(cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1034, CPyStatic_update___globals);
        goto CPyL186;
    }
    cpy_r_new_symbols_snapshot = cpy_r_r184;
    cpy_r_r185 = CPY_GET_ATTR(cpy_r_file_node, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_file_node);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1037, CPyStatic_update___globals);
        goto CPyL190;
    }
CPyL133: ;
    cpy_r_r186 = CPyDef_astdiff___compare_symbol_table_snapshots(cpy_r_r185, cpy_r_old_symbols_snapshot, cpy_r_new_symbols_snapshot);
    CPy_DECREF(cpy_r_r185);
    CPy_DECREF(cpy_r_old_symbols_snapshot);
    CPy_DECREF(cpy_r_new_symbols_snapshot);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1036, CPyStatic_update___globals);
        goto CPyL191;
    }
    cpy_r_changed = cpy_r_r186;
    cpy_r_r187 = PySet_New(NULL);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1039, CPyStatic_update___globals);
        goto CPyL192;
    }
    cpy_r_r188 = PyObject_GetIter(cpy_r_changed);
    CPy_DECREF(cpy_r_changed);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1039, CPyStatic_update___globals);
        goto CPyL193;
    }
CPyL136: ;
    cpy_r_r189 = PyIter_Next(cpy_r_r188);
    if (cpy_r_r189 == NULL) goto CPyL194;
    if (likely(PyUnicode_Check(cpy_r_r189)))
        cpy_r_r190 = cpy_r_r189;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1039, CPyStatic_update___globals, "str", cpy_r_r189);
        goto CPyL195;
    }
    cpy_r_name_3 = cpy_r_r190;
    cpy_r_r191 = CPyDef_trigger___make_trigger(cpy_r_name_3);
    CPy_DECREF(cpy_r_name_3);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1039, CPyStatic_update___globals);
        goto CPyL195;
    }
    cpy_r_r192 = PySet_Add(cpy_r_r187, cpy_r_r191);
    CPy_DECREF(cpy_r_r191);
    cpy_r_r193 = cpy_r_r192 >= 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1039, CPyStatic_update___globals);
        goto CPyL195;
    } else
        goto CPyL136;
CPyL140: ;
    cpy_r_r194 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r194)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1039, CPyStatic_update___globals);
        goto CPyL193;
    }
    cpy_r_new_triggered = cpy_r_r187;
    cpy_r_r195 = CPyDef_update___update_deps(cpy_r_module_id, cpy_r_nodes, cpy_r_graph, cpy_r_deps, cpy_r_options);
    CPy_DECREF(cpy_r_nodes);
    CPy_DECREF(cpy_r_options);
    if (unlikely(cpy_r_r195 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1042, CPyStatic_update___globals);
        goto CPyL196;
    }
    cpy_r_r196 = CPyDict_GetItem(cpy_r_graph, cpy_r_module_id);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1045, CPyStatic_update___globals);
        goto CPyL196;
    }
    if (likely(Py_TYPE(cpy_r_r196) == CPyType_mypy___build___State))
        cpy_r_r197 = cpy_r_r196;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1045, CPyStatic_update___globals, "mypy.build.State", cpy_r_r196);
        goto CPyL196;
    }
    cpy_r_r198 = 2;
    cpy_r_r199 = CPyDef_mypy___build___State___verify_dependencies(cpy_r_r197, cpy_r_r198);
    CPy_DECREF(cpy_r_r197);
    if (unlikely(cpy_r_r199 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1045, CPyStatic_update___globals);
        goto CPyL196;
    }
    cpy_r_r200 = CPyDict_GetItem(cpy_r_graph, cpy_r_module_id);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1047, CPyStatic_update___globals);
        goto CPyL196;
    }
    if (likely(Py_TYPE(cpy_r_r200) == CPyType_mypy___build___State))
        cpy_r_r201 = cpy_r_r200;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "reprocess_nodes", 1047, CPyStatic_update___globals, "mypy.build.State", cpy_r_r200);
        goto CPyL196;
    }
    cpy_r_r202 = CPyDef_mypy___build___State___free_state(cpy_r_r201);
    CPy_DECREF(cpy_r_r201);
    if (unlikely(cpy_r_r202 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 1047, CPyStatic_update___globals);
        goto CPyL196;
    }
    return cpy_r_new_triggered;
CPyL149: ;
    cpy_r_r203 = NULL;
    return cpy_r_r203;
CPyL150: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL149;
CPyL151: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL152: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_file_node);
    goto CPyL149;
CPyL153: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_r13);
    goto CPyL149;
CPyL154: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    goto CPyL149;
CPyL155: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_r16);
    goto CPyL149;
CPyL156: ;
    CPy_DECREF(cpy_r_old_symbols);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21.f2);
    CPy_DECREF(cpy_r_r21.f3);
    goto CPyL21;
CPyL157: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r25);
    goto CPyL149;
CPyL158: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r26);
    goto CPyL149;
CPyL159: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_name);
    goto CPyL149;
CPyL160: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r20);
    goto CPyL149;
CPyL161: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_r16);
    goto CPyL149;
CPyL162: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_r33);
    goto CPyL149;
CPyL163: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    goto CPyL149;
CPyL164: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_r36);
    goto CPyL149;
CPyL165: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    goto CPyL149;
CPyL166: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_r39);
    goto CPyL149;
CPyL167: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    goto CPyL149;
CPyL168: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_state);
    goto CPyL149;
CPyL169: ;
    CPy_DECREF(cpy_r_state);
    goto CPyL36;
CPyL170: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    goto CPyL149;
CPyL171: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_targets);
    goto CPyL149;
CPyL172: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL50;
CPyL173: ;
    CPy_DECREF(cpy_r_r82);
    goto CPyL68;
CPyL174: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r82);
    goto CPyL149;
CPyL175: ;
    CPy_DECREF(cpy_r_r94);
    goto CPyL53;
CPyL176: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r94);
    goto CPyL149;
CPyL177: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_saved_attrs);
    goto CPyL149;
CPyL178: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_saved_attrs);
    CPy_DecRef(cpy_r_deferred);
    goto CPyL149;
CPyL179: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r140);
    goto CPyL149;
CPyL180: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_new_symbols);
    goto CPyL149;
CPyL181: ;
    CPy_DECREF(cpy_r_old_symbols);
    CPy_DECREF(cpy_r_new_symbols);
    CPy_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_r147.f2);
    goto CPyL108;
CPyL182: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_new_symbols);
    CPy_DecRef(cpy_r_r146);
    goto CPyL149;
CPyL183: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_new_symbols);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_name_2);
    goto CPyL149;
CPyL184: ;
    CPy_DECREF(cpy_r_name_2);
    goto CPyL107;
CPyL185: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_new_symbols);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r156);
    goto CPyL149;
CPyL186: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    goto CPyL149;
CPyL187: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_checker);
    goto CPyL149;
CPyL188: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r176);
    goto CPyL149;
CPyL189: ;
    CPy_DecRef(cpy_r_file_node);
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r182);
    goto CPyL149;
CPyL190: ;
    CPy_DecRef(cpy_r_old_symbols_snapshot);
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_new_symbols_snapshot);
    goto CPyL149;
CPyL191: ;
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    goto CPyL149;
CPyL192: ;
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_changed);
    goto CPyL149;
CPyL193: ;
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r187);
    goto CPyL149;
CPyL194: ;
    CPy_DECREF(cpy_r_r188);
    goto CPyL140;
CPyL195: ;
    CPy_DecRef(cpy_r_nodes);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r188);
    goto CPyL149;
CPyL196: ;
    CPy_DecRef(cpy_r_new_triggered);
    goto CPyL149;
}

PyObject *CPyPy_update___reprocess_nodes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"manager", "graph", "module_id", "nodeset", "deps", "processed_targets", 0};
    static CPyArg_Parser parser = {"OOOOOO:reprocess_nodes", kwlist, 0};
    PyObject *obj_manager;
    PyObject *obj_graph;
    PyObject *obj_module_id;
    PyObject *obj_nodeset;
    PyObject *obj_deps;
    PyObject *obj_processed_targets;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_manager, &obj_graph, &obj_module_id, &obj_nodeset, &obj_deps, &obj_processed_targets)) {
        return NULL;
    }
    PyObject *arg_manager;
    if (likely(Py_TYPE(obj_manager) == CPyType_mypy___build___BuildManager))
        arg_manager = obj_manager;
    else {
        CPy_TypeError("mypy.build.BuildManager", obj_manager); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_module_id;
    if (likely(PyUnicode_Check(obj_module_id)))
        arg_module_id = obj_module_id;
    else {
        CPy_TypeError("str", obj_module_id); 
        goto fail;
    }
    PyObject *arg_nodeset;
    if (likely(PySet_Check(obj_nodeset)))
        arg_nodeset = obj_nodeset;
    else {
        CPy_TypeError("set", obj_nodeset); 
        goto fail;
    }
    PyObject *arg_deps;
    if (likely(PyDict_Check(obj_deps)))
        arg_deps = obj_deps;
    else {
        CPy_TypeError("dict", obj_deps); 
        goto fail;
    }
    PyObject *arg_processed_targets;
    if (likely(PyList_Check(obj_processed_targets)))
        arg_processed_targets = obj_processed_targets;
    else {
        CPy_TypeError("list", obj_processed_targets); 
        goto fail;
    }
    PyObject *retval = CPyDef_update___reprocess_nodes(arg_manager, arg_graph, arg_module_id, arg_nodeset, arg_deps, arg_processed_targets);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "reprocess_nodes", 955, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___find_symbol_tables_recursive(PyObject *cpy_r_prefix, PyObject *cpy_r_symbols) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T4CIOO cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_name;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
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
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_more;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1062, CPyStatic_update___globals);
        goto CPyL23;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = CPyDict_SetItem(cpy_r_result, cpy_r_prefix, cpy_r_symbols);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1063, CPyStatic_update___globals);
        goto CPyL24;
    }
    cpy_r_r3 = 0;
    cpy_r_r4 = PyDict_Size(cpy_r_symbols);
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = CPyDict_GetItemsIter(cpy_r_symbols);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1064, CPyStatic_update___globals);
        goto CPyL24;
    }
CPyL3: ;
    cpy_r_r7 = CPyDict_NextItem(cpy_r_r6, cpy_r_r3);
    cpy_r_r8 = cpy_r_r7.f1;
    cpy_r_r3 = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f0;
    if (!cpy_r_r9) goto CPyL25;
    cpy_r_r10 = cpy_r_r7.f2;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = cpy_r_r7.f3;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r7.f2);
    CPy_DECREF(cpy_r_r7.f3);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r12 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1064, CPyStatic_update___globals, "str", cpy_r_r10);
        goto CPyL26;
    }
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_nodes___SymbolTableNode))
        cpy_r_r13 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1064, CPyStatic_update___globals, "mypy.nodes.SymbolTableNode", cpy_r_r11);
        goto CPyL27;
    }
    cpy_r_name = cpy_r_r12;
    cpy_r_node = cpy_r_r13;
    cpy_r_r14 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    cpy_r_r15 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_r14)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL8;
    cpy_r_r19 = cpy_r_r18;
    goto CPyL9;
CPyL8: ;
    cpy_r_r20 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_r14)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    cpy_r_r19 = cpy_r_r23;
CPyL9: ;
    if (!cpy_r_r19) goto CPyL28;
    cpy_r_r24 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely((Py_TYPE(cpy_r_r24) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r24) == CPyType_nodes___TypeInfo)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1065, CPyStatic_update___globals, "mypy.nodes.TypeInfo", cpy_r_r24);
        goto CPyL29;
    }
    cpy_r_r26 = CPY_GET_ATTR(cpy_r_r25, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1065, CPyStatic_update___globals);
        goto CPyL29;
    }
CPyL12: ;
    cpy_r_r27 = CPyStatics[224]; /* '.' */
    cpy_r_r28 = PyUnicode_Concat(cpy_r_prefix, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1065, CPyStatic_update___globals);
        goto CPyL30;
    }
    cpy_r_r29 = CPyStr_Startswith(cpy_r_r26, cpy_r_r28);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r28);
    if (!cpy_r_r29) goto CPyL28;
    cpy_r_r30 = CPyStatics[224]; /* '.' */
    cpy_r_r31 = PyUnicode_Concat(cpy_r_prefix, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1066, CPyStatic_update___globals);
        goto CPyL29;
    }
    cpy_r_r32 = PyUnicode_Concat(cpy_r_r31, cpy_r_name);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1066, CPyStatic_update___globals);
        goto CPyL31;
    }
    cpy_r_r33 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely((Py_TYPE(cpy_r_r33) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r33) == CPyType_nodes___TypeInfo)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1066, CPyStatic_update___globals, "mypy.nodes.TypeInfo", cpy_r_r33);
        goto CPyL32;
    }
    cpy_r_r35 = ((mypy___nodes___TypeInfoObject *)cpy_r_r34)->_names;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "find_symbol_tables_recursive", "TypeInfo", "names", 1066, CPyStatic_update___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r35);
CPyL18: ;
    CPy_DECREF(cpy_r_node);
    cpy_r_r36 = CPyDef_update___find_symbol_tables_recursive(cpy_r_r32, cpy_r_r35);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1066, CPyStatic_update___globals);
        goto CPyL33;
    }
    cpy_r_more = cpy_r_r36;
    cpy_r_r37 = CPyDict_Update(cpy_r_result, cpy_r_more);
    CPy_DECREF(cpy_r_more);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1067, CPyStatic_update___globals);
        goto CPyL33;
    }
CPyL20: ;
    cpy_r_r39 = CPyDict_CheckSize(cpy_r_symbols, cpy_r_r5);
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1064, CPyStatic_update___globals);
        goto CPyL33;
    } else
        goto CPyL3;
CPyL21: ;
    cpy_r_r40 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1064, CPyStatic_update___globals);
        goto CPyL24;
    }
    return cpy_r_result;
CPyL23: ;
    cpy_r_r41 = NULL;
    return cpy_r_r41;
CPyL24: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL23;
CPyL25: ;
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7.f2);
    CPy_DECREF(cpy_r_r7.f3);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r11);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r12);
    goto CPyL23;
CPyL28: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_node);
    goto CPyL20;
CPyL29: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    goto CPyL23;
CPyL30: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r26);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_node);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r32);
    goto CPyL23;
CPyL33: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r6);
    goto CPyL23;
}

PyObject *CPyPy_update___find_symbol_tables_recursive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"prefix", "symbols", 0};
    static CPyArg_Parser parser = {"OO:find_symbol_tables_recursive", kwlist, 0};
    PyObject *obj_prefix;
    PyObject *obj_symbols;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_prefix, &obj_symbols)) {
        return NULL;
    }
    PyObject *arg_prefix;
    if (likely(PyUnicode_Check(obj_prefix)))
        arg_prefix = obj_prefix;
    else {
        CPy_TypeError("str", obj_prefix); 
        goto fail;
    }
    PyObject *arg_symbols;
    if (likely(PyDict_Check(obj_symbols)))
        arg_symbols = obj_symbols;
    else {
        CPy_TypeError("dict", obj_symbols); 
        goto fail;
    }
    PyObject *retval = CPyDef_update___find_symbol_tables_recursive(arg_prefix, arg_symbols);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "find_symbol_tables_recursive", 1052, CPyStatic_update___globals);
    return NULL;
}

char CPyDef_update___update_deps(PyObject *cpy_r_module_id, PyObject *cpy_r_nodes, PyObject *cpy_r_graph, PyObject *cpy_r_deps, PyObject *cpy_r_options) {
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_deferred;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_type_map;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_tree;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T2II cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_new_deps;
    CPyTagged cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    tuple_T4CIOO cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_trigger;
    PyObject *cpy_r_targets;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_nodes)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL25;
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_nodes, cpy_r_r0);
    if (likely(PyTuple_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_deps", 1078, CPyStatic_update___globals, "tuple", cpy_r_r5);
        goto CPyL30;
    }
    cpy_r_deferred = cpy_r_r6;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_deferred, 0);
    CPy_DECREF(cpy_r_deferred);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_deps", 1079, CPyStatic_update___globals);
        goto CPyL30;
    }
    if (Py_TYPE(cpy_r_r7) == CPyType_nodes___FuncDef)
        cpy_r_r8 = cpy_r_r7;
    else {
        cpy_r_r8 = NULL;
    }
    if (cpy_r_r8 != NULL) goto __LL6773;
    if (Py_TYPE(cpy_r_r7) == CPyType_nodes___MypyFile)
        cpy_r_r8 = cpy_r_r7;
    else {
        cpy_r_r8 = NULL;
    }
    if (cpy_r_r8 != NULL) goto __LL6773;
    if (Py_TYPE(cpy_r_r7) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r8 = cpy_r_r7;
    else {
        cpy_r_r8 = NULL;
    }
    if (cpy_r_r8 != NULL) goto __LL6773;
    CPy_TypeErrorTraceback("mypy/server/update.py", "update_deps", 1079, CPyStatic_update___globals, "union[mypy.nodes.FuncDef, mypy.nodes.MypyFile, mypy.nodes.OverloadedFuncDef]", cpy_r_r7);
    goto CPyL30;
__LL6773: ;
    cpy_r_node = cpy_r_r8;
    cpy_r_r9 = CPyDict_GetItem(cpy_r_graph, cpy_r_module_id);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_deps", 1080, CPyStatic_update___globals);
        goto CPyL31;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_mypy___build___State))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_deps", 1080, CPyStatic_update___globals, "mypy.build.State", cpy_r_r9);
        goto CPyL31;
    }
    cpy_r_r11 = CPyDef_mypy___build___State___type_map(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_deps", 1080, CPyStatic_update___globals);
        goto CPyL31;
    }
    cpy_r_type_map = cpy_r_r11;
    cpy_r_r12 = CPyDict_GetItem(cpy_r_graph, cpy_r_module_id);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_deps", 1081, CPyStatic_update___globals);
        goto CPyL32;
    }
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_mypy___build___State))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_deps", 1081, CPyStatic_update___globals, "mypy.build.State", cpy_r_r12);
        goto CPyL32;
    }
    cpy_r_r14 = ((mypy___build___StateObject *)cpy_r_r13)->_tree;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_tree = cpy_r_r14;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_tree != cpy_r_r15;
    if (cpy_r_r16) {
        goto CPyL13;
    } else
        goto CPyL33;
CPyL11: ;
    PyErr_SetString(PyExc_AssertionError, "Tree must be processed at this stage");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/server/update.py", "update_deps", 1082, CPyStatic_update___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL13: ;
    if (likely(cpy_r_tree != Py_None))
        cpy_r_r18 = cpy_r_tree;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_deps", 1084, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_tree);
        goto CPyL32;
    }
    cpy_r_r19 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_version;
    CPyTagged_INCREF(cpy_r_r19.f0);
    CPyTagged_INCREF(cpy_r_r19.f1);
    cpy_r_r20 = CPyDef_deps___get_dependencies_of_target(cpy_r_module_id, cpy_r_r18, cpy_r_node, cpy_r_type_map, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_type_map);
    CPyTagged_DECREF(cpy_r_r19.f0);
    CPyTagged_DECREF(cpy_r_r19.f1);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_deps", 1083, CPyStatic_update___globals);
        goto CPyL30;
    }
    cpy_r_new_deps = cpy_r_r20;
    cpy_r_r21 = 0;
    cpy_r_r22 = PyDict_Size(cpy_r_new_deps);
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = CPyDict_GetItemsIter(cpy_r_new_deps);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_deps", 1086, CPyStatic_update___globals);
        goto CPyL34;
    }
CPyL16: ;
    cpy_r_r25 = CPyDict_NextItem(cpy_r_r24, cpy_r_r21);
    cpy_r_r26 = cpy_r_r25.f1;
    cpy_r_r21 = cpy_r_r26;
    cpy_r_r27 = cpy_r_r25.f0;
    if (!cpy_r_r27) goto CPyL35;
    cpy_r_r28 = cpy_r_r25.f2;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = cpy_r_r25.f3;
    CPy_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r25.f2);
    CPy_DECREF(cpy_r_r25.f3);
    if (likely(PyUnicode_Check(cpy_r_r28)))
        cpy_r_r30 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_deps", 1086, CPyStatic_update___globals, "str", cpy_r_r28);
        goto CPyL36;
    }
    if (likely(PySet_Check(cpy_r_r29)))
        cpy_r_r31 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_deps", 1086, CPyStatic_update___globals, "set", cpy_r_r29);
        goto CPyL37;
    }
    cpy_r_trigger = cpy_r_r30;
    cpy_r_targets = cpy_r_r31;
    cpy_r_r32 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_deps, cpy_r_trigger, 3);
    CPy_DECREF(cpy_r_trigger);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "update_deps", 1087, CPyStatic_update___globals);
        goto CPyL38;
    }
    if (likely(PySet_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "update_deps", 1087, CPyStatic_update___globals, "set", cpy_r_r32);
        goto CPyL38;
    }
    cpy_r_r34 = _PySet_Update(cpy_r_r33, cpy_r_targets);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_targets);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/server/update.py", "update_deps", 1087, CPyStatic_update___globals);
        goto CPyL39;
    }
    cpy_r_r36 = CPyDict_CheckSize(cpy_r_new_deps, cpy_r_r23);
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/server/update.py", "update_deps", 1086, CPyStatic_update___globals);
        goto CPyL39;
    } else
        goto CPyL16;
CPyL23: ;
    cpy_r_r37 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/server/update.py", "update_deps", 1086, CPyStatic_update___globals);
        goto CPyL30;
    }
    cpy_r_r38 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r38;
    goto CPyL1;
CPyL25: ;
    cpy_r_r39 = CPyStatic_typestate___type_state;
    if (likely(cpy_r_r39 != NULL)) goto CPyL28;
    PyErr_SetString(PyExc_NameError, "value for final name \"type_state\" was not set");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/server/update.py", "update_deps", 1089, CPyStatic_update___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r41 = CPyDef_typestate___TypeState___update_protocol_deps(cpy_r_r39, cpy_r_deps);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "update_deps", 1089, CPyStatic_update___globals);
        goto CPyL30;
    }
    return 1;
CPyL30: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL31: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL30;
CPyL32: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_type_map);
    goto CPyL30;
CPyL33: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_type_map);
    CPy_DECREF(cpy_r_tree);
    goto CPyL11;
CPyL34: ;
    CPy_DecRef(cpy_r_new_deps);
    goto CPyL30;
CPyL35: ;
    CPy_DECREF(cpy_r_new_deps);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25.f2);
    CPy_DECREF(cpy_r_r25.f3);
    goto CPyL23;
CPyL36: ;
    CPy_DecRef(cpy_r_new_deps);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r29);
    goto CPyL30;
CPyL37: ;
    CPy_DecRef(cpy_r_new_deps);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r30);
    goto CPyL30;
CPyL38: ;
    CPy_DecRef(cpy_r_new_deps);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_targets);
    goto CPyL30;
CPyL39: ;
    CPy_DecRef(cpy_r_new_deps);
    CPy_DecRef(cpy_r_r24);
    goto CPyL30;
}

PyObject *CPyPy_update___update_deps(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module_id", "nodes", "graph", "deps", "options", 0};
    static CPyArg_Parser parser = {"OOOOO:update_deps", kwlist, 0};
    PyObject *obj_module_id;
    PyObject *obj_nodes;
    PyObject *obj_graph;
    PyObject *obj_deps;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module_id, &obj_nodes, &obj_graph, &obj_deps, &obj_options)) {
        return NULL;
    }
    PyObject *arg_module_id;
    if (likely(PyUnicode_Check(obj_module_id)))
        arg_module_id = obj_module_id;
    else {
        CPy_TypeError("str", obj_module_id); 
        goto fail;
    }
    PyObject *arg_nodes;
    if (likely(PyList_Check(obj_nodes)))
        arg_nodes = obj_nodes;
    else {
        CPy_TypeError("list", obj_nodes); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_deps;
    if (likely(PyDict_Check(obj_deps)))
        arg_deps = obj_deps;
    else {
        CPy_TypeError("dict", obj_deps); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_update___update_deps(arg_module_id, arg_nodes, arg_graph, arg_deps, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "update_deps", 1071, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___not_found_lookup_target_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_update___not_found_lookup_target_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_update___not_found_lookup_target_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "__get__", -1, CPyStatic_update___globals);
    return NULL;
}

char CPyDef_update___not_found_lookup_target_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_not_found;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypy___server___update___not_found_lookup_target_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "not_found", "not_found_lookup_target_obj", "__mypyc_env__", 1102, CPyStatic_update___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_not_found;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "not_found", "lookup_target_env", "not_found", -1, CPyStatic_update___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_not_found = cpy_r_r1;
    CPy_DECREF(cpy_r_not_found);
    cpy_r_r2 = ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "not_found", "lookup_target_env", "manager", 1103, CPyStatic_update___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPyStatics[5392]; /* "Can't find matching target for " */
    cpy_r_r4 = ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_target;
    if (unlikely(cpy_r_r4 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'target' of 'lookup_target_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r4);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "not_found", 1103, CPyStatic_update___globals);
        goto CPyL10;
    }
CPyL4: ;
    cpy_r_r5 = CPyStatics[5393]; /* ' (stale dependency?)' */
    cpy_r_r6 = CPyStr_Build(3, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "not_found", 1103, CPyStatic_update___globals);
        goto CPyL10;
    }
    cpy_r_r7 = PyTuple_Pack(1, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "not_found", 1103, CPyStatic_update___globals);
        goto CPyL10;
    }
    cpy_r_r8 = CPyDef_mypy___build___BuildManager___log_fine_grained(cpy_r_r2, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "not_found", 1103, CPyStatic_update___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
}

PyObject *CPyPy_update___not_found_lookup_target_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_update___not_found_lookup_target_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "not_found", 1102, CPyStatic_update___globals);
    return NULL;
}

tuple_T2OO CPyDef_update___lookup_target(PyObject *cpy_r_manager, PyObject *cpy_r_target) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_modules;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T2OC cpy_r_r15;
    PyObject *cpy_r_r16;
    tuple_T2OO cpy_r_r17;
    tuple_T2OO cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_rest;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_components;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_file;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_active_class;
    CPyTagged cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
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
    CPyPtr cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    tuple_T2OC cpy_r_r82;
    PyObject *cpy_r_r83;
    tuple_T2OO cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyPtr cpy_r_r87;
    PyObject *cpy_r_r88;
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
    tuple_T2OC cpy_r_r99;
    PyObject *cpy_r_r100;
    tuple_T2OO cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyPtr cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyTagged cpy_r_r115;
    PyObject *cpy_r_r116;
    CPyPtr cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    CPyPtr cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    tuple_T2OC cpy_r_r140;
    PyObject *cpy_r_r141;
    tuple_T2OO cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject **cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    CPyPtr cpy_r_r153;
    CPyPtr cpy_r_r154;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_stale_info;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    CPyTagged cpy_r_r161;
    int64_t cpy_r_r162;
    CPyTagged cpy_r_r163;
    PyObject *cpy_r_r164;
    tuple_T4CIOO cpy_r_r165;
    CPyTagged cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_name;
    PyObject *cpy_r_symnode;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    CPyPtr cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    tuple_T2OO cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_method;
    PyObject *cpy_r_r184;
    PyObject *cpy_r__;
    PyObject *cpy_r_r185;
    char cpy_r_r186;
    char cpy_r_r187;
    tuple_T2OO cpy_r_r188;
    PyObject *cpy_r_r189;
    CPyPtr cpy_r_r190;
    PyObject *cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    CPyPtr cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    char cpy_r_r199;
    PyObject *cpy_r_r200;
    CPyPtr cpy_r_r201;
    PyObject *cpy_r_r202;
    char cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    CPyPtr cpy_r_r206;
    PyObject *cpy_r_r207;
    char cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    tuple_T2OC cpy_r_r212;
    PyObject *cpy_r_r213;
    tuple_T2OO cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    CPyPtr cpy_r_r217;
    PyObject *cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    CPyPtr cpy_r_r224;
    PyObject *cpy_r_r225;
    char cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    int32_t cpy_r_r232;
    char cpy_r_r233;
    PyObject *cpy_r_r234;
    char cpy_r_r235;
    char cpy_r_r236;
    char cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    tuple_T2OC cpy_r_r241;
    PyObject *cpy_r_r242;
    tuple_T2OO cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject **cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    CPyPtr cpy_r_r253;
    CPyPtr cpy_r_r254;
    tuple_T2OC cpy_r_r255;
    PyObject *cpy_r_r256;
    tuple_T2OO cpy_r_r257;
    tuple_T2OO cpy_r_r258;
    cpy_r_r0 = CPyDef_update___lookup_target_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1092, CPyStatic_update___globals);
        goto CPyL165;
    }
    CPy_INCREF(cpy_r_manager);
    if (((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_manager != NULL) {
        CPy_DECREF(((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_manager);
    }
    ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_manager = cpy_r_manager;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1092, CPyStatic_update___globals);
        goto CPyL166;
    }
    CPy_INCREF(cpy_r_target);
    if (((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_target != NULL) {
        CPy_DECREF(((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_target);
    }
    ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_target = cpy_r_target;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1092, CPyStatic_update___globals);
        goto CPyL166;
    }
    cpy_r_r3 = CPyDef_update___not_found_lookup_target_obj();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1102, CPyStatic_update___globals);
        goto CPyL166;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___server___update___not_found_lookup_target_objObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___server___update___not_found_lookup_target_objObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___server___update___not_found_lookup_target_objObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1102, CPyStatic_update___globals);
        goto CPyL167;
    }
    if (((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_not_found != NULL) {
        CPy_DECREF(((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_not_found);
    }
    ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_not_found = cpy_r_r3;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1102, CPyStatic_update___globals);
        goto CPyL166;
    }
    cpy_r_r6 = ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "lookup_target", "lookup_target_env", "manager", 1105, CPyStatic_update___globals);
        goto CPyL166;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = ((mypy___build___BuildManagerObject *)cpy_r_r6)->_modules;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_modules = cpy_r_r7;
    cpy_r_r8 = ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_target;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "lookup_target", "lookup_target_env", "target", 1106, CPyStatic_update___globals);
        goto CPyL168;
    }
    CPy_INCREF(cpy_r_r8);
CPyL8: ;
    cpy_r_r9 = CPyDef_mypy___util___split_target(cpy_r_modules, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1106, CPyStatic_update___globals);
        goto CPyL168;
    }
    cpy_r_items = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_items == cpy_r_r10;
    if (cpy_r_r11) {
        goto CPyL169;
    } else
        goto CPyL14;
CPyL10: ;
    cpy_r_r12 = ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_not_found;
    if (unlikely(cpy_r_r12 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'not_found' of 'lookup_target_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r12);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1108, CPyStatic_update___globals);
        goto CPyL165;
    }
CPyL11: ;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r12, 0, 0, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1108, CPyStatic_update___globals);
        goto CPyL165;
    } else
        goto CPyL170;
CPyL12: ;
    cpy_r_r14 = PyList_New(0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1109, CPyStatic_update___globals);
        goto CPyL165;
    }
    cpy_r_r15.f0 = cpy_r_r14;
    cpy_r_r15.f1 = 1;
    CPy_INCREF(cpy_r_r15.f0);
    CPy_DECREF(cpy_r_r15.f0);
    cpy_r_r16 = Py_None;
    cpy_r_r17.f0 = cpy_r_r14;
    cpy_r_r17.f1 = cpy_r_r16;
    CPy_INCREF(cpy_r_r17.f0);
    CPy_INCREF(cpy_r_r17.f1);
    CPy_DECREF(cpy_r_r14);
    return cpy_r_r17;
CPyL14: ;
    PyObject *__tmp6774;
    if (unlikely(!(PyTuple_Check(cpy_r_items) && PyTuple_GET_SIZE(cpy_r_items) == 2))) {
        __tmp6774 = NULL;
        goto __LL6775;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_items, 0))))
        __tmp6774 = PyTuple_GET_ITEM(cpy_r_items, 0);
    else {
        __tmp6774 = NULL;
    }
    if (__tmp6774 == NULL) goto __LL6775;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_items, 1))))
        __tmp6774 = PyTuple_GET_ITEM(cpy_r_items, 1);
    else {
        __tmp6774 = NULL;
    }
    if (__tmp6774 == NULL) goto __LL6775;
    __tmp6774 = cpy_r_items;
__LL6775: ;
    if (unlikely(__tmp6774 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_items); cpy_r_r18 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6776 = PyTuple_GET_ITEM(cpy_r_items, 0);
        CPy_INCREF(__tmp6776);
        PyObject *__tmp6777;
        if (likely(PyUnicode_Check(__tmp6776)))
            __tmp6777 = __tmp6776;
        else {
            CPy_TypeError("str", __tmp6776); 
            __tmp6777 = NULL;
        }
        cpy_r_r18.f0 = __tmp6777;
        PyObject *__tmp6778 = PyTuple_GET_ITEM(cpy_r_items, 1);
        CPy_INCREF(__tmp6778);
        PyObject *__tmp6779;
        if (likely(PyUnicode_Check(__tmp6778)))
            __tmp6779 = __tmp6778;
        else {
            CPy_TypeError("str", __tmp6778); 
            __tmp6779 = NULL;
        }
        cpy_r_r18.f1 = __tmp6779;
    }
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r18.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1110, CPyStatic_update___globals);
        goto CPyL168;
    }
    cpy_r_r19 = cpy_r_r18.f0;
    CPy_INCREF(cpy_r_r19);
    cpy_r_module = cpy_r_r19;
    cpy_r_r20 = cpy_r_r18.f1;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r18.f0);
    CPy_DECREF(cpy_r_r18.f1);
    cpy_r_rest = cpy_r_r20;
    cpy_r_r21 = CPyStr_IsTrue(cpy_r_rest);
    if (!cpy_r_r21) goto CPyL171;
    cpy_r_r22 = CPyStatics[224]; /* '.' */
    cpy_r_r23 = PyUnicode_Split(cpy_r_rest, cpy_r_r22, -1);
    CPy_DECREF(cpy_r_rest);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1112, CPyStatic_update___globals);
        goto CPyL172;
    }
    cpy_r_components = cpy_r_r23;
    goto CPyL20;
CPyL18: ;
    cpy_r_r24 = PyList_New(0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1114, CPyStatic_update___globals);
        goto CPyL172;
    }
    cpy_r_components = cpy_r_r24;
CPyL20: ;
    cpy_r_r25 = CPyDict_GetItem(cpy_r_modules, cpy_r_module);
    CPy_DECREF(cpy_r_modules);
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1115, CPyStatic_update___globals);
        goto CPyL173;
    }
    if (likely(Py_TYPE(cpy_r_r25) == CPyType_nodes___MypyFile))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1115, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_r25);
        goto CPyL173;
    }
    cpy_r_node = cpy_r_r26;
    cpy_r_r27 = Py_None;
    CPy_INCREF(cpy_r_r27);
    cpy_r_file = cpy_r_r27;
    cpy_r_r28 = Py_None;
    CPy_INCREF(cpy_r_r28);
    cpy_r_active_class = cpy_r_r28;
    cpy_r_r29 = 0;
CPyL23: ;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_components)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r29 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL174;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_components, cpy_r_r29);
    if (likely(PyUnicode_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1118, CPyStatic_update___globals, "str", cpy_r_r34);
        goto CPyL175;
    }
    cpy_r_c = cpy_r_r35;
    cpy_r_r36 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    if (!cpy_r_r39) goto CPyL27;
    cpy_r_r40 = cpy_r_r39;
    goto CPyL28;
CPyL27: ;
    cpy_r_r41 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    cpy_r_r40 = cpy_r_r44;
CPyL28: ;
    if (cpy_r_r40) {
        goto CPyL176;
    } else
        goto CPyL31;
CPyL29: ;
    CPy_INCREF(cpy_r_node);
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r45 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1120, CPyStatic_update___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL177;
    }
    cpy_r_active_class = cpy_r_r45;
CPyL31: ;
    cpy_r_r46 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r47 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 == cpy_r_r46;
    if (cpy_r_r49) {
        goto CPyL178;
    } else
        goto CPyL34;
CPyL32: ;
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___MypyFile))
        cpy_r_r50 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1122, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_node);
        goto CPyL179;
    }
    cpy_r_file = cpy_r_r50;
CPyL34: ;
    cpy_r_r51 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    if (!cpy_r_r54) goto CPyL36;
    cpy_r_r55 = cpy_r_r54;
    goto CPyL40;
CPyL36: ;
    cpy_r_r56 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    if (!cpy_r_r59) goto CPyL38;
    cpy_r_r60 = cpy_r_r59;
    goto CPyL39;
CPyL38: ;
    cpy_r_r61 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r62 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r63 = *(PyObject * *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 == cpy_r_r61;
    cpy_r_r60 = cpy_r_r64;
CPyL39: ;
    cpy_r_r55 = cpy_r_r60;
CPyL40: ;
    if (!cpy_r_r55) goto CPyL180;
    CPy_INCREF(cpy_r_node);
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___MypyFile)
        cpy_r_r65 = cpy_r_node;
    else {
        cpy_r_r65 = NULL;
    }
    if (cpy_r_r65 != NULL) goto __LL6780;
    if ((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo))
        cpy_r_r65 = cpy_r_node;
    else {
        cpy_r_r65 = NULL;
    }
    if (cpy_r_r65 != NULL) goto __LL6780;
    CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1123, CPyStatic_update___globals, "union[mypy.nodes.MypyFile, mypy.nodes.TypeInfo]", cpy_r_node);
    goto CPyL181;
__LL6780: ;
    cpy_r_r66 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_r65)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    if (!cpy_r_r69) goto CPyL46;
    if (likely(Py_TYPE(cpy_r_r65) == CPyType_nodes___MypyFile))
        cpy_r_r70 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1123, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_r65);
        goto CPyL181;
    }
    cpy_r_r71 = ((mypy___nodes___MypyFileObject *)cpy_r_r70)->_names;
    if (unlikely(cpy_r_r71 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'MypyFile' undefined");
    } else {
        CPy_INCREF(cpy_r_r71);
    }
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1123, CPyStatic_update___globals);
        goto CPyL181;
    }
CPyL45: ;
    cpy_r_r72 = cpy_r_r71;
    goto CPyL49;
CPyL46: ;
    if (likely((Py_TYPE(cpy_r_r65) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r65) == CPyType_nodes___TypeInfo)))
        cpy_r_r73 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1123, CPyStatic_update___globals, "mypy.nodes.TypeInfo", cpy_r_r65);
        goto CPyL181;
    }
    cpy_r_r74 = ((mypy___nodes___TypeInfoObject *)cpy_r_r73)->_names;
    if (unlikely(cpy_r_r74 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r74);
    }
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1123, CPyStatic_update___globals);
        goto CPyL181;
    }
CPyL48: ;
    cpy_r_r72 = cpy_r_r74;
CPyL49: ;
    cpy_r_r75 = PyDict_Contains(cpy_r_r72, cpy_r_c);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1123, CPyStatic_update___globals);
        goto CPyL181;
    }
    cpy_r_r77 = cpy_r_r75;
    cpy_r_r78 = cpy_r_r77 ^ 1;
    if (cpy_r_r78) {
        goto CPyL180;
    } else
        goto CPyL55;
CPyL51: ;
    cpy_r_r79 = ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_not_found;
    if (unlikely(cpy_r_r79 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'not_found' of 'lookup_target_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r79);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1124, CPyStatic_update___globals);
        goto CPyL165;
    }
CPyL52: ;
    cpy_r_r80 = _PyObject_Vectorcall(cpy_r_r79, 0, 0, 0);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1124, CPyStatic_update___globals);
        goto CPyL165;
    } else
        goto CPyL182;
CPyL53: ;
    cpy_r_r81 = PyList_New(0);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1125, CPyStatic_update___globals);
        goto CPyL165;
    }
    cpy_r_r82.f0 = cpy_r_r81;
    cpy_r_r82.f1 = 1;
    CPy_INCREF(cpy_r_r82.f0);
    CPy_DECREF(cpy_r_r82.f0);
    cpy_r_r83 = Py_None;
    cpy_r_r84.f0 = cpy_r_r81;
    cpy_r_r84.f1 = cpy_r_r83;
    CPy_INCREF(cpy_r_r84.f0);
    CPy_INCREF(cpy_r_r84.f1);
    CPy_DECREF(cpy_r_r81);
    return cpy_r_r84;
CPyL55: ;
    CPy_INCREF(cpy_r_node);
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___MypyFile)
        cpy_r_r85 = cpy_r_node;
    else {
        cpy_r_r85 = NULL;
    }
    if (cpy_r_r85 != NULL) goto __LL6781;
    if ((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo))
        cpy_r_r85 = cpy_r_node;
    else {
        cpy_r_r85 = NULL;
    }
    if (cpy_r_r85 != NULL) goto __LL6781;
    CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1129, CPyStatic_update___globals, "union[mypy.nodes.MypyFile, mypy.nodes.TypeInfo]", cpy_r_node);
    goto CPyL181;
__LL6781: ;
    cpy_r_r86 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r87 = (CPyPtr)&((PyObject *)cpy_r_r85)->ob_type;
    cpy_r_r88 = *(PyObject * *)cpy_r_r87;
    cpy_r_r89 = cpy_r_r88 == cpy_r_r86;
    if (!cpy_r_r89) goto CPyL60;
    if (likely(Py_TYPE(cpy_r_r85) == CPyType_nodes___MypyFile))
        cpy_r_r90 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1129, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_r85);
        goto CPyL181;
    }
    cpy_r_r91 = ((mypy___nodes___MypyFileObject *)cpy_r_r90)->_names;
    if (unlikely(cpy_r_r91 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'MypyFile' undefined");
    } else {
        CPy_INCREF(cpy_r_r91);
    }
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1129, CPyStatic_update___globals);
        goto CPyL181;
    }
CPyL59: ;
    cpy_r_r92 = cpy_r_r91;
    goto CPyL63;
CPyL60: ;
    if (likely((Py_TYPE(cpy_r_r85) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r85) == CPyType_nodes___TypeInfo)))
        cpy_r_r93 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1129, CPyStatic_update___globals, "mypy.nodes.TypeInfo", cpy_r_r85);
        goto CPyL181;
    }
    cpy_r_r94 = ((mypy___nodes___TypeInfoObject *)cpy_r_r93)->_names;
    if (unlikely(cpy_r_r94 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r94);
    }
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1129, CPyStatic_update___globals);
        goto CPyL181;
    }
CPyL62: ;
    cpy_r_r92 = cpy_r_r94;
CPyL63: ;
    cpy_r_r95 = CPyDict_GetItem(cpy_r_r92, cpy_r_c);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1129, CPyStatic_update___globals);
        goto CPyL181;
    }
    if (likely(Py_TYPE(cpy_r_r95) == CPyType_nodes___SymbolTableNode))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1129, CPyStatic_update___globals, "mypy.nodes.SymbolTableNode", cpy_r_r95);
        goto CPyL181;
    }
    cpy_r_r97 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r96)->_plugin_generated;
    CPy_DECREF(cpy_r_r96);
    if (cpy_r_r97) {
        goto CPyL183;
    } else
        goto CPyL68;
CPyL66: ;
    cpy_r_r98 = PyList_New(0);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1130, CPyStatic_update___globals);
        goto CPyL165;
    }
    cpy_r_r99.f0 = cpy_r_r98;
    cpy_r_r99.f1 = 1;
    CPy_INCREF(cpy_r_r99.f0);
    CPy_DECREF(cpy_r_r99.f0);
    cpy_r_r100 = Py_None;
    cpy_r_r101.f0 = cpy_r_r98;
    cpy_r_r101.f1 = cpy_r_r100;
    CPy_INCREF(cpy_r_r101.f0);
    CPy_INCREF(cpy_r_r101.f1);
    CPy_DECREF(cpy_r_r98);
    return cpy_r_r101;
CPyL68: ;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___MypyFile)
        cpy_r_r102 = cpy_r_node;
    else {
        cpy_r_r102 = NULL;
    }
    if (cpy_r_r102 != NULL) goto __LL6782;
    if ((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo))
        cpy_r_r102 = cpy_r_node;
    else {
        cpy_r_r102 = NULL;
    }
    if (cpy_r_r102 != NULL) goto __LL6782;
    CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1131, CPyStatic_update___globals, "union[mypy.nodes.MypyFile, mypy.nodes.TypeInfo]", cpy_r_node);
    goto CPyL184;
__LL6782: ;
    cpy_r_r103 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r104 = (CPyPtr)&((PyObject *)cpy_r_r102)->ob_type;
    cpy_r_r105 = *(PyObject * *)cpy_r_r104;
    cpy_r_r106 = cpy_r_r105 == cpy_r_r103;
    if (!cpy_r_r106) goto CPyL73;
    if (likely(Py_TYPE(cpy_r_r102) == CPyType_nodes___MypyFile))
        cpy_r_r107 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1131, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_r102);
        goto CPyL184;
    }
    cpy_r_r108 = ((mypy___nodes___MypyFileObject *)cpy_r_r107)->_names;
    if (unlikely(cpy_r_r108 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'MypyFile' undefined");
    } else {
        CPy_INCREF(cpy_r_r108);
    }
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1131, CPyStatic_update___globals);
        goto CPyL184;
    }
CPyL72: ;
    cpy_r_r109 = cpy_r_r108;
    goto CPyL76;
CPyL73: ;
    if (likely((Py_TYPE(cpy_r_r102) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r102) == CPyType_nodes___TypeInfo)))
        cpy_r_r110 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1131, CPyStatic_update___globals, "mypy.nodes.TypeInfo", cpy_r_r102);
        goto CPyL184;
    }
    cpy_r_r111 = ((mypy___nodes___TypeInfoObject *)cpy_r_r110)->_names;
    if (unlikely(cpy_r_r111 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r111);
    }
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1131, CPyStatic_update___globals);
        goto CPyL184;
    }
CPyL75: ;
    cpy_r_r109 = cpy_r_r111;
CPyL76: ;
    cpy_r_r112 = CPyDict_GetItem(cpy_r_r109, cpy_r_c);
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_c);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1131, CPyStatic_update___globals);
        goto CPyL185;
    }
    if (likely(Py_TYPE(cpy_r_r112) == CPyType_nodes___SymbolTableNode))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1131, CPyStatic_update___globals, "mypy.nodes.SymbolTableNode", cpy_r_r112);
        goto CPyL185;
    }
    cpy_r_r114 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r113)->_node;
    CPy_INCREF(cpy_r_r114);
    CPy_DECREF(cpy_r_r113);
    cpy_r_node = cpy_r_r114;
    cpy_r_r115 = cpy_r_r29 + 2;
    cpy_r_r29 = cpy_r_r115;
    goto CPyL23;
CPyL80: ;
    cpy_r_r116 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r117 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r118 = *(PyObject * *)cpy_r_r117;
    cpy_r_r119 = cpy_r_r118 == cpy_r_r116;
    if (!cpy_r_r119) goto CPyL82;
    cpy_r_r120 = cpy_r_r119;
    goto CPyL83;
CPyL82: ;
    cpy_r_r121 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r122 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r123 = *(PyObject * *)cpy_r_r122;
    cpy_r_r124 = cpy_r_r123 == cpy_r_r121;
    cpy_r_r120 = cpy_r_r124;
CPyL83: ;
    if (cpy_r_r120) {
        goto CPyL186;
    } else
        goto CPyL187;
CPyL84: ;
    cpy_r_r125 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r126 = cpy_r_file != cpy_r_r125;
    if (cpy_r_r126) {
        goto CPyL87;
    } else
        goto CPyL188;
CPyL85: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r127 = 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1137, CPyStatic_update___globals);
        goto CPyL165;
    }
    CPy_Unreachable();
CPyL87: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r128 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1138, CPyStatic_update___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL189;
    }
    cpy_r_r129 = CPY_GET_ATTR(cpy_r_r128, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1138, CPyStatic_update___globals);
        goto CPyL189;
    }
CPyL89: ;
    cpy_r_r130 = ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_target;
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "lookup_target", "lookup_target_env", "target", 1138, CPyStatic_update___globals);
        goto CPyL190;
    }
    CPy_INCREF(cpy_r_r130);
CPyL90: ;
    cpy_r_r131 = PyUnicode_Compare(cpy_r_r129, cpy_r_r130);
    CPy_DECREF(cpy_r_r129);
    CPy_DECREF(cpy_r_r130);
    cpy_r_r132 = cpy_r_r131 == -1;
    if (!cpy_r_r132) goto CPyL93;
    cpy_r_r133 = PyErr_Occurred();
    cpy_r_r134 = cpy_r_r133 != NULL;
    if (!cpy_r_r134) goto CPyL93;
    cpy_r_r135 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1138, CPyStatic_update___globals);
        goto CPyL189;
    }
CPyL93: ;
    cpy_r_r136 = cpy_r_r131 != 0;
    if (cpy_r_r136) {
        goto CPyL191;
    } else
        goto CPyL98;
CPyL94: ;
    cpy_r_r137 = ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_not_found;
    if (unlikely(cpy_r_r137 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'not_found' of 'lookup_target_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r137);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1142, CPyStatic_update___globals);
        goto CPyL165;
    }
CPyL95: ;
    cpy_r_r138 = _PyObject_Vectorcall(cpy_r_r137, 0, 0, 0);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1142, CPyStatic_update___globals);
        goto CPyL165;
    } else
        goto CPyL192;
CPyL96: ;
    cpy_r_r139 = PyList_New(0);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1143, CPyStatic_update___globals);
        goto CPyL165;
    }
    cpy_r_r140.f0 = cpy_r_r139;
    cpy_r_r140.f1 = 1;
    CPy_INCREF(cpy_r_r140.f0);
    CPy_DECREF(cpy_r_r140.f0);
    cpy_r_r141 = Py_None;
    cpy_r_r142.f0 = cpy_r_r139;
    cpy_r_r142.f1 = cpy_r_r141;
    CPy_INCREF(cpy_r_r142.f0);
    CPy_INCREF(cpy_r_r142.f1);
    CPy_DECREF(cpy_r_r139);
    return cpy_r_r142;
CPyL98: ;
    if (likely(cpy_r_file != Py_None))
        cpy_r_r143 = cpy_r_file;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1144, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_file);
        goto CPyL193;
    }
    cpy_r_r144 = CPyStatic_update___globals;
    cpy_r_r145 = CPyStatics[1093]; /* 'FineGrainedDeferredNode' */
    cpy_r_r146 = CPyDict_GetItem(cpy_r_r144, cpy_r_r145);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1144, CPyStatic_update___globals);
        goto CPyL194;
    }
    cpy_r_r147 = Py_None;
    PyObject *cpy_r_r148[2] = {cpy_r_r143, cpy_r_r147};
    cpy_r_r149 = (PyObject **)&cpy_r_r148;
    cpy_r_r150 = _PyObject_Vectorcall(cpy_r_r146, cpy_r_r149, 2, 0);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1144, CPyStatic_update___globals);
        goto CPyL194;
    }
    CPy_DECREF(cpy_r_r143);
    if (likely(PyTuple_Check(cpy_r_r150)))
        cpy_r_r151 = cpy_r_r150;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1144, CPyStatic_update___globals, "tuple", cpy_r_r150);
        goto CPyL193;
    }
    cpy_r_r152 = PyList_New(1);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1144, CPyStatic_update___globals);
        goto CPyL195;
    }
    cpy_r_r153 = (CPyPtr)&((PyListObject *)cpy_r_r152)->ob_item;
    cpy_r_r154 = *(CPyPtr *)cpy_r_r153;
    *(PyObject * *)cpy_r_r154 = cpy_r_r151;
    cpy_r_result = cpy_r_r152;
    cpy_r_r155 = Py_None;
    CPy_INCREF(cpy_r_r155);
    cpy_r_stale_info = cpy_r_r155;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r156 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1146, CPyStatic_update___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL196;
    }
    cpy_r_r157 = ((mypy___nodes___TypeInfoObject *)cpy_r_r156)->_is_protocol;
    if (unlikely(cpy_r_r157 == 2)) {
        CPy_AttributeError("mypy/server/update.py", "lookup_target", "TypeInfo", "is_protocol", 1146, CPyStatic_update___globals);
        goto CPyL196;
    }
CPyL105: ;
    if (cpy_r_r157) {
        goto CPyL197;
    } else
        goto CPyL108;
CPyL106: ;
    CPy_INCREF(cpy_r_node);
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r158 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1147, CPyStatic_update___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL198;
    }
    cpy_r_stale_info = cpy_r_r158;
CPyL108: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r159 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1148, CPyStatic_update___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL196;
    }
    cpy_r_r160 = ((mypy___nodes___TypeInfoObject *)cpy_r_r159)->_names;
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "lookup_target", "TypeInfo", "names", 1148, CPyStatic_update___globals);
        goto CPyL196;
    }
    CPy_INCREF(cpy_r_r160);
CPyL110: ;
    CPy_DECREF(cpy_r_node);
    cpy_r_r161 = 0;
    cpy_r_r162 = PyDict_Size(cpy_r_r160);
    cpy_r_r163 = cpy_r_r162 << 1;
    cpy_r_r164 = CPyDict_GetItemsIter(cpy_r_r160);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1148, CPyStatic_update___globals);
        goto CPyL199;
    }
CPyL111: ;
    cpy_r_r165 = CPyDict_NextItem(cpy_r_r164, cpy_r_r161);
    cpy_r_r166 = cpy_r_r165.f1;
    cpy_r_r161 = cpy_r_r166;
    cpy_r_r167 = cpy_r_r165.f0;
    if (!cpy_r_r167) goto CPyL200;
    cpy_r_r168 = cpy_r_r165.f2;
    CPy_INCREF(cpy_r_r168);
    cpy_r_r169 = cpy_r_r165.f3;
    CPy_INCREF(cpy_r_r169);
    CPy_DECREF(cpy_r_r165.f2);
    CPy_DECREF(cpy_r_r165.f3);
    if (likely(PyUnicode_Check(cpy_r_r168)))
        cpy_r_r170 = cpy_r_r168;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1148, CPyStatic_update___globals, "str", cpy_r_r168);
        goto CPyL201;
    }
    if (likely(Py_TYPE(cpy_r_r169) == CPyType_nodes___SymbolTableNode))
        cpy_r_r171 = cpy_r_r169;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1148, CPyStatic_update___globals, "mypy.nodes.SymbolTableNode", cpy_r_r169);
        goto CPyL202;
    }
    cpy_r_name = cpy_r_r170;
    cpy_r_symnode = cpy_r_r171;
    cpy_r_r172 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_symnode)->_node;
    CPy_INCREF(cpy_r_r172);
    CPy_DECREF(cpy_r_symnode);
    cpy_r_node = cpy_r_r172;
    cpy_r_r173 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r174 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r175 = *(PyObject * *)cpy_r_r174;
    CPy_DECREF(cpy_r_node);
    cpy_r_r176 = cpy_r_r175 == cpy_r_r173;
    if (!cpy_r_r176) goto CPyL203;
    cpy_r_r177 = ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_manager;
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "lookup_target", "lookup_target_env", "manager", 1151, CPyStatic_update___globals);
        goto CPyL204;
    }
    CPy_INCREF(cpy_r_r177);
CPyL116: ;
    cpy_r_r178 = ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_target;
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "lookup_target", "lookup_target_env", "target", 1151, CPyStatic_update___globals);
        goto CPyL205;
    }
    CPy_INCREF(cpy_r_r178);
CPyL117: ;
    cpy_r_r179 = CPyStatics[224]; /* '.' */
    cpy_r_r180 = PyUnicode_Concat(cpy_r_r178, cpy_r_r179);
    CPy_DECREF(cpy_r_r178);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1151, CPyStatic_update___globals);
        goto CPyL205;
    }
    cpy_r_r181 = PyUnicode_Concat(cpy_r_r180, cpy_r_name);
    CPy_DECREF(cpy_r_r180);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1151, CPyStatic_update___globals);
        goto CPyL206;
    }
    cpy_r_r182 = CPyDef_update___lookup_target(cpy_r_r177, cpy_r_r181);
    CPy_DECREF(cpy_r_r177);
    CPy_DECREF(cpy_r_r181);
    if (unlikely(cpy_r_r182.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1151, CPyStatic_update___globals);
        goto CPyL207;
    }
    cpy_r_r183 = cpy_r_r182.f0;
    CPy_INCREF(cpy_r_r183);
    cpy_r_method = cpy_r_r183;
    cpy_r_r184 = cpy_r_r182.f1;
    CPy_INCREF(cpy_r_r184);
    CPy_DECREF(cpy_r_r182.f0);
    CPy_DECREF(cpy_r_r182.f1);
    cpy_r__ = cpy_r_r184;
    CPy_DECREF(cpy_r__);
    cpy_r_r185 = CPyList_Extend(cpy_r_result, cpy_r_method);
    CPy_DECREF(cpy_r_method);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1152, CPyStatic_update___globals);
        goto CPyL207;
    } else
        goto CPyL208;
CPyL121: ;
    cpy_r_r186 = CPyDict_CheckSize(cpy_r_r160, cpy_r_r163);
    if (unlikely(!cpy_r_r186)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1148, CPyStatic_update___globals);
        goto CPyL207;
    } else
        goto CPyL111;
CPyL122: ;
    cpy_r_r187 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1148, CPyStatic_update___globals);
        goto CPyL209;
    }
    cpy_r_r188.f0 = cpy_r_result;
    cpy_r_r188.f1 = cpy_r_stale_info;
    CPy_INCREF(cpy_r_r188.f0);
    CPy_INCREF(cpy_r_r188.f1);
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_stale_info);
    return cpy_r_r188;
CPyL124: ;
    cpy_r_r189 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r190 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r191 = *(PyObject * *)cpy_r_r190;
    cpy_r_r192 = cpy_r_r191 == cpy_r_r189;
    if (!cpy_r_r192) goto CPyL127;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r193 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1156, CPyStatic_update___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL210;
    }
    cpy_r_r194 = ((mypy___nodes___DecoratorObject *)cpy_r_r193)->_func;
    CPy_INCREF(cpy_r_r194);
    CPy_DECREF(cpy_r_node);
    cpy_r_node = cpy_r_r194;
CPyL127: ;
    cpy_r_r195 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r196 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r197 = *(PyObject * *)cpy_r_r196;
    cpy_r_r198 = cpy_r_r197 == cpy_r_r195;
    if (!cpy_r_r198) goto CPyL129;
    cpy_r_r199 = cpy_r_r198;
    goto CPyL130;
CPyL129: ;
    cpy_r_r200 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r201 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r202 = *(PyObject * *)cpy_r_r201;
    cpy_r_r203 = cpy_r_r202 == cpy_r_r200;
    cpy_r_r199 = cpy_r_r203;
CPyL130: ;
    if (!cpy_r_r199) goto CPyL132;
    cpy_r_r204 = cpy_r_r199;
    goto CPyL133;
CPyL132: ;
    cpy_r_r205 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r206 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r207 = *(PyObject * *)cpy_r_r206;
    cpy_r_r208 = cpy_r_r207 == cpy_r_r205;
    cpy_r_r204 = cpy_r_r208;
CPyL133: ;
    if (cpy_r_r204) {
        goto CPyL138;
    } else
        goto CPyL211;
CPyL134: ;
    cpy_r_r209 = ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_not_found;
    if (unlikely(cpy_r_r209 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'not_found' of 'lookup_target_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r209);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1160, CPyStatic_update___globals);
        goto CPyL165;
    }
CPyL135: ;
    cpy_r_r210 = _PyObject_Vectorcall(cpy_r_r209, 0, 0, 0);
    CPy_DECREF(cpy_r_r209);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1160, CPyStatic_update___globals);
        goto CPyL165;
    } else
        goto CPyL212;
CPyL136: ;
    cpy_r_r211 = PyList_New(0);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1161, CPyStatic_update___globals);
        goto CPyL165;
    }
    cpy_r_r212.f0 = cpy_r_r211;
    cpy_r_r212.f1 = 1;
    CPy_INCREF(cpy_r_r212.f0);
    CPy_DECREF(cpy_r_r212.f0);
    cpy_r_r213 = Py_None;
    cpy_r_r214.f0 = cpy_r_r211;
    cpy_r_r214.f1 = cpy_r_r213;
    CPy_INCREF(cpy_r_r214.f0);
    CPy_INCREF(cpy_r_r214.f1);
    CPy_DECREF(cpy_r_r211);
    return cpy_r_r214;
CPyL138: ;
    CPy_INCREF(cpy_r_node);
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef)
        cpy_r_r215 = cpy_r_node;
    else {
        cpy_r_r215 = NULL;
    }
    if (cpy_r_r215 != NULL) goto __LL6783;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___MypyFile)
        cpy_r_r215 = cpy_r_node;
    else {
        cpy_r_r215 = NULL;
    }
    if (cpy_r_r215 != NULL) goto __LL6783;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r215 = cpy_r_node;
    else {
        cpy_r_r215 = NULL;
    }
    if (cpy_r_r215 != NULL) goto __LL6783;
    CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1162, CPyStatic_update___globals, "union[mypy.nodes.FuncDef, mypy.nodes.MypyFile, mypy.nodes.OverloadedFuncDef]", cpy_r_node);
    goto CPyL210;
__LL6783: ;
    cpy_r_r216 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r217 = (CPyPtr)&((PyObject *)cpy_r_r215)->ob_type;
    cpy_r_r218 = *(PyObject * *)cpy_r_r217;
    cpy_r_r219 = cpy_r_r218 == cpy_r_r216;
    if (!cpy_r_r219) goto CPyL143;
    if (likely(Py_TYPE(cpy_r_r215) == CPyType_nodes___FuncDef))
        cpy_r_r220 = cpy_r_r215;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1162, CPyStatic_update___globals, "mypy.nodes.FuncDef", cpy_r_r215);
        goto CPyL210;
    }
    cpy_r_r221 = CPY_GET_ATTR(cpy_r_r220, CPyType_nodes___FuncDef, 7, mypy___nodes___FuncDefObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r220);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1162, CPyStatic_update___globals);
        goto CPyL210;
    }
CPyL142: ;
    cpy_r_r222 = cpy_r_r221;
    goto CPyL150;
CPyL143: ;
    cpy_r_r223 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r224 = (CPyPtr)&((PyObject *)cpy_r_r215)->ob_type;
    cpy_r_r225 = *(PyObject * *)cpy_r_r224;
    cpy_r_r226 = cpy_r_r225 == cpy_r_r223;
    if (!cpy_r_r226) goto CPyL147;
    if (likely(Py_TYPE(cpy_r_r215) == CPyType_nodes___MypyFile))
        cpy_r_r227 = cpy_r_r215;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1162, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_r215);
        goto CPyL210;
    }
    cpy_r_r228 = CPY_GET_ATTR(cpy_r_r227, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r227);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1162, CPyStatic_update___globals);
        goto CPyL210;
    }
CPyL146: ;
    cpy_r_r222 = cpy_r_r228;
    goto CPyL150;
CPyL147: ;
    if (likely(Py_TYPE(cpy_r_r215) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r229 = cpy_r_r215;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1162, CPyStatic_update___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r215);
        goto CPyL210;
    }
    cpy_r_r230 = CPY_GET_ATTR(cpy_r_r229, CPyType_nodes___OverloadedFuncDef, 7, mypy___nodes___OverloadedFuncDefObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r229);
    if (unlikely(cpy_r_r230 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1162, CPyStatic_update___globals);
        goto CPyL210;
    }
CPyL149: ;
    cpy_r_r222 = cpy_r_r230;
CPyL150: ;
    cpy_r_r231 = ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_target;
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "lookup_target", "lookup_target_env", "target", 1162, CPyStatic_update___globals);
        goto CPyL213;
    }
    CPy_INCREF(cpy_r_r231);
CPyL151: ;
    cpy_r_r232 = PyUnicode_Compare(cpy_r_r222, cpy_r_r231);
    CPy_DECREF(cpy_r_r222);
    CPy_DECREF(cpy_r_r231);
    cpy_r_r233 = cpy_r_r232 == -1;
    if (!cpy_r_r233) goto CPyL154;
    cpy_r_r234 = PyErr_Occurred();
    cpy_r_r235 = cpy_r_r234 != NULL;
    if (!cpy_r_r235) goto CPyL154;
    cpy_r_r236 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r236)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1162, CPyStatic_update___globals);
        goto CPyL210;
    }
CPyL154: ;
    cpy_r_r237 = cpy_r_r232 != 0;
    if (cpy_r_r237) {
        goto CPyL214;
    } else
        goto CPyL215;
CPyL155: ;
    cpy_r_r238 = ((mypy___server___update___lookup_target_envObject *)cpy_r_r0)->_not_found;
    if (unlikely(cpy_r_r238 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'not_found' of 'lookup_target_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r238);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1165, CPyStatic_update___globals);
        goto CPyL165;
    }
CPyL156: ;
    cpy_r_r239 = _PyObject_Vectorcall(cpy_r_r238, 0, 0, 0);
    CPy_DECREF(cpy_r_r238);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1165, CPyStatic_update___globals);
        goto CPyL165;
    } else
        goto CPyL216;
CPyL157: ;
    cpy_r_r240 = PyList_New(0);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1166, CPyStatic_update___globals);
        goto CPyL165;
    }
    cpy_r_r241.f0 = cpy_r_r240;
    cpy_r_r241.f1 = 1;
    CPy_INCREF(cpy_r_r241.f0);
    CPy_DECREF(cpy_r_r241.f0);
    cpy_r_r242 = Py_None;
    cpy_r_r243.f0 = cpy_r_r240;
    cpy_r_r243.f1 = cpy_r_r242;
    CPy_INCREF(cpy_r_r243.f0);
    CPy_INCREF(cpy_r_r243.f1);
    CPy_DECREF(cpy_r_r240);
    return cpy_r_r243;
CPyL159: ;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef)
        cpy_r_r244 = cpy_r_node;
    else {
        cpy_r_r244 = NULL;
    }
    if (cpy_r_r244 != NULL) goto __LL6784;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___MypyFile)
        cpy_r_r244 = cpy_r_node;
    else {
        cpy_r_r244 = NULL;
    }
    if (cpy_r_r244 != NULL) goto __LL6784;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r244 = cpy_r_node;
    else {
        cpy_r_r244 = NULL;
    }
    if (cpy_r_r244 != NULL) goto __LL6784;
    CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1167, CPyStatic_update___globals, "union[mypy.nodes.FuncDef, mypy.nodes.MypyFile, mypy.nodes.OverloadedFuncDef]", cpy_r_node);
    goto CPyL217;
__LL6784: ;
    cpy_r_r245 = CPyStatic_update___globals;
    cpy_r_r246 = CPyStatics[1093]; /* 'FineGrainedDeferredNode' */
    cpy_r_r247 = CPyDict_GetItem(cpy_r_r245, cpy_r_r246);
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1167, CPyStatic_update___globals);
        goto CPyL218;
    }
    PyObject *cpy_r_r248[2] = {cpy_r_r244, cpy_r_active_class};
    cpy_r_r249 = (PyObject **)&cpy_r_r248;
    cpy_r_r250 = _PyObject_Vectorcall(cpy_r_r247, cpy_r_r249, 2, 0);
    CPy_DECREF(cpy_r_r247);
    if (unlikely(cpy_r_r250 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1167, CPyStatic_update___globals);
        goto CPyL218;
    }
    CPy_DECREF(cpy_r_r244);
    CPy_DECREF(cpy_r_active_class);
    if (likely(PyTuple_Check(cpy_r_r250)))
        cpy_r_r251 = cpy_r_r250;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "lookup_target", 1167, CPyStatic_update___globals, "tuple", cpy_r_r250);
        goto CPyL165;
    }
    cpy_r_r252 = PyList_New(1);
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1167, CPyStatic_update___globals);
        goto CPyL219;
    }
    cpy_r_r253 = (CPyPtr)&((PyListObject *)cpy_r_r252)->ob_item;
    cpy_r_r254 = *(CPyPtr *)cpy_r_r253;
    *(PyObject * *)cpy_r_r254 = cpy_r_r251;
    cpy_r_r255.f0 = cpy_r_r252;
    cpy_r_r255.f1 = 1;
    CPy_INCREF(cpy_r_r255.f0);
    CPy_DECREF(cpy_r_r255.f0);
    cpy_r_r256 = Py_None;
    cpy_r_r257.f0 = cpy_r_r252;
    cpy_r_r257.f1 = cpy_r_r256;
    CPy_INCREF(cpy_r_r257.f0);
    CPy_INCREF(cpy_r_r257.f1);
    CPy_DECREF(cpy_r_r252);
    return cpy_r_r257;
CPyL165: ;
    tuple_T2OO __tmp6785 = { NULL, NULL };
    cpy_r_r258 = __tmp6785;
    return cpy_r_r258;
CPyL166: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL165;
CPyL167: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL165;
CPyL168: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_modules);
    goto CPyL165;
CPyL169: ;
    CPy_DECREF(cpy_r_modules);
    CPy_DECREF(cpy_r_items);
    goto CPyL10;
CPyL170: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL12;
CPyL171: ;
    CPy_DECREF(cpy_r_rest);
    goto CPyL18;
CPyL172: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_module);
    goto CPyL165;
CPyL173: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_components);
    goto CPyL165;
CPyL174: ;
    CPy_DECREF(cpy_r_components);
    goto CPyL80;
CPyL175: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_active_class);
    goto CPyL165;
CPyL176: ;
    CPy_DECREF(cpy_r_active_class);
    goto CPyL29;
CPyL177: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_c);
    goto CPyL165;
CPyL178: ;
    CPy_DECREF(cpy_r_file);
    goto CPyL32;
CPyL179: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_active_class);
    CPy_DecRef(cpy_r_c);
    goto CPyL165;
CPyL180: ;
    CPy_DECREF(cpy_r_components);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_file);
    CPy_DECREF(cpy_r_active_class);
    CPy_DECREF(cpy_r_c);
    goto CPyL51;
CPyL181: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_active_class);
    CPy_DecRef(cpy_r_c);
    goto CPyL165;
CPyL182: ;
    CPy_DECREF(cpy_r_r80);
    goto CPyL53;
CPyL183: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_components);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_file);
    CPy_DECREF(cpy_r_active_class);
    CPy_DECREF(cpy_r_c);
    goto CPyL66;
CPyL184: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_active_class);
    CPy_DecRef(cpy_r_c);
    goto CPyL165;
CPyL185: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_active_class);
    goto CPyL165;
CPyL186: ;
    CPy_DECREF(cpy_r_active_class);
    goto CPyL84;
CPyL187: ;
    CPy_DECREF(cpy_r_file);
    goto CPyL124;
CPyL188: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_file);
    goto CPyL85;
CPyL189: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_file);
    goto CPyL165;
CPyL190: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_r129);
    goto CPyL165;
CPyL191: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_file);
    goto CPyL94;
CPyL192: ;
    CPy_DECREF(cpy_r_r138);
    goto CPyL96;
CPyL193: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_node);
    goto CPyL165;
CPyL194: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r143);
    goto CPyL165;
CPyL195: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r151);
    goto CPyL165;
CPyL196: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_stale_info);
    goto CPyL165;
CPyL197: ;
    CPy_DECREF(cpy_r_stale_info);
    goto CPyL106;
CPyL198: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_result);
    goto CPyL165;
CPyL199: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_stale_info);
    CPy_DecRef(cpy_r_r160);
    goto CPyL165;
CPyL200: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r160);
    CPy_DECREF(cpy_r_r164);
    CPy_DECREF(cpy_r_r165.f2);
    CPy_DECREF(cpy_r_r165.f3);
    goto CPyL122;
CPyL201: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_stale_info);
    CPy_DecRef(cpy_r_r160);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r169);
    goto CPyL165;
CPyL202: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_stale_info);
    CPy_DecRef(cpy_r_r160);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r170);
    goto CPyL165;
CPyL203: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL121;
CPyL204: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_stale_info);
    CPy_DecRef(cpy_r_r160);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_name);
    goto CPyL165;
CPyL205: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_stale_info);
    CPy_DecRef(cpy_r_r160);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r177);
    goto CPyL165;
CPyL206: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_stale_info);
    CPy_DecRef(cpy_r_r160);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r177);
    goto CPyL165;
CPyL207: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_stale_info);
    CPy_DecRef(cpy_r_r160);
    CPy_DecRef(cpy_r_r164);
    goto CPyL165;
CPyL208: ;
    CPy_DECREF(cpy_r_r185);
    goto CPyL121;
CPyL209: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_stale_info);
    goto CPyL165;
CPyL210: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_active_class);
    goto CPyL165;
CPyL211: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_active_class);
    goto CPyL134;
CPyL212: ;
    CPy_DECREF(cpy_r_r210);
    goto CPyL136;
CPyL213: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_active_class);
    CPy_DecRef(cpy_r_r222);
    goto CPyL165;
CPyL214: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_active_class);
    goto CPyL155;
CPyL215: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL159;
CPyL216: ;
    CPy_DECREF(cpy_r_r239);
    goto CPyL157;
CPyL217: ;
    CPy_DecRef(cpy_r_active_class);
    goto CPyL165;
CPyL218: ;
    CPy_DecRef(cpy_r_active_class);
    CPy_DecRef(cpy_r_r244);
    goto CPyL165;
CPyL219: ;
    CPy_DecRef(cpy_r_r251);
    goto CPyL165;
}

PyObject *CPyPy_update___lookup_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"manager", "target", 0};
    static CPyArg_Parser parser = {"OO:lookup_target", kwlist, 0};
    PyObject *obj_manager;
    PyObject *obj_target;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_manager, &obj_target)) {
        return NULL;
    }
    PyObject *arg_manager;
    if (likely(Py_TYPE(obj_manager) == CPyType_mypy___build___BuildManager))
        arg_manager = obj_manager;
    else {
        CPy_TypeError("mypy.build.BuildManager", obj_manager); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(PyUnicode_Check(obj_target)))
        arg_target = obj_target;
    else {
        CPy_TypeError("str", obj_target); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_update___lookup_target(arg_manager, arg_target);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6786 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp6786);
    PyObject *__tmp6787 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp6787);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "lookup_target", 1092, CPyStatic_update___globals);
    return NULL;
}

char CPyDef_update___is_verbose(PyObject *cpy_r_manager) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    char cpy_r_r3;
    int64_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_options;
    cpy_r_r1 = ((mypy___options___OptionsObject *)cpy_r_r0)->_verbosity;
    cpy_r_r2 = cpy_r_r1 & 1;
    cpy_r_r3 = cpy_r_r2 == 0;
    cpy_r_r4 = 2 & 1;
    cpy_r_r5 = cpy_r_r4 == 0;
    cpy_r_r6 = cpy_r_r3 & cpy_r_r5;
    if (!cpy_r_r6) goto CPyL2;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r1 >= (Py_ssize_t)2;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL3;
CPyL2: ;
    cpy_r_r9 = CPyTagged_IsLt_(cpy_r_r1, 2);
    cpy_r_r10 = cpy_r_r9 ^ 1;
    cpy_r_r8 = cpy_r_r10;
CPyL3: ;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r11 = cpy_r_r8;
    goto CPyL6;
CPyL5: ;
    cpy_r_r11 = 0;
CPyL6: ;
    return cpy_r_r11;
}

PyObject *CPyPy_update___is_verbose(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"manager", 0};
    static CPyArg_Parser parser = {"O:is_verbose", kwlist, 0};
    PyObject *obj_manager;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_manager)) {
        return NULL;
    }
    PyObject *arg_manager;
    if (likely(Py_TYPE(obj_manager) == CPyType_mypy___build___BuildManager))
        arg_manager = obj_manager;
    else {
        CPy_TypeError("mypy.build.BuildManager", obj_manager); 
        goto fail;
    }
    char retval = CPyDef_update___is_verbose(arg_manager);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "is_verbose", 1170, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___target_from_node(PyObject *cpy_r_module, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
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
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
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
    cpy_r_r0 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL9;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___MypyFile))
        cpy_r_r4 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "target_from_node", 1184, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_node);
        goto CPyL44;
    }
    cpy_r_r5 = CPY_GET_ATTR(cpy_r_r4, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "target_from_node", 1184, CPyStatic_update___globals);
        goto CPyL44;
    }
CPyL3: ;
    cpy_r_r6 = PyUnicode_Compare(cpy_r_module, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 == -1;
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r8 = PyErr_Occurred();
    cpy_r_r9 = cpy_r_r8 != NULL;
    if (!cpy_r_r9) goto CPyL6;
    cpy_r_r10 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/server/update.py", "target_from_node", 1184, CPyStatic_update___globals);
        goto CPyL44;
    }
CPyL6: ;
    cpy_r_r11 = cpy_r_r6 != 0;
    if (!cpy_r_r11) goto CPyL8;
    cpy_r_r12 = Py_None;
    CPy_INCREF(cpy_r_r12);
    return cpy_r_r12;
CPyL8: ;
    CPy_INCREF(cpy_r_module);
    return cpy_r_module;
CPyL9: ;
    CPy_INCREF(cpy_r_node);
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef)
        cpy_r_r13 = cpy_r_node;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL6788;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r13 = cpy_r_node;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL6788;
    CPy_TypeErrorTraceback("mypy/server/update.py", "target_from_node", 1189, CPyStatic_update___globals, "union[mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef]", cpy_r_node);
    goto CPyL44;
__LL6788: ;
    cpy_r_r14 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_r13)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_nodes___FuncDef))
        cpy_r_r18 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "target_from_node", 1189, CPyStatic_update___globals, "mypy.nodes.FuncDef", cpy_r_r13);
        goto CPyL44;
    }
    cpy_r_r19 = ((mypy___nodes___FuncDefObject *)cpy_r_r18)->_info;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19;
    goto CPyL15;
CPyL13: ;
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r21 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "target_from_node", 1189, CPyStatic_update___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r13);
        goto CPyL44;
    }
    cpy_r_r22 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r21)->_info;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r20 = cpy_r_r22;
CPyL15: ;
    cpy_r_r23 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "target_from_node", -1, CPyStatic_update___globals);
        goto CPyL44;
    }
    if (!cpy_r_r23) goto CPyL34;
    CPy_INCREF(cpy_r_node);
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef)
        cpy_r_r24 = cpy_r_node;
    else {
        cpy_r_r24 = NULL;
    }
    if (cpy_r_r24 != NULL) goto __LL6789;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r24 = cpy_r_node;
    else {
        cpy_r_r24 = NULL;
    }
    if (cpy_r_r24 != NULL) goto __LL6789;
    CPy_TypeErrorTraceback("mypy/server/update.py", "target_from_node", 1190, CPyStatic_update___globals, "union[mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef]", cpy_r_node);
    goto CPyL44;
__LL6789: ;
    cpy_r_r25 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_r24)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (!cpy_r_r28) goto CPyL21;
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_nodes___FuncDef))
        cpy_r_r29 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "target_from_node", 1190, CPyStatic_update___globals, "mypy.nodes.FuncDef", cpy_r_r24);
        goto CPyL44;
    }
    cpy_r_r30 = ((mypy___nodes___FuncDefObject *)cpy_r_r29)->_info;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30;
    goto CPyL23;
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r32 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "target_from_node", 1190, CPyStatic_update___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r24);
        goto CPyL44;
    }
    cpy_r_r33 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r32)->_info;
    CPy_INCREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r31 = cpy_r_r33;
CPyL23: ;
    cpy_r_r34 = CPY_GET_ATTR(cpy_r_r31, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "target_from_node", 1190, CPyStatic_update___globals);
        goto CPyL44;
    }
CPyL24: ;
    cpy_r_r35 = CPyStatics[224]; /* '.' */
    CPy_INCREF(cpy_r_node);
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef)
        cpy_r_r36 = cpy_r_node;
    else {
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 != NULL) goto __LL6790;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r36 = cpy_r_node;
    else {
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 != NULL) goto __LL6790;
    CPy_TypeErrorTraceback("mypy/server/update.py", "target_from_node", 1190, CPyStatic_update___globals, "union[mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef]", cpy_r_node);
    goto CPyL45;
__LL6790: ;
    cpy_r_r37 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_r36)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (!cpy_r_r40) goto CPyL29;
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_nodes___FuncDef))
        cpy_r_r41 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "target_from_node", 1190, CPyStatic_update___globals, "mypy.nodes.FuncDef", cpy_r_r36);
        goto CPyL45;
    }
    cpy_r_r42 = CPY_GET_ATTR(cpy_r_r41, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "target_from_node", 1190, CPyStatic_update___globals);
        goto CPyL45;
    }
CPyL28: ;
    cpy_r_r43 = cpy_r_r42;
    goto CPyL32;
CPyL29: ;
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r44 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "target_from_node", 1190, CPyStatic_update___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r36);
        goto CPyL45;
    }
    cpy_r_r45 = CPY_GET_ATTR(cpy_r_r44, CPyType_nodes___OverloadedFuncDef, 9, mypy___nodes___OverloadedFuncDefObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "target_from_node", 1190, CPyStatic_update___globals);
        goto CPyL45;
    }
CPyL31: ;
    cpy_r_r43 = cpy_r_r45;
CPyL32: ;
    cpy_r_r46 = CPyStr_Build(3, cpy_r_r34, cpy_r_r35, cpy_r_r43);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "target_from_node", 1190, CPyStatic_update___globals);
        goto CPyL44;
    }
    return cpy_r_r46;
CPyL34: ;
    cpy_r_r47 = CPyStatics[224]; /* '.' */
    CPy_INCREF(cpy_r_node);
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef)
        cpy_r_r48 = cpy_r_node;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL6791;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r48 = cpy_r_node;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL6791;
    CPy_TypeErrorTraceback("mypy/server/update.py", "target_from_node", 1192, CPyStatic_update___globals, "union[mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef]", cpy_r_node);
    goto CPyL44;
__LL6791: ;
    cpy_r_r49 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_r48)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (!cpy_r_r52) goto CPyL39;
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_nodes___FuncDef))
        cpy_r_r53 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "target_from_node", 1192, CPyStatic_update___globals, "mypy.nodes.FuncDef", cpy_r_r48);
        goto CPyL44;
    }
    cpy_r_r54 = CPY_GET_ATTR(cpy_r_r53, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "target_from_node", 1192, CPyStatic_update___globals);
        goto CPyL44;
    }
CPyL38: ;
    cpy_r_r55 = cpy_r_r54;
    goto CPyL42;
CPyL39: ;
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r56 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "target_from_node", 1192, CPyStatic_update___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r48);
        goto CPyL44;
    }
    cpy_r_r57 = CPY_GET_ATTR(cpy_r_r56, CPyType_nodes___OverloadedFuncDef, 9, mypy___nodes___OverloadedFuncDefObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "target_from_node", 1192, CPyStatic_update___globals);
        goto CPyL44;
    }
CPyL41: ;
    cpy_r_r55 = cpy_r_r57;
CPyL42: ;
    cpy_r_r58 = CPyStr_Build(3, cpy_r_module, cpy_r_r47, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "target_from_node", 1192, CPyStatic_update___globals);
        goto CPyL44;
    }
    return cpy_r_r58;
CPyL44: ;
    cpy_r_r59 = NULL;
    return cpy_r_r59;
CPyL45: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL44;
}

PyObject *CPyPy_update___target_from_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module", "node", 0};
    static CPyArg_Parser parser = {"OO:target_from_node", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module, &obj_node)) {
        return NULL;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *arg_node;
    if (Py_TYPE(obj_node) == CPyType_nodes___FuncDef)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL6792;
    if (Py_TYPE(obj_node) == CPyType_nodes___MypyFile)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL6792;
    if (Py_TYPE(obj_node) == CPyType_nodes___OverloadedFuncDef)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL6792;
    CPy_TypeError("union[mypy.nodes.FuncDef, mypy.nodes.MypyFile, mypy.nodes.OverloadedFuncDef]", obj_node); 
    goto fail;
__LL6792: ;
    PyObject *retval = CPyDef_update___target_from_node(arg_module, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "target_from_node", 1174, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___refresh_suppressed_submodules(PyObject *cpy_r_module, PyObject *cpy_r_path, PyObject *cpy_r_deps, PyObject *cpy_r_graph, PyObject *cpy_r_fscache, PyObject *cpy_r_refresh_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_messages;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_pkgdir;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_entries;
    tuple_T3OOO cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_fnam;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    tuple_T2OO cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_shortname;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_submodule;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_trigger;
    char cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_dep;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_state;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_dep_module;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject **cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_tree;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyTagged cpy_r_r110;
    CPyPtr cpy_r_r111;
    int64_t cpy_r_r112;
    CPyTagged cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_imp;
    PyObject *cpy_r_r117;
    CPyPtr cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    CPyTagged cpy_r_r132;
    CPyPtr cpy_r_r133;
    int64_t cpy_r_r134;
    CPyTagged cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    tuple_T2OO cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r140;
    PyObject *cpy_r__;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    CPyTagged cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    int32_t cpy_r_r150;
    char cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    int32_t cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    int32_t cpy_r_r160;
    char cpy_r_r161;
    CPyTagged cpy_r_r162;
    char cpy_r_r163;
    CPyTagged cpy_r_r164;
    PyObject *cpy_r_r165;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_messages = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_path == cpy_r_r1;
    if (cpy_r_r2) goto CPyL113;
    CPy_INCREF(cpy_r_path);
    if (likely(cpy_r_path != Py_None))
        cpy_r_r3 = cpy_r_path;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1231, CPyStatic_update___globals, "str", cpy_r_path);
        goto CPyL114;
    }
    cpy_r_r4 = CPyStatic_update___INIT_SUFFIXES;
    if (unlikely(cpy_r_r4.f0 == NULL)) {
        goto CPyL115;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"INIT_SUFFIXES\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1231, CPyStatic_update___globals);
        goto CPyL112;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = CPyStatics[2537]; /* 'endswith' */
    CPy_INCREF(cpy_r_r4.f0);
    CPy_INCREF(cpy_r_r4.f1);
    cpy_r_r7 = PyTuple_New(2);
    if (unlikely(cpy_r_r7 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6793 = cpy_r_r4.f0;
    PyTuple_SET_ITEM(cpy_r_r7, 0, __tmp6793);
    PyObject *__tmp6794 = cpy_r_r4.f1;
    PyTuple_SET_ITEM(cpy_r_r7, 1, __tmp6794);
    PyObject *cpy_r_r8[2] = {cpy_r_r3, cpy_r_r7};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r9, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1231, CPyStatic_update___globals);
        goto CPyL116;
    }
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(!PyBool_Check(cpy_r_r10))) {
        CPy_TypeError("bool", cpy_r_r10); cpy_r_r11 = 2;
    } else
        cpy_r_r11 = cpy_r_r10 == Py_True;
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1231, CPyStatic_update___globals);
        goto CPyL114;
    }
    if (cpy_r_r11) {
        goto CPyL9;
    } else
        goto CPyL113;
CPyL8: ;
    cpy_r_r12 = Py_None;
    CPy_INCREF(cpy_r_r12);
    return cpy_r_r12;
CPyL9: ;
    CPy_INCREF(cpy_r_path);
    if (likely(cpy_r_path != Py_None))
        cpy_r_r13 = cpy_r_path;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1235, CPyStatic_update___globals, "str", cpy_r_path);
        goto CPyL114;
    }
    cpy_r_r14 = CPyModule_os;
    cpy_r_r15 = CPyStatics[142]; /* 'path' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1235, CPyStatic_update___globals);
        goto CPyL117;
    }
    cpy_r_r17 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1235, CPyStatic_update___globals);
        goto CPyL117;
    }
    PyObject *cpy_r_r19[1] = {cpy_r_r13};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1235, CPyStatic_update___globals);
        goto CPyL117;
    }
    CPy_DECREF(cpy_r_r13);
    if (likely(PyUnicode_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1235, CPyStatic_update___globals, "str", cpy_r_r21);
        goto CPyL114;
    }
    cpy_r_pkgdir = cpy_r_r22;
    cpy_r_r23 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 6, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_fscache, cpy_r_pkgdir); /* listdir */
    CPy_DECREF(cpy_r_pkgdir);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1237, CPyStatic_update___globals);
        goto CPyL17;
    }
    cpy_r_entries = cpy_r_r23;
    goto CPyL26;
CPyL17: ;
    cpy_r_r24 = CPy_CatchError();
    cpy_r_r25 = CPyModule_builtins;
    cpy_r_r26 = CPyStatics[269]; /* 'FileNotFoundError' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1238, CPyStatic_update___globals);
        goto CPyL118;
    }
    cpy_r_r28 = CPy_ExceptionMatches(cpy_r_r27);
    CPy_DecRef(cpy_r_r27);
    if (!cpy_r_r28) goto CPyL119;
    cpy_r_r29 = PyList_New(0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1239, CPyStatic_update___globals);
        goto CPyL118;
    }
    cpy_r_entries = cpy_r_r29;
    goto CPyL23;
CPyL21: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL24;
    } else
        goto CPyL120;
CPyL22: ;
    CPy_Unreachable();
CPyL23: ;
    CPy_RestoreExcInfo(cpy_r_r24);
    CPy_DecRef(cpy_r_r24.f0);
    CPy_DecRef(cpy_r_r24.f1);
    CPy_DecRef(cpy_r_r24.f2);
    goto CPyL26;
CPyL24: ;
    CPy_RestoreExcInfo(cpy_r_r24);
    CPy_DecRef(cpy_r_r24.f0);
    CPy_DecRef(cpy_r_r24.f1);
    CPy_DecRef(cpy_r_r24.f2);
    cpy_r_r30 = CPy_KeepPropagating();
    if (!cpy_r_r30) goto CPyL112;
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r31 = 0;
CPyL27: ;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_entries)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = (Py_ssize_t)cpy_r_r31 < (Py_ssize_t)cpy_r_r34;
    if (!cpy_r_r35) goto CPyL121;
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_entries, cpy_r_r31);
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1240, CPyStatic_update___globals, "str", cpy_r_r36);
        goto CPyL122;
    }
    cpy_r_fnam = cpy_r_r37;
    cpy_r_r38 = CPyStatics[174]; /* '.py' */
    cpy_r_r39 = CPyStatics[397]; /* '.pyi' */
    cpy_r_r40.f0 = cpy_r_r38;
    cpy_r_r40.f1 = cpy_r_r39;
    CPy_INCREF(cpy_r_r40.f0);
    CPy_INCREF(cpy_r_r40.f1);
    cpy_r_r41 = CPyStatics[2537]; /* 'endswith' */
    cpy_r_r42 = PyTuple_New(2);
    if (unlikely(cpy_r_r42 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6795 = cpy_r_r40.f0;
    PyTuple_SET_ITEM(cpy_r_r42, 0, __tmp6795);
    PyObject *__tmp6796 = cpy_r_r40.f1;
    PyTuple_SET_ITEM(cpy_r_r42, 1, __tmp6796);
    PyObject *cpy_r_r43[2] = {cpy_r_fnam, cpy_r_r42};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = PyObject_VectorcallMethod(cpy_r_r41, cpy_r_r44, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1242, CPyStatic_update___globals);
        goto CPyL123;
    }
    CPy_DECREF(cpy_r_r42);
    if (unlikely(!PyBool_Check(cpy_r_r45))) {
        CPy_TypeError("bool", cpy_r_r45); cpy_r_r46 = 2;
    } else
        cpy_r_r46 = cpy_r_r45 == Py_True;
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1242, CPyStatic_update___globals);
        goto CPyL124;
    }
    if (!cpy_r_r46) goto CPyL125;
    cpy_r_r47 = CPyStatics[223]; /* '__init__.' */
    cpy_r_r48 = CPyStr_Startswith(cpy_r_fnam, cpy_r_r47);
    if (cpy_r_r48) goto CPyL125;
    cpy_r_r49 = CPyStatics[224]; /* '.' */
    cpy_r_r50 = CPyStatics[226]; /* 'count' */
    PyObject *cpy_r_r51[2] = {cpy_r_fnam, cpy_r_r49};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = PyObject_VectorcallMethod(cpy_r_r50, cpy_r_r52, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1244, CPyStatic_update___globals);
        goto CPyL124;
    }
    if (likely(PyLong_Check(cpy_r_r53)))
        cpy_r_r54 = CPyTagged_FromObject(cpy_r_r53);
    else {
        CPy_TypeError("int", cpy_r_r53); cpy_r_r54 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1244, CPyStatic_update___globals);
        goto CPyL124;
    }
    cpy_r_r55 = cpy_r_r54 != 2;
    CPyTagged_DECREF(cpy_r_r54);
    if (cpy_r_r55) goto CPyL125;
    cpy_r_r56 = CPyStatics[224]; /* '.' */
    cpy_r_r57 = PyUnicode_Split(cpy_r_fnam, cpy_r_r56, -1);
    CPy_DECREF(cpy_r_fnam);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1247, CPyStatic_update___globals);
        goto CPyL122;
    }
    cpy_r_r58 = CPyList_GetItemShort(cpy_r_r57, 0);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1247, CPyStatic_update___globals);
        goto CPyL122;
    }
    if (likely(PyUnicode_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1247, CPyStatic_update___globals, "str", cpy_r_r58);
        goto CPyL122;
    }
    cpy_r_shortname = cpy_r_r59;
    cpy_r_r60 = CPyStatics[224]; /* '.' */
    cpy_r_r61 = PyUnicode_Concat(cpy_r_module, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1248, CPyStatic_update___globals);
        goto CPyL126;
    }
    cpy_r_r62 = PyUnicode_Concat(cpy_r_r61, cpy_r_shortname);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1248, CPyStatic_update___globals);
        goto CPyL126;
    }
    cpy_r_submodule = cpy_r_r62;
    cpy_r_r63 = CPyDef_trigger___make_trigger(cpy_r_submodule);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1249, CPyStatic_update___globals);
        goto CPyL127;
    }
    cpy_r_trigger = cpy_r_r63;
    cpy_r_r64 = CPyDef_update___ensure_deps_loaded(cpy_r_module, cpy_r_deps, cpy_r_graph);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1252, CPyStatic_update___globals);
        goto CPyL128;
    }
    cpy_r_r65 = PyDict_Contains(cpy_r_deps, cpy_r_trigger);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1254, CPyStatic_update___globals);
        goto CPyL128;
    }
    cpy_r_r67 = cpy_r_r65;
    if (!cpy_r_r67) goto CPyL129;
    cpy_r_r68 = CPyDict_GetItem(cpy_r_deps, cpy_r_trigger);
    CPy_DECREF(cpy_r_trigger);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1255, CPyStatic_update___globals);
        goto CPyL127;
    }
    if (likely(PySet_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1255, CPyStatic_update___globals, "set", cpy_r_r68);
        goto CPyL127;
    }
    cpy_r_r70 = PyObject_GetIter(cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1255, CPyStatic_update___globals);
        goto CPyL127;
    }
CPyL48: ;
    cpy_r_r71 = PyIter_Next(cpy_r_r70);
    if (cpy_r_r71 == NULL) goto CPyL130;
    if (likely(PyUnicode_Check(cpy_r_r71)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1255, CPyStatic_update___globals, "str", cpy_r_r71);
        goto CPyL131;
    }
    cpy_r_dep = cpy_r_r72;
    cpy_r_r73 = CPyDict_GetWithNone(cpy_r_graph, cpy_r_dep);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1257, CPyStatic_update___globals);
        goto CPyL132;
    }
    if (Py_TYPE(cpy_r_r73) == CPyType_mypy___build___State)
        cpy_r_r74 = cpy_r_r73;
    else {
        cpy_r_r74 = NULL;
    }
    if (cpy_r_r74 != NULL) goto __LL6797;
    if (cpy_r_r73 == Py_None)
        cpy_r_r74 = cpy_r_r73;
    else {
        cpy_r_r74 = NULL;
    }
    if (cpy_r_r74 != NULL) goto __LL6797;
    CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1257, CPyStatic_update___globals, "mypy.build.State or None", cpy_r_r73);
    goto CPyL132;
__LL6797: ;
    cpy_r_state = cpy_r_r74;
    cpy_r_r75 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r76 = cpy_r_state != cpy_r_r75;
    if (cpy_r_r76) goto CPyL133;
    cpy_r_r77 = CPyDef_mypy___util___module_prefix(cpy_r_graph, cpy_r_dep);
    CPy_DECREF(cpy_r_dep);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1260, CPyStatic_update___globals);
        goto CPyL134;
    }
    cpy_r_dep_module = cpy_r_r77;
    cpy_r_r78 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r79 = cpy_r_dep_module != cpy_r_r78;
    if (cpy_r_r79) {
        goto CPyL135;
    } else
        goto CPyL136;
CPyL55: ;
    if (likely(cpy_r_dep_module != Py_None))
        cpy_r_r80 = cpy_r_dep_module;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1262, CPyStatic_update___globals, "str", cpy_r_dep_module);
        goto CPyL131;
    }
    cpy_r_r81 = CPyDict_GetWithNone(cpy_r_graph, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1262, CPyStatic_update___globals);
        goto CPyL131;
    }
    if (Py_TYPE(cpy_r_r81) == CPyType_mypy___build___State)
        cpy_r_r82 = cpy_r_r81;
    else {
        cpy_r_r82 = NULL;
    }
    if (cpy_r_r82 != NULL) goto __LL6798;
    if (cpy_r_r81 == Py_None)
        cpy_r_r82 = cpy_r_r81;
    else {
        cpy_r_r82 = NULL;
    }
    if (cpy_r_r82 != NULL) goto __LL6798;
    CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1262, CPyStatic_update___globals, "mypy.build.State or None", cpy_r_r81);
    goto CPyL131;
__LL6798: ;
    cpy_r_state = cpy_r_r82;
CPyL59: ;
    cpy_r_r83 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r84 = cpy_r_state != cpy_r_r83;
    if (!cpy_r_r84) goto CPyL137;
    if (likely(cpy_r_state != Py_None))
        cpy_r_r85 = cpy_r_state;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1265, CPyStatic_update___globals, "mypy.build.State", cpy_r_state);
        goto CPyL134;
    }
    cpy_r_r86 = ((mypy___build___StateObject *)cpy_r_r85)->_tree;
    cpy_r_r87 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r88 = cpy_r_r86 == cpy_r_r87;
    if (cpy_r_r88) {
        goto CPyL138;
    } else
        goto CPyL73;
CPyL62: ;
    if (likely(cpy_r_state != Py_None))
        cpy_r_r89 = cpy_r_state;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1268, CPyStatic_update___globals, "mypy.build.State", cpy_r_state);
        goto CPyL139;
    }
    cpy_r_r90 = ((mypy___build___StateObject *)cpy_r_r89)->_path;
    cpy_r_r91 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r92 = cpy_r_r90 != cpy_r_r91;
    if (cpy_r_r92) {
        goto CPyL66;
    } else
        goto CPyL140;
CPyL64: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r93 = 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1268, CPyStatic_update___globals);
        goto CPyL112;
    }
    CPy_Unreachable();
CPyL66: ;
    if (likely(cpy_r_state != Py_None))
        cpy_r_r94 = cpy_r_state;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1269, CPyStatic_update___globals, "mypy.build.State", cpy_r_state);
        goto CPyL139;
    }
    cpy_r_r95 = ((mypy___build___StateObject *)cpy_r_r94)->_id;
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "refresh_suppressed_submodules", "State", "id", 1269, CPyStatic_update___globals);
        goto CPyL139;
    }
    CPy_INCREF(cpy_r_r95);
CPyL68: ;
    if (likely(cpy_r_state != Py_None))
        cpy_r_r96 = cpy_r_state;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1269, CPyStatic_update___globals, "mypy.build.State", cpy_r_state);
        goto CPyL141;
    }
    cpy_r_r97 = ((mypy___build___StateObject *)cpy_r_r96)->_path;
    CPy_INCREF(cpy_r_r97);
    if (likely(cpy_r_r97 != Py_None))
        cpy_r_r98 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1269, CPyStatic_update___globals, "str", cpy_r_r97);
        goto CPyL141;
    }
    PyObject *cpy_r_r99[2] = {cpy_r_r95, cpy_r_r98};
    cpy_r_r100 = (PyObject **)&cpy_r_r99;
    cpy_r_r101 = _PyObject_Vectorcall(cpy_r_refresh_file, cpy_r_r100, 2, 0);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1269, CPyStatic_update___globals);
        goto CPyL142;
    }
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r98);
    if (likely(PyList_Check(cpy_r_r101)))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1269, CPyStatic_update___globals, "list", cpy_r_r101);
        goto CPyL139;
    }
    cpy_r_messages = cpy_r_r102;
CPyL73: ;
    if (likely(cpy_r_state != Py_None))
        cpy_r_r103 = cpy_r_state;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1270, CPyStatic_update___globals, "mypy.build.State", cpy_r_state);
        goto CPyL134;
    }
    cpy_r_r104 = ((mypy___build___StateObject *)cpy_r_r103)->_tree;
    CPy_INCREF(cpy_r_r104);
    cpy_r_tree = cpy_r_r104;
    cpy_r_r105 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r106 = cpy_r_tree != cpy_r_r105;
    if (cpy_r_r106) {
        goto CPyL77;
    } else
        goto CPyL143;
CPyL75: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r107 = 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1271, CPyStatic_update___globals);
        goto CPyL112;
    }
    CPy_Unreachable();
CPyL77: ;
    if (likely(cpy_r_tree != Py_None))
        cpy_r_r108 = cpy_r_tree;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1272, CPyStatic_update___globals, "mypy.nodes.MypyFile", cpy_r_tree);
        goto CPyL144;
    }
    cpy_r_r109 = ((mypy___nodes___MypyFileObject *)cpy_r_r108)->_imports;
    CPy_INCREF(cpy_r_r109);
    CPy_DECREF(cpy_r_tree);
    cpy_r_r110 = 0;
CPyL79: ;
    cpy_r_r111 = (CPyPtr)&((PyVarObject *)cpy_r_r109)->ob_size;
    cpy_r_r112 = *(int64_t *)cpy_r_r111;
    cpy_r_r113 = cpy_r_r112 << 1;
    cpy_r_r114 = (Py_ssize_t)cpy_r_r110 < (Py_ssize_t)cpy_r_r113;
    if (!cpy_r_r114) goto CPyL145;
    cpy_r_r115 = CPyList_GetItemUnsafe(cpy_r_r109, cpy_r_r110);
    if (likely(PyObject_TypeCheck(cpy_r_r115, CPyType_nodes___ImportBase)))
        cpy_r_r116 = cpy_r_r115;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1272, CPyStatic_update___globals, "mypy.nodes.ImportBase", cpy_r_r115);
        goto CPyL146;
    }
    cpy_r_imp = cpy_r_r116;
    cpy_r_r117 = (PyObject *)CPyType_nodes___ImportFrom;
    cpy_r_r118 = (CPyPtr)&((PyObject *)cpy_r_imp)->ob_type;
    cpy_r_r119 = *(PyObject * *)cpy_r_r118;
    cpy_r_r120 = cpy_r_r119 == cpy_r_r117;
    if (!cpy_r_r120) goto CPyL147;
    if (likely(Py_TYPE(cpy_r_imp) == CPyType_nodes___ImportFrom))
        cpy_r_r121 = cpy_r_imp;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1275, CPyStatic_update___globals, "mypy.nodes.ImportFrom", cpy_r_imp);
        goto CPyL148;
    }
    cpy_r_r122 = ((mypy___nodes___ImportFromObject *)cpy_r_r121)->_id;
    CPy_INCREF(cpy_r_r122);
    cpy_r_r123 = PyUnicode_Compare(cpy_r_r122, cpy_r_module);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r124 = cpy_r_r123 == -1;
    if (!cpy_r_r124) goto CPyL86;
    cpy_r_r125 = PyErr_Occurred();
    cpy_r_r126 = cpy_r_r125 != NULL;
    if (!cpy_r_r126) goto CPyL86;
    cpy_r_r127 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1275, CPyStatic_update___globals);
        goto CPyL148;
    }
CPyL86: ;
    cpy_r_r128 = cpy_r_r123 == 0;
    if (!cpy_r_r128) goto CPyL147;
    cpy_r_r129 = 0;
    if (likely(Py_TYPE(cpy_r_imp) == CPyType_nodes___ImportFrom))
        cpy_r_r130 = cpy_r_imp;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1276, CPyStatic_update___globals, "mypy.nodes.ImportFrom", cpy_r_imp);
        goto CPyL148;
    }
    cpy_r_r131 = ((mypy___nodes___ImportFromObject *)cpy_r_r130)->_names;
    CPy_INCREF(cpy_r_r131);
    CPy_DECREF(cpy_r_imp);
    cpy_r_r132 = 0;
CPyL89: ;
    cpy_r_r133 = (CPyPtr)&((PyVarObject *)cpy_r_r131)->ob_size;
    cpy_r_r134 = *(int64_t *)cpy_r_r133;
    cpy_r_r135 = cpy_r_r134 << 1;
    cpy_r_r136 = (Py_ssize_t)cpy_r_r132 < (Py_ssize_t)cpy_r_r135;
    if (!cpy_r_r136) goto CPyL149;
    cpy_r_r137 = CPyList_GetItemUnsafe(cpy_r_r131, cpy_r_r132);
    PyObject *__tmp6799;
    if (unlikely(!(PyTuple_Check(cpy_r_r137) && PyTuple_GET_SIZE(cpy_r_r137) == 2))) {
        __tmp6799 = NULL;
        goto __LL6800;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r137, 0))))
        __tmp6799 = PyTuple_GET_ITEM(cpy_r_r137, 0);
    else {
        __tmp6799 = NULL;
    }
    if (__tmp6799 == NULL) goto __LL6800;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r137, 1)))
        __tmp6799 = PyTuple_GET_ITEM(cpy_r_r137, 1);
    else {
        __tmp6799 = NULL;
    }
    if (__tmp6799 != NULL) goto __LL6801;
    if (PyTuple_GET_ITEM(cpy_r_r137, 1) == Py_None)
        __tmp6799 = PyTuple_GET_ITEM(cpy_r_r137, 1);
    else {
        __tmp6799 = NULL;
    }
    if (__tmp6799 != NULL) goto __LL6801;
    __tmp6799 = NULL;
__LL6801: ;
    if (__tmp6799 == NULL) goto __LL6800;
    __tmp6799 = cpy_r_r137;
__LL6800: ;
    if (unlikely(__tmp6799 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r137); cpy_r_r138 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp6802 = PyTuple_GET_ITEM(cpy_r_r137, 0);
        CPy_INCREF(__tmp6802);
        PyObject *__tmp6803;
        if (likely(PyUnicode_Check(__tmp6802)))
            __tmp6803 = __tmp6802;
        else {
            CPy_TypeError("str", __tmp6802); 
            __tmp6803 = NULL;
        }
        cpy_r_r138.f0 = __tmp6803;
        PyObject *__tmp6804 = PyTuple_GET_ITEM(cpy_r_r137, 1);
        CPy_INCREF(__tmp6804);
        PyObject *__tmp6805;
        if (PyUnicode_Check(__tmp6804))
            __tmp6805 = __tmp6804;
        else {
            __tmp6805 = NULL;
        }
        if (__tmp6805 != NULL) goto __LL6806;
        if (__tmp6804 == Py_None)
            __tmp6805 = __tmp6804;
        else {
            __tmp6805 = NULL;
        }
        if (__tmp6805 != NULL) goto __LL6806;
        CPy_TypeError("str or None", __tmp6804); 
        __tmp6805 = NULL;
__LL6806: ;
        cpy_r_r138.f1 = __tmp6805;
    }
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138.f0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1276, CPyStatic_update___globals);
        goto CPyL150;
    }
    cpy_r_r139 = cpy_r_r138.f0;
    CPy_INCREF(cpy_r_r139);
    cpy_r_name = cpy_r_r139;
    cpy_r_r140 = cpy_r_r138.f1;
    CPy_INCREF(cpy_r_r140);
    CPy_DECREF(cpy_r_r138.f0);
    CPy_DECREF(cpy_r_r138.f1);
    cpy_r__ = cpy_r_r140;
    CPy_DECREF(cpy_r__);
    cpy_r_r141 = PyUnicode_Compare(cpy_r_name, cpy_r_shortname);
    CPy_DECREF(cpy_r_name);
    cpy_r_r142 = cpy_r_r141 == -1;
    if (!cpy_r_r142) goto CPyL94;
    cpy_r_r143 = PyErr_Occurred();
    cpy_r_r144 = cpy_r_r143 != NULL;
    if (!cpy_r_r144) goto CPyL94;
    cpy_r_r145 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1276, CPyStatic_update___globals);
        goto CPyL150;
    }
CPyL94: ;
    cpy_r_r146 = cpy_r_r141 == 0;
    if (cpy_r_r146) {
        goto CPyL151;
    } else
        goto CPyL96;
CPyL95: ;
    cpy_r_r129 = 1;
    goto CPyL97;
CPyL96: ;
    cpy_r_r147 = cpy_r_r132 + 2;
    cpy_r_r132 = cpy_r_r147;
    goto CPyL89;
CPyL97: ;
    if (!cpy_r_r129) goto CPyL108;
    if (likely(cpy_r_state != Py_None))
        cpy_r_r148 = cpy_r_state;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1277, CPyStatic_update___globals, "mypy.build.State", cpy_r_state);
        goto CPyL146;
    }
    cpy_r_r149 = ((mypy___build___StateObject *)cpy_r_r148)->_suppressed_set;
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "refresh_suppressed_submodules", "State", "suppressed_set", 1277, CPyStatic_update___globals);
        goto CPyL146;
    }
    CPy_INCREF(cpy_r_r149);
CPyL100: ;
    cpy_r_r150 = PySet_Contains(cpy_r_r149, cpy_r_submodule);
    CPy_DECREF(cpy_r_r149);
    cpy_r_r151 = cpy_r_r150 >= 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1277, CPyStatic_update___globals);
        goto CPyL146;
    }
    cpy_r_r152 = cpy_r_r150;
    cpy_r_r153 = cpy_r_r152 ^ 1;
    if (!cpy_r_r153) goto CPyL108;
    if (likely(cpy_r_state != Py_None))
        cpy_r_r154 = cpy_r_state;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1279, CPyStatic_update___globals, "mypy.build.State", cpy_r_state);
        goto CPyL146;
    }
    cpy_r_r155 = ((mypy___build___StateObject *)cpy_r_r154)->_suppressed;
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "refresh_suppressed_submodules", "State", "suppressed", 1279, CPyStatic_update___globals);
        goto CPyL146;
    }
    CPy_INCREF(cpy_r_r155);
CPyL104: ;
    cpy_r_r156 = PyList_Append(cpy_r_r155, cpy_r_submodule);
    CPy_DECREF(cpy_r_r155);
    cpy_r_r157 = cpy_r_r156 >= 0;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1279, CPyStatic_update___globals);
        goto CPyL146;
    }
    if (likely(cpy_r_state != Py_None))
        cpy_r_r158 = cpy_r_state;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1280, CPyStatic_update___globals, "mypy.build.State", cpy_r_state);
        goto CPyL146;
    }
    cpy_r_r159 = ((mypy___build___StateObject *)cpy_r_r158)->_suppressed_set;
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "refresh_suppressed_submodules", "State", "suppressed_set", 1280, CPyStatic_update___globals);
        goto CPyL146;
    }
    CPy_INCREF(cpy_r_r159);
CPyL107: ;
    cpy_r_r160 = PySet_Add(cpy_r_r159, cpy_r_submodule);
    CPy_DECREF(cpy_r_r159);
    cpy_r_r161 = cpy_r_r160 >= 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1280, CPyStatic_update___globals);
        goto CPyL146;
    }
CPyL108: ;
    cpy_r_r162 = cpy_r_r110 + 2;
    cpy_r_r110 = cpy_r_r162;
    goto CPyL79;
CPyL109: ;
    cpy_r_r163 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1255, CPyStatic_update___globals);
        goto CPyL122;
    }
CPyL110: ;
    cpy_r_r164 = cpy_r_r31 + 2;
    cpy_r_r31 = cpy_r_r164;
    goto CPyL27;
CPyL111: ;
    return cpy_r_messages;
CPyL112: ;
    cpy_r_r165 = NULL;
    return cpy_r_r165;
CPyL113: ;
    CPy_DECREF(cpy_r_messages);
    goto CPyL8;
CPyL114: ;
    CPy_DecRef(cpy_r_messages);
    goto CPyL112;
CPyL115: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r3);
    goto CPyL3;
CPyL116: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    goto CPyL112;
CPyL117: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r13);
    goto CPyL112;
CPyL118: ;
    CPy_DecRef(cpy_r_messages);
    goto CPyL24;
CPyL119: ;
    CPy_DecRef(cpy_r_messages);
    goto CPyL21;
CPyL120: ;
    CPy_DecRef(cpy_r_r24.f0);
    CPy_DecRef(cpy_r_r24.f1);
    CPy_DecRef(cpy_r_r24.f2);
    goto CPyL22;
CPyL121: ;
    CPy_DECREF(cpy_r_entries);
    goto CPyL111;
CPyL122: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_entries);
    goto CPyL112;
CPyL123: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_fnam);
    CPy_DecRef(cpy_r_r42);
    goto CPyL112;
CPyL124: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_fnam);
    goto CPyL112;
CPyL125: ;
    CPy_DECREF(cpy_r_fnam);
    goto CPyL110;
CPyL126: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_shortname);
    goto CPyL112;
CPyL127: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_shortname);
    CPy_DecRef(cpy_r_submodule);
    goto CPyL112;
CPyL128: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_shortname);
    CPy_DecRef(cpy_r_submodule);
    CPy_DecRef(cpy_r_trigger);
    goto CPyL112;
CPyL129: ;
    CPy_DECREF(cpy_r_shortname);
    CPy_DECREF(cpy_r_submodule);
    CPy_DECREF(cpy_r_trigger);
    goto CPyL110;
CPyL130: ;
    CPy_DECREF(cpy_r_shortname);
    CPy_DECREF(cpy_r_submodule);
    CPy_DECREF(cpy_r_r70);
    goto CPyL109;
CPyL131: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_shortname);
    CPy_DecRef(cpy_r_submodule);
    CPy_DecRef(cpy_r_r70);
    goto CPyL112;
CPyL132: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_shortname);
    CPy_DecRef(cpy_r_submodule);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_dep);
    goto CPyL112;
CPyL133: ;
    CPy_DECREF(cpy_r_dep);
    goto CPyL59;
CPyL134: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_shortname);
    CPy_DecRef(cpy_r_submodule);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_state);
    goto CPyL112;
CPyL135: ;
    CPy_DECREF(cpy_r_state);
    goto CPyL55;
CPyL136: ;
    CPy_DECREF(cpy_r_dep_module);
    goto CPyL59;
CPyL137: ;
    CPy_DECREF(cpy_r_state);
    goto CPyL48;
CPyL138: ;
    CPy_DECREF(cpy_r_messages);
    goto CPyL62;
CPyL139: ;
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_shortname);
    CPy_DecRef(cpy_r_submodule);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_state);
    goto CPyL112;
CPyL140: ;
    CPy_DECREF(cpy_r_entries);
    CPy_DECREF(cpy_r_shortname);
    CPy_DECREF(cpy_r_submodule);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_state);
    goto CPyL64;
CPyL141: ;
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_shortname);
    CPy_DecRef(cpy_r_submodule);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r95);
    goto CPyL112;
CPyL142: ;
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_shortname);
    CPy_DecRef(cpy_r_submodule);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r98);
    goto CPyL112;
CPyL143: ;
    CPy_DECREF(cpy_r_messages);
    CPy_DECREF(cpy_r_entries);
    CPy_DECREF(cpy_r_shortname);
    CPy_DECREF(cpy_r_submodule);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_state);
    CPy_DECREF(cpy_r_tree);
    goto CPyL75;
CPyL144: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_shortname);
    CPy_DecRef(cpy_r_submodule);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    goto CPyL112;
CPyL145: ;
    CPy_DECREF(cpy_r_state);
    CPy_DECREF(cpy_r_r109);
    goto CPyL48;
CPyL146: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_shortname);
    CPy_DecRef(cpy_r_submodule);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r109);
    goto CPyL112;
CPyL147: ;
    CPy_DECREF(cpy_r_imp);
    goto CPyL108;
CPyL148: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_shortname);
    CPy_DecRef(cpy_r_submodule);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_imp);
    goto CPyL112;
CPyL149: ;
    CPy_DECREF(cpy_r_r131);
    goto CPyL97;
CPyL150: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_shortname);
    CPy_DecRef(cpy_r_submodule);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_r131);
    goto CPyL112;
CPyL151: ;
    CPy_DECREF(cpy_r_r131);
    goto CPyL95;
}

PyObject *CPyPy_update___refresh_suppressed_submodules(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module", "path", "deps", "graph", "fscache", "refresh_file", 0};
    static CPyArg_Parser parser = {"OOOOOO:refresh_suppressed_submodules", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_path;
    PyObject *obj_deps;
    PyObject *obj_graph;
    PyObject *obj_fscache;
    PyObject *obj_refresh_file;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module, &obj_path, &obj_deps, &obj_graph, &obj_fscache, &obj_refresh_file)) {
        return NULL;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *arg_path;
    if (PyUnicode_Check(obj_path))
        arg_path = obj_path;
    else {
        arg_path = NULL;
    }
    if (arg_path != NULL) goto __LL6807;
    if (obj_path == Py_None)
        arg_path = obj_path;
    else {
        arg_path = NULL;
    }
    if (arg_path != NULL) goto __LL6807;
    CPy_TypeError("str or None", obj_path); 
    goto fail;
__LL6807: ;
    PyObject *arg_deps;
    if (likely(PyDict_Check(obj_deps)))
        arg_deps = obj_deps;
    else {
        CPy_TypeError("dict", obj_deps); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_fscache;
    if (likely(PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache)))
        arg_fscache = obj_fscache;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_fscache); 
        goto fail;
    }
    PyObject *arg_refresh_file = obj_refresh_file;
    PyObject *retval = CPyDef_update___refresh_suppressed_submodules(arg_module, arg_path, arg_deps, arg_graph, arg_fscache, arg_refresh_file);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "refresh_suppressed_submodules", 1206, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___extract_fnam_from_message(PyObject *cpy_r_message) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_m;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPyStatics[5394]; /* '([^:]+):[0-9]+: (error|note): ' */
    cpy_r_r1 = CPyModule_re;
    cpy_r_r2 = CPyStatics[210]; /* 'match' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "extract_fnam_from_message", 1285, CPyStatic_update___globals);
        goto CPyL11;
    }
    PyObject *cpy_r_r4[2] = {cpy_r_r0, cpy_r_message};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 2, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "extract_fnam_from_message", 1285, CPyStatic_update___globals);
        goto CPyL11;
    }
    cpy_r_m = cpy_r_r6;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_m != cpy_r_r7;
    if (!cpy_r_r8) goto CPyL12;
    CPy_INCREF(cpy_r_m);
    cpy_r_r9 = cpy_r_m;
    cpy_r_r10 = PyObject_IsTrue(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/server/update.py", "extract_fnam_from_message", 1285, CPyStatic_update___globals);
        goto CPyL13;
    }
    cpy_r_r12 = cpy_r_r10;
    if (!cpy_r_r12) goto CPyL12;
    cpy_r_r13 = cpy_r_m;
    cpy_r_r14 = CPyStatics[1393]; /* 'group' */
    cpy_r_r15 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r16[2] = {cpy_r_r13, cpy_r_r15};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_VectorcallMethod(cpy_r_r14, cpy_r_r17, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "extract_fnam_from_message", 1287, CPyStatic_update___globals);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r13);
    cpy_r_r19 = cpy_r_r18;
    if (PyUnicode_Check(cpy_r_r19))
        cpy_r_r20 = cpy_r_r19;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL6808;
    if (cpy_r_r19 == Py_None)
        cpy_r_r20 = cpy_r_r19;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL6808;
    CPy_TypeErrorTraceback("mypy/server/update.py", "extract_fnam_from_message", 1287, CPyStatic_update___globals, "str or None", cpy_r_r19);
    goto CPyL11;
__LL6808: ;
    return cpy_r_r20;
CPyL10: ;
    cpy_r_r21 = Py_None;
    CPy_INCREF(cpy_r_r21);
    return cpy_r_r21;
CPyL11: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL12: ;
    CPy_DECREF(cpy_r_m);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_m);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL11;
}

PyObject *CPyPy_update___extract_fnam_from_message(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"message", 0};
    static CPyArg_Parser parser = {"O:extract_fnam_from_message", kwlist, 0};
    PyObject *obj_message;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_message)) {
        return NULL;
    }
    PyObject *arg_message;
    if (likely(PyUnicode_Check(obj_message)))
        arg_message = obj_message;
    else {
        CPy_TypeError("str", obj_message); 
        goto fail;
    }
    PyObject *retval = CPyDef_update___extract_fnam_from_message(arg_message);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "extract_fnam_from_message", 1284, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___extract_possible_fnam_from_message(PyObject *cpy_r_message) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[171]; /* ':' */
    cpy_r_r1 = CPyStr_Split(cpy_r_message, cpy_r_r0, 2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "extract_possible_fnam_from_message", 1293, CPyStatic_update___globals);
        goto CPyL4;
    }
    cpy_r_r2 = CPyList_GetItemShort(cpy_r_r1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "extract_possible_fnam_from_message", 1293, CPyStatic_update___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "extract_possible_fnam_from_message", 1293, CPyStatic_update___globals, "str", cpy_r_r2);
        goto CPyL4;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_update___extract_possible_fnam_from_message(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"message", 0};
    static CPyArg_Parser parser = {"O:extract_possible_fnam_from_message", kwlist, 0};
    PyObject *obj_message;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_message)) {
        return NULL;
    }
    PyObject *arg_message;
    if (likely(PyUnicode_Check(obj_message)))
        arg_message = obj_message;
    else {
        CPy_TypeError("str", obj_message); 
        goto fail;
    }
    PyObject *retval = CPyDef_update___extract_possible_fnam_from_message(arg_message);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "extract_possible_fnam_from_message", 1291, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "__get__", -1, CPyStatic_update___globals);
    return NULL;
}

CPyTagged CPyDef_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_____call__(PyObject *cpy_r___mypyc_self__, tuple_T2IO cpy_r_g) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    cpy_r_r0 = ((mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/server/update.py", "<lambda>", "__mypyc_lambda__1_sort_messages_preserving_file_order_obj", "__mypyc_env__", 1335, CPyStatic_update___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL3;
CPyL1: ;
    cpy_r_r1 = cpy_r_g.f0;
    CPyTagged_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = CPY_INT_TAG;
    return cpy_r_r2;
CPyL3: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"g", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_g;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_g)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    tuple_T2IO arg_g;
    PyObject *__tmp6809;
    if (unlikely(!(PyTuple_Check(obj_g) && PyTuple_GET_SIZE(obj_g) == 2))) {
        __tmp6809 = NULL;
        goto __LL6810;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_g, 0))))
        __tmp6809 = PyTuple_GET_ITEM(obj_g, 0);
    else {
        __tmp6809 = NULL;
    }
    if (__tmp6809 == NULL) goto __LL6810;
    if (likely(PyList_Check(PyTuple_GET_ITEM(obj_g, 1))))
        __tmp6809 = PyTuple_GET_ITEM(obj_g, 1);
    else {
        __tmp6809 = NULL;
    }
    if (__tmp6809 == NULL) goto __LL6810;
    __tmp6809 = obj_g;
__LL6810: ;
    if (unlikely(__tmp6809 == NULL)) {
        CPy_TypeError("tuple[int, list]", obj_g); goto fail;
    } else {
        PyObject *__tmp6811 = PyTuple_GET_ITEM(obj_g, 0);
        CPyTagged __tmp6812;
        if (likely(PyLong_Check(__tmp6811)))
            __tmp6812 = CPyTagged_BorrowFromObject(__tmp6811);
        else {
            CPy_TypeError("int", __tmp6811); goto fail;
        }
        arg_g.f0 = __tmp6812;
        PyObject *__tmp6813 = PyTuple_GET_ITEM(obj_g, 1);
        PyObject *__tmp6814;
        if (likely(PyList_Check(__tmp6813)))
            __tmp6814 = __tmp6813;
        else {
            CPy_TypeError("list", __tmp6813); 
            __tmp6814 = NULL;
        }
        arg_g.f1 = __tmp6814;
    }
    CPyTagged retval = CPyDef_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj_____call__(arg___mypyc_self__, arg_g);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "<lambda>", 1335, CPyStatic_update___globals);
    return NULL;
}

PyObject *CPyDef_update___sort_messages_preserving_file_order(PyObject *cpy_r_messages, PyObject *cpy_r_prev_messages) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_n;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_order;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_msg;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_fnam;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_groups;
    CPyTagged cpy_r_i;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    int64_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_maybe_fnam;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_group;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    CPyTagged cpy_r_r42;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    CPyTagged cpy_r_r45;
    int64_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    CPyTagged cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    CPyTagged cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    tuple_T2IO cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    CPyTagged cpy_r_r81;
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
    PyObject *cpy_r_result;
    CPyTagged cpy_r_r93;
    CPyPtr cpy_r_r94;
    int64_t cpy_r_r95;
    CPyTagged cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    tuple_T2IO cpy_r_r99;
    CPyTagged cpy_r_r100;
    CPyTagged cpy_r_key;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    CPyTagged cpy_r_r103;
    PyObject *cpy_r_r104;
    cpy_r_r0 = CPyDef_update___sort_messages_preserving_file_order_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1296, CPyStatic_update___globals);
        goto CPyL61;
    }
    cpy_r_n = 0;
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1308, CPyStatic_update___globals);
        goto CPyL62;
    }
    cpy_r_order = cpy_r_r1;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_prev_messages)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL16;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_prev_messages, cpy_r_r2);
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1309, CPyStatic_update___globals, "str", cpy_r_r7);
        goto CPyL63;
    }
    cpy_r_msg = cpy_r_r8;
    cpy_r_r9 = CPyDef_update___extract_fnam_from_message(cpy_r_msg);
    CPy_DECREF(cpy_r_msg);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1310, CPyStatic_update___globals);
        goto CPyL63;
    }
    cpy_r_fnam = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_fnam != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL64;
    CPy_INCREF(cpy_r_fnam);
    if (likely(cpy_r_fnam != Py_None))
        cpy_r_r12 = cpy_r_fnam;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1310, CPyStatic_update___globals, "str", cpy_r_fnam);
        goto CPyL65;
    }
    cpy_r_r13 = CPyStr_IsTrue(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (!cpy_r_r13) goto CPyL64;
    CPy_INCREF(cpy_r_fnam);
    if (likely(cpy_r_fnam != Py_None))
        cpy_r_r14 = cpy_r_fnam;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1311, CPyStatic_update___globals, "str", cpy_r_fnam);
        goto CPyL65;
    }
    cpy_r_r15 = PyDict_Contains(cpy_r_order, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1311, CPyStatic_update___globals);
        goto CPyL65;
    }
    cpy_r_r17 = cpy_r_r15;
    cpy_r_r18 = cpy_r_r17 ^ 1;
    if (!cpy_r_r18) goto CPyL64;
    if (likely(cpy_r_fnam != Py_None))
        cpy_r_r19 = cpy_r_fnam;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1312, CPyStatic_update___globals, "str", cpy_r_fnam);
        goto CPyL63;
    }
    CPyTagged_INCREF(cpy_r_n);
    cpy_r_r20 = CPyTagged_StealAsObject(cpy_r_n);
    cpy_r_r21 = CPyDict_SetItem(cpy_r_order, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1312, CPyStatic_update___globals);
        goto CPyL63;
    }
    cpy_r_r23 = CPyTagged_Add(cpy_r_n, 2);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_n = cpy_r_r23;
CPyL15: ;
    cpy_r_r24 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r24;
    goto CPyL3;
CPyL16: ;
    cpy_r_r25 = PyList_New(0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1316, CPyStatic_update___globals);
        goto CPyL63;
    }
    cpy_r_groups = cpy_r_r25;
    cpy_r_i = 0;
CPyL18: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = cpy_r_i & 1;
    cpy_r_r30 = cpy_r_r29 != 0;
    if (!cpy_r_r30) goto CPyL20;
    cpy_r_r31 = CPyTagged_IsLt_(cpy_r_i, cpy_r_r28);
    if (cpy_r_r31) {
        goto CPyL21;
    } else
        goto CPyL66;
CPyL20: ;
    cpy_r_r32 = (Py_ssize_t)cpy_r_i < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r32) goto CPyL66;
CPyL21: ;
    cpy_r_r33 = CPyList_GetItem(cpy_r_messages, cpy_r_i);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1319, CPyStatic_update___globals);
        goto CPyL67;
    }
    if (likely(PyUnicode_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1319, CPyStatic_update___globals, "str", cpy_r_r33);
        goto CPyL67;
    }
    cpy_r_msg = cpy_r_r34;
    cpy_r_r35 = CPyDef_update___extract_possible_fnam_from_message(cpy_r_msg);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1320, CPyStatic_update___globals);
        goto CPyL68;
    }
    cpy_r_maybe_fnam = cpy_r_r35;
    cpy_r_r36 = PyList_New(1);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1321, CPyStatic_update___globals);
        goto CPyL69;
    }
    cpy_r_r37 = (CPyPtr)&((PyListObject *)cpy_r_r36)->ob_item;
    cpy_r_r38 = *(CPyPtr *)cpy_r_r37;
    *(PyObject * *)cpy_r_r38 = cpy_r_msg;
    cpy_r_group = cpy_r_r36;
    cpy_r_r39 = PyDict_Contains(cpy_r_order, cpy_r_maybe_fnam);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1322, CPyStatic_update___globals);
        goto CPyL70;
    }
    cpy_r_r41 = cpy_r_r39;
    if (!cpy_r_r41) goto CPyL45;
CPyL27: ;
    cpy_r_r42 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 << 1;
    cpy_r_r46 = cpy_r_r42 & 1;
    cpy_r_r47 = cpy_r_r46 != 0;
    if (!cpy_r_r47) goto CPyL29;
    cpy_r_r48 = CPyTagged_IsLt_(cpy_r_r42, cpy_r_r45);
    CPyTagged_DECREF(cpy_r_r42);
    if (cpy_r_r48) {
        goto CPyL30;
    } else
        goto CPyL45;
CPyL29: ;
    cpy_r_r49 = (Py_ssize_t)cpy_r_r42 < (Py_ssize_t)cpy_r_r45;
    CPyTagged_DECREF(cpy_r_r42);
    if (!cpy_r_r49) goto CPyL45;
CPyL30: ;
    cpy_r_r50 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r51 = CPyList_GetItem(cpy_r_messages, cpy_r_r50);
    CPyTagged_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1326, CPyStatic_update___globals);
        goto CPyL70;
    }
    if (likely(PyUnicode_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1326, CPyStatic_update___globals, "str", cpy_r_r51);
        goto CPyL70;
    }
    cpy_r_r53 = CPyDef_update___extract_possible_fnam_from_message(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1326, CPyStatic_update___globals);
        goto CPyL70;
    }
    cpy_r_r54 = PyDict_Contains(cpy_r_order, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1326, CPyStatic_update___globals);
        goto CPyL70;
    }
    cpy_r_r56 = cpy_r_r54;
    cpy_r_r57 = cpy_r_r56 ^ 1;
    if (!cpy_r_r57) goto CPyL45;
    cpy_r_r58 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r59 = CPyList_GetItem(cpy_r_messages, cpy_r_r58);
    CPyTagged_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1327, CPyStatic_update___globals);
        goto CPyL70;
    }
    if (likely(PyUnicode_Check(cpy_r_r59)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1327, CPyStatic_update___globals, "str", cpy_r_r59);
        goto CPyL70;
    }
    cpy_r_r61 = CPyDef_update___extract_fnam_from_message(cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1327, CPyStatic_update___globals);
        goto CPyL70;
    }
    cpy_r_r62 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r63 = cpy_r_r61 == cpy_r_r62;
    CPy_DECREF(cpy_r_r61);
    if (!cpy_r_r63) goto CPyL45;
    cpy_r_r64 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r65 = CPyList_GetItem(cpy_r_messages, cpy_r_r64);
    CPyTagged_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1328, CPyStatic_update___globals);
        goto CPyL70;
    }
    if (likely(PyUnicode_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1328, CPyStatic_update___globals, "str", cpy_r_r65);
        goto CPyL70;
    }
    cpy_r_r67 = CPyStatics[5395]; /* 'mypy: ' */
    cpy_r_r68 = CPyStr_Startswith(cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    if (cpy_r_r68) goto CPyL45;
    cpy_r_r69 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r69;
    cpy_r_r70 = CPyList_GetItem(cpy_r_messages, cpy_r_i);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1331, CPyStatic_update___globals);
        goto CPyL70;
    }
    if (likely(PyUnicode_Check(cpy_r_r70)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1331, CPyStatic_update___globals, "str", cpy_r_r70);
        goto CPyL70;
    }
    cpy_r_r72 = PyList_Append(cpy_r_group, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1331, CPyStatic_update___globals);
        goto CPyL70;
    } else
        goto CPyL27;
CPyL45: ;
    CPyTagged_INCREF(cpy_r_n);
    cpy_r_r74 = CPyTagged_StealAsObject(cpy_r_n);
    cpy_r_r75 = CPyDict_Get(cpy_r_order, cpy_r_maybe_fnam, cpy_r_r74);
    CPy_DECREF(cpy_r_maybe_fnam);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1332, CPyStatic_update___globals);
        goto CPyL71;
    }
    if (likely(PyLong_Check(cpy_r_r75)))
        cpy_r_r76 = CPyTagged_FromObject(cpy_r_r75);
    else {
        CPy_TypeError("int", cpy_r_r75); cpy_r_r76 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1332, CPyStatic_update___globals);
        goto CPyL71;
    }
    cpy_r_r77.f0 = cpy_r_r76;
    cpy_r_r77.f1 = cpy_r_group;
    CPyTagged_INCREF(cpy_r_r77.f0);
    CPy_INCREF(cpy_r_r77.f1);
    CPyTagged_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_group);
    cpy_r_r78 = PyTuple_New(2);
    if (unlikely(cpy_r_r78 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6815 = CPyTagged_StealAsObject(cpy_r_r77.f0);
    PyTuple_SET_ITEM(cpy_r_r78, 0, __tmp6815);
    PyObject *__tmp6816 = cpy_r_r77.f1;
    PyTuple_SET_ITEM(cpy_r_r78, 1, __tmp6816);
    cpy_r_r79 = PyList_Append(cpy_r_groups, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1332, CPyStatic_update___globals);
        goto CPyL67;
    }
    cpy_r_r81 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r81;
    goto CPyL18;
CPyL49: ;
    cpy_r_r82 = CPyDef_update_____mypyc_lambda__1_sort_messages_preserving_file_order_obj();
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1335, CPyStatic_update___globals);
        goto CPyL72;
    }
    if (((mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject *)cpy_r_r82)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject *)cpy_r_r82)->___mypyc_env__);
    }
    ((mypy___server___update_____mypyc_lambda__1_sort_messages_preserving_file_order_objObject *)cpy_r_r82)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r83 = 1;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1335, CPyStatic_update___globals);
        goto CPyL73;
    }
    cpy_r_r84 = CPyModule_builtins;
    cpy_r_r85 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1335, CPyStatic_update___globals);
        goto CPyL73;
    }
    PyObject *cpy_r_r87[2] = {cpy_r_groups, cpy_r_r82};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r90 = _PyObject_Vectorcall(cpy_r_r86, cpy_r_r88, 1, cpy_r_r89);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1335, CPyStatic_update___globals);
        goto CPyL73;
    }
    CPy_DECREF(cpy_r_groups);
    CPy_DECREF(cpy_r_r82);
    if (likely(PyList_Check(cpy_r_r90)))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1335, CPyStatic_update___globals, "list", cpy_r_r90);
        goto CPyL61;
    }
    cpy_r_groups = cpy_r_r91;
    cpy_r_r92 = PyList_New(0);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1336, CPyStatic_update___globals);
        goto CPyL74;
    }
    cpy_r_result = cpy_r_r92;
    cpy_r_r93 = 0;
CPyL56: ;
    cpy_r_r94 = (CPyPtr)&((PyVarObject *)cpy_r_groups)->ob_size;
    cpy_r_r95 = *(int64_t *)cpy_r_r94;
    cpy_r_r96 = cpy_r_r95 << 1;
    cpy_r_r97 = (Py_ssize_t)cpy_r_r93 < (Py_ssize_t)cpy_r_r96;
    if (!cpy_r_r97) goto CPyL75;
    cpy_r_r98 = CPyList_GetItemUnsafe(cpy_r_groups, cpy_r_r93);
    PyObject *__tmp6817;
    if (unlikely(!(PyTuple_Check(cpy_r_r98) && PyTuple_GET_SIZE(cpy_r_r98) == 2))) {
        __tmp6817 = NULL;
        goto __LL6818;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r98, 0))))
        __tmp6817 = PyTuple_GET_ITEM(cpy_r_r98, 0);
    else {
        __tmp6817 = NULL;
    }
    if (__tmp6817 == NULL) goto __LL6818;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r98, 1))))
        __tmp6817 = PyTuple_GET_ITEM(cpy_r_r98, 1);
    else {
        __tmp6817 = NULL;
    }
    if (__tmp6817 == NULL) goto __LL6818;
    __tmp6817 = cpy_r_r98;
__LL6818: ;
    if (unlikely(__tmp6817 == NULL)) {
        CPy_TypeError("tuple[int, list]", cpy_r_r98); cpy_r_r99 = (tuple_T2IO) { CPY_INT_TAG, NULL };
    } else {
        PyObject *__tmp6819 = PyTuple_GET_ITEM(cpy_r_r98, 0);
        CPyTagged __tmp6820;
        if (likely(PyLong_Check(__tmp6819)))
            __tmp6820 = CPyTagged_FromObject(__tmp6819);
        else {
            CPy_TypeError("int", __tmp6819); __tmp6820 = CPY_INT_TAG;
        }
        cpy_r_r99.f0 = __tmp6820;
        PyObject *__tmp6821 = PyTuple_GET_ITEM(cpy_r_r98, 1);
        CPy_INCREF(__tmp6821);
        PyObject *__tmp6822;
        if (likely(PyList_Check(__tmp6821)))
            __tmp6822 = __tmp6821;
        else {
            CPy_TypeError("list", __tmp6821); 
            __tmp6822 = NULL;
        }
        cpy_r_r99.f1 = __tmp6822;
    }
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1337, CPyStatic_update___globals);
        goto CPyL76;
    }
    cpy_r_r100 = cpy_r_r99.f0;
    CPyTagged_INCREF(cpy_r_r100);
    cpy_r_key = cpy_r_r100;
    CPyTagged_DECREF(cpy_r_key);
    cpy_r_r101 = cpy_r_r99.f1;
    CPy_INCREF(cpy_r_r101);
    CPyTagged_DECREF(cpy_r_r99.f0);
    CPy_DECREF(cpy_r_r99.f1);
    cpy_r_group = cpy_r_r101;
    cpy_r_r102 = CPyList_Extend(cpy_r_result, cpy_r_group);
    CPy_DECREF(cpy_r_group);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1338, CPyStatic_update___globals);
        goto CPyL76;
    } else
        goto CPyL77;
CPyL59: ;
    cpy_r_r103 = cpy_r_r93 + 2;
    cpy_r_r93 = cpy_r_r103;
    goto CPyL56;
CPyL60: ;
    return cpy_r_result;
CPyL61: ;
    cpy_r_r104 = NULL;
    return cpy_r_r104;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_n);
    goto CPyL61;
CPyL63: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_order);
    goto CPyL61;
CPyL64: ;
    CPy_DECREF(cpy_r_fnam);
    goto CPyL15;
CPyL65: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_order);
    CPy_DecRef(cpy_r_fnam);
    goto CPyL61;
CPyL66: ;
    CPyTagged_DECREF(cpy_r_n);
    CPy_DECREF(cpy_r_order);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL49;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_order);
    CPy_DecRef(cpy_r_groups);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL61;
CPyL68: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_order);
    CPy_DecRef(cpy_r_msg);
    CPy_DecRef(cpy_r_groups);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL61;
CPyL69: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_order);
    CPy_DecRef(cpy_r_msg);
    CPy_DecRef(cpy_r_groups);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_maybe_fnam);
    goto CPyL61;
CPyL70: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_order);
    CPy_DecRef(cpy_r_groups);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_maybe_fnam);
    CPy_DecRef(cpy_r_group);
    goto CPyL61;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_order);
    CPy_DecRef(cpy_r_groups);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_group);
    goto CPyL61;
CPyL72: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_groups);
    goto CPyL61;
CPyL73: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_r82);
    goto CPyL61;
CPyL74: ;
    CPy_DecRef(cpy_r_groups);
    goto CPyL61;
CPyL75: ;
    CPy_DECREF(cpy_r_groups);
    goto CPyL60;
CPyL76: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_result);
    goto CPyL61;
CPyL77: ;
    CPy_DECREF(cpy_r_r102);
    goto CPyL59;
}

PyObject *CPyPy_update___sort_messages_preserving_file_order(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"messages", "prev_messages", 0};
    static CPyArg_Parser parser = {"OO:sort_messages_preserving_file_order", kwlist, 0};
    PyObject *obj_messages;
    PyObject *obj_prev_messages;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_messages, &obj_prev_messages)) {
        return NULL;
    }
    PyObject *arg_messages;
    if (likely(PyList_Check(obj_messages)))
        arg_messages = obj_messages;
    else {
        CPy_TypeError("list", obj_messages); 
        goto fail;
    }
    PyObject *arg_prev_messages;
    if (likely(PyList_Check(obj_prev_messages)))
        arg_prev_messages = obj_prev_messages;
    else {
        CPy_TypeError("list", obj_prev_messages); 
        goto fail;
    }
    PyObject *retval = CPyDef_update___sort_messages_preserving_file_order(arg_messages, arg_prev_messages);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/update.py", "sort_messages_preserving_file_order", 1296, CPyStatic_update___globals);
    return NULL;
}

char CPyDef_update_____top_level__(void) {
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
    PyObject **cpy_r_r11;
    PyObject **cpy_r_r12;
    void *cpy_r_r14;
    void *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
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
    int32_t cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    tuple_T2OO cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
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
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject **cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    int32_t cpy_r_r173;
    char cpy_r_r174;
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
    int32_t cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    int32_t cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    int32_t cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    int32_t cpy_r_r197;
    char cpy_r_r198;
    PyObject **cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    int32_t cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    char cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    char cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    char cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject **cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    int32_t cpy_r_r242;
    char cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    int32_t cpy_r_r246;
    char cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    int32_t cpy_r_r250;
    char cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    int32_t cpy_r_r254;
    char cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    int32_t cpy_r_r258;
    char cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    int32_t cpy_r_r262;
    char cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    int32_t cpy_r_r266;
    char cpy_r_r267;
    PyObject **cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    int32_t cpy_r_r273;
    char cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    tuple_T2OO cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    int32_t cpy_r_r290;
    char cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    int32_t cpy_r_r297;
    char cpy_r_r298;
    PyObject *cpy_r_r299;
    char cpy_r_r300;
    char cpy_r_r301;
    char cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    tuple_T2OO cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    int32_t cpy_r_r309;
    char cpy_r_r310;
    char cpy_r_r311;
    char cpy_r_r312;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", -1, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_update___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 115, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_os;
    cpy_r_r10 = (PyObject **)&CPyModule_re;
    cpy_r_r11 = (PyObject **)&CPyModule_sys;
    cpy_r_r12 = (PyObject **)&CPyModule_time;
    PyObject **cpy_r_r13[4] = {cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12};
    cpy_r_r14 = (void *)&cpy_r_r13;
    int64_t cpy_r_r15[4] = {117, 118, 119, 120};
    cpy_r_r16 = (void *)&cpy_r_r15;
    cpy_r_r17 = CPyStatics[9769]; /* (('os', 'os', 'os'), ('re', 're', 're'),
                                     ('sys', 'sys', 'sys'), ('time', 'time', 'time')) */
    cpy_r_r18 = CPyStatic_update___globals;
    cpy_r_r19 = CPyStatics[5396]; /* 'mypy/server/update.py' */
    cpy_r_r20 = CPyStatics[17]; /* '<module>' */
    cpy_r_r21 = CPyImport_ImportMany(cpy_r_r17, cpy_r_r14, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r16);
    if (!cpy_r_r21) goto CPyL107;
    cpy_r_r22 = CPyStatics[9770]; /* ('Callable', 'Final', 'NamedTuple', 'Sequence', 'Union') */
    cpy_r_r23 = CPyStatics[21]; /* 'typing' */
    cpy_r_r24 = CPyStatic_update___globals;
    cpy_r_r25 = CPyImport_ImportFromMany(cpy_r_r23, cpy_r_r22, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 121, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_typing = cpy_r_r25;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[9086]; /* ('TypeAlias',) */
    cpy_r_r27 = CPyStatics[9087]; /* ('_TypeAlias',) */
    cpy_r_r28 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r29 = CPyStatic_update___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r26, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 122, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_typing_extensions = cpy_r_r30;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[9771]; /* ('DEBUG_FINE_GRAINED', 'FAKE_ROOT_MODULE',
                                     'BuildManager', 'BuildResult', 'Graph', 'State',
                                     'load_graph', 'process_fresh_modules') */
    cpy_r_r32 = CPyStatics[238]; /* 'mypy.build' */
    cpy_r_r33 = CPyStatic_update___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 124, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___build = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy___build);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[9703]; /* ('FineGrainedDeferredNode',) */
    cpy_r_r36 = CPyStatics[517]; /* 'mypy.checker' */
    cpy_r_r37 = CPyStatic_update___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 134, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___checker = cpy_r_r38;
    CPy_INCREF(CPyModule_mypy___checker);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[9490]; /* ('CompileError',) */
    cpy_r_r40 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r41 = CPyStatic_update___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 135, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___errors = cpy_r_r42;
    CPy_INCREF(CPyModule_mypy___errors);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[9146]; /* ('FileSystemCache',) */
    cpy_r_r44 = CPyStatics[564]; /* 'mypy.fscache' */
    cpy_r_r45 = CPyStatic_update___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 136, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___fscache = cpy_r_r46;
    CPy_INCREF(CPyModule_mypy___fscache);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[9772]; /* ('BuildSource',) */
    cpy_r_r48 = CPyStatics[576]; /* 'mypy.modulefinder' */
    cpy_r_r49 = CPyStatic_update___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 137, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___modulefinder = cpy_r_r50;
    CPy_INCREF(CPyModule_mypy___modulefinder);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[9773]; /* ('Decorator', 'FuncDef', 'ImportFrom', 'MypyFile',
                                     'OverloadedFuncDef', 'SymbolNode', 'SymbolTable',
                                     'TypeInfo') */
    cpy_r_r52 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r53 = CPyStatic_update___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 138, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___nodes = cpy_r_r54;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r56 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r57 = CPyStatic_update___globals;
    cpy_r_r58 = CPyImport_ImportFromMany(cpy_r_r56, cpy_r_r55, cpy_r_r55, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 148, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___options = cpy_r_r58;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r59 = CPyStatics[9774]; /* ('core_modules', 'semantic_analysis_for_scc',
                                     'semantic_analysis_for_targets') */
    cpy_r_r60 = CPyStatics[515]; /* 'mypy.semanal_main' */
    cpy_r_r61 = CPyStatic_update___globals;
    cpy_r_r62 = CPyImport_ImportFromMany(cpy_r_r60, cpy_r_r59, cpy_r_r59, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 149, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___semanal_main = cpy_r_r62;
    CPy_INCREF(CPyModule_mypy___semanal_main);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r63 = CPyStatics[9775]; /* ('SymbolSnapshot', 'compare_symbol_table_snapshots',
                                     'snapshot_symbol_table') */
    cpy_r_r64 = CPyStatics[5300]; /* 'mypy.server.astdiff' */
    cpy_r_r65 = CPyStatic_update___globals;
    cpy_r_r66 = CPyImport_ImportFromMany(cpy_r_r64, cpy_r_r63, cpy_r_r63, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 154, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___server___astdiff = cpy_r_r66;
    CPy_INCREF(CPyModule_mypy___server___astdiff);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r67 = CPyStatics[9776]; /* ('merge_asts',) */
    cpy_r_r68 = CPyStatics[5304]; /* 'mypy.server.astmerge' */
    cpy_r_r69 = CPyStatic_update___globals;
    cpy_r_r70 = CPyImport_ImportFromMany(cpy_r_r68, cpy_r_r67, cpy_r_r67, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 159, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___server___astmerge = cpy_r_r70;
    CPy_INCREF(CPyModule_mypy___server___astmerge);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r71 = CPyStatics[9777]; /* ('SavedAttributes', 'strip_target') */
    cpy_r_r72 = CPyStatics[5191]; /* 'mypy.server.aststrip' */
    cpy_r_r73 = CPyStatic_update___globals;
    cpy_r_r74 = CPyImport_ImportFromMany(cpy_r_r72, cpy_r_r71, cpy_r_r71, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 160, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___server___aststrip = cpy_r_r74;
    CPy_INCREF(CPyModule_mypy___server___aststrip);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r75 = CPyStatics[9778]; /* ('get_dependencies_of_target', 'merge_dependencies') */
    cpy_r_r76 = CPyStatics[257]; /* 'mypy.server.deps' */
    cpy_r_r77 = CPyStatic_update___globals;
    cpy_r_r78 = CPyImport_ImportFromMany(cpy_r_r76, cpy_r_r75, cpy_r_r75, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 161, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___server___deps = cpy_r_r78;
    CPy_INCREF(CPyModule_mypy___server___deps);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r79 = CPyStatics[9100]; /* ('trigger_to_target',) */
    cpy_r_r80 = CPyStatics[255]; /* 'mypy.server.target' */
    cpy_r_r81 = CPyStatic_update___globals;
    cpy_r_r82 = CPyImport_ImportFromMany(cpy_r_r80, cpy_r_r79, cpy_r_r79, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 162, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___server___target = cpy_r_r82;
    CPy_INCREF(CPyModule_mypy___server___target);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r83 = CPyStatics[9779]; /* ('WILDCARD_TAG', 'make_trigger') */
    cpy_r_r84 = CPyStatics[4443]; /* 'mypy.server.trigger' */
    cpy_r_r85 = CPyStatic_update___globals;
    cpy_r_r86 = CPyImport_ImportFromMany(cpy_r_r84, cpy_r_r83, cpy_r_r83, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 163, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___server___trigger = cpy_r_r86;
    CPy_INCREF(CPyModule_mypy___server___trigger);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r87 = CPyStatics[9241]; /* ('type_state',) */
    cpy_r_r88 = CPyStatics[596]; /* 'mypy.typestate' */
    cpy_r_r89 = CPyStatic_update___globals;
    cpy_r_r90 = CPyImport_ImportFromMany(cpy_r_r88, cpy_r_r87, cpy_r_r87, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 164, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___typestate = cpy_r_r90;
    CPy_INCREF(CPyModule_mypy___typestate);
    CPy_DECREF(cpy_r_r90);
    cpy_r_r91 = CPyStatics[9780]; /* ('module_prefix', 'split_target') */
    cpy_r_r92 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r93 = CPyStatic_update___globals;
    cpy_r_r94 = CPyImport_ImportFromMany(cpy_r_r92, cpy_r_r91, cpy_r_r91, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 165, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_mypy___util = cpy_r_r94;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r95 = CPyStatic_update___globals;
    cpy_r_r96 = CPyStatics[5407]; /* 'MAX_ITER' */
    cpy_r_r97 = CPyStatics[9035]; /* 1000 */
    cpy_r_r98 = CPyDict_SetItem(cpy_r_r95, cpy_r_r96, cpy_r_r97);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 167, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r100 = CPyStatic_semanal_main___core_modules;
    if (likely(cpy_r_r100 != NULL)) goto CPyL27;
    PyErr_SetString(PyExc_NameError, "value for final name \"core_modules\" was not set");
    cpy_r_r101 = 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 169, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r102 = PyList_AsTuple(cpy_r_r100);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 169, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r103 = CPyStatics[599]; /* 'mypy_extensions' */
    cpy_r_r104 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r105.f0 = cpy_r_r103;
    cpy_r_r105.f1 = cpy_r_r104;
    CPy_INCREF(cpy_r_r105.f0);
    CPy_INCREF(cpy_r_r105.f1);
    cpy_r_r106 = PyTuple_New(2);
    if (unlikely(cpy_r_r106 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6823 = cpy_r_r105.f0;
    PyTuple_SET_ITEM(cpy_r_r106, 0, __tmp6823);
    PyObject *__tmp6824 = cpy_r_r105.f1;
    PyTuple_SET_ITEM(cpy_r_r106, 1, __tmp6824);
    cpy_r_r107 = PyNumber_Add(cpy_r_r102, cpy_r_r106);
    CPy_DECREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 169, CPyStatic_update___globals);
        goto CPyL107;
    }
    if (likely(PyTuple_Check(cpy_r_r107)))
        cpy_r_r108 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "<module>", 169, CPyStatic_update___globals, "tuple", cpy_r_r107);
        goto CPyL107;
    }
    cpy_r_r109 = CPyStatic_update___globals;
    cpy_r_r110 = CPyStatics[5372]; /* 'SENSITIVE_INTERNAL_MODULES' */
    cpy_r_r111 = CPyDict_SetItem(cpy_r_r109, cpy_r_r110, cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 169, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r113 = NULL;
    cpy_r_r114 = CPyStatics[1999]; /* 'mypy.server.update' */
    cpy_r_r115 = (PyObject *)CPyType_update___FineGrainedBuildManager_template;
    cpy_r_r116 = CPyType_FromTemplate(cpy_r_r115, cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 172, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r117 = CPyDef_update___FineGrainedBuildManager_trait_vtable_setup();
    if (unlikely(cpy_r_r117 == 2)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", -1, CPyStatic_update___globals);
        goto CPyL108;
    }
    cpy_r_r118 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r119 = CPyStatics[606]; /* 'manager' */
    cpy_r_r120 = CPyStatics[607]; /* 'graph' */
    cpy_r_r121 = CPyStatics[5408]; /* 'previous_modules' */
    cpy_r_r122 = CPyStatics[690]; /* 'deps' */
    cpy_r_r123 = CPyStatics[5409]; /* 'previous_targets_with_errors' */
    cpy_r_r124 = CPyStatics[5410]; /* 'previous_messages' */
    cpy_r_r125 = CPyStatics[5411]; /* 'blocking_error' */
    cpy_r_r126 = CPyStatics[5412]; /* 'stale' */
    cpy_r_r127 = CPyStatics[5413]; /* 'triggered' */
    cpy_r_r128 = CPyStatics[5414]; /* 'changed_modules' */
    cpy_r_r129 = CPyStatics[5415]; /* 'updated_modules' */
    cpy_r_r130 = CPyStatics[655]; /* 'processed_targets' */
    cpy_r_r131 = PyTuple_Pack(12, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126, cpy_r_r127, cpy_r_r128, cpy_r_r129, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 172, CPyStatic_update___globals);
        goto CPyL108;
    }
    cpy_r_r132 = PyObject_SetAttr(cpy_r_r116, cpy_r_r118, cpy_r_r131);
    CPy_DECREF(cpy_r_r131);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 172, CPyStatic_update___globals);
        goto CPyL108;
    }
    CPyType_update___FineGrainedBuildManager = (PyTypeObject *)cpy_r_r116;
    CPy_INCREF(CPyType_update___FineGrainedBuildManager);
    cpy_r_r134 = CPyStatic_update___globals;
    cpy_r_r135 = CPyStatics[1997]; /* 'FineGrainedBuildManager' */
    cpy_r_r136 = CPyDict_SetItem(cpy_r_r134, cpy_r_r135, cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 172, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r138 = CPyModule_typing;
    cpy_r_r139 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r140 = cpy_r_r138 != cpy_r_r139;
    if (cpy_r_r140) goto CPyL39;
    cpy_r_r141 = CPyStatics[21]; /* 'typing' */
    cpy_r_r142 = PyImport_Import(cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_typing = cpy_r_r142;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r142);
CPyL39: ;
    cpy_r_r143 = PyImport_GetModuleDict();
    cpy_r_r144 = CPyStatics[21]; /* 'typing' */
    cpy_r_r145 = CPyDict_GetItem(cpy_r_r143, cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r146 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r147 = CPyObject_GetAttr(cpy_r_r145, cpy_r_r146);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r148 = PyTuple_Pack(1, cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r149 = CPyModule_typing;
    cpy_r_r150 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r151 = cpy_r_r149 != cpy_r_r150;
    if (cpy_r_r151) goto CPyL45;
    cpy_r_r152 = CPyStatics[21]; /* 'typing' */
    cpy_r_r153 = PyImport_Import(cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL109;
    }
    CPyModule_typing = cpy_r_r153;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r153);
CPyL45: ;
    cpy_r_r154 = PyImport_GetModuleDict();
    cpy_r_r155 = CPyStatics[21]; /* 'typing' */
    cpy_r_r156 = CPyDict_GetItem(cpy_r_r154, cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL109;
    }
    cpy_r_r157 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r158 = CPyObject_GetAttr(cpy_r_r156, cpy_r_r157);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL109;
    }
    cpy_r_r159 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r160 = PyObject_HasAttr(cpy_r_r158, cpy_r_r159);
    if (!cpy_r_r160) goto CPyL52;
    cpy_r_r161 = CPyStatics[5379]; /* 'NormalUpdate' */
    cpy_r_r162 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r163 = CPyObject_GetAttr(cpy_r_r158, cpy_r_r162);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL110;
    }
    PyObject *cpy_r_r164[2] = {cpy_r_r161, cpy_r_r148};
    cpy_r_r165 = (PyObject **)&cpy_r_r164;
    cpy_r_r166 = _PyObject_Vectorcall(cpy_r_r163, cpy_r_r165, 2, 0);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL110;
    }
    if (likely(PyDict_Check(cpy_r_r166)))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals, "dict", cpy_r_r166);
        goto CPyL110;
    }
    cpy_r_r168 = cpy_r_r167;
    goto CPyL54;
CPyL52: ;
    cpy_r_r169 = PyDict_New();
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL110;
    }
    cpy_r_r168 = cpy_r_r169;
CPyL54: ;
    cpy_r_r170 = PyDict_New();
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL111;
    }
    cpy_r_r171 = (PyObject *)&PyUnicode_Type;
    cpy_r_r172 = CPyStatics[408]; /* 'module' */
    cpy_r_r173 = CPyDict_SetItem(cpy_r_r170, cpy_r_r172, cpy_r_r171);
    cpy_r_r174 = cpy_r_r173 >= 0;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 542, CPyStatic_update___globals);
        goto CPyL112;
    }
    cpy_r_r175 = (PyObject *)&PyUnicode_Type;
    cpy_r_r176 = CPyStatics[142]; /* 'path' */
    cpy_r_r177 = CPyDict_SetItem(cpy_r_r170, cpy_r_r176, cpy_r_r175);
    cpy_r_r178 = cpy_r_r177 >= 0;
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 543, CPyStatic_update___globals);
        goto CPyL112;
    }
    cpy_r_r179 = (PyObject *)&PyList_Type;
    cpy_r_r180 = CPyStatics[5416]; /* 'remaining' */
    cpy_r_r181 = CPyDict_SetItem(cpy_r_r170, cpy_r_r180, cpy_r_r179);
    cpy_r_r182 = cpy_r_r181 >= 0;
    if (unlikely(!cpy_r_r182)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 544, CPyStatic_update___globals);
        goto CPyL112;
    }
    cpy_r_r183 = (PyObject *)&PyType_Type;
    cpy_r_r184 = CPyStatics[672]; /* 'tree' */
    cpy_r_r185 = CPyDict_SetItem(cpy_r_r170, cpy_r_r184, cpy_r_r183);
    cpy_r_r186 = cpy_r_r185 >= 0;
    if (unlikely(!cpy_r_r186)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 545, CPyStatic_update___globals);
        goto CPyL112;
    }
    cpy_r_r187 = CPyStatics[5379]; /* 'NormalUpdate' */
    cpy_r_r188 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r189 = CPyDict_SetItem(cpy_r_r168, cpy_r_r188, cpy_r_r170);
    CPy_DECREF(cpy_r_r170);
    cpy_r_r190 = cpy_r_r189 >= 0;
    if (unlikely(!cpy_r_r190)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL111;
    }
    cpy_r_r191 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r192 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r193 = CPyDict_SetItem(cpy_r_r168, cpy_r_r192, cpy_r_r191);
    cpy_r_r194 = cpy_r_r193 >= 0;
    if (unlikely(!cpy_r_r194)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL111;
    }
    cpy_r_r195 = CPyStatics[1999]; /* 'mypy.server.update' */
    cpy_r_r196 = CPyStatics[619]; /* '__module__' */
    cpy_r_r197 = CPyDict_SetItem(cpy_r_r168, cpy_r_r196, cpy_r_r195);
    cpy_r_r198 = cpy_r_r197 >= 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL111;
    }
    PyObject *cpy_r_r199[3] = {cpy_r_r187, cpy_r_r148, cpy_r_r168};
    cpy_r_r200 = (PyObject **)&cpy_r_r199;
    cpy_r_r201 = _PyObject_Vectorcall(cpy_r_r158, cpy_r_r200, 3, 0);
    CPy_DECREF(cpy_r_r158);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL113;
    }
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_r168);
    CPyType_update___NormalUpdate = (PyTypeObject *)cpy_r_r201;
    CPy_INCREF(CPyType_update___NormalUpdate);
    cpy_r_r202 = CPyStatic_update___globals;
    cpy_r_r203 = CPyStatics[5379]; /* 'NormalUpdate' */
    cpy_r_r204 = CPyDict_SetItem(cpy_r_r202, cpy_r_r203, cpy_r_r201);
    CPy_DECREF(cpy_r_r201);
    cpy_r_r205 = cpy_r_r204 >= 0;
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 541, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r206 = (PyObject *)CPyType_update___NormalUpdate;
    cpy_r_r207 = CPyModule_typing;
    cpy_r_r208 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r209 = cpy_r_r207 != cpy_r_r208;
    if (cpy_r_r209) goto CPyL67;
    cpy_r_r210 = CPyStatics[21]; /* 'typing' */
    cpy_r_r211 = PyImport_Import(cpy_r_r210);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPyModule_typing = cpy_r_r211;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r211);
CPyL67: ;
    cpy_r_r212 = PyImport_GetModuleDict();
    cpy_r_r213 = CPyStatics[21]; /* 'typing' */
    cpy_r_r214 = CPyDict_GetItem(cpy_r_r212, cpy_r_r213);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r215 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r216 = CPyObject_GetAttr(cpy_r_r214, cpy_r_r215);
    CPy_DECREF(cpy_r_r214);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r217 = PyTuple_Pack(1, cpy_r_r216);
    CPy_DECREF(cpy_r_r216);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r218 = CPyModule_typing;
    cpy_r_r219 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r220 = cpy_r_r218 != cpy_r_r219;
    if (cpy_r_r220) goto CPyL73;
    cpy_r_r221 = CPyStatics[21]; /* 'typing' */
    cpy_r_r222 = PyImport_Import(cpy_r_r221);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL114;
    }
    CPyModule_typing = cpy_r_r222;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r222);
CPyL73: ;
    cpy_r_r223 = PyImport_GetModuleDict();
    cpy_r_r224 = CPyStatics[21]; /* 'typing' */
    cpy_r_r225 = CPyDict_GetItem(cpy_r_r223, cpy_r_r224);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL114;
    }
    cpy_r_r226 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r227 = CPyObject_GetAttr(cpy_r_r225, cpy_r_r226);
    CPy_DECREF(cpy_r_r225);
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL114;
    }
    cpy_r_r228 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r229 = PyObject_HasAttr(cpy_r_r227, cpy_r_r228);
    if (!cpy_r_r229) goto CPyL80;
    cpy_r_r230 = CPyStatics[5380]; /* 'BlockedUpdate' */
    cpy_r_r231 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r232 = CPyObject_GetAttr(cpy_r_r227, cpy_r_r231);
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL115;
    }
    PyObject *cpy_r_r233[2] = {cpy_r_r230, cpy_r_r217};
    cpy_r_r234 = (PyObject **)&cpy_r_r233;
    cpy_r_r235 = _PyObject_Vectorcall(cpy_r_r232, cpy_r_r234, 2, 0);
    CPy_DECREF(cpy_r_r232);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL115;
    }
    if (likely(PyDict_Check(cpy_r_r235)))
        cpy_r_r236 = cpy_r_r235;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals, "dict", cpy_r_r235);
        goto CPyL115;
    }
    cpy_r_r237 = cpy_r_r236;
    goto CPyL82;
CPyL80: ;
    cpy_r_r238 = PyDict_New();
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL115;
    }
    cpy_r_r237 = cpy_r_r238;
CPyL82: ;
    cpy_r_r239 = PyDict_New();
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL116;
    }
    cpy_r_r240 = (PyObject *)&PyUnicode_Type;
    cpy_r_r241 = CPyStatics[408]; /* 'module' */
    cpy_r_r242 = CPyDict_SetItem(cpy_r_r239, cpy_r_r241, cpy_r_r240);
    cpy_r_r243 = cpy_r_r242 >= 0;
    if (unlikely(!cpy_r_r243)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 551, CPyStatic_update___globals);
        goto CPyL117;
    }
    cpy_r_r244 = (PyObject *)&PyUnicode_Type;
    cpy_r_r245 = CPyStatics[142]; /* 'path' */
    cpy_r_r246 = CPyDict_SetItem(cpy_r_r239, cpy_r_r245, cpy_r_r244);
    cpy_r_r247 = cpy_r_r246 >= 0;
    if (unlikely(!cpy_r_r247)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 552, CPyStatic_update___globals);
        goto CPyL117;
    }
    cpy_r_r248 = (PyObject *)&PyList_Type;
    cpy_r_r249 = CPyStatics[5416]; /* 'remaining' */
    cpy_r_r250 = CPyDict_SetItem(cpy_r_r239, cpy_r_r249, cpy_r_r248);
    cpy_r_r251 = cpy_r_r250 >= 0;
    if (unlikely(!cpy_r_r251)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 553, CPyStatic_update___globals);
        goto CPyL117;
    }
    cpy_r_r252 = (PyObject *)&PyList_Type;
    cpy_r_r253 = CPyStatics[135]; /* 'messages' */
    cpy_r_r254 = CPyDict_SetItem(cpy_r_r239, cpy_r_r253, cpy_r_r252);
    cpy_r_r255 = cpy_r_r254 >= 0;
    if (unlikely(!cpy_r_r255)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 554, CPyStatic_update___globals);
        goto CPyL117;
    }
    cpy_r_r256 = CPyStatics[5380]; /* 'BlockedUpdate' */
    cpy_r_r257 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r258 = CPyDict_SetItem(cpy_r_r237, cpy_r_r257, cpy_r_r239);
    CPy_DECREF(cpy_r_r239);
    cpy_r_r259 = cpy_r_r258 >= 0;
    if (unlikely(!cpy_r_r259)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL116;
    }
    cpy_r_r260 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r261 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r262 = CPyDict_SetItem(cpy_r_r237, cpy_r_r261, cpy_r_r260);
    cpy_r_r263 = cpy_r_r262 >= 0;
    if (unlikely(!cpy_r_r263)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL116;
    }
    cpy_r_r264 = CPyStatics[1999]; /* 'mypy.server.update' */
    cpy_r_r265 = CPyStatics[619]; /* '__module__' */
    cpy_r_r266 = CPyDict_SetItem(cpy_r_r237, cpy_r_r265, cpy_r_r264);
    cpy_r_r267 = cpy_r_r266 >= 0;
    if (unlikely(!cpy_r_r267)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL116;
    }
    PyObject *cpy_r_r268[3] = {cpy_r_r256, cpy_r_r217, cpy_r_r237};
    cpy_r_r269 = (PyObject **)&cpy_r_r268;
    cpy_r_r270 = _PyObject_Vectorcall(cpy_r_r227, cpy_r_r269, 3, 0);
    CPy_DECREF(cpy_r_r227);
    if (unlikely(cpy_r_r270 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL118;
    }
    CPy_DECREF(cpy_r_r217);
    CPy_DECREF(cpy_r_r237);
    CPyType_update___BlockedUpdate = (PyTypeObject *)cpy_r_r270;
    CPy_INCREF(CPyType_update___BlockedUpdate);
    cpy_r_r271 = CPyStatic_update___globals;
    cpy_r_r272 = CPyStatics[5380]; /* 'BlockedUpdate' */
    cpy_r_r273 = CPyDict_SetItem(cpy_r_r271, cpy_r_r272, cpy_r_r270);
    CPy_DECREF(cpy_r_r270);
    cpy_r_r274 = cpy_r_r273 >= 0;
    if (unlikely(!cpy_r_r274)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 550, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r275 = (PyObject *)CPyType_update___BlockedUpdate;
    cpy_r_r276 = CPyStatic_update___globals;
    cpy_r_r277 = CPyStatics[84]; /* 'Union' */
    cpy_r_r278 = CPyDict_GetItem(cpy_r_r276, cpy_r_r277);
    if (unlikely(cpy_r_r278 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 557, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r279 = CPyStatic_update___globals;
    cpy_r_r280 = CPyStatics[5379]; /* 'NormalUpdate' */
    cpy_r_r281 = CPyDict_GetItem(cpy_r_r279, cpy_r_r280);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 557, CPyStatic_update___globals);
        goto CPyL119;
    }
    cpy_r_r282 = CPyStatic_update___globals;
    cpy_r_r283 = CPyStatics[5380]; /* 'BlockedUpdate' */
    cpy_r_r284 = CPyDict_GetItem(cpy_r_r282, cpy_r_r283);
    if (unlikely(cpy_r_r284 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 557, CPyStatic_update___globals);
        goto CPyL120;
    }
    cpy_r_r285.f0 = cpy_r_r281;
    cpy_r_r285.f1 = cpy_r_r284;
    CPy_INCREF(cpy_r_r285.f0);
    CPy_INCREF(cpy_r_r285.f1);
    CPy_DECREF(cpy_r_r281);
    CPy_DECREF(cpy_r_r284);
    cpy_r_r286 = PyTuple_New(2);
    if (unlikely(cpy_r_r286 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6825 = cpy_r_r285.f0;
    PyTuple_SET_ITEM(cpy_r_r286, 0, __tmp6825);
    PyObject *__tmp6826 = cpy_r_r285.f1;
    PyTuple_SET_ITEM(cpy_r_r286, 1, __tmp6826);
    cpy_r_r287 = PyObject_GetItem(cpy_r_r278, cpy_r_r286);
    CPy_DECREF(cpy_r_r278);
    CPy_DECREF(cpy_r_r286);
    if (unlikely(cpy_r_r287 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 557, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r288 = CPyStatic_update___globals;
    cpy_r_r289 = CPyStatics[5417]; /* 'UpdateResult' */
    cpy_r_r290 = CPyDict_SetItem(cpy_r_r288, cpy_r_r289, cpy_r_r287);
    CPy_DECREF(cpy_r_r287);
    cpy_r_r291 = cpy_r_r290 >= 0;
    if (unlikely(!cpy_r_r291)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 557, CPyStatic_update___globals);
        goto CPyL107;
    }
    cpy_r_r292 = CPyModule_sys;
    cpy_r_r293 = CPyStatics[305]; /* 'platform' */
    cpy_r_r294 = CPyObject_GetAttr(cpy_r_r292, cpy_r_r293);
    if (unlikely(cpy_r_r294 == NULL)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 1195, CPyStatic_update___globals);
        goto CPyL107;
    }
    if (likely(PyUnicode_Check(cpy_r_r294)))
        cpy_r_r295 = cpy_r_r294;
    else {
        CPy_TypeErrorTraceback("mypy/server/update.py", "<module>", 1195, CPyStatic_update___globals, "str", cpy_r_r294);
        goto CPyL107;
    }
    cpy_r_r296 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r297 = PyUnicode_Compare(cpy_r_r295, cpy_r_r296);
    CPy_DECREF(cpy_r_r295);
    cpy_r_r298 = cpy_r_r297 == -1;
    if (!cpy_r_r298) goto CPyL102;
    cpy_r_r299 = PyErr_Occurred();
    cpy_r_r300 = cpy_r_r299 != NULL;
    if (!cpy_r_r300) goto CPyL102;
    cpy_r_r301 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r301)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 1195, CPyStatic_update___globals);
        goto CPyL107;
    }
CPyL102: ;
    cpy_r_r302 = cpy_r_r297 != 0;
    if (!cpy_r_r302) goto CPyL104;
    cpy_r_r303 = CPyStatics[5418]; /* '/__init__.py' */
    cpy_r_r304 = CPyStatics[5419]; /* '/__init__.pyi' */
    cpy_r_r305.f0 = cpy_r_r303;
    cpy_r_r305.f1 = cpy_r_r304;
    CPy_INCREF(cpy_r_r305.f0);
    CPy_INCREF(cpy_r_r305.f1);
    CPyStatic_update___INIT_SUFFIXES = cpy_r_r305;
    CPy_INCREF(CPyStatic_update___INIT_SUFFIXES.f0);
    CPy_INCREF(CPyStatic_update___INIT_SUFFIXES.f1);
    cpy_r_r306 = CPyStatic_update___globals;
    cpy_r_r307 = CPyStatics[5420]; /* 'INIT_SUFFIXES' */
    cpy_r_r308 = PyTuple_New(2);
    if (unlikely(cpy_r_r308 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6827 = cpy_r_r305.f0;
    PyTuple_SET_ITEM(cpy_r_r308, 0, __tmp6827);
    PyObject *__tmp6828 = cpy_r_r305.f1;
    PyTuple_SET_ITEM(cpy_r_r308, 1, __tmp6828);
    cpy_r_r309 = CPyDict_SetItem(cpy_r_r306, cpy_r_r307, cpy_r_r308);
    CPy_DECREF(cpy_r_r308);
    cpy_r_r310 = cpy_r_r309 >= 0;
    if (unlikely(!cpy_r_r310)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 1196, CPyStatic_update___globals);
        goto CPyL107;
    } else
        goto CPyL106;
CPyL104: ;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r311 = 0;
    if (unlikely(!cpy_r_r311)) {
        CPy_AddTraceback("mypy/server/update.py", "<module>", 1198, CPyStatic_update___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL106: ;
    return 1;
CPyL107: ;
    cpy_r_r312 = 2;
    return cpy_r_r312;
CPyL108: ;
    CPy_DecRef(cpy_r_r116);
    goto CPyL107;
CPyL109: ;
    CPy_DecRef(cpy_r_r148);
    goto CPyL107;
CPyL110: ;
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r158);
    goto CPyL107;
CPyL111: ;
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_r168);
    goto CPyL107;
CPyL112: ;
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_r168);
    CPy_DecRef(cpy_r_r170);
    goto CPyL107;
CPyL113: ;
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r168);
    goto CPyL107;
CPyL114: ;
    CPy_DecRef(cpy_r_r217);
    goto CPyL107;
CPyL115: ;
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r227);
    goto CPyL107;
CPyL116: ;
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r227);
    CPy_DecRef(cpy_r_r237);
    goto CPyL107;
CPyL117: ;
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r227);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r239);
    goto CPyL107;
CPyL118: ;
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r237);
    goto CPyL107;
CPyL119: ;
    CPy_DecRef(cpy_r_r278);
    goto CPyL107;
CPyL120: ;
    CPy_DecRef(cpy_r_r278);
    CPy_DecRef(cpy_r_r281);
    goto CPyL107;
}
