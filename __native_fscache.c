#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
fscache___FileSystemCache_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return CPyPy_fscache___FileSystemCache_____init__(self, args, kwds) != NULL ? 0 : -1;
}
static PyObject *fscache___FileSystemCache_setup(PyTypeObject *type);
PyObject *CPyDef_fscache___FileSystemCache(void);

static PyObject *
fscache___FileSystemCache_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    return fscache___FileSystemCache_setup(type);
}

static int
fscache___FileSystemCache_traverse(mypy___fscache___FileSystemCacheObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_package_root);
    Py_VISIT(self->_stat_cache);
    Py_VISIT(self->_stat_error_cache);
    Py_VISIT(self->_listdir_cache);
    Py_VISIT(self->_listdir_error_cache);
    Py_VISIT(self->_isfile_case_cache);
    Py_VISIT(self->_exists_case_cache);
    Py_VISIT(self->_read_cache);
    Py_VISIT(self->_read_error_cache);
    Py_VISIT(self->_hash_cache);
    Py_VISIT(self->_fake_package_cache);
    return 0;
}

static int
fscache___FileSystemCache_clear(mypy___fscache___FileSystemCacheObject *self)
{
    Py_CLEAR(self->_package_root);
    Py_CLEAR(self->_stat_cache);
    Py_CLEAR(self->_stat_error_cache);
    Py_CLEAR(self->_listdir_cache);
    Py_CLEAR(self->_listdir_error_cache);
    Py_CLEAR(self->_isfile_case_cache);
    Py_CLEAR(self->_exists_case_cache);
    Py_CLEAR(self->_read_cache);
    Py_CLEAR(self->_read_error_cache);
    Py_CLEAR(self->_hash_cache);
    Py_CLEAR(self->_fake_package_cache);
    return 0;
}

static void
fscache___FileSystemCache_dealloc(mypy___fscache___FileSystemCacheObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, fscache___FileSystemCache_dealloc)
    fscache___FileSystemCache_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem fscache___FileSystemCache_vtable_shadow[15];
static bool
CPyDef_fscache___FileSystemCache_trait_vtable_setup_shadow(void)
{
    CPyVTableItem fscache___FileSystemCache_vtable_shadow_scratch[] = {
        (CPyVTableItem)CPyDef_fscache___FileSystemCache_____init___3__FileSystemCache_glue,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___set_package_root__FileSystemCache_glue,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___flush__FileSystemCache_glue,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___stat__FileSystemCache_glue,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___init_under_package_root__FileSystemCache_glue,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache____fake_init__FileSystemCache_glue,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___listdir__FileSystemCache_glue,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___isfile__FileSystemCache_glue,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___isfile_case__FileSystemCache_glue,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___exists_case__FileSystemCache_glue,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___isdir__FileSystemCache_glue,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___exists__FileSystemCache_glue,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___read__FileSystemCache_glue,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___hash_digest__FileSystemCache_glue,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___samefile__FileSystemCache_glue,
    };
    memcpy(fscache___FileSystemCache_vtable_shadow, fscache___FileSystemCache_vtable_shadow_scratch, sizeof(fscache___FileSystemCache_vtable_shadow));
    return 1;
}

static CPyVTableItem fscache___FileSystemCache_vtable[15];
static bool
CPyDef_fscache___FileSystemCache_trait_vtable_setup(void)
{
    CPyDef_fscache___FileSystemCache_trait_vtable_setup_shadow();
    CPyVTableItem fscache___FileSystemCache_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_fscache___FileSystemCache_____init__,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___set_package_root,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___flush,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___stat,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___init_under_package_root,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache____fake_init,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___listdir,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___isfile,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___isfile_case,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___exists_case,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___isdir,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___exists,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___read,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___hash_digest,
        (CPyVTableItem)CPyDef_fscache___FileSystemCache___samefile,
    };
    memcpy(fscache___FileSystemCache_vtable, fscache___FileSystemCache_vtable_scratch, sizeof(fscache___FileSystemCache_vtable));
    return 1;
}

static PyObject *
fscache___FileSystemCache_get_package_root(mypy___fscache___FileSystemCacheObject *self, void *closure);
static int
fscache___FileSystemCache_set_package_root(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure);
static PyObject *
fscache___FileSystemCache_get_stat_cache(mypy___fscache___FileSystemCacheObject *self, void *closure);
static int
fscache___FileSystemCache_set_stat_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure);
static PyObject *
fscache___FileSystemCache_get_stat_error_cache(mypy___fscache___FileSystemCacheObject *self, void *closure);
static int
fscache___FileSystemCache_set_stat_error_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure);
static PyObject *
fscache___FileSystemCache_get_listdir_cache(mypy___fscache___FileSystemCacheObject *self, void *closure);
static int
fscache___FileSystemCache_set_listdir_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure);
static PyObject *
fscache___FileSystemCache_get_listdir_error_cache(mypy___fscache___FileSystemCacheObject *self, void *closure);
static int
fscache___FileSystemCache_set_listdir_error_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure);
static PyObject *
fscache___FileSystemCache_get_isfile_case_cache(mypy___fscache___FileSystemCacheObject *self, void *closure);
static int
fscache___FileSystemCache_set_isfile_case_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure);
static PyObject *
fscache___FileSystemCache_get_exists_case_cache(mypy___fscache___FileSystemCacheObject *self, void *closure);
static int
fscache___FileSystemCache_set_exists_case_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure);
static PyObject *
fscache___FileSystemCache_get_read_cache(mypy___fscache___FileSystemCacheObject *self, void *closure);
static int
fscache___FileSystemCache_set_read_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure);
static PyObject *
fscache___FileSystemCache_get_read_error_cache(mypy___fscache___FileSystemCacheObject *self, void *closure);
static int
fscache___FileSystemCache_set_read_error_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure);
static PyObject *
fscache___FileSystemCache_get_hash_cache(mypy___fscache___FileSystemCacheObject *self, void *closure);
static int
fscache___FileSystemCache_set_hash_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure);
static PyObject *
fscache___FileSystemCache_get_fake_package_cache(mypy___fscache___FileSystemCacheObject *self, void *closure);
static int
fscache___FileSystemCache_set_fake_package_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure);

