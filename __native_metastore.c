#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *metastore___MetadataStore_setup(PyTypeObject *type);
PyObject *CPyDef_metastore___MetadataStore(void);

static PyObject *
metastore___MetadataStore_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_metastore___MetadataStore) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return metastore___MetadataStore_setup(type);
}

static int
metastore___MetadataStore_traverse(mypy___metastore___MetadataStoreObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
metastore___MetadataStore_clear(mypy___metastore___MetadataStoreObject *self)
{
    return 0;
}

static void
metastore___MetadataStore_dealloc(mypy___metastore___MetadataStoreObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, metastore___MetadataStore_dealloc)
    metastore___MetadataStore_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem metastore___MetadataStore_vtable[6];
static bool
CPyDef_metastore___MetadataStore_trait_vtable_setup(void)
{
    CPyVTableItem metastore___MetadataStore_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_metastore___MetadataStore___getmtime,
        (CPyVTableItem)CPyDef_metastore___MetadataStore___read,
        (CPyVTableItem)CPyDef_metastore___MetadataStore___write,
        (CPyVTableItem)CPyDef_metastore___MetadataStore___remove,
        (CPyVTableItem)CPyDef_metastore___MetadataStore___commit,
        (CPyVTableItem)CPyDef_metastore___MetadataStore___list_all,
    };
    memcpy(metastore___MetadataStore_vtable, metastore___MetadataStore_vtable_scratch, sizeof(metastore___MetadataStore_vtable));
    return 1;
}


