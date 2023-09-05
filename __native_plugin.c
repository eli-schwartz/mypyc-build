#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"


static PyGetSetDef plugin___TypeAnalyzerPluginInterface_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyObject *
plugin___TypeAnalyzerPluginInterface_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___TypeAnalyzerPluginInterface) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled traits");
    } else {
        PyErr_SetString(PyExc_TypeError, "traits may not be directly created");
    }
    return NULL;
}
static PyMethodDef plugin___TypeAnalyzerPluginInterface_methods[] = {
    {"fail",
     (PyCFunction)CPyPy_plugin___TypeAnalyzerPluginInterface___fail,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"named_type",
     (PyCFunction)CPyPy_plugin___TypeAnalyzerPluginInterface___named_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"analyze_type",
     (PyCFunction)CPyPy_plugin___TypeAnalyzerPluginInterface___analyze_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"analyze_callable_args",
     (PyCFunction)CPyPy_plugin___TypeAnalyzerPluginInterface___analyze_callable_args,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___TypeAnalyzerPluginInterface_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeAnalyzerPluginInterface",
    .tp_new = plugin___TypeAnalyzerPluginInterface_new,
    .tp_getset = plugin___TypeAnalyzerPluginInterface_getseters,
    .tp_methods = plugin___TypeAnalyzerPluginInterface_methods,
    .tp_basicsize = sizeof(PyObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_plugin___TypeAnalyzerPluginInterface_template = &CPyType_plugin___TypeAnalyzerPluginInterface_template_;


static PyObject *plugin___CommonPluginApi_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___CommonPluginApi(void);

static PyObject *
plugin___CommonPluginApi_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    return plugin___CommonPluginApi_setup(type);
}

static int
plugin___CommonPluginApi_traverse(mypy___plugin___CommonPluginApiObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_options);
    return 0;
}

static int
plugin___CommonPluginApi_clear(mypy___plugin___CommonPluginApiObject *self)
{
    Py_CLEAR(self->_options);
    return 0;
}

static void
plugin___CommonPluginApi_dealloc(mypy___plugin___CommonPluginApiObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___CommonPluginApi_dealloc)
    plugin___CommonPluginApi_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___CommonPluginApi_vtable_shadow[1];
static bool
CPyDef_plugin___CommonPluginApi_trait_vtable_setup_shadow(void)
{
    CPyVTableItem plugin___CommonPluginApi_vtable_shadow_scratch[] = {
        (CPyVTableItem)CPyDef_plugin___CommonPluginApi___lookup_fully_qualified__CommonPluginApi_glue,
    };
    memcpy(plugin___CommonPluginApi_vtable_shadow, plugin___CommonPluginApi_vtable_shadow_scratch, sizeof(plugin___CommonPluginApi_vtable_shadow));
    return 1;
}

static CPyVTableItem plugin___CommonPluginApi_vtable[1];
static bool
CPyDef_plugin___CommonPluginApi_trait_vtable_setup(void)
{
    CPyDef_plugin___CommonPluginApi_trait_vtable_setup_shadow();
    CPyVTableItem plugin___CommonPluginApi_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin___CommonPluginApi___lookup_fully_qualified,
    };
    memcpy(plugin___CommonPluginApi_vtable, plugin___CommonPluginApi_vtable_scratch, sizeof(plugin___CommonPluginApi_vtable));
    return 1;
}

static PyObject *
plugin___CommonPluginApi_get_options(mypy___plugin___CommonPluginApiObject *self, void *closure);
static int
plugin___CommonPluginApi_set_options(mypy___plugin___CommonPluginApiObject *self, PyObject *value, void *closure);

static PyGetSetDef plugin___CommonPluginApi_getseters[] = {
    {"options",
     (getter)plugin___CommonPluginApi_get_options, (setter)plugin___CommonPluginApi_set_options,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef plugin___CommonPluginApi_methods[] = {
    {"lookup_fully_qualified",
     (PyCFunction)CPyPy_plugin___CommonPluginApi___lookup_fully_qualified,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___CommonPluginApi_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "CommonPluginApi",
    .tp_new = plugin___CommonPluginApi_new,
    .tp_dealloc = (destructor)plugin___CommonPluginApi_dealloc,
    .tp_traverse = (traverseproc)plugin___CommonPluginApi_traverse,
    .tp_clear = (inquiry)plugin___CommonPluginApi_clear,
    .tp_getset = plugin___CommonPluginApi_getseters,
    .tp_methods = plugin___CommonPluginApi_methods,
    .tp_basicsize = sizeof(mypy___plugin___CommonPluginApiObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___CommonPluginApi_template = &CPyType_plugin___CommonPluginApi_template_;

static PyObject *
plugin___CommonPluginApi_setup(PyTypeObject *type)
{
    mypy___plugin___CommonPluginApiObject *self;
    self = (mypy___plugin___CommonPluginApiObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    if (type != CPyType_plugin___CommonPluginApi) {
        self->vtable = plugin___CommonPluginApi_vtable_shadow;
    } else {
        self->vtable = plugin___CommonPluginApi_vtable;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___CommonPluginApi(void)
{
    PyObject *self = plugin___CommonPluginApi_setup(CPyType_plugin___CommonPluginApi);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
plugin___CommonPluginApi_get_options(mypy___plugin___CommonPluginApiObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'CommonPluginApi' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
plugin___CommonPluginApi_set_options(mypy___plugin___CommonPluginApiObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CommonPluginApi' object attribute 'options' cannot be deleted");
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
plugin___CheckerPluginInterface_get_type_context(mypy___plugin___CheckerPluginInterfaceObject *self, void *closure);

static PyGetSetDef plugin___CheckerPluginInterface_getseters[] = {
    {"type_context",
     (getter)plugin___CheckerPluginInterface_get_type_context,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyObject *
plugin___CheckerPluginInterface_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___CheckerPluginInterface) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled traits");
    } else {
        PyErr_SetString(PyExc_TypeError, "traits may not be directly created");
    }
    return NULL;
}
static PyMethodDef plugin___CheckerPluginInterface_methods[] = {
    {"fail",
     (PyCFunction)CPyPy_plugin___CheckerPluginInterface___fail,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"named_generic_type",
     (PyCFunction)CPyPy_plugin___CheckerPluginInterface___named_generic_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_expression_type",
     (PyCFunction)CPyPy_plugin___CheckerPluginInterface___get_expression_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___CheckerPluginInterface_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "CheckerPluginInterface",
    .tp_new = plugin___CheckerPluginInterface_new,
    .tp_getset = plugin___CheckerPluginInterface_getseters,
    .tp_methods = plugin___CheckerPluginInterface_methods,
    .tp_basicsize = sizeof(PyObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_plugin___CheckerPluginInterface_template = &CPyType_plugin___CheckerPluginInterface_template_;


static PyObject *
plugin___CheckerPluginInterface_get_type_context(mypy___plugin___CheckerPluginInterfaceObject *self, void *closure)
{
    return CPyDef_plugin___CheckerPluginInterface___type_context((PyObject *) self);
}

static PyObject *
plugin___SemanticAnalyzerPluginInterface_get_final_iteration(mypy___plugin___SemanticAnalyzerPluginInterfaceObject *self, void *closure);
static PyObject *
plugin___SemanticAnalyzerPluginInterface_get_is_stub_file(mypy___plugin___SemanticAnalyzerPluginInterfaceObject *self, void *closure);

static PyGetSetDef plugin___SemanticAnalyzerPluginInterface_getseters[] = {
    {"final_iteration",
     (getter)plugin___SemanticAnalyzerPluginInterface_get_final_iteration,
    NULL, NULL, NULL},
    {"is_stub_file",
     (getter)plugin___SemanticAnalyzerPluginInterface_get_is_stub_file,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyObject *
plugin___SemanticAnalyzerPluginInterface_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___SemanticAnalyzerPluginInterface) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled traits");
    } else {
        PyErr_SetString(PyExc_TypeError, "traits may not be directly created");
    }
    return NULL;
}
static PyMethodDef plugin___SemanticAnalyzerPluginInterface_methods[] = {
    {"named_type",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___named_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"builtin_type",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___builtin_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"named_type_or_none",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___named_type_or_none,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"basic_new_typeinfo",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___basic_new_typeinfo,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"parse_bool",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___parse_bool,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"parse_str_literal",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___parse_str_literal,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fail",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___fail,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"anal_type",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___anal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"class_type",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___class_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"lookup_fully_qualified",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___lookup_fully_qualified,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"lookup_fully_qualified_or_none",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___lookup_fully_qualified_or_none,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"lookup_qualified",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___lookup_qualified,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_plugin_dependency",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___add_plugin_dependency,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_symbol_table_node",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___add_symbol_table_node,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"qualified_name",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___qualified_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"defer",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___defer,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"analyze_simple_literal_type",
     (PyCFunction)CPyPy_plugin___SemanticAnalyzerPluginInterface___analyze_simple_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___SemanticAnalyzerPluginInterface_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SemanticAnalyzerPluginInterface",
    .tp_new = plugin___SemanticAnalyzerPluginInterface_new,
    .tp_getset = plugin___SemanticAnalyzerPluginInterface_getseters,
    .tp_methods = plugin___SemanticAnalyzerPluginInterface_methods,
    .tp_basicsize = sizeof(PyObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_plugin___SemanticAnalyzerPluginInterface_template = &CPyType_plugin___SemanticAnalyzerPluginInterface_template_;


static PyObject *
plugin___SemanticAnalyzerPluginInterface_get_final_iteration(mypy___plugin___SemanticAnalyzerPluginInterfaceObject *self, void *closure)
{
    char retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___final_iteration((PyObject *) self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
}

static PyObject *
plugin___SemanticAnalyzerPluginInterface_get_is_stub_file(mypy___plugin___SemanticAnalyzerPluginInterfaceObject *self, void *closure)
{
    char retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___is_stub_file((PyObject *) self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
}

static int
plugin___Plugin_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return CPyPy_plugin___Plugin_____init__(self, args, kwds) != NULL ? 0 : -1;
}
static PyObject *plugin___Plugin_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___Plugin(PyObject *cpy_r_options);

static PyObject *
plugin___Plugin_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    return plugin___Plugin_setup(type);
}

static int
plugin___Plugin_traverse(mypy___plugin___PluginObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_options);
    if (CPyTagged_CheckLong(self->_python_version.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_python_version.f0));
    }
    if (CPyTagged_CheckLong(self->_python_version.f1)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_python_version.f1));
    }
    Py_VISIT(self->__modules);
    return 0;
}

static int
plugin___Plugin_clear(mypy___plugin___PluginObject *self)
{
    Py_CLEAR(self->_options);
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
    Py_CLEAR(self->__modules);
    return 0;
}

static void
plugin___Plugin_dealloc(mypy___plugin___PluginObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___Plugin_dealloc)
    plugin___Plugin_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___Plugin_vtable_shadow[19];
static bool
CPyDef_plugin___Plugin_trait_vtable_setup_shadow(void)
{
    CPyVTableItem plugin___Plugin_vtable_shadow_scratch[] = {
        (CPyVTableItem)CPyDef_plugin___CommonPluginApi___lookup_fully_qualified__CommonPluginApi_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin_____init___3__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___set_modules__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___lookup_fully_qualified__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___report_config_data__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_additional_deps__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_type_analyze_hook__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_function_signature_hook__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_function_hook__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_method_signature_hook__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_method_hook__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_attribute_hook__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_class_attribute_hook__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_class_decorator_hook__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_class_decorator_hook_2__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_metaclass_hook__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_base_class_hook__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_customize_class_mro_hook__Plugin_glue,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_dynamic_class_hook__Plugin_glue,
    };
    memcpy(plugin___Plugin_vtable_shadow, plugin___Plugin_vtable_shadow_scratch, sizeof(plugin___Plugin_vtable_shadow));
    return 1;
}

static CPyVTableItem plugin___Plugin_vtable[19];
static bool
CPyDef_plugin___Plugin_trait_vtable_setup(void)
{
    CPyDef_plugin___Plugin_trait_vtable_setup_shadow();
    CPyVTableItem plugin___Plugin_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin___Plugin___lookup_fully_qualified,
        (CPyVTableItem)CPyDef_plugin___Plugin_____init__,
        (CPyVTableItem)CPyDef_plugin___Plugin___set_modules,
        (CPyVTableItem)CPyDef_plugin___Plugin___lookup_fully_qualified,
        (CPyVTableItem)CPyDef_plugin___Plugin___report_config_data,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_additional_deps,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_type_analyze_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_function_signature_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_function_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_method_signature_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_method_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_attribute_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_class_attribute_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_class_decorator_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_class_decorator_hook_2,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_metaclass_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_base_class_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_customize_class_mro_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_dynamic_class_hook,
    };
    memcpy(plugin___Plugin_vtable, plugin___Plugin_vtable_scratch, sizeof(plugin___Plugin_vtable));
    return 1;
}

static PyObject *
plugin___Plugin_get_python_version(mypy___plugin___PluginObject *self, void *closure);
static int
plugin___Plugin_set_python_version(mypy___plugin___PluginObject *self, PyObject *value, void *closure);
static PyObject *
plugin___Plugin_get__modules(mypy___plugin___PluginObject *self, void *closure);
static int
plugin___Plugin_set__modules(mypy___plugin___PluginObject *self, PyObject *value, void *closure);

static PyGetSetDef plugin___Plugin_getseters[] = {
    {"python_version",
     (getter)plugin___Plugin_get_python_version, (setter)plugin___Plugin_set_python_version,
     NULL, NULL},
    {"_modules",
     (getter)plugin___Plugin_get__modules, (setter)plugin___Plugin_set__modules,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef plugin___Plugin_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_plugin___Plugin_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"set_modules",
     (PyCFunction)CPyPy_plugin___Plugin___set_modules,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"lookup_fully_qualified",
     (PyCFunction)CPyPy_plugin___Plugin___lookup_fully_qualified,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"report_config_data",
     (PyCFunction)CPyPy_plugin___Plugin___report_config_data,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_additional_deps",
     (PyCFunction)CPyPy_plugin___Plugin___get_additional_deps,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_type_analyze_hook",
     (PyCFunction)CPyPy_plugin___Plugin___get_type_analyze_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_function_signature_hook",
     (PyCFunction)CPyPy_plugin___Plugin___get_function_signature_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_function_hook",
     (PyCFunction)CPyPy_plugin___Plugin___get_function_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_method_signature_hook",
     (PyCFunction)CPyPy_plugin___Plugin___get_method_signature_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_method_hook",
     (PyCFunction)CPyPy_plugin___Plugin___get_method_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_attribute_hook",
     (PyCFunction)CPyPy_plugin___Plugin___get_attribute_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_class_attribute_hook",
     (PyCFunction)CPyPy_plugin___Plugin___get_class_attribute_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_class_decorator_hook",
     (PyCFunction)CPyPy_plugin___Plugin___get_class_decorator_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_class_decorator_hook_2",
     (PyCFunction)CPyPy_plugin___Plugin___get_class_decorator_hook_2,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_metaclass_hook",
     (PyCFunction)CPyPy_plugin___Plugin___get_metaclass_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_base_class_hook",
     (PyCFunction)CPyPy_plugin___Plugin___get_base_class_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_customize_class_mro_hook",
     (PyCFunction)CPyPy_plugin___Plugin___get_customize_class_mro_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_dynamic_class_hook",
     (PyCFunction)CPyPy_plugin___Plugin___get_dynamic_class_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___Plugin_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Plugin",
    .tp_new = plugin___Plugin_new,
    .tp_dealloc = (destructor)plugin___Plugin_dealloc,
    .tp_traverse = (traverseproc)plugin___Plugin_traverse,
    .tp_clear = (inquiry)plugin___Plugin_clear,
    .tp_getset = plugin___Plugin_getseters,
    .tp_methods = plugin___Plugin_methods,
    .tp_init = plugin___Plugin_init,
    .tp_basicsize = sizeof(mypy___plugin___PluginObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___Plugin_template = &CPyType_plugin___Plugin_template_;

static PyObject *
plugin___Plugin_setup(PyTypeObject *type)
{
    mypy___plugin___PluginObject *self;
    self = (mypy___plugin___PluginObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    if (type != CPyType_plugin___Plugin) {
        self->vtable = plugin___Plugin_vtable_shadow;
    } else {
        self->vtable = plugin___Plugin_vtable;
    }
    self->_python_version = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___Plugin(PyObject *cpy_r_options)
{
    PyObject *self = plugin___Plugin_setup(CPyType_plugin___Plugin);
    if (self == NULL)
        return NULL;
    char res = CPyDef_plugin___Plugin_____init__(self, cpy_r_options);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
plugin___Plugin_get_python_version(mypy___plugin___PluginObject *self, void *closure)
{
    if (unlikely(self->_python_version.f0 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'python_version' of 'Plugin' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_python_version.f0);
    CPyTagged_INCREF(self->_python_version.f1);
    PyObject *retval = PyTuple_New(2);
    if (unlikely(retval == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4654 = CPyTagged_StealAsObject(self->_python_version.f0);
    PyTuple_SET_ITEM(retval, 0, __tmp4654);
    PyObject *__tmp4655 = CPyTagged_StealAsObject(self->_python_version.f1);
    PyTuple_SET_ITEM(retval, 1, __tmp4655);
    return retval;
}

static int
plugin___Plugin_set_python_version(mypy___plugin___PluginObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Plugin' object attribute 'python_version' cannot be deleted");
        return -1;
    }
    if (self->_python_version.f0 != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_python_version.f0);
        CPyTagged_DECREF(self->_python_version.f1);
    }
    tuple_T2II tmp;
    PyObject *__tmp4656;
    if (unlikely(!(PyTuple_Check(value) && PyTuple_GET_SIZE(value) == 2))) {
        __tmp4656 = NULL;
        goto __LL4657;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(value, 0))))
        __tmp4656 = PyTuple_GET_ITEM(value, 0);
    else {
        __tmp4656 = NULL;
    }
    if (__tmp4656 == NULL) goto __LL4657;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(value, 1))))
        __tmp4656 = PyTuple_GET_ITEM(value, 1);
    else {
        __tmp4656 = NULL;
    }
    if (__tmp4656 == NULL) goto __LL4657;
    __tmp4656 = value;
__LL4657: ;
    if (unlikely(__tmp4656 == NULL)) {
        CPy_TypeError("tuple[int, int]", value); return -1;
    } else {
        PyObject *__tmp4658 = PyTuple_GET_ITEM(value, 0);
        CPyTagged __tmp4659;
        if (likely(PyLong_Check(__tmp4658)))
            __tmp4659 = CPyTagged_FromObject(__tmp4658);
        else {
            CPy_TypeError("int", __tmp4658); return -1;
        }
        tmp.f0 = __tmp4659;
        PyObject *__tmp4660 = PyTuple_GET_ITEM(value, 1);
        CPyTagged __tmp4661;
        if (likely(PyLong_Check(__tmp4660)))
            __tmp4661 = CPyTagged_FromObject(__tmp4660);
        else {
            CPy_TypeError("int", __tmp4660); return -1;
        }
        tmp.f1 = __tmp4661;
    }
    CPyTagged_INCREF(tmp.f0);
    CPyTagged_INCREF(tmp.f1);
    self->_python_version = tmp;
    return 0;
}

static PyObject *
plugin___Plugin_get__modules(mypy___plugin___PluginObject *self, void *closure)
{
    if (unlikely(self->__modules == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_modules' of 'Plugin' undefined");
        return NULL;
    }
    CPy_INCREF(self->__modules);
    PyObject *retval = self->__modules;
    return retval;
}

static int
plugin___Plugin_set__modules(mypy___plugin___PluginObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Plugin' object attribute '_modules' cannot be deleted");
        return -1;
    }
    if (self->__modules != NULL) {
        CPy_DECREF(self->__modules);
    }
    PyObject *tmp;
    if (PyDict_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4662;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4662;
    CPy_TypeError("dict or None", value); 
    tmp = NULL;
__LL4662: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__modules = tmp;
    return 0;
}

static int
plugin___ChainedPlugin_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *plugin___ChainedPlugin_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___ChainedPlugin(PyObject *cpy_r_options, PyObject *cpy_r_plugins);

static PyObject *
plugin___ChainedPlugin_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___ChainedPlugin) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = plugin___ChainedPlugin_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_plugin___ChainedPlugin_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
plugin___ChainedPlugin_traverse(mypy___plugin___ChainedPluginObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_options);
    if (CPyTagged_CheckLong(self->_python_version.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_python_version.f0));
    }
    if (CPyTagged_CheckLong(self->_python_version.f1)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_python_version.f1));
    }
    Py_VISIT(self->__modules);
    Py_VISIT(self->__plugins);
    return 0;
}

static int
plugin___ChainedPlugin_clear(mypy___plugin___ChainedPluginObject *self)
{
    Py_CLEAR(self->_options);
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
    Py_CLEAR(self->__modules);
    Py_CLEAR(self->__plugins);
    return 0;
}

static void
plugin___ChainedPlugin_dealloc(mypy___plugin___ChainedPluginObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___ChainedPlugin_dealloc)
    plugin___ChainedPlugin_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___ChainedPlugin_vtable[37];
static bool
CPyDef_plugin___ChainedPlugin_trait_vtable_setup(void)
{
    CPyVTableItem plugin___ChainedPlugin_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin___Plugin___lookup_fully_qualified,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin_____init__,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___set_modules,
        (CPyVTableItem)CPyDef_plugin___Plugin___lookup_fully_qualified,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___report_config_data,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_additional_deps,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_type_analyze_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_function_signature_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_function_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_method_signature_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_method_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_attribute_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_class_attribute_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_class_decorator_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_class_decorator_hook_2,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_metaclass_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_base_class_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_customize_class_mro_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_dynamic_class_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin_____init__,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___set_modules,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___report_config_data,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_additional_deps,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_type_analyze_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_function_signature_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_function_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_method_signature_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_method_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_attribute_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_class_attribute_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_class_decorator_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_class_decorator_hook_2,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_metaclass_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_base_class_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_customize_class_mro_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin___get_dynamic_class_hook,
        (CPyVTableItem)CPyDef_plugin___ChainedPlugin____find_hook,
    };
    memcpy(plugin___ChainedPlugin_vtable, plugin___ChainedPlugin_vtable_scratch, sizeof(plugin___ChainedPlugin_vtable));
    return 1;
}

static PyObject *
plugin___ChainedPlugin_get__plugins(mypy___plugin___ChainedPluginObject *self, void *closure);
static int
plugin___ChainedPlugin_set__plugins(mypy___plugin___ChainedPluginObject *self, PyObject *value, void *closure);

static PyGetSetDef plugin___ChainedPlugin_getseters[] = {
    {"_plugins",
     (getter)plugin___ChainedPlugin_get__plugins, (setter)plugin___ChainedPlugin_set__plugins,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef plugin___ChainedPlugin_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_plugin___ChainedPlugin_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"set_modules",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___set_modules,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"report_config_data",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___report_config_data,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_additional_deps",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___get_additional_deps,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_type_analyze_hook",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___get_type_analyze_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_function_signature_hook",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___get_function_signature_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_function_hook",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___get_function_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_method_signature_hook",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___get_method_signature_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_method_hook",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___get_method_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_attribute_hook",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___get_attribute_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_class_attribute_hook",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___get_class_attribute_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_class_decorator_hook",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___get_class_decorator_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_class_decorator_hook_2",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___get_class_decorator_hook_2,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_metaclass_hook",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___get_metaclass_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_base_class_hook",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___get_base_class_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_customize_class_mro_hook",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___get_customize_class_mro_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_dynamic_class_hook",
     (PyCFunction)CPyPy_plugin___ChainedPlugin___get_dynamic_class_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_find_hook",
     (PyCFunction)CPyPy_plugin___ChainedPlugin____find_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___ChainedPlugin_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ChainedPlugin",
    .tp_new = plugin___ChainedPlugin_new,
    .tp_dealloc = (destructor)plugin___ChainedPlugin_dealloc,
    .tp_traverse = (traverseproc)plugin___ChainedPlugin_traverse,
    .tp_clear = (inquiry)plugin___ChainedPlugin_clear,
    .tp_getset = plugin___ChainedPlugin_getseters,
    .tp_methods = plugin___ChainedPlugin_methods,
    .tp_init = plugin___ChainedPlugin_init,
    .tp_basicsize = sizeof(mypy___plugin___ChainedPluginObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___ChainedPlugin_template = &CPyType_plugin___ChainedPlugin_template_;

static PyObject *
plugin___ChainedPlugin_setup(PyTypeObject *type)
{
    mypy___plugin___ChainedPluginObject *self;
    self = (mypy___plugin___ChainedPluginObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin___ChainedPlugin_vtable;
    self->_python_version = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___ChainedPlugin(PyObject *cpy_r_options, PyObject *cpy_r_plugins)
{
    PyObject *self = plugin___ChainedPlugin_setup(CPyType_plugin___ChainedPlugin);
    if (self == NULL)
        return NULL;
    char res = CPyDef_plugin___ChainedPlugin_____init__(self, cpy_r_options, cpy_r_plugins);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
plugin___ChainedPlugin_get__plugins(mypy___plugin___ChainedPluginObject *self, void *closure)
{
    if (unlikely(self->__plugins == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_plugins' of 'ChainedPlugin' undefined");
        return NULL;
    }
    CPy_INCREF(self->__plugins);
    PyObject *retval = self->__plugins;
    return retval;
}

static int
plugin___ChainedPlugin_set__plugins(mypy___plugin___ChainedPluginObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ChainedPlugin' object attribute '_plugins' cannot be deleted");
        return -1;
    }
    if (self->__plugins != NULL) {
        CPy_DECREF(self->__plugins);
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
    self->__plugins = tmp;
    return 0;
}

static PyObject *plugin___get_type_analyze_hook_ChainedPlugin_env_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___get_type_analyze_hook_ChainedPlugin_env(void);

static PyObject *
plugin___get_type_analyze_hook_ChainedPlugin_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___get_type_analyze_hook_ChainedPlugin_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin___get_type_analyze_hook_ChainedPlugin_env_setup(type);
}

static int
plugin___get_type_analyze_hook_ChainedPlugin_env_traverse(mypy___plugin___get_type_analyze_hook_ChainedPlugin_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fullname);
    Py_VISIT(self->_self);
    return 0;
}

static int
plugin___get_type_analyze_hook_ChainedPlugin_env_clear(mypy___plugin___get_type_analyze_hook_ChainedPlugin_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fullname);
    Py_CLEAR(self->_self);
    return 0;
}

static void
plugin___get_type_analyze_hook_ChainedPlugin_env_dealloc(mypy___plugin___get_type_analyze_hook_ChainedPlugin_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___get_type_analyze_hook_ChainedPlugin_env_dealloc)
    plugin___get_type_analyze_hook_ChainedPlugin_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___get_type_analyze_hook_ChainedPlugin_env_vtable[1];
static bool
CPyDef_plugin___get_type_analyze_hook_ChainedPlugin_env_trait_vtable_setup(void)
{
    CPyVTableItem plugin___get_type_analyze_hook_ChainedPlugin_env_vtable_scratch[] = {
        NULL
    };
    memcpy(plugin___get_type_analyze_hook_ChainedPlugin_env_vtable, plugin___get_type_analyze_hook_ChainedPlugin_env_vtable_scratch, sizeof(plugin___get_type_analyze_hook_ChainedPlugin_env_vtable));
    return 1;
}

static PyMethodDef plugin___get_type_analyze_hook_ChainedPlugin_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___get_type_analyze_hook_ChainedPlugin_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_type_analyze_hook_ChainedPlugin_env",
    .tp_new = plugin___get_type_analyze_hook_ChainedPlugin_env_new,
    .tp_dealloc = (destructor)plugin___get_type_analyze_hook_ChainedPlugin_env_dealloc,
    .tp_traverse = (traverseproc)plugin___get_type_analyze_hook_ChainedPlugin_env_traverse,
    .tp_clear = (inquiry)plugin___get_type_analyze_hook_ChainedPlugin_env_clear,
    .tp_methods = plugin___get_type_analyze_hook_ChainedPlugin_env_methods,
    .tp_basicsize = sizeof(mypy___plugin___get_type_analyze_hook_ChainedPlugin_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___get_type_analyze_hook_ChainedPlugin_env_template = &CPyType_plugin___get_type_analyze_hook_ChainedPlugin_env_template_;

static PyObject *
plugin___get_type_analyze_hook_ChainedPlugin_env_setup(PyTypeObject *type)
{
    mypy___plugin___get_type_analyze_hook_ChainedPlugin_envObject *self;
    self = (mypy___plugin___get_type_analyze_hook_ChainedPlugin_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin___get_type_analyze_hook_ChainedPlugin_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___get_type_analyze_hook_ChainedPlugin_env(void)
{
    PyObject *self = plugin___get_type_analyze_hook_ChainedPlugin_env_setup(CPyType_plugin___get_type_analyze_hook_ChainedPlugin_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_____get__(self, instance, owner);
}
PyMemberDef plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_setup(PyTypeObject *type);
PyObject *CPyDef_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj(void);

static PyObject *
plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_setup(type);
}

static int
plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_traverse(mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject))));
    return 0;
}

static int
plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_clear(mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject))));
    return 0;
}

static void
plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_dealloc(mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_dealloc)
    plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_vtable[2];
static bool
CPyDef_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_trait_vtable_setup(void)
{
    CPyVTableItem plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_____call__,
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_____get__,
    };
    memcpy(plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_vtable, plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_vtable_scratch, sizeof(plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_vtable));
    return 1;
}

static PyMethodDef plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj",
    .tp_new = plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_new,
    .tp_dealloc = (destructor)plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_dealloc,
    .tp_traverse = (traverseproc)plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_traverse,
    .tp_clear = (inquiry)plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_clear,
    .tp_methods = plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj,
    .tp_members = plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_members,
    .tp_basicsize = sizeof(mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_template = &CPyType_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_template_;

static PyObject *
plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_setup(PyTypeObject *type)
{
    mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject *self;
    self = (mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_vtable;
    self->vectorcall = CPyPy_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj(void)
{
    PyObject *self = plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_setup(CPyType_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *plugin___get_function_signature_hook_ChainedPlugin_env_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___get_function_signature_hook_ChainedPlugin_env(void);

static PyObject *
plugin___get_function_signature_hook_ChainedPlugin_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___get_function_signature_hook_ChainedPlugin_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin___get_function_signature_hook_ChainedPlugin_env_setup(type);
}

static int
plugin___get_function_signature_hook_ChainedPlugin_env_traverse(mypy___plugin___get_function_signature_hook_ChainedPlugin_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fullname);
    Py_VISIT(self->_self);
    return 0;
}

static int
plugin___get_function_signature_hook_ChainedPlugin_env_clear(mypy___plugin___get_function_signature_hook_ChainedPlugin_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fullname);
    Py_CLEAR(self->_self);
    return 0;
}

static void
plugin___get_function_signature_hook_ChainedPlugin_env_dealloc(mypy___plugin___get_function_signature_hook_ChainedPlugin_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___get_function_signature_hook_ChainedPlugin_env_dealloc)
    plugin___get_function_signature_hook_ChainedPlugin_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___get_function_signature_hook_ChainedPlugin_env_vtable[1];
static bool
CPyDef_plugin___get_function_signature_hook_ChainedPlugin_env_trait_vtable_setup(void)
{
    CPyVTableItem plugin___get_function_signature_hook_ChainedPlugin_env_vtable_scratch[] = {
        NULL
    };
    memcpy(plugin___get_function_signature_hook_ChainedPlugin_env_vtable, plugin___get_function_signature_hook_ChainedPlugin_env_vtable_scratch, sizeof(plugin___get_function_signature_hook_ChainedPlugin_env_vtable));
    return 1;
}

static PyMethodDef plugin___get_function_signature_hook_ChainedPlugin_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___get_function_signature_hook_ChainedPlugin_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_function_signature_hook_ChainedPlugin_env",
    .tp_new = plugin___get_function_signature_hook_ChainedPlugin_env_new,
    .tp_dealloc = (destructor)plugin___get_function_signature_hook_ChainedPlugin_env_dealloc,
    .tp_traverse = (traverseproc)plugin___get_function_signature_hook_ChainedPlugin_env_traverse,
    .tp_clear = (inquiry)plugin___get_function_signature_hook_ChainedPlugin_env_clear,
    .tp_methods = plugin___get_function_signature_hook_ChainedPlugin_env_methods,
    .tp_basicsize = sizeof(mypy___plugin___get_function_signature_hook_ChainedPlugin_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___get_function_signature_hook_ChainedPlugin_env_template = &CPyType_plugin___get_function_signature_hook_ChainedPlugin_env_template_;

static PyObject *
plugin___get_function_signature_hook_ChainedPlugin_env_setup(PyTypeObject *type)
{
    mypy___plugin___get_function_signature_hook_ChainedPlugin_envObject *self;
    self = (mypy___plugin___get_function_signature_hook_ChainedPlugin_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin___get_function_signature_hook_ChainedPlugin_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___get_function_signature_hook_ChainedPlugin_env(void)
{
    PyObject *self = plugin___get_function_signature_hook_ChainedPlugin_env_setup(CPyType_plugin___get_function_signature_hook_ChainedPlugin_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_____get__(self, instance, owner);
}
PyMemberDef plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_setup(PyTypeObject *type);
PyObject *CPyDef_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj(void);

static PyObject *
plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_setup(type);
}

static int
plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_traverse(mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject))));
    return 0;
}

static int
plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_clear(mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject))));
    return 0;
}

static void
plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_dealloc(mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_dealloc)
    plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_vtable[2];
static bool
CPyDef_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_trait_vtable_setup(void)
{
    CPyVTableItem plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_____call__,
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_____get__,
    };
    memcpy(plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_vtable, plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_vtable_scratch, sizeof(plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_vtable));
    return 1;
}

static PyMethodDef plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj",
    .tp_new = plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_new,
    .tp_dealloc = (destructor)plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_dealloc,
    .tp_traverse = (traverseproc)plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_traverse,
    .tp_clear = (inquiry)plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_clear,
    .tp_methods = plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj,
    .tp_members = plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_members,
    .tp_basicsize = sizeof(mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_template = &CPyType_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_template_;

static PyObject *
plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_setup(PyTypeObject *type)
{
    mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject *self;
    self = (mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_vtable;
    self->vectorcall = CPyPy_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj(void)
{
    PyObject *self = plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_setup(CPyType_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *plugin___get_function_hook_ChainedPlugin_env_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___get_function_hook_ChainedPlugin_env(void);

static PyObject *
plugin___get_function_hook_ChainedPlugin_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___get_function_hook_ChainedPlugin_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin___get_function_hook_ChainedPlugin_env_setup(type);
}

static int
plugin___get_function_hook_ChainedPlugin_env_traverse(mypy___plugin___get_function_hook_ChainedPlugin_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fullname);
    Py_VISIT(self->_self);
    return 0;
}

static int
plugin___get_function_hook_ChainedPlugin_env_clear(mypy___plugin___get_function_hook_ChainedPlugin_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fullname);
    Py_CLEAR(self->_self);
    return 0;
}

static void
plugin___get_function_hook_ChainedPlugin_env_dealloc(mypy___plugin___get_function_hook_ChainedPlugin_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___get_function_hook_ChainedPlugin_env_dealloc)
    plugin___get_function_hook_ChainedPlugin_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___get_function_hook_ChainedPlugin_env_vtable[1];
static bool
CPyDef_plugin___get_function_hook_ChainedPlugin_env_trait_vtable_setup(void)
{
    CPyVTableItem plugin___get_function_hook_ChainedPlugin_env_vtable_scratch[] = {
        NULL
    };
    memcpy(plugin___get_function_hook_ChainedPlugin_env_vtable, plugin___get_function_hook_ChainedPlugin_env_vtable_scratch, sizeof(plugin___get_function_hook_ChainedPlugin_env_vtable));
    return 1;
}

static PyMethodDef plugin___get_function_hook_ChainedPlugin_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___get_function_hook_ChainedPlugin_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_function_hook_ChainedPlugin_env",
    .tp_new = plugin___get_function_hook_ChainedPlugin_env_new,
    .tp_dealloc = (destructor)plugin___get_function_hook_ChainedPlugin_env_dealloc,
    .tp_traverse = (traverseproc)plugin___get_function_hook_ChainedPlugin_env_traverse,
    .tp_clear = (inquiry)plugin___get_function_hook_ChainedPlugin_env_clear,
    .tp_methods = plugin___get_function_hook_ChainedPlugin_env_methods,
    .tp_basicsize = sizeof(mypy___plugin___get_function_hook_ChainedPlugin_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___get_function_hook_ChainedPlugin_env_template = &CPyType_plugin___get_function_hook_ChainedPlugin_env_template_;

static PyObject *
plugin___get_function_hook_ChainedPlugin_env_setup(PyTypeObject *type)
{
    mypy___plugin___get_function_hook_ChainedPlugin_envObject *self;
    self = (mypy___plugin___get_function_hook_ChainedPlugin_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin___get_function_hook_ChainedPlugin_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___get_function_hook_ChainedPlugin_env(void)
{
    PyObject *self = plugin___get_function_hook_ChainedPlugin_env_setup(CPyType_plugin___get_function_hook_ChainedPlugin_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_____get__(self, instance, owner);
}
PyMemberDef plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_setup(PyTypeObject *type);
PyObject *CPyDef_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj(void);

static PyObject *
plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_setup(type);
}

static int
plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_traverse(mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject))));
    return 0;
}

static int
plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_clear(mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject))));
    return 0;
}