static PyGetSetDef fscache___FileSystemCache_getseters[] = {
    {"package_root",
     (getter)fscache___FileSystemCache_get_package_root, (setter)fscache___FileSystemCache_set_package_root,
     NULL, NULL},
    {"stat_cache",
     (getter)fscache___FileSystemCache_get_stat_cache, (setter)fscache___FileSystemCache_set_stat_cache,
     NULL, NULL},
    {"stat_error_cache",
     (getter)fscache___FileSystemCache_get_stat_error_cache, (setter)fscache___FileSystemCache_set_stat_error_cache,
     NULL, NULL},
    {"listdir_cache",
     (getter)fscache___FileSystemCache_get_listdir_cache, (setter)fscache___FileSystemCache_set_listdir_cache,
     NULL, NULL},
    {"listdir_error_cache",
     (getter)fscache___FileSystemCache_get_listdir_error_cache, (setter)fscache___FileSystemCache_set_listdir_error_cache,
     NULL, NULL},
    {"isfile_case_cache",
     (getter)fscache___FileSystemCache_get_isfile_case_cache, (setter)fscache___FileSystemCache_set_isfile_case_cache,
     NULL, NULL},
    {"exists_case_cache",
     (getter)fscache___FileSystemCache_get_exists_case_cache, (setter)fscache___FileSystemCache_set_exists_case_cache,
     NULL, NULL},
    {"read_cache",
     (getter)fscache___FileSystemCache_get_read_cache, (setter)fscache___FileSystemCache_set_read_cache,
     NULL, NULL},
    {"read_error_cache",
     (getter)fscache___FileSystemCache_get_read_error_cache, (setter)fscache___FileSystemCache_set_read_error_cache,
     NULL, NULL},
    {"hash_cache",
     (getter)fscache___FileSystemCache_get_hash_cache, (setter)fscache___FileSystemCache_set_hash_cache,
     NULL, NULL},
    {"fake_package_cache",
     (getter)fscache___FileSystemCache_get_fake_package_cache, (setter)fscache___FileSystemCache_set_fake_package_cache,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef fscache___FileSystemCache_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_fscache___FileSystemCache_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"set_package_root",
     (PyCFunction)CPyPy_fscache___FileSystemCache___set_package_root,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"flush",
     (PyCFunction)CPyPy_fscache___FileSystemCache___flush,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"stat",
     (PyCFunction)CPyPy_fscache___FileSystemCache___stat,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"init_under_package_root",
     (PyCFunction)CPyPy_fscache___FileSystemCache___init_under_package_root,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_fake_init",
     (PyCFunction)CPyPy_fscache___FileSystemCache____fake_init,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"listdir",
     (PyCFunction)CPyPy_fscache___FileSystemCache___listdir,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"isfile",
     (PyCFunction)CPyPy_fscache___FileSystemCache___isfile,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"isfile_case",
     (PyCFunction)CPyPy_fscache___FileSystemCache___isfile_case,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"exists_case",
     (PyCFunction)CPyPy_fscache___FileSystemCache___exists_case,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"isdir",
     (PyCFunction)CPyPy_fscache___FileSystemCache___isdir,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"exists",
     (PyCFunction)CPyPy_fscache___FileSystemCache___exists,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"read",
     (PyCFunction)CPyPy_fscache___FileSystemCache___read,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"hash_digest",
     (PyCFunction)CPyPy_fscache___FileSystemCache___hash_digest,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"samefile",
     (PyCFunction)CPyPy_fscache___FileSystemCache___samefile,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_fscache___FileSystemCache_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FileSystemCache",
    .tp_new = fscache___FileSystemCache_new,
    .tp_dealloc = (destructor)fscache___FileSystemCache_dealloc,
    .tp_traverse = (traverseproc)fscache___FileSystemCache_traverse,
    .tp_clear = (inquiry)fscache___FileSystemCache_clear,
    .tp_getset = fscache___FileSystemCache_getseters,
    .tp_methods = fscache___FileSystemCache_methods,
    .tp_init = fscache___FileSystemCache_init,
    .tp_basicsize = sizeof(mypy___fscache___FileSystemCacheObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_fscache___FileSystemCache_template = &CPyType_fscache___FileSystemCache_template_;

static PyObject *
fscache___FileSystemCache_setup(PyTypeObject *type)
{
    mypy___fscache___FileSystemCacheObject *self;
    self = (mypy___fscache___FileSystemCacheObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    if (type != CPyType_fscache___FileSystemCache) {
        self->vtable = fscache___FileSystemCache_vtable_shadow;
    } else {
        self->vtable = fscache___FileSystemCache_vtable;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_fscache___FileSystemCache(void)
{
    PyObject *self = fscache___FileSystemCache_setup(CPyType_fscache___FileSystemCache);
    if (self == NULL)
        return NULL;
    char res = CPyDef_fscache___FileSystemCache_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
fscache___FileSystemCache_get_package_root(mypy___fscache___FileSystemCacheObject *self, void *closure)
{
    if (unlikely(self->_package_root == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'package_root' of 'FileSystemCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_package_root);
    PyObject *retval = self->_package_root;
    return retval;
}

static int
fscache___FileSystemCache_set_package_root(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FileSystemCache' object attribute 'package_root' cannot be deleted");
        return -1;
    }
    if (self->_package_root != NULL) {
        CPy_DECREF(self->_package_root);
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
    self->_package_root = tmp;
    return 0;
}

static PyObject *
fscache___FileSystemCache_get_stat_cache(mypy___fscache___FileSystemCacheObject *self, void *closure)
{
    if (unlikely(self->_stat_cache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'stat_cache' of 'FileSystemCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_stat_cache);
    PyObject *retval = self->_stat_cache;
    return retval;
}

static int
fscache___FileSystemCache_set_stat_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FileSystemCache' object attribute 'stat_cache' cannot be deleted");
        return -1;
    }
    if (self->_stat_cache != NULL) {
        CPy_DECREF(self->_stat_cache);
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
    self->_stat_cache = tmp;
    return 0;
}

static PyObject *
fscache___FileSystemCache_get_stat_error_cache(mypy___fscache___FileSystemCacheObject *self, void *closure)
{
    if (unlikely(self->_stat_error_cache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'stat_error_cache' of 'FileSystemCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_stat_error_cache);
    PyObject *retval = self->_stat_error_cache;
    return retval;
}

static int
fscache___FileSystemCache_set_stat_error_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FileSystemCache' object attribute 'stat_error_cache' cannot be deleted");
        return -1;
    }
    if (self->_stat_error_cache != NULL) {
        CPy_DECREF(self->_stat_error_cache);
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
    self->_stat_error_cache = tmp;
    return 0;
}

static PyObject *
fscache___FileSystemCache_get_listdir_cache(mypy___fscache___FileSystemCacheObject *self, void *closure)
{
    if (unlikely(self->_listdir_cache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'listdir_cache' of 'FileSystemCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_listdir_cache);
    PyObject *retval = self->_listdir_cache;
    return retval;
}

static int
fscache___FileSystemCache_set_listdir_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FileSystemCache' object attribute 'listdir_cache' cannot be deleted");
        return -1;
    }
    if (self->_listdir_cache != NULL) {
        CPy_DECREF(self->_listdir_cache);
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
    self->_listdir_cache = tmp;
    return 0;
}

static PyObject *
fscache___FileSystemCache_get_listdir_error_cache(mypy___fscache___FileSystemCacheObject *self, void *closure)
{
    if (unlikely(self->_listdir_error_cache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'listdir_error_cache' of 'FileSystemCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_listdir_error_cache);
    PyObject *retval = self->_listdir_error_cache;
    return retval;
}

static int
fscache___FileSystemCache_set_listdir_error_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FileSystemCache' object attribute 'listdir_error_cache' cannot be deleted");
        return -1;
    }
    if (self->_listdir_error_cache != NULL) {
        CPy_DECREF(self->_listdir_error_cache);
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
    self->_listdir_error_cache = tmp;
    return 0;
}

static PyObject *
fscache___FileSystemCache_get_isfile_case_cache(mypy___fscache___FileSystemCacheObject *self, void *closure)
{
    if (unlikely(self->_isfile_case_cache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'isfile_case_cache' of 'FileSystemCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_isfile_case_cache);
    PyObject *retval = self->_isfile_case_cache;
    return retval;
}

static int
fscache___FileSystemCache_set_isfile_case_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FileSystemCache' object attribute 'isfile_case_cache' cannot be deleted");
        return -1;
    }
    if (self->_isfile_case_cache != NULL) {
        CPy_DECREF(self->_isfile_case_cache);
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
    self->_isfile_case_cache = tmp;
    return 0;
}

static PyObject *
fscache___FileSystemCache_get_exists_case_cache(mypy___fscache___FileSystemCacheObject *self, void *closure)
{
    if (unlikely(self->_exists_case_cache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'exists_case_cache' of 'FileSystemCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_exists_case_cache);
    PyObject *retval = self->_exists_case_cache;
    return retval;
}

static int
fscache___FileSystemCache_set_exists_case_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FileSystemCache' object attribute 'exists_case_cache' cannot be deleted");
        return -1;
    }
    if (self->_exists_case_cache != NULL) {
        CPy_DECREF(self->_exists_case_cache);
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
    self->_exists_case_cache = tmp;
    return 0;
}

static PyObject *
fscache___FileSystemCache_get_read_cache(mypy___fscache___FileSystemCacheObject *self, void *closure)
{
    if (unlikely(self->_read_cache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'read_cache' of 'FileSystemCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_read_cache);
    PyObject *retval = self->_read_cache;
    return retval;
}

static int
fscache___FileSystemCache_set_read_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FileSystemCache' object attribute 'read_cache' cannot be deleted");
        return -1;
    }
    if (self->_read_cache != NULL) {
        CPy_DECREF(self->_read_cache);
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
    self->_read_cache = tmp;
    return 0;
}

static PyObject *
fscache___FileSystemCache_get_read_error_cache(mypy___fscache___FileSystemCacheObject *self, void *closure)
{
    if (unlikely(self->_read_error_cache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'read_error_cache' of 'FileSystemCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_read_error_cache);
    PyObject *retval = self->_read_error_cache;
    return retval;
}

static int
fscache___FileSystemCache_set_read_error_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FileSystemCache' object attribute 'read_error_cache' cannot be deleted");
        return -1;
    }
    if (self->_read_error_cache != NULL) {
        CPy_DECREF(self->_read_error_cache);
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
    self->_read_error_cache = tmp;
    return 0;
}

static PyObject *
fscache___FileSystemCache_get_hash_cache(mypy___fscache___FileSystemCacheObject *self, void *closure)
{
    if (unlikely(self->_hash_cache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'hash_cache' of 'FileSystemCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_hash_cache);
    PyObject *retval = self->_hash_cache;
    return retval;
}

static int
fscache___FileSystemCache_set_hash_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FileSystemCache' object attribute 'hash_cache' cannot be deleted");
        return -1;
    }
    if (self->_hash_cache != NULL) {
        CPy_DECREF(self->_hash_cache);
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
    self->_hash_cache = tmp;
    return 0;
}

static PyObject *
fscache___FileSystemCache_get_fake_package_cache(mypy___fscache___FileSystemCacheObject *self, void *closure)
{
    if (unlikely(self->_fake_package_cache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fake_package_cache' of 'FileSystemCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fake_package_cache);
    PyObject *retval = self->_fake_package_cache;
    return retval;
}

static int
fscache___FileSystemCache_set_fake_package_cache(mypy___fscache___FileSystemCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FileSystemCache' object attribute 'fake_package_cache' cannot be deleted");
        return -1;
    }
    if (self->_fake_package_cache != NULL) {
        CPy_DECREF(self->_fake_package_cache);
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
    self->_fake_package_cache = tmp;
    return 0;
}
static PyMethodDef fscachemodule_methods[] = {
    {"copy_os_error", (PyCFunction)CPyPy_fscache___copy_os_error, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef fscachemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.fscache",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    fscachemodule_methods
};

PyObject *CPyInit_mypy___fscache(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___fscache_internal) {
        Py_INCREF(CPyModule_mypy___fscache_internal);
        return CPyModule_mypy___fscache_internal;
    }
    CPyModule_mypy___fscache_internal = PyModule_Create(&fscachemodule);
    if (unlikely(CPyModule_mypy___fscache_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___fscache_internal, "__name__");
    CPyStatic_fscache___globals = PyModule_GetDict(CPyModule_mypy___fscache_internal);
    if (unlikely(CPyStatic_fscache___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_fscache_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___fscache_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___fscache_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_fscache___FileSystemCache);
    return NULL;
}

char CPyDef_fscache___FileSystemCache_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "__init__", 46, CPyStatic_fscache___globals);
        goto CPyL4;
    }
    if (((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_package_root != NULL) {
        CPy_DECREF(((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_package_root);
    }
    ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_package_root = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/fscache.py", "__init__", 46, CPyStatic_fscache___globals);
        goto CPyL4;
    }
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 2, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *))(cpy_r_self); /* flush */
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "__init__", 47, CPyStatic_fscache___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_fscache___FileSystemCache_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "__init__", 43, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache_____init___3__FileSystemCache_glue(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[288]; /* '__init__' */
    PyObject *cpy_r_r1[1] = {cpy_r_self};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (unlikely(cpy_r_r3 != Py_None)) {
        CPy_TypeError("None", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4 == 2) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache_____init___3__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__init____FileSystemCache_glue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache_____init___3__FileSystemCache_glue(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "__init____FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___set_package_root(PyObject *cpy_r_self, PyObject *cpy_r_package_root) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_package_root);
    if (((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_package_root != NULL) {
        CPy_DECREF(((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_package_root);
    }
    ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_package_root = cpy_r_package_root;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/fscache.py", "set_package_root", 50, CPyStatic_fscache___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_fscache___FileSystemCache___set_package_root(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"package_root", 0};
    static CPyArg_Parser parser = {"O:set_package_root", kwlist, 0};
    PyObject *obj_package_root;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_package_root)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_package_root;
    if (likely(PyList_Check(obj_package_root)))
        arg_package_root = obj_package_root;
    else {
        CPy_TypeError("list", obj_package_root); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___set_package_root(arg_self, arg_package_root);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "set_package_root", 49, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___set_package_root__FileSystemCache_glue(PyObject *cpy_r_self, PyObject *cpy_r_package_root) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[2576]; /* 'set_package_root' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_package_root};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (unlikely(cpy_r_r3 != Py_None)) {
        CPy_TypeError("None", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4 == 2) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache___set_package_root__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"package_root", 0};
    static CPyArg_Parser parser = {"O:set_package_root__FileSystemCache_glue", kwlist, 0};
    PyObject *obj_package_root;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_package_root)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_package_root;
    if (likely(PyList_Check(obj_package_root)))
        arg_package_root = obj_package_root;
    else {
        CPy_TypeError("list", obj_package_root); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___set_package_root__FileSystemCache_glue(arg_self, arg_package_root);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "set_package_root__FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___flush(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
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
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 54, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    if (((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_stat_cache != NULL) {
        CPy_DECREF(((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_stat_cache);
    }
    ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_stat_cache = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 54, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    cpy_r_r2 = PyDict_New();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 55, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    if (((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_stat_error_cache != NULL) {
        CPy_DECREF(((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_stat_error_cache);
    }
    ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_stat_error_cache = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 55, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    cpy_r_r4 = PyDict_New();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 56, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    if (((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_listdir_cache != NULL) {
        CPy_DECREF(((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_listdir_cache);
    }
    ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_listdir_cache = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 56, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    cpy_r_r6 = PyDict_New();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 57, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    if (((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_listdir_error_cache != NULL) {
        CPy_DECREF(((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_listdir_error_cache);
    }
    ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_listdir_error_cache = cpy_r_r6;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 57, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    cpy_r_r8 = PyDict_New();
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 58, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    if (((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_isfile_case_cache != NULL) {
        CPy_DECREF(((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_isfile_case_cache);
    }
    ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_isfile_case_cache = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 58, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    cpy_r_r10 = PyDict_New();
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 59, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    if (((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_exists_case_cache != NULL) {
        CPy_DECREF(((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_exists_case_cache);
    }
    ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_exists_case_cache = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 59, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    cpy_r_r12 = PyDict_New();
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 60, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    if (((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_read_cache != NULL) {
        CPy_DECREF(((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_read_cache);
    }
    ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_read_cache = cpy_r_r12;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 60, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    cpy_r_r14 = PyDict_New();
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 61, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    if (((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_read_error_cache != NULL) {
        CPy_DECREF(((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_read_error_cache);
    }
    ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_read_error_cache = cpy_r_r14;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 61, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    cpy_r_r16 = PyDict_New();
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 62, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    if (((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_hash_cache != NULL) {
        CPy_DECREF(((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_hash_cache);
    }
    ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_hash_cache = cpy_r_r16;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 62, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    cpy_r_r18 = PySet_New(NULL);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 63, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    if (((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_fake_package_cache != NULL) {
        CPy_DECREF(((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_fake_package_cache);
    }
    ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_fake_package_cache = cpy_r_r18;
    cpy_r_r19 = 1;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/fscache.py", "flush", 63, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    return 1;
CPyL21: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
}

PyObject *CPyPy_fscache___FileSystemCache___flush(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":flush", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___flush(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "flush", 52, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___flush__FileSystemCache_glue(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[237]; /* 'flush' */
    PyObject *cpy_r_r1[1] = {cpy_r_self};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (unlikely(cpy_r_r3 != Py_None)) {
        CPy_TypeError("None", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4 == 2) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache___flush__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":flush__FileSystemCache_glue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___flush__FileSystemCache_glue(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "flush__FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

PyObject *CPyDef_fscache___FileSystemCache___stat(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
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
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_st;
    tuple_T3OOO cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_err;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    tuple_T3OOO cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    cpy_r_r0 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_stat_cache;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "stat", "FileSystemCache", "stat_cache", 66, CPyStatic_fscache___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_path);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 66, CPyStatic_fscache___globals);
        goto CPyL44;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL7;
    cpy_r_r4 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_stat_cache;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "stat", "FileSystemCache", "stat_cache", 67, CPyStatic_fscache___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r4, cpy_r_path);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 67, CPyStatic_fscache___globals);
        goto CPyL44;
    }
    if (likely(PyTuple_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "stat", 67, CPyStatic_fscache___globals, "tuple", cpy_r_r5);
        goto CPyL44;
    }
    return cpy_r_r6;
CPyL7: ;
    cpy_r_r7 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_stat_error_cache;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "stat", "FileSystemCache", "stat_error_cache", 68, CPyStatic_fscache___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r7);
CPyL8: ;
    cpy_r_r8 = PyDict_Contains(cpy_r_r7, cpy_r_path);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 68, CPyStatic_fscache___globals);
        goto CPyL44;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL15;
    cpy_r_r11 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_stat_error_cache;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "stat", "FileSystemCache", "stat_error_cache", 69, CPyStatic_fscache___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r11);
CPyL11: ;
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r11, cpy_r_path);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 69, CPyStatic_fscache___globals);
        goto CPyL44;
    }
    cpy_r_r13 = CPyDef_fscache___copy_os_error(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 69, CPyStatic_fscache___globals);
        goto CPyL44;
    }
    CPy_Raise(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 69, CPyStatic_fscache___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r14 = CPyModule_os;
    cpy_r_r15 = CPyStatics[504]; /* 'stat' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 71, CPyStatic_fscache___globals);
        goto CPyL19;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_path};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 71, CPyStatic_fscache___globals);
        goto CPyL19;
    }
    if (likely(PyTuple_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "stat", 71, CPyStatic_fscache___globals, "tuple", cpy_r_r19);
        goto CPyL19;
    }
    cpy_r_st = cpy_r_r20;
    goto CPyL41;
CPyL19: ;
    cpy_r_r21 = CPy_CatchError();
    cpy_r_r22 = CPyModule_builtins;
    cpy_r_r23 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 72, CPyStatic_fscache___globals);
        goto CPyL39;
    }
    cpy_r_r25 = CPy_ExceptionMatches(cpy_r_r24);
    CPy_DecRef(cpy_r_r24);
    if (!cpy_r_r25) goto CPyL37;
    cpy_r_r26 = CPy_GetExcValue();
    cpy_r_err = cpy_r_r26;
    cpy_r_r27 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 4, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_path); /* init_under_package_root */
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 73, CPyStatic_fscache___globals);
        goto CPyL45;
    }
    if (!cpy_r_r27) goto CPyL32;
    cpy_r_r28 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 5, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_path); /* _fake_init */
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 75, CPyStatic_fscache___globals);
        goto CPyL25;
    } else
        goto CPyL46;
CPyL24: ;
    CPy_RestoreExcInfo(cpy_r_r21);
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    return cpy_r_r28;
CPyL25: ;
    cpy_r_r29 = CPy_CatchError();
    cpy_r_r30 = CPyModule_builtins;
    cpy_r_r31 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 76, CPyStatic_fscache___globals);
        goto CPyL47;
    }
    cpy_r_r33 = CPy_ExceptionMatches(cpy_r_r32);
    CPy_DecRef(cpy_r_r32);
    if (cpy_r_r33) {
        goto CPyL29;
    } else
        goto CPyL48;
CPyL27: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL30;
    } else
        goto CPyL49;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    CPy_RestoreExcInfo(cpy_r_r29);
    CPy_DecRef(cpy_r_r29.f0);
    CPy_DecRef(cpy_r_r29.f1);
    CPy_DecRef(cpy_r_r29.f2);
    goto CPyL32;
CPyL30: ;
    CPy_RestoreExcInfo(cpy_r_r29);
    CPy_DecRef(cpy_r_r29.f0);
    CPy_DecRef(cpy_r_r29.f1);
    CPy_DecRef(cpy_r_r29.f2);
    cpy_r_r34 = CPy_KeepPropagating();
    if (!cpy_r_r34) {
        goto CPyL39;
    } else
        goto CPyL50;
CPyL31: ;
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r35 = CPyDef_fscache___copy_os_error(cpy_r_err);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 80, CPyStatic_fscache___globals);
        goto CPyL45;
    }
    cpy_r_r36 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_stat_error_cache;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "stat", "FileSystemCache", "stat_error_cache", 80, CPyStatic_fscache___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r36);
CPyL34: ;
    cpy_r_r37 = CPyDict_SetItem(cpy_r_r36, cpy_r_path, cpy_r_r35);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r35);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 80, CPyStatic_fscache___globals);
        goto CPyL45;
    }
    CPy_Raise(cpy_r_err);
    CPy_DecRef(cpy_r_err);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 81, CPyStatic_fscache___globals);
        goto CPyL39;
    } else
        goto CPyL52;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL39;
    } else
        goto CPyL53;
CPyL38: ;
    CPy_Unreachable();
CPyL39: ;
    CPy_RestoreExcInfo(cpy_r_r21);
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    cpy_r_r39 = CPy_KeepPropagating();
    if (!cpy_r_r39) goto CPyL44;
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r40 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_stat_cache;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "stat", "FileSystemCache", "stat_cache", 82, CPyStatic_fscache___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_r40);
CPyL42: ;
    cpy_r_r41 = CPyDict_SetItem(cpy_r_r40, cpy_r_path, cpy_r_st);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/fscache.py", "stat", 82, CPyStatic_fscache___globals);
        goto CPyL54;
    }
    return cpy_r_st;
CPyL44: ;
    cpy_r_r43 = NULL;
    return cpy_r_r43;
CPyL45: ;
    CPy_DecRef(cpy_r_err);
    goto CPyL39;
CPyL46: ;
    CPy_DecRef(cpy_r_err);
    goto CPyL24;
CPyL47: ;
    CPy_DecRef(cpy_r_err);
    goto CPyL30;
CPyL48: ;
    CPy_DecRef(cpy_r_err);
    goto CPyL27;
CPyL49: ;
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    CPy_DecRef(cpy_r_r29.f0);
    CPy_DecRef(cpy_r_r29.f1);
    CPy_DecRef(cpy_r_r29.f2);
    goto CPyL28;
CPyL50: ;
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    goto CPyL31;
CPyL51: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r35);
    goto CPyL39;
CPyL52: ;
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    goto CPyL36;
CPyL53: ;
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    goto CPyL38;
CPyL54: ;
    CPy_DecRef(cpy_r_st);
    goto CPyL44;
}

PyObject *CPyPy_fscache___FileSystemCache___stat(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:stat", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_fscache___FileSystemCache___stat(arg_self, arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "stat", 65, CPyStatic_fscache___globals);
    return NULL;
}