static PyGetSetDef metastore___MetadataStore_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef metastore___MetadataStore_methods[] = {
    {"getmtime",
     (PyCFunction)CPyPy_metastore___MetadataStore___getmtime,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"read",
     (PyCFunction)CPyPy_metastore___MetadataStore___read,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"write",
     (PyCFunction)CPyPy_metastore___MetadataStore___write,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"remove",
     (PyCFunction)CPyPy_metastore___MetadataStore___remove,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"commit",
     (PyCFunction)CPyPy_metastore___MetadataStore___commit,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"list_all",
     (PyCFunction)CPyPy_metastore___MetadataStore___list_all,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_metastore___MetadataStore_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "MetadataStore",
    .tp_new = metastore___MetadataStore_new,
    .tp_dealloc = (destructor)metastore___MetadataStore_dealloc,
    .tp_traverse = (traverseproc)metastore___MetadataStore_traverse,
    .tp_clear = (inquiry)metastore___MetadataStore_clear,
    .tp_getset = metastore___MetadataStore_getseters,
    .tp_methods = metastore___MetadataStore_methods,
    .tp_basicsize = sizeof(mypy___metastore___MetadataStoreObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_metastore___MetadataStore_template = &CPyType_metastore___MetadataStore_template_;

static PyObject *
metastore___MetadataStore_setup(PyTypeObject *type)
{
    mypy___metastore___MetadataStoreObject *self;
    self = (mypy___metastore___MetadataStoreObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = metastore___MetadataStore_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_metastore___MetadataStore(void)
{
    PyObject *self = metastore___MetadataStore_setup(CPyType_metastore___MetadataStore);
    if (self == NULL)
        return NULL;
    return self;
}


static int
metastore___FilesystemMetadataStore_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *metastore___FilesystemMetadataStore_setup(PyTypeObject *type);
PyObject *CPyDef_metastore___FilesystemMetadataStore(PyObject *cpy_r_cache_dir_prefix);

static PyObject *
metastore___FilesystemMetadataStore_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_metastore___FilesystemMetadataStore) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = metastore___FilesystemMetadataStore_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_metastore___FilesystemMetadataStore_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
metastore___FilesystemMetadataStore_traverse(mypy___metastore___FilesystemMetadataStoreObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_cache_dir_prefix);
    return 0;
}

static int
metastore___FilesystemMetadataStore_clear(mypy___metastore___FilesystemMetadataStoreObject *self)
{
    Py_CLEAR(self->_cache_dir_prefix);
    return 0;
}

static void
metastore___FilesystemMetadataStore_dealloc(mypy___metastore___FilesystemMetadataStoreObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, metastore___FilesystemMetadataStore_dealloc)
    metastore___FilesystemMetadataStore_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem metastore___FilesystemMetadataStore_vtable[13];
static bool
CPyDef_metastore___FilesystemMetadataStore_trait_vtable_setup(void)
{
    CPyVTableItem metastore___FilesystemMetadataStore_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_metastore___FilesystemMetadataStore___getmtime,
        (CPyVTableItem)CPyDef_metastore___FilesystemMetadataStore___read,
        (CPyVTableItem)CPyDef_metastore___FilesystemMetadataStore___write,
        (CPyVTableItem)CPyDef_metastore___FilesystemMetadataStore___remove,
        (CPyVTableItem)CPyDef_metastore___FilesystemMetadataStore___commit,
        (CPyVTableItem)CPyDef_metastore___FilesystemMetadataStore___list_all,
        (CPyVTableItem)CPyDef_metastore___FilesystemMetadataStore_____init__,
        (CPyVTableItem)CPyDef_metastore___FilesystemMetadataStore___getmtime,
        (CPyVTableItem)CPyDef_metastore___FilesystemMetadataStore___read,
        (CPyVTableItem)CPyDef_metastore___FilesystemMetadataStore___write,
        (CPyVTableItem)CPyDef_metastore___FilesystemMetadataStore___remove,
        (CPyVTableItem)CPyDef_metastore___FilesystemMetadataStore___commit,
        (CPyVTableItem)CPyDef_metastore___FilesystemMetadataStore___list_all,
    };
    memcpy(metastore___FilesystemMetadataStore_vtable, metastore___FilesystemMetadataStore_vtable_scratch, sizeof(metastore___FilesystemMetadataStore_vtable));
    return 1;
}

static PyObject *
metastore___FilesystemMetadataStore_get_cache_dir_prefix(mypy___metastore___FilesystemMetadataStoreObject *self, void *closure);
static int
metastore___FilesystemMetadataStore_set_cache_dir_prefix(mypy___metastore___FilesystemMetadataStoreObject *self, PyObject *value, void *closure);

static PyGetSetDef metastore___FilesystemMetadataStore_getseters[] = {
    {"cache_dir_prefix",
     (getter)metastore___FilesystemMetadataStore_get_cache_dir_prefix, (setter)metastore___FilesystemMetadataStore_set_cache_dir_prefix,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef metastore___FilesystemMetadataStore_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_metastore___FilesystemMetadataStore_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"getmtime",
     (PyCFunction)CPyPy_metastore___FilesystemMetadataStore___getmtime,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"read",
     (PyCFunction)CPyPy_metastore___FilesystemMetadataStore___read,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"write",
     (PyCFunction)CPyPy_metastore___FilesystemMetadataStore___write,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"remove",
     (PyCFunction)CPyPy_metastore___FilesystemMetadataStore___remove,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"commit",
     (PyCFunction)CPyPy_metastore___FilesystemMetadataStore___commit,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"list_all",
     (PyCFunction)CPyPy_metastore___FilesystemMetadataStore___list_all,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_metastore___FilesystemMetadataStore_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FilesystemMetadataStore",
    .tp_new = metastore___FilesystemMetadataStore_new,
    .tp_dealloc = (destructor)metastore___FilesystemMetadataStore_dealloc,
    .tp_traverse = (traverseproc)metastore___FilesystemMetadataStore_traverse,
    .tp_clear = (inquiry)metastore___FilesystemMetadataStore_clear,
    .tp_getset = metastore___FilesystemMetadataStore_getseters,
    .tp_methods = metastore___FilesystemMetadataStore_methods,
    .tp_init = metastore___FilesystemMetadataStore_init,
    .tp_basicsize = sizeof(mypy___metastore___FilesystemMetadataStoreObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_metastore___FilesystemMetadataStore_template = &CPyType_metastore___FilesystemMetadataStore_template_;

static PyObject *
metastore___FilesystemMetadataStore_setup(PyTypeObject *type)
{
    mypy___metastore___FilesystemMetadataStoreObject *self;
    self = (mypy___metastore___FilesystemMetadataStoreObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = metastore___FilesystemMetadataStore_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_metastore___FilesystemMetadataStore(PyObject *cpy_r_cache_dir_prefix)
{
    PyObject *self = metastore___FilesystemMetadataStore_setup(CPyType_metastore___FilesystemMetadataStore);
    if (self == NULL)
        return NULL;
    char res = CPyDef_metastore___FilesystemMetadataStore_____init__(self, cpy_r_cache_dir_prefix);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
metastore___FilesystemMetadataStore_get_cache_dir_prefix(mypy___metastore___FilesystemMetadataStoreObject *self, void *closure)
{
    if (unlikely(self->_cache_dir_prefix == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'cache_dir_prefix' of 'FilesystemMetadataStore' undefined");
        return NULL;
    }
    CPy_INCREF(self->_cache_dir_prefix);
    PyObject *retval = self->_cache_dir_prefix;
    return retval;
}

static int
metastore___FilesystemMetadataStore_set_cache_dir_prefix(mypy___metastore___FilesystemMetadataStoreObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FilesystemMetadataStore' object attribute 'cache_dir_prefix' cannot be deleted");
        return -1;
    }
    if (self->_cache_dir_prefix != NULL) {
        CPy_DECREF(self->_cache_dir_prefix);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3446;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3446;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL3446: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_cache_dir_prefix = tmp;
    return 0;
}

static int
metastore___SqliteMetadataStore_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *metastore___SqliteMetadataStore_setup(PyTypeObject *type);
PyObject *CPyDef_metastore___SqliteMetadataStore(PyObject *cpy_r_cache_dir_prefix);

static PyObject *
metastore___SqliteMetadataStore_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_metastore___SqliteMetadataStore) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = metastore___SqliteMetadataStore_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_metastore___SqliteMetadataStore_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
metastore___SqliteMetadataStore_traverse(mypy___metastore___SqliteMetadataStoreObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_db);
    return 0;
}

static int
metastore___SqliteMetadataStore_clear(mypy___metastore___SqliteMetadataStoreObject *self)
{
    Py_CLEAR(self->_db);
    return 0;
}

static void
metastore___SqliteMetadataStore_dealloc(mypy___metastore___SqliteMetadataStoreObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, metastore___SqliteMetadataStore_dealloc)
    metastore___SqliteMetadataStore_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem metastore___SqliteMetadataStore_vtable[14];
static bool
CPyDef_metastore___SqliteMetadataStore_trait_vtable_setup(void)
{
    CPyVTableItem metastore___SqliteMetadataStore_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_metastore___SqliteMetadataStore___getmtime,
        (CPyVTableItem)CPyDef_metastore___SqliteMetadataStore___read,
        (CPyVTableItem)CPyDef_metastore___SqliteMetadataStore___write,
        (CPyVTableItem)CPyDef_metastore___SqliteMetadataStore___remove,
        (CPyVTableItem)CPyDef_metastore___SqliteMetadataStore___commit,
        (CPyVTableItem)CPyDef_metastore___SqliteMetadataStore___list_all,
        (CPyVTableItem)CPyDef_metastore___SqliteMetadataStore_____init__,
        (CPyVTableItem)CPyDef_metastore___SqliteMetadataStore____query,
        (CPyVTableItem)CPyDef_metastore___SqliteMetadataStore___getmtime,
        (CPyVTableItem)CPyDef_metastore___SqliteMetadataStore___read,
        (CPyVTableItem)CPyDef_metastore___SqliteMetadataStore___write,
        (CPyVTableItem)CPyDef_metastore___SqliteMetadataStore___remove,
        (CPyVTableItem)CPyDef_metastore___SqliteMetadataStore___commit,
        (CPyVTableItem)CPyDef_metastore___SqliteMetadataStore___list_all,
    };
    memcpy(metastore___SqliteMetadataStore_vtable, metastore___SqliteMetadataStore_vtable_scratch, sizeof(metastore___SqliteMetadataStore_vtable));
    return 1;
}

static PyObject *
metastore___SqliteMetadataStore_get_db(mypy___metastore___SqliteMetadataStoreObject *self, void *closure);
static int
metastore___SqliteMetadataStore_set_db(mypy___metastore___SqliteMetadataStoreObject *self, PyObject *value, void *closure);

static PyGetSetDef metastore___SqliteMetadataStore_getseters[] = {
    {"db",
     (getter)metastore___SqliteMetadataStore_get_db, (setter)metastore___SqliteMetadataStore_set_db,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef metastore___SqliteMetadataStore_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_metastore___SqliteMetadataStore_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_query",
     (PyCFunction)CPyPy_metastore___SqliteMetadataStore____query,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"getmtime",
     (PyCFunction)CPyPy_metastore___SqliteMetadataStore___getmtime,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"read",
     (PyCFunction)CPyPy_metastore___SqliteMetadataStore___read,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"write",
     (PyCFunction)CPyPy_metastore___SqliteMetadataStore___write,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"remove",
     (PyCFunction)CPyPy_metastore___SqliteMetadataStore___remove,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"commit",
     (PyCFunction)CPyPy_metastore___SqliteMetadataStore___commit,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"list_all",
     (PyCFunction)CPyPy_metastore___SqliteMetadataStore___list_all,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_metastore___SqliteMetadataStore_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SqliteMetadataStore",
    .tp_new = metastore___SqliteMetadataStore_new,
    .tp_dealloc = (destructor)metastore___SqliteMetadataStore_dealloc,
    .tp_traverse = (traverseproc)metastore___SqliteMetadataStore_traverse,
    .tp_clear = (inquiry)metastore___SqliteMetadataStore_clear,
    .tp_getset = metastore___SqliteMetadataStore_getseters,
    .tp_methods = metastore___SqliteMetadataStore_methods,
    .tp_init = metastore___SqliteMetadataStore_init,
    .tp_basicsize = sizeof(mypy___metastore___SqliteMetadataStoreObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_metastore___SqliteMetadataStore_template = &CPyType_metastore___SqliteMetadataStore_template_;

static PyObject *
metastore___SqliteMetadataStore_setup(PyTypeObject *type)
{
    mypy___metastore___SqliteMetadataStoreObject *self;
    self = (mypy___metastore___SqliteMetadataStoreObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = metastore___SqliteMetadataStore_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_metastore___SqliteMetadataStore(PyObject *cpy_r_cache_dir_prefix)
{
    PyObject *self = metastore___SqliteMetadataStore_setup(CPyType_metastore___SqliteMetadataStore);
    if (self == NULL)
        return NULL;
    char res = CPyDef_metastore___SqliteMetadataStore_____init__(self, cpy_r_cache_dir_prefix);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
metastore___SqliteMetadataStore_get_db(mypy___metastore___SqliteMetadataStoreObject *self, void *closure)
{
    if (unlikely(self->_db == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'db' of 'SqliteMetadataStore' undefined");
        return NULL;
    }
    CPy_INCREF(self->_db);
    PyObject *retval = self->_db;
    return retval;
}

static int
metastore___SqliteMetadataStore_set_db(mypy___metastore___SqliteMetadataStoreObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SqliteMetadataStore' object attribute 'db' cannot be deleted");
        return -1;
    }
    if (self->_db != NULL) {
        CPy_DECREF(self->_db);
    }
    PyObject *tmp;
    tmp = value;
    if (tmp != NULL) goto __LL3447;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3447;
    CPy_TypeError("object or None", value); 
    tmp = NULL;
__LL3447: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_db = tmp;
    return 0;
}

static PyObject *metastore___list_all_FilesystemMetadataStore_env_setup(PyTypeObject *type);
PyObject *CPyDef_metastore___list_all_FilesystemMetadataStore_env(void);

static PyObject *
metastore___list_all_FilesystemMetadataStore_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_metastore___list_all_FilesystemMetadataStore_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return metastore___list_all_FilesystemMetadataStore_env_setup(type);
}

static int
metastore___list_all_FilesystemMetadataStore_env_traverse(mypy___metastore___list_all_FilesystemMetadataStore_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__1);
    Py_VISIT(self->_dir);
    Py_VISIT(self->__);
    Py_VISIT(self->_files);
    Py_VISIT(self->___mypyc_temp__2);
    Py_VISIT(self->_file);
    return 0;
}

static int
metastore___list_all_FilesystemMetadataStore_env_clear(mypy___metastore___list_all_FilesystemMetadataStore_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
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
    Py_CLEAR(self->___mypyc_temp__1);
    Py_CLEAR(self->_dir);
    Py_CLEAR(self->__);
    Py_CLEAR(self->_files);
    Py_CLEAR(self->___mypyc_temp__2);
    Py_CLEAR(self->_file);
    return 0;
}

static void
metastore___list_all_FilesystemMetadataStore_env_dealloc(mypy___metastore___list_all_FilesystemMetadataStore_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, metastore___list_all_FilesystemMetadataStore_env_dealloc)
    metastore___list_all_FilesystemMetadataStore_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem metastore___list_all_FilesystemMetadataStore_env_vtable[1];
static bool
CPyDef_metastore___list_all_FilesystemMetadataStore_env_trait_vtable_setup(void)
{
    CPyVTableItem metastore___list_all_FilesystemMetadataStore_env_vtable_scratch[] = {
        NULL
    };
    memcpy(metastore___list_all_FilesystemMetadataStore_env_vtable, metastore___list_all_FilesystemMetadataStore_env_vtable_scratch, sizeof(metastore___list_all_FilesystemMetadataStore_env_vtable));
    return 1;
}

static PyMethodDef metastore___list_all_FilesystemMetadataStore_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_metastore___list_all_FilesystemMetadataStore_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "list_all_FilesystemMetadataStore_env",
    .tp_new = metastore___list_all_FilesystemMetadataStore_env_new,
    .tp_dealloc = (destructor)metastore___list_all_FilesystemMetadataStore_env_dealloc,
    .tp_traverse = (traverseproc)metastore___list_all_FilesystemMetadataStore_env_traverse,
    .tp_clear = (inquiry)metastore___list_all_FilesystemMetadataStore_env_clear,
    .tp_methods = metastore___list_all_FilesystemMetadataStore_env_methods,
    .tp_basicsize = sizeof(mypy___metastore___list_all_FilesystemMetadataStore_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_metastore___list_all_FilesystemMetadataStore_env_template = &CPyType_metastore___list_all_FilesystemMetadataStore_env_template_;

static PyObject *
metastore___list_all_FilesystemMetadataStore_env_setup(PyTypeObject *type)
{
    mypy___metastore___list_all_FilesystemMetadataStore_envObject *self;
    self = (mypy___metastore___list_all_FilesystemMetadataStore_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = metastore___list_all_FilesystemMetadataStore_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__3 = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_metastore___list_all_FilesystemMetadataStore_env(void)
{
    PyObject *self = metastore___list_all_FilesystemMetadataStore_env_setup(CPyType_metastore___list_all_FilesystemMetadataStore_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *metastore___list_all_FilesystemMetadataStore_gen_setup(PyTypeObject *type);
PyObject *CPyDef_metastore___list_all_FilesystemMetadataStore_gen(void);

static PyObject *
metastore___list_all_FilesystemMetadataStore_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_metastore___list_all_FilesystemMetadataStore_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return metastore___list_all_FilesystemMetadataStore_gen_setup(type);
}

static int
metastore___list_all_FilesystemMetadataStore_gen_traverse(mypy___metastore___list_all_FilesystemMetadataStore_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
metastore___list_all_FilesystemMetadataStore_gen_clear(mypy___metastore___list_all_FilesystemMetadataStore_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
metastore___list_all_FilesystemMetadataStore_gen_dealloc(mypy___metastore___list_all_FilesystemMetadataStore_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, metastore___list_all_FilesystemMetadataStore_gen_dealloc)
    metastore___list_all_FilesystemMetadataStore_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem metastore___list_all_FilesystemMetadataStore_gen_vtable[6];
static bool
CPyDef_metastore___list_all_FilesystemMetadataStore_gen_trait_vtable_setup(void)
{
    CPyVTableItem metastore___list_all_FilesystemMetadataStore_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_metastore___list_all_FilesystemMetadataStore_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_metastore___list_all_FilesystemMetadataStore_gen_____next__,
        (CPyVTableItem)CPyDef_metastore___list_all_FilesystemMetadataStore_gen___send,
        (CPyVTableItem)CPyDef_metastore___list_all_FilesystemMetadataStore_gen_____iter__,
        (CPyVTableItem)CPyDef_metastore___list_all_FilesystemMetadataStore_gen___throw,
        (CPyVTableItem)CPyDef_metastore___list_all_FilesystemMetadataStore_gen___close,
    };
    memcpy(metastore___list_all_FilesystemMetadataStore_gen_vtable, metastore___list_all_FilesystemMetadataStore_gen_vtable_scratch, sizeof(metastore___list_all_FilesystemMetadataStore_gen_vtable));
    return 1;
}

static PyMethodDef metastore___list_all_FilesystemMetadataStore_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_metastore___list_all_FilesystemMetadataStore_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_metastore___list_all_FilesystemMetadataStore_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_metastore___list_all_FilesystemMetadataStore_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_metastore___list_all_FilesystemMetadataStore_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_metastore___list_all_FilesystemMetadataStore_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_metastore___list_all_FilesystemMetadataStore_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_metastore___list_all_FilesystemMetadataStore_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "list_all_FilesystemMetadataStore_gen",
    .tp_new = metastore___list_all_FilesystemMetadataStore_gen_new,
    .tp_dealloc = (destructor)metastore___list_all_FilesystemMetadataStore_gen_dealloc,
    .tp_traverse = (traverseproc)metastore___list_all_FilesystemMetadataStore_gen_traverse,
    .tp_clear = (inquiry)metastore___list_all_FilesystemMetadataStore_gen_clear,
    .tp_methods = metastore___list_all_FilesystemMetadataStore_gen_methods,
    .tp_iter = CPyDef_metastore___list_all_FilesystemMetadataStore_gen_____iter__,
    .tp_iternext = CPyDef_metastore___list_all_FilesystemMetadataStore_gen_____next__,
    .tp_basicsize = sizeof(mypy___metastore___list_all_FilesystemMetadataStore_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_metastore___list_all_FilesystemMetadataStore_gen_template = &CPyType_metastore___list_all_FilesystemMetadataStore_gen_template_;

static PyObject *
metastore___list_all_FilesystemMetadataStore_gen_setup(PyTypeObject *type)
{
    mypy___metastore___list_all_FilesystemMetadataStore_genObject *self;
    self = (mypy___metastore___list_all_FilesystemMetadataStore_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = metastore___list_all_FilesystemMetadataStore_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_metastore___list_all_FilesystemMetadataStore_gen(void)
{
    PyObject *self = metastore___list_all_FilesystemMetadataStore_gen_setup(CPyType_metastore___list_all_FilesystemMetadataStore_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *metastore___list_all_SqliteMetadataStore_env_setup(PyTypeObject *type);
PyObject *CPyDef_metastore___list_all_SqliteMetadataStore_env(void);

static PyObject *
metastore___list_all_SqliteMetadataStore_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_metastore___list_all_SqliteMetadataStore_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return metastore___list_all_SqliteMetadataStore_env_setup(type);
}

static int
metastore___list_all_SqliteMetadataStore_env_traverse(mypy___metastore___list_all_SqliteMetadataStore_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__4);
    Py_VISIT(self->___mypyc_temp__5);
    Py_VISIT(self->_row);
    return 0;
}

static int
metastore___list_all_SqliteMetadataStore_env_clear(mypy___metastore___list_all_SqliteMetadataStore_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__4);
    Py_CLEAR(self->___mypyc_temp__5);
    Py_CLEAR(self->_row);
    return 0;
}

static void
metastore___list_all_SqliteMetadataStore_env_dealloc(mypy___metastore___list_all_SqliteMetadataStore_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, metastore___list_all_SqliteMetadataStore_env_dealloc)
    metastore___list_all_SqliteMetadataStore_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem metastore___list_all_SqliteMetadataStore_env_vtable[1];
static bool
CPyDef_metastore___list_all_SqliteMetadataStore_env_trait_vtable_setup(void)
{
    CPyVTableItem metastore___list_all_SqliteMetadataStore_env_vtable_scratch[] = {
        NULL
    };
    memcpy(metastore___list_all_SqliteMetadataStore_env_vtable, metastore___list_all_SqliteMetadataStore_env_vtable_scratch, sizeof(metastore___list_all_SqliteMetadataStore_env_vtable));
    return 1;
}

static PyMethodDef metastore___list_all_SqliteMetadataStore_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_metastore___list_all_SqliteMetadataStore_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "list_all_SqliteMetadataStore_env",
    .tp_new = metastore___list_all_SqliteMetadataStore_env_new,
    .tp_dealloc = (destructor)metastore___list_all_SqliteMetadataStore_env_dealloc,
    .tp_traverse = (traverseproc)metastore___list_all_SqliteMetadataStore_env_traverse,
    .tp_clear = (inquiry)metastore___list_all_SqliteMetadataStore_env_clear,
    .tp_methods = metastore___list_all_SqliteMetadataStore_env_methods,
    .tp_basicsize = sizeof(mypy___metastore___list_all_SqliteMetadataStore_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_metastore___list_all_SqliteMetadataStore_env_template = &CPyType_metastore___list_all_SqliteMetadataStore_env_template_;

static PyObject *
metastore___list_all_SqliteMetadataStore_env_setup(PyTypeObject *type)
{
    mypy___metastore___list_all_SqliteMetadataStore_envObject *self;
    self = (mypy___metastore___list_all_SqliteMetadataStore_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = metastore___list_all_SqliteMetadataStore_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_metastore___list_all_SqliteMetadataStore_env(void)
{
    PyObject *self = metastore___list_all_SqliteMetadataStore_env_setup(CPyType_metastore___list_all_SqliteMetadataStore_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *metastore___list_all_SqliteMetadataStore_gen_setup(PyTypeObject *type);
PyObject *CPyDef_metastore___list_all_SqliteMetadataStore_gen(void);

static PyObject *
metastore___list_all_SqliteMetadataStore_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_metastore___list_all_SqliteMetadataStore_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return metastore___list_all_SqliteMetadataStore_gen_setup(type);
}

static int
metastore___list_all_SqliteMetadataStore_gen_traverse(mypy___metastore___list_all_SqliteMetadataStore_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
metastore___list_all_SqliteMetadataStore_gen_clear(mypy___metastore___list_all_SqliteMetadataStore_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
metastore___list_all_SqliteMetadataStore_gen_dealloc(mypy___metastore___list_all_SqliteMetadataStore_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, metastore___list_all_SqliteMetadataStore_gen_dealloc)
    metastore___list_all_SqliteMetadataStore_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem metastore___list_all_SqliteMetadataStore_gen_vtable[6];
static bool
CPyDef_metastore___list_all_SqliteMetadataStore_gen_trait_vtable_setup(void)
{
    CPyVTableItem metastore___list_all_SqliteMetadataStore_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_metastore___list_all_SqliteMetadataStore_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_metastore___list_all_SqliteMetadataStore_gen_____next__,
        (CPyVTableItem)CPyDef_metastore___list_all_SqliteMetadataStore_gen___send,
        (CPyVTableItem)CPyDef_metastore___list_all_SqliteMetadataStore_gen_____iter__,
        (CPyVTableItem)CPyDef_metastore___list_all_SqliteMetadataStore_gen___throw,
        (CPyVTableItem)CPyDef_metastore___list_all_SqliteMetadataStore_gen___close,
    };
    memcpy(metastore___list_all_SqliteMetadataStore_gen_vtable, metastore___list_all_SqliteMetadataStore_gen_vtable_scratch, sizeof(metastore___list_all_SqliteMetadataStore_gen_vtable));
    return 1;
}

static PyMethodDef metastore___list_all_SqliteMetadataStore_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_metastore___list_all_SqliteMetadataStore_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_metastore___list_all_SqliteMetadataStore_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_metastore___list_all_SqliteMetadataStore_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_metastore___list_all_SqliteMetadataStore_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_metastore___list_all_SqliteMetadataStore_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_metastore___list_all_SqliteMetadataStore_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_metastore___list_all_SqliteMetadataStore_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "list_all_SqliteMetadataStore_gen",
    .tp_new = metastore___list_all_SqliteMetadataStore_gen_new,
    .tp_dealloc = (destructor)metastore___list_all_SqliteMetadataStore_gen_dealloc,
    .tp_traverse = (traverseproc)metastore___list_all_SqliteMetadataStore_gen_traverse,
    .tp_clear = (inquiry)metastore___list_all_SqliteMetadataStore_gen_clear,
    .tp_methods = metastore___list_all_SqliteMetadataStore_gen_methods,
    .tp_iter = CPyDef_metastore___list_all_SqliteMetadataStore_gen_____iter__,
    .tp_iternext = CPyDef_metastore___list_all_SqliteMetadataStore_gen_____next__,
    .tp_basicsize = sizeof(mypy___metastore___list_all_SqliteMetadataStore_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_metastore___list_all_SqliteMetadataStore_gen_template = &CPyType_metastore___list_all_SqliteMetadataStore_gen_template_;

static PyObject *
metastore___list_all_SqliteMetadataStore_gen_setup(PyTypeObject *type)
{
    mypy___metastore___list_all_SqliteMetadataStore_genObject *self;
    self = (mypy___metastore___list_all_SqliteMetadataStore_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = metastore___list_all_SqliteMetadataStore_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_metastore___list_all_SqliteMetadataStore_gen(void)
{
    PyObject *self = metastore___list_all_SqliteMetadataStore_gen_setup(CPyType_metastore___list_all_SqliteMetadataStore_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef metastoremodule_methods[] = {
    {"random_string", (PyCFunction)CPyPy_metastore___random_string, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"connect_db", (PyCFunction)CPyPy_metastore___connect_db, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef metastoremodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.metastore",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    metastoremodule_methods
};

PyObject *CPyInit_mypy___metastore(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___metastore_internal) {
        Py_INCREF(CPyModule_mypy___metastore_internal);
        return CPyModule_mypy___metastore_internal;
    }
    CPyModule_mypy___metastore_internal = PyModule_Create(&metastoremodule);
    if (unlikely(CPyModule_mypy___metastore_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___metastore_internal, "__name__");
    CPyStatic_metastore___globals = PyModule_GetDict(CPyModule_mypy___metastore_internal);
    if (unlikely(CPyStatic_metastore___globals == NULL))
        goto fail;
    CPyType_metastore___list_all_FilesystemMetadataStore_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_metastore___list_all_FilesystemMetadataStore_env_template, NULL, modname);
    if (unlikely(!CPyType_metastore___list_all_FilesystemMetadataStore_env))
        goto fail;
    CPyType_metastore___list_all_FilesystemMetadataStore_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_metastore___list_all_FilesystemMetadataStore_gen_template, NULL, modname);
    if (unlikely(!CPyType_metastore___list_all_FilesystemMetadataStore_gen))
        goto fail;
    CPyType_metastore___list_all_SqliteMetadataStore_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_metastore___list_all_SqliteMetadataStore_env_template, NULL, modname);
    if (unlikely(!CPyType_metastore___list_all_SqliteMetadataStore_env))
        goto fail;
    CPyType_metastore___list_all_SqliteMetadataStore_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_metastore___list_all_SqliteMetadataStore_gen_template, NULL, modname);
    if (unlikely(!CPyType_metastore___list_all_SqliteMetadataStore_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_metastore_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___metastore_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___metastore_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_metastore___MetadataStore);
    Py_CLEAR(CPyType_metastore___FilesystemMetadataStore);
    Py_CLEAR(CPyType_metastore___SqliteMetadataStore);
    Py_CLEAR(CPyType_metastore___list_all_FilesystemMetadataStore_env);
    Py_CLEAR(CPyType_metastore___list_all_FilesystemMetadataStore_gen);
    Py_CLEAR(CPyType_metastore___list_all_SqliteMetadataStore_env);
    Py_CLEAR(CPyType_metastore___list_all_SqliteMetadataStore_gen);
    return NULL;
}

double CPyDef_metastore___MetadataStore___getmtime(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    CPy_Unreachable();
}

PyObject *CPyPy_metastore___MetadataStore___getmtime(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:getmtime", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_metastore___FilesystemMetadataStore) || (Py_TYPE(obj_self) == CPyType_metastore___SqliteMetadataStore)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.MetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    double retval = CPyDef_metastore___MetadataStore___getmtime(arg_self, arg_name);
    if (retval == -113.0 && PyErr_Occurred()) {
        return NULL;
    }
    PyObject *retbox = PyFloat_FromDouble(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "getmtime", 29, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___MetadataStore___read(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    CPy_Unreachable();
}

PyObject *CPyPy_metastore___MetadataStore___read(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:read", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_metastore___FilesystemMetadataStore) || (Py_TYPE(obj_self) == CPyType_metastore___SqliteMetadataStore)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.MetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_metastore___MetadataStore___read(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "read", 36, CPyStatic_metastore___globals);
    return NULL;
}

char CPyDef_metastore___MetadataStore___write(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_data, PyObject *cpy_r_mtime) {
    PyObject *cpy_r_r0;
    if (cpy_r_mtime != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_mtime = cpy_r_r0;
    CPy_DECREF(cpy_r_mtime);
CPyL2: ;
    CPy_Unreachable();
}

PyObject *CPyPy_metastore___MetadataStore___write(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "data", "mtime", 0};
    static CPyArg_Parser parser = {"OO|O:write", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_data;
    PyObject *obj_mtime = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_data, &obj_mtime)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_metastore___FilesystemMetadataStore) || (Py_TYPE(obj_self) == CPyType_metastore___SqliteMetadataStore)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.MetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_data;
    if (likely(PyUnicode_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("str", obj_data); 
        goto fail;
    }
    PyObject *arg_mtime;
    if (obj_mtime == NULL) {
        arg_mtime = NULL;
        goto __LL3448;
    }
    if (CPyFloat_Check(obj_mtime))
        arg_mtime = obj_mtime;
    else {
        arg_mtime = NULL;
    }
    if (arg_mtime != NULL) goto __LL3448;
    if (obj_mtime == Py_None)
        arg_mtime = obj_mtime;
    else {
        arg_mtime = NULL;
    }
    if (arg_mtime != NULL) goto __LL3448;
    CPy_TypeError("float or None", obj_mtime); 
    goto fail;
__LL3448: ;
    char retval = CPyDef_metastore___MetadataStore___write(arg_self, arg_name, arg_data, arg_mtime);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "write", 43, CPyStatic_metastore___globals);
    return NULL;
}

char CPyDef_metastore___MetadataStore___remove(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    return 1;
}

PyObject *CPyPy_metastore___MetadataStore___remove(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:remove", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_metastore___FilesystemMetadataStore) || (Py_TYPE(obj_self) == CPyType_metastore___SqliteMetadataStore)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.MetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_metastore___MetadataStore___remove(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "remove", 53, CPyStatic_metastore___globals);
    return NULL;
}

char CPyDef_metastore___MetadataStore___commit(PyObject *cpy_r_self) {
    return 1;
}

PyObject *CPyPy_metastore___MetadataStore___commit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":commit", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_metastore___FilesystemMetadataStore) || (Py_TYPE(obj_self) == CPyType_metastore___SqliteMetadataStore)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.MetadataStore", obj_self); 
        goto fail;
    }
    char retval = CPyDef_metastore___MetadataStore___commit(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "commit", 57, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___MetadataStore___list_all(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = (PyObject *)&_Py_EllipsisObject;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
}

PyObject *CPyPy_metastore___MetadataStore___list_all(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":list_all", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_metastore___FilesystemMetadataStore) || (Py_TYPE(obj_self) == CPyType_metastore___SqliteMetadataStore)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.MetadataStore", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_metastore___MetadataStore___list_all(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "list_all", 66, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___random_string(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[3792]; /* 'urandom' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "random_string", 71, CPyStatic_metastore___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyStatics[9034]; /* 8 */
    PyObject *cpy_r_r4[1] = {cpy_r_r3};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "random_string", 71, CPyStatic_metastore___globals);
        goto CPyL8;
    }
    if (likely(PyBytes_Check(cpy_r_r6) || PyByteArray_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "random_string", 71, CPyStatic_metastore___globals, "bytes", cpy_r_r6);
        goto CPyL8;
    }
    cpy_r_r8 = CPyModule_binascii;
    cpy_r_r9 = CPyStatics[3793]; /* 'hexlify' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "random_string", 71, CPyStatic_metastore___globals);
        goto CPyL9;
    }
    PyObject *cpy_r_r11[1] = {cpy_r_r7};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "random_string", 71, CPyStatic_metastore___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r7);
    if (likely(PyBytes_Check(cpy_r_r13) || PyByteArray_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "random_string", 71, CPyStatic_metastore___globals, "bytes", cpy_r_r13);
        goto CPyL8;
    }
    cpy_r_r15 = CPyStatics[3794]; /* 'ascii' */
    cpy_r_r16 = CPy_Decode(cpy_r_r14, cpy_r_r15, NULL);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "random_string", 71, CPyStatic_metastore___globals);
        goto CPyL8;
    }
    return cpy_r_r16;
CPyL8: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL9: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL8;
}

PyObject *CPyPy_metastore___random_string(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":random_string", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_metastore___random_string();
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "random_string", 70, CPyStatic_metastore___globals);
    return NULL;
}

char CPyDef_metastore___FilesystemMetadataStore_____init__(PyObject *cpy_r_self, PyObject *cpy_r_cache_dir_prefix) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[391]; /* 'devnull' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "__init__", 79, CPyStatic_metastore___globals);
        goto CPyL6;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "__init__", 79, CPyStatic_metastore___globals, "str", cpy_r_r2);
        goto CPyL6;
    }
    cpy_r_r4 = CPyStr_Startswith(cpy_r_cache_dir_prefix, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL4;
    cpy_r_r5 = Py_None;
    CPy_INCREF(cpy_r_r5);
    ((mypy___metastore___FilesystemMetadataStoreObject *)cpy_r_self)->_cache_dir_prefix = cpy_r_r5;
    goto CPyL5;
CPyL4: ;
    CPy_INCREF(cpy_r_cache_dir_prefix);
    ((mypy___metastore___FilesystemMetadataStoreObject *)cpy_r_self)->_cache_dir_prefix = cpy_r_cache_dir_prefix;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_metastore___FilesystemMetadataStore_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"cache_dir_prefix", 0};
    PyObject *obj_cache_dir_prefix;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_cache_dir_prefix)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___FilesystemMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.FilesystemMetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_cache_dir_prefix;
    if (likely(PyUnicode_Check(obj_cache_dir_prefix)))
        arg_cache_dir_prefix = obj_cache_dir_prefix;
    else {
        CPy_TypeError("str", obj_cache_dir_prefix); 
        goto fail;
    }
    char retval = CPyDef_metastore___FilesystemMetadataStore_____init__(arg_self, arg_cache_dir_prefix);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "__init__", 75, CPyStatic_metastore___globals);
    return NULL;
}

double CPyDef_metastore___FilesystemMetadataStore___getmtime(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    double cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    double cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    double cpy_r_r35;
    cpy_r_r0 = ((mypy___metastore___FilesystemMetadataStoreObject *)cpy_r_self)->_cache_dir_prefix;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL22;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "getmtime", 85, CPyStatic_metastore___globals, "str", cpy_r_r0);
        goto CPyL21;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4) goto CPyL7;
CPyL3: ;
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[269]; /* 'FileNotFoundError' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 86, CPyStatic_metastore___globals);
        goto CPyL21;
    }
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r7, 0, 0, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 86, CPyStatic_metastore___globals);
        goto CPyL21;
    }
    CPy_Raise(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 86, CPyStatic_metastore___globals);
        goto CPyL21;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r9 = ((mypy___metastore___FilesystemMetadataStoreObject *)cpy_r_self)->_cache_dir_prefix;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "getmtime", 88, CPyStatic_metastore___globals, "str", cpy_r_r9);
        goto CPyL21;
    }
    cpy_r_r11 = CPyModule_os;
    cpy_r_r12 = CPyStatics[142]; /* 'path' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 88, CPyStatic_metastore___globals);
        goto CPyL23;
    }
    cpy_r_r14 = CPyStatics[175]; /* 'join' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 88, CPyStatic_metastore___globals);
        goto CPyL23;
    }
    PyObject *cpy_r_r16[2] = {cpy_r_r10, cpy_r_name};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 2, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 88, CPyStatic_metastore___globals);
        goto CPyL23;
    }
    CPy_DECREF(cpy_r_r10);
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "getmtime", 88, CPyStatic_metastore___globals, "str", cpy_r_r18);
        goto CPyL21;
    }
    cpy_r_r20 = CPyModule_os;
    cpy_r_r21 = CPyStatics[142]; /* 'path' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 88, CPyStatic_metastore___globals);
        goto CPyL24;
    }
    cpy_r_r23 = CPyStatics[3795]; /* 'getmtime' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 88, CPyStatic_metastore___globals);
        goto CPyL24;
    }
    PyObject *cpy_r_r25[1] = {cpy_r_r19};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r26, 1, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 88, CPyStatic_metastore___globals);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_r19);
    cpy_r_r28 = PyFloat_AsDouble(cpy_r_r27);
    if (cpy_r_r28 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r27); cpy_r_r28 = -113.0;
    }
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 == -113.0;
    if (unlikely(cpy_r_r29)) goto CPyL17;
CPyL16: ;
    cpy_r_r30 = CPyTagged_FromFloat(cpy_r_r28);
    if (unlikely(cpy_r_r30 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 88, CPyStatic_metastore___globals);
        goto CPyL21;
    } else
        goto CPyL18;
CPyL17: ;
    cpy_r_r31 = PyErr_Occurred();
    if (unlikely(cpy_r_r31 != NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 88, CPyStatic_metastore___globals);
        goto CPyL21;
    } else
        goto CPyL16;
CPyL18: ;
    cpy_r_r32 = CPyFloat_FromTagged(cpy_r_r30);
    CPyTagged_DECREF(cpy_r_r30);
    cpy_r_r33 = cpy_r_r32 == -113.0;
    if (unlikely(cpy_r_r33)) goto CPyL20;
CPyL19: ;
    return cpy_r_r32;
CPyL20: ;
    cpy_r_r34 = PyErr_Occurred();
    if (unlikely(cpy_r_r34 != NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 88, CPyStatic_metastore___globals);
    } else
        goto CPyL19;
CPyL21: ;
    cpy_r_r35 = -113.0;
    return cpy_r_r35;
CPyL22: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL23: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL21;
}

PyObject *CPyPy_metastore___FilesystemMetadataStore___getmtime(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:getmtime", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___FilesystemMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.FilesystemMetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    double retval = CPyDef_metastore___FilesystemMetadataStore___getmtime(arg_self, arg_name);
    if (retval == -113.0 && PyErr_Occurred()) {
        return NULL;
    }
    PyObject *retbox = PyFloat_FromDouble(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "getmtime", 84, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___FilesystemMetadataStore___read(PyObject *cpy_r_self, PyObject *cpy_r_name) {
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
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
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
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    tuple_T3OOO cpy_r_r66;
    tuple_T3OOO cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    tuple_T3OOO cpy_r_r79;
    tuple_T3OOO cpy_r_r80;
    PyObject *cpy_r_r81;
    tuple_T3OOO cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[142]; /* 'path' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 91, CPyStatic_metastore___globals);
        goto CPyL59;
    }
    cpy_r_r3 = CPyStatics[2213]; /* 'normpath' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 91, CPyStatic_metastore___globals);
        goto CPyL59;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_name};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 91, CPyStatic_metastore___globals);
        goto CPyL59;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "read", 91, CPyStatic_metastore___globals, "str", cpy_r_r7);
        goto CPyL59;
    }
    cpy_r_r9 = CPyModule_os;
    cpy_r_r10 = CPyStatics[142]; /* 'path' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 91, CPyStatic_metastore___globals);
        goto CPyL60;
    }
    cpy_r_r12 = CPyStatics[153]; /* 'abspath' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 91, CPyStatic_metastore___globals);
        goto CPyL60;
    }
    PyObject *cpy_r_r14[1] = {cpy_r_name};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 91, CPyStatic_metastore___globals);
        goto CPyL60;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "read", 91, CPyStatic_metastore___globals, "str", cpy_r_r16);
        goto CPyL60;
    }
    cpy_r_r18 = PyUnicode_Compare(cpy_r_r8, cpy_r_r17);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 == -1;
    if (!cpy_r_r19) goto CPyL11;
    cpy_r_r20 = PyErr_Occurred();
    cpy_r_r21 = cpy_r_r20 != NULL;
    if (!cpy_r_r21) goto CPyL11;
    cpy_r_r22 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 91, CPyStatic_metastore___globals);
        goto CPyL59;
    }
CPyL11: ;
    cpy_r_r23 = cpy_r_r18 != 0;
    if (cpy_r_r23) goto CPyL14;
    PyErr_SetString(PyExc_AssertionError, "Don't use absolute paths!");
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 91, CPyStatic_metastore___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r25 = ((mypy___metastore___FilesystemMetadataStoreObject *)cpy_r_self)->_cache_dir_prefix;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_r25 != cpy_r_r26;
    if (!cpy_r_r27) goto CPyL61;
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r28 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "read", 93, CPyStatic_metastore___globals, "str", cpy_r_r25);
        goto CPyL59;
    }
    cpy_r_r29 = CPyStr_IsTrue(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (cpy_r_r29) goto CPyL21;
CPyL17: ;
    cpy_r_r30 = CPyModule_builtins;
    cpy_r_r31 = CPyStatics[269]; /* 'FileNotFoundError' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 94, CPyStatic_metastore___globals);
        goto CPyL59;
    }
    cpy_r_r33 = _PyObject_Vectorcall(cpy_r_r32, 0, 0, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 94, CPyStatic_metastore___globals);
        goto CPyL59;
    }
    CPy_Raise(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 94, CPyStatic_metastore___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r34 = ((mypy___metastore___FilesystemMetadataStoreObject *)cpy_r_self)->_cache_dir_prefix;
    CPy_INCREF(cpy_r_r34);
    if (likely(cpy_r_r34 != Py_None))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "read", 96, CPyStatic_metastore___globals, "str", cpy_r_r34);
        goto CPyL59;
    }
    cpy_r_r36 = CPyModule_os;
    cpy_r_r37 = CPyStatics[142]; /* 'path' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 96, CPyStatic_metastore___globals);
        goto CPyL62;
    }
    cpy_r_r39 = CPyStatics[175]; /* 'join' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 96, CPyStatic_metastore___globals);
        goto CPyL62;
    }
    PyObject *cpy_r_r41[2] = {cpy_r_r35, cpy_r_name};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r40, cpy_r_r42, 2, 0);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 96, CPyStatic_metastore___globals);
        goto CPyL62;
    }
    CPy_DECREF(cpy_r_r35);
    if (likely(PyUnicode_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "read", 96, CPyStatic_metastore___globals, "str", cpy_r_r43);
        goto CPyL59;
    }
    cpy_r_r45 = CPyModule_builtins;
    cpy_r_r46 = CPyStatics[199]; /* 'open' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 96, CPyStatic_metastore___globals);
        goto CPyL63;
    }
    PyObject *cpy_r_r48[1] = {cpy_r_r44};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = _PyObject_Vectorcall(cpy_r_r47, cpy_r_r49, 1, 0);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 96, CPyStatic_metastore___globals);
        goto CPyL63;
    }
    CPy_DECREF(cpy_r_r44);
    cpy_r_r51 = PyObject_Type(cpy_r_r50);
    cpy_r_r52 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 96, CPyStatic_metastore___globals);
        goto CPyL64;
    }
    cpy_r_r54 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r55 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r54);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 96, CPyStatic_metastore___globals);
        goto CPyL65;
    }
    PyObject *cpy_r_r56[1] = {cpy_r_r50};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = _PyObject_Vectorcall(cpy_r_r55, cpy_r_r57, 1, 0);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 96, CPyStatic_metastore___globals);
        goto CPyL65;
    }
    cpy_r_r59 = 1;
    cpy_r_f = cpy_r_r58;
    cpy_r_r60 = CPyStatics[141]; /* 'read' */
    PyObject *cpy_r_r61[1] = {cpy_r_f};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = PyObject_VectorcallMethod(cpy_r_r60, cpy_r_r62, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 97, CPyStatic_metastore___globals);
        goto CPyL66;
    }
    CPy_DECREF(cpy_r_f);
    if (likely(PyUnicode_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "read", 97, CPyStatic_metastore___globals, "str", cpy_r_r63);
        goto CPyL35;
    }
    cpy_r_r65 = cpy_r_r64;
    goto CPyL44;
CPyL35: ;
    cpy_r_r66 = CPy_CatchError();
    cpy_r_r59 = 0;
    cpy_r_r67 = CPy_GetExcInfo();
    cpy_r_r68 = cpy_r_r67.f0;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = cpy_r_r67.f1;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r70 = cpy_r_r67.f2;
    CPy_INCREF(cpy_r_r70);
    CPy_DecRef(cpy_r_r67.f0);
    CPy_DecRef(cpy_r_r67.f1);
    CPy_DecRef(cpy_r_r67.f2);
    PyObject *cpy_r_r71[4] = {cpy_r_r50, cpy_r_r68, cpy_r_r69, cpy_r_r70};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = _PyObject_Vectorcall(cpy_r_r53, cpy_r_r72, 4, 0);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 96, CPyStatic_metastore___globals);
        goto CPyL67;
    }
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r70);
    cpy_r_r74 = PyObject_IsTrue(cpy_r_r73);
    CPy_DecRef(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 96, CPyStatic_metastore___globals);
        goto CPyL41;
    }
    cpy_r_r76 = cpy_r_r74;
    if (cpy_r_r76) goto CPyL40;
    CPy_Reraise();
    if (!0) {
        goto CPyL41;
    } else
        goto CPyL68;
CPyL39: ;
    CPy_Unreachable();
CPyL40: ;
    CPy_RestoreExcInfo(cpy_r_r66);
    CPy_DecRef(cpy_r_r66.f0);
    CPy_DecRef(cpy_r_r66.f1);
    CPy_DecRef(cpy_r_r66.f2);
    goto CPyL43;
CPyL41: ;
    CPy_RestoreExcInfo(cpy_r_r66);
    CPy_DecRef(cpy_r_r66.f0);
    CPy_DecRef(cpy_r_r66.f1);
    CPy_DecRef(cpy_r_r66.f2);
    cpy_r_r77 = CPy_KeepPropagating();
    if (!cpy_r_r77) {
        goto CPyL45;
    } else
        goto CPyL69;
CPyL42: ;
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r78 = NULL;
    cpy_r_r65 = cpy_r_r78;
CPyL44: ;
    tuple_T3OOO __tmp3449 = { NULL, NULL, NULL };
    cpy_r_r79 = __tmp3449;
    cpy_r_r80 = cpy_r_r79;
    goto CPyL46;
CPyL45: ;
    cpy_r_r81 = NULL;
    cpy_r_r65 = cpy_r_r81;
    cpy_r_r82 = CPy_CatchError();
    cpy_r_r80 = cpy_r_r82;
CPyL46: ;
    if (!cpy_r_r59) goto CPyL70;
    cpy_r_r83 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r84[4] = {cpy_r_r50, cpy_r_r83, cpy_r_r83, cpy_r_r83};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = _PyObject_Vectorcall(cpy_r_r53, cpy_r_r85, 4, 0);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 96, CPyStatic_metastore___globals);
        goto CPyL71;
    } else
        goto CPyL72;
CPyL48: ;
    CPy_DECREF(cpy_r_r50);
CPyL49: ;
    if (cpy_r_r80.f0 == NULL) {
        goto CPyL52;
    } else
        goto CPyL73;
CPyL50: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL54;
    } else
        goto CPyL74;
CPyL51: ;
    CPy_Unreachable();
CPyL52: ;
    if (cpy_r_r65 == NULL) goto CPyL58;
    return cpy_r_r65;
CPyL54: ;
    if (cpy_r_r80.f0 == NULL) goto CPyL56;
    CPy_RestoreExcInfo(cpy_r_r80);
    CPy_XDECREF(cpy_r_r80.f0);
    CPy_XDECREF(cpy_r_r80.f1);
    CPy_XDECREF(cpy_r_r80.f2);
CPyL56: ;
    cpy_r_r87 = CPy_KeepPropagating();
    if (!cpy_r_r87) goto CPyL59;
    CPy_Unreachable();
CPyL58: ;
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r88 = NULL;
    return cpy_r_r88;
CPyL60: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL59;
CPyL61: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL17;
CPyL62: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL59;
CPyL63: ;
    CPy_DecRef(cpy_r_r44);
    goto CPyL59;
CPyL64: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r51);
    goto CPyL59;
CPyL65: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    goto CPyL59;
CPyL66: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL35;
CPyL67: ;
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r70);
    goto CPyL41;
CPyL68: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r66.f0);
    CPy_DecRef(cpy_r_r66.f1);
    CPy_DecRef(cpy_r_r66.f2);
    goto CPyL39;
CPyL69: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    goto CPyL42;
CPyL70: ;
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r53);
    goto CPyL49;
CPyL71: ;
    CPy_DecRef(cpy_r_r50);
    CPy_XDecRef(cpy_r_r65);
    goto CPyL54;
CPyL72: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL48;
CPyL73: ;
    CPy_XDECREF(cpy_r_r65);
    goto CPyL50;
CPyL74: ;
    CPy_XDECREF(cpy_r_r80.f0);
    CPy_XDECREF(cpy_r_r80.f1);
    CPy_XDECREF(cpy_r_r80.f2);
    goto CPyL51;
}

PyObject *CPyPy_metastore___FilesystemMetadataStore___read(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:read", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___FilesystemMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.FilesystemMetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_metastore___FilesystemMetadataStore___read(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "read", 90, CPyStatic_metastore___globals);
    return NULL;
}

char CPyDef_metastore___FilesystemMetadataStore___write(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_data, PyObject *cpy_r_mtime) {
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
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_tmp_filename;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject **cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject **cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r79;
    PyObject **cpy_r_r81;
    PyObject *cpy_r_r82;
    tuple_T3OOO cpy_r_r83;
    tuple_T3OOO cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject **cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    tuple_T3OOO cpy_r_r95;
    tuple_T3OOO cpy_r_r96;
    tuple_T3OOO cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject **cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject **cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    double cpy_r_r111;
    char cpy_r_r112;
    double cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    tuple_T2FF cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject **cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    tuple_T3OOO cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    char cpy_r_r132;
    if (cpy_r_mtime != NULL) goto CPyL82;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_mtime = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyModule_os;
    cpy_r_r2 = CPyStatics[142]; /* 'path' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 100, CPyStatic_metastore___globals);
        goto CPyL83;
    }
    cpy_r_r4 = CPyStatics[2213]; /* 'normpath' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 100, CPyStatic_metastore___globals);
        goto CPyL83;
    }
    PyObject *cpy_r_r6[1] = {cpy_r_name};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 1, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 100, CPyStatic_metastore___globals);
        goto CPyL83;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "write", 100, CPyStatic_metastore___globals, "str", cpy_r_r8);
        goto CPyL83;
    }
    cpy_r_r10 = CPyModule_os;
    cpy_r_r11 = CPyStatics[142]; /* 'path' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 100, CPyStatic_metastore___globals);
        goto CPyL84;
    }
    cpy_r_r13 = CPyStatics[153]; /* 'abspath' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 100, CPyStatic_metastore___globals);
        goto CPyL84;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_name};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 100, CPyStatic_metastore___globals);
        goto CPyL84;
    }
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "write", 100, CPyStatic_metastore___globals, "str", cpy_r_r17);
        goto CPyL84;
    }
    cpy_r_r19 = PyUnicode_Compare(cpy_r_r9, cpy_r_r18);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 == -1;
    if (!cpy_r_r20) goto CPyL13;
    cpy_r_r21 = PyErr_Occurred();
    cpy_r_r22 = cpy_r_r21 != NULL;
    if (!cpy_r_r22) goto CPyL13;
    cpy_r_r23 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 100, CPyStatic_metastore___globals);
        goto CPyL83;
    }
CPyL13: ;
    cpy_r_r24 = cpy_r_r19 != 0;
    if (cpy_r_r24) {
        goto CPyL16;
    } else
        goto CPyL85;
CPyL14: ;
    PyErr_SetString(PyExc_AssertionError, "Don't use absolute paths!");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 100, CPyStatic_metastore___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r26 = ((mypy___metastore___FilesystemMetadataStoreObject *)cpy_r_self)->_cache_dir_prefix;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_r26 != cpy_r_r27;
    if (!cpy_r_r28) goto CPyL86;
    if (likely(cpy_r_r26 != Py_None))
        cpy_r_r29 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "write", 102, CPyStatic_metastore___globals, "str", cpy_r_r26);
        goto CPyL83;
    }
    cpy_r_r30 = CPyStr_IsTrue(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (cpy_r_r30) {
        goto CPyL20;
    } else
        goto CPyL87;
CPyL19: ;
    return 0;
CPyL20: ;
    cpy_r_r31 = ((mypy___metastore___FilesystemMetadataStoreObject *)cpy_r_self)->_cache_dir_prefix;
    CPy_INCREF(cpy_r_r31);
    if (likely(cpy_r_r31 != Py_None))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "write", 105, CPyStatic_metastore___globals, "str", cpy_r_r31);
        goto CPyL83;
    }
    cpy_r_r33 = CPyModule_os;
    cpy_r_r34 = CPyStatics[142]; /* 'path' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 105, CPyStatic_metastore___globals);
        goto CPyL88;
    }
    cpy_r_r36 = CPyStatics[175]; /* 'join' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 105, CPyStatic_metastore___globals);
        goto CPyL88;
    }
    PyObject *cpy_r_r38[2] = {cpy_r_r32, cpy_r_name};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r39, 2, 0);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 105, CPyStatic_metastore___globals);
        goto CPyL88;
    }
    CPy_DECREF(cpy_r_r32);
    if (likely(PyUnicode_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "write", 105, CPyStatic_metastore___globals, "str", cpy_r_r40);
        goto CPyL83;
    }
    cpy_r_path = cpy_r_r41;
    cpy_r_r42 = CPyStatics[224]; /* '.' */
    cpy_r_r43 = PyUnicode_Concat(cpy_r_path, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 106, CPyStatic_metastore___globals);
        goto CPyL89;
    }
    cpy_r_r44 = CPyDef_metastore___random_string();
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 106, CPyStatic_metastore___globals);
        goto CPyL90;
    }
    cpy_r_r45 = PyUnicode_Concat(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 106, CPyStatic_metastore___globals);
        goto CPyL89;
    }
    cpy_r_tmp_filename = cpy_r_r45;
    cpy_r_r46 = CPyModule_os;
    cpy_r_r47 = CPyStatics[142]; /* 'path' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 108, CPyStatic_metastore___globals);
        goto CPyL91;
    }
    cpy_r_r49 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 108, CPyStatic_metastore___globals);
        goto CPyL91;
    }
    PyObject *cpy_r_r51[1] = {cpy_r_path};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = _PyObject_Vectorcall(cpy_r_r50, cpy_r_r52, 1, 0);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 108, CPyStatic_metastore___globals);
        goto CPyL91;
    }
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "write", 108, CPyStatic_metastore___globals, "str", cpy_r_r53);
        goto CPyL91;
    }
    cpy_r_r55 = CPyModule_os;
    cpy_r_r56 = CPyStatics[3796]; /* 'makedirs' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 108, CPyStatic_metastore___globals);
        goto CPyL92;
    }
    cpy_r_r58 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r59[2] = {cpy_r_r54, cpy_r_r58};
    cpy_r_r60 = (PyObject **)&cpy_r_r59;
    cpy_r_r61 = CPyStatics[9523]; /* ('exist_ok',) */
    cpy_r_r62 = _PyObject_Vectorcall(cpy_r_r57, cpy_r_r60, 1, cpy_r_r61);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 108, CPyStatic_metastore___globals);
        goto CPyL92;
    } else
        goto CPyL93;
CPyL35: ;
    CPy_DECREF(cpy_r_r54);
    cpy_r_r63 = CPyStatics[448]; /* 'w' */
    cpy_r_r64 = CPyModule_builtins;
    cpy_r_r65 = CPyStatics[199]; /* 'open' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 109, CPyStatic_metastore___globals);
        goto CPyL91;
    }
    PyObject *cpy_r_r67[2] = {cpy_r_tmp_filename, cpy_r_r63};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = _PyObject_Vectorcall(cpy_r_r66, cpy_r_r68, 2, 0);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 109, CPyStatic_metastore___globals);
        goto CPyL91;
    }
    cpy_r_r70 = PyObject_Type(cpy_r_r69);
    cpy_r_r71 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r72 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 109, CPyStatic_metastore___globals);
        goto CPyL94;
    }
    cpy_r_r73 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r74 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r73);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 109, CPyStatic_metastore___globals);
        goto CPyL95;
    }
    PyObject *cpy_r_r75[1] = {cpy_r_r69};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = _PyObject_Vectorcall(cpy_r_r74, cpy_r_r76, 1, 0);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 109, CPyStatic_metastore___globals);
        goto CPyL95;
    }
    cpy_r_r78 = 1;
    cpy_r_f = cpy_r_r77;
    cpy_r_r79 = CPyStatics[286]; /* 'write' */
    PyObject *cpy_r_r80[2] = {cpy_r_f, cpy_r_data};
    cpy_r_r81 = (PyObject **)&cpy_r_r80;
    cpy_r_r82 = PyObject_VectorcallMethod(cpy_r_r79, cpy_r_r81, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 110, CPyStatic_metastore___globals);
        goto CPyL96;
    } else
        goto CPyL97;