static void
plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_dealloc(mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_dealloc)
    plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_vtable[2];
static bool
CPyDef_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_trait_vtable_setup(void)
{
    CPyVTableItem plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_____call__,
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_____get__,
    };
    memcpy(plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_vtable, plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_vtable_scratch, sizeof(plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_vtable));
    return 1;
}

static PyMethodDef plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__2_get_function_hook_ChainedPlugin_obj",
    .tp_new = plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_new,
    .tp_dealloc = (destructor)plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_dealloc,
    .tp_traverse = (traverseproc)plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_traverse,
    .tp_clear = (inquiry)plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_clear,
    .tp_methods = plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj,
    .tp_members = plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_members,
    .tp_basicsize = sizeof(mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_template = &CPyType_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_template_;

static PyObject *
plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_setup(PyTypeObject *type)
{
    mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject *self;
    self = (mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_vtable;
    self->vectorcall = CPyPy_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj(void)
{
    PyObject *self = plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_setup(CPyType_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *plugin___get_method_signature_hook_ChainedPlugin_env_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___get_method_signature_hook_ChainedPlugin_env(void);

static PyObject *
plugin___get_method_signature_hook_ChainedPlugin_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___get_method_signature_hook_ChainedPlugin_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin___get_method_signature_hook_ChainedPlugin_env_setup(type);
}

static int
plugin___get_method_signature_hook_ChainedPlugin_env_traverse(mypy___plugin___get_method_signature_hook_ChainedPlugin_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fullname);
    Py_VISIT(self->_self);
    return 0;
}

static int
plugin___get_method_signature_hook_ChainedPlugin_env_clear(mypy___plugin___get_method_signature_hook_ChainedPlugin_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fullname);
    Py_CLEAR(self->_self);
    return 0;
}

static void
plugin___get_method_signature_hook_ChainedPlugin_env_dealloc(mypy___plugin___get_method_signature_hook_ChainedPlugin_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___get_method_signature_hook_ChainedPlugin_env_dealloc)
    plugin___get_method_signature_hook_ChainedPlugin_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___get_method_signature_hook_ChainedPlugin_env_vtable[1];
static bool
CPyDef_plugin___get_method_signature_hook_ChainedPlugin_env_trait_vtable_setup(void)
{
    CPyVTableItem plugin___get_method_signature_hook_ChainedPlugin_env_vtable_scratch[] = {
        NULL
    };
    memcpy(plugin___get_method_signature_hook_ChainedPlugin_env_vtable, plugin___get_method_signature_hook_ChainedPlugin_env_vtable_scratch, sizeof(plugin___get_method_signature_hook_ChainedPlugin_env_vtable));
    return 1;
}

static PyMethodDef plugin___get_method_signature_hook_ChainedPlugin_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___get_method_signature_hook_ChainedPlugin_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_method_signature_hook_ChainedPlugin_env",
    .tp_new = plugin___get_method_signature_hook_ChainedPlugin_env_new,
    .tp_dealloc = (destructor)plugin___get_method_signature_hook_ChainedPlugin_env_dealloc,
    .tp_traverse = (traverseproc)plugin___get_method_signature_hook_ChainedPlugin_env_traverse,
    .tp_clear = (inquiry)plugin___get_method_signature_hook_ChainedPlugin_env_clear,
    .tp_methods = plugin___get_method_signature_hook_ChainedPlugin_env_methods,
    .tp_basicsize = sizeof(mypy___plugin___get_method_signature_hook_ChainedPlugin_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___get_method_signature_hook_ChainedPlugin_env_template = &CPyType_plugin___get_method_signature_hook_ChainedPlugin_env_template_;

static PyObject *
plugin___get_method_signature_hook_ChainedPlugin_env_setup(PyTypeObject *type)
{
    mypy___plugin___get_method_signature_hook_ChainedPlugin_envObject *self;
    self = (mypy___plugin___get_method_signature_hook_ChainedPlugin_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin___get_method_signature_hook_ChainedPlugin_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___get_method_signature_hook_ChainedPlugin_env(void)
{
    PyObject *self = plugin___get_method_signature_hook_ChainedPlugin_env_setup(CPyType_plugin___get_method_signature_hook_ChainedPlugin_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_____get__(self, instance, owner);
}
PyMemberDef plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_setup(PyTypeObject *type);
PyObject *CPyDef_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj(void);

static PyObject *
plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_setup(type);
}

static int
plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_traverse(mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject))));
    return 0;
}

static int
plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_clear(mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject))));
    return 0;
}

static void
plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_dealloc(mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_dealloc)
    plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_vtable[2];
static bool
CPyDef_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_trait_vtable_setup(void)
{
    CPyVTableItem plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_____call__,
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_____get__,
    };
    memcpy(plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_vtable, plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_vtable_scratch, sizeof(plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_vtable));
    return 1;
}

static PyMethodDef plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj",
    .tp_new = plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_new,
    .tp_dealloc = (destructor)plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_dealloc,
    .tp_traverse = (traverseproc)plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_traverse,
    .tp_clear = (inquiry)plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_clear,
    .tp_methods = plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj,
    .tp_members = plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_members,
    .tp_basicsize = sizeof(mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_template = &CPyType_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_template_;

static PyObject *
plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_setup(PyTypeObject *type)
{
    mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject *self;
    self = (mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_vtable;
    self->vectorcall = CPyPy_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj(void)
{
    PyObject *self = plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_setup(CPyType_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *plugin___get_method_hook_ChainedPlugin_env_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___get_method_hook_ChainedPlugin_env(void);

static PyObject *
plugin___get_method_hook_ChainedPlugin_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___get_method_hook_ChainedPlugin_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin___get_method_hook_ChainedPlugin_env_setup(type);
}

static int
plugin___get_method_hook_ChainedPlugin_env_traverse(mypy___plugin___get_method_hook_ChainedPlugin_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fullname);
    Py_VISIT(self->_self);
    return 0;
}

static int
plugin___get_method_hook_ChainedPlugin_env_clear(mypy___plugin___get_method_hook_ChainedPlugin_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fullname);
    Py_CLEAR(self->_self);
    return 0;
}

static void
plugin___get_method_hook_ChainedPlugin_env_dealloc(mypy___plugin___get_method_hook_ChainedPlugin_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___get_method_hook_ChainedPlugin_env_dealloc)
    plugin___get_method_hook_ChainedPlugin_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___get_method_hook_ChainedPlugin_env_vtable[1];
static bool
CPyDef_plugin___get_method_hook_ChainedPlugin_env_trait_vtable_setup(void)
{
    CPyVTableItem plugin___get_method_hook_ChainedPlugin_env_vtable_scratch[] = {
        NULL
    };
    memcpy(plugin___get_method_hook_ChainedPlugin_env_vtable, plugin___get_method_hook_ChainedPlugin_env_vtable_scratch, sizeof(plugin___get_method_hook_ChainedPlugin_env_vtable));
    return 1;
}

static PyMethodDef plugin___get_method_hook_ChainedPlugin_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___get_method_hook_ChainedPlugin_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_method_hook_ChainedPlugin_env",
    .tp_new = plugin___get_method_hook_ChainedPlugin_env_new,
    .tp_dealloc = (destructor)plugin___get_method_hook_ChainedPlugin_env_dealloc,
    .tp_traverse = (traverseproc)plugin___get_method_hook_ChainedPlugin_env_traverse,
    .tp_clear = (inquiry)plugin___get_method_hook_ChainedPlugin_env_clear,
    .tp_methods = plugin___get_method_hook_ChainedPlugin_env_methods,
    .tp_basicsize = sizeof(mypy___plugin___get_method_hook_ChainedPlugin_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___get_method_hook_ChainedPlugin_env_template = &CPyType_plugin___get_method_hook_ChainedPlugin_env_template_;

static PyObject *
plugin___get_method_hook_ChainedPlugin_env_setup(PyTypeObject *type)
{
    mypy___plugin___get_method_hook_ChainedPlugin_envObject *self;
    self = (mypy___plugin___get_method_hook_ChainedPlugin_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin___get_method_hook_ChainedPlugin_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___get_method_hook_ChainedPlugin_env(void)
{
    PyObject *self = plugin___get_method_hook_ChainedPlugin_env_setup(CPyType_plugin___get_method_hook_ChainedPlugin_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_____get__(self, instance, owner);
}
PyMemberDef plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_setup(PyTypeObject *type);
PyObject *CPyDef_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj(void);

static PyObject *
plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_setup(type);
}

static int
plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_traverse(mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject))));
    return 0;
}

static int
plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_clear(mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject))));
    return 0;
}

static void
plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_dealloc(mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_dealloc)
    plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_vtable[2];
static bool
CPyDef_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_trait_vtable_setup(void)
{
    CPyVTableItem plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_____call__,
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_____get__,
    };
    memcpy(plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_vtable, plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_vtable_scratch, sizeof(plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_vtable));
    return 1;
}

static PyMethodDef plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__4_get_method_hook_ChainedPlugin_obj",
    .tp_new = plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_new,
    .tp_dealloc = (destructor)plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_dealloc,
    .tp_traverse = (traverseproc)plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_traverse,
    .tp_clear = (inquiry)plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_clear,
    .tp_methods = plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj,
    .tp_members = plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_members,
    .tp_basicsize = sizeof(mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_template = &CPyType_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_template_;

static PyObject *
plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_setup(PyTypeObject *type)
{
    mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject *self;
    self = (mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_vtable;
    self->vectorcall = CPyPy_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj(void)
{
    PyObject *self = plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_setup(CPyType_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *plugin___get_attribute_hook_ChainedPlugin_env_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___get_attribute_hook_ChainedPlugin_env(void);

static PyObject *
plugin___get_attribute_hook_ChainedPlugin_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___get_attribute_hook_ChainedPlugin_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin___get_attribute_hook_ChainedPlugin_env_setup(type);
}

static int
plugin___get_attribute_hook_ChainedPlugin_env_traverse(mypy___plugin___get_attribute_hook_ChainedPlugin_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fullname);
    Py_VISIT(self->_self);
    return 0;
}

static int
plugin___get_attribute_hook_ChainedPlugin_env_clear(mypy___plugin___get_attribute_hook_ChainedPlugin_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fullname);
    Py_CLEAR(self->_self);
    return 0;
}

static void
plugin___get_attribute_hook_ChainedPlugin_env_dealloc(mypy___plugin___get_attribute_hook_ChainedPlugin_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___get_attribute_hook_ChainedPlugin_env_dealloc)
    plugin___get_attribute_hook_ChainedPlugin_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___get_attribute_hook_ChainedPlugin_env_vtable[1];
static bool
CPyDef_plugin___get_attribute_hook_ChainedPlugin_env_trait_vtable_setup(void)
{
    CPyVTableItem plugin___get_attribute_hook_ChainedPlugin_env_vtable_scratch[] = {
        NULL
    };
    memcpy(plugin___get_attribute_hook_ChainedPlugin_env_vtable, plugin___get_attribute_hook_ChainedPlugin_env_vtable_scratch, sizeof(plugin___get_attribute_hook_ChainedPlugin_env_vtable));
    return 1;
}

static PyMethodDef plugin___get_attribute_hook_ChainedPlugin_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___get_attribute_hook_ChainedPlugin_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_attribute_hook_ChainedPlugin_env",
    .tp_new = plugin___get_attribute_hook_ChainedPlugin_env_new,
    .tp_dealloc = (destructor)plugin___get_attribute_hook_ChainedPlugin_env_dealloc,
    .tp_traverse = (traverseproc)plugin___get_attribute_hook_ChainedPlugin_env_traverse,
    .tp_clear = (inquiry)plugin___get_attribute_hook_ChainedPlugin_env_clear,
    .tp_methods = plugin___get_attribute_hook_ChainedPlugin_env_methods,
    .tp_basicsize = sizeof(mypy___plugin___get_attribute_hook_ChainedPlugin_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___get_attribute_hook_ChainedPlugin_env_template = &CPyType_plugin___get_attribute_hook_ChainedPlugin_env_template_;

static PyObject *
plugin___get_attribute_hook_ChainedPlugin_env_setup(PyTypeObject *type)
{
    mypy___plugin___get_attribute_hook_ChainedPlugin_envObject *self;
    self = (mypy___plugin___get_attribute_hook_ChainedPlugin_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin___get_attribute_hook_ChainedPlugin_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___get_attribute_hook_ChainedPlugin_env(void)
{
    PyObject *self = plugin___get_attribute_hook_ChainedPlugin_env_setup(CPyType_plugin___get_attribute_hook_ChainedPlugin_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_____get__(self, instance, owner);
}
PyMemberDef plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_setup(PyTypeObject *type);
PyObject *CPyDef_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj(void);

static PyObject *
plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_setup(type);
}

static int
plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_traverse(mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject))));
    return 0;
}

static int
plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_clear(mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject))));
    return 0;
}

static void
plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_dealloc(mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_dealloc)
    plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_vtable[2];
static bool
CPyDef_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_trait_vtable_setup(void)
{
    CPyVTableItem plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_____call__,
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_____get__,
    };
    memcpy(plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_vtable, plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_vtable_scratch, sizeof(plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_vtable));
    return 1;
}

static PyMethodDef plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj",
    .tp_new = plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_new,
    .tp_dealloc = (destructor)plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_dealloc,
    .tp_traverse = (traverseproc)plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_traverse,
    .tp_clear = (inquiry)plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_clear,
    .tp_methods = plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj,
    .tp_members = plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_members,
    .tp_basicsize = sizeof(mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_template = &CPyType_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_template_;

static PyObject *
plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_setup(PyTypeObject *type)
{
    mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject *self;
    self = (mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_vtable;
    self->vectorcall = CPyPy_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj(void)
{
    PyObject *self = plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_setup(CPyType_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *plugin___get_class_attribute_hook_ChainedPlugin_env_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___get_class_attribute_hook_ChainedPlugin_env(void);

static PyObject *
plugin___get_class_attribute_hook_ChainedPlugin_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___get_class_attribute_hook_ChainedPlugin_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin___get_class_attribute_hook_ChainedPlugin_env_setup(type);
}

static int
plugin___get_class_attribute_hook_ChainedPlugin_env_traverse(mypy___plugin___get_class_attribute_hook_ChainedPlugin_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fullname);
    Py_VISIT(self->_self);
    return 0;
}

static int
plugin___get_class_attribute_hook_ChainedPlugin_env_clear(mypy___plugin___get_class_attribute_hook_ChainedPlugin_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fullname);
    Py_CLEAR(self->_self);
    return 0;
}

static void
plugin___get_class_attribute_hook_ChainedPlugin_env_dealloc(mypy___plugin___get_class_attribute_hook_ChainedPlugin_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___get_class_attribute_hook_ChainedPlugin_env_dealloc)
    plugin___get_class_attribute_hook_ChainedPlugin_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___get_class_attribute_hook_ChainedPlugin_env_vtable[1];
static bool
CPyDef_plugin___get_class_attribute_hook_ChainedPlugin_env_trait_vtable_setup(void)
{
    CPyVTableItem plugin___get_class_attribute_hook_ChainedPlugin_env_vtable_scratch[] = {
        NULL
    };
    memcpy(plugin___get_class_attribute_hook_ChainedPlugin_env_vtable, plugin___get_class_attribute_hook_ChainedPlugin_env_vtable_scratch, sizeof(plugin___get_class_attribute_hook_ChainedPlugin_env_vtable));
    return 1;
}

static PyMethodDef plugin___get_class_attribute_hook_ChainedPlugin_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___get_class_attribute_hook_ChainedPlugin_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_class_attribute_hook_ChainedPlugin_env",
    .tp_new = plugin___get_class_attribute_hook_ChainedPlugin_env_new,
    .tp_dealloc = (destructor)plugin___get_class_attribute_hook_ChainedPlugin_env_dealloc,
    .tp_traverse = (traverseproc)plugin___get_class_attribute_hook_ChainedPlugin_env_traverse,
    .tp_clear = (inquiry)plugin___get_class_attribute_hook_ChainedPlugin_env_clear,
    .tp_methods = plugin___get_class_attribute_hook_ChainedPlugin_env_methods,
    .tp_basicsize = sizeof(mypy___plugin___get_class_attribute_hook_ChainedPlugin_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___get_class_attribute_hook_ChainedPlugin_env_template = &CPyType_plugin___get_class_attribute_hook_ChainedPlugin_env_template_;

static PyObject *
plugin___get_class_attribute_hook_ChainedPlugin_env_setup(PyTypeObject *type)
{
    mypy___plugin___get_class_attribute_hook_ChainedPlugin_envObject *self;
    self = (mypy___plugin___get_class_attribute_hook_ChainedPlugin_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin___get_class_attribute_hook_ChainedPlugin_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___get_class_attribute_hook_ChainedPlugin_env(void)
{
    PyObject *self = plugin___get_class_attribute_hook_ChainedPlugin_env_setup(CPyType_plugin___get_class_attribute_hook_ChainedPlugin_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_____get__(self, instance, owner);
}
PyMemberDef plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_setup(PyTypeObject *type);
PyObject *CPyDef_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj(void);

static PyObject *
plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_setup(type);
}

static int
plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_traverse(mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject))));
    return 0;
}

static int
plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_clear(mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject))));
    return 0;
}

static void
plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_dealloc(mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_dealloc)
    plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_vtable[2];
static bool
CPyDef_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_trait_vtable_setup(void)
{
    CPyVTableItem plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_____call__,
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_____get__,
    };
    memcpy(plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_vtable, plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_vtable_scratch, sizeof(plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_vtable));
    return 1;
}

static PyMethodDef plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj",
    .tp_new = plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_new,
    .tp_dealloc = (destructor)plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_dealloc,
    .tp_traverse = (traverseproc)plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_traverse,
    .tp_clear = (inquiry)plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_clear,
    .tp_methods = plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj,
    .tp_members = plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_members,
    .tp_basicsize = sizeof(mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_template = &CPyType_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_template_;

static PyObject *
plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_setup(PyTypeObject *type)
{
    mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject *self;
    self = (mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_vtable;
    self->vectorcall = CPyPy_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj(void)
{
    PyObject *self = plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_setup(CPyType_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *plugin___get_class_decorator_hook_ChainedPlugin_env_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___get_class_decorator_hook_ChainedPlugin_env(void);

static PyObject *
plugin___get_class_decorator_hook_ChainedPlugin_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___get_class_decorator_hook_ChainedPlugin_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin___get_class_decorator_hook_ChainedPlugin_env_setup(type);
}

static int
plugin___get_class_decorator_hook_ChainedPlugin_env_traverse(mypy___plugin___get_class_decorator_hook_ChainedPlugin_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fullname);
    Py_VISIT(self->_self);
    return 0;
}

static int
plugin___get_class_decorator_hook_ChainedPlugin_env_clear(mypy___plugin___get_class_decorator_hook_ChainedPlugin_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fullname);
    Py_CLEAR(self->_self);
    return 0;
}

static void
plugin___get_class_decorator_hook_ChainedPlugin_env_dealloc(mypy___plugin___get_class_decorator_hook_ChainedPlugin_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___get_class_decorator_hook_ChainedPlugin_env_dealloc)
    plugin___get_class_decorator_hook_ChainedPlugin_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___get_class_decorator_hook_ChainedPlugin_env_vtable[1];
static bool
CPyDef_plugin___get_class_decorator_hook_ChainedPlugin_env_trait_vtable_setup(void)
{
    CPyVTableItem plugin___get_class_decorator_hook_ChainedPlugin_env_vtable_scratch[] = {
        NULL
    };
    memcpy(plugin___get_class_decorator_hook_ChainedPlugin_env_vtable, plugin___get_class_decorator_hook_ChainedPlugin_env_vtable_scratch, sizeof(plugin___get_class_decorator_hook_ChainedPlugin_env_vtable));
    return 1;
}

static PyMethodDef plugin___get_class_decorator_hook_ChainedPlugin_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___get_class_decorator_hook_ChainedPlugin_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_class_decorator_hook_ChainedPlugin_env",
    .tp_new = plugin___get_class_decorator_hook_ChainedPlugin_env_new,
    .tp_dealloc = (destructor)plugin___get_class_decorator_hook_ChainedPlugin_env_dealloc,
    .tp_traverse = (traverseproc)plugin___get_class_decorator_hook_ChainedPlugin_env_traverse,
    .tp_clear = (inquiry)plugin___get_class_decorator_hook_ChainedPlugin_env_clear,
    .tp_methods = plugin___get_class_decorator_hook_ChainedPlugin_env_methods,
    .tp_basicsize = sizeof(mypy___plugin___get_class_decorator_hook_ChainedPlugin_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___get_class_decorator_hook_ChainedPlugin_env_template = &CPyType_plugin___get_class_decorator_hook_ChainedPlugin_env_template_;

static PyObject *
plugin___get_class_decorator_hook_ChainedPlugin_env_setup(PyTypeObject *type)
{
    mypy___plugin___get_class_decorator_hook_ChainedPlugin_envObject *self;
    self = (mypy___plugin___get_class_decorator_hook_ChainedPlugin_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin___get_class_decorator_hook_ChainedPlugin_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___get_class_decorator_hook_ChainedPlugin_env(void)
{
    PyObject *self = plugin___get_class_decorator_hook_ChainedPlugin_env_setup(CPyType_plugin___get_class_decorator_hook_ChainedPlugin_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_____get__(self, instance, owner);
}
PyMemberDef plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_setup(PyTypeObject *type);
PyObject *CPyDef_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj(void);

static PyObject *
plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_setup(type);
}

static int
plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_traverse(mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject))));
    return 0;
}

static int
plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_clear(mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject))));
    return 0;
}

static void
plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_dealloc(mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_dealloc)
    plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_vtable[2];
static bool
CPyDef_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_trait_vtable_setup(void)
{
    CPyVTableItem plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_____call__,
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_____get__,
    };
    memcpy(plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_vtable, plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_vtable_scratch, sizeof(plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_vtable));
    return 1;
}

static PyMethodDef plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj",
    .tp_new = plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_new,
    .tp_dealloc = (destructor)plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_dealloc,
    .tp_traverse = (traverseproc)plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_traverse,
    .tp_clear = (inquiry)plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_clear,
    .tp_methods = plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj,
    .tp_members = plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_members,
    .tp_basicsize = sizeof(mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_template = &CPyType_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_template_;

static PyObject *
plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_setup(PyTypeObject *type)
{
    mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject *self;
    self = (mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_vtable;
    self->vectorcall = CPyPy_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj(void)
{
    PyObject *self = plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_setup(CPyType_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *plugin___get_class_decorator_hook_2_ChainedPlugin_env_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___get_class_decorator_hook_2_ChainedPlugin_env(void);

static PyObject *
plugin___get_class_decorator_hook_2_ChainedPlugin_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___get_class_decorator_hook_2_ChainedPlugin_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin___get_class_decorator_hook_2_ChainedPlugin_env_setup(type);
}

static int
plugin___get_class_decorator_hook_2_ChainedPlugin_env_traverse(mypy___plugin___get_class_decorator_hook_2_ChainedPlugin_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fullname);
    Py_VISIT(self->_self);
    return 0;
}

static int
plugin___get_class_decorator_hook_2_ChainedPlugin_env_clear(mypy___plugin___get_class_decorator_hook_2_ChainedPlugin_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fullname);
    Py_CLEAR(self->_self);
    return 0;
}

static void
plugin___get_class_decorator_hook_2_ChainedPlugin_env_dealloc(mypy___plugin___get_class_decorator_hook_2_ChainedPlugin_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___get_class_decorator_hook_2_ChainedPlugin_env_dealloc)
    plugin___get_class_decorator_hook_2_ChainedPlugin_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___get_class_decorator_hook_2_ChainedPlugin_env_vtable[1];
static bool
CPyDef_plugin___get_class_decorator_hook_2_ChainedPlugin_env_trait_vtable_setup(void)
{
    CPyVTableItem plugin___get_class_decorator_hook_2_ChainedPlugin_env_vtable_scratch[] = {
        NULL
    };
    memcpy(plugin___get_class_decorator_hook_2_ChainedPlugin_env_vtable, plugin___get_class_decorator_hook_2_ChainedPlugin_env_vtable_scratch, sizeof(plugin___get_class_decorator_hook_2_ChainedPlugin_env_vtable));
    return 1;
}

static PyMethodDef plugin___get_class_decorator_hook_2_ChainedPlugin_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___get_class_decorator_hook_2_ChainedPlugin_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_class_decorator_hook_2_ChainedPlugin_env",
    .tp_new = plugin___get_class_decorator_hook_2_ChainedPlugin_env_new,
    .tp_dealloc = (destructor)plugin___get_class_decorator_hook_2_ChainedPlugin_env_dealloc,
    .tp_traverse = (traverseproc)plugin___get_class_decorator_hook_2_ChainedPlugin_env_traverse,
    .tp_clear = (inquiry)plugin___get_class_decorator_hook_2_ChainedPlugin_env_clear,
    .tp_methods = plugin___get_class_decorator_hook_2_ChainedPlugin_env_methods,
    .tp_basicsize = sizeof(mypy___plugin___get_class_decorator_hook_2_ChainedPlugin_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___get_class_decorator_hook_2_ChainedPlugin_env_template = &CPyType_plugin___get_class_decorator_hook_2_ChainedPlugin_env_template_;

static PyObject *
plugin___get_class_decorator_hook_2_ChainedPlugin_env_setup(PyTypeObject *type)
{
    mypy___plugin___get_class_decorator_hook_2_ChainedPlugin_envObject *self;
    self = (mypy___plugin___get_class_decorator_hook_2_ChainedPlugin_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin___get_class_decorator_hook_2_ChainedPlugin_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___get_class_decorator_hook_2_ChainedPlugin_env(void)
{
    PyObject *self = plugin___get_class_decorator_hook_2_ChainedPlugin_env_setup(CPyType_plugin___get_class_decorator_hook_2_ChainedPlugin_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_____get__(self, instance, owner);
}
PyMemberDef plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_setup(PyTypeObject *type);
PyObject *CPyDef_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj(void);

static PyObject *
plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_setup(type);
}

static int
plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_traverse(mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject))));
    return 0;
}

static int
plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_clear(mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject))));
    return 0;
}