PyObject *CPyDef_fscache___FileSystemCache___stat__FileSystemCache_glue(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[504]; /* 'stat' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_path};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyTuple_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("tuple", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache___stat__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:stat__FileSystemCache_glue", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_fscache___FileSystemCache___stat__FileSystemCache_glue(arg_self, arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "stat__FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___init_under_package_root(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    tuple_T2OO cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_dirname;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_basename;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_st;
    tuple_T3OOO cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_ok;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject **cpy_r_r61;
    PyObject *cpy_r_r62;
    tuple_T2OO cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_drive;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject **cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject **cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyTagged cpy_r_r94;
    CPyPtr cpy_r_r95;
    int64_t cpy_r_r96;
    CPyTagged cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_root;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    CPyTagged cpy_r_r109;
    char cpy_r_r110;
    cpy_r_r0 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_package_root;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "init_under_package_root", "FileSystemCache", "package_root", 107, CPyStatic_fscache___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (cpy_r_r4) goto CPyL3;
    return 0;
CPyL3: ;
    cpy_r_r5 = CPyModule_os;
    cpy_r_r6 = CPyStatics[142]; /* 'path' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 109, CPyStatic_fscache___globals);
        goto CPyL68;
    }
    cpy_r_r8 = CPyStatics[369]; /* 'split' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 109, CPyStatic_fscache___globals);
        goto CPyL68;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_path};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 109, CPyStatic_fscache___globals);
        goto CPyL68;
    }
    PyObject *__tmp2885;
    if (unlikely(!(PyTuple_Check(cpy_r_r12) && PyTuple_GET_SIZE(cpy_r_r12) == 2))) {
        __tmp2885 = NULL;
        goto __LL2886;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r12, 0))))
        __tmp2885 = PyTuple_GET_ITEM(cpy_r_r12, 0);
    else {
        __tmp2885 = NULL;
    }
    if (__tmp2885 == NULL) goto __LL2886;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r12, 1))))
        __tmp2885 = PyTuple_GET_ITEM(cpy_r_r12, 1);
    else {
        __tmp2885 = NULL;
    }
    if (__tmp2885 == NULL) goto __LL2886;
    __tmp2885 = cpy_r_r12;
__LL2886: ;
    if (unlikely(__tmp2885 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r12); cpy_r_r13 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2887 = PyTuple_GET_ITEM(cpy_r_r12, 0);
        CPy_INCREF(__tmp2887);
        PyObject *__tmp2888;
        if (likely(PyUnicode_Check(__tmp2887)))
            __tmp2888 = __tmp2887;
        else {
            CPy_TypeError("str", __tmp2887); 
            __tmp2888 = NULL;
        }
        cpy_r_r13.f0 = __tmp2888;
        PyObject *__tmp2889 = PyTuple_GET_ITEM(cpy_r_r12, 1);
        CPy_INCREF(__tmp2889);
        PyObject *__tmp2890;
        if (likely(PyUnicode_Check(__tmp2889)))
            __tmp2890 = __tmp2889;
        else {
            CPy_TypeError("str", __tmp2889); 
            __tmp2890 = NULL;
        }
        cpy_r_r13.f1 = __tmp2890;
    }
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13.f0 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 109, CPyStatic_fscache___globals);
        goto CPyL68;
    }
    cpy_r_r14 = cpy_r_r13.f0;
    CPy_INCREF(cpy_r_r14);
    cpy_r_dirname = cpy_r_r14;
    cpy_r_r15 = cpy_r_r13.f1;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r13.f0);
    CPy_DECREF(cpy_r_r13.f1);
    cpy_r_basename = cpy_r_r15;
    cpy_r_r16 = CPyStatics[287]; /* '__init__.py' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_basename, cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL10;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL10;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 110, CPyStatic_fscache___globals);
        goto CPyL69;
    }
CPyL10: ;
    cpy_r_r22 = cpy_r_r17 != 0;
    if (cpy_r_r22) {
        goto CPyL70;
    } else
        goto CPyL12;
CPyL11: ;
    return 0;
CPyL12: ;
    cpy_r_r23 = CPyModule_os;
    cpy_r_r24 = CPyStatics[142]; /* 'path' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 112, CPyStatic_fscache___globals);
        goto CPyL69;
    }
    cpy_r_r26 = CPyStatics[172]; /* 'basename' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 112, CPyStatic_fscache___globals);
        goto CPyL69;
    }
    PyObject *cpy_r_r28[1] = {cpy_r_dirname};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = _PyObject_Vectorcall(cpy_r_r27, cpy_r_r29, 1, 0);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 112, CPyStatic_fscache___globals);
        goto CPyL69;
    }
    if (likely(PyUnicode_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "init_under_package_root", 112, CPyStatic_fscache___globals, "str", cpy_r_r30);
        goto CPyL69;
    }
    cpy_r_r32 = CPyStatics[2544]; /* 'isidentifier' */
    PyObject *cpy_r_r33[1] = {cpy_r_r31};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_VectorcallMethod(cpy_r_r32, cpy_r_r34, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 112, CPyStatic_fscache___globals);
        goto CPyL71;
    }
    CPy_DECREF(cpy_r_r31);
    if (unlikely(!PyBool_Check(cpy_r_r35))) {
        CPy_TypeError("bool", cpy_r_r35); cpy_r_r36 = 2;
    } else
        cpy_r_r36 = cpy_r_r35 == Py_True;
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 112, CPyStatic_fscache___globals);
        goto CPyL69;
    }
    if (cpy_r_r36) {
        goto CPyL20;
    } else
        goto CPyL72;
CPyL19: ;
    return 0;
CPyL20: ;
    cpy_r_r37 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 3, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_dirname); /* stat */
    CPy_DECREF(cpy_r_dirname);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 116, CPyStatic_fscache___globals);
        goto CPyL73;
    }
    cpy_r_st = cpy_r_r37;
    goto CPyL29;
CPyL22: ;
    cpy_r_r38 = CPy_CatchError();
    cpy_r_r39 = CPyModule_builtins;
    cpy_r_r40 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 117, CPyStatic_fscache___globals);
        goto CPyL27;
    }
    cpy_r_r42 = CPy_ExceptionMatches(cpy_r_r41);
    CPy_DecRef(cpy_r_r41);
    if (!cpy_r_r42) goto CPyL25;
    CPy_RestoreExcInfo(cpy_r_r38);
    CPy_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f2);
    return 0;
CPyL25: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL27;
    } else
        goto CPyL74;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    CPy_RestoreExcInfo(cpy_r_r38);
    CPy_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f2);
    cpy_r_r43 = CPy_KeepPropagating();
    if (!cpy_r_r43) goto CPyL68;
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r44 = CPyStatics[320]; /* 'st_mode' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_st, cpy_r_r44);
    CPy_DECREF(cpy_r_st);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 120, CPyStatic_fscache___globals);
        goto CPyL75;
    }
    if (likely(PyLong_Check(cpy_r_r45)))
        cpy_r_r46 = CPyTagged_FromObject(cpy_r_r45);
    else {
        CPy_TypeError("int", cpy_r_r45); cpy_r_r46 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 120, CPyStatic_fscache___globals);
        goto CPyL75;
    }
    cpy_r_r47 = CPyModule_stat;
    cpy_r_r48 = CPyStatics[321]; /* 'S_ISDIR' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 120, CPyStatic_fscache___globals);
        goto CPyL76;
    }
    cpy_r_r50 = CPyTagged_StealAsObject(cpy_r_r46);
    PyObject *cpy_r_r51[1] = {cpy_r_r50};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = _PyObject_Vectorcall(cpy_r_r49, cpy_r_r52, 1, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 120, CPyStatic_fscache___globals);
        goto CPyL77;
    }
    CPy_DECREF(cpy_r_r50);
    if (unlikely(!PyBool_Check(cpy_r_r53))) {
        CPy_TypeError("bool", cpy_r_r53); cpy_r_r54 = 2;
    } else
        cpy_r_r54 = cpy_r_r53 == Py_True;
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 120, CPyStatic_fscache___globals);
        goto CPyL75;
    }
    if (cpy_r_r54) {
        goto CPyL36;
    } else
        goto CPyL78;
CPyL35: ;
    return 0;
CPyL36: ;
    cpy_r_ok = 0;
    cpy_r_r55 = CPyModule_os;
    cpy_r_r56 = CPyStatics[142]; /* 'path' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 123, CPyStatic_fscache___globals);
        goto CPyL75;
    }
    cpy_r_r58 = CPyStatics[2577]; /* 'splitdrive' */
    cpy_r_r59 = CPyObject_GetAttr(cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 123, CPyStatic_fscache___globals);
        goto CPyL75;
    }
    PyObject *cpy_r_r60[1] = {cpy_r_path};
    cpy_r_r61 = (PyObject **)&cpy_r_r60;
    cpy_r_r62 = _PyObject_Vectorcall(cpy_r_r59, cpy_r_r61, 1, 0);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 123, CPyStatic_fscache___globals);
        goto CPyL75;
    }
    PyObject *__tmp2891;
    if (unlikely(!(PyTuple_Check(cpy_r_r62) && PyTuple_GET_SIZE(cpy_r_r62) == 2))) {
        __tmp2891 = NULL;
        goto __LL2892;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r62, 0))))
        __tmp2891 = PyTuple_GET_ITEM(cpy_r_r62, 0);
    else {
        __tmp2891 = NULL;
    }
    if (__tmp2891 == NULL) goto __LL2892;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r62, 1))))
        __tmp2891 = PyTuple_GET_ITEM(cpy_r_r62, 1);
    else {
        __tmp2891 = NULL;
    }
    if (__tmp2891 == NULL) goto __LL2892;
    __tmp2891 = cpy_r_r62;
__LL2892: ;
    if (unlikely(__tmp2891 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r62); cpy_r_r63 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2893 = PyTuple_GET_ITEM(cpy_r_r62, 0);
        CPy_INCREF(__tmp2893);
        PyObject *__tmp2894;
        if (likely(PyUnicode_Check(__tmp2893)))
            __tmp2894 = __tmp2893;
        else {
            CPy_TypeError("str", __tmp2893); 
            __tmp2894 = NULL;
        }
        cpy_r_r63.f0 = __tmp2894;
        PyObject *__tmp2895 = PyTuple_GET_ITEM(cpy_r_r62, 1);
        CPy_INCREF(__tmp2895);
        PyObject *__tmp2896;
        if (likely(PyUnicode_Check(__tmp2895)))
            __tmp2896 = __tmp2895;
        else {
            CPy_TypeError("str", __tmp2895); 
            __tmp2896 = NULL;
        }
        cpy_r_r63.f1 = __tmp2896;
    }
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63.f0 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 123, CPyStatic_fscache___globals);
        goto CPyL75;
    }
    cpy_r_r64 = cpy_r_r63.f0;
    CPy_INCREF(cpy_r_r64);
    cpy_r_drive = cpy_r_r64;
    CPy_DECREF(cpy_r_drive);
    cpy_r_r65 = cpy_r_r63.f1;
    CPy_INCREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r63.f0);
    CPy_DECREF(cpy_r_r63.f1);
    cpy_r_path = cpy_r_r65;
    cpy_r_r66 = CPyModule_os;
    cpy_r_r67 = CPyStatics[142]; /* 'path' */
    cpy_r_r68 = CPyObject_GetAttr(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 124, CPyStatic_fscache___globals);
        goto CPyL79;
    }
    cpy_r_r69 = CPyStatics[2578]; /* 'isabs' */
    cpy_r_r70 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 124, CPyStatic_fscache___globals);
        goto CPyL79;
    }
    PyObject *cpy_r_r71[1] = {cpy_r_path};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = _PyObject_Vectorcall(cpy_r_r70, cpy_r_r72, 1, 0);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 124, CPyStatic_fscache___globals);
        goto CPyL79;
    }
    if (unlikely(!PyBool_Check(cpy_r_r73))) {
        CPy_TypeError("bool", cpy_r_r73); cpy_r_r74 = 2;
    } else
        cpy_r_r74 = cpy_r_r73 == Py_True;
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 124, CPyStatic_fscache___globals);
        goto CPyL79;
    }
    if (!cpy_r_r74) goto CPyL50;
    cpy_r_r75 = CPyModule_os;
    cpy_r_r76 = CPyStatics[142]; /* 'path' */
    cpy_r_r77 = CPyObject_GetAttr(cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 125, CPyStatic_fscache___globals);
        goto CPyL79;
    }
    cpy_r_r78 = CPyStatics[152]; /* 'relpath' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 125, CPyStatic_fscache___globals);
        goto CPyL79;
    }
    PyObject *cpy_r_r80[1] = {cpy_r_path};
    cpy_r_r81 = (PyObject **)&cpy_r_r80;
    cpy_r_r82 = _PyObject_Vectorcall(cpy_r_r79, cpy_r_r81, 1, 0);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 125, CPyStatic_fscache___globals);
        goto CPyL79;
    }
    CPy_DECREF(cpy_r_path);
    if (likely(PyUnicode_Check(cpy_r_r82)))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "init_under_package_root", 125, CPyStatic_fscache___globals, "str", cpy_r_r82);
        goto CPyL75;
    }
    cpy_r_path = cpy_r_r83;
CPyL50: ;
    cpy_r_r84 = CPyModule_os;
    cpy_r_r85 = CPyStatics[142]; /* 'path' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 126, CPyStatic_fscache___globals);
        goto CPyL79;
    }
    cpy_r_r87 = CPyStatics[2213]; /* 'normpath' */
    cpy_r_r88 = CPyObject_GetAttr(cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 126, CPyStatic_fscache___globals);
        goto CPyL79;
    }
    PyObject *cpy_r_r89[1] = {cpy_r_path};
    cpy_r_r90 = (PyObject **)&cpy_r_r89;
    cpy_r_r91 = _PyObject_Vectorcall(cpy_r_r88, cpy_r_r90, 1, 0);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 126, CPyStatic_fscache___globals);
        goto CPyL79;
    }
    CPy_DECREF(cpy_r_path);
    if (likely(PyUnicode_Check(cpy_r_r91)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "init_under_package_root", 126, CPyStatic_fscache___globals, "str", cpy_r_r91);
        goto CPyL75;
    }
    cpy_r_path = cpy_r_r92;
    cpy_r_r93 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_package_root;
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "init_under_package_root", "FileSystemCache", "package_root", 127, CPyStatic_fscache___globals);
        goto CPyL79;
    }
    CPy_INCREF(cpy_r_r93);
CPyL55: ;
    cpy_r_r94 = 0;
CPyL56: ;
    cpy_r_r95 = (CPyPtr)&((PyVarObject *)cpy_r_r93)->ob_size;
    cpy_r_r96 = *(int64_t *)cpy_r_r95;
    cpy_r_r97 = cpy_r_r96 << 1;
    cpy_r_r98 = (Py_ssize_t)cpy_r_r94 < (Py_ssize_t)cpy_r_r97;
    if (!cpy_r_r98) goto CPyL80;
    cpy_r_r99 = CPyList_GetItemUnsafe(cpy_r_r93, cpy_r_r94);
    if (likely(PyUnicode_Check(cpy_r_r99)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "init_under_package_root", 127, CPyStatic_fscache___globals, "str", cpy_r_r99);
        goto CPyL81;
    }
    cpy_r_root = cpy_r_r100;
    cpy_r_r101 = CPyStr_Startswith(cpy_r_path, cpy_r_root);
    if (!cpy_r_r101) goto CPyL82;
    cpy_r_r102 = PyUnicode_Concat(cpy_r_root, cpy_r_basename);
    CPy_DECREF(cpy_r_root);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 129, CPyStatic_fscache___globals);
        goto CPyL81;
    }
    cpy_r_r103 = PyUnicode_Compare(cpy_r_path, cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    cpy_r_r104 = cpy_r_r103 == -1;
    if (!cpy_r_r104) goto CPyL63;
    cpy_r_r105 = PyErr_Occurred();
    cpy_r_r106 = cpy_r_r105 != NULL;
    if (!cpy_r_r106) goto CPyL63;
    cpy_r_r107 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 129, CPyStatic_fscache___globals);
        goto CPyL81;
    }
CPyL63: ;
    cpy_r_r108 = cpy_r_r103 == 0;
    if (cpy_r_r108) {
        goto CPyL83;
    } else
        goto CPyL65;
CPyL64: ;
    cpy_r_ok = 0;
    goto CPyL67;
CPyL65: ;
    cpy_r_ok = 1;
CPyL66: ;
    cpy_r_r109 = cpy_r_r94 + 2;
    cpy_r_r94 = cpy_r_r109;
    goto CPyL56;
CPyL67: ;
    return cpy_r_ok;
CPyL68: ;
    cpy_r_r110 = 2;
    return cpy_r_r110;
CPyL69: ;
    CPy_DecRef(cpy_r_dirname);
    CPy_DecRef(cpy_r_basename);
    goto CPyL68;
CPyL70: ;
    CPy_DECREF(cpy_r_dirname);
    CPy_DECREF(cpy_r_basename);
    goto CPyL11;
CPyL71: ;
    CPy_DecRef(cpy_r_dirname);
    CPy_DecRef(cpy_r_basename);
    CPy_DecRef(cpy_r_r31);
    goto CPyL68;
CPyL72: ;
    CPy_DECREF(cpy_r_dirname);
    CPy_DECREF(cpy_r_basename);
    goto CPyL19;
CPyL73: ;
    CPy_DecRef(cpy_r_basename);
    goto CPyL22;
CPyL74: ;
    CPy_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f2);
    goto CPyL26;
CPyL75: ;
    CPy_DecRef(cpy_r_basename);
    goto CPyL68;
CPyL76: ;
    CPy_DecRef(cpy_r_basename);
    CPyTagged_DecRef(cpy_r_r46);
    goto CPyL68;