CPyL42: ;
    CPy_DECREF(cpy_r_f);
    goto CPyL51;
CPyL43: ;
    cpy_r_r83 = CPy_CatchError();
    cpy_r_r78 = 0;
    cpy_r_r84 = CPy_GetExcInfo();
    cpy_r_r85 = cpy_r_r84.f0;
    CPy_INCREF(cpy_r_r85);
    cpy_r_r86 = cpy_r_r84.f1;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = cpy_r_r84.f2;
    CPy_INCREF(cpy_r_r87);
    CPy_DecRef(cpy_r_r84.f0);
    CPy_DecRef(cpy_r_r84.f1);
    CPy_DecRef(cpy_r_r84.f2);
    PyObject *cpy_r_r88[4] = {cpy_r_r69, cpy_r_r85, cpy_r_r86, cpy_r_r87};
    cpy_r_r89 = (PyObject **)&cpy_r_r88;
    cpy_r_r90 = _PyObject_Vectorcall(cpy_r_r72, cpy_r_r89, 4, 0);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 109, CPyStatic_metastore___globals);
        goto CPyL98;
    }
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r87);
    cpy_r_r91 = PyObject_IsTrue(cpy_r_r90);
    CPy_DecRef(cpy_r_r90);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 109, CPyStatic_metastore___globals);
        goto CPyL49;
    }
    cpy_r_r93 = cpy_r_r91;
    if (cpy_r_r93) goto CPyL48;
    CPy_Reraise();
    if (!0) {
        goto CPyL49;
    } else
        goto CPyL99;