static void
plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_dealloc(mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_dealloc)
    plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_vtable[2];
static bool
CPyDef_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_trait_vtable_setup(void)
{
    CPyVTableItem plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_____call__,
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_____get__,
    };
    memcpy(plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_vtable, plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_vtable_scratch, sizeof(plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_vtable));
    return 1;
}

static PyMethodDef plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj",
    .tp_new = plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_new,
    .tp_dealloc = (destructor)plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_dealloc,
    .tp_traverse = (traverseproc)plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_traverse,
    .tp_clear = (inquiry)plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_clear,
    .tp_methods = plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj,
    .tp_members = plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_members,
    .tp_basicsize = sizeof(mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_template = &CPyType_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_template_;

static PyObject *
plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_setup(PyTypeObject *type)
{
    mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject *self;
    self = (mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_vtable;
    self->vectorcall = CPyPy_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj(void)
{
    PyObject *self = plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_setup(CPyType_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *plugin___get_metaclass_hook_ChainedPlugin_env_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___get_metaclass_hook_ChainedPlugin_env(void);

static PyObject *
plugin___get_metaclass_hook_ChainedPlugin_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___get_metaclass_hook_ChainedPlugin_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin___get_metaclass_hook_ChainedPlugin_env_setup(type);
}

static int
plugin___get_metaclass_hook_ChainedPlugin_env_traverse(mypy___plugin___get_metaclass_hook_ChainedPlugin_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fullname);
    Py_VISIT(self->_self);
    return 0;
}

static int
plugin___get_metaclass_hook_ChainedPlugin_env_clear(mypy___plugin___get_metaclass_hook_ChainedPlugin_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fullname);
    Py_CLEAR(self->_self);
    return 0;
}

static void
plugin___get_metaclass_hook_ChainedPlugin_env_dealloc(mypy___plugin___get_metaclass_hook_ChainedPlugin_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___get_metaclass_hook_ChainedPlugin_env_dealloc)
    plugin___get_metaclass_hook_ChainedPlugin_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___get_metaclass_hook_ChainedPlugin_env_vtable[1];
static bool
CPyDef_plugin___get_metaclass_hook_ChainedPlugin_env_trait_vtable_setup(void)
{
    CPyVTableItem plugin___get_metaclass_hook_ChainedPlugin_env_vtable_scratch[] = {
        NULL
    };
    memcpy(plugin___get_metaclass_hook_ChainedPlugin_env_vtable, plugin___get_metaclass_hook_ChainedPlugin_env_vtable_scratch, sizeof(plugin___get_metaclass_hook_ChainedPlugin_env_vtable));
    return 1;
}

static PyMethodDef plugin___get_metaclass_hook_ChainedPlugin_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___get_metaclass_hook_ChainedPlugin_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_metaclass_hook_ChainedPlugin_env",
    .tp_new = plugin___get_metaclass_hook_ChainedPlugin_env_new,
    .tp_dealloc = (destructor)plugin___get_metaclass_hook_ChainedPlugin_env_dealloc,
    .tp_traverse = (traverseproc)plugin___get_metaclass_hook_ChainedPlugin_env_traverse,
    .tp_clear = (inquiry)plugin___get_metaclass_hook_ChainedPlugin_env_clear,
    .tp_methods = plugin___get_metaclass_hook_ChainedPlugin_env_methods,
    .tp_basicsize = sizeof(mypy___plugin___get_metaclass_hook_ChainedPlugin_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___get_metaclass_hook_ChainedPlugin_env_template = &CPyType_plugin___get_metaclass_hook_ChainedPlugin_env_template_;

static PyObject *
plugin___get_metaclass_hook_ChainedPlugin_env_setup(PyTypeObject *type)
{
    mypy___plugin___get_metaclass_hook_ChainedPlugin_envObject *self;
    self = (mypy___plugin___get_metaclass_hook_ChainedPlugin_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin___get_metaclass_hook_ChainedPlugin_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___get_metaclass_hook_ChainedPlugin_env(void)
{
    PyObject *self = plugin___get_metaclass_hook_ChainedPlugin_env_setup(CPyType_plugin___get_metaclass_hook_ChainedPlugin_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_____get__(self, instance, owner);
}
PyMemberDef plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_setup(PyTypeObject *type);
PyObject *CPyDef_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj(void);

static PyObject *
plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_setup(type);
}

static int
plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_traverse(mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject))));
    return 0;
}

static int
plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_clear(mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject))));
    return 0;
}

static void
plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_dealloc(mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_dealloc)
    plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_vtable[2];
static bool
CPyDef_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_trait_vtable_setup(void)
{
    CPyVTableItem plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_____call__,
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_____get__,
    };
    memcpy(plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_vtable, plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_vtable_scratch, sizeof(plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_vtable));
    return 1;
}

static PyMethodDef plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj",
    .tp_new = plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_new,
    .tp_dealloc = (destructor)plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_dealloc,
    .tp_traverse = (traverseproc)plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_traverse,
    .tp_clear = (inquiry)plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_clear,
    .tp_methods = plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj,
    .tp_members = plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_members,
    .tp_basicsize = sizeof(mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_template = &CPyType_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_template_;

static PyObject *
plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_setup(PyTypeObject *type)
{
    mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject *self;
    self = (mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_vtable;
    self->vectorcall = CPyPy_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj(void)
{
    PyObject *self = plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_setup(CPyType_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *plugin___get_base_class_hook_ChainedPlugin_env_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___get_base_class_hook_ChainedPlugin_env(void);

static PyObject *
plugin___get_base_class_hook_ChainedPlugin_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___get_base_class_hook_ChainedPlugin_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin___get_base_class_hook_ChainedPlugin_env_setup(type);
}

static int
plugin___get_base_class_hook_ChainedPlugin_env_traverse(mypy___plugin___get_base_class_hook_ChainedPlugin_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fullname);
    Py_VISIT(self->_self);
    return 0;
}

static int
plugin___get_base_class_hook_ChainedPlugin_env_clear(mypy___plugin___get_base_class_hook_ChainedPlugin_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fullname);
    Py_CLEAR(self->_self);
    return 0;
}

static void
plugin___get_base_class_hook_ChainedPlugin_env_dealloc(mypy___plugin___get_base_class_hook_ChainedPlugin_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___get_base_class_hook_ChainedPlugin_env_dealloc)
    plugin___get_base_class_hook_ChainedPlugin_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___get_base_class_hook_ChainedPlugin_env_vtable[1];
static bool
CPyDef_plugin___get_base_class_hook_ChainedPlugin_env_trait_vtable_setup(void)
{
    CPyVTableItem plugin___get_base_class_hook_ChainedPlugin_env_vtable_scratch[] = {
        NULL
    };
    memcpy(plugin___get_base_class_hook_ChainedPlugin_env_vtable, plugin___get_base_class_hook_ChainedPlugin_env_vtable_scratch, sizeof(plugin___get_base_class_hook_ChainedPlugin_env_vtable));
    return 1;
}

static PyMethodDef plugin___get_base_class_hook_ChainedPlugin_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___get_base_class_hook_ChainedPlugin_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_base_class_hook_ChainedPlugin_env",
    .tp_new = plugin___get_base_class_hook_ChainedPlugin_env_new,
    .tp_dealloc = (destructor)plugin___get_base_class_hook_ChainedPlugin_env_dealloc,
    .tp_traverse = (traverseproc)plugin___get_base_class_hook_ChainedPlugin_env_traverse,
    .tp_clear = (inquiry)plugin___get_base_class_hook_ChainedPlugin_env_clear,
    .tp_methods = plugin___get_base_class_hook_ChainedPlugin_env_methods,
    .tp_basicsize = sizeof(mypy___plugin___get_base_class_hook_ChainedPlugin_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___get_base_class_hook_ChainedPlugin_env_template = &CPyType_plugin___get_base_class_hook_ChainedPlugin_env_template_;

static PyObject *
plugin___get_base_class_hook_ChainedPlugin_env_setup(PyTypeObject *type)
{
    mypy___plugin___get_base_class_hook_ChainedPlugin_envObject *self;
    self = (mypy___plugin___get_base_class_hook_ChainedPlugin_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin___get_base_class_hook_ChainedPlugin_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___get_base_class_hook_ChainedPlugin_env(void)
{
    PyObject *self = plugin___get_base_class_hook_ChainedPlugin_env_setup(CPyType_plugin___get_base_class_hook_ChainedPlugin_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_____get__(self, instance, owner);
}
PyMemberDef plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_setup(PyTypeObject *type);
PyObject *CPyDef_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj(void);

static PyObject *
plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_setup(type);
}

static int
plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_traverse(mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject))));
    return 0;
}

static int
plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_clear(mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject))));
    return 0;
}

static void
plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_dealloc(mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_dealloc)
    plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_vtable[2];
static bool
CPyDef_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_trait_vtable_setup(void)
{
    CPyVTableItem plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_____call__,
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_____get__,
    };
    memcpy(plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_vtable, plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_vtable_scratch, sizeof(plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_vtable));
    return 1;
}

static PyMethodDef plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj",
    .tp_new = plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_new,
    .tp_dealloc = (destructor)plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_dealloc,
    .tp_traverse = (traverseproc)plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_traverse,
    .tp_clear = (inquiry)plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_clear,
    .tp_methods = plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj,
    .tp_members = plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_members,
    .tp_basicsize = sizeof(mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_template = &CPyType_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_template_;

static PyObject *
plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_setup(PyTypeObject *type)
{
    mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject *self;
    self = (mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_vtable;
    self->vectorcall = CPyPy_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj(void)
{
    PyObject *self = plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_setup(CPyType_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *plugin___get_customize_class_mro_hook_ChainedPlugin_env_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___get_customize_class_mro_hook_ChainedPlugin_env(void);

static PyObject *
plugin___get_customize_class_mro_hook_ChainedPlugin_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___get_customize_class_mro_hook_ChainedPlugin_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin___get_customize_class_mro_hook_ChainedPlugin_env_setup(type);
}

static int
plugin___get_customize_class_mro_hook_ChainedPlugin_env_traverse(mypy___plugin___get_customize_class_mro_hook_ChainedPlugin_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fullname);
    Py_VISIT(self->_self);
    return 0;
}

static int
plugin___get_customize_class_mro_hook_ChainedPlugin_env_clear(mypy___plugin___get_customize_class_mro_hook_ChainedPlugin_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fullname);
    Py_CLEAR(self->_self);
    return 0;
}

static void
plugin___get_customize_class_mro_hook_ChainedPlugin_env_dealloc(mypy___plugin___get_customize_class_mro_hook_ChainedPlugin_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___get_customize_class_mro_hook_ChainedPlugin_env_dealloc)
    plugin___get_customize_class_mro_hook_ChainedPlugin_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___get_customize_class_mro_hook_ChainedPlugin_env_vtable[1];
static bool
CPyDef_plugin___get_customize_class_mro_hook_ChainedPlugin_env_trait_vtable_setup(void)
{
    CPyVTableItem plugin___get_customize_class_mro_hook_ChainedPlugin_env_vtable_scratch[] = {
        NULL
    };
    memcpy(plugin___get_customize_class_mro_hook_ChainedPlugin_env_vtable, plugin___get_customize_class_mro_hook_ChainedPlugin_env_vtable_scratch, sizeof(plugin___get_customize_class_mro_hook_ChainedPlugin_env_vtable));
    return 1;
}

static PyMethodDef plugin___get_customize_class_mro_hook_ChainedPlugin_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___get_customize_class_mro_hook_ChainedPlugin_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_customize_class_mro_hook_ChainedPlugin_env",
    .tp_new = plugin___get_customize_class_mro_hook_ChainedPlugin_env_new,
    .tp_dealloc = (destructor)plugin___get_customize_class_mro_hook_ChainedPlugin_env_dealloc,
    .tp_traverse = (traverseproc)plugin___get_customize_class_mro_hook_ChainedPlugin_env_traverse,
    .tp_clear = (inquiry)plugin___get_customize_class_mro_hook_ChainedPlugin_env_clear,
    .tp_methods = plugin___get_customize_class_mro_hook_ChainedPlugin_env_methods,
    .tp_basicsize = sizeof(mypy___plugin___get_customize_class_mro_hook_ChainedPlugin_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___get_customize_class_mro_hook_ChainedPlugin_env_template = &CPyType_plugin___get_customize_class_mro_hook_ChainedPlugin_env_template_;

static PyObject *
plugin___get_customize_class_mro_hook_ChainedPlugin_env_setup(PyTypeObject *type)
{
    mypy___plugin___get_customize_class_mro_hook_ChainedPlugin_envObject *self;
    self = (mypy___plugin___get_customize_class_mro_hook_ChainedPlugin_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin___get_customize_class_mro_hook_ChainedPlugin_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___get_customize_class_mro_hook_ChainedPlugin_env(void)
{
    PyObject *self = plugin___get_customize_class_mro_hook_ChainedPlugin_env_setup(CPyType_plugin___get_customize_class_mro_hook_ChainedPlugin_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_____get__(self, instance, owner);
}
PyMemberDef plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_setup(PyTypeObject *type);
PyObject *CPyDef_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj(void);

static PyObject *
plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_setup(type);
}

static int
plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_traverse(mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject))));
    return 0;
}

static int
plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_clear(mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject))));
    return 0;
}

static void
plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_dealloc(mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_dealloc)
    plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_vtable[2];
static bool
CPyDef_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_trait_vtable_setup(void)
{
    CPyVTableItem plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_____call__,
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_____get__,
    };
    memcpy(plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_vtable, plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_vtable_scratch, sizeof(plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_vtable));
    return 1;
}

static PyMethodDef plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj",
    .tp_new = plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_new,
    .tp_dealloc = (destructor)plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_dealloc,
    .tp_traverse = (traverseproc)plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_traverse,
    .tp_clear = (inquiry)plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_clear,
    .tp_methods = plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj,
    .tp_members = plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_members,
    .tp_basicsize = sizeof(mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_template = &CPyType_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_template_;

static PyObject *
plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_setup(PyTypeObject *type)
{
    mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject *self;
    self = (mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_vtable;
    self->vectorcall = CPyPy_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj(void)
{
    PyObject *self = plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_setup(CPyType_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *plugin___get_dynamic_class_hook_ChainedPlugin_env_setup(PyTypeObject *type);
PyObject *CPyDef_plugin___get_dynamic_class_hook_ChainedPlugin_env(void);

static PyObject *
plugin___get_dynamic_class_hook_ChainedPlugin_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin___get_dynamic_class_hook_ChainedPlugin_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin___get_dynamic_class_hook_ChainedPlugin_env_setup(type);
}

static int
plugin___get_dynamic_class_hook_ChainedPlugin_env_traverse(mypy___plugin___get_dynamic_class_hook_ChainedPlugin_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fullname);
    Py_VISIT(self->_self);
    return 0;
}

static int
plugin___get_dynamic_class_hook_ChainedPlugin_env_clear(mypy___plugin___get_dynamic_class_hook_ChainedPlugin_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fullname);
    Py_CLEAR(self->_self);
    return 0;
}

static void
plugin___get_dynamic_class_hook_ChainedPlugin_env_dealloc(mypy___plugin___get_dynamic_class_hook_ChainedPlugin_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin___get_dynamic_class_hook_ChainedPlugin_env_dealloc)
    plugin___get_dynamic_class_hook_ChainedPlugin_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin___get_dynamic_class_hook_ChainedPlugin_env_vtable[1];
static bool
CPyDef_plugin___get_dynamic_class_hook_ChainedPlugin_env_trait_vtable_setup(void)
{
    CPyVTableItem plugin___get_dynamic_class_hook_ChainedPlugin_env_vtable_scratch[] = {
        NULL
    };
    memcpy(plugin___get_dynamic_class_hook_ChainedPlugin_env_vtable, plugin___get_dynamic_class_hook_ChainedPlugin_env_vtable_scratch, sizeof(plugin___get_dynamic_class_hook_ChainedPlugin_env_vtable));
    return 1;
}

static PyMethodDef plugin___get_dynamic_class_hook_ChainedPlugin_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin___get_dynamic_class_hook_ChainedPlugin_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_dynamic_class_hook_ChainedPlugin_env",
    .tp_new = plugin___get_dynamic_class_hook_ChainedPlugin_env_new,
    .tp_dealloc = (destructor)plugin___get_dynamic_class_hook_ChainedPlugin_env_dealloc,
    .tp_traverse = (traverseproc)plugin___get_dynamic_class_hook_ChainedPlugin_env_traverse,
    .tp_clear = (inquiry)plugin___get_dynamic_class_hook_ChainedPlugin_env_clear,
    .tp_methods = plugin___get_dynamic_class_hook_ChainedPlugin_env_methods,
    .tp_basicsize = sizeof(mypy___plugin___get_dynamic_class_hook_ChainedPlugin_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_plugin___get_dynamic_class_hook_ChainedPlugin_env_template = &CPyType_plugin___get_dynamic_class_hook_ChainedPlugin_env_template_;

static PyObject *
plugin___get_dynamic_class_hook_ChainedPlugin_env_setup(PyTypeObject *type)
{
    mypy___plugin___get_dynamic_class_hook_ChainedPlugin_envObject *self;
    self = (mypy___plugin___get_dynamic_class_hook_ChainedPlugin_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin___get_dynamic_class_hook_ChainedPlugin_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin___get_dynamic_class_hook_ChainedPlugin_env(void)
{
    PyObject *self = plugin___get_dynamic_class_hook_ChainedPlugin_env_setup(CPyType_plugin___get_dynamic_class_hook_ChainedPlugin_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_____get__(self, instance, owner);
}
PyMemberDef plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_setup(PyTypeObject *type);
PyObject *CPyDef_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj(void);

static PyObject *
plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_setup(type);
}

static int
plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_traverse(mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject))));
    return 0;
}

static int
plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_clear(mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject))));
    return 0;
}

static void
plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_dealloc(mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_dealloc)
    plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_vtable[2];
static bool
CPyDef_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_trait_vtable_setup(void)
{
    CPyVTableItem plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_____call__,
        (CPyVTableItem)CPyDef_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_____get__,
    };
    memcpy(plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_vtable, plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_vtable_scratch, sizeof(plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_vtable));
    return 1;
}

static PyMethodDef plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj",
    .tp_new = plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_new,
    .tp_dealloc = (destructor)plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_dealloc,
    .tp_traverse = (traverseproc)plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_traverse,
    .tp_clear = (inquiry)plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_clear,
    .tp_methods = plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj,
    .tp_members = plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_members,
    .tp_basicsize = sizeof(mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_template = &CPyType_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_template_;

static PyObject *
plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_setup(PyTypeObject *type)
{
    mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject *self;
    self = (mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_vtable;
    self->vectorcall = CPyPy_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj(void)
{
    PyObject *self = plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_setup(CPyType_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef pluginmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef pluginmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.plugin",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    pluginmodule_methods
};

PyObject *CPyInit_mypy___plugin(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___plugin_internal) {
        Py_INCREF(CPyModule_mypy___plugin_internal);
        return CPyModule_mypy___plugin_internal;
    }
    CPyModule_mypy___plugin_internal = PyModule_Create(&pluginmodule);
    if (unlikely(CPyModule_mypy___plugin_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___plugin_internal, "__name__");
    CPyStatic_plugin___globals = PyModule_GetDict(CPyModule_mypy___plugin_internal);
    if (unlikely(CPyStatic_plugin___globals == NULL))
        goto fail;
    CPyType_plugin___get_type_analyze_hook_ChainedPlugin_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin___get_type_analyze_hook_ChainedPlugin_env_template, NULL, modname);
    if (unlikely(!CPyType_plugin___get_type_analyze_hook_ChainedPlugin_env))
        goto fail;
    CPyType_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_template, NULL, modname);
    if (unlikely(!CPyType_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj))
        goto fail;
    CPyType_plugin___get_function_signature_hook_ChainedPlugin_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin___get_function_signature_hook_ChainedPlugin_env_template, NULL, modname);
    if (unlikely(!CPyType_plugin___get_function_signature_hook_ChainedPlugin_env))
        goto fail;
    CPyType_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_template, NULL, modname);
    if (unlikely(!CPyType_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj))
        goto fail;
    CPyType_plugin___get_function_hook_ChainedPlugin_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin___get_function_hook_ChainedPlugin_env_template, NULL, modname);
    if (unlikely(!CPyType_plugin___get_function_hook_ChainedPlugin_env))
        goto fail;
    CPyType_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_template, NULL, modname);
    if (unlikely(!CPyType_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj))
        goto fail;
    CPyType_plugin___get_method_signature_hook_ChainedPlugin_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin___get_method_signature_hook_ChainedPlugin_env_template, NULL, modname);
    if (unlikely(!CPyType_plugin___get_method_signature_hook_ChainedPlugin_env))
        goto fail;
    CPyType_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_template, NULL, modname);
    if (unlikely(!CPyType_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj))
        goto fail;
    CPyType_plugin___get_method_hook_ChainedPlugin_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin___get_method_hook_ChainedPlugin_env_template, NULL, modname);
    if (unlikely(!CPyType_plugin___get_method_hook_ChainedPlugin_env))
        goto fail;
    CPyType_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_template, NULL, modname);
    if (unlikely(!CPyType_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj))
        goto fail;
    CPyType_plugin___get_attribute_hook_ChainedPlugin_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin___get_attribute_hook_ChainedPlugin_env_template, NULL, modname);
    if (unlikely(!CPyType_plugin___get_attribute_hook_ChainedPlugin_env))
        goto fail;
    CPyType_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_template, NULL, modname);
    if (unlikely(!CPyType_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj))
        goto fail;
    CPyType_plugin___get_class_attribute_hook_ChainedPlugin_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin___get_class_attribute_hook_ChainedPlugin_env_template, NULL, modname);
    if (unlikely(!CPyType_plugin___get_class_attribute_hook_ChainedPlugin_env))
        goto fail;
    CPyType_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_template, NULL, modname);
    if (unlikely(!CPyType_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj))
        goto fail;
    CPyType_plugin___get_class_decorator_hook_ChainedPlugin_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin___get_class_decorator_hook_ChainedPlugin_env_template, NULL, modname);
    if (unlikely(!CPyType_plugin___get_class_decorator_hook_ChainedPlugin_env))
        goto fail;
    CPyType_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_template, NULL, modname);
    if (unlikely(!CPyType_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj))
        goto fail;
    CPyType_plugin___get_class_decorator_hook_2_ChainedPlugin_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin___get_class_decorator_hook_2_ChainedPlugin_env_template, NULL, modname);
    if (unlikely(!CPyType_plugin___get_class_decorator_hook_2_ChainedPlugin_env))
        goto fail;
    CPyType_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_template, NULL, modname);
    if (unlikely(!CPyType_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj))
        goto fail;
    CPyType_plugin___get_metaclass_hook_ChainedPlugin_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin___get_metaclass_hook_ChainedPlugin_env_template, NULL, modname);
    if (unlikely(!CPyType_plugin___get_metaclass_hook_ChainedPlugin_env))
        goto fail;
    CPyType_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_template, NULL, modname);
    if (unlikely(!CPyType_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj))
        goto fail;
    CPyType_plugin___get_base_class_hook_ChainedPlugin_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin___get_base_class_hook_ChainedPlugin_env_template, NULL, modname);
    if (unlikely(!CPyType_plugin___get_base_class_hook_ChainedPlugin_env))
        goto fail;
    CPyType_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_template, NULL, modname);
    if (unlikely(!CPyType_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj))
        goto fail;
    CPyType_plugin___get_customize_class_mro_hook_ChainedPlugin_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin___get_customize_class_mro_hook_ChainedPlugin_env_template, NULL, modname);
    if (unlikely(!CPyType_plugin___get_customize_class_mro_hook_ChainedPlugin_env))
        goto fail;
    CPyType_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_template, NULL, modname);
    if (unlikely(!CPyType_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj))
        goto fail;
    CPyType_plugin___get_dynamic_class_hook_ChainedPlugin_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin___get_dynamic_class_hook_ChainedPlugin_env_template, NULL, modname);
    if (unlikely(!CPyType_plugin___get_dynamic_class_hook_ChainedPlugin_env))
        goto fail;
    CPyType_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_template, NULL, modname);
    if (unlikely(!CPyType_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_plugin_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___plugin_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___plugin_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_plugin___TypeAnalyzerPluginInterface);
    Py_CLEAR(CPyType_plugin___AnalyzeTypeContext);
    Py_CLEAR(CPyType_plugin___CommonPluginApi);
    Py_CLEAR(CPyType_plugin___CheckerPluginInterface);
    Py_CLEAR(CPyType_plugin___SemanticAnalyzerPluginInterface);
    Py_CLEAR(CPyType_plugin___ReportConfigContext);
    Py_CLEAR(CPyType_plugin___FunctionSigContext);
    Py_CLEAR(CPyType_plugin___FunctionContext);
    Py_CLEAR(CPyType_plugin___MethodSigContext);
    Py_CLEAR(CPyType_plugin___MethodContext);
    Py_CLEAR(CPyType_plugin___AttributeContext);
    Py_CLEAR(CPyType_plugin___ClassDefContext);
    Py_CLEAR(CPyType_plugin___DynamicClassDefContext);
    Py_CLEAR(CPyType_plugin___Plugin);
    Py_CLEAR(CPyType_plugin___ChainedPlugin);
    Py_CLEAR(CPyType_plugin___get_type_analyze_hook_ChainedPlugin_env);
    Py_CLEAR(CPyType_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj);
    Py_CLEAR(CPyType_plugin___get_function_signature_hook_ChainedPlugin_env);
    Py_CLEAR(CPyType_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj);
    Py_CLEAR(CPyType_plugin___get_function_hook_ChainedPlugin_env);
    Py_CLEAR(CPyType_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj);
    Py_CLEAR(CPyType_plugin___get_method_signature_hook_ChainedPlugin_env);
    Py_CLEAR(CPyType_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj);
    Py_CLEAR(CPyType_plugin___get_method_hook_ChainedPlugin_env);
    Py_CLEAR(CPyType_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj);
    Py_CLEAR(CPyType_plugin___get_attribute_hook_ChainedPlugin_env);
    Py_CLEAR(CPyType_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj);
    Py_CLEAR(CPyType_plugin___get_class_attribute_hook_ChainedPlugin_env);
    Py_CLEAR(CPyType_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj);
    Py_CLEAR(CPyType_plugin___get_class_decorator_hook_ChainedPlugin_env);
    Py_CLEAR(CPyType_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj);
    Py_CLEAR(CPyType_plugin___get_class_decorator_hook_2_ChainedPlugin_env);
    Py_CLEAR(CPyType_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj);
    Py_CLEAR(CPyType_plugin___get_metaclass_hook_ChainedPlugin_env);
    Py_CLEAR(CPyType_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj);
    Py_CLEAR(CPyType_plugin___get_base_class_hook_ChainedPlugin_env);
    Py_CLEAR(CPyType_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj);
    Py_CLEAR(CPyType_plugin___get_customize_class_mro_hook_ChainedPlugin_env);
    Py_CLEAR(CPyType_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj);
    Py_CLEAR(CPyType_plugin___get_dynamic_class_hook_ChainedPlugin_env);
    Py_CLEAR(CPyType_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj);
    return NULL;
}

char CPyDef_plugin___TypeAnalyzerPluginInterface___fail(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_ctx, PyObject *cpy_r_code) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    if (cpy_r_code != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_code = cpy_r_r0;
    CPy_DECREF(cpy_r_code);
CPyL2: ;
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "fail", 173, CPyStatic_plugin___globals);
        goto CPyL5;
    }
    CPy_Raise(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "fail", 173, CPyStatic_plugin___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___TypeAnalyzerPluginInterface___fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "ctx", "code", 0};
    static CPyArg_Parser parser = {"OO|$O:fail", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_ctx;
    PyObject *obj_code = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_msg, &obj_ctx, &obj_code)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typeanal___TypeAnalyser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.TypeAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    PyObject *arg_code;
    if (obj_code == NULL) {
        arg_code = NULL;
        goto __LL4663;
    }
    if (PyObject_TypeCheck(obj_code, CPyType_errorcodes___ErrorCode))
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL4663;
    if (obj_code == Py_None)
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL4663;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", obj_code); 
    goto fail;
