#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef find_sources___InvalidSourceList_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef find_sources___InvalidSourceList_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef find_sources___InvalidSourceList_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_find_sources___InvalidSourceList_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "InvalidSourceList",
    .tp_getset = find_sources___InvalidSourceList_getseters,
    .tp_methods = find_sources___InvalidSourceList_methods,
    .tp_members = find_sources___InvalidSourceList_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyBaseExceptionObject),
    .tp_weaklistoffset = sizeof(PyBaseExceptionObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_find_sources___InvalidSourceList_template = &CPyType_find_sources___InvalidSourceList_template_;


static int
find_sources___SourceFinder_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *find_sources___SourceFinder_setup(PyTypeObject *type);
PyObject *CPyDef_find_sources___SourceFinder(PyObject *cpy_r_fscache, PyObject *cpy_r_options);

static PyObject *
find_sources___SourceFinder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_find_sources___SourceFinder) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = find_sources___SourceFinder_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_find_sources___SourceFinder_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
find_sources___SourceFinder_traverse(mypy___find_sources___SourceFinderObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_fscache);
    Py_VISIT(self->_explicit_package_bases);
    Py_VISIT(self->_exclude);
    if (CPyTagged_CheckLong(self->_verbosity)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_verbosity));
    }
    return 0;
}

static int
find_sources___SourceFinder_clear(mypy___find_sources___SourceFinderObject *self)
{
    Py_CLEAR(self->_fscache);
    Py_CLEAR(self->_explicit_package_bases);
    Py_CLEAR(self->_exclude);
    if (CPyTagged_CheckLong(self->_verbosity)) {
        CPyTagged __tmp = self->_verbosity;
        self->_verbosity = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
find_sources___SourceFinder_dealloc(mypy___find_sources___SourceFinderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, find_sources___SourceFinder_dealloc)
    find_sources___SourceFinder_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem find_sources___SourceFinder_vtable[7];
static bool
CPyDef_find_sources___SourceFinder_trait_vtable_setup(void)
{
    CPyVTableItem find_sources___SourceFinder_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_find_sources___SourceFinder_____init__,
        (CPyVTableItem)CPyDef_find_sources___SourceFinder___is_explicit_package_base,
        (CPyVTableItem)CPyDef_find_sources___SourceFinder___find_sources_in_dir,
        (CPyVTableItem)CPyDef_find_sources___SourceFinder___crawl_up,
        (CPyVTableItem)CPyDef_find_sources___SourceFinder___crawl_up_dir,
        (CPyVTableItem)CPyDef_find_sources___SourceFinder____crawl_up_helper,
        (CPyVTableItem)CPyDef_find_sources___SourceFinder___get_init_file,
    };
    memcpy(find_sources___SourceFinder_vtable, find_sources___SourceFinder_vtable_scratch, sizeof(find_sources___SourceFinder_vtable));
    return 1;
}

static PyObject *
find_sources___SourceFinder_get_fscache(mypy___find_sources___SourceFinderObject *self, void *closure);
static int
find_sources___SourceFinder_set_fscache(mypy___find_sources___SourceFinderObject *self, PyObject *value, void *closure);
static PyObject *
find_sources___SourceFinder_get_explicit_package_bases(mypy___find_sources___SourceFinderObject *self, void *closure);
static int
find_sources___SourceFinder_set_explicit_package_bases(mypy___find_sources___SourceFinderObject *self, PyObject *value, void *closure);
static PyObject *
find_sources___SourceFinder_get_namespace_packages(mypy___find_sources___SourceFinderObject *self, void *closure);
static int
find_sources___SourceFinder_set_namespace_packages(mypy___find_sources___SourceFinderObject *self, PyObject *value, void *closure);
static PyObject *
find_sources___SourceFinder_get_exclude(mypy___find_sources___SourceFinderObject *self, void *closure);
static int
find_sources___SourceFinder_set_exclude(mypy___find_sources___SourceFinderObject *self, PyObject *value, void *closure);
static PyObject *
find_sources___SourceFinder_get_verbosity(mypy___find_sources___SourceFinderObject *self, void *closure);
static int
find_sources___SourceFinder_set_verbosity(mypy___find_sources___SourceFinderObject *self, PyObject *value, void *closure);

static PyGetSetDef find_sources___SourceFinder_getseters[] = {
    {"fscache",
     (getter)find_sources___SourceFinder_get_fscache, (setter)find_sources___SourceFinder_set_fscache,
     NULL, NULL},
    {"explicit_package_bases",
     (getter)find_sources___SourceFinder_get_explicit_package_bases, (setter)find_sources___SourceFinder_set_explicit_package_bases,
     NULL, NULL},
    {"namespace_packages",
     (getter)find_sources___SourceFinder_get_namespace_packages, (setter)find_sources___SourceFinder_set_namespace_packages,
     NULL, NULL},
    {"exclude",
     (getter)find_sources___SourceFinder_get_exclude, (setter)find_sources___SourceFinder_set_exclude,
     NULL, NULL},
    {"verbosity",
     (getter)find_sources___SourceFinder_get_verbosity, (setter)find_sources___SourceFinder_set_verbosity,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef find_sources___SourceFinder_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_find_sources___SourceFinder_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_explicit_package_base",
     (PyCFunction)CPyPy_find_sources___SourceFinder___is_explicit_package_base,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_sources_in_dir",
     (PyCFunction)CPyPy_find_sources___SourceFinder___find_sources_in_dir,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"crawl_up",
     (PyCFunction)CPyPy_find_sources___SourceFinder___crawl_up,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"crawl_up_dir",
     (PyCFunction)CPyPy_find_sources___SourceFinder___crawl_up_dir,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_crawl_up_helper",
     (PyCFunction)CPyPy_find_sources___SourceFinder____crawl_up_helper,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_init_file",
     (PyCFunction)CPyPy_find_sources___SourceFinder___get_init_file,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_find_sources___SourceFinder_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SourceFinder",
    .tp_new = find_sources___SourceFinder_new,
    .tp_dealloc = (destructor)find_sources___SourceFinder_dealloc,
    .tp_traverse = (traverseproc)find_sources___SourceFinder_traverse,
    .tp_clear = (inquiry)find_sources___SourceFinder_clear,
    .tp_getset = find_sources___SourceFinder_getseters,
    .tp_methods = find_sources___SourceFinder_methods,
    .tp_init = find_sources___SourceFinder_init,
    .tp_basicsize = sizeof(mypy___find_sources___SourceFinderObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_find_sources___SourceFinder_template = &CPyType_find_sources___SourceFinder_template_;

static PyObject *
find_sources___SourceFinder_setup(PyTypeObject *type)
{
    mypy___find_sources___SourceFinderObject *self;
    self = (mypy___find_sources___SourceFinderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = find_sources___SourceFinder_vtable;
    self->_namespace_packages = 2;
    self->_verbosity = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_find_sources___SourceFinder(PyObject *cpy_r_fscache, PyObject *cpy_r_options)
{
    PyObject *self = find_sources___SourceFinder_setup(CPyType_find_sources___SourceFinder);
    if (self == NULL)
        return NULL;
    char res = CPyDef_find_sources___SourceFinder_____init__(self, cpy_r_fscache, cpy_r_options);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
find_sources___SourceFinder_get_fscache(mypy___find_sources___SourceFinderObject *self, void *closure)
{
    if (unlikely(self->_fscache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fscache' of 'SourceFinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fscache);
    PyObject *retval = self->_fscache;
    return retval;
}

static int
find_sources___SourceFinder_set_fscache(mypy___find_sources___SourceFinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SourceFinder' object attribute 'fscache' cannot be deleted");
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
find_sources___SourceFinder_get_explicit_package_bases(mypy___find_sources___SourceFinderObject *self, void *closure)
{
    if (unlikely(self->_explicit_package_bases == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'explicit_package_bases' of 'SourceFinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_explicit_package_bases);
    PyObject *retval = self->_explicit_package_bases;
    return retval;
}

static int
find_sources___SourceFinder_set_explicit_package_bases(mypy___find_sources___SourceFinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SourceFinder' object attribute 'explicit_package_bases' cannot be deleted");
        return -1;
    }
    if (self->_explicit_package_bases != NULL) {
        CPy_DECREF(self->_explicit_package_bases);
    }
    PyObject *tmp;
    if (PyList_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2806;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2806;
    CPy_TypeError("list or None", value); 
    tmp = NULL;
__LL2806: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_explicit_package_bases = tmp;
    return 0;
}

static PyObject *
find_sources___SourceFinder_get_namespace_packages(mypy___find_sources___SourceFinderObject *self, void *closure)
{
    PyObject *retval = self->_namespace_packages ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
find_sources___SourceFinder_set_namespace_packages(mypy___find_sources___SourceFinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SourceFinder' object attribute 'namespace_packages' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_namespace_packages = tmp;
    return 0;
}

static PyObject *
find_sources___SourceFinder_get_exclude(mypy___find_sources___SourceFinderObject *self, void *closure)
{
    if (unlikely(self->_exclude == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'exclude' of 'SourceFinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_exclude);
    PyObject *retval = self->_exclude;
    return retval;
}

static int
find_sources___SourceFinder_set_exclude(mypy___find_sources___SourceFinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SourceFinder' object attribute 'exclude' cannot be deleted");
        return -1;
    }
    if (self->_exclude != NULL) {
        CPy_DECREF(self->_exclude);
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
    self->_exclude = tmp;
    return 0;
}

static PyObject *
find_sources___SourceFinder_get_verbosity(mypy___find_sources___SourceFinderObject *self, void *closure)
{
    if (unlikely(self->_verbosity == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'verbosity' of 'SourceFinder' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_verbosity);
    PyObject *retval = CPyTagged_StealAsObject(self->_verbosity);
    return retval;
}

static int
find_sources___SourceFinder_set_verbosity(mypy___find_sources___SourceFinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SourceFinder' object attribute 'verbosity' cannot be deleted");
        return -1;
    }
    if (self->_verbosity != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_verbosity);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_verbosity = tmp;
    return 0;
}
static PyMethodDef find_sourcesmodule_methods[] = {
    {"create_source_list", (PyCFunction)CPyPy_find_sources___create_source_list, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"keyfunc", (PyCFunction)CPyPy_find_sources___keyfunc, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"normalise_package_base", (PyCFunction)CPyPy_find_sources___normalise_package_base, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_explicit_package_bases", (PyCFunction)CPyPy_find_sources___get_explicit_package_bases, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"module_join", (PyCFunction)CPyPy_find_sources___module_join, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"strip_py", (PyCFunction)CPyPy_find_sources___strip_py, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef find_sourcesmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.find_sources",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    find_sourcesmodule_methods
};

PyObject *CPyInit_mypy___find_sources(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___find_sources_internal) {
        Py_INCREF(CPyModule_mypy___find_sources_internal);
        return CPyModule_mypy___find_sources_internal;
    }
    CPyModule_mypy___find_sources_internal = PyModule_Create(&find_sourcesmodule);
    if (unlikely(CPyModule_mypy___find_sources_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___find_sources_internal, "__name__");
    CPyStatic_find_sources___globals = PyModule_GetDict(CPyModule_mypy___find_sources_internal);
    if (unlikely(CPyStatic_find_sources___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_find_sources_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___find_sources_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___find_sources_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_find_sources___PY_EXTENSIONS);
    CPyStatic_find_sources___PY_EXTENSIONS = NULL;
    Py_CLEAR(CPyType_find_sources___InvalidSourceList);
    Py_CLEAR(CPyType_find_sources___SourceFinder);
    return NULL;
}

PyObject *CPyDef_find_sources___create_source_list(PyObject *cpy_r_paths, PyObject *cpy_r_options, PyObject *cpy_r_fscache, char cpy_r_allow_empty_dir) {
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
    PyObject *cpy_r_finder;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_sources;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    tuple_T2OO cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_base_dir;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_sub_sources;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject **cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_mod;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    if (cpy_r_fscache != NULL) goto CPyL55;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_fscache = cpy_r_r0;
CPyL2: ;
    if (cpy_r_allow_empty_dir != 2) goto CPyL4;
    cpy_r_allow_empty_dir = 0;
CPyL4: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_fscache != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL56;
    CPy_INCREF(cpy_r_fscache);
    if (likely(cpy_r_fscache != Py_None))
        cpy_r_r3 = cpy_r_fscache;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "create_source_list", 23, CPyStatic_find_sources___globals, "mypy.fscache.FileSystemCache", cpy_r_fscache);
        goto CPyL57;
    }
    cpy_r_r4 = PyObject_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 23, CPyStatic_find_sources___globals);
        goto CPyL57;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL56;
    if (likely(cpy_r_fscache != Py_None))
        cpy_r_r7 = cpy_r_fscache;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "create_source_list", 30, CPyStatic_find_sources___globals, "mypy.fscache.FileSystemCache", cpy_r_fscache);
        goto CPyL54;
    }
    cpy_r_r8 = cpy_r_r7;
    goto CPyL12;
CPyL10: ;
    cpy_r_r9 = CPyDef_fscache___FileSystemCache();
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 30, CPyStatic_find_sources___globals);
        goto CPyL54;
    }
    cpy_r_r8 = cpy_r_r9;
CPyL12: ;
    cpy_r_fscache = cpy_r_r8;
    CPy_INCREF(cpy_r_fscache);
    if (likely(cpy_r_fscache != Py_None))
        cpy_r_r10 = cpy_r_fscache;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "create_source_list", 31, CPyStatic_find_sources___globals, "mypy.fscache.FileSystemCache", cpy_r_fscache);
        goto CPyL57;
    }
    cpy_r_r11 = CPyDef_find_sources___SourceFinder(cpy_r_r10, cpy_r_options);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 31, CPyStatic_find_sources___globals);
        goto CPyL57;
    }
    cpy_r_finder = cpy_r_r11;
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 33, CPyStatic_find_sources___globals);
        goto CPyL58;
    }
    cpy_r_sources = cpy_r_r12;
    cpy_r_r13 = PyObject_GetIter(cpy_r_paths);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 34, CPyStatic_find_sources___globals);
        goto CPyL59;
    }
CPyL16: ;
    cpy_r_r14 = PyIter_Next(cpy_r_r13);
    if (cpy_r_r14 == NULL) goto CPyL60;
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "create_source_list", 34, CPyStatic_find_sources___globals, "str", cpy_r_r14);
        goto CPyL61;
    }
    cpy_r_path = cpy_r_r15;
    cpy_r_r16 = CPyModule_os;
    cpy_r_r17 = CPyStatics[142]; /* 'path' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 35, CPyStatic_find_sources___globals);
        goto CPyL62;
    }
    cpy_r_r19 = CPyStatics[2213]; /* 'normpath' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 35, CPyStatic_find_sources___globals);
        goto CPyL62;
    }
    PyObject *cpy_r_r21[1] = {cpy_r_path};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 1, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 35, CPyStatic_find_sources___globals);
        goto CPyL62;
    }
    CPy_DECREF(cpy_r_path);
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "create_source_list", 35, CPyStatic_find_sources___globals, "str", cpy_r_r23);
        goto CPyL61;
    }
    cpy_r_path = cpy_r_r24;
    cpy_r_r25 = CPyStatic_find_sources___PY_EXTENSIONS;
    if (unlikely(cpy_r_r25 == NULL)) {
        goto CPyL63;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PY_EXTENSIONS\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 36, CPyStatic_find_sources___globals);
        goto CPyL54;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r27 = CPyStatics[2537]; /* 'endswith' */
    PyObject *cpy_r_r28[2] = {cpy_r_path, cpy_r_r25};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = PyObject_VectorcallMethod(cpy_r_r27, cpy_r_r29, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 36, CPyStatic_find_sources___globals);
        goto CPyL62;
    }
    if (unlikely(!PyBool_Check(cpy_r_r30))) {
        CPy_TypeError("bool", cpy_r_r30); cpy_r_r31 = 2;
    } else
        cpy_r_r31 = cpy_r_r30 == Py_True;
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 36, CPyStatic_find_sources___globals);
        goto CPyL62;
    }
    if (!cpy_r_r31) goto CPyL31;
    cpy_r_r32 = CPyDef_find_sources___SourceFinder___crawl_up(cpy_r_finder, cpy_r_path);
    if (unlikely(cpy_r_r32.f0 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 38, CPyStatic_find_sources___globals);
        goto CPyL62;
    }
    cpy_r_r33 = cpy_r_r32.f0;
    CPy_INCREF(cpy_r_r33);
    cpy_r_name = cpy_r_r33;
    cpy_r_r34 = cpy_r_r32.f1;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r32.f0);
    CPy_DECREF(cpy_r_r32.f1);
    cpy_r_base_dir = cpy_r_r34;
    cpy_r_r35 = Py_None;
    cpy_r_r36 = 2;
    cpy_r_r37 = CPyDef_modulefinder___BuildSource(cpy_r_path, cpy_r_name, cpy_r_r35, cpy_r_base_dir, cpy_r_r36);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_base_dir);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 39, CPyStatic_find_sources___globals);
        goto CPyL61;
    }
    cpy_r_r38 = PyList_Append(cpy_r_sources, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 39, CPyStatic_find_sources___globals);
        goto CPyL61;
    } else
        goto CPyL16;
