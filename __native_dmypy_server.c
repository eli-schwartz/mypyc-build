#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
dmypy_server___Server_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *dmypy_server___Server_setup(PyTypeObject *type);
PyObject *CPyDef_dmypy_server___Server(PyObject *cpy_r_options, PyObject *cpy_r_status_file, PyObject *cpy_r_timeout);

static PyObject *
dmypy_server___Server_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dmypy_server___Server) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = dmypy_server___Server_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_dmypy_server___Server_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
dmypy_server___Server_traverse(mypy___dmypy_server___ServerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_options);
    Py_VISIT(self->_options_snapshot);
    Py_VISIT(self->_timeout);
    Py_VISIT(self->_fine_grained_manager);
    Py_VISIT(self->_fscache);
    Py_VISIT(self->_status_file);
    Py_VISIT(self->_formatter);
    Py_VISIT(self->_fswatcher);
    Py_VISIT(self->_previous_sources);
    return 0;
}

static int
dmypy_server___Server_clear(mypy___dmypy_server___ServerObject *self)
{
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_options_snapshot);
    Py_CLEAR(self->_timeout);
    Py_CLEAR(self->_fine_grained_manager);
    Py_CLEAR(self->_fscache);
    Py_CLEAR(self->_status_file);
    Py_CLEAR(self->_formatter);
    Py_CLEAR(self->_fswatcher);
    Py_CLEAR(self->_previous_sources);
    return 0;
}

static void
dmypy_server___Server_dealloc(mypy___dmypy_server___ServerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dmypy_server___Server_dealloc)
    dmypy_server___Server_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dmypy_server___Server_vtable[28];
static bool
CPyDef_dmypy_server___Server_trait_vtable_setup(void)
{
    CPyVTableItem dmypy_server___Server_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dmypy_server___Server_____init__,
        (CPyVTableItem)CPyDef_dmypy_server___Server____response_metadata,
        (CPyVTableItem)CPyDef_dmypy_server___Server___serve,
        (CPyVTableItem)CPyDef_dmypy_server___Server___run_command,
        (CPyVTableItem)CPyDef_dmypy_server___Server___cmd_status,
        (CPyVTableItem)CPyDef_dmypy_server___Server___cmd_stop,
        (CPyVTableItem)CPyDef_dmypy_server___Server___cmd_run,
        (CPyVTableItem)CPyDef_dmypy_server___Server___cmd_check,
        (CPyVTableItem)CPyDef_dmypy_server___Server___cmd_recheck,
        (CPyVTableItem)CPyDef_dmypy_server___Server___check,
        (CPyVTableItem)CPyDef_dmypy_server___Server___flush_caches,
        (CPyVTableItem)CPyDef_dmypy_server___Server___update_stats,
        (CPyVTableItem)CPyDef_dmypy_server___Server___following_imports,
        (CPyVTableItem)CPyDef_dmypy_server___Server___initialize_fine_grained,
        (CPyVTableItem)CPyDef_dmypy_server___Server___fine_grained_increment,
        (CPyVTableItem)CPyDef_dmypy_server___Server___fine_grained_increment_follow_imports,
        (CPyVTableItem)CPyDef_dmypy_server___Server___find_reachable_changed_modules,
        (CPyVTableItem)CPyDef_dmypy_server___Server___direct_imports,
        (CPyVTableItem)CPyDef_dmypy_server___Server___find_added_suppressed,
        (CPyVTableItem)CPyDef_dmypy_server___Server___increment_output,
        (CPyVTableItem)CPyDef_dmypy_server___Server___pretty_messages,
        (CPyVTableItem)CPyDef_dmypy_server___Server___update_sources,
        (CPyVTableItem)CPyDef_dmypy_server___Server___update_changed,
        (CPyVTableItem)CPyDef_dmypy_server___Server___find_changed,
        (CPyVTableItem)CPyDef_dmypy_server___Server____find_changed,
        (CPyVTableItem)CPyDef_dmypy_server___Server___cmd_inspect,
        (CPyVTableItem)CPyDef_dmypy_server___Server___cmd_suggest,
        (CPyVTableItem)CPyDef_dmypy_server___Server___cmd_hang,
    };
    memcpy(dmypy_server___Server_vtable, dmypy_server___Server_vtable_scratch, sizeof(dmypy_server___Server_vtable));
    return 1;
}

static PyObject *
dmypy_server___Server_get_options(mypy___dmypy_server___ServerObject *self, void *closure);
static int
dmypy_server___Server_set_options(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure);
static PyObject *
dmypy_server___Server_get_options_snapshot(mypy___dmypy_server___ServerObject *self, void *closure);
static int
dmypy_server___Server_set_options_snapshot(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure);
static PyObject *
dmypy_server___Server_get_timeout(mypy___dmypy_server___ServerObject *self, void *closure);
static int
dmypy_server___Server_set_timeout(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure);
static PyObject *
dmypy_server___Server_get_fine_grained_manager(mypy___dmypy_server___ServerObject *self, void *closure);
static int
dmypy_server___Server_set_fine_grained_manager(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure);
static PyObject *
dmypy_server___Server_get_fscache(mypy___dmypy_server___ServerObject *self, void *closure);
static int
dmypy_server___Server_set_fscache(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure);
static PyObject *
dmypy_server___Server_get_status_file(mypy___dmypy_server___ServerObject *self, void *closure);
static int
dmypy_server___Server_set_status_file(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure);
static PyObject *
dmypy_server___Server_get_formatter(mypy___dmypy_server___ServerObject *self, void *closure);
static int
dmypy_server___Server_set_formatter(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure);
static PyObject *
dmypy_server___Server_get_fswatcher(mypy___dmypy_server___ServerObject *self, void *closure);
static int
dmypy_server___Server_set_fswatcher(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure);
static PyObject *
dmypy_server___Server_get_previous_sources(mypy___dmypy_server___ServerObject *self, void *closure);
static int
dmypy_server___Server_set_previous_sources(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure);

static PyGetSetDef dmypy_server___Server_getseters[] = {
    {"options",
     (getter)dmypy_server___Server_get_options, (setter)dmypy_server___Server_set_options,
     NULL, NULL},
    {"options_snapshot",
     (getter)dmypy_server___Server_get_options_snapshot, (setter)dmypy_server___Server_set_options_snapshot,
     NULL, NULL},
    {"timeout",
     (getter)dmypy_server___Server_get_timeout, (setter)dmypy_server___Server_set_timeout,
     NULL, NULL},
    {"fine_grained_manager",
     (getter)dmypy_server___Server_get_fine_grained_manager, (setter)dmypy_server___Server_set_fine_grained_manager,
     NULL, NULL},
    {"fscache",
     (getter)dmypy_server___Server_get_fscache, (setter)dmypy_server___Server_set_fscache,
     NULL, NULL},
    {"status_file",
     (getter)dmypy_server___Server_get_status_file, (setter)dmypy_server___Server_set_status_file,
     NULL, NULL},
    {"formatter",
     (getter)dmypy_server___Server_get_formatter, (setter)dmypy_server___Server_set_formatter,
     NULL, NULL},
    {"fswatcher",
     (getter)dmypy_server___Server_get_fswatcher, (setter)dmypy_server___Server_set_fswatcher,
     NULL, NULL},
    {"previous_sources",
     (getter)dmypy_server___Server_get_previous_sources, (setter)dmypy_server___Server_set_previous_sources,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef dmypy_server___Server_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_dmypy_server___Server_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_response_metadata",
     (PyCFunction)CPyPy_dmypy_server___Server____response_metadata,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serve",
     (PyCFunction)CPyPy_dmypy_server___Server___serve,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"run_command",
     (PyCFunction)CPyPy_dmypy_server___Server___run_command,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"cmd_status",
     (PyCFunction)CPyPy_dmypy_server___Server___cmd_status,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"cmd_stop",
     (PyCFunction)CPyPy_dmypy_server___Server___cmd_stop,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"cmd_run",
     (PyCFunction)CPyPy_dmypy_server___Server___cmd_run,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"cmd_check",
     (PyCFunction)CPyPy_dmypy_server___Server___cmd_check,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"cmd_recheck",
     (PyCFunction)CPyPy_dmypy_server___Server___cmd_recheck,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check",
     (PyCFunction)CPyPy_dmypy_server___Server___check,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"flush_caches",
     (PyCFunction)CPyPy_dmypy_server___Server___flush_caches,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"update_stats",
     (PyCFunction)CPyPy_dmypy_server___Server___update_stats,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"following_imports",
     (PyCFunction)CPyPy_dmypy_server___Server___following_imports,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"initialize_fine_grained",
     (PyCFunction)CPyPy_dmypy_server___Server___initialize_fine_grained,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fine_grained_increment",
     (PyCFunction)CPyPy_dmypy_server___Server___fine_grained_increment,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fine_grained_increment_follow_imports",
     (PyCFunction)CPyPy_dmypy_server___Server___fine_grained_increment_follow_imports,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_reachable_changed_modules",
     (PyCFunction)CPyPy_dmypy_server___Server___find_reachable_changed_modules,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"direct_imports",
     (PyCFunction)CPyPy_dmypy_server___Server___direct_imports,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_added_suppressed",
     (PyCFunction)CPyPy_dmypy_server___Server___find_added_suppressed,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"increment_output",
     (PyCFunction)CPyPy_dmypy_server___Server___increment_output,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"pretty_messages",
     (PyCFunction)CPyPy_dmypy_server___Server___pretty_messages,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"update_sources",
     (PyCFunction)CPyPy_dmypy_server___Server___update_sources,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"update_changed",
     (PyCFunction)CPyPy_dmypy_server___Server___update_changed,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_changed",
     (PyCFunction)CPyPy_dmypy_server___Server___find_changed,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_find_changed",
     (PyCFunction)CPyPy_dmypy_server___Server____find_changed,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"cmd_inspect",
     (PyCFunction)CPyPy_dmypy_server___Server___cmd_inspect,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"cmd_suggest",
     (PyCFunction)CPyPy_dmypy_server___Server___cmd_suggest,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"cmd_hang",
     (PyCFunction)CPyPy_dmypy_server___Server___cmd_hang,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dmypy_server___Server_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Server",
    .tp_new = dmypy_server___Server_new,
    .tp_dealloc = (destructor)dmypy_server___Server_dealloc,
    .tp_traverse = (traverseproc)dmypy_server___Server_traverse,
    .tp_clear = (inquiry)dmypy_server___Server_clear,
    .tp_getset = dmypy_server___Server_getseters,
    .tp_methods = dmypy_server___Server_methods,
    .tp_init = dmypy_server___Server_init,
    .tp_basicsize = sizeof(mypy___dmypy_server___ServerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dmypy_server___Server_template = &CPyType_dmypy_server___Server_template_;

static PyObject *
dmypy_server___Server_setup(PyTypeObject *type)
{
    mypy___dmypy_server___ServerObject *self;
    self = (mypy___dmypy_server___ServerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dmypy_server___Server_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_dmypy_server___Server(PyObject *cpy_r_options, PyObject *cpy_r_status_file, PyObject *cpy_r_timeout)
{
    PyObject *self = dmypy_server___Server_setup(CPyType_dmypy_server___Server);
    if (self == NULL)
        return NULL;
    char res = CPyDef_dmypy_server___Server_____init__(self, cpy_r_options, cpy_r_status_file, cpy_r_timeout);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
dmypy_server___Server_get_options(mypy___dmypy_server___ServerObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'Server' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
dmypy_server___Server_set_options(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Server' object attribute 'options' cannot be deleted");
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
dmypy_server___Server_get_options_snapshot(mypy___dmypy_server___ServerObject *self, void *closure)
{
    if (unlikely(self->_options_snapshot == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options_snapshot' of 'Server' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options_snapshot);
    PyObject *retval = self->_options_snapshot;
    return retval;
}

static int
dmypy_server___Server_set_options_snapshot(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Server' object attribute 'options_snapshot' cannot be deleted");
        return -1;
    }
    if (self->_options_snapshot != NULL) {
        CPy_DECREF(self->_options_snapshot);
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
    self->_options_snapshot = tmp;
    return 0;
}

static PyObject *
dmypy_server___Server_get_timeout(mypy___dmypy_server___ServerObject *self, void *closure)
{
    if (unlikely(self->_timeout == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'timeout' of 'Server' undefined");
        return NULL;
    }
    CPy_INCREF(self->_timeout);
    PyObject *retval = self->_timeout;
    return retval;
}

static int
dmypy_server___Server_set_timeout(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Server' object attribute 'timeout' cannot be deleted");
        return -1;
    }
    if (self->_timeout != NULL) {
        CPy_DECREF(self->_timeout);
    }
    PyObject *tmp;
    if (PyLong_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1905;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1905;
    CPy_TypeError("int or None", value); 
    tmp = NULL;
__LL1905: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_timeout = tmp;
    return 0;
}

static PyObject *
dmypy_server___Server_get_fine_grained_manager(mypy___dmypy_server___ServerObject *self, void *closure)
{
    if (unlikely(self->_fine_grained_manager == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fine_grained_manager' of 'Server' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fine_grained_manager);
    PyObject *retval = self->_fine_grained_manager;
    return retval;
}

static int
dmypy_server___Server_set_fine_grained_manager(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Server' object attribute 'fine_grained_manager' cannot be deleted");
        return -1;
    }
    if (self->_fine_grained_manager != NULL) {
        CPy_DECREF(self->_fine_grained_manager);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_update___FineGrainedBuildManager)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1906;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1906;
    CPy_TypeError("mypy.server.update.FineGrainedBuildManager or None", value); 
    tmp = NULL;
__LL1906: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_fine_grained_manager = tmp;
    return 0;
}

static PyObject *
dmypy_server___Server_get_fscache(mypy___dmypy_server___ServerObject *self, void *closure)
{
    if (unlikely(self->_fscache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fscache' of 'Server' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fscache);
    PyObject *retval = self->_fscache;
    return retval;
}

static int
dmypy_server___Server_set_fscache(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Server' object attribute 'fscache' cannot be deleted");
        return -1;
    }
    if (self->_fscache != NULL) {
        CPy_DECREF(self->_fscache);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_fscache___FileSystemCache)))
        tmp = value;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_fscache = tmp;
    return 0;
}

static PyObject *
dmypy_server___Server_get_status_file(mypy___dmypy_server___ServerObject *self, void *closure)
{
    if (unlikely(self->_status_file == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'status_file' of 'Server' undefined");
        return NULL;
    }
    CPy_INCREF(self->_status_file);
    PyObject *retval = self->_status_file;
    return retval;
}

static int
dmypy_server___Server_set_status_file(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Server' object attribute 'status_file' cannot be deleted");
        return -1;
    }
    if (self->_status_file != NULL) {
        CPy_DECREF(self->_status_file);
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
    self->_status_file = tmp;
    return 0;
}

static PyObject *
dmypy_server___Server_get_formatter(mypy___dmypy_server___ServerObject *self, void *closure)
{
    if (unlikely(self->_formatter == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'formatter' of 'Server' undefined");
        return NULL;
    }
    CPy_INCREF(self->_formatter);
    PyObject *retval = self->_formatter;
    return retval;
}

static int
dmypy_server___Server_set_formatter(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Server' object attribute 'formatter' cannot be deleted");
        return -1;
    }
    if (self->_formatter != NULL) {
        CPy_DECREF(self->_formatter);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypy___util___FancyFormatter))
        tmp = value;
    else {
        CPy_TypeError("mypy.util.FancyFormatter", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_formatter = tmp;
    return 0;
}

static PyObject *
dmypy_server___Server_get_fswatcher(mypy___dmypy_server___ServerObject *self, void *closure)
{
    if (unlikely(self->_fswatcher == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fswatcher' of 'Server' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fswatcher);
    PyObject *retval = self->_fswatcher;
    return retval;
}

static int
dmypy_server___Server_set_fswatcher(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Server' object attribute 'fswatcher' cannot be deleted");
        return -1;
    }
    if (self->_fswatcher != NULL) {
        CPy_DECREF(self->_fswatcher);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_fswatcher___FileSystemWatcher))
        tmp = value;
    else {
        CPy_TypeError("mypy.fswatcher.FileSystemWatcher", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_fswatcher = tmp;
    return 0;
}

static PyObject *
dmypy_server___Server_get_previous_sources(mypy___dmypy_server___ServerObject *self, void *closure)
{
    if (unlikely(self->_previous_sources == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'previous_sources' of 'Server' undefined");
        return NULL;
    }
    CPy_INCREF(self->_previous_sources);
    PyObject *retval = self->_previous_sources;
    return retval;
}

static int
dmypy_server___Server_set_previous_sources(mypy___dmypy_server___ServerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Server' object attribute 'previous_sources' cannot be deleted");
        return -1;
    }
    if (self->_previous_sources != NULL) {
        CPy_DECREF(self->_previous_sources);
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
    self->_previous_sources = tmp;
    return 0;
}

static PyObject *dmypy_server___fine_grained_increment_follow_imports_Server_env_setup(PyTypeObject *type);
PyObject *CPyDef_dmypy_server___fine_grained_increment_follow_imports_Server_env(void);

static PyObject *
dmypy_server___fine_grained_increment_follow_imports_Server_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dmypy_server___fine_grained_increment_follow_imports_Server_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dmypy_server___fine_grained_increment_follow_imports_Server_env_setup(type);
}

static int
dmypy_server___fine_grained_increment_follow_imports_Server_env_traverse(mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fine_grained_manager);
    Py_VISIT(self->_refresh_file);
    Py_VISIT(self->_self);
    Py_VISIT(self->_sources);
    Py_VISIT(self->_graph);
    Py_VISIT(self->_manager);
    Py_VISIT(self->_orig_modules);
    Py_VISIT(self->_changed_paths);
    Py_VISIT(self->_source);
    Py_VISIT(self->_seen);
    Py_VISIT(self->_changed);
    Py_VISIT(self->_new_files);
    Py_VISIT(self->_messages);
    Py_VISIT(self->_worklist);
    Py_VISIT(self->_module.f0);
    Py_VISIT(self->_module.f1);
    Py_VISIT(self->_sources2);
    return 0;
}

static int
dmypy_server___fine_grained_increment_follow_imports_Server_env_clear(mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fine_grained_manager);
    Py_CLEAR(self->_refresh_file);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_sources);
    Py_CLEAR(self->_graph);
    Py_CLEAR(self->_manager);
    Py_CLEAR(self->_orig_modules);
    Py_CLEAR(self->_changed_paths);
    Py_CLEAR(self->_source);
    Py_CLEAR(self->_seen);
    Py_CLEAR(self->_changed);
    Py_CLEAR(self->_new_files);
    Py_CLEAR(self->_messages);
    Py_CLEAR(self->_worklist);
    Py_CLEAR(self->_module.f0);
    Py_CLEAR(self->_module.f1);
    Py_CLEAR(self->_sources2);
    return 0;
}

static void
dmypy_server___fine_grained_increment_follow_imports_Server_env_dealloc(mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dmypy_server___fine_grained_increment_follow_imports_Server_env_dealloc)
    dmypy_server___fine_grained_increment_follow_imports_Server_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dmypy_server___fine_grained_increment_follow_imports_Server_env_vtable[1];
static bool
CPyDef_dmypy_server___fine_grained_increment_follow_imports_Server_env_trait_vtable_setup(void)
{
    CPyVTableItem dmypy_server___fine_grained_increment_follow_imports_Server_env_vtable_scratch[] = {
        NULL
    };
    memcpy(dmypy_server___fine_grained_increment_follow_imports_Server_env_vtable, dmypy_server___fine_grained_increment_follow_imports_Server_env_vtable_scratch, sizeof(dmypy_server___fine_grained_increment_follow_imports_Server_env_vtable));
    return 1;
}

static PyMethodDef dmypy_server___fine_grained_increment_follow_imports_Server_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dmypy_server___fine_grained_increment_follow_imports_Server_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "fine_grained_increment_follow_imports_Server_env",
    .tp_new = dmypy_server___fine_grained_increment_follow_imports_Server_env_new,
    .tp_dealloc = (destructor)dmypy_server___fine_grained_increment_follow_imports_Server_env_dealloc,
    .tp_traverse = (traverseproc)dmypy_server___fine_grained_increment_follow_imports_Server_env_traverse,
    .tp_clear = (inquiry)dmypy_server___fine_grained_increment_follow_imports_Server_env_clear,
    .tp_methods = dmypy_server___fine_grained_increment_follow_imports_Server_env_methods,
    .tp_basicsize = sizeof(mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dmypy_server___fine_grained_increment_follow_imports_Server_env_template = &CPyType_dmypy_server___fine_grained_increment_follow_imports_Server_env_template_;

static PyObject *
dmypy_server___fine_grained_increment_follow_imports_Server_env_setup(PyTypeObject *type)
{
    mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *self;
    self = (mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dmypy_server___fine_grained_increment_follow_imports_Server_env_vtable;
    self->bitmap = 0;
    self->_t0 = -113.0;
    self->_t1 = -113.0;
    self->_module = (tuple_T2OO) { NULL, NULL };
    self->_t2 = -113.0;
    return (PyObject *)self;
}

PyObject *CPyDef_dmypy_server___fine_grained_increment_follow_imports_Server_env(void)
{
    PyObject *self = dmypy_server___fine_grained_increment_follow_imports_Server_env_setup(CPyType_dmypy_server___fine_grained_increment_follow_imports_Server_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_____get__(self, instance, owner);
}
PyMemberDef dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_setup(PyTypeObject *type);
PyObject *CPyDef_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj(void);

static PyObject *
dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_setup(type);
}

static int
dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_traverse(mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject))));
    return 0;
}

static int
dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_clear(mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject))));
    return 0;
}

static void
dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_dealloc(mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_dealloc)
    dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_vtable[2];
static bool
CPyDef_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_trait_vtable_setup(void)
{
    CPyVTableItem dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_____call__,
        (CPyVTableItem)CPyDef_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_____get__,
    };
    memcpy(dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_vtable, dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_vtable_scratch, sizeof(dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_vtable));
    return 1;
}

static PyMethodDef dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "refresh_file_fine_grained_increment_follow_imports_Server_obj",
    .tp_new = dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_new,
    .tp_dealloc = (destructor)dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_dealloc,
    .tp_traverse = (traverseproc)dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_traverse,
    .tp_clear = (inquiry)dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_clear,
    .tp_methods = dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj,
    .tp_members = dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_members,
    .tp_basicsize = sizeof(mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject),
    .tp_weaklistoffset = sizeof(mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_template = &CPyType_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_template_;

static PyObject *
dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_setup(PyTypeObject *type)
{
    mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject *self;
    self = (mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_vtable;
    self->vectorcall = CPyPy_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj(void)
{
    PyObject *self = dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_setup(CPyType_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef dmypy_servermodule_methods[] = {
    {"_daemonize_cb", (PyCFunction)CPyPy_dmypy_server____daemonize_cb, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"daemonize", (PyCFunction)CPyPy_dmypy_server___daemonize, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"process_start_options", (PyCFunction)CPyPy_dmypy_server___process_start_options, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"ignore_suppressed_imports", (PyCFunction)CPyPy_dmypy_server___ignore_suppressed_imports, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_meminfo", (PyCFunction)CPyPy_dmypy_server___get_meminfo, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_all_sources_in_build", (PyCFunction)CPyPy_dmypy_server___find_all_sources_in_build, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"fix_module_deps", (PyCFunction)CPyPy_dmypy_server___fix_module_deps, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"filter_out_missing_top_level_packages", (PyCFunction)CPyPy_dmypy_server___filter_out_missing_top_level_packages, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef dmypy_servermodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.dmypy_server",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    dmypy_servermodule_methods
};

PyObject *CPyInit_mypy___dmypy_server(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___dmypy_server_internal) {
        Py_INCREF(CPyModule_mypy___dmypy_server_internal);
        return CPyModule_mypy___dmypy_server_internal;
    }
    CPyModule_mypy___dmypy_server_internal = PyModule_Create(&dmypy_servermodule);
    if (unlikely(CPyModule_mypy___dmypy_server_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___dmypy_server_internal, "__name__");
    CPyStatic_dmypy_server___globals = PyModule_GetDict(CPyModule_mypy___dmypy_server_internal);
    if (unlikely(CPyStatic_dmypy_server___globals == NULL))
        goto fail;
    CPyType_dmypy_server___fine_grained_increment_follow_imports_Server_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_dmypy_server___fine_grained_increment_follow_imports_Server_env_template, NULL, modname);
    if (unlikely(!CPyType_dmypy_server___fine_grained_increment_follow_imports_Server_env))
        goto fail;
    CPyType_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_template, NULL, modname);
    if (unlikely(!CPyType_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_dmypy_server_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___dmypy_server_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___dmypy_server_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_dmypy_server___Server);
    Py_CLEAR(CPyType_dmypy_server___fine_grained_increment_follow_imports_Server_env);
    Py_CLEAR(CPyType_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj);
    return NULL;
}

CPyTagged CPyDef_dmypy_server____daemonize_cb(PyObject *cpy_r_func, PyObject *cpy_r_log_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
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
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_pid;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    tuple_T2II cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_npid;
    CPyTagged cpy_r_r31;
    CPyTagged cpy_r_sts;
    CPyTagged cpy_r_r32;
    CPyTagged cpy_r_sig;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    CPyTagged cpy_r_devnull;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject **cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject **cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject **cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject **cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    CPyTagged cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject **cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject **cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    int32_t cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject **cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyTagged cpy_r_r150;
    CPyTagged cpy_r_fd;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject **cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject **cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    tuple_T3OOO cpy_r_r168;
    tuple_T3OOO cpy_r_r169;
    tuple_T3OOO cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject **cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    CPyTagged cpy_r_r179;
    if (cpy_r_log_file != NULL) goto CPyL76;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_log_file = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyModule_sys;
    cpy_r_r2 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 83, CPyStatic_dmypy_server___globals);
        goto CPyL77;
    }
    cpy_r_r4 = CPyStatics[237]; /* 'flush' */
    PyObject *cpy_r_r5[1] = {cpy_r_r3};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 83, CPyStatic_dmypy_server___globals);
        goto CPyL78;
    } else
        goto CPyL79;
CPyL4: ;
    CPy_DECREF(cpy_r_r3);
    cpy_r_r8 = CPyModule_sys;
    cpy_r_r9 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 84, CPyStatic_dmypy_server___globals);
        goto CPyL77;
    }
    cpy_r_r11 = CPyStatics[237]; /* 'flush' */
    PyObject *cpy_r_r12[1] = {cpy_r_r10};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 84, CPyStatic_dmypy_server___globals);
        goto CPyL80;
    } else
        goto CPyL81;
CPyL6: ;
    CPy_DECREF(cpy_r_r10);
    cpy_r_r15 = CPyModule_os;
    cpy_r_r16 = CPyStatics[1919]; /* 'fork' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 85, CPyStatic_dmypy_server___globals);
        goto CPyL77;
    }
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r17, 0, 0, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 85, CPyStatic_dmypy_server___globals);
        goto CPyL77;
    }
    if (likely(PyLong_Check(cpy_r_r18)))
        cpy_r_r19 = CPyTagged_FromObject(cpy_r_r18);
    else {
        CPy_TypeError("int", cpy_r_r18); cpy_r_r19 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 85, CPyStatic_dmypy_server___globals);
        goto CPyL77;
    }
    cpy_r_pid = cpy_r_r19;
    cpy_r_r20 = cpy_r_pid != 0;
    if (cpy_r_r20) {
        goto CPyL82;
    } else
        goto CPyL83;
CPyL10: ;
    cpy_r_r21 = CPyModule_os;
    cpy_r_r22 = CPyStatics[1920]; /* 'waitpid' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 88, CPyStatic_dmypy_server___globals);
        goto CPyL84;
    }
    cpy_r_r24 = CPyTagged_StealAsObject(cpy_r_pid);
    cpy_r_r25 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r26[2] = {cpy_r_r24, cpy_r_r25};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r27, 2, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 88, CPyStatic_dmypy_server___globals);
        goto CPyL85;
    }
    CPy_DECREF(cpy_r_r24);
    PyObject *__tmp1907;
    if (unlikely(!(PyTuple_Check(cpy_r_r28) && PyTuple_GET_SIZE(cpy_r_r28) == 2))) {
        __tmp1907 = NULL;
        goto __LL1908;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r28, 0))))
        __tmp1907 = PyTuple_GET_ITEM(cpy_r_r28, 0);
    else {
        __tmp1907 = NULL;
    }
    if (__tmp1907 == NULL) goto __LL1908;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r28, 1))))
        __tmp1907 = PyTuple_GET_ITEM(cpy_r_r28, 1);
    else {
        __tmp1907 = NULL;
    }
    if (__tmp1907 == NULL) goto __LL1908;
    __tmp1907 = cpy_r_r28;
__LL1908: ;
    if (unlikely(__tmp1907 == NULL)) {
        CPy_TypeError("tuple[int, int]", cpy_r_r28); cpy_r_r29 = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    } else {
        PyObject *__tmp1909 = PyTuple_GET_ITEM(cpy_r_r28, 0);
        CPyTagged __tmp1910;
        if (likely(PyLong_Check(__tmp1909)))
            __tmp1910 = CPyTagged_FromObject(__tmp1909);
        else {
            CPy_TypeError("int", __tmp1909); __tmp1910 = CPY_INT_TAG;
        }
        cpy_r_r29.f0 = __tmp1910;
        PyObject *__tmp1911 = PyTuple_GET_ITEM(cpy_r_r28, 1);
        CPyTagged __tmp1912;
        if (likely(PyLong_Check(__tmp1911)))
            __tmp1912 = CPyTagged_FromObject(__tmp1911);
        else {
            CPy_TypeError("int", __tmp1911); __tmp1912 = CPY_INT_TAG;
        }
        cpy_r_r29.f1 = __tmp1912;
    }
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 88, CPyStatic_dmypy_server___globals);
        goto CPyL75;
    }
    cpy_r_r30 = cpy_r_r29.f0;
    CPyTagged_INCREF(cpy_r_r30);
    cpy_r_npid = cpy_r_r30;
    CPyTagged_DECREF(cpy_r_npid);
    cpy_r_r31 = cpy_r_r29.f1;
    CPyTagged_INCREF(cpy_r_r31);
    CPyTagged_DECREF(cpy_r_r29.f0);
    CPyTagged_DECREF(cpy_r_r29.f1);
    cpy_r_sts = cpy_r_r31;
    cpy_r_r32 = CPyTagged_And(cpy_r_sts, 510);
    cpy_r_sig = cpy_r_r32;
    cpy_r_r33 = cpy_r_sig != 0;
    if (cpy_r_r33) {
        goto CPyL86;
    } else
        goto CPyL87;
CPyL14: ;
    cpy_r_r34 = CPyStatics[1921]; /* 'Child killed by signal' */
    cpy_r_r35 = CPyModule_builtins;
    cpy_r_r36 = CPyStatics[190]; /* 'print' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 91, CPyStatic_dmypy_server___globals);
        goto CPyL88;
    }
    CPyTagged_INCREF(cpy_r_sig);
    cpy_r_r38 = CPyTagged_StealAsObject(cpy_r_sig);
    PyObject *cpy_r_r39[2] = {cpy_r_r34, cpy_r_r38};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r40, 2, 0);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 91, CPyStatic_dmypy_server___globals);
        goto CPyL89;
    } else
        goto CPyL90;
CPyL16: ;
    CPy_DECREF(cpy_r_r38);
    cpy_r_r42 = CPyTagged_Negate(cpy_r_sig);
    CPyTagged_DECREF(cpy_r_sig);
    return cpy_r_r42;
CPyL17: ;
    cpy_r_r43 = CPyTagged_Rshift(cpy_r_sts, 16);
    CPyTagged_DECREF(cpy_r_sts);
    if (unlikely(cpy_r_r43 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 93, CPyStatic_dmypy_server___globals);
        goto CPyL75;
    }
    cpy_r_sts = cpy_r_r43;
    cpy_r_r44 = cpy_r_sts != 0;
    if (!cpy_r_r44) goto CPyL22;
    cpy_r_r45 = CPyStatics[1922]; /* 'Child exit status' */
    cpy_r_r46 = CPyModule_builtins;
    cpy_r_r47 = CPyStatics[190]; /* 'print' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 95, CPyStatic_dmypy_server___globals);
        goto CPyL91;
    }
    CPyTagged_INCREF(cpy_r_sts);
    cpy_r_r49 = CPyTagged_StealAsObject(cpy_r_sts);
    PyObject *cpy_r_r50[2] = {cpy_r_r45, cpy_r_r49};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = _PyObject_Vectorcall(cpy_r_r48, cpy_r_r51, 2, 0);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 95, CPyStatic_dmypy_server___globals);
        goto CPyL92;
    } else
        goto CPyL93;
CPyL21: ;
    CPy_DECREF(cpy_r_r49);
CPyL22: ;
    return cpy_r_sts;
CPyL23: ;
    cpy_r_r53 = CPyModule_os;
    cpy_r_r54 = CPyStatics[1923]; /* 'setsid' */
    cpy_r_r55 = CPyObject_GetAttr(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 99, CPyStatic_dmypy_server___globals);
        goto CPyL94;
    }
    cpy_r_r56 = _PyObject_Vectorcall(cpy_r_r55, 0, 0, 0);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 99, CPyStatic_dmypy_server___globals);
        goto CPyL94;
    } else
        goto CPyL95;
CPyL25: ;
    cpy_r_r57 = CPyModule_os;
    cpy_r_r58 = CPyStatics[1924]; /* 'umask' */
    cpy_r_r59 = CPyObject_GetAttr(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 100, CPyStatic_dmypy_server___globals);
        goto CPyL94;
    }
    cpy_r_r60 = CPyStatics[9028]; /* 23 */
    PyObject *cpy_r_r61[1] = {cpy_r_r60};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = _PyObject_Vectorcall(cpy_r_r59, cpy_r_r62, 1, 0);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 100, CPyStatic_dmypy_server___globals);
        goto CPyL94;
    } else
        goto CPyL96;
CPyL27: ;
    cpy_r_r64 = CPyStatics[1925]; /* '/dev/null' */
    cpy_r_r65 = CPyModule_os;
    cpy_r_r66 = CPyStatics[1926]; /* 'O_RDWR' */
    cpy_r_r67 = CPyObject_GetAttr(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 101, CPyStatic_dmypy_server___globals);
        goto CPyL94;
    }
    if (likely(PyLong_Check(cpy_r_r67)))
        cpy_r_r68 = CPyTagged_FromObject(cpy_r_r67);
    else {
        CPy_TypeError("int", cpy_r_r67); cpy_r_r68 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 101, CPyStatic_dmypy_server___globals);
        goto CPyL94;
    }
    cpy_r_r69 = CPyModule_os;
    cpy_r_r70 = CPyStatics[199]; /* 'open' */
    cpy_r_r71 = CPyObject_GetAttr(cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 101, CPyStatic_dmypy_server___globals);
        goto CPyL97;
    }
    cpy_r_r72 = CPyTagged_StealAsObject(cpy_r_r68);
    PyObject *cpy_r_r73[2] = {cpy_r_r64, cpy_r_r72};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = _PyObject_Vectorcall(cpy_r_r71, cpy_r_r74, 2, 0);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 101, CPyStatic_dmypy_server___globals);
        goto CPyL98;
    }
    CPy_DECREF(cpy_r_r72);
    if (likely(PyLong_Check(cpy_r_r75)))
        cpy_r_r76 = CPyTagged_FromObject(cpy_r_r75);
    else {
        CPy_TypeError("int", cpy_r_r75); cpy_r_r76 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 101, CPyStatic_dmypy_server___globals);
        goto CPyL94;
    }
    cpy_r_devnull = cpy_r_r76;
    cpy_r_r77 = CPyModule_os;
    cpy_r_r78 = CPyStatics[1744]; /* 'dup2' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 102, CPyStatic_dmypy_server___globals);
        goto CPyL99;
    }
    CPyTagged_INCREF(cpy_r_devnull);
    cpy_r_r80 = CPyTagged_StealAsObject(cpy_r_devnull);
    cpy_r_r81 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r82[2] = {cpy_r_r80, cpy_r_r81};
    cpy_r_r83 = (PyObject **)&cpy_r_r82;
    cpy_r_r84 = _PyObject_Vectorcall(cpy_r_r79, cpy_r_r83, 2, 0);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 102, CPyStatic_dmypy_server___globals);
        goto CPyL100;
    } else
        goto CPyL101;
CPyL34: ;
    CPy_DECREF(cpy_r_r80);
    cpy_r_r85 = CPyModule_os;
    cpy_r_r86 = CPyStatics[1744]; /* 'dup2' */
    cpy_r_r87 = CPyObject_GetAttr(cpy_r_r85, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 103, CPyStatic_dmypy_server___globals);
        goto CPyL99;
    }
    CPyTagged_INCREF(cpy_r_devnull);
    cpy_r_r88 = CPyTagged_StealAsObject(cpy_r_devnull);
    cpy_r_r89 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r90[2] = {cpy_r_r88, cpy_r_r89};
    cpy_r_r91 = (PyObject **)&cpy_r_r90;
    cpy_r_r92 = _PyObject_Vectorcall(cpy_r_r87, cpy_r_r91, 2, 0);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 103, CPyStatic_dmypy_server___globals);
        goto CPyL102;
    } else
        goto CPyL103;
CPyL36: ;
    CPy_DECREF(cpy_r_r88);
    cpy_r_r93 = CPyModule_os;
    cpy_r_r94 = CPyStatics[1744]; /* 'dup2' */
    cpy_r_r95 = CPyObject_GetAttr(cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 104, CPyStatic_dmypy_server___globals);
        goto CPyL99;
    }
    CPyTagged_INCREF(cpy_r_devnull);
    cpy_r_r96 = CPyTagged_StealAsObject(cpy_r_devnull);
    cpy_r_r97 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r98[2] = {cpy_r_r96, cpy_r_r97};
    cpy_r_r99 = (PyObject **)&cpy_r_r98;
    cpy_r_r100 = _PyObject_Vectorcall(cpy_r_r95, cpy_r_r99, 2, 0);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 104, CPyStatic_dmypy_server___globals);
        goto CPyL104;
    } else
        goto CPyL105;
CPyL38: ;
    CPy_DECREF(cpy_r_r96);
    cpy_r_r101 = CPyModule_os;
    cpy_r_r102 = CPyStatics[1927]; /* 'close' */
    cpy_r_r103 = CPyObject_GetAttr(cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 105, CPyStatic_dmypy_server___globals);
        goto CPyL99;
    }
    cpy_r_r104 = CPyTagged_StealAsObject(cpy_r_devnull);
    PyObject *cpy_r_r105[1] = {cpy_r_r104};
    cpy_r_r106 = (PyObject **)&cpy_r_r105;
    cpy_r_r107 = _PyObject_Vectorcall(cpy_r_r103, cpy_r_r106, 1, 0);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 105, CPyStatic_dmypy_server___globals);
        goto CPyL106;
    } else
        goto CPyL107;
CPyL40: ;
    CPy_DECREF(cpy_r_r104);
    cpy_r_r108 = CPyModule_os;
    cpy_r_r109 = CPyStatics[1919]; /* 'fork' */
    cpy_r_r110 = CPyObject_GetAttr(cpy_r_r108, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 106, CPyStatic_dmypy_server___globals);
        goto CPyL94;
    }
    cpy_r_r111 = _PyObject_Vectorcall(cpy_r_r110, 0, 0, 0);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 106, CPyStatic_dmypy_server___globals);
        goto CPyL94;
    }
    if (likely(PyLong_Check(cpy_r_r111)))
        cpy_r_r112 = CPyTagged_FromObject(cpy_r_r111);
    else {
        CPy_TypeError("int", cpy_r_r111); cpy_r_r112 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 106, CPyStatic_dmypy_server___globals);
        goto CPyL94;
    }
    cpy_r_pid = cpy_r_r112;
    cpy_r_r113 = cpy_r_pid != 0;
    CPyTagged_DECREF(cpy_r_pid);
    if (!cpy_r_r113) goto CPyL46;
    cpy_r_r114 = CPyModule_os;
    cpy_r_r115 = CPyStatics[1928]; /* '_exit' */
    cpy_r_r116 = CPyObject_GetAttr(cpy_r_r114, cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 109, CPyStatic_dmypy_server___globals);
        goto CPyL94;
    }
    cpy_r_r117 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r118[1] = {cpy_r_r117};
    cpy_r_r119 = (PyObject **)&cpy_r_r118;
    cpy_r_r120 = _PyObject_Vectorcall(cpy_r_r116, cpy_r_r119, 1, 0);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 109, CPyStatic_dmypy_server___globals);
        goto CPyL94;
    } else
        goto CPyL108;
CPyL46: ;
    cpy_r_r121 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r122 = cpy_r_log_file != cpy_r_r121;
    if (!cpy_r_r122) goto CPyL109;
    CPy_INCREF(cpy_r_log_file);
    if (likely(cpy_r_log_file != Py_None))
        cpy_r_r123 = cpy_r_log_file;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_daemonize_cb", 76, CPyStatic_dmypy_server___globals, "str", cpy_r_log_file);
        goto CPyL94;
    }
    cpy_r_r124 = CPyStr_IsTrue(cpy_r_r123);
    CPy_DECREF(cpy_r_r123);
    if (!cpy_r_r124) goto CPyL109;
    if (likely(cpy_r_log_file != Py_None))
        cpy_r_r125 = cpy_r_log_file;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_daemonize_cb", 112, CPyStatic_dmypy_server___globals, "str", cpy_r_log_file);
        goto CPyL64;
    }
    cpy_r_r126 = CPyStatics[1446]; /* 'a' */
    cpy_r_r127 = CPyModule_builtins;
    cpy_r_r128 = CPyStatics[199]; /* 'open' */
    cpy_r_r129 = CPyObject_GetAttr(cpy_r_r127, cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 112, CPyStatic_dmypy_server___globals);
        goto CPyL110;
    }
    cpy_r_r130 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r131[3] = {cpy_r_r125, cpy_r_r126, cpy_r_r130};
    cpy_r_r132 = (PyObject **)&cpy_r_r131;
    cpy_r_r133 = CPyStatics[9307]; /* ('buffering',) */
    cpy_r_r134 = _PyObject_Vectorcall(cpy_r_r129, cpy_r_r132, 2, cpy_r_r133);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 112, CPyStatic_dmypy_server___globals);
        goto CPyL110;
    }
    CPy_DECREF(cpy_r_r125);
    cpy_r_r135 = CPyModule_sys;
    cpy_r_r136 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r137 = PyObject_SetAttr(cpy_r_r135, cpy_r_r136, cpy_r_r134);
    cpy_r_r138 = cpy_r_r137 >= 0;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 112, CPyStatic_dmypy_server___globals);
        goto CPyL111;
    }
    cpy_r_r139 = CPyModule_sys;
    cpy_r_r140 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r141 = PyObject_SetAttr(cpy_r_r139, cpy_r_r140, cpy_r_r134);
    CPy_DECREF(cpy_r_r134);
    cpy_r_r142 = cpy_r_r141 >= 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 112, CPyStatic_dmypy_server___globals);
        goto CPyL64;
    }
    cpy_r_r143 = CPyModule_sys;
    cpy_r_r144 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r145 = CPyObject_GetAttr(cpy_r_r143, cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 113, CPyStatic_dmypy_server___globals);
        goto CPyL64;
    }
    cpy_r_r146 = CPyStatics[1743]; /* 'fileno' */
    PyObject *cpy_r_r147[1] = {cpy_r_r145};
    cpy_r_r148 = (PyObject **)&cpy_r_r147;
    cpy_r_r149 = PyObject_VectorcallMethod(cpy_r_r146, cpy_r_r148, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 113, CPyStatic_dmypy_server___globals);
        goto CPyL112;
    }
    CPy_DECREF(cpy_r_r145);
    if (likely(PyLong_Check(cpy_r_r149)))
        cpy_r_r150 = CPyTagged_FromObject(cpy_r_r149);
    else {
        CPy_TypeError("int", cpy_r_r149); cpy_r_r150 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r150 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 113, CPyStatic_dmypy_server___globals);
        goto CPyL64;
    }
    cpy_r_fd = cpy_r_r150;
    cpy_r_r151 = CPyModule_os;
    cpy_r_r152 = CPyStatics[1744]; /* 'dup2' */
    cpy_r_r153 = CPyObject_GetAttr(cpy_r_r151, cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 114, CPyStatic_dmypy_server___globals);
        goto CPyL113;
    }
    CPyTagged_INCREF(cpy_r_fd);
    cpy_r_r154 = CPyTagged_StealAsObject(cpy_r_fd);
    cpy_r_r155 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r156[2] = {cpy_r_r154, cpy_r_r155};
    cpy_r_r157 = (PyObject **)&cpy_r_r156;
    cpy_r_r158 = _PyObject_Vectorcall(cpy_r_r153, cpy_r_r157, 2, 0);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 114, CPyStatic_dmypy_server___globals);
        goto CPyL114;
    } else
        goto CPyL115;
CPyL59: ;
    CPy_DECREF(cpy_r_r154);
    cpy_r_r159 = CPyModule_os;
    cpy_r_r160 = CPyStatics[1744]; /* 'dup2' */
    cpy_r_r161 = CPyObject_GetAttr(cpy_r_r159, cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 115, CPyStatic_dmypy_server___globals);
        goto CPyL113;
    }
    cpy_r_r162 = CPyTagged_StealAsObject(cpy_r_fd);
    cpy_r_r163 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r164[2] = {cpy_r_r162, cpy_r_r163};
    cpy_r_r165 = (PyObject **)&cpy_r_r164;
    cpy_r_r166 = _PyObject_Vectorcall(cpy_r_r161, cpy_r_r165, 2, 0);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 115, CPyStatic_dmypy_server___globals);
        goto CPyL116;
    } else
        goto CPyL117;
CPyL61: ;
    CPy_DECREF(cpy_r_r162);
CPyL62: ;
    cpy_r_r167 = _PyObject_Vectorcall(cpy_r_func, 0, 0, 0);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 116, CPyStatic_dmypy_server___globals);
        goto CPyL64;
    } else
        goto CPyL118;
CPyL63: ;
    tuple_T3OOO __tmp1913 = { NULL, NULL, NULL };
    cpy_r_r168 = __tmp1913;
    cpy_r_r169 = cpy_r_r168;
    goto CPyL65;
CPyL64: ;
    cpy_r_r170 = CPy_CatchError();
    cpy_r_r169 = cpy_r_r170;
CPyL65: ;
    cpy_r_r171 = CPyModule_os;
    cpy_r_r172 = CPyStatics[1928]; /* '_exit' */
    cpy_r_r173 = CPyObject_GetAttr(cpy_r_r171, cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 119, CPyStatic_dmypy_server___globals);
        goto CPyL70;
    }
    cpy_r_r174 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r175[1] = {cpy_r_r174};
    cpy_r_r176 = (PyObject **)&cpy_r_r175;
    cpy_r_r177 = _PyObject_Vectorcall(cpy_r_r173, cpy_r_r176, 1, 0);
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 119, CPyStatic_dmypy_server___globals);
        goto CPyL70;
    } else
        goto CPyL119;
CPyL67: ;
    if (cpy_r_r169.f0 == NULL) goto CPyL74;
    CPy_Reraise();
    if (!0) {
        goto CPyL70;
    } else
        goto CPyL120;
CPyL69: ;
    CPy_Unreachable();
CPyL70: ;
    if (cpy_r_r169.f0 == NULL) goto CPyL72;
    CPy_RestoreExcInfo(cpy_r_r169);
    CPy_XDECREF(cpy_r_r169.f0);
    CPy_XDECREF(cpy_r_r169.f1);
    CPy_XDECREF(cpy_r_r169.f2);
CPyL72: ;
    cpy_r_r178 = CPy_KeepPropagating();
    if (!cpy_r_r178) goto CPyL75;
    CPy_Unreachable();
CPyL74: ;
    CPy_Unreachable();
CPyL75: ;
    cpy_r_r179 = CPY_INT_TAG;
    return cpy_r_r179;
CPyL76: ;
    CPy_INCREF(cpy_r_log_file);
    goto CPyL2;
CPyL77: ;
    CPy_DecRef(cpy_r_log_file);
    goto CPyL75;
CPyL78: ;
    CPy_DecRef(cpy_r_log_file);
    CPy_DecRef(cpy_r_r3);
    goto CPyL75;
CPyL79: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL4;
CPyL80: ;
    CPy_DecRef(cpy_r_log_file);
    CPy_DecRef(cpy_r_r10);
    goto CPyL75;
CPyL81: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL6;
CPyL82: ;
    CPy_DECREF(cpy_r_log_file);
    goto CPyL10;
CPyL83: ;
    CPyTagged_DECREF(cpy_r_pid);
    goto CPyL23;
CPyL84: ;
    CPyTagged_DecRef(cpy_r_pid);
    goto CPyL75;
CPyL85: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL75;
CPyL86: ;
    CPyTagged_DECREF(cpy_r_sts);
    goto CPyL14;
CPyL87: ;
    CPyTagged_DECREF(cpy_r_sig);
    goto CPyL17;
CPyL88: ;
    CPyTagged_DecRef(cpy_r_sig);
    goto CPyL75;
CPyL89: ;
    CPyTagged_DecRef(cpy_r_sig);
    CPy_DecRef(cpy_r_r38);
    goto CPyL75;
CPyL90: ;
    CPy_DECREF(cpy_r_r41);
    goto CPyL16;
CPyL91: ;
    CPyTagged_DecRef(cpy_r_sts);
    goto CPyL75;
CPyL92: ;
    CPyTagged_DecRef(cpy_r_sts);
    CPy_DecRef(cpy_r_r49);
    goto CPyL75;
CPyL93: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL21;
CPyL94: ;
    CPy_DecRef(cpy_r_log_file);
    goto CPyL64;
CPyL95: ;
    CPy_DECREF(cpy_r_r56);
    goto CPyL25;
CPyL96: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL27;
CPyL97: ;
    CPy_DecRef(cpy_r_log_file);
    CPyTagged_DecRef(cpy_r_r68);
    goto CPyL64;
CPyL98: ;
    CPy_DecRef(cpy_r_log_file);
    CPy_DecRef(cpy_r_r72);
    goto CPyL64;
CPyL99: ;
    CPy_DecRef(cpy_r_log_file);
    CPyTagged_DecRef(cpy_r_devnull);
    goto CPyL64;
CPyL100: ;
    CPy_DecRef(cpy_r_log_file);
    CPyTagged_DecRef(cpy_r_devnull);
    CPy_DecRef(cpy_r_r80);
    goto CPyL64;
CPyL101: ;
    CPy_DECREF(cpy_r_r84);
    goto CPyL34;
CPyL102: ;
    CPy_DecRef(cpy_r_log_file);
    CPyTagged_DecRef(cpy_r_devnull);
    CPy_DecRef(cpy_r_r88);
    goto CPyL64;
CPyL103: ;
    CPy_DECREF(cpy_r_r92);
    goto CPyL36;
CPyL104: ;
    CPy_DecRef(cpy_r_log_file);
    CPyTagged_DecRef(cpy_r_devnull);
    CPy_DecRef(cpy_r_r96);
    goto CPyL64;
CPyL105: ;
    CPy_DECREF(cpy_r_r100);
    goto CPyL38;
CPyL106: ;
    CPy_DecRef(cpy_r_log_file);
    CPy_DecRef(cpy_r_r104);
    goto CPyL64;
CPyL107: ;
    CPy_DECREF(cpy_r_r107);
    goto CPyL40;
CPyL108: ;
    CPy_DECREF(cpy_r_r120);
    goto CPyL46;
CPyL109: ;
    CPy_DECREF(cpy_r_log_file);
    goto CPyL62;
CPyL110: ;
    CPy_DecRef(cpy_r_r125);
    goto CPyL64;
CPyL111: ;
    CPy_DecRef(cpy_r_r134);
    goto CPyL64;
CPyL112: ;
    CPy_DecRef(cpy_r_r145);
    goto CPyL64;
CPyL113: ;
    CPyTagged_DecRef(cpy_r_fd);
    goto CPyL64;
CPyL114: ;
    CPyTagged_DecRef(cpy_r_fd);
    CPy_DecRef(cpy_r_r154);
    goto CPyL64;
CPyL115: ;
    CPy_DECREF(cpy_r_r158);
    goto CPyL59;
CPyL116: ;
    CPy_DecRef(cpy_r_r162);
    goto CPyL64;
CPyL117: ;
    CPy_DECREF(cpy_r_r166);
    goto CPyL61;
CPyL118: ;
    CPy_DECREF(cpy_r_r167);
    goto CPyL63;
CPyL119: ;
    CPy_DECREF(cpy_r_r177);
    goto CPyL67;
CPyL120: ;
    CPy_XDECREF(cpy_r_r169.f0);
    CPy_XDECREF(cpy_r_r169.f1);
    CPy_XDECREF(cpy_r_r169.f2);
    goto CPyL69;
}

PyObject *CPyPy_dmypy_server____daemonize_cb(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"func", "log_file", 0};
    static CPyArg_Parser parser = {"O|O:_daemonize_cb", kwlist, 0};
    PyObject *obj_func;
    PyObject *obj_log_file = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_func, &obj_log_file)) {
        return NULL;
    }
    PyObject *arg_func = obj_func;
    PyObject *arg_log_file;
    if (obj_log_file == NULL) {
        arg_log_file = NULL;
        goto __LL1914;
    }
    if (PyUnicode_Check(obj_log_file))
        arg_log_file = obj_log_file;
    else {
        arg_log_file = NULL;
    }
    if (arg_log_file != NULL) goto __LL1914;
    if (obj_log_file == Py_None)
        arg_log_file = obj_log_file;
    else {
        arg_log_file = NULL;
    }
    if (arg_log_file != NULL) goto __LL1914;
    CPy_TypeError("str or None", obj_log_file); 
    goto fail;
__LL1914: ;
    CPyTagged retval = CPyDef_dmypy_server____daemonize_cb(arg_func, arg_log_file);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "_daemonize_cb", 76, CPyStatic_dmypy_server___globals);
    return NULL;
}

CPyTagged CPyDef_dmypy_server___daemonize(PyObject *cpy_r_options, PyObject *cpy_r_status_file, PyObject *cpy_r_timeout, PyObject *cpy_r_log_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    if (cpy_r_timeout != NULL) goto CPyL9;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_timeout = cpy_r_r0;
CPyL2: ;
    if (cpy_r_log_file != NULL) goto CPyL10;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_log_file = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = CPyDef_dmypy_server___Server(cpy_r_options, cpy_r_status_file, cpy_r_timeout);
    CPy_DECREF(cpy_r_timeout);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "daemonize", 129, CPyStatic_dmypy_server___globals);
        goto CPyL11;
    }
    cpy_r_r3 = CPyStatics[1929]; /* 'serve' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "daemonize", 129, CPyStatic_dmypy_server___globals);
        goto CPyL11;
    }
    cpy_r_r5 = CPyDef_dmypy_server____daemonize_cb(cpy_r_r4, cpy_r_log_file);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_log_file);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "daemonize", 129, CPyStatic_dmypy_server___globals);
        goto CPyL8;
    }
    return cpy_r_r5;
CPyL8: ;
    cpy_r_r6 = CPY_INT_TAG;
    return cpy_r_r6;
CPyL9: ;
    CPy_INCREF(cpy_r_timeout);
    goto CPyL2;
CPyL10: ;
    CPy_INCREF(cpy_r_log_file);
    goto CPyL4;
CPyL11: ;
    CPy_DecRef(cpy_r_log_file);
    goto CPyL8;
}

PyObject *CPyPy_dmypy_server___daemonize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"options", "status_file", "timeout", "log_file", 0};
    static CPyArg_Parser parser = {"OO|OO:daemonize", kwlist, 0};
    PyObject *obj_options;
    PyObject *obj_status_file;
    PyObject *obj_timeout = NULL;
    PyObject *obj_log_file = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_options, &obj_status_file, &obj_timeout, &obj_log_file)) {
        return NULL;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_status_file;
    if (likely(PyUnicode_Check(obj_status_file)))
        arg_status_file = obj_status_file;
    else {
        CPy_TypeError("str", obj_status_file); 
        goto fail;
    }
    PyObject *arg_timeout;
    if (obj_timeout == NULL) {
        arg_timeout = NULL;
        goto __LL1915;
    }
    if (PyLong_Check(obj_timeout))
        arg_timeout = obj_timeout;
    else {
        arg_timeout = NULL;
    }
    if (arg_timeout != NULL) goto __LL1915;
    if (obj_timeout == Py_None)
        arg_timeout = obj_timeout;
    else {
        arg_timeout = NULL;
    }
    if (arg_timeout != NULL) goto __LL1915;
    CPy_TypeError("int or None", obj_timeout); 
    goto fail;
__LL1915: ;
    PyObject *arg_log_file;
    if (obj_log_file == NULL) {
        arg_log_file = NULL;
        goto __LL1916;
    }
    if (PyUnicode_Check(obj_log_file))
        arg_log_file = obj_log_file;
    else {
        arg_log_file = NULL;
    }
    if (arg_log_file != NULL) goto __LL1916;
    if (obj_log_file == Py_None)
        arg_log_file = obj_log_file;
    else {
        arg_log_file = NULL;
    }
    if (arg_log_file != NULL) goto __LL1916;
    CPy_TypeError("str or None", obj_log_file); 
    goto fail;
__LL1916: ;
    CPyTagged retval = CPyDef_dmypy_server___daemonize(arg_options, arg_status_file, arg_timeout, arg_log_file);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "daemonize", 121, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___process_start_options(PyObject *cpy_r_flags, char cpy_r_allow_sources) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    tuple_T2OO cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r__;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_options;
    PyObject *cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject **cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject **cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    cpy_r_r0 = CPyStatics[1930]; /* '-i' */
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", 139, CPyStatic_dmypy_server___globals);
        goto CPyL35;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    CPy_INCREF(cpy_r_r0);
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = PyNumber_Add(cpy_r_r1, cpy_r_flags);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", 139, CPyStatic_dmypy_server___globals);
        goto CPyL35;
    }
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "process_start_options", 139, CPyStatic_dmypy_server___globals, "list", cpy_r_r4);
        goto CPyL35;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = NULL;
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPyDef_mypy___main___process_options(cpy_r_r5, cpy_r_r6, cpy_r_r7, 0, 1, cpy_r_r8, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r11.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", 138, CPyStatic_dmypy_server___globals);
        goto CPyL35;
    }
    cpy_r_r12 = cpy_r_r11.f0;
    CPy_INCREF(cpy_r_r12);
    cpy_r__ = cpy_r_r12;
    CPy_DECREF(cpy_r__);
    cpy_r_r13 = cpy_r_r11.f1;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r11.f0);
    CPy_DECREF(cpy_r_r11.f1);
    cpy_r_options = cpy_r_r13;
    cpy_r_r14 = ((mypy___options___OptionsObject *)cpy_r_options)->_report_dirs;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = PyDict_Size(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = cpy_r_r16 != 0;
    if (!cpy_r_r17) goto CPyL7;
    cpy_r_r18 = CPyStatics[1931]; /* ('dmypy: Ignoring report generation settings. '
                                     'Start/restart cannot generate reports.') */
    cpy_r_r19 = CPyModule_builtins;
    cpy_r_r20 = CPyStatics[190]; /* 'print' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", 142, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r22[1] = {cpy_r_r18};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 1, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", 142, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    } else
        goto CPyL37;
CPyL7: ;
    cpy_r_r25 = ((mypy___options___OptionsObject *)cpy_r_options)->_junit_xml;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_r25 != cpy_r_r26;
    if (!cpy_r_r27) goto CPyL38;
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r28 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "process_start_options", 143, CPyStatic_dmypy_server___globals, "str", cpy_r_r25);
        goto CPyL36;
    }
    cpy_r_r29 = CPyStr_IsTrue(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (!cpy_r_r29) goto CPyL13;
    cpy_r_r30 = CPyStatics[1932]; /* ('dmypy: Ignoring report generation settings. '
                                     'Start/restart does not support --junit-xml. Pass it '
                                     'to check/recheck instead') */
    cpy_r_r31 = CPyModule_builtins;
    cpy_r_r32 = CPyStatics[190]; /* 'print' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", 144, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r34[1] = {cpy_r_r30};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = _PyObject_Vectorcall(cpy_r_r33, cpy_r_r35, 1, 0);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", 144, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    } else
        goto CPyL39;
CPyL12: ;
    cpy_r_r37 = Py_None;
    CPy_INCREF(cpy_r_r37);
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_options)->_junit_xml);
    ((mypy___options___OptionsObject *)cpy_r_options)->_junit_xml = cpy_r_r37;
CPyL13: ;
    cpy_r_r39 = ((mypy___options___OptionsObject *)cpy_r_options)->_incremental;
    if (cpy_r_r39) goto CPyL16;
CPyL14: ;
    cpy_r_r40 = CPyStatics[1933]; /* ('dmypy: start/restart should not disable incremental '
                                     'mode') */
    cpy_r_r41 = CPyModule_sys;
    cpy_r_r42 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", 150, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r44[1] = {cpy_r_r40};
    cpy_r_r45 = (PyObject **)&cpy_r_r44;
    cpy_r_r46 = _PyObject_Vectorcall(cpy_r_r43, cpy_r_r45, 1, 0);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", 150, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    } else
        goto CPyL40;
CPyL16: ;
    cpy_r_r47 = ((mypy___options___OptionsObject *)cpy_r_options)->_follow_imports;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = CPyStatics[400]; /* 'skip' */
    cpy_r_r49 = PyUnicode_Compare(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r50 = cpy_r_r49 == -1;
    if (!cpy_r_r50) goto CPyL19;
    cpy_r_r51 = PyErr_Occurred();
    cpy_r_r52 = cpy_r_r51 != NULL;
    if (!cpy_r_r52) goto CPyL19;
    cpy_r_r53 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", -1, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    }
CPyL19: ;
    cpy_r_r54 = cpy_r_r49 != 0;
    if (cpy_r_r54) goto CPyL21;
    cpy_r_r55 = cpy_r_r54;
    goto CPyL25;
CPyL21: ;
    cpy_r_r56 = ((mypy___options___OptionsObject *)cpy_r_options)->_follow_imports;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = CPyStatics[401]; /* 'error' */
    cpy_r_r58 = PyUnicode_Compare(cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r59 = cpy_r_r58 == -1;
    if (!cpy_r_r59) goto CPyL24;
    cpy_r_r60 = PyErr_Occurred();
    cpy_r_r61 = cpy_r_r60 != NULL;
    if (!cpy_r_r61) goto CPyL24;
    cpy_r_r62 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", -1, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    }
CPyL24: ;
    cpy_r_r63 = cpy_r_r58 != 0;
    cpy_r_r55 = cpy_r_r63;
CPyL25: ;
    if (cpy_r_r55) goto CPyL27;
    cpy_r_r64 = cpy_r_r55;
    goto CPyL31;
CPyL27: ;
    cpy_r_r65 = ((mypy___options___OptionsObject *)cpy_r_options)->_follow_imports;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r66 = CPyStatics[398]; /* 'normal' */
    cpy_r_r67 = PyUnicode_Compare(cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r68 = cpy_r_r67 == -1;
    if (!cpy_r_r68) goto CPyL30;
    cpy_r_r69 = PyErr_Occurred();
    cpy_r_r70 = cpy_r_r69 != NULL;
    if (!cpy_r_r70) goto CPyL30;
    cpy_r_r71 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", -1, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    }
CPyL30: ;
    cpy_r_r72 = cpy_r_r67 != 0;
    cpy_r_r64 = cpy_r_r72;
CPyL31: ;
    if (!cpy_r_r64) goto CPyL34;
    cpy_r_r73 = CPyStatics[1934]; /* 'dmypy: follow-imports=silent not supported' */
    cpy_r_r74 = CPyModule_sys;
    cpy_r_r75 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r76 = CPyObject_GetAttr(cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", 152, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r77[1] = {cpy_r_r73};
    cpy_r_r78 = (PyObject **)&cpy_r_r77;
    cpy_r_r79 = _PyObject_Vectorcall(cpy_r_r76, cpy_r_r78, 1, 0);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", 152, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    } else
        goto CPyL41;
CPyL34: ;
    return cpy_r_options;
CPyL35: ;
    cpy_r_r80 = NULL;
    return cpy_r_r80;
CPyL36: ;
    CPy_DecRef(cpy_r_options);
    goto CPyL35;
CPyL37: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL7;
CPyL38: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL13;
CPyL39: ;
    CPy_DECREF(cpy_r_r36);
    goto CPyL12;
CPyL40: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL16;
CPyL41: ;
    CPy_DECREF(cpy_r_r79);
    goto CPyL34;
}

PyObject *CPyPy_dmypy_server___process_start_options(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"flags", "allow_sources", 0};
    static CPyArg_Parser parser = {"OO:process_start_options", kwlist, 0};
    PyObject *obj_flags;
    PyObject *obj_allow_sources;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_flags, &obj_allow_sources)) {
        return NULL;
    }
    PyObject *arg_flags;
    if (likely(PyList_Check(obj_flags)))
        arg_flags = obj_flags;
    else {
        CPy_TypeError("list", obj_flags); 
        goto fail;
    }
    char arg_allow_sources;
    if (unlikely(!PyBool_Check(obj_allow_sources))) {
        CPy_TypeError("bool", obj_allow_sources); goto fail;
    } else
        arg_allow_sources = obj_allow_sources == Py_True;
    PyObject *retval = CPyDef_dmypy_server___process_start_options(arg_flags, arg_allow_sources);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "process_start_options", 137, CPyStatic_dmypy_server___globals);
    return NULL;
}

char CPyDef_dmypy_server___ignore_suppressed_imports(PyObject *cpy_r_module) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyStatics[1935]; /* 'encodings.' */
    cpy_r_r1 = CPyStr_Startswith(cpy_r_module, cpy_r_r0);
    return cpy_r_r1;
}

PyObject *CPyPy_dmypy_server___ignore_suppressed_imports(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module", 0};
    static CPyArg_Parser parser = {"O:ignore_suppressed_imports", kwlist, 0};
    PyObject *obj_module;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_module)) {
        return NULL;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    char retval = CPyDef_dmypy_server___ignore_suppressed_imports(arg_module);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "ignore_suppressed_imports", 156, CPyStatic_dmypy_server___globals);
    return NULL;
}

char CPyDef_dmypy_server___Server_____init__(PyObject *cpy_r_self, PyObject *cpy_r_options, PyObject *cpy_r_status_file, PyObject *cpy_r_timeout) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    if (cpy_r_timeout != NULL) goto CPyL21;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_timeout = cpy_r_r0;
CPyL2: ;
    CPy_INCREF(cpy_r_options);
    ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options = cpy_r_options;
    cpy_r_r1 = CPyDef_mypy___options___Options___snapshot(cpy_r_options);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "__init__", 177, CPyStatic_dmypy_server___globals);
        goto CPyL22;
    }
    ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options_snapshot = cpy_r_r1;
    ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_timeout = cpy_r_timeout;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager = cpy_r_r2;
    cpy_r_r3 = CPyModule_os;
    cpy_r_r4 = CPyStatics[142]; /* 'path' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "__init__", 181, CPyStatic_dmypy_server___globals);
        goto CPyL20;
    }
    cpy_r_r6 = CPyStatics[176]; /* 'isfile' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "__init__", 181, CPyStatic_dmypy_server___globals);
        goto CPyL20;
    }
    PyObject *cpy_r_r8[1] = {cpy_r_status_file};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r9, 1, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "__init__", 181, CPyStatic_dmypy_server___globals);
        goto CPyL20;
    }
    if (unlikely(!PyBool_Check(cpy_r_r10))) {
        CPy_TypeError("bool", cpy_r_r10); cpy_r_r11 = 2;
    } else
        cpy_r_r11 = cpy_r_r10 == Py_True;
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "__init__", 181, CPyStatic_dmypy_server___globals);
        goto CPyL20;
    }
    if (!cpy_r_r11) goto CPyL10;
    cpy_r_r12 = CPyModule_os;
    cpy_r_r13 = CPyStatics[1936]; /* 'unlink' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "__init__", 182, CPyStatic_dmypy_server___globals);
        goto CPyL20;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_status_file};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "__init__", 182, CPyStatic_dmypy_server___globals);
        goto CPyL20;
    } else
        goto CPyL23;
CPyL10: ;
    cpy_r_r18 = CPyDef_fscache___FileSystemCache();
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "__init__", 184, CPyStatic_dmypy_server___globals);
        goto CPyL20;
    }
    ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fscache = cpy_r_r18;
    ((mypy___options___OptionsObject *)cpy_r_options)->_raise_exceptions = 1;
    ((mypy___options___OptionsObject *)cpy_r_options)->_incremental = 1;
    ((mypy___options___OptionsObject *)cpy_r_options)->_fine_grained_incremental = 1;
    ((mypy___options___OptionsObject *)cpy_r_options)->_show_traceback = 1;
    cpy_r_r23 = ((mypy___options___OptionsObject *)cpy_r_options)->_use_fine_grained_cache;
    if (!cpy_r_r23) goto CPyL13;
CPyL12: ;
    ((mypy___options___OptionsObject *)cpy_r_options)->_cache_fine_grained = 1;
    goto CPyL16;
CPyL13: ;
    cpy_r_r25 = CPyModule_os;
    cpy_r_r26 = CPyStatics[391]; /* 'devnull' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "__init__", 195, CPyStatic_dmypy_server___globals);
        goto CPyL20;
    }
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "__init__", 195, CPyStatic_dmypy_server___globals, "str", cpy_r_r27);
        goto CPyL20;
    }
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_options)->_cache_dir);
    ((mypy___options___OptionsObject *)cpy_r_options)->_cache_dir = cpy_r_r28;
CPyL16: ;
    ((mypy___options___OptionsObject *)cpy_r_options)->_local_partial_types = 1;
    CPy_INCREF(cpy_r_status_file);
    ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_status_file = cpy_r_status_file;
    cpy_r_r31 = CPyModule_sys;
    cpy_r_r32 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "__init__", 203, CPyStatic_dmypy_server___globals);
        goto CPyL20;
    }
    cpy_r_r34 = CPyModule_sys;
    cpy_r_r35 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "__init__", 203, CPyStatic_dmypy_server___globals);
        goto CPyL24;
    }
    cpy_r_r37 = ((mypy___options___OptionsObject *)cpy_r_options)->_hide_error_codes;
    cpy_r_r38 = CPyDef_mypy___util___FancyFormatter(cpy_r_r33, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "__init__", 203, CPyStatic_dmypy_server___globals);
        goto CPyL20;
    }
    ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_formatter = cpy_r_r38;
    return 1;
CPyL20: ;
    cpy_r_r39 = 2;
    return cpy_r_r39;
CPyL21: ;
    CPy_INCREF(cpy_r_timeout);
    goto CPyL2;
CPyL22: ;
    CPy_DecRef(cpy_r_timeout);
    goto CPyL20;
CPyL23: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL10;
CPyL24: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL20;
}

PyObject *CPyPy_dmypy_server___Server_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"options", "status_file", "timeout", 0};
    PyObject *obj_options;
    PyObject *obj_status_file;
    PyObject *obj_timeout = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO|O", "__init__", kwlist, &obj_options, &obj_status_file, &obj_timeout)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_status_file;
    if (likely(PyUnicode_Check(obj_status_file)))
        arg_status_file = obj_status_file;
    else {
        CPy_TypeError("str", obj_status_file); 
        goto fail;
    }
    PyObject *arg_timeout;
    if (obj_timeout == NULL) {
        arg_timeout = NULL;
        goto __LL1917;
    }
    if (PyLong_Check(obj_timeout))
        arg_timeout = obj_timeout;
    else {
        arg_timeout = NULL;
    }
    if (arg_timeout != NULL) goto __LL1917;
    if (obj_timeout == Py_None)
        arg_timeout = obj_timeout;
    else {
        arg_timeout = NULL;
    }
    if (arg_timeout != NULL) goto __LL1917;
    CPy_TypeError("int or None", obj_timeout); 
    goto fail;
__LL1917: ;
    char retval = CPyDef_dmypy_server___Server_____init__(arg_self, arg_options, arg_status_file, arg_timeout);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "__init__", 173, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server____response_metadata(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    tuple_T2II cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T2II cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_py_version;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    cpy_r_r1 = ((mypy___options___OptionsObject *)cpy_r_r0)->_python_version;
    CPyTagged_INCREF(cpy_r_r1.f0);
    CPyTagged_INCREF(cpy_r_r1.f1);
    cpy_r_r2 = cpy_r_r1.f0;
    CPyTagged_INCREF(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r1.f0);
    CPyTagged_DECREF(cpy_r_r1.f1);
    cpy_r_r3 = CPyTagged_Str(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_response_metadata", 206, CPyStatic_dmypy_server___globals);
        goto CPyL5;
    }
    cpy_r_r4 = CPyStatics[755]; /* '_' */
    cpy_r_r5 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    cpy_r_r6 = ((mypy___options___OptionsObject *)cpy_r_r5)->_python_version;
    CPyTagged_INCREF(cpy_r_r6.f0);
    CPyTagged_INCREF(cpy_r_r6.f1);
    cpy_r_r7 = cpy_r_r6.f1;
    CPyTagged_INCREF(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r6.f0);
    CPyTagged_DECREF(cpy_r_r6.f1);
    cpy_r_r8 = CPyTagged_Str(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_response_metadata", 206, CPyStatic_dmypy_server___globals);
        goto CPyL6;
    }
    cpy_r_r9 = CPyStr_Build(3, cpy_r_r3, cpy_r_r4, cpy_r_r8);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_response_metadata", 206, CPyStatic_dmypy_server___globals);
        goto CPyL5;
    }
    cpy_r_py_version = cpy_r_r9;
    cpy_r_r10 = CPyStatics[305]; /* 'platform' */
    cpy_r_r11 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    cpy_r_r12 = ((mypy___options___OptionsObject *)cpy_r_r11)->_platform;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[1569]; /* 'python_version' */
    cpy_r_r14 = CPyDict_Build(2, cpy_r_r10, cpy_r_r12, cpy_r_r13, cpy_r_py_version);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_py_version);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_response_metadata", 207, CPyStatic_dmypy_server___globals);
        goto CPyL5;
    }
    return cpy_r_r14;
CPyL5: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL6: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL5;
}

PyObject *CPyPy_dmypy_server___Server____response_metadata(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":_response_metadata", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_dmypy_server___Server____response_metadata(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "_response_metadata", 205, CPyStatic_dmypy_server___globals);
    return NULL;
}

char CPyDef_dmypy_server___Server___serve(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_command;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_server;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    tuple_T3OOO cpy_r_r43;
    tuple_T3OOO cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    tuple_T3OOO cpy_r_r55;
    tuple_T3OOO cpy_r_r56;
    tuple_T3OOO cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject **cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_data;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_debug_stdout;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_debug_stderr;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_resp;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    tuple_T3OOO cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
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
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_tb;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    int32_t cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject **cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject **cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    int32_t cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject **cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    char cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject **cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    int32_t cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject **cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    int32_t cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    int32_t cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject **cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    char cpy_r_r191;
    tuple_T3OOO cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    int32_t cpy_r_r200;
    char cpy_r_r201;
    char cpy_r_r202;
    char cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject **cpy_r_r209;
    PyObject *cpy_r_r210;
    tuple_T3OOO cpy_r_r211;
    tuple_T3OOO cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    int32_t cpy_r_r218;
    char cpy_r_r219;
    char cpy_r_r220;
    char cpy_r_r221;
    tuple_T3OOO cpy_r_r222;
    tuple_T3OOO cpy_r_r223;
    tuple_T3OOO cpy_r_r224;
    PyObject *cpy_r_r225;
    char cpy_r_r226;
    char cpy_r_r227;
    tuple_T3OOO cpy_r_r228;
    tuple_T3OOO cpy_r_r229;
    tuple_T3OOO cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    int32_t cpy_r_r233;
    char cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject **cpy_r_r241;
    PyObject *cpy_r_r242;
    char cpy_r_r243;
    tuple_T3OOO cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    char cpy_r_r248;
    char cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_exc_info;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    char cpy_r_r260;
    PyObject *cpy_r_r261;
    int32_t cpy_r_r262;
    char cpy_r_r263;
    char cpy_r_r264;
    tuple_T3OOO cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    char cpy_r_r270;
    char cpy_r_r271;
    tuple_T3OOO cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    char cpy_r_r282;
    char cpy_r_r283;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_command = cpy_r_r0;
    cpy_r_r1 = CPyStatics[1673]; /* 'dmypy' */
    cpy_r_r2 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_timeout;
    CPy_INCREF(cpy_r_r2);
    if (CPyFloat_Check(cpy_r_r2))
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL1918;
    if (cpy_r_r2 == Py_None)
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL1918;
    CPy_TypeErrorTraceback("mypy/dmypy_server.py", "serve", 212, CPyStatic_dmypy_server___globals, "float or None", cpy_r_r2);
    goto CPyL187;
__LL1918: ;
    cpy_r_r4 = CPyDef_ipc___IPCServer(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 212, CPyStatic_dmypy_server___globals);
        goto CPyL187;
    }
    cpy_r_server = cpy_r_r4;
    cpy_r_r5 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_status_file;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatics[448]; /* 'w' */
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[199]; /* 'open' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 214, CPyStatic_dmypy_server___globals);
        goto CPyL188;
    }
    PyObject *cpy_r_r10[2] = {cpy_r_r5, cpy_r_r6};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 2, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 214, CPyStatic_dmypy_server___globals);
        goto CPyL188;
    }
    CPy_DECREF(cpy_r_r5);
    cpy_r_r13 = PyObject_Type(cpy_r_r12);
    cpy_r_r14 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 214, CPyStatic_dmypy_server___globals);
        goto CPyL189;
    }
    cpy_r_r16 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r16);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 214, CPyStatic_dmypy_server___globals);
        goto CPyL190;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_r12};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 214, CPyStatic_dmypy_server___globals);
        goto CPyL190;
    }
    cpy_r_r21 = 1;
    cpy_r_f = cpy_r_r20;
    cpy_r_r22 = CPyStatics[1755]; /* 'pid' */
    cpy_r_r23 = CPyModule_os;
    cpy_r_r24 = CPyStatics[1937]; /* 'getpid' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 215, CPyStatic_dmypy_server___globals);
        goto CPyL191;
    }
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r25, 0, 0, 0);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 215, CPyStatic_dmypy_server___globals);
        goto CPyL191;
    }
    if (likely(PyLong_Check(cpy_r_r26)))
        cpy_r_r27 = CPyTagged_FromObject(cpy_r_r26);
    else {
        CPy_TypeError("int", cpy_r_r26); cpy_r_r27 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 215, CPyStatic_dmypy_server___globals);
        goto CPyL191;
    }
    cpy_r_r28 = CPyStatics[1759]; /* 'connection_name' */
    cpy_r_r29 = CPY_GET_ATTR(cpy_r_server, CPyType_ipc___IPCServer, 8, mypy___ipc___IPCServerObject, PyObject *); /* connection_name */
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 215, CPyStatic_dmypy_server___globals);
        goto CPyL192;
    }
CPyL13: ;
    cpy_r_r30 = CPyTagged_StealAsObject(cpy_r_r27);
    cpy_r_r31 = CPyDict_Build(2, cpy_r_r22, cpy_r_r30, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 215, CPyStatic_dmypy_server___globals);
        goto CPyL191;
    }
    cpy_r_r32 = CPyModule_json;
    cpy_r_r33 = CPyStatics[1735]; /* 'dump' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 215, CPyStatic_dmypy_server___globals);
        goto CPyL193;
    }
    PyObject *cpy_r_r35[2] = {cpy_r_r31, cpy_r_f};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = _PyObject_Vectorcall(cpy_r_r34, cpy_r_r36, 2, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 215, CPyStatic_dmypy_server___globals);
        goto CPyL193;
    } else
        goto CPyL194;
CPyL16: ;
    CPy_DECREF(cpy_r_r31);
    cpy_r_r38 = CPyStatics[189]; /* '\n' */
    cpy_r_r39 = CPyStatics[286]; /* 'write' */
    PyObject *cpy_r_r40[2] = {cpy_r_f, cpy_r_r38};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = PyObject_VectorcallMethod(cpy_r_r39, cpy_r_r41, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 216, CPyStatic_dmypy_server___globals);
        goto CPyL191;
    } else
        goto CPyL195;
CPyL17: ;
    CPy_DECREF(cpy_r_f);
    goto CPyL26;
CPyL18: ;
    cpy_r_r43 = CPy_CatchError();
    cpy_r_r21 = 0;
    cpy_r_r44 = CPy_GetExcInfo();
    cpy_r_r45 = cpy_r_r44.f0;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = cpy_r_r44.f1;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = cpy_r_r44.f2;
    CPy_INCREF(cpy_r_r47);
    CPy_DecRef(cpy_r_r44.f0);
    CPy_DecRef(cpy_r_r44.f1);
    CPy_DecRef(cpy_r_r44.f2);
    PyObject *cpy_r_r48[4] = {cpy_r_r12, cpy_r_r45, cpy_r_r46, cpy_r_r47};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r49, 4, 0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 214, CPyStatic_dmypy_server___globals);
        goto CPyL196;
    }
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    cpy_r_r51 = PyObject_IsTrue(cpy_r_r50);
    CPy_DecRef(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 214, CPyStatic_dmypy_server___globals);
        goto CPyL24;
    }
    cpy_r_r53 = cpy_r_r51;
    if (cpy_r_r53) goto CPyL23;
    CPy_Reraise();
    if (!0) {
        goto CPyL24;
    } else
        goto CPyL197;
CPyL22: ;
    CPy_Unreachable();
CPyL23: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL26;
CPyL24: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    cpy_r_r54 = CPy_KeepPropagating();
    if (!cpy_r_r54) {
        goto CPyL27;
    } else
        goto CPyL198;
CPyL25: ;
    CPy_Unreachable();
CPyL26: ;
    tuple_T3OOO __tmp1919 = { NULL, NULL, NULL };
    cpy_r_r55 = __tmp1919;
    cpy_r_r56 = cpy_r_r55;
    goto CPyL28;
CPyL27: ;
    cpy_r_r57 = CPy_CatchError();
    cpy_r_r56 = cpy_r_r57;
CPyL28: ;
    if (!cpy_r_r21) goto CPyL199;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r59[4] = {cpy_r_r12, cpy_r_r58, cpy_r_r58, cpy_r_r58};
    cpy_r_r60 = (PyObject **)&cpy_r_r59;
    cpy_r_r61 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r60, 4, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 214, CPyStatic_dmypy_server___globals);
        goto CPyL200;
    } else
        goto CPyL201;
CPyL30: ;
    CPy_DECREF(cpy_r_r12);
CPyL31: ;
    if (cpy_r_r56.f0 == NULL) goto CPyL38;
    CPy_Reraise();
    if (!0) {
        goto CPyL34;
    } else
        goto CPyL202;
CPyL33: ;
    CPy_Unreachable();
CPyL34: ;
    if (cpy_r_r56.f0 == NULL) goto CPyL36;
    CPy_RestoreExcInfo(cpy_r_r56);
    CPy_XDECREF(cpy_r_r56.f0);
    CPy_XDECREF(cpy_r_r56.f1);
    CPy_XDECREF(cpy_r_r56.f2);
CPyL36: ;
    cpy_r_r62 = CPy_KeepPropagating();
    if (!cpy_r_r62) {
        goto CPyL144;
    } else
        goto CPyL203;
CPyL37: ;
    CPy_Unreachable();
CPyL38: ;
    if (!1) goto CPyL143;
    cpy_r_r63 = CPyDef_ipc___IPCServer_____enter__(cpy_r_server);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 218, CPyStatic_dmypy_server___globals);
        goto CPyL144;
    } else
        goto CPyL204;
CPyL40: ;
    cpy_r_r64 = 1;
    cpy_r_r65 = CPyDef_dmypy_util___receive(cpy_r_server);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 219, CPyStatic_dmypy_server___globals);
        goto CPyL124;
    }
    cpy_r_data = cpy_r_r65;
    cpy_r_r66 = CPyModule_io;
    cpy_r_r67 = CPyStatics[4]; /* 'StringIO' */
    cpy_r_r68 = CPyObject_GetAttr(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 220, CPyStatic_dmypy_server___globals);
        goto CPyL205;
    }
    cpy_r_r69 = _PyObject_Vectorcall(cpy_r_r68, 0, 0, 0);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 220, CPyStatic_dmypy_server___globals);
        goto CPyL205;
    }
    cpy_r_debug_stdout = cpy_r_r69;
    cpy_r_r70 = CPyModule_io;
    cpy_r_r71 = CPyStatics[4]; /* 'StringIO' */
    cpy_r_r72 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 221, CPyStatic_dmypy_server___globals);
        goto CPyL206;
    }
    cpy_r_r73 = _PyObject_Vectorcall(cpy_r_r72, 0, 0, 0);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 221, CPyStatic_dmypy_server___globals);
        goto CPyL206;
    }
    cpy_r_debug_stderr = cpy_r_r73;
    cpy_r_r74 = CPyModule_sys;
    cpy_r_r75 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r76 = PyObject_SetAttr(cpy_r_r74, cpy_r_r75, cpy_r_debug_stdout);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 222, CPyStatic_dmypy_server___globals);
        goto CPyL207;
    }
    cpy_r_r78 = CPyModule_sys;
    cpy_r_r79 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r80 = PyObject_SetAttr(cpy_r_r78, cpy_r_r79, cpy_r_debug_stderr);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 223, CPyStatic_dmypy_server___globals);
        goto CPyL207;
    }
    cpy_r_r82 = PyDict_New();
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 224, CPyStatic_dmypy_server___globals);
        goto CPyL207;
    }
    cpy_r_resp = cpy_r_r82;
    CPy_DECREF(cpy_r_resp);
    cpy_r_r83 = CPyStatics[1748]; /* 'command' */
    cpy_r_r84 = PySequence_Contains(cpy_r_data, cpy_r_r83);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 225, CPyStatic_dmypy_server___globals);
        goto CPyL207;
    }
    cpy_r_r86 = cpy_r_r84;
    cpy_r_r87 = cpy_r_r86 ^ 1;
    if (cpy_r_r87) {
        goto CPyL208;
    } else
        goto CPyL53;
CPyL51: ;
    cpy_r_r88 = CPyStatics[401]; /* 'error' */
    cpy_r_r89 = CPyStatics[1938]; /* 'No command found in request' */
    cpy_r_r90 = CPyDict_Build(1, cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 226, CPyStatic_dmypy_server___globals);
        goto CPyL209;
    }
    cpy_r_resp = cpy_r_r90;
    goto CPyL98;
CPyL53: ;
    cpy_r_r91 = CPyStatics[1748]; /* 'command' */
    cpy_r_r92 = PyObject_GetItem(cpy_r_data, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 228, CPyStatic_dmypy_server___globals);
        goto CPyL207;
    } else
        goto CPyL210;
CPyL54: ;
    cpy_r_command = cpy_r_r92;
    cpy_r_r93 = (PyObject *)&PyUnicode_Type;
    cpy_r_r94 = PyObject_IsInstance(cpy_r_command, cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 229, CPyStatic_dmypy_server___globals);
        goto CPyL207;
    }
    cpy_r_r96 = cpy_r_r94;
    if (cpy_r_r96) {
        goto CPyL58;
    } else
        goto CPyL211;
CPyL56: ;
    cpy_r_r97 = CPyStatics[401]; /* 'error' */
    cpy_r_r98 = CPyStatics[1939]; /* 'Command is not a string' */
    cpy_r_r99 = CPyDict_Build(1, cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 230, CPyStatic_dmypy_server___globals);
        goto CPyL209;
    }
    cpy_r_resp = cpy_r_r99;
    goto CPyL98;
CPyL58: ;
    cpy_r_r100 = CPyStatics[1748]; /* 'command' */
    cpy_r_r101 = CPyStatics[795]; /* 'pop' */
    PyObject *cpy_r_r102[2] = {cpy_r_data, cpy_r_r100};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = PyObject_VectorcallMethod(cpy_r_r101, cpy_r_r103, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 232, CPyStatic_dmypy_server___globals);
        goto CPyL207;
    } else
        goto CPyL212;
CPyL59: ;
    cpy_r_command = cpy_r_r104;
    CPy_INCREF(cpy_r_command);
    if (likely(PyUnicode_Check(cpy_r_command)))
        cpy_r_r105 = cpy_r_command;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "serve", 234, CPyStatic_dmypy_server___globals, "str", cpy_r_command);
        goto CPyL213;
    }
    if (likely(PyDict_Check(cpy_r_data)))
        cpy_r_r106 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "serve", 234, CPyStatic_dmypy_server___globals, "dict", cpy_r_data);
        goto CPyL214;
    }
    cpy_r_r107 = CPyDef_dmypy_server___Server___run_command(cpy_r_self, cpy_r_r105, cpy_r_r106);
    CPy_DECREF(cpy_r_r105);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 234, CPyStatic_dmypy_server___globals);
        goto CPyL64;
    }
    cpy_r_resp = cpy_r_r107;
    goto CPyL98;
CPyL64: ;
    cpy_r_r108 = CPy_CatchError();
    cpy_r_r109 = CPyModule_builtins;
    cpy_r_r110 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r111 = CPyObject_GetAttr(cpy_r_r109, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 235, CPyStatic_dmypy_server___globals);
        goto CPyL215;
    }
    cpy_r_r112 = CPy_ExceptionMatches(cpy_r_r111);
    CPy_DecRef(cpy_r_r111);
    if (!cpy_r_r112) goto CPyL216;
    cpy_r_r113 = CPyModule_sys;
    cpy_r_r114 = CPyStatics[1940]; /* 'exc_info' */
    cpy_r_r115 = CPyObject_GetAttr(cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 237, CPyStatic_dmypy_server___globals);
        goto CPyL215;
    }
    cpy_r_r116 = _PyObject_Vectorcall(cpy_r_r115, 0, 0, 0);
    CPy_DecRef(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 237, CPyStatic_dmypy_server___globals);
        goto CPyL215;
    }
    if (unlikely(!(PyTuple_Check(cpy_r_r116) && PyTuple_GET_SIZE(cpy_r_r116) == 3))) {
        cpy_r_r117 = NULL;
        goto __LL1921;
    }
    cpy_r_r117 = PyTuple_GET_ITEM(cpy_r_r116, 0);
    if (cpy_r_r117 == NULL) goto __LL1921;
    cpy_r_r117 = PyTuple_GET_ITEM(cpy_r_r116, 1);
    if (cpy_r_r117 == NULL) goto __LL1921;
    cpy_r_r117 = PyTuple_GET_ITEM(cpy_r_r116, 2);
    if (cpy_r_r117 == NULL) goto __LL1921;
    cpy_r_r117 = cpy_r_r116;
__LL1921: ;
    if (cpy_r_r117 != NULL) goto __LL1920;
    if (unlikely(!(PyTuple_Check(cpy_r_r116) && PyTuple_GET_SIZE(cpy_r_r116) == 3))) {
        cpy_r_r117 = NULL;
        goto __LL1922;
    }
    if (likely(PyTuple_GET_ITEM(cpy_r_r116, 0) == Py_None))
        cpy_r_r117 = PyTuple_GET_ITEM(cpy_r_r116, 0);
    else {
        cpy_r_r117 = NULL;
    }
    if (cpy_r_r117 == NULL) goto __LL1922;
    if (likely(PyTuple_GET_ITEM(cpy_r_r116, 1) == Py_None))
        cpy_r_r117 = PyTuple_GET_ITEM(cpy_r_r116, 1);
    else {
        cpy_r_r117 = NULL;
    }
    if (cpy_r_r117 == NULL) goto __LL1922;
    if (likely(PyTuple_GET_ITEM(cpy_r_r116, 2) == Py_None))
        cpy_r_r117 = PyTuple_GET_ITEM(cpy_r_r116, 2);
    else {
        cpy_r_r117 = NULL;
    }
    if (cpy_r_r117 == NULL) goto __LL1922;
    cpy_r_r117 = cpy_r_r116;
__LL1922: ;
    if (cpy_r_r117 != NULL) goto __LL1920;
    CPy_TypeErrorTraceback("mypy/dmypy_server.py", "serve", 237, CPyStatic_dmypy_server___globals, "union[tuple[object, object, object], tuple[None, None, None]]", cpy_r_r116);
    goto CPyL215;
__LL1920: ;
    cpy_r_r118 = CPyModule_traceback;
    cpy_r_r119 = CPyStatics[1941]; /* 'format_exception' */
    cpy_r_r120 = CPyObject_GetAttr(cpy_r_r118, cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 237, CPyStatic_dmypy_server___globals);
        goto CPyL217;
    }
    cpy_r_r121 = PyList_New(0);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 237, CPyStatic_dmypy_server___globals);
        goto CPyL218;
    }
    cpy_r_r122 = CPyList_Extend(cpy_r_r121, cpy_r_r117);
    CPy_DecRef(cpy_r_r117);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 237, CPyStatic_dmypy_server___globals);
        goto CPyL219;
    } else
        goto CPyL220;
CPyL72: ;
    cpy_r_r123 = PyList_AsTuple(cpy_r_r121);
    CPy_DecRef(cpy_r_r121);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 237, CPyStatic_dmypy_server___globals);
        goto CPyL221;
    }
    cpy_r_r124 = PyDict_New();
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 237, CPyStatic_dmypy_server___globals);
        goto CPyL222;
    }
    cpy_r_r125 = PyObject_Call(cpy_r_r120, cpy_r_r123, cpy_r_r124);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 237, CPyStatic_dmypy_server___globals);
        goto CPyL215;
    }
    if (likely(PyList_Check(cpy_r_r125)))
        cpy_r_r126 = cpy_r_r125;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "serve", 237, CPyStatic_dmypy_server___globals, "list", cpy_r_r125);
        goto CPyL215;
    }
    cpy_r_tb = cpy_r_r126;
    cpy_r_r127 = CPyStatics[401]; /* 'error' */
    cpy_r_r128 = CPyStatics[1942]; /* 'Daemon crashed!\n' */
    cpy_r_r129 = CPyStatics[163]; /* '' */
    cpy_r_r130 = PyUnicode_Join(cpy_r_r129, cpy_r_tb);
    CPy_DecRef(cpy_r_tb);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 238, CPyStatic_dmypy_server___globals);
        goto CPyL215;
    }
    cpy_r_r131 = PyUnicode_Concat(cpy_r_r128, cpy_r_r130);
    CPy_DecRef(cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 238, CPyStatic_dmypy_server___globals);
        goto CPyL215;
    }
    cpy_r_r132 = CPyDict_Build(1, cpy_r_r127, cpy_r_r131);
    CPy_DecRef(cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 238, CPyStatic_dmypy_server___globals);
        goto CPyL215;
    }
    cpy_r_resp = cpy_r_r132;
    cpy_r_r133 = CPyDef_dmypy_server___Server____response_metadata(cpy_r_self);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 239, CPyStatic_dmypy_server___globals);
        goto CPyL223;
    }
    cpy_r_r134 = CPyDict_Update(cpy_r_resp, cpy_r_r133);
    CPy_DecRef(cpy_r_r133);
    cpy_r_r135 = cpy_r_r134 >= 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 239, CPyStatic_dmypy_server___globals);
        goto CPyL223;
    }
    cpy_r_r136 = CPyStatics[7]; /* 'getvalue' */
    PyObject *cpy_r_r137[1] = {cpy_r_debug_stdout};
    cpy_r_r138 = (PyObject **)&cpy_r_r137;
    cpy_r_r139 = PyObject_VectorcallMethod(cpy_r_r136, cpy_r_r138, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 240, CPyStatic_dmypy_server___globals);
        goto CPyL223;
    }
    CPy_DecRef(cpy_r_debug_stdout);
    if (likely(PyUnicode_Check(cpy_r_r139)))
        cpy_r_r140 = cpy_r_r139;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "serve", 240, CPyStatic_dmypy_server___globals, "str", cpy_r_r139);
        goto CPyL224;
    }
    cpy_r_r141 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r142 = CPyDict_SetItem(cpy_r_resp, cpy_r_r141, cpy_r_r140);
    CPy_DecRef(cpy_r_r140);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 240, CPyStatic_dmypy_server___globals);
        goto CPyL224;
    }
    cpy_r_r144 = CPyStatics[7]; /* 'getvalue' */
    PyObject *cpy_r_r145[1] = {cpy_r_debug_stderr};
    cpy_r_r146 = (PyObject **)&cpy_r_r145;
    cpy_r_r147 = PyObject_VectorcallMethod(cpy_r_r144, cpy_r_r146, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 241, CPyStatic_dmypy_server___globals);
        goto CPyL224;
    }
    CPy_DecRef(cpy_r_debug_stderr);
    if (likely(PyUnicode_Check(cpy_r_r147)))
        cpy_r_r148 = cpy_r_r147;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "serve", 241, CPyStatic_dmypy_server___globals, "str", cpy_r_r147);
        goto CPyL225;
    }
    cpy_r_r149 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r150 = CPyDict_SetItem(cpy_r_resp, cpy_r_r149, cpy_r_r148);
    CPy_DecRef(cpy_r_r148);
    cpy_r_r151 = cpy_r_r150 >= 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 241, CPyStatic_dmypy_server___globals);
        goto CPyL225;
    }
    cpy_r_r152 = CPyModule_json;
    cpy_r_r153 = CPyStatics[243]; /* 'dumps' */
    cpy_r_r154 = CPyObject_GetAttr(cpy_r_r152, cpy_r_r153);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 242, CPyStatic_dmypy_server___globals);
        goto CPyL225;
    }
    PyObject *cpy_r_r155[1] = {cpy_r_resp};
    cpy_r_r156 = (PyObject **)&cpy_r_r155;
    cpy_r_r157 = _PyObject_Vectorcall(cpy_r_r154, cpy_r_r156, 1, 0);
    CPy_DecRef(cpy_r_r154);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 242, CPyStatic_dmypy_server___globals);
        goto CPyL225;
    }
    CPy_DecRef(cpy_r_resp);
    if (likely(PyUnicode_Check(cpy_r_r157)))
        cpy_r_r158 = cpy_r_r157;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "serve", 242, CPyStatic_dmypy_server___globals, "str", cpy_r_r157);
        goto CPyL96;
    }
    cpy_r_r159 = CPyStatics[1752]; /* 'utf8' */
    cpy_r_r160 = CPy_Encode(cpy_r_r158, cpy_r_r159, NULL);
    CPy_DecRef(cpy_r_r158);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 242, CPyStatic_dmypy_server___globals);
        goto CPyL96;
    }
    cpy_r_r161 = CPyDef_ipc___IPCBase___write(cpy_r_server, cpy_r_r160);
    CPy_DecRef(cpy_r_r160);
    if (unlikely(cpy_r_r161 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 242, CPyStatic_dmypy_server___globals);
        goto CPyL96;
    }
    CPy_Reraise();
    if (!0) {
        goto CPyL96;
    } else
        goto CPyL226;
CPyL93: ;
    CPy_Unreachable();
CPyL94: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL96;
    } else
        goto CPyL227;
CPyL95: ;
    CPy_Unreachable();
CPyL96: ;
    CPy_RestoreExcInfo(cpy_r_r108);
    CPy_DecRef(cpy_r_r108.f0);
    CPy_DecRef(cpy_r_r108.f1);
    CPy_DecRef(cpy_r_r108.f2);
    cpy_r_r162 = CPy_KeepPropagating();
    if (!cpy_r_r162) {
        goto CPyL124;
    } else
        goto CPyL228;
CPyL97: ;
    CPy_Unreachable();
CPyL98: ;
    cpy_r_r163 = CPyStatics[7]; /* 'getvalue' */
    PyObject *cpy_r_r164[1] = {cpy_r_debug_stdout};
    cpy_r_r165 = (PyObject **)&cpy_r_r164;
    cpy_r_r166 = PyObject_VectorcallMethod(cpy_r_r163, cpy_r_r165, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 244, CPyStatic_dmypy_server___globals);
        goto CPyL229;
    }
    CPy_DECREF(cpy_r_debug_stdout);
    if (likely(PyUnicode_Check(cpy_r_r166)))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "serve", 244, CPyStatic_dmypy_server___globals, "str", cpy_r_r166);
        goto CPyL230;
    }
    cpy_r_r168 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r169 = CPyDict_SetItem(cpy_r_resp, cpy_r_r168, cpy_r_r167);
    CPy_DECREF(cpy_r_r167);
    cpy_r_r170 = cpy_r_r169 >= 0;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 244, CPyStatic_dmypy_server___globals);
        goto CPyL230;
    }
    cpy_r_r171 = CPyStatics[7]; /* 'getvalue' */
    PyObject *cpy_r_r172[1] = {cpy_r_debug_stderr};
    cpy_r_r173 = (PyObject **)&cpy_r_r172;
    cpy_r_r174 = PyObject_VectorcallMethod(cpy_r_r171, cpy_r_r173, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 245, CPyStatic_dmypy_server___globals);
        goto CPyL230;
    }
    CPy_DECREF(cpy_r_debug_stderr);
    if (likely(PyUnicode_Check(cpy_r_r174)))
        cpy_r_r175 = cpy_r_r174;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "serve", 245, CPyStatic_dmypy_server___globals, "str", cpy_r_r174);
        goto CPyL231;
    }
    cpy_r_r176 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r177 = CPyDict_SetItem(cpy_r_resp, cpy_r_r176, cpy_r_r175);
    CPy_DECREF(cpy_r_r175);
    cpy_r_r178 = cpy_r_r177 >= 0;
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 245, CPyStatic_dmypy_server___globals);
        goto CPyL231;
    }
    cpy_r_r179 = CPyDef_dmypy_server___Server____response_metadata(cpy_r_self);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 247, CPyStatic_dmypy_server___globals);
        goto CPyL232;
    }
    cpy_r_r180 = CPyDict_Update(cpy_r_resp, cpy_r_r179);
    CPy_DECREF(cpy_r_r179);
    cpy_r_r181 = cpy_r_r180 >= 0;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 247, CPyStatic_dmypy_server___globals);
        goto CPyL232;
    }
    cpy_r_r182 = CPyModule_json;
    cpy_r_r183 = CPyStatics[243]; /* 'dumps' */
    cpy_r_r184 = CPyObject_GetAttr(cpy_r_r182, cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 248, CPyStatic_dmypy_server___globals);
        goto CPyL232;
    }
    PyObject *cpy_r_r185[1] = {cpy_r_resp};
    cpy_r_r186 = (PyObject **)&cpy_r_r185;
    cpy_r_r187 = _PyObject_Vectorcall(cpy_r_r184, cpy_r_r186, 1, 0);
    CPy_DECREF(cpy_r_r184);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 248, CPyStatic_dmypy_server___globals);
        goto CPyL232;
    }
    CPy_DECREF(cpy_r_resp);
    if (likely(PyUnicode_Check(cpy_r_r187)))
        cpy_r_r188 = cpy_r_r187;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "serve", 248, CPyStatic_dmypy_server___globals, "str", cpy_r_r187);
        goto CPyL111;
    }
    cpy_r_r189 = CPyStatics[1752]; /* 'utf8' */
    cpy_r_r190 = CPy_Encode(cpy_r_r188, cpy_r_r189, NULL);
    CPy_DECREF(cpy_r_r188);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 248, CPyStatic_dmypy_server___globals);
        goto CPyL111;
    }
    cpy_r_r191 = CPyDef_ipc___IPCBase___write(cpy_r_server, cpy_r_r190);
    CPy_DECREF(cpy_r_r190);
    if (unlikely(cpy_r_r191 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 248, CPyStatic_dmypy_server___globals);
    } else
        goto CPyL118;
CPyL111: ;
    cpy_r_r192 = CPy_CatchError();
    cpy_r_r193 = CPyModule_builtins;
    cpy_r_r194 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r195 = CPyObject_GetAttr(cpy_r_r193, cpy_r_r194);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 249, CPyStatic_dmypy_server___globals);
        goto CPyL116;
    }
    cpy_r_r196 = CPy_ExceptionMatches(cpy_r_r195);
    CPy_DecRef(cpy_r_r195);
    if (cpy_r_r196) goto CPyL115;
    CPy_Reraise();
    if (!0) {
        goto CPyL116;
    } else
        goto CPyL233;
CPyL114: ;
    CPy_Unreachable();
CPyL115: ;
    CPy_RestoreExcInfo(cpy_r_r192);
    CPy_DecRef(cpy_r_r192.f0);
    CPy_DecRef(cpy_r_r192.f1);
    CPy_DecRef(cpy_r_r192.f2);
    goto CPyL118;
CPyL116: ;
    CPy_RestoreExcInfo(cpy_r_r192);
    CPy_DecRef(cpy_r_r192.f0);
    CPy_DecRef(cpy_r_r192.f1);
    CPy_DecRef(cpy_r_r192.f2);
    cpy_r_r197 = CPy_KeepPropagating();
    if (!cpy_r_r197) {
        goto CPyL124;
    } else
        goto CPyL234;
CPyL117: ;
    CPy_Unreachable();
CPyL118: ;
    cpy_r_r198 = CPyStatics[1707]; /* 'stop' */
    cpy_r_r199 = PyObject_RichCompare(cpy_r_command, cpy_r_r198, 2);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 251, CPyStatic_dmypy_server___globals);
        goto CPyL124;
    }
    cpy_r_r200 = PyObject_IsTrue(cpy_r_r199);
    CPy_DECREF(cpy_r_r199);
    cpy_r_r201 = cpy_r_r200 >= 0;
    if (unlikely(!cpy_r_r201)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 251, CPyStatic_dmypy_server___globals);
        goto CPyL124;
    }
    cpy_r_r202 = cpy_r_r200;
    if (!cpy_r_r202) goto CPyL132;
    cpy_r_r203 = CPyDef_typestate___reset_global_state();
    if (unlikely(cpy_r_r203 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 252, CPyStatic_dmypy_server___globals);
        goto CPyL124;
    }
    cpy_r_r204 = CPyModule_sys;
    cpy_r_r205 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r206 = CPyObject_GetAttr(cpy_r_r204, cpy_r_r205);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 253, CPyStatic_dmypy_server___globals);
        goto CPyL124;
    }
    cpy_r_r207 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r208[1] = {cpy_r_r207};
    cpy_r_r209 = (PyObject **)&cpy_r_r208;
    cpy_r_r210 = _PyObject_Vectorcall(cpy_r_r206, cpy_r_r209, 1, 0);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 253, CPyStatic_dmypy_server___globals);
    } else
        goto CPyL235;
CPyL124: ;
    cpy_r_r211 = CPy_CatchError();
    cpy_r_r64 = 0;
    cpy_r_r212 = CPy_GetExcInfo();
    cpy_r_r213 = cpy_r_r212.f0;
    CPy_INCREF(cpy_r_r213);
    cpy_r_r214 = cpy_r_r212.f1;
    CPy_INCREF(cpy_r_r214);
    cpy_r_r215 = cpy_r_r212.f2;
    CPy_INCREF(cpy_r_r215);
    CPy_DecRef(cpy_r_r212.f0);
    CPy_DecRef(cpy_r_r212.f1);
    CPy_DecRef(cpy_r_r212.f2);
    cpy_r_r216 = CPyDef_ipc___IPCServer_____exit__(cpy_r_server, cpy_r_r213, cpy_r_r214, cpy_r_r215);
    CPy_DecRef(cpy_r_r213);
    CPy_DecRef(cpy_r_r214);
    CPy_DecRef(cpy_r_r215);
    if (unlikely(cpy_r_r216 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 218, CPyStatic_dmypy_server___globals);
        goto CPyL130;
    }
    cpy_r_r217 = Py_None;
    cpy_r_r218 = PyObject_IsTrue(cpy_r_r217);
    cpy_r_r219 = cpy_r_r218 >= 0;
    if (unlikely(!cpy_r_r219)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 218, CPyStatic_dmypy_server___globals);
        goto CPyL130;
    }
    cpy_r_r220 = cpy_r_r218;
    if (cpy_r_r220) goto CPyL129;
    CPy_Reraise();
    if (!0) {
        goto CPyL130;
    } else
        goto CPyL236;
CPyL128: ;
    CPy_Unreachable();
CPyL129: ;
    CPy_RestoreExcInfo(cpy_r_r211);
    CPy_DecRef(cpy_r_r211.f0);
    CPy_DecRef(cpy_r_r211.f1);
    CPy_DecRef(cpy_r_r211.f2);
    goto CPyL132;
CPyL130: ;
    CPy_RestoreExcInfo(cpy_r_r211);
    CPy_DecRef(cpy_r_r211.f0);
    CPy_DecRef(cpy_r_r211.f1);
    CPy_DecRef(cpy_r_r211.f2);
    cpy_r_r221 = CPy_KeepPropagating();
    if (!cpy_r_r221) {
        goto CPyL133;
    } else
        goto CPyL237;
CPyL131: ;
    CPy_Unreachable();
CPyL132: ;
    tuple_T3OOO __tmp1923 = { NULL, NULL, NULL };
    cpy_r_r222 = __tmp1923;
    cpy_r_r223 = cpy_r_r222;
    goto CPyL134;
CPyL133: ;
    cpy_r_r224 = CPy_CatchError();
    cpy_r_r223 = cpy_r_r224;
CPyL134: ;
    if (!cpy_r_r64) goto CPyL136;
    cpy_r_r225 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r226 = CPyDef_ipc___IPCServer_____exit__(cpy_r_server, cpy_r_r225, cpy_r_r225, cpy_r_r225);
    if (unlikely(cpy_r_r226 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 218, CPyStatic_dmypy_server___globals);
        goto CPyL139;
    }
CPyL136: ;
    if (cpy_r_r223.f0 == NULL) goto CPyL38;
    CPy_Reraise();
    if (!0) {
        goto CPyL139;
    } else
        goto CPyL238;
CPyL138: ;
    CPy_Unreachable();
CPyL139: ;
    if (cpy_r_r223.f0 == NULL) goto CPyL141;
    CPy_RestoreExcInfo(cpy_r_r223);
    CPy_XDECREF(cpy_r_r223.f0);
    CPy_XDECREF(cpy_r_r223.f1);
    CPy_XDECREF(cpy_r_r223.f2);
CPyL141: ;
    cpy_r_r227 = CPy_KeepPropagating();
    if (!cpy_r_r227) {
        goto CPyL144;
    } else
        goto CPyL239;
CPyL142: ;
    CPy_Unreachable();
CPyL143: ;
    tuple_T3OOO __tmp1924 = { NULL, NULL, NULL };
    cpy_r_r228 = __tmp1924;
    cpy_r_r229 = cpy_r_r228;
    goto CPyL145;
CPyL144: ;
    cpy_r_r230 = CPy_CatchError();
    cpy_r_r229 = cpy_r_r230;
CPyL145: ;
    cpy_r_r231 = CPyStatics[1707]; /* 'stop' */
    cpy_r_r232 = PyObject_RichCompare(cpy_r_command, cpy_r_r231, 3);
    CPy_DECREF(cpy_r_command);
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 260, CPyStatic_dmypy_server___globals);
        goto CPyL240;
    }
    cpy_r_r233 = PyObject_IsTrue(cpy_r_r232);
    CPy_DECREF(cpy_r_r232);
    cpy_r_r234 = cpy_r_r233 >= 0;
    if (unlikely(!cpy_r_r234)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 260, CPyStatic_dmypy_server___globals);
        goto CPyL240;
    }
    cpy_r_r235 = cpy_r_r233;
    if (!cpy_r_r235) goto CPyL151;
    cpy_r_r236 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_status_file;
    CPy_INCREF(cpy_r_r236);
    cpy_r_r237 = CPyModule_os;
    cpy_r_r238 = CPyStatics[1936]; /* 'unlink' */
    cpy_r_r239 = CPyObject_GetAttr(cpy_r_r237, cpy_r_r238);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 261, CPyStatic_dmypy_server___globals);
        goto CPyL241;
    }
    PyObject *cpy_r_r240[1] = {cpy_r_r236};
    cpy_r_r241 = (PyObject **)&cpy_r_r240;
    cpy_r_r242 = _PyObject_Vectorcall(cpy_r_r239, cpy_r_r241, 1, 0);
    CPy_DECREF(cpy_r_r239);
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 261, CPyStatic_dmypy_server___globals);
        goto CPyL241;
    } else
        goto CPyL242;
CPyL150: ;
    CPy_DECREF(cpy_r_r236);
CPyL151: ;
    cpy_r_r243 = CPyDef_ipc___IPCServer___cleanup(cpy_r_server);
    CPy_DECREF(cpy_r_server);
    if (unlikely(cpy_r_r243 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 263, CPyStatic_dmypy_server___globals);
    } else
        goto CPyL159;
    cpy_r_r244 = CPy_CatchError();
    cpy_r_r245 = CPyModule_builtins;
    cpy_r_r246 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r247 = CPyObject_GetAttr(cpy_r_r245, cpy_r_r246);
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 264, CPyStatic_dmypy_server___globals);
        goto CPyL157;
    }
    cpy_r_r248 = CPy_ExceptionMatches(cpy_r_r247);
    CPy_DecRef(cpy_r_r247);
    if (cpy_r_r248) goto CPyL156;
    CPy_Reraise();
    if (!0) {
        goto CPyL157;
    } else
        goto CPyL243;
CPyL155: ;
    CPy_Unreachable();
CPyL156: ;
    CPy_RestoreExcInfo(cpy_r_r244);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r244.f2);
    goto CPyL159;
CPyL157: ;
    CPy_RestoreExcInfo(cpy_r_r244);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r244.f2);
    cpy_r_r249 = CPy_KeepPropagating();
    if (!cpy_r_r249) {
        goto CPyL181;
    } else
        goto CPyL244;
CPyL158: ;
    CPy_Unreachable();
CPyL159: ;
    cpy_r_r250 = CPyModule_sys;
    cpy_r_r251 = CPyStatics[1940]; /* 'exc_info' */
    cpy_r_r252 = CPyObject_GetAttr(cpy_r_r250, cpy_r_r251);
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 266, CPyStatic_dmypy_server___globals);
        goto CPyL181;
    }
    cpy_r_r253 = _PyObject_Vectorcall(cpy_r_r252, 0, 0, 0);
    CPy_DECREF(cpy_r_r252);
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 266, CPyStatic_dmypy_server___globals);
        goto CPyL181;
    }
    if (unlikely(!(PyTuple_Check(cpy_r_r253) && PyTuple_GET_SIZE(cpy_r_r253) == 3))) {
        cpy_r_r254 = NULL;
        goto __LL1926;
    }
    cpy_r_r254 = PyTuple_GET_ITEM(cpy_r_r253, 0);
    if (cpy_r_r254 == NULL) goto __LL1926;
    cpy_r_r254 = PyTuple_GET_ITEM(cpy_r_r253, 1);
    if (cpy_r_r254 == NULL) goto __LL1926;
    cpy_r_r254 = PyTuple_GET_ITEM(cpy_r_r253, 2);
    if (cpy_r_r254 == NULL) goto __LL1926;
    cpy_r_r254 = cpy_r_r253;
__LL1926: ;
    if (cpy_r_r254 != NULL) goto __LL1925;
    if (unlikely(!(PyTuple_Check(cpy_r_r253) && PyTuple_GET_SIZE(cpy_r_r253) == 3))) {
        cpy_r_r254 = NULL;
        goto __LL1927;
    }
    if (likely(PyTuple_GET_ITEM(cpy_r_r253, 0) == Py_None))
        cpy_r_r254 = PyTuple_GET_ITEM(cpy_r_r253, 0);
    else {
        cpy_r_r254 = NULL;
    }
    if (cpy_r_r254 == NULL) goto __LL1927;
    if (likely(PyTuple_GET_ITEM(cpy_r_r253, 1) == Py_None))
        cpy_r_r254 = PyTuple_GET_ITEM(cpy_r_r253, 1);
    else {
        cpy_r_r254 = NULL;
    }
    if (cpy_r_r254 == NULL) goto __LL1927;
    if (likely(PyTuple_GET_ITEM(cpy_r_r253, 2) == Py_None))
        cpy_r_r254 = PyTuple_GET_ITEM(cpy_r_r253, 2);
    else {
        cpy_r_r254 = NULL;
    }
    if (cpy_r_r254 == NULL) goto __LL1927;
    cpy_r_r254 = cpy_r_r253;
__LL1927: ;
    if (cpy_r_r254 != NULL) goto __LL1925;
    CPy_TypeErrorTraceback("mypy/dmypy_server.py", "serve", 266, CPyStatic_dmypy_server___globals, "union[tuple[object, object, object], tuple[None, None, None]]", cpy_r_r253);
    goto CPyL181;
__LL1925: ;
    cpy_r_exc_info = cpy_r_r254;
    CPy_INCREF(cpy_r_exc_info);
    cpy_r_r255 = cpy_r_exc_info;
    cpy_r_r256 = CPyStatics[9015]; /* 0 */
    cpy_r_r257 = PyObject_GetItem(cpy_r_r255, cpy_r_r256);
    CPy_DECREF(cpy_r_r255);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 267, CPyStatic_dmypy_server___globals);
        goto CPyL245;
    }
    cpy_r_r258 = cpy_r_r257;
    cpy_r_r259 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r260 = cpy_r_r258 != cpy_r_r259;
    if (!cpy_r_r260) goto CPyL246;
    cpy_r_r261 = cpy_r_r258;
    cpy_r_r262 = PyObject_IsTrue(cpy_r_r261);
    CPy_DECREF(cpy_r_r261);
    cpy_r_r263 = cpy_r_r262 >= 0;
    if (unlikely(!cpy_r_r263)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", -1, CPyStatic_dmypy_server___globals);
        goto CPyL245;
    }
    cpy_r_r264 = cpy_r_r262;
    if (!cpy_r_r264) goto CPyL247;
    PyObject *__tmp1928;
    if (unlikely(!(PyTuple_Check(cpy_r_exc_info) && PyTuple_GET_SIZE(cpy_r_exc_info) == 3))) {
        __tmp1928 = NULL;
        goto __LL1929;
    }
    __tmp1928 = PyTuple_GET_ITEM(cpy_r_exc_info, 0);
    if (__tmp1928 == NULL) goto __LL1929;
    __tmp1928 = PyTuple_GET_ITEM(cpy_r_exc_info, 1);
    if (__tmp1928 == NULL) goto __LL1929;
    __tmp1928 = PyTuple_GET_ITEM(cpy_r_exc_info, 2);
    if (__tmp1928 == NULL) goto __LL1929;
    __tmp1928 = cpy_r_exc_info;
__LL1929: ;
    if (unlikely(__tmp1928 == NULL)) {
        CPy_TypeError("tuple[object, object, object]", cpy_r_exc_info); cpy_r_r265 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp1930 = PyTuple_GET_ITEM(cpy_r_exc_info, 0);
        CPy_INCREF(__tmp1930);
        PyObject *__tmp1931;
        __tmp1931 = __tmp1930;
        cpy_r_r265.f0 = __tmp1931;
        PyObject *__tmp1932 = PyTuple_GET_ITEM(cpy_r_exc_info, 1);
        CPy_INCREF(__tmp1932);
        PyObject *__tmp1933;
        __tmp1933 = __tmp1932;
        cpy_r_r265.f1 = __tmp1933;
        PyObject *__tmp1934 = PyTuple_GET_ITEM(cpy_r_exc_info, 2);
        CPy_INCREF(__tmp1934);
        PyObject *__tmp1935;
        __tmp1935 = __tmp1934;
        cpy_r_r265.f2 = __tmp1935;
    }
    if (unlikely(cpy_r_r265.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 267, CPyStatic_dmypy_server___globals);
        goto CPyL245;
    }
    cpy_r_r266 = cpy_r_r265.f0;
    CPy_INCREF(cpy_r_r266);
    CPy_DECREF(cpy_r_r265.f0);
    CPy_DECREF(cpy_r_r265.f1);
    CPy_DECREF(cpy_r_r265.f2);
    cpy_r_r267 = CPyModule_builtins;
    cpy_r_r268 = CPyStatics[5]; /* 'SystemExit' */
    cpy_r_r269 = CPyObject_GetAttr(cpy_r_r267, cpy_r_r268);
    if (unlikely(cpy_r_r269 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 267, CPyStatic_dmypy_server___globals);
        goto CPyL248;
    }
    cpy_r_r270 = cpy_r_r266 == cpy_r_r269;
    CPy_DECREF(cpy_r_r266);
    CPy_DECREF(cpy_r_r269);
    cpy_r_r271 = cpy_r_r270 ^ 1;
    if (!cpy_r_r271) goto CPyL247;
    PyObject *__tmp1936;
    if (unlikely(!(PyTuple_Check(cpy_r_exc_info) && PyTuple_GET_SIZE(cpy_r_exc_info) == 3))) {
        __tmp1936 = NULL;
        goto __LL1937;
    }
    __tmp1936 = PyTuple_GET_ITEM(cpy_r_exc_info, 0);
    if (__tmp1936 == NULL) goto __LL1937;
    __tmp1936 = PyTuple_GET_ITEM(cpy_r_exc_info, 1);
    if (__tmp1936 == NULL) goto __LL1937;
    __tmp1936 = PyTuple_GET_ITEM(cpy_r_exc_info, 2);
    if (__tmp1936 == NULL) goto __LL1937;
    __tmp1936 = cpy_r_exc_info;
__LL1937: ;
    if (unlikely(__tmp1936 == NULL)) {
        CPy_TypeError("tuple[object, object, object]", cpy_r_exc_info); cpy_r_r272 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp1938 = PyTuple_GET_ITEM(cpy_r_exc_info, 0);
        CPy_INCREF(__tmp1938);
        PyObject *__tmp1939;
        __tmp1939 = __tmp1938;
        cpy_r_r272.f0 = __tmp1939;
        PyObject *__tmp1940 = PyTuple_GET_ITEM(cpy_r_exc_info, 1);
        CPy_INCREF(__tmp1940);
        PyObject *__tmp1941;
        __tmp1941 = __tmp1940;
        cpy_r_r272.f1 = __tmp1941;
        PyObject *__tmp1942 = PyTuple_GET_ITEM(cpy_r_exc_info, 2);
        CPy_INCREF(__tmp1942);
        PyObject *__tmp1943;
        __tmp1943 = __tmp1942;
        cpy_r_r272.f2 = __tmp1943;
    }
    CPy_DECREF(cpy_r_exc_info);
    if (unlikely(cpy_r_r272.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 268, CPyStatic_dmypy_server___globals);
        goto CPyL181;
    }
    cpy_r_r273 = CPyModule_traceback;
    cpy_r_r274 = CPyStatics[1943]; /* 'print_exception' */
    cpy_r_r275 = CPyObject_GetAttr(cpy_r_r273, cpy_r_r274);
    if (unlikely(cpy_r_r275 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 268, CPyStatic_dmypy_server___globals);
        goto CPyL249;
    }
    cpy_r_r276 = PyList_New(0);
    if (unlikely(cpy_r_r276 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 268, CPyStatic_dmypy_server___globals);
        goto CPyL250;
    }
    cpy_r_r277 = PyTuple_New(3);
    if (unlikely(cpy_r_r277 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1944 = cpy_r_r272.f0;
    PyTuple_SET_ITEM(cpy_r_r277, 0, __tmp1944);
    PyObject *__tmp1945 = cpy_r_r272.f1;
    PyTuple_SET_ITEM(cpy_r_r277, 1, __tmp1945);
    PyObject *__tmp1946 = cpy_r_r272.f2;
    PyTuple_SET_ITEM(cpy_r_r277, 2, __tmp1946);
    cpy_r_r278 = CPyList_Extend(cpy_r_r276, cpy_r_r277);
    CPy_DECREF(cpy_r_r277);
    if (unlikely(cpy_r_r278 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 268, CPyStatic_dmypy_server___globals);
        goto CPyL251;
    } else
        goto CPyL252;
CPyL175: ;
    cpy_r_r279 = PyList_AsTuple(cpy_r_r276);
    CPy_DECREF(cpy_r_r276);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 268, CPyStatic_dmypy_server___globals);
        goto CPyL253;
    }
    cpy_r_r280 = PyDict_New();
    if (unlikely(cpy_r_r280 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 268, CPyStatic_dmypy_server___globals);
        goto CPyL254;
    }
    cpy_r_r281 = PyObject_Call(cpy_r_r275, cpy_r_r279, cpy_r_r280);
    CPy_DECREF(cpy_r_r275);
    CPy_DECREF(cpy_r_r279);
    CPy_DECREF(cpy_r_r280);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "serve", 268, CPyStatic_dmypy_server___globals);
        goto CPyL181;
    } else
        goto CPyL255;
CPyL178: ;
    if (cpy_r_r229.f0 == NULL) goto CPyL185;
    CPy_Reraise();
    if (!0) {
        goto CPyL181;
    } else
        goto CPyL256;
CPyL180: ;
    CPy_Unreachable();
CPyL181: ;
    if (cpy_r_r229.f0 == NULL) goto CPyL183;
    CPy_RestoreExcInfo(cpy_r_r229);
    CPy_XDECREF(cpy_r_r229.f0);
    CPy_XDECREF(cpy_r_r229.f1);
    CPy_XDECREF(cpy_r_r229.f2);
CPyL183: ;
    cpy_r_r282 = CPy_KeepPropagating();
    if (!cpy_r_r282) goto CPyL186;
    CPy_Unreachable();
CPyL185: ;
    return 1;
CPyL186: ;
    cpy_r_r283 = 2;
    return cpy_r_r283;
CPyL187: ;
    CPy_DecRef(cpy_r_command);
    goto CPyL186;
CPyL188: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL144;
CPyL189: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    goto CPyL144;
CPyL190: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    goto CPyL144;
CPyL191: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL18;
CPyL192: ;
    CPy_DecRef(cpy_r_f);
    CPyTagged_DecRef(cpy_r_r27);
    goto CPyL18;
CPyL193: ;
    CPy_DecRef(cpy_r_f);
    CPy_DecRef(cpy_r_r31);
    goto CPyL18;
CPyL194: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL16;
CPyL195: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL17;
CPyL196: ;
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    goto CPyL24;
CPyL197: ;
    CPy_DecRef(cpy_r_command);
    CPy_DecRef(cpy_r_server);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL22;
CPyL198: ;
    CPy_DecRef(cpy_r_command);
    CPy_DecRef(cpy_r_server);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    goto CPyL25;
CPyL199: ;
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r15);
    goto CPyL31;
CPyL200: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL34;
CPyL201: ;
    CPy_DECREF(cpy_r_r61);
    goto CPyL30;
CPyL202: ;
    CPy_DECREF(cpy_r_command);
    CPy_DECREF(cpy_r_server);
    CPy_XDECREF(cpy_r_r56.f0);
    CPy_XDECREF(cpy_r_r56.f1);
    CPy_XDECREF(cpy_r_r56.f2);
    goto CPyL33;
CPyL203: ;
    CPy_DECREF(cpy_r_command);
    CPy_DECREF(cpy_r_server);
    goto CPyL37;
CPyL204: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL40;
CPyL205: ;
    CPy_DecRef(cpy_r_data);
    goto CPyL124;
CPyL206: ;
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_debug_stdout);
    goto CPyL124;
CPyL207: ;
    CPy_DecRef(cpy_r_data);
    CPy_DecRef(cpy_r_debug_stdout);
    CPy_DecRef(cpy_r_debug_stderr);
    goto CPyL124;
CPyL208: ;
    CPy_DECREF(cpy_r_data);
    goto CPyL51;
CPyL209: ;
    CPy_DecRef(cpy_r_debug_stdout);
    CPy_DecRef(cpy_r_debug_stderr);
    goto CPyL124;
CPyL210: ;
    CPy_DECREF(cpy_r_command);
    goto CPyL54;
CPyL211: ;
    CPy_DECREF(cpy_r_data);
    goto CPyL56;
CPyL212: ;
    CPy_DECREF(cpy_r_command);
    goto CPyL59;
CPyL213: ;
    CPy_DecRef(cpy_r_data);
    goto CPyL64;
CPyL214: ;
    CPy_DecRef(cpy_r_r105);
    goto CPyL64;
CPyL215: ;
    CPy_DecRef(cpy_r_debug_stdout);
    CPy_DecRef(cpy_r_debug_stderr);
    goto CPyL96;
CPyL216: ;
    CPy_DecRef(cpy_r_debug_stdout);
    CPy_DecRef(cpy_r_debug_stderr);
    goto CPyL94;
CPyL217: ;
    CPy_DecRef(cpy_r_debug_stdout);
    CPy_DecRef(cpy_r_debug_stderr);
    CPy_DecRef(cpy_r_r117);
    goto CPyL96;
CPyL218: ;
    CPy_DecRef(cpy_r_debug_stdout);
    CPy_DecRef(cpy_r_debug_stderr);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r120);
    goto CPyL96;
CPyL219: ;
    CPy_DecRef(cpy_r_debug_stdout);
    CPy_DecRef(cpy_r_debug_stderr);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r121);
    goto CPyL96;
CPyL220: ;
    CPy_DecRef(cpy_r_r122);
    goto CPyL72;
CPyL221: ;
    CPy_DecRef(cpy_r_debug_stdout);
    CPy_DecRef(cpy_r_debug_stderr);
    CPy_DecRef(cpy_r_r120);
    goto CPyL96;
CPyL222: ;
    CPy_DecRef(cpy_r_debug_stdout);
    CPy_DecRef(cpy_r_debug_stderr);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r123);
    goto CPyL96;
CPyL223: ;
    CPy_DecRef(cpy_r_debug_stdout);
    CPy_DecRef(cpy_r_debug_stderr);
    CPy_DecRef(cpy_r_resp);
    goto CPyL96;
CPyL224: ;
    CPy_DecRef(cpy_r_debug_stderr);
    CPy_DecRef(cpy_r_resp);
    goto CPyL96;
CPyL225: ;
    CPy_DecRef(cpy_r_resp);
    goto CPyL96;
CPyL226: ;
    CPy_DecRef(cpy_r_command);
    CPy_DecRef(cpy_r_server);
    CPy_DecRef(cpy_r_r108.f0);
    CPy_DecRef(cpy_r_r108.f1);
    CPy_DecRef(cpy_r_r108.f2);
    goto CPyL93;
CPyL227: ;
    CPy_DecRef(cpy_r_command);
    CPy_DecRef(cpy_r_server);
    CPy_DecRef(cpy_r_r108.f0);
    CPy_DecRef(cpy_r_r108.f1);
    CPy_DecRef(cpy_r_r108.f2);
    goto CPyL95;
CPyL228: ;
    CPy_DecRef(cpy_r_command);
    CPy_DecRef(cpy_r_server);
    goto CPyL97;
CPyL229: ;
    CPy_DecRef(cpy_r_debug_stdout);
    CPy_DecRef(cpy_r_debug_stderr);
    CPy_DecRef(cpy_r_resp);
    goto CPyL124;
CPyL230: ;
    CPy_DecRef(cpy_r_debug_stderr);
    CPy_DecRef(cpy_r_resp);
    goto CPyL124;
CPyL231: ;
    CPy_DecRef(cpy_r_resp);
    goto CPyL124;
CPyL232: ;
    CPy_DecRef(cpy_r_resp);
    goto CPyL111;
CPyL233: ;
    CPy_DecRef(cpy_r_command);
    CPy_DecRef(cpy_r_server);
    CPy_DecRef(cpy_r_r192.f0);
    CPy_DecRef(cpy_r_r192.f1);
    CPy_DecRef(cpy_r_r192.f2);
    goto CPyL114;
CPyL234: ;
    CPy_DecRef(cpy_r_command);
    CPy_DecRef(cpy_r_server);
    goto CPyL117;
CPyL235: ;
    CPy_DECREF(cpy_r_r210);
    goto CPyL132;
CPyL236: ;
    CPy_DecRef(cpy_r_command);
    CPy_DecRef(cpy_r_server);
    CPy_DecRef(cpy_r_r211.f0);
    CPy_DecRef(cpy_r_r211.f1);
    CPy_DecRef(cpy_r_r211.f2);
    goto CPyL128;
CPyL237: ;
    CPy_DecRef(cpy_r_command);
    CPy_DecRef(cpy_r_server);
    goto CPyL131;
CPyL238: ;
    CPy_DECREF(cpy_r_command);
    CPy_DECREF(cpy_r_server);
    CPy_XDECREF(cpy_r_r223.f0);
    CPy_XDECREF(cpy_r_r223.f1);
    CPy_XDECREF(cpy_r_r223.f2);
    goto CPyL138;
CPyL239: ;
    CPy_DECREF(cpy_r_command);
    CPy_DECREF(cpy_r_server);
    goto CPyL142;
CPyL240: ;
    CPy_DecRef(cpy_r_server);
    goto CPyL181;
CPyL241: ;
    CPy_DecRef(cpy_r_server);
    CPy_DecRef(cpy_r_r236);
    goto CPyL181;
CPyL242: ;
    CPy_DECREF(cpy_r_r242);
    goto CPyL150;
CPyL243: ;
    CPy_XDecRef(cpy_r_r229.f0);
    CPy_XDecRef(cpy_r_r229.f1);
    CPy_XDecRef(cpy_r_r229.f2);
    CPy_DecRef(cpy_r_r244.f0);
    CPy_DecRef(cpy_r_r244.f1);
    CPy_DecRef(cpy_r_r244.f2);
    goto CPyL155;
CPyL244: ;
    CPy_XDecRef(cpy_r_r229.f0);
    CPy_XDecRef(cpy_r_r229.f1);
    CPy_XDecRef(cpy_r_r229.f2);
    goto CPyL158;
CPyL245: ;
    CPy_DecRef(cpy_r_exc_info);
    goto CPyL181;
CPyL246: ;
    CPy_DECREF(cpy_r_exc_info);
    CPy_DECREF(cpy_r_r258);
    goto CPyL178;
CPyL247: ;
    CPy_DECREF(cpy_r_exc_info);
    goto CPyL178;
CPyL248: ;
    CPy_DecRef(cpy_r_exc_info);
    CPy_DecRef(cpy_r_r266);
    goto CPyL181;
CPyL249: ;
    CPy_DecRef(cpy_r_r272.f0);
    CPy_DecRef(cpy_r_r272.f1);
    CPy_DecRef(cpy_r_r272.f2);
    goto CPyL181;
CPyL250: ;
    CPy_DecRef(cpy_r_r272.f0);
    CPy_DecRef(cpy_r_r272.f1);
    CPy_DecRef(cpy_r_r272.f2);
    CPy_DecRef(cpy_r_r275);
    goto CPyL181;
CPyL251: ;
    CPy_DecRef(cpy_r_r275);
    CPy_DecRef(cpy_r_r276);
    goto CPyL181;
CPyL252: ;
    CPy_DECREF(cpy_r_r278);
    goto CPyL175;
CPyL253: ;
    CPy_DecRef(cpy_r_r275);
    goto CPyL181;
CPyL254: ;
    CPy_DecRef(cpy_r_r275);
    CPy_DecRef(cpy_r_r279);
    goto CPyL181;
CPyL255: ;
    CPy_DECREF(cpy_r_r281);
    goto CPyL178;
CPyL256: ;
    CPy_XDECREF(cpy_r_r229.f0);
    CPy_XDECREF(cpy_r_r229.f1);
    CPy_XDECREF(cpy_r_r229.f2);
    goto CPyL180;
}

PyObject *CPyPy_dmypy_server___Server___serve(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serve", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    char retval = CPyDef_dmypy_server___Server___serve(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "serve", 209, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___run_command(PyObject *cpy_r_self, PyObject *cpy_r_command, PyObject *cpy_r_data) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_method;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_ret;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    cpy_r_r0 = CPyStatics[1944]; /* 'cmd_' */
    cpy_r_r1 = PyUnicode_Concat(cpy_r_r0, cpy_r_command);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 272, CPyStatic_dmypy_server___globals);
        goto CPyL21;
    }
    cpy_r_key = cpy_r_r1;
    cpy_r_r2 = CPyStatics[1945]; /* '__class__' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_self, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 273, CPyStatic_dmypy_server___globals);
        goto CPyL22;
    }
    cpy_r_r4 = Py_None;
    cpy_r_r5 = CPyObject_GetAttr3(cpy_r_r3, cpy_r_key, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 273, CPyStatic_dmypy_server___globals);
        goto CPyL21;
    }
    cpy_r_method = cpy_r_r5;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_method == cpy_r_r6;
    if (cpy_r_r7) {
        goto CPyL23;
    } else
        goto CPyL7;
CPyL4: ;
    cpy_r_r8 = CPyStatics[401]; /* 'error' */
    cpy_r_r9 = CPyStatics[1946]; /* "Unrecognized command '" */
    cpy_r_r10 = CPyStatics[385]; /* "'" */
    cpy_r_r11 = CPyStr_Build(3, cpy_r_r9, cpy_r_command, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 275, CPyStatic_dmypy_server___globals);
        goto CPyL21;
    }
    cpy_r_r12 = CPyDict_Build(1, cpy_r_r8, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 275, CPyStatic_dmypy_server___globals);
        goto CPyL21;
    }
    return cpy_r_r12;
CPyL7: ;
    cpy_r_r13 = CPyStatics[10307]; /* frozenset({'check', 'recheck', 'run'}) */
    cpy_r_r14 = PySet_Contains(cpy_r_r13, cpy_r_command);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 277, CPyStatic_dmypy_server___globals);
        goto CPyL24;
    }
    cpy_r_r16 = cpy_r_r14;
    cpy_r_r17 = cpy_r_r16 ^ 1;
    if (!cpy_r_r17) goto CPyL11;
    cpy_r_r18 = CPyStatics[1750]; /* 'is_tty' */
    cpy_r_r19 = PyObject_DelItem(cpy_r_data, cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 279, CPyStatic_dmypy_server___globals);
        goto CPyL24;
    }
    cpy_r_r21 = CPyStatics[1751]; /* 'terminal_width' */
    cpy_r_r22 = PyObject_DelItem(cpy_r_data, cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 280, CPyStatic_dmypy_server___globals);
        goto CPyL24;
    }
CPyL11: ;
    cpy_r_r24 = PyDict_New();
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 281, CPyStatic_dmypy_server___globals);
        goto CPyL24;
    }
    cpy_r_r25 = CPyDict_UpdateInDisplay(cpy_r_r24, cpy_r_data);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 281, CPyStatic_dmypy_server___globals);
        goto CPyL25;
    }
    cpy_r_r27 = PyTuple_Pack(1, cpy_r_self);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 281, CPyStatic_dmypy_server___globals);
        goto CPyL25;
    }
    cpy_r_r28 = PyObject_Call(cpy_r_method, cpy_r_r27, cpy_r_r24);
    CPy_DECREF(cpy_r_method);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 281, CPyStatic_dmypy_server___globals);
        goto CPyL21;
    }
    cpy_r_ret = cpy_r_r28;
    cpy_r_r29 = (PyObject *)&PyDict_Type;
    cpy_r_r30 = PyObject_IsInstance(cpy_r_ret, cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 282, CPyStatic_dmypy_server___globals);
        goto CPyL26;
    }
    cpy_r_r32 = cpy_r_r30;
    if (cpy_r_r32) {
        goto CPyL19;
    } else
        goto CPyL27;
CPyL17: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 282, CPyStatic_dmypy_server___globals);
        goto CPyL21;
    }
    CPy_Unreachable();
CPyL19: ;
    if (likely(PyDict_Check(cpy_r_ret)))
        cpy_r_r34 = cpy_r_ret;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "run_command", 283, CPyStatic_dmypy_server___globals, "dict", cpy_r_ret);
        goto CPyL21;
    }
    return cpy_r_r34;
CPyL21: ;
    cpy_r_r35 = NULL;
    return cpy_r_r35;
CPyL22: ;
    CPy_DecRef(cpy_r_key);
    goto CPyL21;
CPyL23: ;
    CPy_DECREF(cpy_r_method);
    goto CPyL4;
CPyL24: ;
    CPy_DecRef(cpy_r_method);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_method);
    CPy_DecRef(cpy_r_r24);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_ret);
    goto CPyL21;
CPyL27: ;
    CPy_DECREF(cpy_r_ret);
    goto CPyL17;
}

PyObject *CPyPy_dmypy_server___Server___run_command(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"command", "data", 0};
    static CPyArg_Parser parser = {"OO:run_command", kwlist, 0};
    PyObject *obj_command;
    PyObject *obj_data;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_command, &obj_data)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_command;
    if (likely(PyUnicode_Check(obj_command)))
        arg_command = obj_command;
    else {
        CPy_TypeError("str", obj_command); 
        goto fail;
    }
    PyObject *arg_data;
    if (likely(PyDict_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("dict", obj_data); 
        goto fail;
    }
    PyObject *retval = CPyDef_dmypy_server___Server___run_command(arg_self, arg_command, arg_data);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "run_command", 270, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___cmd_status(PyObject *cpy_r_self, PyObject *cpy_r_fswatcher_dump_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_data;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    tuple_T3OOO cpy_r_r43;
    tuple_T3OOO cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    tuple_T3OOO cpy_r_r55;
    tuple_T3OOO cpy_r_r56;
    tuple_T3OOO cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject **cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    if (cpy_r_fswatcher_dump_file != NULL) goto CPyL48;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_fswatcher_dump_file = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 289, CPyStatic_dmypy_server___globals);
        goto CPyL49;
    }
    cpy_r_res = cpy_r_r1;
    cpy_r_r2 = CPyDef_dmypy_server___get_meminfo();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 290, CPyStatic_dmypy_server___globals);
        goto CPyL50;
    }
    cpy_r_r3 = CPyDict_Update(cpy_r_res, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 290, CPyStatic_dmypy_server___globals);
        goto CPyL50;
    }
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_fswatcher_dump_file != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL51;
    CPy_INCREF(cpy_r_fswatcher_dump_file);
    if (likely(cpy_r_fswatcher_dump_file != Py_None))
        cpy_r_r7 = cpy_r_fswatcher_dump_file;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_status", 287, CPyStatic_dmypy_server___globals, "str", cpy_r_fswatcher_dump_file);
        goto CPyL50;
    }
    cpy_r_r8 = CPyStr_IsTrue(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r8) goto CPyL51;
    cpy_r_r9 = CPyStatics[1947]; /* 'fswatcher' */
    cpy_r_r10 = PyObject_HasAttr(cpy_r_self, cpy_r_r9);
    if (!cpy_r_r10) goto CPyL12;
    cpy_r_r11 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fswatcher;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "cmd_status", "Server", "fswatcher", 292, CPyStatic_dmypy_server___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r11);
CPyL10: ;
    cpy_r_r12 = CPyDef_fswatcher___FileSystemWatcher___dump_file_data(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 292, CPyStatic_dmypy_server___globals);
        goto CPyL50;
    }
    cpy_r_r13 = cpy_r_r12;
    goto CPyL14;
CPyL12: ;
    cpy_r_r14 = PyDict_New();
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 292, CPyStatic_dmypy_server___globals);
        goto CPyL50;
    }
    cpy_r_r13 = cpy_r_r14;
CPyL14: ;
    cpy_r_data = cpy_r_r13;
    cpy_r_r15 = CPyModule_json;
    cpy_r_r16 = CPyStatics[243]; /* 'dumps' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 294, CPyStatic_dmypy_server___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_data};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 294, CPyStatic_dmypy_server___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_data);
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_status", 294, CPyStatic_dmypy_server___globals, "str", cpy_r_r20);
        goto CPyL50;
    }
    cpy_r_s = cpy_r_r21;
    if (likely(cpy_r_fswatcher_dump_file != Py_None))
        cpy_r_r22 = cpy_r_fswatcher_dump_file;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_status", 295, CPyStatic_dmypy_server___globals, "str", cpy_r_fswatcher_dump_file);
        goto CPyL53;
    }
    cpy_r_r23 = CPyStatics[448]; /* 'w' */
    cpy_r_r24 = CPyModule_builtins;
    cpy_r_r25 = CPyStatics[199]; /* 'open' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 295, CPyStatic_dmypy_server___globals);
        goto CPyL54;
    }
    PyObject *cpy_r_r27[2] = {cpy_r_r22, cpy_r_r23};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 2, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 295, CPyStatic_dmypy_server___globals);
        goto CPyL54;
    }
    CPy_DECREF(cpy_r_r22);
    cpy_r_r30 = PyObject_Type(cpy_r_r29);
    cpy_r_r31 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 295, CPyStatic_dmypy_server___globals);
        goto CPyL55;
    }
    cpy_r_r33 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r33);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 295, CPyStatic_dmypy_server___globals);
        goto CPyL56;
    }
    PyObject *cpy_r_r35[1] = {cpy_r_r29};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = _PyObject_Vectorcall(cpy_r_r34, cpy_r_r36, 1, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 295, CPyStatic_dmypy_server___globals);
        goto CPyL56;
    }
    cpy_r_r38 = 1;
    cpy_r_f = cpy_r_r37;
    cpy_r_r39 = CPyStatics[286]; /* 'write' */
    PyObject *cpy_r_r40[2] = {cpy_r_f, cpy_r_s};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = PyObject_VectorcallMethod(cpy_r_r39, cpy_r_r41, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 296, CPyStatic_dmypy_server___globals);
        goto CPyL57;
    } else
        goto CPyL58;
CPyL25: ;
    CPy_DECREF(cpy_r_f);
    CPy_DECREF(cpy_r_s);
    goto CPyL34;
CPyL26: ;
    cpy_r_r43 = CPy_CatchError();
    cpy_r_r38 = 0;
    cpy_r_r44 = CPy_GetExcInfo();
    cpy_r_r45 = cpy_r_r44.f0;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = cpy_r_r44.f1;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = cpy_r_r44.f2;
    CPy_INCREF(cpy_r_r47);
    CPy_DecRef(cpy_r_r44.f0);
    CPy_DecRef(cpy_r_r44.f1);
    CPy_DecRef(cpy_r_r44.f2);
    PyObject *cpy_r_r48[4] = {cpy_r_r29, cpy_r_r45, cpy_r_r46, cpy_r_r47};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r49, 4, 0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 295, CPyStatic_dmypy_server___globals);
        goto CPyL59;
    }
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    cpy_r_r51 = PyObject_IsTrue(cpy_r_r50);
    CPy_DecRef(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 295, CPyStatic_dmypy_server___globals);
        goto CPyL32;
    }
    cpy_r_r53 = cpy_r_r51;
    if (cpy_r_r53) goto CPyL31;
    CPy_Reraise();
    if (!0) {
        goto CPyL32;
    } else
        goto CPyL60;
CPyL30: ;
    CPy_Unreachable();
CPyL31: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL34;
CPyL32: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    cpy_r_r54 = CPy_KeepPropagating();
    if (!cpy_r_r54) {
        goto CPyL35;
    } else
        goto CPyL61;
CPyL33: ;
    CPy_Unreachable();
CPyL34: ;
    tuple_T3OOO __tmp1947 = { NULL, NULL, NULL };
    cpy_r_r55 = __tmp1947;
    cpy_r_r56 = cpy_r_r55;
    goto CPyL36;
CPyL35: ;
    cpy_r_r57 = CPy_CatchError();
    cpy_r_r56 = cpy_r_r57;
CPyL36: ;
    if (!cpy_r_r38) goto CPyL62;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r59[4] = {cpy_r_r29, cpy_r_r58, cpy_r_r58, cpy_r_r58};
    cpy_r_r60 = (PyObject **)&cpy_r_r59;
    cpy_r_r61 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r60, 4, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 295, CPyStatic_dmypy_server___globals);
        goto CPyL63;
    } else
        goto CPyL64;
CPyL38: ;
    CPy_DECREF(cpy_r_r29);
CPyL39: ;
    if (cpy_r_r56.f0 == NULL) {
        goto CPyL46;
    } else
        goto CPyL65;
CPyL40: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL42;
    } else
        goto CPyL66;
CPyL41: ;
    CPy_Unreachable();
CPyL42: ;
    if (cpy_r_r56.f0 == NULL) goto CPyL44;
    CPy_RestoreExcInfo(cpy_r_r56);
    CPy_XDECREF(cpy_r_r56.f0);
    CPy_XDECREF(cpy_r_r56.f1);
    CPy_XDECREF(cpy_r_r56.f2);
CPyL44: ;
    cpy_r_r62 = CPy_KeepPropagating();
    if (!cpy_r_r62) goto CPyL47;
    CPy_Unreachable();
CPyL46: ;
    return cpy_r_res;
CPyL47: ;
    cpy_r_r63 = NULL;
    return cpy_r_r63;
CPyL48: ;
    CPy_INCREF(cpy_r_fswatcher_dump_file);
    goto CPyL2;
CPyL49: ;
    CPy_DecRef(cpy_r_fswatcher_dump_file);
    goto CPyL47;
CPyL50: ;
    CPy_DecRef(cpy_r_fswatcher_dump_file);
    CPy_DecRef(cpy_r_res);
    goto CPyL47;
CPyL51: ;
    CPy_DECREF(cpy_r_fswatcher_dump_file);
    goto CPyL46;
CPyL52: ;
    CPy_DecRef(cpy_r_fswatcher_dump_file);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_data);
    goto CPyL47;
CPyL53: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_s);
    goto CPyL47;
CPyL54: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r22);
    goto CPyL47;
CPyL55: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    goto CPyL47;
CPyL56: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    goto CPyL47;
CPyL57: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_f);
    goto CPyL26;
CPyL58: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL25;
CPyL59: ;
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    goto CPyL32;
CPyL60: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL30;
CPyL61: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    goto CPyL33;
CPyL62: ;
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    goto CPyL39;
CPyL63: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r29);
    goto CPyL42;
CPyL64: ;
    CPy_DECREF(cpy_r_r61);
    goto CPyL38;
CPyL65: ;
    CPy_DECREF(cpy_r_res);
    goto CPyL40;
CPyL66: ;
    CPy_XDECREF(cpy_r_r56.f0);
    CPy_XDECREF(cpy_r_r56.f1);
    CPy_XDECREF(cpy_r_r56.f2);
    goto CPyL41;
}

PyObject *CPyPy_dmypy_server___Server___cmd_status(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fswatcher_dump_file", 0};
    static CPyArg_Parser parser = {"|O:cmd_status", kwlist, 0};
    PyObject *obj_fswatcher_dump_file = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fswatcher_dump_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_fswatcher_dump_file;
    if (obj_fswatcher_dump_file == NULL) {
        arg_fswatcher_dump_file = NULL;
        goto __LL1948;
    }
    if (PyUnicode_Check(obj_fswatcher_dump_file))
        arg_fswatcher_dump_file = obj_fswatcher_dump_file;
    else {
        arg_fswatcher_dump_file = NULL;
    }
    if (arg_fswatcher_dump_file != NULL) goto __LL1948;
    if (obj_fswatcher_dump_file == Py_None)
        arg_fswatcher_dump_file = obj_fswatcher_dump_file;
    else {
        arg_fswatcher_dump_file = NULL;
    }
    if (arg_fswatcher_dump_file != NULL) goto __LL1948;
    CPy_TypeError("str or None", obj_fswatcher_dump_file); 
    goto fail;
__LL1948: ;
    PyObject *retval = CPyDef_dmypy_server___Server___cmd_status(arg_self, arg_fswatcher_dump_file);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "cmd_status", 287, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___cmd_stop(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_status_file;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyModule_os;
    cpy_r_r2 = CPyStatics[1936]; /* 'unlink' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_stop", 305, CPyStatic_dmypy_server___globals);
        goto CPyL5;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_r0};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_stop", 305, CPyStatic_dmypy_server___globals);
        goto CPyL5;
    } else
        goto CPyL6;
CPyL2: ;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r7 = PyDict_New();
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_stop", 306, CPyStatic_dmypy_server___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
CPyL6: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL2;
}

PyObject *CPyPy_dmypy_server___Server___cmd_stop(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":cmd_stop", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_dmypy_server___Server___cmd_stop(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "cmd_stop", 299, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___cmd_run(PyObject *cpy_r_self, PyObject *cpy_r_version, PyObject *cpy_r_args, char cpy_r_export_types, char cpy_r_is_tty, CPyTagged cpy_r_terminal_width) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_options;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_sources;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_stderr;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_stdout;
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
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject **cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    CPyPtr cpy_r_r43;
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
    tuple_T2OO cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    tuple_T3OOO cpy_r_r58;
    tuple_T3OOO cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    tuple_T3OOO cpy_r_r70;
    tuple_T3OOO cpy_r_r71;
    tuple_T3OOO cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    tuple_T3OOO cpy_r_r78;
    tuple_T3OOO cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    tuple_T3OOO cpy_r_r90;
    tuple_T3OOO cpy_r_r91;
    tuple_T3OOO cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject **cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_manager;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_start_plugins_snapshot;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    tuple_T0 cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    tuple_T2OO cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r__;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_current_plugins_snapshot;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    tuple_T3OOO cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject **cpy_r_r159;
    PyObject *cpy_r_r160;
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
    char cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    cpy_r_r0 = NULL;
    cpy_r_options = cpy_r_r0;
    cpy_r_r1 = NULL;
    cpy_r_sources = cpy_r_r1;
    cpy_r_r2 = CPyModule_io;
    cpy_r_r3 = CPyStatics[4]; /* 'StringIO' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 317, CPyStatic_dmypy_server___globals);
        goto CPyL117;
    }
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_r4, 0, 0, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 317, CPyStatic_dmypy_server___globals);
        goto CPyL117;
    }
    cpy_r_stderr = cpy_r_r5;
    cpy_r_r6 = CPyModule_io;
    cpy_r_r7 = CPyStatics[4]; /* 'StringIO' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 318, CPyStatic_dmypy_server___globals);
        goto CPyL118;
    }
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r8, 0, 0, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 318, CPyStatic_dmypy_server___globals);
        goto CPyL118;
    }
    cpy_r_stdout = cpy_r_r9;
    cpy_r_r10 = CPyStatic_dmypy_server___globals;
    cpy_r_r11 = CPyStatics[1948]; /* 'redirect_stderr' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 322, CPyStatic_dmypy_server___globals);
        goto CPyL119;
    }
    PyObject *cpy_r_r13[1] = {cpy_r_stderr};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 322, CPyStatic_dmypy_server___globals);
        goto CPyL119;
    }
    cpy_r_r16 = PyObject_Type(cpy_r_r15);
    cpy_r_r17 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 322, CPyStatic_dmypy_server___globals);
        goto CPyL120;
    }
    cpy_r_r19 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r19);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 322, CPyStatic_dmypy_server___globals);
        goto CPyL121;
    }
    PyObject *cpy_r_r21[1] = {cpy_r_r15};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 1, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 322, CPyStatic_dmypy_server___globals);
        goto CPyL121;
    } else
        goto CPyL122;
CPyL10: ;
    cpy_r_r24 = 1;
    cpy_r_r25 = CPyStatic_dmypy_server___globals;
    cpy_r_r26 = CPyStatics[1949]; /* 'redirect_stdout' */
    cpy_r_r27 = CPyDict_GetItem(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 323, CPyStatic_dmypy_server___globals);
        goto CPyL45;
    }
    PyObject *cpy_r_r28[1] = {cpy_r_stdout};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = _PyObject_Vectorcall(cpy_r_r27, cpy_r_r29, 1, 0);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 323, CPyStatic_dmypy_server___globals);
        goto CPyL45;
    }
    cpy_r_r31 = PyObject_Type(cpy_r_r30);
    cpy_r_r32 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 323, CPyStatic_dmypy_server___globals);
        goto CPyL123;
    }
    cpy_r_r34 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r34);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 323, CPyStatic_dmypy_server___globals);
        goto CPyL124;
    }
    PyObject *cpy_r_r36[1] = {cpy_r_r30};
    cpy_r_r37 = (PyObject **)&cpy_r_r36;
    cpy_r_r38 = _PyObject_Vectorcall(cpy_r_r35, cpy_r_r37, 1, 0);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 323, CPyStatic_dmypy_server___globals);
        goto CPyL124;
    } else
        goto CPyL125;
CPyL16: ;
    cpy_r_r39 = 1;
    cpy_r_r40 = CPyStatics[1930]; /* '-i' */
    cpy_r_r41 = PyList_New(1);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 325, CPyStatic_dmypy_server___globals);
        goto CPyL25;
    }
    cpy_r_r42 = (CPyPtr)&((PyListObject *)cpy_r_r41)->ob_item;
    cpy_r_r43 = *(CPyPtr *)cpy_r_r42;
    CPy_INCREF(cpy_r_r40);
    *(PyObject * *)cpy_r_r43 = cpy_r_r40;
    cpy_r_r44 = PySequence_List(cpy_r_args);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 325, CPyStatic_dmypy_server___globals);
        goto CPyL126;
    }
    cpy_r_r45 = PyNumber_Add(cpy_r_r41, cpy_r_r44);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 325, CPyStatic_dmypy_server___globals);
        goto CPyL25;
    }
    if (likely(PyList_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_run", 325, CPyStatic_dmypy_server___globals, "list", cpy_r_r45);
        goto CPyL25;
    }
    cpy_r_r47 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = CPyStatics[1950]; /* 'mypy-daemon' */
    cpy_r_r49 = CPyModule_argparse;
    cpy_r_r50 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r51 = CPyObject_GetAttr(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 330, CPyStatic_dmypy_server___globals);
        goto CPyL127;
    }
    cpy_r_r52 = NULL;
    cpy_r_r53 = NULL;
    if (likely(PyUnicode_Check(cpy_r_r51)))
        cpy_r_r54 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_run", 324, CPyStatic_dmypy_server___globals, "str", cpy_r_r51);
        goto CPyL127;
    }
    cpy_r_r55 = CPyDef_mypy___main___process_options(cpy_r_r46, cpy_r_r52, cpy_r_r53, 1, 1, cpy_r_r47, cpy_r_r48, cpy_r_r54);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 324, CPyStatic_dmypy_server___globals);
        goto CPyL25;
    } else
        goto CPyL128;
CPyL24: ;
    cpy_r_r56 = cpy_r_r55.f0;
    CPy_INCREF(cpy_r_r56);
    cpy_r_sources = cpy_r_r56;
    cpy_r_r57 = cpy_r_r55.f1;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r55.f0);
    CPy_DECREF(cpy_r_r55.f1);
    cpy_r_options = cpy_r_r57;
    goto CPyL33;
CPyL25: ;
    cpy_r_r58 = CPy_CatchError();
    cpy_r_r39 = 0;
    cpy_r_r59 = CPy_GetExcInfo();
    cpy_r_r60 = cpy_r_r59.f0;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = cpy_r_r59.f1;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = cpy_r_r59.f2;
    CPy_INCREF(cpy_r_r62);
    CPy_DecRef(cpy_r_r59.f0);
    CPy_DecRef(cpy_r_r59.f1);
    CPy_DecRef(cpy_r_r59.f2);
    PyObject *cpy_r_r63[4] = {cpy_r_r30, cpy_r_r60, cpy_r_r61, cpy_r_r62};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = _PyObject_Vectorcall(cpy_r_r33, cpy_r_r64, 4, 0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 323, CPyStatic_dmypy_server___globals);
        goto CPyL129;
    }
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    cpy_r_r66 = PyObject_IsTrue(cpy_r_r65);
    CPy_DecRef(cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 323, CPyStatic_dmypy_server___globals);
        goto CPyL31;
    }
    cpy_r_r68 = cpy_r_r66;
    if (cpy_r_r68) goto CPyL30;
    CPy_Reraise();
    if (!0) {
        goto CPyL31;
    } else
        goto CPyL130;
CPyL29: ;
    CPy_Unreachable();
CPyL30: ;
    CPy_RestoreExcInfo(cpy_r_r58);
    CPy_DecRef(cpy_r_r58.f0);
    CPy_DecRef(cpy_r_r58.f1);
    CPy_DecRef(cpy_r_r58.f2);
    goto CPyL33;
CPyL31: ;
    CPy_RestoreExcInfo(cpy_r_r58);
    CPy_DecRef(cpy_r_r58.f0);
    CPy_DecRef(cpy_r_r58.f1);
    CPy_DecRef(cpy_r_r58.f2);
    cpy_r_r69 = CPy_KeepPropagating();
    if (!cpy_r_r69) {
        goto CPyL34;
    } else
        goto CPyL131;
CPyL32: ;
    CPy_Unreachable();
CPyL33: ;
    tuple_T3OOO __tmp1949 = { NULL, NULL, NULL };
    cpy_r_r70 = __tmp1949;
    cpy_r_r71 = cpy_r_r70;
    goto CPyL35;
CPyL34: ;
    cpy_r_r72 = CPy_CatchError();
    cpy_r_r71 = cpy_r_r72;
CPyL35: ;
    if (!cpy_r_r39) goto CPyL132;
    cpy_r_r73 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r74[4] = {cpy_r_r30, cpy_r_r73, cpy_r_r73, cpy_r_r73};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = _PyObject_Vectorcall(cpy_r_r33, cpy_r_r75, 4, 0);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 323, CPyStatic_dmypy_server___globals);
        goto CPyL133;
    } else
        goto CPyL134;
CPyL37: ;
    CPy_DECREF(cpy_r_r30);
CPyL38: ;
    if (cpy_r_r71.f0 == NULL) goto CPyL53;
    CPy_Reraise();
    if (!0) {
        goto CPyL41;
    } else
        goto CPyL135;
CPyL40: ;
    CPy_Unreachable();
CPyL41: ;
    if (cpy_r_r71.f0 == NULL) goto CPyL43;
    CPy_RestoreExcInfo(cpy_r_r71);
    CPy_XDECREF(cpy_r_r71.f0);
    CPy_XDECREF(cpy_r_r71.f1);
    CPy_XDECREF(cpy_r_r71.f2);
CPyL43: ;
    cpy_r_r77 = CPy_KeepPropagating();
    if (!cpy_r_r77) {
        goto CPyL45;
    } else
        goto CPyL136;
CPyL44: ;
    CPy_Unreachable();
CPyL45: ;
    cpy_r_r78 = CPy_CatchError();
    cpy_r_r24 = 0;
    cpy_r_r79 = CPy_GetExcInfo();
    cpy_r_r80 = cpy_r_r79.f0;
    CPy_INCREF(cpy_r_r80);
    cpy_r_r81 = cpy_r_r79.f1;
    CPy_INCREF(cpy_r_r81);
    cpy_r_r82 = cpy_r_r79.f2;
    CPy_INCREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r79.f0);
    CPy_DECREF(cpy_r_r79.f1);
    CPy_DECREF(cpy_r_r79.f2);
    PyObject *cpy_r_r83[4] = {cpy_r_r15, cpy_r_r80, cpy_r_r81, cpy_r_r82};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r84, 4, 0);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 322, CPyStatic_dmypy_server___globals);
        goto CPyL137;
    }
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r86 = PyObject_IsTrue(cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 322, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r88 = cpy_r_r86;
    if (cpy_r_r88) goto CPyL50;
    CPy_Reraise();
    if (!0) {
        goto CPyL51;
    } else
        goto CPyL138;
CPyL49: ;
    CPy_Unreachable();
CPyL50: ;
    CPy_RestoreExcInfo(cpy_r_r78);
    CPy_DECREF(cpy_r_r78.f0);
    CPy_DECREF(cpy_r_r78.f1);
    CPy_DECREF(cpy_r_r78.f2);
    goto CPyL53;
CPyL51: ;
    CPy_RestoreExcInfo(cpy_r_r78);
    CPy_DECREF(cpy_r_r78.f0);
    CPy_DECREF(cpy_r_r78.f1);
    CPy_DECREF(cpy_r_r78.f2);
    cpy_r_r89 = CPy_KeepPropagating();
    if (!cpy_r_r89) {
        goto CPyL54;
    } else
        goto CPyL139;
CPyL52: ;
    CPy_Unreachable();
CPyL53: ;
    tuple_T3OOO __tmp1950 = { NULL, NULL, NULL };
    cpy_r_r90 = __tmp1950;
    cpy_r_r91 = cpy_r_r90;
    goto CPyL55;
CPyL54: ;
    cpy_r_r92 = CPy_CatchError();
    cpy_r_r91 = cpy_r_r92;
CPyL55: ;
    if (!cpy_r_r24) goto CPyL140;
    cpy_r_r93 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r94[4] = {cpy_r_r15, cpy_r_r93, cpy_r_r93, cpy_r_r93};
    cpy_r_r95 = (PyObject **)&cpy_r_r94;
    cpy_r_r96 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r95, 4, 0);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 322, CPyStatic_dmypy_server___globals);
        goto CPyL141;
    } else
        goto CPyL142;
CPyL57: ;
    CPy_DECREF(cpy_r_r15);
CPyL58: ;
    if (cpy_r_r91.f0 == NULL) {
        goto CPyL65;
    } else
        goto CPyL143;
CPyL59: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL61;
    } else
        goto CPyL144;
CPyL60: ;
    CPy_Unreachable();
CPyL61: ;
    if (cpy_r_r91.f0 == NULL) goto CPyL63;
    CPy_RestoreExcInfo(cpy_r_r91);
    CPy_XDECREF(cpy_r_r91.f0);
    CPy_XDECREF(cpy_r_r91.f1);
    CPy_XDECREF(cpy_r_r91.f2);
CPyL63: ;
    cpy_r_r97 = CPy_KeepPropagating();
    if (!cpy_r_r97) {
        goto CPyL92;
    } else
        goto CPyL145;
CPyL64: ;
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r98 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options_snapshot;
    CPy_INCREF(cpy_r_r98);
    if (cpy_r_options == NULL) {
        goto CPyL146;
    } else
        goto CPyL68;
CPyL66: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"options\" referenced before assignment");
    cpy_r_r99 = 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 333, CPyStatic_dmypy_server___globals);
        goto CPyL92;
    } else
        goto CPyL147;
CPyL67: ;
    CPy_Unreachable();
CPyL68: ;
    cpy_r_r100 = CPyDef_mypy___options___Options___compare_stable(cpy_r_options, cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r100 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 333, CPyStatic_dmypy_server___globals);
        goto CPyL119;
    }
    if (cpy_r_r100) {
        goto CPyL72;
    } else
        goto CPyL148;
CPyL70: ;
    cpy_r_r101 = CPyStatics[1696]; /* 'restart' */
    cpy_r_r102 = CPyStatics[1951]; /* 'configuration changed' */
    cpy_r_r103 = CPyDict_Build(1, cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 334, CPyStatic_dmypy_server___globals);
        goto CPyL92;
    } else
        goto CPyL149;
CPyL71: ;
    return cpy_r_r103;
CPyL72: ;
    cpy_r_r104 = CPyStatic_dmypy_server___globals;
    cpy_r_r105 = CPyStatics[145]; /* '__version__' */
    cpy_r_r106 = CPyDict_GetItem(cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 335, CPyStatic_dmypy_server___globals);
        goto CPyL119;
    }
    if (likely(PyUnicode_Check(cpy_r_r106)))
        cpy_r_r107 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_run", 335, CPyStatic_dmypy_server___globals, "str", cpy_r_r106);
        goto CPyL119;
    }
    cpy_r_r108 = PyUnicode_Compare(cpy_r_r107, cpy_r_version);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r109 = cpy_r_r108 == -1;
    if (!cpy_r_r109) goto CPyL77;
    cpy_r_r110 = PyErr_Occurred();
    cpy_r_r111 = cpy_r_r110 != NULL;
    if (!cpy_r_r111) goto CPyL77;
    cpy_r_r112 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 335, CPyStatic_dmypy_server___globals);
        goto CPyL119;
    }
CPyL77: ;
    cpy_r_r113 = cpy_r_r108 != 0;
    if (cpy_r_r113) {
        goto CPyL150;
    } else
        goto CPyL80;
CPyL78: ;
    cpy_r_r114 = CPyStatics[1696]; /* 'restart' */
    cpy_r_r115 = CPyStatics[1952]; /* 'mypy version changed' */
    cpy_r_r116 = CPyDict_Build(1, cpy_r_r114, cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 336, CPyStatic_dmypy_server___globals);
        goto CPyL92;
    } else
        goto CPyL151;
CPyL79: ;
    return cpy_r_r116;
CPyL80: ;
    cpy_r_r117 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    CPy_INCREF(cpy_r_r117);
    cpy_r_r118 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r119 = cpy_r_r117 != cpy_r_r118;
    CPy_DECREF(cpy_r_r117);
    if (!cpy_r_r119) goto CPyL152;
    cpy_r_r120 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    if (likely(cpy_r_r120 != Py_None))
        cpy_r_r121 = cpy_r_r120;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_run", 338, CPyStatic_dmypy_server___globals, "mypy.server.update.FineGrainedBuildManager", cpy_r_r120);
        goto CPyL119;
    }
    cpy_r_r122 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r121)->_manager;
    CPy_INCREF(cpy_r_r122);
    cpy_r_manager = cpy_r_r122;
    cpy_r_r123 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_plugins_snapshot;
    CPy_INCREF(cpy_r_r123);
    cpy_r_start_plugins_snapshot = cpy_r_r123;
    cpy_r_r124 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_errors;
    CPy_INCREF(cpy_r_r124);
    CPy_DECREF(cpy_r_manager);
    cpy_r_r125 = CPyModule_sys;
    cpy_r_r126 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r127 = CPyObject_GetAttr(cpy_r_r125, cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 341, CPyStatic_dmypy_server___globals);
        goto CPyL153;
    }
    cpy_r_r128.empty_struct_error_flag = 0;
    cpy_r_r129 = PyTuple_New(0);
    if (unlikely(cpy_r_r129 == NULL))
        CPyError_OutOfMemory();
    if (cpy_r_options == NULL) {
        goto CPyL154;
    } else
        goto CPyL86;
CPyL84: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"options\" referenced before assignment");
    cpy_r_r130 = 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 340, CPyStatic_dmypy_server___globals);
        goto CPyL92;
    } else
        goto CPyL155;
CPyL85: ;
    CPy_Unreachable();
CPyL86: ;
    cpy_r_r131 = CPyDef_mypy___build___load_plugins(cpy_r_options, cpy_r_r124, cpy_r_r127, cpy_r_r129);
    CPy_XDECREF(cpy_r_options);
    CPy_DECREF(cpy_r_r124);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r131.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 340, CPyStatic_dmypy_server___globals);
        goto CPyL156;
    }
    cpy_r_r132 = cpy_r_r131.f0;
    CPy_INCREF(cpy_r_r132);
    cpy_r__ = cpy_r_r132;
    CPy_DECREF(cpy_r__);
    cpy_r_r133 = cpy_r_r131.f1;
    CPy_INCREF(cpy_r_r133);
    CPy_DECREF(cpy_r_r131.f0);
    CPy_DECREF(cpy_r_r131.f1);
    cpy_r_current_plugins_snapshot = cpy_r_r133;
    cpy_r_r134 = PyObject_RichCompare(cpy_r_current_plugins_snapshot, cpy_r_start_plugins_snapshot, 3);
    CPy_DECREF(cpy_r_current_plugins_snapshot);
    CPy_DECREF(cpy_r_start_plugins_snapshot);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 343, CPyStatic_dmypy_server___globals);
        goto CPyL157;
    }
    if (unlikely(!PyBool_Check(cpy_r_r134))) {
        CPy_TypeError("bool", cpy_r_r134); cpy_r_r135 = 2;
    } else
        cpy_r_r135 = cpy_r_r134 == Py_True;
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r135 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 343, CPyStatic_dmypy_server___globals);
        goto CPyL157;
    }
    if (cpy_r_r135) {
        goto CPyL158;
    } else
        goto CPyL159;
CPyL90: ;
    cpy_r_r136 = CPyStatics[1696]; /* 'restart' */
    cpy_r_r137 = CPyStatics[1953]; /* 'plugins changed' */
    cpy_r_r138 = CPyDict_Build(1, cpy_r_r136, cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 344, CPyStatic_dmypy_server___globals);
        goto CPyL92;
    } else
        goto CPyL160;
CPyL91: ;
    return cpy_r_r138;
CPyL92: ;
    cpy_r_r139 = CPy_CatchError();
    cpy_r_r140 = (PyObject *)CPyType_find_sources___InvalidSourceList;
    cpy_r_r141 = CPy_ExceptionMatches(cpy_r_r140);
    if (cpy_r_r141) {
        goto CPyL161;
    } else
        goto CPyL97;
CPyL93: ;
    cpy_r_r142 = CPy_GetExcValue();
    if (likely(Py_TYPE(cpy_r_r142) == CPyType_find_sources___InvalidSourceList))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_run", 345, CPyStatic_dmypy_server___globals, "mypy.find_sources.InvalidSourceList", cpy_r_r142);
        goto CPyL109;
    }
    cpy_r_err = cpy_r_r143;
    cpy_r_r144 = CPyStatics[1730]; /* 'out' */
    cpy_r_r145 = CPyStatics[163]; /* '' */
    cpy_r_r146 = CPyStatics[1731]; /* 'err' */
    cpy_r_r147 = PyObject_Str(cpy_r_err);
    CPy_DECREF(cpy_r_err);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 346, CPyStatic_dmypy_server___globals);
        goto CPyL109;
    }
    cpy_r_r148 = CPyStatics[1701]; /* 'status' */
    cpy_r_r149 = CPyStatics[9018]; /* 2 */
    cpy_r_r150 = CPyDict_Build(3, cpy_r_r144, cpy_r_r145, cpy_r_r146, cpy_r_r147, cpy_r_r148, cpy_r_r149);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 346, CPyStatic_dmypy_server___globals);
        goto CPyL109;
    }
    CPy_RestoreExcInfo(cpy_r_r139);
    CPy_DECREF(cpy_r_r139.f0);
    CPy_DECREF(cpy_r_r139.f1);
    CPy_DECREF(cpy_r_r139.f2);
    return cpy_r_r150;
CPyL97: ;
    cpy_r_r151 = CPyModule_builtins;
    cpy_r_r152 = CPyStatics[5]; /* 'SystemExit' */
    cpy_r_r153 = CPyObject_GetAttr(cpy_r_r151, cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 347, CPyStatic_dmypy_server___globals);
        goto CPyL162;
    }
    cpy_r_r154 = CPy_ExceptionMatches(cpy_r_r153);
    CPy_DECREF(cpy_r_r153);
    if (!cpy_r_r154) goto CPyL163;
    cpy_r_r155 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r155;
    cpy_r_r156 = CPyStatics[1730]; /* 'out' */
    cpy_r_r157 = CPyStatics[7]; /* 'getvalue' */
    PyObject *cpy_r_r158[1] = {cpy_r_stdout};
    cpy_r_r159 = (PyObject **)&cpy_r_r158;
    cpy_r_r160 = PyObject_VectorcallMethod(cpy_r_r157, cpy_r_r159, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 348, CPyStatic_dmypy_server___globals);
        goto CPyL164;
    }
    CPy_DECREF(cpy_r_stdout);
    if (likely(PyUnicode_Check(cpy_r_r160)))
        cpy_r_r161 = cpy_r_r160;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_run", 348, CPyStatic_dmypy_server___globals, "str", cpy_r_r160);
        goto CPyL165;
    }
    cpy_r_r162 = CPyStatics[1731]; /* 'err' */
    cpy_r_r163 = CPyStatics[7]; /* 'getvalue' */
    PyObject *cpy_r_r164[1] = {cpy_r_stderr};
    cpy_r_r165 = (PyObject **)&cpy_r_r164;
    cpy_r_r166 = PyObject_VectorcallMethod(cpy_r_r163, cpy_r_r165, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 348, CPyStatic_dmypy_server___globals);
        goto CPyL166;
    }
    CPy_DECREF(cpy_r_stderr);
    if (likely(PyUnicode_Check(cpy_r_r166)))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_run", 348, CPyStatic_dmypy_server___globals, "str", cpy_r_r166);
        goto CPyL167;
    }
    cpy_r_r168 = CPyStatics[1701]; /* 'status' */
    cpy_r_r169 = CPyStatics[6]; /* 'code' */
    cpy_r_r170 = CPyObject_GetAttr(cpy_r_e, cpy_r_r169);
    CPy_DECREF(cpy_r_e);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 348, CPyStatic_dmypy_server___globals);
        goto CPyL168;
    }
    if (PyUnicode_Check(cpy_r_r170))
        cpy_r_r171 = cpy_r_r170;
    else {
        cpy_r_r171 = NULL;
    }
    if (cpy_r_r171 != NULL) goto __LL1951;
    if (PyLong_Check(cpy_r_r170))
        cpy_r_r171 = cpy_r_r170;
    else {
        cpy_r_r171 = NULL;
    }
    if (cpy_r_r171 != NULL) goto __LL1951;
    if (cpy_r_r170 == Py_None)
        cpy_r_r171 = cpy_r_r170;
    else {
        cpy_r_r171 = NULL;
    }
    if (cpy_r_r171 != NULL) goto __LL1951;
    CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_run", 348, CPyStatic_dmypy_server___globals, "union[str, int, None]", cpy_r_r170);
    goto CPyL168;
__LL1951: ;
    cpy_r_r172 = CPyDict_Build(3, cpy_r_r156, cpy_r_r161, cpy_r_r162, cpy_r_r167, cpy_r_r168, cpy_r_r171);
    CPy_DECREF(cpy_r_r161);
    CPy_DECREF(cpy_r_r167);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 348, CPyStatic_dmypy_server___globals);
        goto CPyL109;
    }
    CPy_RestoreExcInfo(cpy_r_r139);
    CPy_DECREF(cpy_r_r139.f0);
    CPy_DECREF(cpy_r_r139.f1);
    CPy_DECREF(cpy_r_r139.f2);
    return cpy_r_r172;
CPyL107: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL109;
    } else
        goto CPyL169;
CPyL108: ;
    CPy_Unreachable();
CPyL109: ;
    CPy_RestoreExcInfo(cpy_r_r139);
    CPy_DECREF(cpy_r_r139.f0);
    CPy_DECREF(cpy_r_r139.f1);
    CPy_DECREF(cpy_r_r139.f2);
    cpy_r_r173 = CPy_KeepPropagating();
    if (!cpy_r_r173) goto CPyL116;
    CPy_Unreachable();
CPyL111: ;
    if (cpy_r_sources != NULL) goto CPyL114;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"sources\" referenced before assignment");
    cpy_r_r174 = 0;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 349, CPyStatic_dmypy_server___globals);
        goto CPyL116;
    }
    CPy_Unreachable();
CPyL114: ;
    cpy_r_r175 = CPyDef_dmypy_server___Server___check(cpy_r_self, cpy_r_sources, cpy_r_export_types, cpy_r_is_tty, cpy_r_terminal_width);
    CPy_XDECREF(cpy_r_sources);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 349, CPyStatic_dmypy_server___globals);
        goto CPyL116;
    }
    return cpy_r_r175;
CPyL116: ;
    cpy_r_r176 = NULL;
    return cpy_r_r176;
CPyL117: ;
    CPy_XDecRef(cpy_r_options);
    CPy_XDecRef(cpy_r_sources);
    goto CPyL116;
CPyL118: ;
    CPy_XDecRef(cpy_r_options);
    CPy_XDecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_stderr);
    goto CPyL116;
CPyL119: ;
    CPy_XDecRef(cpy_r_options);
    CPy_XDecRef(cpy_r_sources);
    goto CPyL92;
CPyL120: ;
    CPy_XDecRef(cpy_r_options);
    CPy_XDecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    goto CPyL92;
CPyL121: ;
    CPy_XDecRef(cpy_r_options);
    CPy_XDecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r18);
    goto CPyL92;
CPyL122: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL10;
CPyL123: ;
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    goto CPyL45;
CPyL124: ;
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r33);
    goto CPyL45;
CPyL125: ;
    CPy_DECREF(cpy_r_r38);
    goto CPyL16;
CPyL126: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL25;
CPyL127: ;
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    goto CPyL25;
CPyL128: ;
    CPy_XDECREF(cpy_r_options);
    CPy_XDECREF(cpy_r_sources);
    goto CPyL24;
CPyL129: ;
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    goto CPyL31;
CPyL130: ;
    CPy_XDecRef(cpy_r_options);
    CPy_XDecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r58.f0);
    CPy_DecRef(cpy_r_r58.f1);
    CPy_DecRef(cpy_r_r58.f2);
    goto CPyL29;
CPyL131: ;
    CPy_XDecRef(cpy_r_options);
    CPy_XDecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r33);
    goto CPyL32;
CPyL132: ;
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r33);
    goto CPyL38;
CPyL133: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL41;
CPyL134: ;
    CPy_DECREF(cpy_r_r76);
    goto CPyL37;
CPyL135: ;
    CPy_XDECREF(cpy_r_options);
    CPy_XDECREF(cpy_r_sources);
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r18);
    CPy_XDECREF(cpy_r_r71.f0);
    CPy_XDECREF(cpy_r_r71.f1);
    CPy_XDECREF(cpy_r_r71.f2);
    goto CPyL40;
CPyL136: ;
    CPy_XDECREF(cpy_r_options);
    CPy_XDECREF(cpy_r_sources);
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r18);
    goto CPyL44;
CPyL137: ;
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r81);
    CPy_DecRef(cpy_r_r82);
    goto CPyL51;
CPyL138: ;
    CPy_XDECREF(cpy_r_options);
    CPy_XDECREF(cpy_r_sources);
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r78.f0);
    CPy_DECREF(cpy_r_r78.f1);
    CPy_DECREF(cpy_r_r78.f2);
    goto CPyL49;
CPyL139: ;
    CPy_XDECREF(cpy_r_options);
    CPy_XDECREF(cpy_r_sources);
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r18);
    goto CPyL52;
CPyL140: ;
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r18);
    goto CPyL58;
CPyL141: ;
    CPy_XDecRef(cpy_r_options);
    CPy_XDecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r15);
    goto CPyL61;
CPyL142: ;
    CPy_DECREF(cpy_r_r96);
    goto CPyL57;
CPyL143: ;
    CPy_XDECREF(cpy_r_options);
    CPy_XDECREF(cpy_r_sources);
    goto CPyL59;
CPyL144: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    CPy_XDECREF(cpy_r_r91.f0);
    CPy_XDECREF(cpy_r_r91.f1);
    CPy_XDECREF(cpy_r_r91.f2);
    goto CPyL60;
CPyL145: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    goto CPyL64;
CPyL146: ;
    CPy_XDECREF(cpy_r_sources);
    CPy_DECREF(cpy_r_r98);
    goto CPyL66;
CPyL147: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    goto CPyL67;
CPyL148: ;
    CPy_XDECREF(cpy_r_options);
    CPy_XDECREF(cpy_r_sources);
    goto CPyL70;
CPyL149: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    goto CPyL71;
CPyL150: ;
    CPy_XDECREF(cpy_r_options);
    CPy_XDECREF(cpy_r_sources);
    goto CPyL78;
CPyL151: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    goto CPyL79;
CPyL152: ;
    CPy_XDECREF(cpy_r_options);
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    goto CPyL111;
CPyL153: ;
    CPy_XDecRef(cpy_r_options);
    CPy_XDecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_start_plugins_snapshot);
    CPy_DecRef(cpy_r_r124);
    goto CPyL92;
CPyL154: ;
    CPy_XDECREF(cpy_r_sources);
    CPy_DECREF(cpy_r_start_plugins_snapshot);
    CPy_DECREF(cpy_r_r124);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r129);
    goto CPyL84;
CPyL155: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    goto CPyL85;
CPyL156: ;
    CPy_XDecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_start_plugins_snapshot);
    goto CPyL92;
CPyL157: ;
    CPy_XDecRef(cpy_r_sources);
    goto CPyL92;
CPyL158: ;
    CPy_XDECREF(cpy_r_sources);
    goto CPyL90;
CPyL159: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    goto CPyL111;
CPyL160: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    goto CPyL91;
CPyL161: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    goto CPyL93;
CPyL162: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_stdout);
    goto CPyL109;
CPyL163: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_stdout);
    goto CPyL107;
CPyL164: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_e);
    goto CPyL109;
CPyL165: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_e);
    goto CPyL109;
CPyL166: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r161);
    goto CPyL109;
CPyL167: ;
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r161);
    goto CPyL109;
CPyL168: ;
    CPy_DecRef(cpy_r_r161);
    CPy_DecRef(cpy_r_r167);
    goto CPyL109;
CPyL169: ;
    CPy_DECREF(cpy_r_r139.f0);
    CPy_DECREF(cpy_r_r139.f1);
    CPy_DECREF(cpy_r_r139.f2);
    goto CPyL108;
}

PyObject *CPyPy_dmypy_server___Server___cmd_run(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"version", "args", "export_types", "is_tty", "terminal_width", 0};
    static CPyArg_Parser parser = {"OOOOO:cmd_run", kwlist, 0};
    PyObject *obj_version;
    PyObject *obj_args;
    PyObject *obj_export_types;
    PyObject *obj_is_tty;
    PyObject *obj_terminal_width;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_version, &obj_args, &obj_export_types, &obj_is_tty, &obj_terminal_width)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_version;
    if (likely(PyUnicode_Check(obj_version)))
        arg_version = obj_version;
    else {
        CPy_TypeError("str", obj_version); 
        goto fail;
    }
    PyObject *arg_args = obj_args;
    char arg_export_types;
    if (unlikely(!PyBool_Check(obj_export_types))) {
        CPy_TypeError("bool", obj_export_types); goto fail;
    } else
        arg_export_types = obj_export_types == Py_True;
    char arg_is_tty;
    if (unlikely(!PyBool_Check(obj_is_tty))) {
        CPy_TypeError("bool", obj_is_tty); goto fail;
    } else
        arg_is_tty = obj_is_tty == Py_True;
    CPyTagged arg_terminal_width;
    if (likely(PyLong_Check(obj_terminal_width)))
        arg_terminal_width = CPyTagged_BorrowFromObject(obj_terminal_width);
    else {
        CPy_TypeError("int", obj_terminal_width); goto fail;
    }
    PyObject *retval = CPyDef_dmypy_server___Server___cmd_run(arg_self, arg_version, arg_args, arg_export_types, arg_is_tty, arg_terminal_width);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "cmd_run", 308, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___cmd_check(PyObject *cpy_r_self, PyObject *cpy_r_files, char cpy_r_export_types, char cpy_r_is_tty, CPyTagged cpy_r_terminal_width) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_sources;
    tuple_T3OOO cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 2;
    cpy_r_r3 = CPyDef_find_sources___create_source_list(cpy_r_files, cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_check", 356, CPyStatic_dmypy_server___globals);
        goto CPyL3;
    }
    cpy_r_sources = cpy_r_r3;
    goto CPyL12;
CPyL3: ;
    cpy_r_r4 = CPy_CatchError();
    cpy_r_r5 = (PyObject *)CPyType_find_sources___InvalidSourceList;
    cpy_r_r6 = CPy_ExceptionMatches(cpy_r_r5);
    if (!cpy_r_r6) goto CPyL8;
    cpy_r_r7 = CPy_GetExcValue();
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_find_sources___InvalidSourceList))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_check", 357, CPyStatic_dmypy_server___globals, "mypy.find_sources.InvalidSourceList", cpy_r_r7);
        goto CPyL10;
    }
    cpy_r_err = cpy_r_r8;
    cpy_r_r9 = CPyStatics[1730]; /* 'out' */
    cpy_r_r10 = CPyStatics[163]; /* '' */
    cpy_r_r11 = CPyStatics[1731]; /* 'err' */
    cpy_r_r12 = PyObject_Str(cpy_r_err);
    CPy_DecRef(cpy_r_err);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_check", 358, CPyStatic_dmypy_server___globals);
        goto CPyL10;
    }
    cpy_r_r13 = CPyStatics[1701]; /* 'status' */
    cpy_r_r14 = CPyStatics[9018]; /* 2 */
    cpy_r_r15 = CPyDict_Build(3, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14);
    CPy_DecRef(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_check", 358, CPyStatic_dmypy_server___globals);
        goto CPyL10;
    }
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    return cpy_r_r15;
CPyL8: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL10;
    } else
        goto CPyL15;
CPyL9: ;
    CPy_Unreachable();
CPyL10: ;
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    cpy_r_r16 = CPy_KeepPropagating();
    if (!cpy_r_r16) goto CPyL14;
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r17 = CPyDef_dmypy_server___Server___check(cpy_r_self, cpy_r_sources, cpy_r_export_types, cpy_r_is_tty, cpy_r_terminal_width);
    CPy_DECREF(cpy_r_sources);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_check", 359, CPyStatic_dmypy_server___globals);
        goto CPyL14;
    }
    return cpy_r_r17;
CPyL14: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL15: ;
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    goto CPyL9;
}

PyObject *CPyPy_dmypy_server___Server___cmd_check(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"files", "export_types", "is_tty", "terminal_width", 0};
    static CPyArg_Parser parser = {"OOOO:cmd_check", kwlist, 0};
    PyObject *obj_files;
    PyObject *obj_export_types;
    PyObject *obj_is_tty;
    PyObject *obj_terminal_width;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_files, &obj_export_types, &obj_is_tty, &obj_terminal_width)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_files = obj_files;
    char arg_export_types;
    if (unlikely(!PyBool_Check(obj_export_types))) {
        CPy_TypeError("bool", obj_export_types); goto fail;
    } else
        arg_export_types = obj_export_types == Py_True;
    char arg_is_tty;
    if (unlikely(!PyBool_Check(obj_is_tty))) {
        CPy_TypeError("bool", obj_is_tty); goto fail;
    } else
        arg_is_tty = obj_is_tty == Py_True;
    CPyTagged arg_terminal_width;
    if (likely(PyLong_Check(obj_terminal_width)))
        arg_terminal_width = CPyTagged_BorrowFromObject(obj_terminal_width);
    else {
        CPy_TypeError("int", obj_terminal_width); goto fail;
    }
    PyObject *retval = CPyDef_dmypy_server___Server___cmd_check(arg_self, arg_files, arg_export_types, arg_is_tty, arg_terminal_width);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "cmd_check", 351, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___cmd_recheck(PyObject *cpy_r_self, char cpy_r_is_tty, CPyTagged cpy_r_terminal_width, char cpy_r_export_types, PyObject *cpy_r_remove, PyObject *cpy_r_update) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    double cpy_r_r6;
    char cpy_r_r7;
    double cpy_r_t0;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_sources;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_removals;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyPtr cpy_r_r55;
    int64_t cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyTagged cpy_r_r60;
    CPyPtr cpy_r_r61;
    int64_t cpy_r_r62;
    CPyTagged cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_s_2;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_known;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyPtr cpy_r_r80;
    int64_t cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_p;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    CPyTagged cpy_r_r92;
    PyObject *cpy_r_added;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_added_sources;
    tuple_T3OOO cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    double cpy_r_r116;
    char cpy_r_r117;
    double cpy_r_t1;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_manager;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    double cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject **cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    CPyPtr cpy_r_r135;
    CPyPtr cpy_r_r136;
    CPyPtr cpy_r_r137;
    CPyPtr cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_messages;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_res;
    char cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    if (cpy_r_remove != NULL) goto CPyL98;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_remove = cpy_r_r0;
CPyL2: ;
    if (cpy_r_update != NULL) goto CPyL99;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_update = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = CPyModule_time;
    cpy_r_r3 = CPyStatics[147]; /* 'time' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 374, CPyStatic_dmypy_server___globals);
        goto CPyL100;
    }
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_r4, 0, 0, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 374, CPyStatic_dmypy_server___globals);
        goto CPyL100;
    }
    cpy_r_r6 = PyFloat_AsDouble(cpy_r_r5);
    if (cpy_r_r6 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r5); cpy_r_r6 = -113.0;
    }
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 == -113.0;
    if (unlikely(cpy_r_r7)) goto CPyL8;
CPyL7: ;
    cpy_r_t0 = cpy_r_r6;
    cpy_r_r8 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 != cpy_r_r9;
    CPy_DECREF(cpy_r_r8);
    if (cpy_r_r10) {
        goto CPyL11;
    } else
        goto CPyL101;
CPyL8: ;
    cpy_r_r11 = PyErr_Occurred();
    if (unlikely(cpy_r_r11 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 374, CPyStatic_dmypy_server___globals);
        goto CPyL100;
    } else
        goto CPyL7;
CPyL9: ;
    cpy_r_r12 = CPyStatics[401]; /* 'error' */
    cpy_r_r13 = CPyStatics[1954]; /* "Command 'recheck' is only valid after a 'check' command" */
    cpy_r_r14 = CPyDict_Build(1, cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 376, CPyStatic_dmypy_server___globals);
        goto CPyL97;
    }
    return cpy_r_r14;
CPyL11: ;
    cpy_r_r15 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_previous_sources;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "cmd_recheck", "Server", "previous_sources", 377, CPyStatic_dmypy_server___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r15);
CPyL12: ;
    cpy_r_sources = cpy_r_r15;
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_remove != cpy_r_r16;
    if (!cpy_r_r17) goto CPyL33;
    CPy_INCREF(cpy_r_remove);
    if (likely(cpy_r_remove != Py_None))
        cpy_r_r18 = cpy_r_remove;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_recheck", 366, CPyStatic_dmypy_server___globals, "list", cpy_r_remove);
        goto CPyL102;
    }
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    CPy_DECREF(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = cpy_r_r21 != 0;
    if (!cpy_r_r22) goto CPyL33;
    CPy_INCREF(cpy_r_remove);
    if (likely(cpy_r_remove != Py_None))
        cpy_r_r23 = cpy_r_remove;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_recheck", 379, CPyStatic_dmypy_server___globals, "list", cpy_r_remove);
        goto CPyL102;
    }
    cpy_r_r24 = PySet_New(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 379, CPyStatic_dmypy_server___globals);
        goto CPyL102;
    }
    cpy_r_removals = cpy_r_r24;
    cpy_r_r25 = PyList_New(0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 380, CPyStatic_dmypy_server___globals);
        goto CPyL103;
    }
    cpy_r_r26 = 0;
CPyL19: ;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r26 < (Py_ssize_t)cpy_r_r29;
    if (!cpy_r_r30) goto CPyL104;
    cpy_r_r31 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r26);
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_modulefinder___BuildSource))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_recheck", 380, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r31);
        goto CPyL105;
    }
    cpy_r_s = cpy_r_r32;
    cpy_r_r33 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s)->_path;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_r33 != cpy_r_r34;
    if (!cpy_r_r35) goto CPyL24;
    CPy_INCREF(cpy_r_r33);
    if (likely(cpy_r_r33 != Py_None))
        cpy_r_r36 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_recheck", 380, CPyStatic_dmypy_server___globals, "str", cpy_r_r33);
        goto CPyL106;
    }
    cpy_r_r37 = CPyStr_IsTrue(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (cpy_r_r37) goto CPyL107;
CPyL24: ;
    cpy_r_r38 = cpy_r_r33;
    goto CPyL28;
CPyL25: ;
    cpy_r_r39 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s)->_path;
    CPy_INCREF(cpy_r_r39);
    if (likely(cpy_r_r39 != Py_None))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_recheck", 380, CPyStatic_dmypy_server___globals, "str", cpy_r_r39);
        goto CPyL108;
    }
    cpy_r_r41 = PySet_Contains(cpy_r_removals, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 380, CPyStatic_dmypy_server___globals);
        goto CPyL108;
    }
    cpy_r_r43 = cpy_r_r41;
    cpy_r_r44 = cpy_r_r43 ^ 1;
    cpy_r_r45 = cpy_r_r44 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r38 = cpy_r_r45;
CPyL28: ;
    cpy_r_r46 = PyObject_IsTrue(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", -1, CPyStatic_dmypy_server___globals);
        goto CPyL108;
    }
    cpy_r_r48 = cpy_r_r46;
    if (!cpy_r_r48) goto CPyL109;
    cpy_r_r49 = PyList_Append(cpy_r_r25, cpy_r_s);
    CPy_DECREF(cpy_r_s);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 380, CPyStatic_dmypy_server___globals);
        goto CPyL105;
    }
CPyL31: ;
    cpy_r_r51 = cpy_r_r26 + 2;
    cpy_r_r26 = cpy_r_r51;
    goto CPyL19;
CPyL32: ;
    cpy_r_sources = cpy_r_r25;
CPyL33: ;
    cpy_r_r52 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r53 = cpy_r_update != cpy_r_r52;
    if (!cpy_r_r53) goto CPyL70;
    CPy_INCREF(cpy_r_update);
    if (likely(cpy_r_update != Py_None))
        cpy_r_r54 = cpy_r_update;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_recheck", 367, CPyStatic_dmypy_server___globals, "list", cpy_r_update);
        goto CPyL102;
    }
    cpy_r_r55 = (CPyPtr)&((PyVarObject *)cpy_r_r54)->ob_size;
    cpy_r_r56 = *(int64_t *)cpy_r_r55;
    CPy_DECREF(cpy_r_r54);
    cpy_r_r57 = cpy_r_r56 << 1;
    cpy_r_r58 = cpy_r_r57 != 0;
    if (!cpy_r_r58) goto CPyL70;
    cpy_r_r59 = PySet_New(NULL);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 382, CPyStatic_dmypy_server___globals);
        goto CPyL102;
    }
    cpy_r_r60 = 0;
CPyL38: ;
    cpy_r_r61 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r62 = *(int64_t *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 << 1;
    cpy_r_r64 = (Py_ssize_t)cpy_r_r60 < (Py_ssize_t)cpy_r_r63;
    if (!cpy_r_r64) goto CPyL46;
    cpy_r_r65 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r60);
    if (likely(Py_TYPE(cpy_r_r65) == CPyType_modulefinder___BuildSource))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_recheck", 382, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r65);
        goto CPyL110;
    }
    cpy_r_s_2 = cpy_r_r66;
    cpy_r_r67 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s_2)->_path;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r69 = cpy_r_r67 != cpy_r_r68;
    if (!cpy_r_r69) goto CPyL111;
    if (likely(cpy_r_r67 != Py_None))
        cpy_r_r70 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_recheck", 382, CPyStatic_dmypy_server___globals, "str", cpy_r_r67);
        goto CPyL112;
    }
    cpy_r_r71 = CPyStr_IsTrue(cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (!cpy_r_r71) goto CPyL113;
    cpy_r_r72 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s_2)->_path;
    CPy_INCREF(cpy_r_r72);
    CPy_DECREF(cpy_r_s_2);
    if (likely(cpy_r_r72 != Py_None))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_recheck", 382, CPyStatic_dmypy_server___globals, "str", cpy_r_r72);
        goto CPyL110;
    }
    cpy_r_r74 = PySet_Add(cpy_r_r59, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 382, CPyStatic_dmypy_server___globals);
        goto CPyL110;
    }
CPyL45: ;
    cpy_r_r76 = cpy_r_r60 + 2;
    cpy_r_r60 = cpy_r_r76;
    goto CPyL38;
CPyL46: ;
    cpy_r_known = cpy_r_r59;
    cpy_r_r77 = PyList_New(0);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 383, CPyStatic_dmypy_server___globals);
        goto CPyL114;
    }
    CPy_INCREF(cpy_r_update);
    if (likely(cpy_r_update != Py_None))
        cpy_r_r78 = cpy_r_update;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_recheck", 383, CPyStatic_dmypy_server___globals, "list", cpy_r_update);
        goto CPyL115;
    }
    cpy_r_r79 = 0;
CPyL49: ;
    cpy_r_r80 = (CPyPtr)&((PyVarObject *)cpy_r_r78)->ob_size;
    cpy_r_r81 = *(int64_t *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 << 1;
    cpy_r_r83 = (Py_ssize_t)cpy_r_r79 < (Py_ssize_t)cpy_r_r82;
    if (!cpy_r_r83) goto CPyL116;
    cpy_r_r84 = CPyList_GetItemUnsafe(cpy_r_r78, cpy_r_r79);
    if (likely(PyUnicode_Check(cpy_r_r84)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_recheck", 383, CPyStatic_dmypy_server___globals, "str", cpy_r_r84);
        goto CPyL117;
    }
    cpy_r_p = cpy_r_r85;
    cpy_r_r86 = PySet_Contains(cpy_r_known, cpy_r_p);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 383, CPyStatic_dmypy_server___globals);
        goto CPyL118;
    }
    cpy_r_r88 = cpy_r_r86;
    cpy_r_r89 = cpy_r_r88 ^ 1;
    if (!cpy_r_r89) goto CPyL119;
    cpy_r_r90 = PyList_Append(cpy_r_r77, cpy_r_p);
    CPy_DECREF(cpy_r_p);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 383, CPyStatic_dmypy_server___globals);
        goto CPyL117;
    }
CPyL54: ;
    cpy_r_r92 = cpy_r_r79 + 2;
    cpy_r_r79 = cpy_r_r92;
    goto CPyL49;
CPyL55: ;
    cpy_r_added = cpy_r_r77;
    cpy_r_r93 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r93);
    cpy_r_r94 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r94);
    cpy_r_r95 = 2;
    cpy_r_r96 = CPyDef_find_sources___create_source_list(cpy_r_added, cpy_r_r93, cpy_r_r94, cpy_r_r95);
    CPy_DECREF(cpy_r_added);
    CPy_DECREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 385, CPyStatic_dmypy_server___globals);
        goto CPyL120;
    }
    cpy_r_added_sources = cpy_r_r96;
    goto CPyL67;
CPyL58: ;
    cpy_r_r97 = CPy_CatchError();
    cpy_r_r98 = (PyObject *)CPyType_find_sources___InvalidSourceList;
    cpy_r_r99 = CPy_ExceptionMatches(cpy_r_r98);
    if (!cpy_r_r99) goto CPyL63;
    cpy_r_r100 = CPy_GetExcValue();
    if (likely(Py_TYPE(cpy_r_r100) == CPyType_find_sources___InvalidSourceList))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_recheck", 386, CPyStatic_dmypy_server___globals, "mypy.find_sources.InvalidSourceList", cpy_r_r100);
        goto CPyL65;
    }
    cpy_r_err = cpy_r_r101;
    cpy_r_r102 = CPyStatics[1730]; /* 'out' */
    cpy_r_r103 = CPyStatics[163]; /* '' */
    cpy_r_r104 = CPyStatics[1731]; /* 'err' */
    cpy_r_r105 = PyObject_Str(cpy_r_err);
    CPy_DecRef(cpy_r_err);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 387, CPyStatic_dmypy_server___globals);
        goto CPyL65;
    }
    cpy_r_r106 = CPyStatics[1701]; /* 'status' */
    cpy_r_r107 = CPyStatics[9018]; /* 2 */
    cpy_r_r108 = CPyDict_Build(3, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r107);
    CPy_DecRef(cpy_r_r105);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 387, CPyStatic_dmypy_server___globals);
        goto CPyL65;
    }
    CPy_RestoreExcInfo(cpy_r_r97);
    CPy_DecRef(cpy_r_r97.f0);
    CPy_DecRef(cpy_r_r97.f1);
    CPy_DecRef(cpy_r_r97.f2);
    return cpy_r_r108;
CPyL63: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL65;
    } else
        goto CPyL121;
CPyL64: ;
    CPy_Unreachable();
CPyL65: ;
    CPy_RestoreExcInfo(cpy_r_r97);
    CPy_DecRef(cpy_r_r97.f0);
    CPy_DecRef(cpy_r_r97.f1);
    CPy_DecRef(cpy_r_r97.f2);
    cpy_r_r109 = CPy_KeepPropagating();
    if (!cpy_r_r109) goto CPyL97;
    CPy_Unreachable();
CPyL67: ;
    cpy_r_r110 = PyNumber_Add(cpy_r_sources, cpy_r_added_sources);
    CPy_DECREF(cpy_r_sources);
    CPy_DECREF(cpy_r_added_sources);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 388, CPyStatic_dmypy_server___globals);
        goto CPyL100;
    }
    if (likely(PyList_Check(cpy_r_r110)))
        cpy_r_r111 = cpy_r_r110;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_recheck", 388, CPyStatic_dmypy_server___globals, "list", cpy_r_r110);
        goto CPyL100;
    }
    cpy_r_sources = cpy_r_r111;
CPyL70: ;
    cpy_r_r112 = CPyModule_time;
    cpy_r_r113 = CPyStatics[147]; /* 'time' */
    cpy_r_r114 = CPyObject_GetAttr(cpy_r_r112, cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 389, CPyStatic_dmypy_server___globals);
        goto CPyL102;
    }
    cpy_r_r115 = _PyObject_Vectorcall(cpy_r_r114, 0, 0, 0);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 389, CPyStatic_dmypy_server___globals);
        goto CPyL102;
    }
    cpy_r_r116 = PyFloat_AsDouble(cpy_r_r115);
    if (cpy_r_r116 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r115); cpy_r_r116 = -113.0;
    }
    CPy_DECREF(cpy_r_r115);
    cpy_r_r117 = cpy_r_r116 == -113.0;
    if (unlikely(cpy_r_r117)) goto CPyL74;
CPyL73: ;
    cpy_r_t1 = cpy_r_r116;
    cpy_r_r118 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    if (likely(cpy_r_r118 != Py_None))
        cpy_r_r119 = cpy_r_r118;
    else {
        CPy_TypeError("mypy.server.update.FineGrainedBuildManager", cpy_r_r118); 
        cpy_r_r119 = NULL;
    }
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 390, CPyStatic_dmypy_server___globals);
        goto CPyL102;
    } else
        goto CPyL75;
CPyL74: ;
    cpy_r_r120 = PyErr_Occurred();
    if (unlikely(cpy_r_r120 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 389, CPyStatic_dmypy_server___globals);
        goto CPyL102;
    } else
        goto CPyL73;
CPyL75: ;
    cpy_r_r121 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r119)->_manager;
    CPy_INCREF(cpy_r_r121);
    cpy_r_manager = cpy_r_r121;
    cpy_r_r122 = CPyStatics[163]; /* '' */
    cpy_r_r123 = CPyStatics[1955]; /* 'fine-grained increment: cmd_recheck: ' */
    cpy_r_r124 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r125 = cpy_r_t1 - cpy_r_t0;
    cpy_r_r126 = CPyStatics[440]; /* '.3f' */
    cpy_r_r127 = CPyStatics[193]; /* 'format' */
    cpy_r_r128 = PyFloat_FromDouble(cpy_r_r125);
    PyObject *cpy_r_r129[3] = {cpy_r_r124, cpy_r_r128, cpy_r_r126};
    cpy_r_r130 = (PyObject **)&cpy_r_r129;
    cpy_r_r131 = PyObject_VectorcallMethod(cpy_r_r127, cpy_r_r130, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 391, CPyStatic_dmypy_server___globals);
        goto CPyL122;
    }
    CPy_DECREF(cpy_r_r128);
    if (likely(PyUnicode_Check(cpy_r_r131)))
        cpy_r_r132 = cpy_r_r131;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_recheck", 391, CPyStatic_dmypy_server___globals, "str", cpy_r_r131);
        goto CPyL123;
    }
    cpy_r_r133 = CPyStatics[1417]; /* 's' */
    cpy_r_r134 = PyList_New(3);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 391, CPyStatic_dmypy_server___globals);
        goto CPyL124;
    }
    cpy_r_r135 = (CPyPtr)&((PyListObject *)cpy_r_r134)->ob_item;
    cpy_r_r136 = *(CPyPtr *)cpy_r_r135;
    CPy_INCREF(cpy_r_r123);
    *(PyObject * *)cpy_r_r136 = cpy_r_r123;
    cpy_r_r137 = cpy_r_r136 + 8;
    *(PyObject * *)cpy_r_r137 = cpy_r_r132;
    cpy_r_r138 = cpy_r_r136 + 16;
    CPy_INCREF(cpy_r_r133);
    *(PyObject * *)cpy_r_r138 = cpy_r_r133;
    cpy_r_r139 = PyUnicode_Join(cpy_r_r122, cpy_r_r134);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 391, CPyStatic_dmypy_server___globals);
        goto CPyL123;
    }
    cpy_r_r140 = PyTuple_Pack(1, cpy_r_r139);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 391, CPyStatic_dmypy_server___globals);
        goto CPyL123;
    }
    cpy_r_r141 = CPyDef_mypy___build___BuildManager___log(cpy_r_manager, cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    CPy_DECREF(cpy_r_manager);
    if (unlikely(cpy_r_r141 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 391, CPyStatic_dmypy_server___globals);
        goto CPyL102;
    }
    cpy_r_r142 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    ((mypy___options___OptionsObject *)cpy_r_r142)->_export_types = cpy_r_export_types;
    cpy_r_r144 = CPyDef_dmypy_server___Server___following_imports(cpy_r_self);
    if (unlikely(cpy_r_r144 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 393, CPyStatic_dmypy_server___globals);
        goto CPyL102;
    }
    if (cpy_r_r144) goto CPyL85;
    cpy_r_r145 = CPyDef_dmypy_server___Server___fine_grained_increment(cpy_r_self, cpy_r_sources, cpy_r_remove, cpy_r_update);
    CPy_DECREF(cpy_r_remove);
    CPy_DECREF(cpy_r_update);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 394, CPyStatic_dmypy_server___globals);
        goto CPyL125;
    }
    cpy_r_messages = cpy_r_r145;
    goto CPyL93;
CPyL85: ;
    cpy_r_r146 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r147 = cpy_r_remove == cpy_r_r146;
    CPy_DECREF(cpy_r_remove);
    if (cpy_r_r147) {
        goto CPyL87;
    } else
        goto CPyL126;
CPyL86: ;
    cpy_r_r148 = cpy_r_r147;
    goto CPyL88;
CPyL87: ;
    cpy_r_r149 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r150 = cpy_r_update == cpy_r_r149;
    CPy_DECREF(cpy_r_update);
    cpy_r_r148 = cpy_r_r150;
CPyL88: ;
    if (cpy_r_r148) {
        goto CPyL91;
    } else
        goto CPyL127;
CPyL89: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r151 = 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 396, CPyStatic_dmypy_server___globals);
        goto CPyL97;
    }
    CPy_Unreachable();
CPyL91: ;
    cpy_r_r152 = CPyDef_dmypy_server___Server___fine_grained_increment_follow_imports(cpy_r_self, cpy_r_sources);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 397, CPyStatic_dmypy_server___globals);
        goto CPyL125;
    }
    cpy_r_messages = cpy_r_r152;
CPyL93: ;
    cpy_r_r153 = CPyDef_dmypy_server___Server___increment_output(cpy_r_self, cpy_r_messages, cpy_r_sources, cpy_r_is_tty, cpy_r_terminal_width);
    CPy_DECREF(cpy_r_messages);
    CPy_DECREF(cpy_r_sources);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 398, CPyStatic_dmypy_server___globals);
        goto CPyL97;
    }
    cpy_r_res = cpy_r_r153;
    cpy_r_r154 = CPyDef_dmypy_server___Server___flush_caches(cpy_r_self);
    if (unlikely(cpy_r_r154 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 399, CPyStatic_dmypy_server___globals);
        goto CPyL128;
    }
    cpy_r_r155 = CPyDef_dmypy_server___Server___update_stats(cpy_r_self, cpy_r_res);
    if (unlikely(cpy_r_r155 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 400, CPyStatic_dmypy_server___globals);
        goto CPyL128;
    }
    return cpy_r_res;
CPyL97: ;
    cpy_r_r156 = NULL;
    return cpy_r_r156;
CPyL98: ;
    CPy_INCREF(cpy_r_remove);
    goto CPyL2;
CPyL99: ;
    CPy_INCREF(cpy_r_update);
    goto CPyL4;
CPyL100: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    goto CPyL97;
CPyL101: ;
    CPy_DECREF(cpy_r_remove);
    CPy_DECREF(cpy_r_update);
    goto CPyL9;
CPyL102: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    goto CPyL97;
CPyL103: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_removals);
    goto CPyL97;
CPyL104: ;
    CPy_DECREF(cpy_r_sources);
    CPy_DECREF(cpy_r_removals);
    goto CPyL32;
CPyL105: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_removals);
    CPy_DecRef(cpy_r_r25);
    goto CPyL97;
CPyL106: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_removals);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r33);
    goto CPyL97;
CPyL107: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL25;
CPyL108: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_removals);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_s);
    goto CPyL97;
CPyL109: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL31;
CPyL110: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r59);
    goto CPyL97;
CPyL111: ;
    CPy_DECREF(cpy_r_s_2);
    CPy_DECREF(cpy_r_r67);
    goto CPyL45;
CPyL112: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_s_2);
    goto CPyL97;
CPyL113: ;
    CPy_DECREF(cpy_r_s_2);
    goto CPyL45;
CPyL114: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_known);
    goto CPyL97;
CPyL115: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_known);
    CPy_DecRef(cpy_r_r77);
    goto CPyL97;
CPyL116: ;
    CPy_DECREF(cpy_r_known);
    CPy_DECREF(cpy_r_r78);
    goto CPyL55;
CPyL117: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_known);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r78);
    goto CPyL97;
CPyL118: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_known);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_p);
    goto CPyL97;
CPyL119: ;
    CPy_DECREF(cpy_r_p);
    goto CPyL54;
CPyL120: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    goto CPyL58;
CPyL121: ;
    CPy_DecRef(cpy_r_r97.f0);
    CPy_DecRef(cpy_r_r97.f1);
    CPy_DecRef(cpy_r_r97.f2);
    goto CPyL64;
CPyL122: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_r128);
    goto CPyL97;
CPyL123: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_manager);
    goto CPyL97;
CPyL124: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_r132);
    goto CPyL97;
CPyL125: ;
    CPy_DecRef(cpy_r_sources);
    goto CPyL97;
CPyL126: ;
    CPy_DECREF(cpy_r_update);
    goto CPyL86;
CPyL127: ;
    CPy_DECREF(cpy_r_sources);
    goto CPyL89;
CPyL128: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL97;
}

PyObject *CPyPy_dmypy_server___Server___cmd_recheck(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"is_tty", "terminal_width", "export_types", "remove", "update", 0};
    static CPyArg_Parser parser = {"OOO|OO:cmd_recheck", kwlist, 0};
    PyObject *obj_is_tty;
    PyObject *obj_terminal_width;
    PyObject *obj_export_types;
    PyObject *obj_remove = NULL;
    PyObject *obj_update = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_is_tty, &obj_terminal_width, &obj_export_types, &obj_remove, &obj_update)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    char arg_is_tty;
    if (unlikely(!PyBool_Check(obj_is_tty))) {
        CPy_TypeError("bool", obj_is_tty); goto fail;
    } else
        arg_is_tty = obj_is_tty == Py_True;
    CPyTagged arg_terminal_width;
    if (likely(PyLong_Check(obj_terminal_width)))
        arg_terminal_width = CPyTagged_BorrowFromObject(obj_terminal_width);
    else {
        CPy_TypeError("int", obj_terminal_width); goto fail;
    }
    char arg_export_types;
    if (unlikely(!PyBool_Check(obj_export_types))) {
        CPy_TypeError("bool", obj_export_types); goto fail;
    } else
        arg_export_types = obj_export_types == Py_True;
    PyObject *arg_remove;
    if (obj_remove == NULL) {
        arg_remove = NULL;
        goto __LL1952;
    }
    if (PyList_Check(obj_remove))
        arg_remove = obj_remove;
    else {
        arg_remove = NULL;
    }
    if (arg_remove != NULL) goto __LL1952;
    if (obj_remove == Py_None)
        arg_remove = obj_remove;
    else {
        arg_remove = NULL;
    }
    if (arg_remove != NULL) goto __LL1952;
    CPy_TypeError("list or None", obj_remove); 
    goto fail;
__LL1952: ;
    PyObject *arg_update;
    if (obj_update == NULL) {
        arg_update = NULL;
        goto __LL1953;
    }
    if (PyList_Check(obj_update))
        arg_update = obj_update;
    else {
        arg_update = NULL;
    }
    if (arg_update != NULL) goto __LL1953;
    if (obj_update == Py_None)
        arg_update = obj_update;
    else {
        arg_update = NULL;
    }
    if (arg_update != NULL) goto __LL1953;
    CPy_TypeError("list or None", obj_update); 
    goto fail;
__LL1953: ;
    PyObject *retval = CPyDef_dmypy_server___Server___cmd_recheck(arg_self, arg_is_tty, arg_terminal_width, arg_export_types, arg_remove, arg_update);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "cmd_recheck", 361, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___check(PyObject *cpy_r_self, PyObject *cpy_r_sources, char cpy_r_export_types, char cpy_r_is_tty, CPyTagged cpy_r_terminal_width) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_res;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_messages;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    cpy_r_r0 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    ((mypy___options___OptionsObject *)cpy_r_r0)->_export_types = cpy_r_export_types;
    cpy_r_r2 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    CPy_DECREF(cpy_r_r2);
    if (cpy_r_r4) goto CPyL3;
    cpy_r_r5 = CPyDef_dmypy_server___Server___initialize_fine_grained(cpy_r_self, cpy_r_sources, cpy_r_is_tty, cpy_r_terminal_width);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "check", 413, CPyStatic_dmypy_server___globals);
        goto CPyL14;
    }
    cpy_r_res = cpy_r_r5;
    goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPyDef_dmypy_server___Server___following_imports(cpy_r_self);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "check", 415, CPyStatic_dmypy_server___globals);
        goto CPyL14;
    }
    if (cpy_r_r6) goto CPyL7;
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_dmypy_server___Server___fine_grained_increment(cpy_r_self, cpy_r_sources, cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "check", 416, CPyStatic_dmypy_server___globals);
        goto CPyL14;
    }
    cpy_r_messages = cpy_r_r9;
    goto CPyL9;
CPyL7: ;
    cpy_r_r10 = CPyDef_dmypy_server___Server___fine_grained_increment_follow_imports(cpy_r_self, cpy_r_sources);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "check", 418, CPyStatic_dmypy_server___globals);
        goto CPyL14;
    }
    cpy_r_messages = cpy_r_r10;
CPyL9: ;
    cpy_r_r11 = CPyDef_dmypy_server___Server___increment_output(cpy_r_self, cpy_r_messages, cpy_r_sources, cpy_r_is_tty, cpy_r_terminal_width);
    CPy_DECREF(cpy_r_messages);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "check", 419, CPyStatic_dmypy_server___globals);
        goto CPyL14;
    }
    cpy_r_res = cpy_r_r11;
CPyL11: ;
    cpy_r_r12 = CPyDef_dmypy_server___Server___flush_caches(cpy_r_self);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "check", 420, CPyStatic_dmypy_server___globals);
        goto CPyL15;
    }
    cpy_r_r13 = CPyDef_dmypy_server___Server___update_stats(cpy_r_self, cpy_r_res);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "check", 421, CPyStatic_dmypy_server___globals);
        goto CPyL15;
    }
    return cpy_r_res;
CPyL14: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL15: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL14;
}

PyObject *CPyPy_dmypy_server___Server___check(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"sources", "export_types", "is_tty", "terminal_width", 0};
    static CPyArg_Parser parser = {"OOOO:check", kwlist, 0};
    PyObject *obj_sources;
    PyObject *obj_export_types;
    PyObject *obj_is_tty;
    PyObject *obj_terminal_width;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sources, &obj_export_types, &obj_is_tty, &obj_terminal_width)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    char arg_export_types;
    if (unlikely(!PyBool_Check(obj_export_types))) {
        CPy_TypeError("bool", obj_export_types); goto fail;
    } else
        arg_export_types = obj_export_types == Py_True;
    char arg_is_tty;
    if (unlikely(!PyBool_Check(obj_is_tty))) {
        CPy_TypeError("bool", obj_is_tty); goto fail;
    } else
        arg_is_tty = obj_is_tty == Py_True;
    CPyTagged arg_terminal_width;
    if (likely(PyLong_Check(obj_terminal_width)))
        arg_terminal_width = CPyTagged_BorrowFromObject(obj_terminal_width);
    else {
        CPy_TypeError("int", obj_terminal_width); goto fail;
    }
    PyObject *retval = CPyDef_dmypy_server___Server___check(arg_self, arg_sources, arg_export_types, arg_is_tty, arg_terminal_width);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "check", 403, CPyStatic_dmypy_server___globals);
    return NULL;
}

char CPyDef_dmypy_server___Server___flush_caches(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_fscache___FileSystemCache, 2, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *))(cpy_r_r0); /* flush */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "flush_caches", 425, CPyStatic_dmypy_server___globals);
        goto CPyL5;
    }
    cpy_r_r2 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    CPy_DECREF(cpy_r_r2);
    if (!cpy_r_r4) goto CPyL4;
    cpy_r_r5 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    CPy_INCREF(cpy_r_r5);
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "flush_caches", 427, CPyStatic_dmypy_server___globals, "mypy.server.update.FineGrainedBuildManager", cpy_r_r5);
        goto CPyL5;
    }
    cpy_r_r7 = CPyDef_update___FineGrainedBuildManager___flush_cache(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "flush_caches", 427, CPyStatic_dmypy_server___globals);
        goto CPyL5;
    }
CPyL4: ;
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
}

PyObject *CPyPy_dmypy_server___Server___flush_caches(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":flush_caches", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    char retval = CPyDef_dmypy_server___Server___flush_caches(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "flush_caches", 424, CPyStatic_dmypy_server___globals);
    return NULL;
}

char CPyDef_dmypy_server___Server___update_stats(PyObject *cpy_r_self, PyObject *cpy_r_res) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_manager;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "update_stats", 431, CPyStatic_dmypy_server___globals, "mypy.server.update.FineGrainedBuildManager", cpy_r_r3);
        goto CPyL7;
    }
    cpy_r_r5 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r4)->_manager;
    CPy_INCREF(cpy_r_r5);
    cpy_r_manager = cpy_r_r5;
    cpy_r_r6 = CPyDef_mypy___build___BuildManager___dump_stats(cpy_r_manager);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "update_stats", 432, CPyStatic_dmypy_server___globals);
        goto CPyL8;
    }
    cpy_r_r7 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_stats;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyStatics[629]; /* 'stats' */
    cpy_r_r9 = CPyDict_SetItem(cpy_r_res, cpy_r_r8, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "update_stats", 433, CPyStatic_dmypy_server___globals);
        goto CPyL8;
    }
    cpy_r_r11 = PyDict_New();
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "update_stats", 434, CPyStatic_dmypy_server___globals);
        goto CPyL8;
    }
    CPy_DECREF(((mypy___build___BuildManagerObject *)cpy_r_manager)->_stats);
    ((mypy___build___BuildManagerObject *)cpy_r_manager)->_stats = cpy_r_r11;
    CPy_DECREF(cpy_r_manager);
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL8: ;
    CPy_DecRef(cpy_r_manager);
    goto CPyL7;
}

PyObject *CPyPy_dmypy_server___Server___update_stats(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"res", 0};
    static CPyArg_Parser parser = {"O:update_stats", kwlist, 0};
    PyObject *obj_res;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_res)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_res;
    if (likely(PyDict_Check(obj_res)))
        arg_res = obj_res;
    else {
        CPy_TypeError("dict", obj_res); 
        goto fail;
    }
    char retval = CPyDef_dmypy_server___Server___update_stats(arg_self, arg_res);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "update_stats", 429, CPyStatic_dmypy_server___globals);
    return NULL;
}

char CPyDef_dmypy_server___Server___following_imports(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    cpy_r_r1 = ((mypy___options___OptionsObject *)cpy_r_r0)->_follow_imports;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[398]; /* 'normal' */
    cpy_r_r3 = PyUnicode_Compare(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 == -1;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = PyErr_Occurred();
    cpy_r_r6 = cpy_r_r5 != NULL;
    if (!cpy_r_r6) goto CPyL3;
    cpy_r_r7 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "following_imports", 439, CPyStatic_dmypy_server___globals);
        goto CPyL4;
    }
CPyL3: ;
    cpy_r_r8 = cpy_r_r3 == 0;
    return cpy_r_r8;
CPyL4: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_dmypy_server___Server___following_imports(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":following_imports", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    char retval = CPyDef_dmypy_server___Server___following_imports(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "following_imports", 436, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___initialize_fine_grained(PyObject *cpy_r_self, PyObject *cpy_r_sources, char cpy_r_is_tty, CPyTagged cpy_r_terminal_width) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    double cpy_r_r7;
    char cpy_r_r8;
    double cpy_r_t0;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    double cpy_r_r15;
    char cpy_r_r16;
    double cpy_r_t1;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_result;
    tuple_T3OOO cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_output;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_out;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_messages;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    double cpy_r_r82;
    char cpy_r_r83;
    double cpy_r_t2;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyTagged cpy_r_r88;
    int64_t cpy_r_r89;
    CPyTagged cpy_r_r90;
    PyObject *cpy_r_r91;
    tuple_T3CIO cpy_r_r92;
    CPyTagged cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_state;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_meta;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyTagged cpy_r_r109;
    double cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyTagged cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    tuple_T2OO cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_changed;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_removed;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    CPyTagged cpy_r_r149;
    int64_t cpy_r_r150;
    CPyTagged cpy_r_r151;
    PyObject *cpy_r_r152;
    tuple_T3CIO cpy_r_r153;
    CPyTagged cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    char cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    tuple_T2OO cpy_r_r166;
    PyObject *cpy_r_r167;
    int32_t cpy_r_r168;
    char cpy_r_r169;
    char cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    double cpy_r_r176;
    char cpy_r_r177;
    double cpy_r_t3;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    double cpy_r_r189;
    char cpy_r_r190;
    double cpy_r_t4;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    double cpy_r_r195;
    double cpy_r_r196;
    double cpy_r_r197;
    double cpy_r_r198;
    CPyPtr cpy_r_r199;
    int64_t cpy_r_r200;
    CPyTagged cpy_r_r201;
    CPyPtr cpy_r_r202;
    int64_t cpy_r_r203;
    CPyTagged cpy_r_r204;
    CPyTagged cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    char cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    char cpy_r_r224;
    tuple_T3III cpy_r_r225;
    CPyTagged cpy_r_r226;
    CPyTagged cpy_r___;
    CPyTagged cpy_r_r227;
    CPyTagged cpy_r_n_notes;
    CPyTagged cpy_r_r228;
    CPyPtr cpy_r_r229;
    int64_t cpy_r_r230;
    CPyTagged cpy_r_r231;
    char cpy_r_r232;
    CPyPtr cpy_r_r233;
    int64_t cpy_r_r234;
    CPyTagged cpy_r_r235;
    int64_t cpy_r_r236;
    char cpy_r_r237;
    char cpy_r_r238;
    char cpy_r_r239;
    CPyTagged cpy_r_r240;
    CPyTagged cpy_r_status;
    CPyPtr cpy_r_r241;
    int64_t cpy_r_r242;
    CPyTagged cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    CPyPtr cpy_r_r248;
    int64_t cpy_r_r249;
    PyObject *cpy_r_r250;
    CPyTagged cpy_r_r251;
    CPyPtr cpy_r_r252;
    int64_t cpy_r_r253;
    CPyTagged cpy_r_r254;
    char cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_s_2;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    char cpy_r_r260;
    CPyTagged cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    cpy_r_r0 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_fswatcher___FileSystemWatcher(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 444, CPyStatic_dmypy_server___globals);
        goto CPyL138;
    }
    if (((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fswatcher != NULL) {
        CPy_DECREF(((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fswatcher);
    }
    ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fswatcher = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 444, CPyStatic_dmypy_server___globals);
        goto CPyL138;
    }
    cpy_r_r3 = CPyModule_time;
    cpy_r_r4 = CPyStatics[147]; /* 'time' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 445, CPyStatic_dmypy_server___globals);
        goto CPyL138;
    }
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r5, 0, 0, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 445, CPyStatic_dmypy_server___globals);
        goto CPyL138;
    }
    cpy_r_r7 = PyFloat_AsDouble(cpy_r_r6);
    if (cpy_r_r7 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r6); cpy_r_r7 = -113.0;
    }
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 == -113.0;
    if (unlikely(cpy_r_r8)) goto CPyL6;
CPyL5: ;
    cpy_r_t0 = cpy_r_r7;
    cpy_r_r9 = CPyDef_dmypy_server___Server___update_sources(cpy_r_self, cpy_r_sources);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 446, CPyStatic_dmypy_server___globals);
        goto CPyL138;
    } else
        goto CPyL7;
CPyL6: ;
    cpy_r_r10 = PyErr_Occurred();
    if (unlikely(cpy_r_r10 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 445, CPyStatic_dmypy_server___globals);
        goto CPyL138;
    } else
        goto CPyL5;
CPyL7: ;
    cpy_r_r11 = CPyModule_time;
    cpy_r_r12 = CPyStatics[147]; /* 'time' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 447, CPyStatic_dmypy_server___globals);
        goto CPyL138;
    }
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r13, 0, 0, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 447, CPyStatic_dmypy_server___globals);
        goto CPyL138;
    }
    cpy_r_r15 = PyFloat_AsDouble(cpy_r_r14);
    if (cpy_r_r15 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r14); cpy_r_r15 = -113.0;
    }
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 == -113.0;
    if (unlikely(cpy_r_r16)) goto CPyL11;
CPyL10: ;
    cpy_r_t1 = cpy_r_r15;
    goto CPyL12;
CPyL11: ;
    cpy_r_r17 = PyErr_Occurred();
    if (unlikely(cpy_r_r17 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 447, CPyStatic_dmypy_server___globals);
        goto CPyL138;
    } else
        goto CPyL10;
CPyL12: ;
    cpy_r_r18 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = NULL;
    cpy_r_r21 = NULL;
    cpy_r_r22 = NULL;
    cpy_r_r23 = NULL;
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_mypy___build___build(cpy_r_sources, cpy_r_r18, cpy_r_r20, cpy_r_r21, cpy_r_r19, cpy_r_r22, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 449, CPyStatic_dmypy_server___globals);
        goto CPyL14;
    }
    cpy_r_result = cpy_r_r25;
    goto CPyL38;
CPyL14: ;
    cpy_r_r26 = CPy_CatchError();
    cpy_r_r27 = CPyModule_mypy___errors;
    cpy_r_r28 = CPyStatics[518]; /* 'CompileError' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 450, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    }
    cpy_r_r30 = CPy_ExceptionMatches(cpy_r_r29);
    CPy_DecRef(cpy_r_r29);
    if (!cpy_r_r30) goto CPyL34;
    cpy_r_r31 = CPy_GetExcValue();
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_mypy___errors___CompileError))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 450, CPyStatic_dmypy_server___globals, "mypy.errors.CompileError", cpy_r_r31);
        goto CPyL36;
    }
    cpy_r_e = cpy_r_r32;
    cpy_r_r33 = CPyStatics[163]; /* '' */
    cpy_r_r34 = CPyStatics[135]; /* 'messages' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_e, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 451, CPyStatic_dmypy_server___globals);
        goto CPyL139;
    }
    if (likely(PyList_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 451, CPyStatic_dmypy_server___globals, "list", cpy_r_r35);
        goto CPyL139;
    }
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r36)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = PyList_New(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 451, CPyStatic_dmypy_server___globals);
        goto CPyL140;
    }
    cpy_r_r40 = 0;
CPyL21: ;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_r36)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = (Py_ssize_t)cpy_r_r40 < (Py_ssize_t)cpy_r_r43;
    if (!cpy_r_r44) goto CPyL141;
    cpy_r_r45 = CPyList_GetItemUnsafe(cpy_r_r36, cpy_r_r40);
    if (likely(PyUnicode_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 451, CPyStatic_dmypy_server___globals, "str", cpy_r_r45);
        goto CPyL142;
    }
    cpy_r_s = cpy_r_r46;
    cpy_r_r47 = CPyStatics[189]; /* '\n' */
    cpy_r_r48 = PyUnicode_Concat(cpy_r_s, cpy_r_r47);
    CPy_DecRef(cpy_r_s);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 451, CPyStatic_dmypy_server___globals);
        goto CPyL142;
    }
    cpy_r_r49 = CPyList_SetItemUnsafe(cpy_r_r39, cpy_r_r40, cpy_r_r48);
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 451, CPyStatic_dmypy_server___globals);
        goto CPyL142;
    }
    cpy_r_r50 = cpy_r_r40 + 2;
    cpy_r_r40 = cpy_r_r50;
    goto CPyL21;
CPyL26: ;
    cpy_r_r51 = PyUnicode_Join(cpy_r_r33, cpy_r_r39);
    CPy_DecRef(cpy_r_r39);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 451, CPyStatic_dmypy_server___globals);
        goto CPyL139;
    }
    cpy_r_output = cpy_r_r51;
    cpy_r_r52 = CPyStatics[134]; /* 'use_stdout' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_e, cpy_r_r52);
    CPy_DecRef(cpy_r_e);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 452, CPyStatic_dmypy_server___globals);
        goto CPyL143;
    }
    if (unlikely(!PyBool_Check(cpy_r_r53))) {
        CPy_TypeError("bool", cpy_r_r53); cpy_r_r54 = 2;
    } else
        cpy_r_r54 = cpy_r_r53 == Py_True;
    CPy_DecRef(cpy_r_r53);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 452, CPyStatic_dmypy_server___globals);
        goto CPyL143;
    }
    if (!cpy_r_r54) goto CPyL31;
    cpy_r_r55 = cpy_r_output;
    cpy_r_r56 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = cpy_r_r56;
    cpy_r_out = cpy_r_r55;
    cpy_r_err = cpy_r_r57;
    goto CPyL32;
CPyL31: ;
    cpy_r_r58 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = cpy_r_r58;
    cpy_r_r60 = cpy_r_output;
    cpy_r_out = cpy_r_r59;
    cpy_r_err = cpy_r_r60;
CPyL32: ;
    cpy_r_r61 = CPyStatics[1730]; /* 'out' */
    cpy_r_r62 = CPyStatics[1731]; /* 'err' */
    cpy_r_r63 = CPyStatics[1701]; /* 'status' */
    cpy_r_r64 = CPyStatics[9018]; /* 2 */
    cpy_r_r65 = CPyDict_Build(3, cpy_r_r61, cpy_r_out, cpy_r_r62, cpy_r_err, cpy_r_r63, cpy_r_r64);
    CPy_DecRef(cpy_r_out);
    CPy_DecRef(cpy_r_err);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 456, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    }
    CPy_RestoreExcInfo(cpy_r_r26);
    CPy_DecRef(cpy_r_r26.f0);
    CPy_DecRef(cpy_r_r26.f1);
    CPy_DecRef(cpy_r_r26.f2);
    return cpy_r_r65;
CPyL34: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL36;
    } else
        goto CPyL144;
CPyL35: ;
    CPy_Unreachable();
CPyL36: ;
    CPy_RestoreExcInfo(cpy_r_r26);
    CPy_DecRef(cpy_r_r26.f0);
    CPy_DecRef(cpy_r_r26.f1);
    CPy_DecRef(cpy_r_r26.f2);
    cpy_r_r66 = CPy_KeepPropagating();
    if (!cpy_r_r66) goto CPyL138;
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r67 = ((mypy___build___BuildResultObject *)cpy_r_result)->_errors;
    CPy_INCREF(cpy_r_r67);
    cpy_r_messages = cpy_r_r67;
    cpy_r_r68 = CPyDef_update___FineGrainedBuildManager(cpy_r_result);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 458, CPyStatic_dmypy_server___globals);
        goto CPyL145;
    }
    CPy_DECREF(((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager);
    ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager = cpy_r_r68;
    cpy_r_r70 = CPyDef_dmypy_server___Server___following_imports(cpy_r_self);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 460, CPyStatic_dmypy_server___globals);
        goto CPyL145;
    }
    if (!cpy_r_r70) goto CPyL146;
    cpy_r_r71 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    if (likely(cpy_r_r71 != Py_None))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 461, CPyStatic_dmypy_server___globals, "mypy.server.update.FineGrainedBuildManager", cpy_r_r71);
        goto CPyL145;
    }
    cpy_r_r73 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r72)->_graph;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r74 = CPyDef_dmypy_server___find_all_sources_in_build(cpy_r_r73, cpy_r_sources);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 461, CPyStatic_dmypy_server___globals);
        goto CPyL145;
    }
    cpy_r_sources = cpy_r_r74;
    cpy_r_r75 = CPyDef_dmypy_server___Server___update_sources(cpy_r_self, cpy_r_sources);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 462, CPyStatic_dmypy_server___globals);
        goto CPyL147;
    }
CPyL44: ;
    CPy_INCREF(cpy_r_sources);
    if (((mypy___dmypy_server___ServerObject *)cpy_r_self)->_previous_sources != NULL) {
        CPy_DECREF(((mypy___dmypy_server___ServerObject *)cpy_r_self)->_previous_sources);
    }
    ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_previous_sources = cpy_r_sources;
    cpy_r_r76 = 1;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 464, CPyStatic_dmypy_server___globals);
        goto CPyL147;
    }
    cpy_r_r77 = ((mypy___build___BuildResultObject *)cpy_r_result)->_used_cache;
    CPy_DECREF(cpy_r_result);
    if (cpy_r_r77) {
        goto CPyL148;
    } else
        goto CPyL115;
CPyL46: ;
    cpy_r_r78 = CPyModule_time;
    cpy_r_r79 = CPyStatics[147]; /* 'time' */
    cpy_r_r80 = CPyObject_GetAttr(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 470, CPyStatic_dmypy_server___globals);
        goto CPyL149;
    }
    cpy_r_r81 = _PyObject_Vectorcall(cpy_r_r80, 0, 0, 0);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 470, CPyStatic_dmypy_server___globals);
        goto CPyL149;
    }
    cpy_r_r82 = PyFloat_AsDouble(cpy_r_r81);
    if (cpy_r_r82 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r81); cpy_r_r82 = -113.0;
    }
    CPy_DECREF(cpy_r_r81);
    cpy_r_r83 = cpy_r_r82 == -113.0;
    if (unlikely(cpy_r_r83)) goto CPyL50;
CPyL49: ;
    cpy_r_t2 = cpy_r_r82;
    cpy_r_r84 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    if (likely(cpy_r_r84 != Py_None))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeError("mypy.server.update.FineGrainedBuildManager", cpy_r_r84); 
        cpy_r_r85 = NULL;
    }
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 473, CPyStatic_dmypy_server___globals);
        goto CPyL149;
    } else
        goto CPyL51;
CPyL50: ;
    cpy_r_r86 = PyErr_Occurred();
    if (unlikely(cpy_r_r86 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 470, CPyStatic_dmypy_server___globals);
        goto CPyL149;
    } else
        goto CPyL49;
CPyL51: ;
    cpy_r_r87 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r85)->_graph;
    CPy_INCREF(cpy_r_r87);
    cpy_r_r88 = 0;
    cpy_r_r89 = PyDict_Size(cpy_r_r87);
    cpy_r_r90 = cpy_r_r89 << 1;
    cpy_r_r91 = CPyDict_GetValuesIter(cpy_r_r87);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 473, CPyStatic_dmypy_server___globals);
        goto CPyL150;
    }
CPyL52: ;
    cpy_r_r92 = CPyDict_NextValue(cpy_r_r91, cpy_r_r88);
    cpy_r_r93 = cpy_r_r92.f1;
    cpy_r_r88 = cpy_r_r93;
    cpy_r_r94 = cpy_r_r92.f0;
    if (!cpy_r_r94) goto CPyL151;
    cpy_r_r95 = cpy_r_r92.f2;
    CPy_INCREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r92.f2);
    if (likely(Py_TYPE(cpy_r_r95) == CPyType_mypy___build___State))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 473, CPyStatic_dmypy_server___globals, "mypy.build.State", cpy_r_r95);
        goto CPyL152;
    }
    cpy_r_state = cpy_r_r96;
    cpy_r_r97 = ((mypy___build___StateObject *)cpy_r_state)->_meta;
    CPy_INCREF(cpy_r_r97);
    cpy_r_meta = cpy_r_r97;
    cpy_r_r98 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r99 = cpy_r_meta == cpy_r_r98;
    if (cpy_r_r99) goto CPyL153;
    cpy_r_r100 = ((mypy___build___StateObject *)cpy_r_state)->_path;
    cpy_r_r101 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r102 = cpy_r_r100 != cpy_r_r101;
    if (cpy_r_r102) {
        goto CPyL58;
    } else
        goto CPyL154;
CPyL56: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r103 = 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 477, CPyStatic_dmypy_server___globals);
        goto CPyL138;
    }
    CPy_Unreachable();
CPyL58: ;
    cpy_r_r104 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fswatcher;
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "initialize_fine_grained", "Server", "fswatcher", 478, CPyStatic_dmypy_server___globals);
        goto CPyL155;
    }
    CPy_INCREF(cpy_r_r104);
CPyL59: ;
    cpy_r_r105 = ((mypy___build___StateObject *)cpy_r_state)->_path;
    CPy_INCREF(cpy_r_r105);
    CPy_DECREF(cpy_r_state);
    if (likely(cpy_r_r105 != Py_None))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 479, CPyStatic_dmypy_server___globals, "str", cpy_r_r105);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_meta);
    if (likely(cpy_r_meta != Py_None))
        cpy_r_r107 = cpy_r_meta;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 480, CPyStatic_dmypy_server___globals, "tuple", cpy_r_meta);
        goto CPyL157;
    }
    cpy_r_r108 = CPySequenceTuple_GetItem(cpy_r_r107, 4);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 480, CPyStatic_dmypy_server___globals);
        goto CPyL157;
    }
    if (likely(PyLong_Check(cpy_r_r108)))
        cpy_r_r109 = CPyTagged_FromObject(cpy_r_r108);
    else {
        CPy_TypeError("int", cpy_r_r108); cpy_r_r109 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 480, CPyStatic_dmypy_server___globals);
        goto CPyL157;
    }
    cpy_r_r110 = CPyFloat_FromTagged(cpy_r_r109);
    CPyTagged_DECREF(cpy_r_r109);
    cpy_r_r111 = cpy_r_r110 == -113.0;
    if (unlikely(cpy_r_r111)) goto CPyL65;
CPyL64: ;
    CPy_INCREF(cpy_r_meta);
    if (likely(cpy_r_meta != Py_None))
        cpy_r_r112 = cpy_r_meta;
    else {
        CPy_TypeError("tuple", cpy_r_meta); 
        cpy_r_r112 = NULL;
    }
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 480, CPyStatic_dmypy_server___globals);
        goto CPyL157;
    } else
        goto CPyL66;
CPyL65: ;
    cpy_r_r113 = PyErr_Occurred();
    if (unlikely(cpy_r_r113 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 480, CPyStatic_dmypy_server___globals);
        goto CPyL157;
    } else
        goto CPyL64;
CPyL66: ;
    cpy_r_r114 = CPySequenceTuple_GetItem(cpy_r_r112, 6);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 480, CPyStatic_dmypy_server___globals);
        goto CPyL157;
    }
    if (likely(PyLong_Check(cpy_r_r114)))
        cpy_r_r115 = CPyTagged_FromObject(cpy_r_r114);
    else {
        CPy_TypeError("int", cpy_r_r114); cpy_r_r115 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 480, CPyStatic_dmypy_server___globals);
        goto CPyL157;
    }
    if (likely(cpy_r_meta != Py_None))
        cpy_r_r116 = cpy_r_meta;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 480, CPyStatic_dmypy_server___globals, "tuple", cpy_r_meta);
        goto CPyL158;
    }
    cpy_r_r117 = CPySequenceTuple_GetItem(cpy_r_r116, 8);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 480, CPyStatic_dmypy_server___globals);
        goto CPyL158;
    }
    if (likely(PyUnicode_Check(cpy_r_r117)))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 480, CPyStatic_dmypy_server___globals, "str", cpy_r_r117);
        goto CPyL158;
    }
    cpy_r_r119 = CPyStatic_dmypy_server___globals;
    cpy_r_r120 = CPyStatics[1956]; /* 'FileData' */
    cpy_r_r121 = CPyDict_GetItem(cpy_r_r119, cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 480, CPyStatic_dmypy_server___globals);
        goto CPyL159;
    }
    cpy_r_r122 = PyFloat_FromDouble(cpy_r_r110);
    cpy_r_r123 = CPyTagged_StealAsObject(cpy_r_r115);
    PyObject *cpy_r_r124[3] = {cpy_r_r122, cpy_r_r123, cpy_r_r118};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = CPyStatics[9333]; /* ('st_mtime', 'st_size', 'hash') */
    cpy_r_r127 = _PyObject_Vectorcall(cpy_r_r121, cpy_r_r125, 0, cpy_r_r126);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 480, CPyStatic_dmypy_server___globals);
        goto CPyL160;
    }
    CPy_DECREF(cpy_r_r122);
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_r118);
    if (likely(PyTuple_Check(cpy_r_r127)))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 480, CPyStatic_dmypy_server___globals, "tuple", cpy_r_r127);
        goto CPyL161;
    }
    cpy_r_r129 = CPyDef_fswatcher___FileSystemWatcher___set_file_data(cpy_r_r104, cpy_r_r106, cpy_r_r128);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r128);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r129 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 478, CPyStatic_dmypy_server___globals);
        goto CPyL152;
    }
CPyL75: ;
    cpy_r_r130 = CPyDict_CheckSize(cpy_r_r87, cpy_r_r90);
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 473, CPyStatic_dmypy_server___globals);
        goto CPyL152;
    } else
        goto CPyL52;
CPyL76: ;
    cpy_r_r131 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 473, CPyStatic_dmypy_server___globals);
        goto CPyL149;
    }
    cpy_r_r132 = CPyDef_dmypy_server___Server___find_changed(cpy_r_self, cpy_r_sources);
    if (unlikely(cpy_r_r132.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 483, CPyStatic_dmypy_server___globals);
        goto CPyL149;
    }
    cpy_r_r133 = cpy_r_r132.f0;
    CPy_INCREF(cpy_r_r133);
    cpy_r_changed = cpy_r_r133;
    cpy_r_r134 = cpy_r_r132.f1;
    CPy_INCREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r132.f0);
    CPy_DECREF(cpy_r_r132.f1);
    cpy_r_removed = cpy_r_r134;
    cpy_r_r135 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    if (likely(cpy_r_r135 != Py_None))
        cpy_r_r136 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 485, CPyStatic_dmypy_server___globals, "mypy.server.update.FineGrainedBuildManager", cpy_r_r135);
        goto CPyL162;
    }
    cpy_r_r137 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r136)->_graph;
    CPy_INCREF(cpy_r_r137);
    cpy_r_r138 = PySet_New(NULL);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 486, CPyStatic_dmypy_server___globals);
        goto CPyL163;
    }
    cpy_r_r139 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    if (likely(cpy_r_r139 != Py_None))
        cpy_r_r140 = cpy_r_r139;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 487, CPyStatic_dmypy_server___globals, "mypy.server.update.FineGrainedBuildManager", cpy_r_r139);
        goto CPyL164;
    }
    cpy_r_r141 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r140)->_manager;
    cpy_r_r142 = ((mypy___build___BuildManagerObject *)cpy_r_r141)->_search_paths;
    CPy_INCREF(cpy_r_r142);
    cpy_r_r143 = CPyDef_dmypy_server___Server___find_added_suppressed(cpy_r_self, cpy_r_r137, cpy_r_r138, cpy_r_r142);
    CPy_DECREF(cpy_r_r137);
    CPy_DECREF(cpy_r_r138);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 484, CPyStatic_dmypy_server___globals);
        goto CPyL162;
    }
    cpy_r_r144 = PyNumber_InPlaceAdd(cpy_r_changed, cpy_r_r143);
    CPy_DECREF(cpy_r_changed);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 484, CPyStatic_dmypy_server___globals);
        goto CPyL165;
    }
    if (likely(PyList_Check(cpy_r_r144)))
        cpy_r_r145 = cpy_r_r144;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 484, CPyStatic_dmypy_server___globals, "list", cpy_r_r144);
        goto CPyL165;
    }
    cpy_r_changed = cpy_r_r145;
    cpy_r_r146 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    if (likely(cpy_r_r146 != Py_None))
        cpy_r_r147 = cpy_r_r146;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 491, CPyStatic_dmypy_server___globals, "mypy.server.update.FineGrainedBuildManager", cpy_r_r146);
        goto CPyL162;
    }
    cpy_r_r148 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r147)->_graph;
    CPy_INCREF(cpy_r_r148);
    cpy_r_r149 = 0;
    cpy_r_r150 = PyDict_Size(cpy_r_r148);
    cpy_r_r151 = cpy_r_r150 << 1;
    cpy_r_r152 = CPyDict_GetValuesIter(cpy_r_r148);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 491, CPyStatic_dmypy_server___globals);
        goto CPyL166;
    }
CPyL86: ;
    cpy_r_r153 = CPyDict_NextValue(cpy_r_r152, cpy_r_r149);
    cpy_r_r154 = cpy_r_r153.f1;
    cpy_r_r149 = cpy_r_r154;
    cpy_r_r155 = cpy_r_r153.f0;
    if (!cpy_r_r155) goto CPyL167;
    cpy_r_r156 = cpy_r_r153.f2;
    CPy_INCREF(cpy_r_r156);
    CPy_DECREF(cpy_r_r153.f2);
    if (likely(Py_TYPE(cpy_r_r156) == CPyType_mypy___build___State))
        cpy_r_r157 = cpy_r_r156;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 491, CPyStatic_dmypy_server___globals, "mypy.build.State", cpy_r_r156);
        goto CPyL168;
    }
    cpy_r_state = cpy_r_r157;
    cpy_r_r158 = CPyDef_mypy___build___State___is_fresh(cpy_r_state);
    if (unlikely(cpy_r_r158 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 492, CPyStatic_dmypy_server___globals);
        goto CPyL169;
    }
    if (cpy_r_r158) goto CPyL170;
    cpy_r_r159 = ((mypy___build___StateObject *)cpy_r_state)->_path;
    cpy_r_r160 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r161 = cpy_r_r159 != cpy_r_r160;
    if (cpy_r_r161) {
        goto CPyL93;
    } else
        goto CPyL171;
CPyL91: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r162 = 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 493, CPyStatic_dmypy_server___globals);
        goto CPyL138;
    }
    CPy_Unreachable();
CPyL93: ;
    cpy_r_r163 = ((mypy___build___StateObject *)cpy_r_state)->_id;
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "initialize_fine_grained", "State", "id", 494, CPyStatic_dmypy_server___globals);
        goto CPyL169;
    }
    CPy_INCREF(cpy_r_r163);
CPyL94: ;
    cpy_r_r164 = ((mypy___build___StateObject *)cpy_r_state)->_path;
    CPy_INCREF(cpy_r_r164);
    CPy_DECREF(cpy_r_state);
    if (likely(cpy_r_r164 != Py_None))
        cpy_r_r165 = cpy_r_r164;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 494, CPyStatic_dmypy_server___globals, "str", cpy_r_r164);
        goto CPyL172;
    }
    cpy_r_r166.f0 = cpy_r_r163;
    cpy_r_r166.f1 = cpy_r_r165;
    CPy_INCREF(cpy_r_r166.f0);
    CPy_INCREF(cpy_r_r166.f1);
    CPy_DECREF(cpy_r_r163);
    CPy_DECREF(cpy_r_r165);
    cpy_r_r167 = PyTuple_New(2);
    if (unlikely(cpy_r_r167 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1954 = cpy_r_r166.f0;
    PyTuple_SET_ITEM(cpy_r_r167, 0, __tmp1954);
    PyObject *__tmp1955 = cpy_r_r166.f1;
    PyTuple_SET_ITEM(cpy_r_r167, 1, __tmp1955);
    cpy_r_r168 = PyList_Append(cpy_r_changed, cpy_r_r167);
    CPy_DECREF(cpy_r_r167);
    cpy_r_r169 = cpy_r_r168 >= 0;
    if (unlikely(!cpy_r_r169)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 494, CPyStatic_dmypy_server___globals);
        goto CPyL168;
    }
CPyL96: ;
    cpy_r_r170 = CPyDict_CheckSize(cpy_r_r148, cpy_r_r151);
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 491, CPyStatic_dmypy_server___globals);
        goto CPyL168;
    } else
        goto CPyL86;
CPyL97: ;
    cpy_r_r171 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 491, CPyStatic_dmypy_server___globals);
        goto CPyL162;
    }
    cpy_r_r172 = CPyModule_time;
    cpy_r_r173 = CPyStatics[147]; /* 'time' */
    cpy_r_r174 = CPyObject_GetAttr(cpy_r_r172, cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 496, CPyStatic_dmypy_server___globals);
        goto CPyL162;
    }
    cpy_r_r175 = _PyObject_Vectorcall(cpy_r_r174, 0, 0, 0);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 496, CPyStatic_dmypy_server___globals);
        goto CPyL162;
    }
    cpy_r_r176 = PyFloat_AsDouble(cpy_r_r175);
    if (cpy_r_r176 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r175); cpy_r_r176 = -113.0;
    }
    CPy_DECREF(cpy_r_r175);
    cpy_r_r177 = cpy_r_r176 == -113.0;
    if (unlikely(cpy_r_r177)) goto CPyL102;
CPyL101: ;
    cpy_r_t3 = cpy_r_r176;
    cpy_r_r178 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    CPy_INCREF(cpy_r_r178);
    if (likely(cpy_r_r178 != Py_None))
        cpy_r_r179 = cpy_r_r178;
    else {
        CPy_TypeError("mypy.server.update.FineGrainedBuildManager", cpy_r_r178); 
        cpy_r_r179 = NULL;
    }
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 498, CPyStatic_dmypy_server___globals);
        goto CPyL162;
    } else
        goto CPyL103;
CPyL102: ;
    cpy_r_r180 = PyErr_Occurred();
    if (unlikely(cpy_r_r180 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 496, CPyStatic_dmypy_server___globals);
        goto CPyL162;
    } else
        goto CPyL101;
CPyL103: ;
    cpy_r_r181 = 2;
    cpy_r_r182 = CPyDef_update___FineGrainedBuildManager___update(cpy_r_r179, cpy_r_changed, cpy_r_removed, cpy_r_r181);
    CPy_DECREF(cpy_r_r179);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 498, CPyStatic_dmypy_server___globals);
        goto CPyL162;
    }
    cpy_r_messages = cpy_r_r182;
    cpy_r_r183 = CPyDef_dmypy_server___Server___following_imports(cpy_r_self);
    if (unlikely(cpy_r_r183 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 500, CPyStatic_dmypy_server___globals);
        goto CPyL173;
    }
    if (cpy_r_r183) {
        goto CPyL174;
    } else
        goto CPyL108;
CPyL106: ;
    cpy_r_r184 = CPyDef_dmypy_server___Server___fine_grained_increment_follow_imports(cpy_r_self, cpy_r_sources);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 502, CPyStatic_dmypy_server___globals);
        goto CPyL162;
    }
    cpy_r_messages = cpy_r_r184;
CPyL108: ;
    cpy_r_r185 = CPyModule_time;
    cpy_r_r186 = CPyStatics[147]; /* 'time' */
    cpy_r_r187 = CPyObject_GetAttr(cpy_r_r185, cpy_r_r186);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 504, CPyStatic_dmypy_server___globals);
        goto CPyL173;
    }
    cpy_r_r188 = _PyObject_Vectorcall(cpy_r_r187, 0, 0, 0);
    CPy_DECREF(cpy_r_r187);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 504, CPyStatic_dmypy_server___globals);
        goto CPyL173;
    }
    cpy_r_r189 = PyFloat_AsDouble(cpy_r_r188);
    if (cpy_r_r189 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r188); cpy_r_r189 = -113.0;
    }
    CPy_DECREF(cpy_r_r188);
    cpy_r_r190 = cpy_r_r189 == -113.0;
    if (unlikely(cpy_r_r190)) goto CPyL112;
CPyL111: ;
    cpy_r_t4 = cpy_r_r189;
    cpy_r_r191 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    if (likely(cpy_r_r191 != Py_None))
        cpy_r_r192 = cpy_r_r191;
    else {
        CPy_TypeError("mypy.server.update.FineGrainedBuildManager", cpy_r_r191); 
        cpy_r_r192 = NULL;
    }
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 505, CPyStatic_dmypy_server___globals);
        goto CPyL173;
    } else
        goto CPyL113;
CPyL112: ;
    cpy_r_r193 = PyErr_Occurred();
    if (unlikely(cpy_r_r193 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 504, CPyStatic_dmypy_server___globals);
        goto CPyL173;
    } else
        goto CPyL111;
CPyL113: ;
    cpy_r_r194 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r192)->_manager;
    CPy_INCREF(cpy_r_r194);
    cpy_r_r195 = cpy_r_t1 - cpy_r_t0;
    cpy_r_r196 = cpy_r_t2 - cpy_r_t1;
    cpy_r_r197 = cpy_r_t3 - cpy_r_t2;
    cpy_r_r198 = cpy_r_t4 - cpy_r_t3;
    cpy_r_r199 = (CPyPtr)&((PyVarObject *)cpy_r_removed)->ob_size;
    cpy_r_r200 = *(int64_t *)cpy_r_r199;
    CPy_DECREF(cpy_r_removed);
    cpy_r_r201 = cpy_r_r200 << 1;
    cpy_r_r202 = (CPyPtr)&((PyVarObject *)cpy_r_changed)->ob_size;
    cpy_r_r203 = *(int64_t *)cpy_r_r202;
    CPy_DECREF(cpy_r_changed);
    cpy_r_r204 = cpy_r_r203 << 1;
    cpy_r_r205 = CPyTagged_Add(cpy_r_r201, cpy_r_r204);
    cpy_r_r206 = CPyStatics[1957]; /* 'update_sources_time' */
    cpy_r_r207 = CPyStatics[1958]; /* 'build_time' */
    cpy_r_r208 = CPyStatics[1959]; /* 'find_changes_time' */
    cpy_r_r209 = CPyStatics[1960]; /* 'fg_update_time' */
    cpy_r_r210 = CPyStatics[1961]; /* 'files_changed' */
    cpy_r_r211 = PyFloat_FromDouble(cpy_r_r195);
    cpy_r_r212 = PyFloat_FromDouble(cpy_r_r196);
    cpy_r_r213 = PyFloat_FromDouble(cpy_r_r197);
    cpy_r_r214 = PyFloat_FromDouble(cpy_r_r198);
    cpy_r_r215 = CPyTagged_StealAsObject(cpy_r_r205);
    cpy_r_r216 = CPyDict_Build(5, cpy_r_r206, cpy_r_r211, cpy_r_r207, cpy_r_r212, cpy_r_r208, cpy_r_r213, cpy_r_r209, cpy_r_r214, cpy_r_r210, cpy_r_r215);
    CPy_DECREF(cpy_r_r211);
    CPy_DECREF(cpy_r_r212);
    CPy_DECREF(cpy_r_r213);
    CPy_DECREF(cpy_r_r214);
    CPy_DECREF(cpy_r_r215);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 505, CPyStatic_dmypy_server___globals);
        goto CPyL175;
    }
    cpy_r_r217 = CPyDef_mypy___build___BuildManager___add_stats(cpy_r_r194, cpy_r_r216);
    CPy_DECREF(cpy_r_r216);
    CPy_DECREF(cpy_r_r194);
    if (unlikely(cpy_r_r217 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 505, CPyStatic_dmypy_server___globals);
        goto CPyL176;
    } else
        goto CPyL117;
CPyL115: ;
    cpy_r_r218 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fswatcher;
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "initialize_fine_grained", "Server", "fswatcher", 515, CPyStatic_dmypy_server___globals);
        goto CPyL176;
    }
    CPy_INCREF(cpy_r_r218);
CPyL116: ;
    cpy_r_r219 = CPyDef_fswatcher___FileSystemWatcher___find_changed(cpy_r_r218);
    CPy_DECREF(cpy_r_r218);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 515, CPyStatic_dmypy_server___globals);
        goto CPyL176;
    } else
        goto CPyL177;
CPyL117: ;
    if (!0) goto CPyL120;
    cpy_r_r220 = CPyStatics[9334]; /* ('print_memory_profile',) */
    cpy_r_r221 = CPyStatics[1963]; /* 'mypy.memprofile' */
    cpy_r_r222 = CPyStatic_dmypy_server___globals;
    cpy_r_r223 = CPyImport_ImportFromMany(cpy_r_r221, cpy_r_r220, cpy_r_r220, cpy_r_r222);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 518, CPyStatic_dmypy_server___globals);
        goto CPyL176;
    }
    CPyModule_mypy___memprofile = cpy_r_r223;
    CPy_INCREF(CPyModule_mypy___memprofile);
    CPy_DECREF(cpy_r_r223);
    cpy_r_r224 = CPyDef_memprofile___print_memory_profile(0);
    if (unlikely(cpy_r_r224 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 520, CPyStatic_dmypy_server___globals);
        goto CPyL176;
    }
CPyL120: ;
    cpy_r_r225 = CPyDef_mypy___util___count_stats(cpy_r_messages);
    if (unlikely(cpy_r_r225.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 522, CPyStatic_dmypy_server___globals);
        goto CPyL176;
    }
    cpy_r_r226 = cpy_r_r225.f0;
    CPyTagged_INCREF(cpy_r_r226);
    cpy_r___ = cpy_r_r226;
    CPyTagged_DECREF(cpy_r___);
    cpy_r_r227 = cpy_r_r225.f1;
    CPyTagged_INCREF(cpy_r_r227);
    cpy_r_n_notes = cpy_r_r227;
    cpy_r_r228 = cpy_r_r225.f2;
    CPyTagged_INCREF(cpy_r_r228);
    CPyTagged_DECREF(cpy_r_r225.f0);
    CPyTagged_DECREF(cpy_r_r225.f1);
    CPyTagged_DECREF(cpy_r_r225.f2);
    cpy_r___ = cpy_r_r228;
    CPyTagged_DECREF(cpy_r___);
    cpy_r_r229 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r230 = *(int64_t *)cpy_r_r229;
    cpy_r_r231 = cpy_r_r230 << 1;
    cpy_r_r232 = cpy_r_r231 != 0;
    if (!cpy_r_r232) goto CPyL178;
    cpy_r_r233 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r234 = *(int64_t *)cpy_r_r233;
    cpy_r_r235 = cpy_r_r234 << 1;
    cpy_r_r236 = cpy_r_n_notes & 1;
    cpy_r_r237 = cpy_r_r236 != 0;
    if (!cpy_r_r237) goto CPyL124;
    cpy_r_r238 = CPyTagged_IsLt_(cpy_r_n_notes, cpy_r_r235);
    CPyTagged_DECREF(cpy_r_n_notes);
    if (cpy_r_r238) {
        goto CPyL125;
    } else
        goto CPyL126;
CPyL124: ;
    cpy_r_r239 = (Py_ssize_t)cpy_r_n_notes < (Py_ssize_t)cpy_r_r235;
    CPyTagged_DECREF(cpy_r_n_notes);
    if (!cpy_r_r239) goto CPyL126;
CPyL125: ;
    cpy_r_r240 = 2;
    goto CPyL127;
CPyL126: ;
    cpy_r_r240 = 0;
CPyL127: ;
    cpy_r_status = cpy_r_r240;
    cpy_r_r241 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r242 = *(int64_t *)cpy_r_r241;
    CPy_DECREF(cpy_r_sources);
    cpy_r_r243 = cpy_r_r242 << 1;
    CPyTagged_INCREF(cpy_r_terminal_width);
    cpy_r_r244 = CPyTagged_StealAsObject(cpy_r_terminal_width);
    cpy_r_r245 = CPyDef_dmypy_server___Server___pretty_messages(cpy_r_self, cpy_r_messages, cpy_r_r243, cpy_r_is_tty, cpy_r_r244);
    CPy_DECREF(cpy_r_messages);
    CPy_DECREF(cpy_r_r244);
    if (unlikely(cpy_r_r245 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 524, CPyStatic_dmypy_server___globals);
        goto CPyL179;
    }
    cpy_r_messages = cpy_r_r245;
    cpy_r_r246 = CPyStatics[1730]; /* 'out' */
    cpy_r_r247 = CPyStatics[163]; /* '' */
    cpy_r_r248 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r249 = *(int64_t *)cpy_r_r248;
    cpy_r_r250 = PyList_New(cpy_r_r249);
    if (unlikely(cpy_r_r250 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 525, CPyStatic_dmypy_server___globals);
        goto CPyL180;
    }
    cpy_r_r251 = 0;
CPyL130: ;
    cpy_r_r252 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r253 = *(int64_t *)cpy_r_r252;
    cpy_r_r254 = cpy_r_r253 << 1;
    cpy_r_r255 = (Py_ssize_t)cpy_r_r251 < (Py_ssize_t)cpy_r_r254;
    if (!cpy_r_r255) goto CPyL181;
    cpy_r_r256 = CPyList_GetItemUnsafe(cpy_r_messages, cpy_r_r251);
    if (likely(PyUnicode_Check(cpy_r_r256)))
        cpy_r_r257 = cpy_r_r256;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 525, CPyStatic_dmypy_server___globals, "str", cpy_r_r256);
        goto CPyL182;
    }
    cpy_r_s_2 = cpy_r_r257;
    cpy_r_r258 = CPyStatics[189]; /* '\n' */
    cpy_r_r259 = PyUnicode_Concat(cpy_r_s_2, cpy_r_r258);
    CPy_DECREF(cpy_r_s_2);
    if (unlikely(cpy_r_r259 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 525, CPyStatic_dmypy_server___globals);
        goto CPyL182;
    }
    cpy_r_r260 = CPyList_SetItemUnsafe(cpy_r_r250, cpy_r_r251, cpy_r_r259);
    if (unlikely(!cpy_r_r260)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 525, CPyStatic_dmypy_server___globals);
        goto CPyL182;
    }
    cpy_r_r261 = cpy_r_r251 + 2;
    cpy_r_r251 = cpy_r_r261;
    goto CPyL130;
CPyL135: ;
    cpy_r_r262 = PyUnicode_Join(cpy_r_r247, cpy_r_r250);
    CPy_DECREF(cpy_r_r250);
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 525, CPyStatic_dmypy_server___globals);
        goto CPyL179;
    }
    cpy_r_r263 = CPyStatics[1731]; /* 'err' */
    cpy_r_r264 = CPyStatics[163]; /* '' */
    cpy_r_r265 = CPyStatics[1701]; /* 'status' */
    cpy_r_r266 = CPyTagged_StealAsObject(cpy_r_status);
    cpy_r_r267 = CPyDict_Build(3, cpy_r_r246, cpy_r_r262, cpy_r_r263, cpy_r_r264, cpy_r_r265, cpy_r_r266);
    CPy_DECREF(cpy_r_r262);
    CPy_DECREF(cpy_r_r266);
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 525, CPyStatic_dmypy_server___globals);
        goto CPyL138;
    }
    return cpy_r_r267;
CPyL138: ;
    cpy_r_r268 = NULL;
    return cpy_r_r268;
CPyL139: ;
    CPy_DecRef(cpy_r_e);
    goto CPyL36;
CPyL140: ;
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r36);
    goto CPyL36;
CPyL141: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL26;
CPyL142: ;
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r39);
    goto CPyL36;
CPyL143: ;
    CPy_DecRef(cpy_r_output);
    goto CPyL36;
CPyL144: ;
    CPy_DecRef(cpy_r_r26.f0);
    CPy_DecRef(cpy_r_r26.f1);
    CPy_DecRef(cpy_r_r26.f2);
    goto CPyL35;
CPyL145: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_messages);
    goto CPyL138;
CPyL146: ;
    CPy_INCREF(cpy_r_sources);
    goto CPyL44;
CPyL147: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_messages);
    goto CPyL138;
CPyL148: ;
    CPy_DECREF(cpy_r_messages);
    goto CPyL46;
CPyL149: ;
    CPy_DecRef(cpy_r_sources);
    goto CPyL138;
CPyL150: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r87);
    goto CPyL138;
CPyL151: ;
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r92.f2);
    goto CPyL76;
CPyL152: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r91);
    goto CPyL138;
CPyL153: ;
    CPy_DECREF(cpy_r_state);
    CPy_DECREF(cpy_r_meta);
    goto CPyL75;
CPyL154: ;
    CPy_DECREF(cpy_r_sources);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_state);
    CPy_DECREF(cpy_r_meta);
    goto CPyL56;
CPyL155: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_meta);
    goto CPyL138;
CPyL156: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_meta);
    CPy_DecRef(cpy_r_r104);
    goto CPyL138;
CPyL157: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_meta);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    goto CPyL138;
CPyL158: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    CPyTagged_DecRef(cpy_r_r115);
    goto CPyL138;
CPyL159: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    CPyTagged_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r118);
    goto CPyL138;
CPyL160: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r123);
    goto CPyL138;
CPyL161: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    goto CPyL138;
CPyL162: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    goto CPyL138;
CPyL163: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r137);
    goto CPyL138;
CPyL164: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r138);
    goto CPyL138;
CPyL165: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_removed);
    goto CPyL138;
CPyL166: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r148);
    goto CPyL138;
CPyL167: ;
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_r153.f2);
    goto CPyL97;
CPyL168: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r152);
    goto CPyL138;
CPyL169: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r152);
    goto CPyL138;
CPyL170: ;
    CPy_DECREF(cpy_r_state);
    goto CPyL96;
CPyL171: ;
    CPy_DECREF(cpy_r_sources);
    CPy_DECREF(cpy_r_state);
    CPy_DECREF(cpy_r_changed);
    CPy_DECREF(cpy_r_removed);
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_r152);
    goto CPyL91;
CPyL172: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r163);
    goto CPyL138;
CPyL173: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    goto CPyL138;
CPyL174: ;
    CPy_DECREF(cpy_r_messages);
    goto CPyL106;
CPyL175: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r194);
    goto CPyL138;
CPyL176: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_messages);
    goto CPyL138;
CPyL177: ;
    CPy_DECREF(cpy_r_r219);
    goto CPyL117;
CPyL178: ;
    CPyTagged_DECREF(cpy_r_n_notes);
    goto CPyL126;
CPyL179: ;
    CPyTagged_DecRef(cpy_r_status);
    goto CPyL138;
CPyL180: ;
    CPy_DecRef(cpy_r_messages);
    CPyTagged_DecRef(cpy_r_status);
    goto CPyL138;
CPyL181: ;
    CPy_DECREF(cpy_r_messages);
    goto CPyL135;
CPyL182: ;
    CPy_DecRef(cpy_r_messages);
    CPyTagged_DecRef(cpy_r_status);
    CPy_DecRef(cpy_r_r250);
    goto CPyL138;
}

PyObject *CPyPy_dmypy_server___Server___initialize_fine_grained(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"sources", "is_tty", "terminal_width", 0};
    static CPyArg_Parser parser = {"OOO:initialize_fine_grained", kwlist, 0};
    PyObject *obj_sources;
    PyObject *obj_is_tty;
    PyObject *obj_terminal_width;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sources, &obj_is_tty, &obj_terminal_width)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    char arg_is_tty;
    if (unlikely(!PyBool_Check(obj_is_tty))) {
        CPy_TypeError("bool", obj_is_tty); goto fail;
    } else
        arg_is_tty = obj_is_tty == Py_True;
    CPyTagged arg_terminal_width;
    if (likely(PyLong_Check(obj_terminal_width)))
        arg_terminal_width = CPyTagged_BorrowFromObject(obj_terminal_width);
    else {
        CPy_TypeError("int", obj_terminal_width); goto fail;
    }
    PyObject *retval = CPyDef_dmypy_server___Server___initialize_fine_grained(arg_self, arg_sources, arg_is_tty, arg_terminal_width);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "initialize_fine_grained", 441, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___fine_grained_increment(PyObject *cpy_r_self, PyObject *cpy_r_sources, PyObject *cpy_r_remove, PyObject *cpy_r_update) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_manager;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    double cpy_r_r13;
    char cpy_r_r14;
    double cpy_r_t0;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    tuple_T2OO cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_changed;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_removed;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    tuple_T2OO cpy_r_r44;
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
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    double cpy_r_r64;
    char cpy_r_r65;
    double cpy_r_t1;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    double cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyPtr cpy_r_r80;
    CPyPtr cpy_r_r81;
    CPyPtr cpy_r_r82;
    CPyPtr cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_messages;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    double cpy_r_r95;
    char cpy_r_r96;
    double cpy_r_t2;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    double cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject **cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    CPyPtr cpy_r_r111;
    CPyPtr cpy_r_r112;
    CPyPtr cpy_r_r113;
    CPyPtr cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    double cpy_r_r118;
    double cpy_r_r119;
    CPyPtr cpy_r_r120;
    int64_t cpy_r_r121;
    CPyTagged cpy_r_r122;
    CPyPtr cpy_r_r123;
    int64_t cpy_r_r124;
    CPyTagged cpy_r_r125;
    CPyTagged cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    if (cpy_r_remove != NULL) goto CPyL66;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_remove = cpy_r_r0;
CPyL2: ;
    if (cpy_r_update != NULL) goto CPyL67;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_update = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    if (cpy_r_r4) {
        goto CPyL7;
    } else
        goto CPyL68;
CPyL5: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 543, CPyStatic_dmypy_server___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r6 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment", 544, CPyStatic_dmypy_server___globals, "mypy.server.update.FineGrainedBuildManager", cpy_r_r6);
        goto CPyL69;
    }
    cpy_r_r8 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r7)->_manager;
    CPy_INCREF(cpy_r_r8);
    cpy_r_manager = cpy_r_r8;
    cpy_r_r9 = CPyModule_time;
    cpy_r_r10 = CPyStatics[147]; /* 'time' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 546, CPyStatic_dmypy_server___globals);
        goto CPyL70;
    }
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r11, 0, 0, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 546, CPyStatic_dmypy_server___globals);
        goto CPyL70;
    }
    cpy_r_r13 = PyFloat_AsDouble(cpy_r_r12);
    if (cpy_r_r13 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r12); cpy_r_r13 = -113.0;
    }
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 == -113.0;
    if (unlikely(cpy_r_r14)) goto CPyL12;
CPyL11: ;
    cpy_r_t0 = cpy_r_r13;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_remove == cpy_r_r15;
    if (cpy_r_r16) {
        goto CPyL13;
    } else
        goto CPyL17;
CPyL12: ;
    cpy_r_r17 = PyErr_Occurred();
    if (unlikely(cpy_r_r17 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 546, CPyStatic_dmypy_server___globals);
        goto CPyL70;
    } else
        goto CPyL11;
CPyL13: ;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_update == cpy_r_r18;
    if (cpy_r_r19) {
        goto CPyL71;
    } else
        goto CPyL17;
CPyL14: ;
    cpy_r_r20 = CPyDef_dmypy_server___Server___update_sources(cpy_r_self, cpy_r_sources);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 550, CPyStatic_dmypy_server___globals);
        goto CPyL72;
    }
    cpy_r_r21 = CPyDef_dmypy_server___Server___find_changed(cpy_r_self, cpy_r_sources);
    if (unlikely(cpy_r_r21.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 551, CPyStatic_dmypy_server___globals);
        goto CPyL72;
    }
    cpy_r_r22 = cpy_r_r21.f0;
    CPy_INCREF(cpy_r_r22);
    cpy_r_changed = cpy_r_r22;
    cpy_r_r23 = cpy_r_r21.f1;
    CPy_INCREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r21.f0);
    CPy_DECREF(cpy_r_r21.f1);
    cpy_r_removed = cpy_r_r23;
    goto CPyL33;
CPyL17: ;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_remove != cpy_r_r24;
    if (!cpy_r_r25) goto CPyL73;
    CPy_INCREF(cpy_r_remove);
    if (likely(cpy_r_remove != Py_None))
        cpy_r_r26 = cpy_r_remove;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment", 530, CPyStatic_dmypy_server___globals, "list", cpy_r_remove);
        goto CPyL70;
    }
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_r26)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    CPy_DECREF(cpy_r_r26);
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = cpy_r_r29 != 0;
    if (!cpy_r_r30) goto CPyL73;
    if (likely(cpy_r_remove != Py_None))
        cpy_r_r31 = cpy_r_remove;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment", 555, CPyStatic_dmypy_server___globals, "list", cpy_r_remove);
        goto CPyL74;
    }
    cpy_r_r32 = cpy_r_r31;
    goto CPyL24;
CPyL22: ;
    cpy_r_r33 = PyList_New(0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 555, CPyStatic_dmypy_server___globals);
        goto CPyL74;
    }
    cpy_r_r32 = cpy_r_r33;
CPyL24: ;
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_update != cpy_r_r34;
    if (!cpy_r_r35) goto CPyL75;
    CPy_INCREF(cpy_r_update);
    if (likely(cpy_r_update != Py_None))
        cpy_r_r36 = cpy_r_update;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment", 531, CPyStatic_dmypy_server___globals, "list", cpy_r_update);
        goto CPyL76;
    }
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r36)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    CPy_DECREF(cpy_r_r36);
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = cpy_r_r39 != 0;
    if (!cpy_r_r40) goto CPyL75;
    if (likely(cpy_r_update != Py_None))
        cpy_r_r41 = cpy_r_update;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment", 555, CPyStatic_dmypy_server___globals, "list", cpy_r_update);
        goto CPyL77;
    }
    cpy_r_r42 = cpy_r_r41;
    goto CPyL31;
CPyL29: ;
    cpy_r_r43 = PyList_New(0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 555, CPyStatic_dmypy_server___globals);
        goto CPyL77;
    }
    cpy_r_r42 = cpy_r_r43;
CPyL31: ;
    cpy_r_r44 = CPyDef_dmypy_server___Server___update_changed(cpy_r_self, cpy_r_sources, cpy_r_r32, cpy_r_r42);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 555, CPyStatic_dmypy_server___globals);
        goto CPyL72;
    }
    cpy_r_r45 = cpy_r_r44.f0;
    CPy_INCREF(cpy_r_r45);
    cpy_r_changed = cpy_r_r45;
    cpy_r_r46 = cpy_r_r44.f1;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r44.f0);
    CPy_DECREF(cpy_r_r44.f1);
    cpy_r_removed = cpy_r_r46;
CPyL33: ;
    cpy_r_r47 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    if (likely(cpy_r_r47 != Py_None))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment", 557, CPyStatic_dmypy_server___globals, "mypy.server.update.FineGrainedBuildManager", cpy_r_r47);
        goto CPyL78;
    }
    cpy_r_r49 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r48)->_graph;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r50 = PySet_New(NULL);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 557, CPyStatic_dmypy_server___globals);
        goto CPyL79;
    }
    cpy_r_r51 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_search_paths;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = CPyDef_dmypy_server___Server___find_added_suppressed(cpy_r_self, cpy_r_r49, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 556, CPyStatic_dmypy_server___globals);
        goto CPyL78;
    }
    cpy_r_r53 = PyNumber_InPlaceAdd(cpy_r_changed, cpy_r_r52);
    CPy_DECREF(cpy_r_changed);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 556, CPyStatic_dmypy_server___globals);
        goto CPyL80;
    }
    if (likely(PyList_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment", 556, CPyStatic_dmypy_server___globals, "list", cpy_r_r53);
        goto CPyL80;
    }
    cpy_r_changed = cpy_r_r54;
    cpy_r_r55 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_options;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_data_dir;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = NULL;
    cpy_r_r58 = CPyDef_modulefinder___compute_search_paths(cpy_r_sources, cpy_r_r55, cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 559, CPyStatic_dmypy_server___globals);
        goto CPyL78;
    }
    CPy_DECREF(((mypy___build___BuildManagerObject *)cpy_r_manager)->_search_paths);
    ((mypy___build___BuildManagerObject *)cpy_r_manager)->_search_paths = cpy_r_r58;
    cpy_r_r60 = CPyModule_time;
    cpy_r_r61 = CPyStatics[147]; /* 'time' */
    cpy_r_r62 = CPyObject_GetAttr(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 560, CPyStatic_dmypy_server___globals);
        goto CPyL78;
    }
    cpy_r_r63 = _PyObject_Vectorcall(cpy_r_r62, 0, 0, 0);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 560, CPyStatic_dmypy_server___globals);
        goto CPyL78;
    }
    cpy_r_r64 = PyFloat_AsDouble(cpy_r_r63);
    if (cpy_r_r64 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r63); cpy_r_r64 = -113.0;
    }
    CPy_DECREF(cpy_r_r63);
    cpy_r_r65 = cpy_r_r64 == -113.0;
    if (unlikely(cpy_r_r65)) goto CPyL43;
CPyL42: ;
    cpy_r_t1 = cpy_r_r64;
    cpy_r_r66 = CPyStatics[163]; /* '' */
    cpy_r_r67 = CPyStatics[1964]; /* 'fine-grained increment: find_changed: ' */
    cpy_r_r68 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r69 = cpy_r_t1 - cpy_r_t0;
    cpy_r_r70 = CPyStatics[440]; /* '.3f' */
    cpy_r_r71 = CPyStatics[193]; /* 'format' */
    cpy_r_r72 = PyFloat_FromDouble(cpy_r_r69);
    PyObject *cpy_r_r73[3] = {cpy_r_r68, cpy_r_r72, cpy_r_r70};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = PyObject_VectorcallMethod(cpy_r_r71, cpy_r_r74, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 561, CPyStatic_dmypy_server___globals);
        goto CPyL81;
    } else
        goto CPyL44;
CPyL43: ;
    cpy_r_r76 = PyErr_Occurred();
    if (unlikely(cpy_r_r76 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 560, CPyStatic_dmypy_server___globals);
        goto CPyL78;
    } else
        goto CPyL42;
CPyL44: ;
    CPy_DECREF(cpy_r_r72);
    if (likely(PyUnicode_Check(cpy_r_r75)))
        cpy_r_r77 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment", 561, CPyStatic_dmypy_server___globals, "str", cpy_r_r75);
        goto CPyL78;
    }
    cpy_r_r78 = CPyStatics[1417]; /* 's' */
    cpy_r_r79 = PyList_New(3);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 561, CPyStatic_dmypy_server___globals);
        goto CPyL82;
    }
    cpy_r_r80 = (CPyPtr)&((PyListObject *)cpy_r_r79)->ob_item;
    cpy_r_r81 = *(CPyPtr *)cpy_r_r80;
    CPy_INCREF(cpy_r_r67);
    *(PyObject * *)cpy_r_r81 = cpy_r_r67;
    cpy_r_r82 = cpy_r_r81 + 8;
    *(PyObject * *)cpy_r_r82 = cpy_r_r77;
    cpy_r_r83 = cpy_r_r81 + 16;
    CPy_INCREF(cpy_r_r78);
    *(PyObject * *)cpy_r_r83 = cpy_r_r78;
    cpy_r_r84 = PyUnicode_Join(cpy_r_r66, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 561, CPyStatic_dmypy_server___globals);
        goto CPyL78;
    }
    cpy_r_r85 = PyTuple_Pack(1, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 561, CPyStatic_dmypy_server___globals);
        goto CPyL78;
    }
    cpy_r_r86 = CPyDef_mypy___build___BuildManager___log(cpy_r_manager, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 561, CPyStatic_dmypy_server___globals);
        goto CPyL78;
    }
    cpy_r_r87 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    CPy_INCREF(cpy_r_r87);
    if (likely(cpy_r_r87 != Py_None))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment", 562, CPyStatic_dmypy_server___globals, "mypy.server.update.FineGrainedBuildManager", cpy_r_r87);
        goto CPyL78;
    }
    cpy_r_r89 = 2;
    cpy_r_r90 = CPyDef_update___FineGrainedBuildManager___update(cpy_r_r88, cpy_r_changed, cpy_r_removed, cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 562, CPyStatic_dmypy_server___globals);
        goto CPyL78;
    }
    cpy_r_messages = cpy_r_r90;
    cpy_r_r91 = CPyModule_time;
    cpy_r_r92 = CPyStatics[147]; /* 'time' */
    cpy_r_r93 = CPyObject_GetAttr(cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 563, CPyStatic_dmypy_server___globals);
        goto CPyL83;
    }
    cpy_r_r94 = _PyObject_Vectorcall(cpy_r_r93, 0, 0, 0);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 563, CPyStatic_dmypy_server___globals);
        goto CPyL83;
    }
    cpy_r_r95 = PyFloat_AsDouble(cpy_r_r94);
    if (cpy_r_r95 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r94); cpy_r_r95 = -113.0;
    }
    CPy_DECREF(cpy_r_r94);
    cpy_r_r96 = cpy_r_r95 == -113.0;
    if (unlikely(cpy_r_r96)) goto CPyL55;
CPyL54: ;
    cpy_r_t2 = cpy_r_r95;
    cpy_r_r97 = CPyStatics[163]; /* '' */
    cpy_r_r98 = CPyStatics[1965]; /* 'fine-grained increment: update: ' */
    cpy_r_r99 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r100 = cpy_r_t2 - cpy_r_t1;
    cpy_r_r101 = CPyStatics[440]; /* '.3f' */
    cpy_r_r102 = CPyStatics[193]; /* 'format' */
    cpy_r_r103 = PyFloat_FromDouble(cpy_r_r100);
    PyObject *cpy_r_r104[3] = {cpy_r_r99, cpy_r_r103, cpy_r_r101};
    cpy_r_r105 = (PyObject **)&cpy_r_r104;
    cpy_r_r106 = PyObject_VectorcallMethod(cpy_r_r102, cpy_r_r105, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 564, CPyStatic_dmypy_server___globals);
        goto CPyL84;
    } else
        goto CPyL56;
CPyL55: ;
    cpy_r_r107 = PyErr_Occurred();
    if (unlikely(cpy_r_r107 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 563, CPyStatic_dmypy_server___globals);
        goto CPyL83;
    } else
        goto CPyL54;
CPyL56: ;
    CPy_DECREF(cpy_r_r103);
    if (likely(PyUnicode_Check(cpy_r_r106)))
        cpy_r_r108 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment", 564, CPyStatic_dmypy_server___globals, "str", cpy_r_r106);
        goto CPyL83;
    }
    cpy_r_r109 = CPyStatics[1417]; /* 's' */
    cpy_r_r110 = PyList_New(3);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 564, CPyStatic_dmypy_server___globals);
        goto CPyL85;
    }
    cpy_r_r111 = (CPyPtr)&((PyListObject *)cpy_r_r110)->ob_item;
    cpy_r_r112 = *(CPyPtr *)cpy_r_r111;
    CPy_INCREF(cpy_r_r98);
    *(PyObject * *)cpy_r_r112 = cpy_r_r98;
    cpy_r_r113 = cpy_r_r112 + 8;
    *(PyObject * *)cpy_r_r113 = cpy_r_r108;
    cpy_r_r114 = cpy_r_r112 + 16;
    CPy_INCREF(cpy_r_r109);
    *(PyObject * *)cpy_r_r114 = cpy_r_r109;
    cpy_r_r115 = PyUnicode_Join(cpy_r_r97, cpy_r_r110);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 564, CPyStatic_dmypy_server___globals);
        goto CPyL83;
    }
    cpy_r_r116 = PyTuple_Pack(1, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 564, CPyStatic_dmypy_server___globals);
        goto CPyL83;
    }
    cpy_r_r117 = CPyDef_mypy___build___BuildManager___log(cpy_r_manager, cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 564, CPyStatic_dmypy_server___globals);
        goto CPyL83;
    }
    cpy_r_r118 = cpy_r_t1 - cpy_r_t0;
    cpy_r_r119 = cpy_r_t2 - cpy_r_t1;
    cpy_r_r120 = (CPyPtr)&((PyVarObject *)cpy_r_removed)->ob_size;
    cpy_r_r121 = *(int64_t *)cpy_r_r120;
    CPy_DECREF(cpy_r_removed);
    cpy_r_r122 = cpy_r_r121 << 1;
    cpy_r_r123 = (CPyPtr)&((PyVarObject *)cpy_r_changed)->ob_size;
    cpy_r_r124 = *(int64_t *)cpy_r_r123;
    CPy_DECREF(cpy_r_changed);
    cpy_r_r125 = cpy_r_r124 << 1;
    cpy_r_r126 = CPyTagged_Add(cpy_r_r122, cpy_r_r125);
    cpy_r_r127 = CPyStatics[1959]; /* 'find_changes_time' */
    cpy_r_r128 = CPyStatics[1960]; /* 'fg_update_time' */
    cpy_r_r129 = CPyStatics[1961]; /* 'files_changed' */
    cpy_r_r130 = PyFloat_FromDouble(cpy_r_r118);
    cpy_r_r131 = PyFloat_FromDouble(cpy_r_r119);
    cpy_r_r132 = CPyTagged_StealAsObject(cpy_r_r126);
    cpy_r_r133 = CPyDict_Build(3, cpy_r_r127, cpy_r_r130, cpy_r_r128, cpy_r_r131, cpy_r_r129, cpy_r_r132);
    CPy_DECREF(cpy_r_r130);
    CPy_DECREF(cpy_r_r131);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 565, CPyStatic_dmypy_server___globals);
        goto CPyL86;
    }
    cpy_r_r134 = CPyDef_mypy___build___BuildManager___add_stats(cpy_r_manager, cpy_r_r133);
    CPy_DECREF(cpy_r_r133);
    CPy_DECREF(cpy_r_manager);
    if (unlikely(cpy_r_r134 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 565, CPyStatic_dmypy_server___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_sources);
    if (((mypy___dmypy_server___ServerObject *)cpy_r_self)->_previous_sources != NULL) {
        CPy_DECREF(((mypy___dmypy_server___ServerObject *)cpy_r_self)->_previous_sources);
    }
    ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_previous_sources = cpy_r_sources;
    cpy_r_r135 = 1;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 571, CPyStatic_dmypy_server___globals);
        goto CPyL87;
    }
    return cpy_r_messages;
CPyL65: ;
    cpy_r_r136 = NULL;
    return cpy_r_r136;
CPyL66: ;
    CPy_INCREF(cpy_r_remove);
    goto CPyL2;
CPyL67: ;
    CPy_INCREF(cpy_r_update);
    goto CPyL4;
CPyL68: ;
    CPy_DECREF(cpy_r_remove);
    CPy_DECREF(cpy_r_update);
    goto CPyL5;
CPyL69: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    goto CPyL65;
CPyL70: ;
    CPy_DecRef(cpy_r_remove);
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_manager);
    goto CPyL65;
CPyL71: ;
    CPy_DECREF(cpy_r_remove);
    CPy_DECREF(cpy_r_update);
    goto CPyL14;
CPyL72: ;
    CPy_DecRef(cpy_r_manager);
    goto CPyL65;
CPyL73: ;
    CPy_DECREF(cpy_r_remove);
    goto CPyL22;
CPyL74: ;
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_manager);
    goto CPyL65;
CPyL75: ;
    CPy_DECREF(cpy_r_update);
    goto CPyL29;
CPyL76: ;
    CPy_DecRef(cpy_r_update);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_r32);
    goto CPyL65;
CPyL77: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_r32);
    goto CPyL65;
CPyL78: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    goto CPyL65;
CPyL79: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r49);
    goto CPyL65;
CPyL80: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_removed);
    goto CPyL65;
CPyL81: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r72);
    goto CPyL65;
CPyL82: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r77);
    goto CPyL65;
CPyL83: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_messages);
    goto CPyL65;
CPyL84: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r103);
    goto CPyL65;
CPyL85: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r108);
    goto CPyL65;
CPyL86: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_messages);
    goto CPyL65;
CPyL87: ;
    CPy_DecRef(cpy_r_messages);
    goto CPyL65;
}

PyObject *CPyPy_dmypy_server___Server___fine_grained_increment(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"sources", "remove", "update", 0};
    static CPyArg_Parser parser = {"O|OO:fine_grained_increment", kwlist, 0};
    PyObject *obj_sources;
    PyObject *obj_remove = NULL;
    PyObject *obj_update = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sources, &obj_remove, &obj_update)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    PyObject *arg_remove;
    if (obj_remove == NULL) {
        arg_remove = NULL;
        goto __LL1956;
    }
    if (PyList_Check(obj_remove))
        arg_remove = obj_remove;
    else {
        arg_remove = NULL;
    }
    if (arg_remove != NULL) goto __LL1956;
    if (obj_remove == Py_None)
        arg_remove = obj_remove;
    else {
        arg_remove = NULL;
    }
    if (arg_remove != NULL) goto __LL1956;
    CPy_TypeError("list or None", obj_remove); 
    goto fail;
__LL1956: ;
    PyObject *arg_update;
    if (obj_update == NULL) {
        arg_update = NULL;
        goto __LL1957;
    }
    if (PyList_Check(obj_update))
        arg_update = obj_update;
    else {
        arg_update = NULL;
    }
    if (arg_update != NULL) goto __LL1957;
    if (obj_update == Py_None)
        arg_update = obj_update;
    else {
        arg_update = NULL;
    }
    if (arg_update != NULL) goto __LL1957;
    CPy_TypeError("list or None", obj_update); 
    goto fail;
__LL1957: ;
    PyObject *retval = CPyDef_dmypy_server___Server___fine_grained_increment(arg_self, arg_sources, arg_remove, arg_update);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment", 527, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "__get__", -1, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_module, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_refresh_file;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "refresh_file", "refresh_file_fine_grained_increment_follow_imports_Server_obj", "__mypyc_env__", 625, CPyStatic_dmypy_server___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_refresh_file;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "refresh_file", "fine_grained_increment_follow_imports_Server_env", "refresh_file", -1, CPyStatic_dmypy_server___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_refresh_file = cpy_r_r1;
    CPy_DECREF(cpy_r_refresh_file);
    cpy_r_r2 = ((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_fine_grained_manager;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fine_grained_manager' of 'fine_grained_increment_follow_imports_Server_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "refresh_file", 626, CPyStatic_dmypy_server___globals);
        goto CPyL7;
    }
CPyL3: ;
    cpy_r_r3.f0 = cpy_r_module;
    cpy_r_r3.f1 = cpy_r_path;
    CPy_INCREF(cpy_r_r3.f0);
    CPy_INCREF(cpy_r_r3.f1);
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "refresh_file", 626, CPyStatic_dmypy_server___globals);
        goto CPyL9;
    }
    cpy_r_r5 = PyTuple_New(2);
    if (unlikely(cpy_r_r5 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1958 = cpy_r_r3.f0;
    PyTuple_SET_ITEM(cpy_r_r5, 0, __tmp1958);
    PyObject *__tmp1959 = cpy_r_r3.f1;
    PyTuple_SET_ITEM(cpy_r_r5, 1, __tmp1959);
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    *(PyObject * *)cpy_r_r7 = cpy_r_r5;
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "refresh_file", 626, CPyStatic_dmypy_server___globals);
        goto CPyL10;
    }
    cpy_r_r9 = CPyDef_update___FineGrainedBuildManager___update(cpy_r_r2, cpy_r_r4, cpy_r_r8, 1);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "refresh_file", 626, CPyStatic_dmypy_server___globals);
        goto CPyL7;
    }
    return cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3.f0);
    CPy_DecRef(cpy_r_r3.f1);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    goto CPyL7;
}

PyObject *CPyPy_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"module", "path", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_module, &obj_path)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
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
    PyObject *retval = CPyDef_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj_____call__(arg___mypyc_self__, arg_module, arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "refresh_file", 625, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___fine_grained_increment_follow_imports(PyObject *cpy_r_self, PyObject *cpy_r_sources) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    double cpy_r_r5;
    char cpy_r_r6;
    double cpy_r_t0;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_graph;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_manager;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_orig_modules;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_changed_paths;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    double cpy_r_r32;
    char cpy_r_r33;
    double cpy_r_t1;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    double cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    CPyPtr cpy_r_r49;
    CPyPtr cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_seen;
    tuple_T2OO cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_changed;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_new_files;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_messages;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_worklist;
    CPyPtr cpy_r_r79;
    int64_t cpy_r_r80;
    CPyTagged cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    tuple_T2OO cpy_r_r84;
    tuple_T2OO cpy_r_module;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_sources2;
    PyObject *cpy_r_r91;
    CPyTagged cpy_r_r92;
    CPyPtr cpy_r_r93;
    int64_t cpy_r_r94;
    CPyTagged cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_source_2;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    CPyTagged cpy_r_r106;
    tuple_T2OO cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    double cpy_r_r119;
    char cpy_r_r120;
    double cpy_r_t2;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    CPyTagged cpy_r_r126;
    CPyPtr cpy_r_r127;
    int64_t cpy_r_r128;
    CPyTagged cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    tuple_T2OO cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_module_id;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_state;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_new_messages;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    CPyTagged cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    double cpy_r_r149;
    char cpy_r_r150;
    double cpy_r_t3;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_new_unsuppressed;
    CPyPtr cpy_r_r154;
    int64_t cpy_r_r155;
    CPyTagged cpy_r_r156;
    char cpy_r_r157;
    CPyPtr cpy_r_r158;
    int64_t cpy_r_r159;
    PyObject *cpy_r_r160;
    CPyTagged cpy_r_r161;
    CPyPtr cpy_r_r162;
    int64_t cpy_r_r163;
    CPyTagged cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    tuple_T2OO cpy_r_r167;
    tuple_T2OO cpy_r_mod;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    CPyTagged cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    CPyTagged cpy_r_r180;
    CPyPtr cpy_r_r181;
    int64_t cpy_r_r182;
    CPyTagged cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    tuple_T2OO cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    CPyTagged cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    double cpy_r_r202;
    char cpy_r_r203;
    double cpy_r_t4;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_to_delete;
    CPyTagged cpy_r_r206;
    CPyPtr cpy_r_r207;
    int64_t cpy_r_r208;
    CPyTagged cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    int32_t cpy_r_r213;
    char cpy_r_r214;
    char cpy_r_r215;
    char cpy_r_r216;
    int32_t cpy_r_r217;
    char cpy_r_r218;
    char cpy_r_r219;
    char cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_module_path;
    PyObject *cpy_r_r224;
    char cpy_r_r225;
    char cpy_r_r226;
    PyObject *cpy_r_r227;
    tuple_T2OO cpy_r_r228;
    PyObject *cpy_r_r229;
    int32_t cpy_r_r230;
    char cpy_r_r231;
    CPyTagged cpy_r_r232;
    CPyPtr cpy_r_r233;
    int64_t cpy_r_r234;
    CPyTagged cpy_r_r235;
    char cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    char cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    char cpy_r_r244;
    PyObject *cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    double cpy_r_r253;
    char cpy_r_r254;
    double cpy_r_t5;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    double cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject **cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    CPyPtr cpy_r_r269;
    CPyPtr cpy_r_r270;
    CPyPtr cpy_r_r271;
    CPyPtr cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    char cpy_r_r275;
    double cpy_r_r276;
    double cpy_r_r277;
    double cpy_r_r278;
    double cpy_r_r279;
    double cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    char cpy_r_r292;
    PyObject *cpy_r_r293;
    cpy_r_r0 = CPyDef_dmypy_server___fine_grained_increment_follow_imports_Server_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 574, CPyStatic_dmypy_server___globals);
        goto CPyL154;
    }
    cpy_r_r1 = CPyModule_time;
    cpy_r_r2 = CPyStatics[147]; /* 'time' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 576, CPyStatic_dmypy_server___globals);
        goto CPyL155;
    }
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r3, 0, 0, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 576, CPyStatic_dmypy_server___globals);
        goto CPyL155;
    }
    cpy_r_r5 = PyFloat_AsDouble(cpy_r_r4);
    if (cpy_r_r5 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r4); cpy_r_r5 = -113.0;
    }
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 == -113.0;
    if (unlikely(cpy_r_r6)) goto CPyL5;
CPyL4: ;
    cpy_r_t0 = cpy_r_r5;
    cpy_r_r7 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_r7 != cpy_r_r8;
    if (cpy_r_r9) {
        goto CPyL8;
    } else
        goto CPyL156;
CPyL5: ;
    cpy_r_r10 = PyErr_Occurred();
    if (unlikely(cpy_r_r10 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 576, CPyStatic_dmypy_server___globals);
        goto CPyL155;
    } else
        goto CPyL4;
CPyL6: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 580, CPyStatic_dmypy_server___globals);
        goto CPyL154;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r12 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    CPy_INCREF(cpy_r_r12);
    if (likely(cpy_r_r12 != Py_None))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 581, CPyStatic_dmypy_server___globals, "mypy.server.update.FineGrainedBuildManager", cpy_r_r12);
        goto CPyL155;
    }
    if (((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_fine_grained_manager != NULL) {
        CPy_DECREF(((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_fine_grained_manager);
    }
    ((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_fine_grained_manager = cpy_r_r13;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 581, CPyStatic_dmypy_server___globals);
        goto CPyL155;
    }
    cpy_r_r15 = ((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_fine_grained_manager;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", "fine_grained_increment_follow_imports_Server_env", "fine_grained_manager", 582, CPyStatic_dmypy_server___globals);
        goto CPyL155;
    }
    CPy_INCREF(cpy_r_r15);
CPyL11: ;
    cpy_r_r16 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r15)->_graph;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_graph = cpy_r_r16;
    cpy_r_r17 = ((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_fine_grained_manager;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", "fine_grained_increment_follow_imports_Server_env", "fine_grained_manager", 583, CPyStatic_dmypy_server___globals);
        goto CPyL157;
    }
    CPy_INCREF(cpy_r_r17);
CPyL12: ;
    cpy_r_r18 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r17)->_manager;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    cpy_r_manager = cpy_r_r18;
    cpy_r_r19 = CPyDict_Keys(cpy_r_graph);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 585, CPyStatic_dmypy_server___globals);
        goto CPyL158;
    }
    cpy_r_orig_modules = cpy_r_r19;
    cpy_r_r20 = CPyDef_dmypy_server___Server___update_sources(cpy_r_self, cpy_r_sources);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 587, CPyStatic_dmypy_server___globals);
        goto CPyL159;
    }
    cpy_r_r21 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fswatcher;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", "Server", "fswatcher", 588, CPyStatic_dmypy_server___globals);
        goto CPyL159;
    }
    CPy_INCREF(cpy_r_r21);
CPyL15: ;
    cpy_r_r22 = CPyDef_fswatcher___FileSystemWatcher___find_changed(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 588, CPyStatic_dmypy_server___globals);
        goto CPyL159;
    }
    cpy_r_changed_paths = cpy_r_r22;
    cpy_r_r23 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_options;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_data_dir;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = NULL;
    cpy_r_r26 = CPyDef_modulefinder___compute_search_paths(cpy_r_sources, cpy_r_r23, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 589, CPyStatic_dmypy_server___globals);
        goto CPyL160;
    }
    CPy_DECREF(((mypy___build___BuildManagerObject *)cpy_r_manager)->_search_paths);
    ((mypy___build___BuildManagerObject *)cpy_r_manager)->_search_paths = cpy_r_r26;
    cpy_r_r28 = CPyModule_time;
    cpy_r_r29 = CPyStatics[147]; /* 'time' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 591, CPyStatic_dmypy_server___globals);
        goto CPyL160;
    }
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r30, 0, 0, 0);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 591, CPyStatic_dmypy_server___globals);
        goto CPyL160;
    }
    cpy_r_r32 = PyFloat_AsDouble(cpy_r_r31);
    if (cpy_r_r32 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r31); cpy_r_r32 = -113.0;
    }
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 == -113.0;
    if (unlikely(cpy_r_r33)) goto CPyL21;
CPyL20: ;
    cpy_r_t1 = cpy_r_r32;
    cpy_r_r34 = CPyStatics[163]; /* '' */
    cpy_r_r35 = CPyStatics[1964]; /* 'fine-grained increment: find_changed: ' */
    cpy_r_r36 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r37 = cpy_r_t1 - cpy_r_t0;
    cpy_r_r38 = CPyStatics[440]; /* '.3f' */
    cpy_r_r39 = CPyStatics[193]; /* 'format' */
    cpy_r_r40 = PyFloat_FromDouble(cpy_r_r37);
    PyObject *cpy_r_r41[3] = {cpy_r_r36, cpy_r_r40, cpy_r_r38};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = PyObject_VectorcallMethod(cpy_r_r39, cpy_r_r42, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 592, CPyStatic_dmypy_server___globals);
        goto CPyL161;
    } else
        goto CPyL22;
CPyL21: ;
    cpy_r_r44 = PyErr_Occurred();
    if (unlikely(cpy_r_r44 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 591, CPyStatic_dmypy_server___globals);
        goto CPyL160;
    } else
        goto CPyL20;
CPyL22: ;
    CPy_DECREF(cpy_r_r40);
    if (likely(PyUnicode_Check(cpy_r_r43)))
        cpy_r_r45 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 592, CPyStatic_dmypy_server___globals, "str", cpy_r_r43);
        goto CPyL160;
    }
    cpy_r_r46 = CPyStatics[1417]; /* 's' */
    cpy_r_r47 = PyList_New(3);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 592, CPyStatic_dmypy_server___globals);
        goto CPyL162;
    }
    cpy_r_r48 = (CPyPtr)&((PyListObject *)cpy_r_r47)->ob_item;
    cpy_r_r49 = *(CPyPtr *)cpy_r_r48;
    CPy_INCREF(cpy_r_r35);
    *(PyObject * *)cpy_r_r49 = cpy_r_r35;
    cpy_r_r50 = cpy_r_r49 + 8;
    *(PyObject * *)cpy_r_r50 = cpy_r_r45;
    cpy_r_r51 = cpy_r_r49 + 16;
    CPy_INCREF(cpy_r_r46);
    *(PyObject * *)cpy_r_r51 = cpy_r_r46;
    cpy_r_r52 = PyUnicode_Join(cpy_r_r34, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 592, CPyStatic_dmypy_server___globals);
        goto CPyL160;
    }
    cpy_r_r53 = PyTuple_Pack(1, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 592, CPyStatic_dmypy_server___globals);
        goto CPyL160;
    }
    cpy_r_r54 = CPyDef_mypy___build___BuildManager___log(cpy_r_manager, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 592, CPyStatic_dmypy_server___globals);
        goto CPyL160;
    }
    cpy_r_r55 = PySet_New(NULL);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 594, CPyStatic_dmypy_server___globals);
        goto CPyL160;
    }
    cpy_r_r56 = 0;
CPyL29: ;
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 << 1;
    cpy_r_r60 = (Py_ssize_t)cpy_r_r56 < (Py_ssize_t)cpy_r_r59;
    if (!cpy_r_r60) goto CPyL33;
    cpy_r_r61 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r56);
    if (likely(Py_TYPE(cpy_r_r61) == CPyType_modulefinder___BuildSource))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 594, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r61);
        goto CPyL163;
    }
    cpy_r_source = cpy_r_r62;
    cpy_r_r63 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_module;
    CPy_INCREF(cpy_r_r63);
    CPy_DECREF(cpy_r_source);
    cpy_r_r64 = PySet_Add(cpy_r_r55, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 594, CPyStatic_dmypy_server___globals);
        goto CPyL163;
    }
    cpy_r_r66 = cpy_r_r56 + 2;
    cpy_r_r56 = cpy_r_r66;
    goto CPyL29;
CPyL33: ;
    cpy_r_seen = cpy_r_r55;
    cpy_r_r67 = CPyDef_dmypy_server___Server___find_reachable_changed_modules(cpy_r_self, cpy_r_sources, cpy_r_graph, cpy_r_seen, cpy_r_changed_paths);
    if (unlikely(cpy_r_r67.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 597, CPyStatic_dmypy_server___globals);
        goto CPyL164;
    }
    cpy_r_r68 = cpy_r_r67.f0;
    CPy_INCREF(cpy_r_r68);
    cpy_r_changed = cpy_r_r68;
    cpy_r_r69 = cpy_r_r67.f1;
    CPy_INCREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r67.f0);
    CPy_DECREF(cpy_r_r67.f1);
    cpy_r_new_files = cpy_r_r69;
    cpy_r_r70 = CPyList_Extend(cpy_r_sources, cpy_r_new_files);
    CPy_DECREF(cpy_r_new_files);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 600, CPyStatic_dmypy_server___globals);
        goto CPyL165;
    } else
        goto CPyL166;
CPyL35: ;
    cpy_r_r71 = ((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_fine_grained_manager;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", "fine_grained_increment_follow_imports_Server_env", "fine_grained_manager", 603, CPyStatic_dmypy_server___globals);
        goto CPyL165;
    }
    CPy_INCREF(cpy_r_r71);
CPyL36: ;
    cpy_r_r72 = PyList_New(0);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 603, CPyStatic_dmypy_server___globals);
        goto CPyL167;
    }
    cpy_r_r73 = CPyDef_update___FineGrainedBuildManager___update(cpy_r_r71, cpy_r_changed, cpy_r_r72, 1);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 603, CPyStatic_dmypy_server___globals);
        goto CPyL165;
    }
    cpy_r_messages = cpy_r_r73;
    cpy_r_r74 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r75[1] = {cpy_r_changed};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = PyObject_VectorcallMethod(cpy_r_r74, cpy_r_r76, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 606, CPyStatic_dmypy_server___globals);
        goto CPyL168;
    }
    CPy_DECREF(cpy_r_changed);
    if (likely(PyList_Check(cpy_r_r77)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 606, CPyStatic_dmypy_server___globals, "list", cpy_r_r77);
        goto CPyL169;
    }
    cpy_r_worklist = cpy_r_r78;
CPyL41: ;
    cpy_r_r79 = (CPyPtr)&((PyVarObject *)cpy_r_worklist)->ob_size;
    cpy_r_r80 = *(int64_t *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 << 1;
    cpy_r_r82 = cpy_r_r81 != 0;
    if (!cpy_r_r82) goto CPyL170;
    cpy_r_r83 = CPyList_PopLast(cpy_r_worklist);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 608, CPyStatic_dmypy_server___globals);
        goto CPyL171;
    }
    PyObject *__tmp1960;
    if (unlikely(!(PyTuple_Check(cpy_r_r83) && PyTuple_GET_SIZE(cpy_r_r83) == 2))) {
        __tmp1960 = NULL;
        goto __LL1961;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r83, 0))))
        __tmp1960 = PyTuple_GET_ITEM(cpy_r_r83, 0);
    else {
        __tmp1960 = NULL;
    }
    if (__tmp1960 == NULL) goto __LL1961;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r83, 1))))
        __tmp1960 = PyTuple_GET_ITEM(cpy_r_r83, 1);
    else {
        __tmp1960 = NULL;
    }
    if (__tmp1960 == NULL) goto __LL1961;
    __tmp1960 = cpy_r_r83;
__LL1961: ;
    if (unlikely(__tmp1960 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r83); cpy_r_r84 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1962 = PyTuple_GET_ITEM(cpy_r_r83, 0);
        CPy_INCREF(__tmp1962);
        PyObject *__tmp1963;
        if (likely(PyUnicode_Check(__tmp1962)))
            __tmp1963 = __tmp1962;
        else {
            CPy_TypeError("str", __tmp1962); 
            __tmp1963 = NULL;
        }
        cpy_r_r84.f0 = __tmp1963;
        PyObject *__tmp1964 = PyTuple_GET_ITEM(cpy_r_r83, 1);
        CPy_INCREF(__tmp1964);
        PyObject *__tmp1965;
        if (likely(PyUnicode_Check(__tmp1964)))
            __tmp1965 = __tmp1964;
        else {
            CPy_TypeError("str", __tmp1964); 
            __tmp1965 = NULL;
        }
        cpy_r_r84.f1 = __tmp1965;
    }
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 608, CPyStatic_dmypy_server___globals);
        goto CPyL171;
    }
    cpy_r_module = cpy_r_r84;
    cpy_r_r85 = cpy_r_module.f0;
    CPy_INCREF(cpy_r_r85);
    cpy_r_r86 = PyDict_Contains(cpy_r_graph, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 609, CPyStatic_dmypy_server___globals);
        goto CPyL172;
    }
    cpy_r_r88 = cpy_r_r86;
    cpy_r_r89 = cpy_r_r88 ^ 1;
    if (cpy_r_r89) {
        goto CPyL173;
    } else
        goto CPyL174;
CPyL46: ;
    cpy_r_r90 = CPyDef_dmypy_server___Server___direct_imports(cpy_r_self, cpy_r_module, cpy_r_graph);
    CPy_DECREF(cpy_r_module.f0);
    CPy_DECREF(cpy_r_module.f1);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 611, CPyStatic_dmypy_server___globals);
        goto CPyL175;
    }
    cpy_r_sources2 = cpy_r_r90;
    cpy_r_r91 = PyList_New(0);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 615, CPyStatic_dmypy_server___globals);
        goto CPyL176;
    }
    cpy_r_r92 = 0;
CPyL49: ;
    cpy_r_r93 = (CPyPtr)&((PyVarObject *)cpy_r_sources2)->ob_size;
    cpy_r_r94 = *(int64_t *)cpy_r_r93;
    cpy_r_r95 = cpy_r_r94 << 1;
    cpy_r_r96 = (Py_ssize_t)cpy_r_r92 < (Py_ssize_t)cpy_r_r95;
    if (!cpy_r_r96) goto CPyL177;
    cpy_r_r97 = CPyList_GetItemUnsafe(cpy_r_sources2, cpy_r_r92);
    if (likely(Py_TYPE(cpy_r_r97) == CPyType_modulefinder___BuildSource))
        cpy_r_r98 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 615, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r97);
        goto CPyL178;
    }
    cpy_r_source_2 = cpy_r_r98;
    cpy_r_r99 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_2)->_module;
    CPy_INCREF(cpy_r_r99);
    cpy_r_r100 = PySet_Contains(cpy_r_seen, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 615, CPyStatic_dmypy_server___globals);
        goto CPyL179;
    }
    cpy_r_r102 = cpy_r_r100;
    cpy_r_r103 = cpy_r_r102 ^ 1;
    if (!cpy_r_r103) goto CPyL180;
    cpy_r_r104 = PyList_Append(cpy_r_r91, cpy_r_source_2);
    CPy_DECREF(cpy_r_source_2);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 615, CPyStatic_dmypy_server___globals);
        goto CPyL178;
    }
CPyL54: ;
    cpy_r_r106 = cpy_r_r92 + 2;
    cpy_r_r92 = cpy_r_r106;
    goto CPyL49;
CPyL55: ;
    cpy_r_sources2 = cpy_r_r91;
    cpy_r_r107 = CPyDef_dmypy_server___Server___find_reachable_changed_modules(cpy_r_self, cpy_r_sources2, cpy_r_graph, cpy_r_seen, cpy_r_changed_paths);
    CPy_DECREF(cpy_r_sources2);
    if (unlikely(cpy_r_r107.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 616, CPyStatic_dmypy_server___globals);
        goto CPyL175;
    }
    cpy_r_r108 = cpy_r_r107.f0;
    CPy_INCREF(cpy_r_r108);
    cpy_r_changed = cpy_r_r108;
    cpy_r_r109 = cpy_r_r107.f1;
    CPy_INCREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r107.f0);
    CPy_DECREF(cpy_r_r107.f1);
    cpy_r_new_files = cpy_r_r109;
    cpy_r_r110 = CPyDef_dmypy_server___Server___update_sources(cpy_r_self, cpy_r_new_files);
    CPy_DECREF(cpy_r_new_files);
    if (unlikely(cpy_r_r110 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 619, CPyStatic_dmypy_server___globals);
        goto CPyL181;
    }
    cpy_r_r111 = ((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_fine_grained_manager;
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", "fine_grained_increment_follow_imports_Server_env", "fine_grained_manager", 620, CPyStatic_dmypy_server___globals);
        goto CPyL181;
    }
    CPy_INCREF(cpy_r_r111);
CPyL58: ;
    cpy_r_r112 = PyList_New(0);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 620, CPyStatic_dmypy_server___globals);
        goto CPyL182;
    }
    cpy_r_r113 = CPyDef_update___FineGrainedBuildManager___update(cpy_r_r111, cpy_r_changed, cpy_r_r112, 1);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 620, CPyStatic_dmypy_server___globals);
        goto CPyL181;
    }
    cpy_r_messages = cpy_r_r113;
    cpy_r_r114 = CPyList_Extend(cpy_r_worklist, cpy_r_changed);
    CPy_DECREF(cpy_r_changed);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 621, CPyStatic_dmypy_server___globals);
        goto CPyL171;
    } else
        goto CPyL183;
CPyL61: ;
    cpy_r_r115 = CPyModule_time;
    cpy_r_r116 = CPyStatics[147]; /* 'time' */
    cpy_r_r117 = CPyObject_GetAttr(cpy_r_r115, cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 623, CPyStatic_dmypy_server___globals);
        goto CPyL184;
    }
    cpy_r_r118 = _PyObject_Vectorcall(cpy_r_r117, 0, 0, 0);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 623, CPyStatic_dmypy_server___globals);
        goto CPyL184;
    }
    cpy_r_r119 = PyFloat_AsDouble(cpy_r_r118);
    if (cpy_r_r119 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r118); cpy_r_r119 = -113.0;
    }
    CPy_DECREF(cpy_r_r118);
    cpy_r_r120 = cpy_r_r119 == -113.0;
    if (unlikely(cpy_r_r120)) goto CPyL65;
CPyL64: ;
    cpy_r_t2 = cpy_r_r119;
    cpy_r_r121 = CPyDef_dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_obj();
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 625, CPyStatic_dmypy_server___globals);
        goto CPyL184;
    } else
        goto CPyL66;
CPyL65: ;
    cpy_r_r122 = PyErr_Occurred();
    if (unlikely(cpy_r_r122 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 623, CPyStatic_dmypy_server___globals);
        goto CPyL184;
    } else
        goto CPyL64;
CPyL66: ;
    CPy_INCREF(cpy_r_r0);
    if (((mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject *)cpy_r_r121)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject *)cpy_r_r121)->___mypyc_env__);
    }
    ((mypy___dmypy_server___refresh_file_fine_grained_increment_follow_imports_Server_objObject *)cpy_r_r121)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r123 = 1;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 625, CPyStatic_dmypy_server___globals);
        goto CPyL185;
    }
    if (((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_refresh_file != NULL) {
        CPy_DECREF(((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_refresh_file);
    }
    ((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_refresh_file = cpy_r_r121;
    cpy_r_r124 = 1;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 625, CPyStatic_dmypy_server___globals);
        goto CPyL184;
    }
    cpy_r_r125 = CPyDict_Items(cpy_r_graph);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 628, CPyStatic_dmypy_server___globals);
        goto CPyL184;
    }
    cpy_r_r126 = 0;
CPyL70: ;
    cpy_r_r127 = (CPyPtr)&((PyVarObject *)cpy_r_r125)->ob_size;
    cpy_r_r128 = *(int64_t *)cpy_r_r127;
    cpy_r_r129 = cpy_r_r128 << 1;
    cpy_r_r130 = (Py_ssize_t)cpy_r_r126 < (Py_ssize_t)cpy_r_r129;
    if (!cpy_r_r130) goto CPyL186;
    cpy_r_r131 = CPyList_GetItemUnsafe(cpy_r_r125, cpy_r_r126);
    PyObject *__tmp1966;
    if (unlikely(!(PyTuple_Check(cpy_r_r131) && PyTuple_GET_SIZE(cpy_r_r131) == 2))) {
        __tmp1966 = NULL;
        goto __LL1967;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r131, 0))))
        __tmp1966 = PyTuple_GET_ITEM(cpy_r_r131, 0);
    else {
        __tmp1966 = NULL;
    }
    if (__tmp1966 == NULL) goto __LL1967;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r131, 1)) == CPyType_mypy___build___State))
        __tmp1966 = PyTuple_GET_ITEM(cpy_r_r131, 1);
    else {
        __tmp1966 = NULL;
    }
    if (__tmp1966 == NULL) goto __LL1967;
    __tmp1966 = cpy_r_r131;
__LL1967: ;
    if (unlikely(__tmp1966 == NULL)) {
        CPy_TypeError("tuple[str, mypy.build.State]", cpy_r_r131); cpy_r_r132 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1968 = PyTuple_GET_ITEM(cpy_r_r131, 0);
        CPy_INCREF(__tmp1968);
        PyObject *__tmp1969;
        if (likely(PyUnicode_Check(__tmp1968)))
            __tmp1969 = __tmp1968;
        else {
            CPy_TypeError("str", __tmp1968); 
            __tmp1969 = NULL;
        }
        cpy_r_r132.f0 = __tmp1969;
        PyObject *__tmp1970 = PyTuple_GET_ITEM(cpy_r_r131, 1);
        CPy_INCREF(__tmp1970);
        PyObject *__tmp1971;
        if (likely(Py_TYPE(__tmp1970) == CPyType_mypy___build___State))
            __tmp1971 = __tmp1970;
        else {
            CPy_TypeError("mypy.build.State", __tmp1970); 
            __tmp1971 = NULL;
        }
        cpy_r_r132.f1 = __tmp1971;
    }
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r132.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 628, CPyStatic_dmypy_server___globals);
        goto CPyL187;
    }
    cpy_r_r133 = cpy_r_r132.f0;
    CPy_INCREF(cpy_r_r133);
    cpy_r_module_id = cpy_r_r133;
    cpy_r_r134 = cpy_r_r132.f1;
    CPy_INCREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r132.f0);
    CPy_DECREF(cpy_r_r132.f1);
    cpy_r_state = cpy_r_r134;
    cpy_r_r135 = ((mypy___build___StateObject *)cpy_r_state)->_path;
    CPy_INCREF(cpy_r_r135);
    CPy_DECREF(cpy_r_state);
    cpy_r_r136 = ((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_fine_grained_manager;
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", "fine_grained_increment_follow_imports_Server_env", "fine_grained_manager", 630, CPyStatic_dmypy_server___globals);
        goto CPyL188;
    }
    CPy_INCREF(cpy_r_r136);
CPyL73: ;
    cpy_r_r137 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r136)->_deps;
    CPy_INCREF(cpy_r_r137);
    CPy_DECREF(cpy_r_r136);
    cpy_r_r138 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r138);
    cpy_r_r139 = ((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_refresh_file;
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", "fine_grained_increment_follow_imports_Server_env", "refresh_file", 630, CPyStatic_dmypy_server___globals);
        goto CPyL189;
    }
    CPy_INCREF(cpy_r_r139);
CPyL74: ;
    cpy_r_r140 = CPyDef_update___refresh_suppressed_submodules(cpy_r_module_id, cpy_r_r135, cpy_r_r137, cpy_r_graph, cpy_r_r138, cpy_r_r139);
    CPy_DECREF(cpy_r_module_id);
    CPy_DECREF(cpy_r_r135);
    CPy_DECREF(cpy_r_r137);
    CPy_DECREF(cpy_r_r138);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 629, CPyStatic_dmypy_server___globals);
        goto CPyL187;
    }
    cpy_r_new_messages = cpy_r_r140;
    cpy_r_r141 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r142 = cpy_r_new_messages != cpy_r_r141;
    if (cpy_r_r142) {
        goto CPyL190;
    } else
        goto CPyL191;
CPyL76: ;
    if (likely(cpy_r_new_messages != Py_None))
        cpy_r_r143 = cpy_r_new_messages;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 633, CPyStatic_dmypy_server___globals, "list", cpy_r_new_messages);
        goto CPyL192;
    }
    cpy_r_messages = cpy_r_r143;
CPyL78: ;
    cpy_r_r144 = cpy_r_r126 + 2;
    cpy_r_r126 = cpy_r_r144;
    goto CPyL70;
CPyL79: ;
    cpy_r_r145 = CPyModule_time;
    cpy_r_r146 = CPyStatics[147]; /* 'time' */
    cpy_r_r147 = CPyObject_GetAttr(cpy_r_r145, cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 635, CPyStatic_dmypy_server___globals);
        goto CPyL184;
    }
    cpy_r_r148 = _PyObject_Vectorcall(cpy_r_r147, 0, 0, 0);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 635, CPyStatic_dmypy_server___globals);
        goto CPyL184;
    }
    cpy_r_r149 = PyFloat_AsDouble(cpy_r_r148);
    if (cpy_r_r149 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r148); cpy_r_r149 = -113.0;
    }
    CPy_DECREF(cpy_r_r148);
    cpy_r_r150 = cpy_r_r149 == -113.0;
    if (unlikely(cpy_r_r150)) goto CPyL83;
CPyL82: ;
    cpy_r_t3 = cpy_r_r149;
    goto CPyL84;
CPyL83: ;
    cpy_r_r151 = PyErr_Occurred();
    if (unlikely(cpy_r_r151 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 635, CPyStatic_dmypy_server___globals);
        goto CPyL184;
    } else
        goto CPyL82;
CPyL84: ;
    if (!1) goto CPyL109;
    cpy_r_r152 = ((mypy___build___BuildManagerObject *)cpy_r_manager)->_search_paths;
    CPy_INCREF(cpy_r_r152);
    cpy_r_r153 = CPyDef_dmypy_server___Server___find_added_suppressed(cpy_r_self, cpy_r_graph, cpy_r_seen, cpy_r_r152);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 640, CPyStatic_dmypy_server___globals);
        goto CPyL184;
    }
    cpy_r_new_unsuppressed = cpy_r_r153;
    cpy_r_r154 = (CPyPtr)&((PyVarObject *)cpy_r_new_unsuppressed)->ob_size;
    cpy_r_r155 = *(int64_t *)cpy_r_r154;
    cpy_r_r156 = cpy_r_r155 << 1;
    cpy_r_r157 = cpy_r_r156 != 0;
    if (cpy_r_r157) {
        goto CPyL193;
    } else
        goto CPyL194;
CPyL87: ;
    cpy_r_r158 = (CPyPtr)&((PyVarObject *)cpy_r_new_unsuppressed)->ob_size;
    cpy_r_r159 = *(int64_t *)cpy_r_r158;
    cpy_r_r160 = PyList_New(cpy_r_r159);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 643, CPyStatic_dmypy_server___globals);
        goto CPyL195;
    }
    cpy_r_r161 = 0;
CPyL89: ;
    cpy_r_r162 = (CPyPtr)&((PyVarObject *)cpy_r_new_unsuppressed)->ob_size;
    cpy_r_r163 = *(int64_t *)cpy_r_r162;
    cpy_r_r164 = cpy_r_r163 << 1;
    cpy_r_r165 = (Py_ssize_t)cpy_r_r161 < (Py_ssize_t)cpy_r_r164;
    if (!cpy_r_r165) goto CPyL94;
    cpy_r_r166 = CPyList_GetItemUnsafe(cpy_r_new_unsuppressed, cpy_r_r161);
    PyObject *__tmp1972;
    if (unlikely(!(PyTuple_Check(cpy_r_r166) && PyTuple_GET_SIZE(cpy_r_r166) == 2))) {
        __tmp1972 = NULL;
        goto __LL1973;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r166, 0))))
        __tmp1972 = PyTuple_GET_ITEM(cpy_r_r166, 0);
    else {
        __tmp1972 = NULL;
    }
    if (__tmp1972 == NULL) goto __LL1973;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r166, 1))))
        __tmp1972 = PyTuple_GET_ITEM(cpy_r_r166, 1);
    else {
        __tmp1972 = NULL;
    }
    if (__tmp1972 == NULL) goto __LL1973;
    __tmp1972 = cpy_r_r166;
__LL1973: ;
    if (unlikely(__tmp1972 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r166); cpy_r_r167 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1974 = PyTuple_GET_ITEM(cpy_r_r166, 0);
        CPy_INCREF(__tmp1974);
        PyObject *__tmp1975;
        if (likely(PyUnicode_Check(__tmp1974)))
            __tmp1975 = __tmp1974;
        else {
            CPy_TypeError("str", __tmp1974); 
            __tmp1975 = NULL;
        }
        cpy_r_r167.f0 = __tmp1975;
        PyObject *__tmp1976 = PyTuple_GET_ITEM(cpy_r_r166, 1);
        CPy_INCREF(__tmp1976);
        PyObject *__tmp1977;
        if (likely(PyUnicode_Check(__tmp1976)))
            __tmp1977 = __tmp1976;
        else {
            CPy_TypeError("str", __tmp1976); 
            __tmp1977 = NULL;
        }
        cpy_r_r167.f1 = __tmp1977;
    }
    CPy_DECREF(cpy_r_r166);
    if (unlikely(cpy_r_r167.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 643, CPyStatic_dmypy_server___globals);
        goto CPyL196;
    }
    cpy_r_mod = cpy_r_r167;
    cpy_r_r168 = cpy_r_mod.f1;
    CPy_INCREF(cpy_r_r168);
    cpy_r_r169 = cpy_r_mod.f0;
    CPy_INCREF(cpy_r_r169);
    CPy_DECREF(cpy_r_mod.f0);
    CPy_DECREF(cpy_r_mod.f1);
    cpy_r_r170 = NULL;
    cpy_r_r171 = NULL;
    cpy_r_r172 = CPyDef_modulefinder___BuildSource(cpy_r_r168, cpy_r_r169, cpy_r_r170, cpy_r_r171, 1);
    CPy_DECREF(cpy_r_r168);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 643, CPyStatic_dmypy_server___globals);
        goto CPyL196;
    }
    cpy_r_r173 = CPyList_SetItemUnsafe(cpy_r_r160, cpy_r_r161, cpy_r_r172);
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 643, CPyStatic_dmypy_server___globals);
        goto CPyL196;
    }
    cpy_r_r174 = cpy_r_r161 + 2;
    cpy_r_r161 = cpy_r_r174;
    goto CPyL89;
CPyL94: ;
    cpy_r_new_files = cpy_r_r160;
    cpy_r_r175 = CPyList_Extend(cpy_r_sources, cpy_r_new_files);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 644, CPyStatic_dmypy_server___globals);
        goto CPyL197;
    } else
        goto CPyL198;
CPyL95: ;
    cpy_r_r176 = CPyDef_dmypy_server___Server___update_sources(cpy_r_self, cpy_r_new_files);
    CPy_DECREF(cpy_r_new_files);
    if (unlikely(cpy_r_r176 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 645, CPyStatic_dmypy_server___globals);
        goto CPyL195;
    }
    cpy_r_r177 = ((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_fine_grained_manager;
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", "fine_grained_increment_follow_imports_Server_env", "fine_grained_manager", 646, CPyStatic_dmypy_server___globals);
        goto CPyL195;
    }
    CPy_INCREF(cpy_r_r177);
CPyL97: ;
    cpy_r_r178 = PyList_New(0);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 646, CPyStatic_dmypy_server___globals);
        goto CPyL199;
    }
    cpy_r_r179 = CPyDef_update___FineGrainedBuildManager___update(cpy_r_r177, cpy_r_new_unsuppressed, cpy_r_r178, 1);
    CPy_DECREF(cpy_r_r178);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 646, CPyStatic_dmypy_server___globals);
        goto CPyL195;
    }
    cpy_r_messages = cpy_r_r179;
    cpy_r_r180 = 0;
CPyL100: ;
    cpy_r_r181 = (CPyPtr)&((PyVarObject *)cpy_r_new_unsuppressed)->ob_size;
    cpy_r_r182 = *(int64_t *)cpy_r_r181;
    cpy_r_r183 = cpy_r_r182 << 1;
    cpy_r_r184 = (Py_ssize_t)cpy_r_r180 < (Py_ssize_t)cpy_r_r183;
    if (!cpy_r_r184) goto CPyL200;
    cpy_r_r185 = CPyList_GetItemUnsafe(cpy_r_new_unsuppressed, cpy_r_r180);
    PyObject *__tmp1978;
    if (unlikely(!(PyTuple_Check(cpy_r_r185) && PyTuple_GET_SIZE(cpy_r_r185) == 2))) {
        __tmp1978 = NULL;
        goto __LL1979;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r185, 0))))
        __tmp1978 = PyTuple_GET_ITEM(cpy_r_r185, 0);
    else {
        __tmp1978 = NULL;
    }
    if (__tmp1978 == NULL) goto __LL1979;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r185, 1))))
        __tmp1978 = PyTuple_GET_ITEM(cpy_r_r185, 1);
    else {
        __tmp1978 = NULL;
    }
    if (__tmp1978 == NULL) goto __LL1979;
    __tmp1978 = cpy_r_r185;
__LL1979: ;
    if (unlikely(__tmp1978 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r185); cpy_r_r186 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1980 = PyTuple_GET_ITEM(cpy_r_r185, 0);
        CPy_INCREF(__tmp1980);
        PyObject *__tmp1981;
        if (likely(PyUnicode_Check(__tmp1980)))
            __tmp1981 = __tmp1980;
        else {
            CPy_TypeError("str", __tmp1980); 
            __tmp1981 = NULL;
        }
        cpy_r_r186.f0 = __tmp1981;
        PyObject *__tmp1982 = PyTuple_GET_ITEM(cpy_r_r185, 1);
        CPy_INCREF(__tmp1982);
        PyObject *__tmp1983;
        if (likely(PyUnicode_Check(__tmp1982)))
            __tmp1983 = __tmp1982;
        else {
            CPy_TypeError("str", __tmp1982); 
            __tmp1983 = NULL;
        }
        cpy_r_r186.f1 = __tmp1983;
    }
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r186.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 648, CPyStatic_dmypy_server___globals);
        goto CPyL201;
    }
    cpy_r_r187 = cpy_r_r186.f0;
    CPy_INCREF(cpy_r_r187);
    cpy_r_module_id = cpy_r_r187;
    cpy_r_r188 = cpy_r_r186.f1;
    CPy_INCREF(cpy_r_r188);
    CPy_DECREF(cpy_r_r186.f0);
    CPy_DECREF(cpy_r_r186.f1);
    cpy_r_path = cpy_r_r188;
    cpy_r_r189 = ((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_fine_grained_manager;
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", "fine_grained_increment_follow_imports_Server_env", "fine_grained_manager", 650, CPyStatic_dmypy_server___globals);
        goto CPyL202;
    }
    CPy_INCREF(cpy_r_r189);
CPyL103: ;
    cpy_r_r190 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r189)->_deps;
    CPy_INCREF(cpy_r_r190);
    CPy_DECREF(cpy_r_r189);
    cpy_r_r191 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r191);
    cpy_r_r192 = ((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_refresh_file;
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", "fine_grained_increment_follow_imports_Server_env", "refresh_file", 650, CPyStatic_dmypy_server___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r192);
CPyL104: ;
    cpy_r_r193 = CPyDef_update___refresh_suppressed_submodules(cpy_r_module_id, cpy_r_path, cpy_r_r190, cpy_r_graph, cpy_r_r191, cpy_r_r192);
    CPy_DECREF(cpy_r_module_id);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_r190);
    CPy_DECREF(cpy_r_r191);
    CPy_DECREF(cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 649, CPyStatic_dmypy_server___globals);
        goto CPyL201;
    }
    cpy_r_new_messages = cpy_r_r193;
    cpy_r_r194 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r195 = cpy_r_new_messages != cpy_r_r194;
    if (cpy_r_r195) {
        goto CPyL204;
    } else
        goto CPyL205;
CPyL106: ;
    if (likely(cpy_r_new_messages != Py_None))
        cpy_r_r196 = cpy_r_new_messages;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 653, CPyStatic_dmypy_server___globals, "list", cpy_r_new_messages);
        goto CPyL195;
    }
    cpy_r_messages = cpy_r_r196;
CPyL108: ;
    cpy_r_r197 = cpy_r_r180 + 2;
    cpy_r_r180 = cpy_r_r197;
    goto CPyL100;
CPyL109: ;
    cpy_r_r198 = CPyModule_time;
    cpy_r_r199 = CPyStatics[147]; /* 'time' */
    cpy_r_r200 = CPyObject_GetAttr(cpy_r_r198, cpy_r_r199);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 655, CPyStatic_dmypy_server___globals);
        goto CPyL184;
    }
    cpy_r_r201 = _PyObject_Vectorcall(cpy_r_r200, 0, 0, 0);
    CPy_DECREF(cpy_r_r200);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 655, CPyStatic_dmypy_server___globals);
        goto CPyL184;
    }
    cpy_r_r202 = PyFloat_AsDouble(cpy_r_r201);
    if (cpy_r_r202 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r201); cpy_r_r202 = -113.0;
    }
    CPy_DECREF(cpy_r_r201);
    cpy_r_r203 = cpy_r_r202 == -113.0;
    if (unlikely(cpy_r_r203)) goto CPyL113;
CPyL112: ;
    cpy_r_t4 = cpy_r_r202;
    cpy_r_r204 = PyList_New(0);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 658, CPyStatic_dmypy_server___globals);
        goto CPyL184;
    } else
        goto CPyL114;
CPyL113: ;
    cpy_r_r205 = PyErr_Occurred();
    if (unlikely(cpy_r_r205 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 655, CPyStatic_dmypy_server___globals);
        goto CPyL184;
    } else
        goto CPyL112;
CPyL114: ;
    cpy_r_to_delete = cpy_r_r204;
    cpy_r_r206 = 0;
CPyL115: ;
    cpy_r_r207 = (CPyPtr)&((PyVarObject *)cpy_r_orig_modules)->ob_size;
    cpy_r_r208 = *(int64_t *)cpy_r_r207;
    cpy_r_r209 = cpy_r_r208 << 1;
    cpy_r_r210 = (Py_ssize_t)cpy_r_r206 < (Py_ssize_t)cpy_r_r209;
    if (!cpy_r_r210) goto CPyL206;
    cpy_r_r211 = CPyList_GetItemUnsafe(cpy_r_orig_modules, cpy_r_r206);
    if (likely(PyUnicode_Check(cpy_r_r211)))
        cpy_r_r212 = cpy_r_r211;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 659, CPyStatic_dmypy_server___globals, "str", cpy_r_r211);
        goto CPyL207;
    }
    cpy_r_module_id = cpy_r_r212;
    cpy_r_r213 = PyDict_Contains(cpy_r_graph, cpy_r_module_id);
    cpy_r_r214 = cpy_r_r213 >= 0;
    if (unlikely(!cpy_r_r214)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 660, CPyStatic_dmypy_server___globals);
        goto CPyL208;
    }
    cpy_r_r215 = cpy_r_r213;
    cpy_r_r216 = cpy_r_r215 ^ 1;
    if (cpy_r_r216) goto CPyL209;
    cpy_r_r217 = PySet_Contains(cpy_r_seen, cpy_r_module_id);
    cpy_r_r218 = cpy_r_r217 >= 0;
    if (unlikely(!cpy_r_r218)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 662, CPyStatic_dmypy_server___globals);
        goto CPyL208;
    }
    cpy_r_r219 = cpy_r_r217;
    cpy_r_r220 = cpy_r_r219 ^ 1;
    if (!cpy_r_r220) goto CPyL209;
    cpy_r_r221 = CPyDict_GetItem(cpy_r_graph, cpy_r_module_id);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 663, CPyStatic_dmypy_server___globals);
        goto CPyL208;
    }
    if (likely(Py_TYPE(cpy_r_r221) == CPyType_mypy___build___State))
        cpy_r_r222 = cpy_r_r221;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 663, CPyStatic_dmypy_server___globals, "mypy.build.State", cpy_r_r221);
        goto CPyL208;
    }
    cpy_r_r223 = ((mypy___build___StateObject *)cpy_r_r222)->_path;
    CPy_INCREF(cpy_r_r223);
    CPy_DECREF(cpy_r_r222);
    cpy_r_module_path = cpy_r_r223;
    cpy_r_r224 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r225 = cpy_r_module_path != cpy_r_r224;
    if (cpy_r_r225) {
        goto CPyL126;
    } else
        goto CPyL210;
CPyL124: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r226 = 0;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 664, CPyStatic_dmypy_server___globals);
        goto CPyL154;
    }
    CPy_Unreachable();
CPyL126: ;
    if (likely(cpy_r_module_path != Py_None))
        cpy_r_r227 = cpy_r_module_path;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 665, CPyStatic_dmypy_server___globals, "str", cpy_r_module_path);
        goto CPyL208;
    }
    cpy_r_r228.f0 = cpy_r_module_id;
    cpy_r_r228.f1 = cpy_r_r227;
    CPy_INCREF(cpy_r_r228.f0);
    CPy_INCREF(cpy_r_r228.f1);
    CPy_DECREF(cpy_r_module_id);
    CPy_DECREF(cpy_r_r227);
    cpy_r_r229 = PyTuple_New(2);
    if (unlikely(cpy_r_r229 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1984 = cpy_r_r228.f0;
    PyTuple_SET_ITEM(cpy_r_r229, 0, __tmp1984);
    PyObject *__tmp1985 = cpy_r_r228.f1;
    PyTuple_SET_ITEM(cpy_r_r229, 1, __tmp1985);
    cpy_r_r230 = PyList_Append(cpy_r_to_delete, cpy_r_r229);
    CPy_DECREF(cpy_r_r229);
    cpy_r_r231 = cpy_r_r230 >= 0;
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 665, CPyStatic_dmypy_server___globals);
        goto CPyL207;
    }
CPyL128: ;
    cpy_r_r232 = cpy_r_r206 + 2;
    cpy_r_r206 = cpy_r_r232;
    goto CPyL115;
CPyL129: ;
    cpy_r_r233 = (CPyPtr)&((PyVarObject *)cpy_r_to_delete)->ob_size;
    cpy_r_r234 = *(int64_t *)cpy_r_r233;
    cpy_r_r235 = cpy_r_r234 << 1;
    cpy_r_r236 = cpy_r_r235 != 0;
    if (cpy_r_r236) {
        goto CPyL211;
    } else
        goto CPyL212;
CPyL130: ;
    cpy_r_r237 = ((mypy___dmypy_server___fine_grained_increment_follow_imports_Server_envObject *)cpy_r_r0)->_fine_grained_manager;
    if (unlikely(cpy_r_r237 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fine_grained_manager' of 'fine_grained_increment_follow_imports_Server_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r237);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 667, CPyStatic_dmypy_server___globals);
        goto CPyL213;
    }
CPyL131: ;
    cpy_r_r238 = PyList_New(0);
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 667, CPyStatic_dmypy_server___globals);
        goto CPyL214;
    }
    cpy_r_r239 = 2;
    cpy_r_r240 = CPyDef_update___FineGrainedBuildManager___update(cpy_r_r237, cpy_r_r238, cpy_r_to_delete, cpy_r_r239);
    CPy_DECREF(cpy_r_r238);
    CPy_DECREF(cpy_r_to_delete);
    CPy_DECREF(cpy_r_r237);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 667, CPyStatic_dmypy_server___globals);
        goto CPyL215;
    }
    cpy_r_messages = cpy_r_r240;
CPyL134: ;
    cpy_r_r241 = CPyDef_dmypy_server___fix_module_deps(cpy_r_graph);
    if (unlikely(cpy_r_r241 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 669, CPyStatic_dmypy_server___globals);
        goto CPyL216;
    }
    cpy_r_r242 = NULL;
    cpy_r_r243 = CPyDef_dmypy_server___find_all_sources_in_build(cpy_r_graph, cpy_r_r242);
    CPy_DECREF(cpy_r_graph);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 671, CPyStatic_dmypy_server___globals);
        goto CPyL217;
    }
    if (((mypy___dmypy_server___ServerObject *)cpy_r_self)->_previous_sources != NULL) {
        CPy_DECREF(((mypy___dmypy_server___ServerObject *)cpy_r_self)->_previous_sources);
    }
    ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_previous_sources = cpy_r_r243;
    cpy_r_r244 = 1;
    if (unlikely(!cpy_r_r244)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 671, CPyStatic_dmypy_server___globals);
        goto CPyL217;
    }
    cpy_r_r245 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_previous_sources;
    if (unlikely(cpy_r_r245 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", "Server", "previous_sources", 672, CPyStatic_dmypy_server___globals);
        goto CPyL217;
    }
    CPy_INCREF(cpy_r_r245);
CPyL138: ;
    cpy_r_r246 = CPyDef_dmypy_server___Server___update_sources(cpy_r_self, cpy_r_r245);
    CPy_DECREF(cpy_r_r245);
    if (unlikely(cpy_r_r246 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 672, CPyStatic_dmypy_server___globals);
        goto CPyL217;
    }
    cpy_r_r247 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fswatcher;
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", "Server", "fswatcher", 675, CPyStatic_dmypy_server___globals);
        goto CPyL217;
    }
    CPy_INCREF(cpy_r_r247);
CPyL140: ;
    cpy_r_r248 = CPyDef_fswatcher___FileSystemWatcher___find_changed(cpy_r_r247);
    CPy_DECREF(cpy_r_r247);
    if (unlikely(cpy_r_r248 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 675, CPyStatic_dmypy_server___globals);
        goto CPyL217;
    } else
        goto CPyL218;
CPyL141: ;
    cpy_r_r249 = CPyModule_time;
    cpy_r_r250 = CPyStatics[147]; /* 'time' */
    cpy_r_r251 = CPyObject_GetAttr(cpy_r_r249, cpy_r_r250);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 677, CPyStatic_dmypy_server___globals);
        goto CPyL217;
    }
    cpy_r_r252 = _PyObject_Vectorcall(cpy_r_r251, 0, 0, 0);
    CPy_DECREF(cpy_r_r251);
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 677, CPyStatic_dmypy_server___globals);
        goto CPyL217;
    }
    cpy_r_r253 = PyFloat_AsDouble(cpy_r_r252);
    if (cpy_r_r253 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r252); cpy_r_r253 = -113.0;
    }
    CPy_DECREF(cpy_r_r252);
    cpy_r_r254 = cpy_r_r253 == -113.0;
    if (unlikely(cpy_r_r254)) goto CPyL145;
CPyL144: ;
    cpy_r_t5 = cpy_r_r253;
    cpy_r_r255 = CPyStatics[163]; /* '' */
    cpy_r_r256 = CPyStatics[1965]; /* 'fine-grained increment: update: ' */
    cpy_r_r257 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r258 = cpy_r_t5 - cpy_r_t1;
    cpy_r_r259 = CPyStatics[440]; /* '.3f' */
    cpy_r_r260 = CPyStatics[193]; /* 'format' */
    cpy_r_r261 = PyFloat_FromDouble(cpy_r_r258);
    PyObject *cpy_r_r262[3] = {cpy_r_r257, cpy_r_r261, cpy_r_r259};
    cpy_r_r263 = (PyObject **)&cpy_r_r262;
    cpy_r_r264 = PyObject_VectorcallMethod(cpy_r_r260, cpy_r_r263, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 679, CPyStatic_dmypy_server___globals);
        goto CPyL219;
    } else
        goto CPyL146;
CPyL145: ;
    cpy_r_r265 = PyErr_Occurred();
    if (unlikely(cpy_r_r265 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 677, CPyStatic_dmypy_server___globals);
        goto CPyL217;
    } else
        goto CPyL144;
CPyL146: ;
    CPy_DECREF(cpy_r_r261);
    if (likely(PyUnicode_Check(cpy_r_r264)))
        cpy_r_r266 = cpy_r_r264;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 679, CPyStatic_dmypy_server___globals, "str", cpy_r_r264);
        goto CPyL217;
    }
    cpy_r_r267 = CPyStatics[1417]; /* 's' */
    cpy_r_r268 = PyList_New(3);
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 679, CPyStatic_dmypy_server___globals);
        goto CPyL220;
    }
    cpy_r_r269 = (CPyPtr)&((PyListObject *)cpy_r_r268)->ob_item;
    cpy_r_r270 = *(CPyPtr *)cpy_r_r269;
    CPy_INCREF(cpy_r_r256);
    *(PyObject * *)cpy_r_r270 = cpy_r_r256;
    cpy_r_r271 = cpy_r_r270 + 8;
    *(PyObject * *)cpy_r_r271 = cpy_r_r266;
    cpy_r_r272 = cpy_r_r270 + 16;
    CPy_INCREF(cpy_r_r267);
    *(PyObject * *)cpy_r_r272 = cpy_r_r267;
    cpy_r_r273 = PyUnicode_Join(cpy_r_r255, cpy_r_r268);
    CPy_DECREF(cpy_r_r268);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 679, CPyStatic_dmypy_server___globals);
        goto CPyL217;
    }
    cpy_r_r274 = PyTuple_Pack(1, cpy_r_r273);
    CPy_DECREF(cpy_r_r273);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 679, CPyStatic_dmypy_server___globals);
        goto CPyL217;
    }
    cpy_r_r275 = CPyDef_mypy___build___BuildManager___log(cpy_r_manager, cpy_r_r274);
    CPy_DECREF(cpy_r_r274);
    if (unlikely(cpy_r_r275 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 679, CPyStatic_dmypy_server___globals);
        goto CPyL217;
    }
    cpy_r_r276 = cpy_r_t1 - cpy_r_t0;
    cpy_r_r277 = cpy_r_t2 - cpy_r_t1;
    cpy_r_r278 = cpy_r_t3 - cpy_r_t2;
    cpy_r_r279 = cpy_r_t4 - cpy_r_t3;
    cpy_r_r280 = cpy_r_t5 - cpy_r_t4;
    cpy_r_r281 = CPyStatics[1959]; /* 'find_changes_time' */
    cpy_r_r282 = CPyStatics[1960]; /* 'fg_update_time' */
    cpy_r_r283 = CPyStatics[1966]; /* 'refresh_suppressed_time' */
    cpy_r_r284 = CPyStatics[1967]; /* 'find_added_supressed_time' */
    cpy_r_r285 = CPyStatics[1968]; /* 'cleanup_time' */
    cpy_r_r286 = PyFloat_FromDouble(cpy_r_r276);
    cpy_r_r287 = PyFloat_FromDouble(cpy_r_r277);
    cpy_r_r288 = PyFloat_FromDouble(cpy_r_r278);
    cpy_r_r289 = PyFloat_FromDouble(cpy_r_r279);
    cpy_r_r290 = PyFloat_FromDouble(cpy_r_r280);
    cpy_r_r291 = CPyDict_Build(5, cpy_r_r281, cpy_r_r286, cpy_r_r282, cpy_r_r287, cpy_r_r283, cpy_r_r288, cpy_r_r284, cpy_r_r289, cpy_r_r285, cpy_r_r290);
    CPy_DECREF(cpy_r_r286);
    CPy_DECREF(cpy_r_r287);
    CPy_DECREF(cpy_r_r288);
    CPy_DECREF(cpy_r_r289);
    CPy_DECREF(cpy_r_r290);
    if (unlikely(cpy_r_r291 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 680, CPyStatic_dmypy_server___globals);
        goto CPyL217;
    }
    cpy_r_r292 = CPyDef_mypy___build___BuildManager___add_stats(cpy_r_manager, cpy_r_r291);
    CPy_DECREF(cpy_r_r291);
    CPy_DECREF(cpy_r_manager);
    if (unlikely(cpy_r_r292 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 680, CPyStatic_dmypy_server___globals);
        goto CPyL221;
    }
    return cpy_r_messages;
CPyL154: ;
    cpy_r_r293 = NULL;
    return cpy_r_r293;
CPyL155: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL154;
CPyL156: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL6;
CPyL157: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    goto CPyL154;
CPyL158: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    goto CPyL154;
CPyL159: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    goto CPyL154;
CPyL160: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    goto CPyL154;
CPyL161: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_r40);
    goto CPyL154;
CPyL162: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_r45);
    goto CPyL154;
CPyL163: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_r55);
    goto CPyL154;
CPyL164: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_seen);
    goto CPyL154;
CPyL165: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_changed);
    goto CPyL154;
CPyL166: ;
    CPy_DECREF(cpy_r_r70);
    goto CPyL35;
CPyL167: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r71);
    goto CPyL154;
CPyL168: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_messages);
    goto CPyL154;
CPyL169: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_messages);
    goto CPyL154;
CPyL170: ;
    CPy_DECREF(cpy_r_changed_paths);
    CPy_DECREF(cpy_r_worklist);
    goto CPyL61;
CPyL171: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_worklist);
    goto CPyL154;
CPyL172: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_module.f0);
    CPy_DecRef(cpy_r_module.f1);
    goto CPyL154;
CPyL173: ;
    CPy_DECREF(cpy_r_module.f0);
    CPy_DECREF(cpy_r_module.f1);
    goto CPyL41;
CPyL174: ;
    CPy_DECREF(cpy_r_messages);
    goto CPyL46;
CPyL175: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_worklist);
    goto CPyL154;
CPyL176: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_sources2);
    goto CPyL154;
CPyL177: ;
    CPy_DECREF(cpy_r_sources2);
    goto CPyL55;
CPyL178: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_sources2);
    CPy_DecRef(cpy_r_r91);
    goto CPyL154;
CPyL179: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_sources2);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_source_2);
    goto CPyL154;
CPyL180: ;
    CPy_DECREF(cpy_r_source_2);
    goto CPyL54;
CPyL181: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_worklist);
    goto CPyL154;
CPyL182: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_changed_paths);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_r111);
    goto CPyL154;
CPyL183: ;
    CPy_DECREF(cpy_r_r114);
    goto CPyL41;
CPyL184: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_messages);
    goto CPyL154;
CPyL185: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r121);
    goto CPyL154;
CPyL186: ;
    CPy_DECREF(cpy_r_r125);
    goto CPyL79;
CPyL187: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r125);
    goto CPyL154;
CPyL188: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_module_id);
    CPy_DecRef(cpy_r_r135);
    goto CPyL154;
CPyL189: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_module_id);
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r138);
    goto CPyL154;
CPyL190: ;
    CPy_DECREF(cpy_r_messages);
    goto CPyL76;
CPyL191: ;
    CPy_DECREF(cpy_r_new_messages);
    goto CPyL78;
CPyL192: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_r125);
    goto CPyL154;
CPyL193: ;
    CPy_DECREF(cpy_r_messages);
    goto CPyL87;
CPyL194: ;
    CPy_DECREF(cpy_r_new_unsuppressed);
    goto CPyL109;
CPyL195: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_new_unsuppressed);
    goto CPyL154;
CPyL196: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_new_unsuppressed);
    CPy_DecRef(cpy_r_r160);
    goto CPyL154;
CPyL197: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_new_files);
    CPy_DecRef(cpy_r_new_unsuppressed);
    goto CPyL154;
CPyL198: ;
    CPy_DECREF(cpy_r_r175);
    goto CPyL95;
CPyL199: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_new_unsuppressed);
    CPy_DecRef(cpy_r_r177);
    goto CPyL154;
CPyL200: ;
    CPy_DECREF(cpy_r_new_unsuppressed);
    goto CPyL84;
CPyL201: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_new_unsuppressed);
    goto CPyL154;
CPyL202: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_module_id);
    CPy_DecRef(cpy_r_new_unsuppressed);
    CPy_DecRef(cpy_r_path);
    goto CPyL154;
CPyL203: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_module_id);
    CPy_DecRef(cpy_r_new_unsuppressed);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r190);
    CPy_DecRef(cpy_r_r191);
    goto CPyL154;
CPyL204: ;
    CPy_DECREF(cpy_r_messages);
    goto CPyL106;
CPyL205: ;
    CPy_DECREF(cpy_r_new_messages);
    goto CPyL108;
CPyL206: ;
    CPy_DECREF(cpy_r_orig_modules);
    CPy_DECREF(cpy_r_seen);
    goto CPyL129;
CPyL207: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_to_delete);
    goto CPyL154;
CPyL208: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_orig_modules);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_module_id);
    CPy_DecRef(cpy_r_to_delete);
    goto CPyL154;
CPyL209: ;
    CPy_DECREF(cpy_r_module_id);
    goto CPyL128;
CPyL210: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_graph);
    CPy_DECREF(cpy_r_manager);
    CPy_DECREF(cpy_r_orig_modules);
    CPy_DECREF(cpy_r_seen);
    CPy_DECREF(cpy_r_messages);
    CPy_DECREF(cpy_r_module_id);
    CPy_DECREF(cpy_r_to_delete);
    CPy_DECREF(cpy_r_module_path);
    goto CPyL124;
CPyL211: ;
    CPy_DECREF(cpy_r_messages);
    goto CPyL130;
CPyL212: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_to_delete);
    goto CPyL134;
CPyL213: ;
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_to_delete);
    goto CPyL154;
CPyL214: ;
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_to_delete);
    CPy_DecRef(cpy_r_r237);
    goto CPyL154;
CPyL215: ;
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    goto CPyL154;
CPyL216: ;
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_messages);
    goto CPyL154;
CPyL217: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_messages);
    goto CPyL154;
CPyL218: ;
    CPy_DECREF(cpy_r_r248);
    goto CPyL141;
CPyL219: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r261);
    goto CPyL154;
CPyL220: ;
    CPy_DecRef(cpy_r_manager);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r266);
    goto CPyL154;
CPyL221: ;
    CPy_DecRef(cpy_r_messages);
    goto CPyL154;
}

PyObject *CPyPy_dmypy_server___Server___fine_grained_increment_follow_imports(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"sources", 0};
    static CPyArg_Parser parser = {"O:fine_grained_increment_follow_imports", kwlist, 0};
    PyObject *obj_sources;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_sources)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    PyObject *retval = CPyDef_dmypy_server___Server___fine_grained_increment_follow_imports(arg_self, arg_sources);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "fine_grained_increment_follow_imports", 574, CPyStatic_dmypy_server___globals);
    return NULL;
}

tuple_T2OO CPyDef_dmypy_server___Server___find_reachable_changed_modules(PyObject *cpy_r_self, PyObject *cpy_r_roots, PyObject *cpy_r_graph, PyObject *cpy_r_seen, PyObject *cpy_r_changed_paths) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_changed;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_new_files;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_worklist;
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
    PyObject *cpy_r_source;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_nxt;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    tuple_T2OO cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_state;
    PyObject *cpy_r_r60;
    CPyTagged cpy_r_r61;
    CPyPtr cpy_r_r62;
    int64_t cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_dep;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
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
    PyObject *cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    CPyTagged cpy_r_r85;
    tuple_T2OO cpy_r_r86;
    tuple_T2OO cpy_r_r87;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 711, CPyStatic_dmypy_server___globals);
        goto CPyL45;
    }
    cpy_r_changed = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 712, CPyStatic_dmypy_server___globals);
        goto CPyL46;
    }
    cpy_r_new_files = cpy_r_r1;
    cpy_r_r2 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r3[1] = {cpy_r_roots};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 713, CPyStatic_dmypy_server___globals);
        goto CPyL47;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 713, CPyStatic_dmypy_server___globals, "list", cpy_r_r5);
        goto CPyL47;
    }
    cpy_r_worklist = cpy_r_r6;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_worklist)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = PyList_New(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 714, CPyStatic_dmypy_server___globals);
        goto CPyL48;
    }
    cpy_r_r10 = 0;
CPyL6: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_worklist)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_worklist, cpy_r_r10);
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_modulefinder___BuildSource))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 714, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r15);
        goto CPyL49;
    }
    cpy_r_source = cpy_r_r16;
    cpy_r_r17 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_module;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_source);
    cpy_r_r18 = CPyList_SetItemUnsafe(cpy_r_r9, cpy_r_r10, cpy_r_r17);
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 714, CPyStatic_dmypy_server___globals);
        goto CPyL49;
    }
    cpy_r_r19 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r19;
    goto CPyL6;
CPyL10: ;
    cpy_r_r20 = _PySet_Update(cpy_r_seen, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 714, CPyStatic_dmypy_server___globals);
        goto CPyL48;
    }
CPyL11: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_worklist)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = cpy_r_r24 != 0;
    if (!cpy_r_r25) goto CPyL50;
    cpy_r_r26 = CPyList_PopLast(cpy_r_worklist);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 716, CPyStatic_dmypy_server___globals);
        goto CPyL48;
    }
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_modulefinder___BuildSource))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 716, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r26);
        goto CPyL48;
    }
    cpy_r_nxt = cpy_r_r27;
    cpy_r_r28 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_nxt)->_module;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = PySet_Contains(cpy_r_seen, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 717, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r31 = cpy_r_r29;
    cpy_r_r32 = cpy_r_r31 ^ 1;
    if (!cpy_r_r32) goto CPyL18;
    cpy_r_r33 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_nxt)->_module;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = PySet_Add(cpy_r_seen, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 718, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r36 = PyList_Append(cpy_r_new_files, cpy_r_nxt);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 719, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
CPyL18: ;
    cpy_r_r38 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_nxt)->_path;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = PySequence_Contains(cpy_r_changed_paths, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 720, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r41 = cpy_r_r39;
    if (!cpy_r_r41) goto CPyL25;
    cpy_r_r42 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_nxt)->_path;
    cpy_r_r43 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r44 = cpy_r_r42 != cpy_r_r43;
    if (cpy_r_r44) {
        goto CPyL23;
    } else
        goto CPyL52;
CPyL21: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 721, CPyStatic_dmypy_server___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r46 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_nxt)->_module;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_nxt)->_path;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_nxt);
    if (likely(cpy_r_r47 != Py_None))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 722, CPyStatic_dmypy_server___globals, "str", cpy_r_r47);
        goto CPyL53;
    }
    cpy_r_r49.f0 = cpy_r_r46;
    cpy_r_r49.f1 = cpy_r_r48;
    CPy_INCREF(cpy_r_r49.f0);
    CPy_INCREF(cpy_r_r49.f1);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = PyTuple_New(2);
    if (unlikely(cpy_r_r50 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1986 = cpy_r_r49.f0;
    PyTuple_SET_ITEM(cpy_r_r50, 0, __tmp1986);
    PyObject *__tmp1987 = cpy_r_r49.f1;
    PyTuple_SET_ITEM(cpy_r_r50, 1, __tmp1987);
    cpy_r_r51 = PyList_Append(cpy_r_changed, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 722, CPyStatic_dmypy_server___globals);
        goto CPyL48;
    } else
        goto CPyL11;
CPyL25: ;
    cpy_r_r53 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_nxt)->_module;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = PyDict_Contains(cpy_r_graph, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 723, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r56 = cpy_r_r54;
    if (!cpy_r_r56) goto CPyL54;
    cpy_r_r57 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_nxt)->_module;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_nxt);
    cpy_r_r58 = CPyDict_GetItem(cpy_r_graph, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 724, CPyStatic_dmypy_server___globals);
        goto CPyL48;
    }
    if (likely(Py_TYPE(cpy_r_r58) == CPyType_mypy___build___State))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 724, CPyStatic_dmypy_server___globals, "mypy.build.State", cpy_r_r58);
        goto CPyL48;
    }
    cpy_r_state = cpy_r_r59;
    cpy_r_r60 = ((mypy___build___StateObject *)cpy_r_state)->_dependencies;
    if (unlikely(cpy_r_r60 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'dependencies' of 'State' undefined");
    } else {
        CPy_INCREF(cpy_r_r60);
    }
    CPy_DECREF(cpy_r_state);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 725, CPyStatic_dmypy_server___globals);
        goto CPyL48;
    }
CPyL30: ;
    cpy_r_r61 = 0;
CPyL31: ;
    cpy_r_r62 = (CPyPtr)&((PyVarObject *)cpy_r_r60)->ob_size;
    cpy_r_r63 = *(int64_t *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 << 1;
    cpy_r_r65 = (Py_ssize_t)cpy_r_r61 < (Py_ssize_t)cpy_r_r64;
    if (!cpy_r_r65) goto CPyL55;
    cpy_r_r66 = CPyList_GetItemUnsafe(cpy_r_r60, cpy_r_r61);
    if (likely(PyUnicode_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 725, CPyStatic_dmypy_server___globals, "str", cpy_r_r66);
        goto CPyL56;
    }
    cpy_r_dep = cpy_r_r67;
    cpy_r_r68 = PySet_Contains(cpy_r_seen, cpy_r_dep);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 726, CPyStatic_dmypy_server___globals);
        goto CPyL57;
    }
    cpy_r_r70 = cpy_r_r68;
    cpy_r_r71 = cpy_r_r70 ^ 1;
    if (!cpy_r_r71) goto CPyL58;
    cpy_r_r72 = PySet_Add(cpy_r_seen, cpy_r_dep);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 727, CPyStatic_dmypy_server___globals);
        goto CPyL57;
    }
    cpy_r_r74 = CPyDict_GetItem(cpy_r_graph, cpy_r_dep);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 728, CPyStatic_dmypy_server___globals);
        goto CPyL57;
    }
    if (likely(Py_TYPE(cpy_r_r74) == CPyType_mypy___build___State))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 728, CPyStatic_dmypy_server___globals, "mypy.build.State", cpy_r_r74);
        goto CPyL57;
    }
    cpy_r_r76 = ((mypy___build___StateObject *)cpy_r_r75)->_path;
    CPy_INCREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = CPyDict_GetItem(cpy_r_graph, cpy_r_dep);
    CPy_DECREF(cpy_r_dep);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 728, CPyStatic_dmypy_server___globals);
        goto CPyL59;
    }
    if (likely(Py_TYPE(cpy_r_r77) == CPyType_mypy___build___State))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 728, CPyStatic_dmypy_server___globals, "mypy.build.State", cpy_r_r77);
        goto CPyL59;
    }
    cpy_r_r79 = ((mypy___build___StateObject *)cpy_r_r78)->_id;
    if (unlikely(cpy_r_r79 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'id' of 'State' undefined");
    } else {
        CPy_INCREF(cpy_r_r79);
    }
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 728, CPyStatic_dmypy_server___globals);
        goto CPyL59;
    }
CPyL41: ;
    cpy_r_r80 = NULL;
    cpy_r_r81 = NULL;
    cpy_r_r82 = CPyDef_modulefinder___BuildSource(cpy_r_r76, cpy_r_r79, cpy_r_r80, cpy_r_r81, 1);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 728, CPyStatic_dmypy_server___globals);
        goto CPyL56;
    }
    cpy_r_r83 = PyList_Append(cpy_r_worklist, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 728, CPyStatic_dmypy_server___globals);
        goto CPyL56;
    }
CPyL43: ;
    cpy_r_r85 = cpy_r_r61 + 2;
    cpy_r_r61 = cpy_r_r85;
    goto CPyL31;
CPyL44: ;
    cpy_r_r86.f0 = cpy_r_changed;
    cpy_r_r86.f1 = cpy_r_new_files;
    CPy_INCREF(cpy_r_r86.f0);
    CPy_INCREF(cpy_r_r86.f1);
    CPy_DECREF(cpy_r_changed);
    CPy_DECREF(cpy_r_new_files);
    return cpy_r_r86;
CPyL45: ;
    tuple_T2OO __tmp1988 = { NULL, NULL };
    cpy_r_r87 = __tmp1988;
    return cpy_r_r87;
CPyL46: ;
    CPy_DecRef(cpy_r_changed);
    goto CPyL45;
CPyL47: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_new_files);
    goto CPyL45;
CPyL48: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_new_files);
    CPy_DecRef(cpy_r_worklist);
    goto CPyL45;
CPyL49: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_new_files);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_r9);
    goto CPyL45;
CPyL50: ;
    CPy_DECREF(cpy_r_worklist);
    goto CPyL44;
CPyL51: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_new_files);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_nxt);
    goto CPyL45;
CPyL52: ;
    CPy_DECREF(cpy_r_changed);
    CPy_DECREF(cpy_r_new_files);
    CPy_DECREF(cpy_r_worklist);
    CPy_DECREF(cpy_r_nxt);
    goto CPyL21;
CPyL53: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_new_files);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_r46);
    goto CPyL45;
CPyL54: ;
    CPy_DECREF(cpy_r_nxt);
    goto CPyL11;
CPyL55: ;
    CPy_DECREF(cpy_r_r60);
    goto CPyL11;
CPyL56: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_new_files);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_r60);
    goto CPyL45;
CPyL57: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_new_files);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_dep);
    goto CPyL45;
CPyL58: ;
    CPy_DECREF(cpy_r_dep);
    goto CPyL43;
CPyL59: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_new_files);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r76);
    goto CPyL45;
}

PyObject *CPyPy_dmypy_server___Server___find_reachable_changed_modules(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"roots", "graph", "seen", "changed_paths", 0};
    static CPyArg_Parser parser = {"OOOO:find_reachable_changed_modules", kwlist, 0};
    PyObject *obj_roots;
    PyObject *obj_graph;
    PyObject *obj_seen;
    PyObject *obj_changed_paths;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_roots, &obj_graph, &obj_seen, &obj_changed_paths)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_roots;
    if (likely(PyList_Check(obj_roots)))
        arg_roots = obj_roots;
    else {
        CPy_TypeError("list", obj_roots); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_seen;
    if (likely(PySet_Check(obj_seen)))
        arg_seen = obj_seen;
    else {
        CPy_TypeError("set", obj_seen); 
        goto fail;
    }
    PyObject *arg_changed_paths = obj_changed_paths;
    tuple_T2OO retval = CPyDef_dmypy_server___Server___find_reachable_changed_modules(arg_self, arg_roots, arg_graph, arg_seen, arg_changed_paths);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1989 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp1989);
    PyObject *__tmp1990 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp1990);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "find_reachable_changed_modules", 690, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___direct_imports(PyObject *cpy_r_self, tuple_T2OO cpy_r_module, PyObject *cpy_r_graph) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_state;
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
    PyObject *cpy_r_dep;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = cpy_r_module.f0;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDict_GetItem(cpy_r_graph, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "direct_imports", 735, CPyStatic_dmypy_server___globals);
        goto CPyL13;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_mypy___build___State))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "direct_imports", 735, CPyStatic_dmypy_server___globals, "mypy.build.State", cpy_r_r1);
        goto CPyL13;
    }
    cpy_r_state = cpy_r_r2;
    cpy_r_r3 = ((mypy___build___StateObject *)cpy_r_state)->_dependencies;
    if (unlikely(cpy_r_r3 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'dependencies' of 'State' undefined");
    } else {
        CPy_INCREF(cpy_r_r3);
    }
    CPy_DECREF(cpy_r_state);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "direct_imports", 736, CPyStatic_dmypy_server___globals);
        goto CPyL13;
    }
CPyL3: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = PyList_New(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "direct_imports", 736, CPyStatic_dmypy_server___globals);
        goto CPyL14;
    }
    cpy_r_r7 = 0;
CPyL5: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL15;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r7);
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "direct_imports", 736, CPyStatic_dmypy_server___globals, "str", cpy_r_r12);
        goto CPyL16;
    }
    cpy_r_dep = cpy_r_r13;
    cpy_r_r14 = CPyDict_GetItem(cpy_r_graph, cpy_r_dep);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "direct_imports", 736, CPyStatic_dmypy_server___globals);
        goto CPyL17;
    }
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_mypy___build___State))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "direct_imports", 736, CPyStatic_dmypy_server___globals, "mypy.build.State", cpy_r_r14);
        goto CPyL17;
    }
    cpy_r_r16 = ((mypy___build___StateObject *)cpy_r_r15)->_path;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = NULL;
    cpy_r_r18 = NULL;
    cpy_r_r19 = CPyDef_modulefinder___BuildSource(cpy_r_r16, cpy_r_dep, cpy_r_r17, cpy_r_r18, 1);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_dep);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "direct_imports", 736, CPyStatic_dmypy_server___globals);
        goto CPyL16;
    }
    cpy_r_r20 = CPyList_SetItemUnsafe(cpy_r_r6, cpy_r_r7, cpy_r_r19);
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "direct_imports", 736, CPyStatic_dmypy_server___globals);
        goto CPyL16;
    }
    cpy_r_r21 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r21;
    goto CPyL5;
CPyL12: ;
    return cpy_r_r6;
CPyL13: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL14: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_dep);
    goto CPyL13;
}

PyObject *CPyPy_dmypy_server___Server___direct_imports(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", "graph", 0};
    static CPyArg_Parser parser = {"OO:direct_imports", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_graph;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module, &obj_graph)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    tuple_T2OO arg_module;
    PyObject *__tmp1991;
    if (unlikely(!(PyTuple_Check(obj_module) && PyTuple_GET_SIZE(obj_module) == 2))) {
        __tmp1991 = NULL;
        goto __LL1992;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(obj_module, 0))))
        __tmp1991 = PyTuple_GET_ITEM(obj_module, 0);
    else {
        __tmp1991 = NULL;
    }
    if (__tmp1991 == NULL) goto __LL1992;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(obj_module, 1))))
        __tmp1991 = PyTuple_GET_ITEM(obj_module, 1);
    else {
        __tmp1991 = NULL;
    }
    if (__tmp1991 == NULL) goto __LL1992;
    __tmp1991 = obj_module;
__LL1992: ;
    if (unlikely(__tmp1991 == NULL)) {
        CPy_TypeError("tuple[str, str]", obj_module); goto fail;
    } else {
        PyObject *__tmp1993 = PyTuple_GET_ITEM(obj_module, 0);
        PyObject *__tmp1994;
        if (likely(PyUnicode_Check(__tmp1993)))
            __tmp1994 = __tmp1993;
        else {
            CPy_TypeError("str", __tmp1993); 
            __tmp1994 = NULL;
        }
        arg_module.f0 = __tmp1994;
        PyObject *__tmp1995 = PyTuple_GET_ITEM(obj_module, 1);
        PyObject *__tmp1996;
        if (likely(PyUnicode_Check(__tmp1995)))
            __tmp1996 = __tmp1995;
        else {
            CPy_TypeError("str", __tmp1995); 
            __tmp1996 = NULL;
        }
        arg_module.f1 = __tmp1996;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *retval = CPyDef_dmypy_server___Server___direct_imports(arg_self, arg_module, arg_graph);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "direct_imports", 731, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___find_added_suppressed(PyObject *cpy_r_self, PyObject *cpy_r_graph, PyObject *cpy_r_seen, PyObject *cpy_r_search_paths) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_all_suppressed;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T3CIO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_state;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_module;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_module_2;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_packages;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_finder;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_found;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_module_3;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_top_level_pkg;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    tuple_T2OO cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 748, CPyStatic_dmypy_server___globals);
        goto CPyL56;
    }
    cpy_r_all_suppressed = cpy_r_r0;
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_graph);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetValuesIter(cpy_r_graph);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 749, CPyStatic_dmypy_server___globals);
        goto CPyL57;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextValue(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL58;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r5.f2);
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_mypy___build___State))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_added_suppressed", 749, CPyStatic_dmypy_server___globals, "mypy.build.State", cpy_r_r8);
        goto CPyL59;
    }
    cpy_r_state = cpy_r_r9;
    cpy_r_r10 = ((mypy___build___StateObject *)cpy_r_state)->_suppressed_set;
    if (unlikely(cpy_r_r10 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'suppressed_set' of 'State' undefined");
    } else {
        CPy_INCREF(cpy_r_r10);
    }
    CPy_DECREF(cpy_r_state);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 750, CPyStatic_dmypy_server___globals);
        goto CPyL59;
    }
CPyL5: ;
    cpy_r_r11 = PyNumber_InPlaceOr(cpy_r_all_suppressed, cpy_r_r10);
    CPy_DECREF(cpy_r_all_suppressed);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 750, CPyStatic_dmypy_server___globals);
        goto CPyL60;
    }
    if (likely(PySet_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_added_suppressed", 750, CPyStatic_dmypy_server___globals, "set", cpy_r_r11);
        goto CPyL60;
    }
    cpy_r_all_suppressed = cpy_r_r12;
    cpy_r_r13 = CPyDict_CheckSize(cpy_r_graph, cpy_r_r3);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 749, CPyStatic_dmypy_server___globals);
        goto CPyL59;
    } else
        goto CPyL2;
CPyL9: ;
    cpy_r_r14 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 749, CPyStatic_dmypy_server___globals);
        goto CPyL57;
    }
    cpy_r_r15 = PySet_New(NULL);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 755, CPyStatic_dmypy_server___globals);
        goto CPyL57;
    }
    cpy_r_r16 = PyObject_GetIter(cpy_r_all_suppressed);
    CPy_DECREF(cpy_r_all_suppressed);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 755, CPyStatic_dmypy_server___globals);
        goto CPyL61;
    }
CPyL12: ;
    cpy_r_r17 = PyIter_Next(cpy_r_r16);
    if (cpy_r_r17 == NULL) goto CPyL62;
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_added_suppressed", 755, CPyStatic_dmypy_server___globals, "str", cpy_r_r17);
        goto CPyL63;
    }
    cpy_r_module = cpy_r_r18;
    cpy_r_r19 = PyDict_Contains(cpy_r_graph, cpy_r_module);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 758, CPyStatic_dmypy_server___globals);
        goto CPyL64;
    }
    cpy_r_r21 = cpy_r_r19;
    cpy_r_r22 = cpy_r_r21 ^ 1;
    if (cpy_r_r22) goto CPyL17;
    cpy_r_r23 = cpy_r_r22;
    goto CPyL19;
CPyL17: ;
    cpy_r_r24 = CPyDef_dmypy_server___ignore_suppressed_imports(cpy_r_module);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 758, CPyStatic_dmypy_server___globals);
        goto CPyL64;
    }
    cpy_r_r25 = cpy_r_r24 ^ 1;
    cpy_r_r23 = cpy_r_r25;
CPyL19: ;
    if (!cpy_r_r23) goto CPyL65;
    cpy_r_r26 = PySet_Add(cpy_r_r15, cpy_r_module);
    CPy_DECREF(cpy_r_module);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 755, CPyStatic_dmypy_server___globals);
        goto CPyL63;
    } else
        goto CPyL12;
CPyL21: ;
    cpy_r_r28 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 755, CPyStatic_dmypy_server___globals);
        goto CPyL61;
    }
    cpy_r_all_suppressed = cpy_r_r15;
    cpy_r_r29 = PySet_New(NULL);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 764, CPyStatic_dmypy_server___globals);
        goto CPyL57;
    }
    cpy_r_r30 = PyObject_GetIter(cpy_r_all_suppressed);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 764, CPyStatic_dmypy_server___globals);
        goto CPyL66;
    }
CPyL24: ;
    cpy_r_r31 = PyIter_Next(cpy_r_r30);
    if (cpy_r_r31 == NULL) goto CPyL67;
    if (likely(PyUnicode_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_added_suppressed", 764, CPyStatic_dmypy_server___globals, "str", cpy_r_r31);
        goto CPyL68;
    }
    cpy_r_module_2 = cpy_r_r32;
    cpy_r_r33 = CPyStatics[224]; /* '.' */
    cpy_r_r34 = CPyStr_Split(cpy_r_module_2, cpy_r_r33, 2);
    CPy_DECREF(cpy_r_module_2);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 764, CPyStatic_dmypy_server___globals);
        goto CPyL68;
    }
    cpy_r_r35 = CPyList_GetItemShort(cpy_r_r34, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 764, CPyStatic_dmypy_server___globals);
        goto CPyL68;
    }
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_added_suppressed", 764, CPyStatic_dmypy_server___globals, "str", cpy_r_r35);
        goto CPyL68;
    }
    cpy_r_r37 = PySet_Add(cpy_r_r29, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 764, CPyStatic_dmypy_server___globals);
        goto CPyL68;
    } else
        goto CPyL24;
CPyL30: ;
    cpy_r_r39 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 764, CPyStatic_dmypy_server___globals);
        goto CPyL66;
    }
    cpy_r_packages = cpy_r_r29;
    cpy_r_r40 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = CPyDef_dmypy_server___filter_out_missing_top_level_packages(cpy_r_packages, cpy_r_search_paths, cpy_r_r40);
    CPy_DECREF(cpy_r_packages);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 765, CPyStatic_dmypy_server___globals);
        goto CPyL57;
    }
    cpy_r_packages = cpy_r_r41;
    cpy_r_r42 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = NULL;
    cpy_r_r45 = NULL;
    cpy_r_r46 = CPyDef_modulefinder___FindModuleCache(cpy_r_search_paths, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 769, CPyStatic_dmypy_server___globals);
        goto CPyL69;
    }
    cpy_r_finder = cpy_r_r46;
    cpy_r_r47 = PyList_New(0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 771, CPyStatic_dmypy_server___globals);
        goto CPyL70;
    }
    cpy_r_found = cpy_r_r47;
    cpy_r_r48 = PyObject_GetIter(cpy_r_all_suppressed);
    CPy_DECREF(cpy_r_all_suppressed);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 773, CPyStatic_dmypy_server___globals);
        goto CPyL71;
    }
CPyL35: ;
    cpy_r_r49 = PyIter_Next(cpy_r_r48);
    if (cpy_r_r49 == NULL) goto CPyL72;
    if (likely(PyUnicode_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_added_suppressed", 773, CPyStatic_dmypy_server___globals, "str", cpy_r_r49);
        goto CPyL73;
    }
    cpy_r_module_3 = cpy_r_r50;
    cpy_r_r51 = CPyStatics[224]; /* '.' */
    cpy_r_r52 = CPyStr_Split(cpy_r_module_3, cpy_r_r51, 2);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 774, CPyStatic_dmypy_server___globals);
        goto CPyL74;
    }
    cpy_r_r53 = CPyList_GetItemShort(cpy_r_r52, 0);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 774, CPyStatic_dmypy_server___globals);
        goto CPyL74;
    }
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_added_suppressed", 774, CPyStatic_dmypy_server___globals, "str", cpy_r_r53);
        goto CPyL74;
    }
    cpy_r_top_level_pkg = cpy_r_r54;
    cpy_r_r55 = PySet_Contains(cpy_r_packages, cpy_r_top_level_pkg);
    CPy_DECREF(cpy_r_top_level_pkg);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 775, CPyStatic_dmypy_server___globals);
        goto CPyL74;
    }
    cpy_r_r57 = cpy_r_r55;
    cpy_r_r58 = cpy_r_r57 ^ 1;
    if (cpy_r_r58) goto CPyL75;
    cpy_r_r59 = CPyDef_modulefinder___FindModuleCache___find_module(cpy_r_finder, cpy_r_module_3, 1);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 778, CPyStatic_dmypy_server___globals);
        goto CPyL74;
    }
    cpy_r_result = cpy_r_r59;
    cpy_r_r60 = (PyObject *)&PyUnicode_Type;
    cpy_r_r61 = PyObject_IsInstance(cpy_r_result, cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 779, CPyStatic_dmypy_server___globals);
        goto CPyL76;
    }
    cpy_r_r63 = cpy_r_r61;
    if (!cpy_r_r63) goto CPyL77;
    cpy_r_r64 = PySet_Contains(cpy_r_seen, cpy_r_module_3);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 779, CPyStatic_dmypy_server___globals);
        goto CPyL76;
    }
    cpy_r_r66 = cpy_r_r64;
    cpy_r_r67 = cpy_r_r66 ^ 1;
    if (!cpy_r_r67) goto CPyL77;
    cpy_r_r68 = CPyDef_dmypy_server___Server___following_imports(cpy_r_self);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 781, CPyStatic_dmypy_server___globals);
        goto CPyL76;
    }
    if (cpy_r_r68) goto CPyL51;
    CPy_INCREF(cpy_r_result);
    if (likely(PyUnicode_Check(cpy_r_result)))
        cpy_r_r69 = cpy_r_result;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_added_suppressed", 781, CPyStatic_dmypy_server___globals, "str", cpy_r_result);
        goto CPyL76;
    }
    cpy_r_r70 = CPyStatics[397]; /* '.pyi' */
    cpy_r_r71 = CPyStr_Endswith(cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    if (!cpy_r_r71) goto CPyL77;
CPyL51: ;
    if (likely(PyUnicode_Check(cpy_r_result)))
        cpy_r_r72 = cpy_r_result;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_added_suppressed", 783, CPyStatic_dmypy_server___globals, "str", cpy_r_result);
        goto CPyL74;
    }
    cpy_r_r73.f0 = cpy_r_module_3;
    cpy_r_r73.f1 = cpy_r_r72;
    CPy_INCREF(cpy_r_r73.f0);
    CPy_INCREF(cpy_r_r73.f1);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = PyTuple_New(2);
    if (unlikely(cpy_r_r74 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1997 = cpy_r_r73.f0;
    PyTuple_SET_ITEM(cpy_r_r74, 0, __tmp1997);
    PyObject *__tmp1998 = cpy_r_r73.f1;
    PyTuple_SET_ITEM(cpy_r_r74, 1, __tmp1998);
    cpy_r_r75 = PyList_Append(cpy_r_found, cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 783, CPyStatic_dmypy_server___globals);
        goto CPyL74;
    }
    cpy_r_r77 = PySet_Add(cpy_r_seen, cpy_r_module_3);
    CPy_DECREF(cpy_r_module_3);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 784, CPyStatic_dmypy_server___globals);
        goto CPyL73;
    } else
        goto CPyL35;
CPyL54: ;
    cpy_r_r79 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 773, CPyStatic_dmypy_server___globals);
        goto CPyL78;
    }
    return cpy_r_found;
CPyL56: ;
    cpy_r_r80 = NULL;
    return cpy_r_r80;
CPyL57: ;
    CPy_DecRef(cpy_r_all_suppressed);
    goto CPyL56;
CPyL58: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    goto CPyL9;
CPyL59: ;
    CPy_DecRef(cpy_r_all_suppressed);
    CPy_DecRef(cpy_r_r4);
    goto CPyL56;
CPyL60: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL56;
CPyL61: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL56;
CPyL62: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL21;
CPyL63: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    goto CPyL56;
CPyL64: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_module);
    goto CPyL56;
CPyL65: ;
    CPy_DECREF(cpy_r_module);
    goto CPyL12;
CPyL66: ;
    CPy_DecRef(cpy_r_all_suppressed);
    CPy_DecRef(cpy_r_r29);
    goto CPyL56;
CPyL67: ;
    CPy_DECREF(cpy_r_r30);
    goto CPyL30;
CPyL68: ;
    CPy_DecRef(cpy_r_all_suppressed);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    goto CPyL56;
CPyL69: ;
    CPy_DecRef(cpy_r_all_suppressed);
    CPy_DecRef(cpy_r_packages);
    goto CPyL56;
CPyL70: ;
    CPy_DecRef(cpy_r_all_suppressed);
    CPy_DecRef(cpy_r_packages);
    CPy_DecRef(cpy_r_finder);
    goto CPyL56;
CPyL71: ;
    CPy_DecRef(cpy_r_packages);
    CPy_DecRef(cpy_r_finder);
    CPy_DecRef(cpy_r_found);
    goto CPyL56;
CPyL72: ;
    CPy_DECREF(cpy_r_packages);
    CPy_DECREF(cpy_r_finder);
    CPy_DECREF(cpy_r_r48);
    goto CPyL54;
CPyL73: ;
    CPy_DecRef(cpy_r_packages);
    CPy_DecRef(cpy_r_finder);
    CPy_DecRef(cpy_r_found);
    CPy_DecRef(cpy_r_r48);
    goto CPyL56;
CPyL74: ;
    CPy_DecRef(cpy_r_packages);
    CPy_DecRef(cpy_r_finder);
    CPy_DecRef(cpy_r_found);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_module_3);
    goto CPyL56;
CPyL75: ;
    CPy_DECREF(cpy_r_module_3);
    goto CPyL35;
CPyL76: ;
    CPy_DecRef(cpy_r_packages);
    CPy_DecRef(cpy_r_finder);
    CPy_DecRef(cpy_r_found);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_module_3);
    CPy_DecRef(cpy_r_result);
    goto CPyL56;
CPyL77: ;
    CPy_DECREF(cpy_r_module_3);
    CPy_DECREF(cpy_r_result);
    goto CPyL35;
CPyL78: ;
    CPy_DecRef(cpy_r_found);
    goto CPyL56;
}

PyObject *CPyPy_dmypy_server___Server___find_added_suppressed(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"graph", "seen", "search_paths", 0};
    static CPyArg_Parser parser = {"OOO:find_added_suppressed", kwlist, 0};
    PyObject *obj_graph;
    PyObject *obj_seen;
    PyObject *obj_search_paths;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_graph, &obj_seen, &obj_search_paths)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_seen;
    if (likely(PySet_Check(obj_seen)))
        arg_seen = obj_seen;
    else {
        CPy_TypeError("set", obj_seen); 
        goto fail;
    }
    PyObject * arg_search_paths;
    if (likely(PyTuple_Check(obj_search_paths)))
        arg_search_paths = obj_search_paths;
    else {
        CPy_TypeError("tuple", obj_search_paths); 
        goto fail;
    }
    PyObject *retval = CPyDef_dmypy_server___Server___find_added_suppressed(arg_self, arg_graph, arg_seen, arg_search_paths);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "find_added_suppressed", 738, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___increment_output(PyObject *cpy_r_self, PyObject *cpy_r_messages, PyObject *cpy_r_sources, char cpy_r_is_tty, CPyTagged cpy_r_terminal_width) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_status;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = 2;
    goto CPyL3;
CPyL2: ;
    cpy_r_r4 = 0;
CPyL3: ;
    cpy_r_status = cpy_r_r4;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    CPyTagged_INCREF(cpy_r_terminal_width);
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_terminal_width);
    cpy_r_r9 = CPyDef_dmypy_server___Server___pretty_messages(cpy_r_self, cpy_r_messages, cpy_r_r7, cpy_r_is_tty, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "increment_output", 792, CPyStatic_dmypy_server___globals);
        goto CPyL15;
    }
    cpy_r_messages = cpy_r_r9;
    cpy_r_r10 = CPyStatics[1730]; /* 'out' */
    cpy_r_r11 = CPyStatics[163]; /* '' */
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = PyList_New(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "increment_output", 793, CPyStatic_dmypy_server___globals);
        goto CPyL16;
    }
    cpy_r_r15 = 0;
CPyL6: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL17;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_messages, cpy_r_r15);
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "increment_output", 793, CPyStatic_dmypy_server___globals, "str", cpy_r_r20);
        goto CPyL18;
    }
    cpy_r_s = cpy_r_r21;
    cpy_r_r22 = CPyStatics[189]; /* '\n' */
    cpy_r_r23 = PyUnicode_Concat(cpy_r_s, cpy_r_r22);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "increment_output", 793, CPyStatic_dmypy_server___globals);
        goto CPyL18;
    }
    cpy_r_r24 = CPyList_SetItemUnsafe(cpy_r_r14, cpy_r_r15, cpy_r_r23);
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "increment_output", 793, CPyStatic_dmypy_server___globals);
        goto CPyL18;
    }
    cpy_r_r25 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r25;
    goto CPyL6;
CPyL11: ;
    cpy_r_r26 = PyUnicode_Join(cpy_r_r11, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "increment_output", 793, CPyStatic_dmypy_server___globals);
        goto CPyL15;
    }
    cpy_r_r27 = CPyStatics[1731]; /* 'err' */
    cpy_r_r28 = CPyStatics[163]; /* '' */
    cpy_r_r29 = CPyStatics[1701]; /* 'status' */
    cpy_r_r30 = CPyTagged_StealAsObject(cpy_r_status);
    cpy_r_r31 = CPyDict_Build(3, cpy_r_r10, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "increment_output", 793, CPyStatic_dmypy_server___globals);
        goto CPyL14;
    }
    return cpy_r_r31;
CPyL14: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL15: ;
    CPyTagged_DecRef(cpy_r_status);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_messages);
    CPyTagged_DecRef(cpy_r_status);
    goto CPyL14;
CPyL17: ;
    CPy_DECREF(cpy_r_messages);
    goto CPyL11;
CPyL18: ;
    CPy_DecRef(cpy_r_messages);
    CPyTagged_DecRef(cpy_r_status);
    CPy_DecRef(cpy_r_r14);
    goto CPyL14;
}

PyObject *CPyPy_dmypy_server___Server___increment_output(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"messages", "sources", "is_tty", "terminal_width", 0};
    static CPyArg_Parser parser = {"OOOO:increment_output", kwlist, 0};
    PyObject *obj_messages;
    PyObject *obj_sources;
    PyObject *obj_is_tty;
    PyObject *obj_terminal_width;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_messages, &obj_sources, &obj_is_tty, &obj_terminal_width)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_messages;
    if (likely(PyList_Check(obj_messages)))
        arg_messages = obj_messages;
    else {
        CPy_TypeError("list", obj_messages); 
        goto fail;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    char arg_is_tty;
    if (unlikely(!PyBool_Check(obj_is_tty))) {
        CPy_TypeError("bool", obj_is_tty); goto fail;
    } else
        arg_is_tty = obj_is_tty == Py_True;
    CPyTagged arg_terminal_width;
    if (likely(PyLong_Check(obj_terminal_width)))
        arg_terminal_width = CPyTagged_BorrowFromObject(obj_terminal_width);
    else {
        CPy_TypeError("int", obj_terminal_width); goto fail;
    }
    PyObject *retval = CPyDef_dmypy_server___Server___increment_output(arg_self, arg_messages, arg_sources, arg_is_tty, arg_terminal_width);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "increment_output", 788, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___pretty_messages(PyObject *cpy_r_self, PyObject *cpy_r_messages, CPyTagged cpy_r_n_sources, char cpy_r_is_tty, PyObject *cpy_r_terminal_width) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_use_color;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_fit_width;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_summary;
    tuple_T3III cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_n_errors;
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_n_notes;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_n_files;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_m;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    if (cpy_r_is_tty != 2) goto CPyL2;
    cpy_r_is_tty = 0;
CPyL2: ;
    if (cpy_r_terminal_width != NULL) goto CPyL41;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_terminal_width = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    cpy_r_r2 = ((mypy___options___OptionsObject *)cpy_r_r1)->_color_output;
    if (cpy_r_r2) goto CPyL6;
CPyL5: ;
    cpy_r_r3 = cpy_r_r2;
    goto CPyL7;
CPyL6: ;
    cpy_r_r3 = cpy_r_is_tty;
CPyL7: ;
    cpy_r_use_color = cpy_r_r3;
    cpy_r_r4 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    cpy_r_r5 = ((mypy___options___OptionsObject *)cpy_r_r4)->_pretty;
    if (cpy_r_r5) goto CPyL9;
CPyL8: ;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL10;
CPyL9: ;
    cpy_r_r6 = cpy_r_is_tty;
CPyL10: ;
    cpy_r_fit_width = cpy_r_r6;
    if (!cpy_r_fit_width) goto CPyL42;
    cpy_r_r7 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_formatter;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_mypy___util___FancyFormatter___fit_in_terminal(cpy_r_r7, cpy_r_messages, cpy_r_terminal_width);
    CPy_DECREF(cpy_r_terminal_width);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "pretty_messages", 805, CPyStatic_dmypy_server___globals);
        goto CPyL40;
    }
    cpy_r_messages = cpy_r_r8;
CPyL13: ;
    cpy_r_r9 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    cpy_r_r10 = ((mypy___options___OptionsObject *)cpy_r_r9)->_error_summary;
    if (!cpy_r_r10) goto CPyL30;
CPyL14: ;
    cpy_r_r11 = Py_None;
    CPy_INCREF(cpy_r_r11);
    cpy_r_summary = cpy_r_r11;
    cpy_r_r12 = CPyDef_mypy___util___count_stats(cpy_r_messages);
    if (unlikely(cpy_r_r12.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "pretty_messages", 810, CPyStatic_dmypy_server___globals);
        goto CPyL43;
    }
    cpy_r_r13 = cpy_r_r12.f0;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_n_errors = cpy_r_r13;
    cpy_r_r14 = cpy_r_r12.f1;
    CPyTagged_INCREF(cpy_r_r14);
    cpy_r_n_notes = cpy_r_r14;
    cpy_r_r15 = cpy_r_r12.f2;
    CPyTagged_INCREF(cpy_r_r15);
    CPyTagged_DECREF(cpy_r_r12.f0);
    CPyTagged_DECREF(cpy_r_r12.f1);
    CPyTagged_DECREF(cpy_r_r12.f2);
    cpy_r_n_files = cpy_r_r15;
    cpy_r_r16 = cpy_r_n_errors != 0;
    if (cpy_r_r16) {
        goto CPyL44;
    } else
        goto CPyL45;
CPyL16: ;
    cpy_r_r17 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_formatter;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = 2;
    cpy_r_r19 = CPyDef_mypy___util___FancyFormatter___format_error(cpy_r_r17, cpy_r_n_errors, cpy_r_n_files, cpy_r_n_sources, cpy_r_r18, cpy_r_use_color);
    CPyTagged_DECREF(cpy_r_n_errors);
    CPyTagged_DECREF(cpy_r_n_files);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "pretty_messages", 812, CPyStatic_dmypy_server___globals);
        goto CPyL46;
    }
    cpy_r_summary = cpy_r_r19;
    goto CPyL22;
CPyL18: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = cpy_r_r22 != 0;
    if (!cpy_r_r23) goto CPyL47;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = cpy_r_n_notes == cpy_r_r26;
    CPyTagged_DECREF(cpy_r_n_notes);
    if (cpy_r_r27) {
        goto CPyL48;
    } else
        goto CPyL22;
CPyL20: ;
    cpy_r_r28 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_formatter;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDef_mypy___util___FancyFormatter___format_success(cpy_r_r28, cpy_r_n_sources, cpy_r_use_color);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "pretty_messages", 816, CPyStatic_dmypy_server___globals);
        goto CPyL46;
    }
    cpy_r_summary = cpy_r_r29;
CPyL22: ;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_summary != cpy_r_r30;
    if (!cpy_r_r31) goto CPyL49;
    CPy_INCREF(cpy_r_summary);
    if (likely(cpy_r_summary != Py_None))
        cpy_r_r32 = cpy_r_summary;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "pretty_messages", 809, CPyStatic_dmypy_server___globals, "str", cpy_r_summary);
        goto CPyL43;
    }
    cpy_r_r33 = CPyStr_IsTrue(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (!cpy_r_r33) goto CPyL49;
    if (likely(cpy_r_summary != Py_None))
        cpy_r_r34 = cpy_r_summary;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "pretty_messages", 819, CPyStatic_dmypy_server___globals, "str", cpy_r_summary);
        goto CPyL46;
    }
    cpy_r_r35 = PyList_New(1);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "pretty_messages", 819, CPyStatic_dmypy_server___globals);
        goto CPyL50;
    }
    cpy_r_r36 = (CPyPtr)&((PyListObject *)cpy_r_r35)->ob_item;
    cpy_r_r37 = *(CPyPtr *)cpy_r_r36;
    *(PyObject * *)cpy_r_r37 = cpy_r_r34;
    cpy_r_r38 = PyNumber_Add(cpy_r_messages, cpy_r_r35);
    CPy_DECREF(cpy_r_messages);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "pretty_messages", 819, CPyStatic_dmypy_server___globals);
        goto CPyL40;
    }
    if (likely(PyList_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "pretty_messages", 819, CPyStatic_dmypy_server___globals, "list", cpy_r_r38);
        goto CPyL40;
    }
    cpy_r_messages = cpy_r_r39;
CPyL30: ;
    if (!cpy_r_use_color) goto CPyL39;
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = PyList_New(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "pretty_messages", 821, CPyStatic_dmypy_server___globals);
        goto CPyL46;
    }
    cpy_r_r43 = 0;
CPyL33: ;
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 << 1;
    cpy_r_r47 = (Py_ssize_t)cpy_r_r43 < (Py_ssize_t)cpy_r_r46;
    if (!cpy_r_r47) goto CPyL51;
    cpy_r_r48 = CPyList_GetItemUnsafe(cpy_r_messages, cpy_r_r43);
    if (likely(PyUnicode_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "pretty_messages", 821, CPyStatic_dmypy_server___globals, "str", cpy_r_r48);
        goto CPyL52;
    }
    cpy_r_m = cpy_r_r49;
    cpy_r_r50 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_formatter;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = CPyDef_mypy___util___FancyFormatter___colorize(cpy_r_r50, cpy_r_m);
    CPy_DECREF(cpy_r_m);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "pretty_messages", 821, CPyStatic_dmypy_server___globals);
        goto CPyL52;
    }
    cpy_r_r52 = CPyList_SetItemUnsafe(cpy_r_r42, cpy_r_r43, cpy_r_r51);
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "pretty_messages", 821, CPyStatic_dmypy_server___globals);
        goto CPyL52;
    }
    cpy_r_r53 = cpy_r_r43 + 2;
    cpy_r_r43 = cpy_r_r53;
    goto CPyL33;
CPyL38: ;
    cpy_r_messages = cpy_r_r42;
CPyL39: ;
    return cpy_r_messages;
CPyL40: ;
    cpy_r_r54 = NULL;
    return cpy_r_r54;
CPyL41: ;
    CPy_INCREF(cpy_r_terminal_width);
    goto CPyL4;
CPyL42: ;
    CPy_DECREF(cpy_r_terminal_width);
    CPy_INCREF(cpy_r_messages);
    goto CPyL13;
CPyL43: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_summary);
    goto CPyL40;
CPyL44: ;
    CPy_DECREF(cpy_r_summary);
    CPyTagged_DECREF(cpy_r_n_notes);
    goto CPyL16;
CPyL45: ;
    CPyTagged_DECREF(cpy_r_n_errors);
    CPyTagged_DECREF(cpy_r_n_files);
    goto CPyL18;
CPyL46: ;
    CPy_DecRef(cpy_r_messages);
    goto CPyL40;
CPyL47: ;
    CPy_DECREF(cpy_r_summary);
    CPyTagged_DECREF(cpy_r_n_notes);
    goto CPyL20;
CPyL48: ;
    CPy_DECREF(cpy_r_summary);
    goto CPyL20;
CPyL49: ;
    CPy_DECREF(cpy_r_summary);
    goto CPyL30;
CPyL50: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r34);
    goto CPyL40;
CPyL51: ;
    CPy_DECREF(cpy_r_messages);
    goto CPyL38;
CPyL52: ;
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r42);
    goto CPyL40;
}

PyObject *CPyPy_dmypy_server___Server___pretty_messages(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"messages", "n_sources", "is_tty", "terminal_width", 0};
    static CPyArg_Parser parser = {"OO|OO:pretty_messages", kwlist, 0};
    PyObject *obj_messages;
    PyObject *obj_n_sources;
    PyObject *obj_is_tty = NULL;
    PyObject *obj_terminal_width = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_messages, &obj_n_sources, &obj_is_tty, &obj_terminal_width)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_messages;
    if (likely(PyList_Check(obj_messages)))
        arg_messages = obj_messages;
    else {
        CPy_TypeError("list", obj_messages); 
        goto fail;
    }
    CPyTagged arg_n_sources;
    if (likely(PyLong_Check(obj_n_sources)))
        arg_n_sources = CPyTagged_BorrowFromObject(obj_n_sources);
    else {
        CPy_TypeError("int", obj_n_sources); goto fail;
    }
    char arg_is_tty;
    if (obj_is_tty == NULL) {
        arg_is_tty = 2;
    } else if (unlikely(!PyBool_Check(obj_is_tty))) {
        CPy_TypeError("bool", obj_is_tty); goto fail;
    } else
        arg_is_tty = obj_is_tty == Py_True;
    PyObject *arg_terminal_width;
    if (obj_terminal_width == NULL) {
        arg_terminal_width = NULL;
        goto __LL1999;
    }
    if (PyLong_Check(obj_terminal_width))
        arg_terminal_width = obj_terminal_width;
    else {
        arg_terminal_width = NULL;
    }
    if (arg_terminal_width != NULL) goto __LL1999;
    if (obj_terminal_width == Py_None)
        arg_terminal_width = obj_terminal_width;
    else {
        arg_terminal_width = NULL;
    }
    if (arg_terminal_width != NULL) goto __LL1999;
    CPy_TypeError("int or None", obj_terminal_width); 
    goto fail;
__LL1999: ;
    PyObject *retval = CPyDef_dmypy_server___Server___pretty_messages(arg_self, arg_messages, arg_n_sources, arg_is_tty, arg_terminal_width);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "pretty_messages", 795, CPyStatic_dmypy_server___globals);
    return NULL;
}

char CPyDef_dmypy_server___Server___update_sources(PyObject *cpy_r_self, PyObject *cpy_r_sources) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_paths;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "update_sources", 825, CPyStatic_dmypy_server___globals);
        goto CPyL22;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL8;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_modulefinder___BuildSource))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "update_sources", 825, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r6);
        goto CPyL23;
    }
    cpy_r_source = cpy_r_r7;
    cpy_r_r8 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_path;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL24;
    cpy_r_r11 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_path;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_source);
    if (likely(cpy_r_r11 != Py_None))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "update_sources", 825, CPyStatic_dmypy_server___globals, "str", cpy_r_r11);
        goto CPyL23;
    }
    cpy_r_r13 = PyList_Append(cpy_r_r0, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "update_sources", 825, CPyStatic_dmypy_server___globals);
        goto CPyL23;
    }
CPyL7: ;
    cpy_r_r15 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r15;
    goto CPyL2;
CPyL8: ;
    cpy_r_paths = cpy_r_r0;
    cpy_r_r16 = CPyDef_dmypy_server___Server___following_imports(cpy_r_self);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "update_sources", 826, CPyStatic_dmypy_server___globals);
        goto CPyL25;
    }
    if (!cpy_r_r16) goto CPyL19;
    cpy_r_r17 = PyList_New(0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "update_sources", 828, CPyStatic_dmypy_server___globals);
        goto CPyL25;
    }
    cpy_r_r18 = 0;
CPyL12: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_paths)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL26;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_paths, cpy_r_r18);
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "update_sources", 828, CPyStatic_dmypy_server___globals, "str", cpy_r_r23);
        goto CPyL27;
    }
    cpy_r_path = cpy_r_r24;
    cpy_r_r25 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPY_GET_METHOD(cpy_r_r25, CPyType_fscache___FileSystemCache, 7, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r25, cpy_r_path); /* isfile */
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "update_sources", 828, CPyStatic_dmypy_server___globals);
        goto CPyL28;
    }
    if (!cpy_r_r26) goto CPyL29;
    cpy_r_r27 = PyList_Append(cpy_r_r17, cpy_r_path);
    CPy_DECREF(cpy_r_path);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "update_sources", 828, CPyStatic_dmypy_server___globals);
        goto CPyL27;
    }
CPyL17: ;
    cpy_r_r29 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r29;
    goto CPyL12;
CPyL18: ;
    cpy_r_paths = cpy_r_r17;
CPyL19: ;
    cpy_r_r30 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fswatcher;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "update_sources", "Server", "fswatcher", 829, CPyStatic_dmypy_server___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r30);
CPyL20: ;
    cpy_r_r31 = CPyDef_fswatcher___FileSystemWatcher___add_watched_paths(cpy_r_r30, cpy_r_paths);
    CPy_DECREF(cpy_r_paths);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "update_sources", 829, CPyStatic_dmypy_server___globals);
        goto CPyL22;
    }
    return 1;
CPyL22: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL22;
CPyL24: ;
    CPy_DECREF(cpy_r_source);
    goto CPyL7;
CPyL25: ;
    CPy_DecRef(cpy_r_paths);
    goto CPyL22;
CPyL26: ;
    CPy_DECREF(cpy_r_paths);
    goto CPyL18;
CPyL27: ;
    CPy_DecRef(cpy_r_paths);
    CPy_DecRef(cpy_r_r17);
    goto CPyL22;
CPyL28: ;
    CPy_DecRef(cpy_r_paths);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_path);
    goto CPyL22;
CPyL29: ;
    CPy_DECREF(cpy_r_path);
    goto CPyL17;
}

PyObject *CPyPy_dmypy_server___Server___update_sources(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"sources", 0};
    static CPyArg_Parser parser = {"O:update_sources", kwlist, 0};
    PyObject *obj_sources;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_sources)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    char retval = CPyDef_dmypy_server___Server___update_sources(arg_self, arg_sources);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "update_sources", 824, CPyStatic_dmypy_server___globals);
    return NULL;
}

tuple_T2OO CPyDef_dmypy_server___Server___update_changed(PyObject *cpy_r_self, PyObject *cpy_r_sources, PyObject *cpy_r_remove, PyObject *cpy_r_update) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_changed_paths;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fswatcher;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "update_changed", "Server", "fswatcher", 834, CPyStatic_dmypy_server___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_fswatcher___FileSystemWatcher___update_changed(cpy_r_r0, cpy_r_remove, cpy_r_update);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "update_changed", 834, CPyStatic_dmypy_server___globals);
        goto CPyL4;
    }
    cpy_r_changed_paths = cpy_r_r1;
    cpy_r_r2 = CPyDef_dmypy_server___Server____find_changed(cpy_r_self, cpy_r_sources, cpy_r_changed_paths);
    CPy_DECREF(cpy_r_changed_paths);
    if (unlikely(cpy_r_r2.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "update_changed", 835, CPyStatic_dmypy_server___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    tuple_T2OO __tmp2000 = { NULL, NULL };
    cpy_r_r3 = __tmp2000;
    return cpy_r_r3;
}

PyObject *CPyPy_dmypy_server___Server___update_changed(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"sources", "remove", "update", 0};
    static CPyArg_Parser parser = {"OOO:update_changed", kwlist, 0};
    PyObject *obj_sources;
    PyObject *obj_remove;
    PyObject *obj_update;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sources, &obj_remove, &obj_update)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    PyObject *arg_remove;
    if (likely(PyList_Check(obj_remove)))
        arg_remove = obj_remove;
    else {
        CPy_TypeError("list", obj_remove); 
        goto fail;
    }
    PyObject *arg_update;
    if (likely(PyList_Check(obj_update)))
        arg_update = obj_update;
    else {
        CPy_TypeError("list", obj_update); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dmypy_server___Server___update_changed(arg_self, arg_sources, arg_remove, arg_update);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2001 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp2001);
    PyObject *__tmp2002 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp2002);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "update_changed", 831, CPyStatic_dmypy_server___globals);
    return NULL;
}

tuple_T2OO CPyDef_dmypy_server___Server___find_changed(PyObject *cpy_r_self, PyObject *cpy_r_sources) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_changed_paths;
    tuple_T2OO cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    cpy_r_r0 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fswatcher;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "find_changed", "Server", "fswatcher", 838, CPyStatic_dmypy_server___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_fswatcher___FileSystemWatcher___find_changed(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_changed", 838, CPyStatic_dmypy_server___globals);
        goto CPyL4;
    }
    cpy_r_changed_paths = cpy_r_r1;
    cpy_r_r2 = CPyDef_dmypy_server___Server____find_changed(cpy_r_self, cpy_r_sources, cpy_r_changed_paths);
    CPy_DECREF(cpy_r_changed_paths);
    if (unlikely(cpy_r_r2.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_changed", 839, CPyStatic_dmypy_server___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    tuple_T2OO __tmp2003 = { NULL, NULL };
    cpy_r_r3 = __tmp2003;
    return cpy_r_r3;
}

PyObject *CPyPy_dmypy_server___Server___find_changed(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"sources", 0};
    static CPyArg_Parser parser = {"O:find_changed", kwlist, 0};
    PyObject *obj_sources;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_sources)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_dmypy_server___Server___find_changed(arg_self, arg_sources);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2004 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp2004);
    PyObject *__tmp2005 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp2005);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "find_changed", 837, CPyStatic_dmypy_server___globals);
    return NULL;
}

tuple_T2OO CPyDef_dmypy_server___Server____find_changed(PyObject *cpy_r_self, PyObject *cpy_r_sources, PyObject *cpy_r_changed_paths) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    tuple_T2OO cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_changed;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_source_2;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_modules;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyPtr cpy_r_r46;
    int64_t cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_source_3;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_omitted;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_removed;
    CPyTagged cpy_r_r61;
    CPyPtr cpy_r_r62;
    int64_t cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_source_4;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    tuple_T2OO cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    CPyPtr cpy_r_r84;
    int64_t cpy_r_r85;
    CPyTagged cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_source_5;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    CPyTagged cpy_r_r93;
    PyObject *cpy_r_previous_modules;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_changed_set;
    PyObject *cpy_r_r95;
    CPyTagged cpy_r_r96;
    CPyPtr cpy_r_r97;
    int64_t cpy_r_r98;
    CPyTagged cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_source_6;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    int32_t cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    tuple_T2OO cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    int32_t cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    tuple_T2OO cpy_r_r131;
    PyObject *cpy_r_r132;
    int32_t cpy_r_r133;
    char cpy_r_r134;
    CPyTagged cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    CPyTagged cpy_r_r139;
    CPyPtr cpy_r_r140;
    int64_t cpy_r_r141;
    CPyTagged cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    CPyTagged cpy_r_r150;
    PyObject *cpy_r_last;
    CPyTagged cpy_r_r151;
    CPyPtr cpy_r_r152;
    int64_t cpy_r_r153;
    CPyTagged cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_s_2;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    int32_t cpy_r_r166;
    char cpy_r_r167;
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
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    tuple_T2OO cpy_r_r186;
    PyObject *cpy_r_r187;
    int32_t cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    tuple_T2OO cpy_r_r193;
    PyObject *cpy_r_r194;
    int32_t cpy_r_r195;
    char cpy_r_r196;
    CPyTagged cpy_r_r197;
    tuple_T2OO cpy_r_r198;
    tuple_T2OO cpy_r_r199;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 845, CPyStatic_dmypy_server___globals);
        goto CPyL106;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL16;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_modulefinder___BuildSource))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 845, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r6);
        goto CPyL107;
    }
    cpy_r_source = cpy_r_r7;
    cpy_r_r8 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_path;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL7;
    CPy_INCREF(cpy_r_r8);
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r11 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 848, CPyStatic_dmypy_server___globals, "str", cpy_r_r8);
        goto CPyL108;
    }
    cpy_r_r12 = CPyStr_IsTrue(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (cpy_r_r12) goto CPyL109;
CPyL7: ;
    cpy_r_r13 = cpy_r_r8;
    goto CPyL11;
CPyL8: ;
    cpy_r_r14 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_path;
    CPy_INCREF(cpy_r_r14);
    if (likely(cpy_r_r14 != Py_None))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 848, CPyStatic_dmypy_server___globals, "str", cpy_r_r14);
        goto CPyL110;
    }
    cpy_r_r16 = PySequence_Contains(cpy_r_changed_paths, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 848, CPyStatic_dmypy_server___globals);
        goto CPyL110;
    }
    cpy_r_r18 = cpy_r_r16;
    cpy_r_r19 = cpy_r_r18 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r13 = cpy_r_r19;
CPyL11: ;
    cpy_r_r20 = PyObject_IsTrue(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", -1, CPyStatic_dmypy_server___globals);
        goto CPyL110;
    }
    cpy_r_r22 = cpy_r_r20;
    if (!cpy_r_r22) goto CPyL111;
    cpy_r_r23 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_module;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_path;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_source);
    if (likely(cpy_r_r24 != Py_None))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 846, CPyStatic_dmypy_server___globals, "str", cpy_r_r24);
        goto CPyL112;
    }
    cpy_r_r26.f0 = cpy_r_r23;
    cpy_r_r26.f1 = cpy_r_r25;
    CPy_INCREF(cpy_r_r26.f0);
    CPy_INCREF(cpy_r_r26.f1);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = PyTuple_New(2);
    if (unlikely(cpy_r_r27 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2006 = cpy_r_r26.f0;
    PyTuple_SET_ITEM(cpy_r_r27, 0, __tmp2006);
    PyObject *__tmp2007 = cpy_r_r26.f1;
    PyTuple_SET_ITEM(cpy_r_r27, 1, __tmp2007);
    cpy_r_r28 = PyList_Append(cpy_r_r0, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 845, CPyStatic_dmypy_server___globals);
        goto CPyL107;
    }
CPyL15: ;
    cpy_r_r30 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r30;
    goto CPyL2;
CPyL16: ;
    cpy_r_changed = cpy_r_r0;
    cpy_r_r31 = PySet_New(NULL);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 852, CPyStatic_dmypy_server___globals);
        goto CPyL113;
    }
    cpy_r_r32 = 0;
CPyL18: ;
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 << 1;
    cpy_r_r36 = (Py_ssize_t)cpy_r_r32 < (Py_ssize_t)cpy_r_r35;
    if (!cpy_r_r36) goto CPyL22;
    cpy_r_r37 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r32);
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_modulefinder___BuildSource))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 852, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r37);
        goto CPyL114;
    }
    cpy_r_source_2 = cpy_r_r38;
    cpy_r_r39 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_2)->_module;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_source_2);
    cpy_r_r40 = PySet_Add(cpy_r_r31, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 852, CPyStatic_dmypy_server___globals);
        goto CPyL114;
    }
    cpy_r_r42 = cpy_r_r32 + 2;
    cpy_r_r32 = cpy_r_r42;
    goto CPyL18;
CPyL22: ;
    cpy_r_modules = cpy_r_r31;
    cpy_r_r43 = PyList_New(0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 853, CPyStatic_dmypy_server___globals);
        goto CPyL115;
    }
    cpy_r_r44 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_previous_sources;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "_find_changed", "Server", "previous_sources", 853, CPyStatic_dmypy_server___globals);
        goto CPyL116;
    }
    CPy_INCREF(cpy_r_r44);
CPyL24: ;
    cpy_r_r45 = 0;
CPyL25: ;
    cpy_r_r46 = (CPyPtr)&((PyVarObject *)cpy_r_r44)->ob_size;
    cpy_r_r47 = *(int64_t *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 << 1;
    cpy_r_r49 = (Py_ssize_t)cpy_r_r45 < (Py_ssize_t)cpy_r_r48;
    if (!cpy_r_r49) goto CPyL117;
    cpy_r_r50 = CPyList_GetItemUnsafe(cpy_r_r44, cpy_r_r45);
    if (likely(Py_TYPE(cpy_r_r50) == CPyType_modulefinder___BuildSource))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 853, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r50);
        goto CPyL118;
    }
    cpy_r_source_3 = cpy_r_r51;
    cpy_r_r52 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_3)->_module;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = PySet_Contains(cpy_r_modules, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 853, CPyStatic_dmypy_server___globals);
        goto CPyL119;
    }
    cpy_r_r55 = cpy_r_r53;
    cpy_r_r56 = cpy_r_r55 ^ 1;
    if (!cpy_r_r56) goto CPyL120;
    cpy_r_r57 = PyList_Append(cpy_r_r43, cpy_r_source_3);
    CPy_DECREF(cpy_r_source_3);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 853, CPyStatic_dmypy_server___globals);
        goto CPyL118;
    }
CPyL30: ;
    cpy_r_r59 = cpy_r_r45 + 2;
    cpy_r_r45 = cpy_r_r59;
    goto CPyL25;
CPyL31: ;
    cpy_r_omitted = cpy_r_r43;
    cpy_r_r60 = PyList_New(0);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 854, CPyStatic_dmypy_server___globals);
        goto CPyL121;
    }
    cpy_r_removed = cpy_r_r60;
    cpy_r_r61 = 0;
CPyL33: ;
    cpy_r_r62 = (CPyPtr)&((PyVarObject *)cpy_r_omitted)->ob_size;
    cpy_r_r63 = *(int64_t *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 << 1;
    cpy_r_r65 = (Py_ssize_t)cpy_r_r61 < (Py_ssize_t)cpy_r_r64;
    if (!cpy_r_r65) goto CPyL122;
    cpy_r_r66 = CPyList_GetItemUnsafe(cpy_r_omitted, cpy_r_r61);
    if (likely(Py_TYPE(cpy_r_r66) == CPyType_modulefinder___BuildSource))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 855, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r66);
        goto CPyL123;
    }
    cpy_r_source_4 = cpy_r_r67;
    cpy_r_r68 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_4)->_path;
    CPy_INCREF(cpy_r_r68);
    cpy_r_path = cpy_r_r68;
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_path != cpy_r_r69;
    if (!cpy_r_r70) goto CPyL124;
    CPy_INCREF(cpy_r_path);
    if (likely(cpy_r_path != Py_None))
        cpy_r_r71 = cpy_r_path;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 856, CPyStatic_dmypy_server___globals, "str", cpy_r_path);
        goto CPyL125;
    }
    cpy_r_r72 = CPyStr_IsTrue(cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (cpy_r_r72) {
        goto CPyL40;
    } else
        goto CPyL124;
CPyL38: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r73 = 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 857, CPyStatic_dmypy_server___globals);
        goto CPyL106;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r74 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_4)->_module;
    CPy_INCREF(cpy_r_r74);
    CPy_DECREF(cpy_r_source_4);
    if (likely(cpy_r_path != Py_None))
        cpy_r_r75 = cpy_r_path;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 858, CPyStatic_dmypy_server___globals, "str", cpy_r_path);
        goto CPyL126;
    }
    cpy_r_r76.f0 = cpy_r_r74;
    cpy_r_r76.f1 = cpy_r_r75;
    CPy_INCREF(cpy_r_r76.f0);
    CPy_INCREF(cpy_r_r76.f1);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = PyTuple_New(2);
    if (unlikely(cpy_r_r77 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2008 = cpy_r_r76.f0;
    PyTuple_SET_ITEM(cpy_r_r77, 0, __tmp2008);
    PyObject *__tmp2009 = cpy_r_r76.f1;
    PyTuple_SET_ITEM(cpy_r_r77, 1, __tmp2009);
    cpy_r_r78 = PyList_Append(cpy_r_removed, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 858, CPyStatic_dmypy_server___globals);
        goto CPyL123;
    }
    cpy_r_r80 = cpy_r_r61 + 2;
    cpy_r_r61 = cpy_r_r80;
    goto CPyL33;
CPyL43: ;
    cpy_r_r81 = PySet_New(NULL);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 863, CPyStatic_dmypy_server___globals);
        goto CPyL127;
    }
    cpy_r_r82 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_previous_sources;
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "_find_changed", "Server", "previous_sources", 863, CPyStatic_dmypy_server___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r82);
CPyL45: ;
    cpy_r_r83 = 0;
CPyL46: ;
    cpy_r_r84 = (CPyPtr)&((PyVarObject *)cpy_r_r82)->ob_size;
    cpy_r_r85 = *(int64_t *)cpy_r_r84;
    cpy_r_r86 = cpy_r_r85 << 1;
    cpy_r_r87 = (Py_ssize_t)cpy_r_r83 < (Py_ssize_t)cpy_r_r86;
    if (!cpy_r_r87) goto CPyL129;
    cpy_r_r88 = CPyList_GetItemUnsafe(cpy_r_r82, cpy_r_r83);
    if (likely(Py_TYPE(cpy_r_r88) == CPyType_modulefinder___BuildSource))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 863, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r88);
        goto CPyL130;
    }
    cpy_r_source_5 = cpy_r_r89;
    cpy_r_r90 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_5)->_module;
    CPy_INCREF(cpy_r_r90);
    CPy_DECREF(cpy_r_source_5);
    cpy_r_r91 = PySet_Add(cpy_r_r81, cpy_r_r90);
    CPy_DECREF(cpy_r_r90);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 863, CPyStatic_dmypy_server___globals);
        goto CPyL130;
    }
    cpy_r_r93 = cpy_r_r83 + 2;
    cpy_r_r83 = cpy_r_r93;
    goto CPyL46;
CPyL50: ;
    cpy_r_previous_modules = cpy_r_r81;
    cpy_r_r94 = PySet_New(cpy_r_changed);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 864, CPyStatic_dmypy_server___globals);
        goto CPyL131;
    }
    cpy_r_changed_set = cpy_r_r94;
    cpy_r_r95 = PyList_New(0);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 866, CPyStatic_dmypy_server___globals);
        goto CPyL132;
    }
    cpy_r_r96 = 0;
CPyL53: ;
    cpy_r_r97 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r98 = *(int64_t *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 << 1;
    cpy_r_r100 = (Py_ssize_t)cpy_r_r96 < (Py_ssize_t)cpy_r_r99;
    if (!cpy_r_r100) goto CPyL133;
    cpy_r_r101 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r96);
    if (likely(Py_TYPE(cpy_r_r101) == CPyType_modulefinder___BuildSource))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 866, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r101);
        goto CPyL134;
    }
    cpy_r_source_6 = cpy_r_r102;
    cpy_r_r103 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_6)->_path;
    CPy_INCREF(cpy_r_r103);
    cpy_r_r104 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r105 = cpy_r_r103 != cpy_r_r104;
    if (!cpy_r_r105) goto CPyL58;
    CPy_INCREF(cpy_r_r103);
    if (likely(cpy_r_r103 != Py_None))
        cpy_r_r106 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 869, CPyStatic_dmypy_server___globals, "str", cpy_r_r103);
        goto CPyL135;
    }
    cpy_r_r107 = CPyStr_IsTrue(cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    if (cpy_r_r107) goto CPyL136;
CPyL58: ;
    cpy_r_r108 = cpy_r_r103;
    goto CPyL66;
CPyL59: ;
    cpy_r_r109 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_6)->_module;
    CPy_INCREF(cpy_r_r109);
    cpy_r_r110 = PySet_Contains(cpy_r_previous_modules, cpy_r_r109);
    CPy_DECREF(cpy_r_r109);
    cpy_r_r111 = cpy_r_r110 >= 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 870, CPyStatic_dmypy_server___globals);
        goto CPyL137;
    }
    cpy_r_r112 = cpy_r_r110;
    cpy_r_r113 = cpy_r_r112 ^ 1;
    if (cpy_r_r113) goto CPyL62;
    cpy_r_r114 = cpy_r_r113;
    goto CPyL65;
CPyL62: ;
    cpy_r_r115 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_6)->_module;
    CPy_INCREF(cpy_r_r115);
    cpy_r_r116 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_6)->_path;
    CPy_INCREF(cpy_r_r116);
    if (likely(cpy_r_r116 != Py_None))
        cpy_r_r117 = cpy_r_r116;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 871, CPyStatic_dmypy_server___globals, "str", cpy_r_r116);
        goto CPyL138;
    }
    cpy_r_r118.f0 = cpy_r_r115;
    cpy_r_r118.f1 = cpy_r_r117;
    CPy_INCREF(cpy_r_r118.f0);
    CPy_INCREF(cpy_r_r118.f1);
    CPy_DECREF(cpy_r_r115);
    CPy_DECREF(cpy_r_r117);
    cpy_r_r119 = PyTuple_New(2);
    if (unlikely(cpy_r_r119 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2010 = cpy_r_r118.f0;
    PyTuple_SET_ITEM(cpy_r_r119, 0, __tmp2010);
    PyObject *__tmp2011 = cpy_r_r118.f1;
    PyTuple_SET_ITEM(cpy_r_r119, 1, __tmp2011);
    cpy_r_r120 = PySet_Contains(cpy_r_changed_set, cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 871, CPyStatic_dmypy_server___globals);
        goto CPyL137;
    }
    cpy_r_r122 = cpy_r_r120;
    cpy_r_r123 = cpy_r_r122 ^ 1;
    cpy_r_r114 = cpy_r_r123;
CPyL65: ;
    cpy_r_r124 = cpy_r_r114 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r124);
    cpy_r_r108 = cpy_r_r124;
CPyL66: ;
    cpy_r_r125 = PyObject_IsTrue(cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r126 = cpy_r_r125 >= 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", -1, CPyStatic_dmypy_server___globals);
        goto CPyL137;
    }
    cpy_r_r127 = cpy_r_r125;
    if (!cpy_r_r127) goto CPyL139;
    cpy_r_r128 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_6)->_module;
    CPy_INCREF(cpy_r_r128);
    cpy_r_r129 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_6)->_path;
    CPy_INCREF(cpy_r_r129);
    CPy_DECREF(cpy_r_source_6);
    if (likely(cpy_r_r129 != Py_None))
        cpy_r_r130 = cpy_r_r129;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 867, CPyStatic_dmypy_server___globals, "str", cpy_r_r129);
        goto CPyL140;
    }
    cpy_r_r131.f0 = cpy_r_r128;
    cpy_r_r131.f1 = cpy_r_r130;
    CPy_INCREF(cpy_r_r131.f0);
    CPy_INCREF(cpy_r_r131.f1);
    CPy_DECREF(cpy_r_r128);
    CPy_DECREF(cpy_r_r130);
    cpy_r_r132 = PyTuple_New(2);
    if (unlikely(cpy_r_r132 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2012 = cpy_r_r131.f0;
    PyTuple_SET_ITEM(cpy_r_r132, 0, __tmp2012);
    PyObject *__tmp2013 = cpy_r_r131.f1;
    PyTuple_SET_ITEM(cpy_r_r132, 1, __tmp2013);
    cpy_r_r133 = PyList_Append(cpy_r_r95, cpy_r_r132);
    CPy_DECREF(cpy_r_r132);
    cpy_r_r134 = cpy_r_r133 >= 0;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 866, CPyStatic_dmypy_server___globals);
        goto CPyL134;
    }
CPyL70: ;
    cpy_r_r135 = cpy_r_r96 + 2;
    cpy_r_r96 = cpy_r_r135;
    goto CPyL53;
CPyL71: ;
    cpy_r_r136 = CPyList_Extend(cpy_r_changed, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 865, CPyStatic_dmypy_server___globals);
        goto CPyL127;
    } else
        goto CPyL141;
CPyL72: ;
    cpy_r_r137 = PyDict_New();
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 876, CPyStatic_dmypy_server___globals);
        goto CPyL127;
    }
    cpy_r_r138 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_previous_sources;
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "_find_changed", "Server", "previous_sources", 876, CPyStatic_dmypy_server___globals);
        goto CPyL142;
    }
    CPy_INCREF(cpy_r_r138);
CPyL74: ;
    cpy_r_r139 = 0;
CPyL75: ;
    cpy_r_r140 = (CPyPtr)&((PyVarObject *)cpy_r_r138)->ob_size;
    cpy_r_r141 = *(int64_t *)cpy_r_r140;
    cpy_r_r142 = cpy_r_r141 << 1;
    cpy_r_r143 = (Py_ssize_t)cpy_r_r139 < (Py_ssize_t)cpy_r_r142;
    if (!cpy_r_r143) goto CPyL143;
    cpy_r_r144 = CPyList_GetItemUnsafe(cpy_r_r138, cpy_r_r139);
    if (likely(Py_TYPE(cpy_r_r144) == CPyType_modulefinder___BuildSource))
        cpy_r_r145 = cpy_r_r144;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 876, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r144);
        goto CPyL144;
    }
    cpy_r_s = cpy_r_r145;
    cpy_r_r146 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s)->_path;
    CPy_INCREF(cpy_r_r146);
    cpy_r_r147 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s)->_module;
    CPy_INCREF(cpy_r_r147);
    CPy_DECREF(cpy_r_s);
    cpy_r_r148 = CPyDict_SetItem(cpy_r_r137, cpy_r_r146, cpy_r_r147);
    CPy_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_r147);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 876, CPyStatic_dmypy_server___globals);
        goto CPyL144;
    }
    cpy_r_r150 = cpy_r_r139 + 2;
    cpy_r_r139 = cpy_r_r150;
    goto CPyL75;
CPyL79: ;
    cpy_r_last = cpy_r_r137;
    cpy_r_r151 = 0;
CPyL80: ;
    cpy_r_r152 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r153 = *(int64_t *)cpy_r_r152;
    cpy_r_r154 = cpy_r_r153 << 1;
    cpy_r_r155 = (Py_ssize_t)cpy_r_r151 < (Py_ssize_t)cpy_r_r154;
    if (!cpy_r_r155) goto CPyL145;
    cpy_r_r156 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r151);
    if (likely(Py_TYPE(cpy_r_r156) == CPyType_modulefinder___BuildSource))
        cpy_r_r157 = cpy_r_r156;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 877, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r156);
        goto CPyL146;
    }
    cpy_r_s_2 = cpy_r_r157;
    cpy_r_r158 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s_2)->_path;
    CPy_INCREF(cpy_r_r158);
    cpy_r_r159 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r160 = cpy_r_r158 != cpy_r_r159;
    if (!cpy_r_r160) goto CPyL147;
    if (likely(cpy_r_r158 != Py_None))
        cpy_r_r161 = cpy_r_r158;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 878, CPyStatic_dmypy_server___globals, "str", cpy_r_r158);
        goto CPyL148;
    }
    cpy_r_r162 = CPyStr_IsTrue(cpy_r_r161);
    CPy_DECREF(cpy_r_r161);
    if (cpy_r_r162) {
        goto CPyL87;
    } else
        goto CPyL149;
CPyL85: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r163 = 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 878, CPyStatic_dmypy_server___globals);
        goto CPyL106;
    }
    CPy_Unreachable();
CPyL87: ;
    cpy_r_r164 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s_2)->_path;
    CPy_INCREF(cpy_r_r164);
    if (likely(cpy_r_r164 != Py_None))
        cpy_r_r165 = cpy_r_r164;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 879, CPyStatic_dmypy_server___globals, "str", cpy_r_r164);
        goto CPyL148;
    }
    cpy_r_r166 = PyDict_Contains(cpy_r_last, cpy_r_r165);
    CPy_DECREF(cpy_r_r165);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 879, CPyStatic_dmypy_server___globals);
        goto CPyL148;
    }
    cpy_r_r168 = cpy_r_r166;
    if (!cpy_r_r168) goto CPyL150;
    cpy_r_r169 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s_2)->_path;
    CPy_INCREF(cpy_r_r169);
    if (likely(cpy_r_r169 != Py_None))
        cpy_r_r170 = cpy_r_r169;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 879, CPyStatic_dmypy_server___globals, "str", cpy_r_r169);
        goto CPyL148;
    }
    cpy_r_r171 = CPyDict_GetItem(cpy_r_last, cpy_r_r170);
    CPy_DECREF(cpy_r_r170);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 879, CPyStatic_dmypy_server___globals);
        goto CPyL148;
    }
    if (likely(PyUnicode_Check(cpy_r_r171)))
        cpy_r_r172 = cpy_r_r171;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 879, CPyStatic_dmypy_server___globals, "str", cpy_r_r171);
        goto CPyL148;
    }
    cpy_r_r173 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s_2)->_module;
    CPy_INCREF(cpy_r_r173);
    cpy_r_r174 = PyUnicode_Compare(cpy_r_r172, cpy_r_r173);
    CPy_DECREF(cpy_r_r172);
    CPy_DECREF(cpy_r_r173);
    cpy_r_r175 = cpy_r_r174 == -1;
    if (!cpy_r_r175) goto CPyL96;
    cpy_r_r176 = PyErr_Occurred();
    cpy_r_r177 = cpy_r_r176 != NULL;
    if (!cpy_r_r177) goto CPyL96;
    cpy_r_r178 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 879, CPyStatic_dmypy_server___globals);
        goto CPyL148;
    }
CPyL96: ;
    cpy_r_r179 = cpy_r_r174 != 0;
    if (!cpy_r_r179) goto CPyL150;
    cpy_r_r180 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s_2)->_path;
    CPy_INCREF(cpy_r_r180);
    if (likely(cpy_r_r180 != Py_None))
        cpy_r_r181 = cpy_r_r180;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 881, CPyStatic_dmypy_server___globals, "str", cpy_r_r180);
        goto CPyL148;
    }
    cpy_r_r182 = CPyDict_GetItem(cpy_r_last, cpy_r_r181);
    CPy_DECREF(cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 881, CPyStatic_dmypy_server___globals);
        goto CPyL148;
    }
    if (likely(PyUnicode_Check(cpy_r_r182)))
        cpy_r_r183 = cpy_r_r182;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 881, CPyStatic_dmypy_server___globals, "str", cpy_r_r182);
        goto CPyL148;
    }
    cpy_r_r184 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s_2)->_path;
    CPy_INCREF(cpy_r_r184);
    if (likely(cpy_r_r184 != Py_None))
        cpy_r_r185 = cpy_r_r184;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 881, CPyStatic_dmypy_server___globals, "str", cpy_r_r184);
        goto CPyL151;
    }
    cpy_r_r186.f0 = cpy_r_r183;
    cpy_r_r186.f1 = cpy_r_r185;
    CPy_INCREF(cpy_r_r186.f0);
    CPy_INCREF(cpy_r_r186.f1);
    CPy_DECREF(cpy_r_r183);
    CPy_DECREF(cpy_r_r185);
    cpy_r_r187 = PyTuple_New(2);
    if (unlikely(cpy_r_r187 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2014 = cpy_r_r186.f0;
    PyTuple_SET_ITEM(cpy_r_r187, 0, __tmp2014);
    PyObject *__tmp2015 = cpy_r_r186.f1;
    PyTuple_SET_ITEM(cpy_r_r187, 1, __tmp2015);
    cpy_r_r188 = PyList_Append(cpy_r_removed, cpy_r_r187);
    CPy_DECREF(cpy_r_r187);
    cpy_r_r189 = cpy_r_r188 >= 0;
    if (unlikely(!cpy_r_r189)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 881, CPyStatic_dmypy_server___globals);
        goto CPyL148;
    }
    cpy_r_r190 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s_2)->_module;
    CPy_INCREF(cpy_r_r190);
    cpy_r_r191 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s_2)->_path;
    CPy_INCREF(cpy_r_r191);
    CPy_DECREF(cpy_r_s_2);
    if (likely(cpy_r_r191 != Py_None))
        cpy_r_r192 = cpy_r_r191;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "_find_changed", 882, CPyStatic_dmypy_server___globals, "str", cpy_r_r191);
        goto CPyL152;
    }
    cpy_r_r193.f0 = cpy_r_r190;
    cpy_r_r193.f1 = cpy_r_r192;
    CPy_INCREF(cpy_r_r193.f0);
    CPy_INCREF(cpy_r_r193.f1);
    CPy_DECREF(cpy_r_r190);
    CPy_DECREF(cpy_r_r192);
    cpy_r_r194 = PyTuple_New(2);
    if (unlikely(cpy_r_r194 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2016 = cpy_r_r193.f0;
    PyTuple_SET_ITEM(cpy_r_r194, 0, __tmp2016);
    PyObject *__tmp2017 = cpy_r_r193.f1;
    PyTuple_SET_ITEM(cpy_r_r194, 1, __tmp2017);
    cpy_r_r195 = PyList_Append(cpy_r_changed, cpy_r_r194);
    CPy_DECREF(cpy_r_r194);
    cpy_r_r196 = cpy_r_r195 >= 0;
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 882, CPyStatic_dmypy_server___globals);
        goto CPyL146;
    }
CPyL104: ;
    cpy_r_r197 = cpy_r_r151 + 2;
    cpy_r_r151 = cpy_r_r197;
    goto CPyL80;
CPyL105: ;
    cpy_r_r198.f0 = cpy_r_changed;
    cpy_r_r198.f1 = cpy_r_removed;
    CPy_INCREF(cpy_r_r198.f0);
    CPy_INCREF(cpy_r_r198.f1);
    CPy_DECREF(cpy_r_changed);
    CPy_DECREF(cpy_r_removed);
    return cpy_r_r198;
CPyL106: ;
    tuple_T2OO __tmp2018 = { NULL, NULL };
    cpy_r_r199 = __tmp2018;
    return cpy_r_r199;
CPyL107: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL106;
CPyL108: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_source);
    CPy_DecRef(cpy_r_r8);
    goto CPyL106;
CPyL109: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL8;
CPyL110: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_source);
    goto CPyL106;
CPyL111: ;
    CPy_DECREF(cpy_r_source);
    goto CPyL15;
CPyL112: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r23);
    goto CPyL106;
CPyL113: ;
    CPy_DecRef(cpy_r_changed);
    goto CPyL106;
CPyL114: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r31);
    goto CPyL106;
CPyL115: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_modules);
    goto CPyL106;
CPyL116: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r43);
    goto CPyL106;
CPyL117: ;
    CPy_DECREF(cpy_r_modules);
    CPy_DECREF(cpy_r_r44);
    goto CPyL31;
CPyL118: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    goto CPyL106;
CPyL119: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_source_3);
    goto CPyL106;
CPyL120: ;
    CPy_DECREF(cpy_r_source_3);
    goto CPyL30;
CPyL121: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_omitted);
    goto CPyL106;
CPyL122: ;
    CPy_DECREF(cpy_r_omitted);
    goto CPyL43;
CPyL123: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_omitted);
    CPy_DecRef(cpy_r_removed);
    goto CPyL106;
CPyL124: ;
    CPy_DECREF(cpy_r_changed);
    CPy_DECREF(cpy_r_omitted);
    CPy_DECREF(cpy_r_removed);
    CPy_DECREF(cpy_r_source_4);
    CPy_DECREF(cpy_r_path);
    goto CPyL38;
CPyL125: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_omitted);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_source_4);
    CPy_DecRef(cpy_r_path);
    goto CPyL106;
CPyL126: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_omitted);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r74);
    goto CPyL106;
CPyL127: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    goto CPyL106;
CPyL128: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r81);
    goto CPyL106;
CPyL129: ;
    CPy_DECREF(cpy_r_r82);
    goto CPyL50;
CPyL130: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r81);
    CPy_DecRef(cpy_r_r82);
    goto CPyL106;
CPyL131: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_previous_modules);
    goto CPyL106;
CPyL132: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_previous_modules);
    CPy_DecRef(cpy_r_changed_set);
    goto CPyL106;
CPyL133: ;
    CPy_DECREF(cpy_r_previous_modules);
    CPy_DECREF(cpy_r_changed_set);
    goto CPyL71;
CPyL134: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_previous_modules);
    CPy_DecRef(cpy_r_changed_set);
    CPy_DecRef(cpy_r_r95);
    goto CPyL106;
CPyL135: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_previous_modules);
    CPy_DecRef(cpy_r_changed_set);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_source_6);
    CPy_DecRef(cpy_r_r103);
    goto CPyL106;
CPyL136: ;
    CPy_DECREF(cpy_r_r103);
    goto CPyL59;
CPyL137: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_previous_modules);
    CPy_DecRef(cpy_r_changed_set);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_source_6);
    goto CPyL106;
CPyL138: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_previous_modules);
    CPy_DecRef(cpy_r_changed_set);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_source_6);
    CPy_DecRef(cpy_r_r115);
    goto CPyL106;
CPyL139: ;
    CPy_DECREF(cpy_r_source_6);
    goto CPyL70;
CPyL140: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_previous_modules);
    CPy_DecRef(cpy_r_changed_set);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r128);
    goto CPyL106;
CPyL141: ;
    CPy_DECREF(cpy_r_r136);
    goto CPyL72;
CPyL142: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r137);
    goto CPyL106;
CPyL143: ;
    CPy_DECREF(cpy_r_r138);
    goto CPyL79;
CPyL144: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r138);
    goto CPyL106;
CPyL145: ;
    CPy_DECREF(cpy_r_last);
    goto CPyL105;
CPyL146: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_last);
    goto CPyL106;
CPyL147: ;
    CPy_DECREF(cpy_r_changed);
    CPy_DECREF(cpy_r_removed);
    CPy_DECREF(cpy_r_last);
    CPy_DECREF(cpy_r_s_2);
    CPy_DECREF(cpy_r_r158);
    goto CPyL85;
CPyL148: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_last);
    CPy_DecRef(cpy_r_s_2);
    goto CPyL106;
CPyL149: ;
    CPy_DECREF(cpy_r_changed);
    CPy_DECREF(cpy_r_removed);
    CPy_DECREF(cpy_r_last);
    CPy_DECREF(cpy_r_s_2);
    goto CPyL85;
CPyL150: ;
    CPy_DECREF(cpy_r_s_2);
    goto CPyL104;
CPyL151: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_last);
    CPy_DecRef(cpy_r_s_2);
    CPy_DecRef(cpy_r_r183);
    goto CPyL106;
CPyL152: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_removed);
    CPy_DecRef(cpy_r_last);
    CPy_DecRef(cpy_r_r190);
    goto CPyL106;
}

PyObject *CPyPy_dmypy_server___Server____find_changed(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"sources", "changed_paths", 0};
    static CPyArg_Parser parser = {"OO:_find_changed", kwlist, 0};
    PyObject *obj_sources;
    PyObject *obj_changed_paths;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sources, &obj_changed_paths)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    PyObject *arg_changed_paths = obj_changed_paths;
    tuple_T2OO retval = CPyDef_dmypy_server___Server____find_changed(arg_self, arg_sources, arg_changed_paths);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2019 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp2019);
    PyObject *__tmp2020 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp2020);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "_find_changed", 841, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___cmd_inspect(PyObject *cpy_r_self, PyObject *cpy_r_show, PyObject *cpy_r_location, CPyTagged cpy_r_verbosity, CPyTagged cpy_r_limit, char cpy_r_include_span, char cpy_r_include_kind, char cpy_r_include_object_attrs, char cpy_r_union_attrs, char cpy_r_force_reload) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_engine;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_old_inspections;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    tuple_T3OOO cpy_r_r39;
    tuple_T3OOO cpy_r_r40;
    tuple_T3OOO cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    cpy_r_r0 = NULL;
    cpy_r_result = cpy_r_r0;
    if (cpy_r_verbosity != CPY_INT_TAG) goto CPyL77;
    cpy_r_verbosity = 0;
CPyL2: ;
    if (cpy_r_limit != CPY_INT_TAG) goto CPyL78;
    cpy_r_limit = 0;
CPyL4: ;
    if (cpy_r_include_span != 2) goto CPyL6;
    cpy_r_include_span = 0;
CPyL6: ;
    if (cpy_r_include_kind != 2) goto CPyL8;
    cpy_r_include_kind = 0;
CPyL8: ;
    if (cpy_r_include_object_attrs != 2) goto CPyL10;
    cpy_r_include_object_attrs = 0;
CPyL10: ;
    if (cpy_r_union_attrs != 2) goto CPyL12;
    cpy_r_union_attrs = 0;
CPyL12: ;
    if (cpy_r_force_reload != 2) goto CPyL14;
    cpy_r_force_reload = 0;
CPyL14: ;
    cpy_r_r1 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    CPy_DECREF(cpy_r_r1);
    if (cpy_r_r3) {
        goto CPyL17;
    } else
        goto CPyL79;
CPyL15: ;
    cpy_r_r4 = CPyStatics[401]; /* 'error' */
    cpy_r_r5 = CPyStatics[1969]; /* ('Command "inspect" is only valid after a "check" '
                                    'command (that produces no parse errors)') */
    cpy_r_r6 = CPyDict_Build(1, cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 900, CPyStatic_dmypy_server___globals);
        goto CPyL76;
    }
    return cpy_r_r6;
CPyL17: ;
    cpy_r_r7 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    CPy_INCREF(cpy_r_r7);
    if (likely(cpy_r_r7 != Py_None))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_inspect", 905, CPyStatic_dmypy_server___globals, "mypy.server.update.FineGrainedBuildManager", cpy_r_r7);
        goto CPyL80;
    }
    cpy_r_r9 = CPyDef_inspections___InspectionEngine(cpy_r_r8, cpy_r_verbosity, cpy_r_limit, cpy_r_include_span, cpy_r_include_kind, cpy_r_include_object_attrs, cpy_r_union_attrs, cpy_r_force_reload);
    CPy_DECREF(cpy_r_r8);
    CPyTagged_DECREF(cpy_r_verbosity);
    CPyTagged_DECREF(cpy_r_limit);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 904, CPyStatic_dmypy_server___globals);
        goto CPyL81;
    }
    cpy_r_engine = cpy_r_r9;
    cpy_r_r10 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    cpy_r_r11 = ((mypy___options___OptionsObject *)cpy_r_r10)->_inspections;
    cpy_r_old_inspections = cpy_r_r11;
    cpy_r_r12 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    ((mypy___options___OptionsObject *)cpy_r_r12)->_inspections = 1;
    cpy_r_r14 = CPyStatics[802]; /* 'type' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_show, cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL23;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL23;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 917, CPyStatic_dmypy_server___globals);
        goto CPyL82;
    }
CPyL23: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    if (!cpy_r_r20) goto CPyL26;
    cpy_r_r21 = CPyDef_inspections___InspectionEngine___get_type(cpy_r_engine, cpy_r_location);
    CPy_DECREF(cpy_r_engine);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 918, CPyStatic_dmypy_server___globals);
        goto CPyL42;
    } else
        goto CPyL83;
CPyL25: ;
    cpy_r_result = cpy_r_r21;
    goto CPyL41;
CPyL26: ;
    cpy_r_r22 = CPyStatics[1875]; /* 'attrs' */
    cpy_r_r23 = PyUnicode_Compare(cpy_r_show, cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 == -1;
    if (!cpy_r_r24) goto CPyL29;
    cpy_r_r25 = PyErr_Occurred();
    cpy_r_r26 = cpy_r_r25 != NULL;
    if (!cpy_r_r26) goto CPyL29;
    cpy_r_r27 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 919, CPyStatic_dmypy_server___globals);
        goto CPyL82;
    }
CPyL29: ;
    cpy_r_r28 = cpy_r_r23 == 0;
    if (!cpy_r_r28) goto CPyL32;
    cpy_r_r29 = CPyDef_inspections___InspectionEngine___get_attrs(cpy_r_engine, cpy_r_location);
    CPy_DECREF(cpy_r_engine);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 920, CPyStatic_dmypy_server___globals);
        goto CPyL42;
    } else
        goto CPyL84;
CPyL31: ;
    cpy_r_result = cpy_r_r29;
    goto CPyL41;
CPyL32: ;
    cpy_r_r30 = CPyStatics[1876]; /* 'definition' */
    cpy_r_r31 = PyUnicode_Compare(cpy_r_show, cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 == -1;
    if (!cpy_r_r32) goto CPyL35;
    cpy_r_r33 = PyErr_Occurred();
    cpy_r_r34 = cpy_r_r33 != NULL;
    if (!cpy_r_r34) goto CPyL35;
    cpy_r_r35 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 921, CPyStatic_dmypy_server___globals);
        goto CPyL82;
    }
CPyL35: ;
    cpy_r_r36 = cpy_r_r31 == 0;
    if (!cpy_r_r36) goto CPyL85;
    cpy_r_r37 = CPyDef_inspections___InspectionEngine___get_definition(cpy_r_engine, cpy_r_location);
    CPy_DECREF(cpy_r_engine);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 922, CPyStatic_dmypy_server___globals);
        goto CPyL42;
    } else
        goto CPyL86;
CPyL37: ;
    cpy_r_result = cpy_r_r37;
    goto CPyL41;
CPyL38: ;
    if (0) goto CPyL41;
    PyErr_SetString(PyExc_AssertionError, "Unknown inspection kind");
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 924, CPyStatic_dmypy_server___globals);
        goto CPyL42;
    } else
        goto CPyL87;
CPyL40: ;
    CPy_Unreachable();
CPyL41: ;
    tuple_T3OOO __tmp2021 = { NULL, NULL, NULL };
    cpy_r_r39 = __tmp2021;
    cpy_r_r40 = cpy_r_r39;
    goto CPyL43;
CPyL42: ;
    cpy_r_r41 = CPy_CatchError();
    cpy_r_r40 = cpy_r_r41;
CPyL43: ;
    cpy_r_r42 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_options;
    ((mypy___options___OptionsObject *)cpy_r_r42)->_inspections = cpy_r_old_inspections;
    if (cpy_r_r40.f0 == NULL) {
        goto CPyL50;
    } else
        goto CPyL88;
CPyL44: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL46;
    } else
        goto CPyL89;
CPyL45: ;
    CPy_Unreachable();
CPyL46: ;
    if (cpy_r_r40.f0 == NULL) goto CPyL48;
    CPy_RestoreExcInfo(cpy_r_r40);
    CPy_XDECREF(cpy_r_r40.f0);
    CPy_XDECREF(cpy_r_r40.f1);
    CPy_XDECREF(cpy_r_r40.f2);
CPyL48: ;
    cpy_r_r44 = CPy_KeepPropagating();
    if (!cpy_r_r44) goto CPyL76;
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r45 = CPyStatics[1730]; /* 'out' */
    if (cpy_r_result != NULL) goto CPyL53;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"result\" referenced before assignment");
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 927, CPyStatic_dmypy_server___globals);
        goto CPyL76;
    }
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r47 = PyDict_Contains(cpy_r_result, cpy_r_r45);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 927, CPyStatic_dmypy_server___globals);
        goto CPyL81;
    }
    cpy_r_r49 = cpy_r_r47;
    if (!cpy_r_r49) goto CPyL72;
    cpy_r_r50 = CPyStatics[1730]; /* 'out' */
    if (cpy_r_result != NULL) goto CPyL58;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"result\" referenced before assignment");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 928, CPyStatic_dmypy_server___globals);
        goto CPyL76;
    }
    CPy_Unreachable();
CPyL58: ;
    cpy_r_r52 = CPyDict_GetItem(cpy_r_result, cpy_r_r50);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 928, CPyStatic_dmypy_server___globals);
        goto CPyL81;
    }
    cpy_r_r53 = (PyObject *)&PyUnicode_Type;
    cpy_r_r54 = PyObject_IsInstance(cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 928, CPyStatic_dmypy_server___globals);
        goto CPyL81;
    }
    cpy_r_r56 = cpy_r_r54;
    if (cpy_r_r56) {
        goto CPyL63;
    } else
        goto CPyL90;
CPyL61: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r57 = 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 928, CPyStatic_dmypy_server___globals);
        goto CPyL76;
    }
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r58 = CPyStatics[1730]; /* 'out' */
    if (cpy_r_result != NULL) goto CPyL66;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"result\" referenced before assignment");
    cpy_r_r59 = 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 929, CPyStatic_dmypy_server___globals);
        goto CPyL76;
    }
    CPy_Unreachable();
CPyL66: ;
    cpy_r_r60 = CPyDict_GetItem(cpy_r_result, cpy_r_r58);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 929, CPyStatic_dmypy_server___globals);
        goto CPyL81;
    }
    cpy_r_r61 = CPyStatics[189]; /* '\n' */
    cpy_r_r62 = PyNumber_InPlaceAdd(cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 929, CPyStatic_dmypy_server___globals);
        goto CPyL81;
    }
    if (cpy_r_result == NULL) {
        goto CPyL91;
    } else
        goto CPyL71;
CPyL69: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"result\" referenced before assignment");
    cpy_r_r63 = 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 929, CPyStatic_dmypy_server___globals);
        goto CPyL76;
    }
    CPy_Unreachable();
CPyL71: ;
    cpy_r_r64 = CPyDict_SetItem(cpy_r_result, cpy_r_r58, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 929, CPyStatic_dmypy_server___globals);
        goto CPyL81;
    }
CPyL72: ;
    if (cpy_r_result != NULL) goto CPyL75;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"result\" referenced before assignment");
    cpy_r_r66 = 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", -1, CPyStatic_dmypy_server___globals);
        goto CPyL76;
    }
    CPy_Unreachable();
CPyL75: ;
    return cpy_r_result;
CPyL76: ;
    cpy_r_r67 = NULL;
    return cpy_r_r67;
CPyL77: ;
    CPyTagged_INCREF(cpy_r_verbosity);
    goto CPyL2;
CPyL78: ;
    CPyTagged_INCREF(cpy_r_limit);
    goto CPyL4;
CPyL79: ;
    CPyTagged_DECREF(cpy_r_verbosity);
    CPyTagged_DECREF(cpy_r_limit);
    CPy_XDECREF(cpy_r_result);
    goto CPyL15;
CPyL80: ;
    CPyTagged_DecRef(cpy_r_verbosity);
    CPyTagged_DecRef(cpy_r_limit);
    CPy_XDecRef(cpy_r_result);
    goto CPyL76;
CPyL81: ;
    CPy_XDecRef(cpy_r_result);
    goto CPyL76;
CPyL82: ;
    CPy_DecRef(cpy_r_engine);
    goto CPyL42;
CPyL83: ;
    CPy_XDECREF(cpy_r_result);
    goto CPyL25;
CPyL84: ;
    CPy_XDECREF(cpy_r_result);
    goto CPyL31;
CPyL85: ;
    CPy_DECREF(cpy_r_engine);
    goto CPyL38;
CPyL86: ;
    CPy_XDECREF(cpy_r_result);
    goto CPyL37;
CPyL87: ;
    CPy_XDECREF(cpy_r_result);
    goto CPyL40;
CPyL88: ;
    CPy_XDECREF(cpy_r_result);
    goto CPyL44;
CPyL89: ;
    CPy_XDECREF(cpy_r_r40.f0);
    CPy_XDECREF(cpy_r_r40.f1);
    CPy_XDECREF(cpy_r_r40.f2);
    goto CPyL45;
CPyL90: ;
    CPy_XDECREF(cpy_r_result);
    goto CPyL61;
CPyL91: ;
    CPy_DECREF(cpy_r_r62);
    goto CPyL69;
}

PyObject *CPyPy_dmypy_server___Server___cmd_inspect(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"show", "location", "verbosity", "limit", "include_span", "include_kind", "include_object_attrs", "union_attrs", "force_reload", 0};
    static CPyArg_Parser parser = {"OO|OOOOOOO:cmd_inspect", kwlist, 0};
    PyObject *obj_show;
    PyObject *obj_location;
    PyObject *obj_verbosity = NULL;
    PyObject *obj_limit = NULL;
    PyObject *obj_include_span = NULL;
    PyObject *obj_include_kind = NULL;
    PyObject *obj_include_object_attrs = NULL;
    PyObject *obj_union_attrs = NULL;
    PyObject *obj_force_reload = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_show, &obj_location, &obj_verbosity, &obj_limit, &obj_include_span, &obj_include_kind, &obj_include_object_attrs, &obj_union_attrs, &obj_force_reload)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_show;
    if (likely(PyUnicode_Check(obj_show)))
        arg_show = obj_show;
    else {
        CPy_TypeError("str", obj_show); 
        goto fail;
    }
    PyObject *arg_location;
    if (likely(PyUnicode_Check(obj_location)))
        arg_location = obj_location;
    else {
        CPy_TypeError("str", obj_location); 
        goto fail;
    }
    CPyTagged arg_verbosity;
    if (obj_verbosity == NULL) {
        arg_verbosity = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_verbosity)))
        arg_verbosity = CPyTagged_BorrowFromObject(obj_verbosity);
    else {
        CPy_TypeError("int", obj_verbosity); goto fail;
    }
    CPyTagged arg_limit;
    if (obj_limit == NULL) {
        arg_limit = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_limit)))
        arg_limit = CPyTagged_BorrowFromObject(obj_limit);
    else {
        CPy_TypeError("int", obj_limit); goto fail;
    }
    char arg_include_span;
    if (obj_include_span == NULL) {
        arg_include_span = 2;
    } else if (unlikely(!PyBool_Check(obj_include_span))) {
        CPy_TypeError("bool", obj_include_span); goto fail;
    } else
        arg_include_span = obj_include_span == Py_True;
    char arg_include_kind;
    if (obj_include_kind == NULL) {
        arg_include_kind = 2;
    } else if (unlikely(!PyBool_Check(obj_include_kind))) {
        CPy_TypeError("bool", obj_include_kind); goto fail;
    } else
        arg_include_kind = obj_include_kind == Py_True;
    char arg_include_object_attrs;
    if (obj_include_object_attrs == NULL) {
        arg_include_object_attrs = 2;
    } else if (unlikely(!PyBool_Check(obj_include_object_attrs))) {
        CPy_TypeError("bool", obj_include_object_attrs); goto fail;
    } else
        arg_include_object_attrs = obj_include_object_attrs == Py_True;
    char arg_union_attrs;
    if (obj_union_attrs == NULL) {
        arg_union_attrs = 2;
    } else if (unlikely(!PyBool_Check(obj_union_attrs))) {
        CPy_TypeError("bool", obj_union_attrs); goto fail;
    } else
        arg_union_attrs = obj_union_attrs == Py_True;
    char arg_force_reload;
    if (obj_force_reload == NULL) {
        arg_force_reload = 2;
    } else if (unlikely(!PyBool_Check(obj_force_reload))) {
        CPy_TypeError("bool", obj_force_reload); goto fail;
    } else
        arg_force_reload = obj_force_reload == Py_True;
    PyObject *retval = CPyDef_dmypy_server___Server___cmd_inspect(arg_self, arg_show, arg_location, arg_verbosity, arg_limit, arg_include_span, arg_include_kind, arg_include_object_attrs, arg_union_attrs, arg_force_reload);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "cmd_inspect", 886, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___cmd_suggest(PyObject *cpy_r_self, PyObject *cpy_r_function, char cpy_r_callsites, PyObject *cpy_r_kwargs) {
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
    PyObject *cpy_r_engine;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_out;
    PyObject *cpy_r_r16;
    tuple_T3OOO cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    tuple_T3OOO cpy_r_r39;
    tuple_T3OOO cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T3OOO cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    cpy_r_r0 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[401]; /* 'error' */
    cpy_r_r4 = CPyStatics[1970]; /* ("Command 'suggest' is only valid after a 'check' "
                                    'command (that produces no parse errors)') */
    cpy_r_r5 = CPyDict_Build(1, cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_suggest", 935, CPyStatic_dmypy_server___globals);
        goto CPyL44;
    }
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = ((mypy___dmypy_server___ServerObject *)cpy_r_self)->_fine_grained_manager;
    CPy_INCREF(cpy_r_r6);
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_suggest", 939, CPyStatic_dmypy_server___globals, "mypy.server.update.FineGrainedBuildManager", cpy_r_r6);
        goto CPyL44;
    }
    cpy_r_r8 = (PyObject *)CPyType_suggestions___SuggestionEngine;
    cpy_r_r9 = PyDict_New();
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_suggest", 939, CPyStatic_dmypy_server___globals);
        goto CPyL45;
    }
    cpy_r_r10 = CPyDict_UpdateInDisplay(cpy_r_r9, cpy_r_kwargs);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_suggest", 939, CPyStatic_dmypy_server___globals);
        goto CPyL46;
    }
    cpy_r_r12 = PyTuple_Pack(1, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_suggest", 939, CPyStatic_dmypy_server___globals);
        goto CPyL47;
    }
    cpy_r_r13 = PyObject_Call(cpy_r_r8, cpy_r_r12, cpy_r_r9);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_suggest", 939, CPyStatic_dmypy_server___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_suggestions___SuggestionEngine))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_suggest", 939, CPyStatic_dmypy_server___globals, "mypy.suggestions.SuggestionEngine", cpy_r_r13);
        goto CPyL44;
    }
    cpy_r_engine = cpy_r_r14;
    if (!cpy_r_callsites) goto CPyL13;
    cpy_r_r15 = CPyDef_suggestions___SuggestionEngine___suggest_callsites(cpy_r_engine, cpy_r_function);
    CPy_DECREF(cpy_r_engine);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_suggest", 942, CPyStatic_dmypy_server___globals);
        goto CPyL15;
    }
    cpy_r_out = cpy_r_r15;
    goto CPyL24;
CPyL13: ;
    cpy_r_r16 = CPyDef_suggestions___SuggestionEngine___suggest(cpy_r_engine, cpy_r_function);
    CPy_DECREF(cpy_r_engine);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_suggest", 944, CPyStatic_dmypy_server___globals);
        goto CPyL15;
    }
    cpy_r_out = cpy_r_r16;
    goto CPyL24;
CPyL15: ;
    cpy_r_r17 = CPy_CatchError();
    cpy_r_r18 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    cpy_r_r19 = CPy_ExceptionMatches(cpy_r_r18);
    if (!cpy_r_r19) goto CPyL20;
    cpy_r_r20 = CPy_GetExcValue();
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "cmd_suggest", 945, CPyStatic_dmypy_server___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r20);
        goto CPyL22;
    }
    cpy_r_err = cpy_r_r21;
    cpy_r_r22 = CPyStatics[401]; /* 'error' */
    cpy_r_r23 = PyObject_Str(cpy_r_err);
    CPy_DecRef(cpy_r_err);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_suggest", 946, CPyStatic_dmypy_server___globals);
        goto CPyL22;
    }
    cpy_r_r24 = CPyDict_Build(1, cpy_r_r22, cpy_r_r23);
    CPy_DecRef(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_suggest", 946, CPyStatic_dmypy_server___globals);
        goto CPyL22;
    }
    CPy_RestoreExcInfo(cpy_r_r17);
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    CPy_DecRef(cpy_r_r17.f2);
    cpy_r_r25 = cpy_r_r24;
    goto CPyL31;
CPyL20: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL22;
    } else
        goto CPyL48;
CPyL21: ;
    CPy_Unreachable();
CPyL22: ;
    CPy_RestoreExcInfo(cpy_r_r17);
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    CPy_DecRef(cpy_r_r17.f2);
    cpy_r_r26 = CPy_KeepPropagating();
    if (!cpy_r_r26) goto CPyL32;
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r27 = CPyStr_IsTrue(cpy_r_out);
    if (cpy_r_r27) {
        goto CPyL26;
    } else
        goto CPyL49;
CPyL25: ;
    cpy_r_r28 = CPyStatics[1971]; /* 'No suggestions\n' */
    CPy_INCREF(cpy_r_r28);
    cpy_r_out = cpy_r_r28;
    goto CPyL29;
CPyL26: ;
    cpy_r_r29 = CPyStatics[189]; /* '\n' */
    cpy_r_r30 = CPyStr_Endswith(cpy_r_out, cpy_r_r29);
    if (cpy_r_r30) goto CPyL29;
    cpy_r_r31 = CPyStatics[189]; /* '\n' */
    cpy_r_r32 = CPyStr_Append(cpy_r_out, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_suggest", 951, CPyStatic_dmypy_server___globals);
        goto CPyL32;
    }
    cpy_r_out = cpy_r_r32;
CPyL29: ;
    cpy_r_r33 = CPyStatics[1730]; /* 'out' */
    cpy_r_r34 = CPyStatics[1731]; /* 'err' */
    cpy_r_r35 = CPyStatics[163]; /* '' */
    cpy_r_r36 = CPyStatics[1701]; /* 'status' */
    cpy_r_r37 = CPyStatics[9015]; /* 0 */
    cpy_r_r38 = CPyDict_Build(3, cpy_r_r33, cpy_r_out, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_out);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_suggest", 952, CPyStatic_dmypy_server___globals);
        goto CPyL32;
    }
    cpy_r_r25 = cpy_r_r38;
CPyL31: ;
    tuple_T3OOO __tmp2022 = { NULL, NULL, NULL };
    cpy_r_r39 = __tmp2022;
    cpy_r_r40 = cpy_r_r39;
    goto CPyL33;
CPyL32: ;
    cpy_r_r41 = NULL;
    cpy_r_r25 = cpy_r_r41;
    cpy_r_r42 = CPy_CatchError();
    cpy_r_r40 = cpy_r_r42;
CPyL33: ;
    cpy_r_r43 = CPyDef_dmypy_server___Server___flush_caches(cpy_r_self);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_suggest", 954, CPyStatic_dmypy_server___globals);
        goto CPyL50;
    }
    if (cpy_r_r40.f0 == NULL) {
        goto CPyL37;
    } else
        goto CPyL51;
CPyL35: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL39;
    } else
        goto CPyL52;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    if (cpy_r_r25 == NULL) goto CPyL43;
    return cpy_r_r25;
CPyL39: ;
    if (cpy_r_r40.f0 == NULL) goto CPyL41;
    CPy_RestoreExcInfo(cpy_r_r40);
    CPy_XDECREF(cpy_r_r40.f0);
    CPy_XDECREF(cpy_r_r40.f1);
    CPy_XDECREF(cpy_r_r40.f2);
CPyL41: ;
    cpy_r_r44 = CPy_KeepPropagating();
    if (!cpy_r_r44) goto CPyL44;
    CPy_Unreachable();
CPyL43: ;
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r45 = NULL;
    return cpy_r_r45;
CPyL45: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL44;
CPyL46: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r9);
    goto CPyL44;
CPyL47: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL44;
CPyL48: ;
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    CPy_DecRef(cpy_r_r17.f2);
    goto CPyL21;
CPyL49: ;
    CPy_DECREF(cpy_r_out);
    goto CPyL25;
CPyL50: ;
    CPy_XDecRef(cpy_r_r25);
    goto CPyL39;
CPyL51: ;
    CPy_XDECREF(cpy_r_r25);
    goto CPyL35;
CPyL52: ;
    CPy_XDECREF(cpy_r_r40.f0);
    CPy_XDECREF(cpy_r_r40.f1);
    CPy_XDECREF(cpy_r_r40.f2);
    goto CPyL36;
}

PyObject *CPyPy_dmypy_server___Server___cmd_suggest(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"function", "callsites", 0};
    static CPyArg_Parser parser = {"%OO:cmd_suggest", kwlist, 0};
    PyObject *obj_function;
    PyObject *obj_callsites;
    PyObject *obj_kwargs;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, NULL, &obj_kwargs, &obj_function, &obj_callsites)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *arg_function;
    if (likely(PyUnicode_Check(obj_function)))
        arg_function = obj_function;
    else {
        CPy_TypeError("str", obj_function); 
        goto fail;
    }
    char arg_callsites;
    if (unlikely(!PyBool_Check(obj_callsites))) {
        CPy_TypeError("bool", obj_callsites); goto fail;
    } else
        arg_callsites = obj_callsites == Py_True;
    PyObject *arg_kwargs = obj_kwargs;
    PyObject *retval = CPyDef_dmypy_server___Server___cmd_suggest(arg_self, arg_function, arg_callsites, arg_kwargs);
    CPy_DECREF(obj_kwargs);
    return retval;
fail: ;
    CPy_DECREF(obj_kwargs);
    CPy_AddTraceback("mypy/dmypy_server.py", "cmd_suggest", 932, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___Server___cmd_hang(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyModule_time;
    cpy_r_r1 = CPyStatics[1690]; /* 'sleep' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_hang", 958, CPyStatic_dmypy_server___globals);
        goto CPyL4;
    }
    cpy_r_r3 = CPyStatics[9029]; /* 100 */
    PyObject *cpy_r_r4[1] = {cpy_r_r3};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_hang", 958, CPyStatic_dmypy_server___globals);
        goto CPyL4;
    } else
        goto CPyL5;
CPyL2: ;
    cpy_r_r7 = PyDict_New();
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "cmd_hang", 959, CPyStatic_dmypy_server___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL5: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL2;
}

PyObject *CPyPy_dmypy_server___Server___cmd_hang(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":cmd_hang", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dmypy_server___Server))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy_server.Server", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_dmypy_server___Server___cmd_hang(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "cmd_hang", 956, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___get_meminfo(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    tuple_T3OOO cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_process;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_meminfo;
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
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject **cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_rusage;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    CPyTagged cpy_r_factor;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyTagged cpy_r_r94;
    CPyTagged cpy_r_r95;
    double cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 969, CPyStatic_dmypy_server___globals);
        goto CPyL58;
    }
    cpy_r_res = cpy_r_r0;
    cpy_r_r1 = CPyStatic_dmypy_server___globals;
    cpy_r_r2 = CPyModule_psutil;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    if (cpy_r_r4) goto CPyL5;
    cpy_r_r5 = CPyStatics[1972]; /* 'psutil' */
    cpy_r_r6 = PyImport_Import(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 971, CPyStatic_dmypy_server___globals);
        goto CPyL7;
    }
    CPyModule_psutil = cpy_r_r6;
    CPy_INCREF(CPyModule_psutil);
    CPy_DECREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = CPyStatics[1972]; /* 'psutil' */
    cpy_r_r8 = PyImport_GetModuleDict();
    cpy_r_r9 = CPyStatics[1972]; /* 'psutil' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 971, CPyStatic_dmypy_server___globals);
        goto CPyL7;
    }
    cpy_r_r11 = CPyDict_SetItem(cpy_r_r1, cpy_r_r7, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 971, CPyStatic_dmypy_server___globals);
    } else
        goto CPyL15;
CPyL7: ;
    cpy_r_r13 = CPy_CatchError();
    cpy_r_r14 = CPyModule_builtins;
    cpy_r_r15 = CPyStatics[1973]; /* 'ImportError' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 972, CPyStatic_dmypy_server___globals);
        goto CPyL59;
    }
    cpy_r_r17 = CPy_ExceptionMatches(cpy_r_r16);
    CPy_DecRef(cpy_r_r16);
    if (!cpy_r_r17) goto CPyL60;
    cpy_r_r18 = CPyStatics[1974]; /* ('psutil not found, run pip install mypy[dmypy] to '
                                     'install the needed components for dmypy') */
    cpy_r_r19 = CPyStatics[1975]; /* 'memory_psutil_missing' */
    cpy_r_r20 = CPyDict_SetItem(cpy_r_res, cpy_r_r19, cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 974, CPyStatic_dmypy_server___globals);
        goto CPyL59;
    } else
        goto CPyL12;
CPyL10: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL13;
    } else
        goto CPyL61;
CPyL11: ;
    CPy_Unreachable();
CPyL12: ;
    CPy_RestoreExcInfo(cpy_r_r13);
    CPy_DecRef(cpy_r_r13.f0);
    CPy_DecRef(cpy_r_r13.f1);
    CPy_DecRef(cpy_r_r13.f2);
    goto CPyL57;
CPyL13: ;
    CPy_RestoreExcInfo(cpy_r_r13);
    CPy_DecRef(cpy_r_r13.f0);
    CPy_DecRef(cpy_r_r13.f1);
    CPy_DecRef(cpy_r_r13.f2);
    cpy_r_r22 = CPy_KeepPropagating();
    if (!cpy_r_r22) goto CPyL58;
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r23 = CPyModule_psutil;
    cpy_r_r24 = CPyStatics[1976]; /* 'Process' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 978, CPyStatic_dmypy_server___globals);
        goto CPyL62;
    }
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r25, 0, 0, 0);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 978, CPyStatic_dmypy_server___globals);
        goto CPyL62;
    }
    cpy_r_process = cpy_r_r26;
    cpy_r_r27 = CPyStatics[1977]; /* 'memory_info' */
    PyObject *cpy_r_r28[1] = {cpy_r_process};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = PyObject_VectorcallMethod(cpy_r_r27, cpy_r_r29, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 979, CPyStatic_dmypy_server___globals);
        goto CPyL63;
    }
    CPy_DECREF(cpy_r_process);
    if (likely(PyTuple_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "get_meminfo", 979, CPyStatic_dmypy_server___globals, "tuple", cpy_r_r30);
        goto CPyL62;
    }
    cpy_r_meminfo = cpy_r_r31;
    cpy_r_r32 = CPySequenceTuple_GetItem(cpy_r_meminfo, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 980, CPyStatic_dmypy_server___globals);
        goto CPyL64;
    }
    cpy_r_r33 = CPyStatics[9030]; /* 1048576 */
    cpy_r_r34 = PyNumber_TrueDivide(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 980, CPyStatic_dmypy_server___globals);
        goto CPyL64;
    }
    cpy_r_r35 = CPyStatics[1978]; /* 'memory_rss_mib' */
    cpy_r_r36 = CPyDict_SetItem(cpy_r_res, cpy_r_r35, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 980, CPyStatic_dmypy_server___globals);
        goto CPyL64;
    }
    cpy_r_r38 = CPySequenceTuple_GetItem(cpy_r_meminfo, 2);
    CPy_DECREF(cpy_r_meminfo);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 981, CPyStatic_dmypy_server___globals);
        goto CPyL62;
    }
    cpy_r_r39 = CPyStatics[9030]; /* 1048576 */
    cpy_r_r40 = PyNumber_TrueDivide(cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 981, CPyStatic_dmypy_server___globals);
        goto CPyL62;
    }
    cpy_r_r41 = CPyStatics[1979]; /* 'memory_vms_mib' */
    cpy_r_r42 = CPyDict_SetItem(cpy_r_res, cpy_r_r41, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 981, CPyStatic_dmypy_server___globals);
        goto CPyL62;
    }
    cpy_r_r44 = CPyModule_sys;
    cpy_r_r45 = CPyStatics[305]; /* 'platform' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 982, CPyStatic_dmypy_server___globals);
        goto CPyL62;
    }
    if (likely(PyUnicode_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "get_meminfo", 982, CPyStatic_dmypy_server___globals, "str", cpy_r_r46);
        goto CPyL62;
    }
    cpy_r_r48 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r49 = PyUnicode_Compare(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r50 = cpy_r_r49 == -1;
    if (!cpy_r_r50) goto CPyL30;
    cpy_r_r51 = PyErr_Occurred();
    cpy_r_r52 = cpy_r_r51 != NULL;
    if (!cpy_r_r52) goto CPyL30;
    cpy_r_r53 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 982, CPyStatic_dmypy_server___globals);
        goto CPyL62;
    }
CPyL30: ;
    cpy_r_r54 = cpy_r_r49 == 0;
    if (cpy_r_r54) {
        goto CPyL65;
    } else
        goto CPyL33;
CPyL31: ;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r55 = 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 983, CPyStatic_dmypy_server___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r56 = CPyStatic_dmypy_server___globals;
    cpy_r_r57 = CPyModule_resource;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r59 = cpy_r_r57 != cpy_r_r58;
    if (cpy_r_r59) goto CPyL36;
    cpy_r_r60 = CPyStatics[1980]; /* 'resource' */
    cpy_r_r61 = PyImport_Import(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 986, CPyStatic_dmypy_server___globals);
        goto CPyL62;
    }
    CPyModule_resource = cpy_r_r61;
    CPy_INCREF(CPyModule_resource);
    CPy_DECREF(cpy_r_r61);
CPyL36: ;
    cpy_r_r62 = CPyStatics[1980]; /* 'resource' */
    cpy_r_r63 = PyImport_GetModuleDict();
    cpy_r_r64 = CPyStatics[1980]; /* 'resource' */
    cpy_r_r65 = CPyDict_GetItem(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 986, CPyStatic_dmypy_server___globals);
        goto CPyL62;
    }
    cpy_r_r66 = CPyDict_SetItem(cpy_r_r56, cpy_r_r62, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 986, CPyStatic_dmypy_server___globals);
        goto CPyL62;
    }
    cpy_r_r68 = CPyModule_resource;
    cpy_r_r69 = CPyStatics[1981]; /* 'RUSAGE_SELF' */
    cpy_r_r70 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 988, CPyStatic_dmypy_server___globals);
        goto CPyL62;
    }
    if (likely(PyLong_Check(cpy_r_r70)))
        cpy_r_r71 = CPyTagged_FromObject(cpy_r_r70);
    else {
        CPy_TypeError("int", cpy_r_r70); cpy_r_r71 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 988, CPyStatic_dmypy_server___globals);
        goto CPyL62;
    }
    cpy_r_r72 = CPyModule_resource;
    cpy_r_r73 = CPyStatics[1982]; /* 'getrusage' */
    cpy_r_r74 = CPyObject_GetAttr(cpy_r_r72, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 988, CPyStatic_dmypy_server___globals);
        goto CPyL66;
    }
    cpy_r_r75 = CPyTagged_StealAsObject(cpy_r_r71);
    PyObject *cpy_r_r76[1] = {cpy_r_r75};
    cpy_r_r77 = (PyObject **)&cpy_r_r76;
    cpy_r_r78 = _PyObject_Vectorcall(cpy_r_r74, cpy_r_r77, 1, 0);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 988, CPyStatic_dmypy_server___globals);
        goto CPyL67;
    }
    CPy_DECREF(cpy_r_r75);
    if (likely(PyTuple_Check(cpy_r_r78)))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "get_meminfo", 988, CPyStatic_dmypy_server___globals, "tuple", cpy_r_r78);
        goto CPyL62;
    }
    cpy_r_rusage = cpy_r_r79;
    cpy_r_r80 = CPyModule_sys;
    cpy_r_r81 = CPyStatics[305]; /* 'platform' */
    cpy_r_r82 = CPyObject_GetAttr(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 989, CPyStatic_dmypy_server___globals);
        goto CPyL68;
    }
    if (likely(PyUnicode_Check(cpy_r_r82)))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "get_meminfo", 989, CPyStatic_dmypy_server___globals, "str", cpy_r_r82);
        goto CPyL68;
    }
    cpy_r_r84 = CPyStatics[1983]; /* 'darwin' */
    cpy_r_r85 = PyUnicode_Compare(cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r86 = cpy_r_r85 == -1;
    if (!cpy_r_r86) goto CPyL48;
    cpy_r_r87 = PyErr_Occurred();
    cpy_r_r88 = cpy_r_r87 != NULL;
    if (!cpy_r_r88) goto CPyL48;
    cpy_r_r89 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 989, CPyStatic_dmypy_server___globals);
        goto CPyL68;
    }
CPyL48: ;
    cpy_r_r90 = cpy_r_r85 == 0;
    if (cpy_r_r90) {
        goto CPyL69;
    } else
        goto CPyL51;
CPyL49: ;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r91 = 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 990, CPyStatic_dmypy_server___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_factor = 2048;
    cpy_r_r92 = CPyStatics[1984]; /* 'ru_maxrss' */
    cpy_r_r93 = CPyObject_GetAttr(cpy_r_rusage, cpy_r_r92);
    CPy_DECREF(cpy_r_rusage);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 993, CPyStatic_dmypy_server___globals);
        goto CPyL70;
    }
    if (likely(PyLong_Check(cpy_r_r93)))
        cpy_r_r94 = CPyTagged_FromObject(cpy_r_r93);
    else {
        CPy_TypeError("int", cpy_r_r93); cpy_r_r94 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 993, CPyStatic_dmypy_server___globals);
        goto CPyL70;
    }
    cpy_r_r95 = CPyTagged_Multiply(cpy_r_r94, cpy_r_factor);
    CPyTagged_DECREF(cpy_r_r94);
    CPyTagged_DECREF(cpy_r_factor);
    cpy_r_r96 = CPyTagged_TrueDivide(cpy_r_r95, 2097152);
    CPyTagged_DECREF(cpy_r_r95);
    cpy_r_r97 = cpy_r_r96 == -113.0;
    if (unlikely(cpy_r_r97)) goto CPyL56;
CPyL55: ;
    cpy_r_r98 = CPyStatics[1985]; /* 'memory_maxrss_mib' */
    cpy_r_r99 = PyFloat_FromDouble(cpy_r_r96);
    cpy_r_r100 = CPyDict_SetItem(cpy_r_res, cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 993, CPyStatic_dmypy_server___globals);
        goto CPyL62;
    } else
        goto CPyL57;
CPyL56: ;
    cpy_r_r102 = PyErr_Occurred();
    if (unlikely(cpy_r_r102 != NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 993, CPyStatic_dmypy_server___globals);
        goto CPyL62;
    } else
        goto CPyL55;
CPyL57: ;
    return cpy_r_res;
CPyL58: ;
    cpy_r_r103 = NULL;
    return cpy_r_r103;
CPyL59: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL13;
CPyL60: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL10;
CPyL61: ;
    CPy_DecRef(cpy_r_r13.f0);
    CPy_DecRef(cpy_r_r13.f1);
    CPy_DecRef(cpy_r_r13.f2);
    goto CPyL11;
CPyL62: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL58;
CPyL63: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_process);
    goto CPyL58;
CPyL64: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_meminfo);
    goto CPyL58;
CPyL65: ;
    CPy_DECREF(cpy_r_res);
    goto CPyL31;
CPyL66: ;
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_r71);
    goto CPyL58;
CPyL67: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_r75);
    goto CPyL58;
CPyL68: ;
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_rusage);
    goto CPyL58;
CPyL69: ;
    CPy_DECREF(cpy_r_res);
    CPy_DECREF(cpy_r_rusage);
    goto CPyL49;
CPyL70: ;
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_factor);
    goto CPyL58;
}

PyObject *CPyPy_dmypy_server___get_meminfo(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_meminfo", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_dmypy_server___get_meminfo();
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "get_meminfo", 968, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___find_all_sources_in_build(PyObject *cpy_r_graph, PyObject *cpy_r_extra) {
    tuple_T0 cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_seen;
    CPyTagged cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T4CIOO cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_module;
    PyObject *cpy_r_state;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    if (cpy_r_extra != NULL) goto CPyL21;
    cpy_r_r0.empty_struct_error_flag = 0;
    cpy_r_r1 = PyTuple_New(0);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    cpy_r_extra = cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = PySequence_List(cpy_r_extra);
    CPy_DECREF(cpy_r_extra);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_all_sources_in_build", 1000, CPyStatic_dmypy_server___globals);
        goto CPyL20;
    }
    cpy_r_result = cpy_r_r2;
    cpy_r_r3 = PySet_New(NULL);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_all_sources_in_build", 1001, CPyStatic_dmypy_server___globals);
        goto CPyL22;
    }
    cpy_r_r4 = 0;
CPyL5: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_result)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL9;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_result, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_modulefinder___BuildSource))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_all_sources_in_build", 1001, CPyStatic_dmypy_server___globals, "mypy.modulefinder.BuildSource", cpy_r_r9);
        goto CPyL23;
    }
    cpy_r_source = cpy_r_r10;
    cpy_r_r11 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_module;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_source);
    cpy_r_r12 = PySet_Add(cpy_r_r3, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_all_sources_in_build", 1001, CPyStatic_dmypy_server___globals);
        goto CPyL23;
    }
    cpy_r_r14 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r14;
    goto CPyL5;
CPyL9: ;
    cpy_r_seen = cpy_r_r3;
    cpy_r_r15 = 0;
    cpy_r_r16 = PyDict_Size(cpy_r_graph);
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = CPyDict_GetItemsIter(cpy_r_graph);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_all_sources_in_build", 1002, CPyStatic_dmypy_server___globals);
        goto CPyL24;
    }
CPyL10: ;
    cpy_r_r19 = CPyDict_NextItem(cpy_r_r18, cpy_r_r15);
    cpy_r_r20 = cpy_r_r19.f1;
    cpy_r_r15 = cpy_r_r20;
    cpy_r_r21 = cpy_r_r19.f0;
    if (!cpy_r_r21) goto CPyL25;
    cpy_r_r22 = cpy_r_r19.f2;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = cpy_r_r19.f3;
    CPy_INCREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r19.f2);
    CPy_DECREF(cpy_r_r19.f3);
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r24 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_all_sources_in_build", 1002, CPyStatic_dmypy_server___globals, "str", cpy_r_r22);
        goto CPyL26;
    }
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_mypy___build___State))
        cpy_r_r25 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "find_all_sources_in_build", 1002, CPyStatic_dmypy_server___globals, "mypy.build.State", cpy_r_r23);
        goto CPyL27;
    }
    cpy_r_module = cpy_r_r24;
    cpy_r_state = cpy_r_r25;
    cpy_r_r26 = PySet_Contains(cpy_r_seen, cpy_r_module);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_all_sources_in_build", 1003, CPyStatic_dmypy_server___globals);
        goto CPyL28;
    }
    cpy_r_r28 = cpy_r_r26;
    cpy_r_r29 = cpy_r_r28 ^ 1;
    if (!cpy_r_r29) goto CPyL29;
    cpy_r_r30 = ((mypy___build___StateObject *)cpy_r_state)->_path;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_state);
    cpy_r_r31 = NULL;
    cpy_r_r32 = NULL;
    cpy_r_r33 = 2;
    cpy_r_r34 = CPyDef_modulefinder___BuildSource(cpy_r_r30, cpy_r_module, cpy_r_r31, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_all_sources_in_build", 1004, CPyStatic_dmypy_server___globals);
        goto CPyL30;
    }
    cpy_r_r35 = PyList_Append(cpy_r_result, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_all_sources_in_build", 1004, CPyStatic_dmypy_server___globals);
        goto CPyL30;
    }
CPyL17: ;
    cpy_r_r37 = CPyDict_CheckSize(cpy_r_graph, cpy_r_r17);
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_all_sources_in_build", 1002, CPyStatic_dmypy_server___globals);
        goto CPyL30;
    } else
        goto CPyL10;
CPyL18: ;
    cpy_r_r38 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "find_all_sources_in_build", 1002, CPyStatic_dmypy_server___globals);
        goto CPyL22;
    }
    return cpy_r_result;
CPyL20: ;
    cpy_r_r39 = NULL;
    return cpy_r_r39;
CPyL21: ;
    CPy_INCREF(cpy_r_extra);
    goto CPyL2;
CPyL22: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r3);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_seen);
    goto CPyL20;
CPyL25: ;
    CPy_DECREF(cpy_r_seen);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19.f2);
    CPy_DECREF(cpy_r_r19.f3);
    goto CPyL18;
CPyL26: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r23);
    goto CPyL20;
CPyL27: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r24);
    goto CPyL20;
CPyL28: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    goto CPyL20;
CPyL29: ;
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_state);
    goto CPyL17;
CPyL30: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_r18);
    goto CPyL20;
}

PyObject *CPyPy_dmypy_server___find_all_sources_in_build(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"graph", "extra", 0};
    static CPyArg_Parser parser = {"O|O:find_all_sources_in_build", kwlist, 0};
    PyObject *obj_graph;
    PyObject *obj_extra = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_graph, &obj_extra)) {
        return NULL;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_extra;
    if (obj_extra == NULL) {
        arg_extra = NULL;
    } else {
        arg_extra = obj_extra; 
    }
    PyObject *retval = CPyDef_dmypy_server___find_all_sources_in_build(arg_graph, arg_extra);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "find_all_sources_in_build", 997, CPyStatic_dmypy_server___globals);
    return NULL;
}

char CPyDef_dmypy_server___fix_module_deps(PyObject *cpy_r_graph) {
    CPyTagged cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T4CIOO cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_module;
    PyObject *cpy_r_state;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_new_suppressed;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_new_dependencies;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_dep;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    cpy_r_r0 = 0;
    cpy_r_r1 = PyDict_Size(cpy_r_graph);
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = CPyDict_GetItemsIter(cpy_r_graph);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1014, CPyStatic_dmypy_server___globals);
        goto CPyL27;
    }
CPyL1: ;
    cpy_r_r4 = CPyDict_NextItem(cpy_r_r3, cpy_r_r0);
    cpy_r_r5 = cpy_r_r4.f1;
    cpy_r_r0 = cpy_r_r5;
    cpy_r_r6 = cpy_r_r4.f0;
    if (!cpy_r_r6) goto CPyL28;
    cpy_r_r7 = cpy_r_r4.f2;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = cpy_r_r4.f3;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r4.f2);
    CPy_DECREF(cpy_r_r4.f3);
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r9 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fix_module_deps", 1014, CPyStatic_dmypy_server___globals, "str", cpy_r_r7);
        goto CPyL29;
    }
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_mypy___build___State))
        cpy_r_r10 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fix_module_deps", 1014, CPyStatic_dmypy_server___globals, "mypy.build.State", cpy_r_r8);
        goto CPyL30;
    }
    cpy_r_module = cpy_r_r9;
    CPy_DECREF(cpy_r_module);
    cpy_r_state = cpy_r_r10;
    cpy_r_r11 = PyList_New(0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1015, CPyStatic_dmypy_server___globals);
        goto CPyL31;
    }
    cpy_r_new_suppressed = cpy_r_r11;
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1016, CPyStatic_dmypy_server___globals);
        goto CPyL32;
    }
    cpy_r_new_dependencies = cpy_r_r12;
    cpy_r_r13 = ((mypy___build___StateObject *)cpy_r_state)->_dependencies;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "fix_module_deps", "State", "dependencies", 1017, CPyStatic_dmypy_server___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r13);
CPyL7: ;
    cpy_r_r14 = ((mypy___build___StateObject *)cpy_r_state)->_suppressed;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/dmypy_server.py", "fix_module_deps", "State", "suppressed", 1017, CPyStatic_dmypy_server___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r14);
CPyL8: ;
    cpy_r_r15 = PyNumber_Add(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1017, CPyStatic_dmypy_server___globals);
        goto CPyL33;
    }
    if (likely(PyList_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fix_module_deps", 1017, CPyStatic_dmypy_server___globals, "list", cpy_r_r15);
        goto CPyL33;
    }
    cpy_r_r17 = 0;
CPyL11: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL35;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r17);
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "fix_module_deps", 1017, CPyStatic_dmypy_server___globals, "str", cpy_r_r22);
        goto CPyL36;
    }
    cpy_r_dep = cpy_r_r23;
    cpy_r_r24 = PyDict_Contains(cpy_r_graph, cpy_r_dep);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1018, CPyStatic_dmypy_server___globals);
        goto CPyL37;
    }
    cpy_r_r26 = cpy_r_r24;
    if (!cpy_r_r26) goto CPyL16;
    cpy_r_r27 = PyList_Append(cpy_r_new_dependencies, cpy_r_dep);
    CPy_DECREF(cpy_r_dep);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1019, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    } else
        goto CPyL17;
CPyL16: ;
    cpy_r_r29 = PyList_Append(cpy_r_new_suppressed, cpy_r_dep);
    CPy_DECREF(cpy_r_dep);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1021, CPyStatic_dmypy_server___globals);
        goto CPyL36;
    }
CPyL17: ;
    cpy_r_r31 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r31;
    goto CPyL11;
CPyL18: ;
    CPy_INCREF(cpy_r_new_dependencies);
    if (((mypy___build___StateObject *)cpy_r_state)->_dependencies != NULL) {
        CPy_DECREF(((mypy___build___StateObject *)cpy_r_state)->_dependencies);
    }
    ((mypy___build___StateObject *)cpy_r_state)->_dependencies = cpy_r_new_dependencies;
    cpy_r_r32 = 1;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1022, CPyStatic_dmypy_server___globals);
        goto CPyL33;
    }
    cpy_r_r33 = PySet_New(cpy_r_new_dependencies);
    CPy_DECREF(cpy_r_new_dependencies);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1023, CPyStatic_dmypy_server___globals);
        goto CPyL32;
    }
    if (((mypy___build___StateObject *)cpy_r_state)->_dependencies_set != NULL) {
        CPy_DECREF(((mypy___build___StateObject *)cpy_r_state)->_dependencies_set);
    }
    ((mypy___build___StateObject *)cpy_r_state)->_dependencies_set = cpy_r_r33;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1023, CPyStatic_dmypy_server___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_new_suppressed);
    if (((mypy___build___StateObject *)cpy_r_state)->_suppressed != NULL) {
        CPy_DECREF(((mypy___build___StateObject *)cpy_r_state)->_suppressed);
    }
    ((mypy___build___StateObject *)cpy_r_state)->_suppressed = cpy_r_new_suppressed;
    cpy_r_r35 = 1;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1024, CPyStatic_dmypy_server___globals);
        goto CPyL32;
    }
    cpy_r_r36 = PySet_New(cpy_r_new_suppressed);
    CPy_DECREF(cpy_r_new_suppressed);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1025, CPyStatic_dmypy_server___globals);
        goto CPyL31;
    }
    if (((mypy___build___StateObject *)cpy_r_state)->_suppressed_set != NULL) {
        CPy_DECREF(((mypy___build___StateObject *)cpy_r_state)->_suppressed_set);
    }
    ((mypy___build___StateObject *)cpy_r_state)->_suppressed_set = cpy_r_r36;
    cpy_r_r37 = 1;
    CPy_DECREF(cpy_r_state);
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1025, CPyStatic_dmypy_server___globals);
        goto CPyL38;
    }
    cpy_r_r38 = CPyDict_CheckSize(cpy_r_graph, cpy_r_r2);
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1014, CPyStatic_dmypy_server___globals);
        goto CPyL38;
    } else
        goto CPyL1;
CPyL25: ;
    cpy_r_r39 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1014, CPyStatic_dmypy_server___globals);
        goto CPyL27;
    }
    return 1;
CPyL27: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
CPyL28: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4.f2);
    CPy_DECREF(cpy_r_r4.f3);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r8);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r9);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_state);
    goto CPyL27;
CPyL32: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_new_suppressed);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_new_suppressed);
    CPy_DecRef(cpy_r_new_dependencies);
    goto CPyL27;
CPyL34: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_new_suppressed);
    CPy_DecRef(cpy_r_new_dependencies);
    CPy_DecRef(cpy_r_r13);
    goto CPyL27;
CPyL35: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL18;
CPyL36: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_new_suppressed);
    CPy_DecRef(cpy_r_new_dependencies);
    CPy_DecRef(cpy_r_r16);
    goto CPyL27;
CPyL37: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_new_suppressed);
    CPy_DecRef(cpy_r_new_dependencies);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_dep);
    goto CPyL27;
CPyL38: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL27;
}

PyObject *CPyPy_dmypy_server___fix_module_deps(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"graph", 0};
    static CPyArg_Parser parser = {"O:fix_module_deps", kwlist, 0};
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
    char retval = CPyDef_dmypy_server___fix_module_deps(arg_graph);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "fix_module_deps", 1008, CPyStatic_dmypy_server___globals);
    return NULL;
}

PyObject *CPyDef_dmypy_server___filter_out_missing_top_level_packages(PyObject *cpy_r_packages, PyObject *cpy_r_search_paths, PyObject *cpy_r_fscache) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_found;
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
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_paths;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_entries;
    tuple_T3OOO cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_entry;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1039, CPyStatic_dmypy_server___globals);
        goto CPyL52;
    }
    cpy_r_found = cpy_r_r0;
    cpy_r_r1 = CPySequenceTuple_GetItem(cpy_r_search_paths, 0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1041, CPyStatic_dmypy_server___globals);
        goto CPyL53;
    }
    if (likely(PyTuple_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1041, CPyStatic_dmypy_server___globals, "tuple", cpy_r_r1);
        goto CPyL53;
    }
    cpy_r_r3 = CPySequenceTuple_GetItem(cpy_r_search_paths, 2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1042, CPyStatic_dmypy_server___globals);
        goto CPyL54;
    }
    if (likely(PyTuple_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1042, CPyStatic_dmypy_server___globals, "tuple", cpy_r_r3);
        goto CPyL54;
    }
    cpy_r_r5 = PyNumber_Add(cpy_r_r2, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1041, CPyStatic_dmypy_server___globals);
        goto CPyL53;
    }
    if (likely(PyTuple_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1041, CPyStatic_dmypy_server___globals, "tuple", cpy_r_r5);
        goto CPyL53;
    }
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_search_paths, 4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1043, CPyStatic_dmypy_server___globals);
        goto CPyL55;
    }
    if (likely(PyTuple_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1043, CPyStatic_dmypy_server___globals, "tuple", cpy_r_r7);
        goto CPyL55;
    }
    cpy_r_r9 = PyNumber_Add(cpy_r_r6, cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1041, CPyStatic_dmypy_server___globals);
        goto CPyL53;
    }
    if (likely(PyTuple_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1041, CPyStatic_dmypy_server___globals, "tuple", cpy_r_r9);
        goto CPyL53;
    }
    cpy_r_r11 = CPySequenceTuple_GetItem(cpy_r_search_paths, 6);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1044, CPyStatic_dmypy_server___globals);
        goto CPyL56;
    }
    if (likely(PyTuple_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1044, CPyStatic_dmypy_server___globals, "tuple", cpy_r_r11);
        goto CPyL56;
    }
    cpy_r_r13 = PyNumber_Add(cpy_r_r10, cpy_r_r12);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1041, CPyStatic_dmypy_server___globals);
        goto CPyL53;
    }
    if (likely(PyTuple_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1041, CPyStatic_dmypy_server___globals, "tuple", cpy_r_r13);
        goto CPyL53;
    }
    cpy_r_paths = cpy_r_r14;
    cpy_r_r15 = 0;
CPyL16: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_paths)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL57;
    cpy_r_r20 = CPySequenceTuple_GetItem(cpy_r_paths, cpy_r_r15);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1046, CPyStatic_dmypy_server___globals);
        goto CPyL58;
    }
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1046, CPyStatic_dmypy_server___globals, "str", cpy_r_r20);
        goto CPyL58;
    }
    cpy_r_p = cpy_r_r21;
    cpy_r_r22 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 6, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_fscache, cpy_r_p); /* listdir */
    CPy_DECREF(cpy_r_p);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1048, CPyStatic_dmypy_server___globals);
        goto CPyL22;
    }
    cpy_r_entries = cpy_r_r22;
    goto CPyL31;
CPyL22: ;
    cpy_r_r23 = CPy_CatchError();
    cpy_r_r24 = CPyModule_builtins;
    cpy_r_r25 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1049, CPyStatic_dmypy_server___globals);
        goto CPyL59;
    }
    cpy_r_r27 = CPy_ExceptionMatches(cpy_r_r26);
    CPy_DecRef(cpy_r_r26);
    if (!cpy_r_r27) goto CPyL60;
    cpy_r_r28 = PyList_New(0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1050, CPyStatic_dmypy_server___globals);
        goto CPyL59;
    }
    cpy_r_entries = cpy_r_r28;
    goto CPyL28;
CPyL26: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL29;
    } else
        goto CPyL61;
CPyL27: ;
    CPy_Unreachable();
CPyL28: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL31;
CPyL29: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    cpy_r_r29 = CPy_KeepPropagating();
    if (!cpy_r_r29) goto CPyL52;
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r30 = 0;
CPyL32: ;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_entries)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = (Py_ssize_t)cpy_r_r30 < (Py_ssize_t)cpy_r_r33;
    if (!cpy_r_r34) goto CPyL62;
    cpy_r_r35 = CPyList_GetItemUnsafe(cpy_r_entries, cpy_r_r30);
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1051, CPyStatic_dmypy_server___globals, "str", cpy_r_r35);
        goto CPyL63;
    }
    cpy_r_entry = cpy_r_r36;
    cpy_r_r37 = CPyStatics[174]; /* '.py' */
    cpy_r_r38 = CPyStr_Endswith(cpy_r_entry, cpy_r_r37);
    if (!cpy_r_r38) goto CPyL38;
    cpy_r_r39 = CPyStr_GetSlice(cpy_r_entry, 0, -6);
    CPy_DECREF(cpy_r_entry);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1055, CPyStatic_dmypy_server___globals);
        goto CPyL63;
    }
    if (likely(PyUnicode_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1055, CPyStatic_dmypy_server___globals, "str", cpy_r_r39);
        goto CPyL63;
    }
    cpy_r_entry = cpy_r_r40;
    goto CPyL46;
CPyL38: ;
    cpy_r_r41 = CPyStatics[397]; /* '.pyi' */
    cpy_r_r42 = CPyStr_Endswith(cpy_r_entry, cpy_r_r41);
    if (!cpy_r_r42) goto CPyL42;
    cpy_r_r43 = CPyStr_GetSlice(cpy_r_entry, 0, -8);
    CPy_DECREF(cpy_r_entry);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1057, CPyStatic_dmypy_server___globals);
        goto CPyL63;
    }
    if (likely(PyUnicode_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1057, CPyStatic_dmypy_server___globals, "str", cpy_r_r43);
        goto CPyL63;
    }
    cpy_r_entry = cpy_r_r44;
    goto CPyL46;
CPyL42: ;
    cpy_r_r45 = CPyStatics[1986]; /* '-stubs' */
    cpy_r_r46 = CPyStr_Endswith(cpy_r_entry, cpy_r_r45);
    if (!cpy_r_r46) goto CPyL46;
    cpy_r_r47 = CPyStr_GetSlice(cpy_r_entry, 0, -12);
    CPy_DECREF(cpy_r_entry);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1060, CPyStatic_dmypy_server___globals);
        goto CPyL63;
    }
    if (likely(PyUnicode_Check(cpy_r_r47)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1060, CPyStatic_dmypy_server___globals, "str", cpy_r_r47);
        goto CPyL63;
    }
    cpy_r_entry = cpy_r_r48;
CPyL46: ;
    cpy_r_r49 = PySet_Contains(cpy_r_packages, cpy_r_entry);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1061, CPyStatic_dmypy_server___globals);
        goto CPyL64;
    }
    cpy_r_r51 = cpy_r_r49;
    if (!cpy_r_r51) goto CPyL65;
    cpy_r_r52 = PySet_Add(cpy_r_found, cpy_r_entry);
    CPy_DECREF(cpy_r_entry);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1062, CPyStatic_dmypy_server___globals);
        goto CPyL63;
    }
CPyL49: ;
    cpy_r_r54 = cpy_r_r30 + 2;
    cpy_r_r30 = cpy_r_r54;
    goto CPyL32;
CPyL50: ;
    cpy_r_r55 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r55;
    goto CPyL16;
CPyL51: ;
    return cpy_r_found;
CPyL52: ;
    cpy_r_r56 = NULL;
    return cpy_r_r56;
CPyL53: ;
    CPy_DecRef(cpy_r_found);
    goto CPyL52;
CPyL54: ;
    CPy_DecRef(cpy_r_found);
    CPy_DecRef(cpy_r_r2);
    goto CPyL52;
CPyL55: ;
    CPy_DecRef(cpy_r_found);
    CPy_DecRef(cpy_r_r6);
    goto CPyL52;
CPyL56: ;
    CPy_DecRef(cpy_r_found);
    CPy_DecRef(cpy_r_r10);
    goto CPyL52;
CPyL57: ;
    CPy_DECREF(cpy_r_paths);
    goto CPyL51;
CPyL58: ;
    CPy_DecRef(cpy_r_found);
    CPy_DecRef(cpy_r_paths);
    goto CPyL52;
CPyL59: ;
    CPy_DecRef(cpy_r_found);
    CPy_DecRef(cpy_r_paths);
    goto CPyL29;
CPyL60: ;
    CPy_DecRef(cpy_r_found);
    CPy_DecRef(cpy_r_paths);
    goto CPyL26;
CPyL61: ;
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL27;
CPyL62: ;
    CPy_DECREF(cpy_r_entries);
    goto CPyL50;
CPyL63: ;
    CPy_DecRef(cpy_r_found);
    CPy_DecRef(cpy_r_paths);
    CPy_DecRef(cpy_r_entries);
    goto CPyL52;
CPyL64: ;
    CPy_DecRef(cpy_r_found);
    CPy_DecRef(cpy_r_paths);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_entry);
    goto CPyL52;
CPyL65: ;
    CPy_DECREF(cpy_r_entry);
    goto CPyL49;
}

PyObject *CPyPy_dmypy_server___filter_out_missing_top_level_packages(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"packages", "search_paths", "fscache", 0};
    static CPyArg_Parser parser = {"OOO:filter_out_missing_top_level_packages", kwlist, 0};
    PyObject *obj_packages;
    PyObject *obj_search_paths;
    PyObject *obj_fscache;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_packages, &obj_search_paths, &obj_fscache)) {
        return NULL;
    }
    PyObject *arg_packages;
    if (likely(PySet_Check(obj_packages)))
        arg_packages = obj_packages;
    else {
        CPy_TypeError("set", obj_packages); 
        goto fail;
    }
    PyObject * arg_search_paths;
    if (likely(PyTuple_Check(obj_search_paths)))
        arg_search_paths = obj_search_paths;
    else {
        CPy_TypeError("tuple", obj_search_paths); 
        goto fail;
    }
    PyObject *arg_fscache;
    if (likely(PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache)))
        arg_fscache = obj_fscache;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_fscache); 
        goto fail;
    }
    PyObject *retval = CPyDef_dmypy_server___filter_out_missing_top_level_packages(arg_packages, arg_search_paths, arg_fscache);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_server.py", "filter_out_missing_top_level_packages", 1028, CPyStatic_dmypy_server___globals);
    return NULL;
}

char CPyDef_dmypy_server_____top_level__(void) {
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
    PyObject **cpy_r_r13;
    PyObject **cpy_r_r14;
    PyObject **cpy_r_r15;
    PyObject **cpy_r_r16;
    PyObject **cpy_r_r17;
    PyObject **cpy_r_r18;
    void *cpy_r_r20;
    void *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
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
    PyObject **cpy_r_r41;
    PyObject **cpy_r_r42;
    PyObject **cpy_r_r43;
    void *cpy_r_r45;
    void *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
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
    int32_t cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    int32_t cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    tuple_T2OO cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    int32_t cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    tuple_T2OO cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    int32_t cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    int32_t cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    int32_t cpy_r_r191;
    char cpy_r_r192;
    char cpy_r_r193;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", -1, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_dmypy_server___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 7, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_argparse;
    cpy_r_r10 = (PyObject **)&CPyModule_base64;
    cpy_r_r11 = (PyObject **)&CPyModule_io;
    cpy_r_r12 = (PyObject **)&CPyModule_json;
    cpy_r_r13 = (PyObject **)&CPyModule_os;
    cpy_r_r14 = (PyObject **)&CPyModule_pickle;
    cpy_r_r15 = (PyObject **)&CPyModule_subprocess;
    cpy_r_r16 = (PyObject **)&CPyModule_sys;
    cpy_r_r17 = (PyObject **)&CPyModule_time;
    cpy_r_r18 = (PyObject **)&CPyModule_traceback;
    PyObject **cpy_r_r19[10] = {
        cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14,
        cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r18
    };
    cpy_r_r20 = (void *)&cpy_r_r19;
    int64_t cpy_r_r21[10] = {9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    cpy_r_r22 = (void *)&cpy_r_r21;
    cpy_r_r23 = CPyStatics[9337]; /* (('argparse', 'argparse', 'argparse'),
                                     ('base64', 'base64', 'base64'), ('io', 'io', 'io'),
                                     ('json', 'json', 'json'), ('os', 'os', 'os'),
                                     ('pickle', 'pickle', 'pickle'),
                                     ('subprocess', 'subprocess', 'subprocess'),
                                     ('sys', 'sys', 'sys'), ('time', 'time', 'time'),
                                     ('traceback', 'traceback', 'traceback')) */
    cpy_r_r24 = CPyStatic_dmypy_server___globals;
    cpy_r_r25 = CPyStatics[1988]; /* 'mypy/dmypy_server.py' */
    cpy_r_r26 = CPyStatics[17]; /* '<module>' */
    cpy_r_r27 = CPyImport_ImportMany(cpy_r_r23, cpy_r_r20, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r22);
    if (!cpy_r_r27) goto CPyL51;
    cpy_r_r28 = CPyStatics[9338]; /* ('redirect_stderr', 'redirect_stdout') */
    cpy_r_r29 = CPyStatics[78]; /* 'contextlib' */
    cpy_r_r30 = CPyStatic_dmypy_server___globals;
    cpy_r_r31 = CPyImport_ImportFromMany(cpy_r_r29, cpy_r_r28, cpy_r_r28, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 19, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_contextlib = cpy_r_r31;
    CPy_INCREF(CPyModule_contextlib);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r32 = CPyStatics[9339]; /* ('AbstractSet', 'Any', 'Callable', 'Final', 'List',
                                     'Sequence', 'Tuple') */
    cpy_r_r33 = CPyStatics[21]; /* 'typing' */
    cpy_r_r34 = CPyStatic_dmypy_server___globals;
    cpy_r_r35 = CPyImport_ImportFromMany(cpy_r_r33, cpy_r_r32, cpy_r_r32, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 20, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_typing = cpy_r_r35;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r36 = CPyStatics[9086]; /* ('TypeAlias',) */
    cpy_r_r37 = CPyStatics[9087]; /* ('_TypeAlias',) */
    cpy_r_r38 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r39 = CPyStatic_dmypy_server___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r36, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 21, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_typing_extensions = cpy_r_r40;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = (PyObject **)&CPyModule_mypy___build;
    cpy_r_r42 = (PyObject **)&CPyModule_mypy___errors;
    cpy_r_r43 = (PyObject **)&CPyModule_mypy___main;
    PyObject **cpy_r_r44[3] = {cpy_r_r41, cpy_r_r42, cpy_r_r43};
    cpy_r_r45 = (void *)&cpy_r_r44;
    int64_t cpy_r_r46[3] = {23, 24, 25};
    cpy_r_r47 = (void *)&cpy_r_r46;
    cpy_r_r48 = CPyStatics[9343]; /* (('mypy.build', 'mypy', 'mypy'),
                                     ('mypy.errors', 'mypy', 'mypy'),
                                     ('mypy.main', 'mypy', 'mypy')) */
    cpy_r_r49 = CPyStatic_dmypy_server___globals;
    cpy_r_r50 = CPyStatics[1988]; /* 'mypy/dmypy_server.py' */
    cpy_r_r51 = CPyStatics[17]; /* '<module>' */
    cpy_r_r52 = CPyImport_ImportMany(cpy_r_r48, cpy_r_r45, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r47);
    if (!cpy_r_r52) goto CPyL51;
    cpy_r_r53 = CPyStatics[9344]; /* ('receive',) */
    cpy_r_r54 = CPyStatics[1774]; /* 'mypy.dmypy_util' */
    cpy_r_r55 = CPyStatic_dmypy_server___globals;
    cpy_r_r56 = CPyImport_ImportFromMany(cpy_r_r54, cpy_r_r53, cpy_r_r53, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 26, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_mypy___dmypy_util = cpy_r_r56;
    CPy_INCREF(CPyModule_mypy___dmypy_util);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r57 = CPyStatics[9345]; /* ('InvalidSourceList', 'create_source_list') */
    cpy_r_r58 = CPyStatics[1991]; /* 'mypy.find_sources' */
    cpy_r_r59 = CPyStatic_dmypy_server___globals;
    cpy_r_r60 = CPyImport_ImportFromMany(cpy_r_r58, cpy_r_r57, cpy_r_r57, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 27, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_mypy___find_sources = cpy_r_r60;
    CPy_INCREF(CPyModule_mypy___find_sources);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r61 = CPyStatics[9146]; /* ('FileSystemCache',) */
    cpy_r_r62 = CPyStatics[564]; /* 'mypy.fscache' */
    cpy_r_r63 = CPyStatic_dmypy_server___globals;
    cpy_r_r64 = CPyImport_ImportFromMany(cpy_r_r62, cpy_r_r61, cpy_r_r61, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 28, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_mypy___fscache = cpy_r_r64;
    CPy_INCREF(CPyModule_mypy___fscache);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r65 = CPyStatics[9346]; /* ('FileData', 'FileSystemWatcher') */
    cpy_r_r66 = CPyStatics[1993]; /* 'mypy.fswatcher' */
    cpy_r_r67 = CPyStatic_dmypy_server___globals;
    cpy_r_r68 = CPyImport_ImportFromMany(cpy_r_r66, cpy_r_r65, cpy_r_r65, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 29, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_mypy___fswatcher = cpy_r_r68;
    CPy_INCREF(CPyModule_mypy___fswatcher);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r69 = CPyStatics[9347]; /* ('InspectionEngine',) */
    cpy_r_r70 = CPyStatics[1995]; /* 'mypy.inspections' */
    cpy_r_r71 = CPyStatic_dmypy_server___globals;
    cpy_r_r72 = CPyImport_ImportFromMany(cpy_r_r70, cpy_r_r69, cpy_r_r69, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 30, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_mypy___inspections = cpy_r_r72;
    CPy_INCREF(CPyModule_mypy___inspections);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r73 = CPyStatics[9348]; /* ('IPCServer',) */
    cpy_r_r74 = CPyStatics[1777]; /* 'mypy.ipc' */
    cpy_r_r75 = CPyStatic_dmypy_server___globals;
    cpy_r_r76 = CPyImport_ImportFromMany(cpy_r_r74, cpy_r_r73, cpy_r_r73, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 31, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_mypy___ipc = cpy_r_r76;
    CPy_INCREF(CPyModule_mypy___ipc);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r77 = CPyStatics[9349]; /* ('BuildSource', 'FindModuleCache', 'SearchPaths',
                                     'compute_search_paths') */
    cpy_r_r78 = CPyStatics[576]; /* 'mypy.modulefinder' */
    cpy_r_r79 = CPyStatic_dmypy_server___globals;
    cpy_r_r80 = CPyImport_ImportFromMany(cpy_r_r78, cpy_r_r77, cpy_r_r77, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 32, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_mypy___modulefinder = cpy_r_r80;
    CPy_INCREF(CPyModule_mypy___modulefinder);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r81 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r82 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r83 = CPyStatic_dmypy_server___globals;
    cpy_r_r84 = CPyImport_ImportFromMany(cpy_r_r82, cpy_r_r81, cpy_r_r81, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 33, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_mypy___options = cpy_r_r84;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r85 = CPyStatics[9350]; /* ('FineGrainedBuildManager',
                                     'refresh_suppressed_submodules') */
    cpy_r_r86 = CPyStatics[1999]; /* 'mypy.server.update' */
    cpy_r_r87 = CPyStatic_dmypy_server___globals;
    cpy_r_r88 = CPyImport_ImportFromMany(cpy_r_r86, cpy_r_r85, cpy_r_r85, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 34, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_mypy___server___update = cpy_r_r88;
    CPy_INCREF(CPyModule_mypy___server___update);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r89 = CPyStatics[9351]; /* ('SuggestionEngine', 'SuggestionFailure') */
    cpy_r_r90 = CPyStatics[2002]; /* 'mypy.suggestions' */
    cpy_r_r91 = CPyStatic_dmypy_server___globals;
    cpy_r_r92 = CPyImport_ImportFromMany(cpy_r_r90, cpy_r_r89, cpy_r_r89, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 35, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_mypy___suggestions = cpy_r_r92;
    CPy_INCREF(CPyModule_mypy___suggestions);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r93 = CPyStatics[9352]; /* ('reset_global_state',) */
    cpy_r_r94 = CPyStatics[596]; /* 'mypy.typestate' */
    cpy_r_r95 = CPyStatic_dmypy_server___globals;
    cpy_r_r96 = CPyImport_ImportFromMany(cpy_r_r94, cpy_r_r93, cpy_r_r93, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 36, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_mypy___typestate = cpy_r_r96;
    CPy_INCREF(CPyModule_mypy___typestate);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r97 = CPyStatics[9353]; /* ('FancyFormatter', 'count_stats') */
    cpy_r_r98 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r99 = CPyStatic_dmypy_server___globals;
    cpy_r_r100 = CPyImport_ImportFromMany(cpy_r_r98, cpy_r_r97, cpy_r_r97, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 37, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_mypy___util = cpy_r_r100;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r101 = CPyStatics[9159]; /* ('__version__',) */
    cpy_r_r102 = CPyStatics[597]; /* 'mypy.version' */
    cpy_r_r103 = CPyStatic_dmypy_server___globals;
    cpy_r_r104 = CPyImport_ImportFromMany(cpy_r_r102, cpy_r_r101, cpy_r_r101, cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 38, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPyModule_mypy___version = cpy_r_r104;
    CPy_INCREF(CPyModule_mypy___version);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r105 = CPyStatic_dmypy_server___globals;
    cpy_r_r106 = CPyStatics[2005]; /* 'MEM_PROFILE' */
    cpy_r_r107 = 0 ? Py_True : Py_False;
    cpy_r_r108 = CPyDict_SetItem(cpy_r_r105, cpy_r_r106, cpy_r_r107);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 40, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r110 = CPyModule_sys;
    cpy_r_r111 = CPyStatics[305]; /* 'platform' */
    cpy_r_r112 = CPyObject_GetAttr(cpy_r_r110, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 42, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    if (likely(PyUnicode_Check(cpy_r_r112)))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_server.py", "<module>", 42, CPyStatic_dmypy_server___globals, "str", cpy_r_r112);
        goto CPyL51;
    }
    cpy_r_r114 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r115 = PyUnicode_Compare(cpy_r_r113, cpy_r_r114);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r116 = cpy_r_r115 == -1;
    if (!cpy_r_r116) goto CPyL28;
    cpy_r_r117 = PyErr_Occurred();
    cpy_r_r118 = cpy_r_r117 != NULL;
    if (!cpy_r_r118) goto CPyL28;
    cpy_r_r119 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 42, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
CPyL28: ;
    cpy_r_r120 = cpy_r_r115 == 0;
    if (!cpy_r_r120) goto CPyL31;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r121 = 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 43, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r122 = CPyStatics[1673]; /* 'dmypy' */
    cpy_r_r123 = CPyStatic_dmypy_server___globals;
    cpy_r_r124 = CPyStatics[2006]; /* 'CONNECTION_NAME' */
    cpy_r_r125 = CPyDict_SetItem(cpy_r_r123, cpy_r_r124, cpy_r_r122);
    cpy_r_r126 = cpy_r_r125 >= 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 134, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r127 = CPyStatic_dmypy_server___globals;
    cpy_r_r128 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r129 = CPyDict_GetItem(cpy_r_r127, cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 164, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r130 = (PyObject *)&PyUnicode_Type;
    cpy_r_r131 = (PyObject *)&PyUnicode_Type;
    cpy_r_r132.f0 = cpy_r_r130;
    cpy_r_r132.f1 = cpy_r_r131;
    CPy_INCREF(cpy_r_r132.f0);
    CPy_INCREF(cpy_r_r132.f1);
    cpy_r_r133 = PyTuple_New(2);
    if (unlikely(cpy_r_r133 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2023 = cpy_r_r132.f0;
    PyTuple_SET_ITEM(cpy_r_r133, 0, __tmp2023);
    PyObject *__tmp2024 = cpy_r_r132.f1;
    PyTuple_SET_ITEM(cpy_r_r133, 1, __tmp2024);
    cpy_r_r134 = PyObject_GetItem(cpy_r_r129, cpy_r_r133);
    CPy_DECREF(cpy_r_r129);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 164, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r135 = CPyStatic_dmypy_server___globals;
    cpy_r_r136 = CPyStatics[2007]; /* 'ModulePathPair' */
    cpy_r_r137 = CPyDict_SetItem(cpy_r_r135, cpy_r_r136, cpy_r_r134);
    CPy_DECREF(cpy_r_r134);
    cpy_r_r138 = cpy_r_r137 >= 0;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 164, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r139 = CPyStatic_dmypy_server___globals;
    cpy_r_r140 = CPyStatics[81]; /* 'List' */
    cpy_r_r141 = CPyDict_GetItem(cpy_r_r139, cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 165, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r142 = CPyStatic_dmypy_server___globals;
    cpy_r_r143 = CPyStatics[2007]; /* 'ModulePathPair' */
    cpy_r_r144 = CPyDict_GetItem(cpy_r_r142, cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 165, CPyStatic_dmypy_server___globals);
        goto CPyL52;
    }
    cpy_r_r145 = PyObject_GetItem(cpy_r_r141, cpy_r_r144);
    CPy_DECREF(cpy_r_r141);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 165, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r146 = CPyStatic_dmypy_server___globals;
    cpy_r_r147 = CPyStatics[2008]; /* 'ModulePathPairs' */
    cpy_r_r148 = CPyDict_SetItem(cpy_r_r146, cpy_r_r147, cpy_r_r145);
    CPy_DECREF(cpy_r_r145);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 165, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r150 = CPyStatic_dmypy_server___globals;
    cpy_r_r151 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r152 = CPyDict_GetItem(cpy_r_r150, cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 166, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r153 = CPyStatic_dmypy_server___globals;
    cpy_r_r154 = CPyStatics[2008]; /* 'ModulePathPairs' */
    cpy_r_r155 = CPyDict_GetItem(cpy_r_r153, cpy_r_r154);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 166, CPyStatic_dmypy_server___globals);
        goto CPyL53;
    }
    cpy_r_r156 = CPyStatic_dmypy_server___globals;
    cpy_r_r157 = CPyStatics[2008]; /* 'ModulePathPairs' */
    cpy_r_r158 = CPyDict_GetItem(cpy_r_r156, cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 166, CPyStatic_dmypy_server___globals);
        goto CPyL54;
    }
    cpy_r_r159.f0 = cpy_r_r155;
    cpy_r_r159.f1 = cpy_r_r158;
    CPy_INCREF(cpy_r_r159.f0);
    CPy_INCREF(cpy_r_r159.f1);
    CPy_DECREF(cpy_r_r155);
    CPy_DECREF(cpy_r_r158);
    cpy_r_r160 = PyTuple_New(2);
    if (unlikely(cpy_r_r160 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2025 = cpy_r_r159.f0;
    PyTuple_SET_ITEM(cpy_r_r160, 0, __tmp2025);
    PyObject *__tmp2026 = cpy_r_r159.f1;
    PyTuple_SET_ITEM(cpy_r_r160, 1, __tmp2026);
    cpy_r_r161 = PyObject_GetItem(cpy_r_r152, cpy_r_r160);
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 166, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r162 = CPyStatic_dmypy_server___globals;
    cpy_r_r163 = CPyStatics[2009]; /* 'ChangesAndRemovals' */
    cpy_r_r164 = CPyDict_SetItem(cpy_r_r162, cpy_r_r163, cpy_r_r161);
    CPy_DECREF(cpy_r_r161);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 166, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r166 = NULL;
    cpy_r_r167 = CPyStatics[1687]; /* 'mypy.dmypy_server' */
    cpy_r_r168 = (PyObject *)CPyType_dmypy_server___Server_template;
    cpy_r_r169 = CPyType_FromTemplate(cpy_r_r168, cpy_r_r166, cpy_r_r167);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 169, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r170 = CPyDef_dmypy_server___Server_trait_vtable_setup();
    if (unlikely(cpy_r_r170 == 2)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", -1, CPyStatic_dmypy_server___globals);
        goto CPyL55;
    }
    cpy_r_r171 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r172 = CPyStatics[159]; /* 'options' */
    cpy_r_r173 = CPyStatics[2010]; /* 'options_snapshot' */
    cpy_r_r174 = CPyStatics[1688]; /* 'timeout' */
    cpy_r_r175 = CPyStatics[2011]; /* 'fine_grained_manager' */
    cpy_r_r176 = CPyStatics[647]; /* 'fscache' */
    cpy_r_r177 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r178 = CPyStatics[2012]; /* 'formatter' */
    cpy_r_r179 = CPyStatics[1947]; /* 'fswatcher' */
    cpy_r_r180 = CPyStatics[2013]; /* 'previous_sources' */
    cpy_r_r181 = PyTuple_Pack(9, cpy_r_r172, cpy_r_r173, cpy_r_r174, cpy_r_r175, cpy_r_r176, cpy_r_r177, cpy_r_r178, cpy_r_r179, cpy_r_r180);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 169, CPyStatic_dmypy_server___globals);
        goto CPyL55;
    }
    cpy_r_r182 = PyObject_SetAttr(cpy_r_r169, cpy_r_r171, cpy_r_r181);
    CPy_DECREF(cpy_r_r181);
    cpy_r_r183 = cpy_r_r182 >= 0;
    if (unlikely(!cpy_r_r183)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 169, CPyStatic_dmypy_server___globals);
        goto CPyL55;
    }
    CPyType_dmypy_server___Server = (PyTypeObject *)cpy_r_r169;
    CPy_INCREF(CPyType_dmypy_server___Server);
    cpy_r_r184 = CPyStatic_dmypy_server___globals;
    cpy_r_r185 = CPyStatics[1741]; /* 'Server' */
    cpy_r_r186 = CPyDict_SetItem(cpy_r_r184, cpy_r_r185, cpy_r_r169);
    CPy_DECREF(cpy_r_r169);
    cpy_r_r187 = cpy_r_r186 >= 0;
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 169, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    cpy_r_r188 = CPyStatic_dmypy_server___globals;
    cpy_r_r189 = CPyStatics[2014]; /* 'MiB' */
    cpy_r_r190 = CPyStatics[9030]; /* 1048576 */
    cpy_r_r191 = CPyDict_SetItem(cpy_r_r188, cpy_r_r189, cpy_r_r190);
    cpy_r_r192 = cpy_r_r191 >= 0;
    if (unlikely(!cpy_r_r192)) {
        CPy_AddTraceback("mypy/dmypy_server.py", "<module>", 965, CPyStatic_dmypy_server___globals);
        goto CPyL51;
    }
    return 1;
CPyL51: ;
    cpy_r_r193 = 2;
    return cpy_r_r193;
CPyL52: ;
    CPy_DecRef(cpy_r_r141);
    goto CPyL51;
CPyL53: ;
    CPy_DecRef(cpy_r_r152);
    goto CPyL51;
CPyL54: ;
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r155);
    goto CPyL51;
CPyL55: ;
    CPy_DecRef(cpy_r_r169);
    goto CPyL51;
}