CPyL47: ;
    CPy_Unreachable();
CPyL48: ;
    CPy_RestoreExcInfo(cpy_r_r83);
    CPy_DecRef(cpy_r_r83.f0);
    CPy_DecRef(cpy_r_r83.f1);
    CPy_DecRef(cpy_r_r83.f2);
    goto CPyL51;
CPyL49: ;
    CPy_RestoreExcInfo(cpy_r_r83);
    CPy_DecRef(cpy_r_r83.f0);
    CPy_DecRef(cpy_r_r83.f1);
    CPy_DecRef(cpy_r_r83.f2);
    cpy_r_r94 = CPy_KeepPropagating();
    if (!cpy_r_r94) {
        goto CPyL52;
    } else
        goto CPyL100;
CPyL50: ;
    CPy_Unreachable();
CPyL51: ;
    tuple_T3OOO __tmp3450 = { NULL, NULL, NULL };
    cpy_r_r95 = __tmp3450;
    cpy_r_r96 = cpy_r_r95;
    goto CPyL53;
CPyL52: ;
    cpy_r_r97 = CPy_CatchError();
    cpy_r_r96 = cpy_r_r97;
CPyL53: ;
    if (!cpy_r_r78) goto CPyL101;
    cpy_r_r98 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r99[4] = {cpy_r_r69, cpy_r_r98, cpy_r_r98, cpy_r_r98};
    cpy_r_r100 = (PyObject **)&cpy_r_r99;
    cpy_r_r101 = _PyObject_Vectorcall(cpy_r_r72, cpy_r_r100, 4, 0);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 109, CPyStatic_metastore___globals);
        goto CPyL102;
    } else
        goto CPyL103;
CPyL55: ;
    CPy_DECREF(cpy_r_r69);
CPyL56: ;
    if (cpy_r_r96.f0 == NULL) {
        goto CPyL63;
    } else
        goto CPyL104;
CPyL57: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL59;
    } else
        goto CPyL105;
CPyL58: ;
    CPy_Unreachable();
CPyL59: ;
    if (cpy_r_r96.f0 == NULL) goto CPyL61;
    CPy_RestoreExcInfo(cpy_r_r96);
    CPy_XDECREF(cpy_r_r96.f0);
    CPy_XDECREF(cpy_r_r96.f1);
    CPy_XDECREF(cpy_r_r96.f2);
CPyL61: ;
    cpy_r_r102 = CPy_KeepPropagating();
    if (!cpy_r_r102) goto CPyL73;
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r103 = CPyModule_os;
    cpy_r_r104 = CPyStatics[3798]; /* 'replace' */
    cpy_r_r105 = CPyObject_GetAttr(cpy_r_r103, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 111, CPyStatic_metastore___globals);
        goto CPyL91;
    }
    PyObject *cpy_r_r106[2] = {cpy_r_tmp_filename, cpy_r_path};
    cpy_r_r107 = (PyObject **)&cpy_r_r106;
    cpy_r_r108 = _PyObject_Vectorcall(cpy_r_r105, cpy_r_r107, 2, 0);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 111, CPyStatic_metastore___globals);
        goto CPyL91;
    } else
        goto CPyL106;
CPyL65: ;
    CPy_DECREF(cpy_r_tmp_filename);
    cpy_r_r109 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r110 = cpy_r_mtime != cpy_r_r109;
    if (!cpy_r_r110) goto CPyL107;
    cpy_r_r111 = PyFloat_AsDouble(cpy_r_mtime);
    if (cpy_r_r111 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_mtime); cpy_r_r111 = -113.0;
    }
    cpy_r_r112 = cpy_r_r111 == -113.0;
    if (unlikely(cpy_r_r112)) goto CPyL68;
CPyL67: ;
    cpy_r_r113 = PyFloat_AsDouble(cpy_r_mtime);
    if (cpy_r_r113 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_mtime); cpy_r_r113 = -113.0;
    }
    CPy_DECREF(cpy_r_mtime);
    cpy_r_r114 = cpy_r_r113 == -113.0;
    if (unlikely(cpy_r_r114)) {
        goto CPyL70;
    } else
        goto CPyL69;
CPyL68: ;
    cpy_r_r115 = PyErr_Occurred();
    if (unlikely(cpy_r_r115 != NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 113, CPyStatic_metastore___globals);
        goto CPyL108;
    } else
        goto CPyL67;
CPyL69: ;
    cpy_r_r116.f0 = cpy_r_r111;
    cpy_r_r116.f1 = cpy_r_r113;
    cpy_r_r117 = CPyModule_os;
    cpy_r_r118 = CPyStatics[3799]; /* 'utime' */
    cpy_r_r119 = CPyObject_GetAttr(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 113, CPyStatic_metastore___globals);
        goto CPyL109;
    } else
        goto CPyL71;
CPyL70: ;
    cpy_r_r120 = PyErr_Occurred();
    if (unlikely(cpy_r_r120 != NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 113, CPyStatic_metastore___globals);
        goto CPyL109;
    } else
        goto CPyL69;
CPyL71: ;
    cpy_r_r121 = PyTuple_New(2);
    if (unlikely(cpy_r_r121 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3451 = PyFloat_FromDouble(cpy_r_r116.f0);
    PyTuple_SET_ITEM(cpy_r_r121, 0, __tmp3451);
    PyObject *__tmp3452 = PyFloat_FromDouble(cpy_r_r116.f1);
    PyTuple_SET_ITEM(cpy_r_r121, 1, __tmp3452);
    PyObject *cpy_r_r122[2] = {cpy_r_path, cpy_r_r121};
    cpy_r_r123 = (PyObject **)&cpy_r_r122;
    cpy_r_r124 = CPyStatics[9524]; /* ('times',) */
    cpy_r_r125 = _PyObject_Vectorcall(cpy_r_r119, cpy_r_r123, 1, cpy_r_r124);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 113, CPyStatic_metastore___globals);
        goto CPyL110;
    } else
        goto CPyL111;
CPyL72: ;
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_r121);
    goto CPyL80;
CPyL73: ;
    cpy_r_r126 = CPy_CatchError();
    cpy_r_r127 = CPyModule_os;
    cpy_r_r128 = CPyStatics[401]; /* 'error' */
    cpy_r_r129 = CPyObject_GetAttr(cpy_r_r127, cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 115, CPyStatic_metastore___globals);
        goto CPyL78;
    }
    cpy_r_r130 = CPy_ExceptionMatches(cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    if (!cpy_r_r130) goto CPyL76;
    CPy_RestoreExcInfo(cpy_r_r126);
    CPy_DECREF(cpy_r_r126.f0);
    CPy_DECREF(cpy_r_r126.f1);
    CPy_DECREF(cpy_r_r126.f2);
    return 0;
CPyL76: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL78;
    } else
        goto CPyL112;