__LL4663: ;
    char retval = CPyDef_plugin___TypeAnalyzerPluginInterface___fail(arg_self, arg_msg, arg_ctx, arg_code);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "fail", 171, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___TypeAnalyzerPluginInterface___named_type(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "named_type", 178, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "named_type", 178, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___TypeAnalyzerPluginInterface___named_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "args", 0};
    static CPyArg_Parser parser = {"OO:named_type", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_args)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typeanal___TypeAnalyser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.TypeAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___TypeAnalyzerPluginInterface___named_type(arg_self, arg_name, arg_args);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "named_type", 176, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___TypeAnalyzerPluginInterface___analyze_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "analyze_type", 183, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "analyze_type", 183, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___TypeAnalyzerPluginInterface___analyze_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:analyze_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typeanal___TypeAnalyser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.TypeAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___TypeAnalyzerPluginInterface___analyze_type(arg_self, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "analyze_type", 181, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___TypeAnalyzerPluginInterface___analyze_callable_args(PyObject *cpy_r_self, PyObject *cpy_r_arglist) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "analyze_callable_args", 190, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "analyze_callable_args", 190, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___TypeAnalyzerPluginInterface___analyze_callable_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"arglist", 0};
    static CPyArg_Parser parser = {"O:analyze_callable_args", kwlist, 0};
    PyObject *obj_arglist;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arglist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typeanal___TypeAnalyser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.TypeAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_arglist;
    if (likely(Py_TYPE(obj_arglist) == CPyType_types___TypeList))
        arg_arglist = obj_arglist;
    else {
        CPy_TypeError("mypy.types.TypeList", obj_arglist); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___TypeAnalyzerPluginInterface___analyze_callable_args(arg_self, arg_arglist);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "analyze_callable_args", 186, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___CommonPluginApi___lookup_fully_qualified(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "lookup_fully_qualified", 219, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "lookup_fully_qualified", 219, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___CommonPluginApi___lookup_fully_qualified(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:lookup_fully_qualified", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___CommonPluginApi)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.CommonPluginApi", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___CommonPluginApi___lookup_fully_qualified(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "lookup_fully_qualified", 213, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___CommonPluginApi___lookup_fully_qualified__CommonPluginApi_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[2566]; /* 'lookup_fully_qualified' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (Py_TYPE(cpy_r_r3) == CPyType_nodes___SymbolTableNode)
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL4664;
    if (cpy_r_r3 == Py_None)
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL4664;
    CPy_TypeError("mypy.nodes.SymbolTableNode or None", cpy_r_r3); 
    cpy_r_r4 = NULL;
__LL4664: ;
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_plugin___CommonPluginApi___lookup_fully_qualified__CommonPluginApi_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:lookup_fully_qualified__CommonPluginApi_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___CommonPluginApi)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.CommonPluginApi", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___CommonPluginApi___lookup_fully_qualified__CommonPluginApi_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "lookup_fully_qualified__CommonPluginApi_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___CheckerPluginInterface___type_context(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "type_context", 239, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "type_context", 239, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___CheckerPluginInterface___type_context(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":type_context", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checker___TypeChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.CheckerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___CheckerPluginInterface___type_context(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "type_context", 237, CPyStatic_plugin___globals);
    return NULL;
}

char CPyDef_plugin___CheckerPluginInterface___fail(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_ctx, PyObject *cpy_r_code) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    if (cpy_r_code != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_code = cpy_r_r0;
    CPy_DECREF(cpy_r_code);
CPyL2: ;
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "fail", 246, CPyStatic_plugin___globals);
        goto CPyL5;
    }
    CPy_Raise(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "fail", 246, CPyStatic_plugin___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___CheckerPluginInterface___fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "ctx", "code", 0};
    static CPyArg_Parser parser = {"OO|$O:fail", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_ctx;
    PyObject *obj_code = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_msg, &obj_ctx, &obj_code)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checker___TypeChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.CheckerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (PyUnicode_Check(obj_msg))
        arg_msg = obj_msg;
    else {
        arg_msg = NULL;
    }
    if (arg_msg != NULL) goto __LL4665;
    if (PyTuple_Check(obj_msg))
        arg_msg = obj_msg;
    else {
        arg_msg = NULL;
    }
    if (arg_msg != NULL) goto __LL4665;
    CPy_TypeError("union[str, tuple]", obj_msg); 
    goto fail;
__LL4665: ;
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    PyObject *arg_code;
    if (obj_code == NULL) {
        arg_code = NULL;
        goto __LL4666;
    }
    if (PyObject_TypeCheck(obj_code, CPyType_errorcodes___ErrorCode))
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL4666;
    if (obj_code == Py_None)
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL4666;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", obj_code); 
    goto fail;
__LL4666: ;
    char retval = CPyDef_plugin___CheckerPluginInterface___fail(arg_self, arg_msg, arg_ctx, arg_code);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "fail", 242, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___CheckerPluginInterface___named_generic_type(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "named_generic_type", 251, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "named_generic_type", 251, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___CheckerPluginInterface___named_generic_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "args", 0};
    static CPyArg_Parser parser = {"OO:named_generic_type", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_args)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checker___TypeChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.CheckerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___CheckerPluginInterface___named_generic_type(arg_self, arg_name, arg_args);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "named_generic_type", 249, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___CheckerPluginInterface___get_expression_type(PyObject *cpy_r_self, PyObject *cpy_r_node, PyObject *cpy_r_type_context) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    if (cpy_r_type_context != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_type_context = cpy_r_r0;
    CPy_DECREF(cpy_r_type_context);
CPyL2: ;
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_expression_type", 256, CPyStatic_plugin___globals);
        goto CPyL5;
    }
    CPy_Raise(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "get_expression_type", 256, CPyStatic_plugin___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___CheckerPluginInterface___get_expression_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", "type_context", 0};
    static CPyArg_Parser parser = {"O|O:get_expression_type", kwlist, 0};
    PyObject *obj_node;
    PyObject *obj_type_context = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_node, &obj_type_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checker___TypeChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.CheckerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___Expression)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_node); 
        goto fail;
    }
    PyObject *arg_type_context;
    if (obj_type_context == NULL) {
        arg_type_context = NULL;
        goto __LL4667;
    }
    if (PyObject_TypeCheck(obj_type_context, CPyType_types___Type))
        arg_type_context = obj_type_context;
    else {
        arg_type_context = NULL;
    }
    if (arg_type_context != NULL) goto __LL4667;
    if (obj_type_context == Py_None)
        arg_type_context = obj_type_context;
    else {
        arg_type_context = NULL;
    }
    if (arg_type_context != NULL) goto __LL4667;
    CPy_TypeError("mypy.types.Type or None", obj_type_context); 
    goto fail;
__LL4667: ;
    PyObject *retval = CPyDef_plugin___CheckerPluginInterface___get_expression_type(arg_self, arg_node, arg_type_context);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_expression_type", 254, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___SemanticAnalyzerPluginInterface___named_type(PyObject *cpy_r_self, PyObject *cpy_r_fullname, PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    if (cpy_r_args != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_args = cpy_r_r0;
    CPy_DECREF(cpy_r_args);
CPyL2: ;
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "named_type", 278, CPyStatic_plugin___globals);
        goto CPyL5;
    }
    CPy_Raise(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "named_type", 278, CPyStatic_plugin___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___named_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", "args", 0};
    static CPyArg_Parser parser = {"O|O:named_type", kwlist, 0};
    PyObject *obj_fullname;
    PyObject *obj_args = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fullname, &obj_args)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *arg_args;
    if (obj_args == NULL) {
        arg_args = NULL;
        goto __LL4668;
    }
    if (PyList_Check(obj_args))
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL4668;
    if (obj_args == Py_None)
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL4668;
    CPy_TypeError("list or None", obj_args); 
    goto fail;
__LL4668: ;
    PyObject *retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___named_type(arg_self, arg_fullname, arg_args);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "named_type", 276, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___SemanticAnalyzerPluginInterface___builtin_type(PyObject *cpy_r_self, PyObject *cpy_r_fully_qualified_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "builtin_type", 284, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "builtin_type", 284, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___builtin_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fully_qualified_name", 0};
    static CPyArg_Parser parser = {"O:builtin_type", kwlist, 0};
    PyObject *obj_fully_qualified_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fully_qualified_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_fully_qualified_name;
    if (likely(PyUnicode_Check(obj_fully_qualified_name)))
        arg_fully_qualified_name = obj_fully_qualified_name;
    else {
        CPy_TypeError("str", obj_fully_qualified_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___builtin_type(arg_self, arg_fully_qualified_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "builtin_type", 281, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___SemanticAnalyzerPluginInterface___named_type_or_none(PyObject *cpy_r_self, PyObject *cpy_r_fullname, PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    if (cpy_r_args != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_args = cpy_r_r0;
    CPy_DECREF(cpy_r_args);
CPyL2: ;
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "named_type_or_none", 294, CPyStatic_plugin___globals);
        goto CPyL5;
    }
    CPy_Raise(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "named_type_or_none", 294, CPyStatic_plugin___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___named_type_or_none(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", "args", 0};
    static CPyArg_Parser parser = {"O|O:named_type_or_none", kwlist, 0};
    PyObject *obj_fullname;
    PyObject *obj_args = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fullname, &obj_args)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *arg_args;
    if (obj_args == NULL) {
        arg_args = NULL;
        goto __LL4669;
    }
    if (PyList_Check(obj_args))
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL4669;
    if (obj_args == Py_None)
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL4669;
    CPy_TypeError("list or None", obj_args); 
    goto fail;
__LL4669: ;
    PyObject *retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___named_type_or_none(arg_self, arg_fullname, arg_args);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "named_type_or_none", 287, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___SemanticAnalyzerPluginInterface___basic_new_typeinfo(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_basetype_or_fallback, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "basic_new_typeinfo", 298, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "basic_new_typeinfo", 298, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___basic_new_typeinfo(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "basetype_or_fallback", "line", 0};
    static CPyArg_Parser parser = {"OOO:basic_new_typeinfo", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_basetype_or_fallback;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_basetype_or_fallback, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_basetype_or_fallback;
    if (likely(Py_TYPE(obj_basetype_or_fallback) == CPyType_types___Instance))
        arg_basetype_or_fallback = obj_basetype_or_fallback;
    else {
        CPy_TypeError("mypy.types.Instance", obj_basetype_or_fallback); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___basic_new_typeinfo(arg_self, arg_name, arg_basetype_or_fallback, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "basic_new_typeinfo", 297, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___SemanticAnalyzerPluginInterface___parse_bool(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "parse_bool", 303, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "parse_bool", 303, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___parse_bool(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:parse_bool", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___parse_bool(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "parse_bool", 301, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___SemanticAnalyzerPluginInterface___parse_str_literal(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    CPy_Unreachable();
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___parse_str_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:parse_str_literal", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___parse_str_literal(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "parse_str_literal", 306, CPyStatic_plugin___globals);
    return NULL;
}

char CPyDef_plugin___SemanticAnalyzerPluginInterface___fail(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_ctx, char cpy_r_serious, char cpy_r_blocker, PyObject *cpy_r_code) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    if (cpy_r_serious != 2) goto CPyL2;
    cpy_r_serious = 0;
CPyL2: ;
    if (cpy_r_blocker != 2) goto CPyL4;
    cpy_r_blocker = 0;
CPyL4: ;
    if (cpy_r_code != NULL) goto CPyL6;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_code = cpy_r_r0;
    CPy_DECREF(cpy_r_code);
CPyL6: ;
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "fail", 320, CPyStatic_plugin___globals);
        goto CPyL9;
    }
    CPy_Raise(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "fail", 320, CPyStatic_plugin___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "ctx", "serious", "blocker", "code", 0};
    static CPyArg_Parser parser = {"OO|O$OO:fail", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_ctx;
    PyObject *obj_serious = NULL;
    PyObject *obj_blocker = NULL;
    PyObject *obj_code = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_msg, &obj_ctx, &obj_serious, &obj_blocker, &obj_code)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    char arg_serious;
    if (obj_serious == NULL) {
        arg_serious = 2;
    } else if (unlikely(!PyBool_Check(obj_serious))) {
        CPy_TypeError("bool", obj_serious); goto fail;
    } else
        arg_serious = obj_serious == Py_True;
    char arg_blocker;
    if (obj_blocker == NULL) {
        arg_blocker = 2;
    } else if (unlikely(!PyBool_Check(obj_blocker))) {
        CPy_TypeError("bool", obj_blocker); goto fail;
    } else
        arg_blocker = obj_blocker == Py_True;
    PyObject *arg_code;
    if (obj_code == NULL) {
        arg_code = NULL;
        goto __LL4670;
    }
    if (PyObject_TypeCheck(obj_code, CPyType_errorcodes___ErrorCode))
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL4670;
    if (obj_code == Py_None)
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL4670;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", obj_code); 
    goto fail;
__LL4670: ;
    char retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___fail(arg_self, arg_msg, arg_ctx, arg_serious, arg_blocker, arg_code);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "fail", 310, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___SemanticAnalyzerPluginInterface___anal_type(PyObject *cpy_r_self, PyObject *cpy_r_t, PyObject *cpy_r_tvar_scope, char cpy_r_allow_tuple_literal, char cpy_r_allow_unbound_tvars, char cpy_r_report_invalid_types, char cpy_r_third_pass) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    if (cpy_r_tvar_scope != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_tvar_scope = cpy_r_r0;
    CPy_DECREF(cpy_r_tvar_scope);
CPyL2: ;
    if (cpy_r_allow_tuple_literal != 2) goto CPyL4;
    cpy_r_allow_tuple_literal = 0;
CPyL4: ;
    if (cpy_r_allow_unbound_tvars != 2) goto CPyL6;
    cpy_r_allow_unbound_tvars = 0;
CPyL6: ;
    if (cpy_r_report_invalid_types != 2) goto CPyL8;
    cpy_r_report_invalid_types = 1;
CPyL8: ;
    if (cpy_r_third_pass != 2) goto CPyL10;
    cpy_r_third_pass = 0;
CPyL10: ;
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "anal_type", 339, CPyStatic_plugin___globals);
        goto CPyL13;
    }
    CPy_Raise(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "anal_type", 339, CPyStatic_plugin___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___anal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", "tvar_scope", "allow_tuple_literal", "allow_unbound_tvars", "report_invalid_types", "third_pass", 0};
    static CPyArg_Parser parser = {"O|$OOOOO:anal_type", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_tvar_scope = NULL;
    PyObject *obj_allow_tuple_literal = NULL;
    PyObject *obj_allow_unbound_tvars = NULL;
    PyObject *obj_report_invalid_types = NULL;
    PyObject *obj_third_pass = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_t, &obj_tvar_scope, &obj_allow_tuple_literal, &obj_allow_unbound_tvars, &obj_report_invalid_types, &obj_third_pass)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    PyObject *arg_tvar_scope;
    if (obj_tvar_scope == NULL) {
        arg_tvar_scope = NULL;
        goto __LL4671;
    }
    if (Py_TYPE(obj_tvar_scope) == CPyType_tvar_scope___TypeVarLikeScope)
        arg_tvar_scope = obj_tvar_scope;
    else {
        arg_tvar_scope = NULL;
    }
    if (arg_tvar_scope != NULL) goto __LL4671;
    if (obj_tvar_scope == Py_None)
        arg_tvar_scope = obj_tvar_scope;
    else {
        arg_tvar_scope = NULL;
    }
    if (arg_tvar_scope != NULL) goto __LL4671;
    CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope or None", obj_tvar_scope); 
    goto fail;
__LL4671: ;
    char arg_allow_tuple_literal;
    if (obj_allow_tuple_literal == NULL) {
        arg_allow_tuple_literal = 2;
    } else if (unlikely(!PyBool_Check(obj_allow_tuple_literal))) {
        CPy_TypeError("bool", obj_allow_tuple_literal); goto fail;
    } else
        arg_allow_tuple_literal = obj_allow_tuple_literal == Py_True;
    char arg_allow_unbound_tvars;
    if (obj_allow_unbound_tvars == NULL) {
        arg_allow_unbound_tvars = 2;
    } else if (unlikely(!PyBool_Check(obj_allow_unbound_tvars))) {
        CPy_TypeError("bool", obj_allow_unbound_tvars); goto fail;
    } else
        arg_allow_unbound_tvars = obj_allow_unbound_tvars == Py_True;
    char arg_report_invalid_types;
    if (obj_report_invalid_types == NULL) {
        arg_report_invalid_types = 2;
    } else if (unlikely(!PyBool_Check(obj_report_invalid_types))) {
        CPy_TypeError("bool", obj_report_invalid_types); goto fail;
    } else
        arg_report_invalid_types = obj_report_invalid_types == Py_True;
    char arg_third_pass;
    if (obj_third_pass == NULL) {
        arg_third_pass = 2;
    } else if (unlikely(!PyBool_Check(obj_third_pass))) {
        CPy_TypeError("bool", obj_third_pass); goto fail;
    } else
        arg_third_pass = obj_third_pass == Py_True;
    PyObject *retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___anal_type(arg_self, arg_t, arg_tvar_scope, arg_allow_tuple_literal, arg_allow_unbound_tvars, arg_report_invalid_types, arg_third_pass);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "anal_type", 323, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___SemanticAnalyzerPluginInterface___class_type(PyObject *cpy_r_self, PyObject *cpy_r_self_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "class_type", 344, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "class_type", 344, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___class_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"self_type", 0};
    static CPyArg_Parser parser = {"O:class_type", kwlist, 0};
    PyObject *obj_self_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_self_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_self_type;
    if (likely(PyObject_TypeCheck(obj_self_type, CPyType_types___Type)))
        arg_self_type = obj_self_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_self_type); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___class_type(arg_self, arg_self_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "class_type", 342, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___SemanticAnalyzerPluginInterface___lookup_fully_qualified(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "lookup_fully_qualified", 352, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "lookup_fully_qualified", 352, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___lookup_fully_qualified(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:lookup_fully_qualified", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___lookup_fully_qualified(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "lookup_fully_qualified", 347, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___SemanticAnalyzerPluginInterface___lookup_fully_qualified_or_none(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "lookup_fully_qualified_or_none", 360, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "lookup_fully_qualified_or_none", 360, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___lookup_fully_qualified_or_none(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:lookup_fully_qualified_or_none", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___lookup_fully_qualified_or_none(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "lookup_fully_qualified_or_none", 355, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___SemanticAnalyzerPluginInterface___lookup_qualified(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_ctx, char cpy_r_suppress_errors) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    if (cpy_r_suppress_errors != 2) goto CPyL2;
    cpy_r_suppress_errors = 0;
CPyL2: ;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "lookup_qualified", 370, CPyStatic_plugin___globals);
        goto CPyL5;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "lookup_qualified", 370, CPyStatic_plugin___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___lookup_qualified(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "ctx", "suppress_errors", 0};
    static CPyArg_Parser parser = {"OO|O:lookup_qualified", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_ctx;
    PyObject *obj_suppress_errors = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_ctx, &obj_suppress_errors)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    char arg_suppress_errors;
    if (obj_suppress_errors == NULL) {
        arg_suppress_errors = 2;
    } else if (unlikely(!PyBool_Check(obj_suppress_errors))) {
        CPy_TypeError("bool", obj_suppress_errors); goto fail;
    } else
        arg_suppress_errors = obj_suppress_errors == Py_True;
    PyObject *retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___lookup_qualified(arg_self, arg_name, arg_ctx, arg_suppress_errors);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "lookup_qualified", 363, CPyStatic_plugin___globals);
    return NULL;
}

char CPyDef_plugin___SemanticAnalyzerPluginInterface___add_plugin_dependency(PyObject *cpy_r_self, PyObject *cpy_r_trigger, PyObject *cpy_r_target) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    if (cpy_r_target != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_target = cpy_r_r0;
    CPy_DECREF(cpy_r_target);
CPyL2: ;
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "add_plugin_dependency", 388, CPyStatic_plugin___globals);
        goto CPyL5;
    }
    CPy_Raise(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "add_plugin_dependency", 388, CPyStatic_plugin___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___add_plugin_dependency(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"trigger", "target", 0};
    static CPyArg_Parser parser = {"O|O:add_plugin_dependency", kwlist, 0};
    PyObject *obj_trigger;
    PyObject *obj_target = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_trigger, &obj_target)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_trigger;
    if (likely(PyUnicode_Check(obj_trigger)))
        arg_trigger = obj_trigger;
    else {
        CPy_TypeError("str", obj_trigger); 
        goto fail;
    }
    PyObject *arg_target;
    if (obj_target == NULL) {
        arg_target = NULL;
        goto __LL4672;
    }
    if (PyUnicode_Check(obj_target))
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL4672;
    if (obj_target == Py_None)
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL4672;
    CPy_TypeError("str or None", obj_target); 
    goto fail;
__LL4672: ;
    char retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___add_plugin_dependency(arg_self, arg_trigger, arg_target);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "add_plugin_dependency", 373, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___SemanticAnalyzerPluginInterface___add_symbol_table_node(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_stnode) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "add_symbol_table_node", 393, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "add_symbol_table_node", 393, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___add_symbol_table_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "stnode", 0};
    static CPyArg_Parser parser = {"OO:add_symbol_table_node", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_stnode;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_stnode)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_stnode;
    if (likely(Py_TYPE(obj_stnode) == CPyType_nodes___SymbolTableNode))
        arg_stnode = obj_stnode;
    else {
        CPy_TypeError("mypy.nodes.SymbolTableNode", obj_stnode); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___add_symbol_table_node(arg_self, arg_name, arg_stnode);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "add_symbol_table_node", 391, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___SemanticAnalyzerPluginInterface___qualified_name(PyObject *cpy_r_self, PyObject *cpy_r_n) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "qualified_name", 398, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "qualified_name", 398, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___qualified_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"n", 0};
    static CPyArg_Parser parser = {"O:qualified_name", kwlist, 0};
    PyObject *obj_n;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_n)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_n;
    if (likely(PyUnicode_Check(obj_n)))
        arg_n = obj_n;
    else {
        CPy_TypeError("str", obj_n); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___qualified_name(arg_self, arg_n);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "qualified_name", 396, CPyStatic_plugin___globals);
    return NULL;
}

char CPyDef_plugin___SemanticAnalyzerPluginInterface___defer(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "defer", 406, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "defer", 406, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___defer(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":defer", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    char retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___defer(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "defer", 401, CPyStatic_plugin___globals);
    return NULL;
}

char CPyDef_plugin___SemanticAnalyzerPluginInterface___final_iteration(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "final_iteration", 412, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "final_iteration", 412, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___final_iteration(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":final_iteration", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    char retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___final_iteration(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "final_iteration", 410, CPyStatic_plugin___globals);
    return NULL;
}

char CPyDef_plugin___SemanticAnalyzerPluginInterface___is_stub_file(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "is_stub_file", 417, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "is_stub_file", 417, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___is_stub_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_stub_file", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    char retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___is_stub_file(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "is_stub_file", 416, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___SemanticAnalyzerPluginInterface___analyze_simple_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_rvalue, char cpy_r_is_final) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "analyze_simple_literal_type", 421, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugin.py", "analyze_simple_literal_type", 421, CPyStatic_plugin___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin___SemanticAnalyzerPluginInterface___analyze_simple_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"rvalue", "is_final", 0};
    static CPyArg_Parser parser = {"OO:analyze_simple_literal_type", kwlist, 0};
    PyObject *obj_rvalue;
    PyObject *obj_is_final;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_rvalue, &obj_is_final)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_rvalue;
    if (likely(PyObject_TypeCheck(obj_rvalue, CPyType_nodes___Expression)))
        arg_rvalue = obj_rvalue;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_rvalue); 
        goto fail;
    }
    char arg_is_final;
    if (unlikely(!PyBool_Check(obj_is_final))) {
        CPy_TypeError("bool", obj_is_final); goto fail;
    } else
        arg_is_final = obj_is_final == Py_True;
    PyObject *retval = CPyDef_plugin___SemanticAnalyzerPluginInterface___analyze_simple_literal_type(arg_self, arg_rvalue, arg_is_final);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "analyze_simple_literal_type", 420, CPyStatic_plugin___globals);
    return NULL;
}

char CPyDef_plugin___Plugin_____init__(PyObject *cpy_r_self, PyObject *cpy_r_options) {
    tuple_T2II cpy_r_r0;
    PyObject *cpy_r_r1;
    CPy_INCREF(cpy_r_options);
    ((mypy___plugin___PluginObject *)cpy_r_self)->_options = cpy_r_options;
    cpy_r_r0 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_version;
    CPyTagged_INCREF(cpy_r_r0.f0);
    CPyTagged_INCREF(cpy_r_r0.f1);
    ((mypy___plugin___PluginObject *)cpy_r_self)->_python_version = cpy_r_r0;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    ((mypy___plugin___PluginObject *)cpy_r_self)->__modules = cpy_r_r1;
    return 1;
}

PyObject *CPyPy_plugin___Plugin_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"options", 0};
    PyObject *obj_options;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_options)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_plugin___Plugin_____init__(arg_self, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__init__", 533, CPyStatic_plugin___globals);
    return NULL;
}

char CPyDef_plugin___Plugin_____init___3__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[288]; /* '__init__' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_options};
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

PyObject *CPyPy_plugin___Plugin_____init___3__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"options", 0};
    static CPyArg_Parser parser = {"O:__init____Plugin_glue", kwlist, 0};
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_options)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_plugin___Plugin_____init___3__Plugin_glue(arg_self, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__init____Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

char CPyDef_plugin___Plugin___set_modules(PyObject *cpy_r_self, PyObject *cpy_r_modules) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_modules);
    if (((mypy___plugin___PluginObject *)cpy_r_self)->__modules != NULL) {
        CPy_DECREF(((mypy___plugin___PluginObject *)cpy_r_self)->__modules);
    }
    ((mypy___plugin___PluginObject *)cpy_r_self)->__modules = cpy_r_modules;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/plugin.py", "set_modules", 542, CPyStatic_plugin___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_plugin___Plugin___set_modules(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"modules", 0};
    static CPyArg_Parser parser = {"O:set_modules", kwlist, 0};
    PyObject *obj_modules;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_modules)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    char retval = CPyDef_plugin___Plugin___set_modules(arg_self, arg_modules);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "set_modules", 541, CPyStatic_plugin___globals);
    return NULL;
}

char CPyDef_plugin___Plugin___set_modules__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_modules) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[4349]; /* 'set_modules' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_modules};
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

PyObject *CPyPy_plugin___Plugin___set_modules__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"modules", 0};
    static CPyArg_Parser parser = {"O:set_modules__Plugin_glue", kwlist, 0};
    PyObject *obj_modules;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_modules)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    char retval = CPyDef_plugin___Plugin___set_modules__Plugin_glue(arg_self, arg_modules);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "set_modules__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___lookup_fully_qualified(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___plugin___PluginObject *)cpy_r_self)->__modules;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "lookup_fully_qualified", "Plugin", "_modules", 545, CPyStatic_plugin___globals);
        goto CPyL8;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugin.py", "lookup_fully_qualified", 545, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r4 = ((mypy___plugin___PluginObject *)cpy_r_self)->__modules;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "lookup_fully_qualified", "Plugin", "_modules", 546, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/plugin.py", "lookup_fully_qualified", 546, CPyStatic_plugin___globals, "dict", cpy_r_r4);
        goto CPyL8;
    }
    cpy_r_r6 = 2;
    cpy_r_r7 = CPyDef_lookup___lookup_fully_qualified(cpy_r_fullname, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "lookup_fully_qualified", 546, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    return cpy_r_r7;
CPyL8: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_plugin___Plugin___lookup_fully_qualified(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:lookup_fully_qualified", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___lookup_fully_qualified(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "lookup_fully_qualified", 544, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___lookup_fully_qualified__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[2566]; /* 'lookup_fully_qualified' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (Py_TYPE(cpy_r_r3) == CPyType_nodes___SymbolTableNode)
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL4673;
    if (cpy_r_r3 == Py_None)
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL4673;
    CPy_TypeError("mypy.nodes.SymbolTableNode or None", cpy_r_r3); 
    cpy_r_r4 = NULL;
__LL4673: ;
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_plugin___Plugin___lookup_fully_qualified__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:lookup_fully_qualified__Plugin_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___lookup_fully_qualified__Plugin_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "lookup_fully_qualified__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___report_config_data(PyObject *cpy_r_self, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_plugin___Plugin___report_config_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:report_config_data", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___report_config_data(arg_self, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "report_config_data", 548, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___report_config_data__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[4350]; /* 'report_config_data' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_ctx};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___Plugin___report_config_data__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:report_config_data__Plugin_glue", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___report_config_data__Plugin_glue(arg_self, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "report_config_data__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_additional_deps(PyObject *cpy_r_self, PyObject *cpy_r_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_additional_deps", 586, CPyStatic_plugin___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_plugin___Plugin___get_additional_deps(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", 0};
    static CPyArg_Parser parser = {"O:get_additional_deps", kwlist, 0};
    PyObject *obj_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(Py_TYPE(obj_file) == CPyType_nodes___MypyFile))
        arg_file = obj_file;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_file); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_additional_deps(arg_self, arg_file);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_additional_deps", 571, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_additional_deps__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_file) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[4351]; /* 'get_additional_deps' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_file};
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

PyObject *CPyPy_plugin___Plugin___get_additional_deps__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", 0};
    static CPyArg_Parser parser = {"O:get_additional_deps__Plugin_glue", kwlist, 0};
    PyObject *obj_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(Py_TYPE(obj_file) == CPyType_nodes___MypyFile))
        arg_file = obj_file;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_file); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_additional_deps__Plugin_glue(arg_self, arg_file);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_additional_deps__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_type_analyze_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_plugin___Plugin___get_type_analyze_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_type_analyze_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_type_analyze_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_type_analyze_hook", 588, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_type_analyze_hook__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[4352]; /* 'get_type_analyze_hook' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___Plugin___get_type_analyze_hook__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_type_analyze_hook__Plugin_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_type_analyze_hook__Plugin_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_type_analyze_hook__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_function_signature_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_plugin___Plugin___get_function_signature_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_function_signature_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_function_signature_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_function_signature_hook", 606, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_function_signature_hook__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[4353]; /* 'get_function_signature_hook' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___Plugin___get_function_signature_hook__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_function_signature_hook__Plugin_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_function_signature_hook__Plugin_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_function_signature_hook__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_function_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_plugin___Plugin___get_function_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_function_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_function_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_function_hook", 623, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_function_hook__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[4354]; /* 'get_function_hook' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___Plugin___get_function_hook__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_function_hook__Plugin_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_function_hook__Plugin_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_function_hook__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_method_signature_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_plugin___Plugin___get_method_signature_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_method_signature_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_method_signature_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_method_signature_hook", 639, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_method_signature_hook__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[4355]; /* 'get_method_signature_hook' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___Plugin___get_method_signature_hook__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_method_signature_hook__Plugin_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_method_signature_hook__Plugin_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_method_signature_hook__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_method_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_plugin___Plugin___get_method_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_method_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_method_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_method_hook", 669, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_method_hook__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[4356]; /* 'get_method_hook' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___Plugin___get_method_hook__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_method_hook__Plugin_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_method_hook__Plugin_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_method_hook__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_attribute_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_plugin___Plugin___get_attribute_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_attribute_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_attribute_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_attribute_hook", 677, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_attribute_hook__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[4357]; /* 'get_attribute_hook' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___Plugin___get_attribute_hook__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_attribute_hook__Plugin_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_attribute_hook__Plugin_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_attribute_hook__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_class_attribute_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_plugin___Plugin___get_class_attribute_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_class_attribute_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_class_attribute_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_class_attribute_hook", 708, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_class_attribute_hook__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[4358]; /* 'get_class_attribute_hook' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___Plugin___get_class_attribute_hook__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_class_attribute_hook__Plugin_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_class_attribute_hook__Plugin_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_class_attribute_hook__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_class_decorator_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_plugin___Plugin___get_class_decorator_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_class_decorator_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_class_decorator_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook", 726, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_class_decorator_hook__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[4359]; /* 'get_class_decorator_hook' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___Plugin___get_class_decorator_hook__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_class_decorator_hook__Plugin_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_class_decorator_hook__Plugin_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_class_decorator_hook_2(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_plugin___Plugin___get_class_decorator_hook_2(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_class_decorator_hook_2", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_class_decorator_hook_2(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook_2", 744, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_class_decorator_hook_2__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[4360]; /* 'get_class_decorator_hook_2' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___Plugin___get_class_decorator_hook_2__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_class_decorator_hook_2__Plugin_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_class_decorator_hook_2__Plugin_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook_2__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_metaclass_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_plugin___Plugin___get_metaclass_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_metaclass_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_metaclass_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_metaclass_hook", 762, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_metaclass_hook__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[4361]; /* 'get_metaclass_hook' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___Plugin___get_metaclass_hook__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_metaclass_hook__Plugin_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_metaclass_hook__Plugin_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_metaclass_hook__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_base_class_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_plugin___Plugin___get_base_class_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_base_class_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_base_class_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_base_class_hook", 773, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_base_class_hook__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[4362]; /* 'get_base_class_hook' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___Plugin___get_base_class_hook__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_base_class_hook__Plugin_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_base_class_hook__Plugin_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_base_class_hook__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_customize_class_mro_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_plugin___Plugin___get_customize_class_mro_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_customize_class_mro_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_customize_class_mro_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_customize_class_mro_hook", 782, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_customize_class_mro_hook__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[4363]; /* 'get_customize_class_mro_hook' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___Plugin___get_customize_class_mro_hook__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_customize_class_mro_hook__Plugin_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_customize_class_mro_hook__Plugin_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_customize_class_mro_hook__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_dynamic_class_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_plugin___Plugin___get_dynamic_class_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_dynamic_class_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_dynamic_class_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_dynamic_class_hook", 792, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___Plugin___get_dynamic_class_hook__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[4364]; /* 'get_dynamic_class_hook' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_fullname};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_plugin___Plugin___get_dynamic_class_hook__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_dynamic_class_hook__Plugin_glue", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_plugin___Plugin)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___Plugin___get_dynamic_class_hook__Plugin_glue(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_dynamic_class_hook__Plugin_glue", -1, CPyStatic_plugin___globals);
    return NULL;
}

char CPyDef_plugin___ChainedPlugin_____init__(PyObject *cpy_r_self, PyObject *cpy_r_options, PyObject *cpy_r_plugins) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_plugin___Plugin_____init__(cpy_r_self, cpy_r_options);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/plugin.py", "__init__", 830, CPyStatic_plugin___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_plugins);
    ((mypy___plugin___ChainedPluginObject *)cpy_r_self)->__plugins = cpy_r_plugins;
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_plugin___ChainedPlugin_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"options", "plugins", 0};
    PyObject *obj_options;
    PyObject *obj_plugins;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_options, &obj_plugins)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_plugins;
    if (likely(PyList_Check(obj_plugins)))
        arg_plugins = obj_plugins;
    else {
        CPy_TypeError("list", obj_plugins); 
        goto fail;
    }
    char retval = CPyDef_plugin___ChainedPlugin_____init__(arg_self, arg_options, arg_plugins);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__init__", 825, CPyStatic_plugin___globals);
    return NULL;
}

char CPyDef_plugin___ChainedPlugin___set_modules(PyObject *cpy_r_self, PyObject *cpy_r_modules) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_plugin;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypy___plugin___ChainedPluginObject *)cpy_r_self)->__plugins;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL7;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_plugin___Plugin)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/plugin.py", "set_modules", 834, CPyStatic_plugin___globals, "mypy.plugin.Plugin", cpy_r_r6);
        goto CPyL8;
    }
    cpy_r_plugin = cpy_r_r7;
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 2, mypy___plugin___PluginObject, char (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_modules); /* set_modules */
    CPy_DECREF(cpy_r_plugin);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/plugin.py", "set_modules", 835, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL7: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___set_modules(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"modules", 0};
    static CPyArg_Parser parser = {"O:set_modules", kwlist, 0};
    PyObject *obj_modules;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_modules)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    char retval = CPyDef_plugin___ChainedPlugin___set_modules(arg_self, arg_modules);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "set_modules", 833, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___report_config_data(PyObject *cpy_r_self, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_plugin;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_config_data;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = ((mypy___plugin___ChainedPluginObject *)cpy_r_self)->__plugins;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "report_config_data", 838, CPyStatic_plugin___globals);
        goto CPyL17;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL18;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_plugin___Plugin)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/plugin.py", "report_config_data", 838, CPyStatic_plugin___globals, "mypy.plugin.Plugin", cpy_r_r9);
        goto CPyL19;
    }
    cpy_r_plugin = cpy_r_r10;
    cpy_r_r11 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 4, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_ctx); /* report_config_data */
    CPy_DECREF(cpy_r_plugin);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "report_config_data", 838, CPyStatic_plugin___globals);
        goto CPyL19;
    }
    cpy_r_r12 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/plugin.py", "report_config_data", 838, CPyStatic_plugin___globals);
        goto CPyL19;
    }
    cpy_r_r13 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r13;
    goto CPyL2;