CPyL77: ;
    CPy_DecRef(cpy_r_basename);
    CPy_DecRef(cpy_r_r50);
    goto CPyL68;
CPyL78: ;
    CPy_DECREF(cpy_r_basename);
    goto CPyL35;
CPyL79: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_basename);
    goto CPyL68;
CPyL80: ;
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_basename);
    CPy_DECREF(cpy_r_r93);
    goto CPyL67;
CPyL81: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_basename);
    CPy_DecRef(cpy_r_r93);
    goto CPyL68;
CPyL82: ;
    CPy_DECREF(cpy_r_root);
    goto CPyL66;
CPyL83: ;
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_basename);
    CPy_DECREF(cpy_r_r93);
    goto CPyL64;
}

PyObject *CPyPy_fscache___FileSystemCache___init_under_package_root(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:init_under_package_root", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___init_under_package_root(arg_self, arg_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "init_under_package_root", 85, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___init_under_package_root__FileSystemCache_glue(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[2579]; /* 'init_under_package_root' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_path};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4 == 2) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache___init_under_package_root__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:init_under_package_root__FileSystemCache_glue", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___init_under_package_root__FileSystemCache_glue(arg_self, arg_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "init_under_package_root__FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

PyObject *CPyDef_fscache___FileSystemCache____fake_init(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_dirname;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_basename;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_st;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_seq;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyTagged cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[142]; /* 'path' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 144, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    cpy_r_r3 = CPyStatics[369]; /* 'split' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 144, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_path};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 144, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    PyObject *__tmp2897;
    if (unlikely(!(PyTuple_Check(cpy_r_r7) && PyTuple_GET_SIZE(cpy_r_r7) == 2))) {
        __tmp2897 = NULL;
        goto __LL2898;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r7, 0))))
        __tmp2897 = PyTuple_GET_ITEM(cpy_r_r7, 0);
    else {
        __tmp2897 = NULL;
    }
    if (__tmp2897 == NULL) goto __LL2898;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r7, 1))))
        __tmp2897 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp2897 = NULL;
    }
    if (__tmp2897 == NULL) goto __LL2898;
    __tmp2897 = cpy_r_r7;
__LL2898: ;
    if (unlikely(__tmp2897 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r7); cpy_r_r8 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2899 = PyTuple_GET_ITEM(cpy_r_r7, 0);
        CPy_INCREF(__tmp2899);
        PyObject *__tmp2900;
        if (likely(PyUnicode_Check(__tmp2899)))
            __tmp2900 = __tmp2899;
        else {
            CPy_TypeError("str", __tmp2899); 
            __tmp2900 = NULL;
        }
        cpy_r_r8.f0 = __tmp2900;
        PyObject *__tmp2901 = PyTuple_GET_ITEM(cpy_r_r7, 1);
        CPy_INCREF(__tmp2901);
        PyObject *__tmp2902;
        if (likely(PyUnicode_Check(__tmp2901)))
            __tmp2902 = __tmp2901;
        else {
            CPy_TypeError("str", __tmp2901); 
            __tmp2902 = NULL;
        }
        cpy_r_r8.f1 = __tmp2902;
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 144, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r9);
    cpy_r_dirname = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f1;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r8.f1);
    cpy_r_basename = cpy_r_r10;
    cpy_r_r11 = CPyStatics[287]; /* '__init__.py' */
    cpy_r_r12 = PyUnicode_Compare(cpy_r_basename, cpy_r_r11);
    CPy_DECREF(cpy_r_basename);
    cpy_r_r13 = cpy_r_r12 == -1;
    if (!cpy_r_r13) goto CPyL7;
    cpy_r_r14 = PyErr_Occurred();
    cpy_r_r15 = cpy_r_r14 != NULL;
    if (!cpy_r_r15) goto CPyL7;
    cpy_r_r16 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 145, CPyStatic_fscache___globals);
        goto CPyL50;
    }
CPyL7: ;
    cpy_r_r17 = cpy_r_r12 == 0;
    if (cpy_r_r17) {
        goto CPyL12;
    } else
        goto CPyL51;
CPyL8: ;
    cpy_r_r18 = CPyModule_builtins;
    cpy_r_r19 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 145, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    PyObject *cpy_r_r21[1] = {cpy_r_path};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 1, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 145, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    CPy_Raise(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 145, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r24 = CPyModule_os;
    cpy_r_r25 = CPyStatics[142]; /* 'path' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 146, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    cpy_r_r27 = CPyStatics[1500]; /* 'exists' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 146, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_path};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 146, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    if (unlikely(!PyBool_Check(cpy_r_r31))) {
        CPy_TypeError("bool", cpy_r_r31); cpy_r_r32 = 2;
    } else
        cpy_r_r32 = cpy_r_r31 == Py_True;
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 146, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    cpy_r_r33 = cpy_r_r32 ^ 1;
    if (cpy_r_r33) {
        goto CPyL21;
    } else
        goto CPyL52;
CPyL17: ;
    cpy_r_r34 = CPyModule_builtins;
    cpy_r_r35 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 146, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    PyObject *cpy_r_r37[1] = {cpy_r_path};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = _PyObject_Vectorcall(cpy_r_r36, cpy_r_r38, 1, 0);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 146, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    CPy_Raise(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 146, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r40 = CPyModule_os;
    cpy_r_r41 = CPyStatics[142]; /* 'path' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 147, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    cpy_r_r43 = CPyStatics[2213]; /* 'normpath' */
    cpy_r_r44 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 147, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    PyObject *cpy_r_r45[1] = {cpy_r_dirname};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = _PyObject_Vectorcall(cpy_r_r44, cpy_r_r46, 1, 0);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 147, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    CPy_DECREF(cpy_r_dirname);
    if (likely(PyUnicode_Check(cpy_r_r47)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "_fake_init", 147, CPyStatic_fscache___globals, "str", cpy_r_r47);
        goto CPyL49;
    }
    cpy_r_dirname = cpy_r_r48;
    cpy_r_r49 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 3, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_dirname); /* stat */
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 148, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    cpy_r_st = cpy_r_r49;
    cpy_r_r50 = PySequence_List(cpy_r_st);
    CPy_DECREF(cpy_r_st);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 150, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    cpy_r_seq = cpy_r_r50;
    cpy_r_r51 = CPyModule_stat;
    cpy_r_r52 = CPyStatics[2580]; /* 'S_IFREG' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 151, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    if (likely(PyLong_Check(cpy_r_r53)))
        cpy_r_r54 = CPyTagged_FromObject(cpy_r_r53);
    else {
        CPy_TypeError("int", cpy_r_r53); cpy_r_r54 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 151, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    cpy_r_r55 = CPyTagged_Or(cpy_r_r54, 584);
    CPyTagged_DECREF(cpy_r_r54);
    cpy_r_r56 = CPyModule_stat;
    cpy_r_r57 = CPyStatics[2581]; /* 'ST_MODE' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 151, CPyStatic_fscache___globals);
        goto CPyL54;
    }
    if (likely(PyLong_Check(cpy_r_r58)))
        cpy_r_r59 = CPyTagged_FromObject(cpy_r_r58);
    else {
        CPy_TypeError("int", cpy_r_r58); cpy_r_r59 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 151, CPyStatic_fscache___globals);
        goto CPyL54;
    }
    cpy_r_r60 = CPyTagged_StealAsObject(cpy_r_r55);
    cpy_r_r61 = CPyList_SetItem(cpy_r_seq, cpy_r_r59, cpy_r_r60);
    CPyTagged_DECREF(cpy_r_r59);
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 151, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    cpy_r_r62 = CPyModule_stat;
    cpy_r_r63 = CPyStatics[2582]; /* 'ST_INO' */
    cpy_r_r64 = CPyObject_GetAttr(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 152, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    if (likely(PyLong_Check(cpy_r_r64)))
        cpy_r_r65 = CPyTagged_FromObject(cpy_r_r64);
    else {
        CPy_TypeError("int", cpy_r_r64); cpy_r_r65 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 152, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    cpy_r_r66 = CPyStatics[9016]; /* 1 */
    CPy_INCREF(cpy_r_r66);
    cpy_r_r67 = CPyList_SetItem(cpy_r_seq, cpy_r_r65, cpy_r_r66);
    CPyTagged_DECREF(cpy_r_r65);
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 152, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    cpy_r_r68 = CPyModule_stat;
    cpy_r_r69 = CPyStatics[2583]; /* 'ST_NLINK' */
    cpy_r_r70 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 153, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    if (likely(PyLong_Check(cpy_r_r70)))
        cpy_r_r71 = CPyTagged_FromObject(cpy_r_r70);
    else {
        CPy_TypeError("int", cpy_r_r70); cpy_r_r71 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 153, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    cpy_r_r72 = CPyStatics[9016]; /* 1 */
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = CPyList_SetItem(cpy_r_seq, cpy_r_r71, cpy_r_r72);
    CPyTagged_DECREF(cpy_r_r71);
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 153, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    cpy_r_r74 = CPyModule_stat;
    cpy_r_r75 = CPyStatics[2584]; /* 'ST_SIZE' */
    cpy_r_r76 = CPyObject_GetAttr(cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 154, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    if (likely(PyLong_Check(cpy_r_r76)))
        cpy_r_r77 = CPyTagged_FromObject(cpy_r_r76);
    else {
        CPy_TypeError("int", cpy_r_r76); cpy_r_r77 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 154, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    cpy_r_r78 = CPyStatics[9015]; /* 0 */
    CPy_INCREF(cpy_r_r78);
    cpy_r_r79 = CPyList_SetItem(cpy_r_seq, cpy_r_r77, cpy_r_r78);
    CPyTagged_DECREF(cpy_r_r77);
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 154, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    cpy_r_r80 = CPyModule_os;
    cpy_r_r81 = CPyStatics[2585]; /* 'stat_result' */
    cpy_r_r82 = CPyObject_GetAttr(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 155, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    PyObject *cpy_r_r83[1] = {cpy_r_seq};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = _PyObject_Vectorcall(cpy_r_r82, cpy_r_r84, 1, 0);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 155, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    CPy_DECREF(cpy_r_seq);
    if (likely(PyTuple_Check(cpy_r_r85)))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "_fake_init", 155, CPyStatic_fscache___globals, "tuple", cpy_r_r85);
        goto CPyL50;
    }
    cpy_r_st = cpy_r_r86;
    cpy_r_r87 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_stat_cache;
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "_fake_init", "FileSystemCache", "stat_cache", 156, CPyStatic_fscache___globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r87);
CPyL45: ;
    cpy_r_r88 = CPyDict_SetItem(cpy_r_r87, cpy_r_path, cpy_r_st);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 156, CPyStatic_fscache___globals);
        goto CPyL55;
    }
    cpy_r_r90 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_fake_package_cache;
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "_fake_init", "FileSystemCache", "fake_package_cache", 158, CPyStatic_fscache___globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r90);
CPyL47: ;
    cpy_r_r91 = PySet_Add(cpy_r_r90, cpy_r_dirname);
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r_dirname);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/fscache.py", "_fake_init", 158, CPyStatic_fscache___globals);
        goto CPyL56;
    }
    return cpy_r_st;
CPyL49: ;
    cpy_r_r93 = NULL;
    return cpy_r_r93;
CPyL50: ;
    CPy_DecRef(cpy_r_dirname);
    goto CPyL49;
CPyL51: ;
    CPy_DECREF(cpy_r_dirname);
    goto CPyL8;
CPyL52: ;
    CPy_DECREF(cpy_r_dirname);
    goto CPyL17;
CPyL53: ;
    CPy_DecRef(cpy_r_dirname);
    CPy_DecRef(cpy_r_seq);
    goto CPyL49;
CPyL54: ;
    CPy_DecRef(cpy_r_dirname);
    CPy_DecRef(cpy_r_seq);
    CPyTagged_DecRef(cpy_r_r55);
    goto CPyL49;
CPyL55: ;
    CPy_DecRef(cpy_r_dirname);
    CPy_DecRef(cpy_r_st);
    goto CPyL49;
CPyL56: ;
    CPy_DecRef(cpy_r_st);
    goto CPyL49;
}

PyObject *CPyPy_fscache___FileSystemCache____fake_init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:_fake_init", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_fscache___FileSystemCache____fake_init(arg_self, arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "_fake_init", 137, CPyStatic_fscache___globals);
    return NULL;
}

PyObject *CPyDef_fscache___FileSystemCache____fake_init__FileSystemCache_glue(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[2586]; /* '_fake_init' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_path};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyTuple_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("tuple", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache____fake_init__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:_fake_init__FileSystemCache_glue", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_fscache___FileSystemCache____fake_init__FileSystemCache_glue(arg_self, arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "_fake_init__FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

PyObject *CPyDef_fscache___FileSystemCache___listdir(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_results;
    tuple_T3OOO cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[142]; /* 'path' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 162, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    cpy_r_r3 = CPyStatics[2213]; /* 'normpath' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 162, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_path};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 162, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "listdir", 162, CPyStatic_fscache___globals, "str", cpy_r_r7);
        goto CPyL49;
    }
    cpy_r_path = cpy_r_r8;
    cpy_r_r9 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_listdir_cache;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "listdir", "FileSystemCache", "listdir_cache", 163, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r9);
CPyL5: ;
    cpy_r_r10 = PyDict_Contains(cpy_r_r9, cpy_r_path);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 163, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    cpy_r_r12 = cpy_r_r10;
    if (!cpy_r_r12) goto CPyL17;
    cpy_r_r13 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_listdir_cache;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "listdir", "FileSystemCache", "listdir_cache", 164, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r13);
CPyL8: ;
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r13, cpy_r_path);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 164, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    if (likely(PyList_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "listdir", 164, CPyStatic_fscache___globals, "list", cpy_r_r14);
        goto CPyL50;
    }
    cpy_r_res = cpy_r_r15;
    cpy_r_r16 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_fake_package_cache;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "listdir", "FileSystemCache", "fake_package_cache", 166, CPyStatic_fscache___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r16);
CPyL11: ;
    cpy_r_r17 = PySet_Contains(cpy_r_r16, cpy_r_path);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_path);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 166, CPyStatic_fscache___globals);
        goto CPyL52;
    }
    cpy_r_r19 = cpy_r_r17;
    if (!cpy_r_r19) goto CPyL16;
    cpy_r_r20 = CPyStatics[287]; /* '__init__.py' */
    cpy_r_r21 = PySequence_Contains(cpy_r_res, cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 166, CPyStatic_fscache___globals);
        goto CPyL52;
    }
    cpy_r_r23 = cpy_r_r21;
    cpy_r_r24 = cpy_r_r23 ^ 1;
    if (!cpy_r_r24) goto CPyL16;
    cpy_r_r25 = CPyStatics[287]; /* '__init__.py' */
    cpy_r_r26 = PyList_Append(cpy_r_res, cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 167, CPyStatic_fscache___globals);
        goto CPyL52;
    }
CPyL16: ;
    return cpy_r_res;
CPyL17: ;
    cpy_r_r28 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_listdir_error_cache;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "listdir", "FileSystemCache", "listdir_error_cache", 169, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r28);
CPyL18: ;
    cpy_r_r29 = PyDict_Contains(cpy_r_r28, cpy_r_path);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 169, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    cpy_r_r31 = cpy_r_r29;
    if (!cpy_r_r31) goto CPyL25;
    cpy_r_r32 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_listdir_error_cache;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "listdir", "FileSystemCache", "listdir_error_cache", 170, CPyStatic_fscache___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r32);
