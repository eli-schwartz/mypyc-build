#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
fswatcher___FileSystemWatcher_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *fswatcher___FileSystemWatcher_setup(PyTypeObject *type);
PyObject *CPyDef_fswatcher___FileSystemWatcher(PyObject *cpy_r_fs);

static PyObject *
fswatcher___FileSystemWatcher_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_fswatcher___FileSystemWatcher) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = fswatcher___FileSystemWatcher_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_fswatcher___FileSystemWatcher_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
fswatcher___FileSystemWatcher_traverse(mypy___fswatcher___FileSystemWatcherObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_fs);
    Py_VISIT(self->__paths);
    Py_VISIT(self->__file_data);
    return 0;
}

static int
fswatcher___FileSystemWatcher_clear(mypy___fswatcher___FileSystemWatcherObject *self)
{
    Py_CLEAR(self->_fs);
    Py_CLEAR(self->__paths);
    Py_CLEAR(self->__file_data);
    return 0;
}

static void
fswatcher___FileSystemWatcher_dealloc(mypy___fswatcher___FileSystemWatcherObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, fswatcher___FileSystemWatcher_dealloc)
    fswatcher___FileSystemWatcher_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem fswatcher___FileSystemWatcher_vtable[9];
static bool
CPyDef_fswatcher___FileSystemWatcher_trait_vtable_setup(void)
{
    CPyVTableItem fswatcher___FileSystemWatcher_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_fswatcher___FileSystemWatcher_____init__,
        (CPyVTableItem)CPyDef_fswatcher___FileSystemWatcher___dump_file_data,
        (CPyVTableItem)CPyDef_fswatcher___FileSystemWatcher___set_file_data,
        (CPyVTableItem)CPyDef_fswatcher___FileSystemWatcher___add_watched_paths,
        (CPyVTableItem)CPyDef_fswatcher___FileSystemWatcher___remove_watched_paths,
        (CPyVTableItem)CPyDef_fswatcher___FileSystemWatcher____update,
        (CPyVTableItem)CPyDef_fswatcher___FileSystemWatcher____find_changed,
        (CPyVTableItem)CPyDef_fswatcher___FileSystemWatcher___find_changed,
        (CPyVTableItem)CPyDef_fswatcher___FileSystemWatcher___update_changed,
    };
    memcpy(fswatcher___FileSystemWatcher_vtable, fswatcher___FileSystemWatcher_vtable_scratch, sizeof(fswatcher___FileSystemWatcher_vtable));
    return 1;
}

static PyObject *
fswatcher___FileSystemWatcher_get_fs(mypy___fswatcher___FileSystemWatcherObject *self, void *closure);
static int
fswatcher___FileSystemWatcher_set_fs(mypy___fswatcher___FileSystemWatcherObject *self, PyObject *value, void *closure);
static PyObject *
fswatcher___FileSystemWatcher_get__paths(mypy___fswatcher___FileSystemWatcherObject *self, void *closure);
static int
fswatcher___FileSystemWatcher_set__paths(mypy___fswatcher___FileSystemWatcherObject *self, PyObject *value, void *closure);
static PyObject *
fswatcher___FileSystemWatcher_get__file_data(mypy___fswatcher___FileSystemWatcherObject *self, void *closure);
static int
fswatcher___FileSystemWatcher_set__file_data(mypy___fswatcher___FileSystemWatcherObject *self, PyObject *value, void *closure);

