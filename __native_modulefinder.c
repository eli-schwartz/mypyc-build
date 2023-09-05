#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
modulefinder___BuildSource_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *modulefinder___BuildSource_setup(PyTypeObject *type);
PyObject *CPyDef_modulefinder___BuildSource(PyObject *cpy_r_path, PyObject *cpy_r_module, PyObject *cpy_r_text, PyObject *cpy_r_base_dir, char cpy_r_followed);

static PyObject *
modulefinder___BuildSource_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_modulefinder___BuildSource) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = modulefinder___BuildSource_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_modulefinder___BuildSource_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
modulefinder___BuildSource_traverse(mypy___modulefinder___BuildSourceObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_path);
    Py_VISIT(self->_module);
    Py_VISIT(self->_text);
    Py_VISIT(self->_base_dir);
    return 0;
}

static int
modulefinder___BuildSource_clear(mypy___modulefinder___BuildSourceObject *self)
{
    Py_CLEAR(self->_path);
    Py_CLEAR(self->_module);
    Py_CLEAR(self->_text);
    Py_CLEAR(self->_base_dir);
    return 0;
}

static void
modulefinder___BuildSource_dealloc(mypy___modulefinder___BuildSourceObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, modulefinder___BuildSource_dealloc)
    modulefinder___BuildSource_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem modulefinder___BuildSource_vtable[2];
static bool
CPyDef_modulefinder___BuildSource_trait_vtable_setup(void)
{
    CPyVTableItem modulefinder___BuildSource_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_modulefinder___BuildSource_____init__,
        (CPyVTableItem)CPyDef_modulefinder___BuildSource_____repr__,
    };
    memcpy(modulefinder___BuildSource_vtable, modulefinder___BuildSource_vtable_scratch, sizeof(modulefinder___BuildSource_vtable));
    return 1;
}

static PyObject *
modulefinder___BuildSource_get_path(mypy___modulefinder___BuildSourceObject *self, void *closure);
static int
modulefinder___BuildSource_set_path(mypy___modulefinder___BuildSourceObject *self, PyObject *value, void *closure);
static PyObject *
modulefinder___BuildSource_get_module(mypy___modulefinder___BuildSourceObject *self, void *closure);
static int
modulefinder___BuildSource_set_module(mypy___modulefinder___BuildSourceObject *self, PyObject *value, void *closure);
static PyObject *
modulefinder___BuildSource_get_text(mypy___modulefinder___BuildSourceObject *self, void *closure);
static int
modulefinder___BuildSource_set_text(mypy___modulefinder___BuildSourceObject *self, PyObject *value, void *closure);
static PyObject *
modulefinder___BuildSource_get_base_dir(mypy___modulefinder___BuildSourceObject *self, void *closure);
static int
modulefinder___BuildSource_set_base_dir(mypy___modulefinder___BuildSourceObject *self, PyObject *value, void *closure);
static PyObject *
modulefinder___BuildSource_get_followed(mypy___modulefinder___BuildSourceObject *self, void *closure);
static int
modulefinder___BuildSource_set_followed(mypy___modulefinder___BuildSourceObject *self, PyObject *value, void *closure);

static PyGetSetDef modulefinder___BuildSource_getseters[] = {
    {"path",
     (getter)modulefinder___BuildSource_get_path, (setter)modulefinder___BuildSource_set_path,
     NULL, NULL},
    {"module",
     (getter)modulefinder___BuildSource_get_module, (setter)modulefinder___BuildSource_set_module,
     NULL, NULL},
    {"text",
     (getter)modulefinder___BuildSource_get_text, (setter)modulefinder___BuildSource_set_text,
     NULL, NULL},
    {"base_dir",
     (getter)modulefinder___BuildSource_get_base_dir, (setter)modulefinder___BuildSource_set_base_dir,
     NULL, NULL},
    {"followed",
     (getter)modulefinder___BuildSource_get_followed, (setter)modulefinder___BuildSource_set_followed,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef modulefinder___BuildSource_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_modulefinder___BuildSource_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_modulefinder___BuildSource_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_modulefinder___BuildSource_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "BuildSource",
    .tp_new = modulefinder___BuildSource_new,
    .tp_dealloc = (destructor)modulefinder___BuildSource_dealloc,
    .tp_traverse = (traverseproc)modulefinder___BuildSource_traverse,
    .tp_clear = (inquiry)modulefinder___BuildSource_clear,
    .tp_getset = modulefinder___BuildSource_getseters,
    .tp_methods = modulefinder___BuildSource_methods,
    .tp_init = modulefinder___BuildSource_init,
    .tp_repr = CPyDef_modulefinder___BuildSource_____repr__,
    .tp_basicsize = sizeof(mypy___modulefinder___BuildSourceObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_modulefinder___BuildSource_template = &CPyType_modulefinder___BuildSource_template_;

static PyObject *
modulefinder___BuildSource_setup(PyTypeObject *type)
{
    mypy___modulefinder___BuildSourceObject *self;
    self = (mypy___modulefinder___BuildSourceObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = modulefinder___BuildSource_vtable;
    self->_followed = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_modulefinder___BuildSource(PyObject *cpy_r_path, PyObject *cpy_r_module, PyObject *cpy_r_text, PyObject *cpy_r_base_dir, char cpy_r_followed)
{
    PyObject *self = modulefinder___BuildSource_setup(CPyType_modulefinder___BuildSource);
    if (self == NULL)
        return NULL;
    char res = CPyDef_modulefinder___BuildSource_____init__(self, cpy_r_path, cpy_r_module, cpy_r_text, cpy_r_base_dir, cpy_r_followed);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
modulefinder___BuildSource_get_path(mypy___modulefinder___BuildSourceObject *self, void *closure)
{
    if (unlikely(self->_path == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'path' of 'BuildSource' undefined");
        return NULL;
    }
    CPy_INCREF(self->_path);
    PyObject *retval = self->_path;
    return retval;
}

static int
modulefinder___BuildSource_set_path(mypy___modulefinder___BuildSourceObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BuildSource' object attribute 'path' cannot be deleted");
        return -1;
    }
    if (self->_path != NULL) {
        CPy_DECREF(self->_path);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3473;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3473;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL3473: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_path = tmp;
    return 0;
}

static PyObject *
modulefinder___BuildSource_get_module(mypy___modulefinder___BuildSourceObject *self, void *closure)
{
    if (unlikely(self->_module == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module' of 'BuildSource' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module);
    PyObject *retval = self->_module;
    return retval;
}

static int
modulefinder___BuildSource_set_module(mypy___modulefinder___BuildSourceObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BuildSource' object attribute 'module' cannot be deleted");
        return -1;
    }
    if (self->_module != NULL) {
        CPy_DECREF(self->_module);
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
    self->_module = tmp;
    return 0;
}

static PyObject *
modulefinder___BuildSource_get_text(mypy___modulefinder___BuildSourceObject *self, void *closure)
{
    if (unlikely(self->_text == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'text' of 'BuildSource' undefined");
        return NULL;
    }
    CPy_INCREF(self->_text);
    PyObject *retval = self->_text;
    return retval;
}

static int
modulefinder___BuildSource_set_text(mypy___modulefinder___BuildSourceObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BuildSource' object attribute 'text' cannot be deleted");
        return -1;
    }
    if (self->_text != NULL) {
        CPy_DECREF(self->_text);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3474;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3474;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL3474: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_text = tmp;
    return 0;
}

static PyObject *
modulefinder___BuildSource_get_base_dir(mypy___modulefinder___BuildSourceObject *self, void *closure)
{
    if (unlikely(self->_base_dir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'base_dir' of 'BuildSource' undefined");
        return NULL;
    }
    CPy_INCREF(self->_base_dir);
    PyObject *retval = self->_base_dir;
    return retval;
}

static int
modulefinder___BuildSource_set_base_dir(mypy___modulefinder___BuildSourceObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BuildSource' object attribute 'base_dir' cannot be deleted");
        return -1;
    }
    if (self->_base_dir != NULL) {
        CPy_DECREF(self->_base_dir);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3475;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3475;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL3475: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_base_dir = tmp;
    return 0;
}

static PyObject *
modulefinder___BuildSource_get_followed(mypy___modulefinder___BuildSourceObject *self, void *closure)
{
    PyObject *retval = self->_followed ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
modulefinder___BuildSource_set_followed(mypy___modulefinder___BuildSourceObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BuildSource' object attribute 'followed' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_followed = tmp;
    return 0;
}

static int
modulefinder___BuildSourceSet_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *modulefinder___BuildSourceSet_setup(PyTypeObject *type);
PyObject *CPyDef_modulefinder___BuildSourceSet(PyObject *cpy_r_sources);

static PyObject *
modulefinder___BuildSourceSet_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_modulefinder___BuildSourceSet) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = modulefinder___BuildSourceSet_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_modulefinder___BuildSourceSet_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
modulefinder___BuildSourceSet_traverse(mypy___modulefinder___BuildSourceSetObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_source_modules);
    Py_VISIT(self->_source_paths);
    return 0;
}

static int
modulefinder___BuildSourceSet_clear(mypy___modulefinder___BuildSourceSetObject *self)
{
    Py_CLEAR(self->_source_modules);
    Py_CLEAR(self->_source_paths);
    return 0;
}

static void
modulefinder___BuildSourceSet_dealloc(mypy___modulefinder___BuildSourceSetObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, modulefinder___BuildSourceSet_dealloc)
    modulefinder___BuildSourceSet_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem modulefinder___BuildSourceSet_vtable[2];
static bool
CPyDef_modulefinder___BuildSourceSet_trait_vtable_setup(void)
{
    CPyVTableItem modulefinder___BuildSourceSet_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_modulefinder___BuildSourceSet_____init__,
        (CPyVTableItem)CPyDef_modulefinder___BuildSourceSet___is_source,
    };
    memcpy(modulefinder___BuildSourceSet_vtable, modulefinder___BuildSourceSet_vtable_scratch, sizeof(modulefinder___BuildSourceSet_vtable));
    return 1;
}

static PyObject *
modulefinder___BuildSourceSet_get_source_text_present(mypy___modulefinder___BuildSourceSetObject *self, void *closure);
static int
modulefinder___BuildSourceSet_set_source_text_present(mypy___modulefinder___BuildSourceSetObject *self, PyObject *value, void *closure);
static PyObject *
modulefinder___BuildSourceSet_get_source_modules(mypy___modulefinder___BuildSourceSetObject *self, void *closure);
static int
modulefinder___BuildSourceSet_set_source_modules(mypy___modulefinder___BuildSourceSetObject *self, PyObject *value, void *closure);
static PyObject *
modulefinder___BuildSourceSet_get_source_paths(mypy___modulefinder___BuildSourceSetObject *self, void *closure);
static int
modulefinder___BuildSourceSet_set_source_paths(mypy___modulefinder___BuildSourceSetObject *self, PyObject *value, void *closure);

static PyGetSetDef modulefinder___BuildSourceSet_getseters[] = {
    {"source_text_present",
     (getter)modulefinder___BuildSourceSet_get_source_text_present, (setter)modulefinder___BuildSourceSet_set_source_text_present,
     NULL, NULL},
    {"source_modules",
     (getter)modulefinder___BuildSourceSet_get_source_modules, (setter)modulefinder___BuildSourceSet_set_source_modules,
     NULL, NULL},
    {"source_paths",
     (getter)modulefinder___BuildSourceSet_get_source_paths, (setter)modulefinder___BuildSourceSet_set_source_paths,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef modulefinder___BuildSourceSet_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_modulefinder___BuildSourceSet_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_source",
     (PyCFunction)CPyPy_modulefinder___BuildSourceSet___is_source,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_modulefinder___BuildSourceSet_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "BuildSourceSet",
    .tp_new = modulefinder___BuildSourceSet_new,
    .tp_dealloc = (destructor)modulefinder___BuildSourceSet_dealloc,
    .tp_traverse = (traverseproc)modulefinder___BuildSourceSet_traverse,
    .tp_clear = (inquiry)modulefinder___BuildSourceSet_clear,
    .tp_getset = modulefinder___BuildSourceSet_getseters,
    .tp_methods = modulefinder___BuildSourceSet_methods,
    .tp_init = modulefinder___BuildSourceSet_init,
    .tp_basicsize = sizeof(mypy___modulefinder___BuildSourceSetObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_modulefinder___BuildSourceSet_template = &CPyType_modulefinder___BuildSourceSet_template_;

static PyObject *
modulefinder___BuildSourceSet_setup(PyTypeObject *type)
{
    mypy___modulefinder___BuildSourceSetObject *self;
    self = (mypy___modulefinder___BuildSourceSetObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = modulefinder___BuildSourceSet_vtable;
    self->_source_text_present = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_modulefinder___BuildSourceSet(PyObject *cpy_r_sources)
{
    PyObject *self = modulefinder___BuildSourceSet_setup(CPyType_modulefinder___BuildSourceSet);
    if (self == NULL)
        return NULL;
    char res = CPyDef_modulefinder___BuildSourceSet_____init__(self, cpy_r_sources);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
modulefinder___BuildSourceSet_get_source_text_present(mypy___modulefinder___BuildSourceSetObject *self, void *closure)
{
    PyObject *retval = self->_source_text_present ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
modulefinder___BuildSourceSet_set_source_text_present(mypy___modulefinder___BuildSourceSetObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BuildSourceSet' object attribute 'source_text_present' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_source_text_present = tmp;
    return 0;
}

static PyObject *
modulefinder___BuildSourceSet_get_source_modules(mypy___modulefinder___BuildSourceSetObject *self, void *closure)
{
    if (unlikely(self->_source_modules == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'source_modules' of 'BuildSourceSet' undefined");
        return NULL;
    }
    CPy_INCREF(self->_source_modules);
    PyObject *retval = self->_source_modules;
    return retval;
}

static int
modulefinder___BuildSourceSet_set_source_modules(mypy___modulefinder___BuildSourceSetObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BuildSourceSet' object attribute 'source_modules' cannot be deleted");
        return -1;
    }
    if (self->_source_modules != NULL) {
        CPy_DECREF(self->_source_modules);
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
    self->_source_modules = tmp;
    return 0;
}

static PyObject *
modulefinder___BuildSourceSet_get_source_paths(mypy___modulefinder___BuildSourceSetObject *self, void *closure)
{
    if (unlikely(self->_source_paths == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'source_paths' of 'BuildSourceSet' undefined");
        return NULL;
    }
    CPy_INCREF(self->_source_paths);
    PyObject *retval = self->_source_paths;
    return retval;
}

static int
modulefinder___BuildSourceSet_set_source_paths(mypy___modulefinder___BuildSourceSetObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BuildSourceSet' object attribute 'source_paths' cannot be deleted");
        return -1;
    }
    if (self->_source_paths != NULL) {
        CPy_DECREF(self->_source_paths);
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
    self->_source_paths = tmp;
    return 0;
}

static int
modulefinder___FindModuleCache_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *modulefinder___FindModuleCache_setup(PyTypeObject *type);
PyObject *CPyDef_modulefinder___FindModuleCache(PyObject *cpy_r_search_paths, PyObject *cpy_r_fscache, PyObject *cpy_r_options, PyObject *cpy_r_stdlib_py_versions, PyObject *cpy_r_source_set);

static PyObject *
modulefinder___FindModuleCache_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_modulefinder___FindModuleCache) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = modulefinder___FindModuleCache_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_modulefinder___FindModuleCache_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
modulefinder___FindModuleCache_traverse(mypy___modulefinder___FindModuleCacheObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_search_paths);
    Py_VISIT(self->_source_set);
    Py_VISIT(self->_fscache);
    Py_VISIT(self->_initial_components);
    Py_VISIT(self->_results);
    Py_VISIT(self->_ns_ancestors);
    Py_VISIT(self->_options);
    Py_VISIT(self->_stdlib_py_versions);
    return 0;
}

static int
modulefinder___FindModuleCache_clear(mypy___modulefinder___FindModuleCacheObject *self)
{
    Py_CLEAR(self->_search_paths);
    Py_CLEAR(self->_source_set);
    Py_CLEAR(self->_fscache);
    Py_CLEAR(self->_initial_components);
    Py_CLEAR(self->_results);
    Py_CLEAR(self->_ns_ancestors);
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_stdlib_py_versions);
    return 0;
}

static void
modulefinder___FindModuleCache_dealloc(mypy___modulefinder___FindModuleCacheObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, modulefinder___FindModuleCache_dealloc)
    modulefinder___FindModuleCache_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem modulefinder___FindModuleCache_vtable[13];
static bool
CPyDef_modulefinder___FindModuleCache_trait_vtable_setup(void)
{
    CPyVTableItem modulefinder___FindModuleCache_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_modulefinder___FindModuleCache_____init__,
        (CPyVTableItem)CPyDef_modulefinder___FindModuleCache___clear,
        (CPyVTableItem)CPyDef_modulefinder___FindModuleCache___find_module_via_source_set,
        (CPyVTableItem)CPyDef_modulefinder___FindModuleCache___find_lib_path_dirs,
        (CPyVTableItem)CPyDef_modulefinder___FindModuleCache___get_toplevel_possibilities,
        (CPyVTableItem)CPyDef_modulefinder___FindModuleCache___find_module,
        (CPyVTableItem)CPyDef_modulefinder___FindModuleCache____typeshed_has_version,
        (CPyVTableItem)CPyDef_modulefinder___FindModuleCache____find_module_non_stub_helper,
        (CPyVTableItem)CPyDef_modulefinder___FindModuleCache____update_ns_ancestors,
        (CPyVTableItem)CPyDef_modulefinder___FindModuleCache____can_find_module_in_parent_dir,
        (CPyVTableItem)CPyDef_modulefinder___FindModuleCache____find_module,
        (CPyVTableItem)CPyDef_modulefinder___FindModuleCache____is_compatible_stub_package,
        (CPyVTableItem)CPyDef_modulefinder___FindModuleCache___find_modules_recursive,
    };
    memcpy(modulefinder___FindModuleCache_vtable, modulefinder___FindModuleCache_vtable_scratch, sizeof(modulefinder___FindModuleCache_vtable));
    return 1;
}

static PyObject *
modulefinder___FindModuleCache_get_search_paths(mypy___modulefinder___FindModuleCacheObject *self, void *closure);
static int
modulefinder___FindModuleCache_set_search_paths(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure);
static PyObject *
modulefinder___FindModuleCache_get_source_set(mypy___modulefinder___FindModuleCacheObject *self, void *closure);
static int
modulefinder___FindModuleCache_set_source_set(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure);
static PyObject *
modulefinder___FindModuleCache_get_fscache(mypy___modulefinder___FindModuleCacheObject *self, void *closure);
static int
modulefinder___FindModuleCache_set_fscache(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure);
static PyObject *
modulefinder___FindModuleCache_get_initial_components(mypy___modulefinder___FindModuleCacheObject *self, void *closure);
static int
modulefinder___FindModuleCache_set_initial_components(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure);
static PyObject *
modulefinder___FindModuleCache_get_results(mypy___modulefinder___FindModuleCacheObject *self, void *closure);
static int
modulefinder___FindModuleCache_set_results(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure);
static PyObject *
modulefinder___FindModuleCache_get_ns_ancestors(mypy___modulefinder___FindModuleCacheObject *self, void *closure);
static int
modulefinder___FindModuleCache_set_ns_ancestors(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure);
static PyObject *
modulefinder___FindModuleCache_get_options(mypy___modulefinder___FindModuleCacheObject *self, void *closure);
static int
modulefinder___FindModuleCache_set_options(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure);
static PyObject *
modulefinder___FindModuleCache_get_stdlib_py_versions(mypy___modulefinder___FindModuleCacheObject *self, void *closure);
static int
modulefinder___FindModuleCache_set_stdlib_py_versions(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure);

static PyGetSetDef modulefinder___FindModuleCache_getseters[] = {
    {"search_paths",
     (getter)modulefinder___FindModuleCache_get_search_paths, (setter)modulefinder___FindModuleCache_set_search_paths,
     NULL, NULL},
    {"source_set",
     (getter)modulefinder___FindModuleCache_get_source_set, (setter)modulefinder___FindModuleCache_set_source_set,
     NULL, NULL},
    {"fscache",
     (getter)modulefinder___FindModuleCache_get_fscache, (setter)modulefinder___FindModuleCache_set_fscache,
     NULL, NULL},
    {"initial_components",
     (getter)modulefinder___FindModuleCache_get_initial_components, (setter)modulefinder___FindModuleCache_set_initial_components,
     NULL, NULL},
    {"results",
     (getter)modulefinder___FindModuleCache_get_results, (setter)modulefinder___FindModuleCache_set_results,
     NULL, NULL},
    {"ns_ancestors",
     (getter)modulefinder___FindModuleCache_get_ns_ancestors, (setter)modulefinder___FindModuleCache_set_ns_ancestors,
     NULL, NULL},
    {"options",
     (getter)modulefinder___FindModuleCache_get_options, (setter)modulefinder___FindModuleCache_set_options,
     NULL, NULL},
    {"stdlib_py_versions",
     (getter)modulefinder___FindModuleCache_get_stdlib_py_versions, (setter)modulefinder___FindModuleCache_set_stdlib_py_versions,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef modulefinder___FindModuleCache_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_modulefinder___FindModuleCache_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"clear",
     (PyCFunction)CPyPy_modulefinder___FindModuleCache___clear,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_module_via_source_set",
     (PyCFunction)CPyPy_modulefinder___FindModuleCache___find_module_via_source_set,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_lib_path_dirs",
     (PyCFunction)CPyPy_modulefinder___FindModuleCache___find_lib_path_dirs,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_toplevel_possibilities",
     (PyCFunction)CPyPy_modulefinder___FindModuleCache___get_toplevel_possibilities,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_module",
     (PyCFunction)CPyPy_modulefinder___FindModuleCache___find_module,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_typeshed_has_version",
     (PyCFunction)CPyPy_modulefinder___FindModuleCache____typeshed_has_version,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_find_module_non_stub_helper",
     (PyCFunction)CPyPy_modulefinder___FindModuleCache____find_module_non_stub_helper,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_update_ns_ancestors",
     (PyCFunction)CPyPy_modulefinder___FindModuleCache____update_ns_ancestors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_can_find_module_in_parent_dir",
     (PyCFunction)CPyPy_modulefinder___FindModuleCache____can_find_module_in_parent_dir,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_find_module",
     (PyCFunction)CPyPy_modulefinder___FindModuleCache____find_module,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_is_compatible_stub_package",
     (PyCFunction)CPyPy_modulefinder___FindModuleCache____is_compatible_stub_package,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_modules_recursive",
     (PyCFunction)CPyPy_modulefinder___FindModuleCache___find_modules_recursive,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_modulefinder___FindModuleCache_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FindModuleCache",
    .tp_new = modulefinder___FindModuleCache_new,
    .tp_dealloc = (destructor)modulefinder___FindModuleCache_dealloc,
    .tp_traverse = (traverseproc)modulefinder___FindModuleCache_traverse,
    .tp_clear = (inquiry)modulefinder___FindModuleCache_clear,
    .tp_getset = modulefinder___FindModuleCache_getseters,
    .tp_methods = modulefinder___FindModuleCache_methods,
    .tp_init = modulefinder___FindModuleCache_init,
    .tp_basicsize = sizeof(mypy___modulefinder___FindModuleCacheObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_modulefinder___FindModuleCache_template = &CPyType_modulefinder___FindModuleCache_template_;

static PyObject *
modulefinder___FindModuleCache_setup(PyTypeObject *type)
{
    mypy___modulefinder___FindModuleCacheObject *self;
    self = (mypy___modulefinder___FindModuleCacheObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = modulefinder___FindModuleCache_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_modulefinder___FindModuleCache(PyObject *cpy_r_search_paths, PyObject *cpy_r_fscache, PyObject *cpy_r_options, PyObject *cpy_r_stdlib_py_versions, PyObject *cpy_r_source_set)
{
    PyObject *self = modulefinder___FindModuleCache_setup(CPyType_modulefinder___FindModuleCache);
    if (self == NULL)
        return NULL;
    char res = CPyDef_modulefinder___FindModuleCache_____init__(self, cpy_r_search_paths, cpy_r_fscache, cpy_r_options, cpy_r_stdlib_py_versions, cpy_r_source_set);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
modulefinder___FindModuleCache_get_search_paths(mypy___modulefinder___FindModuleCacheObject *self, void *closure)
{
    if (unlikely(self->_search_paths == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'search_paths' of 'FindModuleCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_search_paths);
    PyObject *retval = self->_search_paths;
    return retval;
}

static int
modulefinder___FindModuleCache_set_search_paths(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FindModuleCache' object attribute 'search_paths' cannot be deleted");
        return -1;
    }
    if (self->_search_paths != NULL) {
        CPy_DECREF(self->_search_paths);
    }
    PyObject * tmp;
    if (likely(PyTuple_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("tuple", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_search_paths = tmp;
    return 0;
}

static PyObject *
modulefinder___FindModuleCache_get_source_set(mypy___modulefinder___FindModuleCacheObject *self, void *closure)
{
    if (unlikely(self->_source_set == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'source_set' of 'FindModuleCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_source_set);
    PyObject *retval = self->_source_set;
    return retval;
}

static int
modulefinder___FindModuleCache_set_source_set(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FindModuleCache' object attribute 'source_set' cannot be deleted");
        return -1;
    }
    if (self->_source_set != NULL) {
        CPy_DECREF(self->_source_set);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_modulefinder___BuildSourceSet)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3476;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3476;
    CPy_TypeError("mypy.modulefinder.BuildSourceSet or None", value); 
    tmp = NULL;
__LL3476: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_source_set = tmp;
    return 0;
}

static PyObject *
modulefinder___FindModuleCache_get_fscache(mypy___modulefinder___FindModuleCacheObject *self, void *closure)
{
    if (unlikely(self->_fscache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fscache' of 'FindModuleCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fscache);
    PyObject *retval = self->_fscache;
    return retval;
}

static int
modulefinder___FindModuleCache_set_fscache(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FindModuleCache' object attribute 'fscache' cannot be deleted");
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
modulefinder___FindModuleCache_get_initial_components(mypy___modulefinder___FindModuleCacheObject *self, void *closure)
{
    if (unlikely(self->_initial_components == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'initial_components' of 'FindModuleCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_initial_components);
    PyObject *retval = self->_initial_components;
    return retval;
}

static int
modulefinder___FindModuleCache_set_initial_components(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FindModuleCache' object attribute 'initial_components' cannot be deleted");
        return -1;
    }
    if (self->_initial_components != NULL) {
        CPy_DECREF(self->_initial_components);
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
    self->_initial_components = tmp;
    return 0;
}

static PyObject *
modulefinder___FindModuleCache_get_results(mypy___modulefinder___FindModuleCacheObject *self, void *closure)
{
    if (unlikely(self->_results == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'results' of 'FindModuleCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_results);
    PyObject *retval = self->_results;
    return retval;
}

static int
modulefinder___FindModuleCache_set_results(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FindModuleCache' object attribute 'results' cannot be deleted");
        return -1;
    }
    if (self->_results != NULL) {
        CPy_DECREF(self->_results);
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
    self->_results = tmp;
    return 0;
}

static PyObject *
modulefinder___FindModuleCache_get_ns_ancestors(mypy___modulefinder___FindModuleCacheObject *self, void *closure)
{
    if (unlikely(self->_ns_ancestors == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ns_ancestors' of 'FindModuleCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ns_ancestors);
    PyObject *retval = self->_ns_ancestors;
    return retval;
}

static int
modulefinder___FindModuleCache_set_ns_ancestors(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FindModuleCache' object attribute 'ns_ancestors' cannot be deleted");
        return -1;
    }
    if (self->_ns_ancestors != NULL) {
        CPy_DECREF(self->_ns_ancestors);
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
    self->_ns_ancestors = tmp;
    return 0;
}

static PyObject *
modulefinder___FindModuleCache_get_options(mypy___modulefinder___FindModuleCacheObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'FindModuleCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
modulefinder___FindModuleCache_set_options(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FindModuleCache' object attribute 'options' cannot be deleted");
        return -1;
    }
    if (self->_options != NULL) {
        CPy_DECREF(self->_options);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_mypy___options___Options)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3477;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3477;
    CPy_TypeError("mypy.options.Options or None", value); 
    tmp = NULL;
__LL3477: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_options = tmp;
    return 0;
}

static PyObject *
modulefinder___FindModuleCache_get_stdlib_py_versions(mypy___modulefinder___FindModuleCacheObject *self, void *closure)
{
    if (unlikely(self->_stdlib_py_versions == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'stdlib_py_versions' of 'FindModuleCache' undefined");
        return NULL;
    }
    CPy_INCREF(self->_stdlib_py_versions);
    PyObject *retval = self->_stdlib_py_versions;
    return retval;
}

static int
modulefinder___FindModuleCache_set_stdlib_py_versions(mypy___modulefinder___FindModuleCacheObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FindModuleCache' object attribute 'stdlib_py_versions' cannot be deleted");
        return -1;
    }
    if (self->_stdlib_py_versions != NULL) {
        CPy_DECREF(self->_stdlib_py_versions);
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
    self->_stdlib_py_versions = tmp;
    return 0;
}

static PyObject *CPyDunder___get__modulefinder___error_message_templates_ModuleNotFoundReason_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_modulefinder___error_message_templates_ModuleNotFoundReason_obj_____get__(self, instance, owner);
}
static PyObject *modulefinder___error_message_templates_ModuleNotFoundReason_obj_setup(PyTypeObject *type);
PyObject *CPyDef_modulefinder___error_message_templates_ModuleNotFoundReason_obj(void);

static PyObject *
modulefinder___error_message_templates_ModuleNotFoundReason_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_modulefinder___error_message_templates_ModuleNotFoundReason_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return modulefinder___error_message_templates_ModuleNotFoundReason_obj_setup(type);
}

static int
modulefinder___error_message_templates_ModuleNotFoundReason_obj_traverse(mypy___modulefinder___error_message_templates_ModuleNotFoundReason_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
modulefinder___error_message_templates_ModuleNotFoundReason_obj_clear(mypy___modulefinder___error_message_templates_ModuleNotFoundReason_objObject *self)
{
    return 0;
}

static void
modulefinder___error_message_templates_ModuleNotFoundReason_obj_dealloc(mypy___modulefinder___error_message_templates_ModuleNotFoundReason_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, modulefinder___error_message_templates_ModuleNotFoundReason_obj_dealloc)
    modulefinder___error_message_templates_ModuleNotFoundReason_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem modulefinder___error_message_templates_ModuleNotFoundReason_obj_vtable[2];
static bool
CPyDef_modulefinder___error_message_templates_ModuleNotFoundReason_obj_trait_vtable_setup(void)
{
    CPyVTableItem modulefinder___error_message_templates_ModuleNotFoundReason_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_modulefinder___error_message_templates_ModuleNotFoundReason_obj_____call__,
        (CPyVTableItem)CPyDef_modulefinder___error_message_templates_ModuleNotFoundReason_obj_____get__,
    };
    memcpy(modulefinder___error_message_templates_ModuleNotFoundReason_obj_vtable, modulefinder___error_message_templates_ModuleNotFoundReason_obj_vtable_scratch, sizeof(modulefinder___error_message_templates_ModuleNotFoundReason_obj_vtable));
    return 1;
}

static PyMethodDef modulefinder___error_message_templates_ModuleNotFoundReason_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_modulefinder___error_message_templates_ModuleNotFoundReason_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_modulefinder___error_message_templates_ModuleNotFoundReason_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_modulefinder___error_message_templates_ModuleNotFoundReason_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "error_message_templates_ModuleNotFoundReason_obj",
    .tp_new = modulefinder___error_message_templates_ModuleNotFoundReason_obj_new,
    .tp_dealloc = (destructor)modulefinder___error_message_templates_ModuleNotFoundReason_obj_dealloc,
    .tp_traverse = (traverseproc)modulefinder___error_message_templates_ModuleNotFoundReason_obj_traverse,
    .tp_clear = (inquiry)modulefinder___error_message_templates_ModuleNotFoundReason_obj_clear,
    .tp_methods = modulefinder___error_message_templates_ModuleNotFoundReason_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__modulefinder___error_message_templates_ModuleNotFoundReason_obj,
    .tp_basicsize = sizeof(mypy___modulefinder___error_message_templates_ModuleNotFoundReason_objObject),
    .tp_vectorcall_offset = offsetof(mypy___modulefinder___error_message_templates_ModuleNotFoundReason_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_modulefinder___error_message_templates_ModuleNotFoundReason_obj_template = &CPyType_modulefinder___error_message_templates_ModuleNotFoundReason_obj_template_;

static PyObject *
modulefinder___error_message_templates_ModuleNotFoundReason_obj_setup(PyTypeObject *type)
{
    mypy___modulefinder___error_message_templates_ModuleNotFoundReason_objObject *self;
    self = (mypy___modulefinder___error_message_templates_ModuleNotFoundReason_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = modulefinder___error_message_templates_ModuleNotFoundReason_obj_vtable;
    self->vectorcall = CPyPy_modulefinder___error_message_templates_ModuleNotFoundReason_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_modulefinder___error_message_templates_ModuleNotFoundReason_obj(void)
{
    PyObject *self = modulefinder___error_message_templates_ModuleNotFoundReason_obj_setup(CPyType_modulefinder___error_message_templates_ModuleNotFoundReason_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef modulefindermodule_methods[] = {
    {"matches_exclude", (PyCFunction)CPyPy_modulefinder___matches_exclude, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_init_file", (PyCFunction)CPyPy_modulefinder___is_init_file, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"verify_module", (PyCFunction)CPyPy_modulefinder___verify_module, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"highest_init_level", (PyCFunction)CPyPy_modulefinder___highest_init_level, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"mypy_path", (PyCFunction)CPyPy_modulefinder___mypy_path, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"default_lib_path", (PyCFunction)CPyPy_modulefinder___default_lib_path, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_search_dirs", (PyCFunction)CPyPy_modulefinder___get_search_dirs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"compute_search_paths", (PyCFunction)CPyPy_modulefinder___compute_search_paths, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"load_stdlib_py_versions", (PyCFunction)CPyPy_modulefinder___load_stdlib_py_versions, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"parse_version", (PyCFunction)CPyPy_modulefinder___parse_version, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"typeshed_py_version", (PyCFunction)CPyPy_modulefinder___typeshed_py_version, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef modulefindermodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.modulefinder",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    modulefindermodule_methods
};

PyObject *CPyInit_mypy___modulefinder(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___modulefinder_internal) {
        Py_INCREF(CPyModule_mypy___modulefinder_internal);
        return CPyModule_mypy___modulefinder_internal;
    }
    CPyModule_mypy___modulefinder_internal = PyModule_Create(&modulefindermodule);
    if (unlikely(CPyModule_mypy___modulefinder_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___modulefinder_internal, "__name__");
    CPyStatic_modulefinder___globals = PyModule_GetDict(CPyModule_mypy___modulefinder_internal);
    if (unlikely(CPyStatic_modulefinder___globals == NULL))
        goto fail;
    CPyType_modulefinder___error_message_templates_ModuleNotFoundReason_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_modulefinder___error_message_templates_ModuleNotFoundReason_obj_template, NULL, modname);
    if (unlikely(!CPyType_modulefinder___error_message_templates_ModuleNotFoundReason_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_modulefinder_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___modulefinder_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___modulefinder_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_modulefinder___PYTHON_EXTENSIONS);
    CPyStatic_modulefinder___PYTHON_EXTENSIONS = NULL;
    CPy_XDECREF(CPyStatic_modulefinder___ModuleNotFoundReason___NOT_FOUND);
    CPyStatic_modulefinder___ModuleNotFoundReason___NOT_FOUND = NULL;
    CPy_XDECREF(CPyStatic_modulefinder___ModuleNotFoundReason___FOUND_WITHOUT_TYPE_HINTS);
    CPyStatic_modulefinder___ModuleNotFoundReason___FOUND_WITHOUT_TYPE_HINTS = NULL;
    CPy_XDECREF(CPyStatic_modulefinder___ModuleNotFoundReason___WRONG_WORKING_DIRECTORY);
    CPyStatic_modulefinder___ModuleNotFoundReason___WRONG_WORKING_DIRECTORY = NULL;
    CPy_XDECREF(CPyStatic_modulefinder___ModuleNotFoundReason___APPROVED_STUBS_NOT_INSTALLED);
    CPyStatic_modulefinder___ModuleNotFoundReason___APPROVED_STUBS_NOT_INSTALLED = NULL;
    Py_CLEAR(CPyType_modulefinder___SearchPaths);
    Py_CLEAR(CPyType_modulefinder___ModuleNotFoundReason);
    Py_CLEAR(CPyType_modulefinder___BuildSource);
    Py_CLEAR(CPyType_modulefinder___BuildSourceSet);
    Py_CLEAR(CPyType_modulefinder___FindModuleCache);
    Py_CLEAR(CPyType_modulefinder___error_message_templates_ModuleNotFoundReason_obj);
    return NULL;
}

PyObject *CPyDef_modulefinder___error_message_templates_ModuleNotFoundReason_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_modulefinder___error_message_templates_ModuleNotFoundReason_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_modulefinder___error_message_templates_ModuleNotFoundReason_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "__get__", -1, CPyStatic_modulefinder___globals);
    return NULL;
}

tuple_T2OO CPyDef_modulefinder___error_message_templates_ModuleNotFoundReason_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, char cpy_r_daemon) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_msg;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_notes;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_doc_link;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    tuple_T2OO cpy_r_r45;
    tuple_T2OO cpy_r_r46;
    cpy_r_r0 = NULL;
    cpy_r_msg = cpy_r_r0;
    cpy_r_r1 = NULL;
    cpy_r_notes = cpy_r_r1;
    cpy_r_r2 = CPyStatics[3826]; /* ('See '
                                    'https://mypy.readthedocs.io/en/stable/running_mypy.html#missing-imports') */
    CPy_INCREF(cpy_r_r2);
    cpy_r_doc_link = cpy_r_r2;
    cpy_r_r3 = CPyStatic_modulefinder___ModuleNotFoundReason___NOT_FOUND;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL38;
    } else
        goto CPyL3;
CPyL1: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"NOT_FOUND\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", 76, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r5 = cpy_r_self == cpy_r_r3;
    if (cpy_r_r5) {
        goto CPyL39;
    } else
        goto CPyL6;
CPyL4: ;
    cpy_r_r6 = CPyStatics[3827]; /* ('Cannot find implementation or library stub for module '
                                    'named "{module}"') */
    CPy_INCREF(cpy_r_r6);
    cpy_r_msg = cpy_r_r6;
    cpy_r_r7 = PyList_New(1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", 78, CPyStatic_modulefinder___globals);
        goto CPyL40;
    }
    cpy_r_r8 = (CPyPtr)&((PyListObject *)cpy_r_r7)->ob_item;
    cpy_r_r9 = *(CPyPtr *)cpy_r_r8;
    *(PyObject * *)cpy_r_r9 = cpy_r_doc_link;
    cpy_r_notes = cpy_r_r7;
    goto CPyL30;
CPyL6: ;
    cpy_r_r10 = CPyStatic_modulefinder___ModuleNotFoundReason___WRONG_WORKING_DIRECTORY;
    if (unlikely(cpy_r_r10 == NULL)) {
        goto CPyL41;
    } else
        goto CPyL9;
CPyL7: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"WRONG_WORKING_DIRECTORY\" was not set");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", 79, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r12 = cpy_r_self == cpy_r_r10;
    if (cpy_r_r12) {
        goto CPyL42;
    } else
        goto CPyL12;
CPyL10: ;
    cpy_r_r13 = CPyStatics[3827]; /* ('Cannot find implementation or library stub for module '
                                     'named "{module}"') */
    CPy_INCREF(cpy_r_r13);
    cpy_r_msg = cpy_r_r13;
    cpy_r_r14 = CPyStatics[3828]; /* ('You may be running mypy in a subpackage, mypy should '
                                     'be run on the package root') */
    cpy_r_r15 = PyList_New(1);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", 81, CPyStatic_modulefinder___globals);
        goto CPyL43;
    }
    cpy_r_r16 = (CPyPtr)&((PyListObject *)cpy_r_r15)->ob_item;
    cpy_r_r17 = *(CPyPtr *)cpy_r_r16;
    CPy_INCREF(cpy_r_r14);
    *(PyObject * *)cpy_r_r17 = cpy_r_r14;
    cpy_r_notes = cpy_r_r15;
    goto CPyL30;
CPyL12: ;
    cpy_r_r18 = CPyStatic_modulefinder___ModuleNotFoundReason___FOUND_WITHOUT_TYPE_HINTS;
    if (unlikely(cpy_r_r18 == NULL)) {
        goto CPyL44;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"FOUND_WITHOUT_TYPE_HINTS\" was not set");
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", 85, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r20 = cpy_r_self == cpy_r_r18;
    if (cpy_r_r20) {
        goto CPyL45;
    } else
        goto CPyL18;
CPyL16: ;
    cpy_r_r21 = CPyStatics[3829]; /* ('Skipping analyzing "{module}": module is installed, '
                                     'but missing library stubs or py.typed marker') */
    CPy_INCREF(cpy_r_r21);
    cpy_r_msg = cpy_r_r21;
    cpy_r_r22 = PyList_New(1);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", 90, CPyStatic_modulefinder___globals);
        goto CPyL40;
    }
    cpy_r_r23 = (CPyPtr)&((PyListObject *)cpy_r_r22)->ob_item;
    cpy_r_r24 = *(CPyPtr *)cpy_r_r23;
    *(PyObject * *)cpy_r_r24 = cpy_r_doc_link;
    cpy_r_notes = cpy_r_r22;
    goto CPyL30;
CPyL18: ;
    cpy_r_r25 = CPyStatic_modulefinder___ModuleNotFoundReason___APPROVED_STUBS_NOT_INSTALLED;
    if (unlikely(cpy_r_r25 == NULL)) {
        goto CPyL46;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"APPROVED_STUBS_NOT_INSTALLED\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", 91, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r27 = cpy_r_self == cpy_r_r25;
    if (cpy_r_r27) {
        goto CPyL47;
    } else
        goto CPyL48;
CPyL22: ;
    cpy_r_r28 = CPyStatics[3830]; /* 'Library stubs not installed for "{module}"' */
    CPy_INCREF(cpy_r_r28);
    cpy_r_msg = cpy_r_r28;
    cpy_r_r29 = CPyStatics[3831]; /* 'Hint: "python3 -m pip install {stub_dist}"' */
    cpy_r_r30 = PyList_New(1);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", 93, CPyStatic_modulefinder___globals);
        goto CPyL40;
    }
    cpy_r_r31 = (CPyPtr)&((PyListObject *)cpy_r_r30)->ob_item;
    cpy_r_r32 = *(CPyPtr *)cpy_r_r31;
    CPy_INCREF(cpy_r_r29);
    *(PyObject * *)cpy_r_r32 = cpy_r_r29;
    cpy_r_notes = cpy_r_r30;
    if (cpy_r_daemon) goto CPyL25;
    cpy_r_r33 = CPyStatics[3832]; /* ('(or run "mypy --install-types" to install all missing '
                                     'stub packages)') */
    cpy_r_r34 = PyList_Append(cpy_r_notes, cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", 95, CPyStatic_modulefinder___globals);
        goto CPyL49;
    }
CPyL25: ;
    cpy_r_r36 = PyList_Append(cpy_r_notes, cpy_r_doc_link);
    CPy_DECREF(cpy_r_doc_link);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", 98, CPyStatic_modulefinder___globals);
        goto CPyL50;
    } else
        goto CPyL30;
CPyL26: ;
    cpy_r_r38 = 0 ? Py_True : Py_False;
    cpy_r_r39 = PyObject_IsTrue(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", -1, CPyStatic_modulefinder___globals);
        goto CPyL51;
    }
    cpy_r_r41 = cpy_r_r39;
    if (cpy_r_r41) {
        goto CPyL30;
    } else
        goto CPyL52;
CPyL28: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r42 = 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", 100, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL30: ;
    if (cpy_r_msg == NULL) {
        goto CPyL53;
    } else
        goto CPyL33;
CPyL31: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"msg\" referenced before assignment");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", 101, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL33: ;
    if (cpy_r_notes == NULL) {
        goto CPyL54;
    } else
        goto CPyL36;
CPyL34: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"notes\" referenced before assignment");
    cpy_r_r44 = 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", 101, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r45.f0 = cpy_r_msg;
    cpy_r_r45.f1 = cpy_r_notes;
    CPy_INCREF(cpy_r_r45.f0);
    CPy_INCREF(cpy_r_r45.f1);
    CPy_XDECREF(cpy_r_msg);
    CPy_XDECREF(cpy_r_notes);
    return cpy_r_r45;
CPyL37: ;
    tuple_T2OO __tmp3478 = { NULL, NULL };
    cpy_r_r46 = __tmp3478;
    return cpy_r_r46;
CPyL38: ;
    CPy_XDecRef(cpy_r_msg);
    CPy_XDecRef(cpy_r_notes);
    CPy_DecRef(cpy_r_doc_link);
    goto CPyL1;
CPyL39: ;
    CPy_XDECREF(cpy_r_msg);
    CPy_XDECREF(cpy_r_notes);
    goto CPyL4;
CPyL40: ;
    CPy_DecRef(cpy_r_msg);
    CPy_DecRef(cpy_r_doc_link);
    goto CPyL37;
CPyL41: ;
    CPy_XDecRef(cpy_r_msg);
    CPy_XDecRef(cpy_r_notes);
    CPy_DecRef(cpy_r_doc_link);
    goto CPyL7;
CPyL42: ;
    CPy_XDECREF(cpy_r_msg);
    CPy_XDECREF(cpy_r_notes);
    CPy_DECREF(cpy_r_doc_link);
    goto CPyL10;
CPyL43: ;
    CPy_DecRef(cpy_r_msg);
    goto CPyL37;
CPyL44: ;
    CPy_XDecRef(cpy_r_msg);
    CPy_XDecRef(cpy_r_notes);
    CPy_DecRef(cpy_r_doc_link);
    goto CPyL13;
CPyL45: ;
    CPy_XDECREF(cpy_r_msg);
    CPy_XDECREF(cpy_r_notes);
    goto CPyL16;
CPyL46: ;
    CPy_XDecRef(cpy_r_msg);
    CPy_XDecRef(cpy_r_notes);
    CPy_DecRef(cpy_r_doc_link);
    goto CPyL19;
CPyL47: ;
    CPy_XDECREF(cpy_r_msg);
    CPy_XDECREF(cpy_r_notes);
    goto CPyL22;
CPyL48: ;
    CPy_DECREF(cpy_r_doc_link);
    goto CPyL26;
CPyL49: ;
    CPy_DecRef(cpy_r_msg);
    CPy_DecRef(cpy_r_notes);
    CPy_DecRef(cpy_r_doc_link);
    goto CPyL37;
CPyL50: ;
    CPy_DecRef(cpy_r_msg);
    CPy_DecRef(cpy_r_notes);
    goto CPyL37;
CPyL51: ;
    CPy_XDecRef(cpy_r_msg);
    CPy_XDecRef(cpy_r_notes);
    goto CPyL37;
CPyL52: ;
    CPy_XDECREF(cpy_r_msg);
    CPy_XDECREF(cpy_r_notes);
    goto CPyL28;
CPyL53: ;
    CPy_XDECREF(cpy_r_notes);
    goto CPyL31;
CPyL54: ;
    CPy_XDECREF(cpy_r_msg);
    goto CPyL34;
}

PyObject *CPyPy_modulefinder___error_message_templates_ModuleNotFoundReason_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", "daemon", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_self;
    PyObject *obj_daemon;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self, &obj_daemon)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___ModuleNotFoundReason))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.ModuleNotFoundReason", obj_self); 
        goto fail;
    }
    char arg_daemon;
    if (unlikely(!PyBool_Check(obj_daemon))) {
        CPy_TypeError("bool", obj_daemon); goto fail;
    } else
        arg_daemon = obj_daemon == Py_True;
    tuple_T2OO retval = CPyDef_modulefinder___error_message_templates_ModuleNotFoundReason_obj_____call__(arg___mypyc_self__, arg_self, arg_daemon);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3479 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp3479);
    PyObject *__tmp3480 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp3480);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "error_message_templates", 74, CPyStatic_modulefinder___globals);
    return NULL;
}

char CPyDef_modulefinder___BuildSource_____init__(PyObject *cpy_r_self, PyObject *cpy_r_path, PyObject *cpy_r_module, PyObject *cpy_r_text, PyObject *cpy_r_base_dir, char cpy_r_followed) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    if (cpy_r_text != NULL) goto CPyL14;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_text = cpy_r_r0;
CPyL2: ;
    if (cpy_r_base_dir != NULL) goto CPyL15;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_base_dir = cpy_r_r1;
CPyL4: ;
    if (cpy_r_followed != 2) goto CPyL6;
    cpy_r_followed = 0;
CPyL6: ;
    CPy_INCREF(cpy_r_path);
    ((mypy___modulefinder___BuildSourceObject *)cpy_r_self)->_path = cpy_r_path;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_module != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL11;
    CPy_INCREF(cpy_r_module);
    if (likely(cpy_r_module != Py_None))
        cpy_r_r4 = cpy_r_module;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "__init__", 115, CPyStatic_modulefinder___globals, "str", cpy_r_module);
        goto CPyL16;
    }
    cpy_r_r5 = CPyStr_IsTrue(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (!cpy_r_r5) goto CPyL11;
    CPy_INCREF(cpy_r_module);
    if (likely(cpy_r_module != Py_None))
        cpy_r_r6 = cpy_r_module;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "__init__", 121, CPyStatic_modulefinder___globals, "str", cpy_r_module);
        goto CPyL16;
    }
    cpy_r_r7 = cpy_r_r6;
    goto CPyL12;
CPyL11: ;
    cpy_r_r8 = CPyStatics[363]; /* '__main__' */
    CPy_INCREF(cpy_r_r8);
    cpy_r_r7 = cpy_r_r8;
CPyL12: ;
    ((mypy___modulefinder___BuildSourceObject *)cpy_r_self)->_module = cpy_r_r7;
    ((mypy___modulefinder___BuildSourceObject *)cpy_r_self)->_text = cpy_r_text;
    ((mypy___modulefinder___BuildSourceObject *)cpy_r_self)->_base_dir = cpy_r_base_dir;
    ((mypy___modulefinder___BuildSourceObject *)cpy_r_self)->_followed = cpy_r_followed;
    return 1;
CPyL13: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL14: ;
    CPy_INCREF(cpy_r_text);
    goto CPyL2;
CPyL15: ;
    CPy_INCREF(cpy_r_base_dir);
    goto CPyL4;
CPyL16: ;
    CPy_DecRef(cpy_r_text);
    CPy_DecRef(cpy_r_base_dir);
    goto CPyL13;
}

PyObject *CPyPy_modulefinder___BuildSource_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", "module", "text", "base_dir", "followed", 0};
    PyObject *obj_path;
    PyObject *obj_module;
    PyObject *obj_text = NULL;
    PyObject *obj_base_dir = NULL;
    PyObject *obj_followed = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO|OOO", "__init__", kwlist, &obj_path, &obj_module, &obj_text, &obj_base_dir, &obj_followed)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___BuildSource))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.BuildSource", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (PyUnicode_Check(obj_path))
        arg_path = obj_path;
    else {
        arg_path = NULL;
    }
    if (arg_path != NULL) goto __LL3481;
    if (obj_path == Py_None)
        arg_path = obj_path;
    else {
        arg_path = NULL;
    }
    if (arg_path != NULL) goto __LL3481;
    CPy_TypeError("str or None", obj_path); 
    goto fail;
__LL3481: ;
    PyObject *arg_module;
    if (PyUnicode_Check(obj_module))
        arg_module = obj_module;
    else {
        arg_module = NULL;
    }
    if (arg_module != NULL) goto __LL3482;
    if (obj_module == Py_None)
        arg_module = obj_module;
    else {
        arg_module = NULL;
    }
    if (arg_module != NULL) goto __LL3482;
    CPy_TypeError("str or None", obj_module); 
    goto fail;
__LL3482: ;
    PyObject *arg_text;
    if (obj_text == NULL) {
        arg_text = NULL;
        goto __LL3483;
    }
    if (PyUnicode_Check(obj_text))
        arg_text = obj_text;
    else {
        arg_text = NULL;
    }
    if (arg_text != NULL) goto __LL3483;
    if (obj_text == Py_None)
        arg_text = obj_text;
    else {
        arg_text = NULL;
    }
    if (arg_text != NULL) goto __LL3483;
    CPy_TypeError("str or None", obj_text); 
    goto fail;
__LL3483: ;
    PyObject *arg_base_dir;
    if (obj_base_dir == NULL) {
        arg_base_dir = NULL;
        goto __LL3484;
    }
    if (PyUnicode_Check(obj_base_dir))
        arg_base_dir = obj_base_dir;
    else {
        arg_base_dir = NULL;
    }
    if (arg_base_dir != NULL) goto __LL3484;
    if (obj_base_dir == Py_None)
        arg_base_dir = obj_base_dir;
    else {
        arg_base_dir = NULL;
    }
    if (arg_base_dir != NULL) goto __LL3484;
    CPy_TypeError("str or None", obj_base_dir); 
    goto fail;
__LL3484: ;
    char arg_followed;
    if (obj_followed == NULL) {
        arg_followed = 2;
    } else if (unlikely(!PyBool_Check(obj_followed))) {
        CPy_TypeError("bool", obj_followed); goto fail;
    } else
        arg_followed = obj_followed == Py_True;
    char retval = CPyDef_modulefinder___BuildSource_____init__(arg_self, arg_path, arg_module, arg_text, arg_base_dir, arg_followed);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "__init__", 112, CPyStatic_modulefinder___globals);
    return NULL;
}

PyObject *CPyDef_modulefinder___BuildSource_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyStatics[3833]; /* ('BuildSource(path={!r}, module={!r}, has_text={}, '
                                    'base_dir={!r}, followed={})') */
    cpy_r_r1 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_self)->_path;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_self)->_module;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_self)->_text;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    cpy_r_r6 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_self)->_base_dir;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_self)->_followed;
    cpy_r_r8 = CPyStatics[193]; /* 'format' */
    cpy_r_r9 = cpy_r_r5 ? Py_True : Py_False;
    cpy_r_r10 = cpy_r_r7 ? Py_True : Py_False;
    PyObject *cpy_r_r11[6] = {cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r9, cpy_r_r6, cpy_r_r10};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r12, 9223372036854775814ULL, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "__repr__", 128, CPyStatic_modulefinder___globals);
        goto CPyL4;
    }
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6);
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "__repr__", 128, CPyStatic_modulefinder___globals, "str", cpy_r_r13);
        goto CPyL3;
    }
    return cpy_r_r14;
CPyL3: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL4: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    goto CPyL3;
}

PyObject *CPyPy_modulefinder___BuildSource_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___BuildSource))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.BuildSource", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_modulefinder___BuildSource_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "__repr__", 126, CPyStatic_modulefinder___globals);
    return NULL;
}

char CPyDef_modulefinder___BuildSourceSet_____init__(PyObject *cpy_r_self, PyObject *cpy_r_sources) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
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
    int32_t cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    ((mypy___modulefinder___BuildSourceSetObject *)cpy_r_self)->_source_text_present = 0;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "__init__", 139, CPyStatic_modulefinder___globals);
        goto CPyL22;
    }
    ((mypy___modulefinder___BuildSourceSetObject *)cpy_r_self)->_source_modules = cpy_r_r0;
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "__init__", 140, CPyStatic_modulefinder___globals);
        goto CPyL22;
    }
    ((mypy___modulefinder___BuildSourceSetObject *)cpy_r_self)->_source_paths = cpy_r_r1;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL21;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_modulefinder___BuildSource))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "__init__", 142, CPyStatic_modulefinder___globals, "mypy.modulefinder.BuildSource", cpy_r_r7);
        goto CPyL22;
    }
    cpy_r_source = cpy_r_r8;
    cpy_r_r9 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_text;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_r9 != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL7;
    ((mypy___modulefinder___BuildSourceSetObject *)cpy_r_self)->_source_text_present = 1;
CPyL7: ;
    cpy_r_r13 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_path;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_r13 != cpy_r_r14;
    if (!cpy_r_r15) goto CPyL23;
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r16 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "__init__", 145, CPyStatic_modulefinder___globals, "str", cpy_r_r13);
        goto CPyL24;
    }
    cpy_r_r17 = CPyStr_IsTrue(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (!cpy_r_r17) goto CPyL12;
    cpy_r_r18 = ((mypy___modulefinder___BuildSourceSetObject *)cpy_r_self)->_source_paths;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_path;
    CPy_INCREF(cpy_r_r19);
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "__init__", 146, CPyStatic_modulefinder___globals, "str", cpy_r_r19);
        goto CPyL25;
    }
    cpy_r_r21 = PySet_Add(cpy_r_r18, cpy_r_r20);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/modulefinder.py", "__init__", 146, CPyStatic_modulefinder___globals);
        goto CPyL24;
    }
CPyL12: ;
    cpy_r_r23 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_module;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyStr_IsTrue(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (!cpy_r_r24) goto CPyL26;
    cpy_r_r25 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_path;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_r25 != cpy_r_r26;
    if (!cpy_r_r27) goto CPyL27;
    CPy_INCREF(cpy_r_r25);
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r28 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "__init__", 148, CPyStatic_modulefinder___globals, "str", cpy_r_r25);
        goto CPyL28;
    }
    cpy_r_r29 = CPyStr_IsTrue(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (!cpy_r_r29) goto CPyL27;
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r30 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "__init__", 148, CPyStatic_modulefinder___globals, "str", cpy_r_r25);
        goto CPyL24;
    }
    cpy_r_r31 = cpy_r_r30;
    goto CPyL19;
CPyL18: ;
    cpy_r_r32 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r32);
    cpy_r_r31 = cpy_r_r32;
CPyL19: ;
    cpy_r_r33 = ((mypy___modulefinder___BuildSourceSetObject *)cpy_r_self)->_source_modules;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_module;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_source);
    cpy_r_r35 = CPyDict_SetItem(cpy_r_r33, cpy_r_r34, cpy_r_r31);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/modulefinder.py", "__init__", 148, CPyStatic_modulefinder___globals);
        goto CPyL22;
    }
CPyL20: ;
    cpy_r_r37 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r37;
    goto CPyL3;
CPyL21: ;
    return 1;
CPyL22: ;
    cpy_r_r38 = 2;
    return cpy_r_r38;
CPyL23: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL12;
CPyL24: ;
    CPy_DecRef(cpy_r_source);
    goto CPyL22;
CPyL25: ;
    CPy_DecRef(cpy_r_source);
    CPy_DecRef(cpy_r_r18);
    goto CPyL22;
CPyL26: ;
    CPy_DECREF(cpy_r_source);
    goto CPyL20;
CPyL27: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL18;
CPyL28: ;
    CPy_DecRef(cpy_r_source);
    CPy_DecRef(cpy_r_r25);
    goto CPyL22;
}

PyObject *CPyPy_modulefinder___BuildSourceSet_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"sources", 0};
    PyObject *obj_sources;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_sources)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___BuildSourceSet))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.BuildSourceSet", obj_self); 
        goto fail;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    char retval = CPyDef_modulefinder___BuildSourceSet_____init__(arg_self, arg_sources);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "__init__", 137, CPyStatic_modulefinder___globals);
    return NULL;
}

char CPyDef_modulefinder___BuildSourceSet___is_source(PyObject *cpy_r_self, PyObject *cpy_r_file) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = ((mypy___nodes___MypyFileObject *)cpy_r_file)->_path;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStr_IsTrue(cpy_r_r0);
    if (cpy_r_r1) goto CPyL16;
    cpy_r_r2 = cpy_r_r0;
    goto CPyL4;
CPyL2: ;
    cpy_r_r3 = ((mypy___nodes___MypyFileObject *)cpy_r_file)->_path;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___modulefinder___BuildSourceSetObject *)cpy_r_self)->_source_paths;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = PySet_Contains(cpy_r_r4, cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/modulefinder.py", "is_source", 152, CPyStatic_modulefinder___globals);
        goto CPyL15;
    }
    cpy_r_r7 = cpy_r_r5;
    cpy_r_r8 = cpy_r_r7 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r2 = cpy_r_r8;
CPyL4: ;
    cpy_r_r9 = PyObject_IsTrue(cpy_r_r2);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/modulefinder.py", "is_source", -1, CPyStatic_modulefinder___globals);
        goto CPyL17;
    }
    cpy_r_r11 = cpy_r_r9;
    if (!cpy_r_r11) goto CPyL18;
    if (unlikely(!PyBool_Check(cpy_r_r2))) {
        CPy_TypeError("bool", cpy_r_r2); cpy_r_r12 = 2;
    } else
        cpy_r_r12 = cpy_r_r2 == Py_True;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "is_source", 152, CPyStatic_modulefinder___globals);
        goto CPyL15;
    }
    cpy_r_r13 = cpy_r_r12;
    goto CPyL14;
CPyL8: ;
    cpy_r_r14 = ((mypy___nodes___MypyFileObject *)cpy_r_file)->__fullname;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/modulefinder.py", "is_source", "MypyFile", "_fullname", 153, CPyStatic_modulefinder___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r14);
CPyL9: ;
    cpy_r_r15 = ((mypy___modulefinder___BuildSourceSetObject *)cpy_r_self)->_source_modules;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = PyDict_Contains(cpy_r_r15, cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/modulefinder.py", "is_source", 153, CPyStatic_modulefinder___globals);
        goto CPyL15;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = cpy_r_r18;
    goto CPyL13;
CPyL12: ;
    cpy_r_r20 = ((mypy___modulefinder___BuildSourceSetObject *)cpy_r_self)->_source_text_present;
    cpy_r_r19 = cpy_r_r20;
CPyL13: ;
    cpy_r_r13 = cpy_r_r19;
CPyL14: ;
    return cpy_r_r13;
CPyL15: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL16: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL2;
CPyL17: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL15;
CPyL18: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL8;
}

PyObject *CPyPy_modulefinder___BuildSourceSet___is_source(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", 0};
    static CPyArg_Parser parser = {"O:is_source", kwlist, 0};
    PyObject *obj_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___BuildSourceSet))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.BuildSourceSet", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(Py_TYPE(obj_file) == CPyType_nodes___MypyFile))
        arg_file = obj_file;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_file); 
        goto fail;
    }
    char retval = CPyDef_modulefinder___BuildSourceSet___is_source(arg_self, arg_file);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "is_source", 150, CPyStatic_modulefinder___globals);
    return NULL;
}

char CPyDef_modulefinder___FindModuleCache_____init__(PyObject *cpy_r_self, PyObject *cpy_r_search_paths, PyObject *cpy_r_fscache, PyObject *cpy_r_options, PyObject *cpy_r_stdlib_py_versions, PyObject *cpy_r_source_set) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_custom_typeshed_dir;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    if (cpy_r_stdlib_py_versions != NULL) goto CPyL27;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_stdlib_py_versions = cpy_r_r0;
CPyL2: ;
    if (cpy_r_source_set != NULL) goto CPyL28;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_source_set = cpy_r_r1;
CPyL4: ;
    CPy_INCREF(cpy_r_search_paths);
    ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_search_paths = cpy_r_search_paths;
    ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_source_set = cpy_r_source_set;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_fscache != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL10;
    CPy_INCREF(cpy_r_fscache);
    if (likely(cpy_r_fscache != Py_None))
        cpy_r_r4 = cpy_r_fscache;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "__init__", 172, CPyStatic_modulefinder___globals, "mypy.fscache.FileSystemCache", cpy_r_fscache);
        goto CPyL29;
    }
    cpy_r_r5 = PyObject_IsTrue(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/modulefinder.py", "__init__", 172, CPyStatic_modulefinder___globals);
        goto CPyL29;
    }
    cpy_r_r7 = cpy_r_r5;
    if (!cpy_r_r7) goto CPyL10;
    CPy_INCREF(cpy_r_fscache);
    if (likely(cpy_r_fscache != Py_None))
        cpy_r_r8 = cpy_r_fscache;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "__init__", 179, CPyStatic_modulefinder___globals, "mypy.fscache.FileSystemCache", cpy_r_fscache);
        goto CPyL29;
    }
    cpy_r_r9 = cpy_r_r8;
    goto CPyL12;
CPyL10: ;
    cpy_r_r10 = CPyDef_fscache___FileSystemCache();
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "__init__", 179, CPyStatic_modulefinder___globals);
        goto CPyL29;
    }
    cpy_r_r9 = cpy_r_r10;
CPyL12: ;
    ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache = cpy_r_r9;
    cpy_r_r11 = PyDict_New();
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "__init__", 182, CPyStatic_modulefinder___globals);
        goto CPyL29;
    }
    ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_initial_components = cpy_r_r11;
    cpy_r_r12 = PyDict_New();
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "__init__", 184, CPyStatic_modulefinder___globals);
        goto CPyL29;
    }
    ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_results = cpy_r_r12;
    cpy_r_r13 = PyDict_New();
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "__init__", 185, CPyStatic_modulefinder___globals);
        goto CPyL29;
    }
    ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_ns_ancestors = cpy_r_r13;
    CPy_INCREF(cpy_r_options);
    ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options = cpy_r_options;
    cpy_r_r14 = Py_None;
    CPy_INCREF(cpy_r_r14);
    cpy_r_custom_typeshed_dir = cpy_r_r14;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_options != cpy_r_r15;
    if (cpy_r_r16) {
        goto CPyL30;
    } else
        goto CPyL18;
CPyL16: ;
    if (likely(cpy_r_options != Py_None))
        cpy_r_r17 = cpy_r_options;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "__init__", 189, CPyStatic_modulefinder___globals, "mypy.options.Options", cpy_r_options);
        goto CPyL29;
    }
    cpy_r_r18 = ((mypy___options___OptionsObject *)cpy_r_r17)->_custom_typeshed_dir;
    CPy_INCREF(cpy_r_r18);
    cpy_r_custom_typeshed_dir = cpy_r_r18;
CPyL18: ;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_stdlib_py_versions != cpy_r_r19;
    if (!cpy_r_r20) goto CPyL31;
    CPy_INCREF(cpy_r_stdlib_py_versions);
    if (likely(cpy_r_stdlib_py_versions != Py_None))
        cpy_r_r21 = cpy_r_stdlib_py_versions;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "__init__", 174, CPyStatic_modulefinder___globals, "dict", cpy_r_stdlib_py_versions);
        goto CPyL32;
    }
    cpy_r_r22 = PyDict_Size(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = cpy_r_r23 != 0;
    if (cpy_r_r24) {
        goto CPyL33;
    } else
        goto CPyL31;
CPyL21: ;
    if (likely(cpy_r_stdlib_py_versions != Py_None))
        cpy_r_r25 = cpy_r_stdlib_py_versions;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "__init__", 190, CPyStatic_modulefinder___globals, "dict", cpy_r_stdlib_py_versions);
        goto CPyL26;
    }
    cpy_r_r26 = cpy_r_r25;
    goto CPyL25;
CPyL23: ;
    cpy_r_r27 = CPyDef_modulefinder___load_stdlib_py_versions(cpy_r_custom_typeshed_dir);
    CPy_DECREF(cpy_r_custom_typeshed_dir);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "__init__", 190, CPyStatic_modulefinder___globals);
        goto CPyL26;
    }
    cpy_r_r26 = cpy_r_r27;
CPyL25: ;
    ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_stdlib_py_versions = cpy_r_r26;
    return 1;
CPyL26: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
CPyL27: ;
    CPy_INCREF(cpy_r_stdlib_py_versions);
    goto CPyL2;
CPyL28: ;
    CPy_INCREF(cpy_r_source_set);
    goto CPyL4;
CPyL29: ;
    CPy_DecRef(cpy_r_stdlib_py_versions);
    goto CPyL26;
CPyL30: ;
    CPy_DECREF(cpy_r_custom_typeshed_dir);
    goto CPyL16;
CPyL31: ;
    CPy_DECREF(cpy_r_stdlib_py_versions);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_stdlib_py_versions);
    CPy_DecRef(cpy_r_custom_typeshed_dir);
    goto CPyL26;
CPyL33: ;
    CPy_DECREF(cpy_r_custom_typeshed_dir);
    goto CPyL21;
}

PyObject *CPyPy_modulefinder___FindModuleCache_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"search_paths", "fscache", "options", "stdlib_py_versions", "source_set", 0};
    PyObject *obj_search_paths;
    PyObject *obj_fscache;
    PyObject *obj_options;
    PyObject *obj_stdlib_py_versions = NULL;
    PyObject *obj_source_set = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO|OO", "__init__", kwlist, &obj_search_paths, &obj_fscache, &obj_options, &obj_stdlib_py_versions, &obj_source_set)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___FindModuleCache))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.FindModuleCache", obj_self); 
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
    if (PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache))
        arg_fscache = obj_fscache;
    else {
        arg_fscache = NULL;
    }
    if (arg_fscache != NULL) goto __LL3485;
    if (obj_fscache == Py_None)
        arg_fscache = obj_fscache;
    else {
        arg_fscache = NULL;
    }
    if (arg_fscache != NULL) goto __LL3485;
    CPy_TypeError("mypy.fscache.FileSystemCache or None", obj_fscache); 
    goto fail;
__LL3485: ;
    PyObject *arg_options;
    if (Py_TYPE(obj_options) == CPyType_mypy___options___Options)
        arg_options = obj_options;
    else {
        arg_options = NULL;
    }
    if (arg_options != NULL) goto __LL3486;
    if (obj_options == Py_None)
        arg_options = obj_options;
    else {
        arg_options = NULL;
    }
    if (arg_options != NULL) goto __LL3486;
    CPy_TypeError("mypy.options.Options or None", obj_options); 
    goto fail;
__LL3486: ;
    PyObject *arg_stdlib_py_versions;
    if (obj_stdlib_py_versions == NULL) {
        arg_stdlib_py_versions = NULL;
        goto __LL3487;
    }
    if (PyDict_Check(obj_stdlib_py_versions))
        arg_stdlib_py_versions = obj_stdlib_py_versions;
    else {
        arg_stdlib_py_versions = NULL;
    }
    if (arg_stdlib_py_versions != NULL) goto __LL3487;
    if (obj_stdlib_py_versions == Py_None)
        arg_stdlib_py_versions = obj_stdlib_py_versions;
    else {
        arg_stdlib_py_versions = NULL;
    }
    if (arg_stdlib_py_versions != NULL) goto __LL3487;
    CPy_TypeError("dict or None", obj_stdlib_py_versions); 
    goto fail;
__LL3487: ;
    PyObject *arg_source_set;
    if (obj_source_set == NULL) {
        arg_source_set = NULL;
        goto __LL3488;
    }
    if (Py_TYPE(obj_source_set) == CPyType_modulefinder___BuildSourceSet)
        arg_source_set = obj_source_set;
    else {
        arg_source_set = NULL;
    }
    if (arg_source_set != NULL) goto __LL3488;
    if (obj_source_set == Py_None)
        arg_source_set = obj_source_set;
    else {
        arg_source_set = NULL;
    }
    if (arg_source_set != NULL) goto __LL3488;
    CPy_TypeError("mypy.modulefinder.BuildSourceSet or None", obj_source_set); 
    goto fail;
__LL3488: ;
    char retval = CPyDef_modulefinder___FindModuleCache_____init__(arg_self, arg_search_paths, arg_fscache, arg_options, arg_stdlib_py_versions, arg_source_set);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "__init__", 169, CPyStatic_modulefinder___globals);
    return NULL;
}

char CPyDef_modulefinder___FindModuleCache___clear(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_results;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDict_Clear(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/modulefinder.py", "clear", 195, CPyStatic_modulefinder___globals);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_initial_components;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDict_Clear(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/modulefinder.py", "clear", 196, CPyStatic_modulefinder___globals);
        goto CPyL4;
    }
    cpy_r_r4 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_ns_ancestors;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDict_Clear(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/modulefinder.py", "clear", 197, CPyStatic_modulefinder___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_modulefinder___FindModuleCache___clear(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":clear", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___FindModuleCache))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.FindModuleCache", obj_self); 
        goto fail;
    }
    char retval = CPyDef_modulefinder___FindModuleCache___clear(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "clear", 194, CPyStatic_modulefinder___globals);
    return NULL;
}

PyObject *CPyDef_modulefinder___FindModuleCache___find_module_via_source_set(PyObject *cpy_r_self, PyObject *cpy_r_id) {
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
    PyObject *cpy_r_p;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_d;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r__;
    int64_t cpy_r_r35;
    char cpy_r_r36;
    int64_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_x;
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
    char cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyTagged cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject **cpy_r_r83;
    PyObject *cpy_r_r84;
    CPyTagged cpy_r_r85;
    CPyTagged cpy_r_idx;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_parent;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject **cpy_r_r104;
    PyObject *cpy_r_r105;
    tuple_T2OO cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_basename;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_ext;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    CPyTagged cpy_r_r112;
    CPyPtr cpy_r_r113;
    int64_t cpy_r_r114;
    CPyTagged cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_x_2;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    CPyTagged cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    int32_t cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    cpy_r_r0 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_source_set;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r2) goto CPyL2;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_source_set;
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module_via_source_set", 206, CPyStatic_modulefinder___globals, "mypy.modulefinder.BuildSourceSet", cpy_r_r4);
        goto CPyL87;
    }
    cpy_r_r6 = ((mypy___modulefinder___BuildSourceSetObject *)cpy_r_r5)->_source_modules;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = Py_None;
    cpy_r_r8 = CPyDict_Get(cpy_r_r6, cpy_r_id, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 206, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    if (PyUnicode_Check(cpy_r_r8))
        cpy_r_r9 = cpy_r_r8;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL3489;
    if (cpy_r_r8 == Py_None)
        cpy_r_r9 = cpy_r_r8;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL3489;
    CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module_via_source_set", 206, CPyStatic_modulefinder___globals, "str or None", cpy_r_r8);
    goto CPyL87;
__LL3489: ;
    cpy_r_p = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_p != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL88;
    CPy_INCREF(cpy_r_p);
    if (likely(cpy_r_p != Py_None))
        cpy_r_r12 = cpy_r_p;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module_via_source_set", 206, CPyStatic_modulefinder___globals, "str", cpy_r_p);
        goto CPyL89;
    }
    cpy_r_r13 = CPyStr_IsTrue(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (!cpy_r_r13) goto CPyL88;
    cpy_r_r14 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r14);
    CPy_INCREF(cpy_r_p);
    if (likely(cpy_r_p != Py_None))
        cpy_r_r15 = cpy_r_p;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module_via_source_set", 207, CPyStatic_modulefinder___globals, "str", cpy_r_p);
        goto CPyL90;
    }
    cpy_r_r16 = CPY_GET_METHOD(cpy_r_r14, CPyType_fscache___FileSystemCache, 7, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r14, cpy_r_r15); /* isfile */
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 207, CPyStatic_modulefinder___globals);
        goto CPyL89;
    }
    if (!cpy_r_r16) goto CPyL88;
    CPy_INCREF(cpy_r_p);
    if (likely(cpy_r_p != Py_None))
        cpy_r_r17 = cpy_r_p;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module_via_source_set", 212, CPyStatic_modulefinder___globals, "str", cpy_r_p);
        goto CPyL89;
    }
    cpy_r_r18 = CPyModule_os;
    cpy_r_r19 = CPyStatics[142]; /* 'path' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 212, CPyStatic_modulefinder___globals);
        goto CPyL91;
    }
    cpy_r_r21 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 212, CPyStatic_modulefinder___globals);
        goto CPyL91;
    }
    PyObject *cpy_r_r23[1] = {cpy_r_r17};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = _PyObject_Vectorcall(cpy_r_r22, cpy_r_r24, 1, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 212, CPyStatic_modulefinder___globals);
        goto CPyL91;
    }
    CPy_DECREF(cpy_r_r17);
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module_via_source_set", 212, CPyStatic_modulefinder___globals, "str", cpy_r_r25);
        goto CPyL89;
    }
    cpy_r_d = cpy_r_r26;
    cpy_r_r27 = CPyStatics[224]; /* '.' */
    cpy_r_r28 = CPyStatics[226]; /* 'count' */
    PyObject *cpy_r_r29[2] = {cpy_r_id, cpy_r_r27};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_VectorcallMethod(cpy_r_r28, cpy_r_r30, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 213, CPyStatic_modulefinder___globals);
        goto CPyL92;
    }
    if (likely(PyLong_Check(cpy_r_r31)))
        cpy_r_r32 = CPyTagged_FromObject(cpy_r_r31);
    else {
        CPy_TypeError("int", cpy_r_r31); cpy_r_r32 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 213, CPyStatic_modulefinder___globals);
        goto CPyL92;
    }
    cpy_r_r33 = 0;
    CPyTagged_INCREF(cpy_r_r33);
    cpy_r_r34 = CPyTagged_StealAsObject(cpy_r_r33);
    cpy_r__ = cpy_r_r34;
    CPy_DECREF(cpy_r__);
CPyL19: ;
    cpy_r_r35 = cpy_r_r33 & 1;
    cpy_r_r36 = cpy_r_r35 == 0;
    cpy_r_r37 = cpy_r_r32 & 1;
    cpy_r_r38 = cpy_r_r37 == 0;
    cpy_r_r39 = cpy_r_r36 & cpy_r_r38;
    if (!cpy_r_r39) goto CPyL21;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r32;
    cpy_r_r41 = cpy_r_r40;
    goto CPyL22;
CPyL21: ;
    cpy_r_r42 = CPyTagged_IsLt_(cpy_r_r33, cpy_r_r32);
    cpy_r_r41 = cpy_r_r42;
CPyL22: ;
    if (!cpy_r_r41) goto CPyL93;
    cpy_r_r43 = 0;
    cpy_r_r44 = CPyStatic_modulefinder___PYTHON_EXTENSIONS;
    if (unlikely(cpy_r_r44 == NULL)) {
        goto CPyL94;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYTHON_EXTENSIONS\" was not set");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 215, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r46 = 0;
CPyL27: ;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_r44)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 << 1;
    cpy_r_r50 = (Py_ssize_t)cpy_r_r46 < (Py_ssize_t)cpy_r_r49;
    if (!cpy_r_r50) goto CPyL38;
    cpy_r_r51 = CPyList_GetItemUnsafe(cpy_r_r44, cpy_r_r46);
    if (likely(PyUnicode_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module_via_source_set", 214, CPyStatic_modulefinder___globals, "str", cpy_r_r51);
        goto CPyL95;
    }
    cpy_r_x = cpy_r_r52;
    cpy_r_r53 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = CPyStatics[288]; /* '__init__' */
    cpy_r_r55 = PyUnicode_Concat(cpy_r_r54, cpy_r_x);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 215, CPyStatic_modulefinder___globals);
        goto CPyL96;
    }
    cpy_r_r56 = CPyModule_os;
    cpy_r_r57 = CPyStatics[142]; /* 'path' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 215, CPyStatic_modulefinder___globals);
        goto CPyL97;
    }
    cpy_r_r59 = CPyStatics[175]; /* 'join' */
    cpy_r_r60 = CPyObject_GetAttr(cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 215, CPyStatic_modulefinder___globals);
        goto CPyL97;
    }
    PyObject *cpy_r_r61[2] = {cpy_r_d, cpy_r_r55};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = _PyObject_Vectorcall(cpy_r_r60, cpy_r_r62, 2, 0);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 215, CPyStatic_modulefinder___globals);
        goto CPyL97;
    }
    CPy_DECREF(cpy_r_r55);
    if (likely(PyUnicode_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module_via_source_set", 215, CPyStatic_modulefinder___globals, "str", cpy_r_r63);
        goto CPyL96;
    }
    cpy_r_r65 = CPY_GET_METHOD(cpy_r_r53, CPyType_fscache___FileSystemCache, 7, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r53, cpy_r_r64); /* isfile */
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 215, CPyStatic_modulefinder___globals);
        goto CPyL95;
    }
    if (!cpy_r_r65) goto CPyL37;
    cpy_r_r43 = 1;
    goto CPyL38;
CPyL37: ;
    cpy_r_r66 = cpy_r_r46 + 2;
    cpy_r_r46 = cpy_r_r66;
    goto CPyL27;
CPyL38: ;
    if (cpy_r_r43) {
        goto CPyL40;
    } else
        goto CPyL98;
CPyL39: ;
    cpy_r_r67 = Py_None;
    CPy_INCREF(cpy_r_r67);
    return cpy_r_r67;
CPyL40: ;
    cpy_r_r68 = CPyModule_os;
    cpy_r_r69 = CPyStatics[142]; /* 'path' */
    cpy_r_r70 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 218, CPyStatic_modulefinder___globals);
        goto CPyL95;
    }
    cpy_r_r71 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r72 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 218, CPyStatic_modulefinder___globals);
        goto CPyL95;
    }
    PyObject *cpy_r_r73[1] = {cpy_r_d};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = _PyObject_Vectorcall(cpy_r_r72, cpy_r_r74, 1, 0);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 218, CPyStatic_modulefinder___globals);
        goto CPyL95;
    }
    CPy_DECREF(cpy_r_d);
    if (likely(PyUnicode_Check(cpy_r_r75)))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module_via_source_set", 218, CPyStatic_modulefinder___globals, "str", cpy_r_r75);
        goto CPyL99;
    }
    cpy_r_d = cpy_r_r76;
    cpy_r_r77 = CPyTagged_Add(cpy_r_r33, 2);
    CPyTagged_DECREF(cpy_r_r33);
    CPyTagged_INCREF(cpy_r_r77);
    cpy_r_r33 = cpy_r_r77;
    cpy_r_r78 = CPyTagged_StealAsObject(cpy_r_r77);
    cpy_r__ = cpy_r_r78;
    CPy_DECREF(cpy_r__);
    goto CPyL19;
CPyL46: ;
    if (likely(cpy_r_p != Py_None))
        cpy_r_r79 = cpy_r_p;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module_via_source_set", 219, CPyStatic_modulefinder___globals, "str", cpy_r_p);
        goto CPyL87;
    }
    return cpy_r_r79;
CPyL48: ;
    cpy_r_r80 = CPyStatics[224]; /* '.' */
    cpy_r_r81 = CPyStatics[3834]; /* 'rfind' */
    PyObject *cpy_r_r82[2] = {cpy_r_id, cpy_r_r80};
    cpy_r_r83 = (PyObject **)&cpy_r_r82;
    cpy_r_r84 = PyObject_VectorcallMethod(cpy_r_r81, cpy_r_r83, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 221, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    if (likely(PyLong_Check(cpy_r_r84)))
        cpy_r_r85 = CPyTagged_FromObject(cpy_r_r84);
    else {
        CPy_TypeError("int", cpy_r_r84); cpy_r_r85 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 221, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    cpy_r_idx = cpy_r_r85;
    cpy_r_r86 = (Py_ssize_t)cpy_r_idx != -2;
    if (!cpy_r_r86) goto CPyL100;
    cpy_r_r87 = CPyStr_GetSlice(cpy_r_id, 0, cpy_r_idx);
    CPyTagged_DECREF(cpy_r_idx);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 225, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    if (likely(PyUnicode_Check(cpy_r_r87)))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module_via_source_set", 225, CPyStatic_modulefinder___globals, "str", cpy_r_r87);
        goto CPyL87;
    }
    cpy_r_r89 = CPyDef_modulefinder___FindModuleCache___find_module_via_source_set(cpy_r_self, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 225, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    cpy_r_parent = cpy_r_r89;
    cpy_r_r90 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r91 = cpy_r_parent == cpy_r_r90;
    if (cpy_r_r91) goto CPyL101;
    cpy_r_r92 = (PyObject *)&PyUnicode_Type;
    cpy_r_r93 = PyObject_IsInstance(cpy_r_parent, cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 226, CPyStatic_modulefinder___globals);
        goto CPyL102;
    }
    cpy_r_r95 = cpy_r_r93;
    if (cpy_r_r95) {
        goto CPyL58;
    } else
        goto CPyL101;
CPyL57: ;
    cpy_r_r96 = Py_None;
    CPy_INCREF(cpy_r_r96);
    return cpy_r_r96;
CPyL58: ;
    CPy_INCREF(cpy_r_parent);
    if (likely(PyUnicode_Check(cpy_r_parent)))
        cpy_r_r97 = cpy_r_parent;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module_via_source_set", 229, CPyStatic_modulefinder___globals, "str", cpy_r_parent);
        goto CPyL102;
    }
    cpy_r_r98 = CPyModule_os;
    cpy_r_r99 = CPyStatics[142]; /* 'path' */
    cpy_r_r100 = CPyObject_GetAttr(cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 229, CPyStatic_modulefinder___globals);
        goto CPyL103;
    }
    cpy_r_r101 = CPyStatics[370]; /* 'splitext' */
    cpy_r_r102 = CPyObject_GetAttr(cpy_r_r100, cpy_r_r101);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 229, CPyStatic_modulefinder___globals);
        goto CPyL103;
    }
    PyObject *cpy_r_r103[1] = {cpy_r_r97};
    cpy_r_r104 = (PyObject **)&cpy_r_r103;
    cpy_r_r105 = _PyObject_Vectorcall(cpy_r_r102, cpy_r_r104, 1, 0);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 229, CPyStatic_modulefinder___globals);
        goto CPyL103;
    }
    CPy_DECREF(cpy_r_r97);
    PyObject *__tmp3490;
    if (unlikely(!(PyTuple_Check(cpy_r_r105) && PyTuple_GET_SIZE(cpy_r_r105) == 2))) {
        __tmp3490 = NULL;
        goto __LL3491;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r105, 0))))
        __tmp3490 = PyTuple_GET_ITEM(cpy_r_r105, 0);
    else {
        __tmp3490 = NULL;
    }
    if (__tmp3490 == NULL) goto __LL3491;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r105, 1))))
        __tmp3490 = PyTuple_GET_ITEM(cpy_r_r105, 1);
    else {
        __tmp3490 = NULL;
    }
    if (__tmp3490 == NULL) goto __LL3491;
    __tmp3490 = cpy_r_r105;
__LL3491: ;
    if (unlikely(__tmp3490 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r105); cpy_r_r106 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3492 = PyTuple_GET_ITEM(cpy_r_r105, 0);
        CPy_INCREF(__tmp3492);
        PyObject *__tmp3493;
        if (likely(PyUnicode_Check(__tmp3492)))
            __tmp3493 = __tmp3492;
        else {
            CPy_TypeError("str", __tmp3492); 
            __tmp3493 = NULL;
        }
        cpy_r_r106.f0 = __tmp3493;
        PyObject *__tmp3494 = PyTuple_GET_ITEM(cpy_r_r105, 1);
        CPy_INCREF(__tmp3494);
        PyObject *__tmp3495;
        if (likely(PyUnicode_Check(__tmp3494)))
            __tmp3495 = __tmp3494;
        else {
            CPy_TypeError("str", __tmp3494); 
            __tmp3495 = NULL;
        }
        cpy_r_r106.f1 = __tmp3495;
    }
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r106.f0 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 229, CPyStatic_modulefinder___globals);
        goto CPyL102;
    }
    cpy_r_r107 = cpy_r_r106.f0;
    CPy_INCREF(cpy_r_r107);
    cpy_r_basename = cpy_r_r107;
    cpy_r_r108 = cpy_r_r106.f1;
    CPy_INCREF(cpy_r_r108);
    CPy_DECREF(cpy_r_r106.f0);
    CPy_DECREF(cpy_r_r106.f1);
    cpy_r_ext = cpy_r_r108;
    cpy_r_r109 = 0;
    cpy_r_r110 = CPyStatic_modulefinder___PYTHON_EXTENSIONS;
    if (unlikely(cpy_r_r110 == NULL)) {
        goto CPyL104;
    } else
        goto CPyL66;
CPyL64: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYTHON_EXTENSIONS\" was not set");
    cpy_r_r111 = 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 230, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL66: ;
    cpy_r_r112 = 0;
CPyL67: ;
    cpy_r_r113 = (CPyPtr)&((PyVarObject *)cpy_r_r110)->ob_size;
    cpy_r_r114 = *(int64_t *)cpy_r_r113;
    cpy_r_r115 = cpy_r_r114 << 1;
    cpy_r_r116 = (Py_ssize_t)cpy_r_r112 < (Py_ssize_t)cpy_r_r115;
    if (!cpy_r_r116) goto CPyL105;
    cpy_r_r117 = CPyList_GetItemUnsafe(cpy_r_r110, cpy_r_r112);
    if (likely(PyUnicode_Check(cpy_r_r117)))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module_via_source_set", 230, CPyStatic_modulefinder___globals, "str", cpy_r_r117);
        goto CPyL106;
    }
    cpy_r_x_2 = cpy_r_r118;
    CPy_INCREF(cpy_r_parent);
    if (likely(PyUnicode_Check(cpy_r_parent)))
        cpy_r_r119 = cpy_r_parent;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module_via_source_set", 230, CPyStatic_modulefinder___globals, "str", cpy_r_parent);
        goto CPyL107;
    }
    cpy_r_r120 = CPyStatics[288]; /* '__init__' */
    cpy_r_r121 = PyUnicode_Concat(cpy_r_r120, cpy_r_x_2);
    CPy_DECREF(cpy_r_x_2);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 230, CPyStatic_modulefinder___globals);
        goto CPyL108;
    }
    cpy_r_r122 = CPyStr_Endswith(cpy_r_r119, cpy_r_r121);
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_r121);
    if (cpy_r_r122) {
        goto CPyL109;
    } else
        goto CPyL73;
CPyL72: ;
    cpy_r_r109 = 1;
    goto CPyL74;
CPyL73: ;
    cpy_r_r123 = cpy_r_r112 + 2;
    cpy_r_r112 = cpy_r_r123;
    goto CPyL67;
CPyL74: ;
    if (cpy_r_r109) goto CPyL110;
    cpy_r_r124 = CPyStatic_modulefinder___PYTHON_EXTENSIONS;
    if (unlikely(cpy_r_r124 == NULL)) {
        goto CPyL111;
    } else
        goto CPyL78;
CPyL76: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYTHON_EXTENSIONS\" was not set");
    cpy_r_r125 = 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 231, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL78: ;
    cpy_r_r126 = PySequence_Contains(cpy_r_r124, cpy_r_ext);
    CPy_DECREF(cpy_r_ext);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 231, CPyStatic_modulefinder___globals);
        goto CPyL112;
    }
    cpy_r_r128 = cpy_r_r126;
    if (!cpy_r_r128) goto CPyL113;
    cpy_r_r129 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r129);
    cpy_r_r130 = CPY_GET_METHOD(cpy_r_r129, CPyType_fscache___FileSystemCache, 10, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r129, cpy_r_basename); /* isdir */
    CPy_DECREF(cpy_r_basename);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r130 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 231, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    if (cpy_r_r130) goto CPyL86;
    cpy_r_r131 = CPyStatic_modulefinder___ModuleNotFoundReason___NOT_FOUND;
    if (likely(cpy_r_r131 != NULL)) goto CPyL85;
    PyErr_SetString(PyExc_NameError, "value for final name \"NOT_FOUND\" was not set");
    cpy_r_r132 = 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 245, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL85: ;
    CPy_INCREF(cpy_r_r131);
    return cpy_r_r131;
CPyL86: ;
    cpy_r_r133 = Py_None;
    CPy_INCREF(cpy_r_r133);
    return cpy_r_r133;
CPyL87: ;
    cpy_r_r134 = NULL;
    return cpy_r_r134;
CPyL88: ;
    CPy_DECREF(cpy_r_p);
    goto CPyL48;
CPyL89: ;
    CPy_DecRef(cpy_r_p);
    goto CPyL87;
CPyL90: ;
    CPy_DecRef(cpy_r_p);
    CPy_DecRef(cpy_r_r14);
    goto CPyL87;
CPyL91: ;
    CPy_DecRef(cpy_r_p);
    CPy_DecRef(cpy_r_r17);
    goto CPyL87;
CPyL92: ;
    CPy_DecRef(cpy_r_p);
    CPy_DecRef(cpy_r_d);
    goto CPyL87;
CPyL93: ;
    CPy_DECREF(cpy_r_d);
    CPyTagged_DECREF(cpy_r_r32);
    CPyTagged_DECREF(cpy_r_r33);
    goto CPyL46;
CPyL94: ;
    CPy_DecRef(cpy_r_p);
    CPy_DecRef(cpy_r_d);
    CPyTagged_DecRef(cpy_r_r32);
    CPyTagged_DecRef(cpy_r_r33);
    goto CPyL24;
CPyL95: ;
    CPy_DecRef(cpy_r_p);
    CPy_DecRef(cpy_r_d);
    CPyTagged_DecRef(cpy_r_r32);
    CPyTagged_DecRef(cpy_r_r33);
    goto CPyL87;
CPyL96: ;
    CPy_DecRef(cpy_r_p);
    CPy_DecRef(cpy_r_d);
    CPyTagged_DecRef(cpy_r_r32);
    CPyTagged_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r53);
    goto CPyL87;
CPyL97: ;
    CPy_DecRef(cpy_r_p);
    CPy_DecRef(cpy_r_d);
    CPyTagged_DecRef(cpy_r_r32);
    CPyTagged_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r55);
    goto CPyL87;
CPyL98: ;
    CPy_DECREF(cpy_r_p);
    CPy_DECREF(cpy_r_d);
    CPyTagged_DECREF(cpy_r_r32);
    CPyTagged_DECREF(cpy_r_r33);
    goto CPyL39;
CPyL99: ;
    CPy_DecRef(cpy_r_p);
    CPyTagged_DecRef(cpy_r_r32);
    CPyTagged_DecRef(cpy_r_r33);
    goto CPyL87;
CPyL100: ;
    CPyTagged_DECREF(cpy_r_idx);
    goto CPyL86;
CPyL101: ;
    CPy_DECREF(cpy_r_parent);
    goto CPyL57;
CPyL102: ;
    CPy_DecRef(cpy_r_parent);
    goto CPyL87;
CPyL103: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_r97);
    goto CPyL87;
CPyL104: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_basename);
    CPy_DecRef(cpy_r_ext);
    goto CPyL64;
CPyL105: ;
    CPy_DECREF(cpy_r_parent);
    goto CPyL74;
CPyL106: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_basename);
    CPy_DecRef(cpy_r_ext);
    goto CPyL87;
CPyL107: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_basename);
    CPy_DecRef(cpy_r_ext);
    CPy_DecRef(cpy_r_x_2);
    goto CPyL87;
CPyL108: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_basename);
    CPy_DecRef(cpy_r_ext);
    CPy_DecRef(cpy_r_r119);
    goto CPyL87;
CPyL109: ;
    CPy_DECREF(cpy_r_parent);
    goto CPyL72;
CPyL110: ;
    CPy_DECREF(cpy_r_basename);
    CPy_DECREF(cpy_r_ext);
    goto CPyL86;
CPyL111: ;
    CPy_DecRef(cpy_r_basename);
    CPy_DecRef(cpy_r_ext);
    goto CPyL76;
CPyL112: ;
    CPy_DecRef(cpy_r_basename);
    goto CPyL87;
CPyL113: ;
    CPy_DECREF(cpy_r_basename);
    goto CPyL86;
}

PyObject *CPyPy_modulefinder___FindModuleCache___find_module_via_source_set(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"id", 0};
    static CPyArg_Parser parser = {"O:find_module_via_source_set", kwlist, 0};
    PyObject *obj_id;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___FindModuleCache))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.FindModuleCache", obj_self); 
        goto fail;
    }
    PyObject *arg_id;
    if (likely(PyUnicode_Check(obj_id)))
        arg_id = obj_id;
    else {
        CPy_TypeError("str", obj_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_modulefinder___FindModuleCache___find_module_via_source_set(arg_self, arg_id);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "find_module_via_source_set", 199, CPyStatic_modulefinder___globals);
    return NULL;
}

PyObject *CPyDef_modulefinder___FindModuleCache___find_lib_path_dirs(PyObject *cpy_r_self, PyObject *cpy_r_id, PyObject *cpy_r_lib_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_components;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_dir_chain;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_dirs;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_pathitem;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_dir;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    tuple_T2OC cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    cpy_r_r0 = CPyStatics[224]; /* '.' */
    cpy_r_r1 = PyUnicode_Split(cpy_r_id, cpy_r_r0, -1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 253, CPyStatic_modulefinder___globals);
        goto CPyL26;
    }
    cpy_r_components = cpy_r_r1;
    cpy_r_r2 = CPyModule_os;
    cpy_r_r3 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 254, CPyStatic_modulefinder___globals);
        goto CPyL27;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 254, CPyStatic_modulefinder___globals, "str", cpy_r_r4);
        goto CPyL27;
    }
    cpy_r_r6 = CPyList_GetSlice(cpy_r_components, 0, -2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 254, CPyStatic_modulefinder___globals);
        goto CPyL28;
    }
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 254, CPyStatic_modulefinder___globals, "list", cpy_r_r6);
        goto CPyL28;
    }
    cpy_r_r8 = PyUnicode_Join(cpy_r_r5, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 254, CPyStatic_modulefinder___globals);
        goto CPyL27;
    }
    cpy_r_dir_chain = cpy_r_r8;
    cpy_r_r9 = PyList_New(0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 256, CPyStatic_modulefinder___globals);
        goto CPyL29;
    }
    cpy_r_dirs = cpy_r_r9;
    cpy_r_r10 = CPyList_GetItemShort(cpy_r_components, 0);
    CPy_DECREF(cpy_r_components);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 257, CPyStatic_modulefinder___globals);
        goto CPyL30;
    }
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 257, CPyStatic_modulefinder___globals, "str", cpy_r_r10);
        goto CPyL30;
    }
    cpy_r_r12 = CPyDef_modulefinder___FindModuleCache___get_toplevel_possibilities(cpy_r_self, cpy_r_lib_path, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 257, CPyStatic_modulefinder___globals);
        goto CPyL30;
    }
    cpy_r_r13 = 0;
CPyL11: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL31;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_r12, cpy_r_r13);
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 257, CPyStatic_modulefinder___globals, "str", cpy_r_r18);
        goto CPyL32;
    }
    cpy_r_pathitem = cpy_r_r19;
    cpy_r_r20 = CPyModule_os;
    cpy_r_r21 = CPyStatics[142]; /* 'path' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 259, CPyStatic_modulefinder___globals);
        goto CPyL33;
    }
    cpy_r_r23 = CPyStatics[175]; /* 'join' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 259, CPyStatic_modulefinder___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r25[2] = {cpy_r_pathitem, cpy_r_dir_chain};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r26, 2, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 259, CPyStatic_modulefinder___globals);
        goto CPyL33;
    }
    CPy_DECREF(cpy_r_pathitem);
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 259, CPyStatic_modulefinder___globals, "str", cpy_r_r27);
        goto CPyL32;
    }
    cpy_r_r29 = CPyModule_os;
    cpy_r_r30 = CPyStatics[142]; /* 'path' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 259, CPyStatic_modulefinder___globals);
        goto CPyL34;
    }
    cpy_r_r32 = CPyStatics[2213]; /* 'normpath' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 259, CPyStatic_modulefinder___globals);
        goto CPyL34;
    }
    PyObject *cpy_r_r34[1] = {cpy_r_r28};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = _PyObject_Vectorcall(cpy_r_r33, cpy_r_r35, 1, 0);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 259, CPyStatic_modulefinder___globals);
        goto CPyL34;
    }
    CPy_DECREF(cpy_r_r28);
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 259, CPyStatic_modulefinder___globals, "str", cpy_r_r36);
        goto CPyL32;
    }
    cpy_r_dir = cpy_r_r37;
    cpy_r_r38 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPY_GET_METHOD(cpy_r_r38, CPyType_fscache___FileSystemCache, 10, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r38, cpy_r_dir); /* isdir */
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 260, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
    if (!cpy_r_r39) goto CPyL36;
    cpy_r_r40.f0 = cpy_r_dir;
    cpy_r_r40.f1 = 1;
    CPy_INCREF(cpy_r_r40.f0);
    CPy_DECREF(cpy_r_dir);
    cpy_r_r41 = PyTuple_New(2);
    if (unlikely(cpy_r_r41 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3496 = cpy_r_r40.f0;
    PyTuple_SET_ITEM(cpy_r_r41, 0, __tmp3496);
    PyObject *__tmp3497 = cpy_r_r40.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp3497);
    PyTuple_SET_ITEM(cpy_r_r41, 1, __tmp3497);
    cpy_r_r42 = PyList_Append(cpy_r_dirs, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 261, CPyStatic_modulefinder___globals);
        goto CPyL32;
    }
CPyL24: ;
    cpy_r_r44 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r44;
    goto CPyL11;
CPyL25: ;
    return cpy_r_dirs;
CPyL26: ;
    cpy_r_r45 = NULL;
    return cpy_r_r45;
CPyL27: ;
    CPy_DecRef(cpy_r_components);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_r5);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_dirs);
    goto CPyL26;
CPyL31: ;
    CPy_DECREF(cpy_r_dir_chain);
    CPy_DECREF(cpy_r_r12);
    goto CPyL25;
CPyL32: ;
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_dirs);
    CPy_DecRef(cpy_r_r12);
    goto CPyL26;
CPyL33: ;
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_dirs);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_pathitem);
    goto CPyL26;
CPyL34: ;
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_dirs);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r28);
    goto CPyL26;
CPyL35: ;
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_dirs);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_dir);
    goto CPyL26;
CPyL36: ;
    CPy_DECREF(cpy_r_dir);
    goto CPyL24;
}

PyObject *CPyPy_modulefinder___FindModuleCache___find_lib_path_dirs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"id", "lib_path", 0};
    static CPyArg_Parser parser = {"OO:find_lib_path_dirs", kwlist, 0};
    PyObject *obj_id;
    PyObject *obj_lib_path;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_id, &obj_lib_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___FindModuleCache))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.FindModuleCache", obj_self); 
        goto fail;
    }
    PyObject *arg_id;
    if (likely(PyUnicode_Check(obj_id)))
        arg_id = obj_id;
    else {
        CPy_TypeError("str", obj_id); 
        goto fail;
    }
    PyObject * arg_lib_path;
    if (likely(PyTuple_Check(obj_lib_path)))
        arg_lib_path = obj_lib_path;
    else {
        CPy_TypeError("tuple", obj_lib_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_modulefinder___FindModuleCache___find_lib_path_dirs(arg_self, arg_id, arg_lib_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "find_lib_path_dirs", 248, CPyStatic_modulefinder___globals);
    return NULL;
}

PyObject *CPyDef_modulefinder___FindModuleCache___get_toplevel_possibilities(PyObject *cpy_r_self, PyObject *cpy_r_lib_path, PyObject *cpy_r_id) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_components;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_dir;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_contents;
    tuple_T3OOO cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T2OO cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    cpy_r_r0 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_initial_components;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_lib_path);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 275, CPyStatic_modulefinder___globals);
        goto CPyL42;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL8;
    cpy_r_r4 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_initial_components;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r4, cpy_r_lib_path);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 276, CPyStatic_modulefinder___globals);
        goto CPyL42;
    }
    if (likely(PyDict_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 276, CPyStatic_modulefinder___globals, "dict", cpy_r_r5);
        goto CPyL42;
    }
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 276, CPyStatic_modulefinder___globals);
        goto CPyL43;
    }
    cpy_r_r8 = CPyDict_Get(cpy_r_r6, cpy_r_id, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 276, CPyStatic_modulefinder___globals);
        goto CPyL42;
    }
    if (likely(PyList_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 276, CPyStatic_modulefinder___globals, "list", cpy_r_r8);
        goto CPyL42;
    }
    return cpy_r_r9;
CPyL8: ;
    cpy_r_r10 = PyDict_New();
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 279, CPyStatic_modulefinder___globals);
        goto CPyL42;
    }
    cpy_r_components = cpy_r_r10;
    cpy_r_r11 = 0;
CPyL10: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_lib_path)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL37;
    cpy_r_r16 = CPySequenceTuple_GetItem(cpy_r_lib_path, cpy_r_r11);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 280, CPyStatic_modulefinder___globals);
        goto CPyL44;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 280, CPyStatic_modulefinder___globals, "str", cpy_r_r16);
        goto CPyL44;
    }
    cpy_r_dir = cpy_r_r17;
    cpy_r_r18 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPY_GET_METHOD(cpy_r_r18, CPyType_fscache___FileSystemCache, 6, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r18, cpy_r_dir); /* listdir */
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 282, CPyStatic_modulefinder___globals);
        goto CPyL16;
    }
    cpy_r_contents = cpy_r_r19;
    goto CPyL25;
CPyL16: ;
    cpy_r_r20 = CPy_CatchError();
    cpy_r_r21 = CPyModule_builtins;
    cpy_r_r22 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 283, CPyStatic_modulefinder___globals);
        goto CPyL45;
    }
    cpy_r_r24 = CPy_ExceptionMatches(cpy_r_r23);
    CPy_DecRef(cpy_r_r23);
    if (!cpy_r_r24) goto CPyL46;
    cpy_r_r25 = PyList_New(0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 284, CPyStatic_modulefinder___globals);
        goto CPyL45;
    }
    cpy_r_contents = cpy_r_r25;
    goto CPyL22;
CPyL20: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL23;
    } else
        goto CPyL47;
CPyL21: ;
    CPy_Unreachable();
CPyL22: ;
    CPy_RestoreExcInfo(cpy_r_r20);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    goto CPyL25;
CPyL23: ;
    CPy_RestoreExcInfo(cpy_r_r20);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    cpy_r_r26 = CPy_KeepPropagating();
    if (!cpy_r_r26) goto CPyL42;
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r27 = 0;
CPyL26: ;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_contents)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = (Py_ssize_t)cpy_r_r27 < (Py_ssize_t)cpy_r_r30;
    if (!cpy_r_r31) goto CPyL48;
    cpy_r_r32 = CPyList_GetItemUnsafe(cpy_r_contents, cpy_r_r27);
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 288, CPyStatic_modulefinder___globals, "str", cpy_r_r32);
        goto CPyL49;
    }
    cpy_r_name = cpy_r_r33;
    cpy_r_r34 = CPyModule_os;
    cpy_r_r35 = CPyStatics[142]; /* 'path' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 289, CPyStatic_modulefinder___globals);
        goto CPyL50;
    }
    cpy_r_r37 = CPyStatics[370]; /* 'splitext' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 289, CPyStatic_modulefinder___globals);
        goto CPyL50;
    }
    PyObject *cpy_r_r39[1] = {cpy_r_name};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r40, 1, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 289, CPyStatic_modulefinder___globals);
        goto CPyL50;
    }
    CPy_DECREF(cpy_r_name);
    PyObject *__tmp3498;
    if (unlikely(!(PyTuple_Check(cpy_r_r41) && PyTuple_GET_SIZE(cpy_r_r41) == 2))) {
        __tmp3498 = NULL;
        goto __LL3499;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r41, 0))))
        __tmp3498 = PyTuple_GET_ITEM(cpy_r_r41, 0);
    else {
        __tmp3498 = NULL;
    }
    if (__tmp3498 == NULL) goto __LL3499;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r41, 1))))
        __tmp3498 = PyTuple_GET_ITEM(cpy_r_r41, 1);
    else {
        __tmp3498 = NULL;
    }
    if (__tmp3498 == NULL) goto __LL3499;
    __tmp3498 = cpy_r_r41;
__LL3499: ;
    if (unlikely(__tmp3498 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r41); cpy_r_r42 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3500 = PyTuple_GET_ITEM(cpy_r_r41, 0);
        CPy_INCREF(__tmp3500);
        PyObject *__tmp3501;
        if (likely(PyUnicode_Check(__tmp3500)))
            __tmp3501 = __tmp3500;
        else {
            CPy_TypeError("str", __tmp3500); 
            __tmp3501 = NULL;
        }
        cpy_r_r42.f0 = __tmp3501;
        PyObject *__tmp3502 = PyTuple_GET_ITEM(cpy_r_r41, 1);
        CPy_INCREF(__tmp3502);
        PyObject *__tmp3503;
        if (likely(PyUnicode_Check(__tmp3502)))
            __tmp3503 = __tmp3502;
        else {
            CPy_TypeError("str", __tmp3502); 
            __tmp3503 = NULL;
        }
        cpy_r_r42.f1 = __tmp3503;
    }
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42.f0 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 289, CPyStatic_modulefinder___globals);
        goto CPyL49;
    }
    cpy_r_r43 = cpy_r_r42.f0;
    CPy_INCREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r42.f0);
    CPy_DECREF(cpy_r_r42.f1);
    cpy_r_name = cpy_r_r43;
    cpy_r_r44 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_components, cpy_r_name, 1);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 290, CPyStatic_modulefinder___globals);
        goto CPyL49;
    }
    if (likely(PyList_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 290, CPyStatic_modulefinder___globals, "list", cpy_r_r44);
        goto CPyL49;
    }
    cpy_r_r46 = PyList_Append(cpy_r_r45, cpy_r_dir);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 290, CPyStatic_modulefinder___globals);
        goto CPyL49;
    }
    cpy_r_r48 = cpy_r_r27 + 2;
    cpy_r_r27 = cpy_r_r48;
    goto CPyL26;
CPyL36: ;
    cpy_r_r49 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r49;
    goto CPyL10;
CPyL37: ;
    cpy_r_r50 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_initial_components;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = CPyDict_SetItem(cpy_r_r50, cpy_r_lib_path, cpy_r_components);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 292, CPyStatic_modulefinder___globals);
        goto CPyL44;
    }
    cpy_r_r53 = PyList_New(0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 293, CPyStatic_modulefinder___globals);
        goto CPyL44;
    }
    cpy_r_r54 = CPyDict_Get(cpy_r_components, cpy_r_id, cpy_r_r53);
    CPy_DECREF(cpy_r_components);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 293, CPyStatic_modulefinder___globals);
        goto CPyL42;
    }
    if (likely(PyList_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 293, CPyStatic_modulefinder___globals, "list", cpy_r_r54);
        goto CPyL42;
    }
    return cpy_r_r55;
CPyL42: ;
    cpy_r_r56 = NULL;
    return cpy_r_r56;
CPyL43: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL42;
CPyL44: ;
    CPy_DecRef(cpy_r_components);
    goto CPyL42;
CPyL45: ;
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir);
    goto CPyL23;
CPyL46: ;
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir);
    goto CPyL20;
CPyL47: ;
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    goto CPyL21;
CPyL48: ;
    CPy_DECREF(cpy_r_dir);
    CPy_DECREF(cpy_r_contents);
    goto CPyL36;
CPyL49: ;
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir);
    CPy_DecRef(cpy_r_contents);
    goto CPyL42;
CPyL50: ;
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir);
    CPy_DecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_name);
    goto CPyL42;
}

PyObject *CPyPy_modulefinder___FindModuleCache___get_toplevel_possibilities(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lib_path", "id", 0};
    static CPyArg_Parser parser = {"OO:get_toplevel_possibilities", kwlist, 0};
    PyObject *obj_lib_path;
    PyObject *obj_id;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_lib_path, &obj_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___FindModuleCache))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.FindModuleCache", obj_self); 
        goto fail;
    }
    PyObject * arg_lib_path;
    if (likely(PyTuple_Check(obj_lib_path)))
        arg_lib_path = obj_lib_path;
    else {
        CPy_TypeError("tuple", obj_lib_path); 
        goto fail;
    }
    PyObject *arg_id;
    if (likely(PyUnicode_Check(obj_id)))
        arg_id = obj_id;
    else {
        CPy_TypeError("str", obj_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_modulefinder___FindModuleCache___get_toplevel_possibilities(arg_self, arg_lib_path, arg_id);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "get_toplevel_possibilities", 264, CPyStatic_modulefinder___globals);
    return NULL;
}

PyObject *CPyDef_modulefinder___FindModuleCache___find_module(PyObject *cpy_r_self, PyObject *cpy_r_id, char cpy_r_fast_path) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T3OOO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_top_level;
    char cpy_r_use_typeshed;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    if (cpy_r_fast_path != 2) goto CPyL2;
    cpy_r_fast_path = 0;
CPyL2: ;
    cpy_r_r0 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_results;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_id);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 301, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
    cpy_r_r3 = cpy_r_r1;
    cpy_r_r4 = cpy_r_r3 ^ 1;
    if (!cpy_r_r4) goto CPyL32;
    cpy_r_r5 = CPyStatics[224]; /* '.' */
    cpy_r_r6 = CPyStatics[3835]; /* 'partition' */
    PyObject *cpy_r_r7[2] = {cpy_r_id, cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 302, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
    PyObject *__tmp3504;
    if (unlikely(!(PyTuple_Check(cpy_r_r9) && PyTuple_GET_SIZE(cpy_r_r9) == 3))) {
        __tmp3504 = NULL;
        goto __LL3505;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r9, 0))))
        __tmp3504 = PyTuple_GET_ITEM(cpy_r_r9, 0);
    else {
        __tmp3504 = NULL;
    }
    if (__tmp3504 == NULL) goto __LL3505;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r9, 1))))
        __tmp3504 = PyTuple_GET_ITEM(cpy_r_r9, 1);
    else {
        __tmp3504 = NULL;
    }
    if (__tmp3504 == NULL) goto __LL3505;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r9, 2))))
        __tmp3504 = PyTuple_GET_ITEM(cpy_r_r9, 2);
    else {
        __tmp3504 = NULL;
    }
    if (__tmp3504 == NULL) goto __LL3505;
    __tmp3504 = cpy_r_r9;
__LL3505: ;
    if (unlikely(__tmp3504 == NULL)) {
        CPy_TypeError("tuple[str, str, str]", cpy_r_r9); cpy_r_r10 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp3506 = PyTuple_GET_ITEM(cpy_r_r9, 0);
        CPy_INCREF(__tmp3506);
        PyObject *__tmp3507;
        if (likely(PyUnicode_Check(__tmp3506)))
            __tmp3507 = __tmp3506;
        else {
            CPy_TypeError("str", __tmp3506); 
            __tmp3507 = NULL;
        }
        cpy_r_r10.f0 = __tmp3507;
        PyObject *__tmp3508 = PyTuple_GET_ITEM(cpy_r_r9, 1);
        CPy_INCREF(__tmp3508);
        PyObject *__tmp3509;
        if (likely(PyUnicode_Check(__tmp3508)))
            __tmp3509 = __tmp3508;
        else {
            CPy_TypeError("str", __tmp3508); 
            __tmp3509 = NULL;
        }
        cpy_r_r10.f1 = __tmp3509;
        PyObject *__tmp3510 = PyTuple_GET_ITEM(cpy_r_r9, 2);
        CPy_INCREF(__tmp3510);
        PyObject *__tmp3511;
        if (likely(PyUnicode_Check(__tmp3510)))
            __tmp3511 = __tmp3510;
        else {
            CPy_TypeError("str", __tmp3510); 
            __tmp3511 = NULL;
        }
        cpy_r_r10.f2 = __tmp3511;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10.f0 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 302, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
    cpy_r_r11 = cpy_r_r10.f0;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r10.f0);
    CPy_DECREF(cpy_r_r10.f1);
    CPy_DECREF(cpy_r_r10.f2);
    cpy_r_top_level = cpy_r_r11;
    cpy_r_use_typeshed = 1;
    cpy_r_r12 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_stdlib_py_versions;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = PyDict_Contains(cpy_r_r12, cpy_r_id);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 304, CPyStatic_modulefinder___globals);
        goto CPyL36;
    }
    cpy_r_r15 = cpy_r_r13;
    if (cpy_r_r15) {
        goto CPyL37;
    } else
        goto CPyL10;
CPyL8: ;
    cpy_r_r16 = CPyDef_modulefinder___FindModuleCache____typeshed_has_version(cpy_r_self, cpy_r_id);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 305, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
    cpy_r_use_typeshed = cpy_r_r16;
    goto CPyL14;
CPyL10: ;
    cpy_r_r17 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_stdlib_py_versions;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = PyDict_Contains(cpy_r_r17, cpy_r_top_level);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 306, CPyStatic_modulefinder___globals);
        goto CPyL36;
    }
    cpy_r_r20 = cpy_r_r18;
    if (!cpy_r_r20) goto CPyL38;
    cpy_r_r21 = CPyDef_modulefinder___FindModuleCache____typeshed_has_version(cpy_r_self, cpy_r_top_level);
    CPy_DECREF(cpy_r_top_level);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 307, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
    cpy_r_use_typeshed = cpy_r_r21;
CPyL14: ;
    cpy_r_r22 = CPyDef_modulefinder___FindModuleCache____find_module(cpy_r_self, cpy_r_id, cpy_r_use_typeshed);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 308, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
    cpy_r_r23 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_results;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyDict_SetItem(cpy_r_r23, cpy_r_id, cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 308, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
    if (cpy_r_fast_path) goto CPyL32;
    cpy_r_r26 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_r26 != cpy_r_r27;
    if (!cpy_r_r28) goto CPyL20;
    cpy_r_r29 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    if (likely(cpy_r_r29 != Py_None))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module", 310, CPyStatic_modulefinder___globals, "mypy.options.Options", cpy_r_r29);
        goto CPyL35;
    }
    cpy_r_r31 = ((mypy___options___OptionsObject *)cpy_r_r30)->_fast_module_lookup;
    if (cpy_r_r31) goto CPyL32;
CPyL20: ;
    cpy_r_r32 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_results;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r32, cpy_r_id);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 311, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
    if (PyUnicode_Check(cpy_r_r33))
        cpy_r_r34 = cpy_r_r33;
    else {
        cpy_r_r34 = NULL;
    }
    if (cpy_r_r34 != NULL) goto __LL3512;
    if (Py_TYPE(cpy_r_r33) == CPyType_modulefinder___ModuleNotFoundReason)
        cpy_r_r34 = cpy_r_r33;
    else {
        cpy_r_r34 = NULL;
    }
    if (cpy_r_r34 != NULL) goto __LL3512;
    CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module", 311, CPyStatic_modulefinder___globals, "union[str, mypy.modulefinder.ModuleNotFoundReason]", cpy_r_r33);
    goto CPyL35;
__LL3512: ;
    cpy_r_r35 = CPyStatic_modulefinder___ModuleNotFoundReason___NOT_FOUND;
    if (unlikely(cpy_r_r35 == NULL)) {
        goto CPyL39;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"NOT_FOUND\" was not set");
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 311, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r37 = cpy_r_r34 == cpy_r_r35;
    CPy_DECREF(cpy_r_r34);
    if (!cpy_r_r37) goto CPyL32;
    cpy_r_r38 = CPyDef_modulefinder___FindModuleCache____can_find_module_in_parent_dir(cpy_r_self, cpy_r_id);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 312, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
    if (!cpy_r_r38) goto CPyL32;
    cpy_r_r39 = CPyStatic_modulefinder___ModuleNotFoundReason___WRONG_WORKING_DIRECTORY;
    if (likely(cpy_r_r39 != NULL)) goto CPyL31;
    PyErr_SetString(PyExc_NameError, "value for final name \"WRONG_WORKING_DIRECTORY\" was not set");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 314, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r41 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_results;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = CPyDict_SetItem(cpy_r_r41, cpy_r_id, cpy_r_r39);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 314, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
CPyL32: ;
    cpy_r_r44 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_results;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = CPyDict_GetItem(cpy_r_r44, cpy_r_id);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_module", 315, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
    if (PyUnicode_Check(cpy_r_r45))
        cpy_r_r46 = cpy_r_r45;
    else {
        cpy_r_r46 = NULL;
    }
    if (cpy_r_r46 != NULL) goto __LL3513;
    if (Py_TYPE(cpy_r_r45) == CPyType_modulefinder___ModuleNotFoundReason)
        cpy_r_r46 = cpy_r_r45;
    else {
        cpy_r_r46 = NULL;
    }
    if (cpy_r_r46 != NULL) goto __LL3513;
    CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_module", 315, CPyStatic_modulefinder___globals, "union[str, mypy.modulefinder.ModuleNotFoundReason]", cpy_r_r45);
    goto CPyL35;
__LL3513: ;
    return cpy_r_r46;
CPyL35: ;
    cpy_r_r47 = NULL;
    return cpy_r_r47;
CPyL36: ;
    CPy_DecRef(cpy_r_top_level);
    goto CPyL35;
CPyL37: ;
    CPy_DECREF(cpy_r_top_level);
    goto CPyL8;
CPyL38: ;
    CPy_DECREF(cpy_r_top_level);
    goto CPyL14;
CPyL39: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL23;
}

PyObject *CPyPy_modulefinder___FindModuleCache___find_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"id", "fast_path", 0};
    static CPyArg_Parser parser = {"O|$O:find_module", kwlist, 0};
    PyObject *obj_id;
    PyObject *obj_fast_path = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_id, &obj_fast_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___FindModuleCache))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.FindModuleCache", obj_self); 
        goto fail;
    }
    PyObject *arg_id;
    if (likely(PyUnicode_Check(obj_id)))
        arg_id = obj_id;
    else {
        CPy_TypeError("str", obj_id); 
        goto fail;
    }
    char arg_fast_path;
    if (obj_fast_path == NULL) {
        arg_fast_path = 2;
    } else if (unlikely(!PyBool_Check(obj_fast_path))) {
        CPy_TypeError("bool", obj_fast_path); goto fail;
    } else
        arg_fast_path = obj_fast_path == Py_True;
    PyObject *retval = CPyDef_modulefinder___FindModuleCache___find_module(arg_self, arg_id, arg_fast_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "find_module", 295, CPyStatic_modulefinder___globals);
    return NULL;
}

char CPyDef_modulefinder___FindModuleCache____typeshed_has_version(PyObject *cpy_r_self, PyObject *cpy_r_module) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T2II cpy_r_r5;
    tuple_T2II cpy_r_version;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2T2IIO cpy_r_r8;
    tuple_T2II cpy_r_r9;
    tuple_T2II cpy_r_min_version;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_max_version;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    tuple_T2II cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    cpy_r_r0 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r2) goto CPyL2;
    return 1;
CPyL2: ;
    cpy_r_r3 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_typeshed_has_version", 320, CPyStatic_modulefinder___globals, "mypy.options.Options", cpy_r_r3);
        goto CPyL18;
    }
    cpy_r_r5 = CPyDef_modulefinder___typeshed_py_version(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_typeshed_has_version", 320, CPyStatic_modulefinder___globals);
        goto CPyL18;
    }
    cpy_r_version = cpy_r_r5;
    cpy_r_r6 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_stdlib_py_versions;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r6, cpy_r_module);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_typeshed_has_version", 321, CPyStatic_modulefinder___globals);
        goto CPyL19;
    }
    PyObject *__tmp3514;
    if (unlikely(!(PyTuple_Check(cpy_r_r7) && PyTuple_GET_SIZE(cpy_r_r7) == 2))) {
        __tmp3514 = NULL;
        goto __LL3515;
    }
    if (unlikely(!(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_r7, 0)) && PyTuple_GET_SIZE(PyTuple_GET_ITEM(cpy_r_r7, 0)) == 2))) {
        __tmp3514 = NULL;
        goto __LL3516;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r7, 0), 0))))
        __tmp3514 = PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r7, 0), 0);
    else {
        __tmp3514 = NULL;
    }
    if (__tmp3514 == NULL) goto __LL3516;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r7, 0), 1))))
        __tmp3514 = PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r7, 0), 1);
    else {
        __tmp3514 = NULL;
    }
    if (__tmp3514 == NULL) goto __LL3516;
    __tmp3514 = PyTuple_GET_ITEM(cpy_r_r7, 0);
__LL3516: ;
    if (__tmp3514 == NULL) goto __LL3515;
    if (unlikely(!(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_r7, 1)) && PyTuple_GET_SIZE(PyTuple_GET_ITEM(cpy_r_r7, 1)) == 2))) {
        __tmp3514 = NULL;
        goto __LL3518;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r7, 1), 0))))
        __tmp3514 = PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r7, 1), 0);
    else {
        __tmp3514 = NULL;
    }
    if (__tmp3514 == NULL) goto __LL3518;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r7, 1), 1))))
        __tmp3514 = PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r7, 1), 1);
    else {
        __tmp3514 = NULL;
    }
    if (__tmp3514 == NULL) goto __LL3518;
    __tmp3514 = PyTuple_GET_ITEM(cpy_r_r7, 1);
__LL3518: ;
    if (__tmp3514 != NULL) goto __LL3517;
    if (PyTuple_GET_ITEM(cpy_r_r7, 1) == Py_None)
        __tmp3514 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp3514 = NULL;
    }
    if (__tmp3514 != NULL) goto __LL3517;
    __tmp3514 = NULL;
__LL3517: ;
    if (__tmp3514 == NULL) goto __LL3515;
    __tmp3514 = cpy_r_r7;
__LL3515: ;
    if (unlikely(__tmp3514 == NULL)) {
        CPy_TypeError("tuple[tuple[int, int], union[tuple[int, int], None]]", cpy_r_r7); cpy_r_r8 = (tuple_T2T2IIO) { { CPY_INT_TAG, CPY_INT_TAG }, NULL };
    } else {
        PyObject *__tmp3519 = PyTuple_GET_ITEM(cpy_r_r7, 0);
        tuple_T2II __tmp3520;
        PyObject *__tmp3521;
        if (unlikely(!(PyTuple_Check(__tmp3519) && PyTuple_GET_SIZE(__tmp3519) == 2))) {
            __tmp3521 = NULL;
            goto __LL3522;
        }
        if (likely(PyLong_Check(PyTuple_GET_ITEM(__tmp3519, 0))))
            __tmp3521 = PyTuple_GET_ITEM(__tmp3519, 0);
        else {
            __tmp3521 = NULL;
        }
        if (__tmp3521 == NULL) goto __LL3522;
        if (likely(PyLong_Check(PyTuple_GET_ITEM(__tmp3519, 1))))
            __tmp3521 = PyTuple_GET_ITEM(__tmp3519, 1);
        else {
            __tmp3521 = NULL;
        }
        if (__tmp3521 == NULL) goto __LL3522;
        __tmp3521 = __tmp3519;
__LL3522: ;
        if (unlikely(__tmp3521 == NULL)) {
            CPy_TypeError("tuple[int, int]", __tmp3519); __tmp3520 = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
        } else {
            PyObject *__tmp3523 = PyTuple_GET_ITEM(__tmp3519, 0);
            CPyTagged __tmp3524;
            if (likely(PyLong_Check(__tmp3523)))
                __tmp3524 = CPyTagged_FromObject(__tmp3523);
            else {
                CPy_TypeError("int", __tmp3523); __tmp3524 = CPY_INT_TAG;
            }
            __tmp3520.f0 = __tmp3524;
            PyObject *__tmp3525 = PyTuple_GET_ITEM(__tmp3519, 1);
            CPyTagged __tmp3526;
            if (likely(PyLong_Check(__tmp3525)))
                __tmp3526 = CPyTagged_FromObject(__tmp3525);
            else {
                CPy_TypeError("int", __tmp3525); __tmp3526 = CPY_INT_TAG;
            }
            __tmp3520.f1 = __tmp3526;
        }
        cpy_r_r8.f0 = __tmp3520;
        PyObject *__tmp3527 = PyTuple_GET_ITEM(cpy_r_r7, 1);
        CPy_INCREF(__tmp3527);
        PyObject *__tmp3528;
        if (unlikely(!(PyTuple_Check(__tmp3527) && PyTuple_GET_SIZE(__tmp3527) == 2))) {
            __tmp3528 = NULL;
            goto __LL3530;
        }
        if (likely(PyLong_Check(PyTuple_GET_ITEM(__tmp3527, 0))))
            __tmp3528 = PyTuple_GET_ITEM(__tmp3527, 0);
        else {
            __tmp3528 = NULL;
        }
        if (__tmp3528 == NULL) goto __LL3530;
        if (likely(PyLong_Check(PyTuple_GET_ITEM(__tmp3527, 1))))
            __tmp3528 = PyTuple_GET_ITEM(__tmp3527, 1);
        else {
            __tmp3528 = NULL;
        }
        if (__tmp3528 == NULL) goto __LL3530;
        __tmp3528 = __tmp3527;
__LL3530: ;
        if (__tmp3528 != NULL) goto __LL3529;
        if (__tmp3527 == Py_None)
            __tmp3528 = __tmp3527;
        else {
            __tmp3528 = NULL;
        }
        if (__tmp3528 != NULL) goto __LL3529;
        CPy_TypeError("tuple[int, int] or None", __tmp3527); 
        __tmp3528 = NULL;
__LL3529: ;
        cpy_r_r8.f1 = __tmp3528;
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8.f0.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_typeshed_has_version", 321, CPyStatic_modulefinder___globals);
        goto CPyL19;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPyTagged_INCREF(cpy_r_r9.f0);
    CPyTagged_INCREF(cpy_r_r9.f1);
    cpy_r_min_version = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f1;
    CPy_INCREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r8.f0.f0);
    CPyTagged_DECREF(cpy_r_r8.f0.f1);
    CPy_DECREF(cpy_r_r8.f1);
    cpy_r_max_version = cpy_r_r10;
    CPyTagged_INCREF(cpy_r_version.f0);
    CPyTagged_INCREF(cpy_r_version.f1);
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3531 = CPyTagged_StealAsObject(cpy_r_version.f0);
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp3531);
    PyObject *__tmp3532 = CPyTagged_StealAsObject(cpy_r_version.f1);
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp3532);
    cpy_r_r12 = PyTuple_New(2);
    if (unlikely(cpy_r_r12 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3533 = CPyTagged_StealAsObject(cpy_r_min_version.f0);
    PyTuple_SET_ITEM(cpy_r_r12, 0, __tmp3533);
    PyObject *__tmp3534 = CPyTagged_StealAsObject(cpy_r_min_version.f1);
    PyTuple_SET_ITEM(cpy_r_r12, 1, __tmp3534);
    cpy_r_r13 = PyObject_RichCompare(cpy_r_r11, cpy_r_r12, 5);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_typeshed_has_version", 322, CPyStatic_modulefinder___globals);
        goto CPyL20;
    }
    if (unlikely(!PyBool_Check(cpy_r_r13))) {
        CPy_TypeError("bool", cpy_r_r13); cpy_r_r14 = 2;
    } else
        cpy_r_r14 = cpy_r_r13 == Py_True;
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_typeshed_has_version", 322, CPyStatic_modulefinder___globals);
        goto CPyL20;
    }
    if (cpy_r_r14) {
        goto CPyL10;
    } else
        goto CPyL21;
CPyL9: ;
    cpy_r_r15 = cpy_r_r14;
    goto CPyL17;
CPyL10: ;
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_max_version == cpy_r_r16;
    if (cpy_r_r17) {
        goto CPyL22;
    } else
        goto CPyL12;
CPyL11: ;
    cpy_r_r18 = cpy_r_r17;
    goto CPyL16;
CPyL12: ;
    PyObject *__tmp3535;
    if (unlikely(!(PyTuple_Check(cpy_r_max_version) && PyTuple_GET_SIZE(cpy_r_max_version) == 2))) {
        __tmp3535 = NULL;
        goto __LL3536;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_max_version, 0))))
        __tmp3535 = PyTuple_GET_ITEM(cpy_r_max_version, 0);
    else {
        __tmp3535 = NULL;
    }
    if (__tmp3535 == NULL) goto __LL3536;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_max_version, 1))))
        __tmp3535 = PyTuple_GET_ITEM(cpy_r_max_version, 1);
    else {
        __tmp3535 = NULL;
    }
    if (__tmp3535 == NULL) goto __LL3536;
    __tmp3535 = cpy_r_max_version;
__LL3536: ;
    if (unlikely(__tmp3535 == NULL)) {
        CPy_TypeError("tuple[int, int]", cpy_r_max_version); cpy_r_r19 = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    } else {
        PyObject *__tmp3537 = PyTuple_GET_ITEM(cpy_r_max_version, 0);
        CPyTagged __tmp3538;
        if (likely(PyLong_Check(__tmp3537)))
            __tmp3538 = CPyTagged_FromObject(__tmp3537);
        else {
            CPy_TypeError("int", __tmp3537); __tmp3538 = CPY_INT_TAG;
        }
        cpy_r_r19.f0 = __tmp3538;
        PyObject *__tmp3539 = PyTuple_GET_ITEM(cpy_r_max_version, 1);
        CPyTagged __tmp3540;
        if (likely(PyLong_Check(__tmp3539)))
            __tmp3540 = CPyTagged_FromObject(__tmp3539);
        else {
            CPy_TypeError("int", __tmp3539); __tmp3540 = CPY_INT_TAG;
        }
        cpy_r_r19.f1 = __tmp3540;
    }
    CPy_DECREF(cpy_r_max_version);
    if (unlikely(cpy_r_r19.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_typeshed_has_version", 322, CPyStatic_modulefinder___globals);
        goto CPyL19;
    }
    cpy_r_r20 = PyTuple_New(2);
    if (unlikely(cpy_r_r20 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3541 = CPyTagged_StealAsObject(cpy_r_version.f0);
    PyTuple_SET_ITEM(cpy_r_r20, 0, __tmp3541);
    PyObject *__tmp3542 = CPyTagged_StealAsObject(cpy_r_version.f1);
    PyTuple_SET_ITEM(cpy_r_r20, 1, __tmp3542);
    cpy_r_r21 = PyTuple_New(2);
    if (unlikely(cpy_r_r21 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3543 = CPyTagged_StealAsObject(cpy_r_r19.f0);
    PyTuple_SET_ITEM(cpy_r_r21, 0, __tmp3543);
    PyObject *__tmp3544 = CPyTagged_StealAsObject(cpy_r_r19.f1);
    PyTuple_SET_ITEM(cpy_r_r21, 1, __tmp3544);
    cpy_r_r22 = PyObject_RichCompare(cpy_r_r20, cpy_r_r21, 1);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_typeshed_has_version", 322, CPyStatic_modulefinder___globals);
        goto CPyL18;
    }
    if (unlikely(!PyBool_Check(cpy_r_r22))) {
        CPy_TypeError("bool", cpy_r_r22); cpy_r_r23 = 2;
    } else
        cpy_r_r23 = cpy_r_r22 == Py_True;
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_typeshed_has_version", 322, CPyStatic_modulefinder___globals);
        goto CPyL18;
    }
    cpy_r_r18 = cpy_r_r23;
CPyL16: ;
    cpy_r_r15 = cpy_r_r18;
CPyL17: ;
    return cpy_r_r15;
CPyL18: ;
    cpy_r_r24 = 2;
    return cpy_r_r24;
CPyL19: ;
    CPyTagged_DecRef(cpy_r_version.f0);
    CPyTagged_DecRef(cpy_r_version.f1);
    goto CPyL18;
CPyL20: ;
    CPyTagged_DecRef(cpy_r_version.f0);
    CPyTagged_DecRef(cpy_r_version.f1);
    CPy_DecRef(cpy_r_max_version);
    goto CPyL18;
CPyL21: ;
    CPyTagged_DECREF(cpy_r_version.f0);
    CPyTagged_DECREF(cpy_r_version.f1);
    CPy_DECREF(cpy_r_max_version);
    goto CPyL9;
CPyL22: ;
    CPyTagged_DECREF(cpy_r_version.f0);
    CPyTagged_DECREF(cpy_r_version.f1);
    CPy_DECREF(cpy_r_max_version);
    goto CPyL11;
}

PyObject *CPyPy_modulefinder___FindModuleCache____typeshed_has_version(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", 0};
    static CPyArg_Parser parser = {"O:_typeshed_has_version", kwlist, 0};
    PyObject *obj_module;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_module)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___FindModuleCache))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.FindModuleCache", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    char retval = CPyDef_modulefinder___FindModuleCache____typeshed_has_version(arg_self, arg_module);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "_typeshed_has_version", 317, CPyStatic_modulefinder___globals);
    return NULL;
}

PyObject *CPyDef_modulefinder___FindModuleCache____find_module_non_stub_helper(PyObject *cpy_r_self, PyObject *cpy_r_components, PyObject *cpy_r_pkg_dir) {
    char cpy_r_plausible_match;
    PyObject *cpy_r_dir_path;
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_index;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_component;
    PyObject *cpy_r_r8;
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
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
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
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int64_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    tuple_T2OC cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    CPyPtr cpy_r_r64;
    int64_t cpy_r_r65;
    CPyTagged cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    cpy_r_plausible_match = 0;
    CPy_INCREF(cpy_r_pkg_dir);
    cpy_r_dir_path = cpy_r_pkg_dir;
    cpy_r_r0 = 0;
    cpy_r_index = 0;
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_components)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL72;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_components, cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 329, CPyStatic_modulefinder___globals, "str", cpy_r_r6);
        goto CPyL73;
    }
    cpy_r_component = cpy_r_r7;
    cpy_r_r8 = CPyModule_os;
    cpy_r_r9 = CPyStatics[142]; /* 'path' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 330, CPyStatic_modulefinder___globals);
        goto CPyL74;
    }
    cpy_r_r11 = CPyStatics[175]; /* 'join' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 330, CPyStatic_modulefinder___globals);
        goto CPyL74;
    }
    PyObject *cpy_r_r13[2] = {cpy_r_dir_path, cpy_r_component};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 2, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 330, CPyStatic_modulefinder___globals);
        goto CPyL74;
    }
    CPy_DECREF(cpy_r_dir_path);
    CPy_DECREF(cpy_r_component);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 330, CPyStatic_modulefinder___globals, "str", cpy_r_r15);
        goto CPyL75;
    }
    cpy_r_dir_path = cpy_r_r16;
    cpy_r_r17 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyStatics[3836]; /* 'py.typed' */
    cpy_r_r19 = CPyModule_os;
    cpy_r_r20 = CPyStatics[142]; /* 'path' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 331, CPyStatic_modulefinder___globals);
        goto CPyL76;
    }
    cpy_r_r22 = CPyStatics[175]; /* 'join' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 331, CPyStatic_modulefinder___globals);
        goto CPyL76;
    }
    PyObject *cpy_r_r24[2] = {cpy_r_dir_path, cpy_r_r18};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 2, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 331, CPyStatic_modulefinder___globals);
        goto CPyL76;
    }
    if (likely(PyUnicode_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 331, CPyStatic_modulefinder___globals, "str", cpy_r_r26);
        goto CPyL76;
    }
    cpy_r_r28 = CPY_GET_METHOD(cpy_r_r17, CPyType_fscache___FileSystemCache, 7, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r17, cpy_r_r27); /* isfile */
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 331, CPyStatic_modulefinder___globals);
        goto CPyL73;
    }
    if (cpy_r_r28) {
        goto CPyL77;
    } else
        goto CPyL78;
CPyL13: ;
    cpy_r_r29 = CPyList_GetSlice(cpy_r_components, 0, -2);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 332, CPyStatic_modulefinder___globals);
        goto CPyL75;
    }
    if (likely(PyList_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 332, CPyStatic_modulefinder___globals, "list", cpy_r_r29);
        goto CPyL75;
    }
    cpy_r_r31 = CPyModule_os;
    cpy_r_r32 = CPyStatics[142]; /* 'path' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 332, CPyStatic_modulefinder___globals);
        goto CPyL79;
    }
    cpy_r_r34 = CPyStatics[175]; /* 'join' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 332, CPyStatic_modulefinder___globals);
        goto CPyL79;
    }
    cpy_r_r36 = PyList_New(1);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 332, CPyStatic_modulefinder___globals);
        goto CPyL80;
    }
    cpy_r_r37 = (CPyPtr)&((PyListObject *)cpy_r_r36)->ob_item;
    cpy_r_r38 = *(CPyPtr *)cpy_r_r37;
    CPy_INCREF(cpy_r_pkg_dir);
    *(PyObject * *)cpy_r_r38 = cpy_r_pkg_dir;
    cpy_r_r39 = CPyList_Extend(cpy_r_r36, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 332, CPyStatic_modulefinder___globals);
        goto CPyL81;
    } else
        goto CPyL82;
CPyL19: ;
    cpy_r_r40 = PyList_AsTuple(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 332, CPyStatic_modulefinder___globals);
        goto CPyL83;
    }
    cpy_r_r41 = PyDict_New();
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 332, CPyStatic_modulefinder___globals);
        goto CPyL84;
    }
    cpy_r_r42 = PyObject_Call(cpy_r_r35, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 332, CPyStatic_modulefinder___globals);
        goto CPyL75;
    }
    if (likely(PyUnicode_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 332, CPyStatic_modulefinder___globals, "str", cpy_r_r42);
        goto CPyL75;
    }
    cpy_r_r44 = cpy_r_index & 1;
    cpy_r_r45 = cpy_r_r44 == 0;
    if (!cpy_r_r45) goto CPyL25;
    cpy_r_r46 = cpy_r_index == 0;
    CPyTagged_DECREF(cpy_r_index);
    cpy_r_r47 = cpy_r_r46;
    goto CPyL26;
CPyL25: ;
    cpy_r_r48 = CPyTagged_IsEq_(cpy_r_index, 0);
    CPyTagged_DECREF(cpy_r_index);
    cpy_r_r47 = cpy_r_r48;
CPyL26: ;
    cpy_r_r49.f0 = cpy_r_r43;
    cpy_r_r49.f1 = cpy_r_r47;
    CPy_INCREF(cpy_r_r49.f0);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r50 = PyTuple_New(2);
    if (unlikely(cpy_r_r50 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3545 = cpy_r_r49.f0;
    PyTuple_SET_ITEM(cpy_r_r50, 0, __tmp3545);
    PyObject *__tmp3546 = cpy_r_r49.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp3546);
    PyTuple_SET_ITEM(cpy_r_r50, 1, __tmp3546);
    return cpy_r_r50;
CPyL27: ;
    if (cpy_r_plausible_match) goto CPyL34;
    cpy_r_r51 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = CPY_GET_METHOD(cpy_r_r51, CPyType_fscache___FileSystemCache, 10, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r51, cpy_r_dir_path); /* isdir */
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 334, CPyStatic_modulefinder___globals);
        goto CPyL85;
    }
    if (cpy_r_r52) goto CPyL33;
    cpy_r_r53 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = CPyStatics[174]; /* '.py' */
    cpy_r_r55 = PyUnicode_Concat(cpy_r_dir_path, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 334, CPyStatic_modulefinder___globals);
        goto CPyL86;
    }
    cpy_r_r56 = CPY_GET_METHOD(cpy_r_r53, CPyType_fscache___FileSystemCache, 7, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r53, cpy_r_r55); /* isfile */
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 334, CPyStatic_modulefinder___globals);
        goto CPyL85;
    }
    if (!cpy_r_r56) goto CPyL34;
CPyL33: ;
    cpy_r_plausible_match = 1;
CPyL34: ;
    cpy_r_r57 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = CPY_GET_METHOD(cpy_r_r57, CPyType_fscache___FileSystemCache, 10, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r57, cpy_r_dir_path); /* isdir */
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 338, CPyStatic_modulefinder___globals);
        goto CPyL85;
    }
    if (!cpy_r_r58) goto CPyL87;
    cpy_r_r59 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r59;
    cpy_r_index = cpy_r_r59;
    cpy_r_r60 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r60;
    goto CPyL1;
CPyL37: ;
    cpy_r_r61 = CPyList_GetItemShort(cpy_r_components, 0);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 340, CPyStatic_modulefinder___globals);
        goto CPyL71;
    }
    if (likely(PyUnicode_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 340, CPyStatic_modulefinder___globals, "str", cpy_r_r61);
        goto CPyL71;
    }
    cpy_r_r63 = CPyDef_stubinfo___approved_stub_package_exists(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 340, CPyStatic_modulefinder___globals);
        goto CPyL71;
    }
    if (!cpy_r_r63) goto CPyL53;
    cpy_r_r64 = (CPyPtr)&((PyVarObject *)cpy_r_components)->ob_size;
    cpy_r_r65 = *(int64_t *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 << 1;
    cpy_r_r67 = cpy_r_r66 == 2;
    if (cpy_r_r67) goto CPyL49;
    cpy_r_r68 = CPyList_GetItemShort(cpy_r_components, 0);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 342, CPyStatic_modulefinder___globals);
        goto CPyL71;
    }
    if (likely(PyUnicode_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 342, CPyStatic_modulefinder___globals, "str", cpy_r_r68);
        goto CPyL71;
    }
    cpy_r_r70 = 2;
    cpy_r_r71 = CPyDef_modulefinder___FindModuleCache___find_module(cpy_r_self, cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 342, CPyStatic_modulefinder___globals);
        goto CPyL71;
    }
    cpy_r_r72 = CPyStatic_modulefinder___ModuleNotFoundReason___APPROVED_STUBS_NOT_INSTALLED;
    if (unlikely(cpy_r_r72 == NULL)) {
        goto CPyL88;
    } else
        goto CPyL48;
CPyL46: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"APPROVED_STUBS_NOT_INSTALLED\" was not set");
    cpy_r_r73 = 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 343, CPyStatic_modulefinder___globals);
        goto CPyL71;
    }
    CPy_Unreachable();
CPyL48: ;
    cpy_r_r74 = cpy_r_r71 == cpy_r_r72;
    CPy_DECREF(cpy_r_r71);
    if (!cpy_r_r74) goto CPyL53;
CPyL49: ;
    cpy_r_r75 = CPyStatic_modulefinder___ModuleNotFoundReason___APPROVED_STUBS_NOT_INSTALLED;
    if (likely(cpy_r_r75 != NULL)) goto CPyL52;
    PyErr_SetString(PyExc_NameError, "value for final name \"APPROVED_STUBS_NOT_INSTALLED\" was not set");
    cpy_r_r76 = 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 345, CPyStatic_modulefinder___globals);
        goto CPyL71;
    }
    CPy_Unreachable();
CPyL52: ;
    CPy_INCREF(cpy_r_r75);
    return cpy_r_r75;
CPyL53: ;
    cpy_r_r77 = CPyStatics[224]; /* '.' */
    cpy_r_r78 = CPyList_GetSlice(cpy_r_components, 0, 4);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 346, CPyStatic_modulefinder___globals);
        goto CPyL71;
    }
    if (likely(PyList_Check(cpy_r_r78)))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 346, CPyStatic_modulefinder___globals, "list", cpy_r_r78);
        goto CPyL71;
    }
    cpy_r_r80 = PyUnicode_Join(cpy_r_r77, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 346, CPyStatic_modulefinder___globals);
        goto CPyL71;
    }
    cpy_r_r81 = CPyDef_stubinfo___approved_stub_package_exists(cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 346, CPyStatic_modulefinder___globals);
        goto CPyL71;
    }
    if (!cpy_r_r81) goto CPyL62;
    cpy_r_r82 = CPyStatic_modulefinder___ModuleNotFoundReason___APPROVED_STUBS_NOT_INSTALLED;
    if (likely(cpy_r_r82 != NULL)) goto CPyL61;
    PyErr_SetString(PyExc_NameError, "value for final name \"APPROVED_STUBS_NOT_INSTALLED\" was not set");
    cpy_r_r83 = 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 347, CPyStatic_modulefinder___globals);
        goto CPyL71;
    }
    CPy_Unreachable();
CPyL61: ;
    CPy_INCREF(cpy_r_r82);
    return cpy_r_r82;
CPyL62: ;
    if (!cpy_r_plausible_match) goto CPyL67;
    cpy_r_r84 = CPyStatic_modulefinder___ModuleNotFoundReason___FOUND_WITHOUT_TYPE_HINTS;
    if (likely(cpy_r_r84 != NULL)) goto CPyL66;
    PyErr_SetString(PyExc_NameError, "value for final name \"FOUND_WITHOUT_TYPE_HINTS\" was not set");
    cpy_r_r85 = 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 349, CPyStatic_modulefinder___globals);
        goto CPyL71;
    }
    CPy_Unreachable();
CPyL66: ;
    CPy_INCREF(cpy_r_r84);
    return cpy_r_r84;
CPyL67: ;
    cpy_r_r86 = CPyStatic_modulefinder___ModuleNotFoundReason___NOT_FOUND;
    if (likely(cpy_r_r86 != NULL)) goto CPyL70;
    PyErr_SetString(PyExc_NameError, "value for final name \"NOT_FOUND\" was not set");
    cpy_r_r87 = 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 351, CPyStatic_modulefinder___globals);
        goto CPyL71;
    }
    CPy_Unreachable();
CPyL70: ;
    CPy_INCREF(cpy_r_r86);
    return cpy_r_r86;
CPyL71: ;
    cpy_r_r88 = NULL;
    return cpy_r_r88;
CPyL72: ;
    CPy_DECREF(cpy_r_dir_path);
    CPyTagged_DECREF(cpy_r_index);
    goto CPyL37;
CPyL73: ;
    CPy_DecRef(cpy_r_dir_path);
    CPyTagged_DecRef(cpy_r_index);
    goto CPyL71;
CPyL74: ;
    CPy_DecRef(cpy_r_dir_path);
    CPyTagged_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_component);
    goto CPyL71;
CPyL75: ;
    CPyTagged_DecRef(cpy_r_index);
    goto CPyL71;
CPyL76: ;
    CPy_DecRef(cpy_r_dir_path);
    CPyTagged_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_r17);
    goto CPyL71;
CPyL77: ;
    CPy_DECREF(cpy_r_dir_path);
    goto CPyL13;
CPyL78: ;
    CPyTagged_DECREF(cpy_r_index);
    goto CPyL27;
CPyL79: ;
    CPyTagged_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_r30);
    goto CPyL71;
CPyL80: ;
    CPyTagged_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r35);
    goto CPyL71;
CPyL81: ;
    CPyTagged_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r36);
    goto CPyL71;
CPyL82: ;
    CPy_DECREF(cpy_r_r39);
    goto CPyL19;
CPyL83: ;
    CPyTagged_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_r35);
    goto CPyL71;
CPyL84: ;
    CPyTagged_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r40);
    goto CPyL71;
CPyL85: ;
    CPy_DecRef(cpy_r_dir_path);
    goto CPyL71;
CPyL86: ;
    CPy_DecRef(cpy_r_dir_path);
    CPy_DecRef(cpy_r_r53);
    goto CPyL71;
CPyL87: ;
    CPy_DECREF(cpy_r_dir_path);
    goto CPyL37;
CPyL88: ;
    CPy_DecRef(cpy_r_r71);
    goto CPyL46;
}

PyObject *CPyPy_modulefinder___FindModuleCache____find_module_non_stub_helper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"components", "pkg_dir", 0};
    static CPyArg_Parser parser = {"OO:_find_module_non_stub_helper", kwlist, 0};
    PyObject *obj_components;
    PyObject *obj_pkg_dir;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_components, &obj_pkg_dir)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___FindModuleCache))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.FindModuleCache", obj_self); 
        goto fail;
    }
    PyObject *arg_components;
    if (likely(PyList_Check(obj_components)))
        arg_components = obj_components;
    else {
        CPy_TypeError("list", obj_components); 
        goto fail;
    }
    PyObject *arg_pkg_dir;
    if (likely(PyUnicode_Check(obj_pkg_dir)))
        arg_pkg_dir = obj_pkg_dir;
    else {
        CPy_TypeError("str", obj_pkg_dir); 
        goto fail;
    }
    PyObject *retval = CPyDef_modulefinder___FindModuleCache____find_module_non_stub_helper(arg_self, arg_components, arg_pkg_dir);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "_find_module_non_stub_helper", 324, CPyStatic_modulefinder___globals);
    return NULL;
}

char CPyDef_modulefinder___FindModuleCache____update_ns_ancestors(PyObject *cpy_r_self, PyObject *cpy_r_components, tuple_T2OC cpy_r_match) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_path;
    char cpy_r_r1;
    char cpy_r_verify;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_i;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_pkg_id;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = cpy_r_match.f0;
    CPy_INCREF(cpy_r_r0);
    cpy_r_path = cpy_r_r0;
    cpy_r_r1 = cpy_r_match.f1;
    cpy_r_verify = cpy_r_r1;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_components)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = 2;
    cpy_r_i = cpy_r_r5;
CPyL1: ;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r6) goto CPyL18;
    cpy_r_r7 = CPyStatics[224]; /* '.' */
    cpy_r_r8 = CPyTagged_Negate(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r9 = CPyList_GetSlice(cpy_r_components, 0, cpy_r_r8);
    CPyTagged_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_update_ns_ancestors", 356, CPyStatic_modulefinder___globals);
        goto CPyL19;
    }
    if (likely(PyList_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_update_ns_ancestors", 356, CPyStatic_modulefinder___globals, "list", cpy_r_r9);
        goto CPyL19;
    }
    cpy_r_r11 = PyUnicode_Join(cpy_r_r7, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_update_ns_ancestors", 356, CPyStatic_modulefinder___globals);
        goto CPyL19;
    }
    cpy_r_pkg_id = cpy_r_r11;
    cpy_r_r12 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_ns_ancestors;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = PyDict_Contains(cpy_r_r12, cpy_r_pkg_id);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_update_ns_ancestors", 357, CPyStatic_modulefinder___globals);
        goto CPyL20;
    }
    cpy_r_r15 = cpy_r_r13;
    cpy_r_r16 = cpy_r_r15 ^ 1;
    if (!cpy_r_r16) goto CPyL21;
    cpy_r_r17 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = CPY_GET_METHOD(cpy_r_r17, CPyType_fscache___FileSystemCache, 10, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r17, cpy_r_path); /* isdir */
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_update_ns_ancestors", 357, CPyStatic_modulefinder___globals);
        goto CPyL20;
    }
    if (!cpy_r_r18) goto CPyL21;
    cpy_r_r19 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_ns_ancestors;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDict_SetItem(cpy_r_r19, cpy_r_pkg_id, cpy_r_path);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_pkg_id);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_update_ns_ancestors", 358, CPyStatic_modulefinder___globals);
        goto CPyL19;
    }
CPyL10: ;
    cpy_r_r22 = CPyModule_os;
    cpy_r_r23 = CPyStatics[142]; /* 'path' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_update_ns_ancestors", 359, CPyStatic_modulefinder___globals);
        goto CPyL19;
    }
    cpy_r_r25 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_update_ns_ancestors", 359, CPyStatic_modulefinder___globals);
        goto CPyL19;
    }
    PyObject *cpy_r_r27[1] = {cpy_r_path};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 1, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_update_ns_ancestors", 359, CPyStatic_modulefinder___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_path);
    if (likely(PyUnicode_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_update_ns_ancestors", 359, CPyStatic_modulefinder___globals, "str", cpy_r_r29);
        goto CPyL17;
    }
    cpy_r_path = cpy_r_r30;
    cpy_r_r31 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r31;
    cpy_r_i = cpy_r_r31;
    goto CPyL1;
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL18: ;
    CPy_DECREF(cpy_r_path);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_path);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_pkg_id);
    goto CPyL17;
CPyL21: ;
    CPy_DECREF(cpy_r_pkg_id);
    goto CPyL10;
}

PyObject *CPyPy_modulefinder___FindModuleCache____update_ns_ancestors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"components", "match", 0};
    static CPyArg_Parser parser = {"OO:_update_ns_ancestors", kwlist, 0};
    PyObject *obj_components;
    PyObject *obj_match;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_components, &obj_match)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___FindModuleCache))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.FindModuleCache", obj_self); 
        goto fail;
    }
    PyObject *arg_components;
    if (likely(PyList_Check(obj_components)))
        arg_components = obj_components;
    else {
        CPy_TypeError("list", obj_components); 
        goto fail;
    }
    tuple_T2OC arg_match;
    PyObject *__tmp3547;
    if (unlikely(!(PyTuple_Check(obj_match) && PyTuple_GET_SIZE(obj_match) == 2))) {
        __tmp3547 = NULL;
        goto __LL3548;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(obj_match, 0))))
        __tmp3547 = PyTuple_GET_ITEM(obj_match, 0);
    else {
        __tmp3547 = NULL;
    }
    if (__tmp3547 == NULL) goto __LL3548;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(obj_match, 1))))
        __tmp3547 = PyTuple_GET_ITEM(obj_match, 1);
    else {
        __tmp3547 = NULL;
    }
    if (__tmp3547 == NULL) goto __LL3548;
    __tmp3547 = obj_match;
__LL3548: ;
    if (unlikely(__tmp3547 == NULL)) {
        CPy_TypeError("tuple[str, bool]", obj_match); goto fail;
    } else {
        PyObject *__tmp3549 = PyTuple_GET_ITEM(obj_match, 0);
        PyObject *__tmp3550;
        if (likely(PyUnicode_Check(__tmp3549)))
            __tmp3550 = __tmp3549;
        else {
            CPy_TypeError("str", __tmp3549); 
            __tmp3550 = NULL;
        }
        arg_match.f0 = __tmp3550;
        PyObject *__tmp3551 = PyTuple_GET_ITEM(obj_match, 1);
        char __tmp3552;
        if (unlikely(!PyBool_Check(__tmp3551))) {
            CPy_TypeError("bool", __tmp3551); goto fail;
        } else
            __tmp3552 = __tmp3551 == Py_True;
        arg_match.f1 = __tmp3552;
    }
    char retval = CPyDef_modulefinder___FindModuleCache____update_ns_ancestors(arg_self, arg_components, arg_match);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "_update_ns_ancestors", 353, CPyStatic_modulefinder___globals);
    return NULL;
}

char CPyDef_modulefinder___FindModuleCache____can_find_module_in_parent_dir(PyObject *cpy_r_self, PyObject *cpy_r_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_working_dir;
    tuple_T0 cpy_r_r5;
    tuple_T0 cpy_r_r6;
    tuple_T0 cpy_r_r7;
    tuple_T0 cpy_r_r8;
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
    PyObject *cpy_r_parent_search;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_file;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    tuple_T1O cpy_r_r51;
    tuple_T0 cpy_r_r52;
    tuple_T0 cpy_r_r53;
    tuple_T0 cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject **cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[144]; /* 'getcwd' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 365, CPyStatic_modulefinder___globals);
        goto CPyL30;
    }
    cpy_r_r3 = _PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 365, CPyStatic_modulefinder___globals);
        goto CPyL30;
    }
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 365, CPyStatic_modulefinder___globals, "str", cpy_r_r3);
        goto CPyL30;
    }
    cpy_r_working_dir = cpy_r_r4;
    cpy_r_r5.empty_struct_error_flag = 0;
    cpy_r_r6.empty_struct_error_flag = 0;
    cpy_r_r7.empty_struct_error_flag = 0;
    cpy_r_r8.empty_struct_error_flag = 0;
    cpy_r_r9 = CPyStatic_modulefinder___globals;
    cpy_r_r10 = CPyStatics[574]; /* 'SearchPaths' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 367, CPyStatic_modulefinder___globals);
        goto CPyL31;
    }
    cpy_r_r12 = PyTuple_New(0);
    if (unlikely(cpy_r_r12 == NULL))
        CPyError_OutOfMemory();
    cpy_r_r13 = PyTuple_New(0);
    if (unlikely(cpy_r_r13 == NULL))
        CPyError_OutOfMemory();
    cpy_r_r14 = PyTuple_New(0);
    if (unlikely(cpy_r_r14 == NULL))
        CPyError_OutOfMemory();
    cpy_r_r15 = PyTuple_New(0);
    if (unlikely(cpy_r_r15 == NULL))
        CPyError_OutOfMemory();
    PyObject *cpy_r_r16[4] = {cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r17, 4, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 367, CPyStatic_modulefinder___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    if (likely(PyTuple_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 367, CPyStatic_modulefinder___globals, "tuple", cpy_r_r18);
        goto CPyL31;
    }
    cpy_r_r20 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_stdlib_py_versions;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_modulefinder___FindModuleCache(cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 366, CPyStatic_modulefinder___globals);
        goto CPyL31;
    }
    cpy_r_parent_search = cpy_r_r24;
CPyL8: ;
    cpy_r_r25 = 0;
    cpy_r_r26 = CPyModule_os;
    cpy_r_r27 = CPyStatics[2587]; /* 'listdir' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 372, CPyStatic_modulefinder___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_working_dir};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 372, CPyStatic_modulefinder___globals);
        goto CPyL33;
    }
    if (likely(PyList_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 372, CPyStatic_modulefinder___globals, "list", cpy_r_r31);
        goto CPyL33;
    }
    cpy_r_r33 = 0;
CPyL12: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL34;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_r32, cpy_r_r33);
    if (likely(PyUnicode_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 372, CPyStatic_modulefinder___globals, "str", cpy_r_r38);
        goto CPyL35;
    }
    cpy_r_file = cpy_r_r39;
    cpy_r_r40 = CPyDef_modulefinder___is_init_file(cpy_r_file);
    CPy_DECREF(cpy_r_file);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 372, CPyStatic_modulefinder___globals);
        goto CPyL35;
    }
    if (cpy_r_r40) {
        goto CPyL36;
    } else
        goto CPyL17;
CPyL16: ;
    cpy_r_r25 = 1;
    goto CPyL18;
CPyL17: ;
    cpy_r_r41 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r41;
    goto CPyL12;
CPyL18: ;
    if (!cpy_r_r25) goto CPyL37;
    cpy_r_r42 = CPyModule_os;
    cpy_r_r43 = CPyStatics[142]; /* 'path' */
    cpy_r_r44 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 373, CPyStatic_modulefinder___globals);
        goto CPyL33;
    }
    cpy_r_r45 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 373, CPyStatic_modulefinder___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r47[1] = {cpy_r_working_dir};
    cpy_r_r48 = (PyObject **)&cpy_r_r47;
    cpy_r_r49 = _PyObject_Vectorcall(cpy_r_r46, cpy_r_r48, 1, 0);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 373, CPyStatic_modulefinder___globals);
        goto CPyL33;
    }
    CPy_DECREF(cpy_r_working_dir);
    if (likely(PyUnicode_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 373, CPyStatic_modulefinder___globals, "str", cpy_r_r49);
        goto CPyL38;
    }
    cpy_r_working_dir = cpy_r_r50;
    cpy_r_r51.f0 = cpy_r_working_dir;
    CPy_INCREF(cpy_r_r51.f0);
    cpy_r_r52.empty_struct_error_flag = 0;
    cpy_r_r53.empty_struct_error_flag = 0;
    cpy_r_r54.empty_struct_error_flag = 0;
    cpy_r_r55 = CPyStatic_modulefinder___globals;
    cpy_r_r56 = CPyStatics[574]; /* 'SearchPaths' */
    cpy_r_r57 = CPyDict_GetItem(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 374, CPyStatic_modulefinder___globals);
        goto CPyL39;
    }
    cpy_r_r58 = PyTuple_New(1);
    if (unlikely(cpy_r_r58 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3553 = cpy_r_r51.f0;
    PyTuple_SET_ITEM(cpy_r_r58, 0, __tmp3553);
    cpy_r_r59 = PyTuple_New(0);
    if (unlikely(cpy_r_r59 == NULL))
        CPyError_OutOfMemory();
    cpy_r_r60 = PyTuple_New(0);
    if (unlikely(cpy_r_r60 == NULL))
        CPyError_OutOfMemory();
    cpy_r_r61 = PyTuple_New(0);
    if (unlikely(cpy_r_r61 == NULL))
        CPyError_OutOfMemory();
    PyObject *cpy_r_r62[4] = {cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = _PyObject_Vectorcall(cpy_r_r57, cpy_r_r63, 4, 0);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 374, CPyStatic_modulefinder___globals);
        goto CPyL40;
    }
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r61);
    if (likely(PyTuple_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 374, CPyStatic_modulefinder___globals, "tuple", cpy_r_r64);
        goto CPyL33;
    }
    CPy_DECREF(((mypy___modulefinder___FindModuleCacheObject *)cpy_r_parent_search)->_search_paths);
    ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_parent_search)->_search_paths = cpy_r_r65;
    cpy_r_r67 = CPyDef_modulefinder___FindModuleCache____find_module(cpy_r_parent_search, cpy_r_id, 0);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 375, CPyStatic_modulefinder___globals);
        goto CPyL33;
    }
    cpy_r_r68 = (PyObject *)CPyType_modulefinder___ModuleNotFoundReason;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_r67)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    CPy_DECREF(cpy_r_r67);
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    if (cpy_r_r71) {
        goto CPyL8;
    } else
        goto CPyL41;
CPyL28: ;
    return 1;
CPyL29: ;
    return 0;
CPyL30: ;
    cpy_r_r72 = 2;
    return cpy_r_r72;
CPyL31: ;
    CPy_DecRef(cpy_r_working_dir);
    goto CPyL30;
CPyL32: ;
    CPy_DecRef(cpy_r_working_dir);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    goto CPyL30;
CPyL33: ;
    CPy_DecRef(cpy_r_working_dir);
    CPy_DecRef(cpy_r_parent_search);
    goto CPyL30;
CPyL34: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL18;
CPyL35: ;
    CPy_DecRef(cpy_r_working_dir);
    CPy_DecRef(cpy_r_parent_search);
    CPy_DecRef(cpy_r_r32);
    goto CPyL30;
CPyL36: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL16;
CPyL37: ;
    CPy_DECREF(cpy_r_working_dir);
    CPy_DECREF(cpy_r_parent_search);
    goto CPyL29;
CPyL38: ;
    CPy_DecRef(cpy_r_parent_search);
    goto CPyL30;
CPyL39: ;
    CPy_DecRef(cpy_r_working_dir);
    CPy_DecRef(cpy_r_parent_search);
    CPy_DecRef(cpy_r_r51.f0);
    goto CPyL30;
CPyL40: ;
    CPy_DecRef(cpy_r_working_dir);
    CPy_DecRef(cpy_r_parent_search);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    goto CPyL30;
CPyL41: ;
    CPy_DECREF(cpy_r_working_dir);
    CPy_DECREF(cpy_r_parent_search);
    goto CPyL28;
}

PyObject *CPyPy_modulefinder___FindModuleCache____can_find_module_in_parent_dir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"id", 0};
    static CPyArg_Parser parser = {"O:_can_find_module_in_parent_dir", kwlist, 0};
    PyObject *obj_id;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___FindModuleCache))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.FindModuleCache", obj_self); 
        goto fail;
    }
    PyObject *arg_id;
    if (likely(PyUnicode_Check(obj_id)))
        arg_id = obj_id;
    else {
        CPy_TypeError("str", obj_id); 
        goto fail;
    }
    char retval = CPyDef_modulefinder___FindModuleCache____can_find_module_in_parent_dir(arg_self, arg_id);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "_can_find_module_in_parent_dir", 361, CPyStatic_modulefinder___globals);
    return NULL;
}

PyObject *CPyDef_modulefinder___FindModuleCache____find_module(PyObject *cpy_r_self, PyObject *cpy_r_id, char cpy_r_use_typeshed) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_fscache;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_p;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_components;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_dir_chain;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_third_party_inline_dirs;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_third_party_stubs_dirs;
    char cpy_r_found_possible_third_party_missing_type_hints;
    char cpy_r_need_installed_stubs;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_pkg_dir;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_stub_name;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject **cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_stub_dir;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_stub_typed_file;
    PyObject *cpy_r_r60;
    CPyPtr cpy_r_r61;
    CPyPtr cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_stub_components;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    CPyPtr cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_path;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject **cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_runtime_path;
    tuple_T2OC cpy_r_r107;
    PyObject *cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    tuple_T2OC cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    tuple_T2OC cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    tuple_T2OC cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_non_stub_match;
    PyObject *cpy_r_r124;
    CPyPtr cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    tuple_T2OC cpy_r_r136;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    tuple_T2OC cpy_r_r140;
    char cpy_r_r141;
    CPyTagged cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject **cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject **cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_python_mypy_path;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_candidate_base_dirs;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
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
    PyObject *cpy_r_r182;
    PyObject *cpy_r_seplast;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_sepinit;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_near_misses;
    CPyTagged cpy_r_r190;
    CPyPtr cpy_r_r191;
    int64_t cpy_r_r192;
    CPyTagged cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    tuple_T2OC cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_base_dir;
    char cpy_r_r198;
    char cpy_r_verify;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_base_path;
    char cpy_r_has_init;
    PyObject *cpy_r_dir_prefix;
    CPyPtr cpy_r_r200;
    int64_t cpy_r_r201;
    CPyTagged cpy_r_r202;
    CPyTagged cpy_r_r203;
    CPyTagged cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r__;
    int64_t cpy_r_r206;
    char cpy_r_r207;
    int64_t cpy_r_r208;
    char cpy_r_r209;
    char cpy_r_r210;
    char cpy_r_r211;
    char cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject **cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    CPyTagged cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    char cpy_r_r226;
    CPyTagged cpy_r_r227;
    CPyPtr cpy_r_r228;
    int64_t cpy_r_r229;
    CPyTagged cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_extension;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_path_stubs;
    char cpy_r_r240;
    char cpy_r_r241;
    tuple_T2OO cpy_r_r242;
    PyObject *cpy_r_r243;
    int32_t cpy_r_r244;
    char cpy_r_r245;
    char cpy_r_r246;
    char cpy_r_r247;
    tuple_T2OO cpy_r_r248;
    PyObject *cpy_r_r249;
    int32_t cpy_r_r250;
    char cpy_r_r251;
    CPyTagged cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    char cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    char cpy_r_r258;
    char cpy_r_r259;
    char cpy_r_r260;
    tuple_T2OO cpy_r_r261;
    PyObject *cpy_r_r262;
    int32_t cpy_r_r263;
    char cpy_r_r264;
    PyObject *cpy_r_r265;
    char cpy_r_r266;
    CPyTagged cpy_r_r267;
    CPyPtr cpy_r_r268;
    int64_t cpy_r_r269;
    CPyTagged cpy_r_r270;
    char cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    char cpy_r_r275;
    char cpy_r_r276;
    tuple_T2OO cpy_r_r277;
    PyObject *cpy_r_r278;
    int32_t cpy_r_r279;
    char cpy_r_r280;
    CPyTagged cpy_r_r281;
    CPyTagged cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    char cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    char cpy_r_r288;
    CPyPtr cpy_r_r289;
    int64_t cpy_r_r290;
    CPyTagged cpy_r_r291;
    char cpy_r_r292;
    CPyPtr cpy_r_r293;
    int64_t cpy_r_r294;
    PyObject *cpy_r_r295;
    CPyTagged cpy_r_r296;
    CPyPtr cpy_r_r297;
    int64_t cpy_r_r298;
    CPyTagged cpy_r_r299;
    char cpy_r_r300;
    PyObject *cpy_r_r301;
    tuple_T2OO cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_path_2;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_dir_prefix_2;
    CPyTagged cpy_r_r305;
    PyObject *cpy_r_r306;
    char cpy_r_r307;
    CPyTagged cpy_r_r308;
    PyObject *cpy_r_levels;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject **cpy_r_r313;
    PyObject *cpy_r_r314;
    CPyTagged cpy_r_r315;
    PyObject *cpy_r_r316;
    CPyTagged cpy_r_r317;
    CPyTagged cpy_r_index;
    PyObject *cpy_r_r318;
    tuple_T2OO cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_ancestor;
    PyObject *cpy_r_r324;
    char cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    char cpy_r_r328;
    PyObject *cpy_r_r329;
    char cpy_r_r330;
    PyObject *cpy_r_r331;
    char cpy_r_r332;
    PyObject *cpy_r_r333;
    cpy_r_r0 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r0);
    cpy_r_fscache = cpy_r_r0;
    cpy_r_r1 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL5;
    cpy_r_r4 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 411, CPyStatic_modulefinder___globals, "mypy.options.Options", cpy_r_r4);
        goto CPyL230;
    }
    cpy_r_r6 = ((mypy___options___OptionsObject *)cpy_r_r5)->_fast_module_lookup;
    if (!cpy_r_r6) goto CPyL5;
CPyL3: ;
    cpy_r_r7 = CPyDef_modulefinder___FindModuleCache___find_module_via_source_set(cpy_r_self, cpy_r_id);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 410, CPyStatic_modulefinder___globals);
        goto CPyL230;
    }
    cpy_r_r8 = cpy_r_r7;
    goto CPyL6;
CPyL5: ;
    cpy_r_r9 = Py_None;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r8 = cpy_r_r9;
CPyL6: ;
    cpy_r_p = cpy_r_r8;
    cpy_r_r10 = PyObject_IsTrue(cpy_r_p);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 409, CPyStatic_modulefinder___globals);
        goto CPyL231;
    }
    cpy_r_r12 = cpy_r_r10;
    if (cpy_r_r12) {
        goto CPyL232;
    } else
        goto CPyL233;
CPyL8: ;
    if (PyUnicode_Check(cpy_r_p))
        cpy_r_r13 = cpy_r_p;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL3554;
    if (Py_TYPE(cpy_r_p) == CPyType_modulefinder___ModuleNotFoundReason)
        cpy_r_r13 = cpy_r_p;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL3554;
    CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 415, CPyStatic_modulefinder___globals, "union[str, mypy.modulefinder.ModuleNotFoundReason]", cpy_r_p);
    goto CPyL229;
__LL3554: ;
    return cpy_r_r13;
CPyL10: ;
    cpy_r_r14 = CPyStatics[224]; /* '.' */
    cpy_r_r15 = PyUnicode_Split(cpy_r_id, cpy_r_r14, -1);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 421, CPyStatic_modulefinder___globals);
        goto CPyL230;
    }
    cpy_r_components = cpy_r_r15;
    cpy_r_r16 = CPyModule_os;
    cpy_r_r17 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 422, CPyStatic_modulefinder___globals);
        goto CPyL234;
    }
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 422, CPyStatic_modulefinder___globals, "str", cpy_r_r18);
        goto CPyL234;
    }
    cpy_r_r20 = CPyList_GetSlice(cpy_r_components, 0, -2);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 422, CPyStatic_modulefinder___globals);
        goto CPyL235;
    }
    if (likely(PyList_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 422, CPyStatic_modulefinder___globals, "list", cpy_r_r20);
        goto CPyL235;
    }
    cpy_r_r22 = PyUnicode_Join(cpy_r_r19, cpy_r_r21);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 422, CPyStatic_modulefinder___globals);
        goto CPyL234;
    }
    cpy_r_dir_chain = cpy_r_r22;
    cpy_r_r23 = PyList_New(0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 426, CPyStatic_modulefinder___globals);
        goto CPyL236;
    }
    cpy_r_third_party_inline_dirs = cpy_r_r23;
    cpy_r_r24 = PyList_New(0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 427, CPyStatic_modulefinder___globals);
        goto CPyL237;
    }
    cpy_r_third_party_stubs_dirs = cpy_r_r24;
    cpy_r_found_possible_third_party_missing_type_hints = 0;
    cpy_r_need_installed_stubs = 0;
    cpy_r_r25 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_search_paths;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPySequenceTuple_GetItem(cpy_r_r25, 4);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 431, CPyStatic_modulefinder___globals);
        goto CPyL238;
    }
    if (likely(PyTuple_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 431, CPyStatic_modulefinder___globals, "tuple", cpy_r_r26);
        goto CPyL238;
    }
    cpy_r_r28 = 0;
CPyL21: ;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_r27)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r28 < (Py_ssize_t)cpy_r_r31;
    if (!cpy_r_r32) goto CPyL239;
    cpy_r_r33 = CPySequenceTuple_GetItem(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 431, CPyStatic_modulefinder___globals);
        goto CPyL240;
    }
    if (likely(PyUnicode_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 431, CPyStatic_modulefinder___globals, "str", cpy_r_r33);
        goto CPyL240;
    }
    cpy_r_pkg_dir = cpy_r_r34;
    cpy_r_r35 = CPyList_GetItemShort(cpy_r_components, 0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 432, CPyStatic_modulefinder___globals);
        goto CPyL241;
    }
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 432, CPyStatic_modulefinder___globals, "str", cpy_r_r35);
        goto CPyL241;
    }
    cpy_r_r37 = CPyStatics[1986]; /* '-stubs' */
    cpy_r_r38 = PyUnicode_Concat(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 432, CPyStatic_modulefinder___globals);
        goto CPyL241;
    }
    cpy_r_stub_name = cpy_r_r38;
    cpy_r_r39 = CPyModule_os;
    cpy_r_r40 = CPyStatics[142]; /* 'path' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 433, CPyStatic_modulefinder___globals);
        goto CPyL242;
    }
    cpy_r_r42 = CPyStatics[175]; /* 'join' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 433, CPyStatic_modulefinder___globals);
        goto CPyL242;
    }
    PyObject *cpy_r_r44[2] = {cpy_r_pkg_dir, cpy_r_stub_name};
    cpy_r_r45 = (PyObject **)&cpy_r_r44;
    cpy_r_r46 = _PyObject_Vectorcall(cpy_r_r43, cpy_r_r45, 2, 0);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 433, CPyStatic_modulefinder___globals);
        goto CPyL242;
    }
    if (likely(PyUnicode_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 433, CPyStatic_modulefinder___globals, "str", cpy_r_r46);
        goto CPyL242;
    }
    cpy_r_stub_dir = cpy_r_r47;
    cpy_r_r48 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 10, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_fscache, cpy_r_stub_dir); /* isdir */
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 434, CPyStatic_modulefinder___globals);
        goto CPyL243;
    }
    if (!cpy_r_r48) goto CPyL244;
    cpy_r_r49 = CPyDef_modulefinder___FindModuleCache____is_compatible_stub_package(cpy_r_self, cpy_r_stub_dir);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 434, CPyStatic_modulefinder___globals);
        goto CPyL243;
    }
    if (!cpy_r_r49) goto CPyL244;
    cpy_r_r50 = CPyStatics[3836]; /* 'py.typed' */
    cpy_r_r51 = CPyModule_os;
    cpy_r_r52 = CPyStatics[142]; /* 'path' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 435, CPyStatic_modulefinder___globals);
        goto CPyL243;
    }
    cpy_r_r54 = CPyStatics[175]; /* 'join' */
    cpy_r_r55 = CPyObject_GetAttr(cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 435, CPyStatic_modulefinder___globals);
        goto CPyL243;
    }
    PyObject *cpy_r_r56[2] = {cpy_r_stub_dir, cpy_r_r50};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = _PyObject_Vectorcall(cpy_r_r55, cpy_r_r57, 2, 0);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 435, CPyStatic_modulefinder___globals);
        goto CPyL243;
    }
    CPy_DECREF(cpy_r_stub_dir);
    if (likely(PyUnicode_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 435, CPyStatic_modulefinder___globals, "str", cpy_r_r58);
        goto CPyL242;
    }
    cpy_r_stub_typed_file = cpy_r_r59;
    cpy_r_r60 = PyList_New(1);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 436, CPyStatic_modulefinder___globals);
        goto CPyL245;
    }
    cpy_r_r61 = (CPyPtr)&((PyListObject *)cpy_r_r60)->ob_item;
    cpy_r_r62 = *(CPyPtr *)cpy_r_r61;
    *(PyObject * *)cpy_r_r62 = cpy_r_stub_name;
    cpy_r_r63 = CPyList_GetSlice(cpy_r_components, 2, 9223372036854775806LL);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 436, CPyStatic_modulefinder___globals);
        goto CPyL246;
    }
    if (likely(PyList_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 436, CPyStatic_modulefinder___globals, "list", cpy_r_r63);
        goto CPyL246;
    }
    cpy_r_r65 = PyNumber_Add(cpy_r_r60, cpy_r_r64);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 436, CPyStatic_modulefinder___globals);
        goto CPyL247;
    }
    if (likely(PyList_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 436, CPyStatic_modulefinder___globals, "list", cpy_r_r65);
        goto CPyL247;
    }
    cpy_r_stub_components = cpy_r_r66;
    cpy_r_r67 = CPyList_GetSlice(cpy_r_stub_components, 0, -2);
    CPy_DECREF(cpy_r_stub_components);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 437, CPyStatic_modulefinder___globals);
        goto CPyL247;
    }
    if (likely(PyList_Check(cpy_r_r67)))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 437, CPyStatic_modulefinder___globals, "list", cpy_r_r67);
        goto CPyL247;
    }
    cpy_r_r69 = CPyModule_os;
    cpy_r_r70 = CPyStatics[142]; /* 'path' */
    cpy_r_r71 = CPyObject_GetAttr(cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 437, CPyStatic_modulefinder___globals);
        goto CPyL248;
    }
    cpy_r_r72 = CPyStatics[175]; /* 'join' */
    cpy_r_r73 = CPyObject_GetAttr(cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 437, CPyStatic_modulefinder___globals);
        goto CPyL248;
    }
    cpy_r_r74 = PyList_New(1);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 437, CPyStatic_modulefinder___globals);
        goto CPyL249;
    }
    cpy_r_r75 = (CPyPtr)&((PyListObject *)cpy_r_r74)->ob_item;
    cpy_r_r76 = *(CPyPtr *)cpy_r_r75;
    CPy_INCREF(cpy_r_pkg_dir);
    *(PyObject * *)cpy_r_r76 = cpy_r_pkg_dir;
    cpy_r_r77 = CPyList_Extend(cpy_r_r74, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 437, CPyStatic_modulefinder___globals);
        goto CPyL250;
    } else
        goto CPyL251;
CPyL50: ;
    cpy_r_r78 = PyList_AsTuple(cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 437, CPyStatic_modulefinder___globals);
        goto CPyL252;
    }
    cpy_r_r79 = PyDict_New();
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 437, CPyStatic_modulefinder___globals);
        goto CPyL253;
    }
    cpy_r_r80 = PyObject_Call(cpy_r_r73, cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 437, CPyStatic_modulefinder___globals);
        goto CPyL247;
    }
    if (likely(PyUnicode_Check(cpy_r_r80)))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 437, CPyStatic_modulefinder___globals, "str", cpy_r_r80);
        goto CPyL247;
    }
    cpy_r_path = cpy_r_r81;
    cpy_r_r82 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 10, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_fscache, cpy_r_path); /* isdir */
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 438, CPyStatic_modulefinder___globals);
        goto CPyL254;
    }
    if (!cpy_r_r82) goto CPyL255;
    cpy_r_r83 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 7, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_fscache, cpy_r_stub_typed_file); /* isfile */
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 439, CPyStatic_modulefinder___globals);
        goto CPyL254;
    }
    if (!cpy_r_r83) goto CPyL256;
    cpy_r_r84 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 12, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_fscache, cpy_r_stub_typed_file); /* read */
    CPy_DECREF(cpy_r_stub_typed_file);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 444, CPyStatic_modulefinder___globals);
        goto CPyL257;
    }
    cpy_r_r85 = CPy_Decode(cpy_r_r84, NULL, NULL);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 444, CPyStatic_modulefinder___globals);
        goto CPyL257;
    }
    cpy_r_r86 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r87[1] = {cpy_r_r85};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = PyObject_VectorcallMethod(cpy_r_r86, cpy_r_r88, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 444, CPyStatic_modulefinder___globals);
        goto CPyL258;
    }
    CPy_DECREF(cpy_r_r85);
    if (likely(PyUnicode_Check(cpy_r_r89)))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 444, CPyStatic_modulefinder___globals, "str", cpy_r_r89);
        goto CPyL257;
    }
    cpy_r_r91 = CPyStatics[3837]; /* 'partial' */
    cpy_r_r92 = PyUnicode_Compare(cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_r90);
    cpy_r_r93 = cpy_r_r92 == -1;
    if (!cpy_r_r93) goto CPyL65;
    cpy_r_r94 = PyErr_Occurred();
    cpy_r_r95 = cpy_r_r94 != NULL;
    if (!cpy_r_r95) goto CPyL65;
    cpy_r_r96 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 444, CPyStatic_modulefinder___globals);
        goto CPyL257;
    }
CPyL65: ;
    cpy_r_r97 = cpy_r_r92 == 0;
    if (!cpy_r_r97) goto CPyL72;
    cpy_r_r98 = CPyModule_os;
    cpy_r_r99 = CPyStatics[142]; /* 'path' */
    cpy_r_r100 = CPyObject_GetAttr(cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 445, CPyStatic_modulefinder___globals);
        goto CPyL257;
    }
    cpy_r_r101 = CPyStatics[175]; /* 'join' */
    cpy_r_r102 = CPyObject_GetAttr(cpy_r_r100, cpy_r_r101);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 445, CPyStatic_modulefinder___globals);
        goto CPyL257;
    }
    PyObject *cpy_r_r103[2] = {cpy_r_pkg_dir, cpy_r_dir_chain};
    cpy_r_r104 = (PyObject **)&cpy_r_r103;
    cpy_r_r105 = _PyObject_Vectorcall(cpy_r_r102, cpy_r_r104, 2, 0);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 445, CPyStatic_modulefinder___globals);
        goto CPyL257;
    }
    if (likely(PyUnicode_Check(cpy_r_r105)))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 445, CPyStatic_modulefinder___globals, "str", cpy_r_r105);
        goto CPyL257;
    }
    cpy_r_runtime_path = cpy_r_r106;
    cpy_r_r107.f0 = cpy_r_runtime_path;
    cpy_r_r107.f1 = 1;
    CPy_INCREF(cpy_r_r107.f0);
    CPy_DECREF(cpy_r_runtime_path);
    cpy_r_r108 = PyTuple_New(2);
    if (unlikely(cpy_r_r108 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3555 = cpy_r_r107.f0;
    PyTuple_SET_ITEM(cpy_r_r108, 0, __tmp3555);
    PyObject *__tmp3556 = cpy_r_r107.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp3556);
    PyTuple_SET_ITEM(cpy_r_r108, 1, __tmp3556);
    cpy_r_r109 = PyList_Append(cpy_r_third_party_inline_dirs, cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 446, CPyStatic_modulefinder___globals);
        goto CPyL257;
    }
    cpy_r_r111.f0 = cpy_r_path;
    cpy_r_r111.f1 = 0;
    CPy_INCREF(cpy_r_r111.f0);
    CPy_DECREF(cpy_r_path);
    cpy_r_r112 = PyTuple_New(2);
    if (unlikely(cpy_r_r112 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3557 = cpy_r_r111.f0;
    PyTuple_SET_ITEM(cpy_r_r112, 0, __tmp3557);
    PyObject *__tmp3558 = cpy_r_r111.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp3558);
    PyTuple_SET_ITEM(cpy_r_r112, 1, __tmp3558);
    cpy_r_r113 = PyList_Append(cpy_r_third_party_stubs_dirs, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 449, CPyStatic_modulefinder___globals);
        goto CPyL241;
    } else
        goto CPyL74;
CPyL72: ;
    cpy_r_r115.f0 = cpy_r_path;
    cpy_r_r115.f1 = 1;
    CPy_INCREF(cpy_r_r115.f0);
    CPy_DECREF(cpy_r_path);
    cpy_r_r116 = PyTuple_New(2);
    if (unlikely(cpy_r_r116 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3559 = cpy_r_r115.f0;
    PyTuple_SET_ITEM(cpy_r_r116, 0, __tmp3559);
    PyObject *__tmp3560 = cpy_r_r115.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp3560);
    PyTuple_SET_ITEM(cpy_r_r116, 1, __tmp3560);
    cpy_r_r117 = PyList_Append(cpy_r_third_party_stubs_dirs, cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 453, CPyStatic_modulefinder___globals);
        goto CPyL241;
    } else
        goto CPyL74;
CPyL73: ;
    cpy_r_r119.f0 = cpy_r_path;
    cpy_r_r119.f1 = 1;
    CPy_INCREF(cpy_r_r119.f0);
    CPy_DECREF(cpy_r_path);
    cpy_r_r120 = PyTuple_New(2);
    if (unlikely(cpy_r_r120 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3561 = cpy_r_r119.f0;
    PyTuple_SET_ITEM(cpy_r_r120, 0, __tmp3561);
    PyObject *__tmp3562 = cpy_r_r119.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp3562);
    PyTuple_SET_ITEM(cpy_r_r120, 1, __tmp3562);
    cpy_r_r121 = PyList_Append(cpy_r_third_party_stubs_dirs, cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 455, CPyStatic_modulefinder___globals);
        goto CPyL241;
    }
CPyL74: ;
    cpy_r_r123 = CPyDef_modulefinder___FindModuleCache____find_module_non_stub_helper(cpy_r_self, cpy_r_components, cpy_r_pkg_dir);
    CPy_DECREF(cpy_r_pkg_dir);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 456, CPyStatic_modulefinder___globals);
        goto CPyL240;
    }
    cpy_r_non_stub_match = cpy_r_r123;
    cpy_r_r124 = (PyObject *)CPyType_modulefinder___ModuleNotFoundReason;
    cpy_r_r125 = (CPyPtr)&((PyObject *)cpy_r_non_stub_match)->ob_type;
    cpy_r_r126 = *(PyObject * *)cpy_r_r125;
    cpy_r_r127 = cpy_r_r126 == cpy_r_r124;
    if (!cpy_r_r127) goto CPyL88;
    CPy_INCREF(cpy_r_non_stub_match);
    if (likely(Py_TYPE(cpy_r_non_stub_match) == CPyType_modulefinder___ModuleNotFoundReason))
        cpy_r_r128 = cpy_r_non_stub_match;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 458, CPyStatic_modulefinder___globals, "mypy.modulefinder.ModuleNotFoundReason", cpy_r_non_stub_match);
        goto CPyL259;
    }
    cpy_r_r129 = CPyStatic_modulefinder___ModuleNotFoundReason___FOUND_WITHOUT_TYPE_HINTS;
    if (unlikely(cpy_r_r129 == NULL)) {
        goto CPyL260;
    } else
        goto CPyL80;
CPyL78: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"FOUND_WITHOUT_TYPE_HINTS\" was not set");
    cpy_r_r130 = 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 458, CPyStatic_modulefinder___globals);
        goto CPyL229;
    }
    CPy_Unreachable();
CPyL80: ;
    cpy_r_r131 = cpy_r_r128 == cpy_r_r129;
    CPy_DECREF(cpy_r_r128);
    if (cpy_r_r131) {
        goto CPyL261;
    } else
        goto CPyL82;
CPyL81: ;
    cpy_r_found_possible_third_party_missing_type_hints = 1;
    goto CPyL92;
CPyL82: ;
    if (likely(Py_TYPE(cpy_r_non_stub_match) == CPyType_modulefinder___ModuleNotFoundReason))
        cpy_r_r132 = cpy_r_non_stub_match;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 460, CPyStatic_modulefinder___globals, "mypy.modulefinder.ModuleNotFoundReason", cpy_r_non_stub_match);
        goto CPyL240;
    }
    cpy_r_r133 = CPyStatic_modulefinder___ModuleNotFoundReason___APPROVED_STUBS_NOT_INSTALLED;
    if (unlikely(cpy_r_r133 == NULL)) {
        goto CPyL262;
    } else
        goto CPyL86;
CPyL84: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"APPROVED_STUBS_NOT_INSTALLED\" was not set");
    cpy_r_r134 = 0;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 460, CPyStatic_modulefinder___globals);
        goto CPyL229;
    }
    CPy_Unreachable();
CPyL86: ;
    cpy_r_r135 = cpy_r_r132 == cpy_r_r133;
    CPy_DECREF(cpy_r_r132);
    if (!cpy_r_r135) goto CPyL92;
    cpy_r_need_installed_stubs = 1;
    goto CPyL92;
CPyL88: ;
    PyObject *__tmp3563;
    if (unlikely(!(PyTuple_Check(cpy_r_non_stub_match) && PyTuple_GET_SIZE(cpy_r_non_stub_match) == 2))) {
        __tmp3563 = NULL;
        goto __LL3564;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_non_stub_match, 0))))
        __tmp3563 = PyTuple_GET_ITEM(cpy_r_non_stub_match, 0);
    else {
        __tmp3563 = NULL;
    }
    if (__tmp3563 == NULL) goto __LL3564;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_non_stub_match, 1))))
        __tmp3563 = PyTuple_GET_ITEM(cpy_r_non_stub_match, 1);
    else {
        __tmp3563 = NULL;
    }
    if (__tmp3563 == NULL) goto __LL3564;
    __tmp3563 = cpy_r_non_stub_match;
__LL3564: ;
    if (unlikely(__tmp3563 == NULL)) {
        CPy_TypeError("tuple[str, bool]", cpy_r_non_stub_match); cpy_r_r136 = (tuple_T2OC) { NULL, 2 };
    } else {
        PyObject *__tmp3565 = PyTuple_GET_ITEM(cpy_r_non_stub_match, 0);
        CPy_INCREF(__tmp3565);
        PyObject *__tmp3566;
        if (likely(PyUnicode_Check(__tmp3565)))
            __tmp3566 = __tmp3565;
        else {
            CPy_TypeError("str", __tmp3565); 
            __tmp3566 = NULL;
        }
        cpy_r_r136.f0 = __tmp3566;
        PyObject *__tmp3567 = PyTuple_GET_ITEM(cpy_r_non_stub_match, 1);
        char __tmp3568;
        if (unlikely(!PyBool_Check(__tmp3567))) {
            CPy_TypeError("bool", __tmp3567); __tmp3568 = 2;
        } else
            __tmp3568 = __tmp3567 == Py_True;
        cpy_r_r136.f1 = __tmp3568;
    }
    if (unlikely(cpy_r_r136.f0 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 463, CPyStatic_modulefinder___globals);
        goto CPyL259;
    }
    cpy_r_r137 = PyTuple_New(2);
    if (unlikely(cpy_r_r137 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3569 = cpy_r_r136.f0;
    PyTuple_SET_ITEM(cpy_r_r137, 0, __tmp3569);
    PyObject *__tmp3570 = cpy_r_r136.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp3570);
    PyTuple_SET_ITEM(cpy_r_r137, 1, __tmp3570);
    cpy_r_r138 = PyList_Append(cpy_r_third_party_inline_dirs, cpy_r_r137);
    CPy_DECREF(cpy_r_r137);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 463, CPyStatic_modulefinder___globals);
        goto CPyL259;
    }
    PyObject *__tmp3571;
    if (unlikely(!(PyTuple_Check(cpy_r_non_stub_match) && PyTuple_GET_SIZE(cpy_r_non_stub_match) == 2))) {
        __tmp3571 = NULL;
        goto __LL3572;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_non_stub_match, 0))))
        __tmp3571 = PyTuple_GET_ITEM(cpy_r_non_stub_match, 0);
    else {
        __tmp3571 = NULL;
    }
    if (__tmp3571 == NULL) goto __LL3572;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_non_stub_match, 1))))
        __tmp3571 = PyTuple_GET_ITEM(cpy_r_non_stub_match, 1);
    else {
        __tmp3571 = NULL;
    }
    if (__tmp3571 == NULL) goto __LL3572;
    __tmp3571 = cpy_r_non_stub_match;
__LL3572: ;
    if (unlikely(__tmp3571 == NULL)) {
        CPy_TypeError("tuple[str, bool]", cpy_r_non_stub_match); cpy_r_r140 = (tuple_T2OC) { NULL, 2 };
    } else {
        PyObject *__tmp3573 = PyTuple_GET_ITEM(cpy_r_non_stub_match, 0);
        CPy_INCREF(__tmp3573);
        PyObject *__tmp3574;
        if (likely(PyUnicode_Check(__tmp3573)))
            __tmp3574 = __tmp3573;
        else {
            CPy_TypeError("str", __tmp3573); 
            __tmp3574 = NULL;
        }
        cpy_r_r140.f0 = __tmp3574;
        PyObject *__tmp3575 = PyTuple_GET_ITEM(cpy_r_non_stub_match, 1);
        char __tmp3576;
        if (unlikely(!PyBool_Check(__tmp3575))) {
            CPy_TypeError("bool", __tmp3575); __tmp3576 = 2;
        } else
            __tmp3576 = __tmp3575 == Py_True;
        cpy_r_r140.f1 = __tmp3576;
    }
    CPy_DECREF(cpy_r_non_stub_match);
    if (unlikely(cpy_r_r140.f0 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 464, CPyStatic_modulefinder___globals);
        goto CPyL240;
    }
    cpy_r_r141 = CPyDef_modulefinder___FindModuleCache____update_ns_ancestors(cpy_r_self, cpy_r_components, cpy_r_r140);
    CPy_DECREF(cpy_r_r140.f0);
    if (unlikely(cpy_r_r141 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 464, CPyStatic_modulefinder___globals);
        goto CPyL240;
    }
CPyL92: ;
    cpy_r_r142 = cpy_r_r28 + 2;
    cpy_r_r28 = cpy_r_r142;
    goto CPyL21;
CPyL93: ;
    cpy_r_r143 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r143);
    cpy_r_r144 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r145 = cpy_r_r143 != cpy_r_r144;
    CPy_DECREF(cpy_r_r143);
    if (!cpy_r_r145) goto CPyL99;
    cpy_r_r146 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    if (likely(cpy_r_r146 != Py_None))
        cpy_r_r147 = cpy_r_r146;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 465, CPyStatic_modulefinder___globals, "mypy.options.Options", cpy_r_r146);
        goto CPyL263;
    }
    cpy_r_r148 = ((mypy___options___OptionsObject *)cpy_r_r147)->_use_builtins_fixtures;
    if (!cpy_r_r148) goto CPyL99;
CPyL96: ;
    cpy_r_r149 = CPyStatics[1550]; /* 'clear' */
    PyObject *cpy_r_r150[1] = {cpy_r_third_party_inline_dirs};
    cpy_r_r151 = (PyObject **)&cpy_r_r150;
    cpy_r_r152 = PyObject_VectorcallMethod(cpy_r_r149, cpy_r_r151, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 467, CPyStatic_modulefinder___globals);
        goto CPyL263;
    } else
        goto CPyL264;
CPyL97: ;
    cpy_r_r153 = CPyStatics[1550]; /* 'clear' */
    PyObject *cpy_r_r154[1] = {cpy_r_third_party_stubs_dirs};
    cpy_r_r155 = (PyObject **)&cpy_r_r154;
    cpy_r_r156 = PyObject_VectorcallMethod(cpy_r_r153, cpy_r_r155, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 468, CPyStatic_modulefinder___globals);
        goto CPyL263;
    } else
        goto CPyL265;
CPyL98: ;
    cpy_r_found_possible_third_party_missing_type_hints = 0;
CPyL99: ;
    cpy_r_r157 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_search_paths;
    CPy_INCREF(cpy_r_r157);
    cpy_r_r158 = CPySequenceTuple_GetItem(cpy_r_r157, 2);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 470, CPyStatic_modulefinder___globals);
        goto CPyL263;
    }
    if (likely(PyTuple_Check(cpy_r_r158)))
        cpy_r_r159 = cpy_r_r158;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 470, CPyStatic_modulefinder___globals, "tuple", cpy_r_r158);
        goto CPyL263;
    }
    cpy_r_r160 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_search_paths;
    CPy_INCREF(cpy_r_r160);
    cpy_r_r161 = CPySequenceTuple_GetItem(cpy_r_r160, 0);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 470, CPyStatic_modulefinder___globals);
        goto CPyL266;
    }
    if (likely(PyTuple_Check(cpy_r_r161)))
        cpy_r_r162 = cpy_r_r161;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 470, CPyStatic_modulefinder___globals, "tuple", cpy_r_r161);
        goto CPyL266;
    }
    cpy_r_r163 = PyNumber_Add(cpy_r_r159, cpy_r_r162);
    CPy_DECREF(cpy_r_r159);
    CPy_DECREF(cpy_r_r162);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 470, CPyStatic_modulefinder___globals);
        goto CPyL263;
    }
    if (likely(PyTuple_Check(cpy_r_r163)))
        cpy_r_r164 = cpy_r_r163;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 470, CPyStatic_modulefinder___globals, "tuple", cpy_r_r163);
        goto CPyL263;
    }
    cpy_r_python_mypy_path = cpy_r_r164;
    cpy_r_r165 = CPyDef_modulefinder___FindModuleCache___find_lib_path_dirs(cpy_r_self, cpy_r_id, cpy_r_python_mypy_path);
    CPy_DECREF(cpy_r_python_mypy_path);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 471, CPyStatic_modulefinder___globals);
        goto CPyL263;
    }
    cpy_r_candidate_base_dirs = cpy_r_r165;
    if (!cpy_r_use_typeshed) goto CPyL113;
    cpy_r_r166 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_search_paths;
    CPy_INCREF(cpy_r_r166);
    cpy_r_r167 = CPySequenceTuple_GetItem(cpy_r_r166, 6);
    CPy_DECREF(cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 476, CPyStatic_modulefinder___globals);
        goto CPyL267;
    }
    if (likely(PyTuple_Check(cpy_r_r167)))
        cpy_r_r168 = cpy_r_r167;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 476, CPyStatic_modulefinder___globals, "tuple", cpy_r_r167);
        goto CPyL267;
    }
    cpy_r_r169 = CPyDef_modulefinder___FindModuleCache___find_lib_path_dirs(cpy_r_self, cpy_r_id, cpy_r_r168);
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 476, CPyStatic_modulefinder___globals);
        goto CPyL267;
    }
    cpy_r_r170 = PyNumber_InPlaceAdd(cpy_r_candidate_base_dirs, cpy_r_r169);
    CPy_DECREF(cpy_r_candidate_base_dirs);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 476, CPyStatic_modulefinder___globals);
        goto CPyL263;
    }
    if (likely(PyList_Check(cpy_r_r170)))
        cpy_r_r171 = cpy_r_r170;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 476, CPyStatic_modulefinder___globals, "list", cpy_r_r170);
        goto CPyL263;
    }
    cpy_r_candidate_base_dirs = cpy_r_r171;
CPyL113: ;
    cpy_r_r172 = PyNumber_Add(cpy_r_third_party_stubs_dirs, cpy_r_third_party_inline_dirs);
    CPy_DECREF(cpy_r_third_party_stubs_dirs);
    CPy_DECREF(cpy_r_third_party_inline_dirs);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 477, CPyStatic_modulefinder___globals);
        goto CPyL268;
    }
    if (likely(PyList_Check(cpy_r_r172)))
        cpy_r_r173 = cpy_r_r172;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 477, CPyStatic_modulefinder___globals, "list", cpy_r_r172);
        goto CPyL268;
    }
    cpy_r_r174 = PyNumber_InPlaceAdd(cpy_r_candidate_base_dirs, cpy_r_r173);
    CPy_DECREF(cpy_r_candidate_base_dirs);
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 477, CPyStatic_modulefinder___globals);
        goto CPyL234;
    }
    if (likely(PyList_Check(cpy_r_r174)))
        cpy_r_r175 = cpy_r_r174;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 477, CPyStatic_modulefinder___globals, "list", cpy_r_r174);
        goto CPyL234;
    }
    cpy_r_candidate_base_dirs = cpy_r_r175;
    cpy_r_r176 = CPyModule_os;
    cpy_r_r177 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r178 = CPyObject_GetAttr(cpy_r_r176, cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 483, CPyStatic_modulefinder___globals);
        goto CPyL268;
    }
    if (likely(PyUnicode_Check(cpy_r_r178)))
        cpy_r_r179 = cpy_r_r178;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 483, CPyStatic_modulefinder___globals, "str", cpy_r_r178);
        goto CPyL268;
    }
    cpy_r_r180 = CPyList_GetItemShort(cpy_r_components, -2);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 483, CPyStatic_modulefinder___globals);
        goto CPyL269;
    }
    if (likely(PyUnicode_Check(cpy_r_r180)))
        cpy_r_r181 = cpy_r_r180;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 483, CPyStatic_modulefinder___globals, "str", cpy_r_r180);
        goto CPyL269;
    }
    cpy_r_r182 = PyUnicode_Concat(cpy_r_r179, cpy_r_r181);
    CPy_DECREF(cpy_r_r179);
    CPy_DECREF(cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 483, CPyStatic_modulefinder___globals);
        goto CPyL268;
    }
    cpy_r_seplast = cpy_r_r182;
    cpy_r_r183 = CPyModule_os;
    cpy_r_r184 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r185 = CPyObject_GetAttr(cpy_r_r183, cpy_r_r184);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 484, CPyStatic_modulefinder___globals);
        goto CPyL270;
    }
    if (likely(PyUnicode_Check(cpy_r_r185)))
        cpy_r_r186 = cpy_r_r185;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 484, CPyStatic_modulefinder___globals, "str", cpy_r_r185);
        goto CPyL270;
    }
    cpy_r_r187 = CPyStatics[288]; /* '__init__' */
    cpy_r_r188 = PyUnicode_Concat(cpy_r_r186, cpy_r_r187);
    CPy_DECREF(cpy_r_r186);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 484, CPyStatic_modulefinder___globals);
        goto CPyL270;
    }
    cpy_r_sepinit = cpy_r_r188;
    cpy_r_r189 = PyList_New(0);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 485, CPyStatic_modulefinder___globals);
        goto CPyL271;
    }
    cpy_r_near_misses = cpy_r_r189;
    cpy_r_r190 = 0;
CPyL127: ;
    cpy_r_r191 = (CPyPtr)&((PyVarObject *)cpy_r_candidate_base_dirs)->ob_size;
    cpy_r_r192 = *(int64_t *)cpy_r_r191;
    cpy_r_r193 = cpy_r_r192 << 1;
    cpy_r_r194 = (Py_ssize_t)cpy_r_r190 < (Py_ssize_t)cpy_r_r193;
    if (!cpy_r_r194) goto CPyL272;
    cpy_r_r195 = CPyList_GetItemUnsafe(cpy_r_candidate_base_dirs, cpy_r_r190);
    PyObject *__tmp3577;
    if (unlikely(!(PyTuple_Check(cpy_r_r195) && PyTuple_GET_SIZE(cpy_r_r195) == 2))) {
        __tmp3577 = NULL;
        goto __LL3578;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r195, 0))))
        __tmp3577 = PyTuple_GET_ITEM(cpy_r_r195, 0);
    else {
        __tmp3577 = NULL;
    }
    if (__tmp3577 == NULL) goto __LL3578;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r195, 1))))
        __tmp3577 = PyTuple_GET_ITEM(cpy_r_r195, 1);
    else {
        __tmp3577 = NULL;
    }
    if (__tmp3577 == NULL) goto __LL3578;
    __tmp3577 = cpy_r_r195;
__LL3578: ;
    if (unlikely(__tmp3577 == NULL)) {
        CPy_TypeError("tuple[str, bool]", cpy_r_r195); cpy_r_r196 = (tuple_T2OC) { NULL, 2 };
    } else {
        PyObject *__tmp3579 = PyTuple_GET_ITEM(cpy_r_r195, 0);
        CPy_INCREF(__tmp3579);
        PyObject *__tmp3580;
        if (likely(PyUnicode_Check(__tmp3579)))
            __tmp3580 = __tmp3579;
        else {
            CPy_TypeError("str", __tmp3579); 
            __tmp3580 = NULL;
        }
        cpy_r_r196.f0 = __tmp3580;
        PyObject *__tmp3581 = PyTuple_GET_ITEM(cpy_r_r195, 1);
        char __tmp3582;
        if (unlikely(!PyBool_Check(__tmp3581))) {
            CPy_TypeError("bool", __tmp3581); __tmp3582 = 2;
        } else
            __tmp3582 = __tmp3581 == Py_True;
        cpy_r_r196.f1 = __tmp3582;
    }
    CPy_DECREF(cpy_r_r195);
    if (unlikely(cpy_r_r196.f0 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 486, CPyStatic_modulefinder___globals);
        goto CPyL273;
    }
    cpy_r_r197 = cpy_r_r196.f0;
    CPy_INCREF(cpy_r_r197);
    cpy_r_base_dir = cpy_r_r197;
    cpy_r_r198 = cpy_r_r196.f1;
    CPy_DECREF(cpy_r_r196.f0);
    cpy_r_verify = cpy_r_r198;
    cpy_r_r199 = PyUnicode_Concat(cpy_r_base_dir, cpy_r_seplast);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 487, CPyStatic_modulefinder___globals);
        goto CPyL274;
    }
    cpy_r_base_path = cpy_r_r199;
    cpy_r_has_init = 0;
    cpy_r_dir_prefix = cpy_r_base_dir;
    cpy_r_r200 = (CPyPtr)&((PyVarObject *)cpy_r_components)->ob_size;
    cpy_r_r201 = *(int64_t *)cpy_r_r200;
    cpy_r_r202 = cpy_r_r201 << 1;
    cpy_r_r203 = CPyTagged_Subtract(cpy_r_r202, 2);
    cpy_r_r204 = 0;
    CPyTagged_INCREF(cpy_r_r204);
    cpy_r_r205 = CPyTagged_StealAsObject(cpy_r_r204);
    cpy_r__ = cpy_r_r205;
    CPy_DECREF(cpy_r__);
CPyL131: ;
    cpy_r_r206 = cpy_r_r204 & 1;
    cpy_r_r207 = cpy_r_r206 == 0;
    cpy_r_r208 = cpy_r_r203 & 1;
    cpy_r_r209 = cpy_r_r208 == 0;
    cpy_r_r210 = cpy_r_r207 & cpy_r_r209;
    if (!cpy_r_r210) goto CPyL133;
    cpy_r_r211 = (Py_ssize_t)cpy_r_r204 < (Py_ssize_t)cpy_r_r203;
    cpy_r_r212 = cpy_r_r211;
    goto CPyL134;
CPyL133: ;
    cpy_r_r213 = CPyTagged_IsLt_(cpy_r_r204, cpy_r_r203);
    cpy_r_r212 = cpy_r_r213;
CPyL134: ;
    if (!cpy_r_r212) goto CPyL275;
    cpy_r_r214 = CPyModule_os;
    cpy_r_r215 = CPyStatics[142]; /* 'path' */
    cpy_r_r216 = CPyObject_GetAttr(cpy_r_r214, cpy_r_r215);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 491, CPyStatic_modulefinder___globals);
        goto CPyL276;
    }
    cpy_r_r217 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r218 = CPyObject_GetAttr(cpy_r_r216, cpy_r_r217);
    CPy_DECREF(cpy_r_r216);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 491, CPyStatic_modulefinder___globals);
        goto CPyL276;
    }
    PyObject *cpy_r_r219[1] = {cpy_r_dir_prefix};
    cpy_r_r220 = (PyObject **)&cpy_r_r219;
    cpy_r_r221 = _PyObject_Vectorcall(cpy_r_r218, cpy_r_r220, 1, 0);
    CPy_DECREF(cpy_r_r218);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 491, CPyStatic_modulefinder___globals);
        goto CPyL276;
    }
    CPy_DECREF(cpy_r_dir_prefix);
    if (likely(PyUnicode_Check(cpy_r_r221)))
        cpy_r_r222 = cpy_r_r221;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 491, CPyStatic_modulefinder___globals, "str", cpy_r_r221);
        goto CPyL277;
    }
    cpy_r_dir_prefix = cpy_r_r222;
    cpy_r_r223 = CPyTagged_Add(cpy_r_r204, 2);
    CPyTagged_DECREF(cpy_r_r204);
    CPyTagged_INCREF(cpy_r_r223);
    cpy_r_r204 = cpy_r_r223;
    cpy_r_r224 = CPyTagged_StealAsObject(cpy_r_r223);
    cpy_r__ = cpy_r_r224;
    CPy_DECREF(cpy_r__);
    goto CPyL131;
CPyL141: ;
    cpy_r_r225 = CPyStatic_modulefinder___PYTHON_EXTENSIONS;
    if (unlikely(cpy_r_r225 == NULL)) {
        goto CPyL278;
    } else
        goto CPyL144;
CPyL142: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYTHON_EXTENSIONS\" was not set");
    cpy_r_r226 = 0;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 493, CPyStatic_modulefinder___globals);
        goto CPyL229;
    }
    CPy_Unreachable();
CPyL144: ;
    cpy_r_r227 = 0;
CPyL145: ;
    cpy_r_r228 = (CPyPtr)&((PyVarObject *)cpy_r_r225)->ob_size;
    cpy_r_r229 = *(int64_t *)cpy_r_r228;
    cpy_r_r230 = cpy_r_r229 << 1;
    cpy_r_r231 = (Py_ssize_t)cpy_r_r227 < (Py_ssize_t)cpy_r_r230;
    if (!cpy_r_r231) goto CPyL167;
    cpy_r_r232 = CPyList_GetItemUnsafe(cpy_r_r225, cpy_r_r227);
    if (likely(PyUnicode_Check(cpy_r_r232)))
        cpy_r_r233 = cpy_r_r232;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 493, CPyStatic_modulefinder___globals, "str", cpy_r_r232);
        goto CPyL279;
    }
    cpy_r_extension = cpy_r_r233;
    cpy_r_r234 = PyUnicode_Concat(cpy_r_base_path, cpy_r_sepinit);
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 494, CPyStatic_modulefinder___globals);
        goto CPyL280;
    }
    cpy_r_r235 = PyUnicode_Concat(cpy_r_r234, cpy_r_extension);
    CPy_DECREF(cpy_r_r234);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 494, CPyStatic_modulefinder___globals);
        goto CPyL280;
    }
    cpy_r_path = cpy_r_r235;
    cpy_r_r236 = CPyStatics[1986]; /* '-stubs' */
    cpy_r_r237 = PyUnicode_Concat(cpy_r_base_path, cpy_r_r236);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 495, CPyStatic_modulefinder___globals);
        goto CPyL281;
    }
    cpy_r_r238 = PyUnicode_Concat(cpy_r_r237, cpy_r_sepinit);
    CPy_DECREF(cpy_r_r237);
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 495, CPyStatic_modulefinder___globals);
        goto CPyL281;
    }
    cpy_r_r239 = PyUnicode_Concat(cpy_r_r238, cpy_r_extension);
    CPy_DECREF(cpy_r_r238);
    CPy_DECREF(cpy_r_extension);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 495, CPyStatic_modulefinder___globals);
        goto CPyL282;
    }
    cpy_r_path_stubs = cpy_r_r239;
    cpy_r_r240 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 8, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_fscache, cpy_r_path, cpy_r_dir_prefix); /* isfile_case */
    if (unlikely(cpy_r_r240 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 496, CPyStatic_modulefinder___globals);
        goto CPyL283;
    }
    if (cpy_r_r240) {
        goto CPyL284;
    } else
        goto CPyL285;
CPyL154: ;
    cpy_r_has_init = 1;
    if (!cpy_r_verify) goto CPyL286;
    cpy_r_r241 = CPyDef_modulefinder___verify_module(cpy_r_fscache, cpy_r_id, cpy_r_path, cpy_r_dir_prefix);
    if (unlikely(cpy_r_r241 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 498, CPyStatic_modulefinder___globals);
        goto CPyL282;
    }
    if (cpy_r_r241) goto CPyL286;
    cpy_r_r242.f0 = cpy_r_path;
    cpy_r_r242.f1 = cpy_r_dir_prefix;
    CPy_INCREF(cpy_r_r242.f0);
    CPy_INCREF(cpy_r_r242.f1);
    CPy_DECREF(cpy_r_path);
    cpy_r_r243 = PyTuple_New(2);
    if (unlikely(cpy_r_r243 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3583 = cpy_r_r242.f0;
    PyTuple_SET_ITEM(cpy_r_r243, 0, __tmp3583);
    PyObject *__tmp3584 = cpy_r_r242.f1;
    PyTuple_SET_ITEM(cpy_r_r243, 1, __tmp3584);
    cpy_r_r244 = PyList_Append(cpy_r_near_misses, cpy_r_r243);
    CPy_DECREF(cpy_r_r243);
    cpy_r_r245 = cpy_r_r244 >= 0;
    if (unlikely(!cpy_r_r245)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 499, CPyStatic_modulefinder___globals);
        goto CPyL279;
    } else
        goto CPyL166;
CPyL158: ;
    return cpy_r_path;
CPyL159: ;
    cpy_r_r246 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 8, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_fscache, cpy_r_path_stubs, cpy_r_dir_prefix); /* isfile_case */
    if (unlikely(cpy_r_r246 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 502, CPyStatic_modulefinder___globals);
        goto CPyL287;
    }
    if (!cpy_r_r246) goto CPyL288;
    if (!cpy_r_verify) goto CPyL289;
    cpy_r_r247 = CPyDef_modulefinder___verify_module(cpy_r_fscache, cpy_r_id, cpy_r_path_stubs, cpy_r_dir_prefix);
    if (unlikely(cpy_r_r247 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 503, CPyStatic_modulefinder___globals);
        goto CPyL287;
    }
    if (cpy_r_r247) goto CPyL289;
    cpy_r_r248.f0 = cpy_r_path_stubs;
    cpy_r_r248.f1 = cpy_r_dir_prefix;
    CPy_INCREF(cpy_r_r248.f0);
    CPy_INCREF(cpy_r_r248.f1);
    CPy_DECREF(cpy_r_path_stubs);
    cpy_r_r249 = PyTuple_New(2);
    if (unlikely(cpy_r_r249 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3585 = cpy_r_r248.f0;
    PyTuple_SET_ITEM(cpy_r_r249, 0, __tmp3585);
    PyObject *__tmp3586 = cpy_r_r248.f1;
    PyTuple_SET_ITEM(cpy_r_r249, 1, __tmp3586);
    cpy_r_r250 = PyList_Append(cpy_r_near_misses, cpy_r_r249);
    CPy_DECREF(cpy_r_r249);
    cpy_r_r251 = cpy_r_r250 >= 0;
    if (unlikely(!cpy_r_r251)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 504, CPyStatic_modulefinder___globals);
        goto CPyL279;
    } else
        goto CPyL166;
CPyL165: ;
    return cpy_r_path_stubs;
CPyL166: ;
    cpy_r_r252 = cpy_r_r227 + 2;
    cpy_r_r227 = cpy_r_r252;
    goto CPyL145;
CPyL167: ;
    cpy_r_r253 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r253);
    cpy_r_r254 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r255 = cpy_r_r253 != cpy_r_r254;
    CPy_DECREF(cpy_r_r253);
    if (!cpy_r_r255) goto CPyL176;
    cpy_r_r256 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    if (likely(cpy_r_r256 != Py_None))
        cpy_r_r257 = cpy_r_r256;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 509, CPyStatic_modulefinder___globals, "mypy.options.Options", cpy_r_r256);
        goto CPyL279;
    }
    cpy_r_r258 = ((mypy___options___OptionsObject *)cpy_r_r257)->_namespace_packages;
    if (!cpy_r_r258) goto CPyL176;
CPyL170: ;
    if (cpy_r_has_init) goto CPyL176;
    cpy_r_r259 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 9, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_fscache, cpy_r_base_path, cpy_r_dir_prefix); /* exists_case */
    if (unlikely(cpy_r_r259 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 512, CPyStatic_modulefinder___globals);
        goto CPyL279;
    }
    if (!cpy_r_r259) goto CPyL176;
    cpy_r_r260 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 8, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_fscache, cpy_r_base_path, cpy_r_dir_prefix); /* isfile_case */
    if (unlikely(cpy_r_r260 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 513, CPyStatic_modulefinder___globals);
        goto CPyL279;
    }
    if (cpy_r_r260) goto CPyL176;
    cpy_r_r261.f0 = cpy_r_base_path;
    cpy_r_r261.f1 = cpy_r_dir_prefix;
    CPy_INCREF(cpy_r_r261.f0);
    CPy_INCREF(cpy_r_r261.f1);
    cpy_r_r262 = PyTuple_New(2);
    if (unlikely(cpy_r_r262 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3587 = cpy_r_r261.f0;
    PyTuple_SET_ITEM(cpy_r_r262, 0, __tmp3587);
    PyObject *__tmp3588 = cpy_r_r261.f1;
    PyTuple_SET_ITEM(cpy_r_r262, 1, __tmp3588);
    cpy_r_r263 = PyList_Append(cpy_r_near_misses, cpy_r_r262);
    CPy_DECREF(cpy_r_r262);
    cpy_r_r264 = cpy_r_r263 >= 0;
    if (unlikely(!cpy_r_r264)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 515, CPyStatic_modulefinder___globals);
        goto CPyL279;
    }
CPyL176: ;
    cpy_r_r265 = CPyStatic_modulefinder___PYTHON_EXTENSIONS;
    if (unlikely(cpy_r_r265 == NULL)) {
        goto CPyL290;
    } else
        goto CPyL179;
CPyL177: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYTHON_EXTENSIONS\" was not set");
    cpy_r_r266 = 0;
    if (unlikely(!cpy_r_r266)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 518, CPyStatic_modulefinder___globals);
        goto CPyL229;
    }
    CPy_Unreachable();
CPyL179: ;
    cpy_r_r267 = 0;
CPyL180: ;
    cpy_r_r268 = (CPyPtr)&((PyVarObject *)cpy_r_r265)->ob_size;
    cpy_r_r269 = *(int64_t *)cpy_r_r268;
    cpy_r_r270 = cpy_r_r269 << 1;
    cpy_r_r271 = (Py_ssize_t)cpy_r_r267 < (Py_ssize_t)cpy_r_r270;
    if (!cpy_r_r271) goto CPyL291;
    cpy_r_r272 = CPyList_GetItemUnsafe(cpy_r_r265, cpy_r_r267);
    if (likely(PyUnicode_Check(cpy_r_r272)))
        cpy_r_r273 = cpy_r_r272;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 518, CPyStatic_modulefinder___globals, "str", cpy_r_r272);
        goto CPyL279;
    }
    cpy_r_extension = cpy_r_r273;
    cpy_r_r274 = PyUnicode_Concat(cpy_r_base_path, cpy_r_extension);
    CPy_DECREF(cpy_r_extension);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 519, CPyStatic_modulefinder___globals);
        goto CPyL279;
    }
    cpy_r_path = cpy_r_r274;
    cpy_r_r275 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 8, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_fscache, cpy_r_path, cpy_r_dir_prefix); /* isfile_case */
    if (unlikely(cpy_r_r275 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 520, CPyStatic_modulefinder___globals);
        goto CPyL282;
    }
    if (!cpy_r_r275) goto CPyL292;
    if (!cpy_r_verify) goto CPyL293;
    cpy_r_r276 = CPyDef_modulefinder___verify_module(cpy_r_fscache, cpy_r_id, cpy_r_path, cpy_r_dir_prefix);
    if (unlikely(cpy_r_r276 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 521, CPyStatic_modulefinder___globals);
        goto CPyL282;
    }
    if (cpy_r_r276) goto CPyL293;
    cpy_r_r277.f0 = cpy_r_path;
    cpy_r_r277.f1 = cpy_r_dir_prefix;
    CPy_INCREF(cpy_r_r277.f0);
    CPy_INCREF(cpy_r_r277.f1);
    CPy_DECREF(cpy_r_path);
    cpy_r_r278 = PyTuple_New(2);
    if (unlikely(cpy_r_r278 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3589 = cpy_r_r277.f0;
    PyTuple_SET_ITEM(cpy_r_r278, 0, __tmp3589);
    PyObject *__tmp3590 = cpy_r_r277.f1;
    PyTuple_SET_ITEM(cpy_r_r278, 1, __tmp3590);
    cpy_r_r279 = PyList_Append(cpy_r_near_misses, cpy_r_r278);
    CPy_DECREF(cpy_r_r278);
    cpy_r_r280 = cpy_r_r279 >= 0;
    if (unlikely(!cpy_r_r280)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 522, CPyStatic_modulefinder___globals);
        goto CPyL279;
    } else
        goto CPyL190;
CPyL189: ;
    return cpy_r_path;
CPyL190: ;
    cpy_r_r281 = cpy_r_r267 + 2;
    cpy_r_r267 = cpy_r_r281;
    goto CPyL180;
CPyL191: ;
    cpy_r_r282 = cpy_r_r190 + 2;
    cpy_r_r190 = cpy_r_r282;
    goto CPyL127;
CPyL192: ;
    cpy_r_r283 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r283);
    cpy_r_r284 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r285 = cpy_r_r283 != cpy_r_r284;
    CPy_DECREF(cpy_r_r283);
    if (!cpy_r_r285) goto CPyL294;
    cpy_r_r286 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    if (likely(cpy_r_r286 != Py_None))
        cpy_r_r287 = cpy_r_r286;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 547, CPyStatic_modulefinder___globals, "mypy.options.Options", cpy_r_r286);
        goto CPyL295;
    }
    cpy_r_r288 = ((mypy___options___OptionsObject *)cpy_r_r287)->_namespace_packages;
    if (!cpy_r_r288) goto CPyL294;
CPyL195: ;
    cpy_r_r289 = (CPyPtr)&((PyVarObject *)cpy_r_near_misses)->ob_size;
    cpy_r_r290 = *(int64_t *)cpy_r_r289;
    cpy_r_r291 = cpy_r_r290 << 1;
    cpy_r_r292 = cpy_r_r291 != 0;
    if (!cpy_r_r292) goto CPyL294;
    cpy_r_r293 = (CPyPtr)&((PyVarObject *)cpy_r_near_misses)->ob_size;
    cpy_r_r294 = *(int64_t *)cpy_r_r293;
    cpy_r_r295 = PyList_New(cpy_r_r294);
    if (unlikely(cpy_r_r295 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 548, CPyStatic_modulefinder___globals);
        goto CPyL295;
    }
    cpy_r_r296 = 0;
CPyL198: ;
    cpy_r_r297 = (CPyPtr)&((PyVarObject *)cpy_r_near_misses)->ob_size;
    cpy_r_r298 = *(int64_t *)cpy_r_r297;
    cpy_r_r299 = cpy_r_r298 << 1;
    cpy_r_r300 = (Py_ssize_t)cpy_r_r296 < (Py_ssize_t)cpy_r_r299;
    if (!cpy_r_r300) goto CPyL296;
    cpy_r_r301 = CPyList_GetItemUnsafe(cpy_r_near_misses, cpy_r_r296);
    PyObject *__tmp3591;
    if (unlikely(!(PyTuple_Check(cpy_r_r301) && PyTuple_GET_SIZE(cpy_r_r301) == 2))) {
        __tmp3591 = NULL;
        goto __LL3592;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r301, 0))))
        __tmp3591 = PyTuple_GET_ITEM(cpy_r_r301, 0);
    else {
        __tmp3591 = NULL;
    }
    if (__tmp3591 == NULL) goto __LL3592;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r301, 1))))
        __tmp3591 = PyTuple_GET_ITEM(cpy_r_r301, 1);
    else {
        __tmp3591 = NULL;
    }
    if (__tmp3591 == NULL) goto __LL3592;
    __tmp3591 = cpy_r_r301;
__LL3592: ;
    if (unlikely(__tmp3591 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r301); cpy_r_r302 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3593 = PyTuple_GET_ITEM(cpy_r_r301, 0);
        CPy_INCREF(__tmp3593);
        PyObject *__tmp3594;
        if (likely(PyUnicode_Check(__tmp3593)))
            __tmp3594 = __tmp3593;
        else {
            CPy_TypeError("str", __tmp3593); 
            __tmp3594 = NULL;
        }
        cpy_r_r302.f0 = __tmp3594;
        PyObject *__tmp3595 = PyTuple_GET_ITEM(cpy_r_r301, 1);
        CPy_INCREF(__tmp3595);
        PyObject *__tmp3596;
        if (likely(PyUnicode_Check(__tmp3595)))
            __tmp3596 = __tmp3595;
        else {
            CPy_TypeError("str", __tmp3595); 
            __tmp3596 = NULL;
        }
        cpy_r_r302.f1 = __tmp3596;
    }
    CPy_DECREF(cpy_r_r301);
    if (unlikely(cpy_r_r302.f0 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 548, CPyStatic_modulefinder___globals);
        goto CPyL297;
    }
    cpy_r_r303 = cpy_r_r302.f0;
    CPy_INCREF(cpy_r_r303);
    cpy_r_path_2 = cpy_r_r303;
    cpy_r_r304 = cpy_r_r302.f1;
    CPy_INCREF(cpy_r_r304);
    CPy_DECREF(cpy_r_r302.f0);
    CPy_DECREF(cpy_r_r302.f1);
    cpy_r_dir_prefix_2 = cpy_r_r304;
    cpy_r_r305 = CPyDef_modulefinder___highest_init_level(cpy_r_fscache, cpy_r_id, cpy_r_path_2, cpy_r_dir_prefix_2);
    CPy_DECREF(cpy_r_path_2);
    CPy_DECREF(cpy_r_dir_prefix_2);
    if (unlikely(cpy_r_r305 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 549, CPyStatic_modulefinder___globals);
        goto CPyL297;
    }
    cpy_r_r306 = CPyTagged_StealAsObject(cpy_r_r305);
    cpy_r_r307 = CPyList_SetItemUnsafe(cpy_r_r295, cpy_r_r296, cpy_r_r306);
    if (unlikely(!cpy_r_r307)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 548, CPyStatic_modulefinder___globals);
        goto CPyL297;
    }
    cpy_r_r308 = cpy_r_r296 + 2;
    cpy_r_r296 = cpy_r_r308;
    goto CPyL198;
CPyL203: ;
    cpy_r_levels = cpy_r_r295;
    cpy_r_r309 = CPyModule_builtins;
    cpy_r_r310 = CPyStatics[463]; /* 'max' */
    cpy_r_r311 = CPyObject_GetAttr(cpy_r_r309, cpy_r_r310);
    if (unlikely(cpy_r_r311 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 552, CPyStatic_modulefinder___globals);
        goto CPyL298;
    }
    PyObject *cpy_r_r312[1] = {cpy_r_levels};
    cpy_r_r313 = (PyObject **)&cpy_r_r312;
    cpy_r_r314 = _PyObject_Vectorcall(cpy_r_r311, cpy_r_r313, 1, 0);
    CPy_DECREF(cpy_r_r311);
    if (unlikely(cpy_r_r314 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 552, CPyStatic_modulefinder___globals);
        goto CPyL298;
    }
    if (likely(PyLong_Check(cpy_r_r314)))
        cpy_r_r315 = CPyTagged_FromObject(cpy_r_r314);
    else {
        CPy_TypeError("int", cpy_r_r314); cpy_r_r315 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r314);
    if (unlikely(cpy_r_r315 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 552, CPyStatic_modulefinder___globals);
        goto CPyL298;
    }
    cpy_r_r316 = CPyTagged_StealAsObject(cpy_r_r315);
    cpy_r_r317 = CPyList_Index(cpy_r_levels, cpy_r_r316);
    CPy_DECREF(cpy_r_levels);
    CPy_DECREF(cpy_r_r316);
    if (unlikely(cpy_r_r317 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 552, CPyStatic_modulefinder___globals);
        goto CPyL299;
    }
    cpy_r_index = cpy_r_r317;
    cpy_r_r318 = CPyList_GetItem(cpy_r_near_misses, cpy_r_index);
    CPy_DECREF(cpy_r_near_misses);
    CPyTagged_DECREF(cpy_r_index);
    if (unlikely(cpy_r_r318 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 553, CPyStatic_modulefinder___globals);
        goto CPyL229;
    }
    PyObject *__tmp3597;
    if (unlikely(!(PyTuple_Check(cpy_r_r318) && PyTuple_GET_SIZE(cpy_r_r318) == 2))) {
        __tmp3597 = NULL;
        goto __LL3598;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r318, 0))))
        __tmp3597 = PyTuple_GET_ITEM(cpy_r_r318, 0);
    else {
        __tmp3597 = NULL;
    }
    if (__tmp3597 == NULL) goto __LL3598;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r318, 1))))
        __tmp3597 = PyTuple_GET_ITEM(cpy_r_r318, 1);
    else {
        __tmp3597 = NULL;
    }
    if (__tmp3597 == NULL) goto __LL3598;
    __tmp3597 = cpy_r_r318;
__LL3598: ;
    if (unlikely(__tmp3597 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r318); cpy_r_r319 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3599 = PyTuple_GET_ITEM(cpy_r_r318, 0);
        CPy_INCREF(__tmp3599);
        PyObject *__tmp3600;
        if (likely(PyUnicode_Check(__tmp3599)))
            __tmp3600 = __tmp3599;
        else {
            CPy_TypeError("str", __tmp3599); 
            __tmp3600 = NULL;
        }
        cpy_r_r319.f0 = __tmp3600;
        PyObject *__tmp3601 = PyTuple_GET_ITEM(cpy_r_r318, 1);
        CPy_INCREF(__tmp3601);
        PyObject *__tmp3602;
        if (likely(PyUnicode_Check(__tmp3601)))
            __tmp3602 = __tmp3601;
        else {
            CPy_TypeError("str", __tmp3601); 
            __tmp3602 = NULL;
        }
        cpy_r_r319.f1 = __tmp3602;
    }
    CPy_DECREF(cpy_r_r318);
    if (unlikely(cpy_r_r319.f0 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 553, CPyStatic_modulefinder___globals);
        goto CPyL229;
    }
    cpy_r_r320 = cpy_r_r319.f0;
    CPy_INCREF(cpy_r_r320);
    CPy_DECREF(cpy_r_r319.f0);
    CPy_DECREF(cpy_r_r319.f1);
    return cpy_r_r320;
CPyL210: ;
    cpy_r_r321 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_ns_ancestors;
    CPy_INCREF(cpy_r_r321);
    cpy_r_r322 = CPyDict_GetWithNone(cpy_r_r321, cpy_r_id);
    CPy_DECREF(cpy_r_r321);
    if (unlikely(cpy_r_r322 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 559, CPyStatic_modulefinder___globals);
        goto CPyL229;
    }
    if (PyUnicode_Check(cpy_r_r322))
        cpy_r_r323 = cpy_r_r322;
    else {
        cpy_r_r323 = NULL;
    }
    if (cpy_r_r323 != NULL) goto __LL3603;
    if (cpy_r_r322 == Py_None)
        cpy_r_r323 = cpy_r_r322;
    else {
        cpy_r_r323 = NULL;
    }
    if (cpy_r_r323 != NULL) goto __LL3603;
    CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 559, CPyStatic_modulefinder___globals, "str or None", cpy_r_r322);
    goto CPyL229;
__LL3603: ;
    cpy_r_ancestor = cpy_r_r323;
    cpy_r_r324 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r325 = cpy_r_ancestor != cpy_r_r324;
    if (!cpy_r_r325) goto CPyL300;
    if (likely(cpy_r_ancestor != Py_None))
        cpy_r_r326 = cpy_r_ancestor;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_find_module", 561, CPyStatic_modulefinder___globals, "str", cpy_r_ancestor);
        goto CPyL229;
    }
    return cpy_r_r326;
CPyL215: ;
    if (!cpy_r_need_installed_stubs) goto CPyL220;
    cpy_r_r327 = CPyStatic_modulefinder___ModuleNotFoundReason___APPROVED_STUBS_NOT_INSTALLED;
    if (likely(cpy_r_r327 != NULL)) goto CPyL219;
    PyErr_SetString(PyExc_NameError, "value for final name \"APPROVED_STUBS_NOT_INSTALLED\" was not set");
    cpy_r_r328 = 0;
    if (unlikely(!cpy_r_r328)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 564, CPyStatic_modulefinder___globals);
        goto CPyL229;
    }
    CPy_Unreachable();
CPyL219: ;
    CPy_INCREF(cpy_r_r327);
    return cpy_r_r327;
CPyL220: ;
    if (!cpy_r_found_possible_third_party_missing_type_hints) goto CPyL225;
    cpy_r_r329 = CPyStatic_modulefinder___ModuleNotFoundReason___FOUND_WITHOUT_TYPE_HINTS;
    if (likely(cpy_r_r329 != NULL)) goto CPyL224;
    PyErr_SetString(PyExc_NameError, "value for final name \"FOUND_WITHOUT_TYPE_HINTS\" was not set");
    cpy_r_r330 = 0;
    if (unlikely(!cpy_r_r330)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 566, CPyStatic_modulefinder___globals);
        goto CPyL229;
    }
    CPy_Unreachable();
CPyL224: ;
    CPy_INCREF(cpy_r_r329);
    return cpy_r_r329;
CPyL225: ;
    cpy_r_r331 = CPyStatic_modulefinder___ModuleNotFoundReason___NOT_FOUND;
    if (likely(cpy_r_r331 != NULL)) goto CPyL228;
    PyErr_SetString(PyExc_NameError, "value for final name \"NOT_FOUND\" was not set");
    cpy_r_r332 = 0;
    if (unlikely(!cpy_r_r332)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 568, CPyStatic_modulefinder___globals);
        goto CPyL229;
    }
    CPy_Unreachable();
CPyL228: ;
    CPy_INCREF(cpy_r_r331);
    return cpy_r_r331;
CPyL229: ;
    cpy_r_r333 = NULL;
    return cpy_r_r333;
CPyL230: ;
    CPy_DecRef(cpy_r_fscache);
    goto CPyL229;
CPyL231: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_p);
    goto CPyL229;
CPyL232: ;
    CPy_DECREF(cpy_r_fscache);
    goto CPyL8;
CPyL233: ;
    CPy_DECREF(cpy_r_p);
    goto CPyL10;
CPyL234: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    goto CPyL229;
CPyL235: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_r19);
    goto CPyL229;
CPyL236: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    goto CPyL229;
CPyL237: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    goto CPyL229;
CPyL238: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    goto CPyL229;
CPyL239: ;
    CPy_DECREF(cpy_r_dir_chain);
    CPy_DECREF(cpy_r_r27);
    goto CPyL93;
CPyL240: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    goto CPyL229;
CPyL241: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_pkg_dir);
    goto CPyL229;
CPyL242: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_pkg_dir);
    CPy_DecRef(cpy_r_stub_name);
    goto CPyL229;
CPyL243: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_pkg_dir);
    CPy_DecRef(cpy_r_stub_name);
    CPy_DecRef(cpy_r_stub_dir);
    goto CPyL229;
CPyL244: ;
    CPy_DECREF(cpy_r_stub_name);
    CPy_DECREF(cpy_r_stub_dir);
    goto CPyL74;
CPyL245: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_pkg_dir);
    CPy_DecRef(cpy_r_stub_name);
    CPy_DecRef(cpy_r_stub_typed_file);
    goto CPyL229;
CPyL246: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_pkg_dir);
    CPy_DecRef(cpy_r_stub_typed_file);
    CPy_DecRef(cpy_r_r60);
    goto CPyL229;
CPyL247: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_pkg_dir);
    CPy_DecRef(cpy_r_stub_typed_file);
    goto CPyL229;
CPyL248: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_pkg_dir);
    CPy_DecRef(cpy_r_stub_typed_file);
    CPy_DecRef(cpy_r_r68);
    goto CPyL229;
CPyL249: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_pkg_dir);
    CPy_DecRef(cpy_r_stub_typed_file);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r73);
    goto CPyL229;
CPyL250: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_pkg_dir);
    CPy_DecRef(cpy_r_stub_typed_file);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r74);
    goto CPyL229;
CPyL251: ;
    CPy_DECREF(cpy_r_r77);
    goto CPyL50;
CPyL252: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_pkg_dir);
    CPy_DecRef(cpy_r_stub_typed_file);
    CPy_DecRef(cpy_r_r73);
    goto CPyL229;
CPyL253: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_pkg_dir);
    CPy_DecRef(cpy_r_stub_typed_file);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r78);
    goto CPyL229;
CPyL254: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_pkg_dir);
    CPy_DecRef(cpy_r_stub_typed_file);
    CPy_DecRef(cpy_r_path);
    goto CPyL229;
CPyL255: ;
    CPy_DECREF(cpy_r_stub_typed_file);
    CPy_DECREF(cpy_r_path);
    goto CPyL74;
CPyL256: ;
    CPy_DECREF(cpy_r_stub_typed_file);
    goto CPyL73;
CPyL257: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_pkg_dir);
    CPy_DecRef(cpy_r_path);
    goto CPyL229;
CPyL258: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_pkg_dir);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r85);
    goto CPyL229;
CPyL259: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_non_stub_match);
    goto CPyL229;
CPyL260: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_non_stub_match);
    CPy_DecRef(cpy_r_r128);
    goto CPyL78;
CPyL261: ;
    CPy_DECREF(cpy_r_non_stub_match);
    goto CPyL81;
CPyL262: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_dir_chain);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r132);
    goto CPyL84;
CPyL263: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    goto CPyL229;
CPyL264: ;
    CPy_DECREF(cpy_r_r152);
    goto CPyL97;
CPyL265: ;
    CPy_DECREF(cpy_r_r156);
    goto CPyL98;
CPyL266: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_r159);
    goto CPyL229;
CPyL267: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_third_party_inline_dirs);
    CPy_DecRef(cpy_r_third_party_stubs_dirs);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    goto CPyL229;
CPyL268: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    goto CPyL229;
CPyL269: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_r179);
    goto CPyL229;
CPyL270: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_seplast);
    goto CPyL229;
CPyL271: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_seplast);
    CPy_DecRef(cpy_r_sepinit);
    goto CPyL229;
CPyL272: ;
    CPy_DECREF(cpy_r_components);
    CPy_DECREF(cpy_r_candidate_base_dirs);
    CPy_DECREF(cpy_r_seplast);
    CPy_DECREF(cpy_r_sepinit);
    goto CPyL192;
CPyL273: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_seplast);
    CPy_DecRef(cpy_r_sepinit);
    CPy_DecRef(cpy_r_near_misses);
    goto CPyL229;
CPyL274: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_seplast);
    CPy_DecRef(cpy_r_sepinit);
    CPy_DecRef(cpy_r_near_misses);
    CPy_DecRef(cpy_r_base_dir);
    goto CPyL229;
CPyL275: ;
    CPyTagged_DECREF(cpy_r_r203);
    CPyTagged_DECREF(cpy_r_r204);
    goto CPyL141;
CPyL276: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_seplast);
    CPy_DecRef(cpy_r_sepinit);
    CPy_DecRef(cpy_r_near_misses);
    CPy_DecRef(cpy_r_base_path);
    CPy_DecRef(cpy_r_dir_prefix);
    CPyTagged_DecRef(cpy_r_r203);
    CPyTagged_DecRef(cpy_r_r204);
    goto CPyL229;
CPyL277: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_seplast);
    CPy_DecRef(cpy_r_sepinit);
    CPy_DecRef(cpy_r_near_misses);
    CPy_DecRef(cpy_r_base_path);
    CPyTagged_DecRef(cpy_r_r203);
    CPyTagged_DecRef(cpy_r_r204);
    goto CPyL229;
CPyL278: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_seplast);
    CPy_DecRef(cpy_r_sepinit);
    CPy_DecRef(cpy_r_near_misses);
    CPy_DecRef(cpy_r_base_path);
    CPy_DecRef(cpy_r_dir_prefix);
    goto CPyL142;
CPyL279: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_seplast);
    CPy_DecRef(cpy_r_sepinit);
    CPy_DecRef(cpy_r_near_misses);
    CPy_DecRef(cpy_r_base_path);
    CPy_DecRef(cpy_r_dir_prefix);
    goto CPyL229;
CPyL280: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_seplast);
    CPy_DecRef(cpy_r_sepinit);
    CPy_DecRef(cpy_r_near_misses);
    CPy_DecRef(cpy_r_base_path);
    CPy_DecRef(cpy_r_dir_prefix);
    CPy_DecRef(cpy_r_extension);
    goto CPyL229;
CPyL281: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_seplast);
    CPy_DecRef(cpy_r_sepinit);
    CPy_DecRef(cpy_r_near_misses);
    CPy_DecRef(cpy_r_base_path);
    CPy_DecRef(cpy_r_dir_prefix);
    CPy_DecRef(cpy_r_extension);
    goto CPyL229;
CPyL282: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_seplast);
    CPy_DecRef(cpy_r_sepinit);
    CPy_DecRef(cpy_r_near_misses);
    CPy_DecRef(cpy_r_base_path);
    CPy_DecRef(cpy_r_dir_prefix);
    goto CPyL229;
CPyL283: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_seplast);
    CPy_DecRef(cpy_r_sepinit);
    CPy_DecRef(cpy_r_near_misses);
    CPy_DecRef(cpy_r_base_path);
    CPy_DecRef(cpy_r_dir_prefix);
    CPy_DecRef(cpy_r_path_stubs);
    goto CPyL229;
CPyL284: ;
    CPy_DECREF(cpy_r_path_stubs);
    goto CPyL154;
CPyL285: ;
    CPy_DECREF(cpy_r_path);
    goto CPyL159;
CPyL286: ;
    CPy_DECREF(cpy_r_fscache);
    CPy_DECREF(cpy_r_components);
    CPy_DECREF(cpy_r_candidate_base_dirs);
    CPy_DECREF(cpy_r_seplast);
    CPy_DECREF(cpy_r_sepinit);
    CPy_DECREF(cpy_r_near_misses);
    CPy_DECREF(cpy_r_base_path);
    CPy_DECREF(cpy_r_dir_prefix);
    goto CPyL158;
CPyL287: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_seplast);
    CPy_DecRef(cpy_r_sepinit);
    CPy_DecRef(cpy_r_near_misses);
    CPy_DecRef(cpy_r_base_path);
    CPy_DecRef(cpy_r_dir_prefix);
    CPy_DecRef(cpy_r_path_stubs);
    goto CPyL229;
CPyL288: ;
    CPy_DECREF(cpy_r_path_stubs);
    goto CPyL166;
CPyL289: ;
    CPy_DECREF(cpy_r_fscache);
    CPy_DECREF(cpy_r_components);
    CPy_DECREF(cpy_r_candidate_base_dirs);
    CPy_DECREF(cpy_r_seplast);
    CPy_DECREF(cpy_r_sepinit);
    CPy_DECREF(cpy_r_near_misses);
    CPy_DECREF(cpy_r_base_path);
    CPy_DECREF(cpy_r_dir_prefix);
    goto CPyL165;
CPyL290: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_candidate_base_dirs);
    CPy_DecRef(cpy_r_seplast);
    CPy_DecRef(cpy_r_sepinit);
    CPy_DecRef(cpy_r_near_misses);
    CPy_DecRef(cpy_r_base_path);
    CPy_DecRef(cpy_r_dir_prefix);
    goto CPyL177;
CPyL291: ;
    CPy_DECREF(cpy_r_base_path);
    CPy_DECREF(cpy_r_dir_prefix);
    goto CPyL191;
CPyL292: ;
    CPy_DECREF(cpy_r_path);
    goto CPyL190;
CPyL293: ;
    CPy_DECREF(cpy_r_fscache);
    CPy_DECREF(cpy_r_components);
    CPy_DECREF(cpy_r_candidate_base_dirs);
    CPy_DECREF(cpy_r_seplast);
    CPy_DECREF(cpy_r_sepinit);
    CPy_DECREF(cpy_r_near_misses);
    CPy_DECREF(cpy_r_base_path);
    CPy_DECREF(cpy_r_dir_prefix);
    goto CPyL189;
CPyL294: ;
    CPy_DECREF(cpy_r_fscache);
    CPy_DECREF(cpy_r_near_misses);
    goto CPyL210;
CPyL295: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_near_misses);
    goto CPyL229;
CPyL296: ;
    CPy_DECREF(cpy_r_fscache);
    goto CPyL203;
CPyL297: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_near_misses);
    CPy_DecRef(cpy_r_r295);
    goto CPyL229;
CPyL298: ;
    CPy_DecRef(cpy_r_near_misses);
    CPy_DecRef(cpy_r_levels);
    goto CPyL229;
CPyL299: ;
    CPy_DecRef(cpy_r_near_misses);
    goto CPyL229;
CPyL300: ;
    CPy_DECREF(cpy_r_ancestor);
    goto CPyL215;
}

PyObject *CPyPy_modulefinder___FindModuleCache____find_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"id", "use_typeshed", 0};
    static CPyArg_Parser parser = {"OO:_find_module", kwlist, 0};
    PyObject *obj_id;
    PyObject *obj_use_typeshed;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_id, &obj_use_typeshed)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___FindModuleCache))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.FindModuleCache", obj_self); 
        goto fail;
    }
    PyObject *arg_id;
    if (likely(PyUnicode_Check(obj_id)))
        arg_id = obj_id;
    else {
        CPy_TypeError("str", obj_id); 
        goto fail;
    }
    char arg_use_typeshed;
    if (unlikely(!PyBool_Check(obj_use_typeshed))) {
        CPy_TypeError("bool", obj_use_typeshed); goto fail;
    } else
        arg_use_typeshed = obj_use_typeshed == Py_True;
    PyObject *retval = CPyDef_modulefinder___FindModuleCache____find_module(arg_self, arg_id, arg_use_typeshed);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "_find_module", 379, CPyStatic_modulefinder___globals);
    return NULL;
}

char CPyDef_modulefinder___FindModuleCache____is_compatible_stub_package(PyObject *cpy_r_self, PyObject *cpy_r_stub_dir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_metadata;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_metadata_fnam;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
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
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    cpy_r_r0 = NULL;
    cpy_r_metadata = cpy_r_r0;
    cpy_r_r1 = CPyStatics[3838]; /* 'METADATA.toml' */
    cpy_r_r2 = CPyModule_os;
    cpy_r_r3 = CPyStatics[142]; /* 'path' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 576, CPyStatic_modulefinder___globals);
        goto CPyL47;
    }
    cpy_r_r5 = CPyStatics[175]; /* 'join' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 576, CPyStatic_modulefinder___globals);
        goto CPyL47;
    }
    PyObject *cpy_r_r7[2] = {cpy_r_stub_dir, cpy_r_r1};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 2, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 576, CPyStatic_modulefinder___globals);
        goto CPyL47;
    }
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 576, CPyStatic_modulefinder___globals, "str", cpy_r_r9);
        goto CPyL47;
    }
    cpy_r_metadata_fnam = cpy_r_r10;
    cpy_r_r11 = CPyModule_os;
    cpy_r_r12 = CPyStatics[142]; /* 'path' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 577, CPyStatic_modulefinder___globals);
        goto CPyL48;
    }
    cpy_r_r14 = CPyStatics[176]; /* 'isfile' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 577, CPyStatic_modulefinder___globals);
        goto CPyL48;
    }
    PyObject *cpy_r_r16[1] = {cpy_r_metadata_fnam};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 1, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 577, CPyStatic_modulefinder___globals);
        goto CPyL48;
    }
    if (unlikely(!PyBool_Check(cpy_r_r18))) {
        CPy_TypeError("bool", cpy_r_r18); cpy_r_r19 = 2;
    } else
        cpy_r_r19 = cpy_r_r18 == Py_True;
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 577, CPyStatic_modulefinder___globals);
        goto CPyL48;
    }
    if (cpy_r_r19) {
        goto CPyL10;
    } else
        goto CPyL49;
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r20 = CPyStatics[198]; /* 'rb' */
    cpy_r_r21 = CPyModule_builtins;
    cpy_r_r22 = CPyStatics[199]; /* 'open' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 579, CPyStatic_modulefinder___globals);
        goto CPyL48;
    }
    PyObject *cpy_r_r24[2] = {cpy_r_metadata_fnam, cpy_r_r20};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 2, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 579, CPyStatic_modulefinder___globals);
        goto CPyL48;
    }
    CPy_DECREF(cpy_r_metadata_fnam);
    cpy_r_r27 = PyObject_Type(cpy_r_r26);
    cpy_r_r28 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 579, CPyStatic_modulefinder___globals);
        goto CPyL50;
    }
    cpy_r_r30 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r30);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 579, CPyStatic_modulefinder___globals);
        goto CPyL51;
    }
    PyObject *cpy_r_r32[1] = {cpy_r_r26};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r31, cpy_r_r33, 1, 0);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 579, CPyStatic_modulefinder___globals);
        goto CPyL51;
    }
    cpy_r_r35 = 1;
    cpy_r_f = cpy_r_r34;
    cpy_r_r36 = CPyModule_tomllib;
    cpy_r_r37 = CPyStatics[263]; /* 'load' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 580, CPyStatic_modulefinder___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r39[1] = {cpy_r_f};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r40, 1, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 580, CPyStatic_modulefinder___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_f);
    if (likely(PyDict_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeError("dict", cpy_r_r41); 
        cpy_r_r42 = NULL;
    }
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 580, CPyStatic_modulefinder___globals);
        goto CPyL20;
    } else
        goto CPyL53;
CPyL19: ;
    cpy_r_metadata = cpy_r_r42;
    goto CPyL28;
CPyL20: ;
    cpy_r_r43 = CPy_CatchError();
    cpy_r_r35 = 0;
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
    PyObject *cpy_r_r48[4] = {cpy_r_r26, cpy_r_r45, cpy_r_r46, cpy_r_r47};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = _PyObject_Vectorcall(cpy_r_r29, cpy_r_r49, 4, 0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 579, CPyStatic_modulefinder___globals);
        goto CPyL54;
    }
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    cpy_r_r51 = PyObject_IsTrue(cpy_r_r50);
    CPy_DecRef(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 579, CPyStatic_modulefinder___globals);
        goto CPyL26;
    }
    cpy_r_r53 = cpy_r_r51;
    if (cpy_r_r53) goto CPyL25;
    CPy_Reraise();
    if (!0) {
        goto CPyL26;
    } else
        goto CPyL55;
CPyL24: ;
    CPy_Unreachable();
CPyL25: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL28;
CPyL26: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    cpy_r_r54 = CPy_KeepPropagating();
    if (!cpy_r_r54) {
        goto CPyL29;
    } else
        goto CPyL56;
CPyL27: ;
    CPy_Unreachable();
CPyL28: ;
    tuple_T3OOO __tmp3604 = { NULL, NULL, NULL };
    cpy_r_r55 = __tmp3604;
    cpy_r_r56 = cpy_r_r55;
    goto CPyL30;
CPyL29: ;
    cpy_r_r57 = CPy_CatchError();
    cpy_r_r56 = cpy_r_r57;
CPyL30: ;
    if (!cpy_r_r35) goto CPyL57;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r59[4] = {cpy_r_r26, cpy_r_r58, cpy_r_r58, cpy_r_r58};
    cpy_r_r60 = (PyObject **)&cpy_r_r59;
    cpy_r_r61 = _PyObject_Vectorcall(cpy_r_r29, cpy_r_r60, 4, 0);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 579, CPyStatic_modulefinder___globals);
        goto CPyL58;
    } else
        goto CPyL59;
CPyL32: ;
    CPy_DECREF(cpy_r_r26);
CPyL33: ;
    if (cpy_r_r56.f0 == NULL) {
        goto CPyL40;
    } else
        goto CPyL60;
CPyL34: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL36;
    } else
        goto CPyL61;
CPyL35: ;
    CPy_Unreachable();
CPyL36: ;
    if (cpy_r_r56.f0 == NULL) goto CPyL38;
    CPy_RestoreExcInfo(cpy_r_r56);
    CPy_XDECREF(cpy_r_r56.f0);
    CPy_XDECREF(cpy_r_r56.f1);
    CPy_XDECREF(cpy_r_r56.f2);
CPyL38: ;
    cpy_r_r62 = CPy_KeepPropagating();
    if (!cpy_r_r62) goto CPyL46;
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r63 = CPyStatics[3839]; /* 'python3' */
    cpy_r_r64 = 1 ? Py_True : Py_False;
    if (cpy_r_metadata != NULL) goto CPyL43;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"metadata\" referenced before assignment");
    cpy_r_r65 = 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 581, CPyStatic_modulefinder___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r66 = CPyDict_Get(cpy_r_metadata, cpy_r_r63, cpy_r_r64);
    CPy_XDECREF(cpy_r_metadata);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 581, CPyStatic_modulefinder___globals);
        goto CPyL46;
    }
    cpy_r_r67 = PyObject_IsTrue(cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 581, CPyStatic_modulefinder___globals);
        goto CPyL46;
    }
    cpy_r_r69 = cpy_r_r67;
    return cpy_r_r69;
CPyL46: ;
    cpy_r_r70 = 2;
    return cpy_r_r70;
CPyL47: ;
    CPy_XDecRef(cpy_r_metadata);
    goto CPyL46;
CPyL48: ;
    CPy_XDecRef(cpy_r_metadata);
    CPy_DecRef(cpy_r_metadata_fnam);
    goto CPyL46;
CPyL49: ;
    CPy_XDECREF(cpy_r_metadata);
    CPy_DECREF(cpy_r_metadata_fnam);
    goto CPyL9;
CPyL50: ;
    CPy_XDecRef(cpy_r_metadata);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    goto CPyL46;
CPyL51: ;
    CPy_XDecRef(cpy_r_metadata);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r29);
    goto CPyL46;
CPyL52: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL20;
CPyL53: ;
    CPy_XDECREF(cpy_r_metadata);
    goto CPyL19;
CPyL54: ;
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    goto CPyL26;
CPyL55: ;
    CPy_XDecRef(cpy_r_metadata);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL24;
CPyL56: ;
    CPy_XDecRef(cpy_r_metadata);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r29);
    goto CPyL27;
CPyL57: ;
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r29);
    goto CPyL33;
CPyL58: ;
    CPy_XDecRef(cpy_r_metadata);
    CPy_DecRef(cpy_r_r26);
    goto CPyL36;
CPyL59: ;
    CPy_DECREF(cpy_r_r61);
    goto CPyL32;
CPyL60: ;
    CPy_XDECREF(cpy_r_metadata);
    goto CPyL34;
CPyL61: ;
    CPy_XDECREF(cpy_r_r56.f0);
    CPy_XDECREF(cpy_r_r56.f1);
    CPy_XDECREF(cpy_r_r56.f2);
    goto CPyL35;
}

PyObject *CPyPy_modulefinder___FindModuleCache____is_compatible_stub_package(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stub_dir", 0};
    static CPyArg_Parser parser = {"O:_is_compatible_stub_package", kwlist, 0};
    PyObject *obj_stub_dir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stub_dir)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___FindModuleCache))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.FindModuleCache", obj_self); 
        goto fail;
    }
    PyObject *arg_stub_dir;
    if (likely(PyUnicode_Check(obj_stub_dir)))
        arg_stub_dir = obj_stub_dir;
    else {
        CPy_TypeError("str", obj_stub_dir); 
        goto fail;
    }
    char retval = CPyDef_modulefinder___FindModuleCache____is_compatible_stub_package(arg_self, arg_stub_dir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "_is_compatible_stub_package", 570, CPyStatic_modulefinder___globals);
    return NULL;
}

PyObject *CPyDef_modulefinder___FindModuleCache___find_modules_recursive(PyObject *cpy_r_self, PyObject *cpy_r_module) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_module_path;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_sources;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_package_path;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_seen;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_names;
    CPyTagged cpy_r_r45;
    CPyPtr cpy_r_r46;
    int64_t cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_subpath;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyTagged cpy_r_r96;
    int64_t cpy_r_r97;
    char cpy_r_r98;
    int64_t cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject **cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject **cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    int32_t cpy_r_r139;
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
    PyObject **cpy_r_r152;
    PyObject *cpy_r_r153;
    tuple_T2OO cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_stem;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_suffix;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    char cpy_r_r161;
    char cpy_r_r162;
    char cpy_r_r163;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    char cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    int32_t cpy_r_r169;
    char cpy_r_r170;
    char cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    char cpy_r_r174;
    int32_t cpy_r_r175;
    char cpy_r_r176;
    char cpy_r_r177;
    int32_t cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    CPyTagged cpy_r_r185;
    PyObject *cpy_r_r186;
    cpy_r_r0 = 2;
    cpy_r_r1 = CPyDef_modulefinder___FindModuleCache___find_module(cpy_r_self, cpy_r_module, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 584, CPyStatic_modulefinder___globals);
        goto CPyL108;
    }
    cpy_r_module_path = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_modulefinder___ModuleNotFoundReason;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_module_path)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL109;
    } else
        goto CPyL4;
CPyL2: ;
    cpy_r_r6 = PyList_New(0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 586, CPyStatic_modulefinder___globals);
        goto CPyL108;
    }
    return cpy_r_r6;
CPyL4: ;
    CPy_INCREF(cpy_r_module_path);
    if (likely(PyUnicode_Check(cpy_r_module_path)))
        cpy_r_r7 = cpy_r_module_path;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 587, CPyStatic_modulefinder___globals, "str", cpy_r_module_path);
        goto CPyL110;
    }
    cpy_r_r8 = Py_None;
    cpy_r_r9 = NULL;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_modulefinder___BuildSource(cpy_r_r7, cpy_r_module, cpy_r_r8, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 587, CPyStatic_modulefinder___globals);
        goto CPyL110;
    }
    cpy_r_r12 = PyList_New(1);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 587, CPyStatic_modulefinder___globals);
        goto CPyL111;
    }
    cpy_r_r13 = (CPyPtr)&((PyListObject *)cpy_r_r12)->ob_item;
    cpy_r_r14 = *(CPyPtr *)cpy_r_r13;
    *(PyObject * *)cpy_r_r14 = cpy_r_r11;
    cpy_r_sources = cpy_r_r12;
    cpy_r_r15 = Py_None;
    CPy_INCREF(cpy_r_r15);
    cpy_r_package_path = cpy_r_r15;
    CPy_INCREF(cpy_r_module_path);
    if (likely(PyUnicode_Check(cpy_r_module_path)))
        cpy_r_r16 = cpy_r_module_path;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 590, CPyStatic_modulefinder___globals, "str", cpy_r_module_path);
        goto CPyL112;
    }
    cpy_r_r17 = CPyDef_modulefinder___is_init_file(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 590, CPyStatic_modulefinder___globals);
        goto CPyL112;
    }
    if (cpy_r_r17) {
        goto CPyL113;
    } else
        goto CPyL16;
CPyL10: ;
    if (likely(PyUnicode_Check(cpy_r_module_path)))
        cpy_r_r18 = cpy_r_module_path;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 591, CPyStatic_modulefinder___globals, "str", cpy_r_module_path);
        goto CPyL114;
    }
    cpy_r_r19 = CPyModule_os;
    cpy_r_r20 = CPyStatics[142]; /* 'path' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 591, CPyStatic_modulefinder___globals);
        goto CPyL115;
    }
    cpy_r_r22 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 591, CPyStatic_modulefinder___globals);
        goto CPyL115;
    }
    PyObject *cpy_r_r24[1] = {cpy_r_r18};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 1, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 591, CPyStatic_modulefinder___globals);
        goto CPyL115;
    }
    CPy_DECREF(cpy_r_r18);
    if (likely(PyUnicode_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 591, CPyStatic_modulefinder___globals, "str", cpy_r_r26);
        goto CPyL114;
    }
    cpy_r_package_path = cpy_r_r27;
    goto CPyL21;
CPyL16: ;
    cpy_r_r28 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r28);
    CPy_INCREF(cpy_r_module_path);
    if (likely(PyUnicode_Check(cpy_r_module_path)))
        cpy_r_r29 = cpy_r_module_path;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 592, CPyStatic_modulefinder___globals, "str", cpy_r_module_path);
        goto CPyL116;
    }
    cpy_r_r30 = CPY_GET_METHOD(cpy_r_r28, CPyType_fscache___FileSystemCache, 10, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r28, cpy_r_r29); /* isdir */
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 592, CPyStatic_modulefinder___globals);
        goto CPyL112;
    }
    if (cpy_r_r30) {
        goto CPyL117;
    } else
        goto CPyL118;
CPyL19: ;
    if (likely(PyUnicode_Check(cpy_r_module_path)))
        cpy_r_r31 = cpy_r_module_path;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 593, CPyStatic_modulefinder___globals, "str", cpy_r_module_path);
        goto CPyL114;
    }
    cpy_r_package_path = cpy_r_r31;
CPyL21: ;
    cpy_r_r32 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r33 = cpy_r_package_path == cpy_r_r32;
    if (cpy_r_r33) {
        goto CPyL119;
    } else
        goto CPyL23;
CPyL22: ;
    return cpy_r_sources;
CPyL23: ;
    cpy_r_r34 = PySet_New(NULL);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 602, CPyStatic_modulefinder___globals);
        goto CPyL120;
    }
    cpy_r_seen = cpy_r_r34;
    cpy_r_r35 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r35);
    CPy_INCREF(cpy_r_package_path);
    if (likely(cpy_r_package_path != Py_None))
        cpy_r_r36 = cpy_r_package_path;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 603, CPyStatic_modulefinder___globals, "str", cpy_r_package_path);
        goto CPyL121;
    }
    cpy_r_r37 = CPY_GET_METHOD(cpy_r_r35, CPyType_fscache___FileSystemCache, 6, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r35, cpy_r_r36); /* listdir */
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 603, CPyStatic_modulefinder___globals);
        goto CPyL122;
    }
    cpy_r_r38 = CPyModule_builtins;
    cpy_r_r39 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 603, CPyStatic_modulefinder___globals);
        goto CPyL123;
    }
    PyObject *cpy_r_r41[1] = {cpy_r_r37};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r40, cpy_r_r42, 1, 0);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 603, CPyStatic_modulefinder___globals);
        goto CPyL123;
    }
    CPy_DECREF(cpy_r_r37);
    if (likely(PyList_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 603, CPyStatic_modulefinder___globals, "list", cpy_r_r43);
        goto CPyL122;
    }
    cpy_r_names = cpy_r_r44;
    cpy_r_r45 = 0;
CPyL30: ;
    cpy_r_r46 = (CPyPtr)&((PyVarObject *)cpy_r_names)->ob_size;
    cpy_r_r47 = *(int64_t *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 << 1;
    cpy_r_r49 = (Py_ssize_t)cpy_r_r45 < (Py_ssize_t)cpy_r_r48;
    if (!cpy_r_r49) goto CPyL124;
    cpy_r_r50 = CPyList_GetItemUnsafe(cpy_r_names, cpy_r_r45);
    if (likely(PyUnicode_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 604, CPyStatic_modulefinder___globals, "str", cpy_r_r50);
        goto CPyL125;
    }
    cpy_r_name = cpy_r_r51;
    cpy_r_r52 = CPyStatics[2540]; /* '__pycache__' */
    cpy_r_r53 = PyUnicode_Compare(cpy_r_name, cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 == -1;
    if (!cpy_r_r54) goto CPyL35;
    cpy_r_r55 = PyErr_Occurred();
    cpy_r_r56 = cpy_r_r55 != NULL;
    if (!cpy_r_r56) goto CPyL35;
    cpy_r_r57 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", -1, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
CPyL35: ;
    cpy_r_r58 = cpy_r_r53 == 0;
    if (!cpy_r_r58) goto CPyL37;
    cpy_r_r59 = cpy_r_r58;
    goto CPyL41;
CPyL37: ;
    cpy_r_r60 = CPyStatics[2541]; /* 'site-packages' */
    cpy_r_r61 = PyUnicode_Compare(cpy_r_name, cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 == -1;
    if (!cpy_r_r62) goto CPyL40;
    cpy_r_r63 = PyErr_Occurred();
    cpy_r_r64 = cpy_r_r63 != NULL;
    if (!cpy_r_r64) goto CPyL40;
    cpy_r_r65 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", -1, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
CPyL40: ;
    cpy_r_r66 = cpy_r_r61 == 0;
    cpy_r_r59 = cpy_r_r66;
CPyL41: ;
    if (!cpy_r_r59) goto CPyL43;
    cpy_r_r67 = cpy_r_r59;
    goto CPyL47;
CPyL43: ;
    cpy_r_r68 = CPyStatics[2542]; /* 'node_modules' */
    cpy_r_r69 = PyUnicode_Compare(cpy_r_name, cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 == -1;
    if (!cpy_r_r70) goto CPyL46;
    cpy_r_r71 = PyErr_Occurred();
    cpy_r_r72 = cpy_r_r71 != NULL;
    if (!cpy_r_r72) goto CPyL46;
    cpy_r_r73 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", -1, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
CPyL46: ;
    cpy_r_r74 = cpy_r_r69 == 0;
    cpy_r_r67 = cpy_r_r74;
CPyL47: ;
    if (cpy_r_r67) goto CPyL127;
    cpy_r_r75 = CPyStatics[224]; /* '.' */
    cpy_r_r76 = CPyStr_Startswith(cpy_r_name, cpy_r_r75);
    if (cpy_r_r76) goto CPyL127;
    CPy_INCREF(cpy_r_package_path);
    if (likely(cpy_r_package_path != Py_None))
        cpy_r_r77 = cpy_r_package_path;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 608, CPyStatic_modulefinder___globals, "str", cpy_r_package_path);
        goto CPyL126;
    }
    cpy_r_r78 = CPyModule_os;
    cpy_r_r79 = CPyStatics[142]; /* 'path' */
    cpy_r_r80 = CPyObject_GetAttr(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 608, CPyStatic_modulefinder___globals);
        goto CPyL128;
    }
    cpy_r_r81 = CPyStatics[175]; /* 'join' */
    cpy_r_r82 = CPyObject_GetAttr(cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 608, CPyStatic_modulefinder___globals);
        goto CPyL128;
    }
    PyObject *cpy_r_r83[2] = {cpy_r_r77, cpy_r_name};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = _PyObject_Vectorcall(cpy_r_r82, cpy_r_r84, 2, 0);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 608, CPyStatic_modulefinder___globals);
        goto CPyL128;
    }
    CPy_DECREF(cpy_r_r77);
    if (likely(PyUnicode_Check(cpy_r_r85)))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 608, CPyStatic_modulefinder___globals, "str", cpy_r_r85);
        goto CPyL126;
    }
    cpy_r_subpath = cpy_r_r86;
    cpy_r_r87 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r87);
    cpy_r_r88 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r89 = cpy_r_r87 != cpy_r_r88;
    CPy_DECREF(cpy_r_r87);
    if (!cpy_r_r89) goto CPyL62;
    cpy_r_r90 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    if (likely(cpy_r_r90 != Py_None))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 611, CPyStatic_modulefinder___globals, "mypy.options.Options", cpy_r_r90);
        goto CPyL129;
    }
    cpy_r_r92 = ((mypy___options___OptionsObject *)cpy_r_r91)->_exclude;
    CPy_INCREF(cpy_r_r92);
    cpy_r_r93 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r93);
    cpy_r_r94 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    if (likely(cpy_r_r94 != Py_None))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 611, CPyStatic_modulefinder___globals, "mypy.options.Options", cpy_r_r94);
        goto CPyL130;
    }
    cpy_r_r96 = ((mypy___options___OptionsObject *)cpy_r_r95)->_verbosity;
    cpy_r_r97 = cpy_r_r96 & 1;
    cpy_r_r98 = cpy_r_r97 == 0;
    cpy_r_r99 = 4 & 1;
    cpy_r_r100 = cpy_r_r99 == 0;
    cpy_r_r101 = cpy_r_r98 & cpy_r_r100;
    if (!cpy_r_r101) goto CPyL59;
    cpy_r_r102 = (Py_ssize_t)cpy_r_r96 >= (Py_ssize_t)4;
    cpy_r_r103 = cpy_r_r102;
    goto CPyL60;
CPyL59: ;
    cpy_r_r104 = CPyTagged_IsLt_(cpy_r_r96, 4);
    cpy_r_r105 = cpy_r_r104 ^ 1;
    cpy_r_r103 = cpy_r_r105;
CPyL60: ;
    cpy_r_r106 = CPyDef_modulefinder___matches_exclude(cpy_r_subpath, cpy_r_r92, cpy_r_r93, cpy_r_r103);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r106 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 610, CPyStatic_modulefinder___globals);
        goto CPyL129;
    }
    if (cpy_r_r106) goto CPyL131;
CPyL62: ;
    cpy_r_r107 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r107);
    cpy_r_r108 = CPY_GET_METHOD(cpy_r_r107, CPyType_fscache___FileSystemCache, 10, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r107, cpy_r_subpath); /* isdir */
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 615, CPyStatic_modulefinder___globals);
        goto CPyL129;
    }
    if (!cpy_r_r108) goto CPyL132;
    cpy_r_r109 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r109);
    cpy_r_r110 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r111 = cpy_r_r109 != cpy_r_r110;
    CPy_DECREF(cpy_r_r109);
    if (!cpy_r_r111) goto CPyL67;
    cpy_r_r112 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_options;
    if (likely(cpy_r_r112 != Py_None))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 617, CPyStatic_modulefinder___globals, "mypy.options.Options", cpy_r_r112);
        goto CPyL129;
    }
    cpy_r_r114 = ((mypy___options___OptionsObject *)cpy_r_r113)->_namespace_packages;
    if (cpy_r_r114) goto CPyL133;
CPyL67: ;
    cpy_r_r115 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r115);
    cpy_r_r116 = CPyStatics[287]; /* '__init__.py' */
    cpy_r_r117 = CPyModule_os;
    cpy_r_r118 = CPyStatics[142]; /* 'path' */
    cpy_r_r119 = CPyObject_GetAttr(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 618, CPyStatic_modulefinder___globals);
        goto CPyL134;
    }
    cpy_r_r120 = CPyStatics[175]; /* 'join' */
    cpy_r_r121 = CPyObject_GetAttr(cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 618, CPyStatic_modulefinder___globals);
        goto CPyL134;
    }
    PyObject *cpy_r_r122[2] = {cpy_r_subpath, cpy_r_r116};
    cpy_r_r123 = (PyObject **)&cpy_r_r122;
    cpy_r_r124 = _PyObject_Vectorcall(cpy_r_r121, cpy_r_r123, 2, 0);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 618, CPyStatic_modulefinder___globals);
        goto CPyL134;
    }
    if (likely(PyUnicode_Check(cpy_r_r124)))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 618, CPyStatic_modulefinder___globals, "str", cpy_r_r124);
        goto CPyL134;
    }
    cpy_r_r126 = CPY_GET_METHOD(cpy_r_r115, CPyType_fscache___FileSystemCache, 7, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r115, cpy_r_r125); /* isfile */
    CPy_DECREF(cpy_r_r125);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r126 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 618, CPyStatic_modulefinder___globals);
        goto CPyL129;
    }
    if (cpy_r_r126) goto CPyL133;
    cpy_r_r127 = ((mypy___modulefinder___FindModuleCacheObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r127);
    cpy_r_r128 = CPyStatics[3840]; /* '__init__.pyi' */
    cpy_r_r129 = CPyModule_os;
    cpy_r_r130 = CPyStatics[142]; /* 'path' */
    cpy_r_r131 = CPyObject_GetAttr(cpy_r_r129, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 619, CPyStatic_modulefinder___globals);
        goto CPyL135;
    }
    cpy_r_r132 = CPyStatics[175]; /* 'join' */
    cpy_r_r133 = CPyObject_GetAttr(cpy_r_r131, cpy_r_r132);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 619, CPyStatic_modulefinder___globals);
        goto CPyL135;
    }
    PyObject *cpy_r_r134[2] = {cpy_r_subpath, cpy_r_r128};
    cpy_r_r135 = (PyObject **)&cpy_r_r134;
    cpy_r_r136 = _PyObject_Vectorcall(cpy_r_r133, cpy_r_r135, 2, 0);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 619, CPyStatic_modulefinder___globals);
        goto CPyL135;
    }
    CPy_DECREF(cpy_r_subpath);
    if (likely(PyUnicode_Check(cpy_r_r136)))
        cpy_r_r137 = cpy_r_r136;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "find_modules_recursive", 619, CPyStatic_modulefinder___globals, "str", cpy_r_r136);
        goto CPyL136;
    }
    cpy_r_r138 = CPY_GET_METHOD(cpy_r_r127, CPyType_fscache___FileSystemCache, 7, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r127, cpy_r_r137); /* isfile */
    CPy_DECREF(cpy_r_r137);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r138 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 619, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    if (!cpy_r_r138) goto CPyL127;
CPyL79: ;
    cpy_r_r139 = PySet_Add(cpy_r_seen, cpy_r_name);
    cpy_r_r140 = cpy_r_r139 >= 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 621, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r141 = CPyStatics[224]; /* '.' */
    cpy_r_r142 = PyUnicode_Concat(cpy_r_module, cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 622, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r143 = PyUnicode_Concat(cpy_r_r142, cpy_r_name);
    CPy_DECREF(cpy_r_r142);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 622, CPyStatic_modulefinder___globals);
        goto CPyL125;
    }
    cpy_r_r144 = CPyDef_modulefinder___FindModuleCache___find_modules_recursive(cpy_r_self, cpy_r_r143);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 622, CPyStatic_modulefinder___globals);
        goto CPyL125;
    }
    cpy_r_r145 = CPyList_Extend(cpy_r_sources, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 622, CPyStatic_modulefinder___globals);
        goto CPyL125;
    } else
        goto CPyL137;
CPyL84: ;
    cpy_r_r146 = CPyModule_os;
    cpy_r_r147 = CPyStatics[142]; /* 'path' */
    cpy_r_r148 = CPyObject_GetAttr(cpy_r_r146, cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 624, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r149 = CPyStatics[370]; /* 'splitext' */
    cpy_r_r150 = CPyObject_GetAttr(cpy_r_r148, cpy_r_r149);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 624, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    PyObject *cpy_r_r151[1] = {cpy_r_name};
    cpy_r_r152 = (PyObject **)&cpy_r_r151;
    cpy_r_r153 = _PyObject_Vectorcall(cpy_r_r150, cpy_r_r152, 1, 0);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 624, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPy_DECREF(cpy_r_name);
    PyObject *__tmp3605;
    if (unlikely(!(PyTuple_Check(cpy_r_r153) && PyTuple_GET_SIZE(cpy_r_r153) == 2))) {
        __tmp3605 = NULL;
        goto __LL3606;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r153, 0))))
        __tmp3605 = PyTuple_GET_ITEM(cpy_r_r153, 0);
    else {
        __tmp3605 = NULL;
    }
    if (__tmp3605 == NULL) goto __LL3606;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r153, 1))))
        __tmp3605 = PyTuple_GET_ITEM(cpy_r_r153, 1);
    else {
        __tmp3605 = NULL;
    }
    if (__tmp3605 == NULL) goto __LL3606;
    __tmp3605 = cpy_r_r153;
__LL3606: ;
    if (unlikely(__tmp3605 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r153); cpy_r_r154 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3607 = PyTuple_GET_ITEM(cpy_r_r153, 0);
        CPy_INCREF(__tmp3607);
        PyObject *__tmp3608;
        if (likely(PyUnicode_Check(__tmp3607)))
            __tmp3608 = __tmp3607;
        else {
            CPy_TypeError("str", __tmp3607); 
            __tmp3608 = NULL;
        }
        cpy_r_r154.f0 = __tmp3608;
        PyObject *__tmp3609 = PyTuple_GET_ITEM(cpy_r_r153, 1);
        CPy_INCREF(__tmp3609);
        PyObject *__tmp3610;
        if (likely(PyUnicode_Check(__tmp3609)))
            __tmp3610 = __tmp3609;
        else {
            CPy_TypeError("str", __tmp3609); 
            __tmp3610 = NULL;
        }
        cpy_r_r154.f1 = __tmp3610;
    }
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r154.f0 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 624, CPyStatic_modulefinder___globals);
        goto CPyL125;
    }
    cpy_r_r155 = cpy_r_r154.f0;
    CPy_INCREF(cpy_r_r155);
    cpy_r_stem = cpy_r_r155;
    cpy_r_r156 = cpy_r_r154.f1;
    CPy_INCREF(cpy_r_r156);
    CPy_DECREF(cpy_r_r154.f0);
    CPy_DECREF(cpy_r_r154.f1);
    cpy_r_suffix = cpy_r_r156;
    cpy_r_r157 = CPyStatics[288]; /* '__init__' */
    cpy_r_r158 = PyUnicode_Compare(cpy_r_stem, cpy_r_r157);
    cpy_r_r159 = cpy_r_r158 == -1;
    if (!cpy_r_r159) goto CPyL91;
    cpy_r_r160 = PyErr_Occurred();
    cpy_r_r161 = cpy_r_r160 != NULL;
    if (!cpy_r_r161) goto CPyL91;
    cpy_r_r162 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 625, CPyStatic_modulefinder___globals);
        goto CPyL138;
    }
CPyL91: ;
    cpy_r_r163 = cpy_r_r158 == 0;
    if (cpy_r_r163) goto CPyL139;
    cpy_r_r164 = PySet_Contains(cpy_r_seen, cpy_r_stem);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 627, CPyStatic_modulefinder___globals);
        goto CPyL138;
    }
    cpy_r_r166 = cpy_r_r164;
    cpy_r_r167 = cpy_r_r166 ^ 1;
    if (!cpy_r_r167) goto CPyL139;
    cpy_r_r168 = CPyStatics[224]; /* '.' */
    cpy_r_r169 = PySequence_Contains(cpy_r_stem, cpy_r_r168);
    cpy_r_r170 = cpy_r_r169 >= 0;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 627, CPyStatic_modulefinder___globals);
        goto CPyL138;
    }
    cpy_r_r171 = cpy_r_r169;
    cpy_r_r172 = cpy_r_r171 ^ 1;
    if (!cpy_r_r172) goto CPyL139;
    cpy_r_r173 = CPyStatic_modulefinder___PYTHON_EXTENSIONS;
    if (unlikely(cpy_r_r173 == NULL)) {
        goto CPyL140;
    } else
        goto CPyL99;
CPyL97: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYTHON_EXTENSIONS\" was not set");
    cpy_r_r174 = 0;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 627, CPyStatic_modulefinder___globals);
        goto CPyL108;
    }
    CPy_Unreachable();
CPyL99: ;
    cpy_r_r175 = PySequence_Contains(cpy_r_r173, cpy_r_suffix);
    CPy_DECREF(cpy_r_suffix);
    cpy_r_r176 = cpy_r_r175 >= 0;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 627, CPyStatic_modulefinder___globals);
        goto CPyL141;
    }
    cpy_r_r177 = cpy_r_r175;
    if (!cpy_r_r177) goto CPyL142;
    cpy_r_r178 = PySet_Add(cpy_r_seen, cpy_r_stem);
    cpy_r_r179 = cpy_r_r178 >= 0;
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 630, CPyStatic_modulefinder___globals);
        goto CPyL141;
    }
    cpy_r_r180 = CPyStatics[224]; /* '.' */
    cpy_r_r181 = PyUnicode_Concat(cpy_r_module, cpy_r_r180);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 631, CPyStatic_modulefinder___globals);
        goto CPyL141;
    }
    cpy_r_r182 = PyUnicode_Concat(cpy_r_r181, cpy_r_stem);
    CPy_DECREF(cpy_r_r181);
    CPy_DECREF(cpy_r_stem);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 631, CPyStatic_modulefinder___globals);
        goto CPyL125;
    }
    cpy_r_r183 = CPyDef_modulefinder___FindModuleCache___find_modules_recursive(cpy_r_self, cpy_r_r182);
    CPy_DECREF(cpy_r_r182);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 631, CPyStatic_modulefinder___globals);
        goto CPyL125;
    }
    cpy_r_r184 = CPyList_Extend(cpy_r_sources, cpy_r_r183);
    CPy_DECREF(cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 631, CPyStatic_modulefinder___globals);
        goto CPyL125;
    } else
        goto CPyL143;
CPyL106: ;
    cpy_r_r185 = cpy_r_r45 + 2;
    cpy_r_r45 = cpy_r_r185;
    goto CPyL30;
CPyL107: ;
    return cpy_r_sources;
CPyL108: ;
    cpy_r_r186 = NULL;
    return cpy_r_r186;
CPyL109: ;
    CPy_DECREF(cpy_r_module_path);
    goto CPyL2;
CPyL110: ;
    CPy_DecRef(cpy_r_module_path);
    goto CPyL108;
CPyL111: ;
    CPy_DecRef(cpy_r_module_path);
    CPy_DecRef(cpy_r_r11);
    goto CPyL108;
CPyL112: ;
    CPy_DecRef(cpy_r_module_path);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    goto CPyL108;
CPyL113: ;
    CPy_DECREF(cpy_r_package_path);
    goto CPyL10;
CPyL114: ;
    CPy_DecRef(cpy_r_sources);
    goto CPyL108;
CPyL115: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r18);
    goto CPyL108;
CPyL116: ;
    CPy_DecRef(cpy_r_module_path);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_r28);
    goto CPyL108;
CPyL117: ;
    CPy_DECREF(cpy_r_package_path);
    goto CPyL19;
CPyL118: ;
    CPy_DECREF(cpy_r_module_path);
    goto CPyL21;
CPyL119: ;
    CPy_DECREF(cpy_r_package_path);
    goto CPyL22;
CPyL120: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    goto CPyL108;
CPyL121: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_r35);
    goto CPyL108;
CPyL122: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_seen);
    goto CPyL108;
CPyL123: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_r37);
    goto CPyL108;
CPyL124: ;
    CPy_DECREF(cpy_r_package_path);
    CPy_DECREF(cpy_r_seen);
    CPy_DECREF(cpy_r_names);
    goto CPyL107;
CPyL125: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    goto CPyL108;
CPyL126: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_name);
    goto CPyL108;
CPyL127: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL106;
CPyL128: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r77);
    goto CPyL108;
CPyL129: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_subpath);
    goto CPyL108;
CPyL130: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_subpath);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r93);
    goto CPyL108;
CPyL131: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_subpath);
    goto CPyL106;
CPyL132: ;
    CPy_DECREF(cpy_r_subpath);
    goto CPyL84;
CPyL133: ;
    CPy_DECREF(cpy_r_subpath);
    goto CPyL79;
CPyL134: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_subpath);
    CPy_DecRef(cpy_r_r115);
    goto CPyL108;
CPyL135: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_subpath);
    CPy_DecRef(cpy_r_r127);
    goto CPyL108;
CPyL136: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r127);
    goto CPyL108;
CPyL137: ;
    CPy_DECREF(cpy_r_r145);
    goto CPyL106;
CPyL138: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_stem);
    CPy_DecRef(cpy_r_suffix);
    goto CPyL108;
CPyL139: ;
    CPy_DECREF(cpy_r_stem);
    CPy_DECREF(cpy_r_suffix);
    goto CPyL106;
CPyL140: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_stem);
    CPy_DecRef(cpy_r_suffix);
    goto CPyL97;
CPyL141: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_package_path);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_stem);
    goto CPyL108;
CPyL142: ;
    CPy_DECREF(cpy_r_stem);
    goto CPyL106;
CPyL143: ;
    CPy_DECREF(cpy_r_r184);
    goto CPyL106;
}

PyObject *CPyPy_modulefinder___FindModuleCache___find_modules_recursive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", 0};
    static CPyArg_Parser parser = {"O:find_modules_recursive", kwlist, 0};
    PyObject *obj_module;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_module)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_modulefinder___FindModuleCache))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.modulefinder.FindModuleCache", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *retval = CPyDef_modulefinder___FindModuleCache___find_modules_recursive(arg_self, arg_module);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "find_modules_recursive", 583, CPyStatic_modulefinder___globals);
    return NULL;
}

char CPyDef_modulefinder___matches_exclude(PyObject *cpy_r_subpath, PyObject *cpy_r_excludes, PyObject *cpy_r_fscache, char cpy_r_verbose) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_subpath_str;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_exclude;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
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
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyTagged cpy_r_r52;
    char cpy_r_r53;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_excludes)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    if (cpy_r_r3) goto CPyL2;
    return 0;
CPyL2: ;
    cpy_r_r4 = CPyModule_os;
    cpy_r_r5 = CPyStatics[142]; /* 'path' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 640, CPyStatic_modulefinder___globals);
        goto CPyL29;
    }
    cpy_r_r7 = CPyStatics[152]; /* 'relpath' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 640, CPyStatic_modulefinder___globals);
        goto CPyL29;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_subpath};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 640, CPyStatic_modulefinder___globals);
        goto CPyL29;
    }
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "matches_exclude", 640, CPyStatic_modulefinder___globals, "str", cpy_r_r11);
        goto CPyL29;
    }
    cpy_r_r13 = CPyModule_os;
    cpy_r_r14 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 640, CPyStatic_modulefinder___globals);
        goto CPyL30;
    }
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "matches_exclude", 640, CPyStatic_modulefinder___globals, "str", cpy_r_r15);
        goto CPyL30;
    }
    cpy_r_r17 = CPyStatics[1594]; /* '/' */
    cpy_r_r18 = PyUnicode_Replace(cpy_r_r12, cpy_r_r16, cpy_r_r17, -1);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 640, CPyStatic_modulefinder___globals);
        goto CPyL29;
    }
    cpy_r_subpath_str = cpy_r_r18;
    cpy_r_r19 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 10, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_fscache, cpy_r_subpath); /* isdir */
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 641, CPyStatic_modulefinder___globals);
        goto CPyL31;
    }
    if (!cpy_r_r19) goto CPyL13;
    cpy_r_r20 = CPyStatics[1594]; /* '/' */
    cpy_r_r21 = CPyStr_Append(cpy_r_subpath_str, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 642, CPyStatic_modulefinder___globals);
        goto CPyL29;
    }
    cpy_r_subpath_str = cpy_r_r21;
CPyL13: ;
    cpy_r_r22 = 0;
CPyL14: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_excludes)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL32;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_excludes, cpy_r_r22);
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "matches_exclude", 643, CPyStatic_modulefinder___globals, "str", cpy_r_r27);
        goto CPyL31;
    }
    cpy_r_exclude = cpy_r_r28;
    cpy_r_r29 = CPyModule_re;
    cpy_r_r30 = CPyStatics[180]; /* 'search' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 644, CPyStatic_modulefinder___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r32[2] = {cpy_r_exclude, cpy_r_subpath_str};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r31, cpy_r_r33, 2, 0);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 644, CPyStatic_modulefinder___globals);
        goto CPyL33;
    }
    cpy_r_r35 = PyObject_IsTrue(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 644, CPyStatic_modulefinder___globals);
        goto CPyL33;
    }
    cpy_r_r37 = cpy_r_r35;
    if (!cpy_r_r37) goto CPyL34;
    if (!cpy_r_verbose) goto CPyL35;
    cpy_r_r38 = CPyStatics[3841]; /* 'TRACE: Excluding ' */
    cpy_r_r39 = CPyStatics[3842]; /* ' (matches pattern ' */
    cpy_r_r40 = CPyStatics[72]; /* ')' */
    cpy_r_r41 = CPyStr_Build(5, cpy_r_r38, cpy_r_subpath_str, cpy_r_r39, cpy_r_exclude, cpy_r_r40);
    CPy_DECREF(cpy_r_subpath_str);
    CPy_DECREF(cpy_r_exclude);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 647, CPyStatic_modulefinder___globals);
        goto CPyL29;
    }
    cpy_r_r42 = CPyModule_sys;
    cpy_r_r43 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r44 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 647, CPyStatic_modulefinder___globals);
        goto CPyL36;
    }
    cpy_r_r45 = CPyModule_builtins;
    cpy_r_r46 = CPyStatics[190]; /* 'print' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 646, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r48[2] = {cpy_r_r41, cpy_r_r44};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r51 = _PyObject_Vectorcall(cpy_r_r47, cpy_r_r49, 1, cpy_r_r50);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 646, CPyStatic_modulefinder___globals);
        goto CPyL37;
    } else
        goto CPyL38;
CPyL25: ;
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r44);
CPyL26: ;
    return 1;
CPyL27: ;
    cpy_r_r52 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r52;
    goto CPyL14;
CPyL28: ;
    return 0;
CPyL29: ;
    cpy_r_r53 = 2;
    return cpy_r_r53;
CPyL30: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL29;
CPyL31: ;
    CPy_DecRef(cpy_r_subpath_str);
    goto CPyL29;
CPyL32: ;
    CPy_DECREF(cpy_r_subpath_str);
    goto CPyL28;
CPyL33: ;
    CPy_DecRef(cpy_r_subpath_str);
    CPy_DecRef(cpy_r_exclude);
    goto CPyL29;
CPyL34: ;
    CPy_DECREF(cpy_r_exclude);
    goto CPyL27;
CPyL35: ;
    CPy_DECREF(cpy_r_subpath_str);
    CPy_DECREF(cpy_r_exclude);
    goto CPyL26;
CPyL36: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL29;
CPyL37: ;
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r44);
    goto CPyL29;
CPyL38: ;
    CPy_DECREF(cpy_r_r51);
    goto CPyL25;
}

PyObject *CPyPy_modulefinder___matches_exclude(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"subpath", "excludes", "fscache", "verbose", 0};
    static CPyArg_Parser parser = {"OOOO:matches_exclude", kwlist, 0};
    PyObject *obj_subpath;
    PyObject *obj_excludes;
    PyObject *obj_fscache;
    PyObject *obj_verbose;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_subpath, &obj_excludes, &obj_fscache, &obj_verbose)) {
        return NULL;
    }
    PyObject *arg_subpath;
    if (likely(PyUnicode_Check(obj_subpath)))
        arg_subpath = obj_subpath;
    else {
        CPy_TypeError("str", obj_subpath); 
        goto fail;
    }
    PyObject *arg_excludes;
    if (likely(PyList_Check(obj_excludes)))
        arg_excludes = obj_excludes;
    else {
        CPy_TypeError("list", obj_excludes); 
        goto fail;
    }
    PyObject *arg_fscache;
    if (likely(PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache)))
        arg_fscache = obj_fscache;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_fscache); 
        goto fail;
    }
    char arg_verbose;
    if (unlikely(!PyBool_Check(obj_verbose))) {
        CPy_TypeError("bool", obj_verbose); goto fail;
    } else
        arg_verbose = obj_verbose == Py_True;
    char retval = CPyDef_modulefinder___matches_exclude(arg_subpath, arg_excludes, arg_fscache, arg_verbose);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "matches_exclude", 635, CPyStatic_modulefinder___globals);
    return NULL;
}

char CPyDef_modulefinder___is_init_file(PyObject *cpy_r_path) {
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
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[142]; /* 'path' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "is_init_file", 654, CPyStatic_modulefinder___globals);
        goto CPyL18;
    }
    cpy_r_r3 = CPyStatics[172]; /* 'basename' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "is_init_file", 654, CPyStatic_modulefinder___globals);
        goto CPyL18;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_path};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "is_init_file", 654, CPyStatic_modulefinder___globals);
        goto CPyL18;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "is_init_file", 654, CPyStatic_modulefinder___globals, "str", cpy_r_r7);
        goto CPyL18;
    }
    cpy_r_r9 = CPyStatics[287]; /* '__init__.py' */
    cpy_r_r10 = PyUnicode_Compare(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r11 = cpy_r_r10 == -1;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = PyErr_Occurred();
    cpy_r_r13 = cpy_r_r12 != NULL;
    if (!cpy_r_r13) goto CPyL7;
    cpy_r_r14 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/modulefinder.py", "is_init_file", -1, CPyStatic_modulefinder___globals);
        goto CPyL18;
    }
CPyL7: ;
    cpy_r_r15 = cpy_r_r10 == 0;
    if (!cpy_r_r15) goto CPyL9;
    cpy_r_r16 = cpy_r_r15;
    goto CPyL17;
CPyL9: ;
    cpy_r_r17 = CPyModule_os;
    cpy_r_r18 = CPyStatics[142]; /* 'path' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "is_init_file", 654, CPyStatic_modulefinder___globals);
        goto CPyL18;
    }
    cpy_r_r20 = CPyStatics[172]; /* 'basename' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "is_init_file", 654, CPyStatic_modulefinder___globals);
        goto CPyL18;
    }
    PyObject *cpy_r_r22[1] = {cpy_r_path};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 1, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "is_init_file", 654, CPyStatic_modulefinder___globals);
        goto CPyL18;
    }
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "is_init_file", 654, CPyStatic_modulefinder___globals, "str", cpy_r_r24);
        goto CPyL18;
    }
    cpy_r_r26 = CPyStatics[3840]; /* '__init__.pyi' */
    cpy_r_r27 = PyUnicode_Compare(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r28 = cpy_r_r27 == -1;
    if (!cpy_r_r28) goto CPyL16;
    cpy_r_r29 = PyErr_Occurred();
    cpy_r_r30 = cpy_r_r29 != NULL;
    if (!cpy_r_r30) goto CPyL16;
    cpy_r_r31 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/modulefinder.py", "is_init_file", -1, CPyStatic_modulefinder___globals);
        goto CPyL18;
    }
CPyL16: ;
    cpy_r_r32 = cpy_r_r27 == 0;
    cpy_r_r16 = cpy_r_r32;
CPyL17: ;
    return cpy_r_r16;
CPyL18: ;
    cpy_r_r33 = 2;
    return cpy_r_r33;
}

PyObject *CPyPy_modulefinder___is_init_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:is_init_file", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    char retval = CPyDef_modulefinder___is_init_file(arg_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "is_init_file", 653, CPyStatic_modulefinder___globals);
    return NULL;
}

char CPyDef_modulefinder___verify_module(PyObject *cpy_r_fscache, PyObject *cpy_r_id, PyObject *cpy_r_path, PyObject *cpy_r_prefix) {
    char cpy_r_r0;
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
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r17;
    char cpy_r_r18;
    int64_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_extension;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    cpy_r_r0 = CPyDef_modulefinder___is_init_file(cpy_r_path);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 659, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    if (!cpy_r_r0) goto CPyL38;
    cpy_r_r1 = CPyModule_os;
    cpy_r_r2 = CPyStatics[142]; /* 'path' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 660, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    cpy_r_r4 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 660, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r6[1] = {cpy_r_path};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 1, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 660, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "verify_module", 660, CPyStatic_modulefinder___globals, "str", cpy_r_r8);
        goto CPyL37;
    }
    cpy_r_path = cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = CPyStatics[224]; /* '.' */
    cpy_r_r11 = CPyStatics[226]; /* 'count' */
    PyObject *cpy_r_r12[2] = {cpy_r_id, cpy_r_r10};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 661, CPyStatic_modulefinder___globals);
        goto CPyL39;
    }
    if (likely(PyLong_Check(cpy_r_r14)))
        cpy_r_r15 = CPyTagged_FromObject(cpy_r_r14);
    else {
        CPy_TypeError("int", cpy_r_r14); cpy_r_r15 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 661, CPyStatic_modulefinder___globals);
        goto CPyL39;
    }
    cpy_r_r16 = 0;
    CPyTagged_INCREF(cpy_r_r16);
    cpy_r_i = cpy_r_r16;
    CPyTagged_DECREF(cpy_r_i);
CPyL10: ;
    cpy_r_r17 = cpy_r_r16 & 1;
    cpy_r_r18 = cpy_r_r17 == 0;
    cpy_r_r19 = cpy_r_r15 & 1;
    cpy_r_r20 = cpy_r_r19 == 0;
    cpy_r_r21 = cpy_r_r18 & cpy_r_r20;
    if (!cpy_r_r21) goto CPyL12;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r16 < (Py_ssize_t)cpy_r_r15;
    cpy_r_r23 = cpy_r_r22;
    goto CPyL13;
CPyL12: ;
    cpy_r_r24 = CPyTagged_IsLt_(cpy_r_r16, cpy_r_r15);
    cpy_r_r23 = cpy_r_r24;
CPyL13: ;
    if (!cpy_r_r23) goto CPyL40;
    cpy_r_r25 = CPyModule_os;
    cpy_r_r26 = CPyStatics[142]; /* 'path' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 662, CPyStatic_modulefinder___globals);
        goto CPyL41;
    }
    cpy_r_r28 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 662, CPyStatic_modulefinder___globals);
        goto CPyL41;
    }
    PyObject *cpy_r_r30[1] = {cpy_r_path};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_r29, cpy_r_r31, 1, 0);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 662, CPyStatic_modulefinder___globals);
        goto CPyL41;
    }
    CPy_DECREF(cpy_r_path);
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "verify_module", 662, CPyStatic_modulefinder___globals, "str", cpy_r_r32);
        goto CPyL42;
    }
    cpy_r_path = cpy_r_r33;
    cpy_r_r34 = 0;
    cpy_r_r35 = CPyStatic_modulefinder___PYTHON_EXTENSIONS;
    if (unlikely(cpy_r_r35 == NULL)) {
        goto CPyL43;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYTHON_EXTENSIONS\" was not set");
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 665, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r37 = 0;
CPyL22: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r40;
    if (!cpy_r_r41) goto CPyL33;
    cpy_r_r42 = CPyList_GetItemUnsafe(cpy_r_r35, cpy_r_r37);
    if (likely(PyUnicode_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "verify_module", 663, CPyStatic_modulefinder___globals, "str", cpy_r_r42);
        goto CPyL41;
    }
    cpy_r_extension = cpy_r_r43;
    cpy_r_r44 = CPyStatics[288]; /* '__init__' */
    cpy_r_r45 = CPyStr_Build(2, cpy_r_r44, cpy_r_extension);
    CPy_DECREF(cpy_r_extension);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 664, CPyStatic_modulefinder___globals);
        goto CPyL41;
    }
    cpy_r_r46 = CPyModule_os;
    cpy_r_r47 = CPyStatics[142]; /* 'path' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 664, CPyStatic_modulefinder___globals);
        goto CPyL44;
    }
    cpy_r_r49 = CPyStatics[175]; /* 'join' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 664, CPyStatic_modulefinder___globals);
        goto CPyL44;
    }
    PyObject *cpy_r_r51[2] = {cpy_r_path, cpy_r_r45};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = _PyObject_Vectorcall(cpy_r_r50, cpy_r_r52, 2, 0);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 664, CPyStatic_modulefinder___globals);
        goto CPyL44;
    }
    CPy_DECREF(cpy_r_r45);
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "verify_module", 664, CPyStatic_modulefinder___globals, "str", cpy_r_r53);
        goto CPyL41;
    }
    cpy_r_r55 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 8, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_fscache, cpy_r_r54, cpy_r_prefix); /* isfile_case */
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 664, CPyStatic_modulefinder___globals);
        goto CPyL41;
    }
    if (!cpy_r_r55) goto CPyL32;
    cpy_r_r34 = 1;
    goto CPyL33;
CPyL32: ;
    cpy_r_r56 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r56;
    goto CPyL22;
CPyL33: ;
    if (cpy_r_r34) {
        goto CPyL35;
    } else
        goto CPyL45;
CPyL34: ;
    return 0;
CPyL35: ;
    cpy_r_r57 = CPyTagged_Add(cpy_r_r16, 2);
    CPyTagged_DECREF(cpy_r_r16);
    CPyTagged_INCREF(cpy_r_r57);
    cpy_r_r16 = cpy_r_r57;
    cpy_r_i = cpy_r_r57;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL10;
CPyL36: ;
    return 1;
CPyL37: ;
    cpy_r_r58 = 2;
    return cpy_r_r58;
CPyL38: ;
    CPy_INCREF(cpy_r_path);
    goto CPyL7;
CPyL39: ;
    CPy_DecRef(cpy_r_path);
    goto CPyL37;
CPyL40: ;
    CPy_DECREF(cpy_r_path);
    CPyTagged_DECREF(cpy_r_r15);
    CPyTagged_DECREF(cpy_r_r16);
    goto CPyL36;
CPyL41: ;
    CPy_DecRef(cpy_r_path);
    CPyTagged_DecRef(cpy_r_r15);
    CPyTagged_DecRef(cpy_r_r16);
    goto CPyL37;
CPyL42: ;
    CPyTagged_DecRef(cpy_r_r15);
    CPyTagged_DecRef(cpy_r_r16);
    goto CPyL37;
CPyL43: ;
    CPy_DecRef(cpy_r_path);
    CPyTagged_DecRef(cpy_r_r15);
    CPyTagged_DecRef(cpy_r_r16);
    goto CPyL19;
CPyL44: ;
    CPy_DecRef(cpy_r_path);
    CPyTagged_DecRef(cpy_r_r15);
    CPyTagged_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r45);
    goto CPyL37;
CPyL45: ;
    CPy_DECREF(cpy_r_path);
    CPyTagged_DECREF(cpy_r_r15);
    CPyTagged_DECREF(cpy_r_r16);
    goto CPyL34;
}

PyObject *CPyPy_modulefinder___verify_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fscache", "id", "path", "prefix", 0};
    static CPyArg_Parser parser = {"OOOO:verify_module", kwlist, 0};
    PyObject *obj_fscache;
    PyObject *obj_id;
    PyObject *obj_path;
    PyObject *obj_prefix;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fscache, &obj_id, &obj_path, &obj_prefix)) {
        return NULL;
    }
    PyObject *arg_fscache;
    if (likely(PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache)))
        arg_fscache = obj_fscache;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_fscache); 
        goto fail;
    }
    PyObject *arg_id;
    if (likely(PyUnicode_Check(obj_id)))
        arg_id = obj_id;
    else {
        CPy_TypeError("str", obj_id); 
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
    char retval = CPyDef_modulefinder___verify_module(arg_fscache, arg_id, arg_path, arg_prefix);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "verify_module", 657, CPyStatic_modulefinder___globals);
    return NULL;
}

CPyTagged CPyDef_modulefinder___highest_init_level(PyObject *cpy_r_fscache, PyObject *cpy_r_id, PyObject *cpy_r_path, PyObject *cpy_r_prefix) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_level;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r17;
    char cpy_r_r18;
    int64_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_extension;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyTagged cpy_r_r57;
    CPyTagged cpy_r_r58;
    CPyTagged cpy_r_r59;
    cpy_r_r0 = CPyDef_modulefinder___is_init_file(cpy_r_path);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 673, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    if (!cpy_r_r0) goto CPyL38;
    cpy_r_r1 = CPyModule_os;
    cpy_r_r2 = CPyStatics[142]; /* 'path' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 674, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    cpy_r_r4 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 674, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r6[1] = {cpy_r_path};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 1, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 674, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "highest_init_level", 674, CPyStatic_modulefinder___globals, "str", cpy_r_r8);
        goto CPyL37;
    }
    cpy_r_path = cpy_r_r9;
CPyL7: ;
    cpy_r_level = 0;
    cpy_r_r10 = CPyStatics[224]; /* '.' */
    cpy_r_r11 = CPyStatics[226]; /* 'count' */
    PyObject *cpy_r_r12[2] = {cpy_r_id, cpy_r_r10};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 676, CPyStatic_modulefinder___globals);
        goto CPyL39;
    }
    if (likely(PyLong_Check(cpy_r_r14)))
        cpy_r_r15 = CPyTagged_FromObject(cpy_r_r14);
    else {
        CPy_TypeError("int", cpy_r_r14); cpy_r_r15 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 676, CPyStatic_modulefinder___globals);
        goto CPyL39;
    }
    cpy_r_r16 = 0;
    CPyTagged_INCREF(cpy_r_r16);
    cpy_r_i = cpy_r_r16;
CPyL10: ;
    cpy_r_r17 = cpy_r_r16 & 1;
    cpy_r_r18 = cpy_r_r17 == 0;
    cpy_r_r19 = cpy_r_r15 & 1;
    cpy_r_r20 = cpy_r_r19 == 0;
    cpy_r_r21 = cpy_r_r18 & cpy_r_r20;
    if (!cpy_r_r21) goto CPyL12;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r16 < (Py_ssize_t)cpy_r_r15;
    cpy_r_r23 = cpy_r_r22;
    goto CPyL13;
CPyL12: ;
    cpy_r_r24 = CPyTagged_IsLt_(cpy_r_r16, cpy_r_r15);
    cpy_r_r23 = cpy_r_r24;
CPyL13: ;
    if (!cpy_r_r23) goto CPyL40;
    cpy_r_r25 = CPyModule_os;
    cpy_r_r26 = CPyStatics[142]; /* 'path' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 677, CPyStatic_modulefinder___globals);
        goto CPyL41;
    }
    cpy_r_r28 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 677, CPyStatic_modulefinder___globals);
        goto CPyL41;
    }
    PyObject *cpy_r_r30[1] = {cpy_r_path};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_r29, cpy_r_r31, 1, 0);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 677, CPyStatic_modulefinder___globals);
        goto CPyL41;
    }
    CPy_DECREF(cpy_r_path);
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "highest_init_level", 677, CPyStatic_modulefinder___globals, "str", cpy_r_r32);
        goto CPyL42;
    }
    cpy_r_path = cpy_r_r33;
    cpy_r_r34 = 0;
    cpy_r_r35 = CPyStatic_modulefinder___PYTHON_EXTENSIONS;
    if (unlikely(cpy_r_r35 == NULL)) {
        goto CPyL43;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYTHON_EXTENSIONS\" was not set");
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 680, CPyStatic_modulefinder___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r37 = 0;
CPyL22: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r40;
    if (!cpy_r_r41) goto CPyL33;
    cpy_r_r42 = CPyList_GetItemUnsafe(cpy_r_r35, cpy_r_r37);
    if (likely(PyUnicode_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "highest_init_level", 678, CPyStatic_modulefinder___globals, "str", cpy_r_r42);
        goto CPyL41;
    }
    cpy_r_extension = cpy_r_r43;
    cpy_r_r44 = CPyStatics[288]; /* '__init__' */
    cpy_r_r45 = CPyStr_Build(2, cpy_r_r44, cpy_r_extension);
    CPy_DECREF(cpy_r_extension);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 679, CPyStatic_modulefinder___globals);
        goto CPyL41;
    }
    cpy_r_r46 = CPyModule_os;
    cpy_r_r47 = CPyStatics[142]; /* 'path' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 679, CPyStatic_modulefinder___globals);
        goto CPyL44;
    }
    cpy_r_r49 = CPyStatics[175]; /* 'join' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 679, CPyStatic_modulefinder___globals);
        goto CPyL44;
    }
    PyObject *cpy_r_r51[2] = {cpy_r_path, cpy_r_r45};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = _PyObject_Vectorcall(cpy_r_r50, cpy_r_r52, 2, 0);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 679, CPyStatic_modulefinder___globals);
        goto CPyL44;
    }
    CPy_DECREF(cpy_r_r45);
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "highest_init_level", 679, CPyStatic_modulefinder___globals, "str", cpy_r_r53);
        goto CPyL41;
    }
    cpy_r_r55 = CPY_GET_METHOD(cpy_r_fscache, CPyType_fscache___FileSystemCache, 8, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_fscache, cpy_r_r54, cpy_r_prefix); /* isfile_case */
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 679, CPyStatic_modulefinder___globals);
        goto CPyL41;
    }
    if (!cpy_r_r55) goto CPyL32;
    cpy_r_r34 = 1;
    goto CPyL33;
CPyL32: ;
    cpy_r_r56 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r56;
    goto CPyL22;
CPyL33: ;
    if (cpy_r_r34) {
        goto CPyL45;
    } else
        goto CPyL46;
CPyL34: ;
    cpy_r_r57 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_level = cpy_r_r57;
CPyL35: ;
    cpy_r_r58 = CPyTagged_Add(cpy_r_r16, 2);
    CPyTagged_DECREF(cpy_r_r16);
    CPyTagged_INCREF(cpy_r_r58);
    cpy_r_r16 = cpy_r_r58;
    cpy_r_i = cpy_r_r58;
    goto CPyL10;
CPyL36: ;
    return cpy_r_level;
CPyL37: ;
    cpy_r_r59 = CPY_INT_TAG;
    return cpy_r_r59;
CPyL38: ;
    CPy_INCREF(cpy_r_path);
    goto CPyL7;
CPyL39: ;
    CPy_DecRef(cpy_r_path);
    CPyTagged_DecRef(cpy_r_level);
    goto CPyL37;
CPyL40: ;
    CPy_DECREF(cpy_r_path);
    CPyTagged_DECREF(cpy_r_r15);
    CPyTagged_DECREF(cpy_r_r16);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL36;
CPyL41: ;
    CPy_DecRef(cpy_r_path);
    CPyTagged_DecRef(cpy_r_level);
    CPyTagged_DecRef(cpy_r_r15);
    CPyTagged_DecRef(cpy_r_r16);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL37;
CPyL42: ;
    CPyTagged_DecRef(cpy_r_level);
    CPyTagged_DecRef(cpy_r_r15);
    CPyTagged_DecRef(cpy_r_r16);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL37;
CPyL43: ;
    CPy_DecRef(cpy_r_path);
    CPyTagged_DecRef(cpy_r_level);
    CPyTagged_DecRef(cpy_r_r15);
    CPyTagged_DecRef(cpy_r_r16);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL19;
CPyL44: ;
    CPy_DecRef(cpy_r_path);
    CPyTagged_DecRef(cpy_r_level);
    CPyTagged_DecRef(cpy_r_r15);
    CPyTagged_DecRef(cpy_r_r16);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r45);
    goto CPyL37;
CPyL45: ;
    CPyTagged_DECREF(cpy_r_level);
    goto CPyL34;
CPyL46: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL35;
}

PyObject *CPyPy_modulefinder___highest_init_level(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fscache", "id", "path", "prefix", 0};
    static CPyArg_Parser parser = {"OOOO:highest_init_level", kwlist, 0};
    PyObject *obj_fscache;
    PyObject *obj_id;
    PyObject *obj_path;
    PyObject *obj_prefix;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fscache, &obj_id, &obj_path, &obj_prefix)) {
        return NULL;
    }
    PyObject *arg_fscache;
    if (likely(PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache)))
        arg_fscache = obj_fscache;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_fscache); 
        goto fail;
    }
    PyObject *arg_id;
    if (likely(PyUnicode_Check(obj_id)))
        arg_id = obj_id;
    else {
        CPy_TypeError("str", obj_id); 
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
    CPyTagged retval = CPyDef_modulefinder___highest_init_level(arg_fscache, arg_id, arg_path, arg_prefix);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "highest_init_level", 671, CPyStatic_modulefinder___globals);
    return NULL;
}

PyObject *CPyDef_modulefinder___mypy_path(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_path_env;
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
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = CPyStatics[3843]; /* 'MYPYPATH' */
    cpy_r_r1 = CPyModule_os;
    cpy_r_r2 = CPyStatics[3027]; /* 'getenv' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "mypy_path", 687, CPyStatic_modulefinder___globals);
        goto CPyL13;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_r0};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "mypy_path", 687, CPyStatic_modulefinder___globals);
        goto CPyL13;
    }
    if (PyUnicode_Check(cpy_r_r6))
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL3611;
    if (cpy_r_r6 == Py_None)
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL3611;
    CPy_TypeErrorTraceback("mypy/modulefinder.py", "mypy_path", 687, CPyStatic_modulefinder___globals, "str or None", cpy_r_r6);
    goto CPyL13;
__LL3611: ;
    cpy_r_path_env = cpy_r_r7;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_path_env != cpy_r_r8;
    if (!cpy_r_r9) goto CPyL14;
    CPy_INCREF(cpy_r_path_env);
    if (likely(cpy_r_path_env != Py_None))
        cpy_r_r10 = cpy_r_path_env;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "mypy_path", 687, CPyStatic_modulefinder___globals, "str", cpy_r_path_env);
        goto CPyL15;
    }
    cpy_r_r11 = CPyStr_IsTrue(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (cpy_r_r11) {
        goto CPyL8;
    } else
        goto CPyL14;
CPyL6: ;
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "mypy_path", 689, CPyStatic_modulefinder___globals);
        goto CPyL13;
    }
    return cpy_r_r12;
CPyL8: ;
    if (likely(cpy_r_path_env != Py_None))
        cpy_r_r13 = cpy_r_path_env;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "mypy_path", 690, CPyStatic_modulefinder___globals, "str", cpy_r_path_env);
        goto CPyL13;
    }
    cpy_r_r14 = CPyModule_os;
    cpy_r_r15 = CPyStatics[3844]; /* 'pathsep' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "mypy_path", 690, CPyStatic_modulefinder___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "mypy_path", 690, CPyStatic_modulefinder___globals, "str", cpy_r_r16);
        goto CPyL16;
    }
    cpy_r_r18 = PyUnicode_Split(cpy_r_r13, cpy_r_r17, -1);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "mypy_path", 690, CPyStatic_modulefinder___globals);
        goto CPyL13;
    }
    return cpy_r_r18;
CPyL13: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL14: ;
    CPy_DECREF(cpy_r_path_env);
    goto CPyL6;
CPyL15: ;
    CPy_DecRef(cpy_r_path_env);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL13;
}

PyObject *CPyPy_modulefinder___mypy_path(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":mypy_path", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_modulefinder___mypy_path();
    return retval;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "mypy_path", 686, CPyStatic_modulefinder___globals);
    return NULL;
}

PyObject *CPyDef_modulefinder___default_lib_path(PyObject *cpy_r_data_dir, tuple_T2II cpy_r_pyversion, PyObject *cpy_r_custom_typeshed_dir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_path;
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
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_typeshed_dir;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_mypy_extensions_dir;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_versions_file;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject **cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_auto;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject **cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
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
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject **cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    CPyPtr cpy_r_r133;
    int64_t cpy_r_r134;
    CPyTagged cpy_r_r135;
    char cpy_r_r136;
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
    PyObject *cpy_r_r149;
    PyObject **cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject **cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 697, CPyStatic_modulefinder___globals);
        goto CPyL72;
    }
    cpy_r_path = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_custom_typeshed_dir != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL34;
    CPy_INCREF(cpy_r_custom_typeshed_dir);
    if (likely(cpy_r_custom_typeshed_dir != Py_None))
        cpy_r_r3 = cpy_r_custom_typeshed_dir;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "default_lib_path", 694, CPyStatic_modulefinder___globals, "str", cpy_r_custom_typeshed_dir);
        goto CPyL73;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL34;
    CPy_INCREF(cpy_r_custom_typeshed_dir);
    if (likely(cpy_r_custom_typeshed_dir != Py_None))
        cpy_r_r5 = cpy_r_custom_typeshed_dir;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "default_lib_path", 700, CPyStatic_modulefinder___globals, "str", cpy_r_custom_typeshed_dir);
        goto CPyL73;
    }
    cpy_r_r6 = CPyStatics[3845]; /* 'stdlib' */
    cpy_r_r7 = CPyModule_os;
    cpy_r_r8 = CPyStatics[142]; /* 'path' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 700, CPyStatic_modulefinder___globals);
        goto CPyL74;
    }
    cpy_r_r10 = CPyStatics[175]; /* 'join' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 700, CPyStatic_modulefinder___globals);
        goto CPyL74;
    }
    PyObject *cpy_r_r12[2] = {cpy_r_r5, cpy_r_r6};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 2, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 700, CPyStatic_modulefinder___globals);
        goto CPyL74;
    }
    CPy_DECREF(cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "default_lib_path", 700, CPyStatic_modulefinder___globals, "str", cpy_r_r14);
        goto CPyL73;
    }
    cpy_r_typeshed_dir = cpy_r_r15;
    CPy_INCREF(cpy_r_custom_typeshed_dir);
    if (likely(cpy_r_custom_typeshed_dir != Py_None))
        cpy_r_r16 = cpy_r_custom_typeshed_dir;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "default_lib_path", 701, CPyStatic_modulefinder___globals, "str", cpy_r_custom_typeshed_dir);
        goto CPyL75;
    }
    cpy_r_r17 = CPyStatics[3846]; /* 'stubs' */
    cpy_r_r18 = CPyStatics[3847]; /* 'mypy-extensions' */
    cpy_r_r19 = CPyModule_os;
    cpy_r_r20 = CPyStatics[142]; /* 'path' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 701, CPyStatic_modulefinder___globals);
        goto CPyL76;
    }
    cpy_r_r22 = CPyStatics[175]; /* 'join' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 701, CPyStatic_modulefinder___globals);
        goto CPyL76;
    }
    PyObject *cpy_r_r24[3] = {cpy_r_r16, cpy_r_r17, cpy_r_r18};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 3, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 701, CPyStatic_modulefinder___globals);
        goto CPyL76;
    }
    CPy_DECREF(cpy_r_r16);
    if (likely(PyUnicode_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "default_lib_path", 701, CPyStatic_modulefinder___globals, "str", cpy_r_r26);
        goto CPyL75;
    }
    cpy_r_mypy_extensions_dir = cpy_r_r27;
    cpy_r_r28 = CPyStatics[3848]; /* 'VERSIONS' */
    cpy_r_r29 = CPyModule_os;
    cpy_r_r30 = CPyStatics[142]; /* 'path' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 702, CPyStatic_modulefinder___globals);
        goto CPyL77;
    }
    cpy_r_r32 = CPyStatics[175]; /* 'join' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 702, CPyStatic_modulefinder___globals);
        goto CPyL77;
    }
    PyObject *cpy_r_r34[2] = {cpy_r_typeshed_dir, cpy_r_r28};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = _PyObject_Vectorcall(cpy_r_r33, cpy_r_r35, 2, 0);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 702, CPyStatic_modulefinder___globals);
        goto CPyL77;
    }
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "default_lib_path", 702, CPyStatic_modulefinder___globals, "str", cpy_r_r36);
        goto CPyL77;
    }
    cpy_r_versions_file = cpy_r_r37;
    cpy_r_r38 = CPyModule_os;
    cpy_r_r39 = CPyStatics[142]; /* 'path' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 703, CPyStatic_modulefinder___globals);
        goto CPyL78;
    }
    cpy_r_r41 = CPyStatics[143]; /* 'isdir' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 703, CPyStatic_modulefinder___globals);
        goto CPyL78;
    }
    PyObject *cpy_r_r43[1] = {cpy_r_typeshed_dir};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = _PyObject_Vectorcall(cpy_r_r42, cpy_r_r44, 1, 0);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 703, CPyStatic_modulefinder___globals);
        goto CPyL78;
    }
    if (unlikely(!PyBool_Check(cpy_r_r45))) {
        CPy_TypeError("bool", cpy_r_r45); cpy_r_r46 = 2;
    } else
        cpy_r_r46 = cpy_r_r45 == Py_True;
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 703, CPyStatic_modulefinder___globals);
        goto CPyL78;
    }
    if (!cpy_r_r46) goto CPyL79;
    cpy_r_r47 = CPyModule_os;
    cpy_r_r48 = CPyStatics[142]; /* 'path' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 703, CPyStatic_modulefinder___globals);
        goto CPyL78;
    }
    cpy_r_r50 = CPyStatics[176]; /* 'isfile' */
    cpy_r_r51 = CPyObject_GetAttr(cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 703, CPyStatic_modulefinder___globals);
        goto CPyL78;
    }
    PyObject *cpy_r_r52[1] = {cpy_r_versions_file};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = _PyObject_Vectorcall(cpy_r_r51, cpy_r_r53, 1, 0);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 703, CPyStatic_modulefinder___globals);
        goto CPyL78;
    }
    CPy_DECREF(cpy_r_versions_file);
    if (unlikely(!PyBool_Check(cpy_r_r54))) {
        CPy_TypeError("bool", cpy_r_r54); cpy_r_r55 = 2;
    } else
        cpy_r_r55 = cpy_r_r54 == Py_True;
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 703, CPyStatic_modulefinder___globals);
        goto CPyL77;
    }
    if (cpy_r_r55) goto CPyL80;
CPyL28: ;
    CPy_INCREF(cpy_r_custom_typeshed_dir);
    if (likely(cpy_r_custom_typeshed_dir != Py_None))
        cpy_r_r56 = cpy_r_custom_typeshed_dir;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "default_lib_path", 706, CPyStatic_modulefinder___globals, "str", cpy_r_custom_typeshed_dir);
        goto CPyL77;
    }
    cpy_r_r57 = CPyStatics[3849]; /* ('error: --custom-typeshed-dir does not point to a '
                                     'valid typeshed (') */
    cpy_r_r58 = CPyStatics[72]; /* ')' */
    cpy_r_r59 = CPyStr_Build(3, cpy_r_r57, cpy_r_r56, cpy_r_r58);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 705, CPyStatic_modulefinder___globals);
        goto CPyL77;
    }
    cpy_r_r60 = CPyModule_builtins;
    cpy_r_r61 = CPyStatics[190]; /* 'print' */
    cpy_r_r62 = CPyObject_GetAttr(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 704, CPyStatic_modulefinder___globals);
        goto CPyL81;
    }
    PyObject *cpy_r_r63[1] = {cpy_r_r59};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = _PyObject_Vectorcall(cpy_r_r62, cpy_r_r64, 1, 0);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 704, CPyStatic_modulefinder___globals);
        goto CPyL81;
    } else
        goto CPyL82;
CPyL32: ;
    CPy_DECREF(cpy_r_r59);
    cpy_r_r66 = CPyModule_sys;
    cpy_r_r67 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r68 = CPyObject_GetAttr(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 709, CPyStatic_modulefinder___globals);
        goto CPyL77;
    }
    cpy_r_r69 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r70[1] = {cpy_r_r69};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = _PyObject_Vectorcall(cpy_r_r68, cpy_r_r71, 1, 0);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 709, CPyStatic_modulefinder___globals);
        goto CPyL77;
    } else
        goto CPyL83;
CPyL34: ;
    cpy_r_r73 = CPyStatics[3850]; /* 'stubs-auto' */
    cpy_r_r74 = CPyModule_os;
    cpy_r_r75 = CPyStatics[142]; /* 'path' */
    cpy_r_r76 = CPyObject_GetAttr(cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 711, CPyStatic_modulefinder___globals);
        goto CPyL73;
    }
    cpy_r_r77 = CPyStatics[175]; /* 'join' */
    cpy_r_r78 = CPyObject_GetAttr(cpy_r_r76, cpy_r_r77);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 711, CPyStatic_modulefinder___globals);
        goto CPyL73;
    }
    PyObject *cpy_r_r79[2] = {cpy_r_data_dir, cpy_r_r73};
    cpy_r_r80 = (PyObject **)&cpy_r_r79;
    cpy_r_r81 = _PyObject_Vectorcall(cpy_r_r78, cpy_r_r80, 2, 0);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 711, CPyStatic_modulefinder___globals);
        goto CPyL73;
    }
    if (likely(PyUnicode_Check(cpy_r_r81)))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "default_lib_path", 711, CPyStatic_modulefinder___globals, "str", cpy_r_r81);
        goto CPyL73;
    }
    cpy_r_auto = cpy_r_r82;
    cpy_r_r83 = CPyModule_os;
    cpy_r_r84 = CPyStatics[142]; /* 'path' */
    cpy_r_r85 = CPyObject_GetAttr(cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 712, CPyStatic_modulefinder___globals);
        goto CPyL84;
    }
    cpy_r_r86 = CPyStatics[143]; /* 'isdir' */
    cpy_r_r87 = CPyObject_GetAttr(cpy_r_r85, cpy_r_r86);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 712, CPyStatic_modulefinder___globals);
        goto CPyL84;
    }
    PyObject *cpy_r_r88[1] = {cpy_r_auto};
    cpy_r_r89 = (PyObject **)&cpy_r_r88;
    cpy_r_r90 = _PyObject_Vectorcall(cpy_r_r87, cpy_r_r89, 1, 0);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 712, CPyStatic_modulefinder___globals);
        goto CPyL84;
    }
    if (unlikely(!PyBool_Check(cpy_r_r90))) {
        CPy_TypeError("bool", cpy_r_r90); cpy_r_r91 = 2;
    } else
        cpy_r_r91 = cpy_r_r90 == Py_True;
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 712, CPyStatic_modulefinder___globals);
        goto CPyL84;
    }
    if (!cpy_r_r91) goto CPyL85;
    cpy_r_data_dir = cpy_r_auto;
CPyL44: ;
    cpy_r_r92 = CPyStatics[3851]; /* 'typeshed' */
    cpy_r_r93 = CPyStatics[3845]; /* 'stdlib' */
    cpy_r_r94 = CPyModule_os;
    cpy_r_r95 = CPyStatics[142]; /* 'path' */
    cpy_r_r96 = CPyObject_GetAttr(cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 714, CPyStatic_modulefinder___globals);
        goto CPyL86;
    }
    cpy_r_r97 = CPyStatics[175]; /* 'join' */
    cpy_r_r98 = CPyObject_GetAttr(cpy_r_r96, cpy_r_r97);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 714, CPyStatic_modulefinder___globals);
        goto CPyL86;
    }
    PyObject *cpy_r_r99[3] = {cpy_r_data_dir, cpy_r_r92, cpy_r_r93};
    cpy_r_r100 = (PyObject **)&cpy_r_r99;
    cpy_r_r101 = _PyObject_Vectorcall(cpy_r_r98, cpy_r_r100, 3, 0);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 714, CPyStatic_modulefinder___globals);
        goto CPyL86;
    }
    if (likely(PyUnicode_Check(cpy_r_r101)))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "default_lib_path", 714, CPyStatic_modulefinder___globals, "str", cpy_r_r101);
        goto CPyL86;
    }
    cpy_r_typeshed_dir = cpy_r_r102;
    cpy_r_r103 = CPyStatics[3851]; /* 'typeshed' */
    cpy_r_r104 = CPyStatics[3846]; /* 'stubs' */
    cpy_r_r105 = CPyStatics[3847]; /* 'mypy-extensions' */
    cpy_r_r106 = CPyModule_os;
    cpy_r_r107 = CPyStatics[142]; /* 'path' */
    cpy_r_r108 = CPyObject_GetAttr(cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 715, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    cpy_r_r109 = CPyStatics[175]; /* 'join' */
    cpy_r_r110 = CPyObject_GetAttr(cpy_r_r108, cpy_r_r109);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 715, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    PyObject *cpy_r_r111[4] = {cpy_r_data_dir, cpy_r_r103, cpy_r_r104, cpy_r_r105};
    cpy_r_r112 = (PyObject **)&cpy_r_r111;
    cpy_r_r113 = _PyObject_Vectorcall(cpy_r_r110, cpy_r_r112, 4, 0);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 715, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    if (likely(PyUnicode_Check(cpy_r_r113)))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "default_lib_path", 715, CPyStatic_modulefinder___globals, "str", cpy_r_r113);
        goto CPyL87;
    }
    cpy_r_mypy_extensions_dir = cpy_r_r114;
CPyL53: ;
    cpy_r_r115 = PyList_Append(cpy_r_path, cpy_r_typeshed_dir);
    CPy_DECREF(cpy_r_typeshed_dir);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 716, CPyStatic_modulefinder___globals);
        goto CPyL88;
    }
    cpy_r_r117 = PyList_Append(cpy_r_path, cpy_r_mypy_extensions_dir);
    CPy_DECREF(cpy_r_mypy_extensions_dir);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 720, CPyStatic_modulefinder___globals);
        goto CPyL86;
    }
    cpy_r_r119 = CPyModule_sys;
    cpy_r_r120 = CPyStatics[305]; /* 'platform' */
    cpy_r_r121 = CPyObject_GetAttr(cpy_r_r119, cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 723, CPyStatic_modulefinder___globals);
        goto CPyL86;
    }
    if (likely(PyUnicode_Check(cpy_r_r121)))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "default_lib_path", 723, CPyStatic_modulefinder___globals, "str", cpy_r_r121);
        goto CPyL86;
    }
    cpy_r_r123 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r124 = PyUnicode_Compare(cpy_r_r122, cpy_r_r123);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r125 = cpy_r_r124 == -1;
    if (!cpy_r_r125) goto CPyL60;
    cpy_r_r126 = PyErr_Occurred();
    cpy_r_r127 = cpy_r_r126 != NULL;
    if (!cpy_r_r127) goto CPyL60;
    cpy_r_r128 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 723, CPyStatic_modulefinder___globals);
        goto CPyL86;
    }
CPyL60: ;
    cpy_r_r129 = cpy_r_r124 != 0;
    if (!cpy_r_r129) goto CPyL62;
    cpy_r_r130 = CPyStatics[3852]; /* '/usr/local/lib/mypy' */
    cpy_r_r131 = PyList_Append(cpy_r_path, cpy_r_r130);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 724, CPyStatic_modulefinder___globals);
        goto CPyL86;
    }
CPyL62: ;
    cpy_r_r133 = (CPyPtr)&((PyVarObject *)cpy_r_path)->ob_size;
    cpy_r_r134 = *(int64_t *)cpy_r_r133;
    cpy_r_r135 = cpy_r_r134 << 1;
    cpy_r_r136 = cpy_r_r135 != 0;
    if (cpy_r_r136) goto CPyL89;
    cpy_r_r137 = CPyModule_sys;
    cpy_r_r138 = CPyStatics[425]; /* 'executable' */
    cpy_r_r139 = CPyObject_GetAttr(cpy_r_r137, cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 729, CPyStatic_modulefinder___globals);
        goto CPyL86;
    }
    if (likely(PyUnicode_Check(cpy_r_r139)))
        cpy_r_r140 = cpy_r_r139;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "default_lib_path", 729, CPyStatic_modulefinder___globals, "str", cpy_r_r139);
        goto CPyL86;
    }
    cpy_r_r141 = CPyStatics[3853]; /* ('Could not resolve typeshed subdirectories. Your mypy '
                                      'install is broken.\n'
                                      'Python executable is located at ') */
    cpy_r_r142 = CPyStatics[3854]; /* '.\nMypy located at ' */
    cpy_r_r143 = CPyStr_Build(4, cpy_r_r141, cpy_r_r140, cpy_r_r142, cpy_r_data_dir);
    CPy_DECREF(cpy_r_r140);
    CPy_DECREF(cpy_r_data_dir);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 727, CPyStatic_modulefinder___globals);
        goto CPyL73;
    }
    cpy_r_r144 = CPyModule_sys;
    cpy_r_r145 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r146 = CPyObject_GetAttr(cpy_r_r144, cpy_r_r145);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 731, CPyStatic_modulefinder___globals);
        goto CPyL90;
    }
    cpy_r_r147 = CPyModule_builtins;
    cpy_r_r148 = CPyStatics[190]; /* 'print' */
    cpy_r_r149 = CPyObject_GetAttr(cpy_r_r147, cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 726, CPyStatic_modulefinder___globals);
        goto CPyL91;
    }
    PyObject *cpy_r_r150[2] = {cpy_r_r143, cpy_r_r146};
    cpy_r_r151 = (PyObject **)&cpy_r_r150;
    cpy_r_r152 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r153 = _PyObject_Vectorcall(cpy_r_r149, cpy_r_r151, 1, cpy_r_r152);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 726, CPyStatic_modulefinder___globals);
        goto CPyL91;
    } else
        goto CPyL92;
CPyL69: ;
    CPy_DECREF(cpy_r_r143);
    CPy_DECREF(cpy_r_r146);
    cpy_r_r154 = CPyModule_sys;
    cpy_r_r155 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r156 = CPyObject_GetAttr(cpy_r_r154, cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 733, CPyStatic_modulefinder___globals);
        goto CPyL73;
    }
    cpy_r_r157 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r158[1] = {cpy_r_r157};
    cpy_r_r159 = (PyObject **)&cpy_r_r158;
    cpy_r_r160 = _PyObject_Vectorcall(cpy_r_r156, cpy_r_r159, 1, 0);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 733, CPyStatic_modulefinder___globals);
        goto CPyL73;
    } else
        goto CPyL93;
CPyL71: ;
    return cpy_r_path;
CPyL72: ;
    cpy_r_r161 = NULL;
    return cpy_r_r161;
CPyL73: ;
    CPy_DecRef(cpy_r_path);
    goto CPyL72;
CPyL74: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r5);
    goto CPyL72;
CPyL75: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_typeshed_dir);
    goto CPyL72;
CPyL76: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_typeshed_dir);
    CPy_DecRef(cpy_r_r16);
    goto CPyL72;
CPyL77: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_typeshed_dir);
    CPy_DecRef(cpy_r_mypy_extensions_dir);
    goto CPyL72;
CPyL78: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_typeshed_dir);
    CPy_DecRef(cpy_r_mypy_extensions_dir);
    CPy_DecRef(cpy_r_versions_file);
    goto CPyL72;
CPyL79: ;
    CPy_DECREF(cpy_r_versions_file);
    goto CPyL28;
CPyL80: ;
    CPy_INCREF(cpy_r_data_dir);
    goto CPyL53;
CPyL81: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_typeshed_dir);
    CPy_DecRef(cpy_r_mypy_extensions_dir);
    CPy_DecRef(cpy_r_r59);
    goto CPyL72;
CPyL82: ;
    CPy_DECREF(cpy_r_r65);
    goto CPyL32;
CPyL83: ;
    CPy_DECREF(cpy_r_r72);
    goto CPyL80;
CPyL84: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_auto);
    goto CPyL72;
CPyL85: ;
    CPy_DECREF(cpy_r_auto);
    CPy_INCREF(cpy_r_data_dir);
    goto CPyL44;
CPyL86: ;
    CPy_DecRef(cpy_r_data_dir);
    CPy_DecRef(cpy_r_path);
    goto CPyL72;
CPyL87: ;
    CPy_DecRef(cpy_r_data_dir);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_typeshed_dir);
    goto CPyL72;
CPyL88: ;
    CPy_DecRef(cpy_r_data_dir);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_mypy_extensions_dir);
    goto CPyL72;
CPyL89: ;
    CPy_DECREF(cpy_r_data_dir);
    goto CPyL71;
CPyL90: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r143);
    goto CPyL72;
CPyL91: ;
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_r146);
    goto CPyL72;
CPyL92: ;
    CPy_DECREF(cpy_r_r153);
    goto CPyL69;
CPyL93: ;
    CPy_DECREF(cpy_r_r160);
    goto CPyL71;
}

PyObject *CPyPy_modulefinder___default_lib_path(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"data_dir", "pyversion", "custom_typeshed_dir", 0};
    static CPyArg_Parser parser = {"OOO:default_lib_path", kwlist, 0};
    PyObject *obj_data_dir;
    PyObject *obj_pyversion;
    PyObject *obj_custom_typeshed_dir;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_data_dir, &obj_pyversion, &obj_custom_typeshed_dir)) {
        return NULL;
    }
    PyObject *arg_data_dir;
    if (likely(PyUnicode_Check(obj_data_dir)))
        arg_data_dir = obj_data_dir;
    else {
        CPy_TypeError("str", obj_data_dir); 
        goto fail;
    }
    tuple_T2II arg_pyversion;
    PyObject *__tmp3612;
    if (unlikely(!(PyTuple_Check(obj_pyversion) && PyTuple_GET_SIZE(obj_pyversion) == 2))) {
        __tmp3612 = NULL;
        goto __LL3613;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_pyversion, 0))))
        __tmp3612 = PyTuple_GET_ITEM(obj_pyversion, 0);
    else {
        __tmp3612 = NULL;
    }
    if (__tmp3612 == NULL) goto __LL3613;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_pyversion, 1))))
        __tmp3612 = PyTuple_GET_ITEM(obj_pyversion, 1);
    else {
        __tmp3612 = NULL;
    }
    if (__tmp3612 == NULL) goto __LL3613;
    __tmp3612 = obj_pyversion;
__LL3613: ;
    if (unlikely(__tmp3612 == NULL)) {
        CPy_TypeError("tuple[int, int]", obj_pyversion); goto fail;
    } else {
        PyObject *__tmp3614 = PyTuple_GET_ITEM(obj_pyversion, 0);
        CPyTagged __tmp3615;
        if (likely(PyLong_Check(__tmp3614)))
            __tmp3615 = CPyTagged_BorrowFromObject(__tmp3614);
        else {
            CPy_TypeError("int", __tmp3614); goto fail;
        }
        arg_pyversion.f0 = __tmp3615;
        PyObject *__tmp3616 = PyTuple_GET_ITEM(obj_pyversion, 1);
        CPyTagged __tmp3617;
        if (likely(PyLong_Check(__tmp3616)))
            __tmp3617 = CPyTagged_BorrowFromObject(__tmp3616);
        else {
            CPy_TypeError("int", __tmp3616); goto fail;
        }
        arg_pyversion.f1 = __tmp3617;
    }
    PyObject *arg_custom_typeshed_dir;
    if (PyUnicode_Check(obj_custom_typeshed_dir))
        arg_custom_typeshed_dir = obj_custom_typeshed_dir;
    else {
        arg_custom_typeshed_dir = NULL;
    }
    if (arg_custom_typeshed_dir != NULL) goto __LL3618;
    if (obj_custom_typeshed_dir == Py_None)
        arg_custom_typeshed_dir = obj_custom_typeshed_dir;
    else {
        arg_custom_typeshed_dir = NULL;
    }
    if (arg_custom_typeshed_dir != NULL) goto __LL3618;
    CPy_TypeError("str or None", obj_custom_typeshed_dir); 
    goto fail;
__LL3618: ;
    PyObject *retval = CPyDef_modulefinder___default_lib_path(arg_data_dir, arg_pyversion, arg_custom_typeshed_dir);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "default_lib_path", 693, CPyStatic_modulefinder___globals);
    return NULL;
}

tuple_T2OO CPyDef_modulefinder___get_search_dirs(PyObject *cpy_r_python_executable) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    tuple_T2OO cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_sys_path;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_site_packages;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_env;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    CPyPtr cpy_r_r46;
    CPyPtr cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject **cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    tuple_T3OOO cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject **cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    CPyTagged cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject **cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_reason;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyPtr cpy_r_r121;
    CPyPtr cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    tuple_T2OO cpy_r_r129;
    tuple_T2OO cpy_r_r130;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_python_executable == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL4;
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 747, CPyStatic_modulefinder___globals);
        goto CPyL76;
    }
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 747, CPyStatic_modulefinder___globals);
        goto CPyL77;
    }
    cpy_r_r4.f0 = cpy_r_r2;
    cpy_r_r4.f1 = cpy_r_r3;
    CPy_INCREF(cpy_r_r4.f0);
    CPy_INCREF(cpy_r_r4.f1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    return cpy_r_r4;
CPyL4: ;
    CPy_INCREF(cpy_r_python_executable);
    if (likely(cpy_r_python_executable != Py_None))
        cpy_r_r5 = cpy_r_python_executable;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_search_dirs", 748, CPyStatic_modulefinder___globals, "str", cpy_r_python_executable);
        goto CPyL76;
    }
    cpy_r_r6 = CPyModule_sys;
    cpy_r_r7 = CPyStatics[425]; /* 'executable' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 748, CPyStatic_modulefinder___globals);
        goto CPyL78;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_search_dirs", 748, CPyStatic_modulefinder___globals, "str", cpy_r_r8);
        goto CPyL78;
    }
    cpy_r_r10 = PyUnicode_Compare(cpy_r_r5, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 == -1;
    if (!cpy_r_r11) goto CPyL10;
    cpy_r_r12 = PyErr_Occurred();
    cpy_r_r13 = cpy_r_r12 != NULL;
    if (!cpy_r_r13) goto CPyL10;
    cpy_r_r14 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 748, CPyStatic_modulefinder___globals);
        goto CPyL76;
    }
CPyL10: ;
    cpy_r_r15 = cpy_r_r10 == 0;
    if (!cpy_r_r15) goto CPyL16;
    cpy_r_r16 = CPyStatic_modulefinder___globals;
    cpy_r_r17 = CPyStatics[3855]; /* 'pyinfo' */
    cpy_r_r18 = CPyDict_GetItem(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 750, CPyStatic_modulefinder___globals);
        goto CPyL76;
    }
    cpy_r_r19 = CPyStatics[3856]; /* 'getsearchdirs' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 750, CPyStatic_modulefinder___globals);
        goto CPyL76;
    }
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r20, 0, 0, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 750, CPyStatic_modulefinder___globals);
        goto CPyL76;
    }
    PyObject *__tmp3619;
    if (unlikely(!(PyTuple_Check(cpy_r_r21) && PyTuple_GET_SIZE(cpy_r_r21) == 2))) {
        __tmp3619 = NULL;
        goto __LL3620;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r21, 0))))
        __tmp3619 = PyTuple_GET_ITEM(cpy_r_r21, 0);
    else {
        __tmp3619 = NULL;
    }
    if (__tmp3619 == NULL) goto __LL3620;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r21, 1))))
        __tmp3619 = PyTuple_GET_ITEM(cpy_r_r21, 1);
    else {
        __tmp3619 = NULL;
    }
    if (__tmp3619 == NULL) goto __LL3620;
    __tmp3619 = cpy_r_r21;
__LL3620: ;
    if (unlikely(__tmp3619 == NULL)) {
        CPy_TypeError("tuple[list, list]", cpy_r_r21); cpy_r_r22 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3621 = PyTuple_GET_ITEM(cpy_r_r21, 0);
        CPy_INCREF(__tmp3621);
        PyObject *__tmp3622;
        if (likely(PyList_Check(__tmp3621)))
            __tmp3622 = __tmp3621;
        else {
            CPy_TypeError("list", __tmp3621); 
            __tmp3622 = NULL;
        }
        cpy_r_r22.f0 = __tmp3622;
        PyObject *__tmp3623 = PyTuple_GET_ITEM(cpy_r_r21, 1);
        CPy_INCREF(__tmp3623);
        PyObject *__tmp3624;
        if (likely(PyList_Check(__tmp3623)))
            __tmp3624 = __tmp3623;
        else {
            CPy_TypeError("list", __tmp3623); 
            __tmp3624 = NULL;
        }
        cpy_r_r22.f1 = __tmp3624;
    }
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22.f0 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 750, CPyStatic_modulefinder___globals);
        goto CPyL76;
    }
    cpy_r_r23 = cpy_r_r22.f0;
    CPy_INCREF(cpy_r_r23);
    cpy_r_sys_path = cpy_r_r23;
    cpy_r_r24 = cpy_r_r22.f1;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r22.f0);
    CPy_DECREF(cpy_r_r22.f1);
    cpy_r_site_packages = cpy_r_r24;
    goto CPyL75;
CPyL16: ;
    cpy_r_r25 = CPyModule_os;
    cpy_r_r26 = CPyStatics[1504]; /* 'environ' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 754, CPyStatic_modulefinder___globals);
        goto CPyL76;
    }
    cpy_r_r28 = CPyDict_FromAny(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 754, CPyStatic_modulefinder___globals);
        goto CPyL76;
    }
    cpy_r_r29 = CPyStatics[3857]; /* 'PYTHONSAFEPATH' */
    cpy_r_r30 = CPyStatics[3858]; /* '1' */
    cpy_r_r31 = PyDict_New();
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 754, CPyStatic_modulefinder___globals);
        goto CPyL79;
    }
    cpy_r_r32 = CPyDict_UpdateInDisplay(cpy_r_r31, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 754, CPyStatic_modulefinder___globals);
        goto CPyL80;
    }
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r31, cpy_r_r29, cpy_r_r30);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 754, CPyStatic_modulefinder___globals);
        goto CPyL80;
    }
    cpy_r_env = cpy_r_r31;
    CPy_INCREF(cpy_r_python_executable);
    if (likely(cpy_r_python_executable != Py_None))
        cpy_r_r36 = cpy_r_python_executable;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_search_dirs", 758, CPyStatic_modulefinder___globals, "str", cpy_r_python_executable);
        goto CPyL81;
    }
    cpy_r_r37 = CPyStatic_modulefinder___globals;
    cpy_r_r38 = CPyStatics[3855]; /* 'pyinfo' */
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 758, CPyStatic_modulefinder___globals);
        goto CPyL82;
    }
    cpy_r_r40 = CPyStatics[150]; /* '__file__' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 758, CPyStatic_modulefinder___globals);
        goto CPyL82;
    }
    if (likely(PyUnicode_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_search_dirs", 758, CPyStatic_modulefinder___globals, "str", cpy_r_r41);
        goto CPyL82;
    }
    cpy_r_r43 = CPyStatics[3856]; /* 'getsearchdirs' */
    cpy_r_r44 = PyList_New(3);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 758, CPyStatic_modulefinder___globals);
        goto CPyL83;
    }
    cpy_r_r45 = (CPyPtr)&((PyListObject *)cpy_r_r44)->ob_item;
    cpy_r_r46 = *(CPyPtr *)cpy_r_r45;
    *(PyObject * *)cpy_r_r46 = cpy_r_r36;
    cpy_r_r47 = cpy_r_r46 + 8;
    *(PyObject * *)cpy_r_r47 = cpy_r_r42;
    cpy_r_r48 = cpy_r_r46 + 16;
    CPy_INCREF(cpy_r_r43);
    *(PyObject * *)cpy_r_r48 = cpy_r_r43;
    cpy_r_r49 = CPyModule_subprocess;
    cpy_r_r50 = CPyStatics[3859]; /* 'PIPE' */
    cpy_r_r51 = CPyObject_GetAttr(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 760, CPyStatic_modulefinder___globals);
        goto CPyL84;
    }
    if (likely(PyLong_Check(cpy_r_r51)))
        cpy_r_r52 = CPyTagged_FromObject(cpy_r_r51);
    else {
        CPy_TypeError("int", cpy_r_r51); cpy_r_r52 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 760, CPyStatic_modulefinder___globals);
        goto CPyL84;
    }
    cpy_r_r53 = CPyModule_subprocess;
    cpy_r_r54 = CPyStatics[2623]; /* 'check_output' */
    cpy_r_r55 = CPyObject_GetAttr(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 757, CPyStatic_modulefinder___globals);
        goto CPyL85;
    }
    cpy_r_r56 = CPyTagged_StealAsObject(cpy_r_r52);
    PyObject *cpy_r_r57[3] = {cpy_r_r44, cpy_r_env, cpy_r_r56};
    cpy_r_r58 = (PyObject **)&cpy_r_r57;
    cpy_r_r59 = CPyStatics[9530]; /* ('env', 'stderr') */
    cpy_r_r60 = _PyObject_Vectorcall(cpy_r_r55, cpy_r_r58, 1, cpy_r_r59);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 757, CPyStatic_modulefinder___globals);
        goto CPyL86;
    }
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_env);
    CPy_DECREF(cpy_r_r56);
    if (likely(PyBytes_Check(cpy_r_r60) || PyByteArray_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_search_dirs", 757, CPyStatic_modulefinder___globals, "bytes", cpy_r_r60);
        goto CPyL47;
    }
    cpy_r_r62 = CPy_Decode(cpy_r_r61, NULL, NULL);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 757, CPyStatic_modulefinder___globals);
        goto CPyL47;
    }
    cpy_r_r63 = CPyModule_ast;
    cpy_r_r64 = CPyStatics[2307]; /* 'literal_eval' */
    cpy_r_r65 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 756, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    PyObject *cpy_r_r66[1] = {cpy_r_r62};
    cpy_r_r67 = (PyObject **)&cpy_r_r66;
    cpy_r_r68 = _PyObject_Vectorcall(cpy_r_r65, cpy_r_r67, 1, 0);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 756, CPyStatic_modulefinder___globals);
        goto CPyL87;
    }
    CPy_DECREF(cpy_r_r62);
    cpy_r_r69 = PyObject_GetIter(cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 756, CPyStatic_modulefinder___globals);
        goto CPyL47;
    }
    cpy_r_r70 = PyIter_Next(cpy_r_r69);
    if (cpy_r_r70 == NULL) {
        goto CPyL88;
    } else
        goto CPyL39;
CPyL37: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r71 = 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 756, CPyStatic_modulefinder___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL39: ;
    if (likely(PyList_Check(cpy_r_r70)))
        cpy_r_r72 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_search_dirs", 756, CPyStatic_modulefinder___globals, "list", cpy_r_r70);
        goto CPyL89;
    }
    cpy_r_sys_path = cpy_r_r72;
    cpy_r_r73 = PyIter_Next(cpy_r_r69);
    if (cpy_r_r73 == NULL) {
        goto CPyL90;
    } else
        goto CPyL43;
CPyL41: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r74 = 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 756, CPyStatic_modulefinder___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL43: ;
    if (likely(PyList_Check(cpy_r_r73)))
        cpy_r_r75 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_search_dirs", 756, CPyStatic_modulefinder___globals, "list", cpy_r_r73);
        goto CPyL91;
    }
    cpy_r_site_packages = cpy_r_r75;
    cpy_r_r76 = PyIter_Next(cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (cpy_r_r76 == NULL) {
        goto CPyL75;
    } else
        goto CPyL92;
CPyL45: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r77 = 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 756, CPyStatic_modulefinder___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL47: ;
    cpy_r_r78 = CPy_CatchError();
    cpy_r_r79 = CPyModule_subprocess;
    cpy_r_r80 = CPyStatics[2624]; /* 'CalledProcessError' */
    cpy_r_r81 = CPyObject_GetAttr(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 763, CPyStatic_modulefinder___globals);
        goto CPyL73;
    }
    cpy_r_r82 = CPy_ExceptionMatches(cpy_r_r81);
    CPy_DecRef(cpy_r_r81);
    if (!cpy_r_r82) goto CPyL57;
    cpy_r_r83 = CPy_GetExcValue();
    cpy_r_err = cpy_r_r83;
    cpy_r_r84 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r85 = CPyObject_GetAttr(cpy_r_err, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 764, CPyStatic_modulefinder___globals);
        goto CPyL93;
    }
    cpy_r_r86 = CPyModule_builtins;
    cpy_r_r87 = CPyStatics[190]; /* 'print' */
    cpy_r_r88 = CPyObject_GetAttr(cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 764, CPyStatic_modulefinder___globals);
        goto CPyL94;
    }
    PyObject *cpy_r_r89[1] = {cpy_r_r85};
    cpy_r_r90 = (PyObject **)&cpy_r_r89;
    cpy_r_r91 = _PyObject_Vectorcall(cpy_r_r88, cpy_r_r90, 1, 0);
    CPy_DecRef(cpy_r_r88);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 764, CPyStatic_modulefinder___globals);
        goto CPyL94;
    } else
        goto CPyL95;
CPyL52: ;
    CPy_DecRef(cpy_r_r85);
    cpy_r_r92 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r93 = CPyObject_GetAttr(cpy_r_err, cpy_r_r92);
    CPy_DecRef(cpy_r_err);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 765, CPyStatic_modulefinder___globals);
        goto CPyL73;
    }
    cpy_r_r94 = CPyModule_builtins;
    cpy_r_r95 = CPyStatics[190]; /* 'print' */
    cpy_r_r96 = CPyObject_GetAttr(cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 765, CPyStatic_modulefinder___globals);
        goto CPyL96;
    }
    PyObject *cpy_r_r97[1] = {cpy_r_r93};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = _PyObject_Vectorcall(cpy_r_r96, cpy_r_r98, 1, 0);
    CPy_DecRef(cpy_r_r96);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 765, CPyStatic_modulefinder___globals);
        goto CPyL96;
    } else
        goto CPyL97;
CPyL55: ;
    CPy_DecRef(cpy_r_r93);
    CPy_Reraise();
    if (!0) {
        goto CPyL73;
    } else
        goto CPyL98;
CPyL56: ;
    CPy_Unreachable();
CPyL57: ;
    cpy_r_r100 = CPyModule_builtins;
    cpy_r_r101 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r102 = CPyObject_GetAttr(cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 767, CPyStatic_modulefinder___globals);
        goto CPyL73;
    }
    cpy_r_r103 = CPy_ExceptionMatches(cpy_r_r102);
    CPy_DecRef(cpy_r_r102);
    if (!cpy_r_r103) goto CPyL71;
    cpy_r_r104 = CPy_GetExcValue();
    cpy_r_err = cpy_r_r104;
    cpy_r_r105 = CPyStatics[357]; /* 'errno' */
    cpy_r_r106 = CPyObject_GetAttr(cpy_r_err, cpy_r_r105);
    CPy_DecRef(cpy_r_err);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 768, CPyStatic_modulefinder___globals);
        goto CPyL73;
    }
    if (likely(PyLong_Check(cpy_r_r106)))
        cpy_r_r107 = CPyTagged_FromObject(cpy_r_r106);
    else {
        CPy_TypeError("int", cpy_r_r106); cpy_r_r107 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r106);
    if (unlikely(cpy_r_r107 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 768, CPyStatic_modulefinder___globals);
        goto CPyL73;
    }
    cpy_r_r108 = CPyModule_os;
    cpy_r_r109 = CPyStatics[360]; /* 'strerror' */
    cpy_r_r110 = CPyObject_GetAttr(cpy_r_r108, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 768, CPyStatic_modulefinder___globals);
        goto CPyL99;
    }
    cpy_r_r111 = CPyTagged_StealAsObject(cpy_r_r107);
    PyObject *cpy_r_r112[1] = {cpy_r_r111};
    cpy_r_r113 = (PyObject **)&cpy_r_r112;
    cpy_r_r114 = _PyObject_Vectorcall(cpy_r_r110, cpy_r_r113, 1, 0);
    CPy_DecRef(cpy_r_r110);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 768, CPyStatic_modulefinder___globals);
        goto CPyL100;
    }
    CPy_DecRef(cpy_r_r111);
    if (likely(PyUnicode_Check(cpy_r_r114)))
        cpy_r_r115 = cpy_r_r114;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_search_dirs", 768, CPyStatic_modulefinder___globals, "str", cpy_r_r114);
        goto CPyL73;
    }
    cpy_r_reason = cpy_r_r115;
    cpy_r_r116 = CPyStatics[3861]; /* "mypy: Invalid python executable '" */
    CPy_INCREF(cpy_r_python_executable);
    if (likely(cpy_r_python_executable != Py_None))
        cpy_r_r117 = cpy_r_python_executable;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_search_dirs", 770, CPyStatic_modulefinder___globals, "str", cpy_r_python_executable);
        goto CPyL101;
    }
    cpy_r_r118 = CPyStatics[381]; /* "': " */
    cpy_r_r119 = CPyStr_Build(4, cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_reason);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_reason);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 770, CPyStatic_modulefinder___globals);
        goto CPyL73;
    }
    cpy_r_r120 = PyList_New(1);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 770, CPyStatic_modulefinder___globals);
        goto CPyL102;
    }
    cpy_r_r121 = (CPyPtr)&((PyListObject *)cpy_r_r120)->ob_item;
    cpy_r_r122 = *(CPyPtr *)cpy_r_r121;
    *(PyObject * *)cpy_r_r122 = cpy_r_r119;
    cpy_r_r123 = (PyObject *)CPyType_mypy___errors___CompileError;
    PyObject *cpy_r_r124[1] = {cpy_r_r120};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = _PyObject_Vectorcall(cpy_r_r123, cpy_r_r125, 1, 0);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 769, CPyStatic_modulefinder___globals);
        goto CPyL103;
    }
    CPy_DecRef(cpy_r_r120);
    if (likely(Py_TYPE(cpy_r_r126) == CPyType_mypy___errors___CompileError))
        cpy_r_r127 = cpy_r_r126;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "get_search_dirs", 769, CPyStatic_modulefinder___globals, "mypy.errors.CompileError", cpy_r_r126);
        goto CPyL73;
    }
    CPy_Raise(cpy_r_r127);
    CPy_DecRef(cpy_r_r127);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 769, CPyStatic_modulefinder___globals);
        goto CPyL73;
    } else
        goto CPyL104;
CPyL70: ;
    CPy_Unreachable();
CPyL71: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL73;
    } else
        goto CPyL105;
CPyL72: ;
    CPy_Unreachable();
CPyL73: ;
    CPy_RestoreExcInfo(cpy_r_r78);
    CPy_DecRef(cpy_r_r78.f0);
    CPy_DecRef(cpy_r_r78.f1);
    CPy_DecRef(cpy_r_r78.f2);
    cpy_r_r128 = CPy_KeepPropagating();
    if (!cpy_r_r128) goto CPyL76;
    CPy_Unreachable();
CPyL75: ;
    cpy_r_r129.f0 = cpy_r_sys_path;
    cpy_r_r129.f1 = cpy_r_site_packages;
    CPy_INCREF(cpy_r_r129.f0);
    CPy_INCREF(cpy_r_r129.f1);
    CPy_DECREF(cpy_r_sys_path);
    CPy_DECREF(cpy_r_site_packages);
    return cpy_r_r129;
CPyL76: ;
    tuple_T2OO __tmp3625 = { NULL, NULL };
    cpy_r_r130 = __tmp3625;
    return cpy_r_r130;
CPyL77: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL76;
CPyL78: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL76;
CPyL79: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL76;
CPyL80: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL76;
CPyL81: ;
    CPy_DecRef(cpy_r_env);
    goto CPyL47;
CPyL82: ;
    CPy_DecRef(cpy_r_env);
    CPy_DecRef(cpy_r_r36);
    goto CPyL47;
CPyL83: ;
    CPy_DecRef(cpy_r_env);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r42);
    goto CPyL47;
CPyL84: ;
    CPy_DecRef(cpy_r_env);
    CPy_DecRef(cpy_r_r44);
    goto CPyL47;
CPyL85: ;
    CPy_DecRef(cpy_r_env);
    CPy_DecRef(cpy_r_r44);
    CPyTagged_DecRef(cpy_r_r52);
    goto CPyL47;
CPyL86: ;
    CPy_DecRef(cpy_r_env);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r56);
    goto CPyL47;
CPyL87: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL47;
CPyL88: ;
    CPy_DECREF(cpy_r_r69);
    goto CPyL37;
CPyL89: ;
    CPy_DecRef(cpy_r_r69);
    goto CPyL47;
CPyL90: ;
    CPy_DECREF(cpy_r_sys_path);
    CPy_DECREF(cpy_r_r69);
    goto CPyL41;
CPyL91: ;
    CPy_DecRef(cpy_r_sys_path);
    CPy_DecRef(cpy_r_r69);
    goto CPyL47;
CPyL92: ;
    CPy_DECREF(cpy_r_sys_path);
    CPy_DECREF(cpy_r_site_packages);
    CPy_DECREF(cpy_r_r76);
    goto CPyL45;
CPyL93: ;
    CPy_DecRef(cpy_r_err);
    goto CPyL73;
CPyL94: ;
    CPy_DecRef(cpy_r_err);
    CPy_DecRef(cpy_r_r85);
    goto CPyL73;
CPyL95: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL52;
CPyL96: ;
    CPy_DecRef(cpy_r_r93);
    goto CPyL73;
CPyL97: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL55;
CPyL98: ;
    CPy_DecRef(cpy_r_r78.f0);
    CPy_DecRef(cpy_r_r78.f1);
    CPy_DecRef(cpy_r_r78.f2);
    goto CPyL56;
CPyL99: ;
    CPyTagged_DecRef(cpy_r_r107);
    goto CPyL73;
CPyL100: ;
    CPy_DecRef(cpy_r_r111);
    goto CPyL73;
CPyL101: ;
    CPy_DecRef(cpy_r_reason);
    goto CPyL73;
CPyL102: ;
    CPy_DecRef(cpy_r_r119);
    goto CPyL73;
CPyL103: ;
    CPy_DecRef(cpy_r_r120);
    goto CPyL73;
CPyL104: ;
    CPy_DecRef(cpy_r_r78.f0);
    CPy_DecRef(cpy_r_r78.f1);
    CPy_DecRef(cpy_r_r78.f2);
    goto CPyL70;
CPyL105: ;
    CPy_DecRef(cpy_r_r78.f0);
    CPy_DecRef(cpy_r_r78.f1);
    CPy_DecRef(cpy_r_r78.f2);
    goto CPyL72;
}

PyObject *CPyPy_modulefinder___get_search_dirs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"python_executable", 0};
    static CPyArg_Parser parser = {"O:get_search_dirs", kwlist, 0};
    PyObject *obj_python_executable;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_python_executable)) {
        return NULL;
    }
    PyObject *arg_python_executable;
    if (PyUnicode_Check(obj_python_executable))
        arg_python_executable = obj_python_executable;
    else {
        arg_python_executable = NULL;
    }
    if (arg_python_executable != NULL) goto __LL3626;
    if (obj_python_executable == Py_None)
        arg_python_executable = obj_python_executable;
    else {
        arg_python_executable = NULL;
    }
    if (arg_python_executable != NULL) goto __LL3626;
    CPy_TypeError("str or None", obj_python_executable); 
    goto fail;
__LL3626: ;
    tuple_T2OO retval = CPyDef_modulefinder___get_search_dirs(arg_python_executable);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3627 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp3627);
    PyObject *__tmp3628 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp3628);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "get_search_dirs", 738, CPyStatic_modulefinder___globals);
    return NULL;
}

PyObject *CPyDef_modulefinder___compute_search_paths(PyObject *cpy_r_sources, PyObject *cpy_r_options, PyObject *cpy_r_data_dir, PyObject *cpy_r_alt_lib_path) {
    PyObject *cpy_r_r0;
    tuple_T2II cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_lib_path;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_root_dir;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
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
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject **cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_python_path;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyPtr cpy_r_r69;
    int64_t cpy_r_r70;
    CPyTagged cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_dir;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    CPyTagged cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_mypypath;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    int32_t cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject **cpy_r_r117;
    PyObject *cpy_r_r118;
    tuple_T2OO cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_sys_path;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_site_packages;
    CPyTagged cpy_r_r122;
    CPyPtr cpy_r_r123;
    int64_t cpy_r_r124;
    CPyTagged cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_site;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    char cpy_r_r132;
    char cpy_r_r133;
    int32_t cpy_r_r134;
    char cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    CPyTagged cpy_r_r138;
    CPyPtr cpy_r_r139;
    int64_t cpy_r_r140;
    CPyTagged cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    CPyTagged cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    char cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    char cpy_r_r164;
    CPyTagged cpy_r_r165;
    CPyPtr cpy_r_r166;
    int64_t cpy_r_r167;
    CPyTagged cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_p_2;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    char cpy_r_r179;
    CPyTagged cpy_r_r180;
    PyObject *cpy_r_r181;
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
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject **cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject **cpy_r_r209;
    PyObject *cpy_r_r210;
    CPyTagged cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject **cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject **cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    if (cpy_r_alt_lib_path != NULL) goto CPyL124;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_alt_lib_path = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_version;
    CPyTagged_INCREF(cpy_r_r1.f0);
    CPyTagged_INCREF(cpy_r_r1.f1);
    cpy_r_r2 = ((mypy___options___OptionsObject *)cpy_r_options)->_custom_typeshed_dir;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_modulefinder___default_lib_path(cpy_r_data_dir, cpy_r_r1, cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r1.f0);
    CPyTagged_DECREF(cpy_r_r1.f1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 788, CPyStatic_modulefinder___globals);
        goto CPyL125;
    }
    cpy_r_r4 = CPyModule_collections;
    cpy_r_r5 = CPyStatics[3862]; /* 'deque' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 787, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    PyObject *cpy_r_r7[1] = {cpy_r_r3};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 787, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPy_DECREF(cpy_r_r3);
    cpy_r_lib_path = cpy_r_r9;
    cpy_r_r10 = ((mypy___options___OptionsObject *)cpy_r_options)->_use_builtins_fixtures;
    if (!cpy_r_r10) goto CPyL30;
CPyL6: ;
    cpy_r_r11 = CPyStatics[3863]; /* 'MYPY_TEST_PREFIX' */
    cpy_r_r12 = CPyModule_os;
    cpy_r_r13 = CPyStatics[3027]; /* 'getenv' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 798, CPyStatic_modulefinder___globals);
        goto CPyL127;
    }
    cpy_r_r15 = Py_None;
    PyObject *cpy_r_r16[2] = {cpy_r_r11, cpy_r_r15};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r17, 2, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 798, CPyStatic_modulefinder___globals);
        goto CPyL127;
    }
    if (PyUnicode_Check(cpy_r_r18))
        cpy_r_r19 = cpy_r_r18;
    else {
        cpy_r_r19 = NULL;
    }
    if (cpy_r_r19 != NULL) goto __LL3629;
    if (cpy_r_r18 == Py_None)
        cpy_r_r19 = cpy_r_r18;
    else {
        cpy_r_r19 = NULL;
    }
    if (cpy_r_r19 != NULL) goto __LL3629;
    CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 798, CPyStatic_modulefinder___globals, "str or None", cpy_r_r18);
    goto CPyL127;
__LL3629: ;
    cpy_r_root_dir = cpy_r_r19;
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_root_dir != cpy_r_r20;
    if (!cpy_r_r21) goto CPyL128;
    CPy_INCREF(cpy_r_root_dir);
    if (likely(cpy_r_root_dir != Py_None))
        cpy_r_r22 = cpy_r_root_dir;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 798, CPyStatic_modulefinder___globals, "str", cpy_r_root_dir);
        goto CPyL129;
    }
    cpy_r_r23 = CPyStr_IsTrue(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (cpy_r_r23) {
        goto CPyL23;
    } else
        goto CPyL128;
CPyL12: ;
    cpy_r_r24 = CPyStatic_modulefinder___globals;
    cpy_r_r25 = CPyStatics[150]; /* '__file__' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 800, CPyStatic_modulefinder___globals);
        goto CPyL127;
    }
    if (likely(PyUnicode_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 800, CPyStatic_modulefinder___globals, "str", cpy_r_r26);
        goto CPyL127;
    }
    cpy_r_r28 = CPyModule_os;
    cpy_r_r29 = CPyStatics[142]; /* 'path' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 800, CPyStatic_modulefinder___globals);
        goto CPyL130;
    }
    cpy_r_r31 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 800, CPyStatic_modulefinder___globals);
        goto CPyL130;
    }
    PyObject *cpy_r_r33[1] = {cpy_r_r27};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 1, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 800, CPyStatic_modulefinder___globals);
        goto CPyL130;
    }
    CPy_DECREF(cpy_r_r27);
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 800, CPyStatic_modulefinder___globals, "str", cpy_r_r35);
        goto CPyL127;
    }
    cpy_r_r37 = CPyModule_os;
    cpy_r_r38 = CPyStatics[142]; /* 'path' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 800, CPyStatic_modulefinder___globals);
        goto CPyL131;
    }
    cpy_r_r40 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 800, CPyStatic_modulefinder___globals);
        goto CPyL131;
    }
    PyObject *cpy_r_r42[1] = {cpy_r_r36};
    cpy_r_r43 = (PyObject **)&cpy_r_r42;
    cpy_r_r44 = _PyObject_Vectorcall(cpy_r_r41, cpy_r_r43, 1, 0);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 800, CPyStatic_modulefinder___globals);
        goto CPyL131;
    }
    CPy_DECREF(cpy_r_r36);
    if (likely(PyUnicode_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 800, CPyStatic_modulefinder___globals, "str", cpy_r_r44);
        goto CPyL127;
    }
    cpy_r_root_dir = cpy_r_r45;
CPyL23: ;
    if (likely(cpy_r_root_dir != Py_None))
        cpy_r_r46 = cpy_r_root_dir;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 801, CPyStatic_modulefinder___globals, "str", cpy_r_root_dir);
        goto CPyL127;
    }
    cpy_r_r47 = CPyStatics[3864]; /* 'test-data' */
    cpy_r_r48 = CPyStatics[3865]; /* 'unit' */
    cpy_r_r49 = CPyStatics[3866]; /* 'lib-stub' */
    cpy_r_r50 = CPyModule_os;
    cpy_r_r51 = CPyStatics[142]; /* 'path' */
    cpy_r_r52 = CPyObject_GetAttr(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 801, CPyStatic_modulefinder___globals);
        goto CPyL132;
    }
    cpy_r_r53 = CPyStatics[175]; /* 'join' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 801, CPyStatic_modulefinder___globals);
        goto CPyL132;
    }
    PyObject *cpy_r_r55[4] = {cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = _PyObject_Vectorcall(cpy_r_r54, cpy_r_r56, 4, 0);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 801, CPyStatic_modulefinder___globals);
        goto CPyL132;
    }
    CPy_DECREF(cpy_r_r46);
    if (likely(PyUnicode_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 801, CPyStatic_modulefinder___globals, "str", cpy_r_r57);
        goto CPyL127;
    }
    cpy_r_r59 = CPyStatics[3867]; /* 'appendleft' */
    PyObject *cpy_r_r60[2] = {cpy_r_lib_path, cpy_r_r58};
    cpy_r_r61 = (PyObject **)&cpy_r_r60;
    cpy_r_r62 = PyObject_VectorcallMethod(cpy_r_r59, cpy_r_r61, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 801, CPyStatic_modulefinder___globals);
        goto CPyL133;
    } else
        goto CPyL134;
CPyL29: ;
    CPy_DECREF(cpy_r_r58);
CPyL30: ;
    cpy_r_r63 = PyList_New(0);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 804, CPyStatic_modulefinder___globals);
        goto CPyL127;
    }
    cpy_r_python_path = cpy_r_r63;
    cpy_r_r64 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r65 = cpy_r_alt_lib_path != cpy_r_r64;
    if (!cpy_r_r65) goto CPyL34;
    CPy_INCREF(cpy_r_alt_lib_path);
    if (likely(cpy_r_alt_lib_path != Py_None))
        cpy_r_r66 = cpy_r_alt_lib_path;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 776, CPyStatic_modulefinder___globals, "str", cpy_r_alt_lib_path);
        goto CPyL135;
    }
    cpy_r_r67 = CPyStr_IsTrue(cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (cpy_r_r67) goto CPyL54;
CPyL34: ;
    cpy_r_r68 = 0;
CPyL35: ;
    cpy_r_r69 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r70 = *(int64_t *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 << 1;
    cpy_r_r72 = (Py_ssize_t)cpy_r_r68 < (Py_ssize_t)cpy_r_r71;
    if (!cpy_r_r72) goto CPyL45;
    cpy_r_r73 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r68);
    if (likely(Py_TYPE(cpy_r_r73) == CPyType_modulefinder___BuildSource))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 806, CPyStatic_modulefinder___globals, "mypy.modulefinder.BuildSource", cpy_r_r73);
        goto CPyL135;
    }
    cpy_r_source = cpy_r_r74;
    cpy_r_r75 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_base_dir;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r77 = cpy_r_r75 != cpy_r_r76;
    if (!cpy_r_r77) goto CPyL136;
    if (likely(cpy_r_r75 != Py_None))
        cpy_r_r78 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 808, CPyStatic_modulefinder___globals, "str", cpy_r_r75);
        goto CPyL137;
    }
    cpy_r_r79 = CPyStr_IsTrue(cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (!cpy_r_r79) goto CPyL138;
    cpy_r_r80 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_base_dir;
    CPy_INCREF(cpy_r_r80);
    CPy_DECREF(cpy_r_source);
    if (likely(cpy_r_r80 != Py_None))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 809, CPyStatic_modulefinder___globals, "str", cpy_r_r80);
        goto CPyL135;
    }
    cpy_r_dir = cpy_r_r81;
    cpy_r_r82 = PySequence_Contains(cpy_r_python_path, cpy_r_dir);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 810, CPyStatic_modulefinder___globals);
        goto CPyL139;
    }
    cpy_r_r84 = cpy_r_r82;
    cpy_r_r85 = cpy_r_r84 ^ 1;
    if (!cpy_r_r85) goto CPyL140;
    cpy_r_r86 = PyList_Append(cpy_r_python_path, cpy_r_dir);
    CPy_DECREF(cpy_r_dir);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 811, CPyStatic_modulefinder___globals);
        goto CPyL135;
    }
CPyL44: ;
    cpy_r_r88 = cpy_r_r68 + 2;
    cpy_r_r68 = cpy_r_r88;
    goto CPyL35;
CPyL45: ;
    cpy_r_r89 = ((mypy___options___OptionsObject *)cpy_r_options)->_bazel;
    if (!cpy_r_r89) goto CPyL47;
CPyL46: ;
    cpy_r_r90 = CPyStatics[224]; /* '.' */
    CPy_INCREF(cpy_r_r90);
    cpy_r_dir = cpy_r_r90;
    goto CPyL51;
CPyL47: ;
    cpy_r_r91 = CPyModule_os;
    cpy_r_r92 = CPyStatics[144]; /* 'getcwd' */
    cpy_r_r93 = CPyObject_GetAttr(cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 822, CPyStatic_modulefinder___globals);
        goto CPyL135;
    }
    cpy_r_r94 = _PyObject_Vectorcall(cpy_r_r93, 0, 0, 0);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 822, CPyStatic_modulefinder___globals);
        goto CPyL135;
    }
    if (likely(PyUnicode_Check(cpy_r_r94)))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 822, CPyStatic_modulefinder___globals, "str", cpy_r_r94);
        goto CPyL135;
    }
    cpy_r_dir = cpy_r_r95;
CPyL51: ;
    cpy_r_r96 = PySequence_Contains(cpy_r_lib_path, cpy_r_dir);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 823, CPyStatic_modulefinder___globals);
        goto CPyL139;
    }
    cpy_r_r98 = cpy_r_r96;
    cpy_r_r99 = cpy_r_r98 ^ 1;
    if (!cpy_r_r99) goto CPyL141;
    cpy_r_r100 = CPyList_Insert(cpy_r_python_path, 0, cpy_r_dir);
    CPy_DECREF(cpy_r_dir);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 824, CPyStatic_modulefinder___globals);
        goto CPyL135;
    }
CPyL54: ;
    cpy_r_r102 = CPyDef_modulefinder___mypy_path();
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 827, CPyStatic_modulefinder___globals);
        goto CPyL135;
    }
    cpy_r_mypypath = cpy_r_r102;
    cpy_r_r103 = ((mypy___options___OptionsObject *)cpy_r_options)->_mypy_path;
    CPy_INCREF(cpy_r_r103);
    cpy_r_r104 = CPyList_Extend(cpy_r_mypypath, cpy_r_r103);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 830, CPyStatic_modulefinder___globals);
        goto CPyL142;
    } else
        goto CPyL143;
CPyL56: ;
    cpy_r_r105 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r106 = cpy_r_alt_lib_path != cpy_r_r105;
    if (!cpy_r_r106) goto CPyL144;
    CPy_INCREF(cpy_r_alt_lib_path);
    if (likely(cpy_r_alt_lib_path != Py_None))
        cpy_r_r107 = cpy_r_alt_lib_path;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 776, CPyStatic_modulefinder___globals, "str", cpy_r_alt_lib_path);
        goto CPyL142;
    }
    cpy_r_r108 = CPyStr_IsTrue(cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    if (!cpy_r_r108) goto CPyL144;
    if (likely(cpy_r_alt_lib_path != Py_None))
        cpy_r_r109 = cpy_r_alt_lib_path;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 835, CPyStatic_modulefinder___globals, "str", cpy_r_alt_lib_path);
        goto CPyL145;
    }
    cpy_r_r110 = CPyList_Insert(cpy_r_mypypath, 0, cpy_r_r109);
    CPy_DECREF(cpy_r_r109);
    cpy_r_r111 = cpy_r_r110 >= 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 835, CPyStatic_modulefinder___globals);
        goto CPyL145;
    }
CPyL61: ;
    cpy_r_r112 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_executable;
    CPy_INCREF(cpy_r_r112);
    cpy_r_r113 = CPyStatic_modulefinder___globals;
    cpy_r_r114 = CPyStatics[3043]; /* 'get_search_dirs' */
    cpy_r_r115 = CPyDict_GetItem(cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 837, CPyStatic_modulefinder___globals);
        goto CPyL146;
    }
    PyObject *cpy_r_r116[1] = {cpy_r_r112};
    cpy_r_r117 = (PyObject **)&cpy_r_r116;
    cpy_r_r118 = _PyObject_Vectorcall(cpy_r_r115, cpy_r_r117, 1, 0);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 837, CPyStatic_modulefinder___globals);
        goto CPyL146;
    }
    CPy_DECREF(cpy_r_r112);
    PyObject *__tmp3630;
    if (unlikely(!(PyTuple_Check(cpy_r_r118) && PyTuple_GET_SIZE(cpy_r_r118) == 2))) {
        __tmp3630 = NULL;
        goto __LL3631;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r118, 0))))
        __tmp3630 = PyTuple_GET_ITEM(cpy_r_r118, 0);
    else {
        __tmp3630 = NULL;
    }
    if (__tmp3630 == NULL) goto __LL3631;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r118, 1))))
        __tmp3630 = PyTuple_GET_ITEM(cpy_r_r118, 1);
    else {
        __tmp3630 = NULL;
    }
    if (__tmp3630 == NULL) goto __LL3631;
    __tmp3630 = cpy_r_r118;
__LL3631: ;
    if (unlikely(__tmp3630 == NULL)) {
        CPy_TypeError("tuple[list, list]", cpy_r_r118); cpy_r_r119 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3632 = PyTuple_GET_ITEM(cpy_r_r118, 0);
        CPy_INCREF(__tmp3632);
        PyObject *__tmp3633;
        if (likely(PyList_Check(__tmp3632)))
            __tmp3633 = __tmp3632;
        else {
            CPy_TypeError("list", __tmp3632); 
            __tmp3633 = NULL;
        }
        cpy_r_r119.f0 = __tmp3633;
        PyObject *__tmp3634 = PyTuple_GET_ITEM(cpy_r_r118, 1);
        CPy_INCREF(__tmp3634);
        PyObject *__tmp3635;
        if (likely(PyList_Check(__tmp3634)))
            __tmp3635 = __tmp3634;
        else {
            CPy_TypeError("list", __tmp3634); 
            __tmp3635 = NULL;
        }
        cpy_r_r119.f1 = __tmp3635;
    }
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119.f0 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 837, CPyStatic_modulefinder___globals);
        goto CPyL145;
    }
    cpy_r_r120 = cpy_r_r119.f0;
    CPy_INCREF(cpy_r_r120);
    cpy_r_sys_path = cpy_r_r120;
    cpy_r_r121 = cpy_r_r119.f1;
    CPy_INCREF(cpy_r_r121);
    CPy_DECREF(cpy_r_r119.f0);
    CPy_DECREF(cpy_r_r119.f1);
    cpy_r_site_packages = cpy_r_r121;
    cpy_r_r122 = 0;
CPyL65: ;
    cpy_r_r123 = (CPyPtr)&((PyVarObject *)cpy_r_site_packages)->ob_size;
    cpy_r_r124 = *(int64_t *)cpy_r_r123;
    cpy_r_r125 = cpy_r_r124 << 1;
    cpy_r_r126 = (Py_ssize_t)cpy_r_r122 < (Py_ssize_t)cpy_r_r125;
    if (!cpy_r_r126) goto CPyL111;
    cpy_r_r127 = CPyList_GetItemUnsafe(cpy_r_site_packages, cpy_r_r122);
    if (likely(PyUnicode_Check(cpy_r_r127)))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 839, CPyStatic_modulefinder___globals, "str", cpy_r_r127);
        goto CPyL147;
    }
    cpy_r_site = cpy_r_r128;
    cpy_r_r129 = PySequence_Contains(cpy_r_lib_path, cpy_r_site);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 840, CPyStatic_modulefinder___globals);
        goto CPyL148;
    }
    cpy_r_r131 = cpy_r_r129;
    cpy_r_r132 = cpy_r_r131 ^ 1;
    if (cpy_r_r132) {
        goto CPyL71;
    } else
        goto CPyL149;
CPyL69: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r133 = 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 840, CPyStatic_modulefinder___globals);
        goto CPyL123;
    }
    CPy_Unreachable();
CPyL71: ;
    cpy_r_r134 = PySequence_Contains(cpy_r_mypypath, cpy_r_site);
    cpy_r_r135 = cpy_r_r134 >= 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 842, CPyStatic_modulefinder___globals);
        goto CPyL148;
    }
    cpy_r_r136 = cpy_r_r134;
    if (cpy_r_r136) goto CPyL101;
    cpy_r_r137 = 0;
    cpy_r_r138 = 0;
CPyL74: ;
    cpy_r_r139 = (CPyPtr)&((PyVarObject *)cpy_r_mypypath)->ob_size;
    cpy_r_r140 = *(int64_t *)cpy_r_r139;
    cpy_r_r141 = cpy_r_r140 << 1;
    cpy_r_r142 = (Py_ssize_t)cpy_r_r138 < (Py_ssize_t)cpy_r_r141;
    if (!cpy_r_r142) goto CPyL83;
    cpy_r_r143 = CPyList_GetItemUnsafe(cpy_r_mypypath, cpy_r_r138);
    if (likely(PyUnicode_Check(cpy_r_r143)))
        cpy_r_r144 = cpy_r_r143;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 843, CPyStatic_modulefinder___globals, "str", cpy_r_r143);
        goto CPyL148;
    }
    cpy_r_p = cpy_r_r144;
    cpy_r_r145 = CPyModule_os;
    cpy_r_r146 = CPyStatics[142]; /* 'path' */
    cpy_r_r147 = CPyObject_GetAttr(cpy_r_r145, cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 843, CPyStatic_modulefinder___globals);
        goto CPyL150;
    }
    cpy_r_r148 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r149 = CPyObject_GetAttr(cpy_r_r147, cpy_r_r148);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 843, CPyStatic_modulefinder___globals);
        goto CPyL150;
    }
    if (likely(PyUnicode_Check(cpy_r_r149)))
        cpy_r_r150 = cpy_r_r149;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 843, CPyStatic_modulefinder___globals, "str", cpy_r_r149);
        goto CPyL150;
    }
    cpy_r_r151 = PyUnicode_Concat(cpy_r_site, cpy_r_r150);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 843, CPyStatic_modulefinder___globals);
        goto CPyL150;
    }
    cpy_r_r152 = CPyStr_Startswith(cpy_r_p, cpy_r_r151);
    CPy_DECREF(cpy_r_p);
    CPy_DECREF(cpy_r_r151);
    if (!cpy_r_r152) goto CPyL82;
    cpy_r_r137 = 1;
    goto CPyL83;
CPyL82: ;
    cpy_r_r153 = cpy_r_r138 + 2;
    cpy_r_r138 = cpy_r_r153;
    goto CPyL74;
CPyL83: ;
    if (cpy_r_r137) goto CPyL101;
    cpy_r_r154 = CPyModule_os;
    cpy_r_r155 = CPyStatics[142]; /* 'path' */
    cpy_r_r156 = CPyObject_GetAttr(cpy_r_r154, cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 844, CPyStatic_modulefinder___globals);
        goto CPyL148;
    }
    cpy_r_r157 = CPyStatics[1513]; /* 'altsep' */
    cpy_r_r158 = CPyObject_GetAttr(cpy_r_r156, cpy_r_r157);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 844, CPyStatic_modulefinder___globals);
        goto CPyL148;
    }
    if (PyUnicode_Check(cpy_r_r158))
        cpy_r_r159 = cpy_r_r158;
    else {
        cpy_r_r159 = NULL;
    }
    if (cpy_r_r159 != NULL) goto __LL3636;
    if (cpy_r_r158 == Py_None)
        cpy_r_r159 = cpy_r_r158;
    else {
        cpy_r_r159 = NULL;
    }
    if (cpy_r_r159 != NULL) goto __LL3636;
    CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 844, CPyStatic_modulefinder___globals, "str or None", cpy_r_r158);
    goto CPyL148;
__LL3636: ;
    cpy_r_r160 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r161 = cpy_r_r159 != cpy_r_r160;
    if (!cpy_r_r161) goto CPyL151;
    if (likely(cpy_r_r159 != Py_None))
        cpy_r_r162 = cpy_r_r159;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 844, CPyStatic_modulefinder___globals, "str", cpy_r_r159);
        goto CPyL148;
    }
    cpy_r_r163 = CPyStr_IsTrue(cpy_r_r162);
    CPy_DECREF(cpy_r_r162);
    if (!cpy_r_r163) goto CPyL152;
    cpy_r_r164 = 0;
    cpy_r_r165 = 0;
CPyL91: ;
    cpy_r_r166 = (CPyPtr)&((PyVarObject *)cpy_r_mypypath)->ob_size;
    cpy_r_r167 = *(int64_t *)cpy_r_r166;
    cpy_r_r168 = cpy_r_r167 << 1;
    cpy_r_r169 = (Py_ssize_t)cpy_r_r165 < (Py_ssize_t)cpy_r_r168;
    if (!cpy_r_r169) goto CPyL100;
    cpy_r_r170 = CPyList_GetItemUnsafe(cpy_r_mypypath, cpy_r_r165);
    if (likely(PyUnicode_Check(cpy_r_r170)))
        cpy_r_r171 = cpy_r_r170;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 844, CPyStatic_modulefinder___globals, "str", cpy_r_r170);
        goto CPyL148;
    }
    cpy_r_p_2 = cpy_r_r171;
    cpy_r_r172 = CPyModule_os;
    cpy_r_r173 = CPyStatics[142]; /* 'path' */
    cpy_r_r174 = CPyObject_GetAttr(cpy_r_r172, cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 844, CPyStatic_modulefinder___globals);
        goto CPyL153;
    }
    cpy_r_r175 = CPyStatics[1513]; /* 'altsep' */
    cpy_r_r176 = CPyObject_GetAttr(cpy_r_r174, cpy_r_r175);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 844, CPyStatic_modulefinder___globals);
        goto CPyL153;
    }
    if (likely(PyUnicode_Check(cpy_r_r176)))
        cpy_r_r177 = cpy_r_r176;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 844, CPyStatic_modulefinder___globals, "str", cpy_r_r176);
        goto CPyL153;
    }
    cpy_r_r178 = PyUnicode_Concat(cpy_r_site, cpy_r_r177);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 844, CPyStatic_modulefinder___globals);
        goto CPyL153;
    }
    cpy_r_r179 = CPyStr_Startswith(cpy_r_p_2, cpy_r_r178);
    CPy_DECREF(cpy_r_p_2);
    CPy_DECREF(cpy_r_r178);
    if (!cpy_r_r179) goto CPyL99;
    cpy_r_r164 = 1;
    goto CPyL100;
CPyL99: ;
    cpy_r_r180 = cpy_r_r165 + 2;
    cpy_r_r165 = cpy_r_r180;
    goto CPyL91;
CPyL100: ;
    if (!cpy_r_r164) goto CPyL152;
CPyL101: ;
    cpy_r_r181 = CPyStatics[3868]; /* ' is in the MYPYPATH. Please remove it.' */
    cpy_r_r182 = CPyStr_Build(2, cpy_r_site, cpy_r_r181);
    CPy_DECREF(cpy_r_site);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 846, CPyStatic_modulefinder___globals);
        goto CPyL147;
    }
    cpy_r_r183 = CPyModule_sys;
    cpy_r_r184 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r185 = CPyObject_GetAttr(cpy_r_r183, cpy_r_r184);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 846, CPyStatic_modulefinder___globals);
        goto CPyL154;
    }
    cpy_r_r186 = CPyModule_builtins;
    cpy_r_r187 = CPyStatics[190]; /* 'print' */
    cpy_r_r188 = CPyObject_GetAttr(cpy_r_r186, cpy_r_r187);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 846, CPyStatic_modulefinder___globals);
        goto CPyL155;
    }
    PyObject *cpy_r_r189[2] = {cpy_r_r182, cpy_r_r185};
    cpy_r_r190 = (PyObject **)&cpy_r_r189;
    cpy_r_r191 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r192 = _PyObject_Vectorcall(cpy_r_r188, cpy_r_r190, 1, cpy_r_r191);
    CPy_DECREF(cpy_r_r188);
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 846, CPyStatic_modulefinder___globals);
        goto CPyL155;
    } else
        goto CPyL156;
CPyL105: ;
    CPy_DECREF(cpy_r_r182);
    CPy_DECREF(cpy_r_r185);
    cpy_r_r193 = CPyStatics[3869]; /* ('See '
                                      'https://mypy.readthedocs.io/en/stable/running_mypy.html#how-mypy-handles-imports '
                                      'for more info') */
    cpy_r_r194 = CPyModule_sys;
    cpy_r_r195 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r196 = CPyObject_GetAttr(cpy_r_r194, cpy_r_r195);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 850, CPyStatic_modulefinder___globals);
        goto CPyL147;
    }
    cpy_r_r197 = CPyModule_builtins;
    cpy_r_r198 = CPyStatics[190]; /* 'print' */
    cpy_r_r199 = CPyObject_GetAttr(cpy_r_r197, cpy_r_r198);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 847, CPyStatic_modulefinder___globals);
        goto CPyL157;
    }
    PyObject *cpy_r_r200[2] = {cpy_r_r193, cpy_r_r196};
    cpy_r_r201 = (PyObject **)&cpy_r_r200;
    cpy_r_r202 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r203 = _PyObject_Vectorcall(cpy_r_r199, cpy_r_r201, 1, cpy_r_r202);
    CPy_DECREF(cpy_r_r199);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 847, CPyStatic_modulefinder___globals);
        goto CPyL157;
    } else
        goto CPyL158;
CPyL108: ;
    CPy_DECREF(cpy_r_r196);
    cpy_r_r204 = CPyModule_sys;
    cpy_r_r205 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r206 = CPyObject_GetAttr(cpy_r_r204, cpy_r_r205);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 852, CPyStatic_modulefinder___globals);
        goto CPyL147;
    }
    cpy_r_r207 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r208[1] = {cpy_r_r207};
    cpy_r_r209 = (PyObject **)&cpy_r_r208;
    cpy_r_r210 = _PyObject_Vectorcall(cpy_r_r206, cpy_r_r209, 1, 0);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 852, CPyStatic_modulefinder___globals);
        goto CPyL147;
    } else
        goto CPyL159;
CPyL110: ;
    cpy_r_r211 = cpy_r_r122 + 2;
    cpy_r_r122 = cpy_r_r211;
    goto CPyL65;
CPyL111: ;
    cpy_r_r212 = CPyModule_builtins;
    cpy_r_r213 = CPyStatics[2328]; /* 'reversed' */
    cpy_r_r214 = CPyObject_GetAttr(cpy_r_r212, cpy_r_r213);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 855, CPyStatic_modulefinder___globals);
        goto CPyL147;
    }
    PyObject *cpy_r_r215[1] = {cpy_r_python_path};
    cpy_r_r216 = (PyObject **)&cpy_r_r215;
    cpy_r_r217 = _PyObject_Vectorcall(cpy_r_r214, cpy_r_r216, 1, 0);
    CPy_DECREF(cpy_r_r214);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 855, CPyStatic_modulefinder___globals);
        goto CPyL147;
    }
    CPy_DECREF(cpy_r_python_path);
    cpy_r_r218 = PySequence_Tuple(cpy_r_r217);
    CPy_DECREF(cpy_r_r217);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 855, CPyStatic_modulefinder___globals);
        goto CPyL160;
    }
    cpy_r_r219 = PyList_AsTuple(cpy_r_mypypath);
    CPy_DECREF(cpy_r_mypypath);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 856, CPyStatic_modulefinder___globals);
        goto CPyL161;
    }
    cpy_r_r220 = PyNumber_Add(cpy_r_sys_path, cpy_r_site_packages);
    CPy_DECREF(cpy_r_sys_path);
    CPy_DECREF(cpy_r_site_packages);
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 857, CPyStatic_modulefinder___globals);
        goto CPyL162;
    }
    if (likely(PyList_Check(cpy_r_r220)))
        cpy_r_r221 = cpy_r_r220;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 857, CPyStatic_modulefinder___globals, "list", cpy_r_r220);
        goto CPyL162;
    }
    cpy_r_r222 = PyList_AsTuple(cpy_r_r221);
    CPy_DECREF(cpy_r_r221);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 857, CPyStatic_modulefinder___globals);
        goto CPyL162;
    }
    cpy_r_r223 = PySequence_Tuple(cpy_r_lib_path);
    CPy_DECREF(cpy_r_lib_path);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 858, CPyStatic_modulefinder___globals);
        goto CPyL163;
    }
    cpy_r_r224 = CPyStatic_modulefinder___globals;
    cpy_r_r225 = CPyStatics[574]; /* 'SearchPaths' */
    cpy_r_r226 = CPyDict_GetItem(cpy_r_r224, cpy_r_r225);
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 854, CPyStatic_modulefinder___globals);
        goto CPyL164;
    }
    PyObject *cpy_r_r227[4] = {cpy_r_r218, cpy_r_r219, cpy_r_r222, cpy_r_r223};
    cpy_r_r228 = (PyObject **)&cpy_r_r227;
    cpy_r_r229 = CPyStatics[9531]; /* ('python_path', 'mypy_path', 'package_path',
                                      'typeshed_path') */
    cpy_r_r230 = _PyObject_Vectorcall(cpy_r_r226, cpy_r_r228, 0, cpy_r_r229);
    CPy_DECREF(cpy_r_r226);
    if (unlikely(cpy_r_r230 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 854, CPyStatic_modulefinder___globals);
        goto CPyL164;
    }
    CPy_DECREF(cpy_r_r218);
    CPy_DECREF(cpy_r_r219);
    CPy_DECREF(cpy_r_r222);
    CPy_DECREF(cpy_r_r223);
    if (likely(PyTuple_Check(cpy_r_r230)))
        cpy_r_r231 = cpy_r_r230;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "compute_search_paths", 854, CPyStatic_modulefinder___globals, "tuple", cpy_r_r230);
        goto CPyL123;
    }
    return cpy_r_r231;
CPyL123: ;
    cpy_r_r232 = NULL;
    return cpy_r_r232;
CPyL124: ;
    CPy_INCREF(cpy_r_alt_lib_path);
    goto CPyL2;
CPyL125: ;
    CPy_DecRef(cpy_r_alt_lib_path);
    goto CPyL123;
CPyL126: ;
    CPy_DecRef(cpy_r_alt_lib_path);
    CPy_DecRef(cpy_r_r3);
    goto CPyL123;
CPyL127: ;
    CPy_DecRef(cpy_r_alt_lib_path);
    CPy_DecRef(cpy_r_lib_path);
    goto CPyL123;
CPyL128: ;
    CPy_DECREF(cpy_r_root_dir);
    goto CPyL12;
CPyL129: ;
    CPy_DecRef(cpy_r_alt_lib_path);
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_root_dir);
    goto CPyL123;
CPyL130: ;
    CPy_DecRef(cpy_r_alt_lib_path);
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_r27);
    goto CPyL123;
CPyL131: ;
    CPy_DecRef(cpy_r_alt_lib_path);
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_r36);
    goto CPyL123;
CPyL132: ;
    CPy_DecRef(cpy_r_alt_lib_path);
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_r46);
    goto CPyL123;
CPyL133: ;
    CPy_DecRef(cpy_r_alt_lib_path);
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_r58);
    goto CPyL123;
CPyL134: ;
    CPy_DECREF(cpy_r_r62);
    goto CPyL29;
CPyL135: ;
    CPy_DecRef(cpy_r_alt_lib_path);
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_python_path);
    goto CPyL123;
CPyL136: ;
    CPy_DECREF(cpy_r_source);
    CPy_DECREF(cpy_r_r75);
    goto CPyL44;
CPyL137: ;
    CPy_DecRef(cpy_r_alt_lib_path);
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_python_path);
    CPy_DecRef(cpy_r_source);
    goto CPyL123;
CPyL138: ;
    CPy_DECREF(cpy_r_source);
    goto CPyL44;
CPyL139: ;
    CPy_DecRef(cpy_r_alt_lib_path);
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_python_path);
    CPy_DecRef(cpy_r_dir);
    goto CPyL123;
CPyL140: ;
    CPy_DECREF(cpy_r_dir);
    goto CPyL44;
CPyL141: ;
    CPy_DECREF(cpy_r_dir);
    goto CPyL54;
CPyL142: ;
    CPy_DecRef(cpy_r_alt_lib_path);
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_python_path);
    CPy_DecRef(cpy_r_mypypath);
    goto CPyL123;
CPyL143: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL56;
CPyL144: ;
    CPy_DECREF(cpy_r_alt_lib_path);
    goto CPyL61;
CPyL145: ;
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_python_path);
    CPy_DecRef(cpy_r_mypypath);
    goto CPyL123;
CPyL146: ;
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_python_path);
    CPy_DecRef(cpy_r_mypypath);
    CPy_DecRef(cpy_r_r112);
    goto CPyL123;
CPyL147: ;
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_python_path);
    CPy_DecRef(cpy_r_mypypath);
    CPy_DecRef(cpy_r_sys_path);
    CPy_DecRef(cpy_r_site_packages);
    goto CPyL123;
CPyL148: ;
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_python_path);
    CPy_DecRef(cpy_r_mypypath);
    CPy_DecRef(cpy_r_sys_path);
    CPy_DecRef(cpy_r_site_packages);
    CPy_DecRef(cpy_r_site);
    goto CPyL123;
CPyL149: ;
    CPy_DECREF(cpy_r_lib_path);
    CPy_DECREF(cpy_r_python_path);
    CPy_DECREF(cpy_r_mypypath);
    CPy_DECREF(cpy_r_sys_path);
    CPy_DECREF(cpy_r_site_packages);
    CPy_DECREF(cpy_r_site);
    goto CPyL69;
CPyL150: ;
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_python_path);
    CPy_DecRef(cpy_r_mypypath);
    CPy_DecRef(cpy_r_sys_path);
    CPy_DecRef(cpy_r_site_packages);
    CPy_DecRef(cpy_r_site);
    CPy_DecRef(cpy_r_p);
    goto CPyL123;
CPyL151: ;
    CPy_DECREF(cpy_r_site);
    CPy_DECREF(cpy_r_r159);
    goto CPyL110;
CPyL152: ;
    CPy_DECREF(cpy_r_site);
    goto CPyL110;
CPyL153: ;
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_python_path);
    CPy_DecRef(cpy_r_mypypath);
    CPy_DecRef(cpy_r_sys_path);
    CPy_DecRef(cpy_r_site_packages);
    CPy_DecRef(cpy_r_site);
    CPy_DecRef(cpy_r_p_2);
    goto CPyL123;
CPyL154: ;
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_python_path);
    CPy_DecRef(cpy_r_mypypath);
    CPy_DecRef(cpy_r_sys_path);
    CPy_DecRef(cpy_r_site_packages);
    CPy_DecRef(cpy_r_r182);
    goto CPyL123;
CPyL155: ;
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_python_path);
    CPy_DecRef(cpy_r_mypypath);
    CPy_DecRef(cpy_r_sys_path);
    CPy_DecRef(cpy_r_site_packages);
    CPy_DecRef(cpy_r_r182);
    CPy_DecRef(cpy_r_r185);
    goto CPyL123;
CPyL156: ;
    CPy_DECREF(cpy_r_r192);
    goto CPyL105;
CPyL157: ;
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_python_path);
    CPy_DecRef(cpy_r_mypypath);
    CPy_DecRef(cpy_r_sys_path);
    CPy_DecRef(cpy_r_site_packages);
    CPy_DecRef(cpy_r_r196);
    goto CPyL123;
CPyL158: ;
    CPy_DECREF(cpy_r_r203);
    goto CPyL108;
CPyL159: ;
    CPy_DECREF(cpy_r_r210);
    goto CPyL110;
CPyL160: ;
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_mypypath);
    CPy_DecRef(cpy_r_sys_path);
    CPy_DecRef(cpy_r_site_packages);
    goto CPyL123;
CPyL161: ;
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_sys_path);
    CPy_DecRef(cpy_r_site_packages);
    CPy_DecRef(cpy_r_r218);
    goto CPyL123;
CPyL162: ;
    CPy_DecRef(cpy_r_lib_path);
    CPy_DecRef(cpy_r_r218);
    CPy_DecRef(cpy_r_r219);
    goto CPyL123;
CPyL163: ;
    CPy_DecRef(cpy_r_r218);
    CPy_DecRef(cpy_r_r219);
    CPy_DecRef(cpy_r_r222);
    goto CPyL123;
CPyL164: ;
    CPy_DecRef(cpy_r_r218);
    CPy_DecRef(cpy_r_r219);
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r223);
    goto CPyL123;
}

PyObject *CPyPy_modulefinder___compute_search_paths(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"sources", "options", "data_dir", "alt_lib_path", 0};
    static CPyArg_Parser parser = {"OOO|O:compute_search_paths", kwlist, 0};
    PyObject *obj_sources;
    PyObject *obj_options;
    PyObject *obj_data_dir;
    PyObject *obj_alt_lib_path = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sources, &obj_options, &obj_data_dir, &obj_alt_lib_path)) {
        return NULL;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_data_dir;
    if (likely(PyUnicode_Check(obj_data_dir)))
        arg_data_dir = obj_data_dir;
    else {
        CPy_TypeError("str", obj_data_dir); 
        goto fail;
    }
    PyObject *arg_alt_lib_path;
    if (obj_alt_lib_path == NULL) {
        arg_alt_lib_path = NULL;
        goto __LL3637;
    }
    if (PyUnicode_Check(obj_alt_lib_path))
        arg_alt_lib_path = obj_alt_lib_path;
    else {
        arg_alt_lib_path = NULL;
    }
    if (arg_alt_lib_path != NULL) goto __LL3637;
    if (obj_alt_lib_path == Py_None)
        arg_alt_lib_path = obj_alt_lib_path;
    else {
        arg_alt_lib_path = NULL;
    }
    if (arg_alt_lib_path != NULL) goto __LL3637;
    CPy_TypeError("str or None", obj_alt_lib_path); 
    goto fail;
__LL3637: ;
    PyObject *retval = CPyDef_modulefinder___compute_search_paths(arg_sources, arg_options, arg_data_dir, arg_alt_lib_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "compute_search_paths", 775, CPyStatic_modulefinder___globals);
    return NULL;
}

PyObject *CPyDef_modulefinder___load_stdlib_py_versions(PyObject *cpy_r_custom_typeshed_dir) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
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
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_typeshed_dir;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_stdlib_dir;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_versions_path;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    tuple_T3OOO cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject **cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject **cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_line;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject **cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_version_range;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_versions;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    tuple_T2II cpy_r_r117;
    tuple_T2II cpy_r_min_version;
    CPyPtr cpy_r_r118;
    int64_t cpy_r_r119;
    CPyTagged cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject **cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    tuple_T2II cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_max_version;
    tuple_T2T2IIO cpy_r_r136;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    char cpy_r_r140;
    tuple_T3OOO cpy_r_r141;
    tuple_T3OOO cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject **cpy_r_r147;
    PyObject *cpy_r_r148;
    int32_t cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    char cpy_r_r152;
    tuple_T3OOO cpy_r_r153;
    tuple_T3OOO cpy_r_r154;
    tuple_T3OOO cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject **cpy_r_r158;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_custom_typeshed_dir != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL5;
    CPy_INCREF(cpy_r_custom_typeshed_dir);
    if (likely(cpy_r_custom_typeshed_dir != Py_None))
        cpy_r_r2 = cpy_r_custom_typeshed_dir;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 862, CPyStatic_modulefinder___globals, "str", cpy_r_custom_typeshed_dir);
        goto CPyL96;
    }
    cpy_r_r3 = CPyStr_IsTrue(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (!cpy_r_r3) goto CPyL5;
    CPy_INCREF(cpy_r_custom_typeshed_dir);
    if (likely(cpy_r_custom_typeshed_dir != Py_None))
        cpy_r_r4 = cpy_r_custom_typeshed_dir;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 870, CPyStatic_modulefinder___globals, "str", cpy_r_custom_typeshed_dir);
        goto CPyL96;
    }
    cpy_r_r5 = cpy_r_r4;
    goto CPyL16;
CPyL5: ;
    cpy_r_r6 = CPyStatic_modulefinder___globals;
    cpy_r_r7 = CPyStatics[150]; /* '__file__' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 870, CPyStatic_modulefinder___globals);
        goto CPyL96;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 870, CPyStatic_modulefinder___globals, "str", cpy_r_r8);
        goto CPyL96;
    }
    cpy_r_r10 = CPyModule_os;
    cpy_r_r11 = CPyStatics[142]; /* 'path' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 870, CPyStatic_modulefinder___globals);
        goto CPyL97;
    }
    cpy_r_r13 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 870, CPyStatic_modulefinder___globals);
        goto CPyL97;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_r9};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 870, CPyStatic_modulefinder___globals);
        goto CPyL97;
    }
    CPy_DECREF(cpy_r_r9);
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 870, CPyStatic_modulefinder___globals, "str", cpy_r_r17);
        goto CPyL96;
    }
    cpy_r_r19 = CPyStatics[3851]; /* 'typeshed' */
    cpy_r_r20 = CPyModule_os;
    cpy_r_r21 = CPyStatics[142]; /* 'path' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 870, CPyStatic_modulefinder___globals);
        goto CPyL98;
    }
    cpy_r_r23 = CPyStatics[175]; /* 'join' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 870, CPyStatic_modulefinder___globals);
        goto CPyL98;
    }
    PyObject *cpy_r_r25[2] = {cpy_r_r18, cpy_r_r19};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r26, 2, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 870, CPyStatic_modulefinder___globals);
        goto CPyL98;
    }
    CPy_DECREF(cpy_r_r18);
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 870, CPyStatic_modulefinder___globals, "str", cpy_r_r27);
        goto CPyL96;
    }
    cpy_r_r5 = cpy_r_r28;
CPyL16: ;
    cpy_r_typeshed_dir = cpy_r_r5;
    cpy_r_r29 = CPyStatics[3845]; /* 'stdlib' */
    cpy_r_r30 = CPyModule_os;
    cpy_r_r31 = CPyStatics[142]; /* 'path' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 871, CPyStatic_modulefinder___globals);
        goto CPyL99;
    }
    cpy_r_r33 = CPyStatics[175]; /* 'join' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 871, CPyStatic_modulefinder___globals);
        goto CPyL99;
    }
    PyObject *cpy_r_r35[2] = {cpy_r_typeshed_dir, cpy_r_r29};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = _PyObject_Vectorcall(cpy_r_r34, cpy_r_r36, 2, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 871, CPyStatic_modulefinder___globals);
        goto CPyL99;
    }
    CPy_DECREF(cpy_r_typeshed_dir);
    if (likely(PyUnicode_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 871, CPyStatic_modulefinder___globals, "str", cpy_r_r37);
        goto CPyL96;
    }
    cpy_r_stdlib_dir = cpy_r_r38;
    cpy_r_r39 = PyDict_New();
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 872, CPyStatic_modulefinder___globals);
        goto CPyL100;
    }
    cpy_r_result = cpy_r_r39;
    cpy_r_r40 = CPyStatics[3848]; /* 'VERSIONS' */
    cpy_r_r41 = CPyModule_os;
    cpy_r_r42 = CPyStatics[142]; /* 'path' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 874, CPyStatic_modulefinder___globals);
        goto CPyL101;
    }
    cpy_r_r44 = CPyStatics[175]; /* 'join' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 874, CPyStatic_modulefinder___globals);
        goto CPyL101;
    }
    PyObject *cpy_r_r46[2] = {cpy_r_stdlib_dir, cpy_r_r40};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = _PyObject_Vectorcall(cpy_r_r45, cpy_r_r47, 2, 0);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 874, CPyStatic_modulefinder___globals);
        goto CPyL101;
    }
    CPy_DECREF(cpy_r_stdlib_dir);
    if (likely(PyUnicode_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 874, CPyStatic_modulefinder___globals, "str", cpy_r_r48);
        goto CPyL102;
    }
    cpy_r_versions_path = cpy_r_r49;
    cpy_r_r50 = CPyModule_os;
    cpy_r_r51 = CPyStatics[142]; /* 'path' */
    cpy_r_r52 = CPyObject_GetAttr(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 875, CPyStatic_modulefinder___globals);
        goto CPyL103;
    }
    cpy_r_r53 = CPyStatics[176]; /* 'isfile' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 875, CPyStatic_modulefinder___globals);
        goto CPyL103;
    }
    PyObject *cpy_r_r55[1] = {cpy_r_versions_path};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = _PyObject_Vectorcall(cpy_r_r54, cpy_r_r56, 1, 0);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 875, CPyStatic_modulefinder___globals);
        goto CPyL103;
    }
    if (unlikely(!PyBool_Check(cpy_r_r57))) {
        CPy_TypeError("bool", cpy_r_r57); cpy_r_r58 = 2;
    } else
        cpy_r_r58 = cpy_r_r57 == Py_True;
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 875, CPyStatic_modulefinder___globals);
        goto CPyL103;
    }
    if (cpy_r_r58) {
        goto CPyL36;
    } else
        goto CPyL104;
CPyL30: ;
    cpy_r_r59 = CPyStatic_modulefinder___globals;
    cpy_r_r60 = CPyStatics[150]; /* '__file__' */
    cpy_r_r61 = CPyDict_GetItem(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 875, CPyStatic_modulefinder___globals);
        goto CPyL105;
    }
    if (likely(PyUnicode_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 875, CPyStatic_modulefinder___globals, "str", cpy_r_r61);
        goto CPyL105;
    }
    cpy_r_r63.f0 = cpy_r_custom_typeshed_dir;
    cpy_r_r63.f1 = cpy_r_versions_path;
    cpy_r_r63.f2 = cpy_r_r62;
    CPy_INCREF(cpy_r_r63.f0);
    CPy_INCREF(cpy_r_r63.f1);
    CPy_INCREF(cpy_r_r63.f2);
    CPy_DECREF(cpy_r_versions_path);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r64 = CPyModule_builtins;
    cpy_r_r65 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 875, CPyStatic_modulefinder___globals);
        goto CPyL106;
    }
    cpy_r_r67 = PyTuple_New(3);
    if (unlikely(cpy_r_r67 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3638 = cpy_r_r63.f0;
    PyTuple_SET_ITEM(cpy_r_r67, 0, __tmp3638);
    PyObject *__tmp3639 = cpy_r_r63.f1;
    PyTuple_SET_ITEM(cpy_r_r67, 1, __tmp3639);
    PyObject *__tmp3640 = cpy_r_r63.f2;
    PyTuple_SET_ITEM(cpy_r_r67, 2, __tmp3640);
    PyObject *cpy_r_r68[1] = {cpy_r_r67};
    cpy_r_r69 = (PyObject **)&cpy_r_r68;
    cpy_r_r70 = _PyObject_Vectorcall(cpy_r_r66, cpy_r_r69, 1, 0);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 875, CPyStatic_modulefinder___globals);
        goto CPyL107;
    }
    CPy_DECREF(cpy_r_r67);
    CPy_Raise(cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 875, CPyStatic_modulefinder___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r71 = CPyModule_builtins;
    cpy_r_r72 = CPyStatics[199]; /* 'open' */
    cpy_r_r73 = CPyObject_GetAttr(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 876, CPyStatic_modulefinder___globals);
        goto CPyL103;
    }
    PyObject *cpy_r_r74[1] = {cpy_r_versions_path};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = _PyObject_Vectorcall(cpy_r_r73, cpy_r_r75, 1, 0);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 876, CPyStatic_modulefinder___globals);
        goto CPyL103;
    }
    CPy_DECREF(cpy_r_versions_path);
    cpy_r_r77 = PyObject_Type(cpy_r_r76);
    cpy_r_r78 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 876, CPyStatic_modulefinder___globals);
        goto CPyL108;
    }
    cpy_r_r80 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r81 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r80);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 876, CPyStatic_modulefinder___globals);
        goto CPyL109;
    }
    PyObject *cpy_r_r82[1] = {cpy_r_r76};
    cpy_r_r83 = (PyObject **)&cpy_r_r82;
    cpy_r_r84 = _PyObject_Vectorcall(cpy_r_r81, cpy_r_r83, 1, 0);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 876, CPyStatic_modulefinder___globals);
        goto CPyL109;
    }
    cpy_r_r85 = 1;
    cpy_r_f = cpy_r_r84;
    cpy_r_r86 = PyObject_GetIter(cpy_r_f);
    CPy_DECREF(cpy_r_f);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 877, CPyStatic_modulefinder___globals);
        goto CPyL75;
    }
CPyL43: ;
    cpy_r_r87 = PyIter_Next(cpy_r_r86);
    if (cpy_r_r87 == NULL) goto CPyL110;
    if (likely(PyUnicode_Check(cpy_r_r87)))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 877, CPyStatic_modulefinder___globals, "str", cpy_r_r87);
        goto CPyL111;
    }
    cpy_r_line = cpy_r_r88;
    cpy_r_r89 = CPyStatics[2355]; /* '#' */
    cpy_r_r90 = PyUnicode_Split(cpy_r_line, cpy_r_r89, -1);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 878, CPyStatic_modulefinder___globals);
        goto CPyL111;
    }
    cpy_r_r91 = CPyList_GetItemShort(cpy_r_r90, 0);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 878, CPyStatic_modulefinder___globals);
        goto CPyL111;
    }
    if (likely(PyUnicode_Check(cpy_r_r91)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 878, CPyStatic_modulefinder___globals, "str", cpy_r_r91);
        goto CPyL111;
    }
    cpy_r_r93 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r94[1] = {cpy_r_r92};
    cpy_r_r95 = (PyObject **)&cpy_r_r94;
    cpy_r_r96 = PyObject_VectorcallMethod(cpy_r_r93, cpy_r_r95, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 878, CPyStatic_modulefinder___globals);
        goto CPyL112;
    }
    CPy_DECREF(cpy_r_r92);
    if (likely(PyUnicode_Check(cpy_r_r96)))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 878, CPyStatic_modulefinder___globals, "str", cpy_r_r96);
        goto CPyL111;
    }
    cpy_r_line = cpy_r_r97;
    cpy_r_r98 = CPyStatics[163]; /* '' */
    cpy_r_r99 = PyUnicode_Compare(cpy_r_line, cpy_r_r98);
    cpy_r_r100 = cpy_r_r99 == -1;
    if (!cpy_r_r100) goto CPyL53;
    cpy_r_r101 = PyErr_Occurred();
    cpy_r_r102 = cpy_r_r101 != NULL;
    if (!cpy_r_r102) goto CPyL53;
    cpy_r_r103 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 879, CPyStatic_modulefinder___globals);
        goto CPyL113;
    }
CPyL53: ;
    cpy_r_r104 = cpy_r_r99 == 0;
    if (cpy_r_r104) goto CPyL114;
    cpy_r_r105 = CPyStatics[171]; /* ':' */
    cpy_r_r106 = PyUnicode_Split(cpy_r_line, cpy_r_r105, -1);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 881, CPyStatic_modulefinder___globals);
        goto CPyL111;
    }
    cpy_r_r107 = CPySequence_CheckUnpackCount(cpy_r_r106, 2);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 881, CPyStatic_modulefinder___globals);
        goto CPyL115;
    }
    cpy_r_r109 = CPyList_GetItemUnsafe(cpy_r_r106, 0);
    cpy_r_r110 = CPyList_GetItemUnsafe(cpy_r_r106, 2);
    CPy_DECREF(cpy_r_r106);
    if (likely(PyUnicode_Check(cpy_r_r109)))
        cpy_r_r111 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 881, CPyStatic_modulefinder___globals, "str", cpy_r_r109);
        goto CPyL116;
    }
    cpy_r_module = cpy_r_r111;
    if (likely(PyUnicode_Check(cpy_r_r110)))
        cpy_r_r112 = cpy_r_r110;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 881, CPyStatic_modulefinder___globals, "str", cpy_r_r110);
        goto CPyL117;
    }
    cpy_r_version_range = cpy_r_r112;
    cpy_r_r113 = CPyStatics[1198]; /* '-' */
    cpy_r_r114 = PyUnicode_Split(cpy_r_version_range, cpy_r_r113, -1);
    CPy_DECREF(cpy_r_version_range);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 882, CPyStatic_modulefinder___globals);
        goto CPyL117;
    }
    cpy_r_versions = cpy_r_r114;
    cpy_r_r115 = CPyList_GetItemShort(cpy_r_versions, 0);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 883, CPyStatic_modulefinder___globals);
        goto CPyL118;
    }
    if (likely(PyUnicode_Check(cpy_r_r115)))
        cpy_r_r116 = cpy_r_r115;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 883, CPyStatic_modulefinder___globals, "str", cpy_r_r115);
        goto CPyL118;
    }
    cpy_r_r117 = CPyDef_modulefinder___parse_version(cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 883, CPyStatic_modulefinder___globals);
        goto CPyL118;
    }
    cpy_r_min_version = cpy_r_r117;
    cpy_r_r118 = (CPyPtr)&((PyVarObject *)cpy_r_versions)->ob_size;
    cpy_r_r119 = *(int64_t *)cpy_r_r118;
    cpy_r_r120 = cpy_r_r119 << 1;
    cpy_r_r121 = (Py_ssize_t)cpy_r_r120 >= (Py_ssize_t)4;
    if (!cpy_r_r121) goto CPyL119;
    cpy_r_r122 = CPyList_GetItemShort(cpy_r_versions, 2);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 885, CPyStatic_modulefinder___globals);
        goto CPyL120;
    }
    if (likely(PyUnicode_Check(cpy_r_r122)))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 885, CPyStatic_modulefinder___globals, "str", cpy_r_r122);
        goto CPyL120;
    }
    cpy_r_r124 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r125[1] = {cpy_r_r123};
    cpy_r_r126 = (PyObject **)&cpy_r_r125;
    cpy_r_r127 = PyObject_VectorcallMethod(cpy_r_r124, cpy_r_r126, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 885, CPyStatic_modulefinder___globals);
        goto CPyL121;
    }
    CPy_DECREF(cpy_r_r123);
    if (likely(PyUnicode_Check(cpy_r_r127)))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 885, CPyStatic_modulefinder___globals, "str", cpy_r_r127);
        goto CPyL120;
    }
    cpy_r_r129 = CPyStr_IsTrue(cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    if (!cpy_r_r129) goto CPyL119;
    cpy_r_r130 = CPyList_GetItemShort(cpy_r_versions, 2);
    CPy_DECREF(cpy_r_versions);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 885, CPyStatic_modulefinder___globals);
        goto CPyL122;
    }
    if (likely(PyUnicode_Check(cpy_r_r130)))
        cpy_r_r131 = cpy_r_r130;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 885, CPyStatic_modulefinder___globals, "str", cpy_r_r130);
        goto CPyL122;
    }
    cpy_r_r132 = CPyDef_modulefinder___parse_version(cpy_r_r131);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r132.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 885, CPyStatic_modulefinder___globals);
        goto CPyL122;
    }
    cpy_r_r133 = PyTuple_New(2);
    if (unlikely(cpy_r_r133 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3641 = CPyTagged_StealAsObject(cpy_r_r132.f0);
    PyTuple_SET_ITEM(cpy_r_r133, 0, __tmp3641);
    PyObject *__tmp3642 = CPyTagged_StealAsObject(cpy_r_r132.f1);
    PyTuple_SET_ITEM(cpy_r_r133, 1, __tmp3642);
    cpy_r_r134 = cpy_r_r133;
    goto CPyL73;
CPyL72: ;
    cpy_r_r135 = Py_None;
    CPy_INCREF(cpy_r_r135);
    cpy_r_r134 = cpy_r_r135;
CPyL73: ;
    cpy_r_max_version = cpy_r_r134;
    cpy_r_r136.f0 = cpy_r_min_version;
    cpy_r_r136.f1 = cpy_r_max_version;
    CPyTagged_INCREF(cpy_r_r136.f0.f0);
    CPyTagged_INCREF(cpy_r_r136.f0.f1);
    CPy_INCREF(cpy_r_r136.f1);
    CPyTagged_DECREF(cpy_r_min_version.f0);
    CPyTagged_DECREF(cpy_r_min_version.f1);
    CPy_DECREF(cpy_r_max_version);
    cpy_r_r137 = PyTuple_New(2);
    if (unlikely(cpy_r_r137 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3643 = PyTuple_New(2);
    if (unlikely(__tmp3643 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3644 = CPyTagged_StealAsObject(cpy_r_r136.f0.f0);
    PyTuple_SET_ITEM(__tmp3643, 0, __tmp3644);
    PyObject *__tmp3645 = CPyTagged_StealAsObject(cpy_r_r136.f0.f1);
    PyTuple_SET_ITEM(__tmp3643, 1, __tmp3645);
    PyTuple_SET_ITEM(cpy_r_r137, 0, __tmp3643);
    PyObject *__tmp3646 = cpy_r_r136.f1;
    PyTuple_SET_ITEM(cpy_r_r137, 1, __tmp3646);
    cpy_r_r138 = CPyDict_SetItem(cpy_r_result, cpy_r_module, cpy_r_r137);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_r137);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 887, CPyStatic_modulefinder___globals);
        goto CPyL111;
    } else
        goto CPyL43;
CPyL74: ;
    cpy_r_r140 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 877, CPyStatic_modulefinder___globals);
    } else
        goto CPyL83;
CPyL75: ;
    cpy_r_r141 = CPy_CatchError();
    cpy_r_r85 = 0;
    cpy_r_r142 = CPy_GetExcInfo();
    cpy_r_r143 = cpy_r_r142.f0;
    CPy_INCREF(cpy_r_r143);
    cpy_r_r144 = cpy_r_r142.f1;
    CPy_INCREF(cpy_r_r144);
    cpy_r_r145 = cpy_r_r142.f2;
    CPy_INCREF(cpy_r_r145);
    CPy_DecRef(cpy_r_r142.f0);
    CPy_DecRef(cpy_r_r142.f1);
    CPy_DecRef(cpy_r_r142.f2);
    PyObject *cpy_r_r146[4] = {cpy_r_r76, cpy_r_r143, cpy_r_r144, cpy_r_r145};
    cpy_r_r147 = (PyObject **)&cpy_r_r146;
    cpy_r_r148 = _PyObject_Vectorcall(cpy_r_r79, cpy_r_r147, 4, 0);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 876, CPyStatic_modulefinder___globals);
        goto CPyL123;
    }
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r145);
    cpy_r_r149 = PyObject_IsTrue(cpy_r_r148);
    CPy_DecRef(cpy_r_r148);
    cpy_r_r150 = cpy_r_r149 >= 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 876, CPyStatic_modulefinder___globals);
        goto CPyL81;
    }
    cpy_r_r151 = cpy_r_r149;
    if (cpy_r_r151) goto CPyL80;
    CPy_Reraise();
    if (!0) {
        goto CPyL81;
    } else
        goto CPyL124;
CPyL79: ;
    CPy_Unreachable();
CPyL80: ;
    CPy_RestoreExcInfo(cpy_r_r141);
    CPy_DecRef(cpy_r_r141.f0);
    CPy_DecRef(cpy_r_r141.f1);
    CPy_DecRef(cpy_r_r141.f2);
    goto CPyL83;
CPyL81: ;
    CPy_RestoreExcInfo(cpy_r_r141);
    CPy_DecRef(cpy_r_r141.f0);
    CPy_DecRef(cpy_r_r141.f1);
    CPy_DecRef(cpy_r_r141.f2);
    cpy_r_r152 = CPy_KeepPropagating();
    if (!cpy_r_r152) {
        goto CPyL84;
    } else
        goto CPyL125;
CPyL82: ;
    CPy_Unreachable();
CPyL83: ;
    tuple_T3OOO __tmp3647 = { NULL, NULL, NULL };
    cpy_r_r153 = __tmp3647;
    cpy_r_r154 = cpy_r_r153;
    goto CPyL85;
CPyL84: ;
    cpy_r_r155 = CPy_CatchError();
    cpy_r_r154 = cpy_r_r155;
CPyL85: ;
    if (!cpy_r_r85) goto CPyL126;
    cpy_r_r156 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r157[4] = {cpy_r_r76, cpy_r_r156, cpy_r_r156, cpy_r_r156};
    cpy_r_r158 = (PyObject **)&cpy_r_r157;
    cpy_r_r159 = _PyObject_Vectorcall(cpy_r_r79, cpy_r_r158, 4, 0);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 876, CPyStatic_modulefinder___globals);
        goto CPyL127;
    } else
        goto CPyL128;
CPyL87: ;
    CPy_DECREF(cpy_r_r76);
CPyL88: ;
    if (cpy_r_r154.f0 == NULL) {
        goto CPyL95;
    } else
        goto CPyL129;
CPyL89: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL91;
    } else
        goto CPyL130;
CPyL90: ;
    CPy_Unreachable();
CPyL91: ;
    if (cpy_r_r154.f0 == NULL) goto CPyL93;
    CPy_RestoreExcInfo(cpy_r_r154);
    CPy_XDECREF(cpy_r_r154.f0);
    CPy_XDECREF(cpy_r_r154.f1);
    CPy_XDECREF(cpy_r_r154.f2);
CPyL93: ;
    cpy_r_r160 = CPy_KeepPropagating();
    if (!cpy_r_r160) goto CPyL96;
    CPy_Unreachable();
CPyL95: ;
    return cpy_r_result;
CPyL96: ;
    cpy_r_r161 = NULL;
    return cpy_r_r161;
CPyL97: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL96;
CPyL98: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL96;
CPyL99: ;
    CPy_DecRef(cpy_r_typeshed_dir);
    goto CPyL96;
CPyL100: ;
    CPy_DecRef(cpy_r_stdlib_dir);
    goto CPyL96;
CPyL101: ;
    CPy_DecRef(cpy_r_stdlib_dir);
    CPy_DecRef(cpy_r_result);
    goto CPyL96;
CPyL102: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL96;
CPyL103: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_versions_path);
    goto CPyL96;
CPyL104: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL30;
CPyL105: ;
    CPy_DecRef(cpy_r_versions_path);
    goto CPyL96;
CPyL106: ;
    CPy_DecRef(cpy_r_r63.f0);
    CPy_DecRef(cpy_r_r63.f1);
    CPy_DecRef(cpy_r_r63.f2);
    goto CPyL96;
CPyL107: ;
    CPy_DecRef(cpy_r_r67);
    goto CPyL96;
CPyL108: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r77);
    goto CPyL96;
CPyL109: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r79);
    goto CPyL96;
CPyL110: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL74;
CPyL111: ;
    CPy_DecRef(cpy_r_r86);
    goto CPyL75;
CPyL112: ;
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r92);
    goto CPyL75;
CPyL113: ;
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_line);
    goto CPyL75;
CPyL114: ;
    CPy_DECREF(cpy_r_line);
    goto CPyL43;
CPyL115: ;
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r106);
    goto CPyL75;
CPyL116: ;
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r110);
    goto CPyL75;
CPyL117: ;
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_module);
    goto CPyL75;
CPyL118: ;
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_versions);
    goto CPyL75;
CPyL119: ;
    CPy_DECREF(cpy_r_versions);
    goto CPyL72;
CPyL120: ;
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_versions);
    CPyTagged_DecRef(cpy_r_min_version.f0);
    CPyTagged_DecRef(cpy_r_min_version.f1);
    goto CPyL75;
CPyL121: ;
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_versions);
    CPyTagged_DecRef(cpy_r_min_version.f0);
    CPyTagged_DecRef(cpy_r_min_version.f1);
    CPy_DecRef(cpy_r_r123);
    goto CPyL75;
CPyL122: ;
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_module);
    CPyTagged_DecRef(cpy_r_min_version.f0);
    CPyTagged_DecRef(cpy_r_min_version.f1);
    goto CPyL75;
CPyL123: ;
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r145);
    goto CPyL81;
CPyL124: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r141.f0);
    CPy_DecRef(cpy_r_r141.f1);
    CPy_DecRef(cpy_r_r141.f2);
    goto CPyL79;
CPyL125: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r79);
    goto CPyL82;
CPyL126: ;
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r79);
    goto CPyL88;
CPyL127: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r76);
    goto CPyL91;
CPyL128: ;
    CPy_DECREF(cpy_r_r159);
    goto CPyL87;
CPyL129: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL89;
CPyL130: ;
    CPy_XDECREF(cpy_r_r154.f0);
    CPy_XDECREF(cpy_r_r154.f1);
    CPy_XDECREF(cpy_r_r154.f2);
    goto CPyL90;
}

PyObject *CPyPy_modulefinder___load_stdlib_py_versions(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"custom_typeshed_dir", 0};
    static CPyArg_Parser parser = {"O:load_stdlib_py_versions", kwlist, 0};
    PyObject *obj_custom_typeshed_dir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_custom_typeshed_dir)) {
        return NULL;
    }
    PyObject *arg_custom_typeshed_dir;
    if (PyUnicode_Check(obj_custom_typeshed_dir))
        arg_custom_typeshed_dir = obj_custom_typeshed_dir;
    else {
        arg_custom_typeshed_dir = NULL;
    }
    if (arg_custom_typeshed_dir != NULL) goto __LL3648;
    if (obj_custom_typeshed_dir == Py_None)
        arg_custom_typeshed_dir = obj_custom_typeshed_dir;
    else {
        arg_custom_typeshed_dir = NULL;
    }
    if (arg_custom_typeshed_dir != NULL) goto __LL3648;
    CPy_TypeError("str or None", obj_custom_typeshed_dir); 
    goto fail;
__LL3648: ;
    PyObject *retval = CPyDef_modulefinder___load_stdlib_py_versions(arg_custom_typeshed_dir);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "load_stdlib_py_versions", 862, CPyStatic_modulefinder___globals);
    return NULL;
}

tuple_T2II CPyDef_modulefinder___parse_version(PyObject *cpy_r_version) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_major;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_minor;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    tuple_T2II cpy_r_r17;
    tuple_T2II cpy_r_r18;
    cpy_r_r0 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r1[1] = {cpy_r_version};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "parse_version", 892, CPyStatic_modulefinder___globals);
        goto CPyL11;
    }
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "parse_version", 892, CPyStatic_modulefinder___globals, "str", cpy_r_r3);
        goto CPyL11;
    }
    cpy_r_r5 = CPyStatics[224]; /* '.' */
    cpy_r_r6 = PyUnicode_Split(cpy_r_r4, cpy_r_r5, -1);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "parse_version", 892, CPyStatic_modulefinder___globals);
        goto CPyL11;
    }
    cpy_r_r7 = CPySequence_CheckUnpackCount(cpy_r_r6, 2);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/modulefinder.py", "parse_version", 892, CPyStatic_modulefinder___globals);
        goto CPyL12;
    }
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r6, 0);
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r6, 2);
    CPy_DECREF(cpy_r_r6);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r11 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "parse_version", 892, CPyStatic_modulefinder___globals, "str", cpy_r_r9);
        goto CPyL13;
    }
    cpy_r_major = cpy_r_r11;
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r12 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "parse_version", 892, CPyStatic_modulefinder___globals, "str", cpy_r_r10);
        goto CPyL14;
    }
    cpy_r_minor = cpy_r_r12;
    cpy_r_r13 = CPyLong_FromStr(cpy_r_major);
    CPy_DECREF(cpy_r_major);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "parse_version", 893, CPyStatic_modulefinder___globals);
        goto CPyL15;
    }
    if (likely(PyLong_Check(cpy_r_r13)))
        cpy_r_r14 = CPyTagged_FromObject(cpy_r_r13);
    else {
        CPy_TypeError("int", cpy_r_r13); cpy_r_r14 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "parse_version", 893, CPyStatic_modulefinder___globals);
        goto CPyL15;
    }
    cpy_r_r15 = CPyLong_FromStr(cpy_r_minor);
    CPy_DECREF(cpy_r_minor);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "parse_version", 893, CPyStatic_modulefinder___globals);
        goto CPyL16;
    }
    if (likely(PyLong_Check(cpy_r_r15)))
        cpy_r_r16 = CPyTagged_FromObject(cpy_r_r15);
    else {
        CPy_TypeError("int", cpy_r_r15); cpy_r_r16 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/modulefinder.py", "parse_version", 893, CPyStatic_modulefinder___globals);
        goto CPyL16;
    }
    cpy_r_r17.f0 = cpy_r_r14;
    cpy_r_r17.f1 = cpy_r_r16;
    CPyTagged_INCREF(cpy_r_r17.f0);
    CPyTagged_INCREF(cpy_r_r17.f1);
    CPyTagged_DECREF(cpy_r_r14);
    CPyTagged_DECREF(cpy_r_r16);
    return cpy_r_r17;
CPyL11: ;
    tuple_T2II __tmp3649 = { CPY_INT_TAG, CPY_INT_TAG };
    cpy_r_r18 = __tmp3649;
    return cpy_r_r18;
CPyL12: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_major);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_minor);
    goto CPyL11;
CPyL16: ;
    CPyTagged_DecRef(cpy_r_r14);
    goto CPyL11;
}

PyObject *CPyPy_modulefinder___parse_version(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"version", 0};
    static CPyArg_Parser parser = {"O:parse_version", kwlist, 0};
    PyObject *obj_version;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_version)) {
        return NULL;
    }
    PyObject *arg_version;
    if (likely(PyUnicode_Check(obj_version)))
        arg_version = obj_version;
    else {
        CPy_TypeError("str", obj_version); 
        goto fail;
    }
    tuple_T2II retval = CPyDef_modulefinder___parse_version(arg_version);
    if (retval.f0 == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3650 = CPyTagged_StealAsObject(retval.f0);
    PyTuple_SET_ITEM(retbox, 0, __tmp3650);
    PyObject *__tmp3651 = CPyTagged_StealAsObject(retval.f1);
    PyTuple_SET_ITEM(retbox, 1, __tmp3651);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "parse_version", 891, CPyStatic_modulefinder___globals);
    return NULL;
}

tuple_T2II CPyDef_modulefinder___typeshed_py_version(PyObject *cpy_r_options) {
    tuple_T2II cpy_r_r0;
    tuple_T2II cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    tuple_T2II cpy_r_r8;
    tuple_T2II cpy_r_r9;
    cpy_r_r0 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_version;
    CPyTagged_INCREF(cpy_r_r0.f0);
    CPyTagged_INCREF(cpy_r_r0.f1);
    cpy_r_r1.f0 = 6;
    cpy_r_r1.f1 = 14;
    CPyTagged_INCREF(cpy_r_r1.f0);
    CPyTagged_INCREF(cpy_r_r1.f1);
    CPyTagged_INCREF(cpy_r_r1.f0);
    CPyTagged_INCREF(cpy_r_r1.f1);
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3652 = CPyTagged_StealAsObject(cpy_r_r1.f0);
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp3652);
    PyObject *__tmp3653 = CPyTagged_StealAsObject(cpy_r_r1.f1);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp3653);
    CPyTagged_INCREF(cpy_r_r0.f0);
    CPyTagged_INCREF(cpy_r_r0.f1);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3654 = CPyTagged_StealAsObject(cpy_r_r0.f0);
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp3654);
    PyObject *__tmp3655 = CPyTagged_StealAsObject(cpy_r_r0.f1);
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp3655);
    cpy_r_r4 = PyObject_RichCompare(cpy_r_r2, cpy_r_r3, 4);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "typeshed_py_version", 900, CPyStatic_modulefinder___globals);
        goto CPyL7;
    }
    cpy_r_r5 = PyObject_IsTrue(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/modulefinder.py", "typeshed_py_version", 900, CPyStatic_modulefinder___globals);
        goto CPyL7;
    }
    cpy_r_r7 = cpy_r_r5;
    if (cpy_r_r7) {
        goto CPyL8;
    } else
        goto CPyL9;
CPyL3: ;
    cpy_r_r8 = cpy_r_r1;
    goto CPyL5;
CPyL4: ;
    cpy_r_r8 = cpy_r_r0;
CPyL5: ;
    return cpy_r_r8;
CPyL6: ;
    tuple_T2II __tmp3656 = { CPY_INT_TAG, CPY_INT_TAG };
    cpy_r_r9 = __tmp3656;
    return cpy_r_r9;
CPyL7: ;
    CPyTagged_DecRef(cpy_r_r0.f0);
    CPyTagged_DecRef(cpy_r_r0.f1);
    CPyTagged_DecRef(cpy_r_r1.f0);
    CPyTagged_DecRef(cpy_r_r1.f1);
    goto CPyL6;
CPyL8: ;
    CPyTagged_DECREF(cpy_r_r0.f0);
    CPyTagged_DECREF(cpy_r_r0.f1);
    goto CPyL3;
CPyL9: ;
    CPyTagged_DECREF(cpy_r_r1.f0);
    CPyTagged_DECREF(cpy_r_r1.f1);
    goto CPyL4;
}

PyObject *CPyPy_modulefinder___typeshed_py_version(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"options", 0};
    static CPyArg_Parser parser = {"O:typeshed_py_version", kwlist, 0};
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_options)) {
        return NULL;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    tuple_T2II retval = CPyDef_modulefinder___typeshed_py_version(arg_options);
    if (retval.f0 == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3657 = CPyTagged_StealAsObject(retval.f0);
    PyTuple_SET_ITEM(retbox, 0, __tmp3657);
    PyObject *__tmp3658 = CPyTagged_StealAsObject(retval.f1);
    PyTuple_SET_ITEM(retbox, 1, __tmp3658);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/modulefinder.py", "typeshed_py_version", 896, CPyStatic_modulefinder___globals);
    return NULL;
}

char CPyDef_modulefinder_____top_level__(void) {
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
    void *cpy_r_r17;
    void *cpy_r_r19;
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
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    tuple_T2II cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject **cpy_r_r41;
    void *cpy_r_r43;
    void *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
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
    char cpy_r_r83;
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
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject **cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
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
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    int32_t cpy_r_r140;
    char cpy_r_r141;
    PyObject **cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    int32_t cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    tuple_T2OO cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    int32_t cpy_r_r160;
    char cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    int32_t cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    tuple_T2OO cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    tuple_T2OO cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    tuple_T2OO cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    tuple_T2OO cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    int32_t cpy_r_r208;
    char cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    CPyPtr cpy_r_r213;
    CPyPtr cpy_r_r214;
    CPyPtr cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    int32_t cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    char cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject **cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    int32_t cpy_r_r240;
    char cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    int32_t cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    int32_t cpy_r_r248;
    char cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    int32_t cpy_r_r252;
    char cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    int32_t cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    int32_t cpy_r_r260;
    char cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    int32_t cpy_r_r264;
    char cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    int32_t cpy_r_r268;
    char cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    int32_t cpy_r_r272;
    char cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    int32_t cpy_r_r276;
    char cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    int32_t cpy_r_r280;
    char cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    int32_t cpy_r_r284;
    char cpy_r_r285;
    PyObject **cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject **cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    int32_t cpy_r_r297;
    char cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    tuple_T2OO cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    int32_t cpy_r_r318;
    char cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    char cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    int32_t cpy_r_r332;
    char cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    int32_t cpy_r_r336;
    char cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    char cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    int32_t cpy_r_r348;
    char cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    int32_t cpy_r_r352;
    char cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    char cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    int32_t cpy_r_r369;
    char cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    int32_t cpy_r_r373;
    char cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject **cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject **cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    int32_t cpy_r_r391;
    char cpy_r_r392;
    char cpy_r_r393;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", -1, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_modulefinder___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 6, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_ast;
    cpy_r_r10 = (PyObject **)&CPyModule_collections;
    cpy_r_r11 = (PyObject **)&CPyModule_functools;
    cpy_r_r12 = (PyObject **)&CPyModule_os;
    cpy_r_r13 = (PyObject **)&CPyModule_re;
    cpy_r_r14 = (PyObject **)&CPyModule_subprocess;
    cpy_r_r15 = (PyObject **)&CPyModule_sys;
    PyObject **cpy_r_r16[7] = {
        cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14,
        cpy_r_r15
    };
    cpy_r_r17 = (void *)&cpy_r_r16;
    int64_t cpy_r_r18[7] = {8, 9, 10, 11, 12, 13, 14};
    cpy_r_r19 = (void *)&cpy_r_r18;
    cpy_r_r20 = CPyStatics[9532]; /* (('ast', 'ast', 'ast'),
                                     ('collections', 'collections', 'collections'),
                                     ('functools', 'functools', 'functools'),
                                     ('os', 'os', 'os'), ('re', 're', 're'),
                                     ('subprocess', 'subprocess', 'subprocess'),
                                     ('sys', 'sys', 'sys')) */
    cpy_r_r21 = CPyStatic_modulefinder___globals;
    cpy_r_r22 = CPyStatics[3873]; /* 'mypy/modulefinder.py' */
    cpy_r_r23 = CPyStatics[17]; /* '<module>' */
    cpy_r_r24 = CPyImport_ImportMany(cpy_r_r20, cpy_r_r17, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r19);
    if (!cpy_r_r24) goto CPyL126;
    cpy_r_r25 = CPyStatics[9533]; /* ('Enum', 'unique') */
    cpy_r_r26 = CPyStatics[3876]; /* 'enum' */
    cpy_r_r27 = CPyStatic_modulefinder___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 15, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyModule_enum = cpy_r_r28;
    CPy_INCREF(CPyModule_enum);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9490]; /* ('CompileError',) */
    cpy_r_r30 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r31 = CPyStatic_modulefinder___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 17, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyModule_mypy___errors = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___errors);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyModule_sys;
    cpy_r_r34 = CPyStatics[1562]; /* 'version_info' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 19, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    if (likely(PyTuple_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "<module>", 19, CPyStatic_modulefinder___globals, "tuple", cpy_r_r35);
        goto CPyL126;
    }
    cpy_r_r37.f0 = 6;
    cpy_r_r37.f1 = 22;
    CPyTagged_INCREF(cpy_r_r37.f0);
    CPyTagged_INCREF(cpy_r_r37.f1);
    cpy_r_r38 = PyTuple_New(2);
    if (unlikely(cpy_r_r38 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3659 = CPyTagged_StealAsObject(cpy_r_r37.f0);
    PyTuple_SET_ITEM(cpy_r_r38, 0, __tmp3659);
    PyObject *__tmp3660 = CPyTagged_StealAsObject(cpy_r_r37.f1);
    PyTuple_SET_ITEM(cpy_r_r38, 1, __tmp3660);
    cpy_r_r39 = PyObject_RichCompare(cpy_r_r36, cpy_r_r38, 5);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 19, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    if (unlikely(!PyBool_Check(cpy_r_r39))) {
        CPy_TypeError("bool", cpy_r_r39); cpy_r_r40 = 2;
    } else
        cpy_r_r40 = cpy_r_r39 == Py_True;
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 19, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    if (!cpy_r_r40) goto CPyL13;
    cpy_r_r41 = (PyObject **)&CPyModule_tomllib;
    PyObject **cpy_r_r42[1] = {cpy_r_r41};
    cpy_r_r43 = (void *)&cpy_r_r42;
    int64_t cpy_r_r44[1] = {20};
    cpy_r_r45 = (void *)&cpy_r_r44;
    cpy_r_r46 = CPyStatics[9281]; /* (('tomllib', 'tomllib', 'tomllib'),) */
    cpy_r_r47 = CPyStatic_modulefinder___globals;
    cpy_r_r48 = CPyStatics[3873]; /* 'mypy/modulefinder.py' */
    cpy_r_r49 = CPyStatics[17]; /* '<module>' */
    cpy_r_r50 = CPyImport_ImportMany(cpy_r_r46, cpy_r_r43, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r45);
    if (!cpy_r_r50) {
        goto CPyL126;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 22, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r52 = CPyStatics[9534]; /* ('Dict', 'Final', 'List', 'NamedTuple', 'Optional',
                                     'Tuple', 'Union') */
    cpy_r_r53 = CPyStatics[21]; /* 'typing' */
    cpy_r_r54 = CPyStatic_modulefinder___globals;
    cpy_r_r55 = CPyImport_ImportFromMany(cpy_r_r53, cpy_r_r52, cpy_r_r52, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 24, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyModule_typing = cpy_r_r55;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r56 = CPyStatics[9086]; /* ('TypeAlias',) */
    cpy_r_r57 = CPyStatics[9087]; /* ('_TypeAlias',) */
    cpy_r_r58 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r59 = CPyStatic_modulefinder___globals;
    cpy_r_r60 = CPyImport_ImportFromMany(cpy_r_r58, cpy_r_r56, cpy_r_r57, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 25, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyModule_typing_extensions = cpy_r_r60;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r61 = CPyStatics[9535]; /* ('pyinfo',) */
    cpy_r_r62 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r63 = CPyStatic_modulefinder___globals;
    cpy_r_r64 = CPyImport_ImportFromMany(cpy_r_r62, cpy_r_r61, cpy_r_r61, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 27, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyModule_mypy = cpy_r_r64;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r65 = CPyStatics[9146]; /* ('FileSystemCache',) */
    cpy_r_r66 = CPyStatics[564]; /* 'mypy.fscache' */
    cpy_r_r67 = CPyStatic_modulefinder___globals;
    cpy_r_r68 = CPyImport_ImportFromMany(cpy_r_r66, cpy_r_r65, cpy_r_r65, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 28, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyModule_mypy___fscache = cpy_r_r68;
    CPy_INCREF(CPyModule_mypy___fscache);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r69 = CPyStatics[9536]; /* ('MypyFile',) */
    cpy_r_r70 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r71 = CPyStatic_modulefinder___globals;
    cpy_r_r72 = CPyImport_ImportFromMany(cpy_r_r70, cpy_r_r69, cpy_r_r69, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 29, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyModule_mypy___nodes = cpy_r_r72;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r73 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r74 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r75 = CPyStatic_modulefinder___globals;
    cpy_r_r76 = CPyImport_ImportFromMany(cpy_r_r74, cpy_r_r73, cpy_r_r73, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 30, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyModule_mypy___options = cpy_r_r76;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r77 = CPyStatics[9537]; /* ('approved_stub_package_exists',) */
    cpy_r_r78 = CPyStatics[593]; /* 'mypy.stubinfo' */
    cpy_r_r79 = CPyStatic_modulefinder___globals;
    cpy_r_r80 = CPyImport_ImportFromMany(cpy_r_r78, cpy_r_r77, cpy_r_r77, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 31, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyModule_mypy___stubinfo = cpy_r_r80;
    CPy_INCREF(CPyModule_mypy___stubinfo);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r81 = CPyModule_typing;
    cpy_r_r82 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r83 = cpy_r_r81 != cpy_r_r82;
    if (cpy_r_r83) goto CPyL25;
    cpy_r_r84 = CPyStatics[21]; /* 'typing' */
    cpy_r_r85 = PyImport_Import(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyModule_typing = cpy_r_r85;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r85);
CPyL25: ;
    cpy_r_r86 = PyImport_GetModuleDict();
    cpy_r_r87 = CPyStatics[21]; /* 'typing' */
    cpy_r_r88 = CPyDict_GetItem(cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r89 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r90 = CPyObject_GetAttr(cpy_r_r88, cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r91 = PyTuple_Pack(1, cpy_r_r90);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r92 = CPyModule_typing;
    cpy_r_r93 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r94 = cpy_r_r92 != cpy_r_r93;
    if (cpy_r_r94) goto CPyL31;
    cpy_r_r95 = CPyStatics[21]; /* 'typing' */
    cpy_r_r96 = PyImport_Import(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL127;
    }
    CPyModule_typing = cpy_r_r96;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r96);
CPyL31: ;
    cpy_r_r97 = PyImport_GetModuleDict();
    cpy_r_r98 = CPyStatics[21]; /* 'typing' */
    cpy_r_r99 = CPyDict_GetItem(cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL127;
    }
    cpy_r_r100 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r101 = CPyObject_GetAttr(cpy_r_r99, cpy_r_r100);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL127;
    }
    cpy_r_r102 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r103 = PyObject_HasAttr(cpy_r_r101, cpy_r_r102);
    if (!cpy_r_r103) goto CPyL38;
    cpy_r_r104 = CPyStatics[574]; /* 'SearchPaths' */
    cpy_r_r105 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r106 = CPyObject_GetAttr(cpy_r_r101, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL128;
    }
    PyObject *cpy_r_r107[2] = {cpy_r_r104, cpy_r_r91};
    cpy_r_r108 = (PyObject **)&cpy_r_r107;
    cpy_r_r109 = _PyObject_Vectorcall(cpy_r_r106, cpy_r_r108, 2, 0);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL128;
    }
    if (likely(PyDict_Check(cpy_r_r109)))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals, "dict", cpy_r_r109);
        goto CPyL128;
    }
    cpy_r_r111 = cpy_r_r110;
    goto CPyL40;
CPyL38: ;
    cpy_r_r112 = PyDict_New();
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL128;
    }
    cpy_r_r111 = cpy_r_r112;
CPyL40: ;
    cpy_r_r113 = PyDict_New();
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL129;
    }
    cpy_r_r114 = (PyObject *)&PyTuple_Type;
    cpy_r_r115 = CPyStatics[3870]; /* 'python_path' */
    cpy_r_r116 = CPyDict_SetItem(cpy_r_r113, cpy_r_r115, cpy_r_r114);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 36, CPyStatic_modulefinder___globals);
        goto CPyL130;
    }
    cpy_r_r118 = (PyObject *)&PyTuple_Type;
    cpy_r_r119 = CPyStatics[1574]; /* 'mypy_path' */
    cpy_r_r120 = CPyDict_SetItem(cpy_r_r113, cpy_r_r119, cpy_r_r118);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 37, CPyStatic_modulefinder___globals);
        goto CPyL130;
    }
    cpy_r_r122 = (PyObject *)&PyTuple_Type;
    cpy_r_r123 = CPyStatics[3871]; /* 'package_path' */
    cpy_r_r124 = CPyDict_SetItem(cpy_r_r113, cpy_r_r123, cpy_r_r122);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 38, CPyStatic_modulefinder___globals);
        goto CPyL130;
    }
    cpy_r_r126 = (PyObject *)&PyTuple_Type;
    cpy_r_r127 = CPyStatics[3872]; /* 'typeshed_path' */
    cpy_r_r128 = CPyDict_SetItem(cpy_r_r113, cpy_r_r127, cpy_r_r126);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 39, CPyStatic_modulefinder___globals);
        goto CPyL130;
    }
    cpy_r_r130 = CPyStatics[574]; /* 'SearchPaths' */
    cpy_r_r131 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r132 = CPyDict_SetItem(cpy_r_r111, cpy_r_r131, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL129;
    }
    cpy_r_r134 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r135 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r136 = CPyDict_SetItem(cpy_r_r111, cpy_r_r135, cpy_r_r134);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL129;
    }
    cpy_r_r138 = CPyStatics[576]; /* 'mypy.modulefinder' */
    cpy_r_r139 = CPyStatics[619]; /* '__module__' */
    cpy_r_r140 = CPyDict_SetItem(cpy_r_r111, cpy_r_r139, cpy_r_r138);
    cpy_r_r141 = cpy_r_r140 >= 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL129;
    }
    PyObject *cpy_r_r142[3] = {cpy_r_r130, cpy_r_r91, cpy_r_r111};
    cpy_r_r143 = (PyObject **)&cpy_r_r142;
    cpy_r_r144 = _PyObject_Vectorcall(cpy_r_r101, cpy_r_r143, 3, 0);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL131;
    }
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r111);
    CPyType_modulefinder___SearchPaths = (PyTypeObject *)cpy_r_r144;
    CPy_INCREF(CPyType_modulefinder___SearchPaths);
    cpy_r_r145 = CPyStatic_modulefinder___globals;
    cpy_r_r146 = CPyStatics[574]; /* 'SearchPaths' */
    cpy_r_r147 = CPyDict_SetItem(cpy_r_r145, cpy_r_r146, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 35, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r149 = (PyObject *)CPyType_modulefinder___SearchPaths;
    cpy_r_r150 = CPyStatic_modulefinder___globals;
    cpy_r_r151 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r152 = CPyDict_GetItem(cpy_r_r150, cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 43, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r153 = (PyObject *)&PyUnicode_Type;
    cpy_r_r154 = (PyObject *)&PyBool_Type;
    cpy_r_r155.f0 = cpy_r_r153;
    cpy_r_r155.f1 = cpy_r_r154;
    CPy_INCREF(cpy_r_r155.f0);
    CPy_INCREF(cpy_r_r155.f1);
    cpy_r_r156 = PyTuple_New(2);
    if (unlikely(cpy_r_r156 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3661 = cpy_r_r155.f0;
    PyTuple_SET_ITEM(cpy_r_r156, 0, __tmp3661);
    PyObject *__tmp3662 = cpy_r_r155.f1;
    PyTuple_SET_ITEM(cpy_r_r156, 1, __tmp3662);
    cpy_r_r157 = PyObject_GetItem(cpy_r_r152, cpy_r_r156);
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 43, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r158 = CPyStatic_modulefinder___globals;
    cpy_r_r159 = CPyStatics[3878]; /* 'OnePackageDir' */
    cpy_r_r160 = CPyDict_SetItem(cpy_r_r158, cpy_r_r159, cpy_r_r157);
    CPy_DECREF(cpy_r_r157);
    cpy_r_r161 = cpy_r_r160 >= 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 43, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r162 = CPyStatic_modulefinder___globals;
    cpy_r_r163 = CPyStatics[81]; /* 'List' */
    cpy_r_r164 = CPyDict_GetItem(cpy_r_r162, cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 44, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r165 = CPyStatic_modulefinder___globals;
    cpy_r_r166 = CPyStatics[3878]; /* 'OnePackageDir' */
    cpy_r_r167 = CPyDict_GetItem(cpy_r_r165, cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 44, CPyStatic_modulefinder___globals);
        goto CPyL132;
    }
    cpy_r_r168 = PyObject_GetItem(cpy_r_r164, cpy_r_r167);
    CPy_DECREF(cpy_r_r164);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 44, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r169 = CPyStatic_modulefinder___globals;
    cpy_r_r170 = CPyStatics[3879]; /* 'PackageDirs' */
    cpy_r_r171 = CPyDict_SetItem(cpy_r_r169, cpy_r_r170, cpy_r_r168);
    CPy_DECREF(cpy_r_r168);
    cpy_r_r172 = cpy_r_r171 >= 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 44, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r173 = CPyStatic_modulefinder___globals;
    cpy_r_r174 = CPyStatics[509]; /* 'Dict' */
    cpy_r_r175 = CPyDict_GetItem(cpy_r_r173, cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 47, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r176 = (PyObject *)&PyUnicode_Type;
    cpy_r_r177 = CPyStatic_modulefinder___globals;
    cpy_r_r178 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r179 = CPyDict_GetItem(cpy_r_r177, cpy_r_r178);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 47, CPyStatic_modulefinder___globals);
        goto CPyL133;
    }
    cpy_r_r180 = CPyStatic_modulefinder___globals;
    cpy_r_r181 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r182 = CPyDict_GetItem(cpy_r_r180, cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 47, CPyStatic_modulefinder___globals);
        goto CPyL134;
    }
    cpy_r_r183 = (PyObject *)&PyLong_Type;
    cpy_r_r184 = (PyObject *)&PyLong_Type;
    cpy_r_r185.f0 = cpy_r_r183;
    cpy_r_r185.f1 = cpy_r_r184;
    CPy_INCREF(cpy_r_r185.f0);
    CPy_INCREF(cpy_r_r185.f1);
    cpy_r_r186 = PyTuple_New(2);
    if (unlikely(cpy_r_r186 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3663 = cpy_r_r185.f0;
    PyTuple_SET_ITEM(cpy_r_r186, 0, __tmp3663);
    PyObject *__tmp3664 = cpy_r_r185.f1;
    PyTuple_SET_ITEM(cpy_r_r186, 1, __tmp3664);
    cpy_r_r187 = PyObject_GetItem(cpy_r_r182, cpy_r_r186);
    CPy_DECREF(cpy_r_r182);
    CPy_DECREF(cpy_r_r186);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 47, CPyStatic_modulefinder___globals);
        goto CPyL134;
    }
    cpy_r_r188 = CPyStatic_modulefinder___globals;
    cpy_r_r189 = CPyStatics[82]; /* 'Optional' */
    cpy_r_r190 = CPyDict_GetItem(cpy_r_r188, cpy_r_r189);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 47, CPyStatic_modulefinder___globals);
        goto CPyL135;
    }
    cpy_r_r191 = CPyStatic_modulefinder___globals;
    cpy_r_r192 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r193 = CPyDict_GetItem(cpy_r_r191, cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 47, CPyStatic_modulefinder___globals);
        goto CPyL136;
    }
    cpy_r_r194 = (PyObject *)&PyLong_Type;
    cpy_r_r195 = (PyObject *)&PyLong_Type;
    cpy_r_r196.f0 = cpy_r_r194;
    cpy_r_r196.f1 = cpy_r_r195;
    CPy_INCREF(cpy_r_r196.f0);
    CPy_INCREF(cpy_r_r196.f1);
    cpy_r_r197 = PyTuple_New(2);
    if (unlikely(cpy_r_r197 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3665 = cpy_r_r196.f0;
    PyTuple_SET_ITEM(cpy_r_r197, 0, __tmp3665);
    PyObject *__tmp3666 = cpy_r_r196.f1;
    PyTuple_SET_ITEM(cpy_r_r197, 1, __tmp3666);
    cpy_r_r198 = PyObject_GetItem(cpy_r_r193, cpy_r_r197);
    CPy_DECREF(cpy_r_r193);
    CPy_DECREF(cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 47, CPyStatic_modulefinder___globals);
        goto CPyL136;
    }
    cpy_r_r199 = PyObject_GetItem(cpy_r_r190, cpy_r_r198);
    CPy_DECREF(cpy_r_r190);
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 47, CPyStatic_modulefinder___globals);
        goto CPyL135;
    }
    cpy_r_r200.f0 = cpy_r_r187;
    cpy_r_r200.f1 = cpy_r_r199;
    CPy_INCREF(cpy_r_r200.f0);
    CPy_INCREF(cpy_r_r200.f1);
    CPy_DECREF(cpy_r_r187);
    CPy_DECREF(cpy_r_r199);
    cpy_r_r201 = PyTuple_New(2);
    if (unlikely(cpy_r_r201 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3667 = cpy_r_r200.f0;
    PyTuple_SET_ITEM(cpy_r_r201, 0, __tmp3667);
    PyObject *__tmp3668 = cpy_r_r200.f1;
    PyTuple_SET_ITEM(cpy_r_r201, 1, __tmp3668);
    cpy_r_r202 = PyObject_GetItem(cpy_r_r179, cpy_r_r201);
    CPy_DECREF(cpy_r_r179);
    CPy_DECREF(cpy_r_r201);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 47, CPyStatic_modulefinder___globals);
        goto CPyL133;
    }
    cpy_r_r203.f0 = cpy_r_r176;
    cpy_r_r203.f1 = cpy_r_r202;
    CPy_INCREF(cpy_r_r203.f0);
    CPy_INCREF(cpy_r_r203.f1);
    CPy_DECREF(cpy_r_r202);
    cpy_r_r204 = PyTuple_New(2);
    if (unlikely(cpy_r_r204 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3669 = cpy_r_r203.f0;
    PyTuple_SET_ITEM(cpy_r_r204, 0, __tmp3669);
    PyObject *__tmp3670 = cpy_r_r203.f1;
    PyTuple_SET_ITEM(cpy_r_r204, 1, __tmp3670);
    cpy_r_r205 = PyObject_GetItem(cpy_r_r175, cpy_r_r204);
    CPy_DECREF(cpy_r_r175);
    CPy_DECREF(cpy_r_r204);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 47, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r206 = CPyStatic_modulefinder___globals;
    cpy_r_r207 = CPyStatics[3880]; /* 'StdlibVersions' */
    cpy_r_r208 = CPyDict_SetItem(cpy_r_r206, cpy_r_r207, cpy_r_r205);
    CPy_DECREF(cpy_r_r205);
    cpy_r_r209 = cpy_r_r208 >= 0;
    if (unlikely(!cpy_r_r209)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 47, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r210 = CPyStatics[397]; /* '.pyi' */
    cpy_r_r211 = CPyStatics[174]; /* '.py' */
    cpy_r_r212 = PyList_New(2);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 49, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r213 = (CPyPtr)&((PyListObject *)cpy_r_r212)->ob_item;
    cpy_r_r214 = *(CPyPtr *)cpy_r_r213;
    CPy_INCREF(cpy_r_r210);
    *(PyObject * *)cpy_r_r214 = cpy_r_r210;
    cpy_r_r215 = cpy_r_r214 + 8;
    CPy_INCREF(cpy_r_r211);
    *(PyObject * *)cpy_r_r215 = cpy_r_r211;
    CPyStatic_modulefinder___PYTHON_EXTENSIONS = cpy_r_r212;
    CPy_INCREF(CPyStatic_modulefinder___PYTHON_EXTENSIONS);
    cpy_r_r216 = CPyStatic_modulefinder___globals;
    cpy_r_r217 = CPyStatics[2548]; /* 'PYTHON_EXTENSIONS' */
    cpy_r_r218 = CPyDict_SetItem(cpy_r_r216, cpy_r_r217, cpy_r_r212);
    CPy_DECREF(cpy_r_r212);
    cpy_r_r219 = cpy_r_r218 >= 0;
    if (unlikely(!cpy_r_r219)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 49, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r220 = CPyModule_enum;
    cpy_r_r221 = CPyStatics[3874]; /* 'Enum' */
    cpy_r_r222 = CPyObject_GetAttr(cpy_r_r220, cpy_r_r221);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r223 = PyTuple_Pack(1, cpy_r_r222);
    CPy_DECREF(cpy_r_r222);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r224 = (PyObject *)&PyType_Type;
    cpy_r_r225 = CPy_CalculateMetaclass(cpy_r_r224, cpy_r_r223);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL137;
    }
    cpy_r_r226 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r227 = PyObject_HasAttr(cpy_r_r225, cpy_r_r226);
    if (!cpy_r_r227) goto CPyL78;
    cpy_r_r228 = CPyStatics[572]; /* 'ModuleNotFoundReason' */
    cpy_r_r229 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r230 = CPyObject_GetAttr(cpy_r_r225, cpy_r_r229);
    if (unlikely(cpy_r_r230 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL137;
    }
    PyObject *cpy_r_r231[2] = {cpy_r_r228, cpy_r_r223};
    cpy_r_r232 = (PyObject **)&cpy_r_r231;
    cpy_r_r233 = _PyObject_Vectorcall(cpy_r_r230, cpy_r_r232, 2, 0);
    CPy_DECREF(cpy_r_r230);
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL137;
    }
    if (likely(PyDict_Check(cpy_r_r233)))
        cpy_r_r234 = cpy_r_r233;
    else {
        CPy_TypeErrorTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals, "dict", cpy_r_r233);
        goto CPyL137;
    }
    cpy_r_r235 = cpy_r_r234;
    goto CPyL80;
CPyL78: ;
    cpy_r_r236 = PyDict_New();
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL137;
    }
    cpy_r_r235 = cpy_r_r236;
CPyL80: ;
    cpy_r_r237 = PyDict_New();
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL138;
    }
    cpy_r_r238 = (PyObject *)&PyLong_Type;
    cpy_r_r239 = CPyStatics[3881]; /* 'NOT_FOUND' */
    cpy_r_r240 = CPyDict_SetItem(cpy_r_r237, cpy_r_r239, cpy_r_r238);
    cpy_r_r241 = cpy_r_r240 >= 0;
    if (unlikely(!cpy_r_r241)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 59, CPyStatic_modulefinder___globals);
        goto CPyL139;
    }
    cpy_r_r242 = CPyStatics[3881]; /* 'NOT_FOUND' */
    cpy_r_r243 = CPyStatics[9015]; /* 0 */
    cpy_r_r244 = CPyDict_SetItem(cpy_r_r235, cpy_r_r242, cpy_r_r243);
    cpy_r_r245 = cpy_r_r244 >= 0;
    if (unlikely(!cpy_r_r245)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 59, CPyStatic_modulefinder___globals);
        goto CPyL139;
    }
    cpy_r_r246 = (PyObject *)&PyLong_Type;
    cpy_r_r247 = CPyStatics[3882]; /* 'FOUND_WITHOUT_TYPE_HINTS' */
    cpy_r_r248 = CPyDict_SetItem(cpy_r_r237, cpy_r_r247, cpy_r_r246);
    cpy_r_r249 = cpy_r_r248 >= 0;
    if (unlikely(!cpy_r_r249)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 65, CPyStatic_modulefinder___globals);
        goto CPyL139;
    }
    cpy_r_r250 = CPyStatics[3882]; /* 'FOUND_WITHOUT_TYPE_HINTS' */
    cpy_r_r251 = CPyStatics[9016]; /* 1 */
    cpy_r_r252 = CPyDict_SetItem(cpy_r_r235, cpy_r_r250, cpy_r_r251);
    cpy_r_r253 = cpy_r_r252 >= 0;
    if (unlikely(!cpy_r_r253)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 65, CPyStatic_modulefinder___globals);
        goto CPyL139;
    }
    cpy_r_r254 = (PyObject *)&PyLong_Type;
    cpy_r_r255 = CPyStatics[3883]; /* 'WRONG_WORKING_DIRECTORY' */
    cpy_r_r256 = CPyDict_SetItem(cpy_r_r237, cpy_r_r255, cpy_r_r254);
    cpy_r_r257 = cpy_r_r256 >= 0;
    if (unlikely(!cpy_r_r257)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 69, CPyStatic_modulefinder___globals);
        goto CPyL139;
    }
    cpy_r_r258 = CPyStatics[3883]; /* 'WRONG_WORKING_DIRECTORY' */
    cpy_r_r259 = CPyStatics[9018]; /* 2 */
    cpy_r_r260 = CPyDict_SetItem(cpy_r_r235, cpy_r_r258, cpy_r_r259);
    cpy_r_r261 = cpy_r_r260 >= 0;
    if (unlikely(!cpy_r_r261)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 69, CPyStatic_modulefinder___globals);
        goto CPyL139;
    }
    cpy_r_r262 = (PyObject *)&PyLong_Type;
    cpy_r_r263 = CPyStatics[3884]; /* 'APPROVED_STUBS_NOT_INSTALLED' */
    cpy_r_r264 = CPyDict_SetItem(cpy_r_r237, cpy_r_r263, cpy_r_r262);
    cpy_r_r265 = cpy_r_r264 >= 0;
    if (unlikely(!cpy_r_r265)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 72, CPyStatic_modulefinder___globals);
        goto CPyL139;
    }
    cpy_r_r266 = CPyStatics[3884]; /* 'APPROVED_STUBS_NOT_INSTALLED' */
    cpy_r_r267 = CPyStatics[9026]; /* 3 */
    cpy_r_r268 = CPyDict_SetItem(cpy_r_r235, cpy_r_r266, cpy_r_r267);
    cpy_r_r269 = cpy_r_r268 >= 0;
    if (unlikely(!cpy_r_r269)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 72, CPyStatic_modulefinder___globals);
        goto CPyL139;
    }
    cpy_r_r270 = CPyDef_modulefinder___error_message_templates_ModuleNotFoundReason_obj();
    if (unlikely(cpy_r_r270 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 74, CPyStatic_modulefinder___globals);
        goto CPyL139;
    }
    cpy_r_r271 = CPyStatics[407]; /* 'error_message_templates' */
    cpy_r_r272 = CPyDict_SetItem(cpy_r_r235, cpy_r_r271, cpy_r_r270);
    CPy_DECREF(cpy_r_r270);
    cpy_r_r273 = cpy_r_r272 >= 0;
    if (unlikely(!cpy_r_r273)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 74, CPyStatic_modulefinder___globals);
        goto CPyL139;
    }
    cpy_r_r274 = CPyStatics[572]; /* 'ModuleNotFoundReason' */
    cpy_r_r275 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r276 = CPyDict_SetItem(cpy_r_r235, cpy_r_r275, cpy_r_r237);
    CPy_DECREF(cpy_r_r237);
    cpy_r_r277 = cpy_r_r276 >= 0;
    if (unlikely(!cpy_r_r277)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL138;
    }
    cpy_r_r278 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r279 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r280 = CPyDict_SetItem(cpy_r_r235, cpy_r_r279, cpy_r_r278);
    cpy_r_r281 = cpy_r_r280 >= 0;
    if (unlikely(!cpy_r_r281)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL138;
    }
    cpy_r_r282 = CPyStatics[576]; /* 'mypy.modulefinder' */
    cpy_r_r283 = CPyStatics[619]; /* '__module__' */
    cpy_r_r284 = CPyDict_SetItem(cpy_r_r235, cpy_r_r283, cpy_r_r282);
    cpy_r_r285 = cpy_r_r284 >= 0;
    if (unlikely(!cpy_r_r285)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL138;
    }
    PyObject *cpy_r_r286[3] = {cpy_r_r274, cpy_r_r223, cpy_r_r235};
    cpy_r_r287 = (PyObject **)&cpy_r_r286;
    cpy_r_r288 = _PyObject_Vectorcall(cpy_r_r225, cpy_r_r287, 3, 0);
    if (unlikely(cpy_r_r288 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL138;
    }
    CPy_DECREF(cpy_r_r223);
    CPy_DECREF(cpy_r_r235);
    cpy_r_r289 = CPyStatic_modulefinder___globals;
    cpy_r_r290 = CPyStatics[3875]; /* 'unique' */
    cpy_r_r291 = CPyDict_GetItem(cpy_r_r289, cpy_r_r290);
    if (unlikely(cpy_r_r291 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 55, CPyStatic_modulefinder___globals);
        goto CPyL140;
    }
    PyObject *cpy_r_r292[1] = {cpy_r_r288};
    cpy_r_r293 = (PyObject **)&cpy_r_r292;
    cpy_r_r294 = _PyObject_Vectorcall(cpy_r_r291, cpy_r_r293, 1, 0);
    CPy_DECREF(cpy_r_r291);
    if (unlikely(cpy_r_r294 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL140;
    }
    CPy_DECREF(cpy_r_r288);
    CPyType_modulefinder___ModuleNotFoundReason = (PyTypeObject *)cpy_r_r294;
    CPy_INCREF(CPyType_modulefinder___ModuleNotFoundReason);
    cpy_r_r295 = CPyStatic_modulefinder___globals;
    cpy_r_r296 = CPyStatics[572]; /* 'ModuleNotFoundReason' */
    cpy_r_r297 = CPyDict_SetItem(cpy_r_r295, cpy_r_r296, cpy_r_r294);
    CPy_DECREF(cpy_r_r294);
    cpy_r_r298 = cpy_r_r297 >= 0;
    if (unlikely(!cpy_r_r298)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r299 = (PyObject *)CPyType_modulefinder___ModuleNotFoundReason;
    cpy_r_r300 = CPyStatics[3881]; /* 'NOT_FOUND' */
    cpy_r_r301 = CPyObject_GetAttr(cpy_r_r299, cpy_r_r300);
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyStatic_modulefinder___ModuleNotFoundReason___NOT_FOUND = cpy_r_r301;
    CPy_INCREF(CPyStatic_modulefinder___ModuleNotFoundReason___NOT_FOUND);
    CPy_DECREF(cpy_r_r301);
    cpy_r_r302 = CPyStatics[3882]; /* 'FOUND_WITHOUT_TYPE_HINTS' */
    cpy_r_r303 = CPyObject_GetAttr(cpy_r_r299, cpy_r_r302);
    if (unlikely(cpy_r_r303 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyStatic_modulefinder___ModuleNotFoundReason___FOUND_WITHOUT_TYPE_HINTS = cpy_r_r303;
    CPy_INCREF(CPyStatic_modulefinder___ModuleNotFoundReason___FOUND_WITHOUT_TYPE_HINTS);
    CPy_DECREF(cpy_r_r303);
    cpy_r_r304 = CPyStatics[3883]; /* 'WRONG_WORKING_DIRECTORY' */
    cpy_r_r305 = CPyObject_GetAttr(cpy_r_r299, cpy_r_r304);
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyStatic_modulefinder___ModuleNotFoundReason___WRONG_WORKING_DIRECTORY = cpy_r_r305;
    CPy_INCREF(CPyStatic_modulefinder___ModuleNotFoundReason___WRONG_WORKING_DIRECTORY);
    CPy_DECREF(cpy_r_r305);
    cpy_r_r306 = CPyStatics[3884]; /* 'APPROVED_STUBS_NOT_INSTALLED' */
    cpy_r_r307 = CPyObject_GetAttr(cpy_r_r299, cpy_r_r306);
    if (unlikely(cpy_r_r307 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 56, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    CPyStatic_modulefinder___ModuleNotFoundReason___APPROVED_STUBS_NOT_INSTALLED = cpy_r_r307;
    CPy_INCREF(CPyStatic_modulefinder___ModuleNotFoundReason___APPROVED_STUBS_NOT_INSTALLED);
    CPy_DECREF(cpy_r_r307);
    cpy_r_r308 = CPyStatic_modulefinder___globals;
    cpy_r_r309 = CPyStatics[84]; /* 'Union' */
    cpy_r_r310 = CPyDict_GetItem(cpy_r_r308, cpy_r_r309);
    if (unlikely(cpy_r_r310 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 106, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r311 = (PyObject *)&PyUnicode_Type;
    cpy_r_r312 = (PyObject *)CPyType_modulefinder___ModuleNotFoundReason;
    cpy_r_r313.f0 = cpy_r_r311;
    cpy_r_r313.f1 = cpy_r_r312;
    CPy_INCREF(cpy_r_r313.f0);
    CPy_INCREF(cpy_r_r313.f1);
    cpy_r_r314 = PyTuple_New(2);
    if (unlikely(cpy_r_r314 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3671 = cpy_r_r313.f0;
    PyTuple_SET_ITEM(cpy_r_r314, 0, __tmp3671);
    PyObject *__tmp3672 = cpy_r_r313.f1;
    PyTuple_SET_ITEM(cpy_r_r314, 1, __tmp3672);
    cpy_r_r315 = PyObject_GetItem(cpy_r_r310, cpy_r_r314);
    CPy_DECREF(cpy_r_r310);
    CPy_DECREF(cpy_r_r314);
    if (unlikely(cpy_r_r315 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 106, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r316 = CPyStatic_modulefinder___globals;
    cpy_r_r317 = CPyStatics[573]; /* 'ModuleSearchResult' */
    cpy_r_r318 = CPyDict_SetItem(cpy_r_r316, cpy_r_r317, cpy_r_r315);
    CPy_DECREF(cpy_r_r315);
    cpy_r_r319 = cpy_r_r318 >= 0;
    if (unlikely(!cpy_r_r319)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 106, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r320 = NULL;
    cpy_r_r321 = CPyStatics[576]; /* 'mypy.modulefinder' */
    cpy_r_r322 = (PyObject *)CPyType_modulefinder___BuildSource_template;
    cpy_r_r323 = CPyType_FromTemplate(cpy_r_r322, cpy_r_r320, cpy_r_r321);
    if (unlikely(cpy_r_r323 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 109, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r324 = CPyDef_modulefinder___BuildSource_trait_vtable_setup();
    if (unlikely(cpy_r_r324 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", -1, CPyStatic_modulefinder___globals);
        goto CPyL141;
    }
    cpy_r_r325 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r326 = CPyStatics[142]; /* 'path' */
    cpy_r_r327 = CPyStatics[408]; /* 'module' */
    cpy_r_r328 = CPyStatics[3885]; /* 'text' */
    cpy_r_r329 = CPyStatics[3886]; /* 'base_dir' */
    cpy_r_r330 = CPyStatics[3887]; /* 'followed' */
    cpy_r_r331 = PyTuple_Pack(5, cpy_r_r326, cpy_r_r327, cpy_r_r328, cpy_r_r329, cpy_r_r330);
    if (unlikely(cpy_r_r331 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 109, CPyStatic_modulefinder___globals);
        goto CPyL141;
    }
    cpy_r_r332 = PyObject_SetAttr(cpy_r_r323, cpy_r_r325, cpy_r_r331);
    CPy_DECREF(cpy_r_r331);
    cpy_r_r333 = cpy_r_r332 >= 0;
    if (unlikely(!cpy_r_r333)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 109, CPyStatic_modulefinder___globals);
        goto CPyL141;
    }
    CPyType_modulefinder___BuildSource = (PyTypeObject *)cpy_r_r323;
    CPy_INCREF(CPyType_modulefinder___BuildSource);
    cpy_r_r334 = CPyStatic_modulefinder___globals;
    cpy_r_r335 = CPyStatics[569]; /* 'BuildSource' */
    cpy_r_r336 = CPyDict_SetItem(cpy_r_r334, cpy_r_r335, cpy_r_r323);
    CPy_DECREF(cpy_r_r323);
    cpy_r_r337 = cpy_r_r336 >= 0;
    if (unlikely(!cpy_r_r337)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 109, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r338 = NULL;
    cpy_r_r339 = CPyStatics[576]; /* 'mypy.modulefinder' */
    cpy_r_r340 = (PyObject *)CPyType_modulefinder___BuildSourceSet_template;
    cpy_r_r341 = CPyType_FromTemplate(cpy_r_r340, cpy_r_r338, cpy_r_r339);
    if (unlikely(cpy_r_r341 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 134, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r342 = CPyDef_modulefinder___BuildSourceSet_trait_vtable_setup();
    if (unlikely(cpy_r_r342 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", -1, CPyStatic_modulefinder___globals);
        goto CPyL142;
    }
    cpy_r_r343 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r344 = CPyStatics[3888]; /* 'source_text_present' */
    cpy_r_r345 = CPyStatics[3889]; /* 'source_modules' */
    cpy_r_r346 = CPyStatics[3890]; /* 'source_paths' */
    cpy_r_r347 = PyTuple_Pack(3, cpy_r_r344, cpy_r_r345, cpy_r_r346);
    if (unlikely(cpy_r_r347 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 134, CPyStatic_modulefinder___globals);
        goto CPyL142;
    }
    cpy_r_r348 = PyObject_SetAttr(cpy_r_r341, cpy_r_r343, cpy_r_r347);
    CPy_DECREF(cpy_r_r347);
    cpy_r_r349 = cpy_r_r348 >= 0;
    if (unlikely(!cpy_r_r349)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 134, CPyStatic_modulefinder___globals);
        goto CPyL142;
    }
    CPyType_modulefinder___BuildSourceSet = (PyTypeObject *)cpy_r_r341;
    CPy_INCREF(CPyType_modulefinder___BuildSourceSet);
    cpy_r_r350 = CPyStatic_modulefinder___globals;
    cpy_r_r351 = CPyStatics[570]; /* 'BuildSourceSet' */
    cpy_r_r352 = CPyDict_SetItem(cpy_r_r350, cpy_r_r351, cpy_r_r341);
    CPy_DECREF(cpy_r_r341);
    cpy_r_r353 = cpy_r_r352 >= 0;
    if (unlikely(!cpy_r_r353)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 134, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r354 = NULL;
    cpy_r_r355 = CPyStatics[576]; /* 'mypy.modulefinder' */
    cpy_r_r356 = (PyObject *)CPyType_modulefinder___FindModuleCache_template;
    cpy_r_r357 = CPyType_FromTemplate(cpy_r_r356, cpy_r_r354, cpy_r_r355);
    if (unlikely(cpy_r_r357 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 158, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r358 = CPyDef_modulefinder___FindModuleCache_trait_vtable_setup();
    if (unlikely(cpy_r_r358 == 2)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", -1, CPyStatic_modulefinder___globals);
        goto CPyL143;
    }
    cpy_r_r359 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r360 = CPyStatics[632]; /* 'search_paths' */
    cpy_r_r361 = CPyStatics[633]; /* 'source_set' */
    cpy_r_r362 = CPyStatics[647]; /* 'fscache' */
    cpy_r_r363 = CPyStatics[3891]; /* 'initial_components' */
    cpy_r_r364 = CPyStatics[3892]; /* 'results' */
    cpy_r_r365 = CPyStatics[3893]; /* 'ns_ancestors' */
    cpy_r_r366 = CPyStatics[159]; /* 'options' */
    cpy_r_r367 = CPyStatics[3894]; /* 'stdlib_py_versions' */
    cpy_r_r368 = PyTuple_Pack(8, cpy_r_r360, cpy_r_r361, cpy_r_r362, cpy_r_r363, cpy_r_r364, cpy_r_r365, cpy_r_r366, cpy_r_r367);
    if (unlikely(cpy_r_r368 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 158, CPyStatic_modulefinder___globals);
        goto CPyL143;
    }
    cpy_r_r369 = PyObject_SetAttr(cpy_r_r357, cpy_r_r359, cpy_r_r368);
    CPy_DECREF(cpy_r_r368);
    cpy_r_r370 = cpy_r_r369 >= 0;
    if (unlikely(!cpy_r_r370)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 158, CPyStatic_modulefinder___globals);
        goto CPyL143;
    }
    CPyType_modulefinder___FindModuleCache = (PyTypeObject *)cpy_r_r357;
    CPy_INCREF(CPyType_modulefinder___FindModuleCache);
    cpy_r_r371 = CPyStatic_modulefinder___globals;
    cpy_r_r372 = CPyStatics[571]; /* 'FindModuleCache' */
    cpy_r_r373 = CPyDict_SetItem(cpy_r_r371, cpy_r_r372, cpy_r_r357);
    CPy_DECREF(cpy_r_r357);
    cpy_r_r374 = cpy_r_r373 >= 0;
    if (unlikely(!cpy_r_r374)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 158, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r375 = CPyStatic_modulefinder___globals;
    cpy_r_r376 = CPyStatics[3043]; /* 'get_search_dirs' */
    cpy_r_r377 = CPyDict_GetItem(cpy_r_r375, cpy_r_r376);
    if (unlikely(cpy_r_r377 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 737, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    cpy_r_r378 = CPyModule_functools;
    cpy_r_r379 = CPyStatics[2554]; /* 'lru_cache' */
    cpy_r_r380 = CPyObject_GetAttr(cpy_r_r378, cpy_r_r379);
    if (unlikely(cpy_r_r380 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 737, CPyStatic_modulefinder___globals);
        goto CPyL144;
    }
    cpy_r_r381 = Py_None;
    PyObject *cpy_r_r382[1] = {cpy_r_r381};
    cpy_r_r383 = (PyObject **)&cpy_r_r382;
    cpy_r_r384 = CPyStatics[9538]; /* ('maxsize',) */
    cpy_r_r385 = _PyObject_Vectorcall(cpy_r_r380, cpy_r_r383, 0, cpy_r_r384);
    CPy_DECREF(cpy_r_r380);
    if (unlikely(cpy_r_r385 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 737, CPyStatic_modulefinder___globals);
        goto CPyL144;
    }
    PyObject *cpy_r_r386[1] = {cpy_r_r377};
    cpy_r_r387 = (PyObject **)&cpy_r_r386;
    cpy_r_r388 = _PyObject_Vectorcall(cpy_r_r385, cpy_r_r387, 1, 0);
    CPy_DECREF(cpy_r_r385);
    if (unlikely(cpy_r_r388 == NULL)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 737, CPyStatic_modulefinder___globals);
        goto CPyL144;
    }
    CPy_DECREF(cpy_r_r377);
    cpy_r_r389 = CPyStatic_modulefinder___globals;
    cpy_r_r390 = CPyStatics[3043]; /* 'get_search_dirs' */
    cpy_r_r391 = CPyDict_SetItem(cpy_r_r389, cpy_r_r390, cpy_r_r388);
    CPy_DECREF(cpy_r_r388);
    cpy_r_r392 = cpy_r_r391 >= 0;
    if (unlikely(!cpy_r_r392)) {
        CPy_AddTraceback("mypy/modulefinder.py", "<module>", 737, CPyStatic_modulefinder___globals);
        goto CPyL126;
    }
    return 1;
CPyL126: ;
    cpy_r_r393 = 2;
    return cpy_r_r393;
CPyL127: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL126;
CPyL128: ;
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r101);
    goto CPyL126;
CPyL129: ;
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r111);
    goto CPyL126;
CPyL130: ;
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r113);
    goto CPyL126;
CPyL131: ;
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r111);
    goto CPyL126;
CPyL132: ;
    CPy_DecRef(cpy_r_r164);
    goto CPyL126;
CPyL133: ;
    CPy_DecRef(cpy_r_r175);
    goto CPyL126;
CPyL134: ;
    CPy_DecRef(cpy_r_r175);
    CPy_DecRef(cpy_r_r179);
    goto CPyL126;
CPyL135: ;
    CPy_DecRef(cpy_r_r175);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_r187);
    goto CPyL126;
CPyL136: ;
    CPy_DecRef(cpy_r_r175);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r190);
    goto CPyL126;
CPyL137: ;
    CPy_DecRef(cpy_r_r223);
    goto CPyL126;
CPyL138: ;
    CPy_DecRef(cpy_r_r223);
    CPy_DecRef(cpy_r_r235);
    goto CPyL126;
CPyL139: ;
    CPy_DecRef(cpy_r_r223);
    CPy_DecRef(cpy_r_r235);
    CPy_DecRef(cpy_r_r237);
    goto CPyL126;
CPyL140: ;
    CPy_DecRef(cpy_r_r288);
    goto CPyL126;
CPyL141: ;
    CPy_DecRef(cpy_r_r323);
    goto CPyL126;
CPyL142: ;
    CPy_DecRef(cpy_r_r341);
    goto CPyL126;
CPyL143: ;
    CPy_DecRef(cpy_r_r357);
    goto CPyL126;
CPyL144: ;
    CPy_DecRef(cpy_r_r377);
    goto CPyL126;
}
