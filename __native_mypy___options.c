#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *mypy___options___BuildType_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___options___BuildType(void);

static PyObject *
mypy___options___BuildType_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___options___BuildType) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___options___BuildType_setup(type);
}

static int
mypy___options___BuildType_traverse(mypy___options___BuildTypeObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_STANDARD)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_STANDARD));
    }
    if (CPyTagged_CheckLong(self->_MODULE)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_MODULE));
    }
    if (CPyTagged_CheckLong(self->_PROGRAM_TEXT)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_PROGRAM_TEXT));
    }
    return 0;
}

static int
mypy___options___BuildType_clear(mypy___options___BuildTypeObject *self)
{
    if (CPyTagged_CheckLong(self->_STANDARD)) {
        CPyTagged __tmp = self->_STANDARD;
        self->_STANDARD = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_MODULE)) {
        CPyTagged __tmp = self->_MODULE;
        self->_MODULE = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_PROGRAM_TEXT)) {
        CPyTagged __tmp = self->_PROGRAM_TEXT;
        self->_PROGRAM_TEXT = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
mypy___options___BuildType_dealloc(mypy___options___BuildTypeObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___options___BuildType_dealloc)
    mypy___options___BuildType_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___options___BuildType_vtable[1];
static bool
CPyDef_mypy___options___BuildType_trait_vtable_setup(void)
{
    CPyVTableItem mypy___options___BuildType_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___options___BuildType_____mypyc_defaults_setup,
    };
    memcpy(mypy___options___BuildType_vtable, mypy___options___BuildType_vtable_scratch, sizeof(mypy___options___BuildType_vtable));
    return 1;
}

static PyObject *
mypy___options___BuildType_get_STANDARD(mypy___options___BuildTypeObject *self, void *closure);
static int
mypy___options___BuildType_set_STANDARD(mypy___options___BuildTypeObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___BuildType_get_MODULE(mypy___options___BuildTypeObject *self, void *closure);
static int
mypy___options___BuildType_set_MODULE(mypy___options___BuildTypeObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___BuildType_get_PROGRAM_TEXT(mypy___options___BuildTypeObject *self, void *closure);
static int
mypy___options___BuildType_set_PROGRAM_TEXT(mypy___options___BuildTypeObject *self, PyObject *value, void *closure);

static PyGetSetDef mypy___options___BuildType_getseters[] = {
    {"STANDARD",
     (getter)mypy___options___BuildType_get_STANDARD, (setter)mypy___options___BuildType_set_STANDARD,
     NULL, NULL},
    {"MODULE",
     (getter)mypy___options___BuildType_get_MODULE, (setter)mypy___options___BuildType_set_MODULE,
     NULL, NULL},
    {"PROGRAM_TEXT",
     (getter)mypy___options___BuildType_get_PROGRAM_TEXT, (setter)mypy___options___BuildType_set_PROGRAM_TEXT,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef mypy___options___BuildType_methods[] = {
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_mypy___options___BuildType_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___options___BuildType_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "BuildType",
    .tp_new = mypy___options___BuildType_new,
    .tp_dealloc = (destructor)mypy___options___BuildType_dealloc,
    .tp_traverse = (traverseproc)mypy___options___BuildType_traverse,
    .tp_clear = (inquiry)mypy___options___BuildType_clear,
    .tp_getset = mypy___options___BuildType_getseters,
    .tp_methods = mypy___options___BuildType_methods,
    .tp_basicsize = sizeof(mypy___options___BuildTypeObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___options___BuildType_template = &CPyType_mypy___options___BuildType_template_;

static PyObject *
mypy___options___BuildType_setup(PyTypeObject *type)
{
    mypy___options___BuildTypeObject *self;
    self = (mypy___options___BuildTypeObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___options___BuildType_vtable;
    self->_STANDARD = CPY_INT_TAG;
    self->_MODULE = CPY_INT_TAG;
    self->_PROGRAM_TEXT = CPY_INT_TAG;
    if (CPyDef_mypy___options___BuildType_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___options___BuildType(void)
{
    PyObject *self = mypy___options___BuildType_setup(CPyType_mypy___options___BuildType);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
mypy___options___BuildType_get_STANDARD(mypy___options___BuildTypeObject *self, void *closure)
{
    if (unlikely(self->_STANDARD == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'STANDARD' of 'BuildType' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_STANDARD);
    PyObject *retval = CPyTagged_StealAsObject(self->_STANDARD);
    return retval;
}

static int
mypy___options___BuildType_set_STANDARD(mypy___options___BuildTypeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BuildType' object attribute 'STANDARD' cannot be deleted");
        return -1;
    }
    if (self->_STANDARD != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_STANDARD);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_STANDARD = tmp;
    return 0;
}

static PyObject *
mypy___options___BuildType_get_MODULE(mypy___options___BuildTypeObject *self, void *closure)
{
    if (unlikely(self->_MODULE == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'MODULE' of 'BuildType' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_MODULE);
    PyObject *retval = CPyTagged_StealAsObject(self->_MODULE);
    return retval;
}

static int
mypy___options___BuildType_set_MODULE(mypy___options___BuildTypeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BuildType' object attribute 'MODULE' cannot be deleted");
        return -1;
    }
    if (self->_MODULE != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_MODULE);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_MODULE = tmp;
    return 0;
}

static PyObject *
mypy___options___BuildType_get_PROGRAM_TEXT(mypy___options___BuildTypeObject *self, void *closure)
{
    if (unlikely(self->_PROGRAM_TEXT == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'PROGRAM_TEXT' of 'BuildType' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_PROGRAM_TEXT);
    PyObject *retval = CPyTagged_StealAsObject(self->_PROGRAM_TEXT);
    return retval;
}

static int
mypy___options___BuildType_set_PROGRAM_TEXT(mypy___options___BuildTypeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BuildType' object attribute 'PROGRAM_TEXT' cannot be deleted");
        return -1;
    }
    if (self->_PROGRAM_TEXT != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_PROGRAM_TEXT);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_PROGRAM_TEXT = tmp;
    return 0;
}

static int
mypy___options___Options_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *mypy___options___Options_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___options___Options(void);

static PyObject *
mypy___options___Options_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___options___Options) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = mypy___options___Options_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_mypy___options___Options_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
mypy___options___Options_traverse(mypy___options___OptionsObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->__per_module_cache);
    if (CPyTagged_CheckLong(self->_build_type)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_build_type));
    }
    if (CPyTagged_CheckLong(self->_python_version.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_python_version.f0));
    }
    if (CPyTagged_CheckLong(self->_python_version.f1)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_python_version.f1));
    }
    Py_VISIT(self->_python_executable);
    Py_VISIT(self->_platform);
    Py_VISIT(self->_custom_typing_module);
    Py_VISIT(self->_custom_typeshed_dir);
    Py_VISIT(self->_abs_custom_typeshed_dir);
    Py_VISIT(self->_mypy_path);
    Py_VISIT(self->_report_dirs);
    Py_VISIT(self->_follow_imports);
    Py_VISIT(self->_exclude);
    Py_VISIT(self->_always_true);
    Py_VISIT(self->_always_false);
    Py_VISIT(self->_disable_error_code);
    Py_VISIT(self->_disabled_error_codes);
    Py_VISIT(self->_enable_error_code);
    Py_VISIT(self->_enabled_error_codes);
    Py_VISIT(self->_config_file);
    Py_VISIT(self->_quickstart_file);
    Py_VISIT(self->_files);
    Py_VISIT(self->_packages);
    Py_VISIT(self->_modules);
    Py_VISIT(self->_junit_xml);
    Py_VISIT(self->_cache_dir);
    Py_VISIT(self->_plugins);
    Py_VISIT(self->_per_module_options);
    Py_VISIT(self->__glob_options);
    Py_VISIT(self->_unused_configs);
    if (CPyTagged_CheckLong(self->_verbosity)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_verbosity));
    }
    Py_VISIT(self->_enable_incomplete_feature);
    Py_VISIT(self->_timing_stats);
    Py_VISIT(self->_line_checking_stats);
    Py_VISIT(self->_shadow_file);
    Py_VISIT(self->_package_root);
    Py_VISIT(self->_cache_map);
    Py_VISIT(self->_transform_source);
    if (CPyTagged_CheckLong(self->_many_errors_threshold)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_many_errors_threshold));
    }
    return 0;
}

static int
mypy___options___Options_clear(mypy___options___OptionsObject *self)
{
    Py_CLEAR(self->__per_module_cache);
    if (CPyTagged_CheckLong(self->_build_type)) {
        CPyTagged __tmp = self->_build_type;
        self->_build_type = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_python_version.f0)) {
        CPyTagged __tmp = self->_python_version.f0;
        self->_python_version.f0 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_python_version.f1)) {
        CPyTagged __tmp = self->_python_version.f1;
        self->_python_version.f1 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_python_executable);
    Py_CLEAR(self->_platform);
    Py_CLEAR(self->_custom_typing_module);
    Py_CLEAR(self->_custom_typeshed_dir);
    Py_CLEAR(self->_abs_custom_typeshed_dir);
    Py_CLEAR(self->_mypy_path);
    Py_CLEAR(self->_report_dirs);
    Py_CLEAR(self->_follow_imports);
    Py_CLEAR(self->_exclude);
    Py_CLEAR(self->_always_true);
    Py_CLEAR(self->_always_false);
    Py_CLEAR(self->_disable_error_code);
    Py_CLEAR(self->_disabled_error_codes);
    Py_CLEAR(self->_enable_error_code);
    Py_CLEAR(self->_enabled_error_codes);
    Py_CLEAR(self->_config_file);
    Py_CLEAR(self->_quickstart_file);
    Py_CLEAR(self->_files);
    Py_CLEAR(self->_packages);
    Py_CLEAR(self->_modules);
    Py_CLEAR(self->_junit_xml);
    Py_CLEAR(self->_cache_dir);
    Py_CLEAR(self->_plugins);
    Py_CLEAR(self->_per_module_options);
    Py_CLEAR(self->__glob_options);
    Py_CLEAR(self->_unused_configs);
    if (CPyTagged_CheckLong(self->_verbosity)) {
        CPyTagged __tmp = self->_verbosity;
        self->_verbosity = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_enable_incomplete_feature);
    Py_CLEAR(self->_timing_stats);
    Py_CLEAR(self->_line_checking_stats);
    Py_CLEAR(self->_shadow_file);
    Py_CLEAR(self->_package_root);
    Py_CLEAR(self->_cache_map);
    Py_CLEAR(self->_transform_source);
    if (CPyTagged_CheckLong(self->_many_errors_threshold)) {
        CPyTagged __tmp = self->_many_errors_threshold;
        self->_many_errors_threshold = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
mypy___options___Options_dealloc(mypy___options___OptionsObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___options___Options_dealloc)
    mypy___options___Options_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___options___Options_vtable[12];
static bool
CPyDef_mypy___options___Options_trait_vtable_setup(void)
{
    CPyVTableItem mypy___options___Options_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___options___Options_____init__,
        (CPyVTableItem)CPyDef_mypy___options___Options___use_lowercase_names,
        (CPyVTableItem)CPyDef_mypy___options___Options___use_or_syntax,
        (CPyVTableItem)CPyDef_mypy___options___Options___new_semantic_analyzer,
        (CPyVTableItem)CPyDef_mypy___options___Options___snapshot,
        (CPyVTableItem)CPyDef_mypy___options___Options_____repr__,
        (CPyVTableItem)CPyDef_mypy___options___Options___apply_changes,
        (CPyVTableItem)CPyDef_mypy___options___Options___compare_stable,
        (CPyVTableItem)CPyDef_mypy___options___Options___build_per_module_cache,
        (CPyVTableItem)CPyDef_mypy___options___Options___clone_for_module,
        (CPyVTableItem)CPyDef_mypy___options___Options___compile_glob,
        (CPyVTableItem)CPyDef_mypy___options___Options___select_options_affecting_cache,
    };
    memcpy(mypy___options___Options_vtable, mypy___options___Options_vtable_scratch, sizeof(mypy___options___Options_vtable));
    return 1;
}