CPyL21: ;
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r32, cpy_r_path);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_path);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 170, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    cpy_r_r34 = CPyDef_fscache___copy_os_error(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 170, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    CPy_Raise(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 170, CPyStatic_fscache___globals);
        goto CPyL49;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r35 = CPyModule_os;
    cpy_r_r36 = CPyStatics[2587]; /* 'listdir' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 172, CPyStatic_fscache___globals);
        goto CPyL29;
    }
    PyObject *cpy_r_r38[1] = {cpy_r_path};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r39, 1, 0);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 172, CPyStatic_fscache___globals);
        goto CPyL29;
    }
    if (likely(PyList_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "listdir", 172, CPyStatic_fscache___globals, "list", cpy_r_r40);
        goto CPyL29;
    }
    cpy_r_results = cpy_r_r41;
    goto CPyL40;
CPyL29: ;
    cpy_r_r42 = CPy_CatchError();
    cpy_r_r43 = CPyModule_builtins;
    cpy_r_r44 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 173, CPyStatic_fscache___globals);
        goto CPyL53;
    }
    cpy_r_r46 = CPy_ExceptionMatches(cpy_r_r45);
    CPy_DecRef(cpy_r_r45);
    if (!cpy_r_r46) goto CPyL54;
    cpy_r_r47 = CPy_GetExcValue();
    cpy_r_err = cpy_r_r47;
    cpy_r_r48 = CPyDef_fscache___copy_os_error(cpy_r_err);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 175, CPyStatic_fscache___globals);
        goto CPyL55;
    }
    cpy_r_r49 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_listdir_error_cache;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "listdir", "FileSystemCache", "listdir_error_cache", 175, CPyStatic_fscache___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r49);
CPyL33: ;
    cpy_r_r50 = CPyDict_SetItem(cpy_r_r49, cpy_r_path, cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r48);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 175, CPyStatic_fscache___globals);
        goto CPyL57;
    }
    CPy_Raise(cpy_r_err);
    CPy_DecRef(cpy_r_err);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 176, CPyStatic_fscache___globals);
        goto CPyL38;
    } else
        goto CPyL58;
CPyL35: ;
    CPy_Unreachable();
CPyL36: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL38;
    } else
        goto CPyL59;
CPyL37: ;
    CPy_Unreachable();
CPyL38: ;
    CPy_RestoreExcInfo(cpy_r_r42);
    CPy_DecRef(cpy_r_r42.f0);
    CPy_DecRef(cpy_r_r42.f1);
    CPy_DecRef(cpy_r_r42.f2);
    cpy_r_r52 = CPy_KeepPropagating();
    if (!cpy_r_r52) goto CPyL49;
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r53 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_listdir_cache;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "listdir", "FileSystemCache", "listdir_cache", 177, CPyStatic_fscache___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r53);
CPyL41: ;
    cpy_r_r54 = CPyDict_SetItem(cpy_r_r53, cpy_r_path, cpy_r_results);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 177, CPyStatic_fscache___globals);
        goto CPyL60;
    }
    cpy_r_r56 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_fake_package_cache;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "listdir", "FileSystemCache", "fake_package_cache", 179, CPyStatic_fscache___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r56);
CPyL43: ;
    cpy_r_r57 = PySet_Contains(cpy_r_r56, cpy_r_path);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_path);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 179, CPyStatic_fscache___globals);
        goto CPyL61;
    }
    cpy_r_r59 = cpy_r_r57;
    if (!cpy_r_r59) goto CPyL48;
    cpy_r_r60 = CPyStatics[287]; /* '__init__.py' */
    cpy_r_r61 = PySequence_Contains(cpy_r_results, cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 179, CPyStatic_fscache___globals);
        goto CPyL61;
    }
    cpy_r_r63 = cpy_r_r61;
    cpy_r_r64 = cpy_r_r63 ^ 1;
    if (!cpy_r_r64) goto CPyL48;
    cpy_r_r65 = CPyStatics[287]; /* '__init__.py' */
    cpy_r_r66 = PyList_Append(cpy_r_results, cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/fscache.py", "listdir", 180, CPyStatic_fscache___globals);
        goto CPyL61;
    }
CPyL48: ;
    return cpy_r_results;
CPyL49: ;
    cpy_r_r68 = NULL;
    return cpy_r_r68;
CPyL50: ;
    CPy_DecRef(cpy_r_path);
    goto CPyL49;
CPyL51: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_res);
    goto CPyL49;
CPyL52: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL49;
CPyL53: ;
    CPy_DecRef(cpy_r_path);
    goto CPyL38;
CPyL54: ;
    CPy_DecRef(cpy_r_path);
    goto CPyL36;
CPyL55: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_err);
    goto CPyL38;
CPyL56: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r48);
    goto CPyL38;
CPyL57: ;
    CPy_DecRef(cpy_r_err);
    goto CPyL38;
CPyL58: ;
    CPy_DecRef(cpy_r_r42.f0);
    CPy_DecRef(cpy_r_r42.f1);
    CPy_DecRef(cpy_r_r42.f2);
    goto CPyL35;
CPyL59: ;
    CPy_DecRef(cpy_r_r42.f0);
    CPy_DecRef(cpy_r_r42.f1);
    CPy_DecRef(cpy_r_r42.f2);
    goto CPyL37;
CPyL60: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_results);
    goto CPyL49;
CPyL61: ;
    CPy_DecRef(cpy_r_results);
    goto CPyL49;
}

PyObject *CPyPy_fscache___FileSystemCache___listdir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:listdir", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_fscache___FileSystemCache___listdir(arg_self, arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "listdir", 161, CPyStatic_fscache___globals);
    return NULL;
}

PyObject *CPyDef_fscache___FileSystemCache___listdir__FileSystemCache_glue(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[2587]; /* 'listdir' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_path};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyList_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("list", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache___listdir__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:listdir__FileSystemCache_glue", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_fscache___FileSystemCache___listdir__FileSystemCache_glue(arg_self, arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "listdir__FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___isfile(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_st;
    tuple_T3OOO cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 3, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_path); /* stat */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile", 185, CPyStatic_fscache___globals);
        goto CPyL3;
    }
    cpy_r_st = cpy_r_r0;
    goto CPyL10;
CPyL3: ;
    cpy_r_r1 = CPy_CatchError();
    cpy_r_r2 = CPyModule_builtins;
    cpy_r_r3 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile", 186, CPyStatic_fscache___globals);
        goto CPyL8;
    }
    cpy_r_r5 = CPy_ExceptionMatches(cpy_r_r4);
    CPy_DecRef(cpy_r_r4);
    if (!cpy_r_r5) goto CPyL6;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    return 0;
CPyL6: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL8;
    } else
        goto CPyL17;
CPyL7: ;
    CPy_Unreachable();
CPyL8: ;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    cpy_r_r6 = CPy_KeepPropagating();
    if (!cpy_r_r6) goto CPyL16;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r7 = CPyStatics[320]; /* 'st_mode' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_st, cpy_r_r7);
    CPy_DECREF(cpy_r_st);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile", 188, CPyStatic_fscache___globals);
        goto CPyL16;
    }
    if (likely(PyLong_Check(cpy_r_r8)))
        cpy_r_r9 = CPyTagged_FromObject(cpy_r_r8);
    else {
        CPy_TypeError("int", cpy_r_r8); cpy_r_r9 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile", 188, CPyStatic_fscache___globals);
        goto CPyL16;
    }
    cpy_r_r10 = CPyModule_stat;
    cpy_r_r11 = CPyStatics[322]; /* 'S_ISREG' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile", 188, CPyStatic_fscache___globals);
        goto CPyL18;
    }
    cpy_r_r13 = CPyTagged_StealAsObject(cpy_r_r9);
    PyObject *cpy_r_r14[1] = {cpy_r_r13};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile", 188, CPyStatic_fscache___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_r13);
    if (unlikely(!PyBool_Check(cpy_r_r16))) {
        CPy_TypeError("bool", cpy_r_r16); cpy_r_r17 = 2;
    } else
        cpy_r_r17 = cpy_r_r16 == Py_True;
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile", 188, CPyStatic_fscache___globals);
        goto CPyL16;
    }
    return cpy_r_r17;
CPyL16: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL17: ;
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    goto CPyL7;
CPyL18: ;
    CPyTagged_DecRef(cpy_r_r9);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL16;
}

PyObject *CPyPy_fscache___FileSystemCache___isfile(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:isfile", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___isfile(arg_self, arg_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "isfile", 183, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___isfile__FileSystemCache_glue(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[176]; /* 'isfile' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_path};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4 == 2) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache___isfile__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:isfile__FileSystemCache_glue", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___isfile__FileSystemCache_glue(arg_self, arg_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "isfile__FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___isfile_case(PyObject *cpy_r_self, PyObject *cpy_r_path, PyObject *cpy_r_prefix) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    tuple_T2OO cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_head;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_tail;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_names;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_res;
    tuple_T3OOO cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 7, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_path); /* isfile */
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile_case", 204, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    if (cpy_r_r0) goto CPyL3;
    return 0;
CPyL3: ;
    cpy_r_r1 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_isfile_case_cache;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "isfile_case", "FileSystemCache", "isfile_case_cache", 207, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r1);
CPyL4: ;
    cpy_r_r2 = PyDict_Contains(cpy_r_r1, cpy_r_path);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile_case", 207, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL10;
    cpy_r_r5 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_isfile_case_cache;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "isfile_case", "FileSystemCache", "isfile_case_cache", 208, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r5);
CPyL7: ;
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r5, cpy_r_path);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile_case", 208, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    if (unlikely(!PyBool_Check(cpy_r_r6))) {
        CPy_TypeError("bool", cpy_r_r6); cpy_r_r7 = 2;
    } else
        cpy_r_r7 = cpy_r_r6 == Py_True;
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile_case", 208, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    return cpy_r_r7;
CPyL10: ;
    cpy_r_r8 = CPyModule_os;
    cpy_r_r9 = CPyStatics[142]; /* 'path' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile_case", 209, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    cpy_r_r11 = CPyStatics[369]; /* 'split' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile_case", 209, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    PyObject *cpy_r_r13[1] = {cpy_r_path};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile_case", 209, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    PyObject *__tmp2903;
    if (unlikely(!(PyTuple_Check(cpy_r_r15) && PyTuple_GET_SIZE(cpy_r_r15) == 2))) {
        __tmp2903 = NULL;
        goto __LL2904;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r15, 0))))
        __tmp2903 = PyTuple_GET_ITEM(cpy_r_r15, 0);
    else {
        __tmp2903 = NULL;
    }
    if (__tmp2903 == NULL) goto __LL2904;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r15, 1))))
        __tmp2903 = PyTuple_GET_ITEM(cpy_r_r15, 1);
    else {
        __tmp2903 = NULL;
    }
    if (__tmp2903 == NULL) goto __LL2904;
    __tmp2903 = cpy_r_r15;
__LL2904: ;
    if (unlikely(__tmp2903 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r15); cpy_r_r16 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2905 = PyTuple_GET_ITEM(cpy_r_r15, 0);
        CPy_INCREF(__tmp2905);
        PyObject *__tmp2906;
        if (likely(PyUnicode_Check(__tmp2905)))
            __tmp2906 = __tmp2905;
        else {
            CPy_TypeError("str", __tmp2905); 
            __tmp2906 = NULL;
        }
        cpy_r_r16.f0 = __tmp2906;
        PyObject *__tmp2907 = PyTuple_GET_ITEM(cpy_r_r15, 1);
        CPy_INCREF(__tmp2907);
        PyObject *__tmp2908;
        if (likely(PyUnicode_Check(__tmp2907)))
            __tmp2908 = __tmp2907;
        else {
            CPy_TypeError("str", __tmp2907); 
            __tmp2908 = NULL;
        }
        cpy_r_r16.f1 = __tmp2908;
    }
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16.f0 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile_case", 209, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    cpy_r_r17 = cpy_r_r16.f0;
    CPy_INCREF(cpy_r_r17);
    cpy_r_head = cpy_r_r17;
    cpy_r_r18 = cpy_r_r16.f1;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r16.f0);
    CPy_DECREF(cpy_r_r16.f1);
    cpy_r_tail = cpy_r_r18;
    cpy_r_r19 = CPyStr_IsTrue(cpy_r_tail);
    if (cpy_r_r19) {
        goto CPyL18;
    } else
        goto CPyL36;
CPyL15: ;
    cpy_r_r20 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_isfile_case_cache;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "isfile_case", "FileSystemCache", "isfile_case_cache", 211, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r20);
CPyL16: ;
    cpy_r_r21 = 0 ? Py_True : Py_False;
    cpy_r_r22 = CPyDict_SetItem(cpy_r_r20, cpy_r_path, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile_case", 211, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    return 0;
CPyL18: ;
    cpy_r_r24 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 6, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_head); /* listdir */
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile_case", 214, CPyStatic_fscache___globals);
        goto CPyL37;
    }
    cpy_r_names = cpy_r_r24;
    cpy_r_r25 = PySequence_Contains(cpy_r_names, cpy_r_tail);
    CPy_DECREF(cpy_r_names);
    CPy_DECREF(cpy_r_tail);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile_case", 217, CPyStatic_fscache___globals);
        goto CPyL21;
    }
    cpy_r_r27 = cpy_r_r25;
    cpy_r_res = cpy_r_r27;
    goto CPyL29;
CPyL21: ;
    cpy_r_r28 = CPy_CatchError();
    cpy_r_r29 = CPyModule_builtins;
    cpy_r_r30 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile_case", 218, CPyStatic_fscache___globals);
        goto CPyL38;
    }
    cpy_r_r32 = CPy_ExceptionMatches(cpy_r_r31);
    CPy_DecRef(cpy_r_r31);
    if (!cpy_r_r32) goto CPyL39;
    cpy_r_res = 0;
    goto CPyL26;
CPyL24: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL27;
    } else
        goto CPyL40;
CPyL25: ;
    CPy_Unreachable();
CPyL26: ;
    CPy_RestoreExcInfo(cpy_r_r28);
    CPy_DecRef(cpy_r_r28.f0);
    CPy_DecRef(cpy_r_r28.f1);
    CPy_DecRef(cpy_r_r28.f2);
    goto CPyL29;
CPyL27: ;
    CPy_RestoreExcInfo(cpy_r_r28);
    CPy_DecRef(cpy_r_r28.f0);
    CPy_DecRef(cpy_r_r28.f1);
    CPy_DecRef(cpy_r_r28.f2);
    cpy_r_r33 = CPy_KeepPropagating();
    if (!cpy_r_r33) goto CPyL35;
    CPy_Unreachable();
CPyL29: ;
    if (!cpy_r_res) goto CPyL41;
    cpy_r_r34 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 9, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_self, cpy_r_head, cpy_r_prefix); /* exists_case */
    CPy_DECREF(cpy_r_head);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile_case", 222, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    cpy_r_res = cpy_r_r34;
CPyL32: ;
    cpy_r_r35 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_isfile_case_cache;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "isfile_case", "FileSystemCache", "isfile_case_cache", 223, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r35);
CPyL33: ;
    cpy_r_r36 = cpy_r_res ? Py_True : Py_False;
    cpy_r_r37 = CPyDict_SetItem(cpy_r_r35, cpy_r_path, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/fscache.py", "isfile_case", 223, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    return cpy_r_res;
CPyL35: ;
    cpy_r_r39 = 2;
    return cpy_r_r39;
CPyL36: ;
    CPy_DECREF(cpy_r_head);
    CPy_DECREF(cpy_r_tail);
    goto CPyL15;
CPyL37: ;
    CPy_DecRef(cpy_r_tail);
    goto CPyL21;
CPyL38: ;
    CPy_DecRef(cpy_r_head);
    goto CPyL27;
CPyL39: ;
    CPy_DecRef(cpy_r_head);
    goto CPyL24;
CPyL40: ;
    CPy_DecRef(cpy_r_r28.f0);
    CPy_DecRef(cpy_r_r28.f1);
    CPy_DecRef(cpy_r_r28.f2);
    goto CPyL25;
CPyL41: ;
    CPy_DECREF(cpy_r_head);
    goto CPyL32;
}