CPyL7: ;
    cpy_r_config_data = cpy_r_r3;
    cpy_r_r14 = 0;
    cpy_r_r15 = 0;
CPyL8: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_config_data)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL12;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_config_data, cpy_r_r15);
    cpy_r_x = cpy_r_r20;
    cpy_r_r21 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r22 = cpy_r_x != cpy_r_r21;
    CPy_DECREF(cpy_r_x);
    if (!cpy_r_r22) goto CPyL11;
    cpy_r_r14 = 1;
    goto CPyL12;
CPyL11: ;
    cpy_r_r23 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r23;
    goto CPyL8;
CPyL12: ;
    if (!cpy_r_r14) goto CPyL20;
    cpy_r_r24 = cpy_r_config_data;
    goto CPyL15;
CPyL14: ;
    cpy_r_r25 = Py_None;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r24 = cpy_r_r25;
CPyL15: ;
    return cpy_r_r24;
CPyL16: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL16;
CPyL18: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL16;
CPyL20: ;
    CPy_DECREF(cpy_r_config_data);
    goto CPyL14;
}

PyObject *CPyPy_plugin___ChainedPlugin___report_config_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:report_config_data", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___report_config_data(arg_self, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "report_config_data", 837, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___get_additional_deps(PyObject *cpy_r_self, PyObject *cpy_r_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_deps;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_plugin;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_additional_deps", 842, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_deps = cpy_r_r0;
    cpy_r_r1 = ((mypy___plugin___ChainedPluginObject *)cpy_r_self)->__plugins;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL9;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_plugin___Plugin)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugin.py", "get_additional_deps", 843, CPyStatic_plugin___globals, "mypy.plugin.Plugin", cpy_r_r7);
        goto CPyL10;
    }
    cpy_r_plugin = cpy_r_r8;
    cpy_r_r9 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 5, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_file); /* get_additional_deps */
    CPy_DECREF(cpy_r_plugin);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_additional_deps", 844, CPyStatic_plugin___globals);
        goto CPyL10;
    }
    cpy_r_r10 = CPyList_Extend(cpy_r_deps, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_additional_deps", 844, CPyStatic_plugin___globals);
        goto CPyL10;
    } else
        goto CPyL11;
CPyL6: ;
    cpy_r_r11 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r11;
    goto CPyL2;
CPyL7: ;
    return cpy_r_deps;