CPyL31: ;
    CPy_INCREF(cpy_r_fscache);
    if (likely(cpy_r_fscache != Py_None))
        cpy_r_r40 = cpy_r_fscache;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "create_source_list", 40, CPyStatic_find_sources___globals, "mypy.fscache.FileSystemCache", cpy_r_fscache);
        goto CPyL62;
    }
    cpy_r_r41 = CPY_GET_METHOD(cpy_r_r40, CPyType_fscache___FileSystemCache, 10, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r40, cpy_r_path); /* isdir */
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 40, CPyStatic_find_sources___globals);
        goto CPyL62;
    }
    if (!cpy_r_r41) goto CPyL43;
    cpy_r_r42 = CPyDef_find_sources___SourceFinder___find_sources_in_dir(cpy_r_finder, cpy_r_path);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 41, CPyStatic_find_sources___globals);
        goto CPyL62;
    }
    cpy_r_sub_sources = cpy_r_r42;
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_sub_sources)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 << 1;
    cpy_r_r46 = cpy_r_r45 != 0;
    if (cpy_r_r46) goto CPyL64;
    if (cpy_r_allow_empty_dir) {
        goto CPyL64;
    } else
        goto CPyL65;
CPyL37: ;
    cpy_r_r47 = CPyStatics[2538]; /* "There are no .py[i] files in directory '" */
    cpy_r_r48 = CPyStatics[385]; /* "'" */
    cpy_r_r49 = CPyStr_Build(3, cpy_r_r47, cpy_r_path, cpy_r_r48);
    CPy_DECREF(cpy_r_path);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 43, CPyStatic_find_sources___globals);
        goto CPyL54;
    }
    cpy_r_r50 = (PyObject *)CPyType_find_sources___InvalidSourceList;
    PyObject *cpy_r_r51[1] = {cpy_r_r49};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = _PyObject_Vectorcall(cpy_r_r50, cpy_r_r52, 1, 0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 43, CPyStatic_find_sources___globals);
        goto CPyL66;
    }
    CPy_DECREF(cpy_r_r49);
    if (likely(Py_TYPE(cpy_r_r53) == CPyType_find_sources___InvalidSourceList))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "create_source_list", 43, CPyStatic_find_sources___globals, "mypy.find_sources.InvalidSourceList", cpy_r_r53);
        goto CPyL54;
    }
    CPy_Raise(cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 43, CPyStatic_find_sources___globals);
        goto CPyL54;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r55 = CPyList_Extend(cpy_r_sources, cpy_r_sub_sources);
    CPy_DECREF(cpy_r_sub_sources);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 44, CPyStatic_find_sources___globals);
        goto CPyL61;
    } else
        goto CPyL67;
CPyL43: ;
    cpy_r_r56 = ((mypy___options___OptionsObject *)cpy_r_options)->_scripts_are_modules;
    if (!cpy_r_r56) goto CPyL49;
CPyL44: ;
    cpy_r_r57 = CPyModule_os;
    cpy_r_r58 = CPyStatics[142]; /* 'path' */
    cpy_r_r59 = CPyObject_GetAttr(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 46, CPyStatic_find_sources___globals);
        goto CPyL62;
    }
    cpy_r_r60 = CPyStatics[172]; /* 'basename' */
    cpy_r_r61 = CPyObject_GetAttr(cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 46, CPyStatic_find_sources___globals);
        goto CPyL62;
    }
    PyObject *cpy_r_r62[1] = {cpy_r_path};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = _PyObject_Vectorcall(cpy_r_r61, cpy_r_r63, 1, 0);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 46, CPyStatic_find_sources___globals);
        goto CPyL62;
    }
    if (likely(PyUnicode_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "create_source_list", 46, CPyStatic_find_sources___globals, "str", cpy_r_r64);
        goto CPyL62;
    }
    cpy_r_r66 = cpy_r_r65;
    goto CPyL50;
CPyL49: ;
    cpy_r_r67 = Py_None;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r66 = cpy_r_r67;
CPyL50: ;
    cpy_r_mod = cpy_r_r66;
    cpy_r_r68 = Py_None;
    cpy_r_r69 = NULL;
    cpy_r_r70 = 2;
    cpy_r_r71 = CPyDef_modulefinder___BuildSource(cpy_r_path, cpy_r_mod, cpy_r_r68, cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_mod);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 47, CPyStatic_find_sources___globals);
        goto CPyL61;
    }
    cpy_r_r72 = PyList_Append(cpy_r_sources, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 47, CPyStatic_find_sources___globals);
        goto CPyL61;
    } else
        goto CPyL16;
CPyL52: ;
    cpy_r_r74 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 34, CPyStatic_find_sources___globals);
        goto CPyL68;
    }
    return cpy_r_sources;
CPyL54: ;
    cpy_r_r75 = NULL;
    return cpy_r_r75;
CPyL55: ;
    CPy_INCREF(cpy_r_fscache);
    goto CPyL2;
CPyL56: ;
    CPy_DECREF(cpy_r_fscache);
    goto CPyL10;
CPyL57: ;
    CPy_DecRef(cpy_r_fscache);
    goto CPyL54;
CPyL58: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_finder);
    goto CPyL54;
CPyL59: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_finder);
    CPy_DecRef(cpy_r_sources);
    goto CPyL54;
CPyL60: ;
    CPy_DECREF(cpy_r_fscache);
    CPy_DECREF(cpy_r_finder);
    CPy_DECREF(cpy_r_r13);
    goto CPyL52;
CPyL61: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_finder);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r13);
    goto CPyL54;
CPyL62: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_finder);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_path);
    goto CPyL54;
CPyL63: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_finder);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_path);
    goto CPyL23;
CPyL64: ;
    CPy_DECREF(cpy_r_path);
    goto CPyL42;
CPyL65: ;
    CPy_DECREF(cpy_r_fscache);
    CPy_DECREF(cpy_r_finder);
    CPy_DECREF(cpy_r_sources);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_sub_sources);
    goto CPyL37;
CPyL66: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL54;
CPyL67: ;
    CPy_DECREF(cpy_r_r55);
    goto CPyL16;
CPyL68: ;
    CPy_DecRef(cpy_r_sources);
    goto CPyL54;
}

PyObject *CPyPy_find_sources___create_source_list(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"paths", "options", "fscache", "allow_empty_dir", 0};
    static CPyArg_Parser parser = {"OO|OO:create_source_list", kwlist, 0};
    PyObject *obj_paths;
    PyObject *obj_options;
    PyObject *obj_fscache = NULL;
    PyObject *obj_allow_empty_dir = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_paths, &obj_options, &obj_fscache, &obj_allow_empty_dir)) {
        return NULL;
    }
    PyObject *arg_paths = obj_paths;
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_fscache;
    if (obj_fscache == NULL) {
        arg_fscache = NULL;
        goto __LL2807;
    }
    if (PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache))
        arg_fscache = obj_fscache;
    else {
        arg_fscache = NULL;
    }
    if (arg_fscache != NULL) goto __LL2807;
    if (obj_fscache == Py_None)
        arg_fscache = obj_fscache;
    else {
        arg_fscache = NULL;
    }
    if (arg_fscache != NULL) goto __LL2807;
    CPy_TypeError("mypy.fscache.FileSystemCache or None", obj_fscache); 
    goto fail;
__LL2807: ;
    char arg_allow_empty_dir;
    if (obj_allow_empty_dir == NULL) {
        arg_allow_empty_dir = 2;
    } else if (unlikely(!PyBool_Check(obj_allow_empty_dir))) {
        CPy_TypeError("bool", obj_allow_empty_dir); goto fail;
    } else
        arg_allow_empty_dir = obj_allow_empty_dir == Py_True;
    PyObject *retval = CPyDef_find_sources___create_source_list(arg_paths, arg_options, arg_fscache, arg_allow_empty_dir);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/find_sources.py", "create_source_list", 20, CPyStatic_find_sources___globals);
    return NULL;
}