static PyGetSetDef fswatcher___FileSystemWatcher_getseters[] = {
    {"fs",
     (getter)fswatcher___FileSystemWatcher_get_fs, (setter)fswatcher___FileSystemWatcher_set_fs,
     NULL, NULL},
    {"_paths",
     (getter)fswatcher___FileSystemWatcher_get__paths, (setter)fswatcher___FileSystemWatcher_set__paths,
     NULL, NULL},
    {"_file_data",
     (getter)fswatcher___FileSystemWatcher_get__file_data, (setter)fswatcher___FileSystemWatcher_set__file_data,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef fswatcher___FileSystemWatcher_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_fswatcher___FileSystemWatcher_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"dump_file_data",
     (PyCFunction)CPyPy_fswatcher___FileSystemWatcher___dump_file_data,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"set_file_data",
     (PyCFunction)CPyPy_fswatcher___FileSystemWatcher___set_file_data,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_watched_paths",
     (PyCFunction)CPyPy_fswatcher___FileSystemWatcher___add_watched_paths,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"remove_watched_paths",
     (PyCFunction)CPyPy_fswatcher___FileSystemWatcher___remove_watched_paths,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_update",
     (PyCFunction)CPyPy_fswatcher___FileSystemWatcher____update,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_find_changed",
     (PyCFunction)CPyPy_fswatcher___FileSystemWatcher____find_changed,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_changed",
     (PyCFunction)CPyPy_fswatcher___FileSystemWatcher___find_changed,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"update_changed",
     (PyCFunction)CPyPy_fswatcher___FileSystemWatcher___update_changed,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_fswatcher___FileSystemWatcher_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FileSystemWatcher",
    .tp_new = fswatcher___FileSystemWatcher_new,
    .tp_dealloc = (destructor)fswatcher___FileSystemWatcher_dealloc,
    .tp_traverse = (traverseproc)fswatcher___FileSystemWatcher_traverse,
    .tp_clear = (inquiry)fswatcher___FileSystemWatcher_clear,
    .tp_getset = fswatcher___FileSystemWatcher_getseters,
    .tp_methods = fswatcher___FileSystemWatcher_methods,
    .tp_init = fswatcher___FileSystemWatcher_init,
    .tp_basicsize = sizeof(mypy___fswatcher___FileSystemWatcherObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_fswatcher___FileSystemWatcher_template = &CPyType_fswatcher___FileSystemWatcher_template_;

static PyObject *
fswatcher___FileSystemWatcher_setup(PyTypeObject *type)
{
    mypy___fswatcher___FileSystemWatcherObject *self;
    self = (mypy___fswatcher___FileSystemWatcherObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = fswatcher___FileSystemWatcher_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_fswatcher___FileSystemWatcher(PyObject *cpy_r_fs)
{
    PyObject *self = fswatcher___FileSystemWatcher_setup(CPyType_fswatcher___FileSystemWatcher);
    if (self == NULL)
        return NULL;
    char res = CPyDef_fswatcher___FileSystemWatcher_____init__(self, cpy_r_fs);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
fswatcher___FileSystemWatcher_get_fs(mypy___fswatcher___FileSystemWatcherObject *self, void *closure)
{
    if (unlikely(self->_fs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fs' of 'FileSystemWatcher' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fs);
    PyObject *retval = self->_fs;
    return retval;
}

static int
fswatcher___FileSystemWatcher_set_fs(mypy___fswatcher___FileSystemWatcherObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FileSystemWatcher' object attribute 'fs' cannot be deleted");
        return -1;
    }
    if (self->_fs != NULL) {
        CPy_DECREF(self->_fs);
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
    self->_fs = tmp;
    return 0;
}

static PyObject *
fswatcher___FileSystemWatcher_get__paths(mypy___fswatcher___FileSystemWatcherObject *self, void *closure)
{
    if (unlikely(self->__paths == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_paths' of 'FileSystemWatcher' undefined");
        return NULL;
    }
    CPy_INCREF(self->__paths);
    PyObject *retval = self->__paths;
    return retval;
}

static int
fswatcher___FileSystemWatcher_set__paths(mypy___fswatcher___FileSystemWatcherObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FileSystemWatcher' object attribute '_paths' cannot be deleted");
        return -1;
    }
    if (self->__paths != NULL) {
        CPy_DECREF(self->__paths);
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
    self->__paths = tmp;
    return 0;
}

static PyObject *
fswatcher___FileSystemWatcher_get__file_data(mypy___fswatcher___FileSystemWatcherObject *self, void *closure)
{
    if (unlikely(self->__file_data == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_file_data' of 'FileSystemWatcher' undefined");
        return NULL;
    }
    CPy_INCREF(self->__file_data);
    PyObject *retval = self->__file_data;
    return retval;
}

static int
fswatcher___FileSystemWatcher_set__file_data(mypy___fswatcher___FileSystemWatcherObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FileSystemWatcher' object attribute '_file_data' cannot be deleted");
        return -1;
    }
    if (self->__file_data != NULL) {
        CPy_DECREF(self->__file_data);
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
    self->__file_data = tmp;
    return 0;
}
static PyMethodDef fswatchermodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef fswatchermodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.fswatcher",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    fswatchermodule_methods
};

PyObject *CPyInit_mypy___fswatcher(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___fswatcher_internal) {
        Py_INCREF(CPyModule_mypy___fswatcher_internal);
        return CPyModule_mypy___fswatcher_internal;
    }
    CPyModule_mypy___fswatcher_internal = PyModule_Create(&fswatchermodule);
    if (unlikely(CPyModule_mypy___fswatcher_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___fswatcher_internal, "__name__");
    CPyStatic_fswatcher___globals = PyModule_GetDict(CPyModule_mypy___fswatcher_internal);
    if (unlikely(CPyStatic_fswatcher___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_fswatcher_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___fswatcher_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___fswatcher_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_fswatcher___FileData);
    Py_CLEAR(CPyType_fswatcher___FileSystemWatcher);
    return NULL;
}

char CPyDef_fswatcher___FileSystemWatcher_____init__(PyObject *cpy_r_self, PyObject *cpy_r_fs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    CPy_INCREF(cpy_r_fs);
    ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->_fs = cpy_r_fs;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "__init__", 36, CPyStatic_fswatcher___globals);
        goto CPyL3;
    }
    ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__paths = cpy_r_r0;
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "__init__", 37, CPyStatic_fswatcher___globals);
        goto CPyL3;
    }
    ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__file_data = cpy_r_r1;
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_fswatcher___FileSystemWatcher_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fs", 0};
    PyObject *obj_fs;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_fs)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fswatcher___FileSystemWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fswatcher.FileSystemWatcher", obj_self); 
        goto fail;
    }
    PyObject *arg_fs;
    if (likely(PyObject_TypeCheck(obj_fs, CPyType_fscache___FileSystemCache)))
        arg_fs = obj_fs;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_fs); 
        goto fail;
    }
    char retval = CPyDef_fswatcher___FileSystemWatcher_____init__(arg_self, arg_fs);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fswatcher.py", "__init__", 34, CPyStatic_fswatcher___globals);
    return NULL;
}

PyObject *CPyDef_fswatcher___FileSystemWatcher___dump_file_data(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T4CIOO cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_k;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "dump_file_data", 40, CPyStatic_fswatcher___globals);
        goto CPyL11;
    }
    cpy_r_r1 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__file_data;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
    cpy_r_r3 = PyDict_Size(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyDict_GetItemsIter(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "dump_file_data", 40, CPyStatic_fswatcher___globals);
        goto CPyL12;
    }
CPyL2: ;
    cpy_r_r6 = CPyDict_NextItem(cpy_r_r5, cpy_r_r2);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r2 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL13;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = cpy_r_r6.f3;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r11 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/fswatcher.py", "dump_file_data", 40, CPyStatic_fswatcher___globals, "str", cpy_r_r9);
        goto CPyL14;
    }
    if (PyTuple_Check(cpy_r_r10))
        cpy_r_r12 = cpy_r_r10;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL2922;
    if (cpy_r_r10 == Py_None)
        cpy_r_r12 = cpy_r_r10;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL2922;
    CPy_TypeErrorTraceback("mypy/fswatcher.py", "dump_file_data", 40, CPyStatic_fswatcher___globals, "tuple or None", cpy_r_r10);
    goto CPyL15;
__LL2922: ;
    cpy_r_k = cpy_r_r11;
    cpy_r_v = cpy_r_r12;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_v != cpy_r_r13;
    if (!cpy_r_r14) goto CPyL16;
    if (likely(cpy_r_v != Py_None))
        cpy_r_r15 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/fswatcher.py", "dump_file_data", 40, CPyStatic_fswatcher___globals, "tuple", cpy_r_v);
        goto CPyL17;
    }
    cpy_r_r16 = CPyDict_SetItem(cpy_r_r0, cpy_r_k, cpy_r_r15);
    CPy_DECREF(cpy_r_k);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/fswatcher.py", "dump_file_data", 40, CPyStatic_fswatcher___globals);
        goto CPyL18;
    }