PyObject *CPyPy_fscache___FileSystemCache___isfile_case(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", "prefix", 0};
    static CPyArg_Parser parser = {"OO:isfile_case", kwlist, 0};
    PyObject *obj_path;
    PyObject *obj_prefix;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_path, &obj_prefix)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_prefix;
    if (likely(PyUnicode_Check(obj_prefix)))
        arg_prefix = obj_prefix;
    else {
        CPy_TypeError("str", obj_prefix); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___isfile_case(arg_self, arg_path, arg_prefix);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "isfile_case", 190, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___isfile_case__FileSystemCache_glue(PyObject *cpy_r_self, PyObject *cpy_r_path, PyObject *cpy_r_prefix) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[2588]; /* 'isfile_case' */
    PyObject *cpy_r_r1[3] = {cpy_r_self, cpy_r_path, cpy_r_prefix};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775811ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4 == 2) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache___isfile_case__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", "prefix", 0};
    static CPyArg_Parser parser = {"OO:isfile_case__FileSystemCache_glue", kwlist, 0};
    PyObject *obj_path;
    PyObject *obj_prefix;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_path, &obj_prefix)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_prefix;
    if (likely(PyUnicode_Check(obj_prefix)))
        arg_prefix = obj_prefix;
    else {
        CPy_TypeError("str", obj_prefix); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___isfile_case__FileSystemCache_glue(arg_self, arg_path, arg_prefix);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "isfile_case__FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___exists_case(PyObject *cpy_r_self, PyObject *cpy_r_path, PyObject *cpy_r_prefix) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T2OO cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_head;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_tail;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_names;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_res;
    tuple_T3OOO cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    cpy_r_r0 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_exists_case_cache;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "exists_case", "FileSystemCache", "exists_case_cache", 230, CPyStatic_fscache___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_path);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/fscache.py", "exists_case", 230, CPyStatic_fscache___globals);
        goto CPyL33;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL7;
    cpy_r_r4 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_exists_case_cache;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "exists_case", "FileSystemCache", "exists_case_cache", 231, CPyStatic_fscache___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r4, cpy_r_path);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "exists_case", 231, CPyStatic_fscache___globals);
        goto CPyL33;
    }
    if (unlikely(!PyBool_Check(cpy_r_r5))) {
        CPy_TypeError("bool", cpy_r_r5); cpy_r_r6 = 2;
    } else
        cpy_r_r6 = cpy_r_r5 == Py_True;
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "exists_case", 231, CPyStatic_fscache___globals);
        goto CPyL33;
    }
    return cpy_r_r6;
CPyL7: ;
    cpy_r_r7 = CPyModule_os;
    cpy_r_r8 = CPyStatics[142]; /* 'path' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "exists_case", 232, CPyStatic_fscache___globals);
        goto CPyL33;
    }
    cpy_r_r10 = CPyStatics[369]; /* 'split' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "exists_case", 232, CPyStatic_fscache___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r12[1] = {cpy_r_path};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 1, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "exists_case", 232, CPyStatic_fscache___globals);
        goto CPyL33;
    }
    PyObject *__tmp2909;
    if (unlikely(!(PyTuple_Check(cpy_r_r14) && PyTuple_GET_SIZE(cpy_r_r14) == 2))) {
        __tmp2909 = NULL;
        goto __LL2910;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r14, 0))))
        __tmp2909 = PyTuple_GET_ITEM(cpy_r_r14, 0);
    else {
        __tmp2909 = NULL;
    }
    if (__tmp2909 == NULL) goto __LL2910;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r14, 1))))
        __tmp2909 = PyTuple_GET_ITEM(cpy_r_r14, 1);
    else {
        __tmp2909 = NULL;
    }
    if (__tmp2909 == NULL) goto __LL2910;
    __tmp2909 = cpy_r_r14;
__LL2910: ;
    if (unlikely(__tmp2909 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r14); cpy_r_r15 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2911 = PyTuple_GET_ITEM(cpy_r_r14, 0);
        CPy_INCREF(__tmp2911);
        PyObject *__tmp2912;
        if (likely(PyUnicode_Check(__tmp2911)))
            __tmp2912 = __tmp2911;
        else {
            CPy_TypeError("str", __tmp2911); 
            __tmp2912 = NULL;
        }
        cpy_r_r15.f0 = __tmp2912;
        PyObject *__tmp2913 = PyTuple_GET_ITEM(cpy_r_r14, 1);
        CPy_INCREF(__tmp2913);
        PyObject *__tmp2914;
        if (likely(PyUnicode_Check(__tmp2913)))
            __tmp2914 = __tmp2913;
        else {
            CPy_TypeError("str", __tmp2913); 
            __tmp2914 = NULL;
        }
        cpy_r_r15.f1 = __tmp2914;
    }
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15.f0 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "exists_case", 232, CPyStatic_fscache___globals);
        goto CPyL33;
    }
    cpy_r_r16 = cpy_r_r15.f0;
    CPy_INCREF(cpy_r_r16);
    cpy_r_head = cpy_r_r16;
    cpy_r_r17 = cpy_r_r15.f1;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r15.f0);
    CPy_DECREF(cpy_r_r15.f1);
    cpy_r_tail = cpy_r_r17;
    cpy_r_r18 = CPyStr_Startswith(cpy_r_head, cpy_r_prefix);
    if (!cpy_r_r18) goto CPyL34;
    cpy_r_r19 = CPyStr_IsTrue(cpy_r_tail);
    if (cpy_r_r19) {
        goto CPyL16;
    } else
        goto CPyL34;
CPyL13: ;
    cpy_r_r20 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_exists_case_cache;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "exists_case", "FileSystemCache", "exists_case_cache", 235, CPyStatic_fscache___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r20);
CPyL14: ;
    cpy_r_r21 = 1 ? Py_True : Py_False;
    cpy_r_r22 = CPyDict_SetItem(cpy_r_r20, cpy_r_path, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/fscache.py", "exists_case", 235, CPyStatic_fscache___globals);
        goto CPyL33;
    }
    return 1;
CPyL16: ;
    cpy_r_r24 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 6, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_head); /* listdir */
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "exists_case", 238, CPyStatic_fscache___globals);
        goto CPyL35;
    }
    cpy_r_names = cpy_r_r24;
    cpy_r_r25 = PySequence_Contains(cpy_r_names, cpy_r_tail);
    CPy_DECREF(cpy_r_names);
    CPy_DECREF(cpy_r_tail);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/fscache.py", "exists_case", 241, CPyStatic_fscache___globals);
        goto CPyL19;
    }
    cpy_r_r27 = cpy_r_r25;
    cpy_r_res = cpy_r_r27;
    goto CPyL27;
CPyL19: ;
    cpy_r_r28 = CPy_CatchError();
    cpy_r_r29 = CPyModule_builtins;
    cpy_r_r30 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "exists_case", 242, CPyStatic_fscache___globals);
        goto CPyL36;
    }
    cpy_r_r32 = CPy_ExceptionMatches(cpy_r_r31);
    CPy_DecRef(cpy_r_r31);
    if (!cpy_r_r32) goto CPyL37;
    cpy_r_res = 0;
    goto CPyL24;
CPyL22: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL25;
    } else
        goto CPyL38;
CPyL23: ;
    CPy_Unreachable();
CPyL24: ;
    CPy_RestoreExcInfo(cpy_r_r28);
    CPy_DecRef(cpy_r_r28.f0);
    CPy_DecRef(cpy_r_r28.f1);
    CPy_DecRef(cpy_r_r28.f2);
    goto CPyL27;
CPyL25: ;
    CPy_RestoreExcInfo(cpy_r_r28);
    CPy_DecRef(cpy_r_r28.f0);
    CPy_DecRef(cpy_r_r28.f1);
    CPy_DecRef(cpy_r_r28.f2);
    cpy_r_r33 = CPy_KeepPropagating();
    if (!cpy_r_r33) goto CPyL33;
    CPy_Unreachable();
CPyL27: ;
    if (!cpy_r_res) goto CPyL39;
    cpy_r_r34 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 9, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_self, cpy_r_head, cpy_r_prefix); /* exists_case */
    CPy_DECREF(cpy_r_head);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "exists_case", 246, CPyStatic_fscache___globals);
        goto CPyL33;
    }
    cpy_r_res = cpy_r_r34;
CPyL30: ;
    cpy_r_r35 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_exists_case_cache;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "exists_case", "FileSystemCache", "exists_case_cache", 247, CPyStatic_fscache___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r35);
CPyL31: ;
    cpy_r_r36 = cpy_r_res ? Py_True : Py_False;
    cpy_r_r37 = CPyDict_SetItem(cpy_r_r35, cpy_r_path, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/fscache.py", "exists_case", 247, CPyStatic_fscache___globals);
        goto CPyL33;
    }
    return cpy_r_res;
CPyL33: ;
    cpy_r_r39 = 2;
    return cpy_r_r39;
CPyL34: ;
    CPy_DECREF(cpy_r_head);
    CPy_DECREF(cpy_r_tail);
    goto CPyL13;
CPyL35: ;
    CPy_DecRef(cpy_r_tail);
    goto CPyL19;
CPyL36: ;
    CPy_DecRef(cpy_r_head);
    goto CPyL25;
CPyL37: ;
    CPy_DecRef(cpy_r_head);
    goto CPyL22;
CPyL38: ;
    CPy_DecRef(cpy_r_r28.f0);
    CPy_DecRef(cpy_r_r28.f1);
    CPy_DecRef(cpy_r_r28.f2);
    goto CPyL23;
CPyL39: ;
    CPy_DECREF(cpy_r_head);
    goto CPyL30;
}

PyObject *CPyPy_fscache___FileSystemCache___exists_case(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", "prefix", 0};
    static CPyArg_Parser parser = {"OO:exists_case", kwlist, 0};
    PyObject *obj_path;
    PyObject *obj_prefix;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_path, &obj_prefix)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_prefix;
    if (likely(PyUnicode_Check(obj_prefix)))
        arg_prefix = obj_prefix;
    else {
        CPy_TypeError("str", obj_prefix); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___exists_case(arg_self, arg_path, arg_prefix);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "exists_case", 226, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___exists_case__FileSystemCache_glue(PyObject *cpy_r_self, PyObject *cpy_r_path, PyObject *cpy_r_prefix) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[2589]; /* 'exists_case' */
    PyObject *cpy_r_r1[3] = {cpy_r_self, cpy_r_path, cpy_r_prefix};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775811ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4 == 2) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache___exists_case__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", "prefix", 0};
    static CPyArg_Parser parser = {"OO:exists_case__FileSystemCache_glue", kwlist, 0};
    PyObject *obj_path;
    PyObject *obj_prefix;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_path, &obj_prefix)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_prefix;
    if (likely(PyUnicode_Check(obj_prefix)))
        arg_prefix = obj_prefix;
    else {
        CPy_TypeError("str", obj_prefix); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___exists_case__FileSystemCache_glue(arg_self, arg_path, arg_prefix);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "exists_case__FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___isdir(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_st;
    tuple_T3OOO cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 3, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_path); /* stat */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isdir", 252, CPyStatic_fscache___globals);
        goto CPyL3;
    }
    cpy_r_st = cpy_r_r0;
    goto CPyL10;
CPyL3: ;
    cpy_r_r1 = CPy_CatchError();
    cpy_r_r2 = CPyModule_builtins;
    cpy_r_r3 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isdir", 253, CPyStatic_fscache___globals);
        goto CPyL8;
    }
    cpy_r_r5 = CPy_ExceptionMatches(cpy_r_r4);
    CPy_DecRef(cpy_r_r4);
    if (!cpy_r_r5) goto CPyL6;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    return 0;
CPyL6: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL8;
    } else
        goto CPyL17;
CPyL7: ;
    CPy_Unreachable();
CPyL8: ;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    cpy_r_r6 = CPy_KeepPropagating();
    if (!cpy_r_r6) goto CPyL16;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r7 = CPyStatics[320]; /* 'st_mode' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_st, cpy_r_r7);
    CPy_DECREF(cpy_r_st);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isdir", 255, CPyStatic_fscache___globals);
        goto CPyL16;
    }
    if (likely(PyLong_Check(cpy_r_r8)))
        cpy_r_r9 = CPyTagged_FromObject(cpy_r_r8);
    else {
        CPy_TypeError("int", cpy_r_r8); cpy_r_r9 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fscache.py", "isdir", 255, CPyStatic_fscache___globals);
        goto CPyL16;
    }
    cpy_r_r10 = CPyModule_stat;
    cpy_r_r11 = CPyStatics[321]; /* 'S_ISDIR' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isdir", 255, CPyStatic_fscache___globals);
        goto CPyL18;
    }
    cpy_r_r13 = CPyTagged_StealAsObject(cpy_r_r9);
    PyObject *cpy_r_r14[1] = {cpy_r_r13};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "isdir", 255, CPyStatic_fscache___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_r13);
    if (unlikely(!PyBool_Check(cpy_r_r16))) {
        CPy_TypeError("bool", cpy_r_r16); cpy_r_r17 = 2;
    } else
        cpy_r_r17 = cpy_r_r16 == Py_True;
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "isdir", 255, CPyStatic_fscache___globals);
        goto CPyL16;
    }
    return cpy_r_r17;
CPyL16: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL17: ;
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    goto CPyL7;
CPyL18: ;
    CPyTagged_DecRef(cpy_r_r9);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL16;
}

PyObject *CPyPy_fscache___FileSystemCache___isdir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:isdir", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___isdir(arg_self, arg_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "isdir", 250, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___isdir__FileSystemCache_glue(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[143]; /* 'isdir' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_path};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4 == 2) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache___isdir__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:isdir__FileSystemCache_glue", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___isdir__FileSystemCache_glue(arg_self, arg_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "isdir__FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___exists(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    tuple_T3OOO cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 3, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_path); /* stat */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "exists", 259, CPyStatic_fscache___globals);
    } else
        goto CPyL11;
    cpy_r_r1 = CPy_CatchError();
    cpy_r_r2 = CPyModule_builtins;
    cpy_r_r3 = CPyStatics[269]; /* 'FileNotFoundError' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "exists", 260, CPyStatic_fscache___globals);
        goto CPyL7;
    }
    cpy_r_r5 = CPy_ExceptionMatches(cpy_r_r4);
    CPy_DecRef(cpy_r_r4);
    if (!cpy_r_r5) goto CPyL5;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    return 0;
CPyL5: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL7;
    } else
        goto CPyL12;
CPyL6: ;
    CPy_Unreachable();
CPyL7: ;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    cpy_r_r6 = CPy_KeepPropagating();
    if (!cpy_r_r6) goto CPyL10;
    CPy_Unreachable();
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL11: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    goto CPyL6;
}

PyObject *CPyPy_fscache___FileSystemCache___exists(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:exists", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___exists(arg_self, arg_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "exists", 257, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___exists__FileSystemCache_glue(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[1500]; /* 'exists' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_path};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4 == 2) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache___exists__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:exists__FileSystemCache_glue", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___exists__FileSystemCache_glue(arg_self, arg_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "exists__FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

PyObject *CPyDef_fscache___FileSystemCache___read(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_data;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
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
    tuple_T2OO cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_dirname;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_basename;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
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
    char cpy_r_r62;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    tuple_T3OOO cpy_r_r68;
    tuple_T3OOO cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    tuple_T3OOO cpy_r_r80;
    tuple_T3OOO cpy_r_r81;
    tuple_T3OOO cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    tuple_T3OOO cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    cpy_r_r0 = NULL;
    cpy_r_data = cpy_r_r0;
    cpy_r_r1 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_read_cache;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "read", "FileSystemCache", "read_cache", 265, CPyStatic_fscache___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PyDict_Contains(cpy_r_r1, cpy_r_path);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 265, CPyStatic_fscache___globals);
        goto CPyL86;
    }
    cpy_r_r4 = cpy_r_r2;
    if (cpy_r_r4) {
        goto CPyL87;
    } else
        goto CPyL7;
CPyL3: ;
    cpy_r_r5 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_read_cache;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "read", "FileSystemCache", "read_cache", 266, CPyStatic_fscache___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r5);
CPyL4: ;
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r5, cpy_r_path);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 266, CPyStatic_fscache___globals);
        goto CPyL85;
    }
    if (likely(PyBytes_Check(cpy_r_r6) || PyByteArray_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "read", 266, CPyStatic_fscache___globals, "bytes", cpy_r_r6);
        goto CPyL85;
    }
    return cpy_r_r7;
CPyL7: ;
    cpy_r_r8 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_read_error_cache;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "read", "FileSystemCache", "read_error_cache", 267, CPyStatic_fscache___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r8);
CPyL8: ;
    cpy_r_r9 = PyDict_Contains(cpy_r_r8, cpy_r_path);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 267, CPyStatic_fscache___globals);
        goto CPyL86;
    }
    cpy_r_r11 = cpy_r_r9;
    if (cpy_r_r11) {
        goto CPyL88;
    } else
        goto CPyL14;
CPyL10: ;
    cpy_r_r12 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_read_error_cache;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "read", "FileSystemCache", "read_error_cache", 268, CPyStatic_fscache___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r12);
CPyL11: ;
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r12, cpy_r_path);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 268, CPyStatic_fscache___globals);
        goto CPyL85;
    }
    CPy_Raise(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 268, CPyStatic_fscache___globals);
        goto CPyL85;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r14 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 3, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_path); /* stat */
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 272, CPyStatic_fscache___globals);
        goto CPyL86;
    } else
        goto CPyL89;