tuple_T3CIO CPyDef_find_sources___keyfunc(PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_suffix;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_ext;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    tuple_T3CIO cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    tuple_T3CIO cpy_r_r44;
    tuple_T3CIO cpy_r_r45;
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[142]; /* 'path' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "keyfunc", 58, CPyStatic_find_sources___globals);
        goto CPyL24;
    }
    cpy_r_r3 = CPyStatics[370]; /* 'splitext' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "keyfunc", 58, CPyStatic_find_sources___globals);
        goto CPyL24;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_name};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "keyfunc", 58, CPyStatic_find_sources___globals);
        goto CPyL24;
    }
    PyObject *__tmp2808;
    if (unlikely(!(PyTuple_Check(cpy_r_r7) && PyTuple_GET_SIZE(cpy_r_r7) == 2))) {
        __tmp2808 = NULL;
        goto __LL2809;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r7, 0))))
        __tmp2808 = PyTuple_GET_ITEM(cpy_r_r7, 0);
    else {
        __tmp2808 = NULL;
    }
    if (__tmp2808 == NULL) goto __LL2809;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r7, 1))))
        __tmp2808 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp2808 = NULL;
    }
    if (__tmp2808 == NULL) goto __LL2809;
    __tmp2808 = cpy_r_r7;
__LL2809: ;
    if (unlikely(__tmp2808 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r7); cpy_r_r8 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2810 = PyTuple_GET_ITEM(cpy_r_r7, 0);
        CPy_INCREF(__tmp2810);
        PyObject *__tmp2811;
        if (likely(PyUnicode_Check(__tmp2810)))
            __tmp2811 = __tmp2810;
        else {
            CPy_TypeError("str", __tmp2810); 
            __tmp2811 = NULL;
        }
        cpy_r_r8.f0 = __tmp2811;
        PyObject *__tmp2812 = PyTuple_GET_ITEM(cpy_r_r7, 1);
        CPy_INCREF(__tmp2812);
        PyObject *__tmp2813;
        if (likely(PyUnicode_Check(__tmp2812)))
            __tmp2813 = __tmp2812;
        else {
            CPy_TypeError("str", __tmp2812); 
            __tmp2813 = NULL;
        }
        cpy_r_r8.f1 = __tmp2813;
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "keyfunc", 58, CPyStatic_find_sources___globals);
        goto CPyL24;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r9);
    cpy_r_base = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f1;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r8.f1);
    cpy_r_suffix = cpy_r_r10;
    cpy_r_r11 = 0;
    cpy_r_i = 0;
    cpy_r_r12 = CPyStatic_find_sources___PY_EXTENSIONS;
    if (unlikely(cpy_r_r12 == NULL)) {
        goto CPyL25;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PY_EXTENSIONS\" was not set");
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/find_sources.py", "keyfunc", 59, CPyStatic_find_sources___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r14 = 0;
CPyL8: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL26;
    cpy_r_r19 = CPySequenceTuple_GetItem(cpy_r_r12, cpy_r_r14);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "keyfunc", 59, CPyStatic_find_sources___globals);
        goto CPyL27;
    }
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "keyfunc", 59, CPyStatic_find_sources___globals, "str", cpy_r_r19);
        goto CPyL27;
    }
    cpy_r_ext = cpy_r_r20;
    cpy_r_r21 = PyUnicode_Compare(cpy_r_suffix, cpy_r_ext);
    CPy_DECREF(cpy_r_ext);
    cpy_r_r22 = cpy_r_r21 == -1;
    if (!cpy_r_r22) goto CPyL14;
    cpy_r_r23 = PyErr_Occurred();
    cpy_r_r24 = cpy_r_r23 != NULL;
    if (!cpy_r_r24) goto CPyL14;
    cpy_r_r25 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/find_sources.py", "keyfunc", 60, CPyStatic_find_sources___globals);
        goto CPyL27;
    }
CPyL14: ;
    cpy_r_r26 = cpy_r_r21 == 0;
    if (cpy_r_r26) {
        goto CPyL28;
    } else
        goto CPyL29;
CPyL15: ;
    cpy_r_r27 = CPyStatics[288]; /* '__init__' */
    cpy_r_r28 = PyUnicode_Compare(cpy_r_base, cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 == -1;
    if (!cpy_r_r29) goto CPyL18;
    cpy_r_r30 = PyErr_Occurred();
    cpy_r_r31 = cpy_r_r30 != NULL;
    if (!cpy_r_r31) goto CPyL18;
    cpy_r_r32 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/find_sources.py", "keyfunc", 61, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
CPyL18: ;
    cpy_r_r33 = cpy_r_r28 != 0;
    cpy_r_r34.f0 = cpy_r_r33;
    cpy_r_r34.f1 = cpy_r_i;
    cpy_r_r34.f2 = cpy_r_base;
    CPyTagged_INCREF(cpy_r_r34.f1);
    CPy_INCREF(cpy_r_r34.f2);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_base);
    return cpy_r_r34;
CPyL19: ;
    cpy_r_r35 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r35;
    cpy_r_i = cpy_r_r35;
    cpy_r_r36 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r36;
    goto CPyL8;
CPyL20: ;
    cpy_r_r37 = CPyStatics[288]; /* '__init__' */
    cpy_r_r38 = PyUnicode_Compare(cpy_r_base, cpy_r_r37);
    CPy_DECREF(cpy_r_base);
    cpy_r_r39 = cpy_r_r38 == -1;
    if (!cpy_r_r39) goto CPyL23;
    cpy_r_r40 = PyErr_Occurred();
    cpy_r_r41 = cpy_r_r40 != NULL;
    if (!cpy_r_r41) goto CPyL23;
    cpy_r_r42 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/find_sources.py", "keyfunc", 62, CPyStatic_find_sources___globals);
        goto CPyL24;
    }
CPyL23: ;
    cpy_r_r43 = cpy_r_r38 != 0;
    cpy_r_r44.f0 = cpy_r_r43;
    cpy_r_r44.f1 = -2;
    cpy_r_r44.f2 = cpy_r_name;
    CPyTagged_INCREF(cpy_r_r44.f1);
    CPy_INCREF(cpy_r_r44.f2);
    return cpy_r_r44;
CPyL24: ;
    tuple_T3CIO __tmp2814 = { 2, CPY_INT_TAG, NULL };
    cpy_r_r45 = __tmp2814;
    return cpy_r_r45;
CPyL25: ;
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_suffix);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL5;
CPyL26: ;
    CPy_DECREF(cpy_r_suffix);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL20;
CPyL27: ;
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_suffix);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL24;
CPyL28: ;
    CPy_DECREF(cpy_r_suffix);
    goto CPyL15;
CPyL29: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL19;
CPyL30: ;
    CPy_DecRef(cpy_r_base);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL24;
}

PyObject *CPyPy_find_sources___keyfunc(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:keyfunc", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    tuple_T3CIO retval = CPyDef_find_sources___keyfunc(arg_name);
    if (retval.f0 == 2) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2815 = retval.f0 ? Py_True : Py_False;
    CPy_INCREF(__tmp2815);
    PyTuple_SET_ITEM(retbox, 0, __tmp2815);
    PyObject *__tmp2816 = CPyTagged_StealAsObject(retval.f1);
    PyTuple_SET_ITEM(retbox, 1, __tmp2816);
    PyObject *__tmp2817 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp2817);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/find_sources.py", "keyfunc", 51, CPyStatic_find_sources___globals);
    return NULL;
}

PyObject *CPyDef_find_sources___normalise_package_base(PyObject *cpy_r_root) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
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
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = CPyStr_IsTrue(cpy_r_root);
    if (cpy_r_r0) goto CPyL16;
    cpy_r_r1 = CPyModule_os;
    cpy_r_r2 = CPyStatics[277]; /* 'curdir' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "normalise_package_base", 67, CPyStatic_find_sources___globals);
        goto CPyL15;
    }
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "normalise_package_base", 67, CPyStatic_find_sources___globals, "str", cpy_r_r3);
        goto CPyL15;
    }
    cpy_r_root = cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = CPyModule_os;
    cpy_r_r6 = CPyStatics[142]; /* 'path' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "normalise_package_base", 68, CPyStatic_find_sources___globals);
        goto CPyL17;
    }
    cpy_r_r8 = CPyStatics[153]; /* 'abspath' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "normalise_package_base", 68, CPyStatic_find_sources___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_root};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "normalise_package_base", 68, CPyStatic_find_sources___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_root);
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "normalise_package_base", 68, CPyStatic_find_sources___globals, "str", cpy_r_r12);
        goto CPyL15;
    }
    cpy_r_root = cpy_r_r13;
    cpy_r_r14 = CPyModule_os;
    cpy_r_r15 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "normalise_package_base", 69, CPyStatic_find_sources___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "normalise_package_base", 69, CPyStatic_find_sources___globals, "str", cpy_r_r16);
        goto CPyL17;
    }
    cpy_r_r18 = CPyStr_Endswith(cpy_r_root, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (!cpy_r_r18) goto CPyL14;
    cpy_r_r19 = CPyStr_GetSlice(cpy_r_root, 0, -2);
    CPy_DECREF(cpy_r_root);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "normalise_package_base", 70, CPyStatic_find_sources___globals);
        goto CPyL15;
    }
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "normalise_package_base", 70, CPyStatic_find_sources___globals, "str", cpy_r_r19);
        goto CPyL15;
    }
    cpy_r_root = cpy_r_r20;
CPyL14: ;
    return cpy_r_root;
CPyL15: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL16: ;
    CPy_INCREF(cpy_r_root);
    goto CPyL4;
CPyL17: ;
    CPy_DecRef(cpy_r_root);
    goto CPyL15;
}

PyObject *CPyPy_find_sources___normalise_package_base(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"root", 0};
    static CPyArg_Parser parser = {"O:normalise_package_base", kwlist, 0};
    PyObject *obj_root;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_root)) {
        return NULL;
    }
    PyObject *arg_root;
    if (likely(PyUnicode_Check(obj_root)))
        arg_root = obj_root;
    else {
        CPy_TypeError("str", obj_root); 
        goto fail;
    }
    PyObject *retval = CPyDef_find_sources___normalise_package_base(arg_root);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/find_sources.py", "normalise_package_base", 65, CPyStatic_find_sources___globals);
    return NULL;
}

PyObject *CPyDef_find_sources___get_explicit_package_bases(PyObject *cpy_r_options) {
    char cpy_r_r0;
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
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_roots;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_root;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    cpy_r_r0 = ((mypy___options___OptionsObject *)cpy_r_options)->_explicit_package_bases;
    if (cpy_r_r0) goto CPyL2;
CPyL1: ;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = CPyDef_modulefinder___mypy_path();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_explicit_package_bases", 86, CPyStatic_find_sources___globals);
        goto CPyL19;
    }
    cpy_r_r3 = ((mypy___options___OptionsObject *)cpy_r_options)->_mypy_path;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PyNumber_Add(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_explicit_package_bases", 86, CPyStatic_find_sources___globals);
        goto CPyL19;
    }
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "get_explicit_package_bases", 86, CPyStatic_find_sources___globals, "list", cpy_r_r4);
        goto CPyL19;
    }
    cpy_r_r6 = CPyModule_os;
    cpy_r_r7 = CPyStatics[144]; /* 'getcwd' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_explicit_package_bases", 86, CPyStatic_find_sources___globals);
        goto CPyL20;
    }
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r8, 0, 0, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_explicit_package_bases", 86, CPyStatic_find_sources___globals);
        goto CPyL20;
    }
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "get_explicit_package_bases", 86, CPyStatic_find_sources___globals, "str", cpy_r_r9);
        goto CPyL20;
    }
    cpy_r_r11 = PyList_New(1);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_explicit_package_bases", 86, CPyStatic_find_sources___globals);
        goto CPyL21;
    }
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    *(PyObject * *)cpy_r_r13 = cpy_r_r10;
    cpy_r_r14 = PyNumber_Add(cpy_r_r5, cpy_r_r11);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_explicit_package_bases", 86, CPyStatic_find_sources___globals);
        goto CPyL19;
    }
    if (likely(PyList_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "get_explicit_package_bases", 86, CPyStatic_find_sources___globals, "list", cpy_r_r14);
        goto CPyL19;
    }
    cpy_r_roots = cpy_r_r15;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_roots)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = PyList_New(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_explicit_package_bases", 87, CPyStatic_find_sources___globals);
        goto CPyL22;
    }
    cpy_r_r19 = 0;
CPyL13: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_roots)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL23;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_roots, cpy_r_r19);
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "get_explicit_package_bases", 87, CPyStatic_find_sources___globals, "str", cpy_r_r24);
        goto CPyL24;
    }
    cpy_r_root = cpy_r_r25;
    cpy_r_r26 = CPyDef_find_sources___normalise_package_base(cpy_r_root);
    CPy_DECREF(cpy_r_root);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_explicit_package_bases", 87, CPyStatic_find_sources___globals);
        goto CPyL24;
    }
    cpy_r_r27 = CPyList_SetItemUnsafe(cpy_r_r18, cpy_r_r19, cpy_r_r26);
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_explicit_package_bases", 87, CPyStatic_find_sources___globals);
        goto CPyL24;
    }
    cpy_r_r28 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r28;
    goto CPyL13;
CPyL18: ;
    return cpy_r_r18;
CPyL19: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL20: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL19;
CPyL21: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    goto CPyL19;
CPyL22: ;
    CPy_DecRef(cpy_r_roots);
    goto CPyL19;
CPyL23: ;
    CPy_DECREF(cpy_r_roots);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_roots);
    CPy_DecRef(cpy_r_r18);
    goto CPyL19;
}

PyObject *CPyPy_find_sources___get_explicit_package_bases(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"options", 0};
    static CPyArg_Parser parser = {"O:get_explicit_package_bases", kwlist, 0};
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
    PyObject *retval = CPyDef_find_sources___get_explicit_package_bases(arg_options);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/find_sources.py", "get_explicit_package_bases", 74, CPyStatic_find_sources___globals);
    return NULL;
}

char CPyDef_find_sources___SourceFinder_____init__(PyObject *cpy_r_self, PyObject *cpy_r_fscache, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    CPy_INCREF(cpy_r_fscache);
    ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_fscache = cpy_r_fscache;
    cpy_r_r0 = CPyDef_find_sources___get_explicit_package_bases(cpy_r_options);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "__init__", 93, CPyStatic_find_sources___globals);
        goto CPyL2;
    }
    ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_explicit_package_bases = cpy_r_r0;
    cpy_r_r1 = ((mypy___options___OptionsObject *)cpy_r_options)->_namespace_packages;
    ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_namespace_packages = cpy_r_r1;
    cpy_r_r2 = ((mypy___options___OptionsObject *)cpy_r_options)->_exclude;
    CPy_INCREF(cpy_r_r2);
    ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_exclude = cpy_r_r2;
    cpy_r_r3 = ((mypy___options___OptionsObject *)cpy_r_options)->_verbosity;
    CPyTagged_INCREF(cpy_r_r3);
    ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_verbosity = cpy_r_r3;
    return 1;
CPyL2: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_find_sources___SourceFinder_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fscache", "options", 0};
    PyObject *obj_fscache;
    PyObject *obj_options;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_fscache, &obj_options)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_find_sources___SourceFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.find_sources.SourceFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_fscache;
    if (likely(PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache)))
        arg_fscache = obj_fscache;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_fscache); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_find_sources___SourceFinder_____init__(arg_self, arg_fscache, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/find_sources.py", "__init__", 91, CPyStatic_find_sources___globals);
    return NULL;
}

char CPyDef_find_sources___SourceFinder___is_explicit_package_base(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_explicit_package_bases;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL10;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "is_explicit_package_base", 99, CPyStatic_find_sources___globals, "list", cpy_r_r0);
        goto CPyL9;
    }
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = cpy_r_r6 != 0;
    if (cpy_r_r7) goto CPyL5;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/find_sources.py", "is_explicit_package_base", 99, CPyStatic_find_sources___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r9 = CPyDef_find_sources___normalise_package_base(cpy_r_path);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "is_explicit_package_base", 100, CPyStatic_find_sources___globals);
        goto CPyL9;
    }
    cpy_r_r10 = ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_explicit_package_bases;
    CPy_INCREF(cpy_r_r10);
    if (likely(cpy_r_r10 != Py_None))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "is_explicit_package_base", 100, CPyStatic_find_sources___globals, "list", cpy_r_r10);
        goto CPyL11;
    }
    cpy_r_r12 = PySequence_Contains(cpy_r_r11, cpy_r_r9);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/find_sources.py", "is_explicit_package_base", 100, CPyStatic_find_sources___globals);
        goto CPyL9;
    }
    cpy_r_r14 = cpy_r_r12;
    return cpy_r_r14;
CPyL9: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL10: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL11: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL9;
}

PyObject *CPyPy_find_sources___SourceFinder___is_explicit_package_base(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:is_explicit_package_base", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_find_sources___SourceFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.find_sources.SourceFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    char retval = CPyDef_find_sources___SourceFinder___is_explicit_package_base(arg_self, arg_path);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/find_sources.py", "is_explicit_package_base", 98, CPyStatic_find_sources___globals);
    return NULL;
}

PyObject *CPyDef_find_sources___SourceFinder___find_sources_in_dir(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_sources;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_seen;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_names;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_subpath;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    int64_t cpy_r_r59;
    char cpy_r_r60;
    int64_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_sub_sources;
    CPyPtr cpy_r_r72;
    int64_t cpy_r_r73;
    CPyTagged cpy_r_r74;
    char cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    tuple_T2OO cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_stem;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_suffix;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    tuple_T2OO cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_base_dir;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    CPyTagged cpy_r_r109;
    PyObject *cpy_r_r110;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 103, CPyStatic_find_sources___globals);
        goto CPyL59;
    }
    cpy_r_sources = cpy_r_r0;
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 105, CPyStatic_find_sources___globals);
        goto CPyL60;
    }
    cpy_r_seen = cpy_r_r1;
    cpy_r_r2 = ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_fscache___FileSystemCache, 6, mypy___fscache___FileSystemCacheObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r2, cpy_r_path); /* listdir */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 106, CPyStatic_find_sources___globals);
        goto CPyL61;
    }
    cpy_r_r4 = CPyStatic_find_sources___globals;
    cpy_r_r5 = CPyStatics[2539]; /* 'keyfunc' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 106, CPyStatic_find_sources___globals);
        goto CPyL62;
    }
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 106, CPyStatic_find_sources___globals);
        goto CPyL63;
    }
    PyObject *cpy_r_r10[2] = {cpy_r_r3, cpy_r_r6};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 106, CPyStatic_find_sources___globals);
        goto CPyL63;
    }
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    if (likely(PyList_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "find_sources_in_dir", 106, CPyStatic_find_sources___globals, "list", cpy_r_r13);
        goto CPyL61;
    }
    cpy_r_names = cpy_r_r14;
    cpy_r_r15 = 0;
CPyL8: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_names)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL64;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_names, cpy_r_r15);
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "find_sources_in_dir", 107, CPyStatic_find_sources___globals, "str", cpy_r_r20);
        goto CPyL65;
    }
    cpy_r_name = cpy_r_r21;
    cpy_r_r22 = CPyStatics[2540]; /* '__pycache__' */
    cpy_r_r23 = PyUnicode_Compare(cpy_r_name, cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 == -1;
    if (!cpy_r_r24) goto CPyL13;
    cpy_r_r25 = PyErr_Occurred();
    cpy_r_r26 = cpy_r_r25 != NULL;
    if (!cpy_r_r26) goto CPyL13;
    cpy_r_r27 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", -1, CPyStatic_find_sources___globals);
        goto CPyL66;
    }