CPyL8: ;
    cpy_r_r18 = CPyDict_CheckSize(cpy_r_r1, cpy_r_r4);
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/fswatcher.py", "dump_file_data", 40, CPyStatic_fswatcher___globals);
        goto CPyL18;
    } else
        goto CPyL2;
CPyL9: ;
    cpy_r_r19 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/fswatcher.py", "dump_file_data", 40, CPyStatic_fswatcher___globals);
        goto CPyL19;
    }
    return cpy_r_r0;
CPyL11: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    goto CPyL11;
CPyL16: ;
    CPy_DECREF(cpy_r_k);
    CPy_DECREF(cpy_r_v);
    goto CPyL8;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_k);
    goto CPyL11;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL11;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
}

PyObject *CPyPy_fswatcher___FileSystemWatcher___dump_file_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":dump_file_data", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fswatcher___FileSystemWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fswatcher.FileSystemWatcher", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_fswatcher___FileSystemWatcher___dump_file_data(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fswatcher.py", "dump_file_data", 39, CPyStatic_fswatcher___globals);
    return NULL;
}

char CPyDef_fswatcher___FileSystemWatcher___set_file_data(PyObject *cpy_r_self, PyObject *cpy_r_path, PyObject *cpy_r_data) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__file_data;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDict_SetItem(cpy_r_r0, cpy_r_path, cpy_r_data);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/fswatcher.py", "set_file_data", 43, CPyStatic_fswatcher___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_fswatcher___FileSystemWatcher___set_file_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", "data", 0};
    static CPyArg_Parser parser = {"OO:set_file_data", kwlist, 0};
    PyObject *obj_path;
    PyObject *obj_data;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_path, &obj_data)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fswatcher___FileSystemWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fswatcher.FileSystemWatcher", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject * arg_data;
    if (likely(PyTuple_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("tuple", obj_data); 
        goto fail;
    }
    char retval = CPyDef_fswatcher___FileSystemWatcher___set_file_data(arg_self, arg_path, arg_data);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fswatcher.py", "set_file_data", 42, CPyStatic_fswatcher___globals);
    return NULL;
}

char CPyDef_fswatcher___FileSystemWatcher___add_watched_paths(PyObject *cpy_r_self, PyObject *cpy_r_paths) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = PyObject_GetIter(cpy_r_paths);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "add_watched_paths", 46, CPyStatic_fswatcher___globals);
        goto CPyL11;
    }
CPyL1: ;
    cpy_r_r1 = PyIter_Next(cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL12;
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/fswatcher.py", "add_watched_paths", 46, CPyStatic_fswatcher___globals, "str", cpy_r_r1);
        goto CPyL13;
    }
    cpy_r_path = cpy_r_r2;
    cpy_r_r3 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__paths;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PySet_Contains(cpy_r_r3, cpy_r_path);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/fswatcher.py", "add_watched_paths", 47, CPyStatic_fswatcher___globals);
        goto CPyL14;
    }
    cpy_r_r6 = cpy_r_r4;
    cpy_r_r7 = cpy_r_r6 ^ 1;
    if (!cpy_r_r7) goto CPyL15;
    cpy_r_r8 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__file_data;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = Py_None;
    cpy_r_r10 = CPyDict_SetItem(cpy_r_r8, cpy_r_path, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_path);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/fswatcher.py", "add_watched_paths", 50, CPyStatic_fswatcher___globals);
        goto CPyL13;
    } else
        goto CPyL1;
CPyL6: ;
    cpy_r_r12 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/fswatcher.py", "add_watched_paths", 46, CPyStatic_fswatcher___globals);
        goto CPyL11;
    }
    cpy_r_r13 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__paths;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = PySet_New(cpy_r_paths);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "add_watched_paths", 51, CPyStatic_fswatcher___globals);
        goto CPyL16;
    }
    cpy_r_r15 = PyNumber_InPlaceOr(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "add_watched_paths", 51, CPyStatic_fswatcher___globals);
        goto CPyL11;
    }
    if (likely(PySet_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/fswatcher.py", "add_watched_paths", 51, CPyStatic_fswatcher___globals, "set", cpy_r_r15);
        goto CPyL11;
    }
    CPy_DECREF(((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__paths);
    ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__paths = cpy_r_r16;
    return 1;
CPyL11: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
CPyL12: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL6;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_path);
    goto CPyL11;
CPyL15: ;
    CPy_DECREF(cpy_r_path);
    goto CPyL1;
CPyL16: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL11;
}

PyObject *CPyPy_fswatcher___FileSystemWatcher___add_watched_paths(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"paths", 0};
    static CPyArg_Parser parser = {"O:add_watched_paths", kwlist, 0};
    PyObject *obj_paths;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_paths)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fswatcher___FileSystemWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fswatcher.FileSystemWatcher", obj_self); 
        goto fail;
    }
    PyObject *arg_paths = obj_paths;
    char retval = CPyDef_fswatcher___FileSystemWatcher___add_watched_paths(arg_self, arg_paths);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fswatcher.py", "add_watched_paths", 45, CPyStatic_fswatcher___globals);
    return NULL;
}

char CPyDef_fswatcher___FileSystemWatcher___remove_watched_paths(PyObject *cpy_r_self, PyObject *cpy_r_paths) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = PyObject_GetIter(cpy_r_paths);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "remove_watched_paths", 54, CPyStatic_fswatcher___globals);
        goto CPyL11;
    }
CPyL1: ;
    cpy_r_r1 = PyIter_Next(cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL12;
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/fswatcher.py", "remove_watched_paths", 54, CPyStatic_fswatcher___globals, "str", cpy_r_r1);
        goto CPyL13;
    }
    cpy_r_path = cpy_r_r2;
    cpy_r_r3 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__file_data;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PyDict_Contains(cpy_r_r3, cpy_r_path);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/fswatcher.py", "remove_watched_paths", 55, CPyStatic_fswatcher___globals);
        goto CPyL14;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL15;
    cpy_r_r7 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__file_data;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyObject_DelItem(cpy_r_r7, cpy_r_path);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_path);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/fswatcher.py", "remove_watched_paths", 56, CPyStatic_fswatcher___globals);
        goto CPyL13;
    } else
        goto CPyL1;