CPyL15: ;
    cpy_r_r15 = CPyModule_os;
    cpy_r_r16 = CPyStatics[142]; /* 'path' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 274, CPyStatic_fscache___globals);
        goto CPyL86;
    }
    cpy_r_r18 = CPyStatics[369]; /* 'split' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 274, CPyStatic_fscache___globals);
        goto CPyL86;
    }
    PyObject *cpy_r_r20[1] = {cpy_r_path};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = _PyObject_Vectorcall(cpy_r_r19, cpy_r_r21, 1, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 274, CPyStatic_fscache___globals);
        goto CPyL86;
    }
    PyObject *__tmp2915;
    if (unlikely(!(PyTuple_Check(cpy_r_r22) && PyTuple_GET_SIZE(cpy_r_r22) == 2))) {
        __tmp2915 = NULL;
        goto __LL2916;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r22, 0))))
        __tmp2915 = PyTuple_GET_ITEM(cpy_r_r22, 0);
    else {
        __tmp2915 = NULL;
    }
    if (__tmp2915 == NULL) goto __LL2916;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r22, 1))))
        __tmp2915 = PyTuple_GET_ITEM(cpy_r_r22, 1);
    else {
        __tmp2915 = NULL;
    }
    if (__tmp2915 == NULL) goto __LL2916;
    __tmp2915 = cpy_r_r22;
__LL2916: ;
    if (unlikely(__tmp2915 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r22); cpy_r_r23 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2917 = PyTuple_GET_ITEM(cpy_r_r22, 0);
        CPy_INCREF(__tmp2917);
        PyObject *__tmp2918;
        if (likely(PyUnicode_Check(__tmp2917)))
            __tmp2918 = __tmp2917;
        else {
            CPy_TypeError("str", __tmp2917); 
            __tmp2918 = NULL;
        }
        cpy_r_r23.f0 = __tmp2918;
        PyObject *__tmp2919 = PyTuple_GET_ITEM(cpy_r_r22, 1);
        CPy_INCREF(__tmp2919);
        PyObject *__tmp2920;
        if (likely(PyUnicode_Check(__tmp2919)))
            __tmp2920 = __tmp2919;
        else {
            CPy_TypeError("str", __tmp2919); 
            __tmp2920 = NULL;
        }
        cpy_r_r23.f1 = __tmp2920;
    }
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23.f0 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 274, CPyStatic_fscache___globals);
        goto CPyL86;
    }
    cpy_r_r24 = cpy_r_r23.f0;
    CPy_INCREF(cpy_r_r24);
    cpy_r_dirname = cpy_r_r24;
    cpy_r_r25 = cpy_r_r23.f1;
    CPy_INCREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r23.f0);
    CPy_DECREF(cpy_r_r23.f1);
    cpy_r_basename = cpy_r_r25;
    cpy_r_r26 = CPyModule_os;
    cpy_r_r27 = CPyStatics[142]; /* 'path' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 275, CPyStatic_fscache___globals);
        goto CPyL90;
    }
    cpy_r_r29 = CPyStatics[2213]; /* 'normpath' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 275, CPyStatic_fscache___globals);
        goto CPyL90;
    }
    PyObject *cpy_r_r31[1] = {cpy_r_dirname};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = _PyObject_Vectorcall(cpy_r_r30, cpy_r_r32, 1, 0);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 275, CPyStatic_fscache___globals);
        goto CPyL90;
    }
    CPy_DECREF(cpy_r_dirname);
    if (likely(PyUnicode_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "read", 275, CPyStatic_fscache___globals, "str", cpy_r_r33);
        goto CPyL91;
    }
    cpy_r_dirname = cpy_r_r34;
    cpy_r_r35 = CPyStatics[287]; /* '__init__.py' */
    cpy_r_r36 = PyUnicode_Compare(cpy_r_basename, cpy_r_r35);
    CPy_DECREF(cpy_r_basename);
    cpy_r_r37 = cpy_r_r36 == -1;
    if (!cpy_r_r37) goto CPyL26;
    cpy_r_r38 = PyErr_Occurred();
    cpy_r_r39 = cpy_r_r38 != NULL;
    if (!cpy_r_r39) goto CPyL26;
    cpy_r_r40 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 277, CPyStatic_fscache___globals);
        goto CPyL92;
    }
CPyL26: ;
    cpy_r_r41 = cpy_r_r36 == 0;
    if (!cpy_r_r41) goto CPyL93;
    cpy_r_r42 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_fake_package_cache;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "read", "FileSystemCache", "fake_package_cache", 277, CPyStatic_fscache___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r42);
CPyL28: ;
    cpy_r_r43 = PySet_Contains(cpy_r_r42, cpy_r_dirname);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_dirname);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 277, CPyStatic_fscache___globals);
        goto CPyL86;
    }
    cpy_r_r45 = cpy_r_r43;
    if (cpy_r_r45) {
        goto CPyL94;
    } else
        goto CPyL31;
CPyL30: ;
    cpy_r_r46 = CPyStatics[9009]; /* b'' */
    CPy_INCREF(cpy_r_r46);
    cpy_r_data = cpy_r_r46;
    goto CPyL70;
CPyL31: ;
    cpy_r_r47 = CPyStatics[198]; /* 'rb' */
    cpy_r_r48 = CPyModule_builtins;
    cpy_r_r49 = CPyStatics[199]; /* 'open' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 281, CPyStatic_fscache___globals);
        goto CPyL95;
    }
    PyObject *cpy_r_r51[2] = {cpy_r_path, cpy_r_r47};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = _PyObject_Vectorcall(cpy_r_r50, cpy_r_r52, 2, 0);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 281, CPyStatic_fscache___globals);
        goto CPyL95;
    }
    cpy_r_r54 = PyObject_Type(cpy_r_r53);
    cpy_r_r55 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r56 = CPyObject_GetAttr(cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 281, CPyStatic_fscache___globals);
        goto CPyL96;
    }
    cpy_r_r57 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_r54, cpy_r_r57);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 281, CPyStatic_fscache___globals);
        goto CPyL97;
    }
    PyObject *cpy_r_r59[1] = {cpy_r_r53};
    cpy_r_r60 = (PyObject **)&cpy_r_r59;
    cpy_r_r61 = _PyObject_Vectorcall(cpy_r_r58, cpy_r_r60, 1, 0);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 281, CPyStatic_fscache___globals);
        goto CPyL97;
    }
    cpy_r_r62 = 1;
    cpy_r_f = cpy_r_r61;
    cpy_r_r63 = CPyStatics[141]; /* 'read' */
    PyObject *cpy_r_r64[1] = {cpy_r_f};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = PyObject_VectorcallMethod(cpy_r_r63, cpy_r_r65, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 282, CPyStatic_fscache___globals);
        goto CPyL98;
    }
    CPy_DECREF(cpy_r_f);
    if (likely(PyBytes_Check(cpy_r_r66) || PyByteArray_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeError("bytes", cpy_r_r66); 
        cpy_r_r67 = NULL;
    }
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 282, CPyStatic_fscache___globals);
        goto CPyL40;
    } else
        goto CPyL99;
CPyL39: ;
    cpy_r_data = cpy_r_r67;
    goto CPyL48;
CPyL40: ;
    cpy_r_r68 = CPy_CatchError();
    cpy_r_r62 = 0;
    cpy_r_r69 = CPy_GetExcInfo();
    cpy_r_r70 = cpy_r_r69.f0;
    CPy_INCREF(cpy_r_r70);
    cpy_r_r71 = cpy_r_r69.f1;
    CPy_INCREF(cpy_r_r71);
    cpy_r_r72 = cpy_r_r69.f2;
    CPy_INCREF(cpy_r_r72);
    CPy_DecRef(cpy_r_r69.f0);
    CPy_DecRef(cpy_r_r69.f1);
    CPy_DecRef(cpy_r_r69.f2);
    PyObject *cpy_r_r73[4] = {cpy_r_r53, cpy_r_r70, cpy_r_r71, cpy_r_r72};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = _PyObject_Vectorcall(cpy_r_r56, cpy_r_r74, 4, 0);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 281, CPyStatic_fscache___globals);
        goto CPyL100;
    }
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r72);
    cpy_r_r76 = PyObject_IsTrue(cpy_r_r75);
    CPy_DecRef(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 281, CPyStatic_fscache___globals);
        goto CPyL46;
    }
    cpy_r_r78 = cpy_r_r76;
    if (cpy_r_r78) goto CPyL45;
    CPy_Reraise();
    if (!0) {
        goto CPyL46;
    } else
        goto CPyL101;
CPyL44: ;
    CPy_Unreachable();
CPyL45: ;
    CPy_RestoreExcInfo(cpy_r_r68);
    CPy_DecRef(cpy_r_r68.f0);
    CPy_DecRef(cpy_r_r68.f1);
    CPy_DecRef(cpy_r_r68.f2);
    goto CPyL48;
CPyL46: ;
    CPy_RestoreExcInfo(cpy_r_r68);
    CPy_DecRef(cpy_r_r68.f0);
    CPy_DecRef(cpy_r_r68.f1);
    CPy_DecRef(cpy_r_r68.f2);
    cpy_r_r79 = CPy_KeepPropagating();
    if (!cpy_r_r79) {
        goto CPyL49;
    } else
        goto CPyL102;
CPyL47: ;
    CPy_Unreachable();
CPyL48: ;
    tuple_T3OOO __tmp2921 = { NULL, NULL, NULL };
    cpy_r_r80 = __tmp2921;
    cpy_r_r81 = cpy_r_r80;
    goto CPyL50;
CPyL49: ;
    cpy_r_r82 = CPy_CatchError();
    cpy_r_r81 = cpy_r_r82;
CPyL50: ;
    if (!cpy_r_r62) goto CPyL103;
    cpy_r_r83 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r84[4] = {cpy_r_r53, cpy_r_r83, cpy_r_r83, cpy_r_r83};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = _PyObject_Vectorcall(cpy_r_r56, cpy_r_r85, 4, 0);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 281, CPyStatic_fscache___globals);
        goto CPyL104;
    } else
        goto CPyL105;
CPyL52: ;
    CPy_DECREF(cpy_r_r53);
CPyL53: ;
    if (cpy_r_r81.f0 == NULL) {
        goto CPyL70;
    } else
        goto CPyL106;
CPyL54: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL56;
    } else
        goto CPyL107;
CPyL55: ;
    CPy_Unreachable();
CPyL56: ;
    if (cpy_r_r81.f0 == NULL) goto CPyL58;
    CPy_RestoreExcInfo(cpy_r_r81);
    CPy_XDECREF(cpy_r_r81.f0);
    CPy_XDECREF(cpy_r_r81.f1);
    CPy_XDECREF(cpy_r_r81.f2);
CPyL58: ;
    cpy_r_r87 = CPy_KeepPropagating();
    if (!cpy_r_r87) goto CPyL60;
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r88 = CPy_CatchError();
    cpy_r_r89 = CPyModule_builtins;
    cpy_r_r90 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r91 = CPyObject_GetAttr(cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 283, CPyStatic_fscache___globals);
        goto CPyL68;
    }
    cpy_r_r92 = CPy_ExceptionMatches(cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    if (!cpy_r_r92) goto CPyL66;
    cpy_r_r93 = CPy_GetExcValue();
    cpy_r_err = cpy_r_r93;
    cpy_r_r94 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_read_error_cache;
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "read", "FileSystemCache", "read_error_cache", 284, CPyStatic_fscache___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r94);
CPyL63: ;
    cpy_r_r95 = CPyDict_SetItem(cpy_r_r94, cpy_r_path, cpy_r_err);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_err);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 284, CPyStatic_fscache___globals);
        goto CPyL68;
    }
    CPy_Reraise();
    if (!0) {
        goto CPyL68;
    } else
        goto CPyL109;
CPyL65: ;
    CPy_Unreachable();
CPyL66: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL68;
    } else
        goto CPyL110;
CPyL67: ;
    CPy_Unreachable();
CPyL68: ;
    CPy_RestoreExcInfo(cpy_r_r88);
    CPy_DECREF(cpy_r_r88.f0);
    CPy_DECREF(cpy_r_r88.f1);
    CPy_DECREF(cpy_r_r88.f2);
    cpy_r_r97 = CPy_KeepPropagating();
    if (!cpy_r_r97) goto CPyL85;
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r98 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_read_cache;
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "read", "FileSystemCache", "read_cache", 287, CPyStatic_fscache___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r98);
CPyL71: ;
    if (cpy_r_data == NULL) {
        goto CPyL111;
    } else
        goto CPyL74;
CPyL72: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"data\" referenced before assignment");
    cpy_r_r99 = 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 287, CPyStatic_fscache___globals);
        goto CPyL85;
    }
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r100 = CPyDict_SetItem(cpy_r_r98, cpy_r_path, cpy_r_data);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 287, CPyStatic_fscache___globals);
        goto CPyL86;
    }
    if (cpy_r_data != NULL) goto CPyL78;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"data\" referenced before assignment");
    cpy_r_r102 = 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 288, CPyStatic_fscache___globals);
        goto CPyL85;
    }
    CPy_Unreachable();
CPyL78: ;
    cpy_r_r103 = CPyDef_mypy___util___hash_digest(cpy_r_data);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 288, CPyStatic_fscache___globals);
        goto CPyL86;
    }
    cpy_r_r104 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_hash_cache;
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "read", "FileSystemCache", "hash_cache", 288, CPyStatic_fscache___globals);
        goto CPyL112;
    }
    CPy_INCREF(cpy_r_r104);
CPyL80: ;
    cpy_r_r105 = CPyDict_SetItem(cpy_r_r104, cpy_r_path, cpy_r_r103);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r103);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypy/fscache.py", "read", 288, CPyStatic_fscache___globals);
        goto CPyL86;
    }
    if (cpy_r_data != NULL) goto CPyL84;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"data\" referenced before assignment");
    cpy_r_r107 = 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/fscache.py", "read", -1, CPyStatic_fscache___globals);
        goto CPyL85;
    }
    CPy_Unreachable();
CPyL84: ;
    return cpy_r_data;
CPyL85: ;
    cpy_r_r108 = NULL;
    return cpy_r_r108;
CPyL86: ;
    CPy_XDecRef(cpy_r_data);
    goto CPyL85;
CPyL87: ;
    CPy_XDECREF(cpy_r_data);
    goto CPyL3;
CPyL88: ;
    CPy_XDECREF(cpy_r_data);
    goto CPyL10;
CPyL89: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL15;
CPyL90: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_dirname);
    CPy_DecRef(cpy_r_basename);
    goto CPyL85;
CPyL91: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_basename);
    goto CPyL85;
CPyL92: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_dirname);
    goto CPyL85;
CPyL93: ;
    CPy_DECREF(cpy_r_dirname);
    goto CPyL31;
CPyL94: ;
    CPy_XDECREF(cpy_r_data);
    goto CPyL30;
CPyL95: ;
    CPy_XDecRef(cpy_r_data);
    goto CPyL60;
CPyL96: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    goto CPyL60;
CPyL97: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r56);
    goto CPyL60;
CPyL98: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL40;
CPyL99: ;
    CPy_XDECREF(cpy_r_data);
    goto CPyL39;
CPyL100: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r72);
    goto CPyL46;
CPyL101: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r68.f0);
    CPy_DecRef(cpy_r_r68.f1);
    CPy_DecRef(cpy_r_r68.f2);
    goto CPyL44;
CPyL102: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r56);
    goto CPyL47;
CPyL103: ;
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r56);
    goto CPyL53;