CPyL13: ;
    cpy_r_r28 = cpy_r_r23 == 0;
    if (!cpy_r_r28) goto CPyL15;
    cpy_r_r29 = cpy_r_r28;
    goto CPyL19;
CPyL15: ;
    cpy_r_r30 = CPyStatics[2541]; /* 'site-packages' */
    cpy_r_r31 = PyUnicode_Compare(cpy_r_name, cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 == -1;
    if (!cpy_r_r32) goto CPyL18;
    cpy_r_r33 = PyErr_Occurred();
    cpy_r_r34 = cpy_r_r33 != NULL;
    if (!cpy_r_r34) goto CPyL18;
    cpy_r_r35 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", -1, CPyStatic_find_sources___globals);
        goto CPyL66;
    }
CPyL18: ;
    cpy_r_r36 = cpy_r_r31 == 0;
    cpy_r_r29 = cpy_r_r36;
CPyL19: ;
    if (!cpy_r_r29) goto CPyL21;
    cpy_r_r37 = cpy_r_r29;
    goto CPyL25;
CPyL21: ;
    cpy_r_r38 = CPyStatics[2542]; /* 'node_modules' */
    cpy_r_r39 = PyUnicode_Compare(cpy_r_name, cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 == -1;
    if (!cpy_r_r40) goto CPyL24;
    cpy_r_r41 = PyErr_Occurred();
    cpy_r_r42 = cpy_r_r41 != NULL;
    if (!cpy_r_r42) goto CPyL24;
    cpy_r_r43 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", -1, CPyStatic_find_sources___globals);
        goto CPyL66;
    }
CPyL24: ;
    cpy_r_r44 = cpy_r_r39 == 0;
    cpy_r_r37 = cpy_r_r44;
CPyL25: ;
    if (cpy_r_r37) goto CPyL67;
    cpy_r_r45 = CPyStatics[224]; /* '.' */
    cpy_r_r46 = CPyStr_Startswith(cpy_r_name, cpy_r_r45);
    if (cpy_r_r46) goto CPyL67;
    cpy_r_r47 = CPyModule_os;
    cpy_r_r48 = CPyStatics[142]; /* 'path' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 111, CPyStatic_find_sources___globals);
        goto CPyL66;
    }
    cpy_r_r50 = CPyStatics[175]; /* 'join' */
    cpy_r_r51 = CPyObject_GetAttr(cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 111, CPyStatic_find_sources___globals);
        goto CPyL66;
    }
    PyObject *cpy_r_r52[2] = {cpy_r_path, cpy_r_name};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = _PyObject_Vectorcall(cpy_r_r51, cpy_r_r53, 2, 0);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 111, CPyStatic_find_sources___globals);
        goto CPyL66;
    }
    if (likely(PyUnicode_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "find_sources_in_dir", 111, CPyStatic_find_sources___globals, "str", cpy_r_r54);
        goto CPyL66;
    }
    cpy_r_subpath = cpy_r_r55;
    cpy_r_r56 = ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_exclude;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_verbosity;
    cpy_r_r59 = cpy_r_r58 & 1;
    cpy_r_r60 = cpy_r_r59 == 0;
    cpy_r_r61 = 4 & 1;
    cpy_r_r62 = cpy_r_r61 == 0;
    cpy_r_r63 = cpy_r_r60 & cpy_r_r62;
    if (!cpy_r_r63) goto CPyL33;
    cpy_r_r64 = (Py_ssize_t)cpy_r_r58 >= (Py_ssize_t)4;
    cpy_r_r65 = cpy_r_r64;
    goto CPyL34;
CPyL33: ;
    cpy_r_r66 = CPyTagged_IsLt_(cpy_r_r58, 4);
    cpy_r_r67 = cpy_r_r66 ^ 1;
    cpy_r_r65 = cpy_r_r67;
CPyL34: ;
    cpy_r_r68 = CPyDef_modulefinder___matches_exclude(cpy_r_subpath, cpy_r_r56, cpy_r_r57, cpy_r_r65);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 113, CPyStatic_find_sources___globals);
        goto CPyL68;
    }
    if (cpy_r_r68) goto CPyL69;
    cpy_r_r69 = ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r70 = CPY_GET_METHOD(cpy_r_r69, CPyType_fscache___FileSystemCache, 10, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r69, cpy_r_subpath); /* isdir */
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 116, CPyStatic_find_sources___globals);
        goto CPyL68;
    }
    if (!cpy_r_r70) goto CPyL42;
    cpy_r_r71 = CPyDef_find_sources___SourceFinder___find_sources_in_dir(cpy_r_self, cpy_r_subpath);
    CPy_DECREF(cpy_r_subpath);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 117, CPyStatic_find_sources___globals);
        goto CPyL66;
    }
    cpy_r_sub_sources = cpy_r_r71;
    cpy_r_r72 = (CPyPtr)&((PyVarObject *)cpy_r_sub_sources)->ob_size;
    cpy_r_r73 = *(int64_t *)cpy_r_r72;
    cpy_r_r74 = cpy_r_r73 << 1;
    cpy_r_r75 = cpy_r_r74 != 0;
    if (!cpy_r_r75) goto CPyL70;
    cpy_r_r76 = PySet_Add(cpy_r_seen, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 119, CPyStatic_find_sources___globals);
        goto CPyL71;
    }
    cpy_r_r78 = CPyList_Extend(cpy_r_sources, cpy_r_sub_sources);
    CPy_DECREF(cpy_r_sub_sources);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 120, CPyStatic_find_sources___globals);
        goto CPyL65;
    } else
        goto CPyL72;
CPyL42: ;
    cpy_r_r79 = CPyModule_os;
    cpy_r_r80 = CPyStatics[142]; /* 'path' */
    cpy_r_r81 = CPyObject_GetAttr(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 122, CPyStatic_find_sources___globals);
        goto CPyL68;
    }
    cpy_r_r82 = CPyStatics[370]; /* 'splitext' */
    cpy_r_r83 = CPyObject_GetAttr(cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 122, CPyStatic_find_sources___globals);
        goto CPyL68;
    }
    PyObject *cpy_r_r84[1] = {cpy_r_name};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = _PyObject_Vectorcall(cpy_r_r83, cpy_r_r85, 1, 0);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 122, CPyStatic_find_sources___globals);
        goto CPyL68;
    }
    CPy_DECREF(cpy_r_name);
    PyObject *__tmp2818;
    if (unlikely(!(PyTuple_Check(cpy_r_r86) && PyTuple_GET_SIZE(cpy_r_r86) == 2))) {
        __tmp2818 = NULL;
        goto __LL2819;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r86, 0))))
        __tmp2818 = PyTuple_GET_ITEM(cpy_r_r86, 0);
    else {
        __tmp2818 = NULL;
    }
    if (__tmp2818 == NULL) goto __LL2819;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r86, 1))))
        __tmp2818 = PyTuple_GET_ITEM(cpy_r_r86, 1);
    else {
        __tmp2818 = NULL;
    }
    if (__tmp2818 == NULL) goto __LL2819;
    __tmp2818 = cpy_r_r86;