CPyL6: ;
    cpy_r_r10 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/fswatcher.py", "remove_watched_paths", 54, CPyStatic_fswatcher___globals);
        goto CPyL11;
    }
    cpy_r_r11 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__paths;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = PySet_New(cpy_r_paths);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "remove_watched_paths", 57, CPyStatic_fswatcher___globals);
        goto CPyL16;
    }
    cpy_r_r13 = PyNumber_InPlaceSubtract(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "remove_watched_paths", 57, CPyStatic_fswatcher___globals);
        goto CPyL11;
    }
    if (likely(PySet_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/fswatcher.py", "remove_watched_paths", 57, CPyStatic_fswatcher___globals, "set", cpy_r_r13);
        goto CPyL11;
    }
    CPy_DECREF(((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__paths);
    ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__paths = cpy_r_r14;
    return 1;
CPyL11: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL12: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL6;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_path);
    goto CPyL11;
CPyL15: ;
    CPy_DECREF(cpy_r_path);
    goto CPyL1;
CPyL16: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL11;
}

PyObject *CPyPy_fswatcher___FileSystemWatcher___remove_watched_paths(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"paths", 0};
    static CPyArg_Parser parser = {"O:remove_watched_paths", kwlist, 0};
    PyObject *obj_paths;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_paths)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fswatcher___FileSystemWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fswatcher.FileSystemWatcher", obj_self); 
        goto fail;
    }
    PyObject *arg_paths = obj_paths;
    char retval = CPyDef_fswatcher___FileSystemWatcher___remove_watched_paths(arg_self, arg_paths);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fswatcher.py", "remove_watched_paths", 53, CPyStatic_fswatcher___globals);
    return NULL;
}

char CPyDef_fswatcher___FileSystemWatcher____update(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_st;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_hash_digest;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    double cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
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
    cpy_r_r0 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->_fs;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_fscache___FileSystemCache, 3, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_path); /* stat */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_update", 60, CPyStatic_fswatcher___globals);
        goto CPyL12;
    }
    cpy_r_st = cpy_r_r1;
    cpy_r_r2 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->_fs;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_fscache___FileSystemCache, 13, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r2, cpy_r_path); /* hash_digest */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_update", 61, CPyStatic_fswatcher___globals);
        goto CPyL13;
    }
    cpy_r_hash_digest = cpy_r_r3;
    cpy_r_r4 = CPyStatics[329]; /* 'st_mtime' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_st, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_update", 62, CPyStatic_fswatcher___globals);
        goto CPyL14;
    }
    cpy_r_r6 = PyFloat_AsDouble(cpy_r_r5);
    if (cpy_r_r6 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r5); cpy_r_r6 = -113.0;
    }
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 == -113.0;
    if (unlikely(cpy_r_r7)) goto CPyL5;
CPyL4: ;
    cpy_r_r8 = CPyStatics[326]; /* 'st_size' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_st, cpy_r_r8);
    CPy_DECREF(cpy_r_st);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_update", 62, CPyStatic_fswatcher___globals);
        goto CPyL15;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r10 = PyErr_Occurred();
    if (unlikely(cpy_r_r10 != NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_update", 62, CPyStatic_fswatcher___globals);
        goto CPyL14;
    } else
        goto CPyL4;
CPyL6: ;
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r11 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r11 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_update", 62, CPyStatic_fswatcher___globals);
        goto CPyL15;
    }
    cpy_r_r12 = CPyStatic_fswatcher___globals;
    cpy_r_r13 = CPyStatics[1956]; /* 'FileData' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_update", 62, CPyStatic_fswatcher___globals);
        goto CPyL16;
    }
    cpy_r_r15 = PyFloat_FromDouble(cpy_r_r6);
    cpy_r_r16 = CPyTagged_StealAsObject(cpy_r_r11);
    PyObject *cpy_r_r17[3] = {cpy_r_r15, cpy_r_r16, cpy_r_hash_digest};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r18, 3, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_update", 62, CPyStatic_fswatcher___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_hash_digest);
    if (likely(PyTuple_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/fswatcher.py", "_update", 62, CPyStatic_fswatcher___globals, "tuple", cpy_r_r19);
        goto CPyL12;
    }
    cpy_r_r21 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__file_data;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDict_SetItem(cpy_r_r21, cpy_r_path, cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_update", 62, CPyStatic_fswatcher___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r24 = 2;
    return cpy_r_r24;
CPyL13: ;
    CPy_DecRef(cpy_r_st);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_st);
    CPy_DecRef(cpy_r_hash_digest);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_hash_digest);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_hash_digest);
    CPyTagged_DecRef(cpy_r_r11);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_hash_digest);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    goto CPyL12;
}

PyObject *CPyPy_fswatcher___FileSystemWatcher____update(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:_update", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fswatcher___FileSystemWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fswatcher.FileSystemWatcher", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    char retval = CPyDef_fswatcher___FileSystemWatcher____update(arg_self, arg_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/fswatcher.py", "_update", 59, CPyStatic_fswatcher___globals);
    return NULL;
}

PyObject *CPyDef_fswatcher___FileSystemWatcher____find_changed(PyObject *cpy_r_self, PyObject *cpy_r_paths) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_changed;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_old;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_st;
    tuple_T3OOO cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    int64_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    double cpy_r_r40;
    char cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    double cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    int64_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_new_hash;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    int64_t cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 65, CPyStatic_fswatcher___globals);
        goto CPyL62;
    }
    cpy_r_changed = cpy_r_r0;
    cpy_r_r1 = PyObject_GetIter(cpy_r_paths);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 66, CPyStatic_fswatcher___globals);
        goto CPyL63;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL64;
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/fswatcher.py", "_find_changed", 66, CPyStatic_fswatcher___globals, "str", cpy_r_r2);
        goto CPyL65;
    }
    cpy_r_path = cpy_r_r3;
    cpy_r_r4 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__file_data;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r4, cpy_r_path);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 67, CPyStatic_fswatcher___globals);
        goto CPyL66;
    }
    if (PyTuple_Check(cpy_r_r5))
        cpy_r_r6 = cpy_r_r5;
    else {
        cpy_r_r6 = NULL;
    }
    if (cpy_r_r6 != NULL) goto __LL2923;
    if (cpy_r_r5 == Py_None)
        cpy_r_r6 = cpy_r_r5;
    else {
        cpy_r_r6 = NULL;
    }
    if (cpy_r_r6 != NULL) goto __LL2923;
    CPy_TypeErrorTraceback("mypy/fswatcher.py", "_find_changed", 67, CPyStatic_fswatcher___globals, "tuple or None", cpy_r_r5);
    goto CPyL66;
__LL2923: ;
    cpy_r_old = cpy_r_r6;
    cpy_r_r7 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->_fs;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_r7, CPyType_fscache___FileSystemCache, 3, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r7, cpy_r_path); /* stat */
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 69, CPyStatic_fswatcher___globals);
        goto CPyL9;
    }
    cpy_r_st = cpy_r_r8;
    goto CPyL19;