CPyL77: ;
    CPy_Unreachable();
CPyL78: ;
    CPy_RestoreExcInfo(cpy_r_r126);
    CPy_DECREF(cpy_r_r126.f0);
    CPy_DECREF(cpy_r_r126.f1);
    CPy_DECREF(cpy_r_r126.f2);
    cpy_r_r131 = CPy_KeepPropagating();
    if (!cpy_r_r131) goto CPyL81;
    CPy_Unreachable();
CPyL80: ;
    return 1;
CPyL81: ;
    cpy_r_r132 = 2;
    return cpy_r_r132;
CPyL82: ;
    CPy_INCREF(cpy_r_mtime);
    goto CPyL2;
CPyL83: ;
    CPy_DecRef(cpy_r_mtime);
    goto CPyL81;
CPyL84: ;
    CPy_DecRef(cpy_r_mtime);
    CPy_DecRef(cpy_r_r9);
    goto CPyL81;
CPyL85: ;
    CPy_DECREF(cpy_r_mtime);
    goto CPyL14;
CPyL86: ;
    CPy_DECREF(cpy_r_mtime);
    CPy_DECREF(cpy_r_r26);
    goto CPyL19;
CPyL87: ;
    CPy_DECREF(cpy_r_mtime);
    goto CPyL19;
CPyL88: ;
    CPy_DecRef(cpy_r_mtime);
    CPy_DecRef(cpy_r_r32);
    goto CPyL81;
CPyL89: ;
    CPy_DecRef(cpy_r_mtime);
    CPy_DecRef(cpy_r_path);
    goto CPyL81;
CPyL90: ;
    CPy_DecRef(cpy_r_mtime);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r43);
    goto CPyL81;
CPyL91: ;
    CPy_DecRef(cpy_r_mtime);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_tmp_filename);
    goto CPyL73;
CPyL92: ;
    CPy_DecRef(cpy_r_mtime);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_tmp_filename);
    CPy_DecRef(cpy_r_r54);
    goto CPyL73;
CPyL93: ;
    CPy_DECREF(cpy_r_r62);
    goto CPyL35;
CPyL94: ;
    CPy_DecRef(cpy_r_mtime);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_tmp_filename);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r70);
    goto CPyL73;
CPyL95: ;
    CPy_DecRef(cpy_r_mtime);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_tmp_filename);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r72);
    goto CPyL73;
CPyL96: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL43;
CPyL97: ;
    CPy_DECREF(cpy_r_r82);
    goto CPyL42;
CPyL98: ;
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r87);
    goto CPyL49;
CPyL99: ;
    CPy_DecRef(cpy_r_mtime);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_tmp_filename);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r72);
    CPy_DecRef(cpy_r_r83.f0);
    CPy_DecRef(cpy_r_r83.f1);
    CPy_DecRef(cpy_r_r83.f2);
    goto CPyL47;
CPyL100: ;
    CPy_DecRef(cpy_r_mtime);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_tmp_filename);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r72);
    goto CPyL50;
CPyL101: ;
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r72);
    goto CPyL56;
CPyL102: ;
    CPy_DecRef(cpy_r_mtime);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_tmp_filename);
    CPy_DecRef(cpy_r_r69);
    goto CPyL59;
CPyL103: ;
    CPy_DECREF(cpy_r_r101);
    goto CPyL55;
CPyL104: ;
    CPy_DECREF(cpy_r_mtime);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_tmp_filename);
    goto CPyL57;
CPyL105: ;
    CPy_XDECREF(cpy_r_r96.f0);
    CPy_XDECREF(cpy_r_r96.f1);
    CPy_XDECREF(cpy_r_r96.f2);
    goto CPyL58;
CPyL106: ;
    CPy_DECREF(cpy_r_r108);
    goto CPyL65;
CPyL107: ;
    CPy_DECREF(cpy_r_mtime);
    CPy_DECREF(cpy_r_path);
    goto CPyL80;
CPyL108: ;
    CPy_DecRef(cpy_r_mtime);
    CPy_DecRef(cpy_r_path);
    goto CPyL73;
CPyL109: ;
    CPy_DecRef(cpy_r_path);
    goto CPyL73;
CPyL110: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r121);
    goto CPyL73;
CPyL111: ;
    CPy_DECREF(cpy_r_r125);
    goto CPyL72;
CPyL112: ;
    CPy_DECREF(cpy_r_r126.f0);
    CPy_DECREF(cpy_r_r126.f1);
    CPy_DECREF(cpy_r_r126.f2);
    goto CPyL77;
}

PyObject *CPyPy_metastore___FilesystemMetadataStore___write(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "data", "mtime", 0};
    static CPyArg_Parser parser = {"OO|O:write", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_data;
    PyObject *obj_mtime = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_data, &obj_mtime)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___FilesystemMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.FilesystemMetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_data;
    if (likely(PyUnicode_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("str", obj_data); 
        goto fail;
    }
    PyObject *arg_mtime;
    if (obj_mtime == NULL) {
        arg_mtime = NULL;
        goto __LL3453;
    }
    if (CPyFloat_Check(obj_mtime))
        arg_mtime = obj_mtime;
    else {
        arg_mtime = NULL;
    }
    if (arg_mtime != NULL) goto __LL3453;
    if (obj_mtime == Py_None)
        arg_mtime = obj_mtime;
    else {
        arg_mtime = NULL;
    }
    if (arg_mtime != NULL) goto __LL3453;
    CPy_TypeError("float or None", obj_mtime); 
    goto fail;
__LL3453: ;
    char retval = CPyDef_metastore___FilesystemMetadataStore___write(arg_self, arg_name, arg_data, arg_mtime);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "write", 99, CPyStatic_metastore___globals);
    return NULL;
}

char CPyDef_metastore___FilesystemMetadataStore___remove(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = ((mypy___metastore___FilesystemMetadataStoreObject *)cpy_r_self)->_cache_dir_prefix;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL16;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "remove", 120, CPyStatic_metastore___globals, "str", cpy_r_r0);
        goto CPyL15;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4) goto CPyL7;
CPyL3: ;
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[269]; /* 'FileNotFoundError' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "remove", 121, CPyStatic_metastore___globals);
        goto CPyL15;
    }
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r7, 0, 0, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "remove", 121, CPyStatic_metastore___globals);
        goto CPyL15;
    }
    CPy_Raise(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/metastore.py", "remove", 121, CPyStatic_metastore___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r9 = ((mypy___metastore___FilesystemMetadataStoreObject *)cpy_r_self)->_cache_dir_prefix;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "remove", 123, CPyStatic_metastore___globals, "str", cpy_r_r9);
        goto CPyL15;
    }
    cpy_r_r11 = CPyModule_os;
    cpy_r_r12 = CPyStatics[142]; /* 'path' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "remove", 123, CPyStatic_metastore___globals);
        goto CPyL17;
    }
    cpy_r_r14 = CPyStatics[175]; /* 'join' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "remove", 123, CPyStatic_metastore___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r16[2] = {cpy_r_r10, cpy_r_name};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 2, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "remove", 123, CPyStatic_metastore___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_r10);
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "remove", 123, CPyStatic_metastore___globals, "str", cpy_r_r18);
        goto CPyL15;
    }
    cpy_r_r20 = CPyModule_os;
    cpy_r_r21 = CPyStatics[347]; /* 'remove' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "remove", 123, CPyStatic_metastore___globals);
        goto CPyL18;
    }
    PyObject *cpy_r_r23[1] = {cpy_r_r19};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = _PyObject_Vectorcall(cpy_r_r22, cpy_r_r24, 1, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "remove", 123, CPyStatic_metastore___globals);
        goto CPyL18;
    } else
        goto CPyL19;
CPyL14: ;
    CPy_DECREF(cpy_r_r19);
    return 1;
CPyL15: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL16: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL17: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL15;
CPyL19: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL14;
}

PyObject *CPyPy_metastore___FilesystemMetadataStore___remove(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:remove", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___FilesystemMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.FilesystemMetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_metastore___FilesystemMetadataStore___remove(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "remove", 119, CPyStatic_metastore___globals);
    return NULL;
}

char CPyDef_metastore___FilesystemMetadataStore___commit(PyObject *cpy_r_self) {
    return 1;
}

PyObject *CPyPy_metastore___FilesystemMetadataStore___commit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":commit", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___FilesystemMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.FilesystemMetadataStore", obj_self); 
        goto fail;
    }
    char retval = CPyDef_metastore___FilesystemMetadataStore___commit(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "commit", 125, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___list_all_FilesystemMetadataStore_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    tuple_T3OOO cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
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
    PyObject *cpy_r_r41;
    PyObject **cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyTagged cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject **cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    CPyTagged cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    int64_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    int64_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    cpy_r_r0 = ((mypy___metastore___list_all_FilesystemMetadataStore_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_gen", "__mypyc_env__", 128, CPyStatic_metastore___globals);
        goto CPyL70;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_env", "__mypyc_next_label__", 128, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL60;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL72;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 128, CPyStatic_metastore___globals);
        goto CPyL70;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_env", "self", 129, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___metastore___FilesystemMetadataStoreObject *)cpy_r_r4)->_cache_dir_prefix;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 != cpy_r_r6;
    if (!cpy_r_r7) goto CPyL73;
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r8 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "list_all", 129, CPyStatic_metastore___globals, "str", cpy_r_r5);
        goto CPyL71;
    }
    cpy_r_r9 = CPyStr_IsTrue(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (cpy_r_r9) goto CPyL12;
CPyL9: ;
    cpy_r_r10 = Py_None;
    if (((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r11 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 130, CPyStatic_metastore___globals);
        goto CPyL70;
    }
    CPyGen_SetStopIterationValue(cpy_r_r10);
    if (!0) goto CPyL70;
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r12 = ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_env", "self", 132, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r12);
CPyL13: ;
    cpy_r_r13 = ((mypy___metastore___FilesystemMetadataStoreObject *)cpy_r_r12)->_cache_dir_prefix;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "list_all", 132, CPyStatic_metastore___globals, "str", cpy_r_r13);
        goto CPyL71;
    }
    cpy_r_r15 = CPyModule_os;
    cpy_r_r16 = CPyStatics[3801]; /* 'walk' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 132, CPyStatic_metastore___globals);
        goto CPyL74;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_r14};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 132, CPyStatic_metastore___globals);
        goto CPyL74;
    }
    CPy_DECREF(cpy_r_r14);
    cpy_r_r21 = PyObject_GetIter(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 132, CPyStatic_metastore___globals);
        goto CPyL75;
    }
    if (((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__0);
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__0 = cpy_r_r20;
    cpy_r_r22 = 1;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", -1, CPyStatic_metastore___globals);
        goto CPyL76;
    }
    if (((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__1 != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__1);
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__1 = cpy_r_r21;
    cpy_r_r23 = 1;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", -1, CPyStatic_metastore___globals);
        goto CPyL71;
    }
CPyL19: ;
    cpy_r_r24 = ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__1;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_env", "__mypyc_temp__1", 132, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r24);
CPyL20: ;
    cpy_r_r25 = PyIter_Next(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (cpy_r_r25 == NULL) goto CPyL56;
    PyObject *__tmp3454;
    if (unlikely(!(PyTuple_Check(cpy_r_r25) && PyTuple_GET_SIZE(cpy_r_r25) == 3))) {
        __tmp3454 = NULL;
        goto __LL3455;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r25, 0))))
        __tmp3454 = PyTuple_GET_ITEM(cpy_r_r25, 0);
    else {
        __tmp3454 = NULL;
    }
    if (__tmp3454 == NULL) goto __LL3455;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r25, 1))))
        __tmp3454 = PyTuple_GET_ITEM(cpy_r_r25, 1);
    else {
        __tmp3454 = NULL;
    }
    if (__tmp3454 == NULL) goto __LL3455;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r25, 2))))
        __tmp3454 = PyTuple_GET_ITEM(cpy_r_r25, 2);
    else {
        __tmp3454 = NULL;
    }
    if (__tmp3454 == NULL) goto __LL3455;
    __tmp3454 = cpy_r_r25;
__LL3455: ;
    if (unlikely(__tmp3454 == NULL)) {
        CPy_TypeError("tuple[str, list, list]", cpy_r_r25); cpy_r_r26 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp3456 = PyTuple_GET_ITEM(cpy_r_r25, 0);
        CPy_INCREF(__tmp3456);
        PyObject *__tmp3457;
        if (likely(PyUnicode_Check(__tmp3456)))
            __tmp3457 = __tmp3456;
        else {
            CPy_TypeError("str", __tmp3456); 
            __tmp3457 = NULL;
        }
        cpy_r_r26.f0 = __tmp3457;
        PyObject *__tmp3458 = PyTuple_GET_ITEM(cpy_r_r25, 1);
        CPy_INCREF(__tmp3458);
        PyObject *__tmp3459;
        if (likely(PyList_Check(__tmp3458)))
            __tmp3459 = __tmp3458;
        else {
            CPy_TypeError("list", __tmp3458); 
            __tmp3459 = NULL;
        }
        cpy_r_r26.f1 = __tmp3459;
        PyObject *__tmp3460 = PyTuple_GET_ITEM(cpy_r_r25, 2);
        CPy_INCREF(__tmp3460);
        PyObject *__tmp3461;
        if (likely(PyList_Check(__tmp3460)))
            __tmp3461 = __tmp3460;
        else {
            CPy_TypeError("list", __tmp3460); 
            __tmp3461 = NULL;
        }
        cpy_r_r26.f2 = __tmp3461;
    }
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26.f0 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 132, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    cpy_r_r27 = cpy_r_r26.f0;
    CPy_INCREF(cpy_r_r27);
    if (((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_dir != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_dir);
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_dir = cpy_r_r27;
    cpy_r_r28 = 1;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 132, CPyStatic_metastore___globals);
        goto CPyL77;
    }
    cpy_r_r29 = cpy_r_r26.f1;
    CPy_INCREF(cpy_r_r29);
    if (((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->__ != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->__);
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->__ = cpy_r_r29;
    cpy_r_r30 = 1;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 132, CPyStatic_metastore___globals);
        goto CPyL77;
    }
    cpy_r_r31 = cpy_r_r26.f2;
    CPy_INCREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r26.f0);
    CPy_DECREF(cpy_r_r26.f1);
    CPy_DECREF(cpy_r_r26.f2);
    if (((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_files != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_files);
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_files = cpy_r_r31;
    cpy_r_r32 = 1;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 132, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    cpy_r_r33 = ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_dir;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_env", "dir", 133, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r33);
CPyL26: ;
    cpy_r_r34 = ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_env", "self", 133, CPyStatic_metastore___globals);
        goto CPyL78;
    }
    CPy_INCREF(cpy_r_r34);
CPyL27: ;
    cpy_r_r35 = ((mypy___metastore___FilesystemMetadataStoreObject *)cpy_r_r34)->_cache_dir_prefix;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (likely(cpy_r_r35 != Py_None))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "list_all", 133, CPyStatic_metastore___globals, "str", cpy_r_r35);
        goto CPyL78;
    }
    cpy_r_r37 = CPyModule_os;
    cpy_r_r38 = CPyStatics[142]; /* 'path' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 133, CPyStatic_metastore___globals);
        goto CPyL79;
    }
    cpy_r_r40 = CPyStatics[152]; /* 'relpath' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 133, CPyStatic_metastore___globals);
        goto CPyL79;
    }
    PyObject *cpy_r_r42[2] = {cpy_r_r33, cpy_r_r36};
    cpy_r_r43 = (PyObject **)&cpy_r_r42;
    cpy_r_r44 = _PyObject_Vectorcall(cpy_r_r41, cpy_r_r43, 2, 0);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 133, CPyStatic_metastore___globals);
        goto CPyL79;
    }
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r36);
    if (likely(PyUnicode_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "list_all", 133, CPyStatic_metastore___globals, "str", cpy_r_r44);
        goto CPyL71;
    }
    if (((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_dir != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_dir);
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_dir = cpy_r_r45;
    cpy_r_r46 = 1;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 133, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    cpy_r_r47 = ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_files;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_env", "files", 134, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r47);
CPyL34: ;
    if (((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__2);
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__2 = cpy_r_r47;
    cpy_r_r48 = 1;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", -1, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__3 = 0;
    cpy_r_r49 = 1;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", -1, CPyStatic_metastore___globals);
        goto CPyL71;
    }
CPyL36: ;
    cpy_r_r50 = ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__2;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_env", "__mypyc_temp__2", 134, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r50);
CPyL37: ;
    cpy_r_r51 = (CPyPtr)&((PyVarObject *)cpy_r_r50)->ob_size;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    CPy_DECREF(cpy_r_r50);
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__3;
    if (unlikely(cpy_r_r54 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_env", "__mypyc_temp__3", 134, CPyStatic_metastore___globals);
        goto CPyL71;
    }
CPyL38: ;
    cpy_r_r55 = (Py_ssize_t)cpy_r_r54 < (Py_ssize_t)cpy_r_r53;
    if (!cpy_r_r55) goto CPyL19;
    cpy_r_r56 = ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__2;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_env", "__mypyc_temp__2", 134, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r56);
CPyL40: ;
    cpy_r_r57 = ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__3;
    if (unlikely(cpy_r_r57 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_env", "__mypyc_temp__3", 134, CPyStatic_metastore___globals);
        goto CPyL80;
    }
CPyL41: ;
    cpy_r_r58 = CPyList_GetItemUnsafe(cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    if (likely(PyUnicode_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "list_all", 134, CPyStatic_metastore___globals, "str", cpy_r_r58);
        goto CPyL71;
    }
    if (((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_file != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_file);
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_file = cpy_r_r59;
    cpy_r_r60 = 1;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 134, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    cpy_r_r61 = ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_dir;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_env", "dir", 135, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r61);
CPyL44: ;
    cpy_r_r62 = ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_file;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_env", "file", 135, CPyStatic_metastore___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r62);
CPyL45: ;
    cpy_r_r63 = CPyModule_os;
    cpy_r_r64 = CPyStatics[142]; /* 'path' */
    cpy_r_r65 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 135, CPyStatic_metastore___globals);
        goto CPyL82;
    }
    cpy_r_r66 = CPyStatics[175]; /* 'join' */
    cpy_r_r67 = CPyObject_GetAttr(cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 135, CPyStatic_metastore___globals);
        goto CPyL82;
    }
    PyObject *cpy_r_r68[2] = {cpy_r_r61, cpy_r_r62};
    cpy_r_r69 = (PyObject **)&cpy_r_r68;
    cpy_r_r70 = _PyObject_Vectorcall(cpy_r_r67, cpy_r_r69, 2, 0);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 135, CPyStatic_metastore___globals);
        goto CPyL82;
    }
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r62);
    if (likely(PyUnicode_Check(cpy_r_r70)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "list_all", 135, CPyStatic_metastore___globals, "str", cpy_r_r70);
        goto CPyL71;
    }
    if (((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r72 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 135, CPyStatic_metastore___globals);
        goto CPyL83;
    }
    return cpy_r_r71;
CPyL51: ;
    cpy_r_r73 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r74 = cpy_r_type != cpy_r_r73;
    if (cpy_r_r74) {
        goto CPyL84;
    } else
        goto CPyL54;
CPyL52: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 135, CPyStatic_metastore___globals);
        goto CPyL70;
    }
    CPy_Unreachable();