CPyL104: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r53);
    goto CPyL56;
CPyL105: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL52;
CPyL106: ;
    CPy_XDECREF(cpy_r_data);
    goto CPyL54;
CPyL107: ;
    CPy_XDECREF(cpy_r_r81.f0);
    CPy_XDECREF(cpy_r_r81.f1);
    CPy_XDECREF(cpy_r_r81.f2);
    goto CPyL55;
CPyL108: ;
    CPy_DecRef(cpy_r_err);
    goto CPyL68;
CPyL109: ;
    CPy_DECREF(cpy_r_r88.f0);
    CPy_DECREF(cpy_r_r88.f1);
    CPy_DECREF(cpy_r_r88.f2);
    goto CPyL65;
CPyL110: ;
    CPy_DECREF(cpy_r_r88.f0);
    CPy_DECREF(cpy_r_r88.f1);
    CPy_DECREF(cpy_r_r88.f2);
    goto CPyL67;
CPyL111: ;
    CPy_DECREF(cpy_r_r98);
    goto CPyL72;
CPyL112: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r103);
    goto CPyL85;
}

PyObject *CPyPy_fscache___FileSystemCache___read(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:read", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_fscache___FileSystemCache___read(arg_self, arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "read", 264, CPyStatic_fscache___globals);
    return NULL;
}

PyObject *CPyDef_fscache___FileSystemCache___read__FileSystemCache_glue(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[141]; /* 'read' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_path};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyBytes_Check(cpy_r_r3) || PyByteArray_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("bytes", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache___read__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:read__FileSystemCache_glue", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_fscache___FileSystemCache___read__FileSystemCache_glue(arg_self, arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "read__FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

PyObject *CPyDef_fscache___FileSystemCache___hash_digest(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_hash_cache;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "hash_digest", "FileSystemCache", "hash_cache", 292, CPyStatic_fscache___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_path);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/fscache.py", "hash_digest", 292, CPyStatic_fscache___globals);
        goto CPyL8;
    }
    cpy_r_r3 = cpy_r_r1;
    cpy_r_r4 = cpy_r_r3 ^ 1;
    if (!cpy_r_r4) goto CPyL4;
    cpy_r_r5 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 12, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_path); /* read */
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "hash_digest", 293, CPyStatic_fscache___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL4: ;
    cpy_r_r6 = ((mypy___fscache___FileSystemCacheObject *)cpy_r_self)->_hash_cache;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/fscache.py", "hash_digest", "FileSystemCache", "hash_cache", 294, CPyStatic_fscache___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r6, cpy_r_path);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "hash_digest", 294, CPyStatic_fscache___globals);
        goto CPyL8;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "hash_digest", 294, CPyStatic_fscache___globals, "str", cpy_r_r7);
        goto CPyL8;
    }
    return cpy_r_r8;
CPyL8: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL9: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL4;
}

PyObject *CPyPy_fscache___FileSystemCache___hash_digest(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:hash_digest", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_fscache___FileSystemCache___hash_digest(arg_self, arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "hash_digest", 291, CPyStatic_fscache___globals);
    return NULL;
}

PyObject *CPyDef_fscache___FileSystemCache___hash_digest__FileSystemCache_glue(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[547]; /* 'hash_digest' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_path};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("str", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache___hash_digest__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:hash_digest__FileSystemCache_glue", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_fscache___FileSystemCache___hash_digest__FileSystemCache_glue(arg_self, arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "hash_digest__FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___samefile(PyObject *cpy_r_self, PyObject *cpy_r_f1, PyObject *cpy_r_f2) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_s1;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_s2;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 3, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_f1); /* stat */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "samefile", 297, CPyStatic_fscache___globals);
        goto CPyL7;
    }
    cpy_r_s1 = cpy_r_r0;
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_self, CPyType_fscache___FileSystemCache, 3, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_f2); /* stat */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "samefile", 298, CPyStatic_fscache___globals);
        goto CPyL8;
    }
    cpy_r_s2 = cpy_r_r1;
    cpy_r_r2 = CPyModule_os;
    cpy_r_r3 = CPyStatics[142]; /* 'path' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "samefile", 299, CPyStatic_fscache___globals);
        goto CPyL9;
    }
    cpy_r_r5 = CPyStatics[2590]; /* 'samestat' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "samefile", 299, CPyStatic_fscache___globals);
        goto CPyL9;
    }
    PyObject *cpy_r_r7[2] = {cpy_r_s1, cpy_r_s2};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 2, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "samefile", 299, CPyStatic_fscache___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_s1);
    CPy_DECREF(cpy_r_s2);
    if (unlikely(!PyBool_Check(cpy_r_r9))) {
        CPy_TypeError("bool", cpy_r_r9); cpy_r_r10 = 2;
    } else
        cpy_r_r10 = cpy_r_r9 == Py_True;
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "samefile", 299, CPyStatic_fscache___globals);
        goto CPyL7;
    }
    return cpy_r_r10;
CPyL7: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL8: ;
    CPy_DecRef(cpy_r_s1);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_s1);
    CPy_DecRef(cpy_r_s2);
    goto CPyL7;
}

PyObject *CPyPy_fscache___FileSystemCache___samefile(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"f1", "f2", 0};
    static CPyArg_Parser parser = {"OO:samefile", kwlist, 0};
    PyObject *obj_f1;
    PyObject *obj_f2;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_f1, &obj_f2)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_f1;
    if (likely(PyUnicode_Check(obj_f1)))
        arg_f1 = obj_f1;
    else {
        CPy_TypeError("str", obj_f1); 
        goto fail;
    }
    PyObject *arg_f2;
    if (likely(PyUnicode_Check(obj_f2)))
        arg_f2 = obj_f2;
    else {
        CPy_TypeError("str", obj_f2); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___samefile(arg_self, arg_f1, arg_f2);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "samefile", 296, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache___FileSystemCache___samefile__FileSystemCache_glue(PyObject *cpy_r_self, PyObject *cpy_r_f1, PyObject *cpy_r_f2) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[2591]; /* 'samefile' */
    PyObject *cpy_r_r1[3] = {cpy_r_self, cpy_r_f1, cpy_r_f2};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775811ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4 == 2) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_fscache___FileSystemCache___samefile__FileSystemCache_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"f1", "f2", 0};
    static CPyArg_Parser parser = {"OO:samefile__FileSystemCache_glue", kwlist, 0};
    PyObject *obj_f1;
    PyObject *obj_f2;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_f1, &obj_f2)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_fscache___FileSystemCache)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_self); 
        goto fail;
    }
    PyObject *arg_f1;
    if (likely(PyUnicode_Check(obj_f1)))
        arg_f1 = obj_f1;
    else {
        CPy_TypeError("str", obj_f1); 
        goto fail;
    }
    PyObject *arg_f2;
    if (likely(PyUnicode_Check(obj_f2)))
        arg_f2 = obj_f2;
    else {
        CPy_TypeError("str", obj_f2); 
        goto fail;
    }
    char retval = CPyDef_fscache___FileSystemCache___samefile__FileSystemCache_glue(arg_self, arg_f1, arg_f2);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "samefile__FileSystemCache_glue", -1, CPyStatic_fscache___globals);
    return NULL;
}

PyObject *CPyDef_fscache___copy_os_error(PyObject *cpy_r_e) {
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
    PyObject *cpy_r_new;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    cpy_r_r0 = CPyStatics[1678]; /* 'args' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_e, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 303, CPyStatic_fscache___globals);
        goto CPyL22;
    }
    if (likely(PyTuple_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "copy_os_error", 303, CPyStatic_fscache___globals, "tuple", cpy_r_r1);
        goto CPyL22;
    }
    cpy_r_r3 = CPyModule_builtins;
    cpy_r_r4 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 303, CPyStatic_fscache___globals);
        goto CPyL23;
    }
    cpy_r_r6 = PyList_New(0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 303, CPyStatic_fscache___globals);
        goto CPyL24;
    }
    cpy_r_r7 = CPyList_Extend(cpy_r_r6, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 303, CPyStatic_fscache___globals);
        goto CPyL25;
    } else
        goto CPyL26;
CPyL5: ;
    cpy_r_r8 = PyList_AsTuple(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 303, CPyStatic_fscache___globals);
        goto CPyL27;
    }
    cpy_r_r9 = PyDict_New();
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 303, CPyStatic_fscache___globals);
        goto CPyL28;
    }
    cpy_r_r10 = PyObject_Call(cpy_r_r5, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 303, CPyStatic_fscache___globals);
        goto CPyL22;
    }
    cpy_r_new = cpy_r_r10;
    cpy_r_r11 = CPyStatics[357]; /* 'errno' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_e, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 304, CPyStatic_fscache___globals);
        goto CPyL29;
    }
    if (likely(PyLong_Check(cpy_r_r12)))
        cpy_r_r13 = CPyTagged_FromObject(cpy_r_r12);
    else {
        CPy_TypeError("int", cpy_r_r12); cpy_r_r13 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 304, CPyStatic_fscache___globals);
        goto CPyL29;
    }
    cpy_r_r14 = CPyStatics[357]; /* 'errno' */
    cpy_r_r15 = CPyTagged_StealAsObject(cpy_r_r13);
    cpy_r_r16 = PyObject_SetAttr(cpy_r_new, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 304, CPyStatic_fscache___globals);
        goto CPyL29;
    }
    cpy_r_r18 = CPyStatics[360]; /* 'strerror' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_e, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 305, CPyStatic_fscache___globals);
        goto CPyL29;
    }
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/fscache.py", "copy_os_error", 305, CPyStatic_fscache___globals, "str", cpy_r_r19);
        goto CPyL29;
    }
    cpy_r_r21 = CPyStatics[360]; /* 'strerror' */
    cpy_r_r22 = PyObject_SetAttr(cpy_r_new, cpy_r_r21, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 305, CPyStatic_fscache___globals);
        goto CPyL29;
    }
    cpy_r_r24 = CPyStatics[2347]; /* 'filename' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_e, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 306, CPyStatic_fscache___globals);
        goto CPyL29;
    }
    cpy_r_r26 = CPyStatics[2347]; /* 'filename' */
    cpy_r_r27 = PyObject_SetAttr(cpy_r_new, cpy_r_r26, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 306, CPyStatic_fscache___globals);
        goto CPyL29;
    }
    cpy_r_r29 = CPyStatics[2592]; /* 'filename2' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_e, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 307, CPyStatic_fscache___globals);
        goto CPyL29;
    }
    cpy_r_r31 = PyObject_IsTrue(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 307, CPyStatic_fscache___globals);
        goto CPyL29;
    }
    cpy_r_r33 = cpy_r_r31;
    if (!cpy_r_r33) goto CPyL21;
    cpy_r_r34 = CPyStatics[2592]; /* 'filename2' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_e, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 308, CPyStatic_fscache___globals);
        goto CPyL29;
    }
    cpy_r_r36 = CPyStatics[2592]; /* 'filename2' */
    cpy_r_r37 = PyObject_SetAttr(cpy_r_new, cpy_r_r36, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 308, CPyStatic_fscache___globals);
        goto CPyL29;
    }
CPyL21: ;
    return cpy_r_new;
CPyL22: ;
    cpy_r_r39 = NULL;
    return cpy_r_r39;
CPyL23: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL22;
CPyL24: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL22;
CPyL25: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL22;
CPyL26: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL5;
CPyL27: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL22;
CPyL28: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL22;
CPyL29: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL22;
}

PyObject *CPyPy_fscache___copy_os_error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:copy_os_error", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_e = obj_e;
    PyObject *retval = CPyDef_fscache___copy_os_error(arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fscache.py", "copy_os_error", 302, CPyStatic_fscache___globals);
    return NULL;
}

char CPyDef_fscache_____top_level__(void) {
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
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "<module>", -1, CPyStatic_fscache___globals);
        goto CPyL13;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_fscache___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "<module>", 31, CPyStatic_fscache___globals);
        goto CPyL13;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_os;
    cpy_r_r10 = (PyObject **)&CPyModule_stat;
    PyObject **cpy_r_r11[2] = {cpy_r_r9, cpy_r_r10};
    cpy_r_r12 = (void *)&cpy_r_r11;
    int64_t cpy_r_r13[2] = {33, 34};
    cpy_r_r14 = (void *)&cpy_r_r13;
    cpy_r_r15 = CPyStatics[9412]; /* (('os', 'os', 'os'), ('stat', 'stat', 'stat')) */
    cpy_r_r16 = CPyStatic_fscache___globals;
    cpy_r_r17 = CPyStatics[2593]; /* 'mypy/fscache.py' */
    cpy_r_r18 = CPyStatics[17]; /* '<module>' */
    cpy_r_r19 = CPyImport_ImportMany(cpy_r_r15, cpy_r_r12, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r14);
    if (!cpy_r_r19) goto CPyL13;
    cpy_r_r20 = CPyStatics[9361]; /* ('mypyc_attr',) */
    cpy_r_r21 = CPyStatics[599]; /* 'mypy_extensions' */
    cpy_r_r22 = CPyStatic_fscache___globals;
    cpy_r_r23 = CPyImport_ImportFromMany(cpy_r_r21, cpy_r_r20, cpy_r_r20, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "<module>", 36, CPyStatic_fscache___globals);
        goto CPyL13;
    }
    CPyModule_mypy_extensions = cpy_r_r23;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r24 = CPyStatics[9413]; /* ('hash_digest',) */
    cpy_r_r25 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r26 = CPyStatic_fscache___globals;
    cpy_r_r27 = CPyImport_ImportFromMany(cpy_r_r25, cpy_r_r24, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "<module>", 38, CPyStatic_fscache___globals);
        goto CPyL13;
    }
    CPyModule_mypy___util = cpy_r_r27;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r28 = NULL;
    cpy_r_r29 = CPyStatics[564]; /* 'mypy.fscache' */
    cpy_r_r30 = (PyObject *)CPyType_fscache___FileSystemCache_template;
    cpy_r_r31 = CPyType_FromTemplate(cpy_r_r30, cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "<module>", 42, CPyStatic_fscache___globals);
        goto CPyL13;
    }
    cpy_r_r32 = CPyDef_fscache___FileSystemCache_trait_vtable_setup();
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/fscache.py", "<module>", -1, CPyStatic_fscache___globals);
        goto CPyL14;
    }
    cpy_r_r33 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r34 = CPyStatics[1584]; /* 'package_root' */
    cpy_r_r35 = CPyStatics[2594]; /* 'stat_cache' */
    cpy_r_r36 = CPyStatics[2595]; /* 'stat_error_cache' */
    cpy_r_r37 = CPyStatics[2596]; /* 'listdir_cache' */
    cpy_r_r38 = CPyStatics[2597]; /* 'listdir_error_cache' */
    cpy_r_r39 = CPyStatics[2598]; /* 'isfile_case_cache' */
    cpy_r_r40 = CPyStatics[2599]; /* 'exists_case_cache' */
    cpy_r_r41 = CPyStatics[2600]; /* 'read_cache' */
    cpy_r_r42 = CPyStatics[2601]; /* 'read_error_cache' */
    cpy_r_r43 = CPyStatics[2602]; /* 'hash_cache' */
    cpy_r_r44 = CPyStatics[2603]; /* 'fake_package_cache' */
    cpy_r_r45 = PyTuple_Pack(11, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/fscache.py", "<module>", 42, CPyStatic_fscache___globals);
        goto CPyL14;
    }
    cpy_r_r46 = PyObject_SetAttr(cpy_r_r31, cpy_r_r33, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/fscache.py", "<module>", 42, CPyStatic_fscache___globals);
        goto CPyL14;
    }
    CPyType_fscache___FileSystemCache = (PyTypeObject *)cpy_r_r31;
    CPy_INCREF(CPyType_fscache___FileSystemCache);
    cpy_r_r48 = CPyStatic_fscache___globals;
    cpy_r_r49 = CPyStatics[563]; /* 'FileSystemCache' */
    cpy_r_r50 = CPyDict_SetItem(cpy_r_r48, cpy_r_r49, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/fscache.py", "<module>", 42, CPyStatic_fscache___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r52 = 2;
    return cpy_r_r52;
CPyL14: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL13;
}