static PyObject *
mypy___options___Options_get__per_module_cache(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set__per_module_cache(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_build_type(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_build_type(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_python_version(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_python_version(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_python_executable(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_python_executable(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_platform(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_platform(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_custom_typing_module(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_custom_typing_module(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_custom_typeshed_dir(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_custom_typeshed_dir(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_abs_custom_typeshed_dir(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_abs_custom_typeshed_dir(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_mypy_path(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_mypy_path(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_report_dirs(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_report_dirs(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_no_silence_site_packages(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_no_silence_site_packages(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_no_site_packages(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_no_site_packages(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_ignore_missing_imports(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_ignore_missing_imports(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_ignore_missing_imports_per_module(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_ignore_missing_imports_per_module(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_follow_imports(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_follow_imports(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_follow_imports_for_stubs(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_follow_imports_for_stubs(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_namespace_packages(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_namespace_packages(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_explicit_package_bases(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_explicit_package_bases(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_exclude(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_exclude(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disallow_any_generics(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disallow_any_generics(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disallow_any_unimported(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disallow_any_unimported(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disallow_any_expr(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disallow_any_expr(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disallow_any_decorated(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disallow_any_decorated(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disallow_any_explicit(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disallow_any_explicit(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disallow_untyped_calls(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disallow_untyped_calls(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disallow_untyped_defs(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disallow_untyped_defs(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disallow_incomplete_defs(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disallow_incomplete_defs(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_check_untyped_defs(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_check_untyped_defs(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disallow_untyped_decorators(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disallow_untyped_decorators(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disallow_subclassing_any(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disallow_subclassing_any(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_warn_incomplete_stub(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_warn_incomplete_stub(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_warn_redundant_casts(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_warn_redundant_casts(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_warn_no_return(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_warn_no_return(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_warn_return_any(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_warn_return_any(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_warn_unused_ignores(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_warn_unused_ignores(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_warn_unused_configs(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_warn_unused_configs(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_ignore_errors(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_ignore_errors(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_strict_optional(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_strict_optional(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_show_error_context(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_show_error_context(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_color_output(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_color_output(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_error_summary(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_error_summary(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_implicit_optional(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_implicit_optional(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_implicit_reexport(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_implicit_reexport(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_allow_untyped_globals(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_allow_untyped_globals(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_allow_redefinition(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_allow_redefinition(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_strict_equality(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_strict_equality(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_strict_concatenate(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_strict_concatenate(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_extra_checks(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_extra_checks(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_warn_unreachable(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_warn_unreachable(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_always_true(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_always_true(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_always_false(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_always_false(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disable_error_code(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disable_error_code(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disabled_error_codes(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disabled_error_codes(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_enable_error_code(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_enable_error_code(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_enabled_error_codes(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_enabled_error_codes(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_scripts_are_modules(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_scripts_are_modules(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_config_file(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_config_file(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_quickstart_file(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_quickstart_file(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_files(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_files(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_packages(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_packages(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_modules(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_modules(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_junit_xml(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_junit_xml(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_incremental(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_incremental(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_cache_dir(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_cache_dir(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_sqlite_cache(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_sqlite_cache(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_debug_cache(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_debug_cache(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_skip_version_check(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_skip_version_check(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_skip_cache_mtime_checks(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_skip_cache_mtime_checks(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_fine_grained_incremental(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_fine_grained_incremental(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_cache_fine_grained(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_cache_fine_grained(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_use_fine_grained_cache(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_use_fine_grained_cache(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_debug_serialize(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_debug_serialize(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_mypyc(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_mypyc(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_inspections(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_inspections(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_preserve_asts(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_preserve_asts(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_plugins(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_plugins(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_per_module_options(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_per_module_options(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get__glob_options(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set__glob_options(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_unused_configs(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_unused_configs(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_verbosity(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_verbosity(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_pdb(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_pdb(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_show_traceback(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_show_traceback(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_raise_exceptions(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_raise_exceptions(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_dump_type_stats(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_dump_type_stats(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_dump_inference_stats(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_dump_inference_stats(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_dump_build_stats(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_dump_build_stats(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_enable_incomplete_features(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_enable_incomplete_features(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_enable_incomplete_feature(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_enable_incomplete_feature(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_timing_stats(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_timing_stats(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_line_checking_stats(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_line_checking_stats(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_semantic_analysis_only(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_semantic_analysis_only(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_use_builtins_fixtures(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_use_builtins_fixtures(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_shadow_file(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_shadow_file(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_show_column_numbers(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_show_column_numbers(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_show_error_end(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_show_error_end(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_hide_error_codes(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_hide_error_codes(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_show_error_code_links(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_show_error_code_links(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_pretty(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_pretty(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_dump_graph(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_dump_graph(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_dump_deps(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_dump_deps(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_logical_deps(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_logical_deps(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_local_partial_types(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_local_partial_types(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_bazel(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_bazel(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_export_types(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_export_types(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_package_root(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_package_root(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_cache_map(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_cache_map(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_fast_exit(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_fast_exit(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_fast_module_lookup(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_fast_module_lookup(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_allow_empty_bodies(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_allow_empty_bodies(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_transform_source(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_transform_source(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_show_absolute_path(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_show_absolute_path(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_install_types(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_install_types(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_non_interactive(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_non_interactive(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_many_errors_threshold(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_many_errors_threshold(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_new_type_inference(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_new_type_inference(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disable_recursive_aliases(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disable_recursive_aliases(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_enable_recursive_aliases(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_enable_recursive_aliases(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_export_ref_info(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_export_ref_info(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disable_bytearray_promotion(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disable_bytearray_promotion(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_disable_memoryview_promotion(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_disable_memoryview_promotion(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_force_uppercase_builtins(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_force_uppercase_builtins(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_force_union_syntax(mypy___options___OptionsObject *self, void *closure);
static int
mypy___options___Options_set_force_union_syntax(mypy___options___OptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___options___Options_get_new_semantic_analyzer(mypy___options___OptionsObject *self, void *closure);

static PyGetSetDef mypy___options___Options_getseters[] = {
    {"_per_module_cache",
     (getter)mypy___options___Options_get__per_module_cache, (setter)mypy___options___Options_set__per_module_cache,
     NULL, NULL},
    {"build_type",
     (getter)mypy___options___Options_get_build_type, (setter)mypy___options___Options_set_build_type,
     NULL, NULL},
    {"python_version",
     (getter)mypy___options___Options_get_python_version, (setter)mypy___options___Options_set_python_version,
     NULL, NULL},
    {"python_executable",
     (getter)mypy___options___Options_get_python_executable, (setter)mypy___options___Options_set_python_executable,
     NULL, NULL},
    {"platform",
     (getter)mypy___options___Options_get_platform, (setter)mypy___options___Options_set_platform,
     NULL, NULL},
    {"custom_typing_module",
     (getter)mypy___options___Options_get_custom_typing_module, (setter)mypy___options___Options_set_custom_typing_module,
     NULL, NULL},
    {"custom_typeshed_dir",
     (getter)mypy___options___Options_get_custom_typeshed_dir, (setter)mypy___options___Options_set_custom_typeshed_dir,
     NULL, NULL},
    {"abs_custom_typeshed_dir",
     (getter)mypy___options___Options_get_abs_custom_typeshed_dir, (setter)mypy___options___Options_set_abs_custom_typeshed_dir,
     NULL, NULL},
    {"mypy_path",
     (getter)mypy___options___Options_get_mypy_path, (setter)mypy___options___Options_set_mypy_path,
     NULL, NULL},
    {"report_dirs",
     (getter)mypy___options___Options_get_report_dirs, (setter)mypy___options___Options_set_report_dirs,
     NULL, NULL},
    {"no_silence_site_packages",
     (getter)mypy___options___Options_get_no_silence_site_packages, (setter)mypy___options___Options_set_no_silence_site_packages,
     NULL, NULL},
    {"no_site_packages",
     (getter)mypy___options___Options_get_no_site_packages, (setter)mypy___options___Options_set_no_site_packages,
     NULL, NULL},
    {"ignore_missing_imports",
     (getter)mypy___options___Options_get_ignore_missing_imports, (setter)mypy___options___Options_set_ignore_missing_imports,
     NULL, NULL},
    {"ignore_missing_imports_per_module",
     (getter)mypy___options___Options_get_ignore_missing_imports_per_module, (setter)mypy___options___Options_set_ignore_missing_imports_per_module,
     NULL, NULL},
    {"follow_imports",
     (getter)mypy___options___Options_get_follow_imports, (setter)mypy___options___Options_set_follow_imports,
     NULL, NULL},
    {"follow_imports_for_stubs",
     (getter)mypy___options___Options_get_follow_imports_for_stubs, (setter)mypy___options___Options_set_follow_imports_for_stubs,
     NULL, NULL},
    {"namespace_packages",
     (getter)mypy___options___Options_get_namespace_packages, (setter)mypy___options___Options_set_namespace_packages,
     NULL, NULL},
    {"explicit_package_bases",
     (getter)mypy___options___Options_get_explicit_package_bases, (setter)mypy___options___Options_set_explicit_package_bases,
     NULL, NULL},
    {"exclude",
     (getter)mypy___options___Options_get_exclude, (setter)mypy___options___Options_set_exclude,
     NULL, NULL},
    {"disallow_any_generics",
     (getter)mypy___options___Options_get_disallow_any_generics, (setter)mypy___options___Options_set_disallow_any_generics,
     NULL, NULL},
    {"disallow_any_unimported",
     (getter)mypy___options___Options_get_disallow_any_unimported, (setter)mypy___options___Options_set_disallow_any_unimported,
     NULL, NULL},
    {"disallow_any_expr",
     (getter)mypy___options___Options_get_disallow_any_expr, (setter)mypy___options___Options_set_disallow_any_expr,
     NULL, NULL},
    {"disallow_any_decorated",
     (getter)mypy___options___Options_get_disallow_any_decorated, (setter)mypy___options___Options_set_disallow_any_decorated,
     NULL, NULL},
    {"disallow_any_explicit",
     (getter)mypy___options___Options_get_disallow_any_explicit, (setter)mypy___options___Options_set_disallow_any_explicit,
     NULL, NULL},
    {"disallow_untyped_calls",
     (getter)mypy___options___Options_get_disallow_untyped_calls, (setter)mypy___options___Options_set_disallow_untyped_calls,
     NULL, NULL},
    {"disallow_untyped_defs",
     (getter)mypy___options___Options_get_disallow_untyped_defs, (setter)mypy___options___Options_set_disallow_untyped_defs,
     NULL, NULL},
    {"disallow_incomplete_defs",
     (getter)mypy___options___Options_get_disallow_incomplete_defs, (setter)mypy___options___Options_set_disallow_incomplete_defs,
     NULL, NULL},
    {"check_untyped_defs",
     (getter)mypy___options___Options_get_check_untyped_defs, (setter)mypy___options___Options_set_check_untyped_defs,
     NULL, NULL},
    {"disallow_untyped_decorators",
     (getter)mypy___options___Options_get_disallow_untyped_decorators, (setter)mypy___options___Options_set_disallow_untyped_decorators,
     NULL, NULL},
    {"disallow_subclassing_any",
     (getter)mypy___options___Options_get_disallow_subclassing_any, (setter)mypy___options___Options_set_disallow_subclassing_any,
     NULL, NULL},
    {"warn_incomplete_stub",
     (getter)mypy___options___Options_get_warn_incomplete_stub, (setter)mypy___options___Options_set_warn_incomplete_stub,
     NULL, NULL},
    {"warn_redundant_casts",
     (getter)mypy___options___Options_get_warn_redundant_casts, (setter)mypy___options___Options_set_warn_redundant_casts,
     NULL, NULL},
    {"warn_no_return",
     (getter)mypy___options___Options_get_warn_no_return, (setter)mypy___options___Options_set_warn_no_return,
     NULL, NULL},
    {"warn_return_any",
     (getter)mypy___options___Options_get_warn_return_any, (setter)mypy___options___Options_set_warn_return_any,
     NULL, NULL},
    {"warn_unused_ignores",
     (getter)mypy___options___Options_get_warn_unused_ignores, (setter)mypy___options___Options_set_warn_unused_ignores,
     NULL, NULL},
    {"warn_unused_configs",
     (getter)mypy___options___Options_get_warn_unused_configs, (setter)mypy___options___Options_set_warn_unused_configs,
     NULL, NULL},
    {"ignore_errors",
     (getter)mypy___options___Options_get_ignore_errors, (setter)mypy___options___Options_set_ignore_errors,
     NULL, NULL},
    {"strict_optional",
     (getter)mypy___options___Options_get_strict_optional, (setter)mypy___options___Options_set_strict_optional,
     NULL, NULL},
    {"show_error_context",
     (getter)mypy___options___Options_get_show_error_context, (setter)mypy___options___Options_set_show_error_context,
     NULL, NULL},
    {"color_output",
     (getter)mypy___options___Options_get_color_output, (setter)mypy___options___Options_set_color_output,
     NULL, NULL},
    {"error_summary",
     (getter)mypy___options___Options_get_error_summary, (setter)mypy___options___Options_set_error_summary,
     NULL, NULL},
    {"implicit_optional",
     (getter)mypy___options___Options_get_implicit_optional, (setter)mypy___options___Options_set_implicit_optional,
     NULL, NULL},
    {"implicit_reexport",
     (getter)mypy___options___Options_get_implicit_reexport, (setter)mypy___options___Options_set_implicit_reexport,
     NULL, NULL},
    {"allow_untyped_globals",
     (getter)mypy___options___Options_get_allow_untyped_globals, (setter)mypy___options___Options_set_allow_untyped_globals,
     NULL, NULL},
    {"allow_redefinition",
     (getter)mypy___options___Options_get_allow_redefinition, (setter)mypy___options___Options_set_allow_redefinition,
     NULL, NULL},
    {"strict_equality",
     (getter)mypy___options___Options_get_strict_equality, (setter)mypy___options___Options_set_strict_equality,
     NULL, NULL},
    {"strict_concatenate",
     (getter)mypy___options___Options_get_strict_concatenate, (setter)mypy___options___Options_set_strict_concatenate,
     NULL, NULL},
    {"extra_checks",
     (getter)mypy___options___Options_get_extra_checks, (setter)mypy___options___Options_set_extra_checks,
     NULL, NULL},
    {"warn_unreachable",
     (getter)mypy___options___Options_get_warn_unreachable, (setter)mypy___options___Options_set_warn_unreachable,
     NULL, NULL},
    {"always_true",
     (getter)mypy___options___Options_get_always_true, (setter)mypy___options___Options_set_always_true,
     NULL, NULL},
    {"always_false",
     (getter)mypy___options___Options_get_always_false, (setter)mypy___options___Options_set_always_false,
     NULL, NULL},
    {"disable_error_code",
     (getter)mypy___options___Options_get_disable_error_code, (setter)mypy___options___Options_set_disable_error_code,
     NULL, NULL},
    {"disabled_error_codes",
     (getter)mypy___options___Options_get_disabled_error_codes, (setter)mypy___options___Options_set_disabled_error_codes,
     NULL, NULL},
    {"enable_error_code",
     (getter)mypy___options___Options_get_enable_error_code, (setter)mypy___options___Options_set_enable_error_code,
     NULL, NULL},
    {"enabled_error_codes",
     (getter)mypy___options___Options_get_enabled_error_codes, (setter)mypy___options___Options_set_enabled_error_codes,
     NULL, NULL},
    {"scripts_are_modules",
     (getter)mypy___options___Options_get_scripts_are_modules, (setter)mypy___options___Options_set_scripts_are_modules,
     NULL, NULL},
    {"config_file",
     (getter)mypy___options___Options_get_config_file, (setter)mypy___options___Options_set_config_file,
     NULL, NULL},
    {"quickstart_file",
     (getter)mypy___options___Options_get_quickstart_file, (setter)mypy___options___Options_set_quickstart_file,
     NULL, NULL},
    {"files",
     (getter)mypy___options___Options_get_files, (setter)mypy___options___Options_set_files,
     NULL, NULL},
    {"packages",
     (getter)mypy___options___Options_get_packages, (setter)mypy___options___Options_set_packages,
     NULL, NULL},
    {"modules",
     (getter)mypy___options___Options_get_modules, (setter)mypy___options___Options_set_modules,
     NULL, NULL},
    {"junit_xml",
     (getter)mypy___options___Options_get_junit_xml, (setter)mypy___options___Options_set_junit_xml,
     NULL, NULL},
    {"incremental",
     (getter)mypy___options___Options_get_incremental, (setter)mypy___options___Options_set_incremental,
     NULL, NULL},
    {"cache_dir",
     (getter)mypy___options___Options_get_cache_dir, (setter)mypy___options___Options_set_cache_dir,
     NULL, NULL},
    {"sqlite_cache",
     (getter)mypy___options___Options_get_sqlite_cache, (setter)mypy___options___Options_set_sqlite_cache,
     NULL, NULL},
    {"debug_cache",
     (getter)mypy___options___Options_get_debug_cache, (setter)mypy___options___Options_set_debug_cache,
     NULL, NULL},
    {"skip_version_check",
     (getter)mypy___options___Options_get_skip_version_check, (setter)mypy___options___Options_set_skip_version_check,
     NULL, NULL},
    {"skip_cache_mtime_checks",
     (getter)mypy___options___Options_get_skip_cache_mtime_checks, (setter)mypy___options___Options_set_skip_cache_mtime_checks,
     NULL, NULL},
    {"fine_grained_incremental",
     (getter)mypy___options___Options_get_fine_grained_incremental, (setter)mypy___options___Options_set_fine_grained_incremental,
     NULL, NULL},
    {"cache_fine_grained",
     (getter)mypy___options___Options_get_cache_fine_grained, (setter)mypy___options___Options_set_cache_fine_grained,
     NULL, NULL},
    {"use_fine_grained_cache",
     (getter)mypy___options___Options_get_use_fine_grained_cache, (setter)mypy___options___Options_set_use_fine_grained_cache,
     NULL, NULL},
    {"debug_serialize",
     (getter)mypy___options___Options_get_debug_serialize, (setter)mypy___options___Options_set_debug_serialize,
     NULL, NULL},
    {"mypyc",
     (getter)mypy___options___Options_get_mypyc, (setter)mypy___options___Options_set_mypyc,
     NULL, NULL},
    {"inspections",
     (getter)mypy___options___Options_get_inspections, (setter)mypy___options___Options_set_inspections,
     NULL, NULL},
    {"preserve_asts",
     (getter)mypy___options___Options_get_preserve_asts, (setter)mypy___options___Options_set_preserve_asts,
     NULL, NULL},
    {"plugins",
     (getter)mypy___options___Options_get_plugins, (setter)mypy___options___Options_set_plugins,
     NULL, NULL},
    {"per_module_options",
     (getter)mypy___options___Options_get_per_module_options, (setter)mypy___options___Options_set_per_module_options,
     NULL, NULL},
    {"_glob_options",
     (getter)mypy___options___Options_get__glob_options, (setter)mypy___options___Options_set__glob_options,
     NULL, NULL},
    {"unused_configs",
     (getter)mypy___options___Options_get_unused_configs, (setter)mypy___options___Options_set_unused_configs,
     NULL, NULL},
    {"verbosity",
     (getter)mypy___options___Options_get_verbosity, (setter)mypy___options___Options_set_verbosity,
     NULL, NULL},
    {"pdb",
     (getter)mypy___options___Options_get_pdb, (setter)mypy___options___Options_set_pdb,
     NULL, NULL},
    {"show_traceback",
     (getter)mypy___options___Options_get_show_traceback, (setter)mypy___options___Options_set_show_traceback,
     NULL, NULL},
    {"raise_exceptions",
     (getter)mypy___options___Options_get_raise_exceptions, (setter)mypy___options___Options_set_raise_exceptions,
     NULL, NULL},
    {"dump_type_stats",
     (getter)mypy___options___Options_get_dump_type_stats, (setter)mypy___options___Options_set_dump_type_stats,
     NULL, NULL},
    {"dump_inference_stats",
     (getter)mypy___options___Options_get_dump_inference_stats, (setter)mypy___options___Options_set_dump_inference_stats,
     NULL, NULL},
    {"dump_build_stats",
     (getter)mypy___options___Options_get_dump_build_stats, (setter)mypy___options___Options_set_dump_build_stats,
     NULL, NULL},
    {"enable_incomplete_features",
     (getter)mypy___options___Options_get_enable_incomplete_features, (setter)mypy___options___Options_set_enable_incomplete_features,
     NULL, NULL},
    {"enable_incomplete_feature",
     (getter)mypy___options___Options_get_enable_incomplete_feature, (setter)mypy___options___Options_set_enable_incomplete_feature,
     NULL, NULL},
    {"timing_stats",
     (getter)mypy___options___Options_get_timing_stats, (setter)mypy___options___Options_set_timing_stats,
     NULL, NULL},
    {"line_checking_stats",
     (getter)mypy___options___Options_get_line_checking_stats, (setter)mypy___options___Options_set_line_checking_stats,
     NULL, NULL},
    {"semantic_analysis_only",
     (getter)mypy___options___Options_get_semantic_analysis_only, (setter)mypy___options___Options_set_semantic_analysis_only,
     NULL, NULL},
    {"use_builtins_fixtures",
     (getter)mypy___options___Options_get_use_builtins_fixtures, (setter)mypy___options___Options_set_use_builtins_fixtures,
     NULL, NULL},
    {"shadow_file",
     (getter)mypy___options___Options_get_shadow_file, (setter)mypy___options___Options_set_shadow_file,
     NULL, NULL},
    {"show_column_numbers",
     (getter)mypy___options___Options_get_show_column_numbers, (setter)mypy___options___Options_set_show_column_numbers,
     NULL, NULL},
    {"show_error_end",
     (getter)mypy___options___Options_get_show_error_end, (setter)mypy___options___Options_set_show_error_end,
     NULL, NULL},
    {"hide_error_codes",
     (getter)mypy___options___Options_get_hide_error_codes, (setter)mypy___options___Options_set_hide_error_codes,
     NULL, NULL},
    {"show_error_code_links",
     (getter)mypy___options___Options_get_show_error_code_links, (setter)mypy___options___Options_set_show_error_code_links,
     NULL, NULL},
    {"pretty",
     (getter)mypy___options___Options_get_pretty, (setter)mypy___options___Options_set_pretty,
     NULL, NULL},
    {"dump_graph",
     (getter)mypy___options___Options_get_dump_graph, (setter)mypy___options___Options_set_dump_graph,
     NULL, NULL},
    {"dump_deps",
     (getter)mypy___options___Options_get_dump_deps, (setter)mypy___options___Options_set_dump_deps,
     NULL, NULL},
    {"logical_deps",
     (getter)mypy___options___Options_get_logical_deps, (setter)mypy___options___Options_set_logical_deps,
     NULL, NULL},
    {"local_partial_types",
     (getter)mypy___options___Options_get_local_partial_types, (setter)mypy___options___Options_set_local_partial_types,
     NULL, NULL},
    {"bazel",
     (getter)mypy___options___Options_get_bazel, (setter)mypy___options___Options_set_bazel,
     NULL, NULL},
    {"export_types",
     (getter)mypy___options___Options_get_export_types, (setter)mypy___options___Options_set_export_types,
     NULL, NULL},
    {"package_root",
     (getter)mypy___options___Options_get_package_root, (setter)mypy___options___Options_set_package_root,
     NULL, NULL},
    {"cache_map",
     (getter)mypy___options___Options_get_cache_map, (setter)mypy___options___Options_set_cache_map,
     NULL, NULL},
    {"fast_exit",
     (getter)mypy___options___Options_get_fast_exit, (setter)mypy___options___Options_set_fast_exit,
     NULL, NULL},
    {"fast_module_lookup",
     (getter)mypy___options___Options_get_fast_module_lookup, (setter)mypy___options___Options_set_fast_module_lookup,
     NULL, NULL},
    {"allow_empty_bodies",
     (getter)mypy___options___Options_get_allow_empty_bodies, (setter)mypy___options___Options_set_allow_empty_bodies,
     NULL, NULL},
    {"transform_source",
     (getter)mypy___options___Options_get_transform_source, (setter)mypy___options___Options_set_transform_source,
     NULL, NULL},
    {"show_absolute_path",
     (getter)mypy___options___Options_get_show_absolute_path, (setter)mypy___options___Options_set_show_absolute_path,
     NULL, NULL},
    {"install_types",
     (getter)mypy___options___Options_get_install_types, (setter)mypy___options___Options_set_install_types,
     NULL, NULL},
    {"non_interactive",
     (getter)mypy___options___Options_get_non_interactive, (setter)mypy___options___Options_set_non_interactive,
     NULL, NULL},
    {"many_errors_threshold",
     (getter)mypy___options___Options_get_many_errors_threshold, (setter)mypy___options___Options_set_many_errors_threshold,
     NULL, NULL},
    {"new_type_inference",
     (getter)mypy___options___Options_get_new_type_inference, (setter)mypy___options___Options_set_new_type_inference,
     NULL, NULL},
    {"disable_recursive_aliases",
     (getter)mypy___options___Options_get_disable_recursive_aliases, (setter)mypy___options___Options_set_disable_recursive_aliases,
     NULL, NULL},
    {"enable_recursive_aliases",
     (getter)mypy___options___Options_get_enable_recursive_aliases, (setter)mypy___options___Options_set_enable_recursive_aliases,
     NULL, NULL},
    {"export_ref_info",
     (getter)mypy___options___Options_get_export_ref_info, (setter)mypy___options___Options_set_export_ref_info,
     NULL, NULL},
    {"disable_bytearray_promotion",
     (getter)mypy___options___Options_get_disable_bytearray_promotion, (setter)mypy___options___Options_set_disable_bytearray_promotion,
     NULL, NULL},
    {"disable_memoryview_promotion",
     (getter)mypy___options___Options_get_disable_memoryview_promotion, (setter)mypy___options___Options_set_disable_memoryview_promotion,
     NULL, NULL},
    {"force_uppercase_builtins",
     (getter)mypy___options___Options_get_force_uppercase_builtins, (setter)mypy___options___Options_set_force_uppercase_builtins,
     NULL, NULL},
    {"force_union_syntax",
     (getter)mypy___options___Options_get_force_union_syntax, (setter)mypy___options___Options_set_force_union_syntax,
     NULL, NULL},
    {"new_semantic_analyzer",
     (getter)mypy___options___Options_get_new_semantic_analyzer,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef mypy___options___Options_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_mypy___options___Options_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"use_lowercase_names",
     (PyCFunction)CPyPy_mypy___options___Options___use_lowercase_names,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"use_or_syntax",
     (PyCFunction)CPyPy_mypy___options___Options___use_or_syntax,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"snapshot",
     (PyCFunction)CPyPy_mypy___options___Options___snapshot,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_mypy___options___Options_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"apply_changes",
     (PyCFunction)CPyPy_mypy___options___Options___apply_changes,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"compare_stable",
     (PyCFunction)CPyPy_mypy___options___Options___compare_stable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"build_per_module_cache",
     (PyCFunction)CPyPy_mypy___options___Options___build_per_module_cache,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"clone_for_module",
     (PyCFunction)CPyPy_mypy___options___Options___clone_for_module,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"compile_glob",
     (PyCFunction)CPyPy_mypy___options___Options___compile_glob,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"select_options_affecting_cache",
     (PyCFunction)CPyPy_mypy___options___Options___select_options_affecting_cache,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___options___Options_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Options",
    .tp_new = mypy___options___Options_new,
    .tp_dealloc = (destructor)mypy___options___Options_dealloc,
    .tp_traverse = (traverseproc)mypy___options___Options_traverse,
    .tp_clear = (inquiry)mypy___options___Options_clear,
    .tp_getset = mypy___options___Options_getseters,
    .tp_methods = mypy___options___Options_methods,
    .tp_init = mypy___options___Options_init,
    .tp_repr = CPyDef_mypy___options___Options_____repr__,
    .tp_basicsize = sizeof(mypy___options___OptionsObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___options___Options_template = &CPyType_mypy___options___Options_template_;

static PyObject *
mypy___options___Options_setup(PyTypeObject *type)
{
    mypy___options___OptionsObject *self;
    self = (mypy___options___OptionsObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___options___Options_vtable;
    self->_build_type = CPY_INT_TAG;
    self->_python_version = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    self->_no_silence_site_packages = 2;
    self->_no_site_packages = 2;
    self->_ignore_missing_imports = 2;
    self->_ignore_missing_imports_per_module = 2;
    self->_follow_imports_for_stubs = 2;
    self->_namespace_packages = 2;
    self->_explicit_package_bases = 2;
    self->_disallow_any_generics = 2;
    self->_disallow_any_unimported = 2;
    self->_disallow_any_expr = 2;
    self->_disallow_any_decorated = 2;
    self->_disallow_any_explicit = 2;
    self->_disallow_untyped_calls = 2;
    self->_disallow_untyped_defs = 2;
    self->_disallow_incomplete_defs = 2;
    self->_check_untyped_defs = 2;
    self->_disallow_untyped_decorators = 2;
    self->_disallow_subclassing_any = 2;
    self->_warn_incomplete_stub = 2;
    self->_warn_redundant_casts = 2;
    self->_warn_no_return = 2;
    self->_warn_return_any = 2;
    self->_warn_unused_ignores = 2;
    self->_warn_unused_configs = 2;
    self->_ignore_errors = 2;
    self->_strict_optional = 2;
    self->_show_error_context = 2;
    self->_color_output = 2;
    self->_error_summary = 2;
    self->_implicit_optional = 2;
    self->_implicit_reexport = 2;
    self->_allow_untyped_globals = 2;
    self->_allow_redefinition = 2;
    self->_strict_equality = 2;
    self->_strict_concatenate = 2;
    self->_extra_checks = 2;
    self->_warn_unreachable = 2;
    self->_scripts_are_modules = 2;
    self->_incremental = 2;
    self->_sqlite_cache = 2;
    self->_debug_cache = 2;
    self->_skip_version_check = 2;
    self->_skip_cache_mtime_checks = 2;
    self->_fine_grained_incremental = 2;
    self->_cache_fine_grained = 2;
    self->_use_fine_grained_cache = 2;
    self->_debug_serialize = 2;
    self->_mypyc = 2;
    self->_inspections = 2;
    self->_preserve_asts = 2;
    self->_verbosity = CPY_INT_TAG;
    self->_pdb = 2;
    self->_show_traceback = 2;
    self->_raise_exceptions = 2;
    self->_dump_type_stats = 2;
    self->_dump_inference_stats = 2;
    self->_dump_build_stats = 2;
    self->_enable_incomplete_features = 2;
    self->_semantic_analysis_only = 2;
    self->_use_builtins_fixtures = 2;
    self->_show_column_numbers = 2;
    self->_show_error_end = 2;
    self->_hide_error_codes = 2;
    self->_show_error_code_links = 2;
    self->_pretty = 2;
    self->_dump_graph = 2;
    self->_dump_deps = 2;
    self->_logical_deps = 2;
    self->_local_partial_types = 2;
    self->_bazel = 2;
    self->_export_types = 2;
    self->_fast_exit = 2;
    self->_fast_module_lookup = 2;
    self->_allow_empty_bodies = 2;
    self->_show_absolute_path = 2;
    self->_install_types = 2;
    self->_non_interactive = 2;
    self->_many_errors_threshold = CPY_INT_TAG;
    self->_new_type_inference = 2;
    self->_disable_recursive_aliases = 2;
    self->_enable_recursive_aliases = 2;
    self->_export_ref_info = 2;
    self->_disable_bytearray_promotion = 2;
    self->_disable_memoryview_promotion = 2;
    self->_force_uppercase_builtins = 2;
    self->_force_union_syntax = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___options___Options(void)
{
    PyObject *self = mypy___options___Options_setup(CPyType_mypy___options___Options);
    if (self == NULL)
        return NULL;
    char res = CPyDef_mypy___options___Options_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
mypy___options___Options_get__per_module_cache(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->__per_module_cache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_per_module_cache' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->__per_module_cache);
    PyObject *retval = self->__per_module_cache;
    return retval;
}

static int
mypy___options___Options_set__per_module_cache(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute '_per_module_cache' cannot be deleted");
        return -1;
    }
    if (self->__per_module_cache != NULL) {
        CPy_DECREF(self->__per_module_cache);
    }
    PyObject *tmp;
    if (PyDict_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4567;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4567;
    CPy_TypeError("dict or None", value); 
    tmp = NULL;
__LL4567: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__per_module_cache = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_build_type(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_build_type == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'build_type' of 'Options' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_build_type);
    PyObject *retval = CPyTagged_StealAsObject(self->_build_type);
    return retval;
}

static int
mypy___options___Options_set_build_type(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'build_type' cannot be deleted");
        return -1;
    }
    if (self->_build_type != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_build_type);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_build_type = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_python_version(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_python_version.f0 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'python_version' of 'Options' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_python_version.f0);
    CPyTagged_INCREF(self->_python_version.f1);
    PyObject *retval = PyTuple_New(2);
    if (unlikely(retval == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4568 = CPyTagged_StealAsObject(self->_python_version.f0);
    PyTuple_SET_ITEM(retval, 0, __tmp4568);
    PyObject *__tmp4569 = CPyTagged_StealAsObject(self->_python_version.f1);
    PyTuple_SET_ITEM(retval, 1, __tmp4569);
    return retval;
}

static int
mypy___options___Options_set_python_version(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'python_version' cannot be deleted");
        return -1;
    }
    if (self->_python_version.f0 != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_python_version.f0);
        CPyTagged_DECREF(self->_python_version.f1);
    }
    tuple_T2II tmp;
    PyObject *__tmp4570;
    if (unlikely(!(PyTuple_Check(value) && PyTuple_GET_SIZE(value) == 2))) {
        __tmp4570 = NULL;
        goto __LL4571;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(value, 0))))
        __tmp4570 = PyTuple_GET_ITEM(value, 0);
    else {
        __tmp4570 = NULL;
    }
    if (__tmp4570 == NULL) goto __LL4571;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(value, 1))))
        __tmp4570 = PyTuple_GET_ITEM(value, 1);
    else {
        __tmp4570 = NULL;
    }
    if (__tmp4570 == NULL) goto __LL4571;
    __tmp4570 = value;
__LL4571: ;
    if (unlikely(__tmp4570 == NULL)) {
        CPy_TypeError("tuple[int, int]", value); return -1;
    } else {
        PyObject *__tmp4572 = PyTuple_GET_ITEM(value, 0);
        CPyTagged __tmp4573;
        if (likely(PyLong_Check(__tmp4572)))
            __tmp4573 = CPyTagged_FromObject(__tmp4572);
        else {
            CPy_TypeError("int", __tmp4572); return -1;
        }
        tmp.f0 = __tmp4573;
        PyObject *__tmp4574 = PyTuple_GET_ITEM(value, 1);
        CPyTagged __tmp4575;
        if (likely(PyLong_Check(__tmp4574)))
            __tmp4575 = CPyTagged_FromObject(__tmp4574);
        else {
            CPy_TypeError("int", __tmp4574); return -1;
        }
        tmp.f1 = __tmp4575;
    }
    CPyTagged_INCREF(tmp.f0);
    CPyTagged_INCREF(tmp.f1);
    self->_python_version = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_python_executable(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_python_executable == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'python_executable' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_python_executable);
    PyObject *retval = self->_python_executable;
    return retval;
}

static int
mypy___options___Options_set_python_executable(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'python_executable' cannot be deleted");
        return -1;
    }
    if (self->_python_executable != NULL) {
        CPy_DECREF(self->_python_executable);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4576;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4576;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL4576: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_python_executable = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_platform(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_platform == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'platform' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_platform);
    PyObject *retval = self->_platform;
    return retval;
}

static int
mypy___options___Options_set_platform(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'platform' cannot be deleted");
        return -1;
    }
    if (self->_platform != NULL) {
        CPy_DECREF(self->_platform);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_platform = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_custom_typing_module(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_custom_typing_module == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'custom_typing_module' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_custom_typing_module);
    PyObject *retval = self->_custom_typing_module;
    return retval;
}

static int
mypy___options___Options_set_custom_typing_module(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'custom_typing_module' cannot be deleted");
        return -1;
    }
    if (self->_custom_typing_module != NULL) {
        CPy_DECREF(self->_custom_typing_module);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4577;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4577;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL4577: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_custom_typing_module = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_custom_typeshed_dir(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_custom_typeshed_dir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'custom_typeshed_dir' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_custom_typeshed_dir);
    PyObject *retval = self->_custom_typeshed_dir;
    return retval;
}

static int
mypy___options___Options_set_custom_typeshed_dir(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'custom_typeshed_dir' cannot be deleted");
        return -1;
    }
    if (self->_custom_typeshed_dir != NULL) {
        CPy_DECREF(self->_custom_typeshed_dir);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4578;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4578;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL4578: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_custom_typeshed_dir = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_abs_custom_typeshed_dir(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_abs_custom_typeshed_dir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'abs_custom_typeshed_dir' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_abs_custom_typeshed_dir);
    PyObject *retval = self->_abs_custom_typeshed_dir;
    return retval;
}

static int
mypy___options___Options_set_abs_custom_typeshed_dir(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'abs_custom_typeshed_dir' cannot be deleted");
        return -1;
    }
    if (self->_abs_custom_typeshed_dir != NULL) {
        CPy_DECREF(self->_abs_custom_typeshed_dir);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4579;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4579;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL4579: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_abs_custom_typeshed_dir = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_mypy_path(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_mypy_path == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'mypy_path' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_mypy_path);
    PyObject *retval = self->_mypy_path;
    return retval;
}

static int
mypy___options___Options_set_mypy_path(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'mypy_path' cannot be deleted");
        return -1;
    }
    if (self->_mypy_path != NULL) {
        CPy_DECREF(self->_mypy_path);
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
    self->_mypy_path = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_report_dirs(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_report_dirs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'report_dirs' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_report_dirs);
    PyObject *retval = self->_report_dirs;
    return retval;
}

static int
mypy___options___Options_set_report_dirs(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'report_dirs' cannot be deleted");
        return -1;
    }
    if (self->_report_dirs != NULL) {
        CPy_DECREF(self->_report_dirs);
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
    self->_report_dirs = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_no_silence_site_packages(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_no_silence_site_packages ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_no_silence_site_packages(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'no_silence_site_packages' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_no_silence_site_packages = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_no_site_packages(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_no_site_packages ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_no_site_packages(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'no_site_packages' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_no_site_packages = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_ignore_missing_imports(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_ignore_missing_imports ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_ignore_missing_imports(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'ignore_missing_imports' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_ignore_missing_imports = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_ignore_missing_imports_per_module(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_ignore_missing_imports_per_module ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_ignore_missing_imports_per_module(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'ignore_missing_imports_per_module' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_ignore_missing_imports_per_module = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_follow_imports(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_follow_imports == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'follow_imports' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_follow_imports);
    PyObject *retval = self->_follow_imports;
    return retval;
}

static int
mypy___options___Options_set_follow_imports(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'follow_imports' cannot be deleted");
        return -1;
    }
    if (self->_follow_imports != NULL) {
        CPy_DECREF(self->_follow_imports);
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
    self->_follow_imports = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_follow_imports_for_stubs(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_follow_imports_for_stubs ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_follow_imports_for_stubs(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'follow_imports_for_stubs' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_follow_imports_for_stubs = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_namespace_packages(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_namespace_packages ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_namespace_packages(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'namespace_packages' cannot be deleted");
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
mypy___options___Options_get_explicit_package_bases(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_explicit_package_bases ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_explicit_package_bases(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'explicit_package_bases' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_explicit_package_bases = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_exclude(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_exclude == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'exclude' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_exclude);
    PyObject *retval = self->_exclude;
    return retval;
}

static int
mypy___options___Options_set_exclude(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'exclude' cannot be deleted");
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
mypy___options___Options_get_disallow_any_generics(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_disallow_any_generics ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_disallow_any_generics(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disallow_any_generics' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_disallow_any_generics = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_disallow_any_unimported(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_disallow_any_unimported ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_disallow_any_unimported(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disallow_any_unimported' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_disallow_any_unimported = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_disallow_any_expr(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_disallow_any_expr ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_disallow_any_expr(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disallow_any_expr' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_disallow_any_expr = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_disallow_any_decorated(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_disallow_any_decorated ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_disallow_any_decorated(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disallow_any_decorated' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_disallow_any_decorated = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_disallow_any_explicit(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_disallow_any_explicit ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_disallow_any_explicit(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disallow_any_explicit' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_disallow_any_explicit = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_disallow_untyped_calls(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_disallow_untyped_calls ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_disallow_untyped_calls(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disallow_untyped_calls' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_disallow_untyped_calls = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_disallow_untyped_defs(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_disallow_untyped_defs ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_disallow_untyped_defs(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disallow_untyped_defs' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_disallow_untyped_defs = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_disallow_incomplete_defs(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_disallow_incomplete_defs ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_disallow_incomplete_defs(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disallow_incomplete_defs' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_disallow_incomplete_defs = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_check_untyped_defs(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_check_untyped_defs ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_check_untyped_defs(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'check_untyped_defs' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_check_untyped_defs = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_disallow_untyped_decorators(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_disallow_untyped_decorators ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_disallow_untyped_decorators(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disallow_untyped_decorators' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_disallow_untyped_decorators = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_disallow_subclassing_any(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_disallow_subclassing_any ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_disallow_subclassing_any(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disallow_subclassing_any' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_disallow_subclassing_any = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_warn_incomplete_stub(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_warn_incomplete_stub ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_warn_incomplete_stub(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'warn_incomplete_stub' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_warn_incomplete_stub = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_warn_redundant_casts(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_warn_redundant_casts ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_warn_redundant_casts(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'warn_redundant_casts' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_warn_redundant_casts = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_warn_no_return(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_warn_no_return ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_warn_no_return(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'warn_no_return' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_warn_no_return = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_warn_return_any(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_warn_return_any ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_warn_return_any(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'warn_return_any' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_warn_return_any = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_warn_unused_ignores(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_warn_unused_ignores ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_warn_unused_ignores(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'warn_unused_ignores' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_warn_unused_ignores = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_warn_unused_configs(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_warn_unused_configs ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_warn_unused_configs(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'warn_unused_configs' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_warn_unused_configs = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_ignore_errors(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_ignore_errors ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_ignore_errors(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'ignore_errors' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_ignore_errors = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_strict_optional(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_strict_optional ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_strict_optional(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'strict_optional' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_strict_optional = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_show_error_context(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_show_error_context ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_show_error_context(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'show_error_context' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_show_error_context = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_color_output(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_color_output ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_color_output(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'color_output' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_color_output = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_error_summary(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_error_summary ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_error_summary(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'error_summary' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_error_summary = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_implicit_optional(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_implicit_optional ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_implicit_optional(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'implicit_optional' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_implicit_optional = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_implicit_reexport(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_implicit_reexport ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_implicit_reexport(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'implicit_reexport' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_implicit_reexport = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_allow_untyped_globals(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_allow_untyped_globals ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_allow_untyped_globals(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'allow_untyped_globals' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_allow_untyped_globals = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_allow_redefinition(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_allow_redefinition ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_allow_redefinition(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'allow_redefinition' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_allow_redefinition = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_strict_equality(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_strict_equality ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_strict_equality(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'strict_equality' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_strict_equality = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_strict_concatenate(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_strict_concatenate ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_strict_concatenate(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'strict_concatenate' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_strict_concatenate = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_extra_checks(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_extra_checks ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_extra_checks(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'extra_checks' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_extra_checks = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_warn_unreachable(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_warn_unreachable ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_warn_unreachable(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'warn_unreachable' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_warn_unreachable = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_always_true(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_always_true == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'always_true' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_always_true);
    PyObject *retval = self->_always_true;
    return retval;
}

static int
mypy___options___Options_set_always_true(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'always_true' cannot be deleted");
        return -1;
    }
    if (self->_always_true != NULL) {
        CPy_DECREF(self->_always_true);
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
    self->_always_true = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_always_false(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_always_false == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'always_false' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_always_false);
    PyObject *retval = self->_always_false;
    return retval;
}

static int
mypy___options___Options_set_always_false(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'always_false' cannot be deleted");
        return -1;
    }
    if (self->_always_false != NULL) {
        CPy_DECREF(self->_always_false);
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
    self->_always_false = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_disable_error_code(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_disable_error_code == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'disable_error_code' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_disable_error_code);
    PyObject *retval = self->_disable_error_code;
    return retval;
}

static int
mypy___options___Options_set_disable_error_code(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disable_error_code' cannot be deleted");
        return -1;
    }
    if (self->_disable_error_code != NULL) {
        CPy_DECREF(self->_disable_error_code);
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
    self->_disable_error_code = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_disabled_error_codes(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_disabled_error_codes == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'disabled_error_codes' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_disabled_error_codes);
    PyObject *retval = self->_disabled_error_codes;
    return retval;
}

static int
mypy___options___Options_set_disabled_error_codes(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disabled_error_codes' cannot be deleted");
        return -1;
    }
    if (self->_disabled_error_codes != NULL) {
        CPy_DECREF(self->_disabled_error_codes);
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
    self->_disabled_error_codes = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_enable_error_code(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_enable_error_code == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'enable_error_code' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_enable_error_code);
    PyObject *retval = self->_enable_error_code;
    return retval;
}

static int
mypy___options___Options_set_enable_error_code(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'enable_error_code' cannot be deleted");
        return -1;
    }
    if (self->_enable_error_code != NULL) {
        CPy_DECREF(self->_enable_error_code);
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
    self->_enable_error_code = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_enabled_error_codes(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_enabled_error_codes == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'enabled_error_codes' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_enabled_error_codes);
    PyObject *retval = self->_enabled_error_codes;
    return retval;
}

static int
mypy___options___Options_set_enabled_error_codes(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'enabled_error_codes' cannot be deleted");
        return -1;
    }
    if (self->_enabled_error_codes != NULL) {
        CPy_DECREF(self->_enabled_error_codes);
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
    self->_enabled_error_codes = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_scripts_are_modules(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_scripts_are_modules ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_scripts_are_modules(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'scripts_are_modules' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_scripts_are_modules = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_config_file(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_config_file == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'config_file' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_config_file);
    PyObject *retval = self->_config_file;
    return retval;
}

static int
mypy___options___Options_set_config_file(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'config_file' cannot be deleted");
        return -1;
    }
    if (self->_config_file != NULL) {
        CPy_DECREF(self->_config_file);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4580;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4580;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL4580: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_config_file = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_quickstart_file(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_quickstart_file == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'quickstart_file' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_quickstart_file);
    PyObject *retval = self->_quickstart_file;
    return retval;
}

static int
mypy___options___Options_set_quickstart_file(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'quickstart_file' cannot be deleted");
        return -1;
    }
    if (self->_quickstart_file != NULL) {
        CPy_DECREF(self->_quickstart_file);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4581;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4581;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL4581: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_quickstart_file = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_files(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_files == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'files' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_files);
    PyObject *retval = self->_files;
    return retval;
}

static int
mypy___options___Options_set_files(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'files' cannot be deleted");
        return -1;
    }
    if (self->_files != NULL) {
        CPy_DECREF(self->_files);
    }
    PyObject *tmp;
    if (PyList_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4582;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4582;
    CPy_TypeError("list or None", value); 
    tmp = NULL;
__LL4582: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_files = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_packages(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_packages == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'packages' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_packages);
    PyObject *retval = self->_packages;
    return retval;
}

static int
mypy___options___Options_set_packages(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'packages' cannot be deleted");
        return -1;
    }
    if (self->_packages != NULL) {
        CPy_DECREF(self->_packages);
    }
    PyObject *tmp;
    if (PyList_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4583;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4583;
    CPy_TypeError("list or None", value); 
    tmp = NULL;
__LL4583: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_packages = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_modules(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_modules == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'modules' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_modules);
    PyObject *retval = self->_modules;
    return retval;
}

static int
mypy___options___Options_set_modules(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'modules' cannot be deleted");
        return -1;
    }
    if (self->_modules != NULL) {
        CPy_DECREF(self->_modules);
    }
    PyObject *tmp;
    if (PyList_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4584;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4584;
    CPy_TypeError("list or None", value); 
    tmp = NULL;
__LL4584: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_modules = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_junit_xml(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_junit_xml == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'junit_xml' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_junit_xml);
    PyObject *retval = self->_junit_xml;
    return retval;
}

static int
mypy___options___Options_set_junit_xml(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'junit_xml' cannot be deleted");
        return -1;
    }
    if (self->_junit_xml != NULL) {
        CPy_DECREF(self->_junit_xml);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4585;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4585;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL4585: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_junit_xml = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_incremental(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_incremental ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_incremental(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'incremental' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_incremental = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_cache_dir(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_cache_dir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'cache_dir' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_cache_dir);
    PyObject *retval = self->_cache_dir;
    return retval;
}

static int
mypy___options___Options_set_cache_dir(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'cache_dir' cannot be deleted");
        return -1;
    }
    if (self->_cache_dir != NULL) {
        CPy_DECREF(self->_cache_dir);
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
    self->_cache_dir = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_sqlite_cache(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_sqlite_cache ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_sqlite_cache(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'sqlite_cache' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_sqlite_cache = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_debug_cache(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_debug_cache ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_debug_cache(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'debug_cache' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_debug_cache = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_skip_version_check(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_skip_version_check ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_skip_version_check(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'skip_version_check' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_skip_version_check = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_skip_cache_mtime_checks(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_skip_cache_mtime_checks ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_skip_cache_mtime_checks(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'skip_cache_mtime_checks' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_skip_cache_mtime_checks = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_fine_grained_incremental(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_fine_grained_incremental ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_fine_grained_incremental(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'fine_grained_incremental' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_fine_grained_incremental = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_cache_fine_grained(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_cache_fine_grained ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_cache_fine_grained(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'cache_fine_grained' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_cache_fine_grained = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_use_fine_grained_cache(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_use_fine_grained_cache ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_use_fine_grained_cache(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'use_fine_grained_cache' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_use_fine_grained_cache = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_debug_serialize(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_debug_serialize ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_debug_serialize(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'debug_serialize' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_debug_serialize = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_mypyc(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_mypyc ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_mypyc(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'mypyc' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_mypyc = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_inspections(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_inspections ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_inspections(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'inspections' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_inspections = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_preserve_asts(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_preserve_asts ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_preserve_asts(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'preserve_asts' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_preserve_asts = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_plugins(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_plugins == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'plugins' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_plugins);
    PyObject *retval = self->_plugins;
    return retval;
}

static int
mypy___options___Options_set_plugins(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'plugins' cannot be deleted");
        return -1;
    }
    if (self->_plugins != NULL) {
        CPy_DECREF(self->_plugins);
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
    self->_plugins = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_per_module_options(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_per_module_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'per_module_options' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_per_module_options);
    PyObject *retval = self->_per_module_options;
    return retval;
}

static int
mypy___options___Options_set_per_module_options(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'per_module_options' cannot be deleted");
        return -1;
    }
    if (self->_per_module_options != NULL) {
        CPy_DECREF(self->_per_module_options);
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
    self->_per_module_options = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get__glob_options(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->__glob_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_glob_options' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->__glob_options);
    PyObject *retval = self->__glob_options;
    return retval;
}

static int
mypy___options___Options_set__glob_options(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute '_glob_options' cannot be deleted");
        return -1;
    }
    if (self->__glob_options != NULL) {
        CPy_DECREF(self->__glob_options);
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
    self->__glob_options = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_unused_configs(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_unused_configs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'unused_configs' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_unused_configs);
    PyObject *retval = self->_unused_configs;
    return retval;
}

static int
mypy___options___Options_set_unused_configs(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'unused_configs' cannot be deleted");
        return -1;
    }
    if (self->_unused_configs != NULL) {
        CPy_DECREF(self->_unused_configs);
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
    self->_unused_configs = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_verbosity(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_verbosity == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'verbosity' of 'Options' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_verbosity);
    PyObject *retval = CPyTagged_StealAsObject(self->_verbosity);
    return retval;
}

static int
mypy___options___Options_set_verbosity(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'verbosity' cannot be deleted");
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

static PyObject *
mypy___options___Options_get_pdb(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_pdb ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_pdb(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'pdb' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_pdb = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_show_traceback(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_show_traceback ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_show_traceback(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'show_traceback' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_show_traceback = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_raise_exceptions(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_raise_exceptions ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_raise_exceptions(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'raise_exceptions' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_raise_exceptions = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_dump_type_stats(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_dump_type_stats ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_dump_type_stats(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'dump_type_stats' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_dump_type_stats = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_dump_inference_stats(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_dump_inference_stats ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_dump_inference_stats(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'dump_inference_stats' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_dump_inference_stats = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_dump_build_stats(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_dump_build_stats ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_dump_build_stats(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'dump_build_stats' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_dump_build_stats = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_enable_incomplete_features(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_enable_incomplete_features ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_enable_incomplete_features(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'enable_incomplete_features' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_enable_incomplete_features = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_enable_incomplete_feature(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_enable_incomplete_feature == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'enable_incomplete_feature' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_enable_incomplete_feature);
    PyObject *retval = self->_enable_incomplete_feature;
    return retval;
}

static int
mypy___options___Options_set_enable_incomplete_feature(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'enable_incomplete_feature' cannot be deleted");
        return -1;
    }
    if (self->_enable_incomplete_feature != NULL) {
        CPy_DECREF(self->_enable_incomplete_feature);
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
    self->_enable_incomplete_feature = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_timing_stats(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_timing_stats == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'timing_stats' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_timing_stats);
    PyObject *retval = self->_timing_stats;
    return retval;
}

static int
mypy___options___Options_set_timing_stats(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'timing_stats' cannot be deleted");
        return -1;
    }
    if (self->_timing_stats != NULL) {
        CPy_DECREF(self->_timing_stats);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4586;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4586;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL4586: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_timing_stats = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_line_checking_stats(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_line_checking_stats == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'line_checking_stats' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_line_checking_stats);
    PyObject *retval = self->_line_checking_stats;
    return retval;
}

static int
mypy___options___Options_set_line_checking_stats(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'line_checking_stats' cannot be deleted");
        return -1;
    }
    if (self->_line_checking_stats != NULL) {
        CPy_DECREF(self->_line_checking_stats);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4587;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4587;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL4587: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_line_checking_stats = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_semantic_analysis_only(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_semantic_analysis_only ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_semantic_analysis_only(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'semantic_analysis_only' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_semantic_analysis_only = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_use_builtins_fixtures(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_use_builtins_fixtures ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_use_builtins_fixtures(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'use_builtins_fixtures' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_use_builtins_fixtures = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_shadow_file(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_shadow_file == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'shadow_file' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_shadow_file);
    PyObject *retval = self->_shadow_file;
    return retval;
}

static int
mypy___options___Options_set_shadow_file(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'shadow_file' cannot be deleted");
        return -1;
    }
    if (self->_shadow_file != NULL) {
        CPy_DECREF(self->_shadow_file);
    }
    PyObject *tmp;
    if (PyList_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4588;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4588;
    CPy_TypeError("list or None", value); 
    tmp = NULL;
__LL4588: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_shadow_file = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_show_column_numbers(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_show_column_numbers ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_show_column_numbers(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'show_column_numbers' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_show_column_numbers = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_show_error_end(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_show_error_end ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_show_error_end(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'show_error_end' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_show_error_end = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_hide_error_codes(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_hide_error_codes ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_hide_error_codes(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'hide_error_codes' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_hide_error_codes = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_show_error_code_links(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_show_error_code_links ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_show_error_code_links(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'show_error_code_links' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_show_error_code_links = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_pretty(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_pretty ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_pretty(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'pretty' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_pretty = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_dump_graph(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_dump_graph ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_dump_graph(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'dump_graph' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_dump_graph = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_dump_deps(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_dump_deps ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_dump_deps(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'dump_deps' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_dump_deps = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_logical_deps(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_logical_deps ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_logical_deps(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'logical_deps' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_logical_deps = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_local_partial_types(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_local_partial_types ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_local_partial_types(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'local_partial_types' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_local_partial_types = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_bazel(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_bazel ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_bazel(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'bazel' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_bazel = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_export_types(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_export_types ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_export_types(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'export_types' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_export_types = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_package_root(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_package_root == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'package_root' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_package_root);
    PyObject *retval = self->_package_root;
    return retval;
}

static int
mypy___options___Options_set_package_root(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'package_root' cannot be deleted");
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
mypy___options___Options_get_cache_map(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_cache_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'cache_map' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_cache_map);
    PyObject *retval = self->_cache_map;
    return retval;
}

static int
mypy___options___Options_set_cache_map(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'cache_map' cannot be deleted");
        return -1;
    }
    if (self->_cache_map != NULL) {
        CPy_DECREF(self->_cache_map);
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
    self->_cache_map = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_fast_exit(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_fast_exit ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_fast_exit(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'fast_exit' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_fast_exit = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_fast_module_lookup(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_fast_module_lookup ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_fast_module_lookup(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'fast_module_lookup' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_fast_module_lookup = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_allow_empty_bodies(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_allow_empty_bodies ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_allow_empty_bodies(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'allow_empty_bodies' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_allow_empty_bodies = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_transform_source(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_transform_source == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'transform_source' of 'Options' undefined");
        return NULL;
    }
    CPy_INCREF(self->_transform_source);
    PyObject *retval = self->_transform_source;
    return retval;
}

static int
mypy___options___Options_set_transform_source(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'transform_source' cannot be deleted");
        return -1;
    }
    if (self->_transform_source != NULL) {
        CPy_DECREF(self->_transform_source);
    }
    PyObject *tmp;
    tmp = value;
    if (tmp != NULL) goto __LL4589;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4589;
    CPy_TypeError("object or None", value); 
    tmp = NULL;
__LL4589: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_transform_source = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_show_absolute_path(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_show_absolute_path ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_show_absolute_path(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'show_absolute_path' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_show_absolute_path = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_install_types(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_install_types ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_install_types(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'install_types' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_install_types = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_non_interactive(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_non_interactive ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_non_interactive(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'non_interactive' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_non_interactive = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_many_errors_threshold(mypy___options___OptionsObject *self, void *closure)
{
    if (unlikely(self->_many_errors_threshold == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'many_errors_threshold' of 'Options' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_many_errors_threshold);
    PyObject *retval = CPyTagged_StealAsObject(self->_many_errors_threshold);
    return retval;
}

static int
mypy___options___Options_set_many_errors_threshold(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'many_errors_threshold' cannot be deleted");
        return -1;
    }
    if (self->_many_errors_threshold != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_many_errors_threshold);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_many_errors_threshold = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_new_type_inference(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_new_type_inference ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_new_type_inference(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'new_type_inference' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_new_type_inference = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_disable_recursive_aliases(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_disable_recursive_aliases ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_disable_recursive_aliases(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disable_recursive_aliases' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_disable_recursive_aliases = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_enable_recursive_aliases(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_enable_recursive_aliases ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_enable_recursive_aliases(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'enable_recursive_aliases' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_enable_recursive_aliases = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_export_ref_info(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_export_ref_info ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_export_ref_info(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'export_ref_info' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_export_ref_info = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_disable_bytearray_promotion(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_disable_bytearray_promotion ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_disable_bytearray_promotion(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disable_bytearray_promotion' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_disable_bytearray_promotion = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_disable_memoryview_promotion(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_disable_memoryview_promotion ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_disable_memoryview_promotion(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'disable_memoryview_promotion' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_disable_memoryview_promotion = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_force_uppercase_builtins(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_force_uppercase_builtins ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_force_uppercase_builtins(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'force_uppercase_builtins' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_force_uppercase_builtins = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_force_union_syntax(mypy___options___OptionsObject *self, void *closure)
{
    PyObject *retval = self->_force_union_syntax ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___options___Options_set_force_union_syntax(mypy___options___OptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Options' object attribute 'force_union_syntax' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_force_union_syntax = tmp;
    return 0;
}

static PyObject *
mypy___options___Options_get_new_semantic_analyzer(mypy___options___OptionsObject *self, void *closure)
{
    char retval = CPyDef_mypy___options___Options___new_semantic_analyzer((PyObject *) self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
}
static PyMethodDef mypy___optionsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mypy___optionsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.options",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mypy___optionsmodule_methods
};

PyObject *CPyInit_mypy___options(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___options_internal) {
        Py_INCREF(CPyModule_mypy___options_internal);
        return CPyModule_mypy___options_internal;
    }
    CPyModule_mypy___options_internal = PyModule_Create(&mypy___optionsmodule);
    if (unlikely(CPyModule_mypy___options_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___options_internal, "__name__");
    CPyStatic_mypy___options___globals = PyModule_GetDict(CPyModule_mypy___options_internal);
    if (unlikely(CPyStatic_mypy___options___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mypy___options_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___options_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___options_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_mypy___options___PER_MODULE_OPTIONS);
    CPyStatic_mypy___options___PER_MODULE_OPTIONS = NULL;
    CPy_XDECREF(CPyStatic_mypy___options___OPTIONS_AFFECTING_CACHE);
    CPyStatic_mypy___options___OPTIONS_AFFECTING_CACHE = NULL;
    CPy_XDECREF(CPyStatic_mypy___options___INCOMPLETE_FEATURES);
    CPyStatic_mypy___options___INCOMPLETE_FEATURES = NULL;
    Py_CLEAR(CPyType_mypy___options___BuildType);
    Py_CLEAR(CPyType_mypy___options___Options);
    return NULL;
}

char CPyDef_mypy___options___BuildType_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    ((mypy___options___BuildTypeObject *)cpy_r___mypyc_self__)->_STANDARD = 0;
    ((mypy___options___BuildTypeObject *)cpy_r___mypyc_self__)->_MODULE = 2;
    ((mypy___options___BuildTypeObject *)cpy_r___mypyc_self__)->_PROGRAM_TEXT = 4;
    return 1;
}

PyObject *CPyPy_mypy___options___BuildType_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_mypy___options___BuildType))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.options.BuildType", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_mypy___options___BuildType_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/options.py", "__mypyc_defaults_setup", -1, CPyStatic_mypy___options___globals);
    return NULL;
}

char CPyDef_mypy___options___Options_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2II cpy_r_r7;
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
    PyObject *cpy_r_MACHDEP;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
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
    char cpy_r_r59;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    ((mypy___options___OptionsObject *)cpy_r_self)->__per_module_cache = cpy_r_r0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_build_type = 0;
    cpy_r_r1 = CPyModule_sys;
    cpy_r_r2 = CPyStatics[1562]; /* 'version_info' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 86, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    if (likely(PyTuple_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "__init__", 86, CPyStatic_mypy___options___globals, "tuple", cpy_r_r3);
        goto CPyL33;
    }
    cpy_r_r5 = CPySequenceTuple_GetSlice(cpy_r_r4, 0, 4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 86, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    if (likely(PyTuple_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "__init__", 86, CPyStatic_mypy___options___globals, "tuple", cpy_r_r5);
        goto CPyL33;
    }
    PyObject *__tmp4590;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp4590 = NULL;
        goto __LL4591;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp4590 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp4590 = NULL;
    }
    if (__tmp4590 == NULL) goto __LL4591;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r6, 1))))
        __tmp4590 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp4590 = NULL;
    }
    if (__tmp4590 == NULL) goto __LL4591;
    __tmp4590 = cpy_r_r6;
__LL4591: ;
    if (unlikely(__tmp4590 == NULL)) {
        CPy_TypeError("tuple[int, int]", cpy_r_r6); cpy_r_r7 = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    } else {
        PyObject *__tmp4592 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPyTagged __tmp4593;
        if (likely(PyLong_Check(__tmp4592)))
            __tmp4593 = CPyTagged_FromObject(__tmp4592);
        else {
            CPy_TypeError("int", __tmp4592); __tmp4593 = CPY_INT_TAG;
        }
        cpy_r_r7.f0 = __tmp4593;
        PyObject *__tmp4594 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPyTagged __tmp4595;
        if (likely(PyLong_Check(__tmp4594)))
            __tmp4595 = CPyTagged_FromObject(__tmp4594);
        else {
            CPy_TypeError("int", __tmp4594); __tmp4595 = CPY_INT_TAG;
        }
        cpy_r_r7.f1 = __tmp4595;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 86, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_python_version = cpy_r_r7;
    cpy_r_r8 = CPyModule_sys;
    cpy_r_r9 = CPyStatics[425]; /* 'executable' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 89, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "__init__", 89, CPyStatic_mypy___options___globals, "str", cpy_r_r10);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_python_executable = cpy_r_r11;
    cpy_r_r12 = CPyStatics[4222]; /* 'MACHDEP' */
    cpy_r_r13 = CPyModule_sysconfig;
    cpy_r_r14 = CPyStatics[4223]; /* 'get_config_var' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 93, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r16[1] = {cpy_r_r12};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 1, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 93, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    cpy_r_MACHDEP = cpy_r_r18;
    cpy_r_r19 = CPyStatics[4224]; /* 'emscripten' */
    cpy_r_r20 = PyObject_RichCompare(cpy_r_MACHDEP, cpy_r_r19, 2);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 94, CPyStatic_mypy___options___globals);
        goto CPyL34;
    }
    cpy_r_r21 = PyObject_IsTrue(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 94, CPyStatic_mypy___options___globals);
        goto CPyL34;
    }
    cpy_r_r23 = cpy_r_r21;
    if (!cpy_r_r23) goto CPyL35;
    ((mypy___options___OptionsObject *)cpy_r_self)->_platform = cpy_r_MACHDEP;
    goto CPyL16;
CPyL13: ;
    cpy_r_r24 = CPyModule_sys;
    cpy_r_r25 = CPyStatics[305]; /* 'platform' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 97, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    if (likely(PyUnicode_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "__init__", 97, CPyStatic_mypy___options___globals, "str", cpy_r_r26);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_platform = cpy_r_r27;
CPyL16: ;
    cpy_r_r28 = Py_None;
    CPy_INCREF(cpy_r_r28);
    ((mypy___options___OptionsObject *)cpy_r_self)->_custom_typing_module = cpy_r_r28;
    cpy_r_r29 = Py_None;
    CPy_INCREF(cpy_r_r29);
    ((mypy___options___OptionsObject *)cpy_r_self)->_custom_typeshed_dir = cpy_r_r29;
    cpy_r_r30 = Py_None;
    CPy_INCREF(cpy_r_r30);
    ((mypy___options___OptionsObject *)cpy_r_self)->_abs_custom_typeshed_dir = cpy_r_r30;
    cpy_r_r31 = PyList_New(0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 103, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_mypy_path = cpy_r_r31;
    cpy_r_r32 = PyDict_New();
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 104, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_report_dirs = cpy_r_r32;
    ((mypy___options___OptionsObject *)cpy_r_self)->_no_silence_site_packages = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_no_site_packages = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_ignore_missing_imports = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_ignore_missing_imports_per_module = 0;
    cpy_r_r33 = CPyStatics[398]; /* 'normal' */
    CPy_INCREF(cpy_r_r33);
    ((mypy___options___OptionsObject *)cpy_r_self)->_follow_imports = cpy_r_r33;
    ((mypy___options___OptionsObject *)cpy_r_self)->_follow_imports_for_stubs = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_namespace_packages = 1;
    ((mypy___options___OptionsObject *)cpy_r_self)->_explicit_package_bases = 0;
    cpy_r_r34 = PyList_New(0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 127, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_exclude = cpy_r_r34;
    ((mypy___options___OptionsObject *)cpy_r_self)->_disallow_any_generics = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_disallow_any_unimported = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_disallow_any_expr = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_disallow_any_decorated = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_disallow_any_explicit = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_disallow_untyped_calls = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_disallow_untyped_defs = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_disallow_incomplete_defs = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_check_untyped_defs = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_disallow_untyped_decorators = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_disallow_subclassing_any = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_warn_incomplete_stub = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_warn_redundant_casts = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_warn_no_return = 1;
    ((mypy___options___OptionsObject *)cpy_r_self)->_warn_return_any = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_warn_unused_ignores = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_warn_unused_configs = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_ignore_errors = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_strict_optional = 1;
    ((mypy___options___OptionsObject *)cpy_r_self)->_show_error_context = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_color_output = 1;
    ((mypy___options___OptionsObject *)cpy_r_self)->_error_summary = 1;
    ((mypy___options___OptionsObject *)cpy_r_self)->_implicit_optional = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_implicit_reexport = 1;
    ((mypy___options___OptionsObject *)cpy_r_self)->_allow_untyped_globals = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_allow_redefinition = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_strict_equality = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_strict_concatenate = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_extra_checks = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_warn_unreachable = 0;
    cpy_r_r35 = PyList_New(0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 214, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_always_true = cpy_r_r35;
    cpy_r_r36 = PyList_New(0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 217, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_always_false = cpy_r_r36;
    cpy_r_r37 = PyList_New(0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 220, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_disable_error_code = cpy_r_r37;
    cpy_r_r38 = PySet_New(NULL);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 221, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_disabled_error_codes = cpy_r_r38;
    cpy_r_r39 = PyList_New(0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 224, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_enable_error_code = cpy_r_r39;
    cpy_r_r40 = PySet_New(NULL);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 225, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_enabled_error_codes = cpy_r_r40;
    ((mypy___options___OptionsObject *)cpy_r_self)->_scripts_are_modules = 0;
    cpy_r_r41 = Py_None;
    CPy_INCREF(cpy_r_r41);
    ((mypy___options___OptionsObject *)cpy_r_self)->_config_file = cpy_r_r41;
    cpy_r_r42 = Py_None;
    CPy_INCREF(cpy_r_r42);
    ((mypy___options___OptionsObject *)cpy_r_self)->_quickstart_file = cpy_r_r42;
    cpy_r_r43 = Py_None;
    CPy_INCREF(cpy_r_r43);
    ((mypy___options___OptionsObject *)cpy_r_self)->_files = cpy_r_r43;
    cpy_r_r44 = Py_None;
    CPy_INCREF(cpy_r_r44);
    ((mypy___options___OptionsObject *)cpy_r_self)->_packages = cpy_r_r44;
    cpy_r_r45 = Py_None;
    CPy_INCREF(cpy_r_r45);
    ((mypy___options___OptionsObject *)cpy_r_self)->_modules = cpy_r_r45;
    cpy_r_r46 = Py_None;
    CPy_INCREF(cpy_r_r46);
    ((mypy___options___OptionsObject *)cpy_r_self)->_junit_xml = cpy_r_r46;
    ((mypy___options___OptionsObject *)cpy_r_self)->_incremental = 1;
    cpy_r_r47 = CPyStatics[1642]; /* '.mypy_cache' */
    CPy_INCREF(cpy_r_r47);
    ((mypy___options___OptionsObject *)cpy_r_self)->_cache_dir = cpy_r_r47;
    ((mypy___options___OptionsObject *)cpy_r_self)->_sqlite_cache = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_debug_cache = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_skip_version_check = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_skip_cache_mtime_checks = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_fine_grained_incremental = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_cache_fine_grained = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_use_fine_grained_cache = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_debug_serialize = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_mypyc = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_inspections = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_preserve_asts = 0;
    cpy_r_r48 = PyList_New(0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 283, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_plugins = cpy_r_r48;
    cpy_r_r49 = PyDict_New();
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 286, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_per_module_options = cpy_r_r49;
    cpy_r_r50 = PyList_New(0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 287, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->__glob_options = cpy_r_r50;
    cpy_r_r51 = PySet_New(NULL);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 288, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_unused_configs = cpy_r_r51;
    ((mypy___options___OptionsObject *)cpy_r_self)->_verbosity = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_pdb = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_show_traceback = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_raise_exceptions = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_dump_type_stats = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_dump_inference_stats = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_dump_build_stats = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_enable_incomplete_features = 0;
    cpy_r_r52 = PyList_New(0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 299, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_enable_incomplete_feature = cpy_r_r52;
    cpy_r_r53 = Py_None;
    CPy_INCREF(cpy_r_r53);
    ((mypy___options___OptionsObject *)cpy_r_self)->_timing_stats = cpy_r_r53;
    cpy_r_r54 = Py_None;
    CPy_INCREF(cpy_r_r54);
    ((mypy___options___OptionsObject *)cpy_r_self)->_line_checking_stats = cpy_r_r54;
    ((mypy___options___OptionsObject *)cpy_r_self)->_semantic_analysis_only = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_use_builtins_fixtures = 0;
    cpy_r_r55 = Py_None;
    CPy_INCREF(cpy_r_r55);
    ((mypy___options___OptionsObject *)cpy_r_self)->_shadow_file = cpy_r_r55;
    ((mypy___options___OptionsObject *)cpy_r_self)->_show_column_numbers = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_show_error_end = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_hide_error_codes = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_show_error_code_links = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_pretty = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_dump_graph = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_dump_deps = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_logical_deps = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_local_partial_types = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_bazel = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_export_types = 0;
    cpy_r_r56 = PyList_New(0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 329, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_package_root = cpy_r_r56;
    cpy_r_r57 = PyDict_New();
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__init__", 330, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    ((mypy___options___OptionsObject *)cpy_r_self)->_cache_map = cpy_r_r57;
    ((mypy___options___OptionsObject *)cpy_r_self)->_fast_exit = 1;
    ((mypy___options___OptionsObject *)cpy_r_self)->_fast_module_lookup = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_allow_empty_bodies = 0;
    cpy_r_r58 = Py_None;
    CPy_INCREF(cpy_r_r58);
    ((mypy___options___OptionsObject *)cpy_r_self)->_transform_source = cpy_r_r58;
    ((mypy___options___OptionsObject *)cpy_r_self)->_show_absolute_path = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_install_types = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_non_interactive = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_many_errors_threshold = -2;
    ((mypy___options___OptionsObject *)cpy_r_self)->_new_type_inference = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_disable_recursive_aliases = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_enable_recursive_aliases = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_export_ref_info = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_disable_bytearray_promotion = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_disable_memoryview_promotion = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_force_uppercase_builtins = 0;
    ((mypy___options___OptionsObject *)cpy_r_self)->_force_union_syntax = 0;
    return 1;
CPyL33: ;
    cpy_r_r59 = 2;
    return cpy_r_r59;
CPyL34: ;
    CPy_DecRef(cpy_r_MACHDEP);
    goto CPyL33;
CPyL35: ;
    CPy_DECREF(cpy_r_MACHDEP);
    goto CPyL13;
}

PyObject *CPyPy_mypy___options___Options_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___options___Options))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.options.Options", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___options___Options_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/options.py", "__init__", 80, CPyStatic_mypy___options___globals);
    return NULL;
}

char CPyDef_mypy___options___Options___use_lowercase_names(PyObject *cpy_r_self) {
    tuple_T2II cpy_r_r0;
    tuple_T2II cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypy___options___OptionsObject *)cpy_r_self)->_python_version;
    CPyTagged_INCREF(cpy_r_r0.f0);
    CPyTagged_INCREF(cpy_r_r0.f1);
    cpy_r_r1.f0 = 6;
    cpy_r_r1.f1 = 18;
    CPyTagged_INCREF(cpy_r_r1.f0);
    CPyTagged_INCREF(cpy_r_r1.f1);
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4596 = CPyTagged_StealAsObject(cpy_r_r0.f0);
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp4596);
    PyObject *__tmp4597 = CPyTagged_StealAsObject(cpy_r_r0.f1);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp4597);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4598 = CPyTagged_StealAsObject(cpy_r_r1.f0);
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp4598);
    PyObject *__tmp4599 = CPyTagged_StealAsObject(cpy_r_r1.f1);
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp4599);
    cpy_r_r4 = PyObject_RichCompare(cpy_r_r2, cpy_r_r3, 5);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "use_lowercase_names", 368, CPyStatic_mypy___options___globals);
        goto CPyL5;
    }
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/options.py", "use_lowercase_names", 368, CPyStatic_mypy___options___globals);
        goto CPyL5;
    }
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = ((mypy___options___OptionsObject *)cpy_r_self)->_force_uppercase_builtins;
    cpy_r_r7 = cpy_r_r6 ^ 1;
    return cpy_r_r7;
CPyL4: ;
    return 0;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
}

PyObject *CPyPy_mypy___options___Options___use_lowercase_names(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":use_lowercase_names", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___options___Options))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.options.Options", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___options___Options___use_lowercase_names(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/options.py", "use_lowercase_names", 367, CPyStatic_mypy___options___globals);
    return NULL;
}

char CPyDef_mypy___options___Options___use_or_syntax(PyObject *cpy_r_self) {
    tuple_T2II cpy_r_r0;
    tuple_T2II cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypy___options___OptionsObject *)cpy_r_self)->_python_version;
    CPyTagged_INCREF(cpy_r_r0.f0);
    CPyTagged_INCREF(cpy_r_r0.f1);
    cpy_r_r1.f0 = 6;
    cpy_r_r1.f1 = 20;
    CPyTagged_INCREF(cpy_r_r1.f0);
    CPyTagged_INCREF(cpy_r_r1.f1);
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4600 = CPyTagged_StealAsObject(cpy_r_r0.f0);
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp4600);
    PyObject *__tmp4601 = CPyTagged_StealAsObject(cpy_r_r0.f1);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp4601);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4602 = CPyTagged_StealAsObject(cpy_r_r1.f0);
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp4602);
    PyObject *__tmp4603 = CPyTagged_StealAsObject(cpy_r_r1.f1);
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp4603);
    cpy_r_r4 = PyObject_RichCompare(cpy_r_r2, cpy_r_r3, 5);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "use_or_syntax", 373, CPyStatic_mypy___options___globals);
        goto CPyL5;
    }
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/options.py", "use_or_syntax", 373, CPyStatic_mypy___options___globals);
        goto CPyL5;
    }
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = ((mypy___options___OptionsObject *)cpy_r_self)->_force_union_syntax;
    cpy_r_r7 = cpy_r_r6 ^ 1;
    return cpy_r_r7;
CPyL4: ;
    return 0;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
}

PyObject *CPyPy_mypy___options___Options___use_or_syntax(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":use_or_syntax", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___options___Options))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.options.Options", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___options___Options___use_or_syntax(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/options.py", "use_or_syntax", 372, CPyStatic_mypy___options___globals);
    return NULL;
}

char CPyDef_mypy___options___Options___new_semantic_analyzer(PyObject *cpy_r_self) {
    return 1;
}

PyObject *CPyPy_mypy___options___Options___new_semantic_analyzer(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":new_semantic_analyzer", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___options___Options))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.options.Options", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___options___Options___new_semantic_analyzer(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/options.py", "new_semantic_analyzer", 379, CPyStatic_mypy___options___globals);
    return NULL;
}

PyObject *CPyDef_mypy___options___Options___snapshot(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    tuple_T0 cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_d;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_k;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    tuple_T4CIOO cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_k_2;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r1.empty_struct_error_flag = 0;
    cpy_r_r2 = PyTuple_New(0);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    cpy_r_r3 = CPyObject_GetAttr3(cpy_r_self, cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 385, CPyStatic_mypy___options___globals);
        goto CPyL24;
    }
    cpy_r_r4 = CPyDict_FromAny(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 385, CPyStatic_mypy___options___globals);
        goto CPyL24;
    }
    cpy_r_d = cpy_r_r4;
    cpy_r_r5 = (PyObject *)CPyType_mypy___options___Options;
    cpy_r_r6 = CPyDef_mypy___util___get_class_descriptors(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 386, CPyStatic_mypy___options___globals);
        goto CPyL25;
    }
    cpy_r_r7 = PyObject_GetIter(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 386, CPyStatic_mypy___options___globals);
        goto CPyL25;
    }
CPyL4: ;
    cpy_r_r8 = PyIter_Next(cpy_r_r7);
    if (cpy_r_r8 == NULL) goto CPyL26;
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "snapshot", 386, CPyStatic_mypy___options___globals, "str", cpy_r_r8);
        goto CPyL27;
    }
    cpy_r_k = cpy_r_r9;
    cpy_r_r10 = PyObject_HasAttr(cpy_r_self, cpy_r_k);
    if (!cpy_r_r10) goto CPyL28;
    cpy_r_r11 = CPyStatics[1527]; /* 'new_semantic_analyzer' */
    cpy_r_r12 = PyUnicode_Compare(cpy_r_k, cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 == -1;
    if (!cpy_r_r13) goto CPyL10;
    cpy_r_r14 = PyErr_Occurred();
    cpy_r_r15 = cpy_r_r14 != NULL;
    if (!cpy_r_r15) goto CPyL10;
    cpy_r_r16 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 387, CPyStatic_mypy___options___globals);
        goto CPyL29;
    }
CPyL10: ;
    cpy_r_r17 = cpy_r_r12 != 0;
    if (!cpy_r_r17) goto CPyL28;
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_self, cpy_r_k);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 388, CPyStatic_mypy___options___globals);
        goto CPyL29;
    }
    cpy_r_r19 = CPyDict_SetItem(cpy_r_d, cpy_r_k, cpy_r_r18);
    CPy_DECREF(cpy_r_k);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 388, CPyStatic_mypy___options___globals);
        goto CPyL27;
    } else
        goto CPyL4;
CPyL13: ;
    cpy_r_r21 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 386, CPyStatic_mypy___options___globals);
        goto CPyL25;
    }
    cpy_r_r22 = PyDict_New();
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 390, CPyStatic_mypy___options___globals);
        goto CPyL25;
    }
    cpy_r_r23 = 0;
    cpy_r_r24 = PyDict_Size(cpy_r_d);
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = CPyDict_GetItemsIter(cpy_r_d);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 390, CPyStatic_mypy___options___globals);
        goto CPyL30;
    }
CPyL16: ;
    cpy_r_r27 = CPyDict_NextItem(cpy_r_r26, cpy_r_r23);
    cpy_r_r28 = cpy_r_r27.f1;
    cpy_r_r23 = cpy_r_r28;
    cpy_r_r29 = cpy_r_r27.f0;
    if (!cpy_r_r29) goto CPyL31;
    cpy_r_r30 = cpy_r_r27.f2;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = cpy_r_r27.f3;
    CPy_INCREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r27.f2);
    CPy_DECREF(cpy_r_r27.f3);
    cpy_r_k_2 = cpy_r_r30;
    cpy_r_v = cpy_r_r31;
    cpy_r_r32 = CPyStatics[755]; /* '_' */
    cpy_r_r33 = CPyStatics[4225]; /* 'startswith' */
    PyObject *cpy_r_r34[2] = {cpy_r_k_2, cpy_r_r32};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = PyObject_VectorcallMethod(cpy_r_r33, cpy_r_r35, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 390, CPyStatic_mypy___options___globals);
        goto CPyL32;
    }
    cpy_r_r37 = PyObject_Not(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 390, CPyStatic_mypy___options___globals);
        goto CPyL32;
    }
    cpy_r_r39 = cpy_r_r37;
    if (!cpy_r_r39) goto CPyL33;
    cpy_r_r40 = CPyDict_SetItem(cpy_r_r22, cpy_r_k_2, cpy_r_v);
    CPy_DECREF(cpy_r_k_2);
    CPy_DECREF(cpy_r_v);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 390, CPyStatic_mypy___options___globals);
        goto CPyL34;
    }
CPyL21: ;
    cpy_r_r42 = CPyDict_CheckSize(cpy_r_d, cpy_r_r25);
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 390, CPyStatic_mypy___options___globals);
        goto CPyL34;
    } else
        goto CPyL16;
CPyL22: ;
    cpy_r_r43 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/options.py", "snapshot", 390, CPyStatic_mypy___options___globals);
        goto CPyL35;
    }
    cpy_r_d = cpy_r_r22;
    return cpy_r_d;
CPyL24: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL25: ;
    CPy_DecRef(cpy_r_d);
    goto CPyL24;
CPyL26: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL13;
CPyL27: ;
    CPy_DecRef(cpy_r_d);
    CPy_DecRef(cpy_r_r7);
    goto CPyL24;
CPyL28: ;
    CPy_DECREF(cpy_r_k);
    goto CPyL4;
CPyL29: ;
    CPy_DecRef(cpy_r_d);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_k);
    goto CPyL24;
CPyL30: ;
    CPy_DecRef(cpy_r_d);
    CPy_DecRef(cpy_r_r22);
    goto CPyL24;
CPyL31: ;
    CPy_DECREF(cpy_r_d);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r27.f2);
    CPy_DECREF(cpy_r_r27.f3);
    goto CPyL22;
CPyL32: ;
    CPy_DecRef(cpy_r_d);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_k_2);
    CPy_DecRef(cpy_r_v);
    goto CPyL24;
CPyL33: ;
    CPy_DECREF(cpy_r_k_2);
    CPy_DECREF(cpy_r_v);
    goto CPyL21;
CPyL34: ;
    CPy_DecRef(cpy_r_d);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r26);
    goto CPyL24;
CPyL35: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL24;
}

PyObject *CPyPy_mypy___options___Options___snapshot(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":snapshot", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___options___Options))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.options.Options", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___options___Options___snapshot(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/options.py", "snapshot", 382, CPyStatic_mypy___options___globals);
    return NULL;
}

PyObject *CPyDef_mypy___options___Options_____repr__(PyObject *cpy_r_self) {
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
    cpy_r_r0 = CPyStatics[4226]; /* 'Options(' */
    cpy_r_r1 = CPyDef_mypy___options___Options___snapshot(cpy_r_self);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__repr__", 394, CPyStatic_mypy___options___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPyModule_pprint;
    cpy_r_r3 = CPyStatics[4227]; /* 'pformat' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__repr__", 394, CPyStatic_mypy___options___globals);
        goto CPyL7;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__repr__", 394, CPyStatic_mypy___options___globals);
        goto CPyL7;
    }
    CPy_DECREF(cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "__repr__", 394, CPyStatic_mypy___options___globals, "str", cpy_r_r7);
        goto CPyL6;
    }
    cpy_r_r9 = CPyStatics[72]; /* ')' */
    cpy_r_r10 = CPyStr_Build(3, cpy_r_r0, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "__repr__", 394, CPyStatic_mypy___options___globals);
        goto CPyL6;
    }
    return cpy_r_r10;
CPyL6: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
}

PyObject *CPyPy_mypy___options___Options_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___options___Options))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.options.Options", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___options___Options_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/options.py", "__repr__", 393, CPyStatic_mypy___options___globals);
    return NULL;
}

PyObject *CPyDef_mypy___options___Options___apply_changes(PyObject *cpy_r_self, PyObject *cpy_r_changes) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_new_options;
    PyObject *cpy_r_r1;
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
    PyObject *cpy_r_key;
    PyObject *cpy_r_value;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyPtr cpy_r_r39;
    int64_t cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_code_str;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_code;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyPtr cpy_r_r60;
    int64_t cpy_r_r61;
    CPyTagged cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    CPyTagged cpy_r_r78;
    PyObject *cpy_r_r79;
    cpy_r_r0 = CPyDef_mypy___options___Options();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 398, CPyStatic_mypy___options___globals);
        goto CPyL37;
    }
    cpy_r_new_options = cpy_r_r0;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_mypy___util___replace_object_state(cpy_r_new_options, cpy_r_self, 1, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 400, CPyStatic_mypy___options___globals);
        goto CPyL38;
    }
    cpy_r_r3 = 0;
    cpy_r_r4 = PyDict_Size(cpy_r_changes);
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = CPyDict_GetItemsIter(cpy_r_changes);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 401, CPyStatic_mypy___options___globals);
        goto CPyL38;
    }
CPyL3: ;
    cpy_r_r7 = CPyDict_NextItem(cpy_r_r6, cpy_r_r3);
    cpy_r_r8 = cpy_r_r7.f1;
    cpy_r_r3 = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f0;
    if (!cpy_r_r9) goto CPyL39;
    cpy_r_r10 = cpy_r_r7.f2;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = cpy_r_r7.f3;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r7.f2);
    CPy_DECREF(cpy_r_r7.f3);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r12 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "apply_changes", 401, CPyStatic_mypy___options___globals, "str", cpy_r_r10);
        goto CPyL40;
    }
    cpy_r_key = cpy_r_r12;
    cpy_r_value = cpy_r_r11;
    cpy_r_r13 = PyObject_SetAttr(cpy_r_new_options, cpy_r_key, cpy_r_value);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_value);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 402, CPyStatic_mypy___options___globals);
        goto CPyL41;
    }
    cpy_r_r15 = CPyDict_CheckSize(cpy_r_changes, cpy_r_r5);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 401, CPyStatic_mypy___options___globals);
        goto CPyL41;
    } else
        goto CPyL3;
CPyL7: ;
    cpy_r_r16 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 401, CPyStatic_mypy___options___globals);
        goto CPyL38;
    }
    cpy_r_r17 = CPyStatics[4228]; /* 'ignore_missing_imports' */
    cpy_r_r18 = CPyDict_GetWithNone(cpy_r_changes, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 403, CPyStatic_mypy___options___globals);
        goto CPyL38;
    }
    cpy_r_r19 = PyObject_IsTrue(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 403, CPyStatic_mypy___options___globals);
        goto CPyL38;
    }
    cpy_r_r21 = cpy_r_r19;
    if (!cpy_r_r21) goto CPyL12;
    ((mypy___options___OptionsObject *)cpy_r_new_options)->_ignore_missing_imports_per_module = 1;
CPyL12: ;
    cpy_r_r23 = ((mypy___options___OptionsObject *)cpy_r_self)->_disabled_error_codes;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r25[1] = {cpy_r_r23};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = PyObject_VectorcallMethod(cpy_r_r24, cpy_r_r26, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 410, CPyStatic_mypy___options___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_r23);
    if (likely(PySet_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "apply_changes", 410, CPyStatic_mypy___options___globals, "set", cpy_r_r27);
        goto CPyL38;
    }
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_new_options)->_disabled_error_codes);
    ((mypy___options___OptionsObject *)cpy_r_new_options)->_disabled_error_codes = cpy_r_r28;
    cpy_r_r30 = ((mypy___options___OptionsObject *)cpy_r_self)->_enabled_error_codes;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r32[1] = {cpy_r_r30};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = PyObject_VectorcallMethod(cpy_r_r31, cpy_r_r33, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 411, CPyStatic_mypy___options___globals);
        goto CPyL43;
    }
    CPy_DECREF(cpy_r_r30);
    if (likely(PySet_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "apply_changes", 411, CPyStatic_mypy___options___globals, "set", cpy_r_r34);
        goto CPyL38;
    }
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_new_options)->_enabled_error_codes);
    ((mypy___options___OptionsObject *)cpy_r_new_options)->_enabled_error_codes = cpy_r_r35;
    cpy_r_r37 = ((mypy___options___OptionsObject *)cpy_r_new_options)->_disable_error_code;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = 0;
CPyL17: ;
    cpy_r_r39 = (CPyPtr)&((PyVarObject *)cpy_r_r37)->ob_size;
    cpy_r_r40 = *(int64_t *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = (Py_ssize_t)cpy_r_r38 < (Py_ssize_t)cpy_r_r41;
    if (!cpy_r_r42) goto CPyL44;
    cpy_r_r43 = CPyList_GetItemUnsafe(cpy_r_r37, cpy_r_r38);
    if (likely(PyUnicode_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "apply_changes", 412, CPyStatic_mypy___options___globals, "str", cpy_r_r43);
        goto CPyL45;
    }
    cpy_r_code_str = cpy_r_r44;
    cpy_r_r45 = CPyStatic_mypy___options___globals;
    cpy_r_r46 = CPyStatics[1490]; /* 'error_codes' */
    cpy_r_r47 = CPyDict_GetItem(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 413, CPyStatic_mypy___options___globals);
        goto CPyL46;
    }
    if (likely(PyDict_Check(cpy_r_r47)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "apply_changes", 413, CPyStatic_mypy___options___globals, "dict", cpy_r_r47);
        goto CPyL46;
    }
    cpy_r_r49 = CPyDict_GetItem(cpy_r_r48, cpy_r_code_str);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_code_str);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 413, CPyStatic_mypy___options___globals);
        goto CPyL45;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r49, CPyType_errorcodes___ErrorCode)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "apply_changes", 413, CPyStatic_mypy___options___globals, "mypy.errorcodes.ErrorCode", cpy_r_r49);
        goto CPyL45;
    }
    cpy_r_code = cpy_r_r50;
    cpy_r_r51 = ((mypy___options___OptionsObject *)cpy_r_new_options)->_disabled_error_codes;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = PySet_Add(cpy_r_r51, cpy_r_code);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 414, CPyStatic_mypy___options___globals);
        goto CPyL47;
    }
    cpy_r_r54 = ((mypy___options___OptionsObject *)cpy_r_new_options)->_enabled_error_codes;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = PySet_Discard(cpy_r_r54, cpy_r_code);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_code);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 415, CPyStatic_mypy___options___globals);
        goto CPyL45;
    }
    cpy_r_r57 = cpy_r_r38 + 2;
    cpy_r_r38 = cpy_r_r57;
    goto CPyL17;
CPyL26: ;
    cpy_r_r58 = ((mypy___options___OptionsObject *)cpy_r_new_options)->_enable_error_code;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = 0;
CPyL27: ;
    cpy_r_r60 = (CPyPtr)&((PyVarObject *)cpy_r_r58)->ob_size;
    cpy_r_r61 = *(int64_t *)cpy_r_r60;
    cpy_r_r62 = cpy_r_r61 << 1;
    cpy_r_r63 = (Py_ssize_t)cpy_r_r59 < (Py_ssize_t)cpy_r_r62;
    if (!cpy_r_r63) goto CPyL48;
    cpy_r_r64 = CPyList_GetItemUnsafe(cpy_r_r58, cpy_r_r59);
    if (likely(PyUnicode_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "apply_changes", 416, CPyStatic_mypy___options___globals, "str", cpy_r_r64);
        goto CPyL49;
    }
    cpy_r_code_str = cpy_r_r65;
    cpy_r_r66 = CPyStatic_mypy___options___globals;
    cpy_r_r67 = CPyStatics[1490]; /* 'error_codes' */
    cpy_r_r68 = CPyDict_GetItem(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 417, CPyStatic_mypy___options___globals);
        goto CPyL50;
    }
    if (likely(PyDict_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "apply_changes", 417, CPyStatic_mypy___options___globals, "dict", cpy_r_r68);
        goto CPyL50;
    }
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r69, cpy_r_code_str);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_code_str);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 417, CPyStatic_mypy___options___globals);
        goto CPyL49;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r70, CPyType_errorcodes___ErrorCode)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "apply_changes", 417, CPyStatic_mypy___options___globals, "mypy.errorcodes.ErrorCode", cpy_r_r70);
        goto CPyL49;
    }
    cpy_r_code = cpy_r_r71;
    cpy_r_r72 = ((mypy___options___OptionsObject *)cpy_r_new_options)->_enabled_error_codes;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = PySet_Add(cpy_r_r72, cpy_r_code);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 418, CPyStatic_mypy___options___globals);
        goto CPyL51;
    }
    cpy_r_r75 = ((mypy___options___OptionsObject *)cpy_r_new_options)->_disabled_error_codes;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = PySet_Discard(cpy_r_r75, cpy_r_code);
    CPy_DECREF(cpy_r_r75);
    CPy_DECREF(cpy_r_code);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/options.py", "apply_changes", 419, CPyStatic_mypy___options___globals);
        goto CPyL49;
    }
    cpy_r_r78 = cpy_r_r59 + 2;
    cpy_r_r59 = cpy_r_r78;
    goto CPyL27;
CPyL36: ;
    return cpy_r_new_options;
CPyL37: ;
    cpy_r_r79 = NULL;
    return cpy_r_r79;
CPyL38: ;
    CPy_DecRef(cpy_r_new_options);
    goto CPyL37;
CPyL39: ;
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7.f2);
    CPy_DECREF(cpy_r_r7.f3);
    goto CPyL7;
CPyL40: ;
    CPy_DecRef(cpy_r_new_options);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r11);
    goto CPyL37;
CPyL41: ;
    CPy_DecRef(cpy_r_new_options);
    CPy_DecRef(cpy_r_r6);
    goto CPyL37;
CPyL42: ;
    CPy_DecRef(cpy_r_new_options);
    CPy_DecRef(cpy_r_r23);
    goto CPyL37;
CPyL43: ;
    CPy_DecRef(cpy_r_new_options);
    CPy_DecRef(cpy_r_r30);
    goto CPyL37;
CPyL44: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL26;
CPyL45: ;
    CPy_DecRef(cpy_r_new_options);
    CPy_DecRef(cpy_r_r37);
    goto CPyL37;
CPyL46: ;
    CPy_DecRef(cpy_r_new_options);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_code_str);
    goto CPyL37;
CPyL47: ;
    CPy_DecRef(cpy_r_new_options);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_code);
    goto CPyL37;
CPyL48: ;
    CPy_DECREF(cpy_r_r58);
    goto CPyL36;
CPyL49: ;
    CPy_DecRef(cpy_r_new_options);
    CPy_DecRef(cpy_r_r58);
    goto CPyL37;
CPyL50: ;
    CPy_DecRef(cpy_r_new_options);
    CPy_DecRef(cpy_r_code_str);
    CPy_DecRef(cpy_r_r58);
    goto CPyL37;
CPyL51: ;
    CPy_DecRef(cpy_r_new_options);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_r58);
    goto CPyL37;
}

PyObject *CPyPy_mypy___options___Options___apply_changes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"changes", 0};
    static CPyArg_Parser parser = {"O:apply_changes", kwlist, 0};
    PyObject *obj_changes;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_changes)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___options___Options))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.options.Options", obj_self); 
        goto fail;
    }
    PyObject *arg_changes;
    if (likely(PyDict_Check(obj_changes)))
        arg_changes = obj_changes;
    else {
        CPy_TypeError("dict", obj_changes); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___options___Options___apply_changes(arg_self, arg_changes);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/options.py", "apply_changes", 396, CPyStatic_mypy___options___globals);
    return NULL;
}

char CPyDef_mypy___options___Options___compare_stable(PyObject *cpy_r_self, PyObject *cpy_r_other_snapshot) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = CPyDef_mypy___options___Options();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compare_stable", 430, CPyStatic_mypy___options___globals);
        goto CPyL10;
    }
    cpy_r_r1 = CPyDef_mypy___options___Options___snapshot(cpy_r_self);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compare_stable", 430, CPyStatic_mypy___options___globals);
        goto CPyL11;
    }
    cpy_r_r2 = CPyDef_mypy___options___Options___apply_changes(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compare_stable", 430, CPyStatic_mypy___options___globals);
        goto CPyL10;
    }
    cpy_r_r3 = CPyDef_mypy___options___Options___snapshot(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compare_stable", 430, CPyStatic_mypy___options___globals);
        goto CPyL10;
    }
    cpy_r_r4 = CPyDef_mypy___options___Options();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compare_stable", 431, CPyStatic_mypy___options___globals);
        goto CPyL12;
    }
    cpy_r_r5 = CPyDef_mypy___options___Options___apply_changes(cpy_r_r4, cpy_r_other_snapshot);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compare_stable", 431, CPyStatic_mypy___options___globals);
        goto CPyL12;
    }
    cpy_r_r6 = CPyDef_mypy___options___Options___snapshot(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compare_stable", 431, CPyStatic_mypy___options___globals);
        goto CPyL12;
    }
    cpy_r_r7 = PyObject_RichCompare(cpy_r_r3, cpy_r_r6, 2);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compare_stable", 430, CPyStatic_mypy___options___globals);
        goto CPyL10;
    }
    if (unlikely(!PyBool_Check(cpy_r_r7))) {
        CPy_TypeError("bool", cpy_r_r7); cpy_r_r8 = 2;
    } else
        cpy_r_r8 = cpy_r_r7 == Py_True;
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/options.py", "compare_stable", 430, CPyStatic_mypy___options___globals);
        goto CPyL10;
    }
    return cpy_r_r8;
CPyL10: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
}

PyObject *CPyPy_mypy___options___Options___compare_stable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"other_snapshot", 0};
    static CPyArg_Parser parser = {"O:compare_stable", kwlist, 0};
    PyObject *obj_other_snapshot;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_other_snapshot)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___options___Options))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.options.Options", obj_self); 
        goto fail;
    }
    PyObject *arg_other_snapshot;
    if (likely(PyDict_Check(obj_other_snapshot)))
        arg_other_snapshot = obj_other_snapshot;
    else {
        CPy_TypeError("dict", obj_other_snapshot); 
        goto fail;
    }
    char retval = CPyDef_mypy___options___Options___compare_stable(arg_self, arg_other_snapshot);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/options.py", "compare_stable", 423, CPyStatic_mypy___options___globals);
    return NULL;
}

char CPyDef_mypy___options___Options___build_per_module_cache(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T3CIO cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_k;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_unstructured_glob_keys;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    tuple_T3CIO cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_k_2;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_structured_keys;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_k_3;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_wildcards;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    CPyPtr cpy_r_r67;
    int64_t cpy_r_r68;
    CPyTagged cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_k_4;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    CPyTagged cpy_r_r78;
    PyObject *cpy_r_concrete;
    CPyTagged cpy_r_r79;
    CPyPtr cpy_r_r80;
    int64_t cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_glob;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    tuple_T2OO cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    CPyTagged cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyTagged cpy_r_r97;
    CPyPtr cpy_r_r98;
    int64_t cpy_r_r99;
    CPyTagged cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_options;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    CPyTagged cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 435, CPyStatic_mypy___options___globals);
        goto CPyL61;
    }
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_self)->__per_module_cache);
    ((mypy___options___OptionsObject *)cpy_r_self)->__per_module_cache = cpy_r_r0;
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 452, CPyStatic_mypy___options___globals);
        goto CPyL61;
    }
    cpy_r_r3 = ((mypy___options___OptionsObject *)cpy_r_self)->_per_module_options;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
    cpy_r_r5 = PyDict_Size(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = CPyDict_GetKeysIter(cpy_r_r3);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 452, CPyStatic_mypy___options___globals);
        goto CPyL62;
    }
CPyL3: ;
    cpy_r_r8 = CPyDict_NextKey(cpy_r_r7, cpy_r_r4);
    cpy_r_r9 = cpy_r_r8.f1;
    cpy_r_r4 = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f0;
    if (!cpy_r_r10) goto CPyL63;
    cpy_r_r11 = cpy_r_r8.f2;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r8.f2);
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "build_per_module_cache", 452, CPyStatic_mypy___options___globals, "str", cpy_r_r11);
        goto CPyL64;
    }
    cpy_r_k = cpy_r_r12;
    cpy_r_r13 = CPyStatics[282]; /* '*' */
    cpy_r_r14 = CPyStr_GetSlice(cpy_r_k, 0, -2);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 452, CPyStatic_mypy___options___globals);
        goto CPyL65;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "build_per_module_cache", 452, CPyStatic_mypy___options___globals, "str", cpy_r_r14);
        goto CPyL65;
    }
    cpy_r_r16 = PySequence_Contains(cpy_r_r15, cpy_r_r13);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 452, CPyStatic_mypy___options___globals);
        goto CPyL65;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL66;
    cpy_r_r19 = PyList_Append(cpy_r_r2, cpy_r_k);
    CPy_DECREF(cpy_r_k);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 452, CPyStatic_mypy___options___globals);
        goto CPyL64;
    }
CPyL10: ;
    cpy_r_r21 = CPyDict_CheckSize(cpy_r_r3, cpy_r_r6);
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 452, CPyStatic_mypy___options___globals);
        goto CPyL64;
    } else
        goto CPyL3;
CPyL11: ;
    cpy_r_r22 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 452, CPyStatic_mypy___options___globals);
        goto CPyL67;
    }
    cpy_r_unstructured_glob_keys = cpy_r_r2;
    cpy_r_r23 = PyList_New(0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 453, CPyStatic_mypy___options___globals);
        goto CPyL68;
    }
    cpy_r_r24 = ((mypy___options___OptionsObject *)cpy_r_self)->_per_module_options;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = 0;
    cpy_r_r26 = PyDict_Size(cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = CPyDict_GetKeysIter(cpy_r_r24);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 453, CPyStatic_mypy___options___globals);
        goto CPyL69;
    }
CPyL14: ;
    cpy_r_r29 = CPyDict_NextKey(cpy_r_r28, cpy_r_r25);
    cpy_r_r30 = cpy_r_r29.f1;
    cpy_r_r25 = cpy_r_r30;
    cpy_r_r31 = cpy_r_r29.f0;
    if (!cpy_r_r31) goto CPyL70;
    cpy_r_r32 = cpy_r_r29.f2;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r29.f2);
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "build_per_module_cache", 453, CPyStatic_mypy___options___globals, "str", cpy_r_r32);
        goto CPyL71;
    }
    cpy_r_k_2 = cpy_r_r33;
    cpy_r_r34 = CPyStatics[282]; /* '*' */
    cpy_r_r35 = CPyStr_GetSlice(cpy_r_k_2, 0, -2);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 453, CPyStatic_mypy___options___globals);
        goto CPyL72;
    }
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "build_per_module_cache", 453, CPyStatic_mypy___options___globals, "str", cpy_r_r35);
        goto CPyL72;
    }
    cpy_r_r37 = PySequence_Contains(cpy_r_r36, cpy_r_r34);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 453, CPyStatic_mypy___options___globals);
        goto CPyL72;
    }
    cpy_r_r39 = cpy_r_r37;
    cpy_r_r40 = cpy_r_r39 ^ 1;
    if (!cpy_r_r40) goto CPyL73;
    cpy_r_r41 = PyList_Append(cpy_r_r23, cpy_r_k_2);
    CPy_DECREF(cpy_r_k_2);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 453, CPyStatic_mypy___options___globals);
        goto CPyL71;
    }
CPyL21: ;
    cpy_r_r43 = CPyDict_CheckSize(cpy_r_r24, cpy_r_r27);
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 453, CPyStatic_mypy___options___globals);
        goto CPyL71;
    } else
        goto CPyL14;
CPyL22: ;
    cpy_r_r44 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 453, CPyStatic_mypy___options___globals);
        goto CPyL74;
    }
    cpy_r_structured_keys = cpy_r_r23;
    cpy_r_r45 = PyList_New(0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 454, CPyStatic_mypy___options___globals);
        goto CPyL75;
    }
    cpy_r_r46 = 0;
CPyL25: ;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_structured_keys)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 << 1;
    cpy_r_r50 = (Py_ssize_t)cpy_r_r46 < (Py_ssize_t)cpy_r_r49;
    if (!cpy_r_r50) goto CPyL30;
    cpy_r_r51 = CPyList_GetItemUnsafe(cpy_r_structured_keys, cpy_r_r46);
    if (likely(PyUnicode_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "build_per_module_cache", 454, CPyStatic_mypy___options___globals, "str", cpy_r_r51);
        goto CPyL76;
    }
    cpy_r_k_3 = cpy_r_r52;
    cpy_r_r53 = CPyStatics[4229]; /* '.*' */
    cpy_r_r54 = CPyStr_Endswith(cpy_r_k_3, cpy_r_r53);
    if (!cpy_r_r54) goto CPyL77;
    cpy_r_r55 = PyList_Append(cpy_r_r45, cpy_r_k_3);
    CPy_DECREF(cpy_r_k_3);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 454, CPyStatic_mypy___options___globals);
        goto CPyL76;
    }
CPyL29: ;
    cpy_r_r57 = cpy_r_r46 + 2;
    cpy_r_r46 = cpy_r_r57;
    goto CPyL25;
CPyL30: ;
    cpy_r_r58 = CPyModule_builtins;
    cpy_r_r59 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r60 = CPyObject_GetAttr(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 454, CPyStatic_mypy___options___globals);
        goto CPyL76;
    }
    PyObject *cpy_r_r61[1] = {cpy_r_r45};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = _PyObject_Vectorcall(cpy_r_r60, cpy_r_r62, 1, 0);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 454, CPyStatic_mypy___options___globals);
        goto CPyL76;
    }
    CPy_DECREF(cpy_r_r45);
    if (likely(PyList_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "build_per_module_cache", 454, CPyStatic_mypy___options___globals, "list", cpy_r_r63);
        goto CPyL75;
    }
    cpy_r_wildcards = cpy_r_r64;
    cpy_r_r65 = PyList_New(0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 455, CPyStatic_mypy___options___globals);
        goto CPyL78;
    }
    cpy_r_r66 = 0;
CPyL35: ;
    cpy_r_r67 = (CPyPtr)&((PyVarObject *)cpy_r_structured_keys)->ob_size;
    cpy_r_r68 = *(int64_t *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 << 1;
    cpy_r_r70 = (Py_ssize_t)cpy_r_r66 < (Py_ssize_t)cpy_r_r69;
    if (!cpy_r_r70) goto CPyL40;
    cpy_r_r71 = CPyList_GetItemUnsafe(cpy_r_structured_keys, cpy_r_r66);
    if (likely(PyUnicode_Check(cpy_r_r71)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "build_per_module_cache", 455, CPyStatic_mypy___options___globals, "str", cpy_r_r71);
        goto CPyL79;
    }
    cpy_r_k_4 = cpy_r_r72;
    cpy_r_r73 = CPyStatics[4229]; /* '.*' */
    cpy_r_r74 = CPyStr_Endswith(cpy_r_k_4, cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 ^ 1;
    if (!cpy_r_r75) goto CPyL80;
    cpy_r_r76 = PyList_Append(cpy_r_r65, cpy_r_k_4);
    CPy_DECREF(cpy_r_k_4);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 455, CPyStatic_mypy___options___globals);
        goto CPyL79;
    }
CPyL39: ;
    cpy_r_r78 = cpy_r_r66 + 2;
    cpy_r_r66 = cpy_r_r78;
    goto CPyL35;
CPyL40: ;
    cpy_r_concrete = cpy_r_r65;
    cpy_r_r79 = 0;
CPyL41: ;
    cpy_r_r80 = (CPyPtr)&((PyVarObject *)cpy_r_unstructured_glob_keys)->ob_size;
    cpy_r_r81 = *(int64_t *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 << 1;
    cpy_r_r83 = (Py_ssize_t)cpy_r_r79 < (Py_ssize_t)cpy_r_r82;
    if (!cpy_r_r83) goto CPyL46;
    cpy_r_r84 = CPyList_GetItemUnsafe(cpy_r_unstructured_glob_keys, cpy_r_r79);
    if (likely(PyUnicode_Check(cpy_r_r84)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "build_per_module_cache", 457, CPyStatic_mypy___options___globals, "str", cpy_r_r84);
        goto CPyL81;
    }
    cpy_r_glob = cpy_r_r85;
    cpy_r_r86 = ((mypy___options___OptionsObject *)cpy_r_self)->__glob_options;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = CPyDef_mypy___options___Options___compile_glob(cpy_r_self, cpy_r_glob);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 458, CPyStatic_mypy___options___globals);
        goto CPyL82;
    }
    cpy_r_r88.f0 = cpy_r_glob;
    cpy_r_r88.f1 = cpy_r_r87;
    CPy_INCREF(cpy_r_r88.f0);
    CPy_INCREF(cpy_r_r88.f1);
    CPy_DECREF(cpy_r_glob);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r89 = PyTuple_New(2);
    if (unlikely(cpy_r_r89 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4604 = cpy_r_r88.f0;
    PyTuple_SET_ITEM(cpy_r_r89, 0, __tmp4604);
    PyObject *__tmp4605 = cpy_r_r88.f1;
    PyTuple_SET_ITEM(cpy_r_r89, 1, __tmp4605);
    cpy_r_r90 = PyList_Append(cpy_r_r86, cpy_r_r89);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 458, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    cpy_r_r92 = cpy_r_r79 + 2;
    cpy_r_r79 = cpy_r_r92;
    goto CPyL41;
CPyL46: ;
    cpy_r_r93 = PySet_New(cpy_r_unstructured_glob_keys);
    CPy_DECREF(cpy_r_unstructured_glob_keys);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 464, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_self)->_unused_configs);
    ((mypy___options___OptionsObject *)cpy_r_self)->_unused_configs = cpy_r_r93;
    cpy_r_r95 = PyNumber_Add(cpy_r_wildcards, cpy_r_concrete);
    CPy_DECREF(cpy_r_wildcards);
    CPy_DECREF(cpy_r_concrete);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 466, CPyStatic_mypy___options___globals);
        goto CPyL84;
    }
    if (likely(PyList_Check(cpy_r_r95)))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "build_per_module_cache", 466, CPyStatic_mypy___options___globals, "list", cpy_r_r95);
        goto CPyL84;
    }
    cpy_r_r97 = 0;
CPyL50: ;
    cpy_r_r98 = (CPyPtr)&((PyVarObject *)cpy_r_r96)->ob_size;
    cpy_r_r99 = *(int64_t *)cpy_r_r98;
    cpy_r_r100 = cpy_r_r99 << 1;
    cpy_r_r101 = (Py_ssize_t)cpy_r_r97 < (Py_ssize_t)cpy_r_r100;
    if (!cpy_r_r101) goto CPyL85;
    cpy_r_r102 = CPyList_GetItemUnsafe(cpy_r_r96, cpy_r_r97);
    if (likely(PyUnicode_Check(cpy_r_r102)))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "build_per_module_cache", 466, CPyStatic_mypy___options___globals, "str", cpy_r_r102);
        goto CPyL86;
    }
    cpy_r_key = cpy_r_r103;
    cpy_r_r104 = CPyDef_mypy___options___Options___clone_for_module(cpy_r_self, cpy_r_key);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 469, CPyStatic_mypy___options___globals);
        goto CPyL87;
    }
    cpy_r_options = cpy_r_r104;
    cpy_r_r105 = ((mypy___options___OptionsObject *)cpy_r_self)->_per_module_options;
    CPy_INCREF(cpy_r_r105);
    cpy_r_r106 = CPyDict_GetItem(cpy_r_r105, cpy_r_key);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 471, CPyStatic_mypy___options___globals);
        goto CPyL88;
    }
    if (likely(PyDict_Check(cpy_r_r106)))
        cpy_r_r107 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "build_per_module_cache", 471, CPyStatic_mypy___options___globals, "dict", cpy_r_r106);
        goto CPyL88;
    }
    cpy_r_r108 = CPyDef_mypy___options___Options___apply_changes(cpy_r_options, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    CPy_DECREF(cpy_r_options);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 471, CPyStatic_mypy___options___globals);
        goto CPyL87;
    }
    cpy_r_r109 = ((mypy___options___OptionsObject *)cpy_r_self)->__per_module_cache;
    CPy_INCREF(cpy_r_r109);
    if (likely(cpy_r_r109 != Py_None))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "build_per_module_cache", 471, CPyStatic_mypy___options___globals, "dict", cpy_r_r109);
        goto CPyL89;
    }
    cpy_r_r111 = CPyDict_SetItem(cpy_r_r110, cpy_r_key, cpy_r_r108);
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 471, CPyStatic_mypy___options___globals);
        goto CPyL86;
    }
    cpy_r_r113 = cpy_r_r97 + 2;
    cpy_r_r97 = cpy_r_r113;
    goto CPyL50;
CPyL59: ;
    cpy_r_r114 = ((mypy___options___OptionsObject *)cpy_r_self)->_unused_configs;
    CPy_INCREF(cpy_r_r114);
    cpy_r_r115 = _PySet_Update(cpy_r_r114, cpy_r_structured_keys);
    CPy_DECREF(cpy_r_r114);
    CPy_DECREF(cpy_r_structured_keys);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 475, CPyStatic_mypy___options___globals);
        goto CPyL61;
    }
    return 1;
CPyL61: ;
    cpy_r_r117 = 2;
    return cpy_r_r117;
CPyL62: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL61;
CPyL63: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8.f2);
    goto CPyL11;
CPyL64: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    goto CPyL61;
CPyL65: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_k);
    goto CPyL61;
CPyL66: ;
    CPy_DECREF(cpy_r_k);
    goto CPyL10;
CPyL67: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL61;
CPyL68: ;
    CPy_DecRef(cpy_r_unstructured_glob_keys);
    goto CPyL61;
CPyL69: ;
    CPy_DecRef(cpy_r_unstructured_glob_keys);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    goto CPyL61;
CPyL70: ;
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r29.f2);
    goto CPyL22;
CPyL71: ;
    CPy_DecRef(cpy_r_unstructured_glob_keys);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    goto CPyL61;
CPyL72: ;
    CPy_DecRef(cpy_r_unstructured_glob_keys);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_k_2);
    goto CPyL61;
CPyL73: ;
    CPy_DECREF(cpy_r_k_2);
    goto CPyL21;
CPyL74: ;
    CPy_DecRef(cpy_r_unstructured_glob_keys);
    CPy_DecRef(cpy_r_r23);
    goto CPyL61;
CPyL75: ;
    CPy_DecRef(cpy_r_unstructured_glob_keys);
    CPy_DecRef(cpy_r_structured_keys);
    goto CPyL61;
CPyL76: ;
    CPy_DecRef(cpy_r_unstructured_glob_keys);
    CPy_DecRef(cpy_r_structured_keys);
    CPy_DecRef(cpy_r_r45);
    goto CPyL61;
CPyL77: ;
    CPy_DECREF(cpy_r_k_3);
    goto CPyL29;
CPyL78: ;
    CPy_DecRef(cpy_r_unstructured_glob_keys);
    CPy_DecRef(cpy_r_structured_keys);
    CPy_DecRef(cpy_r_wildcards);
    goto CPyL61;
CPyL79: ;
    CPy_DecRef(cpy_r_unstructured_glob_keys);
    CPy_DecRef(cpy_r_structured_keys);
    CPy_DecRef(cpy_r_wildcards);
    CPy_DecRef(cpy_r_r65);
    goto CPyL61;
CPyL80: ;
    CPy_DECREF(cpy_r_k_4);
    goto CPyL39;
CPyL81: ;
    CPy_DecRef(cpy_r_unstructured_glob_keys);
    CPy_DecRef(cpy_r_structured_keys);
    CPy_DecRef(cpy_r_wildcards);
    CPy_DecRef(cpy_r_concrete);
    goto CPyL61;
CPyL82: ;
    CPy_DecRef(cpy_r_unstructured_glob_keys);
    CPy_DecRef(cpy_r_structured_keys);
    CPy_DecRef(cpy_r_wildcards);
    CPy_DecRef(cpy_r_concrete);
    CPy_DecRef(cpy_r_glob);
    CPy_DecRef(cpy_r_r86);
    goto CPyL61;
CPyL83: ;
    CPy_DecRef(cpy_r_structured_keys);
    CPy_DecRef(cpy_r_wildcards);
    CPy_DecRef(cpy_r_concrete);
    goto CPyL61;
CPyL84: ;
    CPy_DecRef(cpy_r_structured_keys);
    goto CPyL61;
CPyL85: ;
    CPy_DECREF(cpy_r_r96);
    goto CPyL59;
CPyL86: ;
    CPy_DecRef(cpy_r_structured_keys);
    CPy_DecRef(cpy_r_r96);
    goto CPyL61;
CPyL87: ;
    CPy_DecRef(cpy_r_structured_keys);
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_key);
    goto CPyL61;
CPyL88: ;
    CPy_DecRef(cpy_r_structured_keys);
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_options);
    goto CPyL61;
CPyL89: ;
    CPy_DecRef(cpy_r_structured_keys);
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r108);
    goto CPyL61;
}

PyObject *CPyPy_mypy___options___Options___build_per_module_cache(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":build_per_module_cache", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___options___Options))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.options.Options", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___options___Options___build_per_module_cache(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/options.py", "build_per_module_cache", 434, CPyStatic_mypy___options___globals);
    return NULL;
}

PyObject *CPyDef_mypy___options___Options___clone_for_module(PyObject *cpy_r_self, PyObject *cpy_r_module) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_options;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_path;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_i;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    tuple_T2OO cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_pattern;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_r77;
    cpy_r_r0 = ((mypy___options___OptionsObject *)cpy_r_self)->__per_module_cache;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (!cpy_r_r2) goto CPyL2;
    cpy_r_r3 = CPyDef_mypy___options___Options___build_per_module_cache(cpy_r_self);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 484, CPyStatic_mypy___options___globals);
        goto CPyL45;
    }
CPyL2: ;
    cpy_r_r4 = ((mypy___options___OptionsObject *)cpy_r_self)->__per_module_cache;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 != cpy_r_r5;
    if (cpy_r_r6) goto CPyL5;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 485, CPyStatic_mypy___options___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r8 = ((mypy___options___OptionsObject *)cpy_r_self)->__per_module_cache;
    CPy_INCREF(cpy_r_r8);
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "clone_for_module", 488, CPyStatic_mypy___options___globals, "dict", cpy_r_r8);
        goto CPyL45;
    }
    cpy_r_r10 = PyDict_Contains(cpy_r_r9, cpy_r_module);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 488, CPyStatic_mypy___options___globals);
        goto CPyL45;
    }
    cpy_r_r12 = cpy_r_r10;
    if (!cpy_r_r12) goto CPyL13;
    cpy_r_r13 = ((mypy___options___OptionsObject *)cpy_r_self)->_unused_configs;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = PySet_Discard(cpy_r_r13, cpy_r_module);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 489, CPyStatic_mypy___options___globals);
        goto CPyL45;
    }
    cpy_r_r16 = ((mypy___options___OptionsObject *)cpy_r_self)->__per_module_cache;
    CPy_INCREF(cpy_r_r16);
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "clone_for_module", 490, CPyStatic_mypy___options___globals, "dict", cpy_r_r16);
        goto CPyL45;
    }
    cpy_r_r18 = CPyDict_GetItem(cpy_r_r17, cpy_r_module);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 490, CPyStatic_mypy___options___globals);
        goto CPyL45;
    }
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_mypy___options___Options))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "clone_for_module", 490, CPyStatic_mypy___options___globals, "mypy.options.Options", cpy_r_r18);
        goto CPyL45;
    }
    return cpy_r_r19;
CPyL13: ;
    CPy_INCREF(cpy_r_self);
    cpy_r_options = cpy_r_self;
    cpy_r_r20 = CPyStatics[224]; /* '.' */
    cpy_r_r21 = PyUnicode_Split(cpy_r_module, cpy_r_r20, -1);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 498, CPyStatic_mypy___options___globals);
        goto CPyL46;
    }
    cpy_r_path = cpy_r_r21;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_path)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = cpy_r_r24;
    cpy_r_i = cpy_r_r25;
CPyL15: ;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r25 > (Py_ssize_t)0;
    if (!cpy_r_r26) goto CPyL47;
    cpy_r_r27 = CPyStatics[224]; /* '.' */
    cpy_r_r28 = CPyList_GetSlice(cpy_r_path, 0, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 500, CPyStatic_mypy___options___globals);
        goto CPyL48;
    }
    if (likely(PyList_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "clone_for_module", 500, CPyStatic_mypy___options___globals, "list", cpy_r_r28);
        goto CPyL48;
    }
    cpy_r_r30 = CPyStatics[282]; /* '*' */
    cpy_r_r31 = PyList_New(1);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 500, CPyStatic_mypy___options___globals);
        goto CPyL49;
    }
    cpy_r_r32 = (CPyPtr)&((PyListObject *)cpy_r_r31)->ob_item;
    cpy_r_r33 = *(CPyPtr *)cpy_r_r32;
    CPy_INCREF(cpy_r_r30);
    *(PyObject * *)cpy_r_r33 = cpy_r_r30;
    cpy_r_r34 = PyNumber_Add(cpy_r_r29, cpy_r_r31);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 500, CPyStatic_mypy___options___globals);
        goto CPyL48;
    }
    if (likely(PyList_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "clone_for_module", 500, CPyStatic_mypy___options___globals, "list", cpy_r_r34);
        goto CPyL48;
    }
    cpy_r_r36 = PyUnicode_Join(cpy_r_r27, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 500, CPyStatic_mypy___options___globals);
        goto CPyL48;
    }
    cpy_r_key = cpy_r_r36;
    cpy_r_r37 = ((mypy___options___OptionsObject *)cpy_r_self)->__per_module_cache;
    CPy_INCREF(cpy_r_r37);
    if (likely(cpy_r_r37 != Py_None))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "clone_for_module", 501, CPyStatic_mypy___options___globals, "dict", cpy_r_r37);
        goto CPyL50;
    }
    cpy_r_r39 = PyDict_Contains(cpy_r_r38, cpy_r_key);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 501, CPyStatic_mypy___options___globals);
        goto CPyL50;
    }
    cpy_r_r41 = cpy_r_r39;
    if (cpy_r_r41) {
        goto CPyL51;
    } else
        goto CPyL52;
CPyL25: ;
    cpy_r_r42 = ((mypy___options___OptionsObject *)cpy_r_self)->_unused_configs;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = PySet_Discard(cpy_r_r42, cpy_r_key);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 502, CPyStatic_mypy___options___globals);
        goto CPyL53;
    }
    cpy_r_r45 = ((mypy___options___OptionsObject *)cpy_r_self)->__per_module_cache;
    CPy_INCREF(cpy_r_r45);
    if (likely(cpy_r_r45 != Py_None))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "clone_for_module", 503, CPyStatic_mypy___options___globals, "dict", cpy_r_r45);
        goto CPyL53;
    }
    cpy_r_r47 = CPyDict_GetItem(cpy_r_r46, cpy_r_key);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 503, CPyStatic_mypy___options___globals);
        goto CPyL45;
    }
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_mypy___options___Options))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "clone_for_module", 503, CPyStatic_mypy___options___globals, "mypy.options.Options", cpy_r_r47);
        goto CPyL45;
    }
    cpy_r_options = cpy_r_r48;
    goto CPyL31;
CPyL30: ;
    cpy_r_r49 = cpy_r_r25 + -2;
    cpy_r_r25 = cpy_r_r49;
    cpy_r_i = cpy_r_r49;
    goto CPyL15;
CPyL31: ;
    cpy_r_r50 = CPyStatics[4229]; /* '.*' */
    cpy_r_r51 = CPyStr_Endswith(cpy_r_module, cpy_r_r50);
    if (cpy_r_r51) goto CPyL44;
    cpy_r_r52 = ((mypy___options___OptionsObject *)cpy_r_self)->__glob_options;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = 0;
CPyL33: ;
    cpy_r_r54 = (CPyPtr)&((PyVarObject *)cpy_r_r52)->ob_size;
    cpy_r_r55 = *(int64_t *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 << 1;
    cpy_r_r57 = (Py_ssize_t)cpy_r_r53 < (Py_ssize_t)cpy_r_r56;
    if (!cpy_r_r57) goto CPyL54;
    cpy_r_r58 = CPyList_GetItemUnsafe(cpy_r_r52, cpy_r_r53);
    PyObject *__tmp4606;
    if (unlikely(!(PyTuple_Check(cpy_r_r58) && PyTuple_GET_SIZE(cpy_r_r58) == 2))) {
        __tmp4606 = NULL;
        goto __LL4607;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r58, 0))))
        __tmp4606 = PyTuple_GET_ITEM(cpy_r_r58, 0);
    else {
        __tmp4606 = NULL;
    }
    if (__tmp4606 == NULL) goto __LL4607;
    __tmp4606 = PyTuple_GET_ITEM(cpy_r_r58, 1);
    if (__tmp4606 == NULL) goto __LL4607;
    __tmp4606 = cpy_r_r58;
__LL4607: ;
    if (unlikely(__tmp4606 == NULL)) {
        CPy_TypeError("tuple[str, object]", cpy_r_r58); cpy_r_r59 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp4608 = PyTuple_GET_ITEM(cpy_r_r58, 0);
        CPy_INCREF(__tmp4608);
        PyObject *__tmp4609;
        if (likely(PyUnicode_Check(__tmp4608)))
            __tmp4609 = __tmp4608;
        else {
            CPy_TypeError("str", __tmp4608); 
            __tmp4609 = NULL;
        }
        cpy_r_r59.f0 = __tmp4609;
        PyObject *__tmp4610 = PyTuple_GET_ITEM(cpy_r_r58, 1);
        CPy_INCREF(__tmp4610);
        PyObject *__tmp4611;
        __tmp4611 = __tmp4610;
        cpy_r_r59.f1 = __tmp4611;
    }
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59.f0 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 509, CPyStatic_mypy___options___globals);
        goto CPyL55;
    }
    cpy_r_r60 = cpy_r_r59.f0;
    CPy_INCREF(cpy_r_r60);
    cpy_r_key = cpy_r_r60;
    cpy_r_r61 = cpy_r_r59.f1;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r59.f0);
    CPy_DECREF(cpy_r_r59.f1);
    cpy_r_pattern = cpy_r_r61;
    cpy_r_r62 = CPyStatics[210]; /* 'match' */
    PyObject *cpy_r_r63[2] = {cpy_r_pattern, cpy_r_module};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = PyObject_VectorcallMethod(cpy_r_r62, cpy_r_r64, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 510, CPyStatic_mypy___options___globals);
        goto CPyL56;
    }
    CPy_DECREF(cpy_r_pattern);
    cpy_r_r66 = PyObject_IsTrue(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 510, CPyStatic_mypy___options___globals);
        goto CPyL57;
    }
    cpy_r_r68 = cpy_r_r66;
    if (!cpy_r_r68) goto CPyL58;
    cpy_r_r69 = ((mypy___options___OptionsObject *)cpy_r_self)->_unused_configs;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r70 = PySet_Discard(cpy_r_r69, cpy_r_key);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 511, CPyStatic_mypy___options___globals);
        goto CPyL57;
    }
    cpy_r_r72 = ((mypy___options___OptionsObject *)cpy_r_self)->_per_module_options;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = CPyDict_GetItem(cpy_r_r72, cpy_r_key);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 512, CPyStatic_mypy___options___globals);
        goto CPyL55;
    }
    if (likely(PyDict_Check(cpy_r_r73)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "clone_for_module", 512, CPyStatic_mypy___options___globals, "dict", cpy_r_r73);
        goto CPyL55;
    }
    cpy_r_r75 = CPyDef_mypy___options___Options___apply_changes(cpy_r_options, cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_options);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "clone_for_module", 512, CPyStatic_mypy___options___globals);
        goto CPyL59;
    }
    cpy_r_options = cpy_r_r75;
CPyL43: ;
    cpy_r_r76 = cpy_r_r53 + 2;
    cpy_r_r53 = cpy_r_r76;
    goto CPyL33;
CPyL44: ;
    return cpy_r_options;
CPyL45: ;
    cpy_r_r77 = NULL;
    return cpy_r_r77;
CPyL46: ;
    CPy_DecRef(cpy_r_options);
    goto CPyL45;
CPyL47: ;
    CPy_DECREF(cpy_r_path);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL31;
CPyL48: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_path);
    goto CPyL45;
CPyL49: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r29);
    goto CPyL45;
CPyL50: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_key);
    goto CPyL45;
CPyL51: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_path);
    goto CPyL25;
CPyL52: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL30;
CPyL53: ;
    CPy_DecRef(cpy_r_key);
    goto CPyL45;
CPyL54: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL44;
CPyL55: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r52);
    goto CPyL45;
CPyL56: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_pattern);
    goto CPyL45;
CPyL57: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r52);
    goto CPyL45;
CPyL58: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL43;
CPyL59: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL45;
}

PyObject *CPyPy_mypy___options___Options___clone_for_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", 0};
    static CPyArg_Parser parser = {"O:clone_for_module", kwlist, 0};
    PyObject *obj_module;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_module)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___options___Options))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.options.Options", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___options___Options___clone_for_module(arg_self, arg_module);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/options.py", "clone_for_module", 477, CPyStatic_mypy___options___globals);
    return NULL;
}

PyObject *CPyDef_mypy___options___Options___compile_glob(PyObject *cpy_r_self, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_parts;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
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
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_part;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    cpy_r_r0 = CPyStatics[224]; /* '.' */
    cpy_r_r1 = PyUnicode_Split(cpy_r_s, cpy_r_r0, -1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 524, CPyStatic_mypy___options___globals);
        goto CPyL36;
    }
    cpy_r_parts = cpy_r_r1;
    cpy_r_r2 = CPyList_GetItemShort(cpy_r_parts, 0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 525, CPyStatic_mypy___options___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "compile_glob", 525, CPyStatic_mypy___options___globals, "str", cpy_r_r2);
        goto CPyL37;
    }
    cpy_r_r4 = CPyStatics[282]; /* '*' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL6;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL6;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 525, CPyStatic_mypy___options___globals);
        goto CPyL37;
    }
CPyL6: ;
    cpy_r_r10 = cpy_r_r5 != 0;
    if (!cpy_r_r10) goto CPyL13;
    cpy_r_r11 = CPyList_GetItemShort(cpy_r_parts, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 525, CPyStatic_mypy___options___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "compile_glob", 525, CPyStatic_mypy___options___globals, "str", cpy_r_r11);
        goto CPyL37;
    }
    cpy_r_r13 = CPyModule_re;
    cpy_r_r14 = CPyStatics[4230]; /* 'escape' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 525, CPyStatic_mypy___options___globals);
        goto CPyL38;
    }
    PyObject *cpy_r_r16[1] = {cpy_r_r12};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 1, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 525, CPyStatic_mypy___options___globals);
        goto CPyL38;
    }
    CPy_DECREF(cpy_r_r12);
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "compile_glob", 525, CPyStatic_mypy___options___globals, "str", cpy_r_r18);
        goto CPyL37;
    }
    cpy_r_r20 = cpy_r_r19;
    goto CPyL14;
CPyL13: ;
    cpy_r_r21 = CPyStatics[4229]; /* '.*' */
    CPy_INCREF(cpy_r_r21);
    cpy_r_r20 = cpy_r_r21;
CPyL14: ;
    cpy_r_expr = cpy_r_r20;
    cpy_r_r22 = CPyList_GetSlice(cpy_r_parts, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_parts);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 526, CPyStatic_mypy___options___globals);
        goto CPyL39;
    }
    if (likely(PyList_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "compile_glob", 526, CPyStatic_mypy___options___globals, "list", cpy_r_r22);
        goto CPyL39;
    }
    cpy_r_r24 = 0;
CPyL17: ;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_r23)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r24 < (Py_ssize_t)cpy_r_r27;
    if (!cpy_r_r28) goto CPyL40;
    cpy_r_r29 = CPyList_GetItemUnsafe(cpy_r_r23, cpy_r_r24);
    if (likely(PyUnicode_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "compile_glob", 526, CPyStatic_mypy___options___globals, "str", cpy_r_r29);
        goto CPyL41;
    }
    cpy_r_part = cpy_r_r30;
    cpy_r_r31 = CPyStatics[282]; /* '*' */
    cpy_r_r32 = PyUnicode_Compare(cpy_r_part, cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 == -1;
    if (!cpy_r_r33) goto CPyL22;
    cpy_r_r34 = PyErr_Occurred();
    cpy_r_r35 = cpy_r_r34 != NULL;
    if (!cpy_r_r35) goto CPyL22;
    cpy_r_r36 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 527, CPyStatic_mypy___options___globals);
        goto CPyL42;
    }
CPyL22: ;
    cpy_r_r37 = cpy_r_r32 != 0;
    if (!cpy_r_r37) goto CPyL43;
    cpy_r_r38 = CPyStatics[224]; /* '.' */
    cpy_r_r39 = PyUnicode_Concat(cpy_r_r38, cpy_r_part);
    CPy_DECREF(cpy_r_part);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 527, CPyStatic_mypy___options___globals);
        goto CPyL41;
    }
    cpy_r_r40 = CPyModule_re;
    cpy_r_r41 = CPyStatics[4230]; /* 'escape' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 527, CPyStatic_mypy___options___globals);
        goto CPyL44;
    }
    PyObject *cpy_r_r43[1] = {cpy_r_r39};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = _PyObject_Vectorcall(cpy_r_r42, cpy_r_r44, 1, 0);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 527, CPyStatic_mypy___options___globals);
        goto CPyL44;
    }
    CPy_DECREF(cpy_r_r39);
    if (likely(PyUnicode_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "compile_glob", 527, CPyStatic_mypy___options___globals, "str", cpy_r_r45);
        goto CPyL41;
    }
    cpy_r_r47 = cpy_r_r46;
    goto CPyL29;
CPyL28: ;
    cpy_r_r48 = CPyStatics[4231]; /* '(\\..*)?' */
    CPy_INCREF(cpy_r_r48);
    cpy_r_r47 = cpy_r_r48;
CPyL29: ;
    cpy_r_r49 = CPyStr_Append(cpy_r_expr, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 527, CPyStatic_mypy___options___globals);
        goto CPyL45;
    }
    cpy_r_expr = cpy_r_r49;
    cpy_r_r50 = cpy_r_r24 + 2;
    cpy_r_r24 = cpy_r_r50;
    goto CPyL17;
CPyL32: ;
    cpy_r_r51 = CPyStatics[4232]; /* '\\Z' */
    cpy_r_r52 = PyUnicode_Concat(cpy_r_expr, cpy_r_r51);
    CPy_DECREF(cpy_r_expr);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 528, CPyStatic_mypy___options___globals);
        goto CPyL36;
    }
    cpy_r_r53 = CPyModule_re;
    cpy_r_r54 = CPyStatics[1385]; /* 'compile' */
    cpy_r_r55 = CPyObject_GetAttr(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 528, CPyStatic_mypy___options___globals);
        goto CPyL46;
    }
    PyObject *cpy_r_r56[1] = {cpy_r_r52};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = _PyObject_Vectorcall(cpy_r_r55, cpy_r_r57, 1, 0);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "compile_glob", 528, CPyStatic_mypy___options___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r52);
    return cpy_r_r58;
CPyL36: ;
    cpy_r_r59 = NULL;
    return cpy_r_r59;
CPyL37: ;
    CPy_DecRef(cpy_r_parts);
    goto CPyL36;
CPyL38: ;
    CPy_DecRef(cpy_r_parts);
    CPy_DecRef(cpy_r_r12);
    goto CPyL36;
CPyL39: ;
    CPy_DecRef(cpy_r_expr);
    goto CPyL36;
CPyL40: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL32;
CPyL41: ;
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_r23);
    goto CPyL36;
CPyL42: ;
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_part);
    goto CPyL36;
CPyL43: ;
    CPy_DECREF(cpy_r_part);
    goto CPyL28;
CPyL44: ;
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r39);
    goto CPyL36;
CPyL45: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL36;
CPyL46: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL36;
}

PyObject *CPyPy_mypy___options___Options___compile_glob(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:compile_glob", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___options___Options))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.options.Options", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(PyUnicode_Check(obj_s)))
        arg_s = obj_s;
    else {
        CPy_TypeError("str", obj_s); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___options___Options___compile_glob(arg_self, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/options.py", "compile_glob", 520, CPyStatic_mypy___options___globals);
    return NULL;
}

PyObject *CPyDef_mypy___options___Options___select_options_affecting_cache(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_opt;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_code;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", 531, CPyStatic_mypy___options___globals);
        goto CPyL31;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = CPyStatic_mypy___options___OPTIONS_AFFECTING_CACHE;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL32;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"OPTIONS_AFFECTING_CACHE\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", 532, CPyStatic_mypy___options___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = PyObject_GetIter(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", 532, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
CPyL5: ;
    cpy_r_r4 = PyIter_Next(cpy_r_r3);
    if (cpy_r_r4 == NULL) goto CPyL34;
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "select_options_affecting_cache", 532, CPyStatic_mypy___options___globals, "str", cpy_r_r4);
        goto CPyL35;
    }
    cpy_r_opt = cpy_r_r5;
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_self, cpy_r_opt);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", 533, CPyStatic_mypy___options___globals);
        goto CPyL36;
    }
    cpy_r_val = cpy_r_r6;
    cpy_r_r7 = CPyStatics[4233]; /* 'disabled_error_codes' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_opt, cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL11;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL11;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", -1, CPyStatic_mypy___options___globals);
        goto CPyL37;
    }
CPyL11: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    if (!cpy_r_r13) goto CPyL13;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL17;
CPyL13: ;
    cpy_r_r15 = CPyStatics[4234]; /* 'enabled_error_codes' */
    cpy_r_r16 = PyUnicode_Compare(cpy_r_opt, cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 == -1;
    if (!cpy_r_r17) goto CPyL16;
    cpy_r_r18 = PyErr_Occurred();
    cpy_r_r19 = cpy_r_r18 != NULL;
    if (!cpy_r_r19) goto CPyL16;
    cpy_r_r20 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", -1, CPyStatic_mypy___options___globals);
        goto CPyL37;
    }
CPyL16: ;
    cpy_r_r21 = cpy_r_r16 == 0;
    cpy_r_r14 = cpy_r_r21;
CPyL17: ;
    if (!cpy_r_r14) goto CPyL28;
    cpy_r_r22 = PyList_New(0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", 535, CPyStatic_mypy___options___globals);
        goto CPyL37;
    }
    cpy_r_r23 = PyObject_GetIter(cpy_r_val);
    CPy_DECREF(cpy_r_val);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", 535, CPyStatic_mypy___options___globals);
        goto CPyL38;
    }
CPyL20: ;
    cpy_r_r24 = PyIter_Next(cpy_r_r23);
    if (cpy_r_r24 == NULL) goto CPyL39;
    cpy_r_code = cpy_r_r24;
    cpy_r_r25 = CPyStatics[6]; /* 'code' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_code, cpy_r_r25);
    CPy_DECREF(cpy_r_code);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", 535, CPyStatic_mypy___options___globals);
        goto CPyL40;
    }
    cpy_r_r27 = PyList_Append(cpy_r_r22, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", 535, CPyStatic_mypy___options___globals);
        goto CPyL40;
    } else
        goto CPyL20;
CPyL23: ;
    cpy_r_r29 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", 535, CPyStatic_mypy___options___globals);
        goto CPyL38;
    }
    cpy_r_r30 = CPyModule_builtins;
    cpy_r_r31 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", 535, CPyStatic_mypy___options___globals);
        goto CPyL38;
    }
    PyObject *cpy_r_r33[1] = {cpy_r_r22};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 1, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", 535, CPyStatic_mypy___options___globals);
        goto CPyL38;
    }
    CPy_DECREF(cpy_r_r22);
    if (likely(PyList_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "select_options_affecting_cache", 535, CPyStatic_mypy___options___globals, "list", cpy_r_r35);
        goto CPyL36;
    }
    cpy_r_val = cpy_r_r36;
CPyL28: ;
    cpy_r_r37 = CPyDict_SetItem(cpy_r_result, cpy_r_opt, cpy_r_val);
    CPy_DECREF(cpy_r_opt);
    CPy_DECREF(cpy_r_val);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", 536, CPyStatic_mypy___options___globals);
        goto CPyL35;
    } else
        goto CPyL5;
CPyL29: ;
    cpy_r_r39 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", 532, CPyStatic_mypy___options___globals);
        goto CPyL33;
    }
    return cpy_r_result;
CPyL31: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL32: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL2;
CPyL33: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL31;
CPyL34: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL29;
CPyL35: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r3);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_opt);
    goto CPyL31;
CPyL37: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_opt);
    CPy_DecRef(cpy_r_val);
    goto CPyL31;
CPyL38: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_opt);
    CPy_DecRef(cpy_r_r22);
    goto CPyL31;
CPyL39: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL23;
CPyL40: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_opt);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    goto CPyL31;
}

PyObject *CPyPy_mypy___options___Options___select_options_affecting_cache(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":select_options_affecting_cache", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___options___Options))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.options.Options", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___options___Options___select_options_affecting_cache(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/options.py", "select_options_affecting_cache", 530, CPyStatic_mypy___options___globals);
    return NULL;
}

char CPyDef_mypy___options_____top_level__(void) {
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
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
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
    int32_t cpy_r_r106;
    char cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    int32_t cpy_r_r110;
    char cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    int32_t cpy_r_r118;
    char cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    int32_t cpy_r_r126;
    char cpy_r_r127;
    int32_t cpy_r_r128;
    char cpy_r_r129;
    int32_t cpy_r_r130;
    char cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    int32_t cpy_r_r134;
    char cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    int32_t cpy_r_r140;
    char cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    int32_t cpy_r_r146;
    char cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    int32_t cpy_r_r150;
    char cpy_r_r151;
    int32_t cpy_r_r152;
    char cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    int32_t cpy_r_r156;
    char cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    int32_t cpy_r_r160;
    char cpy_r_r161;
    int32_t cpy_r_r162;
    char cpy_r_r163;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    int32_t cpy_r_r166;
    char cpy_r_r167;
    int32_t cpy_r_r168;
    char cpy_r_r169;
    int32_t cpy_r_r170;
    char cpy_r_r171;
    int32_t cpy_r_r172;
    char cpy_r_r173;
    int32_t cpy_r_r174;
    char cpy_r_r175;
    int32_t cpy_r_r176;
    char cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    int32_t cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    int32_t cpy_r_r190;
    char cpy_r_r191;
    int32_t cpy_r_r192;
    char cpy_r_r193;
    int32_t cpy_r_r194;
    char cpy_r_r195;
    int32_t cpy_r_r196;
    char cpy_r_r197;
    int32_t cpy_r_r198;
    char cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    int32_t cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    int32_t cpy_r_r210;
    char cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    int32_t cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    int32_t cpy_r_r220;
    char cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    tuple_T2OO cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    int32_t cpy_r_r229;
    char cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
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
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
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
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    int32_t cpy_r_r360;
    char cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    int32_t cpy_r_r364;
    char cpy_r_r365;
    char cpy_r_r366;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", -1, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_mypy___options___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 1, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_pprint;
    cpy_r_r10 = (PyObject **)&CPyModule_re;
    cpy_r_r11 = (PyObject **)&CPyModule_sys;
    cpy_r_r12 = (PyObject **)&CPyModule_sysconfig;
    PyObject **cpy_r_r13[4] = {cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12};
    cpy_r_r14 = (void *)&cpy_r_r13;
    int64_t cpy_r_r15[4] = {3, 4, 5, 6};
    cpy_r_r16 = (void *)&cpy_r_r15;
    cpy_r_r17 = CPyStatics[9561]; /* (('pprint', 'pprint', 'pprint'), ('re', 're', 're'),
                                     ('sys', 'sys', 'sys'),
                                     ('sysconfig', 'sysconfig', 'sysconfig')) */
    cpy_r_r18 = CPyStatic_mypy___options___globals;
    cpy_r_r19 = CPyStatics[4237]; /* 'mypy/options.py' */
    cpy_r_r20 = CPyStatics[17]; /* '<module>' */
    cpy_r_r21 = CPyImport_ImportMany(cpy_r_r17, cpy_r_r14, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r16);
    if (!cpy_r_r21) goto CPyL81;
    cpy_r_r22 = CPyStatics[9562]; /* ('Any', 'Callable', 'Final', 'Mapping', 'Pattern') */
    cpy_r_r23 = CPyStatics[21]; /* 'typing' */
    cpy_r_r24 = CPyStatic_mypy___options___globals;
    cpy_r_r25 = CPyImport_ImportFromMany(cpy_r_r23, cpy_r_r22, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 7, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    CPyModule_typing = cpy_r_r25;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[9283]; /* ('defaults',) */
    cpy_r_r27 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r28 = CPyStatic_mypy___options___globals;
    cpy_r_r29 = CPyImport_ImportFromMany(cpy_r_r27, cpy_r_r26, cpy_r_r26, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 9, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    CPyModule_mypy = cpy_r_r29;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r30 = CPyStatics[9563]; /* ('ErrorCode', 'error_codes') */
    cpy_r_r31 = CPyStatics[924]; /* 'mypy.errorcodes' */
    cpy_r_r32 = CPyStatic_mypy___options___globals;
    cpy_r_r33 = CPyImport_ImportFromMany(cpy_r_r31, cpy_r_r30, cpy_r_r30, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 10, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    CPyModule_mypy___errorcodes = cpy_r_r33;
    CPy_INCREF(CPyModule_mypy___errorcodes);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r34 = CPyStatics[9564]; /* ('get_class_descriptors', 'replace_object_state') */
    cpy_r_r35 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r36 = CPyStatic_mypy___options___globals;
    cpy_r_r37 = CPyImport_ImportFromMany(cpy_r_r35, cpy_r_r34, cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 11, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    CPyModule_mypy___util = cpy_r_r37;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r38 = NULL;
    cpy_r_r39 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r40 = (PyObject *)CPyType_mypy___options___BuildType_template;
    cpy_r_r41 = CPyType_FromTemplate(cpy_r_r40, cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 14, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    cpy_r_r42 = CPyDef_mypy___options___BuildType_trait_vtable_setup();
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/options.py", "<module>", -1, CPyStatic_mypy___options___globals);
        goto CPyL82;
    }
    cpy_r_r43 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r44 = CPyStatics[4239]; /* 'STANDARD' */
    cpy_r_r45 = CPyStatics[2930]; /* 'MODULE' */
    cpy_r_r46 = CPyStatics[3019]; /* 'PROGRAM_TEXT' */
    cpy_r_r47 = PyTuple_Pack(3, cpy_r_r44, cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 14, CPyStatic_mypy___options___globals);
        goto CPyL82;
    }
    cpy_r_r48 = PyObject_SetAttr(cpy_r_r41, cpy_r_r43, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 14, CPyStatic_mypy___options___globals);
        goto CPyL82;
    }
    CPyType_mypy___options___BuildType = (PyTypeObject *)cpy_r_r41;
    CPy_INCREF(CPyType_mypy___options___BuildType);
    cpy_r_r50 = CPyStatic_mypy___options___globals;
    cpy_r_r51 = CPyStatics[3077]; /* 'BuildType' */
    cpy_r_r52 = CPyDict_SetItem(cpy_r_r50, cpy_r_r51, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 14, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    cpy_r_r54 = (PyObject *)CPyType_mypy___options___BuildType;
    cpy_r_r55 = CPyStatics[4239]; /* 'STANDARD' */
    cpy_r_r56 = CPyStatics[9015]; /* 0 */
    cpy_r_r57 = PyObject_SetAttr(cpy_r_r54, cpy_r_r55, cpy_r_r56);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 15, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    cpy_r_r59 = (PyObject *)CPyType_mypy___options___BuildType;
    cpy_r_r60 = CPyStatics[2930]; /* 'MODULE' */
    cpy_r_r61 = CPyStatics[9016]; /* 1 */
    cpy_r_r62 = PyObject_SetAttr(cpy_r_r59, cpy_r_r60, cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 16, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    cpy_r_r64 = (PyObject *)CPyType_mypy___options___BuildType;
    cpy_r_r65 = CPyStatics[3019]; /* 'PROGRAM_TEXT' */
    cpy_r_r66 = CPyStatics[9018]; /* 2 */
    cpy_r_r67 = PyObject_SetAttr(cpy_r_r64, cpy_r_r65, cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 17, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    cpy_r_r69 = CPyStatics[4240]; /* 'allow_redefinition' */
    cpy_r_r70 = CPyStatics[4241]; /* 'allow_untyped_globals' */
    cpy_r_r71 = CPyStatics[1582]; /* 'always_false' */
    cpy_r_r72 = CPyStatics[1581]; /* 'always_true' */
    cpy_r_r73 = CPyStatics[4242]; /* 'check_untyped_defs' */
    cpy_r_r74 = CPyStatics[306]; /* 'debug_cache' */
    cpy_r_r75 = CPyStatics[1545]; /* 'disable_error_code' */
    cpy_r_r76 = CPyStatics[4233]; /* 'disabled_error_codes' */
    cpy_r_r77 = CPyStatics[4243]; /* 'disallow_any_decorated' */
    cpy_r_r78 = CPyStatics[4244]; /* 'disallow_any_explicit' */
    cpy_r_r79 = CPyStatics[4245]; /* 'disallow_any_expr' */
    cpy_r_r80 = CPyStatics[4246]; /* 'disallow_any_generics' */
    cpy_r_r81 = CPyStatics[4247]; /* 'disallow_any_unimported' */
    cpy_r_r82 = CPyStatics[4248]; /* 'disallow_incomplete_defs' */
    cpy_r_r83 = CPyStatics[4249]; /* 'disallow_subclassing_any' */
    cpy_r_r84 = CPyStatics[4250]; /* 'disallow_untyped_calls' */
    cpy_r_r85 = CPyStatics[4251]; /* 'disallow_untyped_decorators' */
    cpy_r_r86 = CPyStatics[4252]; /* 'disallow_untyped_defs' */
    cpy_r_r87 = CPyStatics[1546]; /* 'enable_error_code' */
    cpy_r_r88 = CPyStatics[4234]; /* 'enabled_error_codes' */
    cpy_r_r89 = CPyStatics[4253]; /* 'extra_checks' */
    cpy_r_r90 = CPyStatics[4254]; /* 'follow_imports_for_stubs' */
    cpy_r_r91 = CPyStatics[1578]; /* 'follow_imports' */
    cpy_r_r92 = CPyStatics[2526]; /* 'ignore_errors' */
    cpy_r_r93 = CPyStatics[4228]; /* 'ignore_missing_imports' */
    cpy_r_r94 = CPyStatics[4255]; /* 'implicit_optional' */
    cpy_r_r95 = CPyStatics[2865]; /* 'implicit_reexport' */
    cpy_r_r96 = CPyStatics[4256]; /* 'local_partial_types' */
    cpy_r_r97 = CPyStatics[4257]; /* 'mypyc' */
    cpy_r_r98 = CPyStatics[4258]; /* 'strict_concatenate' */
    cpy_r_r99 = CPyStatics[4259]; /* 'strict_equality' */
    cpy_r_r100 = CPyStatics[2842]; /* 'strict_optional' */
    cpy_r_r101 = CPyStatics[2853]; /* 'warn_no_return' */
    cpy_r_r102 = CPyStatics[4260]; /* 'warn_return_any' */
    cpy_r_r103 = CPyStatics[4261]; /* 'warn_unreachable' */
    cpy_r_r104 = CPyStatics[4262]; /* 'warn_unused_ignores' */
    cpy_r_r105 = PySet_New(NULL);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    cpy_r_r106 = PySet_Add(cpy_r_r105, cpy_r_r69);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r108 = PySet_Add(cpy_r_r105, cpy_r_r70);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r110 = PySet_Add(cpy_r_r105, cpy_r_r71);
    cpy_r_r111 = cpy_r_r110 >= 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r112 = PySet_Add(cpy_r_r105, cpy_r_r72);
    cpy_r_r113 = cpy_r_r112 >= 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r114 = PySet_Add(cpy_r_r105, cpy_r_r73);
    cpy_r_r115 = cpy_r_r114 >= 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r116 = PySet_Add(cpy_r_r105, cpy_r_r74);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r118 = PySet_Add(cpy_r_r105, cpy_r_r75);
    cpy_r_r119 = cpy_r_r118 >= 0;
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r120 = PySet_Add(cpy_r_r105, cpy_r_r76);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r122 = PySet_Add(cpy_r_r105, cpy_r_r77);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r124 = PySet_Add(cpy_r_r105, cpy_r_r78);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r126 = PySet_Add(cpy_r_r105, cpy_r_r79);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r128 = PySet_Add(cpy_r_r105, cpy_r_r80);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r130 = PySet_Add(cpy_r_r105, cpy_r_r81);
    cpy_r_r131 = cpy_r_r130 >= 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r132 = PySet_Add(cpy_r_r105, cpy_r_r82);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r134 = PySet_Add(cpy_r_r105, cpy_r_r83);
    cpy_r_r135 = cpy_r_r134 >= 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r136 = PySet_Add(cpy_r_r105, cpy_r_r84);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r138 = PySet_Add(cpy_r_r105, cpy_r_r85);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r140 = PySet_Add(cpy_r_r105, cpy_r_r86);
    cpy_r_r141 = cpy_r_r140 >= 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r142 = PySet_Add(cpy_r_r105, cpy_r_r87);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r144 = PySet_Add(cpy_r_r105, cpy_r_r88);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r146 = PySet_Add(cpy_r_r105, cpy_r_r89);
    cpy_r_r147 = cpy_r_r146 >= 0;
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r148 = PySet_Add(cpy_r_r105, cpy_r_r90);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r150 = PySet_Add(cpy_r_r105, cpy_r_r91);
    cpy_r_r151 = cpy_r_r150 >= 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r152 = PySet_Add(cpy_r_r105, cpy_r_r92);
    cpy_r_r153 = cpy_r_r152 >= 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r154 = PySet_Add(cpy_r_r105, cpy_r_r93);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r156 = PySet_Add(cpy_r_r105, cpy_r_r94);
    cpy_r_r157 = cpy_r_r156 >= 0;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r158 = PySet_Add(cpy_r_r105, cpy_r_r95);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r160 = PySet_Add(cpy_r_r105, cpy_r_r96);
    cpy_r_r161 = cpy_r_r160 >= 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r162 = PySet_Add(cpy_r_r105, cpy_r_r97);
    cpy_r_r163 = cpy_r_r162 >= 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r164 = PySet_Add(cpy_r_r105, cpy_r_r98);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r166 = PySet_Add(cpy_r_r105, cpy_r_r99);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r168 = PySet_Add(cpy_r_r105, cpy_r_r100);
    cpy_r_r169 = cpy_r_r168 >= 0;
    if (unlikely(!cpy_r_r169)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r170 = PySet_Add(cpy_r_r105, cpy_r_r101);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r172 = PySet_Add(cpy_r_r105, cpy_r_r102);
    cpy_r_r173 = cpy_r_r172 >= 0;
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r174 = PySet_Add(cpy_r_r105, cpy_r_r103);
    cpy_r_r175 = cpy_r_r174 >= 0;
    if (unlikely(!cpy_r_r175)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    cpy_r_r176 = PySet_Add(cpy_r_r105, cpy_r_r104);
    cpy_r_r177 = cpy_r_r176 >= 0;
    if (unlikely(!cpy_r_r177)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL83;
    }
    CPyStatic_mypy___options___PER_MODULE_OPTIONS = cpy_r_r105;
    CPy_INCREF(CPyStatic_mypy___options___PER_MODULE_OPTIONS);
    cpy_r_r178 = CPyStatic_mypy___options___globals;
    cpy_r_r179 = CPyStatics[1566]; /* 'PER_MODULE_OPTIONS' */
    cpy_r_r180 = CPyDict_SetItem(cpy_r_r178, cpy_r_r179, cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    cpy_r_r181 = cpy_r_r180 >= 0;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 20, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    cpy_r_r182 = CPyStatic_mypy___options___PER_MODULE_OPTIONS;
    if (likely(cpy_r_r182 != NULL)) goto CPyL58;
    PyErr_SetString(PyExc_NameError, "value for final name \"PER_MODULE_OPTIONS\" was not set");
    cpy_r_r183 = 0;
    if (unlikely(!cpy_r_r183)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 61, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL58: ;
    cpy_r_r184 = CPyStatics[305]; /* 'platform' */
    cpy_r_r185 = CPyStatics[4263]; /* 'bazel' */
    cpy_r_r186 = CPyStatics[169]; /* 'plugins' */
    cpy_r_r187 = CPyStatics[4264]; /* 'disable_bytearray_promotion' */
    cpy_r_r188 = CPyStatics[4265]; /* 'disable_memoryview_promotion' */
    cpy_r_r189 = PySet_New(NULL);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 62, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    cpy_r_r190 = PySet_Add(cpy_r_r189, cpy_r_r184);
    cpy_r_r191 = cpy_r_r190 >= 0;
    if (unlikely(!cpy_r_r191)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 62, CPyStatic_mypy___options___globals);
        goto CPyL84;
    }
    cpy_r_r192 = PySet_Add(cpy_r_r189, cpy_r_r185);
    cpy_r_r193 = cpy_r_r192 >= 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 62, CPyStatic_mypy___options___globals);
        goto CPyL84;
    }
    cpy_r_r194 = PySet_Add(cpy_r_r189, cpy_r_r186);
    cpy_r_r195 = cpy_r_r194 >= 0;
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 62, CPyStatic_mypy___options___globals);
        goto CPyL84;
    }
    cpy_r_r196 = PySet_Add(cpy_r_r189, cpy_r_r187);
    cpy_r_r197 = cpy_r_r196 >= 0;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 62, CPyStatic_mypy___options___globals);
        goto CPyL84;
    }
    cpy_r_r198 = PySet_Add(cpy_r_r189, cpy_r_r188);
    cpy_r_r199 = cpy_r_r198 >= 0;
    if (unlikely(!cpy_r_r199)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 62, CPyStatic_mypy___options___globals);
        goto CPyL84;
    }
    cpy_r_r200 = PyNumber_Or(cpy_r_r182, cpy_r_r189);
    CPy_DECREF(cpy_r_r189);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 61, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    if (likely(PySet_Check(cpy_r_r200)))
        cpy_r_r201 = cpy_r_r200;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "<module>", 61, CPyStatic_mypy___options___globals, "set", cpy_r_r200);
        goto CPyL81;
    }
    cpy_r_r202 = CPyStatics[306]; /* 'debug_cache' */
    cpy_r_r203 = PySet_New(NULL);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 69, CPyStatic_mypy___options___globals);
        goto CPyL85;
    }
    cpy_r_r204 = PySet_Add(cpy_r_r203, cpy_r_r202);
    cpy_r_r205 = cpy_r_r204 >= 0;
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 69, CPyStatic_mypy___options___globals);
        goto CPyL86;
    }
    cpy_r_r206 = PyNumber_Subtract(cpy_r_r201, cpy_r_r203);
    CPy_DECREF(cpy_r_r201);
    CPy_DECREF(cpy_r_r203);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 60, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    if (likely(PySet_Check(cpy_r_r206)))
        cpy_r_r207 = cpy_r_r206;
    else {
        CPy_TypeErrorTraceback("mypy/options.py", "<module>", 60, CPyStatic_mypy___options___globals, "set", cpy_r_r206);
        goto CPyL81;
    }
    CPyStatic_mypy___options___OPTIONS_AFFECTING_CACHE = cpy_r_r207;
    CPy_INCREF(CPyStatic_mypy___options___OPTIONS_AFFECTING_CACHE);
    cpy_r_r208 = CPyStatic_mypy___options___globals;
    cpy_r_r209 = CPyStatics[4266]; /* 'OPTIONS_AFFECTING_CACHE' */
    cpy_r_r210 = CPyDict_SetItem(cpy_r_r208, cpy_r_r209, cpy_r_r207);
    CPy_DECREF(cpy_r_r207);
    cpy_r_r211 = cpy_r_r210 >= 0;
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 60, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    cpy_r_r212 = CPyStatics[4267]; /* 'TypeVarTuple' */
    cpy_r_r213 = CPyStatic_mypy___options___globals;
    cpy_r_r214 = CPyStatics[4268]; /* 'TYPE_VAR_TUPLE' */
    cpy_r_r215 = CPyDict_SetItem(cpy_r_r213, cpy_r_r214, cpy_r_r212);
    cpy_r_r216 = cpy_r_r215 >= 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 72, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    cpy_r_r217 = CPyStatics[4269]; /* 'Unpack' */
    cpy_r_r218 = CPyStatic_mypy___options___globals;
    cpy_r_r219 = CPyStatics[4270]; /* 'UNPACK' */
    cpy_r_r220 = CPyDict_SetItem(cpy_r_r218, cpy_r_r219, cpy_r_r217);
    cpy_r_r221 = cpy_r_r220 >= 0;
    if (unlikely(!cpy_r_r221)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 73, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    cpy_r_r222 = CPyStatics[4267]; /* 'TypeVarTuple' */
    cpy_r_r223 = CPyStatics[4269]; /* 'Unpack' */
    cpy_r_r224.f0 = cpy_r_r222;
    cpy_r_r224.f1 = cpy_r_r223;
    CPy_INCREF(cpy_r_r224.f0);
    CPy_INCREF(cpy_r_r224.f1);
    cpy_r_r225 = PyTuple_New(2);
    if (unlikely(cpy_r_r225 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4612 = cpy_r_r224.f0;
    PyTuple_SET_ITEM(cpy_r_r225, 0, __tmp4612);
    PyObject *__tmp4613 = cpy_r_r224.f1;
    PyTuple_SET_ITEM(cpy_r_r225, 1, __tmp4613);
    cpy_r_r226 = PyFrozenSet_New(cpy_r_r225);
    CPy_DECREF(cpy_r_r225);
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 74, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    CPyStatic_mypy___options___INCOMPLETE_FEATURES = cpy_r_r226;
    CPy_INCREF(CPyStatic_mypy___options___INCOMPLETE_FEATURES);
    cpy_r_r227 = CPyStatic_mypy___options___globals;
    cpy_r_r228 = CPyStatics[3076]; /* 'INCOMPLETE_FEATURES' */
    cpy_r_r229 = CPyDict_SetItem(cpy_r_r227, cpy_r_r228, cpy_r_r226);
    CPy_DECREF(cpy_r_r226);
    cpy_r_r230 = cpy_r_r229 >= 0;
    if (unlikely(!cpy_r_r230)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 74, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    cpy_r_r231 = NULL;
    cpy_r_r232 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r233 = (PyObject *)CPyType_mypy___options___Options_template;
    cpy_r_r234 = CPyType_FromTemplate(cpy_r_r233, cpy_r_r231, cpy_r_r232);
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 77, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    cpy_r_r235 = CPyDef_mypy___options___Options_trait_vtable_setup();
    if (unlikely(cpy_r_r235 == 2)) {
        CPy_AddTraceback("mypy/options.py", "<module>", -1, CPyStatic_mypy___options___globals);
        goto CPyL87;
    }
    cpy_r_r236 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r237 = CPyStatics[4271]; /* '_per_module_cache' */
    cpy_r_r238 = CPyStatics[4272]; /* 'build_type' */
    cpy_r_r239 = CPyStatics[1569]; /* 'python_version' */
    cpy_r_r240 = CPyStatics[1585]; /* 'python_executable' */
    cpy_r_r241 = CPyStatics[305]; /* 'platform' */
    cpy_r_r242 = CPyStatics[1571]; /* 'custom_typing_module' */
    cpy_r_r243 = CPyStatics[1572]; /* 'custom_typeshed_dir' */
    cpy_r_r244 = CPyStatics[4273]; /* 'abs_custom_typeshed_dir' */
    cpy_r_r245 = CPyStatics[1574]; /* 'mypy_path' */
    cpy_r_r246 = CPyStatics[4274]; /* 'report_dirs' */
    cpy_r_r247 = CPyStatics[4275]; /* 'no_silence_site_packages' */
    cpy_r_r248 = CPyStatics[1580]; /* 'no_site_packages' */
    cpy_r_r249 = CPyStatics[4228]; /* 'ignore_missing_imports' */
    cpy_r_r250 = CPyStatics[4276]; /* 'ignore_missing_imports_per_module' */
    cpy_r_r251 = CPyStatics[1578]; /* 'follow_imports' */
    cpy_r_r252 = CPyStatics[4254]; /* 'follow_imports_for_stubs' */
    cpy_r_r253 = CPyStatics[2552]; /* 'namespace_packages' */
    cpy_r_r254 = CPyStatics[2551]; /* 'explicit_package_bases' */
    cpy_r_r255 = CPyStatics[1586]; /* 'exclude' */
    cpy_r_r256 = CPyStatics[4246]; /* 'disallow_any_generics' */
    cpy_r_r257 = CPyStatics[4247]; /* 'disallow_any_unimported' */
    cpy_r_r258 = CPyStatics[4245]; /* 'disallow_any_expr' */
    cpy_r_r259 = CPyStatics[4243]; /* 'disallow_any_decorated' */
    cpy_r_r260 = CPyStatics[4244]; /* 'disallow_any_explicit' */
    cpy_r_r261 = CPyStatics[4250]; /* 'disallow_untyped_calls' */
    cpy_r_r262 = CPyStatics[4252]; /* 'disallow_untyped_defs' */
    cpy_r_r263 = CPyStatics[4248]; /* 'disallow_incomplete_defs' */
    cpy_r_r264 = CPyStatics[4242]; /* 'check_untyped_defs' */
    cpy_r_r265 = CPyStatics[4251]; /* 'disallow_untyped_decorators' */
    cpy_r_r266 = CPyStatics[4249]; /* 'disallow_subclassing_any' */
    cpy_r_r267 = CPyStatics[4277]; /* 'warn_incomplete_stub' */
    cpy_r_r268 = CPyStatics[4278]; /* 'warn_redundant_casts' */
    cpy_r_r269 = CPyStatics[2853]; /* 'warn_no_return' */
    cpy_r_r270 = CPyStatics[4260]; /* 'warn_return_any' */
    cpy_r_r271 = CPyStatics[4262]; /* 'warn_unused_ignores' */
    cpy_r_r272 = CPyStatics[4279]; /* 'warn_unused_configs' */
    cpy_r_r273 = CPyStatics[2526]; /* 'ignore_errors' */
    cpy_r_r274 = CPyStatics[2842]; /* 'strict_optional' */
    cpy_r_r275 = CPyStatics[2297]; /* 'show_error_context' */
    cpy_r_r276 = CPyStatics[2893]; /* 'color_output' */
    cpy_r_r277 = CPyStatics[2896]; /* 'error_summary' */
    cpy_r_r278 = CPyStatics[4255]; /* 'implicit_optional' */
    cpy_r_r279 = CPyStatics[2865]; /* 'implicit_reexport' */
    cpy_r_r280 = CPyStatics[4241]; /* 'allow_untyped_globals' */
    cpy_r_r281 = CPyStatics[4240]; /* 'allow_redefinition' */
    cpy_r_r282 = CPyStatics[4259]; /* 'strict_equality' */
    cpy_r_r283 = CPyStatics[4258]; /* 'strict_concatenate' */
    cpy_r_r284 = CPyStatics[4253]; /* 'extra_checks' */
    cpy_r_r285 = CPyStatics[4261]; /* 'warn_unreachable' */
    cpy_r_r286 = CPyStatics[1581]; /* 'always_true' */
    cpy_r_r287 = CPyStatics[1582]; /* 'always_false' */
    cpy_r_r288 = CPyStatics[1545]; /* 'disable_error_code' */
    cpy_r_r289 = CPyStatics[4233]; /* 'disabled_error_codes' */
    cpy_r_r290 = CPyStatics[1546]; /* 'enable_error_code' */
    cpy_r_r291 = CPyStatics[4234]; /* 'enabled_error_codes' */
    cpy_r_r292 = CPyStatics[4280]; /* 'scripts_are_modules' */
    cpy_r_r293 = CPyStatics[3024]; /* 'config_file' */
    cpy_r_r294 = CPyStatics[1576]; /* 'quickstart_file' */
    cpy_r_r295 = CPyStatics[608]; /* 'files' */
    cpy_r_r296 = CPyStatics[1587]; /* 'packages' */
    cpy_r_r297 = CPyStatics[635]; /* 'modules' */
    cpy_r_r298 = CPyStatics[1577]; /* 'junit_xml' */
    cpy_r_r299 = CPyStatics[2906]; /* 'incremental' */
    cpy_r_r300 = CPyStatics[276]; /* 'cache_dir' */
    cpy_r_r301 = CPyStatics[4281]; /* 'sqlite_cache' */
    cpy_r_r302 = CPyStatics[306]; /* 'debug_cache' */
    cpy_r_r303 = CPyStatics[4282]; /* 'skip_version_check' */
    cpy_r_r304 = CPyStatics[4283]; /* 'skip_cache_mtime_checks' */
    cpy_r_r305 = CPyStatics[2973]; /* 'fine_grained_incremental' */
    cpy_r_r306 = CPyStatics[4284]; /* 'cache_fine_grained' */
    cpy_r_r307 = CPyStatics[4285]; /* 'use_fine_grained_cache' */
    cpy_r_r308 = CPyStatics[4286]; /* 'debug_serialize' */
    cpy_r_r309 = CPyStatics[4257]; /* 'mypyc' */
    cpy_r_r310 = CPyStatics[4287]; /* 'inspections' */
    cpy_r_r311 = CPyStatics[4288]; /* 'preserve_asts' */
    cpy_r_r312 = CPyStatics[169]; /* 'plugins' */
    cpy_r_r313 = CPyStatics[4289]; /* 'per_module_options' */
    cpy_r_r314 = CPyStatics[4290]; /* '_glob_options' */
    cpy_r_r315 = CPyStatics[4291]; /* 'unused_configs' */
    cpy_r_r316 = CPyStatics[1729]; /* 'verbosity' */
    cpy_r_r317 = CPyStatics[2253]; /* 'pdb' */
    cpy_r_r318 = CPyStatics[4292]; /* 'show_traceback' */
    cpy_r_r319 = CPyStatics[4293]; /* 'raise_exceptions' */
    cpy_r_r320 = CPyStatics[589]; /* 'dump_type_stats' */
    cpy_r_r321 = CPyStatics[2979]; /* 'dump_inference_stats' */
    cpy_r_r322 = CPyStatics[4294]; /* 'dump_build_stats' */
    cpy_r_r323 = CPyStatics[4295]; /* 'enable_incomplete_features' */
    cpy_r_r324 = CPyStatics[1583]; /* 'enable_incomplete_feature' */
    cpy_r_r325 = CPyStatics[2982]; /* 'timing_stats' */
    cpy_r_r326 = CPyStatics[2984]; /* 'line_checking_stats' */
    cpy_r_r327 = CPyStatics[4296]; /* 'semantic_analysis_only' */
    cpy_r_r328 = CPyStatics[4297]; /* 'use_builtins_fixtures' */
    cpy_r_r329 = CPyStatics[2947]; /* 'shadow_file' */
    cpy_r_r330 = CPyStatics[2298]; /* 'show_column_numbers' */
    cpy_r_r331 = CPyStatics[2299]; /* 'show_error_end' */
    cpy_r_r332 = CPyStatics[2304]; /* 'hide_error_codes' */
    cpy_r_r333 = CPyStatics[4298]; /* 'show_error_code_links' */
    cpy_r_r334 = CPyStatics[4299]; /* 'pretty' */
    cpy_r_r335 = CPyStatics[4300]; /* 'dump_graph' */
    cpy_r_r336 = CPyStatics[4301]; /* 'dump_deps' */
    cpy_r_r337 = CPyStatics[4302]; /* 'logical_deps' */
    cpy_r_r338 = CPyStatics[4256]; /* 'local_partial_types' */
    cpy_r_r339 = CPyStatics[4263]; /* 'bazel' */
    cpy_r_r340 = CPyStatics[1694]; /* 'export_types' */
    cpy_r_r341 = CPyStatics[1584]; /* 'package_root' */
    cpy_r_r342 = CPyStatics[3039]; /* 'cache_map' */
    cpy_r_r343 = CPyStatics[2951]; /* 'fast_exit' */
    cpy_r_r344 = CPyStatics[4303]; /* 'fast_module_lookup' */
    cpy_r_r345 = CPyStatics[4304]; /* 'allow_empty_bodies' */
    cpy_r_r346 = CPyStatics[4305]; /* 'transform_source' */
    cpy_r_r347 = CPyStatics[2300]; /* 'show_absolute_path' */
    cpy_r_r348 = CPyStatics[4306]; /* 'install_types' */
    cpy_r_r349 = CPyStatics[4307]; /* 'non_interactive' */
    cpy_r_r350 = CPyStatics[2901]; /* 'many_errors_threshold' */
    cpy_r_r351 = CPyStatics[4308]; /* 'new_type_inference' */
    cpy_r_r352 = CPyStatics[4309]; /* 'disable_recursive_aliases' */
    cpy_r_r353 = CPyStatics[4310]; /* 'enable_recursive_aliases' */
    cpy_r_r354 = CPyStatics[4311]; /* 'export_ref_info' */
    cpy_r_r355 = CPyStatics[4264]; /* 'disable_bytearray_promotion' */
    cpy_r_r356 = CPyStatics[4265]; /* 'disable_memoryview_promotion' */
    cpy_r_r357 = CPyStatics[4312]; /* 'force_uppercase_builtins' */
    cpy_r_r358 = CPyStatics[4313]; /* 'force_union_syntax' */
    cpy_r_r359 = PyTuple_Pack(122, cpy_r_r237, cpy_r_r238, cpy_r_r239, cpy_r_r240, cpy_r_r241, cpy_r_r242, cpy_r_r243, cpy_r_r244, cpy_r_r245, cpy_r_r246, cpy_r_r247, cpy_r_r248, cpy_r_r249, cpy_r_r250, cpy_r_r251, cpy_r_r252, cpy_r_r253, cpy_r_r254, cpy_r_r255, cpy_r_r256, cpy_r_r257, cpy_r_r258, cpy_r_r259, cpy_r_r260, cpy_r_r261, cpy_r_r262, cpy_r_r263, cpy_r_r264, cpy_r_r265, cpy_r_r266, cpy_r_r267, cpy_r_r268, cpy_r_r269, cpy_r_r270, cpy_r_r271, cpy_r_r272, cpy_r_r273, cpy_r_r274, cpy_r_r275, cpy_r_r276, cpy_r_r277, cpy_r_r278, cpy_r_r279, cpy_r_r280, cpy_r_r281, cpy_r_r282, cpy_r_r283, cpy_r_r284, cpy_r_r285, cpy_r_r286, cpy_r_r287, cpy_r_r288, cpy_r_r289, cpy_r_r290, cpy_r_r291, cpy_r_r292, cpy_r_r293, cpy_r_r294, cpy_r_r295, cpy_r_r296, cpy_r_r297, cpy_r_r298, cpy_r_r299, cpy_r_r300, cpy_r_r301, cpy_r_r302, cpy_r_r303, cpy_r_r304, cpy_r_r305, cpy_r_r306, cpy_r_r307, cpy_r_r308, cpy_r_r309, cpy_r_r310, cpy_r_r311, cpy_r_r312, cpy_r_r313, cpy_r_r314, cpy_r_r315, cpy_r_r316, cpy_r_r317, cpy_r_r318, cpy_r_r319, cpy_r_r320, cpy_r_r321, cpy_r_r322, cpy_r_r323, cpy_r_r324, cpy_r_r325, cpy_r_r326, cpy_r_r327, cpy_r_r328, cpy_r_r329, cpy_r_r330, cpy_r_r331, cpy_r_r332, cpy_r_r333, cpy_r_r334, cpy_r_r335, cpy_r_r336, cpy_r_r337, cpy_r_r338, cpy_r_r339, cpy_r_r340, cpy_r_r341, cpy_r_r342, cpy_r_r343, cpy_r_r344, cpy_r_r345, cpy_r_r346, cpy_r_r347, cpy_r_r348, cpy_r_r349, cpy_r_r350, cpy_r_r351, cpy_r_r352, cpy_r_r353, cpy_r_r354, cpy_r_r355, cpy_r_r356, cpy_r_r357, cpy_r_r358);
    if (unlikely(cpy_r_r359 == NULL)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 77, CPyStatic_mypy___options___globals);
        goto CPyL87;
    }
    cpy_r_r360 = PyObject_SetAttr(cpy_r_r234, cpy_r_r236, cpy_r_r359);
    CPy_DECREF(cpy_r_r359);
    cpy_r_r361 = cpy_r_r360 >= 0;
    if (unlikely(!cpy_r_r361)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 77, CPyStatic_mypy___options___globals);
        goto CPyL87;
    }
    CPyType_mypy___options___Options = (PyTypeObject *)cpy_r_r234;
    CPy_INCREF(CPyType_mypy___options___Options);
    cpy_r_r362 = CPyStatic_mypy___options___globals;
    cpy_r_r363 = CPyStatics[577]; /* 'Options' */
    cpy_r_r364 = CPyDict_SetItem(cpy_r_r362, cpy_r_r363, cpy_r_r234);
    CPy_DECREF(cpy_r_r234);
    cpy_r_r365 = cpy_r_r364 >= 0;
    if (unlikely(!cpy_r_r365)) {
        CPy_AddTraceback("mypy/options.py", "<module>", 77, CPyStatic_mypy___options___globals);
        goto CPyL81;
    }
    return 1;
CPyL81: ;
    cpy_r_r366 = 2;
    return cpy_r_r366;
CPyL82: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL81;
CPyL83: ;
    CPy_DecRef(cpy_r_r105);
    goto CPyL81;
CPyL84: ;
    CPy_DecRef(cpy_r_r189);
    goto CPyL81;
CPyL85: ;
    CPy_DecRef(cpy_r_r201);
    goto CPyL81;
CPyL86: ;
    CPy_DecRef(cpy_r_r201);
    CPy_DecRef(cpy_r_r203);
    goto CPyL81;
CPyL87: ;
    CPy_DecRef(cpy_r_r234);
    goto CPyL81;
}