CPyL54: ;
    cpy_r_r75 = ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__3;
    if (unlikely(cpy_r_r75 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_FilesystemMetadataStore_env", "__mypyc_temp__3", 134, CPyStatic_metastore___globals);
        goto CPyL71;
    }
CPyL55: ;
    cpy_r_r76 = cpy_r_r75 + 2;
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__3 = cpy_r_r76;
    cpy_r_r77 = 1;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 134, CPyStatic_metastore___globals);
        goto CPyL71;
    } else
        goto CPyL36;
CPyL56: ;
    cpy_r_r78 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 132, CPyStatic_metastore___globals);
        goto CPyL71;
    }
    cpy_r_r79 = Py_None;
    if (((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r80 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 128, CPyStatic_metastore___globals);
        goto CPyL70;
    }
    CPyGen_SetStopIterationValue(cpy_r_r79);
    if (!0) goto CPyL70;
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r81 = cpy_r_r1 & 1;
    cpy_r_r82 = cpy_r_r81 == 0;
    if (!cpy_r_r82) goto CPyL62;
    cpy_r_r83 = cpy_r_r1 == 0;
    cpy_r_r84 = cpy_r_r83;
    goto CPyL63;
CPyL62: ;
    cpy_r_r85 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r84 = cpy_r_r85;
CPyL63: ;
    if (cpy_r_r84) goto CPyL85;
    cpy_r_r86 = cpy_r_r1 & 1;
    cpy_r_r87 = cpy_r_r86 == 0;
    if (!cpy_r_r87) goto CPyL66;
    cpy_r_r88 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r89 = cpy_r_r88;
    goto CPyL67;
CPyL66: ;
    cpy_r_r90 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r89 = cpy_r_r90;
CPyL67: ;
    if (cpy_r_r89) {
        goto CPyL51;
    } else
        goto CPyL86;
CPyL68: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r91 = 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 128, CPyStatic_metastore___globals);
        goto CPyL70;
    }
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r92 = NULL;
    return cpy_r_r92;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL70;
CPyL72: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL73: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL9;
CPyL74: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r14);
    goto CPyL70;
CPyL75: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r20);
    goto CPyL70;
CPyL76: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    goto CPyL70;
CPyL77: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r26.f0);
    CPy_DecRef(cpy_r_r26.f1);
    CPy_DecRef(cpy_r_r26.f2);
    goto CPyL70;
CPyL78: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r33);
    goto CPyL70;
CPyL79: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r36);
    goto CPyL70;
CPyL80: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r56);
    goto CPyL70;
CPyL81: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r61);
    goto CPyL70;
CPyL82: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    goto CPyL70;
CPyL83: ;
    CPy_DecRef(cpy_r_r71);
    goto CPyL70;
CPyL84: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL52;
CPyL85: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL86: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL68;
}

PyObject *CPyPy_metastore___list_all_FilesystemMetadataStore_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_metastore___list_all_FilesystemMetadataStore_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "list_all", 128, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___list_all_FilesystemMetadataStore_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_metastore___list_all_FilesystemMetadataStore_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_metastore___list_all_FilesystemMetadataStore_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_metastore___list_all_FilesystemMetadataStore_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.metastore.list_all_FilesystemMetadataStore_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_metastore___list_all_FilesystemMetadataStore_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "__next__", -1, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___list_all_FilesystemMetadataStore_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_metastore___list_all_FilesystemMetadataStore_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_metastore___list_all_FilesystemMetadataStore_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_metastore___list_all_FilesystemMetadataStore_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.metastore.list_all_FilesystemMetadataStore_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_metastore___list_all_FilesystemMetadataStore_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "send", -1, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___list_all_FilesystemMetadataStore_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_metastore___list_all_FilesystemMetadataStore_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_metastore___list_all_FilesystemMetadataStore_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.metastore.list_all_FilesystemMetadataStore_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_metastore___list_all_FilesystemMetadataStore_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "__iter__", -1, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___list_all_FilesystemMetadataStore_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_metastore___list_all_FilesystemMetadataStore_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_metastore___list_all_FilesystemMetadataStore_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_metastore___list_all_FilesystemMetadataStore_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.metastore.list_all_FilesystemMetadataStore_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_metastore___list_all_FilesystemMetadataStore_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "throw", -1, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___list_all_FilesystemMetadataStore_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_metastore___list_all_FilesystemMetadataStore_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp3462 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp3462);
    PyObject *__tmp3463 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp3463);
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

PyObject *CPyPy_metastore___list_all_FilesystemMetadataStore_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_metastore___list_all_FilesystemMetadataStore_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.metastore.list_all_FilesystemMetadataStore_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_metastore___list_all_FilesystemMetadataStore_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "close", -1, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___FilesystemMetadataStore___list_all(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_metastore___list_all_FilesystemMetadataStore_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 128, CPyStatic_metastore___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 128, CPyStatic_metastore___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_metastore___list_all_FilesystemMetadataStore_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 128, CPyStatic_metastore___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___metastore___list_all_FilesystemMetadataStore_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_FilesystemMetadataStore_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 128, CPyStatic_metastore___globals);
        goto CPyL8;
    }
    if (((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___metastore___list_all_FilesystemMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 128, CPyStatic_metastore___globals);
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

PyObject *CPyPy_metastore___FilesystemMetadataStore___list_all(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":list_all", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___FilesystemMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.FilesystemMetadataStore", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_metastore___FilesystemMetadataStore___list_all(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "list_all", 128, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___connect_db(PyObject *cpy_r_db_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
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
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_db;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_migr;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    tuple_T3OOO cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    cpy_r_r0 = CPyStatic_metastore___globals;
    cpy_r_r1 = CPyModule_sqlite3___dbapi2;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (cpy_r_r3) goto CPyL3;
    cpy_r_r4 = CPyStatics[3802]; /* 'sqlite3.dbapi2' */
    cpy_r_r5 = PyImport_Import(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "connect_db", 151, CPyStatic_metastore___globals);
        goto CPyL28;
    }
    CPyModule_sqlite3___dbapi2 = cpy_r_r5;
    CPy_INCREF(CPyModule_sqlite3___dbapi2);
    CPy_DECREF(cpy_r_r5);
CPyL3: ;
    cpy_r_r6 = CPyStatics[3803]; /* 'sqlite3' */
    cpy_r_r7 = PyImport_GetModuleDict();
    cpy_r_r8 = CPyStatics[3803]; /* 'sqlite3' */
    cpy_r_r9 = CPyDict_GetItem(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "connect_db", 151, CPyStatic_metastore___globals);
        goto CPyL28;
    }
    cpy_r_r10 = CPyDict_SetItem(cpy_r_r0, cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/metastore.py", "connect_db", 151, CPyStatic_metastore___globals);
        goto CPyL28;
    }
    cpy_r_r12 = CPyModule_sqlite3___dbapi2;
    cpy_r_r13 = CPyStatics[2679]; /* 'connect' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "connect_db", 153, CPyStatic_metastore___globals);
        goto CPyL28;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_db_file};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "connect_db", 153, CPyStatic_metastore___globals);
        goto CPyL28;
    }
    cpy_r_db = cpy_r_r17;
    cpy_r_r18 = CPyStatic_metastore___globals;
    cpy_r_r19 = CPyStatics[3804]; /* 'SCHEMA' */
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "connect_db", 154, CPyStatic_metastore___globals);
        goto CPyL29;
    }
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "connect_db", 154, CPyStatic_metastore___globals, "str", cpy_r_r20);
        goto CPyL29;
    }
    cpy_r_r22 = CPyStatics[3805]; /* 'executescript' */
    PyObject *cpy_r_r23[2] = {cpy_r_db, cpy_r_r21};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = PyObject_VectorcallMethod(cpy_r_r22, cpy_r_r24, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "connect_db", 154, CPyStatic_metastore___globals);
        goto CPyL30;
    } else
        goto CPyL31;
CPyL10: ;
    CPy_DECREF(cpy_r_r21);
    cpy_r_r26 = CPyStatic_metastore___globals;
    cpy_r_r27 = CPyStatics[3806]; /* 'MIGRATIONS' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "connect_db", 155, CPyStatic_metastore___globals);
        goto CPyL29;
    }
    if (likely(PyList_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "connect_db", 155, CPyStatic_metastore___globals, "list", cpy_r_r28);
        goto CPyL29;
    }
    cpy_r_r30 = 0;
CPyL13: ;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = (Py_ssize_t)cpy_r_r30 < (Py_ssize_t)cpy_r_r33;
    if (!cpy_r_r34) goto CPyL32;
    cpy_r_r35 = CPyList_GetItemUnsafe(cpy_r_r29, cpy_r_r30);
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "connect_db", 155, CPyStatic_metastore___globals, "str", cpy_r_r35);
        goto CPyL33;
    }
    cpy_r_migr = cpy_r_r36;
    cpy_r_r37 = CPyStatics[3805]; /* 'executescript' */
    PyObject *cpy_r_r38[2] = {cpy_r_db, cpy_r_migr};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = PyObject_VectorcallMethod(cpy_r_r37, cpy_r_r39, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "connect_db", 157, CPyStatic_metastore___globals);
        goto CPyL34;
    } else
        goto CPyL35;
CPyL17: ;
    CPy_DECREF(cpy_r_migr);
    goto CPyL26;
CPyL18: ;
    cpy_r_r41 = CPy_CatchError();
    cpy_r_r42 = PyImport_GetModuleDict();
    cpy_r_r43 = CPyStatics[3803]; /* 'sqlite3' */
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "connect_db", 158, CPyStatic_metastore___globals);
        goto CPyL36;
    }
    cpy_r_r45 = CPyStatics[3807]; /* 'OperationalError' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    CPy_DecRef(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "connect_db", 158, CPyStatic_metastore___globals);
        goto CPyL36;
    }
    cpy_r_r47 = CPy_ExceptionMatches(cpy_r_r46);
    CPy_DecRef(cpy_r_r46);
    if (cpy_r_r47) {
        goto CPyL23;
    } else
        goto CPyL37;
CPyL21: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL24;
    } else
        goto CPyL38;
CPyL22: ;
    CPy_Unreachable();
CPyL23: ;
    CPy_RestoreExcInfo(cpy_r_r41);
    CPy_DecRef(cpy_r_r41.f0);
    CPy_DecRef(cpy_r_r41.f1);
    CPy_DecRef(cpy_r_r41.f2);
    goto CPyL26;
CPyL24: ;
    CPy_RestoreExcInfo(cpy_r_r41);
    CPy_DecRef(cpy_r_r41.f0);
    CPy_DecRef(cpy_r_r41.f1);
    CPy_DecRef(cpy_r_r41.f2);
    cpy_r_r48 = CPy_KeepPropagating();
    if (!cpy_r_r48) goto CPyL28;
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r49 = cpy_r_r30 + 2;
    cpy_r_r30 = cpy_r_r49;
    goto CPyL13;
CPyL27: ;
    return cpy_r_db;
CPyL28: ;
    cpy_r_r50 = NULL;
    return cpy_r_r50;
CPyL29: ;
    CPy_DecRef(cpy_r_db);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_db);
    CPy_DecRef(cpy_r_r21);
    goto CPyL28;
CPyL31: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL10;
CPyL32: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_db);
    CPy_DecRef(cpy_r_r29);
    goto CPyL28;
CPyL34: ;
    CPy_DecRef(cpy_r_migr);
    goto CPyL18;
CPyL35: ;
    CPy_DECREF(cpy_r_r40);
    goto CPyL17;
CPyL36: ;
    CPy_DecRef(cpy_r_db);
    CPy_DecRef(cpy_r_r29);
    goto CPyL24;
CPyL37: ;
    CPy_DecRef(cpy_r_db);
    CPy_DecRef(cpy_r_r29);
    goto CPyL21;
CPyL38: ;
    CPy_DecRef(cpy_r_r41.f0);
    CPy_DecRef(cpy_r_r41.f1);
    CPy_DecRef(cpy_r_r41.f2);
    goto CPyL22;
}

PyObject *CPyPy_metastore___connect_db(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"db_file", 0};
    static CPyArg_Parser parser = {"O:connect_db", kwlist, 0};
    PyObject *obj_db_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_db_file)) {
        return NULL;
    }
    PyObject *arg_db_file;
    if (likely(PyUnicode_Check(obj_db_file)))
        arg_db_file = obj_db_file;
    else {
        CPy_TypeError("str", obj_db_file); 
        goto fail;
    }
    PyObject *retval = CPyDef_metastore___connect_db(arg_db_file);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "connect_db", 150, CPyStatic_metastore___globals);
    return NULL;
}

char CPyDef_metastore___SqliteMetadataStore_____init__(PyObject *cpy_r_self, PyObject *cpy_r_cache_dir_prefix) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[391]; /* 'devnull' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "__init__", 168, CPyStatic_metastore___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "__init__", 168, CPyStatic_metastore___globals, "str", cpy_r_r2);
        goto CPyL12;
    }
    cpy_r_r4 = CPyStr_Startswith(cpy_r_cache_dir_prefix, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL4;
    cpy_r_r5 = Py_None;
    CPy_INCREF(cpy_r_r5);
    ((mypy___metastore___SqliteMetadataStoreObject *)cpy_r_self)->_db = cpy_r_r5;
    return 1;
CPyL4: ;
    cpy_r_r6 = CPyModule_os;
    cpy_r_r7 = CPyStatics[3796]; /* 'makedirs' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "__init__", 172, CPyStatic_metastore___globals);
        goto CPyL12;
    }
    cpy_r_r9 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r10[2] = {cpy_r_cache_dir_prefix, cpy_r_r9};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = CPyStatics[9523]; /* ('exist_ok',) */
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r11, 1, cpy_r_r12);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "__init__", 172, CPyStatic_metastore___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL6: ;
    cpy_r_r14 = CPyStatics[3808]; /* 'cache.db' */
    cpy_r_r15 = CPyModule_os;
    cpy_r_r16 = CPyStatics[142]; /* 'path' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "__init__", 173, CPyStatic_metastore___globals);
        goto CPyL12;
    }
    cpy_r_r18 = CPyStatics[175]; /* 'join' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "__init__", 173, CPyStatic_metastore___globals);
        goto CPyL12;
    }
    PyObject *cpy_r_r20[2] = {cpy_r_cache_dir_prefix, cpy_r_r14};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = _PyObject_Vectorcall(cpy_r_r19, cpy_r_r21, 2, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "__init__", 173, CPyStatic_metastore___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "__init__", 173, CPyStatic_metastore___globals, "str", cpy_r_r22);
        goto CPyL12;
    }
    cpy_r_r24 = CPyDef_metastore___connect_db(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "__init__", 173, CPyStatic_metastore___globals);
        goto CPyL12;
    }
    ((mypy___metastore___SqliteMetadataStoreObject *)cpy_r_self)->_db = cpy_r_r24;
    return 1;
CPyL12: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL13: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL6;
}

PyObject *CPyPy_metastore___SqliteMetadataStore_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"cache_dir_prefix", 0};
    PyObject *obj_cache_dir_prefix;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_cache_dir_prefix)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___SqliteMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.SqliteMetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_cache_dir_prefix;
    if (likely(PyUnicode_Check(obj_cache_dir_prefix)))
        arg_cache_dir_prefix = obj_cache_dir_prefix;
    else {
        CPy_TypeError("str", obj_cache_dir_prefix); 
        goto fail;
    }
    char retval = CPyDef_metastore___SqliteMetadataStore_____init__(arg_self, arg_cache_dir_prefix);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "__init__", 164, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___SqliteMetadataStore____query(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_field) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
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
    tuple_T1O cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_cur;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_results;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    int64_t cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = ((mypy___metastore___SqliteMetadataStoreObject *)cpy_r_self)->_db;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL25;
    cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = PyObject_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/metastore.py", "_query", 177, CPyStatic_metastore___globals);
        goto CPyL24;
    }
    cpy_r_r6 = cpy_r_r4;
    if (cpy_r_r6) goto CPyL8;
CPyL4: ;
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[269]; /* 'FileNotFoundError' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "_query", 178, CPyStatic_metastore___globals);
        goto CPyL24;
    }
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_r9, 0, 0, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "_query", 178, CPyStatic_metastore___globals);
        goto CPyL24;
    }
    CPy_Raise(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/metastore.py", "_query", 178, CPyStatic_metastore___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r11 = ((mypy___metastore___SqliteMetadataStoreObject *)cpy_r_self)->_db;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyStatics[3809]; /* 'SELECT ' */
    cpy_r_r13 = CPyStatics[3810]; /* ' FROM files WHERE path = ?' */
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r12, cpy_r_field, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "_query", 180, CPyStatic_metastore___globals);
        goto CPyL26;
    }
    cpy_r_r15.f0 = cpy_r_name;
    CPy_INCREF(cpy_r_r15.f0);
    cpy_r_r16 = cpy_r_r11;
    cpy_r_r17 = CPyStatics[3811]; /* 'execute' */
    cpy_r_r18 = PyTuple_New(1);
    if (unlikely(cpy_r_r18 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3464 = cpy_r_r15.f0;
    PyTuple_SET_ITEM(cpy_r_r18, 0, __tmp3464);
    PyObject *cpy_r_r19[3] = {cpy_r_r16, cpy_r_r14, cpy_r_r18};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_VectorcallMethod(cpy_r_r17, cpy_r_r20, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "_query", 180, CPyStatic_metastore___globals);
        goto CPyL27;
    }
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r22 = cpy_r_r21;
    cpy_r_cur = cpy_r_r22;
    cpy_r_r23 = CPyStatics[3812]; /* 'fetchall' */
    PyObject *cpy_r_r24[1] = {cpy_r_cur};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = PyObject_VectorcallMethod(cpy_r_r23, cpy_r_r25, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "_query", 181, CPyStatic_metastore___globals);
        goto CPyL28;
    }
    CPy_DECREF(cpy_r_cur);
    if (likely(PyList_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "_query", 181, CPyStatic_metastore___globals, "list", cpy_r_r26);
        goto CPyL24;
    }
    cpy_r_results = cpy_r_r27;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_results)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = cpy_r_r30 != 0;
    if (cpy_r_r31) {
        goto CPyL18;
    } else
        goto CPyL29;