CPyL9: ;
    cpy_r_r9 = CPy_CatchError();
    cpy_r_r10 = CPyModule_builtins;
    cpy_r_r11 = CPyStatics[269]; /* 'FileNotFoundError' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 70, CPyStatic_fswatcher___globals);
        goto CPyL67;
    }
    cpy_r_r13 = CPy_ExceptionMatches(cpy_r_r12);
    CPy_DecRef(cpy_r_r12);
    if (!cpy_r_r13) goto CPyL68;
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_old != cpy_r_r14;
    CPy_DecRef(cpy_r_old);
    if (!cpy_r_r15) goto CPyL69;
    cpy_r_r16 = PySet_Add(cpy_r_changed, cpy_r_path);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 73, CPyStatic_fswatcher___globals);
        goto CPyL70;
    }
    cpy_r_r18 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__file_data;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = Py_None;
    cpy_r_r20 = CPyDict_SetItem(cpy_r_r18, cpy_r_path, cpy_r_r19);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_path);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 74, CPyStatic_fswatcher___globals);
        goto CPyL71;
    } else
        goto CPyL16;
CPyL14: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL17;
    } else
        goto CPyL72;
CPyL15: ;
    CPy_Unreachable();
CPyL16: ;
    CPy_RestoreExcInfo(cpy_r_r9);
    CPy_DecRef(cpy_r_r9.f0);
    CPy_DecRef(cpy_r_r9.f1);
    CPy_DecRef(cpy_r_r9.f2);
    goto CPyL2;
CPyL17: ;
    CPy_RestoreExcInfo(cpy_r_r9);
    CPy_DecRef(cpy_r_r9.f0);
    CPy_DecRef(cpy_r_r9.f1);
    CPy_DecRef(cpy_r_r9.f2);
    cpy_r_r22 = CPy_KeepPropagating();
    if (!cpy_r_r22) goto CPyL62;
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_old == cpy_r_r23;
    if (cpy_r_r24) {
        goto CPyL73;
    } else
        goto CPyL22;
CPyL20: ;
    cpy_r_r25 = PySet_Add(cpy_r_changed, cpy_r_path);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 78, CPyStatic_fswatcher___globals);
        goto CPyL66;
    }
    cpy_r_r27 = CPyDef_fswatcher___FileSystemWatcher____update(cpy_r_self, cpy_r_path);
    CPy_DECREF(cpy_r_path);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 79, CPyStatic_fswatcher___globals);
        goto CPyL65;
    } else
        goto CPyL2;
CPyL22: ;
    cpy_r_r28 = CPyStatics[326]; /* 'st_size' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_st, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 81, CPyStatic_fswatcher___globals);
        goto CPyL74;
    }
    if (likely(PyLong_Check(cpy_r_r29)))
        cpy_r_r30 = CPyTagged_FromObject(cpy_r_r29);
    else {
        CPy_TypeError("int", cpy_r_r29); cpy_r_r30 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 81, CPyStatic_fswatcher___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_old);
    if (likely(cpy_r_old != Py_None))
        cpy_r_r31 = cpy_r_old;
    else {
        CPy_TypeErrorTraceback("mypy/fswatcher.py", "_find_changed", 81, CPyStatic_fswatcher___globals, "tuple", cpy_r_old);
        goto CPyL75;
    }
    cpy_r_r32 = CPySequenceTuple_GetItem(cpy_r_r31, 2);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 81, CPyStatic_fswatcher___globals);
        goto CPyL75;
    }
    if (likely(PyLong_Check(cpy_r_r32)))
        cpy_r_r33 = CPyTagged_FromObject(cpy_r_r32);
    else {
        CPy_TypeError("int", cpy_r_r32); cpy_r_r33 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 81, CPyStatic_fswatcher___globals);
        goto CPyL75;
    }
    cpy_r_r34 = cpy_r_r30 & 1;
    cpy_r_r35 = cpy_r_r34 != 0;
    if (!cpy_r_r35) goto CPyL29;
    cpy_r_r36 = CPyTagged_IsEq_(cpy_r_r30, cpy_r_r33);
    CPyTagged_DECREF(cpy_r_r30);
    CPyTagged_DECREF(cpy_r_r33);
    if (cpy_r_r36) {
        goto CPyL30;
    } else
        goto CPyL42;
CPyL29: ;
    cpy_r_r37 = cpy_r_r30 != cpy_r_r33;
    CPyTagged_DECREF(cpy_r_r30);
    CPyTagged_DECREF(cpy_r_r33);
    if (cpy_r_r37) goto CPyL42;
CPyL30: ;
    cpy_r_r38 = CPyStatics[329]; /* 'st_mtime' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_st, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 81, CPyStatic_fswatcher___globals);
        goto CPyL74;
    }
    cpy_r_r40 = PyFloat_AsDouble(cpy_r_r39);
    if (cpy_r_r40 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r39); cpy_r_r40 = -113.0;
    }
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 == -113.0;
    if (unlikely(cpy_r_r41)) goto CPyL33;
CPyL32: ;
    cpy_r_r42 = CPyTagged_FromFloat(cpy_r_r40);
    if (unlikely(cpy_r_r42 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 81, CPyStatic_fswatcher___globals);
        goto CPyL74;
    } else
        goto CPyL34;
CPyL33: ;
    cpy_r_r43 = PyErr_Occurred();
    if (unlikely(cpy_r_r43 != NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 81, CPyStatic_fswatcher___globals);
        goto CPyL74;
    } else
        goto CPyL32;
CPyL34: ;
    CPy_INCREF(cpy_r_old);
    if (likely(cpy_r_old != Py_None))
        cpy_r_r44 = cpy_r_old;
    else {
        CPy_TypeErrorTraceback("mypy/fswatcher.py", "_find_changed", 81, CPyStatic_fswatcher___globals, "tuple", cpy_r_old);
        goto CPyL76;
    }
    cpy_r_r45 = CPySequenceTuple_GetItem(cpy_r_r44, 0);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 81, CPyStatic_fswatcher___globals);
        goto CPyL76;
    }
    cpy_r_r46 = PyFloat_AsDouble(cpy_r_r45);
    if (cpy_r_r46 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r45); cpy_r_r46 = -113.0;
    }
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 == -113.0;
    if (unlikely(cpy_r_r47)) goto CPyL38;
CPyL37: ;
    cpy_r_r48 = CPyTagged_FromFloat(cpy_r_r46);
    if (unlikely(cpy_r_r48 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 81, CPyStatic_fswatcher___globals);
        goto CPyL76;
    } else
        goto CPyL39;
CPyL38: ;
    cpy_r_r49 = PyErr_Occurred();
    if (unlikely(cpy_r_r49 != NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 81, CPyStatic_fswatcher___globals);
        goto CPyL76;
    } else
        goto CPyL37;
CPyL39: ;
    cpy_r_r50 = cpy_r_r42 & 1;
    cpy_r_r51 = cpy_r_r50 != 0;
    if (!cpy_r_r51) goto CPyL41;
    cpy_r_r52 = CPyTagged_IsEq_(cpy_r_r42, cpy_r_r48);
    CPyTagged_DECREF(cpy_r_r42);
    CPyTagged_DECREF(cpy_r_r48);
    if (cpy_r_r52) {
        goto CPyL77;
    } else
        goto CPyL42;
CPyL41: ;
    cpy_r_r53 = cpy_r_r42 != cpy_r_r48;
    CPyTagged_DECREF(cpy_r_r42);
    CPyTagged_DECREF(cpy_r_r48);
    if (!cpy_r_r53) goto CPyL77;
CPyL42: ;
    cpy_r_r54 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->_fs;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = CPY_GET_METHOD(cpy_r_r54, CPyType_fscache___FileSystemCache, 13, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r54, cpy_r_path); /* hash_digest */
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 84, CPyStatic_fswatcher___globals);
        goto CPyL74;
    }
    cpy_r_new_hash = cpy_r_r55;
    cpy_r_r56 = CPyDef_fswatcher___FileSystemWatcher____update(cpy_r_self, cpy_r_path);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 85, CPyStatic_fswatcher___globals);
        goto CPyL78;
    }
    cpy_r_r57 = CPyStatics[326]; /* 'st_size' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_st, cpy_r_r57);
    CPy_DECREF(cpy_r_st);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 86, CPyStatic_fswatcher___globals);
        goto CPyL79;
    }
    if (likely(PyLong_Check(cpy_r_r58)))
        cpy_r_r59 = CPyTagged_FromObject(cpy_r_r58);
    else {
        CPy_TypeError("int", cpy_r_r58); cpy_r_r59 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 86, CPyStatic_fswatcher___globals);
        goto CPyL79;
    }
    CPy_INCREF(cpy_r_old);
    if (likely(cpy_r_old != Py_None))
        cpy_r_r60 = cpy_r_old;
    else {
        CPy_TypeErrorTraceback("mypy/fswatcher.py", "_find_changed", 86, CPyStatic_fswatcher___globals, "tuple", cpy_r_old);
        goto CPyL80;
    }
    cpy_r_r61 = CPySequenceTuple_GetItem(cpy_r_r60, 2);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 86, CPyStatic_fswatcher___globals);
        goto CPyL80;
    }
    if (likely(PyLong_Check(cpy_r_r61)))
        cpy_r_r62 = CPyTagged_FromObject(cpy_r_r61);
    else {
        CPy_TypeError("int", cpy_r_r61); cpy_r_r62 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 86, CPyStatic_fswatcher___globals);
        goto CPyL80;
    }
    cpy_r_r63 = cpy_r_r59 & 1;
    cpy_r_r64 = cpy_r_r63 != 0;
    if (!cpy_r_r64) goto CPyL51;
    cpy_r_r65 = CPyTagged_IsEq_(cpy_r_r59, cpy_r_r62);
    CPyTagged_DECREF(cpy_r_r59);
    CPyTagged_DECREF(cpy_r_r62);
    if (cpy_r_r65) {
        goto CPyL52;
    } else
        goto CPyL81;
CPyL51: ;
    cpy_r_r66 = cpy_r_r59 != cpy_r_r62;
    CPyTagged_DECREF(cpy_r_r59);
    CPyTagged_DECREF(cpy_r_r62);
    if (cpy_r_r66) goto CPyL81;
CPyL52: ;
    if (likely(cpy_r_old != Py_None))
        cpy_r_r67 = cpy_r_old;
    else {
        CPy_TypeErrorTraceback("mypy/fswatcher.py", "_find_changed", 86, CPyStatic_fswatcher___globals, "tuple", cpy_r_old);
        goto CPyL82;
    }
    cpy_r_r68 = CPySequenceTuple_GetItem(cpy_r_r67, 4);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 86, CPyStatic_fswatcher___globals);
        goto CPyL82;
    }
    if (likely(PyUnicode_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/fswatcher.py", "_find_changed", 86, CPyStatic_fswatcher___globals, "str", cpy_r_r68);
        goto CPyL82;
    }
    cpy_r_r70 = PyUnicode_Compare(cpy_r_new_hash, cpy_r_r69);
    CPy_DECREF(cpy_r_new_hash);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 == -1;
    if (!cpy_r_r71) goto CPyL58;
    cpy_r_r72 = PyErr_Occurred();
    cpy_r_r73 = cpy_r_r72 != NULL;
    if (!cpy_r_r73) goto CPyL58;
    cpy_r_r74 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 86, CPyStatic_fswatcher___globals);
        goto CPyL66;
    }
CPyL58: ;
    cpy_r_r75 = cpy_r_r70 != 0;
    if (!cpy_r_r75) goto CPyL83;
CPyL59: ;
    cpy_r_r76 = PySet_Add(cpy_r_changed, cpy_r_path);
    CPy_DECREF(cpy_r_path);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 88, CPyStatic_fswatcher___globals);
        goto CPyL65;
    } else
        goto CPyL2;
CPyL60: ;
    cpy_r_r78 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 66, CPyStatic_fswatcher___globals);
        goto CPyL63;
    }
    return cpy_r_changed;
CPyL62: ;
    cpy_r_r79 = NULL;
    return cpy_r_r79;
CPyL63: ;
    CPy_DecRef(cpy_r_changed);
    goto CPyL62;
CPyL64: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL60;
CPyL65: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r1);
    goto CPyL62;
CPyL66: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_path);
    goto CPyL62;
CPyL67: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_old);
    goto CPyL17;
CPyL68: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_old);
    goto CPyL14;
CPyL69: ;
    CPy_DecRef(cpy_r_path);
    goto CPyL16;
CPyL70: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_path);
    goto CPyL17;
CPyL71: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r1);
    goto CPyL17;
CPyL72: ;
    CPy_DecRef(cpy_r_r9.f0);
    CPy_DecRef(cpy_r_r9.f1);
    CPy_DecRef(cpy_r_r9.f2);
    goto CPyL15;
CPyL73: ;
    CPy_DECREF(cpy_r_old);
    CPy_DECREF(cpy_r_st);
    goto CPyL20;
CPyL74: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_old);
    CPy_DecRef(cpy_r_st);
    goto CPyL62;
CPyL75: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_old);
    CPy_DecRef(cpy_r_st);
    CPyTagged_DecRef(cpy_r_r30);
    goto CPyL62;
CPyL76: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_old);
    CPy_DecRef(cpy_r_st);
    CPyTagged_DecRef(cpy_r_r42);
    goto CPyL62;
CPyL77: ;
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_old);
    CPy_DECREF(cpy_r_st);
    goto CPyL2;
CPyL78: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_old);
    CPy_DecRef(cpy_r_st);
    CPy_DecRef(cpy_r_new_hash);
    goto CPyL62;
CPyL79: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_old);
    CPy_DecRef(cpy_r_new_hash);
    goto CPyL62;
CPyL80: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_old);
    CPy_DecRef(cpy_r_new_hash);
    CPyTagged_DecRef(cpy_r_r59);
    goto CPyL62;
CPyL81: ;
    CPy_DECREF(cpy_r_old);
    CPy_DECREF(cpy_r_new_hash);
    goto CPyL59;
CPyL82: ;
    CPy_DecRef(cpy_r_changed);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_new_hash);
    goto CPyL62;
CPyL83: ;
    CPy_DECREF(cpy_r_path);
    goto CPyL2;
}

PyObject *CPyPy_fswatcher___FileSystemWatcher____find_changed(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"paths", 0};
    static CPyArg_Parser parser = {"O:_find_changed", kwlist, 0};
    PyObject *obj_paths;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_paths)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fswatcher___FileSystemWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fswatcher.FileSystemWatcher", obj_self); 
        goto fail;
    }
    PyObject *arg_paths = obj_paths;
    PyObject *retval = CPyDef_fswatcher___FileSystemWatcher____find_changed(arg_self, arg_paths);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fswatcher.py", "_find_changed", 64, CPyStatic_fswatcher___globals);
    return NULL;
}

PyObject *CPyDef_fswatcher___FileSystemWatcher___find_changed(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___fswatcher___FileSystemWatcherObject *)cpy_r_self)->__paths;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_fswatcher___FileSystemWatcher____find_changed(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "find_changed", 93, CPyStatic_fswatcher___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_fswatcher___FileSystemWatcher___find_changed(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":find_changed", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fswatcher___FileSystemWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fswatcher.FileSystemWatcher", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_fswatcher___FileSystemWatcher___find_changed(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fswatcher.py", "find_changed", 91, CPyStatic_fswatcher___globals);
    return NULL;
}

PyObject *CPyDef_fswatcher___FileSystemWatcher___update_changed(PyObject *cpy_r_self, PyObject *cpy_r_remove, PyObject *cpy_r_update) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_fswatcher___FileSystemWatcher___remove_watched_paths(cpy_r_self, cpy_r_remove);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/fswatcher.py", "update_changed", 104, CPyStatic_fswatcher___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPyDef_fswatcher___FileSystemWatcher___add_watched_paths(cpy_r_self, cpy_r_update);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/fswatcher.py", "update_changed", 105, CPyStatic_fswatcher___globals);
        goto CPyL4;
    }
    cpy_r_r2 = CPyDef_fswatcher___FileSystemWatcher____find_changed(cpy_r_self, cpy_r_update);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "update_changed", 106, CPyStatic_fswatcher___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_fswatcher___FileSystemWatcher___update_changed(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"remove", "update", 0};
    static CPyArg_Parser parser = {"OO:update_changed", kwlist, 0};
    PyObject *obj_remove;
    PyObject *obj_update;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_remove, &obj_update)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_fswatcher___FileSystemWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.fswatcher.FileSystemWatcher", obj_self); 
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
    PyObject *retval = CPyDef_fswatcher___FileSystemWatcher___update_changed(arg_self, arg_remove, arg_update);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/fswatcher.py", "update_changed", 95, CPyStatic_fswatcher___globals);
    return NULL;
}

char CPyDef_fswatcher_____top_level__(void) {
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
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", -1, CPyStatic_fswatcher___globals);
        goto CPyL39;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_fswatcher___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 3, CPyStatic_fswatcher___globals);
        goto CPyL39;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9414]; /* ('AbstractSet', 'Iterable', 'NamedTuple') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_fswatcher___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 5, CPyStatic_fswatcher___globals);
        goto CPyL39;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9146]; /* ('FileSystemCache',) */
    cpy_r_r14 = CPyStatics[564]; /* 'mypy.fscache' */
    cpy_r_r15 = CPyStatic_fswatcher___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 7, CPyStatic_fswatcher___globals);
        goto CPyL39;
    }
    CPyModule_mypy___fscache = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___fscache);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyModule_typing;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 != cpy_r_r18;
    if (cpy_r_r19) goto CPyL9;
    cpy_r_r20 = CPyStatics[21]; /* 'typing' */
    cpy_r_r21 = PyImport_Import(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL39;
    }
    CPyModule_typing = cpy_r_r21;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r21);