CPyL8: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL9: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___get_additional_deps(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", 0};
    static CPyArg_Parser parser = {"O:get_additional_deps", kwlist, 0};
    PyObject *obj_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(Py_TYPE(obj_file) == CPyType_nodes___MypyFile))
        arg_file = obj_file;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_file); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___get_additional_deps(arg_self, arg_file);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_additional_deps", 841, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__get__", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_plugin) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "<lambda>", "__mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj", "__mypyc_env__", 848, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugin___get_type_analyze_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fullname' of 'get_type_analyze_hook_ChainedPlugin_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 848, CPyStatic_plugin___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 6, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_r1); /* get_type_analyze_hook */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 848, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"plugin", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_plugin;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_plugin)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_plugin;
    if (likely(PyObject_TypeCheck(obj_plugin, CPyType_plugin___Plugin)))
        arg_plugin = obj_plugin;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_plugin); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj_____call__(arg___mypyc_self__, arg_plugin);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "<lambda>", 848, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___get_type_analyze_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_plugin___get_type_analyze_hook_ChainedPlugin_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_type_analyze_hook", 847, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fullname);
    if (((mypy___plugin___get_type_analyze_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname != NULL) {
        CPy_DECREF(((mypy___plugin___get_type_analyze_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname);
    }
    ((mypy___plugin___get_type_analyze_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname = cpy_r_fullname;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugin.py", "get_type_analyze_hook", 847, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_type_analyze_hook", 848, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    if (((mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___plugin_____mypyc_lambda__0_get_type_analyze_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugin.py", "get_type_analyze_hook", 848, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_plugin___ChainedPlugin____find_hook(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_type_analyze_hook", 848, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___get_type_analyze_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_type_analyze_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___get_type_analyze_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_type_analyze_hook", 847, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__get__", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_plugin) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "<lambda>", "__mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj", "__mypyc_env__", 853, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugin___get_function_signature_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fullname' of 'get_function_signature_hook_ChainedPlugin_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 853, CPyStatic_plugin___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 7, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_r1); /* get_function_signature_hook */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 853, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"plugin", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_plugin;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_plugin)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_plugin;
    if (likely(PyObject_TypeCheck(obj_plugin, CPyType_plugin___Plugin)))
        arg_plugin = obj_plugin;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_plugin); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj_____call__(arg___mypyc_self__, arg_plugin);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "<lambda>", 853, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___get_function_signature_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_plugin___get_function_signature_hook_ChainedPlugin_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_function_signature_hook", 850, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fullname);
    if (((mypy___plugin___get_function_signature_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname != NULL) {
        CPy_DECREF(((mypy___plugin___get_function_signature_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname);
    }
    ((mypy___plugin___get_function_signature_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname = cpy_r_fullname;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugin.py", "get_function_signature_hook", 850, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_function_signature_hook", 853, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    if (((mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___plugin_____mypyc_lambda__1_get_function_signature_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugin.py", "get_function_signature_hook", 853, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_plugin___ChainedPlugin____find_hook(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_function_signature_hook", 853, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___get_function_signature_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_function_signature_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___get_function_signature_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_function_signature_hook", 850, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__get__", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_plugin) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "<lambda>", "__mypyc_lambda__2_get_function_hook_ChainedPlugin_obj", "__mypyc_env__", 856, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugin___get_function_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fullname' of 'get_function_hook_ChainedPlugin_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 856, CPyStatic_plugin___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 8, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_r1); /* get_function_hook */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 856, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"plugin", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_plugin;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_plugin)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_plugin;
    if (likely(PyObject_TypeCheck(obj_plugin, CPyType_plugin___Plugin)))
        arg_plugin = obj_plugin;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_plugin); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj_____call__(arg___mypyc_self__, arg_plugin);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "<lambda>", 856, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___get_function_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_plugin___get_function_hook_ChainedPlugin_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_function_hook", 855, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fullname);
    if (((mypy___plugin___get_function_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname != NULL) {
        CPy_DECREF(((mypy___plugin___get_function_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname);
    }
    ((mypy___plugin___get_function_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname = cpy_r_fullname;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugin.py", "get_function_hook", 855, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_function_hook", 856, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    if (((mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___plugin_____mypyc_lambda__2_get_function_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugin.py", "get_function_hook", 856, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_plugin___ChainedPlugin____find_hook(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_function_hook", 856, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___get_function_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_function_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___get_function_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_function_hook", 855, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__get__", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_plugin) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "<lambda>", "__mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj", "__mypyc_env__", 861, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugin___get_method_signature_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fullname' of 'get_method_signature_hook_ChainedPlugin_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 861, CPyStatic_plugin___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 9, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_r1); /* get_method_signature_hook */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 861, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"plugin", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_plugin;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_plugin)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_plugin;
    if (likely(PyObject_TypeCheck(obj_plugin, CPyType_plugin___Plugin)))
        arg_plugin = obj_plugin;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_plugin); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj_____call__(arg___mypyc_self__, arg_plugin);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "<lambda>", 861, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___get_method_signature_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_plugin___get_method_signature_hook_ChainedPlugin_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_method_signature_hook", 858, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fullname);
    if (((mypy___plugin___get_method_signature_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname != NULL) {
        CPy_DECREF(((mypy___plugin___get_method_signature_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname);
    }
    ((mypy___plugin___get_method_signature_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname = cpy_r_fullname;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugin.py", "get_method_signature_hook", 858, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_method_signature_hook", 861, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    if (((mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___plugin_____mypyc_lambda__3_get_method_signature_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugin.py", "get_method_signature_hook", 861, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_plugin___ChainedPlugin____find_hook(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_method_signature_hook", 861, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___get_method_signature_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_method_signature_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___get_method_signature_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_method_signature_hook", 858, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__get__", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_plugin) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "<lambda>", "__mypyc_lambda__4_get_method_hook_ChainedPlugin_obj", "__mypyc_env__", 864, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugin___get_method_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fullname' of 'get_method_hook_ChainedPlugin_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 864, CPyStatic_plugin___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 10, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_r1); /* get_method_hook */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 864, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"plugin", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_plugin;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_plugin)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_plugin;
    if (likely(PyObject_TypeCheck(obj_plugin, CPyType_plugin___Plugin)))
        arg_plugin = obj_plugin;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_plugin); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj_____call__(arg___mypyc_self__, arg_plugin);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "<lambda>", 864, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___get_method_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_plugin___get_method_hook_ChainedPlugin_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_method_hook", 863, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fullname);
    if (((mypy___plugin___get_method_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname != NULL) {
        CPy_DECREF(((mypy___plugin___get_method_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname);
    }
    ((mypy___plugin___get_method_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname = cpy_r_fullname;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugin.py", "get_method_hook", 863, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_method_hook", 864, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    if (((mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___plugin_____mypyc_lambda__4_get_method_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugin.py", "get_method_hook", 864, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_plugin___ChainedPlugin____find_hook(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_method_hook", 864, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___get_method_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_method_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___get_method_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_method_hook", 863, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__get__", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_plugin) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "<lambda>", "__mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj", "__mypyc_env__", 867, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugin___get_attribute_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fullname' of 'get_attribute_hook_ChainedPlugin_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 867, CPyStatic_plugin___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 11, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_r1); /* get_attribute_hook */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 867, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"plugin", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_plugin;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_plugin)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_plugin;
    if (likely(PyObject_TypeCheck(obj_plugin, CPyType_plugin___Plugin)))
        arg_plugin = obj_plugin;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_plugin); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj_____call__(arg___mypyc_self__, arg_plugin);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "<lambda>", 867, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___get_attribute_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_plugin___get_attribute_hook_ChainedPlugin_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_attribute_hook", 866, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fullname);
    if (((mypy___plugin___get_attribute_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname != NULL) {
        CPy_DECREF(((mypy___plugin___get_attribute_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname);
    }
    ((mypy___plugin___get_attribute_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname = cpy_r_fullname;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugin.py", "get_attribute_hook", 866, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_attribute_hook", 867, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    if (((mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___plugin_____mypyc_lambda__5_get_attribute_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugin.py", "get_attribute_hook", 867, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_plugin___ChainedPlugin____find_hook(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_attribute_hook", 867, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___get_attribute_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_attribute_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___get_attribute_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_attribute_hook", 866, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__get__", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_plugin) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "<lambda>", "__mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj", "__mypyc_env__", 870, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugin___get_class_attribute_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fullname' of 'get_class_attribute_hook_ChainedPlugin_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 870, CPyStatic_plugin___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 12, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_r1); /* get_class_attribute_hook */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 870, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"plugin", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_plugin;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_plugin)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_plugin;
    if (likely(PyObject_TypeCheck(obj_plugin, CPyType_plugin___Plugin)))
        arg_plugin = obj_plugin;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_plugin); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj_____call__(arg___mypyc_self__, arg_plugin);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "<lambda>", 870, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___get_class_attribute_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_plugin___get_class_attribute_hook_ChainedPlugin_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_attribute_hook", 869, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fullname);
    if (((mypy___plugin___get_class_attribute_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname != NULL) {
        CPy_DECREF(((mypy___plugin___get_class_attribute_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname);
    }
    ((mypy___plugin___get_class_attribute_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname = cpy_r_fullname;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_attribute_hook", 869, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_attribute_hook", 870, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    if (((mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___plugin_____mypyc_lambda__6_get_class_attribute_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_attribute_hook", 870, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_plugin___ChainedPlugin____find_hook(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_attribute_hook", 870, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___get_class_attribute_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_class_attribute_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___get_class_attribute_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_class_attribute_hook", 869, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__get__", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_plugin) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "<lambda>", "__mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj", "__mypyc_env__", 873, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugin___get_class_decorator_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fullname' of 'get_class_decorator_hook_ChainedPlugin_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 873, CPyStatic_plugin___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 13, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_r1); /* get_class_decorator_hook */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 873, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"plugin", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_plugin;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_plugin)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_plugin;
    if (likely(PyObject_TypeCheck(obj_plugin, CPyType_plugin___Plugin)))
        arg_plugin = obj_plugin;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_plugin); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj_____call__(arg___mypyc_self__, arg_plugin);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "<lambda>", 873, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___get_class_decorator_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_plugin___get_class_decorator_hook_ChainedPlugin_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook", 872, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fullname);
    if (((mypy___plugin___get_class_decorator_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname != NULL) {
        CPy_DECREF(((mypy___plugin___get_class_decorator_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname);
    }
    ((mypy___plugin___get_class_decorator_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname = cpy_r_fullname;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook", 872, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook", 873, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    if (((mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___plugin_____mypyc_lambda__7_get_class_decorator_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook", 873, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_plugin___ChainedPlugin____find_hook(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook", 873, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___get_class_decorator_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_class_decorator_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___get_class_decorator_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook", 872, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__get__", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_plugin) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "<lambda>", "__mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj", "__mypyc_env__", 878, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugin___get_class_decorator_hook_2_ChainedPlugin_envObject *)cpy_r_r0)->_fullname;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fullname' of 'get_class_decorator_hook_2_ChainedPlugin_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 878, CPyStatic_plugin___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 14, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_r1); /* get_class_decorator_hook_2 */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 878, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"plugin", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_plugin;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_plugin)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_plugin;
    if (likely(PyObject_TypeCheck(obj_plugin, CPyType_plugin___Plugin)))
        arg_plugin = obj_plugin;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_plugin); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj_____call__(arg___mypyc_self__, arg_plugin);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "<lambda>", 878, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___get_class_decorator_hook_2(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_plugin___get_class_decorator_hook_2_ChainedPlugin_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook_2", 875, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fullname);
    if (((mypy___plugin___get_class_decorator_hook_2_ChainedPlugin_envObject *)cpy_r_r0)->_fullname != NULL) {
        CPy_DECREF(((mypy___plugin___get_class_decorator_hook_2_ChainedPlugin_envObject *)cpy_r_r0)->_fullname);
    }
    ((mypy___plugin___get_class_decorator_hook_2_ChainedPlugin_envObject *)cpy_r_r0)->_fullname = cpy_r_fullname;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook_2", 875, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook_2", 878, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    if (((mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___plugin_____mypyc_lambda__8_get_class_decorator_hook_2_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook_2", 878, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_plugin___ChainedPlugin____find_hook(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook_2", 878, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___get_class_decorator_hook_2(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_class_decorator_hook_2", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___get_class_decorator_hook_2(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_class_decorator_hook_2", 875, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__get__", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_plugin) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "<lambda>", "__mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj", "__mypyc_env__", 881, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugin___get_metaclass_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fullname' of 'get_metaclass_hook_ChainedPlugin_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 881, CPyStatic_plugin___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 15, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_r1); /* get_metaclass_hook */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 881, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"plugin", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_plugin;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_plugin)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_plugin;
    if (likely(PyObject_TypeCheck(obj_plugin, CPyType_plugin___Plugin)))
        arg_plugin = obj_plugin;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_plugin); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj_____call__(arg___mypyc_self__, arg_plugin);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "<lambda>", 881, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___get_metaclass_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_plugin___get_metaclass_hook_ChainedPlugin_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_metaclass_hook", 880, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fullname);
    if (((mypy___plugin___get_metaclass_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname != NULL) {
        CPy_DECREF(((mypy___plugin___get_metaclass_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname);
    }
    ((mypy___plugin___get_metaclass_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname = cpy_r_fullname;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugin.py", "get_metaclass_hook", 880, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_metaclass_hook", 881, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    if (((mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___plugin_____mypyc_lambda__9_get_metaclass_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugin.py", "get_metaclass_hook", 881, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_plugin___ChainedPlugin____find_hook(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_metaclass_hook", 881, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___get_metaclass_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_metaclass_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___get_metaclass_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_metaclass_hook", 880, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__get__", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_plugin) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "<lambda>", "__mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj", "__mypyc_env__", 884, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugin___get_base_class_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fullname' of 'get_base_class_hook_ChainedPlugin_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 884, CPyStatic_plugin___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 16, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_r1); /* get_base_class_hook */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 884, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"plugin", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_plugin;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_plugin)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_plugin;
    if (likely(PyObject_TypeCheck(obj_plugin, CPyType_plugin___Plugin)))
        arg_plugin = obj_plugin;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_plugin); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj_____call__(arg___mypyc_self__, arg_plugin);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "<lambda>", 884, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___get_base_class_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_plugin___get_base_class_hook_ChainedPlugin_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_base_class_hook", 883, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fullname);
    if (((mypy___plugin___get_base_class_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname != NULL) {
        CPy_DECREF(((mypy___plugin___get_base_class_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname);
    }
    ((mypy___plugin___get_base_class_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname = cpy_r_fullname;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugin.py", "get_base_class_hook", 883, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_base_class_hook", 884, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    if (((mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___plugin_____mypyc_lambda__10_get_base_class_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugin.py", "get_base_class_hook", 884, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_plugin___ChainedPlugin____find_hook(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_base_class_hook", 884, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___get_base_class_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_base_class_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___get_base_class_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_base_class_hook", 883, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__get__", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_plugin) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "<lambda>", "__mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj", "__mypyc_env__", 889, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugin___get_customize_class_mro_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fullname' of 'get_customize_class_mro_hook_ChainedPlugin_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 889, CPyStatic_plugin___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 17, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_r1); /* get_customize_class_mro_hook */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 889, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"plugin", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_plugin;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_plugin)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_plugin;
    if (likely(PyObject_TypeCheck(obj_plugin, CPyType_plugin___Plugin)))
        arg_plugin = obj_plugin;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_plugin); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj_____call__(arg___mypyc_self__, arg_plugin);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "<lambda>", 889, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___get_customize_class_mro_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_plugin___get_customize_class_mro_hook_ChainedPlugin_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_customize_class_mro_hook", 886, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fullname);
    if (((mypy___plugin___get_customize_class_mro_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname != NULL) {
        CPy_DECREF(((mypy___plugin___get_customize_class_mro_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname);
    }
    ((mypy___plugin___get_customize_class_mro_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname = cpy_r_fullname;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugin.py", "get_customize_class_mro_hook", 886, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_customize_class_mro_hook", 889, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    if (((mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___plugin_____mypyc_lambda__11_get_customize_class_mro_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugin.py", "get_customize_class_mro_hook", 889, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_plugin___ChainedPlugin____find_hook(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_customize_class_mro_hook", 889, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___get_customize_class_mro_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_customize_class_mro_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___get_customize_class_mro_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_customize_class_mro_hook", 886, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "__get__", -1, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_plugin) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugin.py", "<lambda>", "__mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj", "__mypyc_env__", 894, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugin___get_dynamic_class_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fullname' of 'get_dynamic_class_hook_ChainedPlugin_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 894, CPyStatic_plugin___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_plugin, CPyType_plugin___Plugin, 18, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_plugin, cpy_r_r1); /* get_dynamic_class_hook */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<lambda>", 894, CPyStatic_plugin___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"plugin", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_plugin;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_plugin)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_plugin;
    if (likely(PyObject_TypeCheck(obj_plugin, CPyType_plugin___Plugin)))
        arg_plugin = obj_plugin;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_plugin); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj_____call__(arg___mypyc_self__, arg_plugin);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "<lambda>", 894, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin___get_dynamic_class_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_plugin___get_dynamic_class_hook_ChainedPlugin_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_dynamic_class_hook", 891, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fullname);
    if (((mypy___plugin___get_dynamic_class_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname != NULL) {
        CPy_DECREF(((mypy___plugin___get_dynamic_class_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname);
    }
    ((mypy___plugin___get_dynamic_class_hook_ChainedPlugin_envObject *)cpy_r_r0)->_fullname = cpy_r_fullname;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugin.py", "get_dynamic_class_hook", 891, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_dynamic_class_hook", 894, CPyStatic_plugin___globals);
        goto CPyL7;
    }
    if (((mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___plugin_____mypyc_lambda__12_get_dynamic_class_hook_ChainedPlugin_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugin.py", "get_dynamic_class_hook", 894, CPyStatic_plugin___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_plugin___ChainedPlugin____find_hook(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "get_dynamic_class_hook", 894, CPyStatic_plugin___globals);
        goto CPyL6;
    }
    return cpy_r_r4;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_plugin___ChainedPlugin___get_dynamic_class_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_dynamic_class_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_plugin___ChainedPlugin___get_dynamic_class_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "get_dynamic_class_hook", 891, CPyStatic_plugin___globals);
    return NULL;
}

PyObject *CPyDef_plugin___ChainedPlugin____find_hook(PyObject *cpy_r_self, PyObject *cpy_r_lookup) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_plugin;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_hook;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = ((mypy___plugin___ChainedPluginObject *)cpy_r_self)->__plugins;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL10;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_plugin___Plugin)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/plugin.py", "_find_hook", 897, CPyStatic_plugin___globals, "mypy.plugin.Plugin", cpy_r_r6);
        goto CPyL11;
    }
    cpy_r_plugin = cpy_r_r7;
    PyObject *cpy_r_r8[1] = {cpy_r_plugin};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_lookup, cpy_r_r9, 1, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "_find_hook", 898, CPyStatic_plugin___globals);
        goto CPyL12;
    }
    CPy_DECREF(cpy_r_plugin);
    cpy_r_hook = cpy_r_r10;
    cpy_r_r11 = PyObject_IsTrue(cpy_r_hook);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/plugin.py", "_find_hook", 898, CPyStatic_plugin___globals);
        goto CPyL13;
    }
    cpy_r_r13 = cpy_r_r11;
    if (cpy_r_r13) {
        goto CPyL14;
    } else
        goto CPyL15;
CPyL6: ;
    return cpy_r_hook;
CPyL7: ;
    cpy_r_r14 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r14;
    goto CPyL1;
CPyL8: ;
    cpy_r_r15 = Py_None;
    CPy_INCREF(cpy_r_r15);
    return cpy_r_r15;
CPyL9: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL10: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_plugin);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_hook);
    goto CPyL9;
CPyL14: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL6;
CPyL15: ;
    CPy_DECREF(cpy_r_hook);
    goto CPyL7;
}

PyObject *CPyPy_plugin___ChainedPlugin____find_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"lookup", 0};
    static CPyArg_Parser parser = {"O:_find_hook", kwlist, 0};
    PyObject *obj_lookup;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_lookup)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_plugin___ChainedPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_lookup = obj_lookup;
    PyObject *retval = CPyDef_plugin___ChainedPlugin____find_hook(arg_self, arg_lookup);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugin.py", "_find_hook", 896, CPyStatic_plugin___globals);
    return NULL;
}

char CPyDef_plugin_____top_level__(void) {
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
    PyObject *cpy_r_r19;
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
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
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
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject **cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    PyObject **cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    int32_t cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    int32_t cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    int32_t cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    int32_t cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    int32_t cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject **cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    int32_t cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    int32_t cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    int32_t cpy_r_r219;
    char cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    int32_t cpy_r_r223;
    char cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    int32_t cpy_r_r227;
    char cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    int32_t cpy_r_r231;
    char cpy_r_r232;
    PyObject **cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    int32_t cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    char cpy_r_r243;
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
    char cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    char cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject **cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
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
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    int32_t cpy_r_r288;
    char cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    int32_t cpy_r_r292;
    char cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    int32_t cpy_r_r296;
    char cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    int32_t cpy_r_r300;
    char cpy_r_r301;
    PyObject **cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    int32_t cpy_r_r307;
    char cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    char cpy_r_r312;
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
    char cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    char cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject **cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    int32_t cpy_r_r345;
    char cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    int32_t cpy_r_r349;
    char cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    int32_t cpy_r_r353;
    char cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    int32_t cpy_r_r357;
    char cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    int32_t cpy_r_r361;
    char cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    int32_t cpy_r_r365;
    char cpy_r_r366;
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
    int32_t cpy_r_r377;
    char cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    int32_t cpy_r_r381;
    char cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    int32_t cpy_r_r385;
    char cpy_r_r386;
    PyObject **cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    int32_t cpy_r_r392;
    char cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    char cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    char cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    PyObject *cpy_r_r416;
    char cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject **cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    int32_t cpy_r_r430;
    char cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    int32_t cpy_r_r434;
    char cpy_r_r435;
    PyObject *cpy_r_r436;
    PyObject *cpy_r_r437;
    int32_t cpy_r_r438;
    char cpy_r_r439;
    PyObject *cpy_r_r440;
    PyObject *cpy_r_r441;
    int32_t cpy_r_r442;
    char cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    int32_t cpy_r_r446;
    char cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    int32_t cpy_r_r450;
    char cpy_r_r451;
    PyObject *cpy_r_r452;
    PyObject *cpy_r_r453;
    int32_t cpy_r_r454;
    char cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    int32_t cpy_r_r458;
    char cpy_r_r459;
    PyObject **cpy_r_r461;
    PyObject *cpy_r_r462;
    PyObject *cpy_r_r463;
    PyObject *cpy_r_r464;
    int32_t cpy_r_r465;
    char cpy_r_r466;
    PyObject *cpy_r_r467;
    PyObject *cpy_r_r468;
    PyObject *cpy_r_r469;
    char cpy_r_r470;
    PyObject *cpy_r_r471;
    PyObject *cpy_r_r472;
    PyObject *cpy_r_r473;
    PyObject *cpy_r_r474;
    PyObject *cpy_r_r475;
    PyObject *cpy_r_r476;
    PyObject *cpy_r_r477;
    PyObject *cpy_r_r478;
    PyObject *cpy_r_r479;
    PyObject *cpy_r_r480;
    char cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    PyObject *cpy_r_r484;
    PyObject *cpy_r_r485;
    PyObject *cpy_r_r486;
    PyObject *cpy_r_r487;
    PyObject *cpy_r_r488;
    PyObject *cpy_r_r489;
    char cpy_r_r490;
    PyObject *cpy_r_r491;
    PyObject *cpy_r_r492;
    PyObject *cpy_r_r493;
    PyObject **cpy_r_r495;
    PyObject *cpy_r_r496;
    PyObject *cpy_r_r497;
    PyObject *cpy_r_r498;
    PyObject *cpy_r_r499;
    PyObject *cpy_r_r500;
    PyObject *cpy_r_r501;
    PyObject *cpy_r_r502;
    int32_t cpy_r_r503;
    char cpy_r_r504;
    PyObject *cpy_r_r505;
    PyObject *cpy_r_r506;
    int32_t cpy_r_r507;
    char cpy_r_r508;
    PyObject *cpy_r_r509;
    PyObject *cpy_r_r510;
    int32_t cpy_r_r511;
    char cpy_r_r512;
    PyObject *cpy_r_r513;
    PyObject *cpy_r_r514;
    int32_t cpy_r_r515;
    char cpy_r_r516;
    PyObject *cpy_r_r517;
    PyObject *cpy_r_r518;
    int32_t cpy_r_r519;
    char cpy_r_r520;
    PyObject *cpy_r_r521;
    PyObject *cpy_r_r522;
    int32_t cpy_r_r523;
    char cpy_r_r524;
    PyObject *cpy_r_r525;
    PyObject *cpy_r_r526;
    int32_t cpy_r_r527;
    char cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject *cpy_r_r530;
    int32_t cpy_r_r531;
    char cpy_r_r532;
    PyObject *cpy_r_r533;
    PyObject *cpy_r_r534;
    int32_t cpy_r_r535;
    char cpy_r_r536;
    PyObject *cpy_r_r537;
    PyObject *cpy_r_r538;
    int32_t cpy_r_r539;
    char cpy_r_r540;
    PyObject *cpy_r_r541;
    PyObject *cpy_r_r542;
    int32_t cpy_r_r543;
    char cpy_r_r544;
    PyObject *cpy_r_r545;
    PyObject *cpy_r_r546;
    int32_t cpy_r_r547;
    char cpy_r_r548;
    PyObject **cpy_r_r550;
    PyObject *cpy_r_r551;
    PyObject *cpy_r_r552;
    PyObject *cpy_r_r553;
    int32_t cpy_r_r554;
    char cpy_r_r555;
    PyObject *cpy_r_r556;
    PyObject *cpy_r_r557;
    PyObject *cpy_r_r558;
    char cpy_r_r559;
    PyObject *cpy_r_r560;
    PyObject *cpy_r_r561;
    PyObject *cpy_r_r562;
    PyObject *cpy_r_r563;
    PyObject *cpy_r_r564;
    PyObject *cpy_r_r565;
    PyObject *cpy_r_r566;
    PyObject *cpy_r_r567;
    PyObject *cpy_r_r568;
    PyObject *cpy_r_r569;
    char cpy_r_r570;
    PyObject *cpy_r_r571;
    PyObject *cpy_r_r572;
    PyObject *cpy_r_r573;
    PyObject *cpy_r_r574;
    PyObject *cpy_r_r575;
    PyObject *cpy_r_r576;
    PyObject *cpy_r_r577;
    PyObject *cpy_r_r578;
    char cpy_r_r579;
    PyObject *cpy_r_r580;
    PyObject *cpy_r_r581;
    PyObject *cpy_r_r582;
    PyObject **cpy_r_r584;
    PyObject *cpy_r_r585;
    PyObject *cpy_r_r586;
    PyObject *cpy_r_r587;
    PyObject *cpy_r_r588;
    PyObject *cpy_r_r589;
    PyObject *cpy_r_r590;
    PyObject *cpy_r_r591;
    int32_t cpy_r_r592;
    char cpy_r_r593;
    PyObject *cpy_r_r594;
    PyObject *cpy_r_r595;
    int32_t cpy_r_r596;
    char cpy_r_r597;
    PyObject *cpy_r_r598;
    PyObject *cpy_r_r599;
    int32_t cpy_r_r600;
    char cpy_r_r601;
    PyObject *cpy_r_r602;
    PyObject *cpy_r_r603;
    int32_t cpy_r_r604;
    char cpy_r_r605;
    PyObject *cpy_r_r606;
    PyObject *cpy_r_r607;
    int32_t cpy_r_r608;
    char cpy_r_r609;
    PyObject *cpy_r_r610;
    PyObject *cpy_r_r611;
    int32_t cpy_r_r612;
    char cpy_r_r613;
    PyObject *cpy_r_r614;
    PyObject *cpy_r_r615;
    int32_t cpy_r_r616;
    char cpy_r_r617;
    PyObject **cpy_r_r619;
    PyObject *cpy_r_r620;
    PyObject *cpy_r_r621;
    PyObject *cpy_r_r622;
    int32_t cpy_r_r623;
    char cpy_r_r624;
    PyObject *cpy_r_r625;
    PyObject *cpy_r_r626;
    PyObject *cpy_r_r627;
    char cpy_r_r628;
    PyObject *cpy_r_r629;
    PyObject *cpy_r_r630;
    PyObject *cpy_r_r631;
    PyObject *cpy_r_r632;
    PyObject *cpy_r_r633;
    PyObject *cpy_r_r634;
    PyObject *cpy_r_r635;
    PyObject *cpy_r_r636;
    PyObject *cpy_r_r637;
    PyObject *cpy_r_r638;
    char cpy_r_r639;
    PyObject *cpy_r_r640;
    PyObject *cpy_r_r641;
    PyObject *cpy_r_r642;
    PyObject *cpy_r_r643;
    PyObject *cpy_r_r644;
    PyObject *cpy_r_r645;
    PyObject *cpy_r_r646;
    PyObject *cpy_r_r647;
    char cpy_r_r648;
    PyObject *cpy_r_r649;
    PyObject *cpy_r_r650;
    PyObject *cpy_r_r651;
    PyObject **cpy_r_r653;
    PyObject *cpy_r_r654;
    PyObject *cpy_r_r655;
    PyObject *cpy_r_r656;
    PyObject *cpy_r_r657;
    PyObject *cpy_r_r658;
    PyObject *cpy_r_r659;
    PyObject *cpy_r_r660;
    int32_t cpy_r_r661;
    char cpy_r_r662;
    PyObject *cpy_r_r663;
    PyObject *cpy_r_r664;
    int32_t cpy_r_r665;
    char cpy_r_r666;
    PyObject *cpy_r_r667;
    PyObject *cpy_r_r668;
    int32_t cpy_r_r669;
    char cpy_r_r670;
    PyObject *cpy_r_r671;
    PyObject *cpy_r_r672;
    int32_t cpy_r_r673;
    char cpy_r_r674;
    PyObject *cpy_r_r675;
    PyObject *cpy_r_r676;
    int32_t cpy_r_r677;
    char cpy_r_r678;
    PyObject *cpy_r_r679;
    PyObject *cpy_r_r680;
    int32_t cpy_r_r681;
    char cpy_r_r682;
    PyObject **cpy_r_r684;
    PyObject *cpy_r_r685;
    PyObject *cpy_r_r686;
    PyObject *cpy_r_r687;
    int32_t cpy_r_r688;
    char cpy_r_r689;
    PyObject *cpy_r_r690;
    PyObject *cpy_r_r691;
    PyObject *cpy_r_r692;
    char cpy_r_r693;
    PyObject *cpy_r_r694;
    PyObject *cpy_r_r695;
    PyObject *cpy_r_r696;
    PyObject *cpy_r_r697;
    PyObject *cpy_r_r698;
    PyObject *cpy_r_r699;
    PyObject *cpy_r_r700;
    PyObject *cpy_r_r701;
    PyObject *cpy_r_r702;
    PyObject *cpy_r_r703;
    char cpy_r_r704;
    PyObject *cpy_r_r705;
    PyObject *cpy_r_r706;
    PyObject *cpy_r_r707;
    PyObject *cpy_r_r708;
    PyObject *cpy_r_r709;
    PyObject *cpy_r_r710;
    PyObject *cpy_r_r711;
    PyObject *cpy_r_r712;
    char cpy_r_r713;
    PyObject *cpy_r_r714;
    PyObject *cpy_r_r715;
    PyObject *cpy_r_r716;
    PyObject **cpy_r_r718;
    PyObject *cpy_r_r719;
    PyObject *cpy_r_r720;
    PyObject *cpy_r_r721;
    PyObject *cpy_r_r722;
    PyObject *cpy_r_r723;
    PyObject *cpy_r_r724;
    PyObject *cpy_r_r725;
    int32_t cpy_r_r726;
    char cpy_r_r727;
    PyObject *cpy_r_r728;
    PyObject *cpy_r_r729;
    int32_t cpy_r_r730;
    char cpy_r_r731;
    PyObject *cpy_r_r732;
    PyObject *cpy_r_r733;
    int32_t cpy_r_r734;
    char cpy_r_r735;
    PyObject *cpy_r_r736;
    PyObject *cpy_r_r737;
    int32_t cpy_r_r738;
    char cpy_r_r739;
    PyObject *cpy_r_r740;
    PyObject *cpy_r_r741;
    int32_t cpy_r_r742;
    char cpy_r_r743;
    PyObject *cpy_r_r744;
    PyObject *cpy_r_r745;
    int32_t cpy_r_r746;
    char cpy_r_r747;
    PyObject **cpy_r_r749;
    PyObject *cpy_r_r750;
    PyObject *cpy_r_r751;
    PyObject *cpy_r_r752;
    int32_t cpy_r_r753;
    char cpy_r_r754;
    PyObject *cpy_r_r755;
    PyObject *cpy_r_r756;
    PyObject *cpy_r_r757;
    PyObject *cpy_r_r758;
    PyObject *cpy_r_r759;
    PyObject *cpy_r_r760;
    char cpy_r_r761;
    PyObject *cpy_r_r762;
    PyObject *cpy_r_r763;
    PyObject *cpy_r_r764;
    PyObject *cpy_r_r765;
    PyObject *cpy_r_r766;
    int32_t cpy_r_r767;
    char cpy_r_r768;
    PyObject *cpy_r_r769;
    PyObject *cpy_r_r770;
    int32_t cpy_r_r771;
    char cpy_r_r772;
    PyObject *cpy_r_r773;
    PyObject *cpy_r_r774;
    PyObject *cpy_r_r775;
    PyObject *cpy_r_r776;
    PyObject **cpy_r_r778;
    PyObject *cpy_r_r779;
    PyObject *cpy_r_r780;
    PyObject *cpy_r_r781;
    int32_t cpy_r_r782;
    char cpy_r_r783;
    PyObject *cpy_r_r784;
    PyObject *cpy_r_r785;
    PyObject *cpy_r_r786;
    PyObject *cpy_r_r787;
    PyObject *cpy_r_r788;
    char cpy_r_r789;
    PyObject *cpy_r_r790;
    PyObject *cpy_r_r791;
    PyObject *cpy_r_r792;
    PyObject *cpy_r_r793;
    PyObject *cpy_r_r794;
    PyObject *cpy_r_r795;
    int32_t cpy_r_r796;
    char cpy_r_r797;
    PyObject *cpy_r_r798;
    PyObject *cpy_r_r799;
    int32_t cpy_r_r800;
    char cpy_r_r801;
    char cpy_r_r802;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", -1, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_plugin___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 122, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9527]; /* ('abstractmethod',) */
    cpy_r_r10 = CPyStatics[602]; /* 'abc' */
    cpy_r_r11 = CPyStatic_plugin___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 124, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_abc = cpy_r_r12;
    CPy_INCREF(CPyModule_abc);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9572]; /* ('Any', 'Callable', 'NamedTuple', 'TypeVar') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_plugin___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 125, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9573]; /* ('mypyc_attr', 'trait') */
    cpy_r_r18 = CPyStatics[599]; /* 'mypy_extensions' */
    cpy_r_r19 = CPyStatic_plugin___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 127, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_mypy_extensions = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9515]; /* ('ErrorCode',) */
    cpy_r_r22 = CPyStatics[924]; /* 'mypy.errorcodes' */
    cpy_r_r23 = CPyStatic_plugin___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 129, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_mypy___errorcodes = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___errorcodes);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9408]; /* ('lookup_fully_qualified',) */
    cpy_r_r26 = CPyStatics[2567]; /* 'mypy.lookup' */
    cpy_r_r27 = CPyStatic_plugin___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 130, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_mypy___lookup = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___lookup);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9189]; /* ('ErrorMessage',) */
    cpy_r_r30 = CPyStatics[933]; /* 'mypy.message_registry' */
    cpy_r_r31 = CPyStatic_plugin___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 131, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_mypy___message_registry = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___message_registry);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9135]; /* ('MessageBuilder',) */
    cpy_r_r34 = CPyStatics[530]; /* 'mypy.messages' */
    cpy_r_r35 = CPyStatic_plugin___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 132, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_mypy___messages = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___messages);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9574]; /* ('ArgKind', 'CallExpr', 'ClassDef', 'Context',
                                     'Expression', 'MypyFile', 'SymbolTableNode',
                                     'TypeInfo') */
    cpy_r_r38 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r39 = CPyStatic_plugin___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 133, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_mypy___nodes = cpy_r_r40;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r42 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r43 = CPyStatic_plugin___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 143, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_mypy___options = cpy_r_r44;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[9575]; /* ('TypeVarLikeScope',) */
    cpy_r_r46 = CPyStatics[4366]; /* 'mypy.tvar_scope' */
    cpy_r_r47 = CPyStatic_plugin___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 144, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_mypy___tvar_scope = cpy_r_r48;
    CPy_INCREF(CPyModule_mypy___tvar_scope);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[9576]; /* ('CallableType', 'FunctionLike', 'Instance',
                                     'ProperType', 'Type', 'TypeList', 'UnboundType') */
    cpy_r_r50 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r51 = CPyStatic_plugin___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 145, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_mypy___types = cpy_r_r52;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = NULL;
    cpy_r_r54 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r55 = (PyObject *)CPyType_plugin___TypeAnalyzerPluginInterface_template;
    cpy_r_r56 = CPyType_FromTemplate(cpy_r_r55, cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 157, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r57 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r58 = CPyStatics[159]; /* 'options' */
    cpy_r_r59 = PyTuple_Pack(1, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 157, CPyStatic_plugin___globals);
        goto CPyL307;
    }
    cpy_r_r60 = PyObject_SetAttr(cpy_r_r56, cpy_r_r57, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 157, CPyStatic_plugin___globals);
        goto CPyL307;
    }
    CPyType_plugin___TypeAnalyzerPluginInterface = (PyTypeObject *)cpy_r_r56;
    CPy_INCREF(CPyType_plugin___TypeAnalyzerPluginInterface);
    cpy_r_r62 = CPyStatic_plugin___globals;
    cpy_r_r63 = CPyStatics[4367]; /* 'TypeAnalyzerPluginInterface' */
    cpy_r_r64 = CPyDict_SetItem(cpy_r_r62, cpy_r_r63, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 157, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r66 = CPyModule_typing;
    cpy_r_r67 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r68 = cpy_r_r66 != cpy_r_r67;
    if (cpy_r_r68) goto CPyL22;
    cpy_r_r69 = CPyStatics[21]; /* 'typing' */
    cpy_r_r70 = PyImport_Import(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_typing = cpy_r_r70;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r70);
CPyL22: ;
    cpy_r_r71 = PyImport_GetModuleDict();
    cpy_r_r72 = CPyStatics[21]; /* 'typing' */
    cpy_r_r73 = CPyDict_GetItem(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r74 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r75 = CPyObject_GetAttr(cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r76 = PyTuple_Pack(1, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r77 = CPyModule_typing;
    cpy_r_r78 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r79 = cpy_r_r77 != cpy_r_r78;
    if (cpy_r_r79) goto CPyL28;
    cpy_r_r80 = CPyStatics[21]; /* 'typing' */
    cpy_r_r81 = PyImport_Import(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL308;
    }
    CPyModule_typing = cpy_r_r81;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r81);
CPyL28: ;
    cpy_r_r82 = PyImport_GetModuleDict();
    cpy_r_r83 = CPyStatics[21]; /* 'typing' */
    cpy_r_r84 = CPyDict_GetItem(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL308;
    }
    cpy_r_r85 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL308;
    }
    cpy_r_r87 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r88 = PyObject_HasAttr(cpy_r_r86, cpy_r_r87);
    if (!cpy_r_r88) goto CPyL35;
    cpy_r_r89 = CPyStatics[4368]; /* 'AnalyzeTypeContext' */
    cpy_r_r90 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r91 = CPyObject_GetAttr(cpy_r_r86, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL309;
    }
    PyObject *cpy_r_r92[2] = {cpy_r_r89, cpy_r_r76};
    cpy_r_r93 = (PyObject **)&cpy_r_r92;
    cpy_r_r94 = _PyObject_Vectorcall(cpy_r_r91, cpy_r_r93, 2, 0);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL309;
    }
    if (likely(PyDict_Check(cpy_r_r94)))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals, "dict", cpy_r_r94);
        goto CPyL309;
    }
    cpy_r_r96 = cpy_r_r95;
    goto CPyL37;
CPyL35: ;
    cpy_r_r97 = PyDict_New();
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL309;
    }
    cpy_r_r96 = cpy_r_r97;
CPyL37: ;
    cpy_r_r98 = PyDict_New();
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL310;
    }
    cpy_r_r99 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r100 = CPyStatics[802]; /* 'type' */
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r98, cpy_r_r100, cpy_r_r99);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 195, CPyStatic_plugin___globals);
        goto CPyL311;
    }
    cpy_r_r103 = (PyObject *)CPyType_nodes___Context;
    cpy_r_r104 = CPyStatics[68]; /* 'context' */
    cpy_r_r105 = CPyDict_SetItem(cpy_r_r98, cpy_r_r104, cpy_r_r103);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 196, CPyStatic_plugin___globals);
        goto CPyL311;
    }
    cpy_r_r107 = (PyObject *)CPyType_plugin___TypeAnalyzerPluginInterface;
    cpy_r_r108 = CPyStatics[4369]; /* 'api' */
    cpy_r_r109 = CPyDict_SetItem(cpy_r_r98, cpy_r_r108, cpy_r_r107);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 197, CPyStatic_plugin___globals);
        goto CPyL311;
    }
    cpy_r_r111 = CPyStatics[4368]; /* 'AnalyzeTypeContext' */
    cpy_r_r112 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r113 = CPyDict_SetItem(cpy_r_r96, cpy_r_r112, cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL310;
    }
    cpy_r_r115 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r116 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r117 = CPyDict_SetItem(cpy_r_r96, cpy_r_r116, cpy_r_r115);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL310;
    }
    cpy_r_r119 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r120 = CPyStatics[619]; /* '__module__' */
    cpy_r_r121 = CPyDict_SetItem(cpy_r_r96, cpy_r_r120, cpy_r_r119);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL310;
    }
    PyObject *cpy_r_r123[3] = {cpy_r_r111, cpy_r_r76, cpy_r_r96};
    cpy_r_r124 = (PyObject **)&cpy_r_r123;
    cpy_r_r125 = _PyObject_Vectorcall(cpy_r_r86, cpy_r_r124, 3, 0);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL312;
    }
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r96);
    CPyType_plugin___AnalyzeTypeContext = (PyTypeObject *)cpy_r_r125;
    CPy_INCREF(CPyType_plugin___AnalyzeTypeContext);
    cpy_r_r126 = CPyStatic_plugin___globals;
    cpy_r_r127 = CPyStatics[4368]; /* 'AnalyzeTypeContext' */
    cpy_r_r128 = CPyDict_SetItem(cpy_r_r126, cpy_r_r127, cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 194, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r130 = (PyObject *)CPyType_plugin___AnalyzeTypeContext;
    cpy_r_r131 = NULL;
    cpy_r_r132 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r133 = (PyObject *)CPyType_plugin___CommonPluginApi_template;
    cpy_r_r134 = CPyType_FromTemplate(cpy_r_r133, cpy_r_r131, cpy_r_r132);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 201, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r135 = CPyDef_plugin___CommonPluginApi_trait_vtable_setup();
    if (unlikely(cpy_r_r135 == 2)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", -1, CPyStatic_plugin___globals);
        goto CPyL313;
    }
    cpy_r_r136 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r137 = CPyStatics[159]; /* 'options' */
    cpy_r_r138 = PyTuple_Pack(1, cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 201, CPyStatic_plugin___globals);
        goto CPyL313;
    }
    cpy_r_r139 = PyObject_SetAttr(cpy_r_r134, cpy_r_r136, cpy_r_r138);
    CPy_DECREF(cpy_r_r138);
    cpy_r_r140 = cpy_r_r139 >= 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 201, CPyStatic_plugin___globals);
        goto CPyL313;
    }
    CPyType_plugin___CommonPluginApi = (PyTypeObject *)cpy_r_r134;
    CPy_INCREF(CPyType_plugin___CommonPluginApi);
    cpy_r_r141 = CPyStatic_plugin___globals;
    cpy_r_r142 = CPyStatics[4370]; /* 'CommonPluginApi' */
    cpy_r_r143 = CPyDict_SetItem(cpy_r_r141, cpy_r_r142, cpy_r_r134);
    CPy_DECREF(cpy_r_r134);
    cpy_r_r144 = cpy_r_r143 >= 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 201, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r145 = NULL;
    cpy_r_r146 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r147 = (PyObject *)CPyType_plugin___CheckerPluginInterface_template;
    cpy_r_r148 = CPyType_FromTemplate(cpy_r_r147, cpy_r_r145, cpy_r_r146);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 223, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r149 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r150 = CPyStatics[1098]; /* 'msg' */
    cpy_r_r151 = CPyStatics[159]; /* 'options' */
    cpy_r_r152 = CPyStatics[142]; /* 'path' */
    cpy_r_r153 = PyTuple_Pack(3, cpy_r_r150, cpy_r_r151, cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 223, CPyStatic_plugin___globals);
        goto CPyL314;
    }
    cpy_r_r154 = PyObject_SetAttr(cpy_r_r148, cpy_r_r149, cpy_r_r153);
    CPy_DECREF(cpy_r_r153);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 223, CPyStatic_plugin___globals);
        goto CPyL314;
    }
    CPyType_plugin___CheckerPluginInterface = (PyTypeObject *)cpy_r_r148;
    CPy_INCREF(CPyType_plugin___CheckerPluginInterface);
    cpy_r_r156 = CPyStatic_plugin___globals;
    cpy_r_r157 = CPyStatics[1005]; /* 'CheckerPluginInterface' */
    cpy_r_r158 = CPyDict_SetItem(cpy_r_r156, cpy_r_r157, cpy_r_r148);
    CPy_DECREF(cpy_r_r148);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 223, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r160 = NULL;
    cpy_r_r161 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r162 = (PyObject *)CPyType_plugin___SemanticAnalyzerPluginInterface_template;
    cpy_r_r163 = CPyType_FromTemplate(cpy_r_r162, cpy_r_r160, cpy_r_r161);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 260, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r164 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r165 = CPyStatics[635]; /* 'modules' */
    cpy_r_r166 = CPyStatics[159]; /* 'options' */
    cpy_r_r167 = CPyStatics[4371]; /* 'cur_mod_id' */
    cpy_r_r168 = CPyStatics[1098]; /* 'msg' */
    cpy_r_r169 = PyTuple_Pack(4, cpy_r_r165, cpy_r_r166, cpy_r_r167, cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 260, CPyStatic_plugin___globals);
        goto CPyL315;
    }
    cpy_r_r170 = PyObject_SetAttr(cpy_r_r163, cpy_r_r164, cpy_r_r169);
    CPy_DECREF(cpy_r_r169);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 260, CPyStatic_plugin___globals);
        goto CPyL315;
    }
    CPyType_plugin___SemanticAnalyzerPluginInterface = (PyTypeObject *)cpy_r_r163;
    CPy_INCREF(CPyType_plugin___SemanticAnalyzerPluginInterface);
    cpy_r_r172 = CPyStatic_plugin___globals;
    cpy_r_r173 = CPyStatics[4372]; /* 'SemanticAnalyzerPluginInterface' */
    cpy_r_r174 = CPyDict_SetItem(cpy_r_r172, cpy_r_r173, cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    cpy_r_r175 = cpy_r_r174 >= 0;
    if (unlikely(!cpy_r_r175)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 260, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r176 = CPyModule_typing;
    cpy_r_r177 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r178 = cpy_r_r176 != cpy_r_r177;
    if (cpy_r_r178) goto CPyL62;
    cpy_r_r179 = CPyStatics[21]; /* 'typing' */
    cpy_r_r180 = PyImport_Import(cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_typing = cpy_r_r180;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r180);
CPyL62: ;
    cpy_r_r181 = PyImport_GetModuleDict();
    cpy_r_r182 = CPyStatics[21]; /* 'typing' */
    cpy_r_r183 = CPyDict_GetItem(cpy_r_r181, cpy_r_r182);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r184 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r185 = CPyObject_GetAttr(cpy_r_r183, cpy_r_r184);
    CPy_DECREF(cpy_r_r183);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r186 = PyTuple_Pack(1, cpy_r_r185);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r187 = CPyModule_typing;
    cpy_r_r188 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r189 = cpy_r_r187 != cpy_r_r188;
    if (cpy_r_r189) goto CPyL68;
    cpy_r_r190 = CPyStatics[21]; /* 'typing' */
    cpy_r_r191 = PyImport_Import(cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL316;
    }
    CPyModule_typing = cpy_r_r191;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r191);
CPyL68: ;
    cpy_r_r192 = PyImport_GetModuleDict();
    cpy_r_r193 = CPyStatics[21]; /* 'typing' */
    cpy_r_r194 = CPyDict_GetItem(cpy_r_r192, cpy_r_r193);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL316;
    }
    cpy_r_r195 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r196 = CPyObject_GetAttr(cpy_r_r194, cpy_r_r195);
    CPy_DECREF(cpy_r_r194);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL316;
    }
    cpy_r_r197 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r198 = PyObject_HasAttr(cpy_r_r196, cpy_r_r197);
    if (!cpy_r_r198) goto CPyL75;
    cpy_r_r199 = CPyStatics[312]; /* 'ReportConfigContext' */
    cpy_r_r200 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r201 = CPyObject_GetAttr(cpy_r_r196, cpy_r_r200);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL317;
    }
    PyObject *cpy_r_r202[2] = {cpy_r_r199, cpy_r_r186};
    cpy_r_r203 = (PyObject **)&cpy_r_r202;
    cpy_r_r204 = _PyObject_Vectorcall(cpy_r_r201, cpy_r_r203, 2, 0);
    CPy_DECREF(cpy_r_r201);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL317;
    }
    if (likely(PyDict_Check(cpy_r_r204)))
        cpy_r_r205 = cpy_r_r204;
    else {
        CPy_TypeErrorTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals, "dict", cpy_r_r204);
        goto CPyL317;
    }
    cpy_r_r206 = cpy_r_r205;
    goto CPyL77;
CPyL75: ;
    cpy_r_r207 = PyDict_New();
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL317;
    }
    cpy_r_r206 = cpy_r_r207;
CPyL77: ;
    cpy_r_r208 = PyDict_New();
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL318;
    }
    cpy_r_r209 = (PyObject *)&PyUnicode_Type;
    cpy_r_r210 = CPyStatics[113]; /* 'id' */
    cpy_r_r211 = CPyDict_SetItem(cpy_r_r208, cpy_r_r210, cpy_r_r209);
    cpy_r_r212 = cpy_r_r211 >= 0;
    if (unlikely(!cpy_r_r212)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 427, CPyStatic_plugin___globals);
        goto CPyL319;
    }
    cpy_r_r213 = (PyObject *)&PyUnicode_Type;
    cpy_r_r214 = CPyStatics[142]; /* 'path' */
    cpy_r_r215 = CPyDict_SetItem(cpy_r_r208, cpy_r_r214, cpy_r_r213);
    cpy_r_r216 = cpy_r_r215 >= 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 428, CPyStatic_plugin___globals);
        goto CPyL319;
    }
    cpy_r_r217 = (PyObject *)&PyBool_Type;
    cpy_r_r218 = CPyStatics[313]; /* 'is_check' */
    cpy_r_r219 = CPyDict_SetItem(cpy_r_r208, cpy_r_r218, cpy_r_r217);
    cpy_r_r220 = cpy_r_r219 >= 0;
    if (unlikely(!cpy_r_r220)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 429, CPyStatic_plugin___globals);
        goto CPyL319;
    }
    cpy_r_r221 = CPyStatics[312]; /* 'ReportConfigContext' */
    cpy_r_r222 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r223 = CPyDict_SetItem(cpy_r_r206, cpy_r_r222, cpy_r_r208);
    CPy_DECREF(cpy_r_r208);
    cpy_r_r224 = cpy_r_r223 >= 0;
    if (unlikely(!cpy_r_r224)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL318;
    }
    cpy_r_r225 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r226 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r227 = CPyDict_SetItem(cpy_r_r206, cpy_r_r226, cpy_r_r225);
    cpy_r_r228 = cpy_r_r227 >= 0;
    if (unlikely(!cpy_r_r228)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL318;
    }
    cpy_r_r229 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r230 = CPyStatics[619]; /* '__module__' */
    cpy_r_r231 = CPyDict_SetItem(cpy_r_r206, cpy_r_r230, cpy_r_r229);
    cpy_r_r232 = cpy_r_r231 >= 0;
    if (unlikely(!cpy_r_r232)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL318;
    }
    PyObject *cpy_r_r233[3] = {cpy_r_r221, cpy_r_r186, cpy_r_r206};
    cpy_r_r234 = (PyObject **)&cpy_r_r233;
    cpy_r_r235 = _PyObject_Vectorcall(cpy_r_r196, cpy_r_r234, 3, 0);
    CPy_DECREF(cpy_r_r196);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL320;
    }
    CPy_DECREF(cpy_r_r186);
    CPy_DECREF(cpy_r_r206);
    CPyType_plugin___ReportConfigContext = (PyTypeObject *)cpy_r_r235;
    CPy_INCREF(CPyType_plugin___ReportConfigContext);
    cpy_r_r236 = CPyStatic_plugin___globals;
    cpy_r_r237 = CPyStatics[312]; /* 'ReportConfigContext' */
    cpy_r_r238 = CPyDict_SetItem(cpy_r_r236, cpy_r_r237, cpy_r_r235);
    CPy_DECREF(cpy_r_r235);
    cpy_r_r239 = cpy_r_r238 >= 0;
    if (unlikely(!cpy_r_r239)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 426, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r240 = (PyObject *)CPyType_plugin___ReportConfigContext;
    cpy_r_r241 = CPyModule_typing;
    cpy_r_r242 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r243 = cpy_r_r241 != cpy_r_r242;
    if (cpy_r_r243) goto CPyL89;
    cpy_r_r244 = CPyStatics[21]; /* 'typing' */
    cpy_r_r245 = PyImport_Import(cpy_r_r244);
    if (unlikely(cpy_r_r245 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_typing = cpy_r_r245;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r245);
CPyL89: ;
    cpy_r_r246 = PyImport_GetModuleDict();
    cpy_r_r247 = CPyStatics[21]; /* 'typing' */
    cpy_r_r248 = CPyDict_GetItem(cpy_r_r246, cpy_r_r247);
    if (unlikely(cpy_r_r248 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r249 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r250 = CPyObject_GetAttr(cpy_r_r248, cpy_r_r249);
    CPy_DECREF(cpy_r_r248);
    if (unlikely(cpy_r_r250 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r251 = PyTuple_Pack(1, cpy_r_r250);
    CPy_DECREF(cpy_r_r250);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r252 = CPyModule_typing;
    cpy_r_r253 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r254 = cpy_r_r252 != cpy_r_r253;
    if (cpy_r_r254) goto CPyL95;
    cpy_r_r255 = CPyStatics[21]; /* 'typing' */
    cpy_r_r256 = PyImport_Import(cpy_r_r255);
    if (unlikely(cpy_r_r256 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL321;
    }
    CPyModule_typing = cpy_r_r256;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r256);
CPyL95: ;
    cpy_r_r257 = PyImport_GetModuleDict();
    cpy_r_r258 = CPyStatics[21]; /* 'typing' */
    cpy_r_r259 = CPyDict_GetItem(cpy_r_r257, cpy_r_r258);
    if (unlikely(cpy_r_r259 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL321;
    }
    cpy_r_r260 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r261 = CPyObject_GetAttr(cpy_r_r259, cpy_r_r260);
    CPy_DECREF(cpy_r_r259);
    if (unlikely(cpy_r_r261 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL321;
    }
    cpy_r_r262 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r263 = PyObject_HasAttr(cpy_r_r261, cpy_r_r262);
    if (!cpy_r_r263) goto CPyL102;
    cpy_r_r264 = CPyStatics[1162]; /* 'FunctionSigContext' */
    cpy_r_r265 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r266 = CPyObject_GetAttr(cpy_r_r261, cpy_r_r265);
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL322;
    }
    PyObject *cpy_r_r267[2] = {cpy_r_r264, cpy_r_r251};
    cpy_r_r268 = (PyObject **)&cpy_r_r267;
    cpy_r_r269 = _PyObject_Vectorcall(cpy_r_r266, cpy_r_r268, 2, 0);
    CPy_DECREF(cpy_r_r266);
    if (unlikely(cpy_r_r269 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL322;
    }
    if (likely(PyDict_Check(cpy_r_r269)))
        cpy_r_r270 = cpy_r_r269;
    else {
        CPy_TypeErrorTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals, "dict", cpy_r_r269);
        goto CPyL322;
    }
    cpy_r_r271 = cpy_r_r270;
    goto CPyL104;
CPyL102: ;
    cpy_r_r272 = PyDict_New();
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL322;
    }
    cpy_r_r271 = cpy_r_r272;
CPyL104: ;
    cpy_r_r273 = PyDict_New();
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL323;
    }
    cpy_r_r274 = (PyObject *)&PyList_Type;
    cpy_r_r275 = CPyStatics[1678]; /* 'args' */
    cpy_r_r276 = CPyDict_SetItem(cpy_r_r273, cpy_r_r275, cpy_r_r274);
    cpy_r_r277 = cpy_r_r276 >= 0;
    if (unlikely(!cpy_r_r277)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 436, CPyStatic_plugin___globals);
        goto CPyL324;
    }
    cpy_r_r278 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r279 = CPyStatics[4373]; /* 'default_signature' */
    cpy_r_r280 = CPyDict_SetItem(cpy_r_r273, cpy_r_r279, cpy_r_r278);
    cpy_r_r281 = cpy_r_r280 >= 0;
    if (unlikely(!cpy_r_r281)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 437, CPyStatic_plugin___globals);
        goto CPyL324;
    }
    cpy_r_r282 = (PyObject *)CPyType_nodes___Context;
    cpy_r_r283 = CPyStatics[68]; /* 'context' */
    cpy_r_r284 = CPyDict_SetItem(cpy_r_r273, cpy_r_r283, cpy_r_r282);
    cpy_r_r285 = cpy_r_r284 >= 0;
    if (unlikely(!cpy_r_r285)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 438, CPyStatic_plugin___globals);
        goto CPyL324;
    }
    cpy_r_r286 = (PyObject *)CPyType_plugin___CheckerPluginInterface;
    cpy_r_r287 = CPyStatics[4369]; /* 'api' */
    cpy_r_r288 = CPyDict_SetItem(cpy_r_r273, cpy_r_r287, cpy_r_r286);
    cpy_r_r289 = cpy_r_r288 >= 0;
    if (unlikely(!cpy_r_r289)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 439, CPyStatic_plugin___globals);
        goto CPyL324;
    }
    cpy_r_r290 = CPyStatics[1162]; /* 'FunctionSigContext' */
    cpy_r_r291 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r292 = CPyDict_SetItem(cpy_r_r271, cpy_r_r291, cpy_r_r273);
    CPy_DECREF(cpy_r_r273);
    cpy_r_r293 = cpy_r_r292 >= 0;
    if (unlikely(!cpy_r_r293)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL323;
    }
    cpy_r_r294 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r295 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r296 = CPyDict_SetItem(cpy_r_r271, cpy_r_r295, cpy_r_r294);
    cpy_r_r297 = cpy_r_r296 >= 0;
    if (unlikely(!cpy_r_r297)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL323;
    }
    cpy_r_r298 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r299 = CPyStatics[619]; /* '__module__' */
    cpy_r_r300 = CPyDict_SetItem(cpy_r_r271, cpy_r_r299, cpy_r_r298);
    cpy_r_r301 = cpy_r_r300 >= 0;
    if (unlikely(!cpy_r_r301)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL323;
    }
    PyObject *cpy_r_r302[3] = {cpy_r_r290, cpy_r_r251, cpy_r_r271};
    cpy_r_r303 = (PyObject **)&cpy_r_r302;
    cpy_r_r304 = _PyObject_Vectorcall(cpy_r_r261, cpy_r_r303, 3, 0);
    CPy_DECREF(cpy_r_r261);
    if (unlikely(cpy_r_r304 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL325;
    }
    CPy_DECREF(cpy_r_r251);
    CPy_DECREF(cpy_r_r271);
    CPyType_plugin___FunctionSigContext = (PyTypeObject *)cpy_r_r304;
    CPy_INCREF(CPyType_plugin___FunctionSigContext);
    cpy_r_r305 = CPyStatic_plugin___globals;
    cpy_r_r306 = CPyStatics[1162]; /* 'FunctionSigContext' */
    cpy_r_r307 = CPyDict_SetItem(cpy_r_r305, cpy_r_r306, cpy_r_r304);
    CPy_DECREF(cpy_r_r304);
    cpy_r_r308 = cpy_r_r307 >= 0;
    if (unlikely(!cpy_r_r308)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 435, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r309 = (PyObject *)CPyType_plugin___FunctionSigContext;
    cpy_r_r310 = CPyModule_typing;
    cpy_r_r311 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r312 = cpy_r_r310 != cpy_r_r311;
    if (cpy_r_r312) goto CPyL117;
    cpy_r_r313 = CPyStatics[21]; /* 'typing' */
    cpy_r_r314 = PyImport_Import(cpy_r_r313);
    if (unlikely(cpy_r_r314 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_typing = cpy_r_r314;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r314);
CPyL117: ;
    cpy_r_r315 = PyImport_GetModuleDict();
    cpy_r_r316 = CPyStatics[21]; /* 'typing' */
    cpy_r_r317 = CPyDict_GetItem(cpy_r_r315, cpy_r_r316);
    if (unlikely(cpy_r_r317 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r318 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r319 = CPyObject_GetAttr(cpy_r_r317, cpy_r_r318);
    CPy_DECREF(cpy_r_r317);
    if (unlikely(cpy_r_r319 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r320 = PyTuple_Pack(1, cpy_r_r319);
    CPy_DECREF(cpy_r_r319);
    if (unlikely(cpy_r_r320 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r321 = CPyModule_typing;
    cpy_r_r322 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r323 = cpy_r_r321 != cpy_r_r322;
    if (cpy_r_r323) goto CPyL123;
    cpy_r_r324 = CPyStatics[21]; /* 'typing' */
    cpy_r_r325 = PyImport_Import(cpy_r_r324);
    if (unlikely(cpy_r_r325 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL326;
    }
    CPyModule_typing = cpy_r_r325;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r325);
CPyL123: ;
    cpy_r_r326 = PyImport_GetModuleDict();
    cpy_r_r327 = CPyStatics[21]; /* 'typing' */
    cpy_r_r328 = CPyDict_GetItem(cpy_r_r326, cpy_r_r327);
    if (unlikely(cpy_r_r328 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL326;
    }
    cpy_r_r329 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r330 = CPyObject_GetAttr(cpy_r_r328, cpy_r_r329);
    CPy_DECREF(cpy_r_r328);
    if (unlikely(cpy_r_r330 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL326;
    }
    cpy_r_r331 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r332 = PyObject_HasAttr(cpy_r_r330, cpy_r_r331);
    if (!cpy_r_r332) goto CPyL130;
    cpy_r_r333 = CPyStatics[1160]; /* 'FunctionContext' */
    cpy_r_r334 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r335 = CPyObject_GetAttr(cpy_r_r330, cpy_r_r334);
    if (unlikely(cpy_r_r335 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL327;
    }
    PyObject *cpy_r_r336[2] = {cpy_r_r333, cpy_r_r320};
    cpy_r_r337 = (PyObject **)&cpy_r_r336;
    cpy_r_r338 = _PyObject_Vectorcall(cpy_r_r335, cpy_r_r337, 2, 0);
    CPy_DECREF(cpy_r_r335);
    if (unlikely(cpy_r_r338 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL327;
    }
    if (likely(PyDict_Check(cpy_r_r338)))
        cpy_r_r339 = cpy_r_r338;
    else {
        CPy_TypeErrorTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals, "dict", cpy_r_r338);
        goto CPyL327;
    }
    cpy_r_r340 = cpy_r_r339;
    goto CPyL132;
CPyL130: ;
    cpy_r_r341 = PyDict_New();
    if (unlikely(cpy_r_r341 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL327;
    }
    cpy_r_r340 = cpy_r_r341;
CPyL132: ;
    cpy_r_r342 = PyDict_New();
    if (unlikely(cpy_r_r342 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL328;
    }
    cpy_r_r343 = (PyObject *)&PyList_Type;
    cpy_r_r344 = CPyStatics[1125]; /* 'arg_types' */
    cpy_r_r345 = CPyDict_SetItem(cpy_r_r342, cpy_r_r344, cpy_r_r343);
    cpy_r_r346 = cpy_r_r345 >= 0;
    if (unlikely(!cpy_r_r346)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 448, CPyStatic_plugin___globals);
        goto CPyL329;
    }
    cpy_r_r347 = (PyObject *)&PyList_Type;
    cpy_r_r348 = CPyStatics[1610]; /* 'arg_kinds' */
    cpy_r_r349 = CPyDict_SetItem(cpy_r_r342, cpy_r_r348, cpy_r_r347);
    cpy_r_r350 = cpy_r_r349 >= 0;
    if (unlikely(!cpy_r_r350)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 449, CPyStatic_plugin___globals);
        goto CPyL329;
    }
    cpy_r_r351 = (PyObject *)&PyList_Type;
    cpy_r_r352 = CPyStatics[4374]; /* 'callee_arg_names' */
    cpy_r_r353 = CPyDict_SetItem(cpy_r_r342, cpy_r_r352, cpy_r_r351);
    cpy_r_r354 = cpy_r_r353 >= 0;
    if (unlikely(!cpy_r_r354)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 452, CPyStatic_plugin___globals);
        goto CPyL329;
    }
    cpy_r_r355 = (PyObject *)&PyList_Type;
    cpy_r_r356 = CPyStatics[1611]; /* 'arg_names' */
    cpy_r_r357 = CPyDict_SetItem(cpy_r_r342, cpy_r_r356, cpy_r_r355);
    cpy_r_r358 = cpy_r_r357 >= 0;
    if (unlikely(!cpy_r_r358)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 459, CPyStatic_plugin___globals);
        goto CPyL329;
    }
    cpy_r_r359 = (PyObject *)CPyType_types___Type;
    cpy_r_r360 = CPyStatics[4375]; /* 'default_return_type' */
    cpy_r_r361 = CPyDict_SetItem(cpy_r_r342, cpy_r_r360, cpy_r_r359);
    cpy_r_r362 = cpy_r_r361 >= 0;
    if (unlikely(!cpy_r_r362)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 460, CPyStatic_plugin___globals);
        goto CPyL329;
    }
    cpy_r_r363 = (PyObject *)&PyList_Type;
    cpy_r_r364 = CPyStatics[1678]; /* 'args' */
    cpy_r_r365 = CPyDict_SetItem(cpy_r_r342, cpy_r_r364, cpy_r_r363);
    cpy_r_r366 = cpy_r_r365 >= 0;
    if (unlikely(!cpy_r_r366)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 461, CPyStatic_plugin___globals);
        goto CPyL329;
    }
    cpy_r_r367 = (PyObject *)CPyType_nodes___Context;
    cpy_r_r368 = CPyStatics[68]; /* 'context' */
    cpy_r_r369 = CPyDict_SetItem(cpy_r_r342, cpy_r_r368, cpy_r_r367);
    cpy_r_r370 = cpy_r_r369 >= 0;
    if (unlikely(!cpy_r_r370)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 462, CPyStatic_plugin___globals);
        goto CPyL329;
    }
    cpy_r_r371 = (PyObject *)CPyType_plugin___CheckerPluginInterface;
    cpy_r_r372 = CPyStatics[4369]; /* 'api' */
    cpy_r_r373 = CPyDict_SetItem(cpy_r_r342, cpy_r_r372, cpy_r_r371);
    cpy_r_r374 = cpy_r_r373 >= 0;
    if (unlikely(!cpy_r_r374)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 463, CPyStatic_plugin___globals);
        goto CPyL329;
    }
    cpy_r_r375 = CPyStatics[1160]; /* 'FunctionContext' */
    cpy_r_r376 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r377 = CPyDict_SetItem(cpy_r_r340, cpy_r_r376, cpy_r_r342);
    CPy_DECREF(cpy_r_r342);
    cpy_r_r378 = cpy_r_r377 >= 0;
    if (unlikely(!cpy_r_r378)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL328;
    }
    cpy_r_r379 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r380 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r381 = CPyDict_SetItem(cpy_r_r340, cpy_r_r380, cpy_r_r379);
    cpy_r_r382 = cpy_r_r381 >= 0;
    if (unlikely(!cpy_r_r382)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL328;
    }
    cpy_r_r383 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r384 = CPyStatics[619]; /* '__module__' */
    cpy_r_r385 = CPyDict_SetItem(cpy_r_r340, cpy_r_r384, cpy_r_r383);
    cpy_r_r386 = cpy_r_r385 >= 0;
    if (unlikely(!cpy_r_r386)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL328;
    }
    PyObject *cpy_r_r387[3] = {cpy_r_r375, cpy_r_r320, cpy_r_r340};
    cpy_r_r388 = (PyObject **)&cpy_r_r387;
    cpy_r_r389 = _PyObject_Vectorcall(cpy_r_r330, cpy_r_r388, 3, 0);
    CPy_DECREF(cpy_r_r330);
    if (unlikely(cpy_r_r389 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL330;
    }
    CPy_DECREF(cpy_r_r320);
    CPy_DECREF(cpy_r_r340);
    CPyType_plugin___FunctionContext = (PyTypeObject *)cpy_r_r389;
    CPy_INCREF(CPyType_plugin___FunctionContext);
    cpy_r_r390 = CPyStatic_plugin___globals;
    cpy_r_r391 = CPyStatics[1160]; /* 'FunctionContext' */
    cpy_r_r392 = CPyDict_SetItem(cpy_r_r390, cpy_r_r391, cpy_r_r389);
    CPy_DECREF(cpy_r_r389);
    cpy_r_r393 = cpy_r_r392 >= 0;
    if (unlikely(!cpy_r_r393)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 447, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r394 = (PyObject *)CPyType_plugin___FunctionContext;
    cpy_r_r395 = CPyModule_typing;
    cpy_r_r396 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r397 = cpy_r_r395 != cpy_r_r396;
    if (cpy_r_r397) goto CPyL149;
    cpy_r_r398 = CPyStatics[21]; /* 'typing' */
    cpy_r_r399 = PyImport_Import(cpy_r_r398);
    if (unlikely(cpy_r_r399 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_typing = cpy_r_r399;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r399);
CPyL149: ;
    cpy_r_r400 = PyImport_GetModuleDict();
    cpy_r_r401 = CPyStatics[21]; /* 'typing' */
    cpy_r_r402 = CPyDict_GetItem(cpy_r_r400, cpy_r_r401);
    if (unlikely(cpy_r_r402 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r403 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r404 = CPyObject_GetAttr(cpy_r_r402, cpy_r_r403);
    CPy_DECREF(cpy_r_r402);
    if (unlikely(cpy_r_r404 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r405 = PyTuple_Pack(1, cpy_r_r404);
    CPy_DECREF(cpy_r_r404);
    if (unlikely(cpy_r_r405 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r406 = CPyModule_typing;
    cpy_r_r407 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r408 = cpy_r_r406 != cpy_r_r407;
    if (cpy_r_r408) goto CPyL155;
    cpy_r_r409 = CPyStatics[21]; /* 'typing' */
    cpy_r_r410 = PyImport_Import(cpy_r_r409);
    if (unlikely(cpy_r_r410 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL331;
    }
    CPyModule_typing = cpy_r_r410;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r410);
CPyL155: ;
    cpy_r_r411 = PyImport_GetModuleDict();
    cpy_r_r412 = CPyStatics[21]; /* 'typing' */
    cpy_r_r413 = CPyDict_GetItem(cpy_r_r411, cpy_r_r412);
    if (unlikely(cpy_r_r413 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL331;
    }
    cpy_r_r414 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r415 = CPyObject_GetAttr(cpy_r_r413, cpy_r_r414);
    CPy_DECREF(cpy_r_r413);
    if (unlikely(cpy_r_r415 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL331;
    }
    cpy_r_r416 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r417 = PyObject_HasAttr(cpy_r_r415, cpy_r_r416);
    if (!cpy_r_r417) goto CPyL162;
    cpy_r_r418 = CPyStatics[1163]; /* 'MethodSigContext' */
    cpy_r_r419 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r420 = CPyObject_GetAttr(cpy_r_r415, cpy_r_r419);
    if (unlikely(cpy_r_r420 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL332;
    }
    PyObject *cpy_r_r421[2] = {cpy_r_r418, cpy_r_r405};
    cpy_r_r422 = (PyObject **)&cpy_r_r421;
    cpy_r_r423 = _PyObject_Vectorcall(cpy_r_r420, cpy_r_r422, 2, 0);
    CPy_DECREF(cpy_r_r420);
    if (unlikely(cpy_r_r423 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL332;
    }
    if (likely(PyDict_Check(cpy_r_r423)))
        cpy_r_r424 = cpy_r_r423;
    else {
        CPy_TypeErrorTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals, "dict", cpy_r_r423);
        goto CPyL332;
    }
    cpy_r_r425 = cpy_r_r424;
    goto CPyL164;
CPyL162: ;
    cpy_r_r426 = PyDict_New();
    if (unlikely(cpy_r_r426 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL332;
    }
    cpy_r_r425 = cpy_r_r426;
CPyL164: ;
    cpy_r_r427 = PyDict_New();
    if (unlikely(cpy_r_r427 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL333;
    }
    cpy_r_r428 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r429 = CPyStatics[802]; /* 'type' */
    cpy_r_r430 = CPyDict_SetItem(cpy_r_r427, cpy_r_r429, cpy_r_r428);
    cpy_r_r431 = cpy_r_r430 >= 0;
    if (unlikely(!cpy_r_r431)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 471, CPyStatic_plugin___globals);
        goto CPyL334;
    }
    cpy_r_r432 = (PyObject *)&PyList_Type;
    cpy_r_r433 = CPyStatics[1678]; /* 'args' */
    cpy_r_r434 = CPyDict_SetItem(cpy_r_r427, cpy_r_r433, cpy_r_r432);
    cpy_r_r435 = cpy_r_r434 >= 0;
    if (unlikely(!cpy_r_r435)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 472, CPyStatic_plugin___globals);
        goto CPyL334;
    }
    cpy_r_r436 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r437 = CPyStatics[4373]; /* 'default_signature' */
    cpy_r_r438 = CPyDict_SetItem(cpy_r_r427, cpy_r_r437, cpy_r_r436);
    cpy_r_r439 = cpy_r_r438 >= 0;
    if (unlikely(!cpy_r_r439)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 473, CPyStatic_plugin___globals);
        goto CPyL334;
    }
    cpy_r_r440 = (PyObject *)CPyType_nodes___Context;
    cpy_r_r441 = CPyStatics[68]; /* 'context' */
    cpy_r_r442 = CPyDict_SetItem(cpy_r_r427, cpy_r_r441, cpy_r_r440);
    cpy_r_r443 = cpy_r_r442 >= 0;
    if (unlikely(!cpy_r_r443)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 474, CPyStatic_plugin___globals);
        goto CPyL334;
    }
    cpy_r_r444 = (PyObject *)CPyType_plugin___CheckerPluginInterface;
    cpy_r_r445 = CPyStatics[4369]; /* 'api' */
    cpy_r_r446 = CPyDict_SetItem(cpy_r_r427, cpy_r_r445, cpy_r_r444);
    cpy_r_r447 = cpy_r_r446 >= 0;
    if (unlikely(!cpy_r_r447)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 475, CPyStatic_plugin___globals);
        goto CPyL334;
    }
    cpy_r_r448 = CPyStatics[1163]; /* 'MethodSigContext' */
    cpy_r_r449 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r450 = CPyDict_SetItem(cpy_r_r425, cpy_r_r449, cpy_r_r427);
    CPy_DECREF(cpy_r_r427);
    cpy_r_r451 = cpy_r_r450 >= 0;
    if (unlikely(!cpy_r_r451)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL333;
    }
    cpy_r_r452 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r453 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r454 = CPyDict_SetItem(cpy_r_r425, cpy_r_r453, cpy_r_r452);
    cpy_r_r455 = cpy_r_r454 >= 0;
    if (unlikely(!cpy_r_r455)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL333;
    }
    cpy_r_r456 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r457 = CPyStatics[619]; /* '__module__' */
    cpy_r_r458 = CPyDict_SetItem(cpy_r_r425, cpy_r_r457, cpy_r_r456);
    cpy_r_r459 = cpy_r_r458 >= 0;
    if (unlikely(!cpy_r_r459)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL333;
    }
    PyObject *cpy_r_r460[3] = {cpy_r_r448, cpy_r_r405, cpy_r_r425};
    cpy_r_r461 = (PyObject **)&cpy_r_r460;
    cpy_r_r462 = _PyObject_Vectorcall(cpy_r_r415, cpy_r_r461, 3, 0);
    CPy_DECREF(cpy_r_r415);
    if (unlikely(cpy_r_r462 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL335;
    }
    CPy_DECREF(cpy_r_r405);
    CPy_DECREF(cpy_r_r425);
    CPyType_plugin___MethodSigContext = (PyTypeObject *)cpy_r_r462;
    CPy_INCREF(CPyType_plugin___MethodSigContext);
    cpy_r_r463 = CPyStatic_plugin___globals;
    cpy_r_r464 = CPyStatics[1163]; /* 'MethodSigContext' */
    cpy_r_r465 = CPyDict_SetItem(cpy_r_r463, cpy_r_r464, cpy_r_r462);
    CPy_DECREF(cpy_r_r462);
    cpy_r_r466 = cpy_r_r465 >= 0;
    if (unlikely(!cpy_r_r466)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 470, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r467 = (PyObject *)CPyType_plugin___MethodSigContext;
    cpy_r_r468 = CPyModule_typing;
    cpy_r_r469 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r470 = cpy_r_r468 != cpy_r_r469;
    if (cpy_r_r470) goto CPyL178;
    cpy_r_r471 = CPyStatics[21]; /* 'typing' */
    cpy_r_r472 = PyImport_Import(cpy_r_r471);
    if (unlikely(cpy_r_r472 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_typing = cpy_r_r472;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r472);
CPyL178: ;
    cpy_r_r473 = PyImport_GetModuleDict();
    cpy_r_r474 = CPyStatics[21]; /* 'typing' */
    cpy_r_r475 = CPyDict_GetItem(cpy_r_r473, cpy_r_r474);
    if (unlikely(cpy_r_r475 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r476 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r477 = CPyObject_GetAttr(cpy_r_r475, cpy_r_r476);
    CPy_DECREF(cpy_r_r475);
    if (unlikely(cpy_r_r477 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r478 = PyTuple_Pack(1, cpy_r_r477);
    CPy_DECREF(cpy_r_r477);
    if (unlikely(cpy_r_r478 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r479 = CPyModule_typing;
    cpy_r_r480 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r481 = cpy_r_r479 != cpy_r_r480;
    if (cpy_r_r481) goto CPyL184;
    cpy_r_r482 = CPyStatics[21]; /* 'typing' */
    cpy_r_r483 = PyImport_Import(cpy_r_r482);
    if (unlikely(cpy_r_r483 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL336;
    }
    CPyModule_typing = cpy_r_r483;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r483);
CPyL184: ;
    cpy_r_r484 = PyImport_GetModuleDict();
    cpy_r_r485 = CPyStatics[21]; /* 'typing' */
    cpy_r_r486 = CPyDict_GetItem(cpy_r_r484, cpy_r_r485);
    if (unlikely(cpy_r_r486 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL336;
    }
    cpy_r_r487 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r488 = CPyObject_GetAttr(cpy_r_r486, cpy_r_r487);
    CPy_DECREF(cpy_r_r486);
    if (unlikely(cpy_r_r488 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL336;
    }
    cpy_r_r489 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r490 = PyObject_HasAttr(cpy_r_r488, cpy_r_r489);
    if (!cpy_r_r490) goto CPyL191;
    cpy_r_r491 = CPyStatics[1161]; /* 'MethodContext' */
    cpy_r_r492 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r493 = CPyObject_GetAttr(cpy_r_r488, cpy_r_r492);
    if (unlikely(cpy_r_r493 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL337;
    }
    PyObject *cpy_r_r494[2] = {cpy_r_r491, cpy_r_r478};
    cpy_r_r495 = (PyObject **)&cpy_r_r494;
    cpy_r_r496 = _PyObject_Vectorcall(cpy_r_r493, cpy_r_r495, 2, 0);
    CPy_DECREF(cpy_r_r493);
    if (unlikely(cpy_r_r496 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL337;
    }
    if (likely(PyDict_Check(cpy_r_r496)))
        cpy_r_r497 = cpy_r_r496;
    else {
        CPy_TypeErrorTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals, "dict", cpy_r_r496);
        goto CPyL337;
    }
    cpy_r_r498 = cpy_r_r497;
    goto CPyL193;
CPyL191: ;
    cpy_r_r499 = PyDict_New();
    if (unlikely(cpy_r_r499 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL337;
    }
    cpy_r_r498 = cpy_r_r499;
CPyL193: ;
    cpy_r_r500 = PyDict_New();
    if (unlikely(cpy_r_r500 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL338;
    }
    cpy_r_r501 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r502 = CPyStatics[802]; /* 'type' */
    cpy_r_r503 = CPyDict_SetItem(cpy_r_r500, cpy_r_r502, cpy_r_r501);
    cpy_r_r504 = cpy_r_r503 >= 0;
    if (unlikely(!cpy_r_r504)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 483, CPyStatic_plugin___globals);
        goto CPyL339;
    }
    cpy_r_r505 = (PyObject *)&PyList_Type;
    cpy_r_r506 = CPyStatics[1125]; /* 'arg_types' */
    cpy_r_r507 = CPyDict_SetItem(cpy_r_r500, cpy_r_r506, cpy_r_r505);
    cpy_r_r508 = cpy_r_r507 >= 0;
    if (unlikely(!cpy_r_r508)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 484, CPyStatic_plugin___globals);
        goto CPyL339;
    }
    cpy_r_r509 = (PyObject *)&PyList_Type;
    cpy_r_r510 = CPyStatics[1610]; /* 'arg_kinds' */
    cpy_r_r511 = CPyDict_SetItem(cpy_r_r500, cpy_r_r510, cpy_r_r509);
    cpy_r_r512 = cpy_r_r511 >= 0;
    if (unlikely(!cpy_r_r512)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 486, CPyStatic_plugin___globals);
        goto CPyL339;
    }
    cpy_r_r513 = (PyObject *)&PyList_Type;
    cpy_r_r514 = CPyStatics[4374]; /* 'callee_arg_names' */
    cpy_r_r515 = CPyDict_SetItem(cpy_r_r500, cpy_r_r514, cpy_r_r513);
    cpy_r_r516 = cpy_r_r515 >= 0;
    if (unlikely(!cpy_r_r516)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 487, CPyStatic_plugin___globals);
        goto CPyL339;
    }
    cpy_r_r517 = (PyObject *)&PyList_Type;
    cpy_r_r518 = CPyStatics[1611]; /* 'arg_names' */
    cpy_r_r519 = CPyDict_SetItem(cpy_r_r500, cpy_r_r518, cpy_r_r517);
    cpy_r_r520 = cpy_r_r519 >= 0;
    if (unlikely(!cpy_r_r520)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 488, CPyStatic_plugin___globals);
        goto CPyL339;
    }
    cpy_r_r521 = (PyObject *)CPyType_types___Type;
    cpy_r_r522 = CPyStatics[4375]; /* 'default_return_type' */
    cpy_r_r523 = CPyDict_SetItem(cpy_r_r500, cpy_r_r522, cpy_r_r521);
    cpy_r_r524 = cpy_r_r523 >= 0;
    if (unlikely(!cpy_r_r524)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 489, CPyStatic_plugin___globals);
        goto CPyL339;
    }
    cpy_r_r525 = (PyObject *)&PyList_Type;
    cpy_r_r526 = CPyStatics[1678]; /* 'args' */
    cpy_r_r527 = CPyDict_SetItem(cpy_r_r500, cpy_r_r526, cpy_r_r525);
    cpy_r_r528 = cpy_r_r527 >= 0;
    if (unlikely(!cpy_r_r528)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 490, CPyStatic_plugin___globals);
        goto CPyL339;
    }
    cpy_r_r529 = (PyObject *)CPyType_nodes___Context;
    cpy_r_r530 = CPyStatics[68]; /* 'context' */
    cpy_r_r531 = CPyDict_SetItem(cpy_r_r500, cpy_r_r530, cpy_r_r529);
    cpy_r_r532 = cpy_r_r531 >= 0;
    if (unlikely(!cpy_r_r532)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 491, CPyStatic_plugin___globals);
        goto CPyL339;
    }
    cpy_r_r533 = (PyObject *)CPyType_plugin___CheckerPluginInterface;
    cpy_r_r534 = CPyStatics[4369]; /* 'api' */
    cpy_r_r535 = CPyDict_SetItem(cpy_r_r500, cpy_r_r534, cpy_r_r533);
    cpy_r_r536 = cpy_r_r535 >= 0;
    if (unlikely(!cpy_r_r536)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 492, CPyStatic_plugin___globals);
        goto CPyL339;
    }
    cpy_r_r537 = CPyStatics[1161]; /* 'MethodContext' */
    cpy_r_r538 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r539 = CPyDict_SetItem(cpy_r_r498, cpy_r_r538, cpy_r_r500);
    CPy_DECREF(cpy_r_r500);
    cpy_r_r540 = cpy_r_r539 >= 0;
    if (unlikely(!cpy_r_r540)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL338;
    }
    cpy_r_r541 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r542 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r543 = CPyDict_SetItem(cpy_r_r498, cpy_r_r542, cpy_r_r541);
    cpy_r_r544 = cpy_r_r543 >= 0;
    if (unlikely(!cpy_r_r544)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL338;
    }
    cpy_r_r545 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r546 = CPyStatics[619]; /* '__module__' */
    cpy_r_r547 = CPyDict_SetItem(cpy_r_r498, cpy_r_r546, cpy_r_r545);
    cpy_r_r548 = cpy_r_r547 >= 0;
    if (unlikely(!cpy_r_r548)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL338;
    }
    PyObject *cpy_r_r549[3] = {cpy_r_r537, cpy_r_r478, cpy_r_r498};
    cpy_r_r550 = (PyObject **)&cpy_r_r549;
    cpy_r_r551 = _PyObject_Vectorcall(cpy_r_r488, cpy_r_r550, 3, 0);
    CPy_DECREF(cpy_r_r488);
    if (unlikely(cpy_r_r551 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL340;
    }
    CPy_DECREF(cpy_r_r478);
    CPy_DECREF(cpy_r_r498);
    CPyType_plugin___MethodContext = (PyTypeObject *)cpy_r_r551;
    CPy_INCREF(CPyType_plugin___MethodContext);
    cpy_r_r552 = CPyStatic_plugin___globals;
    cpy_r_r553 = CPyStatics[1161]; /* 'MethodContext' */
    cpy_r_r554 = CPyDict_SetItem(cpy_r_r552, cpy_r_r553, cpy_r_r551);
    CPy_DECREF(cpy_r_r551);
    cpy_r_r555 = cpy_r_r554 >= 0;
    if (unlikely(!cpy_r_r555)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 482, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r556 = (PyObject *)CPyType_plugin___MethodContext;
    cpy_r_r557 = CPyModule_typing;
    cpy_r_r558 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r559 = cpy_r_r557 != cpy_r_r558;
    if (cpy_r_r559) goto CPyL211;
    cpy_r_r560 = CPyStatics[21]; /* 'typing' */
    cpy_r_r561 = PyImport_Import(cpy_r_r560);
    if (unlikely(cpy_r_r561 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_typing = cpy_r_r561;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r561);
CPyL211: ;
    cpy_r_r562 = PyImport_GetModuleDict();
    cpy_r_r563 = CPyStatics[21]; /* 'typing' */
    cpy_r_r564 = CPyDict_GetItem(cpy_r_r562, cpy_r_r563);
    if (unlikely(cpy_r_r564 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r565 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r566 = CPyObject_GetAttr(cpy_r_r564, cpy_r_r565);
    CPy_DECREF(cpy_r_r564);
    if (unlikely(cpy_r_r566 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r567 = PyTuple_Pack(1, cpy_r_r566);
    CPy_DECREF(cpy_r_r566);
    if (unlikely(cpy_r_r567 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r568 = CPyModule_typing;
    cpy_r_r569 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r570 = cpy_r_r568 != cpy_r_r569;
    if (cpy_r_r570) goto CPyL217;
    cpy_r_r571 = CPyStatics[21]; /* 'typing' */
    cpy_r_r572 = PyImport_Import(cpy_r_r571);
    if (unlikely(cpy_r_r572 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL341;
    }
    CPyModule_typing = cpy_r_r572;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r572);
CPyL217: ;
    cpy_r_r573 = PyImport_GetModuleDict();
    cpy_r_r574 = CPyStatics[21]; /* 'typing' */
    cpy_r_r575 = CPyDict_GetItem(cpy_r_r573, cpy_r_r574);
    if (unlikely(cpy_r_r575 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL341;
    }
    cpy_r_r576 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r577 = CPyObject_GetAttr(cpy_r_r575, cpy_r_r576);
    CPy_DECREF(cpy_r_r575);
    if (unlikely(cpy_r_r577 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL341;
    }
    cpy_r_r578 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r579 = PyObject_HasAttr(cpy_r_r577, cpy_r_r578);
    if (!cpy_r_r579) goto CPyL224;
    cpy_r_r580 = CPyStatics[1323]; /* 'AttributeContext' */
    cpy_r_r581 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r582 = CPyObject_GetAttr(cpy_r_r577, cpy_r_r581);
    if (unlikely(cpy_r_r582 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL342;
    }
    PyObject *cpy_r_r583[2] = {cpy_r_r580, cpy_r_r567};
    cpy_r_r584 = (PyObject **)&cpy_r_r583;
    cpy_r_r585 = _PyObject_Vectorcall(cpy_r_r582, cpy_r_r584, 2, 0);
    CPy_DECREF(cpy_r_r582);
    if (unlikely(cpy_r_r585 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL342;
    }
    if (likely(PyDict_Check(cpy_r_r585)))
        cpy_r_r586 = cpy_r_r585;
    else {
        CPy_TypeErrorTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals, "dict", cpy_r_r585);
        goto CPyL342;
    }
    cpy_r_r587 = cpy_r_r586;
    goto CPyL226;
CPyL224: ;
    cpy_r_r588 = PyDict_New();
    if (unlikely(cpy_r_r588 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL342;
    }
    cpy_r_r587 = cpy_r_r588;
CPyL226: ;
    cpy_r_r589 = PyDict_New();
    if (unlikely(cpy_r_r589 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL343;
    }
    cpy_r_r590 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r591 = CPyStatics[802]; /* 'type' */
    cpy_r_r592 = CPyDict_SetItem(cpy_r_r589, cpy_r_r591, cpy_r_r590);
    cpy_r_r593 = cpy_r_r592 >= 0;
    if (unlikely(!cpy_r_r593)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 497, CPyStatic_plugin___globals);
        goto CPyL344;
    }
    cpy_r_r594 = (PyObject *)CPyType_types___Type;
    cpy_r_r595 = CPyStatics[4376]; /* 'default_attr_type' */
    cpy_r_r596 = CPyDict_SetItem(cpy_r_r589, cpy_r_r595, cpy_r_r594);
    cpy_r_r597 = cpy_r_r596 >= 0;
    if (unlikely(!cpy_r_r597)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 498, CPyStatic_plugin___globals);
        goto CPyL344;
    }
    cpy_r_r598 = (PyObject *)CPyType_nodes___Context;
    cpy_r_r599 = CPyStatics[68]; /* 'context' */
    cpy_r_r600 = CPyDict_SetItem(cpy_r_r589, cpy_r_r599, cpy_r_r598);
    cpy_r_r601 = cpy_r_r600 >= 0;
    if (unlikely(!cpy_r_r601)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 499, CPyStatic_plugin___globals);
        goto CPyL344;
    }
    cpy_r_r602 = (PyObject *)CPyType_plugin___CheckerPluginInterface;
    cpy_r_r603 = CPyStatics[4369]; /* 'api' */
    cpy_r_r604 = CPyDict_SetItem(cpy_r_r589, cpy_r_r603, cpy_r_r602);
    cpy_r_r605 = cpy_r_r604 >= 0;
    if (unlikely(!cpy_r_r605)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 500, CPyStatic_plugin___globals);
        goto CPyL344;
    }
    cpy_r_r606 = CPyStatics[1323]; /* 'AttributeContext' */
    cpy_r_r607 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r608 = CPyDict_SetItem(cpy_r_r587, cpy_r_r607, cpy_r_r589);
    CPy_DECREF(cpy_r_r589);
    cpy_r_r609 = cpy_r_r608 >= 0;
    if (unlikely(!cpy_r_r609)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL343;
    }
    cpy_r_r610 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r611 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r612 = CPyDict_SetItem(cpy_r_r587, cpy_r_r611, cpy_r_r610);
    cpy_r_r613 = cpy_r_r612 >= 0;
    if (unlikely(!cpy_r_r613)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL343;
    }
    cpy_r_r614 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r615 = CPyStatics[619]; /* '__module__' */
    cpy_r_r616 = CPyDict_SetItem(cpy_r_r587, cpy_r_r615, cpy_r_r614);
    cpy_r_r617 = cpy_r_r616 >= 0;
    if (unlikely(!cpy_r_r617)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL343;
    }
    PyObject *cpy_r_r618[3] = {cpy_r_r606, cpy_r_r567, cpy_r_r587};
    cpy_r_r619 = (PyObject **)&cpy_r_r618;
    cpy_r_r620 = _PyObject_Vectorcall(cpy_r_r577, cpy_r_r619, 3, 0);
    CPy_DECREF(cpy_r_r577);
    if (unlikely(cpy_r_r620 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL345;
    }
    CPy_DECREF(cpy_r_r567);
    CPy_DECREF(cpy_r_r587);
    CPyType_plugin___AttributeContext = (PyTypeObject *)cpy_r_r620;
    CPy_INCREF(CPyType_plugin___AttributeContext);
    cpy_r_r621 = CPyStatic_plugin___globals;
    cpy_r_r622 = CPyStatics[1323]; /* 'AttributeContext' */
    cpy_r_r623 = CPyDict_SetItem(cpy_r_r621, cpy_r_r622, cpy_r_r620);
    CPy_DECREF(cpy_r_r620);
    cpy_r_r624 = cpy_r_r623 >= 0;
    if (unlikely(!cpy_r_r624)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 496, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r625 = (PyObject *)CPyType_plugin___AttributeContext;
    cpy_r_r626 = CPyModule_typing;
    cpy_r_r627 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r628 = cpy_r_r626 != cpy_r_r627;
    if (cpy_r_r628) goto CPyL239;
    cpy_r_r629 = CPyStatics[21]; /* 'typing' */
    cpy_r_r630 = PyImport_Import(cpy_r_r629);
    if (unlikely(cpy_r_r630 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_typing = cpy_r_r630;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r630);
CPyL239: ;
    cpy_r_r631 = PyImport_GetModuleDict();
    cpy_r_r632 = CPyStatics[21]; /* 'typing' */
    cpy_r_r633 = CPyDict_GetItem(cpy_r_r631, cpy_r_r632);
    if (unlikely(cpy_r_r633 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r634 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r635 = CPyObject_GetAttr(cpy_r_r633, cpy_r_r634);
    CPy_DECREF(cpy_r_r633);
    if (unlikely(cpy_r_r635 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r636 = PyTuple_Pack(1, cpy_r_r635);
    CPy_DECREF(cpy_r_r635);
    if (unlikely(cpy_r_r636 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r637 = CPyModule_typing;
    cpy_r_r638 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r639 = cpy_r_r637 != cpy_r_r638;
    if (cpy_r_r639) goto CPyL245;
    cpy_r_r640 = CPyStatics[21]; /* 'typing' */
    cpy_r_r641 = PyImport_Import(cpy_r_r640);
    if (unlikely(cpy_r_r641 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL346;
    }
    CPyModule_typing = cpy_r_r641;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r641);
CPyL245: ;
    cpy_r_r642 = PyImport_GetModuleDict();
    cpy_r_r643 = CPyStatics[21]; /* 'typing' */
    cpy_r_r644 = CPyDict_GetItem(cpy_r_r642, cpy_r_r643);
    if (unlikely(cpy_r_r644 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL346;
    }
    cpy_r_r645 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r646 = CPyObject_GetAttr(cpy_r_r644, cpy_r_r645);
    CPy_DECREF(cpy_r_r644);
    if (unlikely(cpy_r_r646 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL346;
    }
    cpy_r_r647 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r648 = PyObject_HasAttr(cpy_r_r646, cpy_r_r647);
    if (!cpy_r_r648) goto CPyL252;
    cpy_r_r649 = CPyStatics[4377]; /* 'ClassDefContext' */
    cpy_r_r650 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r651 = CPyObject_GetAttr(cpy_r_r646, cpy_r_r650);
    if (unlikely(cpy_r_r651 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL347;
    }
    PyObject *cpy_r_r652[2] = {cpy_r_r649, cpy_r_r636};
    cpy_r_r653 = (PyObject **)&cpy_r_r652;
    cpy_r_r654 = _PyObject_Vectorcall(cpy_r_r651, cpy_r_r653, 2, 0);
    CPy_DECREF(cpy_r_r651);
    if (unlikely(cpy_r_r654 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL347;
    }
    if (likely(PyDict_Check(cpy_r_r654)))
        cpy_r_r655 = cpy_r_r654;
    else {
        CPy_TypeErrorTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals, "dict", cpy_r_r654);
        goto CPyL347;
    }
    cpy_r_r656 = cpy_r_r655;
    goto CPyL254;
CPyL252: ;
    cpy_r_r657 = PyDict_New();
    if (unlikely(cpy_r_r657 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL347;
    }
    cpy_r_r656 = cpy_r_r657;
CPyL254: ;
    cpy_r_r658 = PyDict_New();
    if (unlikely(cpy_r_r658 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL348;
    }
    cpy_r_r659 = (PyObject *)CPyType_nodes___ClassDef;
    cpy_r_r660 = CPyStatics[729]; /* 'cls' */
    cpy_r_r661 = CPyDict_SetItem(cpy_r_r658, cpy_r_r660, cpy_r_r659);
    cpy_r_r662 = cpy_r_r661 >= 0;
    if (unlikely(!cpy_r_r662)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 505, CPyStatic_plugin___globals);
        goto CPyL349;
    }
    cpy_r_r663 = (PyObject *)CPyType_nodes___Expression;
    cpy_r_r664 = CPyStatics[4378]; /* 'reason' */
    cpy_r_r665 = CPyDict_SetItem(cpy_r_r658, cpy_r_r664, cpy_r_r663);
    cpy_r_r666 = cpy_r_r665 >= 0;
    if (unlikely(!cpy_r_r666)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 506, CPyStatic_plugin___globals);
        goto CPyL349;
    }
    cpy_r_r667 = (PyObject *)CPyType_plugin___SemanticAnalyzerPluginInterface;
    cpy_r_r668 = CPyStatics[4369]; /* 'api' */
    cpy_r_r669 = CPyDict_SetItem(cpy_r_r658, cpy_r_r668, cpy_r_r667);
    cpy_r_r670 = cpy_r_r669 >= 0;
    if (unlikely(!cpy_r_r670)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 507, CPyStatic_plugin___globals);
        goto CPyL349;
    }
    cpy_r_r671 = CPyStatics[4377]; /* 'ClassDefContext' */
    cpy_r_r672 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r673 = CPyDict_SetItem(cpy_r_r656, cpy_r_r672, cpy_r_r658);
    CPy_DECREF(cpy_r_r658);
    cpy_r_r674 = cpy_r_r673 >= 0;
    if (unlikely(!cpy_r_r674)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL348;
    }
    cpy_r_r675 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r676 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r677 = CPyDict_SetItem(cpy_r_r656, cpy_r_r676, cpy_r_r675);
    cpy_r_r678 = cpy_r_r677 >= 0;
    if (unlikely(!cpy_r_r678)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL348;
    }
    cpy_r_r679 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r680 = CPyStatics[619]; /* '__module__' */
    cpy_r_r681 = CPyDict_SetItem(cpy_r_r656, cpy_r_r680, cpy_r_r679);
    cpy_r_r682 = cpy_r_r681 >= 0;
    if (unlikely(!cpy_r_r682)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL348;
    }
    PyObject *cpy_r_r683[3] = {cpy_r_r671, cpy_r_r636, cpy_r_r656};
    cpy_r_r684 = (PyObject **)&cpy_r_r683;
    cpy_r_r685 = _PyObject_Vectorcall(cpy_r_r646, cpy_r_r684, 3, 0);
    CPy_DECREF(cpy_r_r646);
    if (unlikely(cpy_r_r685 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL350;
    }
    CPy_DECREF(cpy_r_r636);
    CPy_DECREF(cpy_r_r656);
    CPyType_plugin___ClassDefContext = (PyTypeObject *)cpy_r_r685;
    CPy_INCREF(CPyType_plugin___ClassDefContext);
    cpy_r_r686 = CPyStatic_plugin___globals;
    cpy_r_r687 = CPyStatics[4377]; /* 'ClassDefContext' */
    cpy_r_r688 = CPyDict_SetItem(cpy_r_r686, cpy_r_r687, cpy_r_r685);
    CPy_DECREF(cpy_r_r685);
    cpy_r_r689 = cpy_r_r688 >= 0;
    if (unlikely(!cpy_r_r689)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 504, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r690 = (PyObject *)CPyType_plugin___ClassDefContext;
    cpy_r_r691 = CPyModule_typing;
    cpy_r_r692 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r693 = cpy_r_r691 != cpy_r_r692;
    if (cpy_r_r693) goto CPyL266;
    cpy_r_r694 = CPyStatics[21]; /* 'typing' */
    cpy_r_r695 = PyImport_Import(cpy_r_r694);
    if (unlikely(cpy_r_r695 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    CPyModule_typing = cpy_r_r695;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r695);
CPyL266: ;
    cpy_r_r696 = PyImport_GetModuleDict();
    cpy_r_r697 = CPyStatics[21]; /* 'typing' */
    cpy_r_r698 = CPyDict_GetItem(cpy_r_r696, cpy_r_r697);
    if (unlikely(cpy_r_r698 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r699 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r700 = CPyObject_GetAttr(cpy_r_r698, cpy_r_r699);
    CPy_DECREF(cpy_r_r698);
    if (unlikely(cpy_r_r700 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r701 = PyTuple_Pack(1, cpy_r_r700);
    CPy_DECREF(cpy_r_r700);
    if (unlikely(cpy_r_r701 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r702 = CPyModule_typing;
    cpy_r_r703 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r704 = cpy_r_r702 != cpy_r_r703;
    if (cpy_r_r704) goto CPyL272;
    cpy_r_r705 = CPyStatics[21]; /* 'typing' */
    cpy_r_r706 = PyImport_Import(cpy_r_r705);
    if (unlikely(cpy_r_r706 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL351;
    }
    CPyModule_typing = cpy_r_r706;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r706);
CPyL272: ;
    cpy_r_r707 = PyImport_GetModuleDict();
    cpy_r_r708 = CPyStatics[21]; /* 'typing' */
    cpy_r_r709 = CPyDict_GetItem(cpy_r_r707, cpy_r_r708);
    if (unlikely(cpy_r_r709 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL351;
    }
    cpy_r_r710 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r711 = CPyObject_GetAttr(cpy_r_r709, cpy_r_r710);
    CPy_DECREF(cpy_r_r709);
    if (unlikely(cpy_r_r711 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL351;
    }
    cpy_r_r712 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r713 = PyObject_HasAttr(cpy_r_r711, cpy_r_r712);
    if (!cpy_r_r713) goto CPyL279;
    cpy_r_r714 = CPyStatics[4379]; /* 'DynamicClassDefContext' */
    cpy_r_r715 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r716 = CPyObject_GetAttr(cpy_r_r711, cpy_r_r715);
    if (unlikely(cpy_r_r716 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL352;
    }
    PyObject *cpy_r_r717[2] = {cpy_r_r714, cpy_r_r701};
    cpy_r_r718 = (PyObject **)&cpy_r_r717;
    cpy_r_r719 = _PyObject_Vectorcall(cpy_r_r716, cpy_r_r718, 2, 0);
    CPy_DECREF(cpy_r_r716);
    if (unlikely(cpy_r_r719 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL352;
    }
    if (likely(PyDict_Check(cpy_r_r719)))
        cpy_r_r720 = cpy_r_r719;
    else {
        CPy_TypeErrorTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals, "dict", cpy_r_r719);
        goto CPyL352;
    }
    cpy_r_r721 = cpy_r_r720;
    goto CPyL281;
CPyL279: ;
    cpy_r_r722 = PyDict_New();
    if (unlikely(cpy_r_r722 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL352;
    }
    cpy_r_r721 = cpy_r_r722;
CPyL281: ;
    cpy_r_r723 = PyDict_New();
    if (unlikely(cpy_r_r723 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL353;
    }
    cpy_r_r724 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r725 = CPyStatics[3972]; /* 'call' */
    cpy_r_r726 = CPyDict_SetItem(cpy_r_r723, cpy_r_r725, cpy_r_r724);
    cpy_r_r727 = cpy_r_r726 >= 0;
    if (unlikely(!cpy_r_r727)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 513, CPyStatic_plugin___globals);
        goto CPyL354;
    }
    cpy_r_r728 = (PyObject *)&PyUnicode_Type;
    cpy_r_r729 = CPyStatics[2329]; /* 'name' */
    cpy_r_r730 = CPyDict_SetItem(cpy_r_r723, cpy_r_r729, cpy_r_r728);
    cpy_r_r731 = cpy_r_r730 >= 0;
    if (unlikely(!cpy_r_r731)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 514, CPyStatic_plugin___globals);
        goto CPyL354;
    }
    cpy_r_r732 = (PyObject *)CPyType_plugin___SemanticAnalyzerPluginInterface;
    cpy_r_r733 = CPyStatics[4369]; /* 'api' */
    cpy_r_r734 = CPyDict_SetItem(cpy_r_r723, cpy_r_r733, cpy_r_r732);
    cpy_r_r735 = cpy_r_r734 >= 0;
    if (unlikely(!cpy_r_r735)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 515, CPyStatic_plugin___globals);
        goto CPyL354;
    }
    cpy_r_r736 = CPyStatics[4379]; /* 'DynamicClassDefContext' */
    cpy_r_r737 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r738 = CPyDict_SetItem(cpy_r_r721, cpy_r_r737, cpy_r_r723);
    CPy_DECREF(cpy_r_r723);
    cpy_r_r739 = cpy_r_r738 >= 0;
    if (unlikely(!cpy_r_r739)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL353;
    }
    cpy_r_r740 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r741 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r742 = CPyDict_SetItem(cpy_r_r721, cpy_r_r741, cpy_r_r740);
    cpy_r_r743 = cpy_r_r742 >= 0;
    if (unlikely(!cpy_r_r743)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL353;
    }
    cpy_r_r744 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r745 = CPyStatics[619]; /* '__module__' */
    cpy_r_r746 = CPyDict_SetItem(cpy_r_r721, cpy_r_r745, cpy_r_r744);
    cpy_r_r747 = cpy_r_r746 >= 0;
    if (unlikely(!cpy_r_r747)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL353;
    }
    PyObject *cpy_r_r748[3] = {cpy_r_r736, cpy_r_r701, cpy_r_r721};
    cpy_r_r749 = (PyObject **)&cpy_r_r748;
    cpy_r_r750 = _PyObject_Vectorcall(cpy_r_r711, cpy_r_r749, 3, 0);
    CPy_DECREF(cpy_r_r711);
    if (unlikely(cpy_r_r750 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL355;
    }
    CPy_DECREF(cpy_r_r701);
    CPy_DECREF(cpy_r_r721);
    CPyType_plugin___DynamicClassDefContext = (PyTypeObject *)cpy_r_r750;
    CPy_INCREF(CPyType_plugin___DynamicClassDefContext);
    cpy_r_r751 = CPyStatic_plugin___globals;
    cpy_r_r752 = CPyStatics[4379]; /* 'DynamicClassDefContext' */
    cpy_r_r753 = CPyDict_SetItem(cpy_r_r751, cpy_r_r752, cpy_r_r750);
    CPy_DECREF(cpy_r_r750);
    cpy_r_r754 = cpy_r_r753 >= 0;
    if (unlikely(!cpy_r_r754)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 512, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r755 = (PyObject *)CPyType_plugin___DynamicClassDefContext;
    cpy_r_r756 = (PyObject *)CPyType_plugin___CommonPluginApi;
    cpy_r_r757 = PyTuple_Pack(1, cpy_r_r756);
    if (unlikely(cpy_r_r757 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 519, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r758 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r759 = (PyObject *)CPyType_plugin___Plugin_template;
    cpy_r_r760 = CPyType_FromTemplate(cpy_r_r759, cpy_r_r757, cpy_r_r758);
    CPy_DECREF(cpy_r_r757);
    if (unlikely(cpy_r_r760 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 519, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r761 = CPyDef_plugin___Plugin_trait_vtable_setup();
    if (unlikely(cpy_r_r761 == 2)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", -1, CPyStatic_plugin___globals);
        goto CPyL356;
    }
    cpy_r_r762 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r763 = CPyStatics[1569]; /* 'python_version' */
    cpy_r_r764 = CPyStatics[4380]; /* '_modules' */
    cpy_r_r765 = CPyStatics[159]; /* 'options' */
    cpy_r_r766 = PyTuple_Pack(3, cpy_r_r763, cpy_r_r764, cpy_r_r765);
    if (unlikely(cpy_r_r766 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 519, CPyStatic_plugin___globals);
        goto CPyL356;
    }
    cpy_r_r767 = PyObject_SetAttr(cpy_r_r760, cpy_r_r762, cpy_r_r766);
    CPy_DECREF(cpy_r_r766);
    cpy_r_r768 = cpy_r_r767 >= 0;
    if (unlikely(!cpy_r_r768)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 519, CPyStatic_plugin___globals);
        goto CPyL356;
    }
    CPyType_plugin___Plugin = (PyTypeObject *)cpy_r_r760;
    CPy_INCREF(CPyType_plugin___Plugin);
    cpy_r_r769 = CPyStatic_plugin___globals;
    cpy_r_r770 = CPyStatics[582]; /* 'Plugin' */
    cpy_r_r771 = CPyDict_SetItem(cpy_r_r769, cpy_r_r770, cpy_r_r760);
    CPy_DECREF(cpy_r_r760);
    cpy_r_r772 = cpy_r_r771 >= 0;
    if (unlikely(!cpy_r_r772)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 519, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r773 = CPyStatics[1088]; /* 'T' */
    cpy_r_r774 = CPyStatic_plugin___globals;
    cpy_r_r775 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r776 = CPyDict_GetItem(cpy_r_r774, cpy_r_r775);
    if (unlikely(cpy_r_r776 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 810, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    PyObject *cpy_r_r777[1] = {cpy_r_r773};
    cpy_r_r778 = (PyObject **)&cpy_r_r777;
    cpy_r_r779 = _PyObject_Vectorcall(cpy_r_r776, cpy_r_r778, 1, 0);
    CPy_DECREF(cpy_r_r776);
    if (unlikely(cpy_r_r779 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 810, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r780 = CPyStatic_plugin___globals;
    cpy_r_r781 = CPyStatics[1088]; /* 'T' */
    cpy_r_r782 = CPyDict_SetItem(cpy_r_r780, cpy_r_r781, cpy_r_r779);
    CPy_DECREF(cpy_r_r779);
    cpy_r_r783 = cpy_r_r782 >= 0;
    if (unlikely(!cpy_r_r783)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 810, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r784 = (PyObject *)CPyType_plugin___Plugin;
    cpy_r_r785 = PyTuple_Pack(1, cpy_r_r784);
    if (unlikely(cpy_r_r785 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 813, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r786 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r787 = (PyObject *)CPyType_plugin___ChainedPlugin_template;
    cpy_r_r788 = CPyType_FromTemplate(cpy_r_r787, cpy_r_r785, cpy_r_r786);
    CPy_DECREF(cpy_r_r785);
    if (unlikely(cpy_r_r788 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 813, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    cpy_r_r789 = CPyDef_plugin___ChainedPlugin_trait_vtable_setup();
    if (unlikely(cpy_r_r789 == 2)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", -1, CPyStatic_plugin___globals);
        goto CPyL357;
    }
    cpy_r_r790 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r791 = CPyStatics[4381]; /* '_plugins' */
    cpy_r_r792 = CPyStatics[1569]; /* 'python_version' */
    cpy_r_r793 = CPyStatics[4380]; /* '_modules' */
    cpy_r_r794 = CPyStatics[159]; /* 'options' */
    cpy_r_r795 = PyTuple_Pack(4, cpy_r_r791, cpy_r_r792, cpy_r_r793, cpy_r_r794);
    if (unlikely(cpy_r_r795 == NULL)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 813, CPyStatic_plugin___globals);
        goto CPyL357;
    }
    cpy_r_r796 = PyObject_SetAttr(cpy_r_r788, cpy_r_r790, cpy_r_r795);
    CPy_DECREF(cpy_r_r795);
    cpy_r_r797 = cpy_r_r796 >= 0;
    if (unlikely(!cpy_r_r797)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 813, CPyStatic_plugin___globals);
        goto CPyL357;
    }
    CPyType_plugin___ChainedPlugin = (PyTypeObject *)cpy_r_r788;
    CPy_INCREF(CPyType_plugin___ChainedPlugin);
    cpy_r_r798 = CPyStatic_plugin___globals;
    cpy_r_r799 = CPyStatics[581]; /* 'ChainedPlugin' */
    cpy_r_r800 = CPyDict_SetItem(cpy_r_r798, cpy_r_r799, cpy_r_r788);
    CPy_DECREF(cpy_r_r788);
    cpy_r_r801 = cpy_r_r800 >= 0;
    if (unlikely(!cpy_r_r801)) {
        CPy_AddTraceback("mypy/plugin.py", "<module>", 813, CPyStatic_plugin___globals);
        goto CPyL306;
    }
    return 1;
CPyL306: ;
    cpy_r_r802 = 2;
    return cpy_r_r802;
CPyL307: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL306;
CPyL308: ;
    CPy_DecRef(cpy_r_r76);
    goto CPyL306;
CPyL309: ;
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r86);
    goto CPyL306;
CPyL310: ;
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r96);
    goto CPyL306;
CPyL311: ;
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_r98);
    goto CPyL306;
CPyL312: ;
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r96);
    goto CPyL306;
CPyL313: ;
    CPy_DecRef(cpy_r_r134);
    goto CPyL306;
CPyL314: ;
    CPy_DecRef(cpy_r_r148);
    goto CPyL306;
CPyL315: ;
    CPy_DecRef(cpy_r_r163);
    goto CPyL306;
CPyL316: ;
    CPy_DecRef(cpy_r_r186);
    goto CPyL306;
CPyL317: ;
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r196);
    goto CPyL306;
CPyL318: ;
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r196);
    CPy_DecRef(cpy_r_r206);
    goto CPyL306;
CPyL319: ;
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r196);
    CPy_DecRef(cpy_r_r206);
    CPy_DecRef(cpy_r_r208);
    goto CPyL306;
CPyL320: ;
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r206);
    goto CPyL306;
CPyL321: ;
    CPy_DecRef(cpy_r_r251);
    goto CPyL306;
CPyL322: ;
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r261);
    goto CPyL306;
CPyL323: ;
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r261);
    CPy_DecRef(cpy_r_r271);
    goto CPyL306;
CPyL324: ;
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r261);
    CPy_DecRef(cpy_r_r271);
    CPy_DecRef(cpy_r_r273);
    goto CPyL306;
CPyL325: ;
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r271);
    goto CPyL306;
CPyL326: ;
    CPy_DecRef(cpy_r_r320);
    goto CPyL306;
CPyL327: ;
    CPy_DecRef(cpy_r_r320);
    CPy_DecRef(cpy_r_r330);
    goto CPyL306;
CPyL328: ;
    CPy_DecRef(cpy_r_r320);
    CPy_DecRef(cpy_r_r330);
    CPy_DecRef(cpy_r_r340);
    goto CPyL306;
CPyL329: ;
    CPy_DecRef(cpy_r_r320);
    CPy_DecRef(cpy_r_r330);
    CPy_DecRef(cpy_r_r340);
    CPy_DecRef(cpy_r_r342);
    goto CPyL306;
CPyL330: ;
    CPy_DecRef(cpy_r_r320);
    CPy_DecRef(cpy_r_r340);
    goto CPyL306;
CPyL331: ;
    CPy_DecRef(cpy_r_r405);
    goto CPyL306;
CPyL332: ;
    CPy_DecRef(cpy_r_r405);
    CPy_DecRef(cpy_r_r415);
    goto CPyL306;
CPyL333: ;
    CPy_DecRef(cpy_r_r405);
    CPy_DecRef(cpy_r_r415);
    CPy_DecRef(cpy_r_r425);
    goto CPyL306;
CPyL334: ;
    CPy_DecRef(cpy_r_r405);
    CPy_DecRef(cpy_r_r415);
    CPy_DecRef(cpy_r_r425);
    CPy_DecRef(cpy_r_r427);
    goto CPyL306;
CPyL335: ;
    CPy_DecRef(cpy_r_r405);
    CPy_DecRef(cpy_r_r425);
    goto CPyL306;
CPyL336: ;
    CPy_DecRef(cpy_r_r478);
    goto CPyL306;
CPyL337: ;
    CPy_DecRef(cpy_r_r478);
    CPy_DecRef(cpy_r_r488);
    goto CPyL306;
CPyL338: ;
    CPy_DecRef(cpy_r_r478);
    CPy_DecRef(cpy_r_r488);
    CPy_DecRef(cpy_r_r498);
    goto CPyL306;
CPyL339: ;
    CPy_DecRef(cpy_r_r478);
    CPy_DecRef(cpy_r_r488);
    CPy_DecRef(cpy_r_r498);
    CPy_DecRef(cpy_r_r500);
    goto CPyL306;
CPyL340: ;
    CPy_DecRef(cpy_r_r478);
    CPy_DecRef(cpy_r_r498);
    goto CPyL306;
CPyL341: ;
    CPy_DecRef(cpy_r_r567);
    goto CPyL306;
CPyL342: ;
    CPy_DecRef(cpy_r_r567);
    CPy_DecRef(cpy_r_r577);
    goto CPyL306;
CPyL343: ;
    CPy_DecRef(cpy_r_r567);
    CPy_DecRef(cpy_r_r577);
    CPy_DecRef(cpy_r_r587);
    goto CPyL306;
CPyL344: ;
    CPy_DecRef(cpy_r_r567);
    CPy_DecRef(cpy_r_r577);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r589);
    goto CPyL306;
CPyL345: ;
    CPy_DecRef(cpy_r_r567);
    CPy_DecRef(cpy_r_r587);
    goto CPyL306;
CPyL346: ;
    CPy_DecRef(cpy_r_r636);
    goto CPyL306;
CPyL347: ;
    CPy_DecRef(cpy_r_r636);
    CPy_DecRef(cpy_r_r646);
    goto CPyL306;
CPyL348: ;
    CPy_DecRef(cpy_r_r636);
    CPy_DecRef(cpy_r_r646);
    CPy_DecRef(cpy_r_r656);
    goto CPyL306;
CPyL349: ;
    CPy_DecRef(cpy_r_r636);
    CPy_DecRef(cpy_r_r646);
    CPy_DecRef(cpy_r_r656);
    CPy_DecRef(cpy_r_r658);
    goto CPyL306;
CPyL350: ;
    CPy_DecRef(cpy_r_r636);
    CPy_DecRef(cpy_r_r656);
    goto CPyL306;
CPyL351: ;
    CPy_DecRef(cpy_r_r701);
    goto CPyL306;
CPyL352: ;
    CPy_DecRef(cpy_r_r701);
    CPy_DecRef(cpy_r_r711);
    goto CPyL306;
CPyL353: ;
    CPy_DecRef(cpy_r_r701);
    CPy_DecRef(cpy_r_r711);
    CPy_DecRef(cpy_r_r721);
    goto CPyL306;
CPyL354: ;
    CPy_DecRef(cpy_r_r701);
    CPy_DecRef(cpy_r_r711);
    CPy_DecRef(cpy_r_r721);
    CPy_DecRef(cpy_r_r723);
    goto CPyL306;
CPyL355: ;
    CPy_DecRef(cpy_r_r701);
    CPy_DecRef(cpy_r_r721);
    goto CPyL306;
CPyL356: ;
    CPy_DecRef(cpy_r_r760);
    goto CPyL306;
CPyL357: ;
    CPy_DecRef(cpy_r_r788);
    goto CPyL306;
}