CPyL14: ;
    cpy_r_r32 = CPyModule_builtins;
    cpy_r_r33 = CPyStatics[269]; /* 'FileNotFoundError' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "_query", 183, CPyStatic_metastore___globals);
        goto CPyL24;
    }
    cpy_r_r35 = _PyObject_Vectorcall(cpy_r_r34, 0, 0, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "_query", 183, CPyStatic_metastore___globals);
        goto CPyL24;
    }
    CPy_Raise(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/metastore.py", "_query", 183, CPyStatic_metastore___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r36 = (CPyPtr)&((PyVarObject *)cpy_r_results)->ob_size;
    cpy_r_r37 = *(int64_t *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 << 1;
    cpy_r_r39 = cpy_r_r38 == 2;
    if (cpy_r_r39) {
        goto CPyL21;
    } else
        goto CPyL30;
CPyL19: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/metastore.py", "_query", 184, CPyStatic_metastore___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r41 = CPyList_GetItemShort(cpy_r_results, 0);
    CPy_DECREF(cpy_r_results);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "_query", 185, CPyStatic_metastore___globals);
        goto CPyL24;
    }
    cpy_r_r42 = CPyStatics[9015]; /* 0 */
    cpy_r_r43 = PyObject_GetItem(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "_query", 185, CPyStatic_metastore___globals);
        goto CPyL24;
    }
    return cpy_r_r43;
CPyL24: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL25: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
CPyL26: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_cur);
    goto CPyL24;
CPyL29: ;
    CPy_DECREF(cpy_r_results);
    goto CPyL14;
CPyL30: ;
    CPy_DECREF(cpy_r_results);
    goto CPyL19;
}

PyObject *CPyPy_metastore___SqliteMetadataStore____query(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "field", 0};
    static CPyArg_Parser parser = {"OO:_query", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_field;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_field)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___SqliteMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.SqliteMetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_field;
    if (likely(PyUnicode_Check(obj_field)))
        arg_field = obj_field;
    else {
        CPy_TypeError("str", obj_field); 
        goto fail;
    }
    PyObject *retval = CPyDef_metastore___SqliteMetadataStore____query(arg_self, arg_name, arg_field);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "_query", 175, CPyStatic_metastore___globals);
    return NULL;
}

double CPyDef_metastore___SqliteMetadataStore___getmtime(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_mtime;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    double cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    double cpy_r_r10;
    cpy_r_r0 = CPyStatics[154]; /* 'mtime' */
    cpy_r_r1 = CPyDef_metastore___SqliteMetadataStore____query(cpy_r_self, cpy_r_name, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 188, CPyStatic_metastore___globals);
        goto CPyL8;
    }
    cpy_r_mtime = cpy_r_r1;
    cpy_r_r2 = (PyObject *)&PyFloat_Type;
    cpy_r_r3 = PyObject_IsInstance(cpy_r_mtime, cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 189, CPyStatic_metastore___globals);
        goto CPyL9;
    }
    cpy_r_r5 = cpy_r_r3;
    if (cpy_r_r5) {
        goto CPyL5;
    } else
        goto CPyL10;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 189, CPyStatic_metastore___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r7 = PyFloat_AsDouble(cpy_r_mtime);
    if (cpy_r_r7 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_mtime); cpy_r_r7 = -113.0;
    }
    CPy_DECREF(cpy_r_mtime);
    cpy_r_r8 = cpy_r_r7 == -113.0;
    if (unlikely(cpy_r_r8)) goto CPyL7;
CPyL6: ;
    return cpy_r_r7;
CPyL7: ;
    cpy_r_r9 = PyErr_Occurred();
    if (unlikely(cpy_r_r9 != NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "getmtime", 190, CPyStatic_metastore___globals);
    } else
        goto CPyL6;
CPyL8: ;
    cpy_r_r10 = -113.0;
    return cpy_r_r10;
CPyL9: ;
    CPy_DecRef(cpy_r_mtime);
    goto CPyL8;
CPyL10: ;
    CPy_DECREF(cpy_r_mtime);
    goto CPyL3;
}

PyObject *CPyPy_metastore___SqliteMetadataStore___getmtime(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:getmtime", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___SqliteMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.SqliteMetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    double retval = CPyDef_metastore___SqliteMetadataStore___getmtime(arg_self, arg_name);
    if (retval == -113.0 && PyErr_Occurred()) {
        return NULL;
    }
    PyObject *retbox = PyFloat_FromDouble(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "getmtime", 187, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___SqliteMetadataStore___read(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_data;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[671]; /* 'data' */
    cpy_r_r1 = CPyDef_metastore___SqliteMetadataStore____query(cpy_r_self, cpy_r_name, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 193, CPyStatic_metastore___globals);
        goto CPyL7;
    }
    cpy_r_data = cpy_r_r1;
    cpy_r_r2 = (PyObject *)&PyUnicode_Type;
    cpy_r_r3 = PyObject_IsInstance(cpy_r_data, cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 194, CPyStatic_metastore___globals);
        goto CPyL8;
    }
    cpy_r_r5 = cpy_r_r3;
    if (cpy_r_r5) {
        goto CPyL5;
    } else
        goto CPyL9;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/metastore.py", "read", 194, CPyStatic_metastore___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL5: ;
    if (likely(PyUnicode_Check(cpy_r_data)))
        cpy_r_r7 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypy/metastore.py", "read", 195, CPyStatic_metastore___globals, "str", cpy_r_data);
        goto CPyL7;
    }
    return cpy_r_r7;
CPyL7: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL8: ;
    CPy_DecRef(cpy_r_data);
    goto CPyL7;
CPyL9: ;
    CPy_DECREF(cpy_r_data);
    goto CPyL3;
}

PyObject *CPyPy_metastore___SqliteMetadataStore___read(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:read", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___SqliteMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.SqliteMetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_metastore___SqliteMetadataStore___read(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "read", 192, CPyStatic_metastore___globals);
    return NULL;
}

char CPyDef_metastore___SqliteMetadataStore___write(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_data, PyObject *cpy_r_mtime) {
    PyObject *cpy_r_r0;
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
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    double cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    double cpy_r_r32;
    char cpy_r_r33;
    tuple_T3OFO cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    tuple_T3OOO cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    if (cpy_r_mtime != NULL) goto CPyL31;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_mtime = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatic_metastore___globals;
    cpy_r_r2 = CPyModule_sqlite3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    if (cpy_r_r4) goto CPyL5;
    cpy_r_r5 = CPyStatics[3803]; /* 'sqlite3' */
    cpy_r_r6 = PyImport_Import(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 198, CPyStatic_metastore___globals);
        goto CPyL32;
    }
    CPyModule_sqlite3 = cpy_r_r6;
    CPy_INCREF(CPyModule_sqlite3);
    CPy_DECREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = CPyStatics[3803]; /* 'sqlite3' */
    cpy_r_r8 = PyImport_GetModuleDict();
    cpy_r_r9 = CPyStatics[3803]; /* 'sqlite3' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 198, CPyStatic_metastore___globals);
        goto CPyL32;
    }
    cpy_r_r11 = CPyDict_SetItem(cpy_r_r1, cpy_r_r7, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 198, CPyStatic_metastore___globals);
        goto CPyL32;
    }
    cpy_r_r13 = ((mypy___metastore___SqliteMetadataStoreObject *)cpy_r_self)->_db;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_r13 != cpy_r_r14;
    if (!cpy_r_r15) goto CPyL33;
    cpy_r_r16 = cpy_r_r13;
    cpy_r_r17 = PyObject_IsTrue(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 200, CPyStatic_metastore___globals);
        goto CPyL32;
    }
    cpy_r_r19 = cpy_r_r17;
    if (cpy_r_r19) {
        goto CPyL12;
    } else
        goto CPyL34;
CPyL11: ;
    return 0;
CPyL12: ;
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_mtime == cpy_r_r20;
    if (cpy_r_r21) {
        goto CPyL35;
    } else
        goto CPyL18;
CPyL13: ;
    cpy_r_r22 = CPyModule_time;
    cpy_r_r23 = CPyStatics[147]; /* 'time' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 204, CPyStatic_metastore___globals);
        goto CPyL22;
    }
    cpy_r_r25 = _PyObject_Vectorcall(cpy_r_r24, 0, 0, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 204, CPyStatic_metastore___globals);
        goto CPyL22;
    }
    cpy_r_r26 = PyFloat_AsDouble(cpy_r_r25);
    if (cpy_r_r26 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r25); cpy_r_r26 = -113.0;
    }
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 == -113.0;
    if (unlikely(cpy_r_r27)) goto CPyL17;
CPyL16: ;
    cpy_r_r28 = PyFloat_FromDouble(cpy_r_r26);
    cpy_r_mtime = cpy_r_r28;
    goto CPyL18;
CPyL17: ;
    cpy_r_r29 = PyErr_Occurred();
    if (unlikely(cpy_r_r29 != NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 204, CPyStatic_metastore___globals);
        goto CPyL22;
    } else
        goto CPyL16;
CPyL18: ;
    cpy_r_r30 = ((mypy___metastore___SqliteMetadataStoreObject *)cpy_r_self)->_db;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[3813]; /* ('INSERT OR REPLACE INTO files(path, mtime, data) '
                                     'VALUES(?, ?, ?)') */
    cpy_r_r32 = PyFloat_AsDouble(cpy_r_mtime);
    if (cpy_r_r32 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_mtime); cpy_r_r32 = -113.0;
    }
    CPy_DECREF(cpy_r_mtime);
    cpy_r_r33 = cpy_r_r32 == -113.0;
    if (unlikely(cpy_r_r33)) goto CPyL20;
CPyL19: ;
    cpy_r_r34.f0 = cpy_r_name;
    cpy_r_r34.f1 = cpy_r_r32;
    cpy_r_r34.f2 = cpy_r_data;
    CPy_INCREF(cpy_r_r34.f0);
    CPy_INCREF(cpy_r_r34.f2);
    cpy_r_r35 = cpy_r_r30;
    cpy_r_r36 = CPyStatics[3811]; /* 'execute' */
    cpy_r_r37 = PyTuple_New(3);
    if (unlikely(cpy_r_r37 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3465 = cpy_r_r34.f0;
    PyTuple_SET_ITEM(cpy_r_r37, 0, __tmp3465);
    PyObject *__tmp3466 = PyFloat_FromDouble(cpy_r_r34.f1);
    PyTuple_SET_ITEM(cpy_r_r37, 1, __tmp3466);
    PyObject *__tmp3467 = cpy_r_r34.f2;
    PyTuple_SET_ITEM(cpy_r_r37, 2, __tmp3467);
    PyObject *cpy_r_r38[3] = {cpy_r_r35, cpy_r_r31, cpy_r_r37};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = PyObject_VectorcallMethod(cpy_r_r36, cpy_r_r39, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 205, CPyStatic_metastore___globals);
        goto CPyL36;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r41 = PyErr_Occurred();
    if (unlikely(cpy_r_r41 != NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 207, CPyStatic_metastore___globals);
        goto CPyL37;
    } else
        goto CPyL19;
CPyL21: ;
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r42 = cpy_r_r40;
    CPy_DECREF(cpy_r_r42);
    goto CPyL29;
CPyL22: ;
    cpy_r_r43 = CPy_CatchError();
    cpy_r_r44 = CPyModule_sqlite3;
    cpy_r_r45 = CPyStatics[3807]; /* 'OperationalError' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "write", 209, CPyStatic_metastore___globals);
        goto CPyL27;
    }
    cpy_r_r47 = CPy_ExceptionMatches(cpy_r_r46);
    CPy_DecRef(cpy_r_r46);
    if (!cpy_r_r47) goto CPyL25;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    return 0;
CPyL25: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL27;
    } else
        goto CPyL38;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    cpy_r_r48 = CPy_KeepPropagating();
    if (!cpy_r_r48) goto CPyL30;
    CPy_Unreachable();
CPyL29: ;
    return 1;
CPyL30: ;
    cpy_r_r49 = 2;
    return cpy_r_r49;
CPyL31: ;
    CPy_INCREF(cpy_r_mtime);
    goto CPyL2;
CPyL32: ;
    CPy_DecRef(cpy_r_mtime);
    goto CPyL30;
CPyL33: ;
    CPy_DECREF(cpy_r_mtime);
    CPy_DECREF(cpy_r_r13);
    goto CPyL11;
CPyL34: ;
    CPy_DECREF(cpy_r_mtime);
    goto CPyL11;
CPyL35: ;
    CPy_DECREF(cpy_r_mtime);
    goto CPyL13;
CPyL36: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r37);
    goto CPyL22;
CPyL37: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL22;
CPyL38: ;
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL26;
}

PyObject *CPyPy_metastore___SqliteMetadataStore___write(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "data", "mtime", 0};
    static CPyArg_Parser parser = {"OO|O:write", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_data;
    PyObject *obj_mtime = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_data, &obj_mtime)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___SqliteMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.SqliteMetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_data;
    if (likely(PyUnicode_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("str", obj_data); 
        goto fail;
    }
    PyObject *arg_mtime;
    if (obj_mtime == NULL) {
        arg_mtime = NULL;
        goto __LL3468;
    }
    if (CPyFloat_Check(obj_mtime))
        arg_mtime = obj_mtime;
    else {
        arg_mtime = NULL;
    }
    if (arg_mtime != NULL) goto __LL3468;
    if (obj_mtime == Py_None)
        arg_mtime = obj_mtime;
    else {
        arg_mtime = NULL;
    }
    if (arg_mtime != NULL) goto __LL3468;
    CPy_TypeError("float or None", obj_mtime); 
    goto fail;
__LL3468: ;
    char retval = CPyDef_metastore___SqliteMetadataStore___write(arg_self, arg_name, arg_data, arg_mtime);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "write", 197, CPyStatic_metastore___globals);
    return NULL;
}

char CPyDef_metastore___SqliteMetadataStore___remove(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    tuple_T1O cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = ((mypy___metastore___SqliteMetadataStoreObject *)cpy_r_self)->_db;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL12;
    cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = PyObject_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/metastore.py", "remove", 214, CPyStatic_metastore___globals);
        goto CPyL11;
    }
    cpy_r_r6 = cpy_r_r4;
    if (cpy_r_r6) goto CPyL8;
CPyL4: ;
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[269]; /* 'FileNotFoundError' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "remove", 215, CPyStatic_metastore___globals);
        goto CPyL11;
    }
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_r9, 0, 0, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "remove", 215, CPyStatic_metastore___globals);
        goto CPyL11;
    }
    CPy_Raise(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/metastore.py", "remove", 215, CPyStatic_metastore___globals);
        goto CPyL11;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r11 = ((mypy___metastore___SqliteMetadataStoreObject *)cpy_r_self)->_db;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyStatics[3814]; /* 'DELETE FROM files WHERE path = ?' */
    cpy_r_r13.f0 = cpy_r_name;
    CPy_INCREF(cpy_r_r13.f0);
    cpy_r_r14 = cpy_r_r11;
    cpy_r_r15 = CPyStatics[3811]; /* 'execute' */
    cpy_r_r16 = PyTuple_New(1);
    if (unlikely(cpy_r_r16 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3469 = cpy_r_r13.f0;
    PyTuple_SET_ITEM(cpy_r_r16, 0, __tmp3469);
    PyObject *cpy_r_r17[3] = {cpy_r_r14, cpy_r_r12, cpy_r_r16};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_VectorcallMethod(cpy_r_r15, cpy_r_r18, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "remove", 217, CPyStatic_metastore___globals);
        goto CPyL13;
    }
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r20 = cpy_r_r19;
    CPy_DECREF(cpy_r_r20);
    return 1;
CPyL11: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL12: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
CPyL13: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    goto CPyL11;
}

PyObject *CPyPy_metastore___SqliteMetadataStore___remove(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:remove", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___SqliteMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.SqliteMetadataStore", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_metastore___SqliteMetadataStore___remove(arg_self, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "remove", 213, CPyStatic_metastore___globals);
    return NULL;
}

char CPyDef_metastore___SqliteMetadataStore___commit(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypy___metastore___SqliteMetadataStoreObject *)cpy_r_self)->_db;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL9;
    cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = PyObject_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/metastore.py", "commit", 220, CPyStatic_metastore___globals);
        goto CPyL8;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL7;
    cpy_r_r7 = ((mypy___metastore___SqliteMetadataStoreObject *)cpy_r_self)->_db;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = cpy_r_r7;
    cpy_r_r9 = CPyStatics[3815]; /* 'commit' */
    PyObject *cpy_r_r10[1] = {cpy_r_r8};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r9, cpy_r_r11, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "commit", 221, CPyStatic_metastore___globals);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r12 != Py_None)) {
        CPy_TypeError("None", cpy_r_r12); cpy_r_r13 = 2;
    } else
        cpy_r_r13 = 1;
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/metastore.py", "commit", 221, CPyStatic_metastore___globals);
        goto CPyL8;
    }
    cpy_r_r14 = cpy_r_r13;
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL9: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL8;
}