__LL2819: ;
    if (unlikely(__tmp2818 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r86); cpy_r_r87 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2820 = PyTuple_GET_ITEM(cpy_r_r86, 0);
        CPy_INCREF(__tmp2820);
        PyObject *__tmp2821;
        if (likely(PyUnicode_Check(__tmp2820)))
            __tmp2821 = __tmp2820;
        else {
            CPy_TypeError("str", __tmp2820); 
            __tmp2821 = NULL;
        }
        cpy_r_r87.f0 = __tmp2821;
        PyObject *__tmp2822 = PyTuple_GET_ITEM(cpy_r_r86, 1);
        CPy_INCREF(__tmp2822);
        PyObject *__tmp2823;
        if (likely(PyUnicode_Check(__tmp2822)))
            __tmp2823 = __tmp2822;
        else {
            CPy_TypeError("str", __tmp2822); 
            __tmp2823 = NULL;
        }
        cpy_r_r87.f1 = __tmp2823;
    }
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87.f0 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 122, CPyStatic_find_sources___globals);
        goto CPyL73;
    }
    cpy_r_r88 = cpy_r_r87.f0;
    CPy_INCREF(cpy_r_r88);
    cpy_r_stem = cpy_r_r88;
    cpy_r_r89 = cpy_r_r87.f1;
    CPy_INCREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r87.f0);
    CPy_DECREF(cpy_r_r87.f1);
    cpy_r_suffix = cpy_r_r89;
    cpy_r_r90 = PySet_Contains(cpy_r_seen, cpy_r_stem);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 123, CPyStatic_find_sources___globals);
        goto CPyL74;
    }
    cpy_r_r92 = cpy_r_r90;
    cpy_r_r93 = cpy_r_r92 ^ 1;
    if (!cpy_r_r93) goto CPyL75;
    cpy_r_r94 = CPyStatic_find_sources___PY_EXTENSIONS;
    if (unlikely(cpy_r_r94 == NULL)) {
        goto CPyL76;
    } else
        goto CPyL51;
CPyL49: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PY_EXTENSIONS\" was not set");
    cpy_r_r95 = 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 123, CPyStatic_find_sources___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r96 = PySequence_Contains(cpy_r_r94, cpy_r_suffix);
    CPy_DECREF(cpy_r_suffix);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 123, CPyStatic_find_sources___globals);
        goto CPyL77;
    }
    cpy_r_r98 = cpy_r_r96;
    if (!cpy_r_r98) goto CPyL78;
    cpy_r_r99 = PySet_Add(cpy_r_seen, cpy_r_stem);
    CPy_DECREF(cpy_r_stem);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 124, CPyStatic_find_sources___globals);
        goto CPyL73;
    }
    cpy_r_r101 = CPyDef_find_sources___SourceFinder___crawl_up(cpy_r_self, cpy_r_subpath);
    if (unlikely(cpy_r_r101.f0 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 125, CPyStatic_find_sources___globals);
        goto CPyL73;
    }
    cpy_r_r102 = cpy_r_r101.f0;
    CPy_INCREF(cpy_r_r102);
    cpy_r_module = cpy_r_r102;
    cpy_r_r103 = cpy_r_r101.f1;
    CPy_INCREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r101.f0);
    CPy_DECREF(cpy_r_r101.f1);
    cpy_r_base_dir = cpy_r_r103;
    cpy_r_r104 = Py_None;
    cpy_r_r105 = 2;
    cpy_r_r106 = CPyDef_modulefinder___BuildSource(cpy_r_subpath, cpy_r_module, cpy_r_r104, cpy_r_base_dir, cpy_r_r105);
    CPy_DECREF(cpy_r_subpath);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_base_dir);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 126, CPyStatic_find_sources___globals);
        goto CPyL65;
    }
    cpy_r_r107 = PyList_Append(cpy_r_sources, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 126, CPyStatic_find_sources___globals);
        goto CPyL65;
    }
CPyL57: ;
    cpy_r_r109 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r109;
    goto CPyL8;
CPyL58: ;
    return cpy_r_sources;
CPyL59: ;
    cpy_r_r110 = NULL;
    return cpy_r_r110;
CPyL60: ;
    CPy_DecRef(cpy_r_sources);
    goto CPyL59;
CPyL61: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_seen);
    goto CPyL59;
CPyL62: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_r3);
    goto CPyL59;
CPyL63: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL59;
CPyL64: ;
    CPy_DECREF(cpy_r_seen);
    CPy_DECREF(cpy_r_names);
    goto CPyL58;
CPyL65: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    goto CPyL59;
CPyL66: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_name);
    goto CPyL59;
CPyL67: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL57;
CPyL68: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_subpath);
    goto CPyL59;
CPyL69: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_subpath);
    goto CPyL57;
CPyL70: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_sub_sources);
    goto CPyL57;
CPyL71: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_sub_sources);
    goto CPyL59;
CPyL72: ;
    CPy_DECREF(cpy_r_r78);
    goto CPyL57;
CPyL73: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_subpath);
    goto CPyL59;
CPyL74: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_subpath);
    CPy_DecRef(cpy_r_stem);
    CPy_DecRef(cpy_r_suffix);
    goto CPyL59;
CPyL75: ;
    CPy_DECREF(cpy_r_subpath);
    CPy_DECREF(cpy_r_stem);
    CPy_DECREF(cpy_r_suffix);
    goto CPyL57;
CPyL76: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_subpath);
    CPy_DecRef(cpy_r_stem);
    CPy_DecRef(cpy_r_suffix);
    goto CPyL49;
CPyL77: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_seen);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_subpath);
    CPy_DecRef(cpy_r_stem);
    goto CPyL59;
CPyL78: ;
    CPy_DECREF(cpy_r_subpath);
    CPy_DECREF(cpy_r_stem);
    goto CPyL57;
}

PyObject *CPyPy_find_sources___SourceFinder___find_sources_in_dir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:find_sources_in_dir", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_find_sources___SourceFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.find_sources.SourceFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_find_sources___SourceFinder___find_sources_in_dir(arg_self, arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/find_sources.py", "find_sources_in_dir", 102, CPyStatic_find_sources___globals);
    return NULL;
}

tuple_T2OO CPyDef_find_sources___SourceFinder___crawl_up(PyObject *cpy_r_self, PyObject *cpy_r_path) {
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
    tuple_T2OO cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_parent;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_filename;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_module_name;
    tuple_T2OO cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_parent_module;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_base_dir;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    tuple_T2OO cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_module;
    tuple_T2OO cpy_r_r39;
    tuple_T2OO cpy_r_r40;
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[142]; /* 'path' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up", 145, CPyStatic_find_sources___globals);
        goto CPyL23;
    }
    cpy_r_r3 = CPyStatics[153]; /* 'abspath' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up", 145, CPyStatic_find_sources___globals);
        goto CPyL23;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_path};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up", 145, CPyStatic_find_sources___globals);
        goto CPyL23;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "crawl_up", 145, CPyStatic_find_sources___globals, "str", cpy_r_r7);
        goto CPyL23;
    }
    cpy_r_path = cpy_r_r8;
    cpy_r_r9 = CPyModule_os;
    cpy_r_r10 = CPyStatics[142]; /* 'path' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up", 146, CPyStatic_find_sources___globals);
        goto CPyL24;
    }
    cpy_r_r12 = CPyStatics[369]; /* 'split' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up", 146, CPyStatic_find_sources___globals);
        goto CPyL24;
    }
    PyObject *cpy_r_r14[1] = {cpy_r_path};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up", 146, CPyStatic_find_sources___globals);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_path);
    PyObject *__tmp2824;
    if (unlikely(!(PyTuple_Check(cpy_r_r16) && PyTuple_GET_SIZE(cpy_r_r16) == 2))) {
        __tmp2824 = NULL;
        goto __LL2825;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r16, 0))))
        __tmp2824 = PyTuple_GET_ITEM(cpy_r_r16, 0);
    else {
        __tmp2824 = NULL;
    }
    if (__tmp2824 == NULL) goto __LL2825;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r16, 1))))
        __tmp2824 = PyTuple_GET_ITEM(cpy_r_r16, 1);
    else {
        __tmp2824 = NULL;
    }
    if (__tmp2824 == NULL) goto __LL2825;
    __tmp2824 = cpy_r_r16;
__LL2825: ;
    if (unlikely(__tmp2824 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r16); cpy_r_r17 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2826 = PyTuple_GET_ITEM(cpy_r_r16, 0);
        CPy_INCREF(__tmp2826);
        PyObject *__tmp2827;
        if (likely(PyUnicode_Check(__tmp2826)))
            __tmp2827 = __tmp2826;
        else {
            CPy_TypeError("str", __tmp2826); 
            __tmp2827 = NULL;
        }
        cpy_r_r17.f0 = __tmp2827;
        PyObject *__tmp2828 = PyTuple_GET_ITEM(cpy_r_r16, 1);
        CPy_INCREF(__tmp2828);
        PyObject *__tmp2829;
        if (likely(PyUnicode_Check(__tmp2828)))
            __tmp2829 = __tmp2828;
        else {
            CPy_TypeError("str", __tmp2828); 
            __tmp2829 = NULL;
        }
        cpy_r_r17.f1 = __tmp2829;
    }
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17.f0 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up", 146, CPyStatic_find_sources___globals);
        goto CPyL23;
    }
    cpy_r_r18 = cpy_r_r17.f0;
    CPy_INCREF(cpy_r_r18);
    cpy_r_parent = cpy_r_r18;
    cpy_r_r19 = cpy_r_r17.f1;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r17.f0);
    CPy_DECREF(cpy_r_r17.f1);
    cpy_r_filename = cpy_r_r19;
    cpy_r_r20 = CPyDef_find_sources___strip_py(cpy_r_filename);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up", 148, CPyStatic_find_sources___globals);
        goto CPyL25;
    }
    cpy_r_r21 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r22 = cpy_r_r20 != cpy_r_r21;
    if (!cpy_r_r22) goto CPyL26;
    CPy_INCREF(cpy_r_r20);
    if (likely(cpy_r_r20 != Py_None))
        cpy_r_r23 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "crawl_up", 148, CPyStatic_find_sources___globals, "str", cpy_r_r20);
        goto CPyL27;
    }
    cpy_r_r24 = CPyStr_IsTrue(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (cpy_r_r24) {
        goto CPyL28;
    } else
        goto CPyL26;
CPyL12: ;
    if (likely(cpy_r_r20 != Py_None))
        cpy_r_r25 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "crawl_up", 148, CPyStatic_find_sources___globals, "str", cpy_r_r20);
        goto CPyL29;
    }
    cpy_r_r26 = cpy_r_r25;
    goto CPyL15;
CPyL14: ;
    cpy_r_r26 = cpy_r_filename;
CPyL15: ;
    cpy_r_module_name = cpy_r_r26;
    cpy_r_r27 = CPyDef_find_sources___SourceFinder___crawl_up_dir(cpy_r_self, cpy_r_parent);
    CPy_DECREF(cpy_r_parent);
    if (unlikely(cpy_r_r27.f0 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up", 150, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    cpy_r_r28 = cpy_r_r27.f0;
    CPy_INCREF(cpy_r_r28);
    cpy_r_parent_module = cpy_r_r28;
    cpy_r_r29 = cpy_r_r27.f1;
    CPy_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r27.f0);
    CPy_DECREF(cpy_r_r27.f1);
    cpy_r_base_dir = cpy_r_r29;
    cpy_r_r30 = CPyStatics[288]; /* '__init__' */
    cpy_r_r31 = PyUnicode_Compare(cpy_r_module_name, cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 == -1;
    if (!cpy_r_r32) goto CPyL19;
    cpy_r_r33 = PyErr_Occurred();
    cpy_r_r34 = cpy_r_r33 != NULL;
    if (!cpy_r_r34) goto CPyL19;
    cpy_r_r35 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up", 151, CPyStatic_find_sources___globals);
        goto CPyL31;
    }
CPyL19: ;
    cpy_r_r36 = cpy_r_r31 == 0;
    if (cpy_r_r36) {
        goto CPyL32;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r37.f0 = cpy_r_parent_module;
    cpy_r_r37.f1 = cpy_r_base_dir;
    CPy_INCREF(cpy_r_r37.f0);
    CPy_INCREF(cpy_r_r37.f1);
    CPy_DECREF(cpy_r_parent_module);
    CPy_DECREF(cpy_r_base_dir);
    return cpy_r_r37;
CPyL21: ;
    cpy_r_r38 = CPyDef_find_sources___module_join(cpy_r_parent_module, cpy_r_module_name);
    CPy_DECREF(cpy_r_parent_module);
    CPy_DECREF(cpy_r_module_name);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up", 156, CPyStatic_find_sources___globals);
        goto CPyL33;
    }
    cpy_r_module = cpy_r_r38;
    cpy_r_r39.f0 = cpy_r_module;
    cpy_r_r39.f1 = cpy_r_base_dir;
    CPy_INCREF(cpy_r_r39.f0);
    CPy_INCREF(cpy_r_r39.f1);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_base_dir);
    return cpy_r_r39;
CPyL23: ;
    tuple_T2OO __tmp2830 = { NULL, NULL };
    cpy_r_r40 = __tmp2830;
    return cpy_r_r40;
CPyL24: ;
    CPy_DecRef(cpy_r_path);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_filename);
    goto CPyL23;
CPyL26: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL14;
CPyL27: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_filename);
    CPy_DecRef(cpy_r_r20);
    goto CPyL23;
CPyL28: ;
    CPy_DECREF(cpy_r_filename);
    goto CPyL12;
CPyL29: ;
    CPy_DecRef(cpy_r_parent);
    goto CPyL23;
CPyL30: ;
    CPy_DecRef(cpy_r_module_name);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_module_name);
    CPy_DecRef(cpy_r_parent_module);
    CPy_DecRef(cpy_r_base_dir);
    goto CPyL23;
CPyL32: ;
    CPy_DECREF(cpy_r_module_name);
    goto CPyL20;
CPyL33: ;
    CPy_DecRef(cpy_r_base_dir);
    goto CPyL23;
}