CPyL9: ;
    cpy_r_r22 = PyImport_GetModuleDict();
    cpy_r_r23 = CPyStatics[21]; /* 'typing' */
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL39;
    }
    cpy_r_r25 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL39;
    }
    cpy_r_r27 = PyTuple_Pack(1, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL39;
    }
    cpy_r_r28 = CPyModule_typing;
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r30 = cpy_r_r28 != cpy_r_r29;
    if (cpy_r_r30) goto CPyL15;
    cpy_r_r31 = CPyStatics[21]; /* 'typing' */
    cpy_r_r32 = PyImport_Import(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL40;
    }
    CPyModule_typing = cpy_r_r32;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r32);
CPyL15: ;
    cpy_r_r33 = PyImport_GetModuleDict();
    cpy_r_r34 = CPyStatics[21]; /* 'typing' */
    cpy_r_r35 = CPyDict_GetItem(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL40;
    }
    cpy_r_r36 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL40;
    }
    cpy_r_r38 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r39 = PyObject_HasAttr(cpy_r_r37, cpy_r_r38);
    if (!cpy_r_r39) goto CPyL22;
    cpy_r_r40 = CPyStatics[1956]; /* 'FileData' */
    cpy_r_r41 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL41;
    }
    PyObject *cpy_r_r43[2] = {cpy_r_r40, cpy_r_r27};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = _PyObject_Vectorcall(cpy_r_r42, cpy_r_r44, 2, 0);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL41;
    }
    if (likely(PyDict_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals, "dict", cpy_r_r45);
        goto CPyL41;
    }
    cpy_r_r47 = cpy_r_r46;
    goto CPyL24;