PyObject *CPyPy_metastore___SqliteMetadataStore___commit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":commit", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___SqliteMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.SqliteMetadataStore", obj_self); 
        goto fail;
    }
    char retval = CPyDef_metastore___SqliteMetadataStore___commit(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "commit", 219, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___list_all_SqliteMetadataStore_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    int64_t cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    int64_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    cpy_r_r0 = ((mypy___metastore___list_all_SqliteMetadataStore_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_SqliteMetadataStore_gen", "__mypyc_env__", 223, CPyStatic_metastore___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_SqliteMetadataStore_env", "__mypyc_next_label__", 223, CPyStatic_metastore___globals);
        goto CPyL41;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL30;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL42;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 223, CPyStatic_metastore___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_SqliteMetadataStore_env", "self", 224, CPyStatic_metastore___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___metastore___SqliteMetadataStoreObject *)cpy_r_r4)->_db;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 != cpy_r_r6;
    if (!cpy_r_r7) goto CPyL43;
    cpy_r_r8 = cpy_r_r5;
    cpy_r_r9 = PyObject_IsTrue(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 224, CPyStatic_metastore___globals);
        goto CPyL41;
    }
    cpy_r_r11 = cpy_r_r9;
    if (!cpy_r_r11) goto CPyL27;
    cpy_r_r12 = ((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_SqliteMetadataStore_env", "self", 225, CPyStatic_metastore___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r12);
CPyL11: ;
    cpy_r_r13 = ((mypy___metastore___SqliteMetadataStoreObject *)cpy_r_r12)->_db;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = CPyStatics[3816]; /* 'SELECT path FROM files' */
    cpy_r_r15 = cpy_r_r13;
    cpy_r_r16 = CPyStatics[3811]; /* 'execute' */
    PyObject *cpy_r_r17[2] = {cpy_r_r15, cpy_r_r14};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_VectorcallMethod(cpy_r_r16, cpy_r_r18, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 225, CPyStatic_metastore___globals);
        goto CPyL44;
    }
    CPy_DECREF(cpy_r_r15);
    cpy_r_r20 = cpy_r_r19;
    cpy_r_r21 = PyObject_GetIter(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 225, CPyStatic_metastore___globals);
        goto CPyL45;
    }
    if (((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__4);
    }
    ((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__4 = cpy_r_r20;
    cpy_r_r22 = 1;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", -1, CPyStatic_metastore___globals);
        goto CPyL46;
    }
    if (((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__5 != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__5);
    }
    ((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__5 = cpy_r_r21;
    cpy_r_r23 = 1;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", -1, CPyStatic_metastore___globals);
        goto CPyL41;
    }
CPyL16: ;
    cpy_r_r24 = ((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_temp__5;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_SqliteMetadataStore_env", "__mypyc_temp__5", 225, CPyStatic_metastore___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r24);
CPyL17: ;
    cpy_r_r25 = PyIter_Next(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (cpy_r_r25 == NULL) goto CPyL26;
    if (((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->_row != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->_row);
    }
    ((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->_row = cpy_r_r25;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 225, CPyStatic_metastore___globals);
        goto CPyL41;
    }
    cpy_r_r27 = ((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->_row;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/metastore.py", "list_all", "list_all_SqliteMetadataStore_env", "row", 226, CPyStatic_metastore___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r27);
CPyL20: ;
    cpy_r_r28 = CPyStatics[9015]; /* 0 */
    cpy_r_r29 = PyObject_GetItem(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 226, CPyStatic_metastore___globals);
        goto CPyL41;
    }
    if (((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r30 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 226, CPyStatic_metastore___globals);
        goto CPyL47;
    }
    return cpy_r_r29;
CPyL23: ;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_type != cpy_r_r31;
    if (cpy_r_r32) {
        goto CPyL48;
    } else
        goto CPyL16;
CPyL24: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 226, CPyStatic_metastore___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r33 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 225, CPyStatic_metastore___globals);
        goto CPyL41;
    }
CPyL27: ;
    cpy_r_r34 = Py_None;
    if (((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r35 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 223, CPyStatic_metastore___globals);
        goto CPyL40;
    }
    CPyGen_SetStopIterationValue(cpy_r_r34);
    if (!0) goto CPyL40;
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r36 = cpy_r_r1 & 1;
    cpy_r_r37 = cpy_r_r36 == 0;
    if (!cpy_r_r37) goto CPyL32;
    cpy_r_r38 = cpy_r_r1 == 0;
    cpy_r_r39 = cpy_r_r38;
    goto CPyL33;
CPyL32: ;
    cpy_r_r40 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r39 = cpy_r_r40;
CPyL33: ;
    if (cpy_r_r39) goto CPyL49;
    cpy_r_r41 = cpy_r_r1 & 1;
    cpy_r_r42 = cpy_r_r41 == 0;
    if (!cpy_r_r42) goto CPyL36;
    cpy_r_r43 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r44 = cpy_r_r43;
    goto CPyL37;
CPyL36: ;
    cpy_r_r45 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r44 = cpy_r_r45;
CPyL37: ;
    if (cpy_r_r44) {
        goto CPyL23;
    } else
        goto CPyL50;
CPyL38: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 223, CPyStatic_metastore___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r47 = NULL;
    return cpy_r_r47;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL40;
CPyL42: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL43: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL27;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r15);
    goto CPyL40;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r20);
    goto CPyL40;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    goto CPyL40;
CPyL47: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL40;
CPyL48: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL24;
CPyL49: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL50: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL38;
}

PyObject *CPyPy_metastore___list_all_SqliteMetadataStore_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_metastore___list_all_SqliteMetadataStore_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "list_all", 223, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___list_all_SqliteMetadataStore_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_metastore___list_all_SqliteMetadataStore_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_metastore___list_all_SqliteMetadataStore_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_metastore___list_all_SqliteMetadataStore_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.metastore.list_all_SqliteMetadataStore_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_metastore___list_all_SqliteMetadataStore_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "__next__", -1, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___list_all_SqliteMetadataStore_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_metastore___list_all_SqliteMetadataStore_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_metastore___list_all_SqliteMetadataStore_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_metastore___list_all_SqliteMetadataStore_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.metastore.list_all_SqliteMetadataStore_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_metastore___list_all_SqliteMetadataStore_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "send", -1, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___list_all_SqliteMetadataStore_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_metastore___list_all_SqliteMetadataStore_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_metastore___list_all_SqliteMetadataStore_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.metastore.list_all_SqliteMetadataStore_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_metastore___list_all_SqliteMetadataStore_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "__iter__", -1, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___list_all_SqliteMetadataStore_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_metastore___list_all_SqliteMetadataStore_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_metastore___list_all_SqliteMetadataStore_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_metastore___list_all_SqliteMetadataStore_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.metastore.list_all_SqliteMetadataStore_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_metastore___list_all_SqliteMetadataStore_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "throw", -1, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___list_all_SqliteMetadataStore_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_metastore___list_all_SqliteMetadataStore_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp3470 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp3470);
    PyObject *__tmp3471 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp3471);
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

PyObject *CPyPy_metastore___list_all_SqliteMetadataStore_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_metastore___list_all_SqliteMetadataStore_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.metastore.list_all_SqliteMetadataStore_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_metastore___list_all_SqliteMetadataStore_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "close", -1, CPyStatic_metastore___globals);
    return NULL;
}

PyObject *CPyDef_metastore___SqliteMetadataStore___list_all(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_metastore___list_all_SqliteMetadataStore_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 223, CPyStatic_metastore___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 223, CPyStatic_metastore___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_metastore___list_all_SqliteMetadataStore_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 223, CPyStatic_metastore___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___metastore___list_all_SqliteMetadataStore_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___metastore___list_all_SqliteMetadataStore_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___metastore___list_all_SqliteMetadataStore_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 223, CPyStatic_metastore___globals);
        goto CPyL8;
    }
    if (((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___metastore___list_all_SqliteMetadataStore_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/metastore.py", "list_all", 223, CPyStatic_metastore___globals);
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

PyObject *CPyPy_metastore___SqliteMetadataStore___list_all(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":list_all", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_metastore___SqliteMetadataStore))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.metastore.SqliteMetadataStore", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_metastore___SqliteMetadataStore___list_all(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/metastore.py", "list_all", 223, CPyStatic_metastore___globals);
    return NULL;
}

char CPyDef_metastore_____top_level__(void) {
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
    void *cpy_r_r13;
    void *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
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
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", -1, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_metastore___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 11, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_binascii;
    cpy_r_r10 = (PyObject **)&CPyModule_os;
    cpy_r_r11 = (PyObject **)&CPyModule_time;
    PyObject **cpy_r_r12[3] = {cpy_r_r9, cpy_r_r10, cpy_r_r11};
    cpy_r_r13 = (void *)&cpy_r_r12;
    int64_t cpy_r_r14[3] = {13, 14, 15};
    cpy_r_r15 = (void *)&cpy_r_r14;
    cpy_r_r16 = CPyStatics[9526]; /* (('binascii', 'binascii', 'binascii'),
                                     ('os', 'os', 'os'), ('time', 'time', 'time')) */
    cpy_r_r17 = CPyStatic_metastore___globals;
    cpy_r_r18 = CPyStatics[3818]; /* 'mypy/metastore.py' */
    cpy_r_r19 = CPyStatics[17]; /* '<module>' */
    cpy_r_r20 = CPyImport_ImportMany(cpy_r_r16, cpy_r_r13, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r15);
    if (!cpy_r_r20) goto CPyL31;
    cpy_r_r21 = CPyStatics[9527]; /* ('abstractmethod',) */
    cpy_r_r22 = CPyStatics[602]; /* 'abc' */
    cpy_r_r23 = CPyStatic_metastore___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 16, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    CPyModule_abc = cpy_r_r24;
    CPy_INCREF(CPyModule_abc);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9528]; /* ('TYPE_CHECKING', 'Any', 'Iterable') */
    cpy_r_r26 = CPyStatics[21]; /* 'typing' */
    cpy_r_r27 = CPyStatic_metastore___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 17, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    CPyModule_typing = cpy_r_r28;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatic_metastore___globals;
    cpy_r_r30 = CPyStatics[58]; /* 'TYPE_CHECKING' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 19, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    if (unlikely(!PyBool_Check(cpy_r_r31))) {
        CPy_TypeError("bool", cpy_r_r31); cpy_r_r32 = 2;
    } else
        cpy_r_r32 = cpy_r_r31 == Py_True;
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 19, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    cpy_r_r33 = NULL;
    cpy_r_r34 = CPyStatics[568]; /* 'mypy.metastore' */
    cpy_r_r35 = (PyObject *)CPyType_metastore___MetadataStore_template;
    cpy_r_r36 = CPyType_FromTemplate(cpy_r_r35, cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 25, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    cpy_r_r37 = CPyDef_metastore___MetadataStore_trait_vtable_setup();
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", -1, CPyStatic_metastore___globals);
        goto CPyL32;
    }
    cpy_r_r38 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r39 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 25, CPyStatic_metastore___globals);
        goto CPyL32;
    }
    cpy_r_r40 = PyObject_SetAttr(cpy_r_r36, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 25, CPyStatic_metastore___globals);
        goto CPyL32;
    }
    CPyType_metastore___MetadataStore = (PyTypeObject *)cpy_r_r36;
    CPy_INCREF(CPyType_metastore___MetadataStore);
    cpy_r_r42 = CPyStatic_metastore___globals;
    cpy_r_r43 = CPyStatics[566]; /* 'MetadataStore' */
    cpy_r_r44 = CPyDict_SetItem(cpy_r_r42, cpy_r_r43, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 25, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    cpy_r_r46 = (PyObject *)CPyType_metastore___MetadataStore;
    cpy_r_r47 = PyTuple_Pack(1, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 74, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    cpy_r_r48 = CPyStatics[568]; /* 'mypy.metastore' */
    cpy_r_r49 = (PyObject *)CPyType_metastore___FilesystemMetadataStore_template;
    cpy_r_r50 = CPyType_FromTemplate(cpy_r_r49, cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 74, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    cpy_r_r51 = CPyDef_metastore___FilesystemMetadataStore_trait_vtable_setup();
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", -1, CPyStatic_metastore___globals);
        goto CPyL33;
    }
    cpy_r_r52 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r53 = CPyStatics[3820]; /* 'cache_dir_prefix' */
    cpy_r_r54 = PyTuple_Pack(1, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 74, CPyStatic_metastore___globals);
        goto CPyL33;
    }
    cpy_r_r55 = PyObject_SetAttr(cpy_r_r50, cpy_r_r52, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 74, CPyStatic_metastore___globals);
        goto CPyL33;
    }
    CPyType_metastore___FilesystemMetadataStore = (PyTypeObject *)cpy_r_r50;
    CPy_INCREF(CPyType_metastore___FilesystemMetadataStore);
    cpy_r_r57 = CPyStatic_metastore___globals;
    cpy_r_r58 = CPyStatics[565]; /* 'FilesystemMetadataStore' */
    cpy_r_r59 = CPyDict_SetItem(cpy_r_r57, cpy_r_r58, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 74, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    cpy_r_r61 = CPyStatics[3821]; /* ('\n'
                                     'CREATE TABLE IF NOT EXISTS files (\n'
                                     '    path TEXT UNIQUE NOT NULL,\n'
                                     '    mtime REAL,\n'
                                     '    data TEXT\n'
                                     ');\n'
                                     'CREATE INDEX IF NOT EXISTS path_idx on files(path);\n') */
    cpy_r_r62 = CPyStatic_metastore___globals;
    cpy_r_r63 = CPyStatics[3804]; /* 'SCHEMA' */
    cpy_r_r64 = CPyDict_SetItem(cpy_r_r62, cpy_r_r63, cpy_r_r61);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 138, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    cpy_r_r66 = PyList_New(0);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 147, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    cpy_r_r67 = CPyStatic_metastore___globals;
    cpy_r_r68 = CPyStatics[3806]; /* 'MIGRATIONS' */
    cpy_r_r69 = CPyDict_SetItem(cpy_r_r67, cpy_r_r68, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 147, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    cpy_r_r71 = (PyObject *)CPyType_metastore___MetadataStore;
    cpy_r_r72 = PyTuple_Pack(1, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 163, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    cpy_r_r73 = CPyStatics[568]; /* 'mypy.metastore' */
    cpy_r_r74 = (PyObject *)CPyType_metastore___SqliteMetadataStore_template;
    cpy_r_r75 = CPyType_FromTemplate(cpy_r_r74, cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 163, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    cpy_r_r76 = CPyDef_metastore___SqliteMetadataStore_trait_vtable_setup();
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", -1, CPyStatic_metastore___globals);
        goto CPyL34;
    }
    cpy_r_r77 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r78 = CPyStatics[3822]; /* 'db' */
    cpy_r_r79 = PyTuple_Pack(1, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 163, CPyStatic_metastore___globals);
        goto CPyL34;
    }
    cpy_r_r80 = PyObject_SetAttr(cpy_r_r75, cpy_r_r77, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 163, CPyStatic_metastore___globals);
        goto CPyL34;
    }
    CPyType_metastore___SqliteMetadataStore = (PyTypeObject *)cpy_r_r75;
    CPy_INCREF(CPyType_metastore___SqliteMetadataStore);
    cpy_r_r82 = CPyStatic_metastore___globals;
    cpy_r_r83 = CPyStatics[567]; /* 'SqliteMetadataStore' */
    cpy_r_r84 = CPyDict_SetItem(cpy_r_r82, cpy_r_r83, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/metastore.py", "<module>", 163, CPyStatic_metastore___globals);
        goto CPyL31;
    }
    return 1;
CPyL31: ;
    cpy_r_r86 = 2;
    return cpy_r_r86;
CPyL32: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL31;
CPyL34: ;
    CPy_DecRef(cpy_r_r75);
    goto CPyL31;
}