PyObject *CPyPy_find_sources___SourceFinder___crawl_up(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:crawl_up", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_find_sources___SourceFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.find_sources.SourceFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_find_sources___SourceFinder___crawl_up(arg_self, arg_path);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2831 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp2831);
    PyObject *__tmp2832 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp2832);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/find_sources.py", "crawl_up", 130, CPyStatic_find_sources___globals);
    return NULL;
}

tuple_T2OO CPyDef_find_sources___SourceFinder___crawl_up_dir(PyObject *cpy_r_self, PyObject *cpy_r_dir) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    tuple_T2OO cpy_r_r12;
    tuple_T2OO cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T2OO cpy_r_r15;
    tuple_T2OO cpy_r_r16;
    cpy_r_r0 = CPyStatics[2543]; /* '_crawl_up_helper' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_dir};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up_dir", 160, CPyStatic_find_sources___globals);
        goto CPyL10;
    }
    if (unlikely(!(PyTuple_Check(cpy_r_r3) && PyTuple_GET_SIZE(cpy_r_r3) == 2))) {
        cpy_r_r4 = NULL;
        goto __LL2834;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r3, 0))))
        cpy_r_r4 = PyTuple_GET_ITEM(cpy_r_r3, 0);
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto __LL2834;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r3, 1))))
        cpy_r_r4 = PyTuple_GET_ITEM(cpy_r_r3, 1);
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto __LL2834;
    cpy_r_r4 = cpy_r_r3;
__LL2834: ;
    if (cpy_r_r4 != NULL) goto __LL2833;
    if (cpy_r_r3 == Py_None)
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL2833;
    CPy_TypeErrorTraceback("mypy/find_sources.py", "crawl_up_dir", 160, CPyStatic_find_sources___globals, "tuple[str, str] or None", cpy_r_r3);
    goto CPyL10;
__LL2833: ;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL11;
    PyObject *__tmp2835;
    if (unlikely(!(PyTuple_Check(cpy_r_r4) && PyTuple_GET_SIZE(cpy_r_r4) == 2))) {
        __tmp2835 = NULL;
        goto __LL2836;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r4, 0))))
        __tmp2835 = PyTuple_GET_ITEM(cpy_r_r4, 0);
    else {
        __tmp2835 = NULL;
    }
    if (__tmp2835 == NULL) goto __LL2836;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r4, 1))))
        __tmp2835 = PyTuple_GET_ITEM(cpy_r_r4, 1);
    else {
        __tmp2835 = NULL;
    }
    if (__tmp2835 == NULL) goto __LL2836;
    __tmp2835 = cpy_r_r4;
__LL2836: ;
    if (unlikely(__tmp2835 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r4); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2837 = PyTuple_GET_ITEM(cpy_r_r4, 0);
        CPy_INCREF(__tmp2837);
        PyObject *__tmp2838;
        if (likely(PyUnicode_Check(__tmp2837)))
            __tmp2838 = __tmp2837;
        else {
            CPy_TypeError("str", __tmp2837); 
            __tmp2838 = NULL;
        }
        cpy_r_r7.f0 = __tmp2838;
        PyObject *__tmp2839 = PyTuple_GET_ITEM(cpy_r_r4, 1);
        CPy_INCREF(__tmp2839);
        PyObject *__tmp2840;
        if (likely(PyUnicode_Check(__tmp2839)))
            __tmp2840 = __tmp2839;
        else {
            CPy_TypeError("str", __tmp2839); 
            __tmp2840 = NULL;
        }
        cpy_r_r7.f1 = __tmp2840;
    }
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up_dir", 160, CPyStatic_find_sources___globals);
        goto CPyL12;
    }
    cpy_r_r8 = PyTuple_New(2);
    if (unlikely(cpy_r_r8 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2841 = cpy_r_r7.f0;
    PyTuple_SET_ITEM(cpy_r_r8, 0, __tmp2841);
    PyObject *__tmp2842 = cpy_r_r7.f1;
    PyTuple_SET_ITEM(cpy_r_r8, 1, __tmp2842);
    cpy_r_r9 = PyObject_IsTrue(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up_dir", 160, CPyStatic_find_sources___globals);
        goto CPyL12;
    }
    cpy_r_r11 = cpy_r_r9;
    if (!cpy_r_r11) goto CPyL11;
    PyObject *__tmp2843;
    if (unlikely(!(PyTuple_Check(cpy_r_r4) && PyTuple_GET_SIZE(cpy_r_r4) == 2))) {
        __tmp2843 = NULL;
        goto __LL2844;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r4, 0))))
        __tmp2843 = PyTuple_GET_ITEM(cpy_r_r4, 0);
    else {
        __tmp2843 = NULL;
    }
    if (__tmp2843 == NULL) goto __LL2844;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r4, 1))))
        __tmp2843 = PyTuple_GET_ITEM(cpy_r_r4, 1);
    else {
        __tmp2843 = NULL;
    }
    if (__tmp2843 == NULL) goto __LL2844;
    __tmp2843 = cpy_r_r4;
__LL2844: ;
    if (unlikely(__tmp2843 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r4); cpy_r_r12 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2845 = PyTuple_GET_ITEM(cpy_r_r4, 0);
        CPy_INCREF(__tmp2845);
        PyObject *__tmp2846;
        if (likely(PyUnicode_Check(__tmp2845)))
            __tmp2846 = __tmp2845;
        else {
            CPy_TypeError("str", __tmp2845); 
            __tmp2846 = NULL;
        }
        cpy_r_r12.f0 = __tmp2846;
        PyObject *__tmp2847 = PyTuple_GET_ITEM(cpy_r_r4, 1);
        CPy_INCREF(__tmp2847);
        PyObject *__tmp2848;
        if (likely(PyUnicode_Check(__tmp2847)))
            __tmp2848 = __tmp2847;
        else {
            CPy_TypeError("str", __tmp2847); 
            __tmp2848 = NULL;
        }
        cpy_r_r12.f1 = __tmp2848;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r12.f0 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "crawl_up_dir", 160, CPyStatic_find_sources___globals);
        goto CPyL10;
    }
    cpy_r_r13 = cpy_r_r12;
    goto CPyL9;
CPyL8: ;
    cpy_r_r14 = CPyStatics[163]; /* '' */
    cpy_r_r15.f0 = cpy_r_r14;
    cpy_r_r15.f1 = cpy_r_dir;
    CPy_INCREF(cpy_r_r15.f0);
    CPy_INCREF(cpy_r_r15.f1);
    cpy_r_r13 = cpy_r_r15;
CPyL9: ;
    return cpy_r_r13;
CPyL10: ;
    tuple_T2OO __tmp2849 = { NULL, NULL };
    cpy_r_r16 = __tmp2849;
    return cpy_r_r16;
CPyL11: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL10;
}

PyObject *CPyPy_find_sources___SourceFinder___crawl_up_dir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"dir", 0};
    static CPyArg_Parser parser = {"O:crawl_up_dir", kwlist, 0};
    PyObject *obj_dir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_dir)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_find_sources___SourceFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.find_sources.SourceFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_dir;
    if (likely(PyUnicode_Check(obj_dir)))
        arg_dir = obj_dir;
    else {
        CPy_TypeError("str", obj_dir); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_find_sources___SourceFinder___crawl_up_dir(arg_self, arg_dir);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2850 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp2850);
    PyObject *__tmp2851 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp2851);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/find_sources.py", "crawl_up_dir", 159, CPyStatic_find_sources___globals);
    return NULL;
}

PyObject *CPyDef_find_sources___SourceFinder____crawl_up_helper(PyObject *cpy_r_self, PyObject *cpy_r_dir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T2OO cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T2OO cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_parent;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_init_file;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    tuple_T2OO cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_mod_prefix;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_base_dir;
    PyObject *cpy_r_r40;
    tuple_T2OO cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    tuple_T2OO cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    tuple_T2OO cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    cpy_r_r0 = ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_explicit_package_bases;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = CPyDef_find_sources___SourceFinder___is_explicit_package_base(cpy_r_self, cpy_r_dir);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 174, CPyStatic_find_sources___globals);
        goto CPyL40;
    }
    if (!cpy_r_r3) goto CPyL4;
    cpy_r_r4 = CPyStatics[163]; /* '' */
    cpy_r_r5.f0 = cpy_r_r4;
    cpy_r_r5.f1 = cpy_r_dir;
    CPy_INCREF(cpy_r_r5.f0);
    CPy_INCREF(cpy_r_r5.f1);
    cpy_r_r6 = PyTuple_New(2);
    if (unlikely(cpy_r_r6 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2852 = cpy_r_r5.f0;
    PyTuple_SET_ITEM(cpy_r_r6, 0, __tmp2852);
    PyObject *__tmp2853 = cpy_r_r5.f1;
    PyTuple_SET_ITEM(cpy_r_r6, 1, __tmp2853);
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = CPyModule_os;
    cpy_r_r8 = CPyStatics[142]; /* 'path' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 177, CPyStatic_find_sources___globals);
        goto CPyL40;
    }
    cpy_r_r10 = CPyStatics[369]; /* 'split' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 177, CPyStatic_find_sources___globals);
        goto CPyL40;
    }
    PyObject *cpy_r_r12[1] = {cpy_r_dir};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 1, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 177, CPyStatic_find_sources___globals);
        goto CPyL40;
    }
    PyObject *__tmp2854;
    if (unlikely(!(PyTuple_Check(cpy_r_r14) && PyTuple_GET_SIZE(cpy_r_r14) == 2))) {
        __tmp2854 = NULL;
        goto __LL2855;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r14, 0))))
        __tmp2854 = PyTuple_GET_ITEM(cpy_r_r14, 0);
    else {
        __tmp2854 = NULL;
    }
    if (__tmp2854 == NULL) goto __LL2855;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r14, 1))))
        __tmp2854 = PyTuple_GET_ITEM(cpy_r_r14, 1);
    else {
        __tmp2854 = NULL;
    }
    if (__tmp2854 == NULL) goto __LL2855;
    __tmp2854 = cpy_r_r14;
__LL2855: ;
    if (unlikely(__tmp2854 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r14); cpy_r_r15 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2856 = PyTuple_GET_ITEM(cpy_r_r14, 0);
        CPy_INCREF(__tmp2856);
        PyObject *__tmp2857;
        if (likely(PyUnicode_Check(__tmp2856)))
            __tmp2857 = __tmp2856;
        else {
            CPy_TypeError("str", __tmp2856); 
            __tmp2857 = NULL;
        }
        cpy_r_r15.f0 = __tmp2857;
        PyObject *__tmp2858 = PyTuple_GET_ITEM(cpy_r_r14, 1);
        CPy_INCREF(__tmp2858);
        PyObject *__tmp2859;
        if (likely(PyUnicode_Check(__tmp2858)))
            __tmp2859 = __tmp2858;
        else {
            CPy_TypeError("str", __tmp2858); 
            __tmp2859 = NULL;
        }
        cpy_r_r15.f1 = __tmp2859;
    }
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15.f0 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 177, CPyStatic_find_sources___globals);
        goto CPyL40;
    }
    cpy_r_r16 = cpy_r_r15.f0;
    CPy_INCREF(cpy_r_r16);
    cpy_r_parent = cpy_r_r16;
    cpy_r_r17 = cpy_r_r15.f1;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r15.f0);
    CPy_DECREF(cpy_r_r15.f1);
    cpy_r_name = cpy_r_r17;
    cpy_r_r18 = CPyStatics[1986]; /* '-stubs' */
    cpy_r_r19 = CPyStr_Endswith(cpy_r_name, cpy_r_r18);
    if (!cpy_r_r19) goto CPyL12;
    cpy_r_r20 = CPyStr_GetSlice(cpy_r_name, 0, -12);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 179, CPyStatic_find_sources___globals);
        goto CPyL41;
    }
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "_crawl_up_helper", 179, CPyStatic_find_sources___globals, "str", cpy_r_r20);
        goto CPyL41;
    }
    cpy_r_name = cpy_r_r21;
CPyL12: ;
    cpy_r_r22 = CPyDef_find_sources___SourceFinder___get_init_file(cpy_r_self, cpy_r_dir);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 182, CPyStatic_find_sources___globals);
        goto CPyL42;
    }
    cpy_r_init_file = cpy_r_r22;
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_init_file != cpy_r_r23;
    CPy_DECREF(cpy_r_init_file);
    if (!cpy_r_r24) goto CPyL25;
    cpy_r_r25 = CPyStatics[2544]; /* 'isidentifier' */
    PyObject *cpy_r_r26[1] = {cpy_r_name};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_VectorcallMethod(cpy_r_r25, cpy_r_r27, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 184, CPyStatic_find_sources___globals);
        goto CPyL42;
    }
    if (unlikely(!PyBool_Check(cpy_r_r28))) {
        CPy_TypeError("bool", cpy_r_r28); cpy_r_r29 = 2;
    } else
        cpy_r_r29 = cpy_r_r28 == Py_True;
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 184, CPyStatic_find_sources___globals);
        goto CPyL42;
    }
    if (cpy_r_r29) {
        goto CPyL22;
    } else
        goto CPyL43;