CPyL22: ;
    cpy_r_r48 = PyDict_New();
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL41;
    }
    cpy_r_r47 = cpy_r_r48;
CPyL24: ;
    cpy_r_r49 = PyDict_New();
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL42;
    }
    cpy_r_r50 = (PyObject *)&PyFloat_Type;
    cpy_r_r51 = CPyStatics[329]; /* 'st_mtime' */
    cpy_r_r52 = CPyDict_SetItem(cpy_r_r49, cpy_r_r51, cpy_r_r50);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 11, CPyStatic_fswatcher___globals);
        goto CPyL43;
    }
    cpy_r_r54 = (PyObject *)&PyLong_Type;
    cpy_r_r55 = CPyStatics[326]; /* 'st_size' */
    cpy_r_r56 = CPyDict_SetItem(cpy_r_r49, cpy_r_r55, cpy_r_r54);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 12, CPyStatic_fswatcher___globals);
        goto CPyL43;
    }
    cpy_r_r58 = (PyObject *)&PyUnicode_Type;
    cpy_r_r59 = CPyStatics[156]; /* 'hash' */
    cpy_r_r60 = CPyDict_SetItem(cpy_r_r49, cpy_r_r59, cpy_r_r58);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 13, CPyStatic_fswatcher___globals);
        goto CPyL43;
    }
    cpy_r_r62 = CPyStatics[1956]; /* 'FileData' */
    cpy_r_r63 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r64 = CPyDict_SetItem(cpy_r_r47, cpy_r_r63, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL42;
    }
    cpy_r_r66 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r67 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r68 = CPyDict_SetItem(cpy_r_r47, cpy_r_r67, cpy_r_r66);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL42;
    }
    cpy_r_r70 = CPyStatics[1993]; /* 'mypy.fswatcher' */
    cpy_r_r71 = CPyStatics[619]; /* '__module__' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r47, cpy_r_r71, cpy_r_r70);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL42;
    }
    PyObject *cpy_r_r74[3] = {cpy_r_r62, cpy_r_r27, cpy_r_r47};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r75, 3, 0);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL44;
    }
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r47);
    CPyType_fswatcher___FileData = (PyTypeObject *)cpy_r_r76;
    CPy_INCREF(CPyType_fswatcher___FileData);
    cpy_r_r77 = CPyStatic_fswatcher___globals;
    cpy_r_r78 = CPyStatics[1956]; /* 'FileData' */
    cpy_r_r79 = CPyDict_SetItem(cpy_r_r77, cpy_r_r78, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 10, CPyStatic_fswatcher___globals);
        goto CPyL39;
    }
    cpy_r_r81 = (PyObject *)CPyType_fswatcher___FileData;
    cpy_r_r82 = NULL;
    cpy_r_r83 = CPyStatics[1993]; /* 'mypy.fswatcher' */
    cpy_r_r84 = (PyObject *)CPyType_fswatcher___FileSystemWatcher_template;
    cpy_r_r85 = CPyType_FromTemplate(cpy_r_r84, cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 16, CPyStatic_fswatcher___globals);
        goto CPyL39;
    }
    cpy_r_r86 = CPyDef_fswatcher___FileSystemWatcher_trait_vtable_setup();
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", -1, CPyStatic_fswatcher___globals);
        goto CPyL45;
    }
    cpy_r_r87 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r88 = CPyStatics[2604]; /* 'fs' */
    cpy_r_r89 = CPyStatics[2605]; /* '_paths' */
    cpy_r_r90 = CPyStatics[2606]; /* '_file_data' */
    cpy_r_r91 = PyTuple_Pack(3, cpy_r_r88, cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 16, CPyStatic_fswatcher___globals);
        goto CPyL45;
    }
    cpy_r_r92 = PyObject_SetAttr(cpy_r_r85, cpy_r_r87, cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 16, CPyStatic_fswatcher___globals);
        goto CPyL45;
    }
    CPyType_fswatcher___FileSystemWatcher = (PyTypeObject *)cpy_r_r85;
    CPy_INCREF(CPyType_fswatcher___FileSystemWatcher);
    cpy_r_r94 = CPyStatic_fswatcher___globals;
    cpy_r_r95 = CPyStatics[1992]; /* 'FileSystemWatcher' */
    cpy_r_r96 = CPyDict_SetItem(cpy_r_r94, cpy_r_r95, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/fswatcher.py", "<module>", 16, CPyStatic_fswatcher___globals);
        goto CPyL39;
    }
    return 1;
CPyL39: ;
    cpy_r_r98 = 2;
    return cpy_r_r98;
CPyL40: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL39;
CPyL41: ;
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r37);
    goto CPyL39;
CPyL42: ;
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r47);
    goto CPyL39;
CPyL43: ;
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r49);
    goto CPyL39;
CPyL44: ;
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r47);
    goto CPyL39;
CPyL45: ;
    CPy_DecRef(cpy_r_r85);
    goto CPyL39;
}