CPyL17: ;
    cpy_r_r30 = CPyStatics[2545]; /* ' is not a valid Python package name' */
    cpy_r_r31 = CPyStr_Build(2, cpy_r_name, cpy_r_r30);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 187, CPyStatic_find_sources___globals);
        goto CPyL40;
    }
    cpy_r_r32 = (PyObject *)CPyType_find_sources___InvalidSourceList;
    PyObject *cpy_r_r33[1] = {cpy_r_r31};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 1, 0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 187, CPyStatic_find_sources___globals);
        goto CPyL44;
    }
    CPy_DECREF(cpy_r_r31);
    if (likely(Py_TYPE(cpy_r_r35) == CPyType_find_sources___InvalidSourceList))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "_crawl_up_helper", 187, CPyStatic_find_sources___globals, "mypy.find_sources.InvalidSourceList", cpy_r_r35);
        goto CPyL40;
    }
    CPy_Raise(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 187, CPyStatic_find_sources___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r37 = CPyDef_find_sources___SourceFinder___crawl_up_dir(cpy_r_self, cpy_r_parent);
    CPy_DECREF(cpy_r_parent);
    if (unlikely(cpy_r_r37.f0 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 189, CPyStatic_find_sources___globals);
        goto CPyL45;
    }
    cpy_r_r38 = cpy_r_r37.f0;
    CPy_INCREF(cpy_r_r38);
    cpy_r_mod_prefix = cpy_r_r38;
    cpy_r_r39 = cpy_r_r37.f1;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r37.f0);
    CPy_DECREF(cpy_r_r37.f1);
    cpy_r_base_dir = cpy_r_r39;
    cpy_r_r40 = CPyDef_find_sources___module_join(cpy_r_mod_prefix, cpy_r_name);
    CPy_DECREF(cpy_r_mod_prefix);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 190, CPyStatic_find_sources___globals);
        goto CPyL46;
    }
    cpy_r_r41.f0 = cpy_r_r40;
    cpy_r_r41.f1 = cpy_r_base_dir;
    CPy_INCREF(cpy_r_r41.f0);
    CPy_INCREF(cpy_r_r41.f1);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_base_dir);
    cpy_r_r42 = PyTuple_New(2);
    if (unlikely(cpy_r_r42 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2860 = cpy_r_r41.f0;
    PyTuple_SET_ITEM(cpy_r_r42, 0, __tmp2860);
    PyObject *__tmp2861 = cpy_r_r41.f1;
    PyTuple_SET_ITEM(cpy_r_r42, 1, __tmp2861);
    return cpy_r_r42;
CPyL25: ;
    cpy_r_r43 = CPyStr_IsTrue(cpy_r_name);
    if (!cpy_r_r43) goto CPyL47;
    cpy_r_r44 = CPyStr_IsTrue(cpy_r_parent);
    if (!cpy_r_r44) goto CPyL47;
    cpy_r_r45 = CPyStatics[2544]; /* 'isidentifier' */
    PyObject *cpy_r_r46[1] = {cpy_r_name};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = PyObject_VectorcallMethod(cpy_r_r45, cpy_r_r47, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 193, CPyStatic_find_sources___globals);
        goto CPyL42;
    }
    if (unlikely(!PyBool_Check(cpy_r_r48))) {
        CPy_TypeError("bool", cpy_r_r48); cpy_r_r49 = 2;
    } else
        cpy_r_r49 = cpy_r_r48 == Py_True;
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 193, CPyStatic_find_sources___globals);
        goto CPyL42;
    }
    if (cpy_r_r49) {
        goto CPyL31;
    } else
        goto CPyL47;
CPyL30: ;
    cpy_r_r50 = Py_None;
    CPy_INCREF(cpy_r_r50);
    return cpy_r_r50;
CPyL31: ;
    cpy_r_r51 = ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_namespace_packages;
    if (cpy_r_r51) {
        goto CPyL33;
    } else
        goto CPyL48;
CPyL32: ;
    cpy_r_r52 = Py_None;
    CPy_INCREF(cpy_r_r52);
    return cpy_r_r52;
CPyL33: ;
    cpy_r_r53 = CPyStatics[2543]; /* '_crawl_up_helper' */
    PyObject *cpy_r_r54[2] = {cpy_r_self, cpy_r_parent};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = PyObject_VectorcallMethod(cpy_r_r53, cpy_r_r55, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 202, CPyStatic_find_sources___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_parent);
    if (unlikely(!(PyTuple_Check(cpy_r_r56) && PyTuple_GET_SIZE(cpy_r_r56) == 2))) {
        cpy_r_r57 = NULL;
        goto __LL2863;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r56, 0))))
        cpy_r_r57 = PyTuple_GET_ITEM(cpy_r_r56, 0);
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 == NULL) goto __LL2863;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r56, 1))))
        cpy_r_r57 = PyTuple_GET_ITEM(cpy_r_r56, 1);
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 == NULL) goto __LL2863;
    cpy_r_r57 = cpy_r_r56;
__LL2863: ;
    if (cpy_r_r57 != NULL) goto __LL2862;
    if (cpy_r_r56 == Py_None)
        cpy_r_r57 = cpy_r_r56;
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 != NULL) goto __LL2862;
    CPy_TypeErrorTraceback("mypy/find_sources.py", "_crawl_up_helper", 202, CPyStatic_find_sources___globals, "tuple[str, str] or None", cpy_r_r56);
    goto CPyL45;
__LL2862: ;
    cpy_r_result = cpy_r_r57;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r59 = cpy_r_result == cpy_r_r58;
    if (cpy_r_r59) {
        goto CPyL49;
    } else
        goto CPyL37;
CPyL36: ;
    cpy_r_r60 = Py_None;
    CPy_INCREF(cpy_r_r60);
    return cpy_r_r60;
CPyL37: ;
    PyObject *__tmp2864;
    if (unlikely(!(PyTuple_Check(cpy_r_result) && PyTuple_GET_SIZE(cpy_r_result) == 2))) {
        __tmp2864 = NULL;
        goto __LL2865;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_result, 0))))
        __tmp2864 = PyTuple_GET_ITEM(cpy_r_result, 0);
    else {
        __tmp2864 = NULL;
    }
    if (__tmp2864 == NULL) goto __LL2865;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_result, 1))))
        __tmp2864 = PyTuple_GET_ITEM(cpy_r_result, 1);
    else {
        __tmp2864 = NULL;
    }
    if (__tmp2864 == NULL) goto __LL2865;
    __tmp2864 = cpy_r_result;
__LL2865: ;
    if (unlikely(__tmp2864 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_result); cpy_r_r61 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2866 = PyTuple_GET_ITEM(cpy_r_result, 0);
        CPy_INCREF(__tmp2866);
        PyObject *__tmp2867;
        if (likely(PyUnicode_Check(__tmp2866)))
            __tmp2867 = __tmp2866;
        else {
            CPy_TypeError("str", __tmp2866); 
            __tmp2867 = NULL;
        }
        cpy_r_r61.f0 = __tmp2867;
        PyObject *__tmp2868 = PyTuple_GET_ITEM(cpy_r_result, 1);
        CPy_INCREF(__tmp2868);
        PyObject *__tmp2869;
        if (likely(PyUnicode_Check(__tmp2868)))
            __tmp2869 = __tmp2868;
        else {
            CPy_TypeError("str", __tmp2868); 
            __tmp2869 = NULL;
        }
        cpy_r_r61.f1 = __tmp2869;
    }
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r61.f0 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 209, CPyStatic_find_sources___globals);
        goto CPyL45;
    }
    cpy_r_r62 = cpy_r_r61.f0;
    CPy_INCREF(cpy_r_r62);
    cpy_r_mod_prefix = cpy_r_r62;
    cpy_r_r63 = cpy_r_r61.f1;
    CPy_INCREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r61.f0);
    CPy_DECREF(cpy_r_r61.f1);
    cpy_r_base_dir = cpy_r_r63;
    cpy_r_r64 = CPyDef_find_sources___module_join(cpy_r_mod_prefix, cpy_r_name);
    CPy_DECREF(cpy_r_mod_prefix);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 210, CPyStatic_find_sources___globals);
        goto CPyL46;
    }
    cpy_r_r65.f0 = cpy_r_r64;
    cpy_r_r65.f1 = cpy_r_base_dir;
    CPy_INCREF(cpy_r_r65.f0);
    CPy_INCREF(cpy_r_r65.f1);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_base_dir);
    cpy_r_r66 = PyTuple_New(2);
    if (unlikely(cpy_r_r66 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2870 = cpy_r_r65.f0;
    PyTuple_SET_ITEM(cpy_r_r66, 0, __tmp2870);
    PyObject *__tmp2871 = cpy_r_r65.f1;
    PyTuple_SET_ITEM(cpy_r_r66, 1, __tmp2871);
    return cpy_r_r66;
CPyL40: ;
    cpy_r_r67 = NULL;
    return cpy_r_r67;
CPyL41: ;
    CPy_DecRef(cpy_r_parent);
    goto CPyL40;
CPyL42: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_name);
    goto CPyL40;
CPyL43: ;
    CPy_DECREF(cpy_r_parent);
    goto CPyL17;
CPyL44: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL40;
CPyL45: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL40;
CPyL46: ;
    CPy_DecRef(cpy_r_base_dir);
    goto CPyL40;
CPyL47: ;
    CPy_DECREF(cpy_r_parent);
    CPy_DECREF(cpy_r_name);
    goto CPyL30;
CPyL48: ;
    CPy_DECREF(cpy_r_parent);
    CPy_DECREF(cpy_r_name);
    goto CPyL32;
CPyL49: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_result);
    goto CPyL36;
}

PyObject *CPyPy_find_sources___SourceFinder____crawl_up_helper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"dir", 0};
    static CPyArg_Parser parser = {"O:_crawl_up_helper", kwlist, 0};
    PyObject *obj_dir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_dir)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_find_sources___SourceFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.find_sources.SourceFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_dir;
    if (likely(PyUnicode_Check(obj_dir)))
        arg_dir = obj_dir;
    else {
        CPy_TypeError("str", obj_dir); 
        goto fail;
    }
    PyObject *retval = CPyDef_find_sources___SourceFinder____crawl_up_helper(arg_self, arg_dir);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/find_sources.py", "_crawl_up_helper", 163, CPyStatic_find_sources___globals);
    return NULL;
}

PyObject *CPyDef_find_sources___SourceFinder___get_init_file(PyObject *cpy_r_self, PyObject *cpy_r_dir) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_ext;
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
    PyObject *cpy_r_f;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = CPyStatic_find_sources___PY_EXTENSIONS;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"PY_EXTENSIONS\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_init_file", 219, CPyStatic_find_sources___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = 0;
CPyL4: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL23;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_init_file", 219, CPyStatic_find_sources___globals);
        goto CPyL24;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "get_init_file", 219, CPyStatic_find_sources___globals, "str", cpy_r_r7);
        goto CPyL24;
    }
    cpy_r_ext = cpy_r_r8;
    cpy_r_r9 = CPyStatics[288]; /* '__init__' */
    cpy_r_r10 = PyUnicode_Concat(cpy_r_r9, cpy_r_ext);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_init_file", 220, CPyStatic_find_sources___globals);
        goto CPyL25;
    }
    cpy_r_r11 = CPyModule_os;
    cpy_r_r12 = CPyStatics[142]; /* 'path' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_init_file", 220, CPyStatic_find_sources___globals);
        goto CPyL26;
    }
    cpy_r_r14 = CPyStatics[175]; /* 'join' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_init_file", 220, CPyStatic_find_sources___globals);
        goto CPyL26;
    }
    PyObject *cpy_r_r16[2] = {cpy_r_dir, cpy_r_r10};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 2, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_init_file", 220, CPyStatic_find_sources___globals);
        goto CPyL26;
    }
    CPy_DECREF(cpy_r_r10);
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "get_init_file", 220, CPyStatic_find_sources___globals, "str", cpy_r_r18);
        goto CPyL25;
    }
    cpy_r_f = cpy_r_r19;
    cpy_r_r20 = ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPY_GET_METHOD(cpy_r_r20, CPyType_fscache___FileSystemCache, 7, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r20, cpy_r_f); /* isfile */
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_init_file", 221, CPyStatic_find_sources___globals);
        goto CPyL27;
    }
    if (cpy_r_r21) {
        goto CPyL28;
    } else
        goto CPyL15;
CPyL14: ;
    return cpy_r_f;
CPyL15: ;
    cpy_r_r22 = CPyStatics[174]; /* '.py' */
    cpy_r_r23 = PyUnicode_Compare(cpy_r_ext, cpy_r_r22);
    CPy_DECREF(cpy_r_ext);
    cpy_r_r24 = cpy_r_r23 == -1;
    if (!cpy_r_r24) goto CPyL18;
    cpy_r_r25 = PyErr_Occurred();
    cpy_r_r26 = cpy_r_r25 != NULL;
    if (!cpy_r_r26) goto CPyL18;
    cpy_r_r27 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_init_file", 223, CPyStatic_find_sources___globals);
        goto CPyL29;
    }
CPyL18: ;
    cpy_r_r28 = cpy_r_r23 == 0;
    if (!cpy_r_r28) goto CPyL30;
    cpy_r_r29 = ((mypy___find_sources___SourceFinderObject *)cpy_r_self)->_fscache;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPY_GET_METHOD(cpy_r_r29, CPyType_fscache___FileSystemCache, 4, mypy___fscache___FileSystemCacheObject, char (*)(PyObject *, PyObject *))(cpy_r_r29, cpy_r_f); /* init_under_package_root */
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/find_sources.py", "get_init_file", 223, CPyStatic_find_sources___globals);
        goto CPyL29;
    }
    if (!cpy_r_r30) goto CPyL30;
    return cpy_r_f;
CPyL22: ;
    cpy_r_r31 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r31;
    goto CPyL4;
CPyL23: ;
    cpy_r_r32 = Py_None;
    CPy_INCREF(cpy_r_r32);
    return cpy_r_r32;
CPyL24: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL25: ;
    CPy_DecRef(cpy_r_ext);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_ext);
    CPy_DecRef(cpy_r_r10);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_ext);
    CPy_DecRef(cpy_r_f);
    goto CPyL24;
CPyL28: ;
    CPy_DECREF(cpy_r_ext);
    goto CPyL14;
CPyL29: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL24;
CPyL30: ;
    CPy_DECREF(cpy_r_f);
    goto CPyL22;
}

PyObject *CPyPy_find_sources___SourceFinder___get_init_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"dir", 0};
    static CPyArg_Parser parser = {"O:get_init_file", kwlist, 0};
    PyObject *obj_dir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_dir)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_find_sources___SourceFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.find_sources.SourceFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_dir;
    if (likely(PyUnicode_Check(obj_dir)))
        arg_dir = obj_dir;
    else {
        CPy_TypeError("str", obj_dir); 
        goto fail;
    }
    PyObject *retval = CPyDef_find_sources___SourceFinder___get_init_file(arg_self, arg_dir);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/find_sources.py", "get_init_file", 212, CPyStatic_find_sources___globals);
    return NULL;
}

PyObject *CPyDef_find_sources___module_join(PyObject *cpy_r_parent, PyObject *cpy_r_child) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStr_IsTrue(cpy_r_parent);
    if (!cpy_r_r0) goto CPyL4;
    cpy_r_r1 = CPyStatics[224]; /* '.' */
    cpy_r_r2 = PyUnicode_Concat(cpy_r_parent, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "module_join", 231, CPyStatic_find_sources___globals);
        goto CPyL5;
    }
    cpy_r_r3 = PyUnicode_Concat(cpy_r_r2, cpy_r_child);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "module_join", 231, CPyStatic_find_sources___globals);
        goto CPyL5;
    }
    return cpy_r_r3;
CPyL4: ;
    CPy_INCREF(cpy_r_child);
    return cpy_r_child;
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_find_sources___module_join(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"parent", "child", 0};
    static CPyArg_Parser parser = {"OO:module_join", kwlist, 0};
    PyObject *obj_parent;
    PyObject *obj_child;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_parent, &obj_child)) {
        return NULL;
    }
    PyObject *arg_parent;
    if (likely(PyUnicode_Check(obj_parent)))
        arg_parent = obj_parent;
    else {
        CPy_TypeError("str", obj_parent); 
        goto fail;
    }
    PyObject *arg_child;
    if (likely(PyUnicode_Check(obj_child)))
        arg_child = obj_child;
    else {
        CPy_TypeError("str", obj_child); 
        goto fail;
    }
    PyObject *retval = CPyDef_find_sources___module_join(arg_parent, arg_child);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/find_sources.py", "module_join", 228, CPyStatic_find_sources___globals);
    return NULL;
}

PyObject *CPyDef_find_sources___strip_py(PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_ext;
    char cpy_r_r9;
    int64_t cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = CPyStatic_find_sources___PY_EXTENSIONS;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"PY_EXTENSIONS\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/find_sources.py", "strip_py", 240, CPyStatic_find_sources___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = 0;
CPyL4: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL13;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "strip_py", 240, CPyStatic_find_sources___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "strip_py", 240, CPyStatic_find_sources___globals, "str", cpy_r_r7);
        goto CPyL14;
    }
    cpy_r_ext = cpy_r_r8;
    cpy_r_r9 = CPyStr_Endswith(cpy_r_arg, cpy_r_ext);
    if (!cpy_r_r9) goto CPyL15;
    cpy_r_r10 = CPyStr_Size_size_t(cpy_r_ext);
    CPy_DECREF(cpy_r_ext);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/find_sources.py", "strip_py", 242, CPyStatic_find_sources___globals);
        goto CPyL14;
    }
    cpy_r_r12 = cpy_r_r10 << 1;
    cpy_r_r13 = CPyTagged_Negate(cpy_r_r12);
    cpy_r_r14 = CPyStr_GetSlice(cpy_r_arg, 0, cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "strip_py", 242, CPyStatic_find_sources___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/find_sources.py", "strip_py", 242, CPyStatic_find_sources___globals, "str", cpy_r_r14);
        goto CPyL14;
    }
    return cpy_r_r15;
CPyL12: ;
    cpy_r_r16 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r16;
    goto CPyL4;
CPyL13: ;
    cpy_r_r17 = Py_None;
    CPy_INCREF(cpy_r_r17);
    return cpy_r_r17;
CPyL14: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL15: ;
    CPy_DECREF(cpy_r_ext);
    goto CPyL12;
}

PyObject *CPyPy_find_sources___strip_py(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:strip_py", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg_arg;
    if (likely(PyUnicode_Check(obj_arg)))
        arg_arg = obj_arg;
    else {
        CPy_TypeError("str", obj_arg); 
        goto fail;
    }
    PyObject *retval = CPyDef_find_sources___strip_py(arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/find_sources.py", "strip_py", 235, CPyStatic_find_sources___globals);
    return NULL;
}

char CPyDef_find_sources_____top_level__(void) {
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
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
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
    int32_t cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
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
    PyObject *cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", -1, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_find_sources___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 3, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_functools;
    cpy_r_r10 = (PyObject **)&CPyModule_os;
    PyObject **cpy_r_r11[2] = {cpy_r_r9, cpy_r_r10};
    cpy_r_r12 = (void *)&cpy_r_r11;
    int64_t cpy_r_r13[2] = {5, 6};
    cpy_r_r14 = (void *)&cpy_r_r13;
    cpy_r_r15 = CPyStatics[9405]; /* (('functools', 'functools', 'functools'),
                                     ('os', 'os', 'os')) */
    cpy_r_r16 = CPyStatic_find_sources___globals;
    cpy_r_r17 = CPyStatics[2547]; /* 'mypy/find_sources.py' */
    cpy_r_r18 = CPyStatics[17]; /* '<module>' */
    cpy_r_r19 = CPyImport_ImportMany(cpy_r_r15, cpy_r_r12, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r14);
    if (!cpy_r_r19) goto CPyL30;
    cpy_r_r20 = CPyStatics[9406]; /* ('Final', 'Sequence') */
    cpy_r_r21 = CPyStatics[21]; /* 'typing' */
    cpy_r_r22 = CPyStatic_find_sources___globals;
    cpy_r_r23 = CPyImport_ImportFromMany(cpy_r_r21, cpy_r_r20, cpy_r_r20, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 7, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    CPyModule_typing = cpy_r_r23;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r24 = CPyStatics[9146]; /* ('FileSystemCache',) */
    cpy_r_r25 = CPyStatics[564]; /* 'mypy.fscache' */
    cpy_r_r26 = CPyStatic_find_sources___globals;
    cpy_r_r27 = CPyImport_ImportFromMany(cpy_r_r25, cpy_r_r24, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 9, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    CPyModule_mypy___fscache = cpy_r_r27;
    CPy_INCREF(CPyModule_mypy___fscache);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r28 = CPyStatics[9407]; /* ('PYTHON_EXTENSIONS', 'BuildSource', 'matches_exclude',
                                     'mypy_path') */
    cpy_r_r29 = CPyStatics[576]; /* 'mypy.modulefinder' */
    cpy_r_r30 = CPyStatic_find_sources___globals;
    cpy_r_r31 = CPyImport_ImportFromMany(cpy_r_r29, cpy_r_r28, cpy_r_r28, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 10, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    CPyModule_mypy___modulefinder = cpy_r_r31;
    CPy_INCREF(CPyModule_mypy___modulefinder);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r32 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r33 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r34 = CPyStatic_find_sources___globals;
    cpy_r_r35 = CPyImport_ImportFromMany(cpy_r_r33, cpy_r_r32, cpy_r_r32, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 11, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    CPyModule_mypy___options = cpy_r_r35;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r36 = CPyStatic_modulefinder___PYTHON_EXTENSIONS;
    if (likely(cpy_r_r36 != NULL)) goto CPyL12;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYTHON_EXTENSIONS\" was not set");
    cpy_r_r37 = 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 13, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r38 = PyList_AsTuple(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 13, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    CPyStatic_find_sources___PY_EXTENSIONS = cpy_r_r38;
    CPy_INCREF(CPyStatic_find_sources___PY_EXTENSIONS);
    cpy_r_r39 = CPyStatic_find_sources___globals;
    cpy_r_r40 = CPyStatics[2550]; /* 'PY_EXTENSIONS' */
    cpy_r_r41 = CPyDict_SetItem(cpy_r_r39, cpy_r_r40, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 13, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    cpy_r_r43 = CPyModule_builtins;
    cpy_r_r44 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 16, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    cpy_r_r46 = PyTuple_Pack(1, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 16, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    cpy_r_r47 = CPyStatics[1991]; /* 'mypy.find_sources' */
    cpy_r_r48 = (PyObject *)CPyType_find_sources___InvalidSourceList_template;
    cpy_r_r49 = CPyType_FromTemplate(cpy_r_r48, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 16, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    cpy_r_r50 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r51 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r52 = PyTuple_Pack(1, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 16, CPyStatic_find_sources___globals);
        goto CPyL31;
    }
    cpy_r_r53 = PyObject_SetAttr(cpy_r_r49, cpy_r_r50, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 16, CPyStatic_find_sources___globals);
        goto CPyL31;
    }
    CPyType_find_sources___InvalidSourceList = (PyTypeObject *)cpy_r_r49;
    CPy_INCREF(CPyType_find_sources___InvalidSourceList);
    cpy_r_r55 = CPyStatic_find_sources___globals;
    cpy_r_r56 = CPyStatics[1989]; /* 'InvalidSourceList' */
    cpy_r_r57 = CPyDict_SetItem(cpy_r_r55, cpy_r_r56, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 16, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    cpy_r_r59 = NULL;
    cpy_r_r60 = CPyStatics[1991]; /* 'mypy.find_sources' */
    cpy_r_r61 = (PyObject *)CPyType_find_sources___SourceFinder_template;
    cpy_r_r62 = CPyType_FromTemplate(cpy_r_r61, cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 90, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    cpy_r_r63 = CPyDef_find_sources___SourceFinder_trait_vtable_setup();
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", -1, CPyStatic_find_sources___globals);
        goto CPyL32;
    }
    cpy_r_r64 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r65 = CPyStatics[647]; /* 'fscache' */
    cpy_r_r66 = CPyStatics[2551]; /* 'explicit_package_bases' */
    cpy_r_r67 = CPyStatics[2552]; /* 'namespace_packages' */
    cpy_r_r68 = CPyStatics[1586]; /* 'exclude' */
    cpy_r_r69 = CPyStatics[1729]; /* 'verbosity' */
    cpy_r_r70 = PyTuple_Pack(5, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 90, CPyStatic_find_sources___globals);
        goto CPyL32;
    }
    cpy_r_r71 = PyObject_SetAttr(cpy_r_r62, cpy_r_r64, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 90, CPyStatic_find_sources___globals);
        goto CPyL32;
    }
    CPyType_find_sources___SourceFinder = (PyTypeObject *)cpy_r_r62;
    CPy_INCREF(CPyType_find_sources___SourceFinder);
    cpy_r_r73 = CPyStatic_find_sources___globals;
    cpy_r_r74 = CPyStatics[2553]; /* 'SourceFinder' */
    cpy_r_r75 = CPyDict_SetItem(cpy_r_r73, cpy_r_r74, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 90, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    cpy_r_r77 = (PyObject *)CPyType_find_sources___SourceFinder;
    cpy_r_r78 = CPyStatics[2543]; /* '_crawl_up_helper' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 163, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    cpy_r_r80 = CPyModule_functools;
    cpy_r_r81 = CPyStatics[2554]; /* 'lru_cache' */
    cpy_r_r82 = CPyObject_GetAttr(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 162, CPyStatic_find_sources___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r83[1] = {cpy_r_r79};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = _PyObject_Vectorcall(cpy_r_r82, cpy_r_r84, 1, 0);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 163, CPyStatic_find_sources___globals);
        goto CPyL33;
    }
    CPy_DECREF(cpy_r_r79);
    cpy_r_r86 = CPyStatics[2543]; /* '_crawl_up_helper' */
    cpy_r_r87 = PyObject_SetAttr(cpy_r_r77, cpy_r_r86, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/find_sources.py", "<module>", 163, CPyStatic_find_sources___globals);
        goto CPyL30;
    }
    return 1;
CPyL30: ;
    cpy_r_r89 = 2;
    return cpy_r_r89;
CPyL31: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL30;
CPyL32: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL30;
CPyL33: ;
    CPy_DecRef(cpy_r_r79);
    goto CPyL30;
}
