#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
emitmodule___MarkedDeclaration_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *emitmodule___MarkedDeclaration_setup(PyTypeObject *type);
PyObject *CPyDef_emitmodule___MarkedDeclaration(PyObject *cpy_r_declaration, char cpy_r_mark);

static PyObject *
emitmodule___MarkedDeclaration_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitmodule___MarkedDeclaration) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = emitmodule___MarkedDeclaration_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_emitmodule___MarkedDeclaration_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
emitmodule___MarkedDeclaration_traverse(mypyc___codegen___emitmodule___MarkedDeclarationObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_declaration);
    return 0;
}

static int
emitmodule___MarkedDeclaration_clear(mypyc___codegen___emitmodule___MarkedDeclarationObject *self)
{
    Py_CLEAR(self->_declaration);
    return 0;
}

static void
emitmodule___MarkedDeclaration_dealloc(mypyc___codegen___emitmodule___MarkedDeclarationObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitmodule___MarkedDeclaration_dealloc)
    emitmodule___MarkedDeclaration_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitmodule___MarkedDeclaration_vtable[1];
static bool
CPyDef_emitmodule___MarkedDeclaration_trait_vtable_setup(void)
{
    CPyVTableItem emitmodule___MarkedDeclaration_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emitmodule___MarkedDeclaration_____init__,
    };
    memcpy(emitmodule___MarkedDeclaration_vtable, emitmodule___MarkedDeclaration_vtable_scratch, sizeof(emitmodule___MarkedDeclaration_vtable));
    return 1;
}

static PyObject *
emitmodule___MarkedDeclaration_get_declaration(mypyc___codegen___emitmodule___MarkedDeclarationObject *self, void *closure);
static int
emitmodule___MarkedDeclaration_set_declaration(mypyc___codegen___emitmodule___MarkedDeclarationObject *self, PyObject *value, void *closure);
static PyObject *
emitmodule___MarkedDeclaration_get_mark(mypyc___codegen___emitmodule___MarkedDeclarationObject *self, void *closure);
static int
emitmodule___MarkedDeclaration_set_mark(mypyc___codegen___emitmodule___MarkedDeclarationObject *self, PyObject *value, void *closure);

static PyGetSetDef emitmodule___MarkedDeclaration_getseters[] = {
    {"declaration",
     (getter)emitmodule___MarkedDeclaration_get_declaration, (setter)emitmodule___MarkedDeclaration_set_declaration,
     NULL, NULL},
    {"mark",
     (getter)emitmodule___MarkedDeclaration_get_mark, (setter)emitmodule___MarkedDeclaration_set_mark,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef emitmodule___MarkedDeclaration_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_emitmodule___MarkedDeclaration_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitmodule___MarkedDeclaration_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "MarkedDeclaration",
    .tp_new = emitmodule___MarkedDeclaration_new,
    .tp_dealloc = (destructor)emitmodule___MarkedDeclaration_dealloc,
    .tp_traverse = (traverseproc)emitmodule___MarkedDeclaration_traverse,
    .tp_clear = (inquiry)emitmodule___MarkedDeclaration_clear,
    .tp_getset = emitmodule___MarkedDeclaration_getseters,
    .tp_methods = emitmodule___MarkedDeclaration_methods,
    .tp_init = emitmodule___MarkedDeclaration_init,
    .tp_basicsize = sizeof(mypyc___codegen___emitmodule___MarkedDeclarationObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emitmodule___MarkedDeclaration_template = &CPyType_emitmodule___MarkedDeclaration_template_;

static PyObject *
emitmodule___MarkedDeclaration_setup(PyTypeObject *type)
{
    mypyc___codegen___emitmodule___MarkedDeclarationObject *self;
    self = (mypyc___codegen___emitmodule___MarkedDeclarationObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitmodule___MarkedDeclaration_vtable;
    self->_mark = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_emitmodule___MarkedDeclaration(PyObject *cpy_r_declaration, char cpy_r_mark)
{
    PyObject *self = emitmodule___MarkedDeclaration_setup(CPyType_emitmodule___MarkedDeclaration);
    if (self == NULL)
        return NULL;
    char res = CPyDef_emitmodule___MarkedDeclaration_____init__(self, cpy_r_declaration, cpy_r_mark);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
emitmodule___MarkedDeclaration_get_declaration(mypyc___codegen___emitmodule___MarkedDeclarationObject *self, void *closure)
{
    if (unlikely(self->_declaration == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'declaration' of 'MarkedDeclaration' undefined");
        return NULL;
    }
    CPy_INCREF(self->_declaration);
    PyObject *retval = self->_declaration;
    return retval;
}

static int
emitmodule___MarkedDeclaration_set_declaration(mypyc___codegen___emitmodule___MarkedDeclarationObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MarkedDeclaration' object attribute 'declaration' cannot be deleted");
        return -1;
    }
    if (self->_declaration != NULL) {
        CPy_DECREF(self->_declaration);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_emit___HeaderDeclaration))
        tmp = value;
    else {
        CPy_TypeError("mypyc.codegen.emit.HeaderDeclaration", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_declaration = tmp;
    return 0;
}

static PyObject *
emitmodule___MarkedDeclaration_get_mark(mypyc___codegen___emitmodule___MarkedDeclarationObject *self, void *closure)
{
    PyObject *retval = self->_mark ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
emitmodule___MarkedDeclaration_set_mark(mypyc___codegen___emitmodule___MarkedDeclarationObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MarkedDeclaration' object attribute 'mark' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_mark = tmp;
    return 0;
}

static int
emitmodule___MypycPlugin_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *emitmodule___MypycPlugin_setup(PyTypeObject *type);
PyObject *CPyDef_emitmodule___MypycPlugin(PyObject *cpy_r_options, PyObject *cpy_r_compiler_options, PyObject *cpy_r_groups);

static PyObject *
emitmodule___MypycPlugin_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitmodule___MypycPlugin) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = emitmodule___MypycPlugin_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_emitmodule___MypycPlugin_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
emitmodule___MypycPlugin_traverse(mypyc___codegen___emitmodule___MypycPluginObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_options);
    if (CPyTagged_CheckLong(self->_python_version.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_python_version.f0));
    }
    if (CPyTagged_CheckLong(self->_python_version.f1)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_python_version.f1));
    }
    Py_VISIT(self->__modules);
    Py_VISIT(self->_group_map);
    Py_VISIT(self->_compiler_options);
    Py_VISIT(self->_metastore);
    return 0;
}

static int
emitmodule___MypycPlugin_clear(mypyc___codegen___emitmodule___MypycPluginObject *self)
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
    Py_CLEAR(self->_group_map);
    Py_CLEAR(self->_compiler_options);
    Py_CLEAR(self->_metastore);
    return 0;
}

static void
emitmodule___MypycPlugin_dealloc(mypyc___codegen___emitmodule___MypycPluginObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitmodule___MypycPlugin_dealloc)
    emitmodule___MypycPlugin_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitmodule___MypycPlugin_vtable[22];
static bool
CPyDef_emitmodule___MypycPlugin_trait_vtable_setup(void)
{
    CPyVTableItem emitmodule___MypycPlugin_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin___Plugin___lookup_fully_qualified,
        (CPyVTableItem)CPyDef_emitmodule___MypycPlugin_____init__,
        (CPyVTableItem)CPyDef_plugin___Plugin___set_modules,
        (CPyVTableItem)CPyDef_plugin___Plugin___lookup_fully_qualified,
        (CPyVTableItem)CPyDef_emitmodule___MypycPlugin___report_config_data__Plugin_glue,
        (CPyVTableItem)CPyDef_emitmodule___MypycPlugin___get_additional_deps,
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
        (CPyVTableItem)CPyDef_emitmodule___MypycPlugin_____init__,
        (CPyVTableItem)CPyDef_emitmodule___MypycPlugin___report_config_data,
        (CPyVTableItem)CPyDef_emitmodule___MypycPlugin___get_additional_deps,
    };
    memcpy(emitmodule___MypycPlugin_vtable, emitmodule___MypycPlugin_vtable_scratch, sizeof(emitmodule___MypycPlugin_vtable));
    return 1;
}

static PyObject *
emitmodule___MypycPlugin_get_group_map(mypyc___codegen___emitmodule___MypycPluginObject *self, void *closure);
static int
emitmodule___MypycPlugin_set_group_map(mypyc___codegen___emitmodule___MypycPluginObject *self, PyObject *value, void *closure);
static PyObject *
emitmodule___MypycPlugin_get_compiler_options(mypyc___codegen___emitmodule___MypycPluginObject *self, void *closure);
static int
emitmodule___MypycPlugin_set_compiler_options(mypyc___codegen___emitmodule___MypycPluginObject *self, PyObject *value, void *closure);
static PyObject *
emitmodule___MypycPlugin_get_metastore(mypyc___codegen___emitmodule___MypycPluginObject *self, void *closure);
static int
emitmodule___MypycPlugin_set_metastore(mypyc___codegen___emitmodule___MypycPluginObject *self, PyObject *value, void *closure);

static PyGetSetDef emitmodule___MypycPlugin_getseters[] = {
    {"group_map",
     (getter)emitmodule___MypycPlugin_get_group_map, (setter)emitmodule___MypycPlugin_set_group_map,
     NULL, NULL},
    {"compiler_options",
     (getter)emitmodule___MypycPlugin_get_compiler_options, (setter)emitmodule___MypycPlugin_set_compiler_options,
     NULL, NULL},
    {"metastore",
     (getter)emitmodule___MypycPlugin_get_metastore, (setter)emitmodule___MypycPlugin_set_metastore,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef emitmodule___MypycPlugin_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_emitmodule___MypycPlugin_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"report_config_data",
     (PyCFunction)CPyPy_emitmodule___MypycPlugin___report_config_data,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_additional_deps",
     (PyCFunction)CPyPy_emitmodule___MypycPlugin___get_additional_deps,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitmodule___MypycPlugin_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "MypycPlugin",
    .tp_new = emitmodule___MypycPlugin_new,
    .tp_dealloc = (destructor)emitmodule___MypycPlugin_dealloc,
    .tp_traverse = (traverseproc)emitmodule___MypycPlugin_traverse,
    .tp_clear = (inquiry)emitmodule___MypycPlugin_clear,
    .tp_getset = emitmodule___MypycPlugin_getseters,
    .tp_methods = emitmodule___MypycPlugin_methods,
    .tp_init = emitmodule___MypycPlugin_init,
    .tp_basicsize = sizeof(mypyc___codegen___emitmodule___MypycPluginObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emitmodule___MypycPlugin_template = &CPyType_emitmodule___MypycPlugin_template_;

static PyObject *
emitmodule___MypycPlugin_setup(PyTypeObject *type)
{
    mypyc___codegen___emitmodule___MypycPluginObject *self;
    self = (mypyc___codegen___emitmodule___MypycPluginObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitmodule___MypycPlugin_vtable;
    self->_python_version = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    return (PyObject *)self;
}

PyObject *CPyDef_emitmodule___MypycPlugin(PyObject *cpy_r_options, PyObject *cpy_r_compiler_options, PyObject *cpy_r_groups)
{
    PyObject *self = emitmodule___MypycPlugin_setup(CPyType_emitmodule___MypycPlugin);
    if (self == NULL)
        return NULL;
    char res = CPyDef_emitmodule___MypycPlugin_____init__(self, cpy_r_options, cpy_r_compiler_options, cpy_r_groups);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
emitmodule___MypycPlugin_get_group_map(mypyc___codegen___emitmodule___MypycPluginObject *self, void *closure)
{
    if (unlikely(self->_group_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'group_map' of 'MypycPlugin' undefined");
        return NULL;
    }
    CPy_INCREF(self->_group_map);
    PyObject *retval = self->_group_map;
    return retval;
}

static int
emitmodule___MypycPlugin_set_group_map(mypyc___codegen___emitmodule___MypycPluginObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MypycPlugin' object attribute 'group_map' cannot be deleted");
        return -1;
    }
    if (self->_group_map != NULL) {
        CPy_DECREF(self->_group_map);
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
    self->_group_map = tmp;
    return 0;
}

static PyObject *
emitmodule___MypycPlugin_get_compiler_options(mypyc___codegen___emitmodule___MypycPluginObject *self, void *closure)
{
    if (unlikely(self->_compiler_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'compiler_options' of 'MypycPlugin' undefined");
        return NULL;
    }
    CPy_INCREF(self->_compiler_options);
    PyObject *retval = self->_compiler_options;
    return retval;
}

static int
emitmodule___MypycPlugin_set_compiler_options(mypyc___codegen___emitmodule___MypycPluginObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MypycPlugin' object attribute 'compiler_options' cannot be deleted");
        return -1;
    }
    if (self->_compiler_options != NULL) {
        CPy_DECREF(self->_compiler_options);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypyc___options___CompilerOptions))
        tmp = value;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_compiler_options = tmp;
    return 0;
}

static PyObject *
emitmodule___MypycPlugin_get_metastore(mypyc___codegen___emitmodule___MypycPluginObject *self, void *closure)
{
    if (unlikely(self->_metastore == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'metastore' of 'MypycPlugin' undefined");
        return NULL;
    }
    CPy_INCREF(self->_metastore);
    PyObject *retval = self->_metastore;
    return retval;
}

static int
emitmodule___MypycPlugin_set_metastore(mypyc___codegen___emitmodule___MypycPluginObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MypycPlugin' object attribute 'metastore' cannot be deleted");
        return -1;
    }
    if (self->_metastore != NULL) {
        CPy_DECREF(self->_metastore);
    }
    PyObject *tmp;
    if (likely((Py_TYPE(value) == CPyType_metastore___FilesystemMetadataStore) || (Py_TYPE(value) == CPyType_metastore___SqliteMetadataStore)))
        tmp = value;
    else {
        CPy_TypeError("mypy.metastore.MetadataStore", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_metastore = tmp;
    return 0;
}

static int
emitmodule___GroupGenerator_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *emitmodule___GroupGenerator_setup(PyTypeObject *type);
PyObject *CPyDef_emitmodule___GroupGenerator(PyObject *cpy_r_modules, PyObject *cpy_r_source_paths, PyObject *cpy_r_group_name, PyObject *cpy_r_group_map, PyObject *cpy_r_names, PyObject *cpy_r_compiler_options);

static PyObject *
emitmodule___GroupGenerator_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitmodule___GroupGenerator) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = emitmodule___GroupGenerator_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_emitmodule___GroupGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
emitmodule___GroupGenerator_traverse(mypyc___codegen___emitmodule___GroupGeneratorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_modules);
    Py_VISIT(self->_source_paths);
    Py_VISIT(self->_context);
    Py_VISIT(self->_names);
    Py_VISIT(self->_simple_inits);
    Py_VISIT(self->_group_name);
    Py_VISIT(self->_compiler_options);
    return 0;
}

static int
emitmodule___GroupGenerator_clear(mypyc___codegen___emitmodule___GroupGeneratorObject *self)
{
    Py_CLEAR(self->_modules);
    Py_CLEAR(self->_source_paths);
    Py_CLEAR(self->_context);
    Py_CLEAR(self->_names);
    Py_CLEAR(self->_simple_inits);
    Py_CLEAR(self->_group_name);
    Py_CLEAR(self->_compiler_options);
    return 0;
}

static void
emitmodule___GroupGenerator_dealloc(mypyc___codegen___emitmodule___GroupGeneratorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitmodule___GroupGenerator_dealloc)
    emitmodule___GroupGenerator_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitmodule___GroupGenerator_vtable[19];
static bool
CPyDef_emitmodule___GroupGenerator_trait_vtable_setup(void)
{
    CPyVTableItem emitmodule___GroupGenerator_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator_____init__,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___group_suffix,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___short_group_suffix,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___generate_c_for_modules,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___generate_literal_tables,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___generate_export_table,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___generate_shared_lib_init,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___generate_globals_init,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___generate_module_def,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___generate_top_level_call,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___toposort_declarations,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___declare_global,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___declare_internal_globals,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___module_internal_static_name,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___declare_module,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___declare_imports,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___declare_finals,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___final_definition,
        (CPyVTableItem)CPyDef_emitmodule___GroupGenerator___declare_static_pyobject,
    };
    memcpy(emitmodule___GroupGenerator_vtable, emitmodule___GroupGenerator_vtable_scratch, sizeof(emitmodule___GroupGenerator_vtable));
    return 1;
}

static PyObject *
emitmodule___GroupGenerator_get_modules(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure);
static int
emitmodule___GroupGenerator_set_modules(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitmodule___GroupGenerator_get_source_paths(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure);
static int
emitmodule___GroupGenerator_set_source_paths(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitmodule___GroupGenerator_get_context(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure);
static int
emitmodule___GroupGenerator_set_context(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitmodule___GroupGenerator_get_names(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure);
static int
emitmodule___GroupGenerator_set_names(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitmodule___GroupGenerator_get_simple_inits(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure);
static int
emitmodule___GroupGenerator_set_simple_inits(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitmodule___GroupGenerator_get_group_name(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure);
static int
emitmodule___GroupGenerator_set_group_name(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitmodule___GroupGenerator_get_use_shared_lib(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure);
static int
emitmodule___GroupGenerator_set_use_shared_lib(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitmodule___GroupGenerator_get_compiler_options(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure);
static int
emitmodule___GroupGenerator_set_compiler_options(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitmodule___GroupGenerator_get_multi_file(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure);
static int
emitmodule___GroupGenerator_set_multi_file(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitmodule___GroupGenerator_get_group_suffix(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure);
static PyObject *
emitmodule___GroupGenerator_get_short_group_suffix(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure);

static PyGetSetDef emitmodule___GroupGenerator_getseters[] = {
    {"modules",
     (getter)emitmodule___GroupGenerator_get_modules, (setter)emitmodule___GroupGenerator_set_modules,
     NULL, NULL},
    {"source_paths",
     (getter)emitmodule___GroupGenerator_get_source_paths, (setter)emitmodule___GroupGenerator_set_source_paths,
     NULL, NULL},
    {"context",
     (getter)emitmodule___GroupGenerator_get_context, (setter)emitmodule___GroupGenerator_set_context,
     NULL, NULL},
    {"names",
     (getter)emitmodule___GroupGenerator_get_names, (setter)emitmodule___GroupGenerator_set_names,
     NULL, NULL},
    {"simple_inits",
     (getter)emitmodule___GroupGenerator_get_simple_inits, (setter)emitmodule___GroupGenerator_set_simple_inits,
     NULL, NULL},
    {"group_name",
     (getter)emitmodule___GroupGenerator_get_group_name, (setter)emitmodule___GroupGenerator_set_group_name,
     NULL, NULL},
    {"use_shared_lib",
     (getter)emitmodule___GroupGenerator_get_use_shared_lib, (setter)emitmodule___GroupGenerator_set_use_shared_lib,
     NULL, NULL},
    {"compiler_options",
     (getter)emitmodule___GroupGenerator_get_compiler_options, (setter)emitmodule___GroupGenerator_set_compiler_options,
     NULL, NULL},
    {"multi_file",
     (getter)emitmodule___GroupGenerator_get_multi_file, (setter)emitmodule___GroupGenerator_set_multi_file,
     NULL, NULL},
    {"group_suffix",
     (getter)emitmodule___GroupGenerator_get_group_suffix,
    NULL, NULL, NULL},
    {"short_group_suffix",
     (getter)emitmodule___GroupGenerator_get_short_group_suffix,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef emitmodule___GroupGenerator_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"generate_c_for_modules",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___generate_c_for_modules,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"generate_literal_tables",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___generate_literal_tables,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"generate_export_table",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___generate_export_table,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"generate_shared_lib_init",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___generate_shared_lib_init,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"generate_globals_init",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___generate_globals_init,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"generate_module_def",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___generate_module_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"generate_top_level_call",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___generate_top_level_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"toposort_declarations",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___toposort_declarations,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"declare_global",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___declare_global,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"declare_internal_globals",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___declare_internal_globals,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"module_internal_static_name",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___module_internal_static_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"declare_module",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___declare_module,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"declare_imports",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___declare_imports,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"declare_finals",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___declare_finals,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"final_definition",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___final_definition,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"declare_static_pyobject",
     (PyCFunction)CPyPy_emitmodule___GroupGenerator___declare_static_pyobject,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitmodule___GroupGenerator_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "GroupGenerator",
    .tp_new = emitmodule___GroupGenerator_new,
    .tp_dealloc = (destructor)emitmodule___GroupGenerator_dealloc,
    .tp_traverse = (traverseproc)emitmodule___GroupGenerator_traverse,
    .tp_clear = (inquiry)emitmodule___GroupGenerator_clear,
    .tp_getset = emitmodule___GroupGenerator_getseters,
    .tp_methods = emitmodule___GroupGenerator_methods,
    .tp_init = emitmodule___GroupGenerator_init,
    .tp_basicsize = sizeof(mypyc___codegen___emitmodule___GroupGeneratorObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emitmodule___GroupGenerator_template = &CPyType_emitmodule___GroupGenerator_template_;

static PyObject *
emitmodule___GroupGenerator_setup(PyTypeObject *type)
{
    mypyc___codegen___emitmodule___GroupGeneratorObject *self;
    self = (mypyc___codegen___emitmodule___GroupGeneratorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitmodule___GroupGenerator_vtable;
    self->_use_shared_lib = 2;
    self->_multi_file = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_emitmodule___GroupGenerator(PyObject *cpy_r_modules, PyObject *cpy_r_source_paths, PyObject *cpy_r_group_name, PyObject *cpy_r_group_map, PyObject *cpy_r_names, PyObject *cpy_r_compiler_options)
{
    PyObject *self = emitmodule___GroupGenerator_setup(CPyType_emitmodule___GroupGenerator);
    if (self == NULL)
        return NULL;
    char res = CPyDef_emitmodule___GroupGenerator_____init__(self, cpy_r_modules, cpy_r_source_paths, cpy_r_group_name, cpy_r_group_map, cpy_r_names, cpy_r_compiler_options);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
emitmodule___GroupGenerator_get_modules(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure)
{
    if (unlikely(self->_modules == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'modules' of 'GroupGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_modules);
    PyObject *retval = self->_modules;
    return retval;
}

static int
emitmodule___GroupGenerator_set_modules(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GroupGenerator' object attribute 'modules' cannot be deleted");
        return -1;
    }
    if (self->_modules != NULL) {
        CPy_DECREF(self->_modules);
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
    self->_modules = tmp;
    return 0;
}

static PyObject *
emitmodule___GroupGenerator_get_source_paths(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure)
{
    if (unlikely(self->_source_paths == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'source_paths' of 'GroupGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_source_paths);
    PyObject *retval = self->_source_paths;
    return retval;
}

static int
emitmodule___GroupGenerator_set_source_paths(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GroupGenerator' object attribute 'source_paths' cannot be deleted");
        return -1;
    }
    if (self->_source_paths != NULL) {
        CPy_DECREF(self->_source_paths);
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
    self->_source_paths = tmp;
    return 0;
}

static PyObject *
emitmodule___GroupGenerator_get_context(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure)
{
    if (unlikely(self->_context == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'context' of 'GroupGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_context);
    PyObject *retval = self->_context;
    return retval;
}

static int
emitmodule___GroupGenerator_set_context(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GroupGenerator' object attribute 'context' cannot be deleted");
        return -1;
    }
    if (self->_context != NULL) {
        CPy_DECREF(self->_context);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_emit___EmitterContext))
        tmp = value;
    else {
        CPy_TypeError("mypyc.codegen.emit.EmitterContext", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_context = tmp;
    return 0;
}

static PyObject *
emitmodule___GroupGenerator_get_names(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure)
{
    if (unlikely(self->_names == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'names' of 'GroupGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_names);
    PyObject *retval = self->_names;
    return retval;
}

static int
emitmodule___GroupGenerator_set_names(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GroupGenerator' object attribute 'names' cannot be deleted");
        return -1;
    }
    if (self->_names != NULL) {
        CPy_DECREF(self->_names);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_namegen___NameGenerator))
        tmp = value;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_names = tmp;
    return 0;
}

static PyObject *
emitmodule___GroupGenerator_get_simple_inits(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure)
{
    if (unlikely(self->_simple_inits == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'simple_inits' of 'GroupGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_simple_inits);
    PyObject *retval = self->_simple_inits;
    return retval;
}

static int
emitmodule___GroupGenerator_set_simple_inits(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GroupGenerator' object attribute 'simple_inits' cannot be deleted");
        return -1;
    }
    if (self->_simple_inits != NULL) {
        CPy_DECREF(self->_simple_inits);
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
    self->_simple_inits = tmp;
    return 0;
}

static PyObject *
emitmodule___GroupGenerator_get_group_name(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure)
{
    if (unlikely(self->_group_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'group_name' of 'GroupGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_group_name);
    PyObject *retval = self->_group_name;
    return retval;
}

static int
emitmodule___GroupGenerator_set_group_name(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GroupGenerator' object attribute 'group_name' cannot be deleted");
        return -1;
    }
    if (self->_group_name != NULL) {
        CPy_DECREF(self->_group_name);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9508;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9508;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL9508: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_group_name = tmp;
    return 0;
}

static PyObject *
emitmodule___GroupGenerator_get_use_shared_lib(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure)
{
    PyObject *retval = self->_use_shared_lib ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
emitmodule___GroupGenerator_set_use_shared_lib(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GroupGenerator' object attribute 'use_shared_lib' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_use_shared_lib = tmp;
    return 0;
}

static PyObject *
emitmodule___GroupGenerator_get_compiler_options(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure)
{
    if (unlikely(self->_compiler_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'compiler_options' of 'GroupGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_compiler_options);
    PyObject *retval = self->_compiler_options;
    return retval;
}

static int
emitmodule___GroupGenerator_set_compiler_options(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GroupGenerator' object attribute 'compiler_options' cannot be deleted");
        return -1;
    }
    if (self->_compiler_options != NULL) {
        CPy_DECREF(self->_compiler_options);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypyc___options___CompilerOptions))
        tmp = value;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_compiler_options = tmp;
    return 0;
}

static PyObject *
emitmodule___GroupGenerator_get_multi_file(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure)
{
    PyObject *retval = self->_multi_file ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
emitmodule___GroupGenerator_set_multi_file(mypyc___codegen___emitmodule___GroupGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GroupGenerator' object attribute 'multi_file' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_multi_file = tmp;
    return 0;
}

static PyObject *
emitmodule___GroupGenerator_get_group_suffix(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure)
{
    return CPyDef_emitmodule___GroupGenerator___group_suffix((PyObject *) self);
}

static PyObject *
emitmodule___GroupGenerator_get_short_group_suffix(mypyc___codegen___emitmodule___GroupGeneratorObject *self, void *closure)
{
    return CPyDef_emitmodule___GroupGenerator___short_group_suffix((PyObject *) self);
}

static PyObject *emitmodule___toposort_declarations_GroupGenerator_env_setup(PyTypeObject *type);
PyObject *CPyDef_emitmodule___toposort_declarations_GroupGenerator_env(void);

static PyObject *
emitmodule___toposort_declarations_GroupGenerator_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitmodule___toposort_declarations_GroupGenerator_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emitmodule___toposort_declarations_GroupGenerator_env_setup(type);
}

static int
emitmodule___toposort_declarations_GroupGenerator_env_traverse(mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_marked_declarations);
    Py_VISIT(self->_result);
    Py_VISIT(self->__toposort_visit);
    Py_VISIT(self->_self);
    Py_VISIT(self->_k);
    Py_VISIT(self->_v);
    return 0;
}

static int
emitmodule___toposort_declarations_GroupGenerator_env_clear(mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_marked_declarations);
    Py_CLEAR(self->_result);
    Py_CLEAR(self->__toposort_visit);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_k);
    Py_CLEAR(self->_v);
    return 0;
}

static void
emitmodule___toposort_declarations_GroupGenerator_env_dealloc(mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitmodule___toposort_declarations_GroupGenerator_env_dealloc)
    emitmodule___toposort_declarations_GroupGenerator_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitmodule___toposort_declarations_GroupGenerator_env_vtable[1];
static bool
CPyDef_emitmodule___toposort_declarations_GroupGenerator_env_trait_vtable_setup(void)
{
    CPyVTableItem emitmodule___toposort_declarations_GroupGenerator_env_vtable_scratch[] = {
        NULL
    };
    memcpy(emitmodule___toposort_declarations_GroupGenerator_env_vtable, emitmodule___toposort_declarations_GroupGenerator_env_vtable_scratch, sizeof(emitmodule___toposort_declarations_GroupGenerator_env_vtable));
    return 1;
}

static PyMethodDef emitmodule___toposort_declarations_GroupGenerator_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitmodule___toposort_declarations_GroupGenerator_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "toposort_declarations_GroupGenerator_env",
    .tp_new = emitmodule___toposort_declarations_GroupGenerator_env_new,
    .tp_dealloc = (destructor)emitmodule___toposort_declarations_GroupGenerator_env_dealloc,
    .tp_traverse = (traverseproc)emitmodule___toposort_declarations_GroupGenerator_env_traverse,
    .tp_clear = (inquiry)emitmodule___toposort_declarations_GroupGenerator_env_clear,
    .tp_methods = emitmodule___toposort_declarations_GroupGenerator_env_methods,
    .tp_basicsize = sizeof(mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emitmodule___toposort_declarations_GroupGenerator_env_template = &CPyType_emitmodule___toposort_declarations_GroupGenerator_env_template_;

static PyObject *
emitmodule___toposort_declarations_GroupGenerator_env_setup(PyTypeObject *type)
{
    mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *self;
    self = (mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitmodule___toposort_declarations_GroupGenerator_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_emitmodule___toposort_declarations_GroupGenerator_env(void)
{
    PyObject *self = emitmodule___toposort_declarations_GroupGenerator_env_setup(CPyType_emitmodule___toposort_declarations_GroupGenerator_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_____get__(self, instance, owner);
}
PyMemberDef emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_setup(PyTypeObject *type);
PyObject *CPyDef_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj(void);

static PyObject *
emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_setup(type);
}

static int
emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_traverse(mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject))));
    return 0;
}

static int
emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_clear(mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject))));
    return 0;
}

static void
emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_dealloc(mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_dealloc)
    emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_vtable[2];
static bool
CPyDef_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_trait_vtable_setup(void)
{
    CPyVTableItem emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_____call__,
        (CPyVTableItem)CPyDef_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_____get__,
    };
    memcpy(emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_vtable, emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_vtable_scratch, sizeof(emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_vtable));
    return 1;
}

static PyMethodDef emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_toposort_visit_toposort_declarations_GroupGenerator_obj",
    .tp_new = emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_new,
    .tp_dealloc = (destructor)emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_dealloc,
    .tp_traverse = (traverseproc)emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_traverse,
    .tp_clear = (inquiry)emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_clear,
    .tp_methods = emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj,
    .tp_members = emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_members,
    .tp_basicsize = sizeof(mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject),
    .tp_weaklistoffset = sizeof(mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_template = &CPyType_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_template_;

static PyObject *
emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_setup(PyTypeObject *type)
{
    mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject *self;
    self = (mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_vtable;
    self->vectorcall = CPyPy_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj(void)
{
    PyObject *self = emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_setup(CPyType_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *emitmodule___toposort_env_setup(PyTypeObject *type);
PyObject *CPyDef_emitmodule___toposort_env(void);

static PyObject *
emitmodule___toposort_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitmodule___toposort_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emitmodule___toposort_env_setup(type);
}

static int
emitmodule___toposort_env_traverse(mypyc___codegen___emitmodule___toposort_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_deps);
    Py_VISIT(self->_result);
    Py_VISIT(self->_visited);
    Py_VISIT(self->_visit);
    return 0;
}

static int
emitmodule___toposort_env_clear(mypyc___codegen___emitmodule___toposort_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_deps);
    Py_CLEAR(self->_result);
    Py_CLEAR(self->_visited);
    Py_CLEAR(self->_visit);
    return 0;
}

static void
emitmodule___toposort_env_dealloc(mypyc___codegen___emitmodule___toposort_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitmodule___toposort_env_dealloc)
    emitmodule___toposort_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitmodule___toposort_env_vtable[1];
static bool
CPyDef_emitmodule___toposort_env_trait_vtable_setup(void)
{
    CPyVTableItem emitmodule___toposort_env_vtable_scratch[] = {
        NULL
    };
    memcpy(emitmodule___toposort_env_vtable, emitmodule___toposort_env_vtable_scratch, sizeof(emitmodule___toposort_env_vtable));
    return 1;
}

static PyMethodDef emitmodule___toposort_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitmodule___toposort_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "toposort_env",
    .tp_new = emitmodule___toposort_env_new,
    .tp_dealloc = (destructor)emitmodule___toposort_env_dealloc,
    .tp_traverse = (traverseproc)emitmodule___toposort_env_traverse,
    .tp_clear = (inquiry)emitmodule___toposort_env_clear,
    .tp_methods = emitmodule___toposort_env_methods,
    .tp_basicsize = sizeof(mypyc___codegen___emitmodule___toposort_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emitmodule___toposort_env_template = &CPyType_emitmodule___toposort_env_template_;

static PyObject *
emitmodule___toposort_env_setup(PyTypeObject *type)
{
    mypyc___codegen___emitmodule___toposort_envObject *self;
    self = (mypyc___codegen___emitmodule___toposort_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitmodule___toposort_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_emitmodule___toposort_env(void)
{
    PyObject *self = emitmodule___toposort_env_setup(CPyType_emitmodule___toposort_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__emitmodule___visit_toposort_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_emitmodule___visit_toposort_obj_____get__(self, instance, owner);
}
PyMemberDef emitmodule___visit_toposort_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___codegen___emitmodule___visit_toposort_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___codegen___emitmodule___visit_toposort_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *emitmodule___visit_toposort_obj_setup(PyTypeObject *type);
PyObject *CPyDef_emitmodule___visit_toposort_obj(void);

static PyObject *
emitmodule___visit_toposort_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitmodule___visit_toposort_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return emitmodule___visit_toposort_obj_setup(type);
}

static int
emitmodule___visit_toposort_obj_traverse(mypyc___codegen___emitmodule___visit_toposort_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitmodule___visit_toposort_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitmodule___visit_toposort_objObject))));
    return 0;
}

static int
emitmodule___visit_toposort_obj_clear(mypyc___codegen___emitmodule___visit_toposort_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___codegen___emitmodule___visit_toposort_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___codegen___emitmodule___visit_toposort_objObject))));
    return 0;
}

static void
emitmodule___visit_toposort_obj_dealloc(mypyc___codegen___emitmodule___visit_toposort_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitmodule___visit_toposort_obj_dealloc)
    emitmodule___visit_toposort_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitmodule___visit_toposort_obj_vtable[2];
static bool
CPyDef_emitmodule___visit_toposort_obj_trait_vtable_setup(void)
{
    CPyVTableItem emitmodule___visit_toposort_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emitmodule___visit_toposort_obj_____call__,
        (CPyVTableItem)CPyDef_emitmodule___visit_toposort_obj_____get__,
    };
    memcpy(emitmodule___visit_toposort_obj_vtable, emitmodule___visit_toposort_obj_vtable_scratch, sizeof(emitmodule___visit_toposort_obj_vtable));
    return 1;
}

static PyMethodDef emitmodule___visit_toposort_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_emitmodule___visit_toposort_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_emitmodule___visit_toposort_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitmodule___visit_toposort_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "visit_toposort_obj",
    .tp_new = emitmodule___visit_toposort_obj_new,
    .tp_dealloc = (destructor)emitmodule___visit_toposort_obj_dealloc,
    .tp_traverse = (traverseproc)emitmodule___visit_toposort_obj_traverse,
    .tp_clear = (inquiry)emitmodule___visit_toposort_obj_clear,
    .tp_methods = emitmodule___visit_toposort_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__emitmodule___visit_toposort_obj,
    .tp_members = emitmodule___visit_toposort_obj_members,
    .tp_basicsize = sizeof(mypyc___codegen___emitmodule___visit_toposort_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___codegen___emitmodule___visit_toposort_objObject),
    .tp_weaklistoffset = sizeof(mypyc___codegen___emitmodule___visit_toposort_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___codegen___emitmodule___visit_toposort_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_emitmodule___visit_toposort_obj_template = &CPyType_emitmodule___visit_toposort_obj_template_;

static PyObject *
emitmodule___visit_toposort_obj_setup(PyTypeObject *type)
{
    mypyc___codegen___emitmodule___visit_toposort_objObject *self;
    self = (mypyc___codegen___emitmodule___visit_toposort_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitmodule___visit_toposort_obj_vtable;
    self->vectorcall = CPyPy_emitmodule___visit_toposort_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_emitmodule___visit_toposort_obj(void)
{
    PyObject *self = emitmodule___visit_toposort_obj_setup(CPyType_emitmodule___visit_toposort_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef emitmodulemodule_methods[] = {
    {"parse_and_typecheck", (PyCFunction)CPyPy_emitmodule___parse_and_typecheck, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"compile_scc_to_ir", (PyCFunction)CPyPy_emitmodule___compile_scc_to_ir, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"compile_modules_to_ir", (PyCFunction)CPyPy_emitmodule___compile_modules_to_ir, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"compile_ir_to_c", (PyCFunction)CPyPy_emitmodule___compile_ir_to_c, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_ir_cache_name", (PyCFunction)CPyPy_emitmodule___get_ir_cache_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_state_ir_cache_name", (PyCFunction)CPyPy_emitmodule___get_state_ir_cache_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"write_cache", (PyCFunction)CPyPy_emitmodule___write_cache, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"load_scc_from_cache", (PyCFunction)CPyPy_emitmodule___load_scc_from_cache, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"compile_modules_to_c", (PyCFunction)CPyPy_emitmodule___compile_modules_to_c, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_function_declaration", (PyCFunction)CPyPy_emitmodule___generate_function_declaration, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"pointerize", (PyCFunction)CPyPy_emitmodule___pointerize, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"group_dir", (PyCFunction)CPyPy_emitmodule___group_dir, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"sort_classes", (PyCFunction)CPyPy_emitmodule___sort_classes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"toposort", (PyCFunction)CPyPy_emitmodule___toposort, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_fastcall_supported", (PyCFunction)CPyPy_emitmodule___is_fastcall_supported, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"collect_literals", (PyCFunction)CPyPy_emitmodule___collect_literals, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"c_string_array_initializer", (PyCFunction)CPyPy_emitmodule___c_string_array_initializer, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef emitmodulemodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.codegen.emitmodule",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    emitmodulemodule_methods
};

PyObject *CPyInit_mypyc___codegen___emitmodule(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___codegen___emitmodule_internal) {
        Py_INCREF(CPyModule_mypyc___codegen___emitmodule_internal);
        return CPyModule_mypyc___codegen___emitmodule_internal;
    }
    CPyModule_mypyc___codegen___emitmodule_internal = PyModule_Create(&emitmodulemodule);
    if (unlikely(CPyModule_mypyc___codegen___emitmodule_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___codegen___emitmodule_internal, "__name__");
    CPyStatic_emitmodule___globals = PyModule_GetDict(CPyModule_mypyc___codegen___emitmodule_internal);
    if (unlikely(CPyStatic_emitmodule___globals == NULL))
        goto fail;
    CPyType_emitmodule___toposort_declarations_GroupGenerator_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_emitmodule___toposort_declarations_GroupGenerator_env_template, NULL, modname);
    if (unlikely(!CPyType_emitmodule___toposort_declarations_GroupGenerator_env))
        goto fail;
    CPyType_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_template, NULL, modname);
    if (unlikely(!CPyType_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj))
        goto fail;
    CPyType_emitmodule___toposort_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_emitmodule___toposort_env_template, NULL, modname);
    if (unlikely(!CPyType_emitmodule___toposort_env))
        goto fail;
    CPyType_emitmodule___visit_toposort_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_emitmodule___visit_toposort_obj_template, NULL, modname);
    if (unlikely(!CPyType_emitmodule___visit_toposort_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_emitmodule_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___codegen___emitmodule_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___codegen___emitmodule_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_emitmodule___MarkedDeclaration);
    Py_CLEAR(CPyType_emitmodule___MypycPlugin);
    Py_CLEAR(CPyType_emitmodule___GroupGenerator);
    Py_CLEAR(CPyType_emitmodule___toposort_declarations_GroupGenerator_env);
    Py_CLEAR(CPyType_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj);
    Py_CLEAR(CPyType_emitmodule___toposort_env);
    Py_CLEAR(CPyType_emitmodule___visit_toposort_obj);
    return NULL;
}

char CPyDef_emitmodule___MarkedDeclaration_____init__(PyObject *cpy_r_self, PyObject *cpy_r_declaration, char cpy_r_mark) {
    CPy_INCREF(cpy_r_declaration);
    ((mypyc___codegen___emitmodule___MarkedDeclarationObject *)cpy_r_self)->_declaration = cpy_r_declaration;
    ((mypyc___codegen___emitmodule___MarkedDeclarationObject *)cpy_r_self)->_mark = 0;
    return 1;
}

PyObject *CPyPy_emitmodule___MarkedDeclaration_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"declaration", "mark", 0};
    PyObject *obj_declaration;
    PyObject *obj_mark;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_declaration, &obj_mark)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___MarkedDeclaration))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.MarkedDeclaration", obj_self); 
        goto fail;
    }
    PyObject *arg_declaration;
    if (likely(Py_TYPE(obj_declaration) == CPyType_emit___HeaderDeclaration))
        arg_declaration = obj_declaration;
    else {
        CPy_TypeError("mypyc.codegen.emit.HeaderDeclaration", obj_declaration); 
        goto fail;
    }
    char arg_mark;
    if (unlikely(!PyBool_Check(obj_mark))) {
        CPy_TypeError("bool", obj_mark); goto fail;
    } else
        arg_mark = obj_mark == Py_True;
    char retval = CPyDef_emitmodule___MarkedDeclaration_____init__(arg_self, arg_declaration, arg_mark);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__init__", 94, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___MypycPlugin_____init__(PyObject *cpy_r_self, PyObject *cpy_r_options, PyObject *cpy_r_compiler_options, PyObject *cpy_r_groups) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_sources;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_name;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_modules;
    CPyTagged cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_id;
    tuple_T2OO cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    cpy_r_r0 = CPyDef_plugin___Plugin_____init__(cpy_r_self, cpy_r_options);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__init__", 114, CPyStatic_emitmodule___globals);
        goto CPyL22;
    }
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__init__", 115, CPyStatic_emitmodule___globals);
        goto CPyL22;
    }
    ((mypyc___codegen___emitmodule___MypycPluginObject *)cpy_r_self)->_group_map = cpy_r_r1;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_groups)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL20;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_groups, cpy_r_r2);
    PyObject *__tmp9509;
    if (unlikely(!(PyTuple_Check(cpy_r_r7) && PyTuple_GET_SIZE(cpy_r_r7) == 2))) {
        __tmp9509 = NULL;
        goto __LL9510;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r7, 0))))
        __tmp9509 = PyTuple_GET_ITEM(cpy_r_r7, 0);
    else {
        __tmp9509 = NULL;
    }
    if (__tmp9509 == NULL) goto __LL9510;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r7, 1)))
        __tmp9509 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp9509 = NULL;
    }
    if (__tmp9509 != NULL) goto __LL9511;
    if (PyTuple_GET_ITEM(cpy_r_r7, 1) == Py_None)
        __tmp9509 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp9509 = NULL;
    }
    if (__tmp9509 != NULL) goto __LL9511;
    __tmp9509 = NULL;
__LL9511: ;
    if (__tmp9509 == NULL) goto __LL9510;
    __tmp9509 = cpy_r_r7;
__LL9510: ;
    if (unlikely(__tmp9509 == NULL)) {
        CPy_TypeError("tuple[list, union[str, None]]", cpy_r_r7); cpy_r_r8 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9512 = PyTuple_GET_ITEM(cpy_r_r7, 0);
        CPy_INCREF(__tmp9512);
        PyObject *__tmp9513;
        if (likely(PyList_Check(__tmp9512)))
            __tmp9513 = __tmp9512;
        else {
            CPy_TypeError("list", __tmp9512); 
            __tmp9513 = NULL;
        }
        cpy_r_r8.f0 = __tmp9513;
        PyObject *__tmp9514 = PyTuple_GET_ITEM(cpy_r_r7, 1);
        CPy_INCREF(__tmp9514);
        PyObject *__tmp9515;
        if (PyUnicode_Check(__tmp9514))
            __tmp9515 = __tmp9514;
        else {
            __tmp9515 = NULL;
        }
        if (__tmp9515 != NULL) goto __LL9516;
        if (__tmp9514 == Py_None)
            __tmp9515 = __tmp9514;
        else {
            __tmp9515 = NULL;
        }
        if (__tmp9515 != NULL) goto __LL9516;
        CPy_TypeError("str or None", __tmp9514); 
        __tmp9515 = NULL;
__LL9516: ;
        cpy_r_r8.f1 = __tmp9515;
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__init__", 116, CPyStatic_emitmodule___globals);
        goto CPyL22;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r9);
    cpy_r_sources = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f1;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r8.f1);
    cpy_r_name = cpy_r_r10;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = PyList_New(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__init__", 117, CPyStatic_emitmodule___globals);
        goto CPyL23;
    }
    cpy_r_r14 = 0;
CPyL7: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL24;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r14);
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_modulefinder___BuildSource))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "__init__", 117, CPyStatic_emitmodule___globals, "mypy.modulefinder.BuildSource", cpy_r_r19);
        goto CPyL25;
    }
    cpy_r_source = cpy_r_r20;
    cpy_r_r21 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_module;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_source);
    cpy_r_r22 = CPyList_SetItemUnsafe(cpy_r_r13, cpy_r_r14, cpy_r_r21);
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__init__", 117, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    cpy_r_r23 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r23;
    goto CPyL7;
CPyL11: ;
    cpy_r_r24 = CPyModule_builtins;
    cpy_r_r25 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__init__", 117, CPyStatic_emitmodule___globals);
        goto CPyL26;
    }
    PyObject *cpy_r_r27[1] = {cpy_r_r13};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 1, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__init__", 117, CPyStatic_emitmodule___globals);
        goto CPyL26;
    }
    CPy_DECREF(cpy_r_r13);
    if (likely(PyList_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "__init__", 117, CPyStatic_emitmodule___globals, "list", cpy_r_r29);
        goto CPyL27;
    }
    cpy_r_modules = cpy_r_r30;
    cpy_r_r31 = 0;
CPyL15: ;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = (Py_ssize_t)cpy_r_r31 < (Py_ssize_t)cpy_r_r34;
    if (!cpy_r_r35) goto CPyL28;
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_modules, cpy_r_r31);
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "__init__", 118, CPyStatic_emitmodule___globals, "str", cpy_r_r36);
        goto CPyL29;
    }
    cpy_r_id = cpy_r_r37;
    cpy_r_r38.f0 = cpy_r_name;
    cpy_r_r38.f1 = cpy_r_modules;
    CPy_INCREF(cpy_r_r38.f0);
    CPy_INCREF(cpy_r_r38.f1);
    cpy_r_r39 = ((mypyc___codegen___emitmodule___MypycPluginObject *)cpy_r_self)->_group_map;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = PyTuple_New(2);
    if (unlikely(cpy_r_r40 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9517 = cpy_r_r38.f0;
    PyTuple_SET_ITEM(cpy_r_r40, 0, __tmp9517);
    PyObject *__tmp9518 = cpy_r_r38.f1;
    PyTuple_SET_ITEM(cpy_r_r40, 1, __tmp9518);
    cpy_r_r41 = CPyDict_SetItem(cpy_r_r39, cpy_r_id, cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__init__", 119, CPyStatic_emitmodule___globals);
        goto CPyL29;
    }
    cpy_r_r43 = cpy_r_r31 + 2;
    cpy_r_r31 = cpy_r_r43;
    goto CPyL15;
CPyL19: ;
    cpy_r_r44 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r44;
    goto CPyL3;
CPyL20: ;
    CPy_INCREF(cpy_r_compiler_options);
    ((mypyc___codegen___emitmodule___MypycPluginObject *)cpy_r_self)->_compiler_options = cpy_r_compiler_options;
    cpy_r_r45 = CPyDef_mypy___build___create_metastore(cpy_r_options);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__init__", 122, CPyStatic_emitmodule___globals);
        goto CPyL22;
    }
    ((mypyc___codegen___emitmodule___MypycPluginObject *)cpy_r_self)->_metastore = cpy_r_r45;
    return 1;
CPyL22: ;
    cpy_r_r46 = 2;
    return cpy_r_r46;
CPyL23: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_name);
    goto CPyL22;
CPyL24: ;
    CPy_DECREF(cpy_r_sources);
    goto CPyL11;
CPyL25: ;
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r13);
    goto CPyL22;
CPyL26: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r13);
    goto CPyL22;
CPyL27: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL22;
CPyL28: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_modules);
    goto CPyL19;
CPyL29: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_modules);
    goto CPyL22;
}

PyObject *CPyPy_emitmodule___MypycPlugin_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"options", "compiler_options", "groups", 0};
    PyObject *obj_options;
    PyObject *obj_compiler_options;
    PyObject *obj_groups;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO", "__init__", kwlist, &obj_options, &obj_compiler_options, &obj_groups)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___MypycPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.MypycPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_compiler_options;
    if (likely(Py_TYPE(obj_compiler_options) == CPyType_mypyc___options___CompilerOptions))
        arg_compiler_options = obj_compiler_options;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", obj_compiler_options); 
        goto fail;
    }
    PyObject *arg_groups;
    if (likely(PyList_Check(obj_groups)))
        arg_groups = obj_groups;
    else {
        CPy_TypeError("list", obj_groups); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___MypycPlugin_____init__(arg_self, arg_options, arg_compiler_options, arg_groups);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__init__", 111, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___MypycPlugin___report_config_data(PyObject *cpy_r_self, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_contents;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_id;
    PyObject *cpy_r_path;
    char cpy_r_is_check;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    tuple_T2OO cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    tuple_T3OOO cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_meta_path;
    PyObject *cpy_r_r23;
    PyObject *cpy_r__;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_ir_path;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_meta_json;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_ir_json;
    tuple_T3OOO cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_ir_data;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_hash;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r95;
    PyObject **cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    tuple_T3OOO cpy_r_r100;
    tuple_T3OOO cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject **cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    tuple_T3OOO cpy_r_r112;
    tuple_T3OOO cpy_r_r113;
    tuple_T3OOO cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject **cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    tuple_T3OOO cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_real_hash;
    PyObject *cpy_r_r129;
    int32_t cpy_r_r130;
    char cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    tuple_T2OO cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    cpy_r_r0 = NULL;
    cpy_r_contents = cpy_r_r0;
    cpy_r_r1 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 130, CPyStatic_emitmodule___globals);
        goto CPyL104;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 130, CPyStatic_emitmodule___globals, "str", cpy_r_r1);
        goto CPyL104;
    }
    cpy_r_r3 = cpy_r_r2;
    cpy_r_r4 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 130, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 130, CPyStatic_emitmodule___globals, "str", cpy_r_r4);
        goto CPyL105;
    }
    cpy_r_r6 = cpy_r_r5;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 130, CPyStatic_emitmodule___globals);
        goto CPyL106;
    }
    if (unlikely(!PyBool_Check(cpy_r_r7))) {
        CPy_TypeError("bool", cpy_r_r7); cpy_r_r8 = 2;
    } else
        cpy_r_r8 = cpy_r_r7 == Py_True;
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 130, CPyStatic_emitmodule___globals);
        goto CPyL106;
    }
    cpy_r_r9 = cpy_r_r8;
    cpy_r_id = cpy_r_r3;
    cpy_r_path = cpy_r_r6;
    cpy_r_is_check = cpy_r_r9;
    cpy_r_r10 = ((mypyc___codegen___emitmodule___MypycPluginObject *)cpy_r_self)->_group_map;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = PyDict_Contains(cpy_r_r10, cpy_r_id);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 132, CPyStatic_emitmodule___globals);
        goto CPyL107;
    }
    cpy_r_r13 = cpy_r_r11;
    cpy_r_r14 = cpy_r_r13 ^ 1;
    if (cpy_r_r14) {
        goto CPyL108;
    } else
        goto CPyL9;
CPyL8: ;
    cpy_r_r15 = Py_None;
    CPy_INCREF(cpy_r_r15);
    return cpy_r_r15;
CPyL9: ;
    if (cpy_r_is_check) {
        goto CPyL13;
    } else
        goto CPyL109;
CPyL10: ;
    cpy_r_r16 = ((mypyc___codegen___emitmodule___MypycPluginObject *)cpy_r_self)->_group_map;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r16, cpy_r_id);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_id);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 137, CPyStatic_emitmodule___globals);
        goto CPyL103;
    }
    PyObject *__tmp9519;
    if (unlikely(!(PyTuple_Check(cpy_r_r17) && PyTuple_GET_SIZE(cpy_r_r17) == 2))) {
        __tmp9519 = NULL;
        goto __LL9520;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r17, 0)))
        __tmp9519 = PyTuple_GET_ITEM(cpy_r_r17, 0);
    else {
        __tmp9519 = NULL;
    }
    if (__tmp9519 != NULL) goto __LL9521;
    if (PyTuple_GET_ITEM(cpy_r_r17, 0) == Py_None)
        __tmp9519 = PyTuple_GET_ITEM(cpy_r_r17, 0);
    else {
        __tmp9519 = NULL;
    }
    if (__tmp9519 != NULL) goto __LL9521;
    __tmp9519 = NULL;
__LL9521: ;
    if (__tmp9519 == NULL) goto __LL9520;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r17, 1))))
        __tmp9519 = PyTuple_GET_ITEM(cpy_r_r17, 1);
    else {
        __tmp9519 = NULL;
    }
    if (__tmp9519 == NULL) goto __LL9520;
    __tmp9519 = cpy_r_r17;
__LL9520: ;
    if (unlikely(__tmp9519 == NULL)) {
        CPy_TypeError("tuple[union[str, None], list]", cpy_r_r17); cpy_r_r18 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9522 = PyTuple_GET_ITEM(cpy_r_r17, 0);
        CPy_INCREF(__tmp9522);
        PyObject *__tmp9523;
        if (PyUnicode_Check(__tmp9522))
            __tmp9523 = __tmp9522;
        else {
            __tmp9523 = NULL;
        }
        if (__tmp9523 != NULL) goto __LL9524;
        if (__tmp9522 == Py_None)
            __tmp9523 = __tmp9522;
        else {
            __tmp9523 = NULL;
        }
        if (__tmp9523 != NULL) goto __LL9524;
        CPy_TypeError("str or None", __tmp9522); 
        __tmp9523 = NULL;
__LL9524: ;
        cpy_r_r18.f0 = __tmp9523;
        PyObject *__tmp9525 = PyTuple_GET_ITEM(cpy_r_r17, 1);
        CPy_INCREF(__tmp9525);
        PyObject *__tmp9526;
        if (likely(PyList_Check(__tmp9525)))
            __tmp9526 = __tmp9525;
        else {
            CPy_TypeError("list", __tmp9525); 
            __tmp9526 = NULL;
        }
        cpy_r_r18.f1 = __tmp9526;
    }
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 137, CPyStatic_emitmodule___globals);
        goto CPyL103;
    }
    cpy_r_r19 = PyTuple_New(2);
    if (unlikely(cpy_r_r19 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9527 = cpy_r_r18.f0;
    PyTuple_SET_ITEM(cpy_r_r19, 0, __tmp9527);
    PyObject *__tmp9528 = cpy_r_r18.f1;
    PyTuple_SET_ITEM(cpy_r_r19, 1, __tmp9528);
    return cpy_r_r19;
CPyL13: ;
    cpy_r_r20 = ((mypyc___codegen___emitmodule___MypycPluginObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "report_config_data", "MypycPlugin", "options", 140, CPyStatic_emitmodule___globals);
        goto CPyL107;
    }
    CPy_INCREF(cpy_r_r20);
CPyL14: ;
    cpy_r_r21 = CPyDef_mypy___build___get_cache_names(cpy_r_id, cpy_r_path, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 140, CPyStatic_emitmodule___globals);
        goto CPyL107;
    }
    cpy_r_r22 = cpy_r_r21.f0;
    CPy_INCREF(cpy_r_r22);
    cpy_r_meta_path = cpy_r_r22;
    cpy_r_r23 = cpy_r_r21.f1;
    CPy_INCREF(cpy_r_r23);
    cpy_r__ = cpy_r_r23;
    CPy_DECREF(cpy_r__);
    cpy_r_r24 = cpy_r_r21.f2;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r21.f0);
    CPy_DECREF(cpy_r_r21.f1);
    CPy_DECREF(cpy_r_r21.f2);
    cpy_r__ = cpy_r_r24;
    CPy_DECREF(cpy_r__);
    cpy_r_r25 = ((mypyc___codegen___emitmodule___MypycPluginObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "report_config_data", "MypycPlugin", "options", 141, CPyStatic_emitmodule___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r25);
CPyL16: ;
    cpy_r_r26 = CPyDef_emitmodule___get_ir_cache_name(cpy_r_id, cpy_r_path, cpy_r_r25);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 141, CPyStatic_emitmodule___globals);
        goto CPyL111;
    }
    cpy_r_ir_path = cpy_r_r26;
    cpy_r_r27 = ((mypyc___codegen___emitmodule___MypycPluginObject *)cpy_r_self)->_metastore;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPY_GET_METHOD(cpy_r_r27, CPyType_metastore___MetadataStore, 1, mypy___metastore___MetadataStoreObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r27, cpy_r_meta_path); /* read */
    CPy_DECREF(cpy_r_meta_path);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 143, CPyStatic_emitmodule___globals);
        goto CPyL112;
    }
    cpy_r_meta_json = cpy_r_r28;
    cpy_r_r29 = ((mypyc___codegen___emitmodule___MypycPluginObject *)cpy_r_self)->_metastore;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPY_GET_METHOD(cpy_r_r29, CPyType_metastore___MetadataStore, 1, mypy___metastore___MetadataStoreObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r29, cpy_r_ir_path); /* read */
    CPy_DECREF(cpy_r_ir_path);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 144, CPyStatic_emitmodule___globals);
        goto CPyL113;
    }
    cpy_r_ir_json = cpy_r_r30;
    goto CPyL28;
CPyL21: ;
    cpy_r_r31 = CPy_CatchError();
    cpy_r_r32 = CPyModule_builtins;
    cpy_r_r33 = CPyStatics[269]; /* 'FileNotFoundError' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 145, CPyStatic_emitmodule___globals);
        goto CPyL26;
    }
    cpy_r_r35 = CPy_ExceptionMatches(cpy_r_r34);
    CPy_DecRef(cpy_r_r34);
    if (!cpy_r_r35) goto CPyL24;
    cpy_r_r36 = Py_None;
    CPy_RestoreExcInfo(cpy_r_r31);
    CPy_DecRef(cpy_r_r31.f0);
    CPy_DecRef(cpy_r_r31.f1);
    CPy_DecRef(cpy_r_r31.f2);
    CPy_INCREF(cpy_r_r36);
    return cpy_r_r36;
CPyL24: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL26;
    } else
        goto CPyL114;
CPyL25: ;
    CPy_Unreachable();
CPyL26: ;
    CPy_RestoreExcInfo(cpy_r_r31);
    CPy_DecRef(cpy_r_r31.f0);
    CPy_DecRef(cpy_r_r31.f1);
    CPy_DecRef(cpy_r_r31.f2);
    cpy_r_r37 = CPy_KeepPropagating();
    if (!cpy_r_r37) goto CPyL103;
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r38 = CPyModule_json;
    cpy_r_r39 = CPyStatics[234]; /* 'loads' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 151, CPyStatic_emitmodule___globals);
        goto CPyL115;
    }
    PyObject *cpy_r_r41[1] = {cpy_r_ir_json};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r40, cpy_r_r42, 1, 0);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 151, CPyStatic_emitmodule___globals);
        goto CPyL115;
    }
    CPy_DECREF(cpy_r_ir_json);
    cpy_r_ir_data = cpy_r_r43;
    cpy_r_r44 = CPyDef_mypy___build___compute_hash(cpy_r_meta_json);
    CPy_DECREF(cpy_r_meta_json);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 154, CPyStatic_emitmodule___globals);
        goto CPyL116;
    }
    cpy_r_r45 = CPyStatics[7416]; /* 'meta_hash' */
    cpy_r_r46 = PyObject_GetItem(cpy_r_ir_data, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 154, CPyStatic_emitmodule___globals);
        goto CPyL117;
    }
    cpy_r_r47 = PyObject_RichCompare(cpy_r_r44, cpy_r_r46, 3);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 154, CPyStatic_emitmodule___globals);
        goto CPyL116;
    }
    cpy_r_r48 = PyObject_IsTrue(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 154, CPyStatic_emitmodule___globals);
        goto CPyL116;
    }
    cpy_r_r50 = cpy_r_r48;
    if (cpy_r_r50) {
        goto CPyL118;
    } else
        goto CPyL36;
CPyL35: ;
    cpy_r_r51 = Py_None;
    CPy_INCREF(cpy_r_r51);
    return cpy_r_r51;
CPyL36: ;
    cpy_r_r52 = CPyStatics[7417]; /* 'src_hashes' */
    cpy_r_r53 = PyObject_GetItem(cpy_r_ir_data, cpy_r_r52);
    CPy_DECREF(cpy_r_ir_data);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 161, CPyStatic_emitmodule___globals);
        goto CPyL119;
    }
    cpy_r_r54 = CPyStatics[219]; /* 'items' */
    PyObject *cpy_r_r55[1] = {cpy_r_r53};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = PyObject_VectorcallMethod(cpy_r_r54, cpy_r_r56, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 161, CPyStatic_emitmodule___globals);
        goto CPyL120;
    }
    CPy_DECREF(cpy_r_r53);
    cpy_r_r58 = PyObject_GetIter(cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 161, CPyStatic_emitmodule___globals);
        goto CPyL119;
    }
CPyL39: ;
    cpy_r_r59 = PyIter_Next(cpy_r_r58);
    if (cpy_r_r59 == NULL) goto CPyL121;
    cpy_r_r60 = PyObject_GetIter(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 161, CPyStatic_emitmodule___globals);
        goto CPyL122;
    }
    cpy_r_r61 = PyIter_Next(cpy_r_r60);
    if (cpy_r_r61 == NULL) {
        goto CPyL123;
    } else
        goto CPyL44;
CPyL42: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r62 = 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 161, CPyStatic_emitmodule___globals);
        goto CPyL103;
    }
    CPy_Unreachable();
CPyL44: ;
    if (likely(PyUnicode_Check(cpy_r_r61)))
        cpy_r_r63 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 161, CPyStatic_emitmodule___globals, "str", cpy_r_r61);
        goto CPyL124;
    }
    cpy_r_path = cpy_r_r63;
    cpy_r_r64 = PyIter_Next(cpy_r_r60);
    if (cpy_r_r64 == NULL) {
        goto CPyL125;
    } else
        goto CPyL48;
CPyL46: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r65 = 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 161, CPyStatic_emitmodule___globals);
        goto CPyL103;
    }
    CPy_Unreachable();
CPyL48: ;
    cpy_r_hash = cpy_r_r64;
    cpy_r_r66 = PyIter_Next(cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (cpy_r_r66 == NULL) {
        goto CPyL51;
    } else
        goto CPyL126;
CPyL49: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r67 = 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 161, CPyStatic_emitmodule___globals);
        goto CPyL103;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r68 = ((mypyc___codegen___emitmodule___MypycPluginObject *)cpy_r_self)->_compiler_options;
    cpy_r_r69 = ((mypyc___options___CompilerOptionsObject *)cpy_r_r68)->_target_dir;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r70 = CPyModule_os;
    cpy_r_r71 = CPyStatics[142]; /* 'path' */
    cpy_r_r72 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 163, CPyStatic_emitmodule___globals);
        goto CPyL127;
    }
    cpy_r_r73 = CPyStatics[175]; /* 'join' */
    cpy_r_r74 = CPyObject_GetAttr(cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 163, CPyStatic_emitmodule___globals);
        goto CPyL127;
    }
    PyObject *cpy_r_r75[2] = {cpy_r_r69, cpy_r_path};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = _PyObject_Vectorcall(cpy_r_r74, cpy_r_r76, 2, 0);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 163, CPyStatic_emitmodule___globals);
        goto CPyL127;
    }
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_path);
    if (likely(PyUnicode_Check(cpy_r_r77)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 163, CPyStatic_emitmodule___globals, "str", cpy_r_r77);
        goto CPyL128;
    }
    cpy_r_r79 = CPyStatics[198]; /* 'rb' */
    cpy_r_r80 = CPyModule_builtins;
    cpy_r_r81 = CPyStatics[199]; /* 'open' */
    cpy_r_r82 = CPyObject_GetAttr(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 163, CPyStatic_emitmodule___globals);
        goto CPyL129;
    }
    PyObject *cpy_r_r83[2] = {cpy_r_r78, cpy_r_r79};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = _PyObject_Vectorcall(cpy_r_r82, cpy_r_r84, 2, 0);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 163, CPyStatic_emitmodule___globals);
        goto CPyL129;
    }
    CPy_DECREF(cpy_r_r78);
    cpy_r_r86 = PyObject_Type(cpy_r_r85);
    cpy_r_r87 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r88 = CPyObject_GetAttr(cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 163, CPyStatic_emitmodule___globals);
        goto CPyL130;
    }
    cpy_r_r89 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r90 = CPyObject_GetAttr(cpy_r_r86, cpy_r_r89);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 163, CPyStatic_emitmodule___globals);
        goto CPyL131;
    }
    PyObject *cpy_r_r91[1] = {cpy_r_r85};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = _PyObject_Vectorcall(cpy_r_r90, cpy_r_r92, 1, 0);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 163, CPyStatic_emitmodule___globals);
        goto CPyL131;
    }
    cpy_r_r94 = 1;
    cpy_r_f = cpy_r_r93;
    cpy_r_r95 = CPyStatics[141]; /* 'read' */
    PyObject *cpy_r_r96[1] = {cpy_r_f};
    cpy_r_r97 = (PyObject **)&cpy_r_r96;
    cpy_r_r98 = PyObject_VectorcallMethod(cpy_r_r95, cpy_r_r97, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 164, CPyStatic_emitmodule___globals);
        goto CPyL132;
    }
    CPy_DECREF(cpy_r_f);
    if (likely(PyBytes_Check(cpy_r_r98) || PyByteArray_Check(cpy_r_r98)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeError("bytes", cpy_r_r98); 
        cpy_r_r99 = NULL;
    }
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 164, CPyStatic_emitmodule___globals);
        goto CPyL64;
    } else
        goto CPyL133;
CPyL63: ;
    cpy_r_contents = cpy_r_r99;
    goto CPyL72;
CPyL64: ;
    cpy_r_r100 = CPy_CatchError();
    cpy_r_r94 = 0;
    cpy_r_r101 = CPy_GetExcInfo();
    cpy_r_r102 = cpy_r_r101.f0;
    CPy_INCREF(cpy_r_r102);
    cpy_r_r103 = cpy_r_r101.f1;
    CPy_INCREF(cpy_r_r103);
    cpy_r_r104 = cpy_r_r101.f2;
    CPy_INCREF(cpy_r_r104);
    CPy_DecRef(cpy_r_r101.f0);
    CPy_DecRef(cpy_r_r101.f1);
    CPy_DecRef(cpy_r_r101.f2);
    PyObject *cpy_r_r105[4] = {cpy_r_r85, cpy_r_r102, cpy_r_r103, cpy_r_r104};
    cpy_r_r106 = (PyObject **)&cpy_r_r105;
    cpy_r_r107 = _PyObject_Vectorcall(cpy_r_r88, cpy_r_r106, 4, 0);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 163, CPyStatic_emitmodule___globals);
        goto CPyL134;
    }
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r104);
    cpy_r_r108 = PyObject_IsTrue(cpy_r_r107);
    CPy_DecRef(cpy_r_r107);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 163, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r110 = cpy_r_r108;
    if (cpy_r_r110) goto CPyL69;
    CPy_Reraise();
    if (!0) {
        goto CPyL70;
    } else
        goto CPyL135;
CPyL68: ;
    CPy_Unreachable();
CPyL69: ;
    CPy_RestoreExcInfo(cpy_r_r100);
    CPy_DecRef(cpy_r_r100.f0);
    CPy_DecRef(cpy_r_r100.f1);
    CPy_DecRef(cpy_r_r100.f2);
    goto CPyL72;
CPyL70: ;
    CPy_RestoreExcInfo(cpy_r_r100);
    CPy_DecRef(cpy_r_r100.f0);
    CPy_DecRef(cpy_r_r100.f1);
    CPy_DecRef(cpy_r_r100.f2);
    cpy_r_r111 = CPy_KeepPropagating();
    if (!cpy_r_r111) {
        goto CPyL73;
    } else
        goto CPyL136;
CPyL71: ;
    CPy_Unreachable();
CPyL72: ;
    tuple_T3OOO __tmp9529 = { NULL, NULL, NULL };
    cpy_r_r112 = __tmp9529;
    cpy_r_r113 = cpy_r_r112;
    goto CPyL74;
CPyL73: ;
    cpy_r_r114 = CPy_CatchError();
    cpy_r_r113 = cpy_r_r114;
CPyL74: ;
    if (!cpy_r_r94) goto CPyL137;
    cpy_r_r115 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r116[4] = {cpy_r_r85, cpy_r_r115, cpy_r_r115, cpy_r_r115};
    cpy_r_r117 = (PyObject **)&cpy_r_r116;
    cpy_r_r118 = _PyObject_Vectorcall(cpy_r_r88, cpy_r_r117, 4, 0);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 163, CPyStatic_emitmodule___globals);
        goto CPyL138;
    } else
        goto CPyL139;
CPyL76: ;
    CPy_DECREF(cpy_r_r85);
CPyL77: ;
    if (cpy_r_r113.f0 == NULL) {
        goto CPyL91;
    } else
        goto CPyL140;
CPyL78: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL80;
    } else
        goto CPyL141;
CPyL79: ;
    CPy_Unreachable();
CPyL80: ;
    if (cpy_r_r113.f0 == NULL) goto CPyL82;
    CPy_RestoreExcInfo(cpy_r_r113);
    CPy_XDECREF(cpy_r_r113.f0);
    CPy_XDECREF(cpy_r_r113.f1);
    CPy_XDECREF(cpy_r_r113.f2);
CPyL82: ;
    cpy_r_r119 = CPy_KeepPropagating();
    if (!cpy_r_r119) goto CPyL84;
    CPy_Unreachable();
CPyL84: ;
    cpy_r_r120 = CPy_CatchError();
    cpy_r_r121 = CPyModule_builtins;
    cpy_r_r122 = CPyStatics[269]; /* 'FileNotFoundError' */
    cpy_r_r123 = CPyObject_GetAttr(cpy_r_r121, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 165, CPyStatic_emitmodule___globals);
        goto CPyL89;
    }
    cpy_r_r124 = CPy_ExceptionMatches(cpy_r_r123);
    CPy_DECREF(cpy_r_r123);
    if (!cpy_r_r124) goto CPyL87;
    cpy_r_r125 = Py_None;
    CPy_RestoreExcInfo(cpy_r_r120);
    CPy_DECREF(cpy_r_r120.f0);
    CPy_DECREF(cpy_r_r120.f1);
    CPy_DECREF(cpy_r_r120.f2);
    CPy_INCREF(cpy_r_r125);
    return cpy_r_r125;
CPyL87: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL89;
    } else
        goto CPyL142;
CPyL88: ;
    CPy_Unreachable();
CPyL89: ;
    CPy_RestoreExcInfo(cpy_r_r120);
    CPy_DECREF(cpy_r_r120.f0);
    CPy_DECREF(cpy_r_r120.f1);
    CPy_DECREF(cpy_r_r120.f2);
    cpy_r_r126 = CPy_KeepPropagating();
    if (!cpy_r_r126) goto CPyL103;
    CPy_Unreachable();
CPyL91: ;
    if (cpy_r_contents == NULL) {
        goto CPyL143;
    } else
        goto CPyL94;
CPyL92: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"contents\" referenced before assignment");
    cpy_r_r127 = 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 167, CPyStatic_emitmodule___globals);
        goto CPyL103;
    }
    CPy_Unreachable();
CPyL94: ;
    cpy_r_r128 = CPyDef_mypy___util___hash_digest(cpy_r_contents);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 167, CPyStatic_emitmodule___globals);
        goto CPyL144;
    }
    cpy_r_real_hash = cpy_r_r128;
    cpy_r_r129 = PyObject_RichCompare(cpy_r_hash, cpy_r_real_hash, 3);
    CPy_DECREF(cpy_r_hash);
    CPy_DECREF(cpy_r_real_hash);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 168, CPyStatic_emitmodule___globals);
        goto CPyL122;
    }
    cpy_r_r130 = PyObject_IsTrue(cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    cpy_r_r131 = cpy_r_r130 >= 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 168, CPyStatic_emitmodule___globals);
        goto CPyL122;
    }
    cpy_r_r132 = cpy_r_r130;
    if (cpy_r_r132) {
        goto CPyL145;
    } else
        goto CPyL39;
CPyL98: ;
    cpy_r_r133 = Py_None;
    CPy_INCREF(cpy_r_r133);
    return cpy_r_r133;
CPyL99: ;
    cpy_r_r134 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 161, CPyStatic_emitmodule___globals);
        goto CPyL146;
    }
    cpy_r_r135 = ((mypyc___codegen___emitmodule___MypycPluginObject *)cpy_r_self)->_group_map;
    CPy_INCREF(cpy_r_r135);
    cpy_r_r136 = CPyDict_GetItem(cpy_r_r135, cpy_r_id);
    CPy_DECREF(cpy_r_r135);
    CPy_DECREF(cpy_r_id);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 171, CPyStatic_emitmodule___globals);
        goto CPyL103;
    }
    PyObject *__tmp9530;
    if (unlikely(!(PyTuple_Check(cpy_r_r136) && PyTuple_GET_SIZE(cpy_r_r136) == 2))) {
        __tmp9530 = NULL;
        goto __LL9531;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r136, 0)))
        __tmp9530 = PyTuple_GET_ITEM(cpy_r_r136, 0);
    else {
        __tmp9530 = NULL;
    }
    if (__tmp9530 != NULL) goto __LL9532;
    if (PyTuple_GET_ITEM(cpy_r_r136, 0) == Py_None)
        __tmp9530 = PyTuple_GET_ITEM(cpy_r_r136, 0);
    else {
        __tmp9530 = NULL;
    }
    if (__tmp9530 != NULL) goto __LL9532;
    __tmp9530 = NULL;
__LL9532: ;
    if (__tmp9530 == NULL) goto __LL9531;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r136, 1))))
        __tmp9530 = PyTuple_GET_ITEM(cpy_r_r136, 1);
    else {
        __tmp9530 = NULL;
    }
    if (__tmp9530 == NULL) goto __LL9531;
    __tmp9530 = cpy_r_r136;
__LL9531: ;
    if (unlikely(__tmp9530 == NULL)) {
        CPy_TypeError("tuple[union[str, None], list]", cpy_r_r136); cpy_r_r137 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9533 = PyTuple_GET_ITEM(cpy_r_r136, 0);
        CPy_INCREF(__tmp9533);
        PyObject *__tmp9534;
        if (PyUnicode_Check(__tmp9533))
            __tmp9534 = __tmp9533;
        else {
            __tmp9534 = NULL;
        }
        if (__tmp9534 != NULL) goto __LL9535;
        if (__tmp9533 == Py_None)
            __tmp9534 = __tmp9533;
        else {
            __tmp9534 = NULL;
        }
        if (__tmp9534 != NULL) goto __LL9535;
        CPy_TypeError("str or None", __tmp9533); 
        __tmp9534 = NULL;
__LL9535: ;
        cpy_r_r137.f0 = __tmp9534;
        PyObject *__tmp9536 = PyTuple_GET_ITEM(cpy_r_r136, 1);
        CPy_INCREF(__tmp9536);
        PyObject *__tmp9537;
        if (likely(PyList_Check(__tmp9536)))
            __tmp9537 = __tmp9536;
        else {
            CPy_TypeError("list", __tmp9536); 
            __tmp9537 = NULL;
        }
        cpy_r_r137.f1 = __tmp9537;
    }
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 171, CPyStatic_emitmodule___globals);
        goto CPyL103;
    }
    cpy_r_r138 = PyTuple_New(2);
    if (unlikely(cpy_r_r138 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9538 = cpy_r_r137.f0;
    PyTuple_SET_ITEM(cpy_r_r138, 0, __tmp9538);
    PyObject *__tmp9539 = cpy_r_r137.f1;
    PyTuple_SET_ITEM(cpy_r_r138, 1, __tmp9539);
    return cpy_r_r138;
CPyL103: ;
    cpy_r_r139 = NULL;
    return cpy_r_r139;
CPyL104: ;
    CPy_XDecRef(cpy_r_contents);
    goto CPyL103;
CPyL105: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_r3);
    goto CPyL103;
CPyL106: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL103;
CPyL107: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_path);
    goto CPyL103;
CPyL108: ;
    CPy_XDECREF(cpy_r_contents);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_path);
    goto CPyL8;
CPyL109: ;
    CPy_XDECREF(cpy_r_contents);
    CPy_DECREF(cpy_r_path);
    goto CPyL10;
CPyL110: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_meta_path);
    goto CPyL103;
CPyL111: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_meta_path);
    goto CPyL103;
CPyL112: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_ir_path);
    goto CPyL21;
CPyL113: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_meta_json);
    goto CPyL21;
CPyL114: ;
    CPy_DecRef(cpy_r_r31.f0);
    CPy_DecRef(cpy_r_r31.f1);
    CPy_DecRef(cpy_r_r31.f2);
    goto CPyL25;
CPyL115: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_meta_json);
    CPy_DecRef(cpy_r_ir_json);
    goto CPyL103;
CPyL116: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_ir_data);
    goto CPyL103;
CPyL117: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_ir_data);
    CPy_DecRef(cpy_r_r44);
    goto CPyL103;
CPyL118: ;
    CPy_XDECREF(cpy_r_contents);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_ir_data);
    goto CPyL35;
CPyL119: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    goto CPyL103;
CPyL120: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r53);
    goto CPyL103;
CPyL121: ;
    CPy_XDECREF(cpy_r_contents);
    CPy_DECREF(cpy_r_r58);
    goto CPyL99;
CPyL122: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r58);
    goto CPyL103;
CPyL123: ;
    CPy_XDECREF(cpy_r_contents);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r60);
    goto CPyL42;
CPyL124: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r60);
    goto CPyL103;
CPyL125: ;
    CPy_XDECREF(cpy_r_contents);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r60);
    goto CPyL46;
CPyL126: ;
    CPy_XDECREF(cpy_r_contents);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_hash);
    CPy_DECREF(cpy_r_r66);
    goto CPyL49;
CPyL127: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_hash);
    CPy_DecRef(cpy_r_r69);
    goto CPyL84;
CPyL128: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_hash);
    goto CPyL84;
CPyL129: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_hash);
    CPy_DecRef(cpy_r_r78);
    goto CPyL84;
CPyL130: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_hash);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r86);
    goto CPyL84;
CPyL131: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_hash);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r88);
    goto CPyL84;
CPyL132: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL64;
CPyL133: ;
    CPy_XDECREF(cpy_r_contents);
    goto CPyL63;
CPyL134: ;
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r104);
    goto CPyL70;
CPyL135: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_hash);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r100.f0);
    CPy_DecRef(cpy_r_r100.f1);
    CPy_DecRef(cpy_r_r100.f2);
    goto CPyL68;
CPyL136: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_hash);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r88);
    goto CPyL71;
CPyL137: ;
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_r88);
    goto CPyL77;
CPyL138: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_hash);
    CPy_DecRef(cpy_r_r85);
    goto CPyL80;
CPyL139: ;
    CPy_DECREF(cpy_r_r118);
    goto CPyL76;
CPyL140: ;
    CPy_XDECREF(cpy_r_contents);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_hash);
    goto CPyL78;
CPyL141: ;
    CPy_XDECREF(cpy_r_r113.f0);
    CPy_XDECREF(cpy_r_r113.f1);
    CPy_XDECREF(cpy_r_r113.f2);
    goto CPyL79;
CPyL142: ;
    CPy_DECREF(cpy_r_r120.f0);
    CPy_DECREF(cpy_r_r120.f1);
    CPy_DECREF(cpy_r_r120.f2);
    goto CPyL88;
CPyL143: ;
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_hash);
    goto CPyL92;
CPyL144: ;
    CPy_XDecRef(cpy_r_contents);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_hash);
    goto CPyL103;
CPyL145: ;
    CPy_XDECREF(cpy_r_contents);
    CPy_DECREF(cpy_r_id);
    CPy_DECREF(cpy_r_r58);
    goto CPyL98;
CPyL146: ;
    CPy_DecRef(cpy_r_id);
    goto CPyL103;
}

PyObject *CPyPy_emitmodule___MypycPlugin___report_config_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:report_config_data", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___MypycPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.MypycPlugin", obj_self); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___MypycPlugin___report_config_data(arg_self, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data", 124, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___MypycPlugin___report_config_data__Plugin_glue(PyObject *cpy_r_self, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_emitmodule___MypycPlugin___report_config_data(cpy_r_self, cpy_r_ctx);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_emitmodule___MypycPlugin___report_config_data__Plugin_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:report_config_data__Plugin_glue", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___MypycPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.MypycPlugin", obj_self); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___MypycPlugin___report_config_data__Plugin_glue(arg_self, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "report_config_data__Plugin_glue", -1, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___MypycPlugin___get_additional_deps(PyObject *cpy_r_self, PyObject *cpy_r_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2CO cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T2OO cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_id;
    tuple_T3IOI cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = ((mypyc___codegen___emitmodule___MypycPluginObject *)cpy_r_self)->_group_map;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_file, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "get_additional_deps", 175, CPyStatic_emitmodule___globals);
        goto CPyL12;
    }
CPyL1: ;
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "get_additional_deps", 175, CPyStatic_emitmodule___globals);
        goto CPyL13;
    }
    cpy_r_r3.f0 = 1;
    cpy_r_r3.f1 = cpy_r_r2;
    CPy_INCREF(cpy_r_r3.f1);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = PyTuple_New(2);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9540 = Py_None;
    CPy_INCREF(__tmp9540);
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp9540);
    PyObject *__tmp9541 = cpy_r_r3.f1;
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp9541);
    cpy_r_r5 = CPyDict_Get(cpy_r_r0, cpy_r_r1, cpy_r_r4);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "get_additional_deps", 175, CPyStatic_emitmodule___globals);
        goto CPyL11;
    }
    PyObject *__tmp9542;
    if (unlikely(!(PyTuple_Check(cpy_r_r5) && PyTuple_GET_SIZE(cpy_r_r5) == 2))) {
        __tmp9542 = NULL;
        goto __LL9543;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r5, 0)))
        __tmp9542 = PyTuple_GET_ITEM(cpy_r_r5, 0);
    else {
        __tmp9542 = NULL;
    }
    if (__tmp9542 != NULL) goto __LL9544;
    if (PyTuple_GET_ITEM(cpy_r_r5, 0) == Py_None)
        __tmp9542 = PyTuple_GET_ITEM(cpy_r_r5, 0);
    else {
        __tmp9542 = NULL;
    }
    if (__tmp9542 != NULL) goto __LL9544;
    __tmp9542 = NULL;
__LL9544: ;
    if (__tmp9542 == NULL) goto __LL9543;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r5, 1))))
        __tmp9542 = PyTuple_GET_ITEM(cpy_r_r5, 1);
    else {
        __tmp9542 = NULL;
    }
    if (__tmp9542 == NULL) goto __LL9543;
    __tmp9542 = cpy_r_r5;
__LL9543: ;
    if (unlikely(__tmp9542 == NULL)) {
        CPy_TypeError("tuple[union[str, None], list]", cpy_r_r5); cpy_r_r6 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9545 = PyTuple_GET_ITEM(cpy_r_r5, 0);
        CPy_INCREF(__tmp9545);
        PyObject *__tmp9546;
        if (PyUnicode_Check(__tmp9545))
            __tmp9546 = __tmp9545;
        else {
            __tmp9546 = NULL;
        }
        if (__tmp9546 != NULL) goto __LL9547;
        if (__tmp9545 == Py_None)
            __tmp9546 = __tmp9545;
        else {
            __tmp9546 = NULL;
        }
        if (__tmp9546 != NULL) goto __LL9547;
        CPy_TypeError("str or None", __tmp9545); 
        __tmp9546 = NULL;
__LL9547: ;
        cpy_r_r6.f0 = __tmp9546;
        PyObject *__tmp9548 = PyTuple_GET_ITEM(cpy_r_r5, 1);
        CPy_INCREF(__tmp9548);
        PyObject *__tmp9549;
        if (likely(PyList_Check(__tmp9548)))
            __tmp9549 = __tmp9548;
        else {
            CPy_TypeError("list", __tmp9548); 
            __tmp9549 = NULL;
        }
        cpy_r_r6.f1 = __tmp9549;
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "get_additional_deps", 175, CPyStatic_emitmodule___globals);
        goto CPyL11;
    }
    cpy_r_r7 = cpy_r_r6.f1;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = PyList_New(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "get_additional_deps", 175, CPyStatic_emitmodule___globals);
        goto CPyL14;
    }
    cpy_r_r11 = 0;
CPyL6: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL15;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r11);
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "get_additional_deps", 175, CPyStatic_emitmodule___globals, "str", cpy_r_r16);
        goto CPyL16;
    }
    cpy_r_id = cpy_r_r17;
    cpy_r_r18.f0 = 20;
    cpy_r_r18.f1 = cpy_r_id;
    cpy_r_r18.f2 = -2;
    CPyTagged_INCREF(cpy_r_r18.f0);
    CPy_INCREF(cpy_r_r18.f1);
    CPyTagged_INCREF(cpy_r_r18.f2);
    CPy_DECREF(cpy_r_id);
    cpy_r_r19 = PyTuple_New(3);
    if (unlikely(cpy_r_r19 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9550 = CPyTagged_StealAsObject(cpy_r_r18.f0);
    PyTuple_SET_ITEM(cpy_r_r19, 0, __tmp9550);
    PyObject *__tmp9551 = cpy_r_r18.f1;
    PyTuple_SET_ITEM(cpy_r_r19, 1, __tmp9551);
    PyObject *__tmp9552 = CPyTagged_StealAsObject(cpy_r_r18.f2);
    PyTuple_SET_ITEM(cpy_r_r19, 2, __tmp9552);
    cpy_r_r20 = CPyList_SetItemUnsafe(cpy_r_r10, cpy_r_r11, cpy_r_r19);
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "get_additional_deps", 175, CPyStatic_emitmodule___globals);
        goto CPyL16;
    }
    cpy_r_r21 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r21;
    goto CPyL6;
CPyL10: ;
    return cpy_r_r10;
CPyL11: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL11;
CPyL15: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL10;
CPyL16: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL11;
}

PyObject *CPyPy_emitmodule___MypycPlugin___get_additional_deps(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", 0};
    static CPyArg_Parser parser = {"O:get_additional_deps", kwlist, 0};
    PyObject *obj_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___MypycPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.MypycPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(Py_TYPE(obj_file) == CPyType_nodes___MypyFile))
        arg_file = obj_file;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_file); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___MypycPlugin___get_additional_deps(arg_self, arg_file);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "get_additional_deps", 173, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___parse_and_typecheck(PyObject *cpy_r_sources, PyObject *cpy_r_options, PyObject *cpy_r_compiler_options, PyObject *cpy_r_groups, PyObject *cpy_r_fscache, PyObject *cpy_r_alt_lib_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    if (cpy_r_fscache != NULL) goto CPyL17;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_fscache = cpy_r_r0;
CPyL2: ;
    if (cpy_r_alt_lib_path != NULL) goto CPyL18;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_alt_lib_path = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = ((mypy___options___OptionsObject *)cpy_r_options)->_strict_optional;
    if (cpy_r_r2) {
        goto CPyL7;
    } else
        goto CPyL19;
CPyL5: ;
    PyErr_SetString(PyExc_AssertionError, "strict_optional must be turned on");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "parse_and_typecheck", 186, CPyStatic_emitmodule___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r4 = CPyDef_emitmodule___MypycPlugin(cpy_r_options, cpy_r_compiler_options, cpy_r_groups);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "parse_and_typecheck", 192, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    cpy_r_r5 = PyList_New(1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "parse_and_typecheck", 192, CPyStatic_emitmodule___globals);
        goto CPyL21;
    }
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r5)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    *(PyObject * *)cpy_r_r7 = cpy_r_r4;
    cpy_r_r8 = NULL;
    cpy_r_r9 = NULL;
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPyDef_mypy___build___build(cpy_r_sources, cpy_r_options, cpy_r_alt_lib_path, cpy_r_r8, cpy_r_fscache, cpy_r_r9, cpy_r_r10, cpy_r_r5);
    CPy_DECREF(cpy_r_alt_lib_path);
    CPy_DECREF(cpy_r_fscache);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "parse_and_typecheck", 187, CPyStatic_emitmodule___globals);
        goto CPyL16;
    }
    cpy_r_result = cpy_r_r11;
    cpy_r_r12 = ((mypy___build___BuildResultObject *)cpy_r_result)->_errors;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = cpy_r_r15 != 0;
    if (!cpy_r_r16) goto CPyL15;
    cpy_r_r17 = ((mypy___build___BuildResultObject *)cpy_r_result)->_errors;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_result);
    cpy_r_r18 = (PyObject *)CPyType_mypy___errors___CompileError;
    PyObject *cpy_r_r19[1] = {cpy_r_r17};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "parse_and_typecheck", 195, CPyStatic_emitmodule___globals);
        goto CPyL22;
    }
    CPy_DECREF(cpy_r_r17);
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_mypy___errors___CompileError))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "parse_and_typecheck", 195, CPyStatic_emitmodule___globals, "mypy.errors.CompileError", cpy_r_r21);
        goto CPyL16;
    }
    CPy_Raise(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "parse_and_typecheck", 195, CPyStatic_emitmodule___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL15: ;
    return cpy_r_result;
CPyL16: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL17: ;
    CPy_INCREF(cpy_r_fscache);
    goto CPyL2;
CPyL18: ;
    CPy_INCREF(cpy_r_alt_lib_path);
    goto CPyL4;
CPyL19: ;
    CPy_DECREF(cpy_r_fscache);
    CPy_DECREF(cpy_r_alt_lib_path);
    goto CPyL5;
CPyL20: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_alt_lib_path);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_alt_lib_path);
    CPy_DecRef(cpy_r_r4);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL16;
}

PyObject *CPyPy_emitmodule___parse_and_typecheck(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"sources", "options", "compiler_options", "groups", "fscache", "alt_lib_path", 0};
    static CPyArg_Parser parser = {"OOOO|OO:parse_and_typecheck", kwlist, 0};
    PyObject *obj_sources;
    PyObject *obj_options;
    PyObject *obj_compiler_options;
    PyObject *obj_groups;
    PyObject *obj_fscache = NULL;
    PyObject *obj_alt_lib_path = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sources, &obj_options, &obj_compiler_options, &obj_groups, &obj_fscache, &obj_alt_lib_path)) {
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
    PyObject *arg_compiler_options;
    if (likely(Py_TYPE(obj_compiler_options) == CPyType_mypyc___options___CompilerOptions))
        arg_compiler_options = obj_compiler_options;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", obj_compiler_options); 
        goto fail;
    }
    PyObject *arg_groups;
    if (likely(PyList_Check(obj_groups)))
        arg_groups = obj_groups;
    else {
        CPy_TypeError("list", obj_groups); 
        goto fail;
    }
    PyObject *arg_fscache;
    if (obj_fscache == NULL) {
        arg_fscache = NULL;
        goto __LL9553;
    }
    if (PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache))
        arg_fscache = obj_fscache;
    else {
        arg_fscache = NULL;
    }
    if (arg_fscache != NULL) goto __LL9553;
    if (obj_fscache == Py_None)
        arg_fscache = obj_fscache;
    else {
        arg_fscache = NULL;
    }
    if (arg_fscache != NULL) goto __LL9553;
    CPy_TypeError("mypy.fscache.FileSystemCache or None", obj_fscache); 
    goto fail;
__LL9553: ;
    PyObject *arg_alt_lib_path;
    if (obj_alt_lib_path == NULL) {
        arg_alt_lib_path = NULL;
        goto __LL9554;
    }
    if (PyUnicode_Check(obj_alt_lib_path))
        arg_alt_lib_path = obj_alt_lib_path;
    else {
        arg_alt_lib_path = NULL;
    }
    if (arg_alt_lib_path != NULL) goto __LL9554;
    if (obj_alt_lib_path == Py_None)
        arg_alt_lib_path = obj_alt_lib_path;
    else {
        arg_alt_lib_path = NULL;
    }
    if (arg_alt_lib_path != NULL) goto __LL9554;
    CPy_TypeError("str or None", obj_alt_lib_path); 
    goto fail;
__LL9554: ;
    PyObject *retval = CPyDef_emitmodule___parse_and_typecheck(arg_sources, arg_options, arg_compiler_options, arg_groups, arg_fscache, arg_alt_lib_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "parse_and_typecheck", 178, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___compile_scc_to_ir(PyObject *cpy_r_scc, PyObject *cpy_r_result, PyObject *cpy_r_mapper, PyObject *cpy_r_compiler_options, PyObject *cpy_r_errors) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
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
    PyObject *cpy_r_r32;
    PyObject *cpy_r_modules;
    CPyTagged cpy_r_r33;
    int64_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T3CIO cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyPtr cpy_r_r49;
    int64_t cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_fn;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    CPyTagged cpy_r_r59;
    int64_t cpy_r_r60;
    CPyTagged cpy_r_r61;
    PyObject *cpy_r_r62;
    tuple_T3CIO cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyTagged cpy_r_r69;
    CPyPtr cpy_r_r70;
    int64_t cpy_r_r71;
    CPyTagged cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    CPyTagged cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    CPyTagged cpy_r_r80;
    int64_t cpy_r_r81;
    CPyTagged cpy_r_r82;
    PyObject *cpy_r_r83;
    tuple_T3CIO cpy_r_r84;
    CPyTagged cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyTagged cpy_r_r90;
    CPyPtr cpy_r_r91;
    int64_t cpy_r_r92;
    CPyTagged cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    CPyTagged cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    cpy_r_r0 = ((mypyc___options___CompilerOptionsObject *)cpy_r_compiler_options)->_verbose;
    if (!cpy_r_r0) goto CPyL13;
CPyL1: ;
    cpy_r_r1 = CPyStatics[71]; /* ', ' */
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_scc)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 222, CPyStatic_emitmodule___globals);
        goto CPyL51;
    }
    cpy_r_r5 = 0;
CPyL3: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_scc)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL8;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_scc, cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_nodes___MypyFile))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 222, CPyStatic_emitmodule___globals, "mypy.nodes.MypyFile", cpy_r_r10);
        goto CPyL52;
    }
    cpy_r_x = cpy_r_r11;
    cpy_r_r12 = CPY_GET_ATTR(cpy_r_x, CPyType_nodes___MypyFile, 7, mypy___nodes___MypyFileObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 222, CPyStatic_emitmodule___globals);
        goto CPyL52;
    }
CPyL6: ;
    cpy_r_r13 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r12);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 222, CPyStatic_emitmodule___globals);
        goto CPyL52;
    }
    cpy_r_r14 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r14;
    goto CPyL3;
CPyL8: ;
    cpy_r_r15 = PyUnicode_Join(cpy_r_r1, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 222, CPyStatic_emitmodule___globals);
        goto CPyL51;
    }
    cpy_r_r16 = CPyStatics[7418]; /* 'Compiling ' */
    cpy_r_r17 = CPyStr_Build(2, cpy_r_r16, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 222, CPyStatic_emitmodule___globals);
        goto CPyL51;
    }
    cpy_r_r18 = CPyModule_builtins;
    cpy_r_r19 = CPyStatics[190]; /* 'print' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 222, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    PyObject *cpy_r_r21[1] = {cpy_r_r17};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 1, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 222, CPyStatic_emitmodule___globals);
        goto CPyL53;
    } else
        goto CPyL54;
CPyL12: ;
    CPy_DECREF(cpy_r_r17);
CPyL13: ;
    cpy_r_r24 = ((mypy___build___BuildResultObject *)cpy_r_result)->_graph;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = ((mypy___build___BuildResultObject *)cpy_r_result)->_types;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyStatic_emitmodule___globals;
    cpy_r_r27 = CPyStatics[7419]; /* 'build_ir' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 225, CPyStatic_emitmodule___globals);
        goto CPyL55;
    }
    PyObject *cpy_r_r29[6] = {
        cpy_r_scc, cpy_r_r24, cpy_r_r25, cpy_r_mapper,
        cpy_r_compiler_options, cpy_r_errors
    };
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 6, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 225, CPyStatic_emitmodule___globals);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    if (likely(PyDict_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 225, CPyStatic_emitmodule___globals, "dict", cpy_r_r31);
        goto CPyL51;
    }
    cpy_r_modules = cpy_r_r32;
    cpy_r_r33 = ((mypyc___errors___ErrorsObject *)cpy_r_errors)->_num_errors;
    cpy_r_r34 = cpy_r_r33 & 1;
    cpy_r_r35 = cpy_r_r34 != 0;
    if (!cpy_r_r35) goto CPyL18;
    cpy_r_r36 = CPyTagged_IsLt_(0, cpy_r_r33);
    if (cpy_r_r36) {
        goto CPyL19;
    } else
        goto CPyL20;
CPyL18: ;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 > (Py_ssize_t)0;
    if (!cpy_r_r37) goto CPyL20;
CPyL19: ;
    return cpy_r_modules;
CPyL20: ;
    cpy_r_r38 = 0;
    cpy_r_r39 = PyDict_Size(cpy_r_modules);
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = CPyDict_GetValuesIter(cpy_r_modules);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 230, CPyStatic_emitmodule___globals);
        goto CPyL56;
    }
CPyL21: ;
    cpy_r_r42 = CPyDict_NextValue(cpy_r_r41, cpy_r_r38);
    cpy_r_r43 = cpy_r_r42.f1;
    cpy_r_r38 = cpy_r_r43;
    cpy_r_r44 = cpy_r_r42.f0;
    if (!cpy_r_r44) goto CPyL57;
    cpy_r_r45 = cpy_r_r42.f2;
    CPy_INCREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r42.f2);
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_module_ir___ModuleIR))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 230, CPyStatic_emitmodule___globals, "mypyc.ir.module_ir.ModuleIR", cpy_r_r45);
        goto CPyL58;
    }
    cpy_r_module = cpy_r_r46;
    cpy_r_r47 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_functions;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_module);
    cpy_r_r48 = 0;
CPyL24: ;
    cpy_r_r49 = (CPyPtr)&((PyVarObject *)cpy_r_r47)->ob_size;
    cpy_r_r50 = *(int64_t *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 << 1;
    cpy_r_r52 = (Py_ssize_t)cpy_r_r48 < (Py_ssize_t)cpy_r_r51;
    if (!cpy_r_r52) goto CPyL59;
    cpy_r_r53 = CPyList_GetItemUnsafe(cpy_r_r47, cpy_r_r48);
    if (likely(Py_TYPE(cpy_r_r53) == CPyType_func_ir___FuncIR))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 231, CPyStatic_emitmodule___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r53);
        goto CPyL60;
    }
    cpy_r_fn = cpy_r_r54;
    cpy_r_r55 = CPyDef_uninit___insert_uninit_checks(cpy_r_fn);
    CPy_DECREF(cpy_r_fn);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 232, CPyStatic_emitmodule___globals);
        goto CPyL60;
    }
    cpy_r_r56 = cpy_r_r48 + 2;
    cpy_r_r48 = cpy_r_r56;
    goto CPyL24;
CPyL28: ;
    cpy_r_r57 = CPyDict_CheckSize(cpy_r_modules, cpy_r_r40);
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 230, CPyStatic_emitmodule___globals);
        goto CPyL58;
    } else
        goto CPyL21;
CPyL29: ;
    cpy_r_r58 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 230, CPyStatic_emitmodule___globals);
        goto CPyL56;
    }
    cpy_r_r59 = 0;
    cpy_r_r60 = PyDict_Size(cpy_r_modules);
    cpy_r_r61 = cpy_r_r60 << 1;
    cpy_r_r62 = CPyDict_GetValuesIter(cpy_r_modules);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 234, CPyStatic_emitmodule___globals);
        goto CPyL56;
    }
CPyL31: ;
    cpy_r_r63 = CPyDict_NextValue(cpy_r_r62, cpy_r_r59);
    cpy_r_r64 = cpy_r_r63.f1;
    cpy_r_r59 = cpy_r_r64;
    cpy_r_r65 = cpy_r_r63.f0;
    if (!cpy_r_r65) goto CPyL61;
    cpy_r_r66 = cpy_r_r63.f2;
    CPy_INCREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r63.f2);
    if (likely(Py_TYPE(cpy_r_r66) == CPyType_module_ir___ModuleIR))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 234, CPyStatic_emitmodule___globals, "mypyc.ir.module_ir.ModuleIR", cpy_r_r66);
        goto CPyL62;
    }
    cpy_r_module = cpy_r_r67;
    cpy_r_r68 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_functions;
    CPy_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_module);
    cpy_r_r69 = 0;
CPyL34: ;
    cpy_r_r70 = (CPyPtr)&((PyVarObject *)cpy_r_r68)->ob_size;
    cpy_r_r71 = *(int64_t *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 << 1;
    cpy_r_r73 = (Py_ssize_t)cpy_r_r69 < (Py_ssize_t)cpy_r_r72;
    if (!cpy_r_r73) goto CPyL63;
    cpy_r_r74 = CPyList_GetItemUnsafe(cpy_r_r68, cpy_r_r69);
    if (likely(Py_TYPE(cpy_r_r74) == CPyType_func_ir___FuncIR))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 235, CPyStatic_emitmodule___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r74);
        goto CPyL64;
    }
    cpy_r_fn = cpy_r_r75;
    cpy_r_r76 = CPyDef_exceptions___insert_exception_handling(cpy_r_fn);
    CPy_DECREF(cpy_r_fn);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 236, CPyStatic_emitmodule___globals);
        goto CPyL64;
    }
    cpy_r_r77 = cpy_r_r69 + 2;
    cpy_r_r69 = cpy_r_r77;
    goto CPyL34;
CPyL38: ;
    cpy_r_r78 = CPyDict_CheckSize(cpy_r_modules, cpy_r_r61);
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 234, CPyStatic_emitmodule___globals);
        goto CPyL62;
    } else
        goto CPyL31;
CPyL39: ;
    cpy_r_r79 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 234, CPyStatic_emitmodule___globals);
        goto CPyL56;
    }
    cpy_r_r80 = 0;
    cpy_r_r81 = PyDict_Size(cpy_r_modules);
    cpy_r_r82 = cpy_r_r81 << 1;
    cpy_r_r83 = CPyDict_GetValuesIter(cpy_r_modules);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 238, CPyStatic_emitmodule___globals);
        goto CPyL56;
    }
CPyL41: ;
    cpy_r_r84 = CPyDict_NextValue(cpy_r_r83, cpy_r_r80);
    cpy_r_r85 = cpy_r_r84.f1;
    cpy_r_r80 = cpy_r_r85;
    cpy_r_r86 = cpy_r_r84.f0;
    if (!cpy_r_r86) goto CPyL65;
    cpy_r_r87 = cpy_r_r84.f2;
    CPy_INCREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r84.f2);
    if (likely(Py_TYPE(cpy_r_r87) == CPyType_module_ir___ModuleIR))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 238, CPyStatic_emitmodule___globals, "mypyc.ir.module_ir.ModuleIR", cpy_r_r87);
        goto CPyL66;
    }
    cpy_r_module = cpy_r_r88;
    cpy_r_r89 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_functions;
    CPy_INCREF(cpy_r_r89);
    CPy_DECREF(cpy_r_module);
    cpy_r_r90 = 0;
CPyL44: ;
    cpy_r_r91 = (CPyPtr)&((PyVarObject *)cpy_r_r89)->ob_size;
    cpy_r_r92 = *(int64_t *)cpy_r_r91;
    cpy_r_r93 = cpy_r_r92 << 1;
    cpy_r_r94 = (Py_ssize_t)cpy_r_r90 < (Py_ssize_t)cpy_r_r93;
    if (!cpy_r_r94) goto CPyL67;
    cpy_r_r95 = CPyList_GetItemUnsafe(cpy_r_r89, cpy_r_r90);
    if (likely(Py_TYPE(cpy_r_r95) == CPyType_func_ir___FuncIR))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 239, CPyStatic_emitmodule___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r95);
        goto CPyL68;
    }
    cpy_r_fn = cpy_r_r96;
    cpy_r_r97 = CPyDef_refcount___insert_ref_count_opcodes(cpy_r_fn);
    CPy_DECREF(cpy_r_fn);
    if (unlikely(cpy_r_r97 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 240, CPyStatic_emitmodule___globals);
        goto CPyL68;
    }
    cpy_r_r98 = cpy_r_r90 + 2;
    cpy_r_r90 = cpy_r_r98;
    goto CPyL44;
CPyL48: ;
    cpy_r_r99 = CPyDict_CheckSize(cpy_r_modules, cpy_r_r82);
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 238, CPyStatic_emitmodule___globals);
        goto CPyL66;
    } else
        goto CPyL41;
CPyL49: ;
    cpy_r_r100 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 238, CPyStatic_emitmodule___globals);
        goto CPyL56;
    }
    return cpy_r_modules;
CPyL51: ;
    cpy_r_r101 = NULL;
    return cpy_r_r101;
CPyL52: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL51;
CPyL53: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL51;
CPyL54: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL12;
CPyL55: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    goto CPyL51;
CPyL56: ;
    CPy_DecRef(cpy_r_modules);
    goto CPyL51;
CPyL57: ;
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r42.f2);
    goto CPyL29;
CPyL58: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r41);
    goto CPyL51;
CPyL59: ;
    CPy_DECREF(cpy_r_r47);
    goto CPyL28;
CPyL60: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r47);
    goto CPyL51;
CPyL61: ;
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r63.f2);
    goto CPyL39;
CPyL62: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r62);
    goto CPyL51;
CPyL63: ;
    CPy_DECREF(cpy_r_r68);
    goto CPyL38;
CPyL64: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r68);
    goto CPyL51;
CPyL65: ;
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r84.f2);
    goto CPyL49;
CPyL66: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r83);
    goto CPyL51;
CPyL67: ;
    CPy_DECREF(cpy_r_r89);
    goto CPyL48;
CPyL68: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r89);
    goto CPyL51;
}

PyObject *CPyPy_emitmodule___compile_scc_to_ir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"scc", "result", "mapper", "compiler_options", "errors", 0};
    static CPyArg_Parser parser = {"OOOOO:compile_scc_to_ir", kwlist, 0};
    PyObject *obj_scc;
    PyObject *obj_result;
    PyObject *obj_mapper;
    PyObject *obj_compiler_options;
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_scc, &obj_result, &obj_mapper, &obj_compiler_options, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_scc;
    if (likely(PyList_Check(obj_scc)))
        arg_scc = obj_scc;
    else {
        CPy_TypeError("list", obj_scc); 
        goto fail;
    }
    PyObject *arg_result;
    if (likely(Py_TYPE(obj_result) == CPyType_mypy___build___BuildResult))
        arg_result = obj_result;
    else {
        CPy_TypeError("mypy.build.BuildResult", obj_result); 
        goto fail;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    PyObject *arg_compiler_options;
    if (likely(Py_TYPE(obj_compiler_options) == CPyType_mypyc___options___CompilerOptions))
        arg_compiler_options = obj_compiler_options;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", obj_compiler_options); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypyc___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_errors); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___compile_scc_to_ir(arg_scc, arg_result, arg_mapper, arg_compiler_options, arg_errors);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_scc_to_ir", 199, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___compile_modules_to_ir(PyObject *cpy_r_result, PyObject *cpy_r_mapper, PyObject *cpy_r_compiler_options, PyObject *cpy_r_errors) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_deser_ctx;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_modules;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_scc;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_scc_states;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_st;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_trees;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_id_2;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_fresh;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_scc_ir;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    CPyTagged cpy_r_r74;
    PyObject *cpy_r_r75;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 254, CPyStatic_emitmodule___globals);
        goto CPyL45;
    }
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 254, CPyStatic_emitmodule___globals);
        goto CPyL46;
    }
    cpy_r_r2 = CPyStatic_emitmodule___globals;
    cpy_r_r3 = CPyStatics[7420]; /* 'DeserMaps' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 254, CPyStatic_emitmodule___globals);
        goto CPyL47;
    }
    PyObject *cpy_r_r5[2] = {cpy_r_r0, cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 2, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 254, CPyStatic_emitmodule___globals);
        goto CPyL47;
    }
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (likely(PyTuple_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 254, CPyStatic_emitmodule___globals, "tuple", cpy_r_r7);
        goto CPyL45;
    }
    cpy_r_deser_ctx = cpy_r_r8;
    cpy_r_r9 = PyDict_New();
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 255, CPyStatic_emitmodule___globals);
        goto CPyL48;
    }
    cpy_r_modules = cpy_r_r9;
    cpy_r_r10 = ((mypy___build___BuildResultObject *)cpy_r_result)->_graph;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPY_INT_TAG;
    cpy_r_r13 = CPyDef_mypy___build___sorted_components(cpy_r_r10, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 258, CPyStatic_emitmodule___globals);
        goto CPyL49;
    }
    cpy_r_r14 = 0;
CPyL8: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL50;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r14);
    cpy_r_scc = cpy_r_r19;
    cpy_r_r20 = PyList_New(0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 259, CPyStatic_emitmodule___globals);
        goto CPyL51;
    }
    cpy_r_r21 = PyObject_GetIter(cpy_r_scc);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 259, CPyStatic_emitmodule___globals);
        goto CPyL52;
    }
CPyL11: ;
    cpy_r_r22 = PyIter_Next(cpy_r_r21);
    if (cpy_r_r22 == NULL) goto CPyL53;
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 259, CPyStatic_emitmodule___globals, "str", cpy_r_r22);
        goto CPyL54;
    }
    cpy_r_id = cpy_r_r23;
    cpy_r_r24 = ((mypy___build___BuildResultObject *)cpy_r_result)->_graph;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r24, cpy_r_id);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_id);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 259, CPyStatic_emitmodule___globals);
        goto CPyL54;
    }
    if (likely(Py_TYPE(cpy_r_r25) == CPyType_mypy___build___State))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 259, CPyStatic_emitmodule___globals, "mypy.build.State", cpy_r_r25);
        goto CPyL54;
    }
    cpy_r_r27 = PyList_Append(cpy_r_r20, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 259, CPyStatic_emitmodule___globals);
        goto CPyL54;
    } else
        goto CPyL11;
CPyL16: ;
    cpy_r_r29 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 259, CPyStatic_emitmodule___globals);
        goto CPyL52;
    }
    cpy_r_scc_states = cpy_r_r20;
    cpy_r_r30 = PyList_New(0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 260, CPyStatic_emitmodule___globals);
        goto CPyL55;
    }
    cpy_r_r31 = 0;
CPyL19: ;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_scc_states)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = (Py_ssize_t)cpy_r_r31 < (Py_ssize_t)cpy_r_r34;
    if (!cpy_r_r35) goto CPyL56;
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_scc_states, cpy_r_r31);
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_mypy___build___State))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 260, CPyStatic_emitmodule___globals, "mypy.build.State", cpy_r_r36);
        goto CPyL57;
    }
    cpy_r_st = cpy_r_r37;
    cpy_r_r38 = ((mypy___build___StateObject *)cpy_r_st)->_id;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", "State", "id", 260, CPyStatic_emitmodule___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r38);
CPyL22: ;
    cpy_r_r39 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_group_map;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = PyDict_Contains(cpy_r_r39, cpy_r_r38);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 260, CPyStatic_emitmodule___globals);
        goto CPyL58;
    }
    cpy_r_r42 = cpy_r_r40;
    if (cpy_r_r42) goto CPyL25;
    cpy_r_r43 = cpy_r_r42 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = cpy_r_r43;
    goto CPyL26;
CPyL25: ;
    cpy_r_r45 = ((mypy___build___StateObject *)cpy_r_st)->_tree;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r44 = cpy_r_r45;
CPyL26: ;
    cpy_r_r46 = PyObject_IsTrue(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", -1, CPyStatic_emitmodule___globals);
        goto CPyL58;
    }
    cpy_r_r48 = cpy_r_r46;
    if (!cpy_r_r48) goto CPyL59;
    cpy_r_r49 = ((mypy___build___StateObject *)cpy_r_st)->_tree;
    CPy_INCREF(cpy_r_r49);
    CPy_DECREF(cpy_r_st);
    if (likely(cpy_r_r49 != Py_None))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 260, CPyStatic_emitmodule___globals, "mypy.nodes.MypyFile", cpy_r_r49);
        goto CPyL57;
    }
    cpy_r_r51 = PyList_Append(cpy_r_r30, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 260, CPyStatic_emitmodule___globals);
        goto CPyL57;
    }
CPyL30: ;
    cpy_r_r53 = cpy_r_r31 + 2;
    cpy_r_r31 = cpy_r_r53;
    goto CPyL19;
CPyL31: ;
    cpy_r_trees = cpy_r_r30;
    cpy_r_r54 = (CPyPtr)&((PyVarObject *)cpy_r_trees)->ob_size;
    cpy_r_r55 = *(int64_t *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 << 1;
    cpy_r_r57 = cpy_r_r56 != 0;
    if (!cpy_r_r57) goto CPyL60;
    cpy_r_r58 = 1;
    cpy_r_r59 = PyObject_GetIter(cpy_r_scc);
    CPy_DECREF(cpy_r_scc);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 265, CPyStatic_emitmodule___globals);
        goto CPyL61;
    }
CPyL33: ;
    cpy_r_r60 = PyIter_Next(cpy_r_r59);
    if (cpy_r_r60 == NULL) goto CPyL62;
    if (likely(PyUnicode_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 265, CPyStatic_emitmodule___globals, "str", cpy_r_r60);
        goto CPyL63;
    }
    cpy_r_id_2 = cpy_r_r61;
    cpy_r_r62 = ((mypy___build___BuildResultObject *)cpy_r_result)->_manager;
    cpy_r_r63 = ((mypy___build___BuildManagerObject *)cpy_r_r62)->_rechecked_modules;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = PySet_Contains(cpy_r_r63, cpy_r_id_2);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_id_2);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 265, CPyStatic_emitmodule___globals);
        goto CPyL63;
    }
    cpy_r_r66 = cpy_r_r64;
    cpy_r_r67 = cpy_r_r66 ^ 1;
    cpy_r_r68 = cpy_r_r67 ^ 1;
    if (cpy_r_r68) {
        goto CPyL64;
    } else
        goto CPyL33;
CPyL37: ;
    cpy_r_r58 = 0;
    goto CPyL39;
CPyL38: ;
    cpy_r_r69 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 265, CPyStatic_emitmodule___globals);
        goto CPyL61;
    }
CPyL39: ;
    cpy_r_fresh = cpy_r_r58;
    if (!cpy_r_fresh) goto CPyL41;
    cpy_r_r70 = CPyDef_emitmodule___load_scc_from_cache(cpy_r_trees, cpy_r_result, cpy_r_mapper, cpy_r_deser_ctx);
    CPy_DECREF(cpy_r_trees);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 267, CPyStatic_emitmodule___globals);
        goto CPyL65;
    } else
        goto CPyL66;
CPyL41: ;
    cpy_r_r71 = CPyDef_emitmodule___compile_scc_to_ir(cpy_r_trees, cpy_r_result, cpy_r_mapper, cpy_r_compiler_options, cpy_r_errors);
    CPy_DECREF(cpy_r_trees);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 269, CPyStatic_emitmodule___globals);
        goto CPyL65;
    }
    cpy_r_scc_ir = cpy_r_r71;
    cpy_r_r72 = CPyDict_Update(cpy_r_modules, cpy_r_scc_ir);
    CPy_DECREF(cpy_r_scc_ir);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 270, CPyStatic_emitmodule___globals);
        goto CPyL65;
    }
CPyL43: ;
    cpy_r_r74 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r74;
    goto CPyL8;
CPyL44: ;
    return cpy_r_modules;
CPyL45: ;
    cpy_r_r75 = NULL;
    return cpy_r_r75;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL45;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL45;
CPyL48: ;
    CPy_DecRef(cpy_r_deser_ctx);
    goto CPyL45;
CPyL49: ;
    CPy_DecRef(cpy_r_deser_ctx);
    CPy_DecRef(cpy_r_modules);
    goto CPyL45;
CPyL50: ;
    CPy_DECREF(cpy_r_deser_ctx);
    CPy_DECREF(cpy_r_r13);
    goto CPyL44;
CPyL51: ;
    CPy_DecRef(cpy_r_deser_ctx);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_scc);
    goto CPyL45;
CPyL52: ;
    CPy_DecRef(cpy_r_deser_ctx);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_scc);
    CPy_DecRef(cpy_r_r20);
    goto CPyL45;
CPyL53: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL16;
CPyL54: ;
    CPy_DecRef(cpy_r_deser_ctx);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_scc);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    goto CPyL45;
CPyL55: ;
    CPy_DecRef(cpy_r_deser_ctx);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_scc);
    CPy_DecRef(cpy_r_scc_states);
    goto CPyL45;
CPyL56: ;
    CPy_DECREF(cpy_r_scc_states);
    goto CPyL31;
CPyL57: ;
    CPy_DecRef(cpy_r_deser_ctx);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_scc);
    CPy_DecRef(cpy_r_scc_states);
    CPy_DecRef(cpy_r_r30);
    goto CPyL45;
CPyL58: ;
    CPy_DecRef(cpy_r_deser_ctx);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_scc);
    CPy_DecRef(cpy_r_scc_states);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_st);
    goto CPyL45;
CPyL59: ;
    CPy_DECREF(cpy_r_st);
    goto CPyL30;
CPyL60: ;
    CPy_DECREF(cpy_r_scc);
    CPy_DECREF(cpy_r_trees);
    goto CPyL43;
CPyL61: ;
    CPy_DecRef(cpy_r_deser_ctx);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_trees);
    goto CPyL45;
CPyL62: ;
    CPy_DECREF(cpy_r_r59);
    goto CPyL38;
CPyL63: ;
    CPy_DecRef(cpy_r_deser_ctx);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_trees);
    CPy_DecRef(cpy_r_r59);
    goto CPyL45;
CPyL64: ;
    CPy_DECREF(cpy_r_r59);
    goto CPyL37;
CPyL65: ;
    CPy_DecRef(cpy_r_deser_ctx);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_r13);
    goto CPyL45;
CPyL66: ;
    CPy_DECREF(cpy_r_r70);
    goto CPyL43;
}

PyObject *CPyPy_emitmodule___compile_modules_to_ir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"result", "mapper", "compiler_options", "errors", 0};
    static CPyArg_Parser parser = {"OOOO:compile_modules_to_ir", kwlist, 0};
    PyObject *obj_result;
    PyObject *obj_mapper;
    PyObject *obj_compiler_options;
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_result, &obj_mapper, &obj_compiler_options, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_result;
    if (likely(Py_TYPE(obj_result) == CPyType_mypy___build___BuildResult))
        arg_result = obj_result;
    else {
        CPy_TypeError("mypy.build.BuildResult", obj_result); 
        goto fail;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    PyObject *arg_compiler_options;
    if (likely(Py_TYPE(obj_compiler_options) == CPyType_mypyc___options___CompilerOptions))
        arg_compiler_options = obj_compiler_options;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", obj_compiler_options); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypyc___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_errors); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___compile_modules_to_ir(arg_result, arg_mapper, arg_compiler_options, arg_errors);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_ir", 245, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___compile_ir_to_c(PyObject *cpy_r_groups, PyObject *cpy_r_modules, PyObject *cpy_r_result, PyObject *cpy_r_mapper, PyObject *cpy_r_compiler_options) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_sources;
    PyObject *cpy_r_r9;
    PyObject *cpy_r__;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_source_paths;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    tuple_T2OO cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_sources_2;
    PyObject *cpy_r_r38;
    PyObject *cpy_r___2;
    CPyPtr cpy_r_r39;
    int64_t cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_source_2;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_names;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_ctext;
    CPyTagged cpy_r_r56;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    tuple_T2OO cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_group_sources;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_group_name;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    CPyPtr cpy_r_r67;
    int64_t cpy_r_r68;
    CPyTagged cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_source_3;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_group_modules;
    int64_t cpy_r_r84;
    CPyTagged cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_generator;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    CPyTagged cpy_r_r95;
    PyObject *cpy_r_r96;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 287, CPyStatic_emitmodule___globals);
        goto CPyL47;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_groups)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL12;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_groups, cpy_r_r1);
    PyObject *__tmp9555;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp9555 = NULL;
        goto __LL9556;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp9555 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp9555 = NULL;
    }
    if (__tmp9555 == NULL) goto __LL9556;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 1)))
        __tmp9555 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp9555 = NULL;
    }
    if (__tmp9555 != NULL) goto __LL9557;
    if (PyTuple_GET_ITEM(cpy_r_r6, 1) == Py_None)
        __tmp9555 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp9555 = NULL;
    }
    if (__tmp9555 != NULL) goto __LL9557;
    __tmp9555 = NULL;
__LL9557: ;
    if (__tmp9555 == NULL) goto __LL9556;
    __tmp9555 = cpy_r_r6;
__LL9556: ;
    if (unlikely(__tmp9555 == NULL)) {
        CPy_TypeError("tuple[list, union[str, None]]", cpy_r_r6); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9558 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp9558);
        PyObject *__tmp9559;
        if (likely(PyList_Check(__tmp9558)))
            __tmp9559 = __tmp9558;
        else {
            CPy_TypeError("list", __tmp9558); 
            __tmp9559 = NULL;
        }
        cpy_r_r7.f0 = __tmp9559;
        PyObject *__tmp9560 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp9560);
        PyObject *__tmp9561;
        if (PyUnicode_Check(__tmp9560))
            __tmp9561 = __tmp9560;
        else {
            __tmp9561 = NULL;
        }
        if (__tmp9561 != NULL) goto __LL9562;
        if (__tmp9560 == Py_None)
            __tmp9561 = __tmp9560;
        else {
            __tmp9561 = NULL;
        }
        if (__tmp9561 != NULL) goto __LL9562;
        CPy_TypeError("str or None", __tmp9560); 
        __tmp9561 = NULL;
__LL9562: ;
        cpy_r_r7.f1 = __tmp9561;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 287, CPyStatic_emitmodule___globals);
        goto CPyL48;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_sources = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r__ = cpy_r_r9;
    CPy_DECREF(cpy_r__);
    cpy_r_r10 = 0;
CPyL5: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL49;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r10);
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_modulefinder___BuildSource))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 287, CPyStatic_emitmodule___globals, "mypy.modulefinder.BuildSource", cpy_r_r15);
        goto CPyL50;
    }
    cpy_r_source = cpy_r_r16;
    cpy_r_r17 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_module;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = ((mypy___build___BuildResultObject *)cpy_r_result)->_graph;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_module;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_source);
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 288, CPyStatic_emitmodule___globals);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_mypy___build___State))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 288, CPyStatic_emitmodule___globals, "mypy.build.State", cpy_r_r20);
        goto CPyL51;
    }
    cpy_r_r22 = ((mypy___build___StateObject *)cpy_r_r21)->_xpath;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = CPyDict_SetItem(cpy_r_r0, cpy_r_r17, cpy_r_r22);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 287, CPyStatic_emitmodule___globals);
        goto CPyL50;
    }
    cpy_r_r25 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r25;
    goto CPyL5;
CPyL11: ;
    cpy_r_r26 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r26;
    goto CPyL2;
CPyL12: ;
    cpy_r_source_paths = cpy_r_r0;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_groups)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = PyList_New(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 293, CPyStatic_emitmodule___globals);
        goto CPyL52;
    }
    cpy_r_r30 = 0;
CPyL14: ;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_groups)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = (Py_ssize_t)cpy_r_r30 < (Py_ssize_t)cpy_r_r33;
    if (!cpy_r_r34) goto CPyL24;
    cpy_r_r35 = CPyList_GetItemUnsafe(cpy_r_groups, cpy_r_r30);
    PyObject *__tmp9563;
    if (unlikely(!(PyTuple_Check(cpy_r_r35) && PyTuple_GET_SIZE(cpy_r_r35) == 2))) {
        __tmp9563 = NULL;
        goto __LL9564;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r35, 0))))
        __tmp9563 = PyTuple_GET_ITEM(cpy_r_r35, 0);
    else {
        __tmp9563 = NULL;
    }
    if (__tmp9563 == NULL) goto __LL9564;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r35, 1)))
        __tmp9563 = PyTuple_GET_ITEM(cpy_r_r35, 1);
    else {
        __tmp9563 = NULL;
    }
    if (__tmp9563 != NULL) goto __LL9565;
    if (PyTuple_GET_ITEM(cpy_r_r35, 1) == Py_None)
        __tmp9563 = PyTuple_GET_ITEM(cpy_r_r35, 1);
    else {
        __tmp9563 = NULL;
    }
    if (__tmp9563 != NULL) goto __LL9565;
    __tmp9563 = NULL;
__LL9565: ;
    if (__tmp9563 == NULL) goto __LL9564;
    __tmp9563 = cpy_r_r35;
__LL9564: ;
    if (unlikely(__tmp9563 == NULL)) {
        CPy_TypeError("tuple[list, union[str, None]]", cpy_r_r35); cpy_r_r36 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9566 = PyTuple_GET_ITEM(cpy_r_r35, 0);
        CPy_INCREF(__tmp9566);
        PyObject *__tmp9567;
        if (likely(PyList_Check(__tmp9566)))
            __tmp9567 = __tmp9566;
        else {
            CPy_TypeError("list", __tmp9566); 
            __tmp9567 = NULL;
        }
        cpy_r_r36.f0 = __tmp9567;
        PyObject *__tmp9568 = PyTuple_GET_ITEM(cpy_r_r35, 1);
        CPy_INCREF(__tmp9568);
        PyObject *__tmp9569;
        if (PyUnicode_Check(__tmp9568))
            __tmp9569 = __tmp9568;
        else {
            __tmp9569 = NULL;
        }
        if (__tmp9569 != NULL) goto __LL9570;
        if (__tmp9568 == Py_None)
            __tmp9569 = __tmp9568;
        else {
            __tmp9569 = NULL;
        }
        if (__tmp9569 != NULL) goto __LL9570;
        CPy_TypeError("str or None", __tmp9568); 
        __tmp9569 = NULL;
__LL9570: ;
        cpy_r_r36.f1 = __tmp9569;
    }
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 293, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r37 = cpy_r_r36.f0;
    CPy_INCREF(cpy_r_r37);
    cpy_r_sources_2 = cpy_r_r37;
    cpy_r_r38 = cpy_r_r36.f1;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r36.f0);
    CPy_DECREF(cpy_r_r36.f1);
    cpy_r___2 = cpy_r_r38;
    CPy_DECREF(cpy_r___2);
    cpy_r_r39 = (CPyPtr)&((PyVarObject *)cpy_r_sources_2)->ob_size;
    cpy_r_r40 = *(int64_t *)cpy_r_r39;
    cpy_r_r41 = PyList_New(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 293, CPyStatic_emitmodule___globals);
        goto CPyL54;
    }
    cpy_r_r42 = 0;
CPyL18: ;
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_sources_2)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 << 1;
    cpy_r_r46 = (Py_ssize_t)cpy_r_r42 < (Py_ssize_t)cpy_r_r45;
    if (!cpy_r_r46) goto CPyL55;
    cpy_r_r47 = CPyList_GetItemUnsafe(cpy_r_sources_2, cpy_r_r42);
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_modulefinder___BuildSource))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 293, CPyStatic_emitmodule___globals, "mypy.modulefinder.BuildSource", cpy_r_r47);
        goto CPyL56;
    }
    cpy_r_source_2 = cpy_r_r48;
    cpy_r_r49 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_2)->_module;
    CPy_INCREF(cpy_r_r49);
    CPy_DECREF(cpy_r_source_2);
    cpy_r_r50 = CPyList_SetItemUnsafe(cpy_r_r41, cpy_r_r42, cpy_r_r49);
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 293, CPyStatic_emitmodule___globals);
        goto CPyL56;
    }
    cpy_r_r51 = cpy_r_r42 + 2;
    cpy_r_r42 = cpy_r_r51;
    goto CPyL18;
CPyL22: ;
    cpy_r_r52 = CPyList_SetItemUnsafe(cpy_r_r29, cpy_r_r30, cpy_r_r41);
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 293, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r53 = cpy_r_r30 + 2;
    cpy_r_r30 = cpy_r_r53;
    goto CPyL14;
CPyL24: ;
    cpy_r_r54 = CPyDef_namegen___NameGenerator(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 293, CPyStatic_emitmodule___globals);
        goto CPyL52;
    }
    cpy_r_names = cpy_r_r54;
    cpy_r_r55 = PyDict_New();
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 297, CPyStatic_emitmodule___globals);
        goto CPyL57;
    }
    cpy_r_ctext = cpy_r_r55;
    cpy_r_r56 = 0;
CPyL27: ;
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_groups)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 << 1;
    cpy_r_r60 = (Py_ssize_t)cpy_r_r56 < (Py_ssize_t)cpy_r_r59;
    if (!cpy_r_r60) goto CPyL58;
    cpy_r_r61 = CPyList_GetItemUnsafe(cpy_r_groups, cpy_r_r56);
    PyObject *__tmp9571;
    if (unlikely(!(PyTuple_Check(cpy_r_r61) && PyTuple_GET_SIZE(cpy_r_r61) == 2))) {
        __tmp9571 = NULL;
        goto __LL9572;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r61, 0))))
        __tmp9571 = PyTuple_GET_ITEM(cpy_r_r61, 0);
    else {
        __tmp9571 = NULL;
    }
    if (__tmp9571 == NULL) goto __LL9572;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r61, 1)))
        __tmp9571 = PyTuple_GET_ITEM(cpy_r_r61, 1);
    else {
        __tmp9571 = NULL;
    }
    if (__tmp9571 != NULL) goto __LL9573;
    if (PyTuple_GET_ITEM(cpy_r_r61, 1) == Py_None)
        __tmp9571 = PyTuple_GET_ITEM(cpy_r_r61, 1);
    else {
        __tmp9571 = NULL;
    }
    if (__tmp9571 != NULL) goto __LL9573;
    __tmp9571 = NULL;
__LL9573: ;
    if (__tmp9571 == NULL) goto __LL9572;
    __tmp9571 = cpy_r_r61;
__LL9572: ;
    if (unlikely(__tmp9571 == NULL)) {
        CPy_TypeError("tuple[list, union[str, None]]", cpy_r_r61); cpy_r_r62 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9574 = PyTuple_GET_ITEM(cpy_r_r61, 0);
        CPy_INCREF(__tmp9574);
        PyObject *__tmp9575;
        if (likely(PyList_Check(__tmp9574)))
            __tmp9575 = __tmp9574;
        else {
            CPy_TypeError("list", __tmp9574); 
            __tmp9575 = NULL;
        }
        cpy_r_r62.f0 = __tmp9575;
        PyObject *__tmp9576 = PyTuple_GET_ITEM(cpy_r_r61, 1);
        CPy_INCREF(__tmp9576);
        PyObject *__tmp9577;
        if (PyUnicode_Check(__tmp9576))
            __tmp9577 = __tmp9576;
        else {
            __tmp9577 = NULL;
        }
        if (__tmp9577 != NULL) goto __LL9578;
        if (__tmp9576 == Py_None)
            __tmp9577 = __tmp9576;
        else {
            __tmp9577 = NULL;
        }
        if (__tmp9577 != NULL) goto __LL9578;
        CPy_TypeError("str or None", __tmp9576); 
        __tmp9577 = NULL;
__LL9578: ;
        cpy_r_r62.f1 = __tmp9577;
    }
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 298, CPyStatic_emitmodule___globals);
        goto CPyL59;
    }
    cpy_r_r63 = cpy_r_r62.f0;
    CPy_INCREF(cpy_r_r63);
    cpy_r_group_sources = cpy_r_r63;
    cpy_r_r64 = cpy_r_r62.f1;
    CPy_INCREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r62.f0);
    CPy_DECREF(cpy_r_r62.f1);
    cpy_r_group_name = cpy_r_r64;
    cpy_r_r65 = PyDict_New();
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 299, CPyStatic_emitmodule___globals);
        goto CPyL60;
    }
    cpy_r_r66 = 0;
CPyL31: ;
    cpy_r_r67 = (CPyPtr)&((PyVarObject *)cpy_r_group_sources)->ob_size;
    cpy_r_r68 = *(int64_t *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 << 1;
    cpy_r_r70 = (Py_ssize_t)cpy_r_r66 < (Py_ssize_t)cpy_r_r69;
    if (!cpy_r_r70) goto CPyL61;
    cpy_r_r71 = CPyList_GetItemUnsafe(cpy_r_group_sources, cpy_r_r66);
    if (likely(Py_TYPE(cpy_r_r71) == CPyType_modulefinder___BuildSource))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 299, CPyStatic_emitmodule___globals, "mypy.modulefinder.BuildSource", cpy_r_r71);
        goto CPyL62;
    }
    cpy_r_source_3 = cpy_r_r72;
    cpy_r_r73 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_3)->_module;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r74 = PyDict_Contains(cpy_r_modules, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 302, CPyStatic_emitmodule___globals);
        goto CPyL63;
    }
    cpy_r_r76 = cpy_r_r74;
    if (!cpy_r_r76) goto CPyL64;
    cpy_r_r77 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_3)->_module;
    CPy_INCREF(cpy_r_r77);
    cpy_r_r78 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_3)->_module;
    CPy_INCREF(cpy_r_r78);
    CPy_DECREF(cpy_r_source_3);
    cpy_r_r79 = CPyDict_GetItem(cpy_r_modules, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 300, CPyStatic_emitmodule___globals);
        goto CPyL65;
    }
    if (likely(Py_TYPE(cpy_r_r79) == CPyType_module_ir___ModuleIR))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 300, CPyStatic_emitmodule___globals, "mypyc.ir.module_ir.ModuleIR", cpy_r_r79);
        goto CPyL65;
    }
    cpy_r_r81 = CPyDict_SetItem(cpy_r_r65, cpy_r_r77, cpy_r_r80);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 299, CPyStatic_emitmodule___globals);
        goto CPyL62;
    }
CPyL38: ;
    cpy_r_r83 = cpy_r_r66 + 2;
    cpy_r_r66 = cpy_r_r83;
    goto CPyL31;
CPyL39: ;
    cpy_r_group_modules = cpy_r_r65;
    cpy_r_r84 = PyDict_Size(cpy_r_group_modules);
    cpy_r_r85 = cpy_r_r84 << 1;
    cpy_r_r86 = cpy_r_r85 != 0;
    if (cpy_r_r86) {
        goto CPyL42;
    } else
        goto CPyL66;
CPyL40: ;
    cpy_r_r87 = PyList_New(0);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 305, CPyStatic_emitmodule___globals);
        goto CPyL67;
    }
    cpy_r_r88 = CPyDict_SetItem(cpy_r_ctext, cpy_r_group_name, cpy_r_r87);
    CPy_DECREF(cpy_r_group_name);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 305, CPyStatic_emitmodule___globals);
        goto CPyL59;
    } else
        goto CPyL45;
CPyL42: ;
    cpy_r_r90 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_group_map;
    CPy_INCREF(cpy_r_r90);
    cpy_r_r91 = CPyDef_emitmodule___GroupGenerator(cpy_r_group_modules, cpy_r_source_paths, cpy_r_group_name, cpy_r_r90, cpy_r_names, cpy_r_compiler_options);
    CPy_DECREF(cpy_r_group_modules);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 307, CPyStatic_emitmodule___globals);
        goto CPyL67;
    }
    cpy_r_generator = cpy_r_r91;
    cpy_r_r92 = CPyDef_emitmodule___GroupGenerator___generate_c_for_modules(cpy_r_generator);
    CPy_DECREF(cpy_r_generator);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 310, CPyStatic_emitmodule___globals);
        goto CPyL67;
    }
    cpy_r_r93 = CPyDict_SetItem(cpy_r_ctext, cpy_r_group_name, cpy_r_r92);
    CPy_DECREF(cpy_r_group_name);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 310, CPyStatic_emitmodule___globals);
        goto CPyL59;
    }
CPyL45: ;
    cpy_r_r95 = cpy_r_r56 + 2;
    cpy_r_r56 = cpy_r_r95;
    goto CPyL27;
CPyL46: ;
    return cpy_r_ctext;
CPyL47: ;
    cpy_r_r96 = NULL;
    return cpy_r_r96;
CPyL48: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL47;
CPyL49: ;
    CPy_DECREF(cpy_r_sources);
    goto CPyL11;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sources);
    goto CPyL47;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_sources);
    CPy_DecRef(cpy_r_r17);
    goto CPyL47;
CPyL52: ;
    CPy_DecRef(cpy_r_source_paths);
    goto CPyL47;
CPyL53: ;
    CPy_DecRef(cpy_r_source_paths);
    CPy_DecRef(cpy_r_r29);
    goto CPyL47;
CPyL54: ;
    CPy_DecRef(cpy_r_source_paths);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_sources_2);
    goto CPyL47;
CPyL55: ;
    CPy_DECREF(cpy_r_sources_2);
    goto CPyL22;
CPyL56: ;
    CPy_DecRef(cpy_r_source_paths);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_sources_2);
    CPy_DecRef(cpy_r_r41);
    goto CPyL47;
CPyL57: ;
    CPy_DecRef(cpy_r_source_paths);
    CPy_DecRef(cpy_r_names);
    goto CPyL47;
CPyL58: ;
    CPy_DECREF(cpy_r_source_paths);
    CPy_DECREF(cpy_r_names);
    goto CPyL46;
CPyL59: ;
    CPy_DecRef(cpy_r_source_paths);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_ctext);
    goto CPyL47;
CPyL60: ;
    CPy_DecRef(cpy_r_source_paths);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_ctext);
    CPy_DecRef(cpy_r_group_sources);
    CPy_DecRef(cpy_r_group_name);
    goto CPyL47;
CPyL61: ;
    CPy_DECREF(cpy_r_group_sources);
    goto CPyL39;
CPyL62: ;
    CPy_DecRef(cpy_r_source_paths);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_ctext);
    CPy_DecRef(cpy_r_group_sources);
    CPy_DecRef(cpy_r_group_name);
    CPy_DecRef(cpy_r_r65);
    goto CPyL47;
CPyL63: ;
    CPy_DecRef(cpy_r_source_paths);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_ctext);
    CPy_DecRef(cpy_r_group_sources);
    CPy_DecRef(cpy_r_group_name);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_source_3);
    goto CPyL47;
CPyL64: ;
    CPy_DECREF(cpy_r_source_3);
    goto CPyL38;
CPyL65: ;
    CPy_DecRef(cpy_r_source_paths);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_ctext);
    CPy_DecRef(cpy_r_group_sources);
    CPy_DecRef(cpy_r_group_name);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r77);
    goto CPyL47;
CPyL66: ;
    CPy_DECREF(cpy_r_group_modules);
    goto CPyL40;
CPyL67: ;
    CPy_DecRef(cpy_r_source_paths);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_ctext);
    CPy_DecRef(cpy_r_group_name);
    goto CPyL47;
}

PyObject *CPyPy_emitmodule___compile_ir_to_c(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"groups", "modules", "result", "mapper", "compiler_options", 0};
    static CPyArg_Parser parser = {"OOOOO:compile_ir_to_c", kwlist, 0};
    PyObject *obj_groups;
    PyObject *obj_modules;
    PyObject *obj_result;
    PyObject *obj_mapper;
    PyObject *obj_compiler_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_groups, &obj_modules, &obj_result, &obj_mapper, &obj_compiler_options)) {
        return NULL;
    }
    PyObject *arg_groups;
    if (likely(PyList_Check(obj_groups)))
        arg_groups = obj_groups;
    else {
        CPy_TypeError("list", obj_groups); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    PyObject *arg_result;
    if (likely(Py_TYPE(obj_result) == CPyType_mypy___build___BuildResult))
        arg_result = obj_result;
    else {
        CPy_TypeError("mypy.build.BuildResult", obj_result); 
        goto fail;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    PyObject *arg_compiler_options;
    if (likely(Py_TYPE(obj_compiler_options) == CPyType_mypyc___options___CompilerOptions))
        arg_compiler_options = obj_compiler_options;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", obj_compiler_options); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___compile_ir_to_c(arg_groups, arg_modules, arg_result, arg_mapper, arg_compiler_options);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_ir_to_c", 275, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___get_ir_cache_name(PyObject *cpy_r_id, PyObject *cpy_r_path, PyObject *cpy_r_options) {
    tuple_T3OOO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_meta_path;
    PyObject *cpy_r_r2;
    PyObject *cpy_r__;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyDef_mypy___build___get_cache_names(cpy_r_id, cpy_r_path, cpy_r_options);
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "get_ir_cache_name", 316, CPyStatic_emitmodule___globals);
        goto CPyL3;
    }
    cpy_r_r1 = cpy_r_r0.f0;
    CPy_INCREF(cpy_r_r1);
    cpy_r_meta_path = cpy_r_r1;
    cpy_r_r2 = cpy_r_r0.f1;
    CPy_INCREF(cpy_r_r2);
    cpy_r__ = cpy_r_r2;
    CPy_DECREF(cpy_r__);
    cpy_r_r3 = cpy_r_r0.f2;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r0.f0);
    CPy_DECREF(cpy_r_r0.f1);
    CPy_DECREF(cpy_r_r0.f2);
    cpy_r__ = cpy_r_r3;
    CPy_DECREF(cpy_r__);
    cpy_r_r4 = CPyStatics[290]; /* '.meta.json' */
    cpy_r_r5 = CPyStatics[7421]; /* '.ir.json' */
    cpy_r_r6 = PyUnicode_Replace(cpy_r_meta_path, cpy_r_r4, cpy_r_r5, -1);
    CPy_DECREF(cpy_r_meta_path);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "get_ir_cache_name", 317, CPyStatic_emitmodule___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_emitmodule___get_ir_cache_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"id", "path", "options", 0};
    static CPyArg_Parser parser = {"OOO:get_ir_cache_name", kwlist, 0};
    PyObject *obj_id;
    PyObject *obj_path;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_id, &obj_path, &obj_options)) {
        return NULL;
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
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___get_ir_cache_name(arg_id, arg_path, arg_options);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "get_ir_cache_name", 315, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___get_state_ir_cache_name(PyObject *cpy_r_state) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = ((mypy___build___StateObject *)cpy_r_state)->_id;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "get_state_ir_cache_name", "State", "id", 321, CPyStatic_emitmodule___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___build___StateObject *)cpy_r_state)->_xpath;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___build___StateObject *)cpy_r_state)->_options;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "get_state_ir_cache_name", "State", "options", 321, CPyStatic_emitmodule___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r2);
CPyL2: ;
    cpy_r_r3 = CPyDef_emitmodule___get_ir_cache_name(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "get_state_ir_cache_name", 321, CPyStatic_emitmodule___globals);
        goto CPyL4;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_emitmodule___get_state_ir_cache_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"state", 0};
    static CPyArg_Parser parser = {"O:get_state_ir_cache_name", kwlist, 0};
    PyObject *obj_state;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_state)) {
        return NULL;
    }
    PyObject *arg_state;
    if (likely(Py_TYPE(obj_state) == CPyType_mypy___build___State))
        arg_state = obj_state;
    else {
        CPy_TypeError("mypy.build.State", obj_state); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___get_state_ir_cache_name(arg_state);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "get_state_ir_cache_name", 320, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___write_cache(PyObject *cpy_r_modules, PyObject *cpy_r_result, PyObject *cpy_r_group_map, PyObject *cpy_r_ctext) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_hashes;
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
    PyObject *cpy_r_name;
    PyObject *cpy_r_files;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T2OO cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_file;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_data;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    tuple_T4CIOO cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_id;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_st;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T3OOO cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_meta_path;
    PyObject *cpy_r_r49;
    PyObject *cpy_r__;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_meta_data;
    tuple_T3OOO cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_newpath;
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
    PyObject *cpy_r_ir_data;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    tuple_T2OO cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject **cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 350, CPyStatic_emitmodule___globals);
        goto CPyL48;
    }
    cpy_r_hashes = cpy_r_r0;
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_ctext);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetItemsIter(cpy_r_ctext);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 351, CPyStatic_emitmodule___globals);
        goto CPyL49;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextItem(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL50;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_r5.f3;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    if (PyUnicode_Check(cpy_r_r8))
        cpy_r_r10 = cpy_r_r8;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL9579;
    if (cpy_r_r8 == Py_None)
        cpy_r_r10 = cpy_r_r8;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL9579;
    CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "write_cache", 351, CPyStatic_emitmodule___globals, "str or None", cpy_r_r8);
    goto CPyL51;
__LL9579: ;
    if (likely(PyList_Check(cpy_r_r9)))
        cpy_r_r11 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "write_cache", 351, CPyStatic_emitmodule___globals, "list", cpy_r_r9);
        goto CPyL52;
    }
    cpy_r_name = cpy_r_r10;
    cpy_r_files = cpy_r_r11;
    cpy_r_r12 = PyDict_New();
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 352, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r13 = 0;
CPyL7: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_files)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL54;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_files, cpy_r_r13);
    PyObject *__tmp9580;
    if (unlikely(!(PyTuple_Check(cpy_r_r18) && PyTuple_GET_SIZE(cpy_r_r18) == 2))) {
        __tmp9580 = NULL;
        goto __LL9581;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r18, 0))))
        __tmp9580 = PyTuple_GET_ITEM(cpy_r_r18, 0);
    else {
        __tmp9580 = NULL;
    }
    if (__tmp9580 == NULL) goto __LL9581;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r18, 1))))
        __tmp9580 = PyTuple_GET_ITEM(cpy_r_r18, 1);
    else {
        __tmp9580 = NULL;
    }
    if (__tmp9580 == NULL) goto __LL9581;
    __tmp9580 = cpy_r_r18;
__LL9581: ;
    if (unlikely(__tmp9580 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r18); cpy_r_r19 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9582 = PyTuple_GET_ITEM(cpy_r_r18, 0);
        CPy_INCREF(__tmp9582);
        PyObject *__tmp9583;
        if (likely(PyUnicode_Check(__tmp9582)))
            __tmp9583 = __tmp9582;
        else {
            CPy_TypeError("str", __tmp9582); 
            __tmp9583 = NULL;
        }
        cpy_r_r19.f0 = __tmp9583;
        PyObject *__tmp9584 = PyTuple_GET_ITEM(cpy_r_r18, 1);
        CPy_INCREF(__tmp9584);
        PyObject *__tmp9585;
        if (likely(PyUnicode_Check(__tmp9584)))
            __tmp9585 = __tmp9584;
        else {
            CPy_TypeError("str", __tmp9584); 
            __tmp9585 = NULL;
        }
        cpy_r_r19.f1 = __tmp9585;
    }
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 352, CPyStatic_emitmodule___globals);
        goto CPyL55;
    }
    cpy_r_r20 = cpy_r_r19.f0;
    CPy_INCREF(cpy_r_r20);
    cpy_r_file = cpy_r_r20;
    cpy_r_r21 = cpy_r_r19.f1;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r19.f0);
    CPy_DECREF(cpy_r_r19.f1);
    cpy_r_data = cpy_r_r21;
    cpy_r_r22 = CPyDef_mypy___build___compute_hash(cpy_r_data);
    CPy_DECREF(cpy_r_data);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 352, CPyStatic_emitmodule___globals);
        goto CPyL56;
    }
    cpy_r_r23 = CPyDict_SetItem(cpy_r_r12, cpy_r_file, cpy_r_r22);
    CPy_DECREF(cpy_r_file);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 352, CPyStatic_emitmodule___globals);
        goto CPyL55;
    }
    cpy_r_r25 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r25;
    goto CPyL7;
CPyL12: ;
    cpy_r_r26 = CPyDict_SetItem(cpy_r_hashes, cpy_r_name, cpy_r_r12);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 352, CPyStatic_emitmodule___globals);
        goto CPyL57;
    }
    cpy_r_r28 = CPyDict_CheckSize(cpy_r_ctext, cpy_r_r3);
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 351, CPyStatic_emitmodule___globals);
        goto CPyL57;
    } else
        goto CPyL2;
CPyL14: ;
    cpy_r_r29 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 351, CPyStatic_emitmodule___globals);
        goto CPyL49;
    }
    cpy_r_r30 = 0;
    cpy_r_r31 = PyDict_Size(cpy_r_modules);
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = CPyDict_GetItemsIter(cpy_r_modules);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 355, CPyStatic_emitmodule___globals);
        goto CPyL49;
    }
CPyL16: ;
    cpy_r_r34 = CPyDict_NextItem(cpy_r_r33, cpy_r_r30);
    cpy_r_r35 = cpy_r_r34.f1;
    cpy_r_r30 = cpy_r_r35;
    cpy_r_r36 = cpy_r_r34.f0;
    if (!cpy_r_r36) goto CPyL58;
    cpy_r_r37 = cpy_r_r34.f2;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = cpy_r_r34.f3;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r34.f2);
    CPy_DECREF(cpy_r_r34.f3);
    if (likely(PyUnicode_Check(cpy_r_r37)))
        cpy_r_r39 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "write_cache", 355, CPyStatic_emitmodule___globals, "str", cpy_r_r37);
        goto CPyL59;
    }
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_module_ir___ModuleIR))
        cpy_r_r40 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "write_cache", 355, CPyStatic_emitmodule___globals, "mypyc.ir.module_ir.ModuleIR", cpy_r_r38);
        goto CPyL60;
    }
    cpy_r_id = cpy_r_r39;
    cpy_r_module = cpy_r_r40;
    cpy_r_r41 = ((mypy___build___BuildResultObject *)cpy_r_result)->_graph;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = CPyDict_GetItem(cpy_r_r41, cpy_r_id);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 356, CPyStatic_emitmodule___globals);
        goto CPyL61;
    }
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_mypy___build___State))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "write_cache", 356, CPyStatic_emitmodule___globals, "mypy.build.State", cpy_r_r42);
        goto CPyL61;
    }
    cpy_r_st = cpy_r_r43;
    cpy_r_r44 = ((mypy___build___StateObject *)cpy_r_st)->_xpath;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = ((mypy___build___BuildResultObject *)cpy_r_result)->_manager;
    cpy_r_r46 = ((mypy___build___BuildManagerObject *)cpy_r_r45)->_options;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = CPyDef_mypy___build___get_cache_names(cpy_r_id, cpy_r_r44, cpy_r_r46);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 358, CPyStatic_emitmodule___globals);
        goto CPyL62;
    }
    cpy_r_r48 = cpy_r_r47.f0;
    CPy_INCREF(cpy_r_r48);
    cpy_r_meta_path = cpy_r_r48;
    cpy_r_r49 = cpy_r_r47.f1;
    CPy_INCREF(cpy_r_r49);
    cpy_r__ = cpy_r_r49;
    CPy_DECREF(cpy_r__);
    cpy_r_r50 = cpy_r_r47.f2;
    CPy_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r47.f0);
    CPy_DECREF(cpy_r_r47.f1);
    CPy_DECREF(cpy_r_r47.f2);
    cpy_r__ = cpy_r_r50;
    CPy_DECREF(cpy_r__);
    cpy_r_r51 = ((mypy___build___BuildResultObject *)cpy_r_result)->_manager;
    cpy_r_r52 = ((mypy___build___BuildManagerObject *)cpy_r_r51)->_metastore;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = CPY_GET_METHOD(cpy_r_r52, CPyType_metastore___MetadataStore, 1, mypy___metastore___MetadataStoreObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r52, cpy_r_meta_path); /* read */
    CPy_DECREF(cpy_r_meta_path);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 361, CPyStatic_emitmodule___globals);
        goto CPyL63;
    }
    cpy_r_meta_data = cpy_r_r53;
    goto CPyL32;
CPyL25: ;
    cpy_r_r54 = CPy_CatchError();
    cpy_r_r55 = CPyModule_builtins;
    cpy_r_r56 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 362, CPyStatic_emitmodule___globals);
        goto CPyL64;
    }
    cpy_r_r58 = CPy_ExceptionMatches(cpy_r_r57);
    CPy_DecRef(cpy_r_r57);
    if (!cpy_r_r58) goto CPyL65;
    CPy_RestoreExcInfo(cpy_r_r54);
    CPy_DecRef(cpy_r_r54.f0);
    CPy_DecRef(cpy_r_r54.f1);
    CPy_DecRef(cpy_r_r54.f2);
    goto CPyL44;
CPyL28: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL30;
    } else
        goto CPyL66;
CPyL29: ;
    CPy_Unreachable();
CPyL30: ;
    CPy_RestoreExcInfo(cpy_r_r54);
    CPy_DecRef(cpy_r_r54.f0);
    CPy_DecRef(cpy_r_r54.f1);
    CPy_DecRef(cpy_r_r54.f2);
    cpy_r_r59 = CPy_KeepPropagating();
    if (!cpy_r_r59) goto CPyL48;
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r60 = CPyDef_emitmodule___get_state_ir_cache_name(cpy_r_st);
    CPy_DECREF(cpy_r_st);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 365, CPyStatic_emitmodule___globals);
        goto CPyL67;
    }
    cpy_r_newpath = cpy_r_r60;
    cpy_r_r61 = CPyStatics[7422]; /* 'ir' */
    cpy_r_r62 = CPyDef_module_ir___ModuleIR___serialize(cpy_r_module);
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 367, CPyStatic_emitmodule___globals);
        goto CPyL68;
    }
    cpy_r_r63 = CPyStatics[7416]; /* 'meta_hash' */
    cpy_r_r64 = CPyDef_mypy___build___compute_hash(cpy_r_meta_data);
    CPy_DECREF(cpy_r_meta_data);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 368, CPyStatic_emitmodule___globals);
        goto CPyL69;
    }
    cpy_r_r65 = CPyStatics[7417]; /* 'src_hashes' */
    cpy_r_r66 = CPyDict_GetItem(cpy_r_group_map, cpy_r_id);
    CPy_DECREF(cpy_r_id);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 369, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    if (PyUnicode_Check(cpy_r_r66))
        cpy_r_r67 = cpy_r_r66;
    else {
        cpy_r_r67 = NULL;
    }
    if (cpy_r_r67 != NULL) goto __LL9586;
    if (cpy_r_r66 == Py_None)
        cpy_r_r67 = cpy_r_r66;
    else {
        cpy_r_r67 = NULL;
    }
    if (cpy_r_r67 != NULL) goto __LL9586;
    CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "write_cache", 369, CPyStatic_emitmodule___globals, "str or None", cpy_r_r66);
    goto CPyL70;
__LL9586: ;
    cpy_r_r68 = CPyDict_GetItem(cpy_r_hashes, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 369, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    if (likely(PyDict_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "write_cache", 369, CPyStatic_emitmodule___globals, "dict", cpy_r_r68);
        goto CPyL70;
    }
    cpy_r_r70 = CPyDict_Build(3, cpy_r_r61, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_r69);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 366, CPyStatic_emitmodule___globals);
        goto CPyL71;
    }
    cpy_r_ir_data = cpy_r_r70;
    cpy_r_r71 = ((mypy___build___BuildResultObject *)cpy_r_result)->_manager;
    cpy_r_r72 = ((mypy___build___BuildManagerObject *)cpy_r_r71)->_metastore;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = CPyStatics[242]; /* ',' */
    cpy_r_r74 = CPyStatics[171]; /* ':' */
    cpy_r_r75.f0 = cpy_r_r73;
    cpy_r_r75.f1 = cpy_r_r74;
    CPy_INCREF(cpy_r_r75.f0);
    CPy_INCREF(cpy_r_r75.f1);
    cpy_r_r76 = CPyModule_json;
    cpy_r_r77 = CPyStatics[243]; /* 'dumps' */
    cpy_r_r78 = CPyObject_GetAttr(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 372, CPyStatic_emitmodule___globals);
        goto CPyL72;
    }
    cpy_r_r79 = PyTuple_New(2);
    if (unlikely(cpy_r_r79 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9587 = cpy_r_r75.f0;
    PyTuple_SET_ITEM(cpy_r_r79, 0, __tmp9587);
    PyObject *__tmp9588 = cpy_r_r75.f1;
    PyTuple_SET_ITEM(cpy_r_r79, 1, __tmp9588);
    PyObject *cpy_r_r80[2] = {cpy_r_ir_data, cpy_r_r79};
    cpy_r_r81 = (PyObject **)&cpy_r_r80;
    cpy_r_r82 = CPyStatics[9099]; /* ('separators',) */
    cpy_r_r83 = _PyObject_Vectorcall(cpy_r_r78, cpy_r_r81, 1, cpy_r_r82);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 372, CPyStatic_emitmodule___globals);
        goto CPyL73;
    }
    CPy_DECREF(cpy_r_ir_data);
    CPy_DECREF(cpy_r_r79);
    if (likely(PyUnicode_Check(cpy_r_r83)))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "write_cache", 372, CPyStatic_emitmodule___globals, "str", cpy_r_r83);
        goto CPyL74;
    }
    cpy_r_r85 = NULL;
    cpy_r_r86 = CPY_GET_METHOD(cpy_r_r72, CPyType_metastore___MetadataStore, 2, mypy___metastore___MetadataStoreObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *))(cpy_r_r72, cpy_r_newpath, cpy_r_r84, cpy_r_r85); /* write */
    CPy_DECREF(cpy_r_newpath);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 372, CPyStatic_emitmodule___globals);
        goto CPyL75;
    }
CPyL44: ;
    cpy_r_r87 = CPyDict_CheckSize(cpy_r_modules, cpy_r_r32);
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 355, CPyStatic_emitmodule___globals);
        goto CPyL75;
    } else
        goto CPyL16;
CPyL45: ;
    cpy_r_r88 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 355, CPyStatic_emitmodule___globals);
        goto CPyL48;
    }
    cpy_r_r89 = ((mypy___build___BuildResultObject *)cpy_r_result)->_manager;
    cpy_r_r90 = ((mypy___build___BuildManagerObject *)cpy_r_r89)->_metastore;
    CPy_INCREF(cpy_r_r90);
    cpy_r_r91 = CPY_GET_METHOD(cpy_r_r90, CPyType_metastore___MetadataStore, 4, mypy___metastore___MetadataStoreObject, char (*)(PyObject *))(cpy_r_r90); /* commit */
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 374, CPyStatic_emitmodule___globals);
        goto CPyL48;
    }
    return 1;
CPyL48: ;
    cpy_r_r92 = 2;
    return cpy_r_r92;
CPyL49: ;
    CPy_DecRef(cpy_r_hashes);
    goto CPyL48;
CPyL50: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    goto CPyL14;
CPyL51: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r9);
    goto CPyL48;
CPyL52: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r10);
    goto CPyL48;
CPyL53: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_files);
    goto CPyL48;
CPyL54: ;
    CPy_DECREF(cpy_r_files);
    goto CPyL12;
CPyL55: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_files);
    CPy_DecRef(cpy_r_r12);
    goto CPyL48;
CPyL56: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_files);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_file);
    goto CPyL48;
CPyL57: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r4);
    goto CPyL48;
CPyL58: ;
    CPy_DECREF(cpy_r_hashes);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r34.f2);
    CPy_DECREF(cpy_r_r34.f3);
    goto CPyL45;
CPyL59: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r38);
    goto CPyL48;
CPyL60: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r39);
    goto CPyL48;
CPyL61: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_module);
    goto CPyL48;
CPyL62: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_st);
    goto CPyL48;
CPyL63: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_st);
    goto CPyL25;
CPyL64: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    goto CPyL30;
CPyL65: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    goto CPyL28;
CPyL66: ;
    CPy_DecRef(cpy_r_r54.f0);
    CPy_DecRef(cpy_r_r54.f1);
    CPy_DecRef(cpy_r_r54.f2);
    goto CPyL29;
CPyL67: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_meta_data);
    goto CPyL48;
CPyL68: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_meta_data);
    CPy_DecRef(cpy_r_newpath);
    goto CPyL48;
CPyL69: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_newpath);
    CPy_DecRef(cpy_r_r62);
    goto CPyL48;
CPyL70: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_newpath);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r64);
    goto CPyL48;
CPyL71: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_newpath);
    goto CPyL48;
CPyL72: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_newpath);
    CPy_DecRef(cpy_r_ir_data);
    CPy_DecRef(cpy_r_r72);
    CPy_DecRef(cpy_r_r75.f0);
    CPy_DecRef(cpy_r_r75.f1);
    goto CPyL48;
CPyL73: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_newpath);
    CPy_DecRef(cpy_r_ir_data);
    CPy_DecRef(cpy_r_r72);
    CPy_DecRef(cpy_r_r79);
    goto CPyL48;
CPyL74: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_newpath);
    CPy_DecRef(cpy_r_r72);
    goto CPyL48;
CPyL75: ;
    CPy_DecRef(cpy_r_hashes);
    CPy_DecRef(cpy_r_r33);
    goto CPyL48;
}

PyObject *CPyPy_emitmodule___write_cache(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"modules", "result", "group_map", "ctext", 0};
    static CPyArg_Parser parser = {"OOOO:write_cache", kwlist, 0};
    PyObject *obj_modules;
    PyObject *obj_result;
    PyObject *obj_group_map;
    PyObject *obj_ctext;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_modules, &obj_result, &obj_group_map, &obj_ctext)) {
        return NULL;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    PyObject *arg_result;
    if (likely(Py_TYPE(obj_result) == CPyType_mypy___build___BuildResult))
        arg_result = obj_result;
    else {
        CPy_TypeError("mypy.build.BuildResult", obj_result); 
        goto fail;
    }
    PyObject *arg_group_map;
    if (likely(PyDict_Check(obj_group_map)))
        arg_group_map = obj_group_map;
    else {
        CPy_TypeError("dict", obj_group_map); 
        goto fail;
    }
    PyObject *arg_ctext;
    if (likely(PyDict_Check(obj_ctext)))
        arg_ctext = obj_ctext;
    else {
        CPy_TypeError("dict", obj_ctext); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___write_cache(arg_modules, arg_result, arg_group_map, arg_ctext);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "write_cache", 324, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___load_scc_from_cache(PyObject *cpy_r_scc, PyObject *cpy_r_result, PyObject *cpy_r_mapper, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_k;
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
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_cache_data;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_modules;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 384, CPyStatic_emitmodule___globals);
        goto CPyL18;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_scc)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL15;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_scc, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___MypyFile))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 384, CPyStatic_emitmodule___globals, "mypy.nodes.MypyFile", cpy_r_r6);
        goto CPyL19;
    }
    cpy_r_k = cpy_r_r7;
    cpy_r_r8 = CPY_GET_ATTR(cpy_r_k, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 385, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
CPyL5: ;
    cpy_r_r9 = ((mypy___build___BuildResultObject *)cpy_r_result)->_manager;
    cpy_r_r10 = ((mypy___build___BuildManagerObject *)cpy_r_r9)->_metastore;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = ((mypy___build___BuildResultObject *)cpy_r_result)->_graph;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPY_GET_ATTR(cpy_r_k, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_k);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 386, CPyStatic_emitmodule___globals);
        goto CPyL21;
    }
CPyL6: ;
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 386, CPyStatic_emitmodule___globals);
        goto CPyL22;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_mypy___build___State))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 386, CPyStatic_emitmodule___globals, "mypy.build.State", cpy_r_r13);
        goto CPyL22;
    }
    cpy_r_r15 = CPyDef_emitmodule___get_state_ir_cache_name(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 386, CPyStatic_emitmodule___globals);
        goto CPyL22;
    }
    cpy_r_r16 = CPY_GET_METHOD(cpy_r_r10, CPyType_metastore___MetadataStore, 1, mypy___metastore___MetadataStoreObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r10, cpy_r_r15); /* read */
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 386, CPyStatic_emitmodule___globals);
        goto CPyL23;
    }
    cpy_r_r17 = CPyModule_json;
    cpy_r_r18 = CPyStatics[234]; /* 'loads' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 385, CPyStatic_emitmodule___globals);
        goto CPyL24;
    }
    PyObject *cpy_r_r20[1] = {cpy_r_r16};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = _PyObject_Vectorcall(cpy_r_r19, cpy_r_r21, 1, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 385, CPyStatic_emitmodule___globals);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_r16);
    cpy_r_r23 = CPyStatics[7422]; /* 'ir' */
    cpy_r_r24 = PyObject_GetItem(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 385, CPyStatic_emitmodule___globals);
        goto CPyL23;
    }
    cpy_r_r25 = CPyDict_SetItem(cpy_r_r0, cpy_r_r8, cpy_r_r24);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 384, CPyStatic_emitmodule___globals);
        goto CPyL19;
    }
    cpy_r_r27 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r27;
    goto CPyL2;
CPyL15: ;
    cpy_r_cache_data = cpy_r_r0;
    cpy_r_r28 = CPyDef_module_ir___deserialize_modules(cpy_r_cache_data, cpy_r_ctx);
    CPy_DECREF(cpy_r_cache_data);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 390, CPyStatic_emitmodule___globals);
        goto CPyL18;
    }
    cpy_r_modules = cpy_r_r28;
    cpy_r_r29 = CPyDef_prepare___load_type_map(cpy_r_mapper, cpy_r_scc, cpy_r_ctx);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 391, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    return cpy_r_modules;
CPyL18: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_k);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r11);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r16);
    goto CPyL18;
CPyL25: ;
    CPy_DecRef(cpy_r_modules);
    goto CPyL18;
}

PyObject *CPyPy_emitmodule___load_scc_from_cache(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"scc", "result", "mapper", "ctx", 0};
    static CPyArg_Parser parser = {"OOOO:load_scc_from_cache", kwlist, 0};
    PyObject *obj_scc;
    PyObject *obj_result;
    PyObject *obj_mapper;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_scc, &obj_result, &obj_mapper, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_scc;
    if (likely(PyList_Check(obj_scc)))
        arg_scc = obj_scc;
    else {
        CPy_TypeError("list", obj_scc); 
        goto fail;
    }
    PyObject *arg_result;
    if (likely(Py_TYPE(obj_result) == CPyType_mypy___build___BuildResult))
        arg_result = obj_result;
    else {
        CPy_TypeError("mypy.build.BuildResult", obj_result); 
        goto fail;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___load_scc_from_cache(arg_scc, arg_result, arg_mapper, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "load_scc_from_cache", 377, CPyStatic_emitmodule___globals);
    return NULL;
}

tuple_T2OO CPyDef_emitmodule___compile_modules_to_c(PyObject *cpy_r_result, PyObject *cpy_r_compiler_options, PyObject *cpy_r_errors, PyObject *cpy_r_groups) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_group;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_lib_name;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_group_map;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_mapper;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_modules;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_ctext;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    CPyPtr cpy_r_r36;
    int64_t cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    tuple_T2OO cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r__;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    CPyTagged cpy_r_r51;
    tuple_T2OO cpy_r_r52;
    tuple_T2OO cpy_r_r53;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 416, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_groups)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL10;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_groups, cpy_r_r1);
    PyObject *__tmp9589;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp9589 = NULL;
        goto __LL9590;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp9589 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp9589 = NULL;
    }
    if (__tmp9589 == NULL) goto __LL9590;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 1)))
        __tmp9589 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp9589 = NULL;
    }
    if (__tmp9589 != NULL) goto __LL9591;
    if (PyTuple_GET_ITEM(cpy_r_r6, 1) == Py_None)
        __tmp9589 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp9589 = NULL;
    }
    if (__tmp9589 != NULL) goto __LL9591;
    __tmp9589 = NULL;
__LL9591: ;
    if (__tmp9589 == NULL) goto __LL9590;
    __tmp9589 = cpy_r_r6;
__LL9590: ;
    if (unlikely(__tmp9589 == NULL)) {
        CPy_TypeError("tuple[list, union[str, None]]", cpy_r_r6); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9592 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp9592);
        PyObject *__tmp9593;
        if (likely(PyList_Check(__tmp9592)))
            __tmp9593 = __tmp9592;
        else {
            CPy_TypeError("list", __tmp9592); 
            __tmp9593 = NULL;
        }
        cpy_r_r7.f0 = __tmp9593;
        PyObject *__tmp9594 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp9594);
        PyObject *__tmp9595;
        if (PyUnicode_Check(__tmp9594))
            __tmp9595 = __tmp9594;
        else {
            __tmp9595 = NULL;
        }
        if (__tmp9595 != NULL) goto __LL9596;
        if (__tmp9594 == Py_None)
            __tmp9595 = __tmp9594;
        else {
            __tmp9595 = NULL;
        }
        if (__tmp9595 != NULL) goto __LL9596;
        CPy_TypeError("str or None", __tmp9594); 
        __tmp9595 = NULL;
__LL9596: ;
        cpy_r_r7.f1 = __tmp9595;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 416, CPyStatic_emitmodule___globals);
        goto CPyL26;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_group = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r_lib_name = cpy_r_r9;
    cpy_r_r10 = 0;
CPyL5: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_group)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL27;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_group, cpy_r_r10);
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_modulefinder___BuildSource))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 416, CPyStatic_emitmodule___globals, "mypy.modulefinder.BuildSource", cpy_r_r15);
        goto CPyL28;
    }
    cpy_r_source = cpy_r_r16;
    cpy_r_r17 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_module;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_source);
    cpy_r_r18 = CPyDict_SetItem(cpy_r_r0, cpy_r_r17, cpy_r_lib_name);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 416, CPyStatic_emitmodule___globals);
        goto CPyL28;
    }
    cpy_r_r20 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r20;
    goto CPyL5;
CPyL9: ;
    cpy_r_r21 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r21;
    goto CPyL2;
CPyL10: ;
    cpy_r_group_map = cpy_r_r0;
    cpy_r_r22 = CPyDef_mapper___Mapper(cpy_r_group_map);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 417, CPyStatic_emitmodule___globals);
        goto CPyL29;
    }
    cpy_r_mapper = cpy_r_r22;
    cpy_r_r23 = ((mypy___build___BuildResultObject *)cpy_r_result)->_manager;
    cpy_r_r24 = ((mypy___build___BuildManagerObject *)cpy_r_r23)->_errors;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[7423]; /* '<mypyc>' */
    cpy_r_r26 = ((mypy___build___BuildResultObject *)cpy_r_result)->_manager;
    cpy_r_r27 = ((mypy___build___BuildManagerObject *)cpy_r_r26)->_options;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = Py_None;
    cpy_r_r29 = Py_None;
    cpy_r_r30 = CPyDef_mypy___errors___Errors___set_file(cpy_r_r24, cpy_r_r25, cpy_r_r28, cpy_r_r27, cpy_r_r29);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 421, CPyStatic_emitmodule___globals);
        goto CPyL30;
    }
    cpy_r_r31 = CPyDef_emitmodule___compile_modules_to_ir(cpy_r_result, cpy_r_mapper, cpy_r_compiler_options, cpy_r_errors);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 425, CPyStatic_emitmodule___globals);
        goto CPyL30;
    }
    cpy_r_modules = cpy_r_r31;
    cpy_r_r32 = CPyDef_emitmodule___compile_ir_to_c(cpy_r_groups, cpy_r_modules, cpy_r_result, cpy_r_mapper, cpy_r_compiler_options);
    CPy_DECREF(cpy_r_mapper);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 426, CPyStatic_emitmodule___globals);
        goto CPyL31;
    }
    cpy_r_ctext = cpy_r_r32;
    cpy_r_r33 = ((mypyc___errors___ErrorsObject *)cpy_r_errors)->_num_errors;
    cpy_r_r34 = cpy_r_r33 == 0;
    if (!cpy_r_r34) goto CPyL32;
    cpy_r_r35 = CPyDef_emitmodule___write_cache(cpy_r_modules, cpy_r_result, cpy_r_group_map, cpy_r_ctext);
    CPy_DECREF(cpy_r_group_map);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 429, CPyStatic_emitmodule___globals);
        goto CPyL33;
    }
CPyL16: ;
    cpy_r_r36 = (CPyPtr)&((PyVarObject *)cpy_r_groups)->ob_size;
    cpy_r_r37 = *(int64_t *)cpy_r_r36;
    cpy_r_r38 = PyList_New(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 431, CPyStatic_emitmodule___globals);
        goto CPyL33;
    }
    cpy_r_r39 = 0;
CPyL18: ;
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_groups)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 << 1;
    cpy_r_r43 = (Py_ssize_t)cpy_r_r39 < (Py_ssize_t)cpy_r_r42;
    if (!cpy_r_r43) goto CPyL34;
    cpy_r_r44 = CPyList_GetItemUnsafe(cpy_r_groups, cpy_r_r39);
    PyObject *__tmp9597;
    if (unlikely(!(PyTuple_Check(cpy_r_r44) && PyTuple_GET_SIZE(cpy_r_r44) == 2))) {
        __tmp9597 = NULL;
        goto __LL9598;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r44, 0))))
        __tmp9597 = PyTuple_GET_ITEM(cpy_r_r44, 0);
    else {
        __tmp9597 = NULL;
    }
    if (__tmp9597 == NULL) goto __LL9598;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r44, 1)))
        __tmp9597 = PyTuple_GET_ITEM(cpy_r_r44, 1);
    else {
        __tmp9597 = NULL;
    }
    if (__tmp9597 != NULL) goto __LL9599;
    if (PyTuple_GET_ITEM(cpy_r_r44, 1) == Py_None)
        __tmp9597 = PyTuple_GET_ITEM(cpy_r_r44, 1);
    else {
        __tmp9597 = NULL;
    }
    if (__tmp9597 != NULL) goto __LL9599;
    __tmp9597 = NULL;
__LL9599: ;
    if (__tmp9597 == NULL) goto __LL9598;
    __tmp9597 = cpy_r_r44;
__LL9598: ;
    if (unlikely(__tmp9597 == NULL)) {
        CPy_TypeError("tuple[list, union[str, None]]", cpy_r_r44); cpy_r_r45 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9600 = PyTuple_GET_ITEM(cpy_r_r44, 0);
        CPy_INCREF(__tmp9600);
        PyObject *__tmp9601;
        if (likely(PyList_Check(__tmp9600)))
            __tmp9601 = __tmp9600;
        else {
            CPy_TypeError("list", __tmp9600); 
            __tmp9601 = NULL;
        }
        cpy_r_r45.f0 = __tmp9601;
        PyObject *__tmp9602 = PyTuple_GET_ITEM(cpy_r_r44, 1);
        CPy_INCREF(__tmp9602);
        PyObject *__tmp9603;
        if (PyUnicode_Check(__tmp9602))
            __tmp9603 = __tmp9602;
        else {
            __tmp9603 = NULL;
        }
        if (__tmp9603 != NULL) goto __LL9604;
        if (__tmp9602 == Py_None)
            __tmp9603 = __tmp9602;
        else {
            __tmp9603 = NULL;
        }
        if (__tmp9603 != NULL) goto __LL9604;
        CPy_TypeError("str or None", __tmp9602); 
        __tmp9603 = NULL;
__LL9604: ;
        cpy_r_r45.f1 = __tmp9603;
    }
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 431, CPyStatic_emitmodule___globals);
        goto CPyL35;
    }
    cpy_r_r46 = cpy_r_r45.f0;
    CPy_INCREF(cpy_r_r46);
    cpy_r__ = cpy_r_r46;
    CPy_DECREF(cpy_r__);
    cpy_r_r47 = cpy_r_r45.f1;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r45.f0);
    CPy_DECREF(cpy_r_r45.f1);
    cpy_r_name = cpy_r_r47;
    cpy_r_r48 = CPyDict_GetItem(cpy_r_ctext, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 431, CPyStatic_emitmodule___globals);
        goto CPyL35;
    }
    if (likely(PyList_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 431, CPyStatic_emitmodule___globals, "list", cpy_r_r48);
        goto CPyL35;
    }
    cpy_r_r50 = CPyList_SetItemUnsafe(cpy_r_r38, cpy_r_r39, cpy_r_r49);
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 431, CPyStatic_emitmodule___globals);
        goto CPyL35;
    }
    cpy_r_r51 = cpy_r_r39 + 2;
    cpy_r_r39 = cpy_r_r51;
    goto CPyL18;
CPyL24: ;
    cpy_r_r52.f0 = cpy_r_modules;
    cpy_r_r52.f1 = cpy_r_r38;
    CPy_INCREF(cpy_r_r52.f0);
    CPy_INCREF(cpy_r_r52.f1);
    CPy_DECREF(cpy_r_modules);
    CPy_DECREF(cpy_r_r38);
    return cpy_r_r52;
CPyL25: ;
    tuple_T2OO __tmp9605 = { NULL, NULL };
    cpy_r_r53 = __tmp9605;
    return cpy_r_r53;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL25;
CPyL27: ;
    CPy_DECREF(cpy_r_group);
    CPy_DECREF(cpy_r_lib_name);
    goto CPyL9;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_group);
    CPy_DecRef(cpy_r_lib_name);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_group_map);
    goto CPyL25;
CPyL30: ;
    CPy_DecRef(cpy_r_group_map);
    CPy_DecRef(cpy_r_mapper);
    goto CPyL25;
CPyL31: ;
    CPy_DecRef(cpy_r_group_map);
    CPy_DecRef(cpy_r_modules);
    goto CPyL25;
CPyL32: ;
    CPy_DECREF(cpy_r_group_map);
    goto CPyL16;
CPyL33: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_ctext);
    goto CPyL25;
CPyL34: ;
    CPy_DECREF(cpy_r_ctext);
    goto CPyL24;
CPyL35: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_ctext);
    CPy_DecRef(cpy_r_r38);
    goto CPyL25;
}

PyObject *CPyPy_emitmodule___compile_modules_to_c(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"result", "compiler_options", "errors", "groups", 0};
    static CPyArg_Parser parser = {"OOOO:compile_modules_to_c", kwlist, 0};
    PyObject *obj_result;
    PyObject *obj_compiler_options;
    PyObject *obj_errors;
    PyObject *obj_groups;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_result, &obj_compiler_options, &obj_errors, &obj_groups)) {
        return NULL;
    }
    PyObject *arg_result;
    if (likely(Py_TYPE(obj_result) == CPyType_mypy___build___BuildResult))
        arg_result = obj_result;
    else {
        CPy_TypeError("mypy.build.BuildResult", obj_result); 
        goto fail;
    }
    PyObject *arg_compiler_options;
    if (likely(Py_TYPE(obj_compiler_options) == CPyType_mypyc___options___CompilerOptions))
        arg_compiler_options = obj_compiler_options;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", obj_compiler_options); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypyc___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_errors); 
        goto fail;
    }
    PyObject *arg_groups;
    if (likely(PyList_Check(obj_groups)))
        arg_groups = obj_groups;
    else {
        CPy_TypeError("list", obj_groups); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_emitmodule___compile_modules_to_c(arg_result, arg_compiler_options, arg_errors, arg_groups);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9606 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp9606);
    PyObject *__tmp9607 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp9607);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "compile_modules_to_c", 395, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___generate_function_declaration(PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    tuple_T2II cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_decl;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_emitfunc___native_function_header(cpy_r_r0, cpy_r_emitter);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 436, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    cpy_r_r2 = CPyStatics[6886]; /* ';' */
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 436, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    cpy_r_r4 = NULL;
    cpy_r_r5 = NULL;
    cpy_r_r6 = 2;
    cpy_r_r7 = CPyDef_emit___HeaderDeclaration(cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6, 1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 435, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    cpy_r_r8 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_context;
    cpy_r_r9 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r8)->_declarations;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_decl;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_emit___Emitter___native_function_name(cpy_r_emitter, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 435, CPyStatic_emitmodule___globals);
        goto CPyL26;
    }
    cpy_r_r12 = CPyDict_SetItem(cpy_r_r9, cpy_r_r11, cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 435, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    cpy_r_r14 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 438, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
CPyL6: ;
    cpy_r_r15 = CPyStatics[7424]; /* '__top_level__' */
    cpy_r_r16 = PyUnicode_Compare(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r17 = cpy_r_r16 == -1;
    if (!cpy_r_r17) goto CPyL9;
    cpy_r_r18 = PyErr_Occurred();
    cpy_r_r19 = cpy_r_r18 != NULL;
    if (!cpy_r_r19) goto CPyL9;
    cpy_r_r20 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 438, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
CPyL9: ;
    cpy_r_r21 = cpy_r_r16 != 0;
    if (!cpy_r_r21) goto CPyL24;
    cpy_r_r22 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_capi_version;
    CPyTagged_INCREF(cpy_r_r22.f0);
    CPyTagged_INCREF(cpy_r_r22.f1);
    cpy_r_r23 = CPyDef_emitmodule___is_fastcall_supported(cpy_r_fn, cpy_r_r22);
    CPyTagged_DECREF(cpy_r_r22.f0);
    CPyTagged_DECREF(cpy_r_r22.f1);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 439, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    if (!cpy_r_r23) goto CPyL18;
    cpy_r_r24 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyDef_emitwrapper___wrapper_function_header(cpy_r_fn, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 441, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    cpy_r_r26 = CPyStatics[6886]; /* ';' */
    cpy_r_r27 = CPyStr_Build(2, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 441, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    cpy_r_r28 = NULL;
    cpy_r_r29 = NULL;
    cpy_r_r30 = 2;
    cpy_r_r31 = 2;
    cpy_r_r32 = CPyDef_emit___HeaderDeclaration(cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 440, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    cpy_r_r33 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_context;
    cpy_r_r34 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r33)->_declarations;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[7069]; /* 'CPyPy_' */
    cpy_r_r36 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 440, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r38 = PyUnicode_Concat(cpy_r_r35, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 440, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r34, cpy_r_r38, cpy_r_r32);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 440, CPyStatic_emitmodule___globals);
        goto CPyL25;
    } else
        goto CPyL24;
CPyL18: ;
    cpy_r_r41 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = CPyDef_emitwrapper___legacy_wrapper_function_header(cpy_r_fn, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 445, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    cpy_r_r43 = CPyStatics[6886]; /* ';' */
    cpy_r_r44 = CPyStr_Build(2, cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 445, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    cpy_r_r45 = NULL;
    cpy_r_r46 = NULL;
    cpy_r_r47 = 2;
    cpy_r_r48 = 2;
    cpy_r_r49 = CPyDef_emit___HeaderDeclaration(cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 444, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    cpy_r_r50 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_context;
    cpy_r_r51 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r50)->_declarations;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = CPyStatics[7069]; /* 'CPyPy_' */
    cpy_r_r53 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 444, CPyStatic_emitmodule___globals);
        goto CPyL28;
    }
    cpy_r_r55 = PyUnicode_Concat(cpy_r_r52, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 444, CPyStatic_emitmodule___globals);
        goto CPyL28;
    }
    cpy_r_r56 = CPyDict_SetItem(cpy_r_r51, cpy_r_r55, cpy_r_r49);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 444, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
CPyL24: ;
    return 1;
CPyL25: ;
    cpy_r_r58 = 2;
    return cpy_r_r58;
CPyL26: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r9);
    goto CPyL25;
CPyL27: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r34);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r51);
    goto CPyL25;
}

PyObject *CPyPy_emitmodule___generate_function_declaration(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "emitter", 0};
    static CPyArg_Parser parser = {"OO:generate_function_declaration", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___generate_function_declaration(arg_fn, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_function_declaration", 434, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___pointerize(PyObject *cpy_r_decl, PyObject *cpy_r_name) {
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
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyStatics[2381]; /* '(' */
    cpy_r_r1 = PySequence_Contains(cpy_r_decl, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "pointerize", 452, CPyStatic_emitmodule___globals);
        goto CPyL8;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL5;
    cpy_r_r4 = CPyStatics[7425]; /* '(*' */
    cpy_r_r5 = CPyStatics[72]; /* ')' */
    cpy_r_r6 = CPyStr_Build(3, cpy_r_r4, cpy_r_name, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "pointerize", 454, CPyStatic_emitmodule___globals);
        goto CPyL8;
    }
    cpy_r_r7 = PyUnicode_Replace(cpy_r_decl, cpy_r_name, cpy_r_r6, -1);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "pointerize", 454, CPyStatic_emitmodule___globals);
        goto CPyL8;
    }
    return cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = CPyStatics[282]; /* '*' */
    cpy_r_r9 = CPyStr_Build(2, cpy_r_r8, cpy_r_name);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "pointerize", 457, CPyStatic_emitmodule___globals);
        goto CPyL8;
    }
    cpy_r_r10 = PyUnicode_Replace(cpy_r_decl, cpy_r_name, cpy_r_r9, -1);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "pointerize", 457, CPyStatic_emitmodule___globals);
        goto CPyL8;
    }
    return cpy_r_r10;
CPyL8: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
}

PyObject *CPyPy_emitmodule___pointerize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"decl", "name", 0};
    static CPyArg_Parser parser = {"OO:pointerize", kwlist, 0};
    PyObject *obj_decl;
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_decl, &obj_name)) {
        return NULL;
    }
    PyObject *arg_decl;
    if (likely(PyUnicode_Check(obj_decl)))
        arg_decl = obj_decl;
    else {
        CPy_TypeError("str", obj_decl); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___pointerize(arg_decl, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "pointerize", 449, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___group_dir(PyObject *cpy_r_group_name) {
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
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "group_dir", 462, CPyStatic_emitmodule___globals);
        goto CPyL7;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "group_dir", 462, CPyStatic_emitmodule___globals, "str", cpy_r_r2);
        goto CPyL7;
    }
    cpy_r_r4 = CPyStatics[224]; /* '.' */
    cpy_r_r5 = PyUnicode_Split(cpy_r_group_name, cpy_r_r4, -1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "group_dir", 462, CPyStatic_emitmodule___globals);
        goto CPyL8;
    }
    cpy_r_r6 = CPyList_GetSlice(cpy_r_r5, 0, -2);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "group_dir", 462, CPyStatic_emitmodule___globals);
        goto CPyL8;
    }
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "group_dir", 462, CPyStatic_emitmodule___globals, "list", cpy_r_r6);
        goto CPyL8;
    }
    cpy_r_r8 = PyUnicode_Join(cpy_r_r3, cpy_r_r7);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "group_dir", 462, CPyStatic_emitmodule___globals);
        goto CPyL7;
    }
    return cpy_r_r8;
CPyL7: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL8: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
}

PyObject *CPyPy_emitmodule___group_dir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"group_name", 0};
    static CPyArg_Parser parser = {"O:group_dir", kwlist, 0};
    PyObject *obj_group_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_group_name)) {
        return NULL;
    }
    PyObject *arg_group_name;
    if (likely(PyUnicode_Check(obj_group_name)))
        arg_group_name = obj_group_name;
    else {
        CPy_TypeError("str", obj_group_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___group_dir(arg_group_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "group_dir", 460, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___GroupGenerator_____init__(PyObject *cpy_r_self, PyObject *cpy_r_modules, PyObject *cpy_r_source_paths, PyObject *cpy_r_group_name, PyObject *cpy_r_group_map, PyObject *cpy_r_names, PyObject *cpy_r_compiler_options) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    CPy_INCREF(cpy_r_modules);
    ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_modules = cpy_r_modules;
    CPy_INCREF(cpy_r_source_paths);
    ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_source_paths = cpy_r_source_paths;
    cpy_r_r0 = CPyDef_emit___EmitterContext(cpy_r_names, cpy_r_group_name, cpy_r_group_map);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__init__", 492, CPyStatic_emitmodule___globals);
        goto CPyL3;
    }
    ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_context = cpy_r_r0;
    CPy_INCREF(cpy_r_names);
    ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_names = cpy_r_names;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__init__", 496, CPyStatic_emitmodule___globals);
        goto CPyL3;
    }
    ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_simple_inits = cpy_r_r1;
    CPy_INCREF(cpy_r_group_name);
    ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_group_name = cpy_r_group_name;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_group_name != cpy_r_r2;
    ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_use_shared_lib = cpy_r_r3;
    CPy_INCREF(cpy_r_compiler_options);
    ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_compiler_options = cpy_r_compiler_options;
    cpy_r_r4 = ((mypyc___options___CompilerOptionsObject *)cpy_r_compiler_options)->_multi_file;
    ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_multi_file = cpy_r_r4;
    return 1;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_emitmodule___GroupGenerator_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"modules", "source_paths", "group_name", "group_map", "names", "compiler_options", 0};
    PyObject *obj_modules;
    PyObject *obj_source_paths;
    PyObject *obj_group_name;
    PyObject *obj_group_map;
    PyObject *obj_names;
    PyObject *obj_compiler_options;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOOOO", "__init__", kwlist, &obj_modules, &obj_source_paths, &obj_group_name, &obj_group_map, &obj_names, &obj_compiler_options)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyDict_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("dict", obj_modules); 
        goto fail;
    }
    PyObject *arg_source_paths;
    if (likely(PyDict_Check(obj_source_paths)))
        arg_source_paths = obj_source_paths;
    else {
        CPy_TypeError("dict", obj_source_paths); 
        goto fail;
    }
    PyObject *arg_group_name;
    if (PyUnicode_Check(obj_group_name))
        arg_group_name = obj_group_name;
    else {
        arg_group_name = NULL;
    }
    if (arg_group_name != NULL) goto __LL9608;
    if (obj_group_name == Py_None)
        arg_group_name = obj_group_name;
    else {
        arg_group_name = NULL;
    }
    if (arg_group_name != NULL) goto __LL9608;
    CPy_TypeError("str or None", obj_group_name); 
    goto fail;
__LL9608: ;
    PyObject *arg_group_map;
    if (likely(PyDict_Check(obj_group_map)))
        arg_group_map = obj_group_map;
    else {
        CPy_TypeError("dict", obj_group_map); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(Py_TYPE(obj_names) == CPyType_namegen___NameGenerator))
        arg_names = obj_names;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", obj_names); 
        goto fail;
    }
    PyObject *arg_compiler_options;
    if (likely(Py_TYPE(obj_compiler_options) == CPyType_mypyc___options___CompilerOptions))
        arg_compiler_options = obj_compiler_options;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", obj_compiler_options); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___GroupGenerator_____init__(arg_self, arg_modules, arg_source_paths, arg_group_name, arg_group_map, arg_names, arg_compiler_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__init__", 466, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___GroupGenerator___group_suffix(PyObject *cpy_r_self) {
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
    cpy_r_r0 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_group_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL10;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "group_suffix", 504, CPyStatic_emitmodule___globals, "str", cpy_r_r0);
        goto CPyL9;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL7;
    cpy_r_r5 = CPyStatics[755]; /* '_' */
    cpy_r_r6 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_group_name;
    CPy_INCREF(cpy_r_r6);
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "group_suffix", 504, CPyStatic_emitmodule___globals, "str", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_r8 = CPyDef_namegen___exported_name(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "group_suffix", 504, CPyStatic_emitmodule___globals);
        goto CPyL9;
    }
    cpy_r_r9 = PyUnicode_Concat(cpy_r_r5, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "group_suffix", 504, CPyStatic_emitmodule___globals);
        goto CPyL9;
    }
    cpy_r_r10 = cpy_r_r9;
    goto CPyL8;
CPyL7: ;
    cpy_r_r11 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r11);
    cpy_r_r10 = cpy_r_r11;
CPyL8: ;
    return cpy_r_r10;
CPyL9: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL10: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
}

PyObject *CPyPy_emitmodule___GroupGenerator___group_suffix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":group_suffix", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___GroupGenerator___group_suffix(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "group_suffix", 503, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___GroupGenerator___short_group_suffix(PyObject *cpy_r_self) {
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
    PyObject *cpy_r_r16;
    cpy_r_r0 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_group_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL13;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "short_group_suffix", 508, CPyStatic_emitmodule___globals, "str", cpy_r_r0);
        goto CPyL12;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL10;
    cpy_r_r5 = CPyStatics[755]; /* '_' */
    cpy_r_r6 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_group_name;
    CPy_INCREF(cpy_r_r6);
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "short_group_suffix", 508, CPyStatic_emitmodule___globals, "str", cpy_r_r6);
        goto CPyL12;
    }
    cpy_r_r8 = CPyStatics[224]; /* '.' */
    cpy_r_r9 = PyUnicode_Split(cpy_r_r7, cpy_r_r8, -1);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "short_group_suffix", 508, CPyStatic_emitmodule___globals);
        goto CPyL12;
    }
    cpy_r_r10 = CPyList_GetItemShort(cpy_r_r9, -2);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "short_group_suffix", 508, CPyStatic_emitmodule___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "short_group_suffix", 508, CPyStatic_emitmodule___globals, "str", cpy_r_r10);
        goto CPyL12;
    }
    cpy_r_r12 = CPyDef_namegen___exported_name(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "short_group_suffix", 508, CPyStatic_emitmodule___globals);
        goto CPyL12;
    }
    cpy_r_r13 = PyUnicode_Concat(cpy_r_r5, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "short_group_suffix", 508, CPyStatic_emitmodule___globals);
        goto CPyL12;
    }
    cpy_r_r14 = cpy_r_r13;
    goto CPyL11;
CPyL10: ;
    cpy_r_r15 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r15);
    cpy_r_r14 = cpy_r_r15;
CPyL11: ;
    return cpy_r_r14;
CPyL12: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL10;
}

PyObject *CPyPy_emitmodule___GroupGenerator___short_group_suffix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":short_group_suffix", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___GroupGenerator___short_group_suffix(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "short_group_suffix", 507, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___GroupGenerator___generate_c_for_modules(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_file_contents;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_multi_file;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T3CIO cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_fn;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_base_emitter;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_emitter;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyTagged cpy_r_r63;
    int64_t cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    tuple_T4CIOO cpy_r_r67;
    CPyTagged cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_module_name;
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
    char cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyTagged cpy_r_r95;
    CPyPtr cpy_r_r96;
    int64_t cpy_r_r97;
    CPyTagged cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_cl;
    char cpy_r_r102;
    char cpy_r_r103;
    CPyTagged cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    CPyTagged cpy_r_r107;
    CPyPtr cpy_r_r108;
    int64_t cpy_r_r109;
    CPyTagged cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
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
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    tuple_T2II cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    CPyTagged cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    tuple_T2OO cpy_r_r152;
    PyObject *cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    char cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_ext_declarations;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_declarations;
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
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    CPyTagged cpy_r_r218;
    int64_t cpy_r_r219;
    CPyTagged cpy_r_r220;
    PyObject *cpy_r_r221;
    tuple_T4CIOO cpy_r_r222;
    CPyTagged cpy_r_r223;
    char cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    char cpy_r_r230;
    PyObject *cpy_r_r231;
    CPyTagged cpy_r_r232;
    CPyPtr cpy_r_r233;
    int64_t cpy_r_r234;
    CPyTagged cpy_r_r235;
    char cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    char cpy_r_r239;
    CPyTagged cpy_r_r240;
    PyObject *cpy_r_r241;
    CPyTagged cpy_r_r242;
    CPyPtr cpy_r_r243;
    int64_t cpy_r_r244;
    CPyTagged cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    char cpy_r_r249;
    CPyTagged cpy_r_r250;
    char cpy_r_r251;
    char cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject **cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    CPyTagged cpy_r_r262;
    CPyPtr cpy_r_r263;
    int64_t cpy_r_r264;
    CPyTagged cpy_r_r265;
    char cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_lib;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_elib;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_short_lib;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject **cpy_r_r285;
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
    char cpy_r_r296;
    CPyTagged cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_sorted_decls;
    char cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    char cpy_r_r302;
    CPyTagged cpy_r_r303;
    CPyPtr cpy_r_r304;
    int64_t cpy_r_r305;
    CPyTagged cpy_r_r306;
    char cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_declaration;
    char cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_decls;
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
    PyObject *cpy_r_r323;
    CPyPtr cpy_r_r324;
    CPyPtr cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    char cpy_r_r332;
    PyObject *cpy_r_r333;
    CPyPtr cpy_r_r334;
    int64_t cpy_r_r335;
    CPyTagged cpy_r_r336;
    char cpy_r_r337;
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
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    CPyTagged cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    char cpy_r_r366;
    PyObject *cpy_r_r367;
    char cpy_r_r368;
    char cpy_r_r369;
    char cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    char cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    char cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    char cpy_r_r379;
    PyObject *cpy_r_r380;
    char cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_output_dir;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject **cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    tuple_T2OO cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject **cpy_r_r414;
    PyObject *cpy_r_r415;
    PyObject *cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    tuple_T2OO cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    PyObject **cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    PyObject *cpy_r_r435;
    PyObject *cpy_r_r436;
    tuple_T2OO cpy_r_r437;
    PyObject *cpy_r_r438;
    PyObject *cpy_r_r439;
    PyObject *cpy_r_r440;
    PyObject *cpy_r_r441;
    CPyPtr cpy_r_r442;
    CPyPtr cpy_r_r443;
    CPyPtr cpy_r_r444;
    CPyPtr cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 511, CPyStatic_emitmodule___globals);
        goto CPyL229;
    }
    cpy_r_file_contents = cpy_r_r0;
    cpy_r_r1 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_use_shared_lib;
    if (cpy_r_r1) goto CPyL3;
CPyL2: ;
    cpy_r_r2 = cpy_r_r1;
    goto CPyL4;
CPyL3: ;
    cpy_r_r3 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_multi_file;
    cpy_r_r2 = cpy_r_r3;
CPyL4: ;
    cpy_r_multi_file = cpy_r_r2;
    cpy_r_r4 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_modules;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = 0;
    cpy_r_r6 = PyDict_Size(cpy_r_r4);
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = CPyDict_GetValuesIter(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 515, CPyStatic_emitmodule___globals);
        goto CPyL230;
    }
CPyL5: ;
    cpy_r_r9 = CPyDict_NextValue(cpy_r_r8, cpy_r_r5);
    cpy_r_r10 = cpy_r_r9.f1;
    cpy_r_r5 = cpy_r_r10;
    cpy_r_r11 = cpy_r_r9.f0;
    if (!cpy_r_r11) goto CPyL231;
    cpy_r_r12 = cpy_r_r9.f2;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r9.f2);
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_module_ir___ModuleIR))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 515, CPyStatic_emitmodule___globals, "mypyc.ir.module_ir.ModuleIR", cpy_r_r12);
        goto CPyL232;
    }
    cpy_r_module = cpy_r_r13;
    cpy_r_r14 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_functions;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_module);
    cpy_r_r15 = 0;
CPyL8: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL233;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_func_ir___FuncIR))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 516, CPyStatic_emitmodule___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r20);
        goto CPyL234;
    }
    cpy_r_fn = cpy_r_r21;
    cpy_r_r22 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_context;
    cpy_r_r23 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r22)->_literals;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyDef_emitmodule___collect_literals(cpy_r_fn, cpy_r_r23);
    CPy_DECREF(cpy_r_fn);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 517, CPyStatic_emitmodule___globals);
        goto CPyL234;
    }
    cpy_r_r25 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r25;
    goto CPyL8;
CPyL12: ;
    cpy_r_r26 = CPyDict_CheckSize(cpy_r_r4, cpy_r_r7);
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 515, CPyStatic_emitmodule___globals);
        goto CPyL232;
    } else
        goto CPyL5;
CPyL13: ;
    cpy_r_r27 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 515, CPyStatic_emitmodule___globals);
        goto CPyL235;
    }
    cpy_r_r28 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_context;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = NULL;
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_emit___Emitter(cpy_r_r28, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 519, CPyStatic_emitmodule___globals);
        goto CPyL235;
    }
    cpy_r_base_emitter = cpy_r_r31;
    cpy_r_r32 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_compiler_options;
    cpy_r_r33 = ((mypyc___options___CompilerOptionsObject *)cpy_r_r32)->_include_runtime_files;
    if (!cpy_r_r33) goto CPyL25;
CPyL16: ;
    cpy_r_r34 = CPyStatic_mypyc___common___RUNTIME_C_FILES;
    if (unlikely(cpy_r_r34 == NULL)) {
        goto CPyL236;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"RUNTIME_C_FILES\" was not set");
    cpy_r_r35 = 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 523, CPyStatic_emitmodule___globals);
        goto CPyL229;
    }
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r36 = 0;
CPyL20: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r34)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r36 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r40) goto CPyL25;
    cpy_r_r41 = CPyList_GetItemUnsafe(cpy_r_r34, cpy_r_r36);
    if (likely(PyUnicode_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 523, CPyStatic_emitmodule___globals, "str", cpy_r_r41);
        goto CPyL237;
    }
    cpy_r_name = cpy_r_r42;
    cpy_r_r43 = CPyStatics[7426]; /* '#include "' */
    cpy_r_r44 = CPyStatics[178]; /* '"' */
    cpy_r_r45 = CPyStr_Build(3, cpy_r_r43, cpy_r_name, cpy_r_r44);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 524, CPyStatic_emitmodule___globals);
        goto CPyL237;
    }
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPyDef_emit___Emitter___emit_line(cpy_r_base_emitter, cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 524, CPyStatic_emitmodule___globals);
        goto CPyL237;
    }
    cpy_r_r48 = cpy_r_r36 + 2;
    cpy_r_r36 = cpy_r_r48;
    goto CPyL20;
CPyL25: ;
    cpy_r_r49 = CPyStatics[7427]; /* '#include "__native' */
    cpy_r_r50 = CPY_GET_ATTR(cpy_r_self, CPyType_emitmodule___GroupGenerator, 2, mypyc___codegen___emitmodule___GroupGeneratorObject, PyObject *); /* short_group_suffix */
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 525, CPyStatic_emitmodule___globals);
        goto CPyL237;
    }
CPyL26: ;
    cpy_r_r51 = CPyStatics[7428]; /* '.h"' */
    cpy_r_r52 = CPyStr_Build(3, cpy_r_r49, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 525, CPyStatic_emitmodule___globals);
        goto CPyL237;
    }
    cpy_r_r53 = NULL;
    cpy_r_r54 = CPyDef_emit___Emitter___emit_line(cpy_r_base_emitter, cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 525, CPyStatic_emitmodule___globals);
        goto CPyL237;
    }
    cpy_r_r55 = CPyStatics[7429]; /* '#include "__native_internal' */
    cpy_r_r56 = CPY_GET_ATTR(cpy_r_self, CPyType_emitmodule___GroupGenerator, 2, mypyc___codegen___emitmodule___GroupGeneratorObject, PyObject *); /* short_group_suffix */
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 526, CPyStatic_emitmodule___globals);
        goto CPyL237;
    }
CPyL29: ;
    cpy_r_r57 = CPyStatics[7428]; /* '.h"' */
    cpy_r_r58 = CPyStr_Build(3, cpy_r_r55, cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 526, CPyStatic_emitmodule___globals);
        goto CPyL237;
    }
    cpy_r_r59 = NULL;
    cpy_r_r60 = CPyDef_emit___Emitter___emit_line(cpy_r_base_emitter, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 526, CPyStatic_emitmodule___globals);
        goto CPyL237;
    }
    CPy_INCREF(cpy_r_base_emitter);
    cpy_r_emitter = cpy_r_base_emitter;
    cpy_r_r61 = CPyDef_emitmodule___GroupGenerator___generate_literal_tables(cpy_r_self);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 529, CPyStatic_emitmodule___globals);
        goto CPyL238;
    }
    cpy_r_r62 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_modules;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = 0;
    cpy_r_r64 = PyDict_Size(cpy_r_r62);
    cpy_r_r65 = cpy_r_r64 << 1;
    cpy_r_r66 = CPyDict_GetItemsIter(cpy_r_r62);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 531, CPyStatic_emitmodule___globals);
        goto CPyL239;
    }
CPyL33: ;
    cpy_r_r67 = CPyDict_NextItem(cpy_r_r66, cpy_r_r63);
    cpy_r_r68 = cpy_r_r67.f1;
    cpy_r_r63 = cpy_r_r68;
    cpy_r_r69 = cpy_r_r67.f0;
    if (!cpy_r_r69) goto CPyL240;
    cpy_r_r70 = cpy_r_r67.f2;
    CPy_INCREF(cpy_r_r70);
    cpy_r_r71 = cpy_r_r67.f3;
    CPy_INCREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r67.f2);
    CPy_DECREF(cpy_r_r67.f3);
    if (likely(PyUnicode_Check(cpy_r_r70)))
        cpy_r_r72 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 531, CPyStatic_emitmodule___globals, "str", cpy_r_r70);
        goto CPyL241;
    }
    if (likely(Py_TYPE(cpy_r_r71) == CPyType_module_ir___ModuleIR))
        cpy_r_r73 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 531, CPyStatic_emitmodule___globals, "mypyc.ir.module_ir.ModuleIR", cpy_r_r71);
        goto CPyL242;
    }
    cpy_r_module_name = cpy_r_r72;
    cpy_r_module = cpy_r_r73;
    if (cpy_r_multi_file) {
        goto CPyL243;
    } else
        goto CPyL44;
CPyL37: ;
    cpy_r_r74 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_context;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = NULL;
    cpy_r_r76 = NULL;
    cpy_r_r77 = CPyDef_emit___Emitter(cpy_r_r74, cpy_r_r75, cpy_r_r76);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 533, CPyStatic_emitmodule___globals);
        goto CPyL244;
    }
    cpy_r_emitter = cpy_r_r77;
    cpy_r_r78 = CPyStatics[7427]; /* '#include "__native' */
    cpy_r_r79 = CPY_GET_ATTR(cpy_r_self, CPyType_emitmodule___GroupGenerator, 2, mypyc___codegen___emitmodule___GroupGeneratorObject, PyObject *); /* short_group_suffix */
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 534, CPyStatic_emitmodule___globals);
        goto CPyL245;
    }
CPyL39: ;
    cpy_r_r80 = CPyStatics[7428]; /* '.h"' */
    cpy_r_r81 = CPyStr_Build(3, cpy_r_r78, cpy_r_r79, cpy_r_r80);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 534, CPyStatic_emitmodule___globals);
        goto CPyL245;
    }
    cpy_r_r82 = NULL;
    cpy_r_r83 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 534, CPyStatic_emitmodule___globals);
        goto CPyL245;
    }
    cpy_r_r84 = CPyStatics[7429]; /* '#include "__native_internal' */
    cpy_r_r85 = CPY_GET_ATTR(cpy_r_self, CPyType_emitmodule___GroupGenerator, 2, mypyc___codegen___emitmodule___GroupGeneratorObject, PyObject *); /* short_group_suffix */
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 535, CPyStatic_emitmodule___globals);
        goto CPyL245;
    }
CPyL42: ;
    cpy_r_r86 = CPyStatics[7428]; /* '.h"' */
    cpy_r_r87 = CPyStr_Build(3, cpy_r_r84, cpy_r_r85, cpy_r_r86);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 535, CPyStatic_emitmodule___globals);
        goto CPyL245;
    }
    cpy_r_r88 = NULL;
    cpy_r_r89 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r89 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 535, CPyStatic_emitmodule___globals);
        goto CPyL245;
    }
CPyL44: ;
    cpy_r_r90 = CPyDef_emitmodule___GroupGenerator___declare_module(cpy_r_self, cpy_r_module_name, cpy_r_emitter);
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 537, CPyStatic_emitmodule___globals);
        goto CPyL245;
    }
    cpy_r_r91 = CPyDef_emitmodule___GroupGenerator___declare_internal_globals(cpy_r_self, cpy_r_module_name, cpy_r_emitter);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 538, CPyStatic_emitmodule___globals);
        goto CPyL245;
    }
    cpy_r_r92 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_imports;
    CPy_INCREF(cpy_r_r92);
    cpy_r_r93 = CPyDef_emitmodule___GroupGenerator___declare_imports(cpy_r_self, cpy_r_r92, cpy_r_emitter);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 539, CPyStatic_emitmodule___globals);
        goto CPyL245;
    }
    cpy_r_r94 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_classes;
    CPy_INCREF(cpy_r_r94);
    cpy_r_r95 = 0;
CPyL48: ;
    cpy_r_r96 = (CPyPtr)&((PyVarObject *)cpy_r_r94)->ob_size;
    cpy_r_r97 = *(int64_t *)cpy_r_r96;
    cpy_r_r98 = cpy_r_r97 << 1;
    cpy_r_r99 = (Py_ssize_t)cpy_r_r95 < (Py_ssize_t)cpy_r_r98;
    if (!cpy_r_r99) goto CPyL246;
    cpy_r_r100 = CPyList_GetItemUnsafe(cpy_r_r94, cpy_r_r95);
    if (likely(Py_TYPE(cpy_r_r100) == CPyType_class_ir___ClassIR))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 541, CPyStatic_emitmodule___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r100);
        goto CPyL247;
    }
    cpy_r_cl = cpy_r_r101;
    cpy_r_r102 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_ext_class;
    if (!cpy_r_r102) goto CPyL248;
CPyL51: ;
    cpy_r_r103 = CPyDef_emitclass___generate_class(cpy_r_cl, cpy_r_module_name, cpy_r_emitter);
    CPy_DECREF(cpy_r_cl);
    if (unlikely(cpy_r_r103 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 543, CPyStatic_emitmodule___globals);
        goto CPyL247;
    }
CPyL52: ;
    cpy_r_r104 = cpy_r_r95 + 2;
    cpy_r_r95 = cpy_r_r104;
    goto CPyL48;
CPyL53: ;
    cpy_r_r105 = CPyDef_emitmodule___GroupGenerator___generate_module_def(cpy_r_self, cpy_r_emitter, cpy_r_module_name, cpy_r_module);
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 546, CPyStatic_emitmodule___globals);
        goto CPyL245;
    }
    cpy_r_r106 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_functions;
    CPy_INCREF(cpy_r_r106);
    CPy_DECREF(cpy_r_module);
    cpy_r_r107 = 0;
CPyL55: ;
    cpy_r_r108 = (CPyPtr)&((PyVarObject *)cpy_r_r106)->ob_size;
    cpy_r_r109 = *(int64_t *)cpy_r_r108;
    cpy_r_r110 = cpy_r_r109 << 1;
    cpy_r_r111 = (Py_ssize_t)cpy_r_r107 < (Py_ssize_t)cpy_r_r110;
    if (!cpy_r_r111) goto CPyL249;
    cpy_r_r112 = CPyList_GetItemUnsafe(cpy_r_r106, cpy_r_r107);
    if (likely(Py_TYPE(cpy_r_r112) == CPyType_func_ir___FuncIR))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 548, CPyStatic_emitmodule___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r112);
        goto CPyL250;
    }
    cpy_r_fn = cpy_r_r113;
    cpy_r_r114 = NULL;
    cpy_r_r115 = NULL;
    cpy_r_r116 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r114, cpy_r_r115);
    if (unlikely(cpy_r_r116 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 549, CPyStatic_emitmodule___globals);
        goto CPyL251;
    }
    cpy_r_r117 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_source_paths;
    CPy_INCREF(cpy_r_r117);
    cpy_r_r118 = CPyDict_GetItem(cpy_r_r117, cpy_r_module_name);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 550, CPyStatic_emitmodule___globals);
        goto CPyL251;
    }
    if (likely(PyUnicode_Check(cpy_r_r118)))
        cpy_r_r119 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 550, CPyStatic_emitmodule___globals, "str", cpy_r_r118);
        goto CPyL251;
    }
    cpy_r_r120 = CPyDef_emitfunc___generate_native_function(cpy_r_fn, cpy_r_emitter, cpy_r_r119, cpy_r_module_name);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r120 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 550, CPyStatic_emitmodule___globals);
        goto CPyL251;
    }
    cpy_r_r121 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 551, CPyStatic_emitmodule___globals);
        goto CPyL251;
    }
CPyL62: ;
    cpy_r_r122 = CPyStatics[7424]; /* '__top_level__' */
    cpy_r_r123 = PyUnicode_Compare(cpy_r_r121, cpy_r_r122);
    CPy_DECREF(cpy_r_r121);
    cpy_r_r124 = cpy_r_r123 == -1;
    if (!cpy_r_r124) goto CPyL65;
    cpy_r_r125 = PyErr_Occurred();
    cpy_r_r126 = cpy_r_r125 != NULL;
    if (!cpy_r_r126) goto CPyL65;
    cpy_r_r127 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 551, CPyStatic_emitmodule___globals);
        goto CPyL251;
    }
CPyL65: ;
    cpy_r_r128 = cpy_r_r123 != 0;
    if (!cpy_r_r128) goto CPyL252;
    cpy_r_r129 = NULL;
    cpy_r_r130 = NULL;
    cpy_r_r131 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r129, cpy_r_r130);
    if (unlikely(cpy_r_r131 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 552, CPyStatic_emitmodule___globals);
        goto CPyL251;
    }
    cpy_r_r132 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_capi_version;
    CPyTagged_INCREF(cpy_r_r132.f0);
    CPyTagged_INCREF(cpy_r_r132.f1);
    cpy_r_r133 = CPyDef_emitmodule___is_fastcall_supported(cpy_r_fn, cpy_r_r132);
    CPyTagged_DECREF(cpy_r_r132.f0);
    CPyTagged_DECREF(cpy_r_r132.f1);
    if (unlikely(cpy_r_r133 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 553, CPyStatic_emitmodule___globals);
        goto CPyL251;
    }
    if (!cpy_r_r133) goto CPyL72;
    cpy_r_r134 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_source_paths;
    CPy_INCREF(cpy_r_r134);
    cpy_r_r135 = CPyDict_GetItem(cpy_r_r134, cpy_r_module_name);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 555, CPyStatic_emitmodule___globals);
        goto CPyL251;
    }
    if (likely(PyUnicode_Check(cpy_r_r135)))
        cpy_r_r136 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 555, CPyStatic_emitmodule___globals, "str", cpy_r_r135);
        goto CPyL251;
    }
    cpy_r_r137 = CPyDef_emitwrapper___generate_wrapper_function(cpy_r_fn, cpy_r_emitter, cpy_r_r136, cpy_r_module_name);
    CPy_DECREF(cpy_r_fn);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 554, CPyStatic_emitmodule___globals);
        goto CPyL250;
    } else
        goto CPyL75;
CPyL72: ;
    cpy_r_r138 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_source_paths;
    CPy_INCREF(cpy_r_r138);
    cpy_r_r139 = CPyDict_GetItem(cpy_r_r138, cpy_r_module_name);
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 559, CPyStatic_emitmodule___globals);
        goto CPyL251;
    }
    if (likely(PyUnicode_Check(cpy_r_r139)))
        cpy_r_r140 = cpy_r_r139;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 559, CPyStatic_emitmodule___globals, "str", cpy_r_r139);
        goto CPyL251;
    }
    cpy_r_r141 = CPyDef_emitwrapper___generate_legacy_wrapper_function(cpy_r_fn, cpy_r_emitter, cpy_r_r140, cpy_r_module_name);
    CPy_DECREF(cpy_r_fn);
    CPy_DECREF(cpy_r_r140);
    if (unlikely(cpy_r_r141 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 558, CPyStatic_emitmodule___globals);
        goto CPyL250;
    }
CPyL75: ;
    cpy_r_r142 = cpy_r_r107 + 2;
    cpy_r_r107 = cpy_r_r142;
    goto CPyL55;
CPyL76: ;
    if (!cpy_r_multi_file) goto CPyL253;
    cpy_r_r143 = CPyStatics[7430]; /* '__native_' */
    cpy_r_r144 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r144);
    cpy_r_r145 = NULL;
    cpy_r_r146 = CPyDef_namegen___NameGenerator___private_name(cpy_r_r144, cpy_r_module_name, cpy_r_r145);
    CPy_DECREF(cpy_r_module_name);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 562, CPyStatic_emitmodule___globals);
        goto CPyL254;
    }
    cpy_r_r147 = CPyStatics[6790]; /* '.c' */
    cpy_r_r148 = CPyStr_Build(3, cpy_r_r143, cpy_r_r146, cpy_r_r147);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 562, CPyStatic_emitmodule___globals);
        goto CPyL254;
    }
    cpy_r_name = cpy_r_r148;
    cpy_r_r149 = CPyStatics[163]; /* '' */
    cpy_r_r150 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_fragments;
    CPy_INCREF(cpy_r_r150);
    cpy_r_r151 = PyUnicode_Join(cpy_r_r149, cpy_r_r150);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 563, CPyStatic_emitmodule___globals);
        goto CPyL255;
    }
    cpy_r_r152.f0 = cpy_r_name;
    cpy_r_r152.f1 = cpy_r_r151;
    CPy_INCREF(cpy_r_r152.f0);
    CPy_INCREF(cpy_r_r152.f1);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r151);
    cpy_r_r153 = PyTuple_New(2);
    if (unlikely(cpy_r_r153 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9609 = cpy_r_r152.f0;
    PyTuple_SET_ITEM(cpy_r_r153, 0, __tmp9609);
    PyObject *__tmp9610 = cpy_r_r152.f1;
    PyTuple_SET_ITEM(cpy_r_r153, 1, __tmp9610);
    cpy_r_r154 = PyList_Append(cpy_r_file_contents, cpy_r_r153);
    CPy_DECREF(cpy_r_r153);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 563, CPyStatic_emitmodule___globals);
        goto CPyL254;
    }
CPyL81: ;
    cpy_r_r156 = CPyDict_CheckSize(cpy_r_r62, cpy_r_r65);
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 531, CPyStatic_emitmodule___globals);
        goto CPyL254;
    } else
        goto CPyL33;
CPyL82: ;
    cpy_r_r157 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 531, CPyStatic_emitmodule___globals);
        goto CPyL238;
    }
    cpy_r_r158 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_context;
    CPy_INCREF(cpy_r_r158);
    cpy_r_r159 = NULL;
    cpy_r_r160 = NULL;
    cpy_r_r161 = CPyDef_emit___Emitter(cpy_r_r158, cpy_r_r159, cpy_r_r160);
    CPy_DECREF(cpy_r_r158);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 569, CPyStatic_emitmodule___globals);
        goto CPyL238;
    }
    cpy_r_ext_declarations = cpy_r_r161;
    cpy_r_r162 = CPyStatics[7431]; /* '#ifndef MYPYC_NATIVE' */
    cpy_r_r163 = CPY_GET_ATTR(cpy_r_self, CPyType_emitmodule___GroupGenerator, 1, mypyc___codegen___emitmodule___GroupGeneratorObject, PyObject *); /* group_suffix */
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 570, CPyStatic_emitmodule___globals);
        goto CPyL256;
    }
CPyL85: ;
    cpy_r_r164 = CPyStatics[7432]; /* '_H' */
    cpy_r_r165 = CPyStr_Build(3, cpy_r_r162, cpy_r_r163, cpy_r_r164);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 570, CPyStatic_emitmodule___globals);
        goto CPyL256;
    }
    cpy_r_r166 = NULL;
    cpy_r_r167 = CPyDef_emit___Emitter___emit_line(cpy_r_ext_declarations, cpy_r_r165, cpy_r_r166);
    CPy_DECREF(cpy_r_r165);
    if (unlikely(cpy_r_r167 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 570, CPyStatic_emitmodule___globals);
        goto CPyL256;
    }
    cpy_r_r168 = CPyStatics[7433]; /* '#define MYPYC_NATIVE' */
    cpy_r_r169 = CPY_GET_ATTR(cpy_r_self, CPyType_emitmodule___GroupGenerator, 1, mypyc___codegen___emitmodule___GroupGeneratorObject, PyObject *); /* group_suffix */
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 571, CPyStatic_emitmodule___globals);
        goto CPyL256;
    }
CPyL88: ;
    cpy_r_r170 = CPyStatics[7432]; /* '_H' */
    cpy_r_r171 = CPyStr_Build(3, cpy_r_r168, cpy_r_r169, cpy_r_r170);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 571, CPyStatic_emitmodule___globals);
        goto CPyL256;
    }
    cpy_r_r172 = NULL;
    cpy_r_r173 = CPyDef_emit___Emitter___emit_line(cpy_r_ext_declarations, cpy_r_r171, cpy_r_r172);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r173 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 571, CPyStatic_emitmodule___globals);
        goto CPyL256;
    }
    cpy_r_r174 = CPyStatics[7434]; /* '#include <Python.h>' */
    cpy_r_r175 = NULL;
    cpy_r_r176 = CPyDef_emit___Emitter___emit_line(cpy_r_ext_declarations, cpy_r_r174, cpy_r_r175);
    if (unlikely(cpy_r_r176 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 572, CPyStatic_emitmodule___globals);
        goto CPyL256;
    }
    cpy_r_r177 = CPyStatics[7435]; /* '#include <CPy.h>' */
    cpy_r_r178 = NULL;
    cpy_r_r179 = CPyDef_emit___Emitter___emit_line(cpy_r_ext_declarations, cpy_r_r177, cpy_r_r178);
    if (unlikely(cpy_r_r179 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 573, CPyStatic_emitmodule___globals);
        goto CPyL256;
    }
    cpy_r_r180 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_context;
    CPy_INCREF(cpy_r_r180);
    cpy_r_r181 = NULL;
    cpy_r_r182 = NULL;
    cpy_r_r183 = CPyDef_emit___Emitter(cpy_r_r180, cpy_r_r181, cpy_r_r182);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 575, CPyStatic_emitmodule___globals);
        goto CPyL256;
    }
    cpy_r_declarations = cpy_r_r183;
    cpy_r_r184 = CPyStatics[7436]; /* '#ifndef MYPYC_NATIVE_INTERNAL' */
    cpy_r_r185 = CPY_GET_ATTR(cpy_r_self, CPyType_emitmodule___GroupGenerator, 1, mypyc___codegen___emitmodule___GroupGeneratorObject, PyObject *); /* group_suffix */
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 576, CPyStatic_emitmodule___globals);
        goto CPyL257;
    }
CPyL94: ;
    cpy_r_r186 = CPyStatics[7432]; /* '_H' */
    cpy_r_r187 = CPyStr_Build(3, cpy_r_r184, cpy_r_r185, cpy_r_r186);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 576, CPyStatic_emitmodule___globals);
        goto CPyL257;
    }
    cpy_r_r188 = NULL;
    cpy_r_r189 = CPyDef_emit___Emitter___emit_line(cpy_r_declarations, cpy_r_r187, cpy_r_r188);
    CPy_DECREF(cpy_r_r187);
    if (unlikely(cpy_r_r189 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 576, CPyStatic_emitmodule___globals);
        goto CPyL257;
    }
    cpy_r_r190 = CPyStatics[7437]; /* '#define MYPYC_NATIVE_INTERNAL' */
    cpy_r_r191 = CPY_GET_ATTR(cpy_r_self, CPyType_emitmodule___GroupGenerator, 1, mypyc___codegen___emitmodule___GroupGeneratorObject, PyObject *); /* group_suffix */
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 577, CPyStatic_emitmodule___globals);
        goto CPyL257;
    }
CPyL97: ;
    cpy_r_r192 = CPyStatics[7432]; /* '_H' */
    cpy_r_r193 = CPyStr_Build(3, cpy_r_r190, cpy_r_r191, cpy_r_r192);
    CPy_DECREF(cpy_r_r191);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 577, CPyStatic_emitmodule___globals);
        goto CPyL257;
    }
    cpy_r_r194 = NULL;
    cpy_r_r195 = CPyDef_emit___Emitter___emit_line(cpy_r_declarations, cpy_r_r193, cpy_r_r194);
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r195 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 577, CPyStatic_emitmodule___globals);
        goto CPyL257;
    }
    cpy_r_r196 = CPyStatics[7434]; /* '#include <Python.h>' */
    cpy_r_r197 = NULL;
    cpy_r_r198 = CPyDef_emit___Emitter___emit_line(cpy_r_declarations, cpy_r_r196, cpy_r_r197);
    if (unlikely(cpy_r_r198 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 578, CPyStatic_emitmodule___globals);
        goto CPyL257;
    }
    cpy_r_r199 = CPyStatics[7435]; /* '#include <CPy.h>' */
    cpy_r_r200 = NULL;
    cpy_r_r201 = CPyDef_emit___Emitter___emit_line(cpy_r_declarations, cpy_r_r199, cpy_r_r200);
    if (unlikely(cpy_r_r201 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 579, CPyStatic_emitmodule___globals);
        goto CPyL257;
    }
    cpy_r_r202 = CPyStatics[7427]; /* '#include "__native' */
    cpy_r_r203 = CPY_GET_ATTR(cpy_r_self, CPyType_emitmodule___GroupGenerator, 2, mypyc___codegen___emitmodule___GroupGeneratorObject, PyObject *); /* short_group_suffix */
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 580, CPyStatic_emitmodule___globals);
        goto CPyL257;
    }
CPyL102: ;
    cpy_r_r204 = CPyStatics[7428]; /* '.h"' */
    cpy_r_r205 = CPyStr_Build(3, cpy_r_r202, cpy_r_r203, cpy_r_r204);
    CPy_DECREF(cpy_r_r203);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 580, CPyStatic_emitmodule___globals);
        goto CPyL257;
    }
    cpy_r_r206 = NULL;
    cpy_r_r207 = CPyDef_emit___Emitter___emit_line(cpy_r_declarations, cpy_r_r205, cpy_r_r206);
    CPy_DECREF(cpy_r_r205);
    if (unlikely(cpy_r_r207 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 580, CPyStatic_emitmodule___globals);
        goto CPyL257;
    }
    cpy_r_r208 = NULL;
    cpy_r_r209 = NULL;
    cpy_r_r210 = CPyDef_emit___Emitter___emit_line(cpy_r_declarations, cpy_r_r208, cpy_r_r209);
    if (unlikely(cpy_r_r210 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 581, CPyStatic_emitmodule___globals);
        goto CPyL257;
    }
    cpy_r_r211 = CPyStatics[7438]; /* 'int CPyGlobalsInit(void);' */
    cpy_r_r212 = NULL;
    cpy_r_r213 = CPyDef_emit___Emitter___emit_line(cpy_r_declarations, cpy_r_r211, cpy_r_r212);
    if (unlikely(cpy_r_r213 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 582, CPyStatic_emitmodule___globals);
        goto CPyL257;
    }
    cpy_r_r214 = NULL;
    cpy_r_r215 = NULL;
    cpy_r_r216 = CPyDef_emit___Emitter___emit_line(cpy_r_declarations, cpy_r_r214, cpy_r_r215);
    if (unlikely(cpy_r_r216 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 583, CPyStatic_emitmodule___globals);
        goto CPyL257;
    }
    cpy_r_r217 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_modules;
    CPy_INCREF(cpy_r_r217);
    cpy_r_r218 = 0;
    cpy_r_r219 = PyDict_Size(cpy_r_r217);
    cpy_r_r220 = cpy_r_r219 << 1;
    cpy_r_r221 = CPyDict_GetItemsIter(cpy_r_r217);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 585, CPyStatic_emitmodule___globals);
        goto CPyL258;
    }
CPyL108: ;
    cpy_r_r222 = CPyDict_NextItem(cpy_r_r221, cpy_r_r218);
    cpy_r_r223 = cpy_r_r222.f1;
    cpy_r_r218 = cpy_r_r223;
    cpy_r_r224 = cpy_r_r222.f0;
    if (!cpy_r_r224) goto CPyL259;
    cpy_r_r225 = cpy_r_r222.f2;
    CPy_INCREF(cpy_r_r225);
    cpy_r_r226 = cpy_r_r222.f3;
    CPy_INCREF(cpy_r_r226);
    CPy_DECREF(cpy_r_r222.f2);
    CPy_DECREF(cpy_r_r222.f3);
    if (likely(PyUnicode_Check(cpy_r_r225)))
        cpy_r_r227 = cpy_r_r225;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 585, CPyStatic_emitmodule___globals, "str", cpy_r_r225);
        goto CPyL260;
    }
    if (likely(Py_TYPE(cpy_r_r226) == CPyType_module_ir___ModuleIR))
        cpy_r_r228 = cpy_r_r226;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 585, CPyStatic_emitmodule___globals, "mypyc.ir.module_ir.ModuleIR", cpy_r_r226);
        goto CPyL261;
    }
    cpy_r_module_name = cpy_r_r227;
    cpy_r_module = cpy_r_r228;
    cpy_r_r229 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_final_names;
    CPy_INCREF(cpy_r_r229);
    cpy_r_r230 = CPyDef_emitmodule___GroupGenerator___declare_finals(cpy_r_self, cpy_r_module_name, cpy_r_r229, cpy_r_declarations);
    CPy_DECREF(cpy_r_module_name);
    CPy_DECREF(cpy_r_r229);
    if (unlikely(cpy_r_r230 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 586, CPyStatic_emitmodule___globals);
        goto CPyL262;
    }
    cpy_r_r231 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_classes;
    CPy_INCREF(cpy_r_r231);
    cpy_r_r232 = 0;
CPyL113: ;
    cpy_r_r233 = (CPyPtr)&((PyVarObject *)cpy_r_r231)->ob_size;
    cpy_r_r234 = *(int64_t *)cpy_r_r233;
    cpy_r_r235 = cpy_r_r234 << 1;
    cpy_r_r236 = (Py_ssize_t)cpy_r_r232 < (Py_ssize_t)cpy_r_r235;
    if (!cpy_r_r236) goto CPyL263;
    cpy_r_r237 = CPyList_GetItemUnsafe(cpy_r_r231, cpy_r_r232);
    if (likely(Py_TYPE(cpy_r_r237) == CPyType_class_ir___ClassIR))
        cpy_r_r238 = cpy_r_r237;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 587, CPyStatic_emitmodule___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r237);
        goto CPyL264;
    }
    cpy_r_cl = cpy_r_r238;
    cpy_r_r239 = CPyDef_emitclass___generate_class_type_decl(cpy_r_cl, cpy_r_emitter, cpy_r_ext_declarations, cpy_r_declarations);
    CPy_DECREF(cpy_r_cl);
    if (unlikely(cpy_r_r239 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 588, CPyStatic_emitmodule___globals);
        goto CPyL264;
    }
    cpy_r_r240 = cpy_r_r232 + 2;
    cpy_r_r232 = cpy_r_r240;
    goto CPyL113;
CPyL117: ;
    cpy_r_r241 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_functions;
    CPy_INCREF(cpy_r_r241);
    CPy_DECREF(cpy_r_module);
    cpy_r_r242 = 0;
CPyL118: ;
    cpy_r_r243 = (CPyPtr)&((PyVarObject *)cpy_r_r241)->ob_size;
    cpy_r_r244 = *(int64_t *)cpy_r_r243;
    cpy_r_r245 = cpy_r_r244 << 1;
    cpy_r_r246 = (Py_ssize_t)cpy_r_r242 < (Py_ssize_t)cpy_r_r245;
    if (!cpy_r_r246) goto CPyL265;
    cpy_r_r247 = CPyList_GetItemUnsafe(cpy_r_r241, cpy_r_r242);
    if (likely(Py_TYPE(cpy_r_r247) == CPyType_func_ir___FuncIR))
        cpy_r_r248 = cpy_r_r247;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 589, CPyStatic_emitmodule___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r247);
        goto CPyL266;
    }
    cpy_r_fn = cpy_r_r248;
    cpy_r_r249 = CPyDef_emitmodule___generate_function_declaration(cpy_r_fn, cpy_r_declarations);
    CPy_DECREF(cpy_r_fn);
    if (unlikely(cpy_r_r249 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 590, CPyStatic_emitmodule___globals);
        goto CPyL266;
    }
    cpy_r_r250 = cpy_r_r242 + 2;
    cpy_r_r242 = cpy_r_r250;
    goto CPyL118;
CPyL122: ;
    cpy_r_r251 = CPyDict_CheckSize(cpy_r_r217, cpy_r_r220);
    if (unlikely(!cpy_r_r251)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 585, CPyStatic_emitmodule___globals);
        goto CPyL267;
    } else
        goto CPyL108;
CPyL123: ;
    cpy_r_r252 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r252)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 585, CPyStatic_emitmodule___globals);
        goto CPyL268;
    }
    cpy_r_r253 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_context;
    cpy_r_r254 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r253)->_group_deps;
    CPy_INCREF(cpy_r_r254);
    cpy_r_r255 = CPyModule_builtins;
    cpy_r_r256 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r257 = CPyObject_GetAttr(cpy_r_r255, cpy_r_r256);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 592, CPyStatic_emitmodule___globals);
        goto CPyL269;
    }
    PyObject *cpy_r_r258[1] = {cpy_r_r254};
    cpy_r_r259 = (PyObject **)&cpy_r_r258;
    cpy_r_r260 = _PyObject_Vectorcall(cpy_r_r257, cpy_r_r259, 1, 0);
    CPy_DECREF(cpy_r_r257);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 592, CPyStatic_emitmodule___globals);
        goto CPyL269;
    }
    CPy_DECREF(cpy_r_r254);
    if (likely(PyList_Check(cpy_r_r260)))
        cpy_r_r261 = cpy_r_r260;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 592, CPyStatic_emitmodule___globals, "list", cpy_r_r260);
        goto CPyL268;
    }
    cpy_r_r262 = 0;
CPyL128: ;
    cpy_r_r263 = (CPyPtr)&((PyVarObject *)cpy_r_r261)->ob_size;
    cpy_r_r264 = *(int64_t *)cpy_r_r263;
    cpy_r_r265 = cpy_r_r264 << 1;
    cpy_r_r266 = (Py_ssize_t)cpy_r_r262 < (Py_ssize_t)cpy_r_r265;
    if (!cpy_r_r266) goto CPyL270;
    cpy_r_r267 = CPyList_GetItemUnsafe(cpy_r_r261, cpy_r_r262);
    if (likely(PyUnicode_Check(cpy_r_r267)))
        cpy_r_r268 = cpy_r_r267;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 592, CPyStatic_emitmodule___globals, "str", cpy_r_r267);
        goto CPyL271;
    }
    cpy_r_lib = cpy_r_r268;
    cpy_r_r269 = CPyDef_namegen___exported_name(cpy_r_lib);
    if (unlikely(cpy_r_r269 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 593, CPyStatic_emitmodule___globals);
        goto CPyL272;
    }
    cpy_r_elib = cpy_r_r269;
    cpy_r_r270 = CPyStatics[224]; /* '.' */
    cpy_r_r271 = PyUnicode_Split(cpy_r_lib, cpy_r_r270, -1);
    if (unlikely(cpy_r_r271 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 594, CPyStatic_emitmodule___globals);
        goto CPyL273;
    }
    cpy_r_r272 = CPyList_GetItemShort(cpy_r_r271, -2);
    CPy_DECREF(cpy_r_r271);
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 594, CPyStatic_emitmodule___globals);
        goto CPyL273;
    }
    if (likely(PyUnicode_Check(cpy_r_r272)))
        cpy_r_r273 = cpy_r_r272;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 594, CPyStatic_emitmodule___globals, "str", cpy_r_r272);
        goto CPyL273;
    }
    cpy_r_r274 = CPyDef_namegen___exported_name(cpy_r_r273);
    CPy_DECREF(cpy_r_r273);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 594, CPyStatic_emitmodule___globals);
        goto CPyL273;
    }
    cpy_r_short_lib = cpy_r_r274;
    cpy_r_r275 = CPyDef_emitmodule___group_dir(cpy_r_lib);
    CPy_DECREF(cpy_r_lib);
    if (unlikely(cpy_r_r275 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 596, CPyStatic_emitmodule___globals);
        goto CPyL274;
    }
    cpy_r_r276 = CPyStatics[7430]; /* '__native_' */
    cpy_r_r277 = CPyStatics[7439]; /* '.h' */
    cpy_r_r278 = CPyStr_Build(3, cpy_r_r276, cpy_r_short_lib, cpy_r_r277);
    CPy_DECREF(cpy_r_short_lib);
    if (unlikely(cpy_r_r278 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 596, CPyStatic_emitmodule___globals);
        goto CPyL275;
    }
    cpy_r_r279 = CPyModule_os;
    cpy_r_r280 = CPyStatics[142]; /* 'path' */
    cpy_r_r281 = CPyObject_GetAttr(cpy_r_r279, cpy_r_r280);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 596, CPyStatic_emitmodule___globals);
        goto CPyL276;
    }
    cpy_r_r282 = CPyStatics[175]; /* 'join' */
    cpy_r_r283 = CPyObject_GetAttr(cpy_r_r281, cpy_r_r282);
    CPy_DECREF(cpy_r_r281);
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 596, CPyStatic_emitmodule___globals);
        goto CPyL276;
    }
    PyObject *cpy_r_r284[2] = {cpy_r_r275, cpy_r_r278};
    cpy_r_r285 = (PyObject **)&cpy_r_r284;
    cpy_r_r286 = _PyObject_Vectorcall(cpy_r_r283, cpy_r_r285, 2, 0);
    CPy_DECREF(cpy_r_r283);
    if (unlikely(cpy_r_r286 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 596, CPyStatic_emitmodule___globals);
        goto CPyL276;
    }
    CPy_DECREF(cpy_r_r275);
    CPy_DECREF(cpy_r_r278);
    if (likely(PyUnicode_Check(cpy_r_r286)))
        cpy_r_r287 = cpy_r_r286;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 596, CPyStatic_emitmodule___globals, "str", cpy_r_r286);
        goto CPyL277;
    }
    cpy_r_r288 = CPyStatics[7440]; /* '#include <' */
    cpy_r_r289 = CPyStatics[840]; /* '>' */
    cpy_r_r290 = CPyStr_Build(3, cpy_r_r288, cpy_r_r287, cpy_r_r289);
    CPy_DECREF(cpy_r_r287);
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 596, CPyStatic_emitmodule___globals);
        goto CPyL277;
    }
    cpy_r_r291 = CPyStatics[7441]; /* 'struct export_table_' */
    cpy_r_r292 = CPyStatics[7442]; /* ' exports_' */
    cpy_r_r293 = CPyStatics[6886]; /* ';' */
    cpy_r_r294 = CPyStr_Build(5, cpy_r_r291, cpy_r_elib, cpy_r_r292, cpy_r_elib, cpy_r_r293);
    CPy_DECREF(cpy_r_elib);
    if (unlikely(cpy_r_r294 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 597, CPyStatic_emitmodule___globals);
        goto CPyL278;
    }
    cpy_r_r295 = PyTuple_Pack(2, cpy_r_r290, cpy_r_r294);
    CPy_DECREF(cpy_r_r290);
    CPy_DECREF(cpy_r_r294);
    if (unlikely(cpy_r_r295 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 595, CPyStatic_emitmodule___globals);
        goto CPyL271;
    }
    cpy_r_r296 = CPyDef_emit___Emitter___emit_lines(cpy_r_declarations, cpy_r_r295);
    CPy_DECREF(cpy_r_r295);
    if (unlikely(cpy_r_r296 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 595, CPyStatic_emitmodule___globals);
        goto CPyL271;
    }
    cpy_r_r297 = cpy_r_r262 + 2;
    cpy_r_r262 = cpy_r_r297;
    goto CPyL128;
CPyL146: ;
    cpy_r_r298 = CPyDef_emitmodule___GroupGenerator___toposort_declarations(cpy_r_self);
    if (unlikely(cpy_r_r298 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 600, CPyStatic_emitmodule___globals);
        goto CPyL268;
    }
    cpy_r_sorted_decls = cpy_r_r298;
    cpy_r_emitter = cpy_r_base_emitter;
    cpy_r_r299 = CPyDef_emitmodule___GroupGenerator___generate_globals_init(cpy_r_self, cpy_r_emitter);
    if (unlikely(cpy_r_r299 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 603, CPyStatic_emitmodule___globals);
        goto CPyL279;
    }
    cpy_r_r300 = NULL;
    cpy_r_r301 = NULL;
    cpy_r_r302 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r300, cpy_r_r301);
    if (unlikely(cpy_r_r302 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 605, CPyStatic_emitmodule___globals);
        goto CPyL279;
    }
    cpy_r_r303 = 0;
CPyL150: ;
    cpy_r_r304 = (CPyPtr)&((PyVarObject *)cpy_r_sorted_decls)->ob_size;
    cpy_r_r305 = *(int64_t *)cpy_r_r304;
    cpy_r_r306 = cpy_r_r305 << 1;
    cpy_r_r307 = (Py_ssize_t)cpy_r_r303 < (Py_ssize_t)cpy_r_r306;
    if (!cpy_r_r307) goto CPyL280;
    cpy_r_r308 = CPyList_GetItemUnsafe(cpy_r_sorted_decls, cpy_r_r303);
    if (likely(Py_TYPE(cpy_r_r308) == CPyType_emit___HeaderDeclaration))
        cpy_r_r309 = cpy_r_r308;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 607, CPyStatic_emitmodule___globals, "mypyc.codegen.emit.HeaderDeclaration", cpy_r_r308);
        goto CPyL279;
    }
    cpy_r_declaration = cpy_r_r309;
    cpy_r_r310 = ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_declaration)->_is_type;
    if (!cpy_r_r310) goto CPyL154;
CPyL153: ;
    CPy_INCREF(cpy_r_ext_declarations);
    cpy_r_r311 = cpy_r_ext_declarations;
    goto CPyL155;
CPyL154: ;
    CPy_INCREF(cpy_r_declarations);
    cpy_r_r311 = cpy_r_declarations;
CPyL155: ;
    cpy_r_decls = cpy_r_r311;
    cpy_r_r312 = ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_declaration)->_is_type;
    if (cpy_r_r312) goto CPyL183;
CPyL156: ;
    cpy_r_r313 = CPyStatics[7443]; /* 'extern ' */
    cpy_r_r314 = ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_declaration)->_decl;
    cpy_r_r315 = CPyList_GetItemShort(cpy_r_r314, 0);
    if (unlikely(cpy_r_r315 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 610, CPyStatic_emitmodule___globals);
        goto CPyL281;
    }
    if (likely(PyUnicode_Check(cpy_r_r315)))
        cpy_r_r316 = cpy_r_r315;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 610, CPyStatic_emitmodule___globals, "str", cpy_r_r315);
        goto CPyL281;
    }
    cpy_r_r317 = CPyStr_Build(2, cpy_r_r313, cpy_r_r316);
    CPy_DECREF(cpy_r_r316);
    if (unlikely(cpy_r_r317 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 610, CPyStatic_emitmodule___globals);
        goto CPyL281;
    }
    cpy_r_r318 = ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_declaration)->_decl;
    CPy_INCREF(cpy_r_r318);
    cpy_r_r319 = CPyList_GetSlice(cpy_r_r318, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r318);
    if (unlikely(cpy_r_r319 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 610, CPyStatic_emitmodule___globals);
        goto CPyL282;
    }
    if (likely(PyList_Check(cpy_r_r319)))
        cpy_r_r320 = cpy_r_r319;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 610, CPyStatic_emitmodule___globals, "list", cpy_r_r319);
        goto CPyL282;
    }
    cpy_r_r321 = CPyStatics[7391]; /* 'emit_lines' */
    cpy_r_r322 = CPyObject_GetAttr(cpy_r_decls, cpy_r_r321);
    CPy_DECREF(cpy_r_decls);
    if (unlikely(cpy_r_r322 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 608, CPyStatic_emitmodule___globals);
        goto CPyL283;
    }
    cpy_r_r323 = PyList_New(1);
    if (unlikely(cpy_r_r323 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 608, CPyStatic_emitmodule___globals);
        goto CPyL284;
    }
    cpy_r_r324 = (CPyPtr)&((PyListObject *)cpy_r_r323)->ob_item;
    cpy_r_r325 = *(CPyPtr *)cpy_r_r324;
    *(PyObject * *)cpy_r_r325 = cpy_r_r317;
    cpy_r_r326 = CPyList_Extend(cpy_r_r323, cpy_r_r320);
    CPy_DECREF(cpy_r_r320);
    if (unlikely(cpy_r_r326 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 608, CPyStatic_emitmodule___globals);
        goto CPyL285;
    } else
        goto CPyL286;
CPyL164: ;
    cpy_r_r327 = PyList_AsTuple(cpy_r_r323);
    CPy_DECREF(cpy_r_r323);
    if (unlikely(cpy_r_r327 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 608, CPyStatic_emitmodule___globals);
        goto CPyL287;
    }
    cpy_r_r328 = PyDict_New();
    if (unlikely(cpy_r_r328 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 608, CPyStatic_emitmodule___globals);
        goto CPyL288;
    }
    cpy_r_r329 = PyObject_Call(cpy_r_r322, cpy_r_r327, cpy_r_r328);
    CPy_DECREF(cpy_r_r322);
    CPy_DECREF(cpy_r_r327);
    CPy_DECREF(cpy_r_r328);
    if (unlikely(cpy_r_r329 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 608, CPyStatic_emitmodule___globals);
        goto CPyL289;
    } else
        goto CPyL290;
CPyL167: ;
    cpy_r_r330 = ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_declaration)->_defn;
    CPy_INCREF(cpy_r_r330);
    cpy_r_r331 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r332 = cpy_r_r330 != cpy_r_r331;
    if (!cpy_r_r332) goto CPyL291;
    if (likely(cpy_r_r330 != Py_None))
        cpy_r_r333 = cpy_r_r330;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 613, CPyStatic_emitmodule___globals, "list", cpy_r_r330);
        goto CPyL289;
    }
    cpy_r_r334 = (CPyPtr)&((PyVarObject *)cpy_r_r333)->ob_size;
    cpy_r_r335 = *(int64_t *)cpy_r_r334;
    CPy_DECREF(cpy_r_r333);
    cpy_r_r336 = cpy_r_r335 << 1;
    cpy_r_r337 = cpy_r_r336 != 0;
    if (!cpy_r_r337) goto CPyL177;
    cpy_r_r338 = ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_declaration)->_defn;
    CPy_INCREF(cpy_r_r338);
    CPy_DECREF(cpy_r_declaration);
    if (likely(cpy_r_r338 != Py_None))
        cpy_r_r339 = cpy_r_r338;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 614, CPyStatic_emitmodule___globals, "list", cpy_r_r338);
        goto CPyL279;
    }
    cpy_r_r340 = CPyStatics[7391]; /* 'emit_lines' */
    cpy_r_r341 = CPyObject_GetAttr(cpy_r_emitter, cpy_r_r340);
    if (unlikely(cpy_r_r341 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 527, CPyStatic_emitmodule___globals);
        goto CPyL292;
    }
    cpy_r_r342 = PyList_New(0);
    if (unlikely(cpy_r_r342 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 527, CPyStatic_emitmodule___globals);
        goto CPyL293;
    }
    cpy_r_r343 = CPyList_Extend(cpy_r_r342, cpy_r_r339);
    CPy_DECREF(cpy_r_r339);
    if (unlikely(cpy_r_r343 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 527, CPyStatic_emitmodule___globals);
        goto CPyL294;
    } else
        goto CPyL295;
CPyL174: ;
    cpy_r_r344 = PyList_AsTuple(cpy_r_r342);
    CPy_DECREF(cpy_r_r342);
    if (unlikely(cpy_r_r344 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 527, CPyStatic_emitmodule___globals);
        goto CPyL296;
    }
    cpy_r_r345 = PyDict_New();
    if (unlikely(cpy_r_r345 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 527, CPyStatic_emitmodule___globals);
        goto CPyL297;
    }
    cpy_r_r346 = PyObject_Call(cpy_r_r341, cpy_r_r344, cpy_r_r345);
    CPy_DECREF(cpy_r_r341);
    CPy_DECREF(cpy_r_r344);
    CPy_DECREF(cpy_r_r345);
    if (unlikely(cpy_r_r346 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 527, CPyStatic_emitmodule___globals);
        goto CPyL279;
    } else
        goto CPyL298;
CPyL177: ;
    cpy_r_r347 = ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_declaration)->_decl;
    CPy_INCREF(cpy_r_r347);
    CPy_DECREF(cpy_r_declaration);
    cpy_r_r348 = CPyStatics[7391]; /* 'emit_lines' */
    cpy_r_r349 = CPyObject_GetAttr(cpy_r_emitter, cpy_r_r348);
    if (unlikely(cpy_r_r349 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 527, CPyStatic_emitmodule___globals);
        goto CPyL299;
    }
    cpy_r_r350 = PyList_New(0);
    if (unlikely(cpy_r_r350 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 527, CPyStatic_emitmodule___globals);
        goto CPyL300;
    }
    cpy_r_r351 = CPyList_Extend(cpy_r_r350, cpy_r_r347);
    CPy_DECREF(cpy_r_r347);
    if (unlikely(cpy_r_r351 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 527, CPyStatic_emitmodule___globals);
        goto CPyL301;
    } else
        goto CPyL302;
CPyL180: ;
    cpy_r_r352 = PyList_AsTuple(cpy_r_r350);
    CPy_DECREF(cpy_r_r350);
    if (unlikely(cpy_r_r352 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 527, CPyStatic_emitmodule___globals);
        goto CPyL303;
    }
    cpy_r_r353 = PyDict_New();
    if (unlikely(cpy_r_r353 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 527, CPyStatic_emitmodule___globals);
        goto CPyL304;
    }
    cpy_r_r354 = PyObject_Call(cpy_r_r349, cpy_r_r352, cpy_r_r353);
    CPy_DECREF(cpy_r_r349);
    CPy_DECREF(cpy_r_r352);
    CPy_DECREF(cpy_r_r353);
    if (unlikely(cpy_r_r354 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 527, CPyStatic_emitmodule___globals);
        goto CPyL279;
    } else
        goto CPyL305;
CPyL183: ;
    cpy_r_r355 = ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_declaration)->_decl;
    CPy_INCREF(cpy_r_r355);
    CPy_DECREF(cpy_r_declaration);
    cpy_r_r356 = CPyStatics[7391]; /* 'emit_lines' */
    cpy_r_r357 = CPyObject_GetAttr(cpy_r_decls, cpy_r_r356);
    CPy_DECREF(cpy_r_decls);
    if (unlikely(cpy_r_r357 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 608, CPyStatic_emitmodule___globals);
        goto CPyL306;
    }
    cpy_r_r358 = PyList_New(0);
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 608, CPyStatic_emitmodule___globals);
        goto CPyL307;
    }
    cpy_r_r359 = CPyList_Extend(cpy_r_r358, cpy_r_r355);
    CPy_DECREF(cpy_r_r355);
    if (unlikely(cpy_r_r359 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 608, CPyStatic_emitmodule___globals);
        goto CPyL308;
    } else
        goto CPyL309;
CPyL186: ;
    cpy_r_r360 = PyList_AsTuple(cpy_r_r358);
    CPy_DECREF(cpy_r_r358);
    if (unlikely(cpy_r_r360 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 608, CPyStatic_emitmodule___globals);
        goto CPyL310;
    }
    cpy_r_r361 = PyDict_New();
    if (unlikely(cpy_r_r361 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 608, CPyStatic_emitmodule___globals);
        goto CPyL311;
    }
    cpy_r_r362 = PyObject_Call(cpy_r_r357, cpy_r_r360, cpy_r_r361);
    CPy_DECREF(cpy_r_r357);
    CPy_DECREF(cpy_r_r360);
    CPy_DECREF(cpy_r_r361);
    if (unlikely(cpy_r_r362 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 608, CPyStatic_emitmodule___globals);
        goto CPyL279;
    } else
        goto CPyL312;
CPyL189: ;
    cpy_r_r363 = cpy_r_r303 + 2;
    cpy_r_r303 = cpy_r_r363;
    goto CPyL150;
CPyL190: ;
    cpy_r_r364 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_group_name;
    CPy_INCREF(cpy_r_r364);
    cpy_r_r365 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r366 = cpy_r_r364 != cpy_r_r365;
    if (!cpy_r_r366) goto CPyL313;
    if (likely(cpy_r_r364 != Py_None))
        cpy_r_r367 = cpy_r_r364;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 620, CPyStatic_emitmodule___globals, "str", cpy_r_r364);
        goto CPyL314;
    }
    cpy_r_r368 = CPyStr_IsTrue(cpy_r_r367);
    CPy_DECREF(cpy_r_r367);
    if (!cpy_r_r368) goto CPyL195;
    cpy_r_r369 = CPyDef_emitmodule___GroupGenerator___generate_export_table(cpy_r_self, cpy_r_ext_declarations, cpy_r_emitter);
    if (unlikely(cpy_r_r369 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 621, CPyStatic_emitmodule___globals);
        goto CPyL314;
    }
    cpy_r_r370 = CPyDef_emitmodule___GroupGenerator___generate_shared_lib_init(cpy_r_self, cpy_r_emitter);
    if (unlikely(cpy_r_r370 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 623, CPyStatic_emitmodule___globals);
        goto CPyL314;
    }
CPyL195: ;
    cpy_r_r371 = CPyStatics[6888]; /* '#endif' */
    cpy_r_r372 = NULL;
    cpy_r_r373 = CPyDef_emit___Emitter___emit_line(cpy_r_ext_declarations, cpy_r_r371, cpy_r_r372);
    if (unlikely(cpy_r_r373 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 625, CPyStatic_emitmodule___globals);
        goto CPyL314;
    }
    cpy_r_r374 = CPyStatics[6888]; /* '#endif' */
    cpy_r_r375 = NULL;
    cpy_r_r376 = CPyDef_emit___Emitter___emit_line(cpy_r_declarations, cpy_r_r374, cpy_r_r375);
    if (unlikely(cpy_r_r376 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 626, CPyStatic_emitmodule___globals);
        goto CPyL314;
    }
    cpy_r_r377 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_group_name;
    CPy_INCREF(cpy_r_r377);
    cpy_r_r378 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r379 = cpy_r_r377 != cpy_r_r378;
    if (!cpy_r_r379) goto CPyL315;
    if (likely(cpy_r_r377 != Py_None))
        cpy_r_r380 = cpy_r_r377;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 628, CPyStatic_emitmodule___globals, "str", cpy_r_r377);
        goto CPyL314;
    }
    cpy_r_r381 = CPyStr_IsTrue(cpy_r_r380);
    CPy_DECREF(cpy_r_r380);
    if (!cpy_r_r381) goto CPyL203;
    cpy_r_r382 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_group_name;
    CPy_INCREF(cpy_r_r382);
    if (likely(cpy_r_r382 != Py_None))
        cpy_r_r383 = cpy_r_r382;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 628, CPyStatic_emitmodule___globals, "str", cpy_r_r382);
        goto CPyL314;
    }
    cpy_r_r384 = CPyDef_emitmodule___group_dir(cpy_r_r383);
    CPy_DECREF(cpy_r_r383);
    if (unlikely(cpy_r_r384 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 628, CPyStatic_emitmodule___globals);
        goto CPyL314;
    }
    cpy_r_r385 = cpy_r_r384;
    goto CPyL204;
CPyL203: ;
    cpy_r_r386 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r386);
    cpy_r_r385 = cpy_r_r386;
CPyL204: ;
    cpy_r_output_dir = cpy_r_r385;
    cpy_r_r387 = CPyStatics[7444]; /* '__native' */
    cpy_r_r388 = CPY_GET_ATTR(cpy_r_self, CPyType_emitmodule___GroupGenerator, 2, mypyc___codegen___emitmodule___GroupGeneratorObject, PyObject *); /* short_group_suffix */
    if (unlikely(cpy_r_r388 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 631, CPyStatic_emitmodule___globals);
        goto CPyL316;
    }
CPyL205: ;
    cpy_r_r389 = CPyStatics[6790]; /* '.c' */
    cpy_r_r390 = CPyStr_Build(3, cpy_r_r387, cpy_r_r388, cpy_r_r389);
    CPy_DECREF(cpy_r_r388);
    if (unlikely(cpy_r_r390 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 631, CPyStatic_emitmodule___globals);
        goto CPyL316;
    }
    cpy_r_r391 = CPyModule_os;
    cpy_r_r392 = CPyStatics[142]; /* 'path' */
    cpy_r_r393 = CPyObject_GetAttr(cpy_r_r391, cpy_r_r392);
    if (unlikely(cpy_r_r393 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 631, CPyStatic_emitmodule___globals);
        goto CPyL317;
    }
    cpy_r_r394 = CPyStatics[175]; /* 'join' */
    cpy_r_r395 = CPyObject_GetAttr(cpy_r_r393, cpy_r_r394);
    CPy_DECREF(cpy_r_r393);
    if (unlikely(cpy_r_r395 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 631, CPyStatic_emitmodule___globals);
        goto CPyL317;
    }
    PyObject *cpy_r_r396[2] = {cpy_r_output_dir, cpy_r_r390};
    cpy_r_r397 = (PyObject **)&cpy_r_r396;
    cpy_r_r398 = _PyObject_Vectorcall(cpy_r_r395, cpy_r_r397, 2, 0);
    CPy_DECREF(cpy_r_r395);
    if (unlikely(cpy_r_r398 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 631, CPyStatic_emitmodule___globals);
        goto CPyL317;
    }
    CPy_DECREF(cpy_r_r390);
    if (likely(PyUnicode_Check(cpy_r_r398)))
        cpy_r_r399 = cpy_r_r398;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 631, CPyStatic_emitmodule___globals, "str", cpy_r_r398);
        goto CPyL316;
    }
    cpy_r_r400 = CPyStatics[163]; /* '' */
    cpy_r_r401 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_fragments;
    CPy_INCREF(cpy_r_r401);
    CPy_DECREF(cpy_r_emitter);
    cpy_r_r402 = PyUnicode_Join(cpy_r_r400, cpy_r_r401);
    CPy_DECREF(cpy_r_r401);
    if (unlikely(cpy_r_r402 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 632, CPyStatic_emitmodule___globals);
        goto CPyL318;
    }
    cpy_r_r403.f0 = cpy_r_r399;
    cpy_r_r403.f1 = cpy_r_r402;
    CPy_INCREF(cpy_r_r403.f0);
    CPy_INCREF(cpy_r_r403.f1);
    CPy_DECREF(cpy_r_r399);
    CPy_DECREF(cpy_r_r402);
    cpy_r_r404 = CPyStatics[7445]; /* '__native_internal' */
    cpy_r_r405 = CPY_GET_ATTR(cpy_r_self, CPyType_emitmodule___GroupGenerator, 2, mypyc___codegen___emitmodule___GroupGeneratorObject, PyObject *); /* short_group_suffix */
    if (unlikely(cpy_r_r405 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 635, CPyStatic_emitmodule___globals);
        goto CPyL319;
    }
CPyL212: ;
    cpy_r_r406 = CPyStatics[7439]; /* '.h' */
    cpy_r_r407 = CPyStr_Build(3, cpy_r_r404, cpy_r_r405, cpy_r_r406);
    CPy_DECREF(cpy_r_r405);
    if (unlikely(cpy_r_r407 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 635, CPyStatic_emitmodule___globals);
        goto CPyL319;
    }
    cpy_r_r408 = CPyModule_os;
    cpy_r_r409 = CPyStatics[142]; /* 'path' */
    cpy_r_r410 = CPyObject_GetAttr(cpy_r_r408, cpy_r_r409);
    if (unlikely(cpy_r_r410 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 635, CPyStatic_emitmodule___globals);
        goto CPyL320;
    }
    cpy_r_r411 = CPyStatics[175]; /* 'join' */
    cpy_r_r412 = CPyObject_GetAttr(cpy_r_r410, cpy_r_r411);
    CPy_DECREF(cpy_r_r410);
    if (unlikely(cpy_r_r412 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 635, CPyStatic_emitmodule___globals);
        goto CPyL320;
    }
    PyObject *cpy_r_r413[2] = {cpy_r_output_dir, cpy_r_r407};
    cpy_r_r414 = (PyObject **)&cpy_r_r413;
    cpy_r_r415 = _PyObject_Vectorcall(cpy_r_r412, cpy_r_r414, 2, 0);
    CPy_DECREF(cpy_r_r412);
    if (unlikely(cpy_r_r415 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 635, CPyStatic_emitmodule___globals);
        goto CPyL320;
    }
    CPy_DECREF(cpy_r_r407);
    if (likely(PyUnicode_Check(cpy_r_r415)))
        cpy_r_r416 = cpy_r_r415;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 635, CPyStatic_emitmodule___globals, "str", cpy_r_r415);
        goto CPyL319;
    }
    cpy_r_r417 = CPyStatics[163]; /* '' */
    cpy_r_r418 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_declarations)->_fragments;
    CPy_INCREF(cpy_r_r418);
    CPy_DECREF(cpy_r_declarations);
    cpy_r_r419 = PyUnicode_Join(cpy_r_r417, cpy_r_r418);
    CPy_DECREF(cpy_r_r418);
    if (unlikely(cpy_r_r419 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 636, CPyStatic_emitmodule___globals);
        goto CPyL321;
    }
    cpy_r_r420.f0 = cpy_r_r416;
    cpy_r_r420.f1 = cpy_r_r419;
    CPy_INCREF(cpy_r_r420.f0);
    CPy_INCREF(cpy_r_r420.f1);
    CPy_DECREF(cpy_r_r416);
    CPy_DECREF(cpy_r_r419);
    cpy_r_r421 = CPyStatics[7444]; /* '__native' */
    cpy_r_r422 = CPY_GET_ATTR(cpy_r_self, CPyType_emitmodule___GroupGenerator, 2, mypyc___codegen___emitmodule___GroupGeneratorObject, PyObject *); /* short_group_suffix */
    if (unlikely(cpy_r_r422 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 639, CPyStatic_emitmodule___globals);
        goto CPyL322;
    }
CPyL219: ;
    cpy_r_r423 = CPyStatics[7439]; /* '.h' */
    cpy_r_r424 = CPyStr_Build(3, cpy_r_r421, cpy_r_r422, cpy_r_r423);
    CPy_DECREF(cpy_r_r422);
    if (unlikely(cpy_r_r424 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 639, CPyStatic_emitmodule___globals);
        goto CPyL322;
    }
    cpy_r_r425 = CPyModule_os;
    cpy_r_r426 = CPyStatics[142]; /* 'path' */
    cpy_r_r427 = CPyObject_GetAttr(cpy_r_r425, cpy_r_r426);
    if (unlikely(cpy_r_r427 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 639, CPyStatic_emitmodule___globals);
        goto CPyL323;
    }
    cpy_r_r428 = CPyStatics[175]; /* 'join' */
    cpy_r_r429 = CPyObject_GetAttr(cpy_r_r427, cpy_r_r428);
    CPy_DECREF(cpy_r_r427);
    if (unlikely(cpy_r_r429 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 639, CPyStatic_emitmodule___globals);
        goto CPyL323;
    }
    PyObject *cpy_r_r430[2] = {cpy_r_output_dir, cpy_r_r424};
    cpy_r_r431 = (PyObject **)&cpy_r_r430;
    cpy_r_r432 = _PyObject_Vectorcall(cpy_r_r429, cpy_r_r431, 2, 0);
    CPy_DECREF(cpy_r_r429);
    if (unlikely(cpy_r_r432 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 639, CPyStatic_emitmodule___globals);
        goto CPyL323;
    }
    CPy_DECREF(cpy_r_output_dir);
    CPy_DECREF(cpy_r_r424);
    if (likely(PyUnicode_Check(cpy_r_r432)))
        cpy_r_r433 = cpy_r_r432;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 639, CPyStatic_emitmodule___globals, "str", cpy_r_r432);
        goto CPyL324;
    }
    cpy_r_r434 = CPyStatics[163]; /* '' */
    cpy_r_r435 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_ext_declarations)->_fragments;
    CPy_INCREF(cpy_r_r435);
    CPy_DECREF(cpy_r_ext_declarations);
    cpy_r_r436 = PyUnicode_Join(cpy_r_r434, cpy_r_r435);
    CPy_DECREF(cpy_r_r435);
    if (unlikely(cpy_r_r436 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 640, CPyStatic_emitmodule___globals);
        goto CPyL325;
    }
    cpy_r_r437.f0 = cpy_r_r433;
    cpy_r_r437.f1 = cpy_r_r436;
    CPy_INCREF(cpy_r_r437.f0);
    CPy_INCREF(cpy_r_r437.f1);
    CPy_DECREF(cpy_r_r433);
    CPy_DECREF(cpy_r_r436);
    cpy_r_r438 = PyList_New(3);
    if (unlikely(cpy_r_r438 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 629, CPyStatic_emitmodule___globals);
        goto CPyL326;
    }
    cpy_r_r439 = PyTuple_New(2);
    if (unlikely(cpy_r_r439 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9611 = cpy_r_r403.f0;
    PyTuple_SET_ITEM(cpy_r_r439, 0, __tmp9611);
    PyObject *__tmp9612 = cpy_r_r403.f1;
    PyTuple_SET_ITEM(cpy_r_r439, 1, __tmp9612);
    cpy_r_r440 = PyTuple_New(2);
    if (unlikely(cpy_r_r440 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9613 = cpy_r_r420.f0;
    PyTuple_SET_ITEM(cpy_r_r440, 0, __tmp9613);
    PyObject *__tmp9614 = cpy_r_r420.f1;
    PyTuple_SET_ITEM(cpy_r_r440, 1, __tmp9614);
    cpy_r_r441 = PyTuple_New(2);
    if (unlikely(cpy_r_r441 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9615 = cpy_r_r437.f0;
    PyTuple_SET_ITEM(cpy_r_r441, 0, __tmp9615);
    PyObject *__tmp9616 = cpy_r_r437.f1;
    PyTuple_SET_ITEM(cpy_r_r441, 1, __tmp9616);
    cpy_r_r442 = (CPyPtr)&((PyListObject *)cpy_r_r438)->ob_item;
    cpy_r_r443 = *(CPyPtr *)cpy_r_r442;
    *(PyObject * *)cpy_r_r443 = cpy_r_r439;
    cpy_r_r444 = cpy_r_r443 + 8;
    *(PyObject * *)cpy_r_r444 = cpy_r_r440;
    cpy_r_r445 = cpy_r_r443 + 16;
    *(PyObject * *)cpy_r_r445 = cpy_r_r441;
    cpy_r_r446 = PyNumber_Add(cpy_r_file_contents, cpy_r_r438);
    CPy_DECREF(cpy_r_file_contents);
    CPy_DECREF(cpy_r_r438);
    if (unlikely(cpy_r_r446 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 629, CPyStatic_emitmodule___globals);
        goto CPyL229;
    }
    if (likely(PyList_Check(cpy_r_r446)))
        cpy_r_r447 = cpy_r_r446;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 629, CPyStatic_emitmodule___globals, "list", cpy_r_r446);
        goto CPyL229;
    }
    return cpy_r_r447;
CPyL229: ;
    cpy_r_r448 = NULL;
    return cpy_r_r448;
CPyL230: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_r4);
    goto CPyL229;
CPyL231: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9.f2);
    goto CPyL13;
CPyL232: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    goto CPyL229;
CPyL233: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL12;
CPyL234: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r14);
    goto CPyL229;
CPyL235: ;
    CPy_DecRef(cpy_r_file_contents);
    goto CPyL229;
CPyL236: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    goto CPyL17;
CPyL237: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    goto CPyL229;
CPyL238: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    goto CPyL229;
CPyL239: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r62);
    goto CPyL229;
CPyL240: ;
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r67.f2);
    CPy_DECREF(cpy_r_r67.f3);
    goto CPyL82;
CPyL241: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r71);
    goto CPyL229;
CPyL242: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r72);
    goto CPyL229;
CPyL243: ;
    CPy_DECREF(cpy_r_emitter);
    goto CPyL37;
CPyL244: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_module_name);
    goto CPyL229;
CPyL245: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_module_name);
    goto CPyL229;
CPyL246: ;
    CPy_DECREF(cpy_r_r94);
    goto CPyL53;
CPyL247: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_module_name);
    CPy_DecRef(cpy_r_r94);
    goto CPyL229;
CPyL248: ;
    CPy_DECREF(cpy_r_cl);
    goto CPyL52;
CPyL249: ;
    CPy_DECREF(cpy_r_r106);
    goto CPyL76;
CPyL250: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_module_name);
    CPy_DecRef(cpy_r_r106);
    goto CPyL229;
CPyL251: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_module_name);
    CPy_DecRef(cpy_r_r106);
    goto CPyL229;
CPyL252: ;
    CPy_DECREF(cpy_r_fn);
    goto CPyL75;
CPyL253: ;
    CPy_DECREF(cpy_r_module_name);
    goto CPyL81;
CPyL254: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r66);
    goto CPyL229;
CPyL255: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r66);
    goto CPyL229;
CPyL256: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    goto CPyL229;
CPyL257: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    goto CPyL229;
CPyL258: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r217);
    goto CPyL229;
CPyL259: ;
    CPy_DECREF(cpy_r_emitter);
    CPy_DECREF(cpy_r_r217);
    CPy_DECREF(cpy_r_r221);
    CPy_DECREF(cpy_r_r222.f2);
    CPy_DECREF(cpy_r_r222.f3);
    goto CPyL123;
CPyL260: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r221);
    CPy_DecRef(cpy_r_r226);
    goto CPyL229;
CPyL261: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r221);
    CPy_DecRef(cpy_r_r227);
    goto CPyL229;
CPyL262: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r221);
    goto CPyL229;
CPyL263: ;
    CPy_DECREF(cpy_r_r231);
    goto CPyL117;
CPyL264: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r221);
    CPy_DecRef(cpy_r_r231);
    goto CPyL229;
CPyL265: ;
    CPy_DECREF(cpy_r_r241);
    goto CPyL122;
CPyL266: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r221);
    CPy_DecRef(cpy_r_r241);
    goto CPyL229;
CPyL267: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r221);
    goto CPyL229;
CPyL268: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    goto CPyL229;
CPyL269: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r254);
    goto CPyL229;
CPyL270: ;
    CPy_DECREF(cpy_r_r261);
    goto CPyL146;
CPyL271: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r261);
    goto CPyL229;
CPyL272: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r261);
    CPy_DecRef(cpy_r_lib);
    goto CPyL229;
CPyL273: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r261);
    CPy_DecRef(cpy_r_lib);
    CPy_DecRef(cpy_r_elib);
    goto CPyL229;
CPyL274: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r261);
    CPy_DecRef(cpy_r_elib);
    CPy_DecRef(cpy_r_short_lib);
    goto CPyL229;
CPyL275: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r261);
    CPy_DecRef(cpy_r_elib);
    CPy_DecRef(cpy_r_r275);
    goto CPyL229;
CPyL276: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r261);
    CPy_DecRef(cpy_r_elib);
    CPy_DecRef(cpy_r_r275);
    CPy_DecRef(cpy_r_r278);
    goto CPyL229;
CPyL277: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r261);
    CPy_DecRef(cpy_r_elib);
    goto CPyL229;
CPyL278: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_base_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_r261);
    CPy_DecRef(cpy_r_r290);
    goto CPyL229;
CPyL279: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    goto CPyL229;
CPyL280: ;
    CPy_DECREF(cpy_r_sorted_decls);
    goto CPyL190;
CPyL281: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_decls);
    goto CPyL229;
CPyL282: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_decls);
    CPy_DecRef(cpy_r_r317);
    goto CPyL229;
CPyL283: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_r317);
    CPy_DecRef(cpy_r_r320);
    goto CPyL229;
CPyL284: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_r317);
    CPy_DecRef(cpy_r_r320);
    CPy_DecRef(cpy_r_r322);
    goto CPyL229;
CPyL285: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_r322);
    CPy_DecRef(cpy_r_r323);
    goto CPyL229;
CPyL286: ;
    CPy_DECREF(cpy_r_r326);
    goto CPyL164;
CPyL287: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_r322);
    goto CPyL229;
CPyL288: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_declaration);
    CPy_DecRef(cpy_r_r322);
    CPy_DecRef(cpy_r_r327);
    goto CPyL229;
CPyL289: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_declaration);
    goto CPyL229;
CPyL290: ;
    CPy_DECREF(cpy_r_r329);
    goto CPyL167;
CPyL291: ;
    CPy_DECREF(cpy_r_r330);
    goto CPyL177;
CPyL292: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r339);
    goto CPyL229;
CPyL293: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r339);
    CPy_DecRef(cpy_r_r341);
    goto CPyL229;
CPyL294: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r341);
    CPy_DecRef(cpy_r_r342);
    goto CPyL229;
CPyL295: ;
    CPy_DECREF(cpy_r_r343);
    goto CPyL174;
CPyL296: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r341);
    goto CPyL229;
CPyL297: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r341);
    CPy_DecRef(cpy_r_r344);
    goto CPyL229;
CPyL298: ;
    CPy_DECREF(cpy_r_r346);
    goto CPyL189;
CPyL299: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r347);
    goto CPyL229;
CPyL300: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r347);
    CPy_DecRef(cpy_r_r349);
    goto CPyL229;
CPyL301: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r349);
    CPy_DecRef(cpy_r_r350);
    goto CPyL229;
CPyL302: ;
    CPy_DECREF(cpy_r_r351);
    goto CPyL180;
CPyL303: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r349);
    goto CPyL229;
CPyL304: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r349);
    CPy_DecRef(cpy_r_r352);
    goto CPyL229;
CPyL305: ;
    CPy_DECREF(cpy_r_r354);
    goto CPyL189;
CPyL306: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r355);
    goto CPyL229;
CPyL307: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r355);
    CPy_DecRef(cpy_r_r357);
    goto CPyL229;
CPyL308: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r357);
    CPy_DecRef(cpy_r_r358);
    goto CPyL229;
CPyL309: ;
    CPy_DECREF(cpy_r_r359);
    goto CPyL186;
CPyL310: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r357);
    goto CPyL229;
CPyL311: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_sorted_decls);
    CPy_DecRef(cpy_r_r357);
    CPy_DecRef(cpy_r_r360);
    goto CPyL229;
CPyL312: ;
    CPy_DECREF(cpy_r_r362);
    goto CPyL189;
CPyL313: ;
    CPy_DECREF(cpy_r_r364);
    goto CPyL195;
CPyL314: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    goto CPyL229;
CPyL315: ;
    CPy_DECREF(cpy_r_r377);
    goto CPyL203;
CPyL316: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_output_dir);
    goto CPyL229;
CPyL317: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_output_dir);
    CPy_DecRef(cpy_r_r390);
    goto CPyL229;
CPyL318: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_output_dir);
    CPy_DecRef(cpy_r_r399);
    goto CPyL229;
CPyL319: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_output_dir);
    CPy_DecRef(cpy_r_r403.f0);
    CPy_DecRef(cpy_r_r403.f1);
    goto CPyL229;
CPyL320: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_declarations);
    CPy_DecRef(cpy_r_output_dir);
    CPy_DecRef(cpy_r_r403.f0);
    CPy_DecRef(cpy_r_r403.f1);
    CPy_DecRef(cpy_r_r407);
    goto CPyL229;
CPyL321: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_output_dir);
    CPy_DecRef(cpy_r_r403.f0);
    CPy_DecRef(cpy_r_r403.f1);
    CPy_DecRef(cpy_r_r416);
    goto CPyL229;
CPyL322: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_output_dir);
    CPy_DecRef(cpy_r_r403.f0);
    CPy_DecRef(cpy_r_r403.f1);
    CPy_DecRef(cpy_r_r420.f0);
    CPy_DecRef(cpy_r_r420.f1);
    goto CPyL229;
CPyL323: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_output_dir);
    CPy_DecRef(cpy_r_r403.f0);
    CPy_DecRef(cpy_r_r403.f1);
    CPy_DecRef(cpy_r_r420.f0);
    CPy_DecRef(cpy_r_r420.f1);
    CPy_DecRef(cpy_r_r424);
    goto CPyL229;
CPyL324: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_ext_declarations);
    CPy_DecRef(cpy_r_r403.f0);
    CPy_DecRef(cpy_r_r403.f1);
    CPy_DecRef(cpy_r_r420.f0);
    CPy_DecRef(cpy_r_r420.f1);
    goto CPyL229;
CPyL325: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_r403.f0);
    CPy_DecRef(cpy_r_r403.f1);
    CPy_DecRef(cpy_r_r420.f0);
    CPy_DecRef(cpy_r_r420.f1);
    CPy_DecRef(cpy_r_r433);
    goto CPyL229;
CPyL326: ;
    CPy_DecRef(cpy_r_file_contents);
    CPy_DecRef(cpy_r_r403.f0);
    CPy_DecRef(cpy_r_r403.f1);
    CPy_DecRef(cpy_r_r420.f0);
    CPy_DecRef(cpy_r_r420.f1);
    CPy_DecRef(cpy_r_r437.f0);
    CPy_DecRef(cpy_r_r437.f1);
    goto CPyL229;
}

PyObject *CPyPy_emitmodule___GroupGenerator___generate_c_for_modules(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":generate_c_for_modules", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___GroupGenerator___generate_c_for_modules(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_c_for_modules", 510, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___GroupGenerator___generate_literal_tables(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_literals;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_init_str;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_init_bytes;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_init_int;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_init_floats;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_init_complex;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_init_tuple;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_init_frozenset;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    cpy_r_r0 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_context;
    cpy_r_r1 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r0)->_literals;
    CPy_INCREF(cpy_r_r1);
    cpy_r_literals = cpy_r_r1;
    cpy_r_r2 = CPyDef_codegen___literals___Literals___num_literals(cpy_r_literals);
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 653, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r3 = CPyTagged_Str(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 653, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r4 = CPyStatics[7446]; /* 'PyObject *[' */
    cpy_r_r5 = CPyStatics[208]; /* ']' */
    cpy_r_r6 = CPyStr_Build(3, cpy_r_r4, cpy_r_r3, cpy_r_r5);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 653, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r7 = CPyStatics[7447]; /* 'CPyStatics' */
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emitmodule___GroupGenerator___declare_global(cpy_r_self, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 653, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r10 = CPyDef_codegen___literals___Literals___encoded_str_values(cpy_r_literals);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 655, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r11 = CPyDef_emitmodule___c_string_array_initializer(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 655, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_init_str = cpy_r_r11;
    cpy_r_r12 = CPyStatics[7448]; /* 'const char * const []' */
    cpy_r_r13 = CPyStatics[7449]; /* 'CPyLit_Str' */
    cpy_r_r14 = CPyDef_emitmodule___GroupGenerator___declare_global(cpy_r_self, cpy_r_r12, cpy_r_r13, cpy_r_init_str);
    CPy_DECREF(cpy_r_init_str);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 656, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r15 = CPyDef_codegen___literals___Literals___encoded_bytes_values(cpy_r_literals);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 658, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r16 = CPyDef_emitmodule___c_string_array_initializer(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 658, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_init_bytes = cpy_r_r16;
    cpy_r_r17 = CPyStatics[7448]; /* 'const char * const []' */
    cpy_r_r18 = CPyStatics[7450]; /* 'CPyLit_Bytes' */
    cpy_r_r19 = CPyDef_emitmodule___GroupGenerator___declare_global(cpy_r_self, cpy_r_r17, cpy_r_r18, cpy_r_init_bytes);
    CPy_DECREF(cpy_r_init_bytes);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 659, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r20 = CPyDef_codegen___literals___Literals___encoded_int_values(cpy_r_literals);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 661, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r21 = CPyDef_emitmodule___c_string_array_initializer(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 661, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_init_int = cpy_r_r21;
    cpy_r_r22 = CPyStatics[7448]; /* 'const char * const []' */
    cpy_r_r23 = CPyStatics[7451]; /* 'CPyLit_Int' */
    cpy_r_r24 = CPyDef_emitmodule___GroupGenerator___declare_global(cpy_r_self, cpy_r_r22, cpy_r_r23, cpy_r_init_int);
    CPy_DECREF(cpy_r_init_int);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 662, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r25 = CPyDef_codegen___literals___Literals___encoded_float_values(cpy_r_literals);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 664, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r26 = 2;
    cpy_r_r27 = CPyDef_emit___c_array_initializer(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 664, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_init_floats = cpy_r_r27;
    cpy_r_r28 = CPyStatics[7452]; /* 'const double []' */
    cpy_r_r29 = CPyStatics[7453]; /* 'CPyLit_Float' */
    cpy_r_r30 = CPyDef_emitmodule___GroupGenerator___declare_global(cpy_r_self, cpy_r_r28, cpy_r_r29, cpy_r_init_floats);
    CPy_DECREF(cpy_r_init_floats);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 665, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r31 = CPyDef_codegen___literals___Literals___encoded_complex_values(cpy_r_literals);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 667, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r32 = 2;
    cpy_r_r33 = CPyDef_emit___c_array_initializer(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 667, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_init_complex = cpy_r_r33;
    cpy_r_r34 = CPyStatics[7452]; /* 'const double []' */
    cpy_r_r35 = CPyStatics[7454]; /* 'CPyLit_Complex' */
    cpy_r_r36 = CPyDef_emitmodule___GroupGenerator___declare_global(cpy_r_self, cpy_r_r34, cpy_r_r35, cpy_r_init_complex);
    CPy_DECREF(cpy_r_init_complex);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 668, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r37 = CPyDef_codegen___literals___Literals___encoded_tuple_values(cpy_r_literals);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 670, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r38 = 2;
    cpy_r_r39 = CPyDef_emit___c_array_initializer(cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 670, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_init_tuple = cpy_r_r39;
    cpy_r_r40 = CPyStatics[7455]; /* 'const int []' */
    cpy_r_r41 = CPyStatics[7456]; /* 'CPyLit_Tuple' */
    cpy_r_r42 = CPyDef_emitmodule___GroupGenerator___declare_global(cpy_r_self, cpy_r_r40, cpy_r_r41, cpy_r_init_tuple);
    CPy_DECREF(cpy_r_init_tuple);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 671, CPyStatic_emitmodule___globals);
        goto CPyL27;
    }
    cpy_r_r43 = CPyDef_codegen___literals___Literals___encoded_frozenset_values(cpy_r_literals);
    CPy_DECREF(cpy_r_literals);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 673, CPyStatic_emitmodule___globals);
        goto CPyL26;
    }
    cpy_r_r44 = 2;
    cpy_r_r45 = CPyDef_emit___c_array_initializer(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 673, CPyStatic_emitmodule___globals);
        goto CPyL26;
    }
    cpy_r_init_frozenset = cpy_r_r45;
    cpy_r_r46 = CPyStatics[7455]; /* 'const int []' */
    cpy_r_r47 = CPyStatics[7457]; /* 'CPyLit_FrozenSet' */
    cpy_r_r48 = CPyDef_emitmodule___GroupGenerator___declare_global(cpy_r_self, cpy_r_r46, cpy_r_r47, cpy_r_init_frozenset);
    CPy_DECREF(cpy_r_init_frozenset);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 674, CPyStatic_emitmodule___globals);
        goto CPyL26;
    }
    return 1;
CPyL26: ;
    cpy_r_r49 = 2;
    return cpy_r_r49;
CPyL27: ;
    CPy_DecRef(cpy_r_literals);
    goto CPyL26;
}

PyObject *CPyPy_emitmodule___GroupGenerator___generate_literal_tables(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":generate_literal_tables", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___GroupGenerator___generate_literal_tables(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_literal_tables", 644, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___GroupGenerator___generate_export_table(PyObject *cpy_r_self, PyObject *cpy_r_decl_emitter, PyObject *cpy_r_code_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_decls;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    tuple_T4CIOO cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_name;
    PyObject *cpy_r_decl;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    int64_t cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    tuple_T4CIOO cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_decl_emitter)->_context;
    cpy_r_r1 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r0)->_declarations;
    CPy_INCREF(cpy_r_r1);
    cpy_r_decls = cpy_r_r1;
    cpy_r_r2 = CPyStatics[163]; /* '' */
    cpy_r_r3 = CPyStatics[7458]; /* 'struct export_table' */
    cpy_r_r4 = CPY_GET_ATTR(cpy_r_self, CPyType_emitmodule___GroupGenerator, 1, mypyc___codegen___emitmodule___GroupGeneratorObject, PyObject *); /* group_suffix */
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 722, CPyStatic_emitmodule___globals);
        goto CPyL31;
    }
CPyL1: ;
    cpy_r_r5 = CPyStatics[6884]; /* ' {' */
    cpy_r_r6 = CPyStr_Build(3, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 722, CPyStatic_emitmodule___globals);
        goto CPyL31;
    }
    cpy_r_r7 = PyTuple_Pack(2, cpy_r_r2, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 722, CPyStatic_emitmodule___globals);
        goto CPyL31;
    }
    cpy_r_r8 = CPyDef_emit___Emitter___emit_lines(cpy_r_decl_emitter, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 722, CPyStatic_emitmodule___globals);
        goto CPyL31;
    }
    cpy_r_r9 = 0;
    cpy_r_r10 = PyDict_Size(cpy_r_decls);
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = CPyDict_GetItemsIter(cpy_r_decls);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 723, CPyStatic_emitmodule___globals);
        goto CPyL31;
    }
CPyL5: ;
    cpy_r_r13 = CPyDict_NextItem(cpy_r_r12, cpy_r_r9);
    cpy_r_r14 = cpy_r_r13.f1;
    cpy_r_r9 = cpy_r_r14;
    cpy_r_r15 = cpy_r_r13.f0;
    if (!cpy_r_r15) goto CPyL32;
    cpy_r_r16 = cpy_r_r13.f2;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = cpy_r_r13.f3;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r13.f2);
    CPy_DECREF(cpy_r_r13.f3);
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r18 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 723, CPyStatic_emitmodule___globals, "str", cpy_r_r16);
        goto CPyL33;
    }
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_emit___HeaderDeclaration))
        cpy_r_r19 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 723, CPyStatic_emitmodule___globals, "mypyc.codegen.emit.HeaderDeclaration", cpy_r_r17);
        goto CPyL34;
    }
    cpy_r_name = cpy_r_r18;
    cpy_r_decl = cpy_r_r19;
    cpy_r_r20 = ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_decl)->_needs_export;
    if (!cpy_r_r20) goto CPyL35;
CPyL9: ;
    cpy_r_r21 = CPyStatics[189]; /* '\n' */
    cpy_r_r22 = ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_decl)->_decl;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_decl);
    cpy_r_r23 = PyUnicode_Join(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 725, CPyStatic_emitmodule___globals);
        goto CPyL36;
    }
    cpy_r_r24 = CPyDef_emitmodule___pointerize(cpy_r_r23, cpy_r_name);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 725, CPyStatic_emitmodule___globals);
        goto CPyL37;
    }
    cpy_r_r25 = NULL;
    cpy_r_r26 = CPyDef_emit___Emitter___emit_line(cpy_r_decl_emitter, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 725, CPyStatic_emitmodule___globals);
        goto CPyL37;
    }
CPyL12: ;
    cpy_r_r27 = CPyDict_CheckSize(cpy_r_decls, cpy_r_r11);
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 723, CPyStatic_emitmodule___globals);
        goto CPyL37;
    } else
        goto CPyL5;
CPyL13: ;
    cpy_r_r28 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 723, CPyStatic_emitmodule___globals);
        goto CPyL31;
    }
    cpy_r_r29 = CPyStatics[7107]; /* '};' */
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_emit___Emitter___emit_line(cpy_r_decl_emitter, cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 727, CPyStatic_emitmodule___globals);
        goto CPyL31;
    }
    cpy_r_r32 = CPyStatics[163]; /* '' */
    cpy_r_r33 = CPyStatics[7459]; /* 'static struct export_table' */
    cpy_r_r34 = CPY_GET_ATTR(cpy_r_self, CPyType_emitmodule___GroupGenerator, 1, mypyc___codegen___emitmodule___GroupGeneratorObject, PyObject *); /* group_suffix */
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 729, CPyStatic_emitmodule___globals);
        goto CPyL31;
    }
CPyL16: ;
    cpy_r_r35 = CPyStatics[7460]; /* ' exports = {' */
    cpy_r_r36 = CPyStr_Build(3, cpy_r_r33, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 729, CPyStatic_emitmodule___globals);
        goto CPyL31;
    }
    cpy_r_r37 = PyTuple_Pack(2, cpy_r_r32, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 729, CPyStatic_emitmodule___globals);
        goto CPyL31;
    }
    cpy_r_r38 = CPyDef_emit___Emitter___emit_lines(cpy_r_code_emitter, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 729, CPyStatic_emitmodule___globals);
        goto CPyL31;
    }
    cpy_r_r39 = 0;
    cpy_r_r40 = PyDict_Size(cpy_r_decls);
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = CPyDict_GetItemsIter(cpy_r_decls);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 730, CPyStatic_emitmodule___globals);
        goto CPyL31;
    }
CPyL20: ;
    cpy_r_r43 = CPyDict_NextItem(cpy_r_r42, cpy_r_r39);
    cpy_r_r44 = cpy_r_r43.f1;
    cpy_r_r39 = cpy_r_r44;
    cpy_r_r45 = cpy_r_r43.f0;
    if (!cpy_r_r45) goto CPyL38;
    cpy_r_r46 = cpy_r_r43.f2;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = cpy_r_r43.f3;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r43.f2);
    CPy_DECREF(cpy_r_r43.f3);
    if (likely(PyUnicode_Check(cpy_r_r46)))
        cpy_r_r48 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 730, CPyStatic_emitmodule___globals, "str", cpy_r_r46);
        goto CPyL39;
    }
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_emit___HeaderDeclaration))
        cpy_r_r49 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 730, CPyStatic_emitmodule___globals, "mypyc.codegen.emit.HeaderDeclaration", cpy_r_r47);
        goto CPyL40;
    }
    cpy_r_name = cpy_r_r48;
    cpy_r_decl = cpy_r_r49;
    cpy_r_r50 = ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_decl)->_needs_export;
    CPy_DECREF(cpy_r_decl);
    if (!cpy_r_r50) goto CPyL41;
CPyL24: ;
    cpy_r_r51 = CPyStatics[1596]; /* '&' */
    cpy_r_r52 = CPyStatics[242]; /* ',' */
    cpy_r_r53 = CPyStr_Build(3, cpy_r_r51, cpy_r_name, cpy_r_r52);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 732, CPyStatic_emitmodule___globals);
        goto CPyL42;
    }
    cpy_r_r54 = NULL;
    cpy_r_r55 = CPyDef_emit___Emitter___emit_line(cpy_r_code_emitter, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 732, CPyStatic_emitmodule___globals);
        goto CPyL42;
    }
CPyL26: ;
    cpy_r_r56 = CPyDict_CheckSize(cpy_r_decls, cpy_r_r41);
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 730, CPyStatic_emitmodule___globals);
        goto CPyL42;
    } else
        goto CPyL20;
CPyL27: ;
    cpy_r_r57 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 730, CPyStatic_emitmodule___globals);
        goto CPyL30;
    }
    cpy_r_r58 = CPyStatics[7107]; /* '};' */
    cpy_r_r59 = NULL;
    cpy_r_r60 = CPyDef_emit___Emitter___emit_line(cpy_r_code_emitter, cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 734, CPyStatic_emitmodule___globals);
        goto CPyL30;
    }
    return 1;
CPyL30: ;
    cpy_r_r61 = 2;
    return cpy_r_r61;
CPyL31: ;
    CPy_DecRef(cpy_r_decls);
    goto CPyL30;
CPyL32: ;
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13.f2);
    CPy_DECREF(cpy_r_r13.f3);
    goto CPyL13;
CPyL33: ;
    CPy_DecRef(cpy_r_decls);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r17);
    goto CPyL30;
CPyL34: ;
    CPy_DecRef(cpy_r_decls);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r18);
    goto CPyL30;
CPyL35: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_decl);
    goto CPyL12;
CPyL36: ;
    CPy_DecRef(cpy_r_decls);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_name);
    goto CPyL30;
CPyL37: ;
    CPy_DecRef(cpy_r_decls);
    CPy_DecRef(cpy_r_r12);
    goto CPyL30;
CPyL38: ;
    CPy_DECREF(cpy_r_decls);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r43.f2);
    CPy_DECREF(cpy_r_r43.f3);
    goto CPyL27;
CPyL39: ;
    CPy_DecRef(cpy_r_decls);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r47);
    goto CPyL30;
CPyL40: ;
    CPy_DecRef(cpy_r_decls);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r48);
    goto CPyL30;
CPyL41: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL26;
CPyL42: ;
    CPy_DecRef(cpy_r_decls);
    CPy_DecRef(cpy_r_r42);
    goto CPyL30;
}

PyObject *CPyPy_emitmodule___GroupGenerator___generate_export_table(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"decl_emitter", "code_emitter", 0};
    static CPyArg_Parser parser = {"OO:generate_export_table", kwlist, 0};
    PyObject *obj_decl_emitter;
    PyObject *obj_code_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_decl_emitter, &obj_code_emitter)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_decl_emitter;
    if (likely(Py_TYPE(obj_decl_emitter) == CPyType_emit___Emitter))
        arg_decl_emitter = obj_decl_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_decl_emitter); 
        goto fail;
    }
    PyObject *arg_code_emitter;
    if (likely(Py_TYPE(obj_code_emitter) == CPyType_emit___Emitter))
        arg_code_emitter = obj_code_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_code_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___GroupGenerator___generate_export_table(arg_self, arg_decl_emitter, arg_code_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_export_table", 676, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___GroupGenerator___generate_shared_lib_init(PyObject *cpy_r_self, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
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
    char cpy_r_r38;
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
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    tuple_T3CIO cpy_r_r61;
    CPyTagged cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_mod;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_name;
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
    char cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject **cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyTagged cpy_r_r102;
    CPyPtr cpy_r_r103;
    int64_t cpy_r_r104;
    CPyTagged cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_group;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_egroup;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
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
    PyObject **cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    CPyTagged cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    cpy_r_r0 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_group_name;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 750, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = NULL;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 752, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r7 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_group_name;
    CPy_INCREF(cpy_r_r7);
    if (likely(cpy_r_r7 != Py_None))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 755, CPyStatic_emitmodule___globals, "str", cpy_r_r7);
        goto CPyL53;
    }
    cpy_r_r9 = CPyDef_mypyc___common___shared_lib_name(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 755, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r10 = CPyStatics[224]; /* '.' */
    cpy_r_r11 = PyUnicode_Split(cpy_r_r9, cpy_r_r10, -1);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 755, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r12 = CPyList_GetItemShort(cpy_r_r11, -2);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 755, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 755, CPyStatic_emitmodule___globals, "str", cpy_r_r12);
        goto CPyL53;
    }
    cpy_r_r14 = CPyStatics[7461]; /* 'PyMODINIT_FUNC PyInit_' */
    cpy_r_r15 = CPyStatics[7145]; /* '(void)' */
    cpy_r_r16 = CPyStr_Build(3, cpy_r_r14, cpy_r_r13, cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 754, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r17 = CPyStatics[1405]; /* '{' */
    cpy_r_r18 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_group_name;
    CPy_INCREF(cpy_r_r18);
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 760, CPyStatic_emitmodule___globals, "str", cpy_r_r18);
        goto CPyL54;
    }
    cpy_r_r20 = CPyDef_mypyc___common___shared_lib_name(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 760, CPyStatic_emitmodule___globals);
        goto CPyL54;
    }
    cpy_r_r21 = CPyStatics[7462]; /* 'static PyModuleDef def = { PyModuleDef_HEAD_INIT, "' */
    cpy_r_r22 = CPyStatics[7463]; /* '", NULL, -1, NULL, NULL };' */
    cpy_r_r23 = CPyStr_Build(3, cpy_r_r21, cpy_r_r20, cpy_r_r22);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 759, CPyStatic_emitmodule___globals);
        goto CPyL54;
    }
    cpy_r_r24 = CPyStatics[7464]; /* 'int res;' */
    cpy_r_r25 = CPyStatics[7465]; /* 'PyObject *capsule;' */
    cpy_r_r26 = CPyStatics[7466]; /* 'PyObject *tmp;' */
    cpy_r_r27 = CPyStatics[7467]; /* 'static PyObject *module;' */
    cpy_r_r28 = CPyStatics[7468]; /* 'if (module) {' */
    cpy_r_r29 = CPyStatics[7469]; /* 'Py_INCREF(module);' */
    cpy_r_r30 = CPyStatics[7470]; /* 'return module;' */
    cpy_r_r31 = CPyStatics[1406]; /* '}' */
    cpy_r_r32 = CPyStatics[7471]; /* 'module = PyModule_Create(&def);' */
    cpy_r_r33 = CPyStatics[7472]; /* 'if (!module) {' */
    cpy_r_r34 = CPyStatics[7473]; /* 'goto fail;' */
    cpy_r_r35 = CPyStatics[1406]; /* '}' */
    cpy_r_r36 = CPyStatics[163]; /* '' */
    cpy_r_r37 = PyTuple_Pack(16, cpy_r_r16, cpy_r_r17, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 753, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r38 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 753, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r39 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_group_name;
    CPy_INCREF(cpy_r_r39);
    if (likely(cpy_r_r39 != Py_None))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 780, CPyStatic_emitmodule___globals, "str", cpy_r_r39);
        goto CPyL53;
    }
    cpy_r_r41 = CPyDef_mypyc___common___shared_lib_name(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 780, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r42 = CPyStatics[7474]; /* 'capsule = PyCapsule_New(&exports, "' */
    cpy_r_r43 = CPyStatics[7475]; /* '.exports", NULL);' */
    cpy_r_r44 = CPyStr_Build(3, cpy_r_r42, cpy_r_r41, cpy_r_r43);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 779, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r45 = CPyStatics[7476]; /* 'if (!capsule) {' */
    cpy_r_r46 = CPyStatics[7473]; /* 'goto fail;' */
    cpy_r_r47 = CPyStatics[1406]; /* '}' */
    cpy_r_r48 = CPyStatics[7477]; /* ('res = PyObject_SetAttrString(module, "exports", '
                                     'capsule);') */
    cpy_r_r49 = CPyStatics[7478]; /* 'Py_DECREF(capsule);' */
    cpy_r_r50 = CPyStatics[7178]; /* 'if (res < 0) {' */
    cpy_r_r51 = CPyStatics[7473]; /* 'goto fail;' */
    cpy_r_r52 = CPyStatics[1406]; /* '}' */
    cpy_r_r53 = CPyStatics[163]; /* '' */
    cpy_r_r54 = PyTuple_Pack(10, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 778, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r55 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 778, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r56 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_modules;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = 0;
    cpy_r_r58 = PyDict_Size(cpy_r_r56);
    cpy_r_r59 = cpy_r_r58 << 1;
    cpy_r_r60 = CPyDict_GetKeysIter(cpy_r_r56);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 793, CPyStatic_emitmodule___globals);
        goto CPyL55;
    }
CPyL21: ;
    cpy_r_r61 = CPyDict_NextKey(cpy_r_r60, cpy_r_r57);
    cpy_r_r62 = cpy_r_r61.f1;
    cpy_r_r57 = cpy_r_r62;
    cpy_r_r63 = cpy_r_r61.f0;
    if (!cpy_r_r63) goto CPyL56;
    cpy_r_r64 = cpy_r_r61.f2;
    CPy_INCREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r61.f2);
    if (likely(PyUnicode_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 793, CPyStatic_emitmodule___globals, "str", cpy_r_r64);
        goto CPyL57;
    }
    cpy_r_mod = cpy_r_r65;
    cpy_r_r66 = CPyDef_namegen___exported_name(cpy_r_mod);
    CPy_DECREF(cpy_r_mod);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 794, CPyStatic_emitmodule___globals);
        goto CPyL57;
    }
    cpy_r_name = cpy_r_r66;
    cpy_r_r67 = CPyStatics[7479]; /* 'extern PyObject *CPyInit_' */
    cpy_r_r68 = CPyStatics[7480]; /* '(void);' */
    cpy_r_r69 = CPyStr_Build(3, cpy_r_r67, cpy_r_name, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 796, CPyStatic_emitmodule___globals);
        goto CPyL58;
    }
    cpy_r_r70 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_group_name;
    CPy_INCREF(cpy_r_r70);
    if (likely(cpy_r_r70 != Py_None))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 798, CPyStatic_emitmodule___globals, "str", cpy_r_r70);
        goto CPyL59;
    }
    cpy_r_r72 = CPyDef_mypyc___common___shared_lib_name(cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 798, CPyStatic_emitmodule___globals);
        goto CPyL59;
    }
    cpy_r_r73 = CPyStatics[7481]; /* 'capsule = PyCapsule_New((void *)CPyInit_' */
    cpy_r_r74 = CPyStatics[7371]; /* ', "' */
    cpy_r_r75 = CPyStatics[7482]; /* '.init_' */
    cpy_r_r76 = CPyStatics[7483]; /* '", NULL);' */
    cpy_r_r77 = CPyStr_Build(7, cpy_r_r73, cpy_r_name, cpy_r_r74, cpy_r_r72, cpy_r_r75, cpy_r_name, cpy_r_r76);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 797, CPyStatic_emitmodule___globals);
        goto CPyL59;
    }
    cpy_r_r78 = CPyStatics[7476]; /* 'if (!capsule) {' */
    cpy_r_r79 = CPyStatics[7473]; /* 'goto fail;' */
    cpy_r_r80 = CPyStatics[1406]; /* '}' */
    cpy_r_r81 = CPyStatics[7484]; /* 'res = PyObject_SetAttrString(module, "init_' */
    cpy_r_r82 = CPyStatics[7485]; /* '", capsule);' */
    cpy_r_r83 = CPyStr_Build(3, cpy_r_r81, cpy_r_name, cpy_r_r82);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 803, CPyStatic_emitmodule___globals);
        goto CPyL60;
    }
    cpy_r_r84 = CPyStatics[7478]; /* 'Py_DECREF(capsule);' */
    cpy_r_r85 = CPyStatics[7178]; /* 'if (res < 0) {' */
    cpy_r_r86 = CPyStatics[7473]; /* 'goto fail;' */
    cpy_r_r87 = CPyStatics[1406]; /* '}' */
    cpy_r_r88 = CPyStatics[163]; /* '' */
    cpy_r_r89 = PyTuple_Pack(11, cpy_r_r69, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r83, cpy_r_r84, cpy_r_r85, cpy_r_r86, cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 795, CPyStatic_emitmodule___globals);
        goto CPyL57;
    }
    cpy_r_r90 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 795, CPyStatic_emitmodule___globals);
        goto CPyL57;
    }
    cpy_r_r91 = CPyDict_CheckSize(cpy_r_r56, cpy_r_r59);
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 793, CPyStatic_emitmodule___globals);
        goto CPyL57;
    } else
        goto CPyL21;
CPyL32: ;
    cpy_r_r92 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 793, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r93 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_context;
    cpy_r_r94 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r93)->_group_deps;
    CPy_INCREF(cpy_r_r94);
    cpy_r_r95 = CPyModule_builtins;
    cpy_r_r96 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r97 = CPyObject_GetAttr(cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 811, CPyStatic_emitmodule___globals);
        goto CPyL61;
    }
    PyObject *cpy_r_r98[1] = {cpy_r_r94};
    cpy_r_r99 = (PyObject **)&cpy_r_r98;
    cpy_r_r100 = _PyObject_Vectorcall(cpy_r_r97, cpy_r_r99, 1, 0);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 811, CPyStatic_emitmodule___globals);
        goto CPyL61;
    }
    CPy_DECREF(cpy_r_r94);
    if (likely(PyList_Check(cpy_r_r100)))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 811, CPyStatic_emitmodule___globals, "list", cpy_r_r100);
        goto CPyL53;
    }
    cpy_r_r102 = 0;
CPyL37: ;
    cpy_r_r103 = (CPyPtr)&((PyVarObject *)cpy_r_r101)->ob_size;
    cpy_r_r104 = *(int64_t *)cpy_r_r103;
    cpy_r_r105 = cpy_r_r104 << 1;
    cpy_r_r106 = (Py_ssize_t)cpy_r_r102 < (Py_ssize_t)cpy_r_r105;
    if (!cpy_r_r106) goto CPyL62;
    cpy_r_r107 = CPyList_GetItemUnsafe(cpy_r_r101, cpy_r_r102);
    if (likely(PyUnicode_Check(cpy_r_r107)))
        cpy_r_r108 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 811, CPyStatic_emitmodule___globals, "str", cpy_r_r107);
        goto CPyL63;
    }
    cpy_r_group = cpy_r_r108;
    cpy_r_r109 = CPyDef_namegen___exported_name(cpy_r_group);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 812, CPyStatic_emitmodule___globals);
        goto CPyL64;
    }
    cpy_r_egroup = cpy_r_r109;
    cpy_r_r110 = CPyDef_mypyc___common___shared_lib_name(cpy_r_group);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 815, CPyStatic_emitmodule___globals);
        goto CPyL65;
    }
    cpy_r_r111 = CPyStatics[7486]; /* 'tmp = PyImport_ImportModule("' */
    cpy_r_r112 = CPyStatics[7487]; /* '"); if (!tmp) goto fail; Py_DECREF(tmp);' */
    cpy_r_r113 = CPyStr_Build(3, cpy_r_r111, cpy_r_r110, cpy_r_r112);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 814, CPyStatic_emitmodule___globals);
        goto CPyL65;
    }
    cpy_r_r114 = CPyDef_mypyc___common___shared_lib_name(cpy_r_group);
    CPy_DECREF(cpy_r_group);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 818, CPyStatic_emitmodule___globals);
        goto CPyL66;
    }
    cpy_r_r115 = CPyStatics[7441]; /* 'struct export_table_' */
    cpy_r_r116 = CPyStatics[7488]; /* ' *pexports_' */
    cpy_r_r117 = CPyStatics[7489]; /* ' = PyCapsule_Import("' */
    cpy_r_r118 = CPyStatics[7490]; /* '.exports", 0);' */
    cpy_r_r119 = CPyStr_Build(7, cpy_r_r115, cpy_r_egroup, cpy_r_r116, cpy_r_egroup, cpy_r_r117, cpy_r_r114, cpy_r_r118);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 817, CPyStatic_emitmodule___globals);
        goto CPyL66;
    }
    cpy_r_r120 = CPyStatics[7491]; /* 'if (!pexports_' */
    cpy_r_r121 = CPyStatics[6900]; /* ') {' */
    cpy_r_r122 = CPyStr_Build(3, cpy_r_r120, cpy_r_egroup, cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 820, CPyStatic_emitmodule___globals);
        goto CPyL67;
    }
    cpy_r_r123 = CPyStatics[7473]; /* 'goto fail;' */
    cpy_r_r124 = CPyStatics[1406]; /* '}' */
    cpy_r_r125 = CPyStatics[7492]; /* ('memcpy(&exports_{group}, pexports_{group}, '
                                      'sizeof(exports_{group}));') */
    cpy_r_r126 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r127[2] = {cpy_r_r125, cpy_r_egroup};
    cpy_r_r128 = (PyObject **)&cpy_r_r127;
    cpy_r_r129 = CPyStatics[9967]; /* ('group',) */
    cpy_r_r130 = PyObject_VectorcallMethod(cpy_r_r126, cpy_r_r128, 9223372036854775809ULL, cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 823, CPyStatic_emitmodule___globals);
        goto CPyL68;
    }
    CPy_DECREF(cpy_r_egroup);
    if (likely(PyUnicode_Check(cpy_r_r130)))
        cpy_r_r131 = cpy_r_r130;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 823, CPyStatic_emitmodule___globals, "str", cpy_r_r130);
        goto CPyL69;
    }
    cpy_r_r132 = CPyStatics[163]; /* '' */
    cpy_r_r133 = PyTuple_Pack(7, cpy_r_r113, cpy_r_r119, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r131, cpy_r_r132);
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_r122);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 813, CPyStatic_emitmodule___globals);
        goto CPyL63;
    }
    cpy_r_r134 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r133);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r134 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 813, CPyStatic_emitmodule___globals);
        goto CPyL63;
    }
    cpy_r_r135 = cpy_r_r102 + 2;
    cpy_r_r102 = cpy_r_r135;
    goto CPyL37;
CPyL50: ;
    cpy_r_r136 = CPyStatics[7470]; /* 'return module;' */
    cpy_r_r137 = CPyStatics[7493]; /* 'fail:' */
    cpy_r_r138 = CPyStatics[7494]; /* 'Py_XDECREF(module);' */
    cpy_r_r139 = CPyStatics[7171]; /* 'return NULL;' */
    cpy_r_r140 = CPyStatics[1406]; /* '}' */
    cpy_r_r141 = PyTuple_Pack(5, cpy_r_r136, cpy_r_r137, cpy_r_r138, cpy_r_r139, cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 829, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    cpy_r_r142 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r141);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r142 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 829, CPyStatic_emitmodule___globals);
        goto CPyL53;
    }
    return 1;
CPyL53: ;
    cpy_r_r143 = 2;
    return cpy_r_r143;
CPyL54: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL53;
CPyL55: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL53;
CPyL56: ;
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r61.f2);
    goto CPyL32;
CPyL57: ;
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r60);
    goto CPyL53;
CPyL58: ;
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_name);
    goto CPyL53;
CPyL59: ;
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r69);
    goto CPyL53;
CPyL60: ;
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r77);
    goto CPyL53;
CPyL61: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL53;
CPyL62: ;
    CPy_DECREF(cpy_r_r101);
    goto CPyL50;
CPyL63: ;
    CPy_DecRef(cpy_r_r101);
    goto CPyL53;
CPyL64: ;
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_group);
    goto CPyL53;
CPyL65: ;
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_group);
    CPy_DecRef(cpy_r_egroup);
    goto CPyL53;
CPyL66: ;
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_egroup);
    CPy_DecRef(cpy_r_r113);
    goto CPyL53;
CPyL67: ;
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_egroup);
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r119);
    goto CPyL53;
CPyL68: ;
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_egroup);
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_r122);
    goto CPyL53;
CPyL69: ;
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_r122);
    goto CPyL53;
}

PyObject *CPyPy_emitmodule___GroupGenerator___generate_shared_lib_init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"emitter", 0};
    static CPyArg_Parser parser = {"O:generate_shared_lib_init", kwlist, 0};
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___GroupGenerator___generate_shared_lib_init(arg_self, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_shared_lib_init", 736, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___GroupGenerator___generate_globals_init(PyObject *cpy_r_self, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    tuple_T2OO cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_symbol;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_fixup;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_values;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    cpy_r_r1 = CPyStatics[7495]; /* 'int CPyGlobalsInit(void)' */
    cpy_r_r2 = CPyStatics[1405]; /* '{' */
    cpy_r_r3 = CPyStatics[7496]; /* 'static int is_initialized = 0;' */
    cpy_r_r4 = CPyStatics[7497]; /* 'if (is_initialized) return 0;' */
    cpy_r_r5 = CPyStatics[163]; /* '' */
    cpy_r_r6 = PyTuple_Pack(6, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_globals_init", 832, CPyStatic_emitmodule___globals);
        goto CPyL15;
    }
    cpy_r_r7 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_globals_init", 832, CPyStatic_emitmodule___globals);
        goto CPyL15;
    }
    cpy_r_r8 = CPyStatics[7498]; /* 'CPy_Init();' */
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_globals_init", 841, CPyStatic_emitmodule___globals);
        goto CPyL15;
    }
    cpy_r_r11 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_simple_inits;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = 0;
CPyL4: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL16;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r12);
    PyObject *__tmp9617;
    if (unlikely(!(PyTuple_Check(cpy_r_r17) && PyTuple_GET_SIZE(cpy_r_r17) == 2))) {
        __tmp9617 = NULL;
        goto __LL9618;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r17, 0))))
        __tmp9617 = PyTuple_GET_ITEM(cpy_r_r17, 0);
    else {
        __tmp9617 = NULL;
    }
    if (__tmp9617 == NULL) goto __LL9618;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r17, 1))))
        __tmp9617 = PyTuple_GET_ITEM(cpy_r_r17, 1);
    else {
        __tmp9617 = NULL;
    }
    if (__tmp9617 == NULL) goto __LL9618;
    __tmp9617 = cpy_r_r17;
__LL9618: ;
    if (unlikely(__tmp9617 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r17); cpy_r_r18 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9619 = PyTuple_GET_ITEM(cpy_r_r17, 0);
        CPy_INCREF(__tmp9619);
        PyObject *__tmp9620;
        if (likely(PyUnicode_Check(__tmp9619)))
            __tmp9620 = __tmp9619;
        else {
            CPy_TypeError("str", __tmp9619); 
            __tmp9620 = NULL;
        }
        cpy_r_r18.f0 = __tmp9620;
        PyObject *__tmp9621 = PyTuple_GET_ITEM(cpy_r_r17, 1);
        CPy_INCREF(__tmp9621);
        PyObject *__tmp9622;
        if (likely(PyUnicode_Check(__tmp9621)))
            __tmp9622 = __tmp9621;
        else {
            CPy_TypeError("str", __tmp9621); 
            __tmp9622 = NULL;
        }
        cpy_r_r18.f1 = __tmp9622;
    }
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_globals_init", 842, CPyStatic_emitmodule___globals);
        goto CPyL17;
    }
    cpy_r_r19 = cpy_r_r18.f0;
    CPy_INCREF(cpy_r_r19);
    cpy_r_symbol = cpy_r_r19;
    cpy_r_r20 = cpy_r_r18.f1;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r18.f0);
    CPy_DECREF(cpy_r_r18.f1);
    cpy_r_fixup = cpy_r_r20;
    cpy_r_r21 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r22 = CPyStatics[6886]; /* ';' */
    cpy_r_r23 = CPyStr_Build(4, cpy_r_symbol, cpy_r_r21, cpy_r_fixup, cpy_r_r22);
    CPy_DECREF(cpy_r_symbol);
    CPy_DECREF(cpy_r_fixup);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_globals_init", 843, CPyStatic_emitmodule___globals);
        goto CPyL17;
    }
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_globals_init", 843, CPyStatic_emitmodule___globals);
        goto CPyL17;
    }
    cpy_r_r26 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r26;
    goto CPyL4;
CPyL9: ;
    cpy_r_r27 = CPyStatics[7499]; /* ('CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, '
                                     'CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet') */
    CPy_INCREF(cpy_r_r27);
    cpy_r_values = cpy_r_r27;
    cpy_r_r28 = CPyStatics[7500]; /* 'if (CPyStatics_Initialize(CPyStatics, ' */
    cpy_r_r29 = CPyStatics[7501]; /* ') < 0) {' */
    cpy_r_r30 = CPyStr_Build(3, cpy_r_r28, cpy_r_values, cpy_r_r29);
    CPy_DECREF(cpy_r_values);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_globals_init", 847, CPyStatic_emitmodule___globals);
        goto CPyL15;
    }
    cpy_r_r31 = CPyStatics[7240]; /* 'return -1;' */
    cpy_r_r32 = CPyStatics[1406]; /* '}' */
    cpy_r_r33 = PyTuple_Pack(3, cpy_r_r30, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_globals_init", 846, CPyStatic_emitmodule___globals);
        goto CPyL15;
    }
    cpy_r_r34 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_globals_init", 846, CPyStatic_emitmodule___globals);
        goto CPyL15;
    }
    cpy_r_r35 = CPyStatics[7502]; /* 'is_initialized = 1;' */
    cpy_r_r36 = CPyStatics[7184]; /* 'return 0;' */
    cpy_r_r37 = CPyStatics[1406]; /* '}' */
    cpy_r_r38 = PyTuple_Pack(3, cpy_r_r35, cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_globals_init", 850, CPyStatic_emitmodule___globals);
        goto CPyL15;
    }
    cpy_r_r39 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_globals_init", 850, CPyStatic_emitmodule___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
CPyL16: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL9;
CPyL17: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL15;
}

PyObject *CPyPy_emitmodule___GroupGenerator___generate_globals_init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"emitter", 0};
    static CPyArg_Parser parser = {"O:generate_globals_init", kwlist, 0};
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___GroupGenerator___generate_globals_init(arg_self, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_globals_init", 831, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___GroupGenerator___generate_module_def(PyObject *cpy_r_self, PyObject *cpy_r_emitter, PyObject *cpy_r_module_name, PyObject *cpy_r_module) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_module_prefix;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_fn;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_name;
    tuple_T2II cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_flag;
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
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
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
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_declaration;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_module_static;
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
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_module_globals;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_type_structs;
    PyObject *cpy_r_r131;
    CPyTagged cpy_r_r132;
    CPyPtr cpy_r_r133;
    int64_t cpy_r_r134;
    CPyTagged cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_cl;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_type_struct;
    int32_t cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject **cpy_r_r146;
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
    char cpy_r_r157;
    CPyTagged cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    char cpy_r_r163;
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
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
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
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_static_name;
    char cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_undef;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    CPyTagged cpy_r_r199;
    CPyTagged cpy_r_r200;
    CPyPtr cpy_r_r201;
    int64_t cpy_r_r202;
    CPyTagged cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    char cpy_r_r211;
    CPyTagged cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    char cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    char cpy_r_r218;
    char cpy_r_r219;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_namegen___NameGenerator___private_name(cpy_r_r0, cpy_r_module_name, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 855, CPyStatic_emitmodule___globals);
        goto CPyL104;
    }
    cpy_r_module_prefix = cpy_r_r2;
    cpy_r_r3 = CPyStatics[7205]; /* 'static PyMethodDef ' */
    cpy_r_r4 = CPyStatics[7503]; /* 'module_methods[] = {' */
    cpy_r_r5 = CPyStr_Build(3, cpy_r_r3, cpy_r_module_prefix, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 856, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 856, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_r8 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_functions;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = 0;
CPyL4: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL106;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_func_ir___FuncIR))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 857, CPyStatic_emitmodule___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r14);
        goto CPyL107;
    }
    cpy_r_fn = cpy_r_r15;
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 4, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* class_name */
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 858, CPyStatic_emitmodule___globals);
        goto CPyL108;
    }
CPyL7: ;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_r16 != cpy_r_r17;
    CPy_DECREF(cpy_r_r16);
    if (cpy_r_r18) goto CPyL109;
    cpy_r_r19 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 858, CPyStatic_emitmodule___globals);
        goto CPyL108;
    }
CPyL9: ;
    cpy_r_r20 = CPyStatics[7424]; /* '__top_level__' */
    cpy_r_r21 = PyUnicode_Compare(cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r22 = cpy_r_r21 == -1;
    if (!cpy_r_r22) goto CPyL12;
    cpy_r_r23 = PyErr_Occurred();
    cpy_r_r24 = cpy_r_r23 != NULL;
    if (!cpy_r_r24) goto CPyL12;
    cpy_r_r25 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 858, CPyStatic_emitmodule___globals);
        goto CPyL108;
    }
CPyL12: ;
    cpy_r_r26 = cpy_r_r21 == 0;
    if (cpy_r_r26) goto CPyL109;
    cpy_r_r27 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 860, CPyStatic_emitmodule___globals);
        goto CPyL108;
    }
CPyL14: ;
    cpy_r_r28 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_decl;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPY_GET_ATTR(cpy_r_r28, CPyType_func_ir___FuncDecl, 5, mypyc___ir___func_ir___FuncDeclObject, PyObject *); /* shortname */
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 860, CPyStatic_emitmodule___globals);
        goto CPyL110;
    }
CPyL15: ;
    cpy_r_r30 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 1, mypyc___ir___func_ir___FuncIRObject, CPyTagged); /* line */
    if (unlikely(cpy_r_r30 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 860, CPyStatic_emitmodule___globals);
        goto CPyL111;
    }
CPyL16: ;
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_r30);
    cpy_r_r32 = CPyDef_mypyc___common___short_id_from_name(cpy_r_r27, cpy_r_r29, cpy_r_r31);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 860, CPyStatic_emitmodule___globals);
        goto CPyL108;
    }
    cpy_r_name = cpy_r_r32;
    cpy_r_r33 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_capi_version;
    CPyTagged_INCREF(cpy_r_r33.f0);
    CPyTagged_INCREF(cpy_r_r33.f1);
    cpy_r_r34 = CPyDef_emitmodule___is_fastcall_supported(cpy_r_fn, cpy_r_r33);
    CPyTagged_DECREF(cpy_r_r33.f0);
    CPyTagged_DECREF(cpy_r_r33.f1);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 861, CPyStatic_emitmodule___globals);
        goto CPyL112;
    }
    if (!cpy_r_r34) goto CPyL20;
    cpy_r_r35 = CPyStatics[7209]; /* 'METH_FASTCALL' */
    CPy_INCREF(cpy_r_r35);
    cpy_r_flag = cpy_r_r35;
    goto CPyL21;
CPyL20: ;
    cpy_r_r36 = CPyStatics[7210]; /* 'METH_VARARGS' */
    CPy_INCREF(cpy_r_r36);
    cpy_r_flag = cpy_r_r36;
CPyL21: ;
    cpy_r_r37 = CPyStatics[7504];
    cpy_r_r38 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_fn);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 869, CPyStatic_emitmodule___globals);
        goto CPyL113;
    }
    cpy_r_r40 = CPyStatics[7069]; /* 'CPyPy_' */
    cpy_r_r41 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r42[5] = {cpy_r_r37, cpy_r_name, cpy_r_r39, cpy_r_r40, cpy_r_flag};
    cpy_r_r43 = (PyObject **)&cpy_r_r42;
    cpy_r_r44 = CPyStatics[9968]; /* ('name', 'cname', 'prefix', 'flag') */
    cpy_r_r45 = PyObject_VectorcallMethod(cpy_r_r41, cpy_r_r43, 9223372036854775809ULL, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 866, CPyStatic_emitmodule___globals);
        goto CPyL114;
    }
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_flag);
    if (likely(PyUnicode_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 866, CPyStatic_emitmodule___globals, "str", cpy_r_r45);
        goto CPyL107;
    }
    cpy_r_r47 = NULL;
    cpy_r_r48 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 865, CPyStatic_emitmodule___globals);
        goto CPyL107;
    }
CPyL25: ;
    cpy_r_r49 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r49;
    goto CPyL4;
CPyL26: ;
    cpy_r_r50 = CPyStatics[7507]; /* '{NULL, NULL, 0, NULL}' */
    cpy_r_r51 = NULL;
    cpy_r_r52 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 871, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_r53 = CPyStatics[7107]; /* '};' */
    cpy_r_r54 = NULL;
    cpy_r_r55 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 872, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_r56 = NULL;
    cpy_r_r57 = NULL;
    cpy_r_r58 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 873, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_r59 = CPyStatics[7508]; /* 'static struct PyModuleDef ' */
    cpy_r_r60 = CPyStatics[7509]; /* 'module = {' */
    cpy_r_r61 = CPyStr_Build(3, cpy_r_r59, cpy_r_module_prefix, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 877, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_r62 = CPyStatics[7510]; /* 'PyModuleDef_HEAD_INIT,' */
    cpy_r_r63 = CPyStatics[178]; /* '"' */
    cpy_r_r64 = CPyStatics[7207]; /* '",' */
    cpy_r_r65 = CPyStr_Build(3, cpy_r_r63, cpy_r_module_name, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 879, CPyStatic_emitmodule___globals);
        goto CPyL115;
    }
    cpy_r_r66 = CPyStatics[7511];
    cpy_r_r67 = CPyStatics[7512];
    cpy_r_r68 = CPyStatics[7513];
    cpy_r_r69 = CPyStatics[7514]; /* 'module_methods' */
    cpy_r_r70 = CPyStr_Build(2, cpy_r_module_prefix, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 883, CPyStatic_emitmodule___globals);
        goto CPyL116;
    }
    cpy_r_r71 = CPyStatics[7107]; /* '};' */
    cpy_r_r72 = PyTuple_Pack(8, cpy_r_r61, cpy_r_r62, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 876, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_r73 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 876, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_r74 = NULL;
    cpy_r_r75 = NULL;
    cpy_r_r76 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 886, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_r77 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_use_shared_lib;
    if (cpy_r_r77) goto CPyL38;
CPyL36: ;
    cpy_r_r78 = CPyStatics[7461]; /* 'PyMODINIT_FUNC PyInit_' */
    cpy_r_r79 = CPyStatics[7145]; /* '(void)' */
    cpy_r_r80 = CPyStr_Build(3, cpy_r_r78, cpy_r_module_name, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 893, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_declaration = cpy_r_r80;
    goto CPyL41;
CPyL38: ;
    cpy_r_r81 = CPyStatics[7515]; /* 'PyObject *CPyInit_' */
    cpy_r_r82 = CPyDef_namegen___exported_name(cpy_r_module_name);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 895, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_r83 = CPyStatics[7145]; /* '(void)' */
    cpy_r_r84 = CPyStr_Build(3, cpy_r_r81, cpy_r_r82, cpy_r_r83);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 895, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_declaration = cpy_r_r84;
CPyL41: ;
    cpy_r_r85 = CPyStatics[1405]; /* '{' */
    cpy_r_r86 = PyTuple_Pack(2, cpy_r_declaration, cpy_r_r85);
    CPy_DECREF(cpy_r_declaration);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 896, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_r87 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 896, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_r88 = CPyStatics[7516]; /* 'PyObject* modname = NULL;' */
    cpy_r_r89 = NULL;
    cpy_r_r90 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 897, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_r91 = CPyDef_emitmodule___GroupGenerator___module_internal_static_name(cpy_r_self, cpy_r_module_name, cpy_r_emitter);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 903, CPyStatic_emitmodule___globals);
        goto CPyL105;
    }
    cpy_r_module_static = cpy_r_r91;
    cpy_r_r92 = CPyStatics[6899]; /* 'if (' */
    cpy_r_r93 = CPyStatics[6900]; /* ') {' */
    cpy_r_r94 = CPyStr_Build(3, cpy_r_r92, cpy_r_module_static, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 906, CPyStatic_emitmodule___globals);
        goto CPyL117;
    }
    cpy_r_r95 = CPyStatics[7517]; /* 'Py_INCREF(' */
    cpy_r_r96 = CPyStatics[6872]; /* ');' */
    cpy_r_r97 = CPyStr_Build(3, cpy_r_r95, cpy_r_module_static, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 907, CPyStatic_emitmodule___globals);
        goto CPyL118;
    }
    cpy_r_r98 = CPyStatics[6945]; /* 'return ' */
    cpy_r_r99 = CPyStatics[6886]; /* ';' */
    cpy_r_r100 = CPyStr_Build(3, cpy_r_r98, cpy_r_module_static, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 908, CPyStatic_emitmodule___globals);
        goto CPyL119;
    }
    cpy_r_r101 = CPyStatics[1406]; /* '}' */
    cpy_r_r102 = PyTuple_Pack(4, cpy_r_r94, cpy_r_r97, cpy_r_r100, cpy_r_r101);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 905, CPyStatic_emitmodule___globals);
        goto CPyL117;
    }
    cpy_r_r103 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 905, CPyStatic_emitmodule___globals);
        goto CPyL117;
    }
    cpy_r_r104 = CPyStatics[7518]; /* ' = PyModule_Create(&' */
    cpy_r_r105 = CPyStatics[7519]; /* 'module);' */
    cpy_r_r106 = CPyStr_Build(4, cpy_r_module_static, cpy_r_r104, cpy_r_module_prefix, cpy_r_r105);
    CPy_DECREF(cpy_r_module_prefix);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 913, CPyStatic_emitmodule___globals);
        goto CPyL120;
    }
    cpy_r_r107 = CPyStatics[6892]; /* 'if (unlikely(' */
    cpy_r_r108 = CPyStatics[6989]; /* ' == NULL))' */
    cpy_r_r109 = CPyStr_Build(3, cpy_r_r107, cpy_r_module_static, cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 914, CPyStatic_emitmodule___globals);
        goto CPyL121;
    }
    cpy_r_r110 = CPyStatics[7520]; /* '    goto fail;' */
    cpy_r_r111 = PyTuple_Pack(3, cpy_r_r106, cpy_r_r109, cpy_r_r110);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 912, CPyStatic_emitmodule___globals);
        goto CPyL120;
    }
    cpy_r_r112 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 912, CPyStatic_emitmodule___globals);
        goto CPyL120;
    }
    cpy_r_r113 = CPyStatics[7521]; /* 'modname = PyObject_GetAttrString((PyObject *)' */
    cpy_r_r114 = CPyStatics[7522]; /* ', "__name__");' */
    cpy_r_r115 = CPyStr_Build(3, cpy_r_r113, cpy_r_module_static, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 918, CPyStatic_emitmodule___globals);
        goto CPyL120;
    }
    cpy_r_r116 = NULL;
    cpy_r_r117 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r115, cpy_r_r116);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r117 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 917, CPyStatic_emitmodule___globals);
        goto CPyL120;
    }
    cpy_r_r118 = CPyStatics[1109]; /* 'globals' */
    cpy_r_r119 = NULL;
    cpy_r_r120 = CPyDef_emit___Emitter___static_name(cpy_r_emitter, cpy_r_r118, cpy_r_module_name, cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 921, CPyStatic_emitmodule___globals);
        goto CPyL120;
    }
    cpy_r_module_globals = cpy_r_r120;
    cpy_r_r121 = CPyStatics[7523]; /* ' = PyModule_GetDict(' */
    cpy_r_r122 = CPyStatics[6872]; /* ');' */
    cpy_r_r123 = CPyStr_Build(4, cpy_r_module_globals, cpy_r_r121, cpy_r_module_static, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 923, CPyStatic_emitmodule___globals);
        goto CPyL122;
    }
    cpy_r_r124 = CPyStatics[6892]; /* 'if (unlikely(' */
    cpy_r_r125 = CPyStatics[6989]; /* ' == NULL))' */
    cpy_r_r126 = CPyStr_Build(3, cpy_r_r124, cpy_r_module_globals, cpy_r_r125);
    CPy_DECREF(cpy_r_module_globals);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 924, CPyStatic_emitmodule___globals);
        goto CPyL123;
    }
    cpy_r_r127 = CPyStatics[7520]; /* '    goto fail;' */
    cpy_r_r128 = PyTuple_Pack(3, cpy_r_r123, cpy_r_r126, cpy_r_r127);
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 922, CPyStatic_emitmodule___globals);
        goto CPyL120;
    }
    cpy_r_r129 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 922, CPyStatic_emitmodule___globals);
        goto CPyL120;
    }
    cpy_r_r130 = PyList_New(0);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 929, CPyStatic_emitmodule___globals);
        goto CPyL120;
    }
    cpy_r_type_structs = cpy_r_r130;
    cpy_r_r131 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_classes;
    CPy_INCREF(cpy_r_r131);
    cpy_r_r132 = 0;
CPyL63: ;
    cpy_r_r133 = (CPyPtr)&((PyVarObject *)cpy_r_r131)->ob_size;
    cpy_r_r134 = *(int64_t *)cpy_r_r133;
    cpy_r_r135 = cpy_r_r134 << 1;
    cpy_r_r136 = (Py_ssize_t)cpy_r_r132 < (Py_ssize_t)cpy_r_r135;
    if (!cpy_r_r136) goto CPyL124;
    cpy_r_r137 = CPyList_GetItemUnsafe(cpy_r_r131, cpy_r_r132);
    if (likely(Py_TYPE(cpy_r_r137) == CPyType_class_ir___ClassIR))
        cpy_r_r138 = cpy_r_r137;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 930, CPyStatic_emitmodule___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r137);
        goto CPyL125;
    }
    cpy_r_cl = cpy_r_r138;
    cpy_r_r139 = CPyDef_emit___Emitter___type_struct_name(cpy_r_emitter, cpy_r_cl);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 931, CPyStatic_emitmodule___globals);
        goto CPyL126;
    }
    cpy_r_type_struct = cpy_r_r139;
    cpy_r_r140 = PyList_Append(cpy_r_type_structs, cpy_r_type_struct);
    cpy_r_r141 = cpy_r_r140 >= 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 932, CPyStatic_emitmodule___globals);
        goto CPyL127;
    }
    cpy_r_r142 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_is_generated;
    CPy_DECREF(cpy_r_cl);
    if (!cpy_r_r142) goto CPyL128;
CPyL68: ;
    cpy_r_r143 = CPyStatics[7524]; /* ('{t} = (PyTypeObject *)CPyType_FromTemplate((PyObject '
                                      '*){t}_template, NULL, modname);') */
    cpy_r_r144 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r145[2] = {cpy_r_r143, cpy_r_type_struct};
    cpy_r_r146 = (PyObject **)&cpy_r_r145;
    cpy_r_r147 = CPyStatics[9948]; /* ('t',) */
    cpy_r_r148 = PyObject_VectorcallMethod(cpy_r_r144, cpy_r_r146, 9223372036854775809ULL, cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 935, CPyStatic_emitmodule___globals);
        goto CPyL129;
    }
    if (likely(PyUnicode_Check(cpy_r_r148)))
        cpy_r_r149 = cpy_r_r148;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 935, CPyStatic_emitmodule___globals, "str", cpy_r_r148);
        goto CPyL129;
    }
    cpy_r_r150 = PyTuple_Pack(1, cpy_r_r149);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 934, CPyStatic_emitmodule___globals);
        goto CPyL129;
    }
    cpy_r_r151 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r150);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 934, CPyStatic_emitmodule___globals);
        goto CPyL129;
    }
    cpy_r_r152 = CPyStatics[7525]; /* 'if (unlikely(!' */
    cpy_r_r153 = CPyStatics[6933]; /* '))' */
    cpy_r_r154 = CPyStr_Build(3, cpy_r_r152, cpy_r_type_struct, cpy_r_r153);
    CPy_DECREF(cpy_r_type_struct);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 938, CPyStatic_emitmodule___globals);
        goto CPyL125;
    }
    cpy_r_r155 = CPyStatics[7520]; /* '    goto fail;' */
    cpy_r_r156 = PyTuple_Pack(2, cpy_r_r154, cpy_r_r155);
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 938, CPyStatic_emitmodule___globals);
        goto CPyL125;
    }
    cpy_r_r157 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r156);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r157 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 938, CPyStatic_emitmodule___globals);
        goto CPyL125;
    }
CPyL75: ;
    cpy_r_r158 = cpy_r_r132 + 2;
    cpy_r_r132 = cpy_r_r158;
    goto CPyL63;
CPyL76: ;
    cpy_r_r159 = CPyStatics[7526]; /* 'if (CPyGlobalsInit() < 0)' */
    cpy_r_r160 = CPyStatics[7520]; /* '    goto fail;' */
    cpy_r_r161 = PyTuple_Pack(2, cpy_r_r159, cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 940, CPyStatic_emitmodule___globals);
        goto CPyL130;
    }
    cpy_r_r162 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r161);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r162 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 940, CPyStatic_emitmodule___globals);
        goto CPyL130;
    }
    cpy_r_r163 = CPyDef_emitmodule___GroupGenerator___generate_top_level_call(cpy_r_self, cpy_r_module, cpy_r_emitter);
    if (unlikely(cpy_r_r163 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 942, CPyStatic_emitmodule___globals);
        goto CPyL130;
    }
    cpy_r_r164 = CPyStatics[7527]; /* 'Py_DECREF(modname);' */
    cpy_r_r165 = PyTuple_Pack(1, cpy_r_r164);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 944, CPyStatic_emitmodule___globals);
        goto CPyL130;
    }
    cpy_r_r166 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r165);
    CPy_DECREF(cpy_r_r165);
    if (unlikely(cpy_r_r166 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 944, CPyStatic_emitmodule___globals);
        goto CPyL130;
    }
    cpy_r_r167 = CPyStatics[6945]; /* 'return ' */
    cpy_r_r168 = CPyStatics[6886]; /* ';' */
    cpy_r_r169 = CPyStr_Build(3, cpy_r_r167, cpy_r_module_static, cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 946, CPyStatic_emitmodule___globals);
        goto CPyL130;
    }
    cpy_r_r170 = NULL;
    cpy_r_r171 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r169, cpy_r_r170);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r171 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 946, CPyStatic_emitmodule___globals);
        goto CPyL130;
    }
    cpy_r_r172 = CPyStatics[7493]; /* 'fail:' */
    cpy_r_r173 = CPyStatics[7001]; /* 'Py_CLEAR(' */
    cpy_r_r174 = CPyStatics[6872]; /* ');' */
    cpy_r_r175 = CPyStr_Build(3, cpy_r_r173, cpy_r_module_static, cpy_r_r174);
    CPy_DECREF(cpy_r_module_static);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 947, CPyStatic_emitmodule___globals);
        goto CPyL131;
    }
    cpy_r_r176 = CPyStatics[7528]; /* 'Py_CLEAR(modname);' */
    cpy_r_r177 = PyTuple_Pack(3, cpy_r_r172, cpy_r_r175, cpy_r_r176);
    CPy_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 947, CPyStatic_emitmodule___globals);
        goto CPyL131;
    }
    cpy_r_r178 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r177);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r178 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 947, CPyStatic_emitmodule___globals);
        goto CPyL131;
    }
    cpy_r_r179 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_final_names;
    CPy_INCREF(cpy_r_r179);
    cpy_r_r180 = 0;
CPyL87: ;
    cpy_r_r181 = (CPyPtr)&((PyVarObject *)cpy_r_r179)->ob_size;
    cpy_r_r182 = *(int64_t *)cpy_r_r181;
    cpy_r_r183 = cpy_r_r182 << 1;
    cpy_r_r184 = (Py_ssize_t)cpy_r_r180 < (Py_ssize_t)cpy_r_r183;
    if (!cpy_r_r184) goto CPyL132;
    cpy_r_r185 = CPyList_GetItemUnsafe(cpy_r_r179, cpy_r_r180);
    PyObject *__tmp9623;
    if (unlikely(!(PyTuple_Check(cpy_r_r185) && PyTuple_GET_SIZE(cpy_r_r185) == 2))) {
        __tmp9623 = NULL;
        goto __LL9624;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r185, 0))))
        __tmp9623 = PyTuple_GET_ITEM(cpy_r_r185, 0);
    else {
        __tmp9623 = NULL;
    }
    if (__tmp9623 == NULL) goto __LL9624;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r185, 1), CPyType_rtypes___RType)))
        __tmp9623 = PyTuple_GET_ITEM(cpy_r_r185, 1);
    else {
        __tmp9623 = NULL;
    }
    if (__tmp9623 == NULL) goto __LL9624;
    __tmp9623 = cpy_r_r185;
__LL9624: ;
    if (unlikely(__tmp9623 == NULL)) {
        CPy_TypeError("tuple[str, mypyc.ir.rtypes.RType]", cpy_r_r185); cpy_r_r186 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9625 = PyTuple_GET_ITEM(cpy_r_r185, 0);
        CPy_INCREF(__tmp9625);
        PyObject *__tmp9626;
        if (likely(PyUnicode_Check(__tmp9625)))
            __tmp9626 = __tmp9625;
        else {
            CPy_TypeError("str", __tmp9625); 
            __tmp9626 = NULL;
        }
        cpy_r_r186.f0 = __tmp9626;
        PyObject *__tmp9627 = PyTuple_GET_ITEM(cpy_r_r185, 1);
        CPy_INCREF(__tmp9627);
        PyObject *__tmp9628;
        if (likely(PyObject_TypeCheck(__tmp9627, CPyType_rtypes___RType)))
            __tmp9628 = __tmp9627;
        else {
            CPy_TypeError("mypyc.ir.rtypes.RType", __tmp9627); 
            __tmp9628 = NULL;
        }
        cpy_r_r186.f1 = __tmp9628;
    }
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r186.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 948, CPyStatic_emitmodule___globals);
        goto CPyL133;
    }
    cpy_r_r187 = cpy_r_r186.f0;
    CPy_INCREF(cpy_r_r187);
    cpy_r_name = cpy_r_r187;
    cpy_r_r188 = cpy_r_r186.f1;
    CPy_INCREF(cpy_r_r188);
    CPy_DECREF(cpy_r_r186.f0);
    CPy_DECREF(cpy_r_r186.f1);
    cpy_r_typ = cpy_r_r188;
    cpy_r_r189 = NULL;
    cpy_r_r190 = CPyDef_emit___Emitter___static_name(cpy_r_emitter, cpy_r_name, cpy_r_module_name, cpy_r_r189);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 949, CPyStatic_emitmodule___globals);
        goto CPyL134;
    }
    cpy_r_static_name = cpy_r_r190;
    cpy_r_r191 = 2;
    cpy_r_r192 = CPyDef_emit___Emitter___emit_dec_ref(cpy_r_emitter, cpy_r_static_name, cpy_r_typ, 1, cpy_r_r191);
    if (unlikely(cpy_r_r192 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 950, CPyStatic_emitmodule___globals);
        goto CPyL135;
    }
    cpy_r_r193 = CPyDef_emit___Emitter___c_undefined_value(cpy_r_emitter, cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 951, CPyStatic_emitmodule___globals);
        goto CPyL136;
    }
    cpy_r_undef = cpy_r_r193;
    cpy_r_r194 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r195 = CPyStatics[6886]; /* ';' */
    cpy_r_r196 = CPyStr_Build(4, cpy_r_static_name, cpy_r_r194, cpy_r_undef, cpy_r_r195);
    CPy_DECREF(cpy_r_static_name);
    CPy_DECREF(cpy_r_undef);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 952, CPyStatic_emitmodule___globals);
        goto CPyL133;
    }
    cpy_r_r197 = NULL;
    cpy_r_r198 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r196, cpy_r_r197);
    CPy_DECREF(cpy_r_r196);
    if (unlikely(cpy_r_r198 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 952, CPyStatic_emitmodule___globals);
        goto CPyL133;
    }
    cpy_r_r199 = cpy_r_r180 + 2;
    cpy_r_r180 = cpy_r_r199;
    goto CPyL87;
CPyL95: ;
    cpy_r_r200 = 0;
CPyL96: ;
    cpy_r_r201 = (CPyPtr)&((PyVarObject *)cpy_r_type_structs)->ob_size;
    cpy_r_r202 = *(int64_t *)cpy_r_r201;
    cpy_r_r203 = cpy_r_r202 << 1;
    cpy_r_r204 = (Py_ssize_t)cpy_r_r200 < (Py_ssize_t)cpy_r_r203;
    if (!cpy_r_r204) goto CPyL137;
    cpy_r_r205 = CPyList_GetItemUnsafe(cpy_r_type_structs, cpy_r_r200);
    if (likely(PyUnicode_Check(cpy_r_r205)))
        cpy_r_r206 = cpy_r_r205;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 955, CPyStatic_emitmodule___globals, "str", cpy_r_r205);
        goto CPyL131;
    }
    cpy_r_t = cpy_r_r206;
    cpy_r_r207 = CPyStatics[7001]; /* 'Py_CLEAR(' */
    cpy_r_r208 = CPyStatics[6872]; /* ');' */
    cpy_r_r209 = CPyStr_Build(3, cpy_r_r207, cpy_r_t, cpy_r_r208);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 956, CPyStatic_emitmodule___globals);
        goto CPyL131;
    }
    cpy_r_r210 = NULL;
    cpy_r_r211 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r209, cpy_r_r210);
    CPy_DECREF(cpy_r_r209);
    if (unlikely(cpy_r_r211 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 956, CPyStatic_emitmodule___globals);
        goto CPyL131;
    }
    cpy_r_r212 = cpy_r_r200 + 2;
    cpy_r_r200 = cpy_r_r212;
    goto CPyL96;
CPyL101: ;
    cpy_r_r213 = CPyStatics[7171]; /* 'return NULL;' */
    cpy_r_r214 = NULL;
    cpy_r_r215 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r213, cpy_r_r214);
    if (unlikely(cpy_r_r215 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 957, CPyStatic_emitmodule___globals);
        goto CPyL104;
    }
    cpy_r_r216 = CPyStatics[1406]; /* '}' */
    cpy_r_r217 = NULL;
    cpy_r_r218 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r216, cpy_r_r217);
    if (unlikely(cpy_r_r218 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 958, CPyStatic_emitmodule___globals);
        goto CPyL104;
    }
    return 1;
CPyL104: ;
    cpy_r_r219 = 2;
    return cpy_r_r219;
CPyL105: ;
    CPy_DecRef(cpy_r_module_prefix);
    goto CPyL104;
CPyL106: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL26;
CPyL107: ;
    CPy_DecRef(cpy_r_module_prefix);
    CPy_DecRef(cpy_r_r8);
    goto CPyL104;
CPyL108: ;
    CPy_DecRef(cpy_r_module_prefix);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_fn);
    goto CPyL104;
CPyL109: ;
    CPy_DECREF(cpy_r_fn);
    goto CPyL25;
CPyL110: ;
    CPy_DecRef(cpy_r_module_prefix);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_r27);
    goto CPyL104;
CPyL111: ;
    CPy_DecRef(cpy_r_module_prefix);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r29);
    goto CPyL104;
CPyL112: ;
    CPy_DecRef(cpy_r_module_prefix);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_name);
    goto CPyL104;
CPyL113: ;
    CPy_DecRef(cpy_r_module_prefix);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_flag);
    goto CPyL104;
CPyL114: ;
    CPy_DecRef(cpy_r_module_prefix);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_flag);
    CPy_DecRef(cpy_r_r39);
    goto CPyL104;
CPyL115: ;
    CPy_DecRef(cpy_r_module_prefix);
    CPy_DecRef(cpy_r_r61);
    goto CPyL104;
CPyL116: ;
    CPy_DecRef(cpy_r_module_prefix);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r65);
    goto CPyL104;
CPyL117: ;
    CPy_DecRef(cpy_r_module_prefix);
    CPy_DecRef(cpy_r_module_static);
    goto CPyL104;
CPyL118: ;
    CPy_DecRef(cpy_r_module_prefix);
    CPy_DecRef(cpy_r_module_static);
    CPy_DecRef(cpy_r_r94);
    goto CPyL104;
CPyL119: ;
    CPy_DecRef(cpy_r_module_prefix);
    CPy_DecRef(cpy_r_module_static);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r97);
    goto CPyL104;
CPyL120: ;
    CPy_DecRef(cpy_r_module_static);
    goto CPyL104;
CPyL121: ;
    CPy_DecRef(cpy_r_module_static);
    CPy_DecRef(cpy_r_r106);
    goto CPyL104;
CPyL122: ;
    CPy_DecRef(cpy_r_module_static);
    CPy_DecRef(cpy_r_module_globals);
    goto CPyL104;
CPyL123: ;
    CPy_DecRef(cpy_r_module_static);
    CPy_DecRef(cpy_r_r123);
    goto CPyL104;
CPyL124: ;
    CPy_DECREF(cpy_r_r131);
    goto CPyL76;
CPyL125: ;
    CPy_DecRef(cpy_r_module_static);
    CPy_DecRef(cpy_r_type_structs);
    CPy_DecRef(cpy_r_r131);
    goto CPyL104;
CPyL126: ;
    CPy_DecRef(cpy_r_module_static);
    CPy_DecRef(cpy_r_type_structs);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_cl);
    goto CPyL104;
CPyL127: ;
    CPy_DecRef(cpy_r_module_static);
    CPy_DecRef(cpy_r_type_structs);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_cl);
    CPy_DecRef(cpy_r_type_struct);
    goto CPyL104;
CPyL128: ;
    CPy_DECREF(cpy_r_type_struct);
    goto CPyL75;
CPyL129: ;
    CPy_DecRef(cpy_r_module_static);
    CPy_DecRef(cpy_r_type_structs);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_type_struct);
    goto CPyL104;
CPyL130: ;
    CPy_DecRef(cpy_r_module_static);
    CPy_DecRef(cpy_r_type_structs);
    goto CPyL104;
CPyL131: ;
    CPy_DecRef(cpy_r_type_structs);
    goto CPyL104;
CPyL132: ;
    CPy_DECREF(cpy_r_r179);
    goto CPyL95;
CPyL133: ;
    CPy_DecRef(cpy_r_type_structs);
    CPy_DecRef(cpy_r_r179);
    goto CPyL104;
CPyL134: ;
    CPy_DecRef(cpy_r_type_structs);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_typ);
    goto CPyL104;
CPyL135: ;
    CPy_DecRef(cpy_r_type_structs);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_static_name);
    goto CPyL104;
CPyL136: ;
    CPy_DecRef(cpy_r_type_structs);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_static_name);
    goto CPyL104;
CPyL137: ;
    CPy_DECREF(cpy_r_type_structs);
    goto CPyL101;
}

PyObject *CPyPy_emitmodule___GroupGenerator___generate_module_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"emitter", "module_name", "module", 0};
    static CPyArg_Parser parser = {"OOO:generate_module_def", kwlist, 0};
    PyObject *obj_emitter;
    PyObject *obj_module_name;
    PyObject *obj_module;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_emitter, &obj_module_name, &obj_module)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(Py_TYPE(obj_module) == CPyType_module_ir___ModuleIR))
        arg_module = obj_module;
    else {
        CPy_TypeError("mypyc.ir.module_ir.ModuleIR", obj_module); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___GroupGenerator___generate_module_def(arg_self, arg_emitter, arg_module_name, arg_module);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_module_def", 852, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___GroupGenerator___generate_top_level_call(PyObject *cpy_r_self, PyObject *cpy_r_module, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    int64_t cpy_r_r6;
    char cpy_r_r7;
    int64_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    int64_t cpy_r_r18;
    char cpy_r_r19;
    int64_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_fn;
    PyObject *cpy_r_r30;
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
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    cpy_r_r0 = ((mypyc___ir___module_ir___ModuleIRObject *)cpy_r_module)->_functions;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyTagged_Subtract(cpy_r_r3, 2);
    cpy_r_r5 = cpy_r_r4;
CPyL1: ;
    cpy_r_r6 = cpy_r_r5 & 1;
    cpy_r_r7 = cpy_r_r6 == 0;
    cpy_r_r8 = 0 & 1;
    cpy_r_r9 = cpy_r_r8 == 0;
    cpy_r_r10 = cpy_r_r7 & cpy_r_r9;
    if (!cpy_r_r10) goto CPyL3;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r5 >= (Py_ssize_t)0;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL4;
CPyL3: ;
    cpy_r_r13 = CPyTagged_IsLt_(cpy_r_r5, 0);
    cpy_r_r14 = cpy_r_r13 ^ 1;
    cpy_r_r12 = cpy_r_r14;
CPyL4: ;
    if (!cpy_r_r12) goto CPyL23;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = cpy_r_r5 & 1;
    cpy_r_r19 = cpy_r_r18 == 0;
    cpy_r_r20 = cpy_r_r17 & 1;
    cpy_r_r21 = cpy_r_r20 == 0;
    cpy_r_r22 = cpy_r_r19 & cpy_r_r21;
    if (!cpy_r_r22) goto CPyL7;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r17;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL8;
CPyL7: ;
    cpy_r_r25 = CPyTagged_IsLt_(cpy_r_r5, cpy_r_r17);
    cpy_r_r24 = cpy_r_r25;
CPyL8: ;
    if (!cpy_r_r24) goto CPyL23;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r26 = CPyTagged_StealAsObject(cpy_r_r5);
    if (likely(PyLong_Check(cpy_r_r26)))
        cpy_r_r27 = CPyTagged_FromObject(cpy_r_r26);
    else {
        CPy_TypeError("short_int", cpy_r_r26); cpy_r_r27 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_top_level_call", 963, CPyStatic_emitmodule___globals);
        goto CPyL24;
    }
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r27);
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_func_ir___FuncIR))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "generate_top_level_call", 963, CPyStatic_emitmodule___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r28);
        goto CPyL24;
    }
    cpy_r_fn = cpy_r_r29;
    cpy_r_r30 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_top_level_call", 964, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
CPyL12: ;
    cpy_r_r31 = CPyStatics[7424]; /* '__top_level__' */
    cpy_r_r32 = PyUnicode_Compare(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r33 = cpy_r_r32 == -1;
    if (!cpy_r_r33) goto CPyL15;
    cpy_r_r34 = PyErr_Occurred();
    cpy_r_r35 = cpy_r_r34 != NULL;
    if (!cpy_r_r35) goto CPyL15;
    cpy_r_r36 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_top_level_call", 964, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
CPyL15: ;
    cpy_r_r37 = cpy_r_r32 == 0;
    if (cpy_r_r37) {
        goto CPyL26;
    } else
        goto CPyL27;
CPyL16: ;
    cpy_r_r38 = CPyStatics[7529]; /* 'char result = ' */
    cpy_r_r39 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_decl;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_fn);
    cpy_r_r40 = CPyDef_emit___Emitter___native_function_name(cpy_r_emitter, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_top_level_call", 966, CPyStatic_emitmodule___globals);
        goto CPyL22;
    }
    cpy_r_r41 = CPyStatics[7530]; /* '();' */
    cpy_r_r42 = CPyStr_Build(3, cpy_r_r38, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_top_level_call", 966, CPyStatic_emitmodule___globals);
        goto CPyL22;
    }
    cpy_r_r43 = CPyStatics[7531]; /* 'if (result == 2)' */
    cpy_r_r44 = CPyStatics[7520]; /* '    goto fail;' */
    cpy_r_r45 = PyTuple_Pack(3, cpy_r_r42, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_top_level_call", 965, CPyStatic_emitmodule___globals);
        goto CPyL22;
    }
    cpy_r_r46 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_top_level_call", 965, CPyStatic_emitmodule___globals);
        goto CPyL22;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r47 = cpy_r_r5 + -2;
    CPyTagged_DECREF(cpy_r_r5);
    cpy_r_r5 = cpy_r_r47;
    goto CPyL1;
CPyL21: ;
    return 1;
CPyL22: ;
    cpy_r_r48 = 2;
    return cpy_r_r48;
CPyL23: ;
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r5);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r5);
    goto CPyL22;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_fn);
    goto CPyL22;
CPyL26: ;
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r5);
    goto CPyL16;
CPyL27: ;
    CPy_DECREF(cpy_r_fn);
    goto CPyL20;
}

PyObject *CPyPy_emitmodule___GroupGenerator___generate_top_level_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", "emitter", 0};
    static CPyArg_Parser parser = {"OO:generate_top_level_call", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(Py_TYPE(obj_module) == CPyType_module_ir___ModuleIR))
        arg_module = obj_module;
    else {
        CPy_TypeError("mypyc.ir.module_ir.ModuleIR", obj_module); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___GroupGenerator___generate_top_level_call(arg_self, arg_module, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "generate_top_level_call", 960, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__get__", -1, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r__toposort_visit;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_decl;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_child;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = ((mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "_toposort_visit", "_toposort_visit_toposort_declarations_GroupGenerator_obj", "__mypyc_env__", 986, CPyStatic_emitmodule___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->__toposort_visit;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "_toposort_visit", "toposort_declarations_GroupGenerator_env", "_toposort_visit", -1, CPyStatic_emitmodule___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r__toposort_visit = cpy_r_r1;
    cpy_r_r2 = ((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->_marked_declarations;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "_toposort_visit", "toposort_declarations_GroupGenerator_env", "marked_declarations", 987, CPyStatic_emitmodule___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r2, cpy_r_name);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "_toposort_visit", 987, CPyStatic_emitmodule___globals);
        goto CPyL18;
    }
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_emitmodule___MarkedDeclaration))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "_toposort_visit", 987, CPyStatic_emitmodule___globals, "mypyc.codegen.emitmodule.MarkedDeclaration", cpy_r_r3);
        goto CPyL18;
    }
    cpy_r_decl = cpy_r_r4;
    cpy_r_r5 = ((mypyc___codegen___emitmodule___MarkedDeclarationObject *)cpy_r_decl)->_mark;
    if (cpy_r_r5) {
        goto CPyL19;
    } else
        goto CPyL7;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r6 = ((mypyc___codegen___emitmodule___MarkedDeclarationObject *)cpy_r_decl)->_declaration;
    cpy_r_r7 = ((mypyc___codegen___emit___HeaderDeclarationObject *)cpy_r_r6)->_dependencies;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyObject_GetIter(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "_toposort_visit", 991, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
CPyL8: ;
    cpy_r_r9 = PyIter_Next(cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL21;
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "_toposort_visit", 991, CPyStatic_emitmodule___globals, "str", cpy_r_r9);
        goto CPyL22;
    }
    cpy_r_child = cpy_r_r10;
    PyObject *cpy_r_r11[1] = {cpy_r_child};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r__toposort_visit, cpy_r_r12, 1, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "_toposort_visit", 992, CPyStatic_emitmodule___globals);
        goto CPyL23;
    } else
        goto CPyL24;
CPyL11: ;
    CPy_DECREF(cpy_r_child);
    goto CPyL8;
CPyL12: ;
    cpy_r_r14 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "_toposort_visit", 991, CPyStatic_emitmodule___globals);
        goto CPyL25;
    }
    cpy_r_r15 = ((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->_result;
    if (unlikely(cpy_r_r15 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'result' of 'toposort_declarations_GroupGenerator_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r15);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "_toposort_visit", 994, CPyStatic_emitmodule___globals);
        goto CPyL26;
    }
CPyL14: ;
    cpy_r_r16 = ((mypyc___codegen___emitmodule___MarkedDeclarationObject *)cpy_r_decl)->_declaration;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = PyList_Append(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "_toposort_visit", 994, CPyStatic_emitmodule___globals);
        goto CPyL26;
    }
    ((mypyc___codegen___emitmodule___MarkedDeclarationObject *)cpy_r_decl)->_mark = 1;
    CPy_DECREF(cpy_r_decl);
    return 1;
CPyL16: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r__toposort_visit);
    goto CPyL16;
CPyL19: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r__toposort_visit);
    CPy_DECREF(cpy_r_decl);
    goto CPyL6;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r__toposort_visit);
    CPy_DecRef(cpy_r_decl);
    goto CPyL16;
CPyL21: ;
    CPy_DECREF(cpy_r__toposort_visit);
    CPy_DECREF(cpy_r_r8);
    goto CPyL12;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r__toposort_visit);
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_r8);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r__toposort_visit);
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_child);
    goto CPyL16;
CPyL24: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL11;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_decl);
    goto CPyL16;
CPyL26: ;
    CPy_DecRef(cpy_r_decl);
    goto CPyL16;
}

PyObject *CPyPy_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj_____call__(arg___mypyc_self__, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "_toposort_visit", 986, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___GroupGenerator___toposort_declarations(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    tuple_T4CIOO cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_k;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    tuple_T4CIOO cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_name;
    PyObject *cpy_r_marked_declaration;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    cpy_r_r0 = CPyDef_emitmodule___toposort_declarations_GroupGenerator_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 972, CPyStatic_emitmodule___globals);
        goto CPyL29;
    }
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 981, CPyStatic_emitmodule___globals);
        goto CPyL30;
    }
    if (((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->_result != NULL) {
        CPy_DECREF(((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->_result);
    }
    ((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->_result = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 981, CPyStatic_emitmodule___globals);
        goto CPyL30;
    }
    cpy_r_r3 = PyDict_New();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 982, CPyStatic_emitmodule___globals);
        goto CPyL30;
    }
    if (((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->_marked_declarations != NULL) {
        CPy_DECREF(((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->_marked_declarations);
    }
    ((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->_marked_declarations = cpy_r_r3;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 982, CPyStatic_emitmodule___globals);
        goto CPyL30;
    }
    cpy_r_r5 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_context;
    cpy_r_r6 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r5)->_declarations;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = 0;
    cpy_r_r8 = PyDict_Size(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = CPyDict_GetItemsIter(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 983, CPyStatic_emitmodule___globals);
        goto CPyL31;
    }
CPyL6: ;
    cpy_r_r11 = CPyDict_NextItem(cpy_r_r10, cpy_r_r7);
    cpy_r_r12 = cpy_r_r11.f1;
    cpy_r_r7 = cpy_r_r12;
    cpy_r_r13 = cpy_r_r11.f0;
    if (!cpy_r_r13) goto CPyL32;
    cpy_r_r14 = cpy_r_r11.f2;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = cpy_r_r11.f3;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r11.f2);
    CPy_DECREF(cpy_r_r11.f3);
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r16 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 983, CPyStatic_emitmodule___globals, "str", cpy_r_r14);
        goto CPyL33;
    }
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_emit___HeaderDeclaration))
        cpy_r_r17 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 983, CPyStatic_emitmodule___globals, "mypyc.codegen.emit.HeaderDeclaration", cpy_r_r15);
        goto CPyL34;
    }
    cpy_r_k = cpy_r_r16;
    cpy_r_v = cpy_r_r17;
    cpy_r_r18 = CPyDef_emitmodule___MarkedDeclaration(cpy_r_v, 0);
    CPy_DECREF(cpy_r_v);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 984, CPyStatic_emitmodule___globals);
        goto CPyL35;
    }
    cpy_r_r19 = ((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->_marked_declarations;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "toposort_declarations", "toposort_declarations_GroupGenerator_env", "marked_declarations", 984, CPyStatic_emitmodule___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r19);
CPyL11: ;
    cpy_r_r20 = CPyDict_SetItem(cpy_r_r19, cpy_r_k, cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_k);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 984, CPyStatic_emitmodule___globals);
        goto CPyL37;
    }
    cpy_r_r22 = CPyDict_CheckSize(cpy_r_r6, cpy_r_r9);
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 983, CPyStatic_emitmodule___globals);
        goto CPyL37;
    } else
        goto CPyL6;
CPyL13: ;
    cpy_r_r23 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 983, CPyStatic_emitmodule___globals);
        goto CPyL30;
    }
    cpy_r_r24 = CPyDef_emitmodule____toposort_visit_toposort_declarations_GroupGenerator_obj();
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 986, CPyStatic_emitmodule___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject *)cpy_r_r24)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject *)cpy_r_r24)->___mypyc_env__);
    }
    ((mypyc___codegen___emitmodule____toposort_visit_toposort_declarations_GroupGenerator_objObject *)cpy_r_r24)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 986, CPyStatic_emitmodule___globals);
        goto CPyL38;
    }
    if (((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->__toposort_visit != NULL) {
        CPy_DECREF(((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->__toposort_visit);
    }
    ((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->__toposort_visit = cpy_r_r24;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 986, CPyStatic_emitmodule___globals);
        goto CPyL30;
    }
    cpy_r_r27 = ((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->_marked_declarations;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "toposort_declarations", "toposort_declarations_GroupGenerator_env", "marked_declarations", 997, CPyStatic_emitmodule___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r27);
CPyL18: ;
    cpy_r_r28 = 0;
    cpy_r_r29 = PyDict_Size(cpy_r_r27);
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = CPyDict_GetItemsIter(cpy_r_r27);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 997, CPyStatic_emitmodule___globals);
        goto CPyL39;
    }
CPyL19: ;
    cpy_r_r32 = CPyDict_NextItem(cpy_r_r31, cpy_r_r28);
    cpy_r_r33 = cpy_r_r32.f1;
    cpy_r_r28 = cpy_r_r33;
    cpy_r_r34 = cpy_r_r32.f0;
    if (!cpy_r_r34) goto CPyL40;
    cpy_r_r35 = cpy_r_r32.f2;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = cpy_r_r32.f3;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r32.f2);
    CPy_DECREF(cpy_r_r32.f3);
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r37 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 997, CPyStatic_emitmodule___globals, "str", cpy_r_r35);
        goto CPyL41;
    }
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_emitmodule___MarkedDeclaration))
        cpy_r_r38 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 997, CPyStatic_emitmodule___globals, "mypyc.codegen.emitmodule.MarkedDeclaration", cpy_r_r36);
        goto CPyL42;
    }
    cpy_r_name = cpy_r_r37;
    cpy_r_marked_declaration = cpy_r_r38;
    CPy_DECREF(cpy_r_marked_declaration);
    cpy_r_r39 = ((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->__toposort_visit;
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "toposort_declarations", "toposort_declarations_GroupGenerator_env", "_toposort_visit", 998, CPyStatic_emitmodule___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r39);
CPyL23: ;
    PyObject *cpy_r_r40[1] = {cpy_r_name};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = _PyObject_Vectorcall(cpy_r_r39, cpy_r_r41, 1, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 998, CPyStatic_emitmodule___globals);
        goto CPyL43;
    } else
        goto CPyL44;
CPyL24: ;
    CPy_DECREF(cpy_r_name);
    cpy_r_r43 = CPyDict_CheckSize(cpy_r_r27, cpy_r_r30);
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 997, CPyStatic_emitmodule___globals);
        goto CPyL45;
    } else
        goto CPyL19;
CPyL26: ;
    cpy_r_r44 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 997, CPyStatic_emitmodule___globals);
        goto CPyL30;
    }
    cpy_r_r45 = ((mypyc___codegen___emitmodule___toposort_declarations_GroupGenerator_envObject *)cpy_r_r0)->_result;
    if (unlikely(cpy_r_r45 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'result' of 'toposort_declarations_GroupGenerator_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r45);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 1000, CPyStatic_emitmodule___globals);
        goto CPyL29;
    }
CPyL28: ;
    return cpy_r_r45;
CPyL29: ;
    cpy_r_r46 = NULL;
    return cpy_r_r46;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL29;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    goto CPyL29;
CPyL32: ;
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11.f2);
    CPy_DECREF(cpy_r_r11.f3);
    goto CPyL13;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r15);
    goto CPyL29;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r16);
    goto CPyL29;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_k);
    goto CPyL29;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_k);
    CPy_DecRef(cpy_r_r18);
    goto CPyL29;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    goto CPyL29;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    goto CPyL29;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r27);
    goto CPyL29;
CPyL40: ;
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r32.f2);
    CPy_DECREF(cpy_r_r32.f3);
    goto CPyL26;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r36);
    goto CPyL29;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r37);
    goto CPyL29;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_name);
    goto CPyL29;
CPyL44: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL24;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r31);
    goto CPyL29;
}

PyObject *CPyPy_emitmodule___GroupGenerator___toposort_declarations(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":toposort_declarations", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___GroupGenerator___toposort_declarations(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort_declarations", 972, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___GroupGenerator___declare_global(PyObject *cpy_r_self, PyObject *cpy_r_type_spaced, PyObject *cpy_r_name, PyObject *cpy_r_initializer) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_b;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_defn;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    if (cpy_r_initializer != NULL) goto CPyL27;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_initializer = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatics[207]; /* '[' */
    cpy_r_r2 = PySequence_Contains(cpy_r_type_spaced, cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1005, CPyStatic_emitmodule___globals);
        goto CPyL28;
    }
    cpy_r_r4 = cpy_r_r2;
    cpy_r_r5 = cpy_r_r4 ^ 1;
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r6 = CPyStr_Build(2, cpy_r_type_spaced, cpy_r_name);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1006, CPyStatic_emitmodule___globals);
        goto CPyL28;
    }
    cpy_r_base = cpy_r_r6;
    goto CPyL12;
CPyL6: ;
    cpy_r_r7 = CPyStatics[207]; /* '[' */
    cpy_r_r8 = CPyStr_Split(cpy_r_type_spaced, cpy_r_r7, 2);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1008, CPyStatic_emitmodule___globals);
        goto CPyL28;
    }
    cpy_r_r9 = CPySequence_CheckUnpackCount(cpy_r_r8, 2);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1008, CPyStatic_emitmodule___globals);
        goto CPyL29;
    }
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r8, 0);
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r8, 2);
    CPy_DECREF(cpy_r_r8);
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r13 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1008, CPyStatic_emitmodule___globals, "str", cpy_r_r11);
        goto CPyL30;
    }
    cpy_r_a = cpy_r_r13;
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r14 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1008, CPyStatic_emitmodule___globals, "str", cpy_r_r12);
        goto CPyL31;
    }
    cpy_r_b = cpy_r_r14;
    cpy_r_r15 = CPyStatics[207]; /* '[' */
    cpy_r_r16 = CPyStr_Build(4, cpy_r_a, cpy_r_name, cpy_r_r15, cpy_r_b);
    CPy_DECREF(cpy_r_a);
    CPy_DECREF(cpy_r_b);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1009, CPyStatic_emitmodule___globals);
        goto CPyL28;
    }
    cpy_r_base = cpy_r_r16;
CPyL12: ;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_initializer != cpy_r_r17;
    if (!cpy_r_r18) goto CPyL32;
    CPy_INCREF(cpy_r_initializer);
    if (likely(cpy_r_initializer != Py_None))
        cpy_r_r19 = cpy_r_initializer;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1003, CPyStatic_emitmodule___globals, "str", cpy_r_initializer);
        goto CPyL33;
    }
    cpy_r_r20 = CPyStr_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (cpy_r_r20) {
        goto CPyL16;
    } else
        goto CPyL32;
CPyL15: ;
    cpy_r_r21 = Py_None;
    CPy_INCREF(cpy_r_r21);
    cpy_r_defn = cpy_r_r21;
    goto CPyL20;
CPyL16: ;
    cpy_r_r22 = CPyStatics[1538]; /* ' = ' */
    if (likely(cpy_r_initializer != Py_None))
        cpy_r_r23 = cpy_r_initializer;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1014, CPyStatic_emitmodule___globals, "str", cpy_r_initializer);
        goto CPyL34;
    }
    cpy_r_r24 = CPyStatics[6886]; /* ';' */
    cpy_r_r25 = CPyStr_Build(4, cpy_r_base, cpy_r_r22, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1014, CPyStatic_emitmodule___globals);
        goto CPyL34;
    }
    cpy_r_r26 = PyList_New(1);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1014, CPyStatic_emitmodule___globals);
        goto CPyL35;
    }
    cpy_r_r27 = (CPyPtr)&((PyListObject *)cpy_r_r26)->ob_item;
    cpy_r_r28 = *(CPyPtr *)cpy_r_r27;
    *(PyObject * *)cpy_r_r28 = cpy_r_r25;
    cpy_r_defn = cpy_r_r26;
CPyL20: ;
    cpy_r_r29 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_context;
    cpy_r_r30 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r29)->_declarations;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = PyDict_Contains(cpy_r_r30, cpy_r_name);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1015, CPyStatic_emitmodule___globals);
        goto CPyL36;
    }
    cpy_r_r33 = cpy_r_r31;
    cpy_r_r34 = cpy_r_r33 ^ 1;
    if (!cpy_r_r34) goto CPyL37;
    cpy_r_r35 = CPyStatics[6886]; /* ';' */
    cpy_r_r36 = CPyStr_Build(2, cpy_r_base, cpy_r_r35);
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1016, CPyStatic_emitmodule___globals);
        goto CPyL38;
    }
    cpy_r_r37 = NULL;
    cpy_r_r38 = 2;
    cpy_r_r39 = 2;
    cpy_r_r40 = CPyDef_emit___HeaderDeclaration(cpy_r_r36, cpy_r_defn, cpy_r_r37, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_defn);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1016, CPyStatic_emitmodule___globals);
        goto CPyL26;
    }
    cpy_r_r41 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_context;
    cpy_r_r42 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r41)->_declarations;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = CPyDict_SetItem(cpy_r_r42, cpy_r_name, cpy_r_r40);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1016, CPyStatic_emitmodule___globals);
        goto CPyL26;
    }
CPyL25: ;
    return 1;
CPyL26: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
CPyL27: ;
    CPy_INCREF(cpy_r_initializer);
    goto CPyL2;
CPyL28: ;
    CPy_DecRef(cpy_r_initializer);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_initializer);
    CPy_DecRef(cpy_r_r8);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_initializer);
    CPy_DecRef(cpy_r_r12);
    goto CPyL26;
CPyL31: ;
    CPy_DecRef(cpy_r_initializer);
    CPy_DecRef(cpy_r_a);
    goto CPyL26;
CPyL32: ;
    CPy_DECREF(cpy_r_initializer);
    goto CPyL15;
CPyL33: ;
    CPy_DecRef(cpy_r_initializer);
    CPy_DecRef(cpy_r_base);
    goto CPyL26;
CPyL34: ;
    CPy_DecRef(cpy_r_base);
    goto CPyL26;
CPyL35: ;
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r25);
    goto CPyL26;
CPyL36: ;
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_defn);
    goto CPyL26;
CPyL37: ;
    CPy_DECREF(cpy_r_base);
    CPy_DECREF(cpy_r_defn);
    goto CPyL25;
CPyL38: ;
    CPy_DecRef(cpy_r_defn);
    goto CPyL26;
}

PyObject *CPyPy_emitmodule___GroupGenerator___declare_global(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"type_spaced", "name", "initializer", 0};
    static CPyArg_Parser parser = {"OO|$O:declare_global", kwlist, 0};
    PyObject *obj_type_spaced;
    PyObject *obj_name;
    PyObject *obj_initializer = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_type_spaced, &obj_name, &obj_initializer)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_type_spaced;
    if (likely(PyUnicode_Check(obj_type_spaced)))
        arg_type_spaced = obj_type_spaced;
    else {
        CPy_TypeError("str", obj_type_spaced); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_initializer;
    if (obj_initializer == NULL) {
        arg_initializer = NULL;
        goto __LL9629;
    }
    if (PyUnicode_Check(obj_initializer))
        arg_initializer = obj_initializer;
    else {
        arg_initializer = NULL;
    }
    if (arg_initializer != NULL) goto __LL9629;
    if (obj_initializer == Py_None)
        arg_initializer = obj_initializer;
    else {
        arg_initializer = NULL;
    }
    if (arg_initializer != NULL) goto __LL9629;
    CPy_TypeError("str or None", obj_initializer); 
    goto fail;
__LL9629: ;
    char retval = CPyDef_emitmodule___GroupGenerator___declare_global(arg_self, arg_type_spaced, arg_name, arg_initializer);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_global", 1002, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___GroupGenerator___declare_internal_globals(PyObject *cpy_r_self, PyObject *cpy_r_module_name, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_static_name;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = CPyStatics[1109]; /* 'globals' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_emit___Emitter___static_name(cpy_r_emitter, cpy_r_r0, cpy_r_module_name, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_internal_globals", 1019, CPyStatic_emitmodule___globals);
        goto CPyL3;
    }
    cpy_r_static_name = cpy_r_r2;
    cpy_r_r3 = CPyStatics[6916]; /* 'PyObject *' */
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPyDef_emitmodule___GroupGenerator___declare_global(cpy_r_self, cpy_r_r3, cpy_r_static_name, cpy_r_r4);
    CPy_DECREF(cpy_r_static_name);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_internal_globals", 1020, CPyStatic_emitmodule___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_emitmodule___GroupGenerator___declare_internal_globals(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module_name", "emitter", 0};
    static CPyArg_Parser parser = {"OO:declare_internal_globals", kwlist, 0};
    PyObject *obj_module_name;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module_name, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___GroupGenerator___declare_internal_globals(arg_self, arg_module_name, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_internal_globals", 1018, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___GroupGenerator___module_internal_static_name(PyObject *cpy_r_self, PyObject *cpy_r_module_name, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[7532]; /* '_internal' */
    cpy_r_r1 = PyUnicode_Concat(cpy_r_module_name, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "module_internal_static_name", 1023, CPyStatic_emitmodule___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyStatics[7397]; /* 'CPyModule_' */
    cpy_r_r3 = Py_None;
    cpy_r_r4 = CPyDef_emit___Emitter___static_name(cpy_r_emitter, cpy_r_r1, cpy_r_r3, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "module_internal_static_name", 1023, CPyStatic_emitmodule___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_emitmodule___GroupGenerator___module_internal_static_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module_name", "emitter", 0};
    static CPyArg_Parser parser = {"OO:module_internal_static_name", kwlist, 0};
    PyObject *obj_module_name;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module_name, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___GroupGenerator___module_internal_static_name(arg_self, arg_module_name, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "module_internal_static_name", 1022, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___GroupGenerator___declare_module(PyObject *cpy_r_self, PyObject *cpy_r_module_name, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_internal_static_name;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_static_name;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    tuple_T2OO cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_modules;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_module_name);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_module", 1030, CPyStatic_emitmodule___globals);
        goto CPyL8;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL4;
    cpy_r_r4 = CPyDef_emitmodule___GroupGenerator___module_internal_static_name(cpy_r_self, cpy_r_module_name, cpy_r_emitter);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_module", 1031, CPyStatic_emitmodule___globals);
        goto CPyL8;
    }
    cpy_r_internal_static_name = cpy_r_r4;
    cpy_r_r5 = CPyStatics[7533]; /* 'CPyModule *' */
    cpy_r_r6 = CPyStatics[6879]; /* 'NULL' */
    cpy_r_r7 = CPyDef_emitmodule___GroupGenerator___declare_global(cpy_r_self, cpy_r_r5, cpy_r_internal_static_name, cpy_r_r6);
    CPy_DECREF(cpy_r_internal_static_name);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_module", 1032, CPyStatic_emitmodule___globals);
        goto CPyL8;
    }
CPyL4: ;
    cpy_r_r8 = CPyStatics[7397]; /* 'CPyModule_' */
    cpy_r_r9 = Py_None;
    cpy_r_r10 = CPyDef_emit___Emitter___static_name(cpy_r_emitter, cpy_r_module_name, cpy_r_r9, cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_module", 1033, CPyStatic_emitmodule___globals);
        goto CPyL8;
    }
    cpy_r_static_name = cpy_r_r10;
    cpy_r_r11 = CPyStatics[7533]; /* 'CPyModule *' */
    cpy_r_r12 = NULL;
    cpy_r_r13 = CPyDef_emitmodule___GroupGenerator___declare_global(cpy_r_self, cpy_r_r11, cpy_r_static_name, cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_module", 1034, CPyStatic_emitmodule___globals);
        goto CPyL9;
    }
    cpy_r_r14 = ((mypyc___codegen___emitmodule___GroupGeneratorObject *)cpy_r_self)->_simple_inits;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyStatics[7534]; /* 'Py_None' */
    cpy_r_r16.f0 = cpy_r_static_name;
    cpy_r_r16.f1 = cpy_r_r15;
    CPy_INCREF(cpy_r_r16.f0);
    CPy_INCREF(cpy_r_r16.f1);
    CPy_DECREF(cpy_r_static_name);
    cpy_r_r17 = PyTuple_New(2);
    if (unlikely(cpy_r_r17 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9630 = cpy_r_r16.f0;
    PyTuple_SET_ITEM(cpy_r_r17, 0, __tmp9630);
    PyObject *__tmp9631 = cpy_r_r16.f1;
    PyTuple_SET_ITEM(cpy_r_r17, 1, __tmp9631);
    cpy_r_r18 = PyList_Append(cpy_r_r14, cpy_r_r17);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_module", 1035, CPyStatic_emitmodule___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL9: ;
    CPy_DecRef(cpy_r_static_name);
    goto CPyL8;
}

PyObject *CPyPy_emitmodule___GroupGenerator___declare_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module_name", "emitter", 0};
    static CPyArg_Parser parser = {"OO:declare_module", kwlist, 0};
    PyObject *obj_module_name;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module_name, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___GroupGenerator___declare_module(arg_self, arg_module_name, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_module", 1025, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___GroupGenerator___declare_imports(PyObject *cpy_r_self, PyObject *cpy_r_imps, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_imp;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = PyObject_GetIter(cpy_r_imps);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_imports", 1038, CPyStatic_emitmodule___globals);
        goto CPyL6;
    }
CPyL1: ;
    cpy_r_r1 = PyIter_Next(cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL7;
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "declare_imports", 1038, CPyStatic_emitmodule___globals, "str", cpy_r_r1);
        goto CPyL8;
    }
    cpy_r_imp = cpy_r_r2;
    cpy_r_r3 = CPyDef_emitmodule___GroupGenerator___declare_module(cpy_r_self, cpy_r_imp, cpy_r_emitter);
    CPy_DECREF(cpy_r_imp);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_imports", 1039, CPyStatic_emitmodule___globals);
        goto CPyL8;
    } else
        goto CPyL1;
CPyL4: ;
    cpy_r_r4 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_imports", 1038, CPyStatic_emitmodule___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
CPyL7: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
}

PyObject *CPyPy_emitmodule___GroupGenerator___declare_imports(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"imps", "emitter", 0};
    static CPyArg_Parser parser = {"OO:declare_imports", kwlist, 0};
    PyObject *obj_imps;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_imps, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_imps = obj_imps;
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___GroupGenerator___declare_imports(arg_self, arg_imps, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_imports", 1037, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___GroupGenerator___declare_finals(PyObject *cpy_r_self, PyObject *cpy_r_module, PyObject *cpy_r_final_names, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_static_name;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    cpy_r_r0 = PyObject_GetIter(cpy_r_final_names);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_finals", 1044, CPyStatic_emitmodule___globals);
        goto CPyL12;
    }
CPyL1: ;
    cpy_r_r1 = PyIter_Next(cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL13;
    PyObject *__tmp9632;
    if (unlikely(!(PyTuple_Check(cpy_r_r1) && PyTuple_GET_SIZE(cpy_r_r1) == 2))) {
        __tmp9632 = NULL;
        goto __LL9633;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r1, 0))))
        __tmp9632 = PyTuple_GET_ITEM(cpy_r_r1, 0);
    else {
        __tmp9632 = NULL;
    }
    if (__tmp9632 == NULL) goto __LL9633;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r1, 1), CPyType_rtypes___RType)))
        __tmp9632 = PyTuple_GET_ITEM(cpy_r_r1, 1);
    else {
        __tmp9632 = NULL;
    }
    if (__tmp9632 == NULL) goto __LL9633;
    __tmp9632 = cpy_r_r1;
__LL9633: ;
    if (unlikely(__tmp9632 == NULL)) {
        CPy_TypeError("tuple[str, mypyc.ir.rtypes.RType]", cpy_r_r1); cpy_r_r2 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9634 = PyTuple_GET_ITEM(cpy_r_r1, 0);
        CPy_INCREF(__tmp9634);
        PyObject *__tmp9635;
        if (likely(PyUnicode_Check(__tmp9634)))
            __tmp9635 = __tmp9634;
        else {
            CPy_TypeError("str", __tmp9634); 
            __tmp9635 = NULL;
        }
        cpy_r_r2.f0 = __tmp9635;
        PyObject *__tmp9636 = PyTuple_GET_ITEM(cpy_r_r1, 1);
        CPy_INCREF(__tmp9636);
        PyObject *__tmp9637;
        if (likely(PyObject_TypeCheck(__tmp9636, CPyType_rtypes___RType)))
            __tmp9637 = __tmp9636;
        else {
            CPy_TypeError("mypyc.ir.rtypes.RType", __tmp9636); 
            __tmp9637 = NULL;
        }
        cpy_r_r2.f1 = __tmp9637;
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_finals", 1044, CPyStatic_emitmodule___globals);
        goto CPyL14;
    }
    cpy_r_r3 = cpy_r_r2.f0;
    CPy_INCREF(cpy_r_r3);
    cpy_r_name = cpy_r_r3;
    cpy_r_r4 = cpy_r_r2.f1;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2.f0);
    CPy_DECREF(cpy_r_r2.f1);
    cpy_r_typ = cpy_r_r4;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_emit___Emitter___static_name(cpy_r_emitter, cpy_r_name, cpy_r_module, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_finals", 1045, CPyStatic_emitmodule___globals);
        goto CPyL15;
    }
    cpy_r_static_name = cpy_r_r6;
    cpy_r_r7 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_emitter, cpy_r_typ);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_finals", 1047, CPyStatic_emitmodule___globals);
        goto CPyL16;
    }
    cpy_r_r8 = CPyStatics[6886]; /* ';' */
    cpy_r_r9 = CPyStr_Build(3, cpy_r_r7, cpy_r_static_name, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_finals", 1047, CPyStatic_emitmodule___globals);
        goto CPyL16;
    }
    cpy_r_r10 = CPyDef_emitmodule___GroupGenerator___final_definition(cpy_r_self, cpy_r_module, cpy_r_name, cpy_r_typ, cpy_r_emitter);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_finals", 1048, CPyStatic_emitmodule___globals);
        goto CPyL17;
    }
    cpy_r_r11 = PyList_New(1);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_finals", 1048, CPyStatic_emitmodule___globals);
        goto CPyL18;
    }
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    *(PyObject * *)cpy_r_r13 = cpy_r_r10;
    cpy_r_r14 = NULL;
    cpy_r_r15 = 2;
    cpy_r_r16 = CPyDef_emit___HeaderDeclaration(cpy_r_r9, cpy_r_r11, cpy_r_r14, cpy_r_r15, 1);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_finals", 1046, CPyStatic_emitmodule___globals);
        goto CPyL19;
    }
    cpy_r_r17 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_context;
    cpy_r_r18 = ((mypyc___codegen___emit___EmitterContextObject *)cpy_r_r17)->_declarations;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDict_SetItem(cpy_r_r18, cpy_r_static_name, cpy_r_r16);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_static_name);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_finals", 1046, CPyStatic_emitmodule___globals);
        goto CPyL14;
    } else
        goto CPyL1;
CPyL10: ;
    cpy_r_r21 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_finals", 1044, CPyStatic_emitmodule___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r22 = 2;
    return cpy_r_r22;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_typ);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_static_name);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_static_name);
    CPy_DecRef(cpy_r_r9);
    goto CPyL12;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_static_name);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL12;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_static_name);
    goto CPyL12;
}

PyObject *CPyPy_emitmodule___GroupGenerator___declare_finals(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", "final_names", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:declare_finals", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_final_names;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module, &obj_final_names, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *arg_final_names = obj_final_names;
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___GroupGenerator___declare_finals(arg_self, arg_module, arg_final_names, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_finals", 1041, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___GroupGenerator___final_definition(PyObject *cpy_r_self, PyObject *cpy_r_module, PyObject *cpy_r_name, PyObject *cpy_r_typ, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_static_name;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_undefined;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = NULL;
    cpy_r_r1 = CPyDef_emit___Emitter___static_name(cpy_r_emitter, cpy_r_name, cpy_r_module, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "final_definition", 1053, CPyStatic_emitmodule___globals);
        goto CPyL5;
    }
    cpy_r_static_name = cpy_r_r1;
    cpy_r_r2 = CPyDef_emit___Emitter___c_initializer_undefined_value(cpy_r_emitter, cpy_r_typ);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "final_definition", 1055, CPyStatic_emitmodule___globals);
        goto CPyL6;
    }
    cpy_r_undefined = cpy_r_r2;
    cpy_r_r3 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_emitter, cpy_r_typ);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "final_definition", 1056, CPyStatic_emitmodule___globals);
        goto CPyL7;
    }
    cpy_r_r4 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r5 = CPyStatics[6886]; /* ';' */
    cpy_r_r6 = CPyStr_Build(5, cpy_r_r3, cpy_r_static_name, cpy_r_r4, cpy_r_undefined, cpy_r_r5);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_static_name);
    CPy_DECREF(cpy_r_undefined);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "final_definition", 1056, CPyStatic_emitmodule___globals);
        goto CPyL5;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DecRef(cpy_r_static_name);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_static_name);
    CPy_DecRef(cpy_r_undefined);
    goto CPyL5;
}

PyObject *CPyPy_emitmodule___GroupGenerator___final_definition(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", "name", "typ", "emitter", 0};
    static CPyArg_Parser parser = {"OOOO:final_definition", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_name;
    PyObject *obj_typ;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module, &obj_name, &obj_typ, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___GroupGenerator___final_definition(arg_self, arg_module, arg_name, arg_typ, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "final_definition", 1052, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___GroupGenerator___declare_static_pyobject(PyObject *cpy_r_self, PyObject *cpy_r_identifier, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_symbol;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = Py_None;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_emit___Emitter___static_name(cpy_r_emitter, cpy_r_identifier, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_static_pyobject", 1059, CPyStatic_emitmodule___globals);
        goto CPyL3;
    }
    cpy_r_symbol = cpy_r_r2;
    cpy_r_r3 = CPyStatics[6916]; /* 'PyObject *' */
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPyDef_emitmodule___GroupGenerator___declare_global(cpy_r_self, cpy_r_r3, cpy_r_symbol, cpy_r_r4);
    CPy_DECREF(cpy_r_symbol);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_static_pyobject", 1060, CPyStatic_emitmodule___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_emitmodule___GroupGenerator___declare_static_pyobject(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"identifier", "emitter", 0};
    static CPyArg_Parser parser = {"OO:declare_static_pyobject", kwlist, 0};
    PyObject *obj_identifier;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_identifier, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitmodule___GroupGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitmodule.GroupGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_identifier;
    if (likely(PyUnicode_Check(obj_identifier)))
        arg_identifier = obj_identifier;
    else {
        CPy_TypeError("str", obj_identifier); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___GroupGenerator___declare_static_pyobject(arg_self, arg_identifier, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "declare_static_pyobject", 1058, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___sort_classes(PyObject *cpy_r_classes) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_ir;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_mod_name;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    tuple_T2OO cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r__;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_ir_2;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_irs;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_deps;
    CPyTagged cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_ir_3;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_sorted_irs;
    CPyPtr cpy_r_r58;
    int64_t cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyTagged cpy_r_r61;
    CPyPtr cpy_r_r62;
    int64_t cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_ir_4;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    tuple_T2OO cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    CPyTagged cpy_r_r73;
    PyObject *cpy_r_r74;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1064, CPyStatic_emitmodule___globals);
        goto CPyL42;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_classes)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_classes, cpy_r_r1);
    PyObject *__tmp9638;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp9638 = NULL;
        goto __LL9639;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp9638 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp9638 = NULL;
    }
    if (__tmp9638 == NULL) goto __LL9639;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r6, 1)) == CPyType_class_ir___ClassIR))
        __tmp9638 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp9638 = NULL;
    }
    if (__tmp9638 == NULL) goto __LL9639;
    __tmp9638 = cpy_r_r6;
__LL9639: ;
    if (unlikely(__tmp9638 == NULL)) {
        CPy_TypeError("tuple[str, mypyc.ir.class_ir.ClassIR]", cpy_r_r6); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9640 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp9640);
        PyObject *__tmp9641;
        if (likely(PyUnicode_Check(__tmp9640)))
            __tmp9641 = __tmp9640;
        else {
            CPy_TypeError("str", __tmp9640); 
            __tmp9641 = NULL;
        }
        cpy_r_r7.f0 = __tmp9641;
        PyObject *__tmp9642 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp9642);
        PyObject *__tmp9643;
        if (likely(Py_TYPE(__tmp9642) == CPyType_class_ir___ClassIR))
            __tmp9643 = __tmp9642;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp9642); 
            __tmp9643 = NULL;
        }
        cpy_r_r7.f1 = __tmp9643;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1064, CPyStatic_emitmodule___globals);
        goto CPyL43;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_name = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r_ir = cpy_r_r9;
    cpy_r_r10 = CPyDict_SetItem(cpy_r_r0, cpy_r_ir, cpy_r_name);
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_name);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1064, CPyStatic_emitmodule___globals);
        goto CPyL43;
    }
    cpy_r_r12 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r12;
    goto CPyL2;
CPyL6: ;
    cpy_r_mod_name = cpy_r_r0;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_classes)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = PyList_New(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1065, CPyStatic_emitmodule___globals);
        goto CPyL44;
    }
    cpy_r_r16 = 0;
CPyL8: ;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_classes)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = (Py_ssize_t)cpy_r_r16 < (Py_ssize_t)cpy_r_r19;
    if (!cpy_r_r20) goto CPyL12;
    cpy_r_r21 = CPyList_GetItemUnsafe(cpy_r_classes, cpy_r_r16);
    PyObject *__tmp9644;
    if (unlikely(!(PyTuple_Check(cpy_r_r21) && PyTuple_GET_SIZE(cpy_r_r21) == 2))) {
        __tmp9644 = NULL;
        goto __LL9645;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r21, 0))))
        __tmp9644 = PyTuple_GET_ITEM(cpy_r_r21, 0);
    else {
        __tmp9644 = NULL;
    }
    if (__tmp9644 == NULL) goto __LL9645;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r21, 1)) == CPyType_class_ir___ClassIR))
        __tmp9644 = PyTuple_GET_ITEM(cpy_r_r21, 1);
    else {
        __tmp9644 = NULL;
    }
    if (__tmp9644 == NULL) goto __LL9645;
    __tmp9644 = cpy_r_r21;
__LL9645: ;
    if (unlikely(__tmp9644 == NULL)) {
        CPy_TypeError("tuple[str, mypyc.ir.class_ir.ClassIR]", cpy_r_r21); cpy_r_r22 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9646 = PyTuple_GET_ITEM(cpy_r_r21, 0);
        CPy_INCREF(__tmp9646);
        PyObject *__tmp9647;
        if (likely(PyUnicode_Check(__tmp9646)))
            __tmp9647 = __tmp9646;
        else {
            CPy_TypeError("str", __tmp9646); 
            __tmp9647 = NULL;
        }
        cpy_r_r22.f0 = __tmp9647;
        PyObject *__tmp9648 = PyTuple_GET_ITEM(cpy_r_r21, 1);
        CPy_INCREF(__tmp9648);
        PyObject *__tmp9649;
        if (likely(Py_TYPE(__tmp9648) == CPyType_class_ir___ClassIR))
            __tmp9649 = __tmp9648;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp9648); 
            __tmp9649 = NULL;
        }
        cpy_r_r22.f1 = __tmp9649;
    }
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1065, CPyStatic_emitmodule___globals);
        goto CPyL45;
    }
    cpy_r_r23 = cpy_r_r22.f0;
    CPy_INCREF(cpy_r_r23);
    cpy_r__ = cpy_r_r23;
    CPy_DECREF(cpy_r__);
    cpy_r_r24 = cpy_r_r22.f1;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r22.f0);
    CPy_DECREF(cpy_r_r22.f1);
    cpy_r_ir_2 = cpy_r_r24;
    cpy_r_r25 = CPyList_SetItemUnsafe(cpy_r_r15, cpy_r_r16, cpy_r_ir_2);
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1065, CPyStatic_emitmodule___globals);
        goto CPyL45;
    }
    cpy_r_r26 = cpy_r_r16 + 2;
    cpy_r_r16 = cpy_r_r26;
    goto CPyL8;
CPyL12: ;
    cpy_r_irs = cpy_r_r15;
    cpy_r_r27 = PyDict_New();
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1066, CPyStatic_emitmodule___globals);
        goto CPyL46;
    }
    cpy_r_deps = cpy_r_r27;
    cpy_r_r28 = 0;
CPyL14: ;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_irs)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r28 < (Py_ssize_t)cpy_r_r31;
    if (!cpy_r_r32) goto CPyL47;
    cpy_r_r33 = CPyList_GetItemUnsafe(cpy_r_irs, cpy_r_r28);
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_class_ir___ClassIR))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1067, CPyStatic_emitmodule___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r33);
        goto CPyL48;
    }
    cpy_r_ir_3 = cpy_r_r34;
    cpy_r_r35 = PyDict_Contains(cpy_r_deps, cpy_r_ir_3);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1068, CPyStatic_emitmodule___globals);
        goto CPyL49;
    }
    cpy_r_r37 = cpy_r_r35;
    cpy_r_r38 = cpy_r_r37 ^ 1;
    if (!cpy_r_r38) goto CPyL20;
    cpy_r_r39 = PySet_New(NULL);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1069, CPyStatic_emitmodule___globals);
        goto CPyL49;
    }
    cpy_r_r40 = CPyDict_SetItem(cpy_r_deps, cpy_r_ir_3, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1069, CPyStatic_emitmodule___globals);
        goto CPyL49;
    }
CPyL20: ;
    cpy_r_r42 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir_3)->_base;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "sort_classes", "ClassIR", "base", 1070, CPyStatic_emitmodule___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r42);
CPyL21: ;
    cpy_r_r43 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r44 = cpy_r_r42 != cpy_r_r43;
    CPy_DECREF(cpy_r_r42);
    if (!cpy_r_r44) goto CPyL27;
    cpy_r_r45 = CPyDict_GetItem(cpy_r_deps, cpy_r_ir_3);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1071, CPyStatic_emitmodule___globals);
        goto CPyL49;
    }
    if (likely(PySet_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1071, CPyStatic_emitmodule___globals, "set", cpy_r_r45);
        goto CPyL49;
    }
    cpy_r_r47 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir_3)->_base;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "sort_classes", "ClassIR", "base", 1071, CPyStatic_emitmodule___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r47);
CPyL25: ;
    if (likely(cpy_r_r47 != Py_None))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1071, CPyStatic_emitmodule___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r47);
        goto CPyL50;
    }
    cpy_r_r49 = PySet_Add(cpy_r_r46, cpy_r_r48);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1071, CPyStatic_emitmodule___globals);
        goto CPyL49;
    }
CPyL27: ;
    cpy_r_r51 = CPyDict_GetItem(cpy_r_deps, cpy_r_ir_3);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1072, CPyStatic_emitmodule___globals);
        goto CPyL49;
    }
    if (likely(PySet_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1072, CPyStatic_emitmodule___globals, "set", cpy_r_r51);
        goto CPyL49;
    }
    cpy_r_r53 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir_3)->_traits;
    if (unlikely(cpy_r_r53 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'traits' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r53);
    }
    CPy_DECREF(cpy_r_ir_3);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1072, CPyStatic_emitmodule___globals);
        goto CPyL51;
    }
CPyL30: ;
    cpy_r_r54 = _PySet_Update(cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1072, CPyStatic_emitmodule___globals);
        goto CPyL48;
    }
    cpy_r_r56 = cpy_r_r28 + 2;
    cpy_r_r28 = cpy_r_r56;
    goto CPyL14;
CPyL32: ;
    cpy_r_r57 = CPyDef_emitmodule___toposort(cpy_r_deps);
    CPy_DECREF(cpy_r_deps);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1073, CPyStatic_emitmodule___globals);
        goto CPyL44;
    }
    cpy_r_sorted_irs = cpy_r_r57;
    cpy_r_r58 = (CPyPtr)&((PyVarObject *)cpy_r_sorted_irs)->ob_size;
    cpy_r_r59 = *(int64_t *)cpy_r_r58;
    cpy_r_r60 = PyList_New(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1074, CPyStatic_emitmodule___globals);
        goto CPyL52;
    }
    cpy_r_r61 = 0;
CPyL35: ;
    cpy_r_r62 = (CPyPtr)&((PyVarObject *)cpy_r_sorted_irs)->ob_size;
    cpy_r_r63 = *(int64_t *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 << 1;
    cpy_r_r65 = (Py_ssize_t)cpy_r_r61 < (Py_ssize_t)cpy_r_r64;
    if (!cpy_r_r65) goto CPyL53;
    cpy_r_r66 = CPyList_GetItemUnsafe(cpy_r_sorted_irs, cpy_r_r61);
    if (likely(Py_TYPE(cpy_r_r66) == CPyType_class_ir___ClassIR))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1074, CPyStatic_emitmodule___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r66);
        goto CPyL54;
    }
    cpy_r_ir_4 = cpy_r_r67;
    cpy_r_r68 = CPyDict_GetItem(cpy_r_mod_name, cpy_r_ir_4);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1074, CPyStatic_emitmodule___globals);
        goto CPyL55;
    }
    if (likely(PyUnicode_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1074, CPyStatic_emitmodule___globals, "str", cpy_r_r68);
        goto CPyL55;
    }
    cpy_r_r70.f0 = cpy_r_r69;
    cpy_r_r70.f1 = cpy_r_ir_4;
    CPy_INCREF(cpy_r_r70.f0);
    CPy_INCREF(cpy_r_r70.f1);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_ir_4);
    cpy_r_r71 = PyTuple_New(2);
    if (unlikely(cpy_r_r71 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9650 = cpy_r_r70.f0;
    PyTuple_SET_ITEM(cpy_r_r71, 0, __tmp9650);
    PyObject *__tmp9651 = cpy_r_r70.f1;
    PyTuple_SET_ITEM(cpy_r_r71, 1, __tmp9651);
    cpy_r_r72 = CPyList_SetItemUnsafe(cpy_r_r60, cpy_r_r61, cpy_r_r71);
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1074, CPyStatic_emitmodule___globals);
        goto CPyL54;
    }
    cpy_r_r73 = cpy_r_r61 + 2;
    cpy_r_r61 = cpy_r_r73;
    goto CPyL35;
CPyL41: ;
    return cpy_r_r60;
CPyL42: ;
    cpy_r_r74 = NULL;
    return cpy_r_r74;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL42;
CPyL44: ;
    CPy_DecRef(cpy_r_mod_name);
    goto CPyL42;
CPyL45: ;
    CPy_DecRef(cpy_r_mod_name);
    CPy_DecRef(cpy_r_r15);
    goto CPyL42;
CPyL46: ;
    CPy_DecRef(cpy_r_mod_name);
    CPy_DecRef(cpy_r_irs);
    goto CPyL42;
CPyL47: ;
    CPy_DECREF(cpy_r_irs);
    goto CPyL32;
CPyL48: ;
    CPy_DecRef(cpy_r_mod_name);
    CPy_DecRef(cpy_r_irs);
    CPy_DecRef(cpy_r_deps);
    goto CPyL42;
CPyL49: ;
    CPy_DecRef(cpy_r_mod_name);
    CPy_DecRef(cpy_r_irs);
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_ir_3);
    goto CPyL42;
CPyL50: ;
    CPy_DecRef(cpy_r_mod_name);
    CPy_DecRef(cpy_r_irs);
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_ir_3);
    CPy_DecRef(cpy_r_r46);
    goto CPyL42;
CPyL51: ;
    CPy_DecRef(cpy_r_mod_name);
    CPy_DecRef(cpy_r_irs);
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r52);
    goto CPyL42;
CPyL52: ;
    CPy_DecRef(cpy_r_mod_name);
    CPy_DecRef(cpy_r_sorted_irs);
    goto CPyL42;
CPyL53: ;
    CPy_DECREF(cpy_r_mod_name);
    CPy_DECREF(cpy_r_sorted_irs);
    goto CPyL41;
CPyL54: ;
    CPy_DecRef(cpy_r_mod_name);
    CPy_DecRef(cpy_r_sorted_irs);
    CPy_DecRef(cpy_r_r60);
    goto CPyL42;
CPyL55: ;
    CPy_DecRef(cpy_r_mod_name);
    CPy_DecRef(cpy_r_sorted_irs);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_ir_4);
    goto CPyL42;
}

PyObject *CPyPy_emitmodule___sort_classes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"classes", 0};
    static CPyArg_Parser parser = {"O:sort_classes", kwlist, 0};
    PyObject *obj_classes;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_classes)) {
        return NULL;
    }
    PyObject *arg_classes;
    if (likely(PyList_Check(obj_classes)))
        arg_classes = obj_classes;
    else {
        CPy_TypeError("list", obj_classes); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___sort_classes(arg_classes);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "sort_classes", 1063, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___visit_toposort_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_emitmodule___visit_toposort_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_emitmodule___visit_toposort_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "__get__", -1, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___visit_toposort_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_item) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_visit;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_child;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = ((mypyc___codegen___emitmodule___visit_toposort_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "visit", "visit_toposort_obj", "__mypyc_env__", 1088, CPyStatic_emitmodule___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_visit;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "visit", "toposort_env", "visit", -1, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_visit = cpy_r_r1;
    cpy_r_r2 = ((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_visited;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "visit", "toposort_env", "visited", 1089, CPyStatic_emitmodule___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = PySet_Contains(cpy_r_r2, cpy_r_item);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "visit", 1089, CPyStatic_emitmodule___globals);
        goto CPyL21;
    }
    cpy_r_r5 = cpy_r_r3;
    if (cpy_r_r5) {
        goto CPyL22;
    } else
        goto CPyL6;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r6 = ((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_deps;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "visit", "toposort_env", "deps", 1092, CPyStatic_emitmodule___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r6, cpy_r_item);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "visit", 1092, CPyStatic_emitmodule___globals);
        goto CPyL21;
    }
    if (likely(PySet_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "visit", 1092, CPyStatic_emitmodule___globals, "set", cpy_r_r7);
        goto CPyL21;
    }
    cpy_r_r9 = PyObject_GetIter(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "visit", 1092, CPyStatic_emitmodule___globals);
        goto CPyL21;
    }
CPyL10: ;
    cpy_r_r10 = PyIter_Next(cpy_r_r9);
    if (cpy_r_r10 == NULL) goto CPyL23;
    cpy_r_child = cpy_r_r10;
    PyObject *cpy_r_r11[1] = {cpy_r_child};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_visit, cpy_r_r12, 1, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "visit", 1093, CPyStatic_emitmodule___globals);
        goto CPyL24;
    } else
        goto CPyL25;
CPyL12: ;
    CPy_DECREF(cpy_r_child);
    goto CPyL10;
CPyL13: ;
    cpy_r_r14 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "visit", 1092, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    cpy_r_r15 = ((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_result;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "visit", "toposort_env", "result", 1095, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r15);
CPyL15: ;
    cpy_r_r16 = PyList_Append(cpy_r_r15, cpy_r_item);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "visit", 1095, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    cpy_r_r18 = ((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_visited;
    if (unlikely(cpy_r_r18 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'visited' of 'toposort_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r18);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "visit", 1096, CPyStatic_emitmodule___globals);
        goto CPyL19;
    }
CPyL17: ;
    cpy_r_r19 = PySet_Add(cpy_r_r18, cpy_r_item);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "visit", 1096, CPyStatic_emitmodule___globals);
        goto CPyL19;
    }
    return 1;
CPyL19: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL19;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_visit);
    goto CPyL19;
CPyL22: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_visit);
    goto CPyL5;
CPyL23: ;
    CPy_DECREF(cpy_r_visit);
    CPy_DECREF(cpy_r_r9);
    goto CPyL13;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_visit);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_child);
    goto CPyL19;
CPyL25: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL12;
}

PyObject *CPyPy_emitmodule___visit_toposort_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"item", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_item;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_item)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_item = obj_item;
    char retval = CPyDef_emitmodule___visit_toposort_obj_____call__(arg___mypyc_self__, arg_item);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "visit", 1088, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___toposort(PyObject *cpy_r_deps) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    tuple_T3CIO cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    cpy_r_r0 = CPyDef_emitmodule___toposort_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1080, CPyStatic_emitmodule___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_deps);
    if (((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_deps != NULL) {
        CPy_DECREF(((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_deps);
    }
    ((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_deps = cpy_r_deps;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1080, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1085, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    if (((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_result != NULL) {
        CPy_DECREF(((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_result);
    }
    ((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_result = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1085, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    cpy_r_r4 = PySet_New(NULL);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1086, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    if (((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_visited != NULL) {
        CPy_DECREF(((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_visited);
    }
    ((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_visited = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1086, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    cpy_r_r6 = CPyDef_emitmodule___visit_toposort_obj();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1088, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___codegen___emitmodule___visit_toposort_objObject *)cpy_r_r6)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___codegen___emitmodule___visit_toposort_objObject *)cpy_r_r6)->___mypyc_env__);
    }
    ((mypyc___codegen___emitmodule___visit_toposort_objObject *)cpy_r_r6)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1088, CPyStatic_emitmodule___globals);
        goto CPyL21;
    }
    if (((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_visit != NULL) {
        CPy_DECREF(((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_visit);
    }
    ((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_visit = cpy_r_r6;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1088, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    cpy_r_r9 = ((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_deps;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "toposort", "toposort_env", "deps", 1098, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r9);
CPyL10: ;
    cpy_r_r10 = 0;
    cpy_r_r11 = PyDict_Size(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = CPyDict_GetKeysIter(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1098, CPyStatic_emitmodule___globals);
        goto CPyL22;
    }
CPyL11: ;
    cpy_r_r14 = CPyDict_NextKey(cpy_r_r13, cpy_r_r10);
    cpy_r_r15 = cpy_r_r14.f1;
    cpy_r_r10 = cpy_r_r15;
    cpy_r_r16 = cpy_r_r14.f0;
    if (!cpy_r_r16) goto CPyL23;
    cpy_r_r17 = cpy_r_r14.f2;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r14.f2);
    cpy_r_item = cpy_r_r17;
    cpy_r_r18 = ((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_visit;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitmodule.py", "toposort", "toposort_env", "visit", 1099, CPyStatic_emitmodule___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r18);
CPyL13: ;
    PyObject *cpy_r_r19[1] = {cpy_r_item};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1099, CPyStatic_emitmodule___globals);
        goto CPyL24;
    } else
        goto CPyL25;
CPyL14: ;
    CPy_DECREF(cpy_r_item);
    cpy_r_r22 = CPyDict_CheckSize(cpy_r_r9, cpy_r_r12);
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1098, CPyStatic_emitmodule___globals);
        goto CPyL26;
    } else
        goto CPyL11;
CPyL16: ;
    cpy_r_r23 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1098, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    cpy_r_r24 = ((mypyc___codegen___emitmodule___toposort_envObject *)cpy_r_r0)->_result;
    if (unlikely(cpy_r_r24 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'result' of 'toposort_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r24);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1101, CPyStatic_emitmodule___globals);
        goto CPyL19;
    }
CPyL18: ;
    return cpy_r_r24;
CPyL19: ;
    cpy_r_r25 = NULL;
    return cpy_r_r25;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL19;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    goto CPyL19;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    goto CPyL19;
CPyL23: ;
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14.f2);
    goto CPyL16;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_item);
    goto CPyL19;
CPyL25: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL14;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r13);
    goto CPyL19;
}

PyObject *CPyPy_emitmodule___toposort(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"deps", 0};
    static CPyArg_Parser parser = {"O:toposort", kwlist, 0};
    PyObject *obj_deps;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_deps)) {
        return NULL;
    }
    PyObject *arg_deps;
    if (likely(PyDict_Check(obj_deps)))
        arg_deps = obj_deps;
    else {
        CPy_TypeError("dict", obj_deps); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___toposort(arg_deps);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "toposort", 1080, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___is_fastcall_supported(PyObject *cpy_r_fn, tuple_T2II cpy_r_capi_version) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 4, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* class_name */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "is_fastcall_supported", 1105, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL18;
    cpy_r_r3 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "is_fastcall_supported", 1106, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
CPyL3: ;
    cpy_r_r4 = CPyStatics[706]; /* '__call__' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL6;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL6;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "is_fastcall_supported", 1106, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
CPyL6: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL9;
    cpy_r_r11 = CPyDef_mypyc___common___use_vectorcall(cpy_r_capi_version);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "is_fastcall_supported", 1108, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    return cpy_r_r11;
CPyL9: ;
    cpy_r_r12 = CPyDef_mypyc___common___use_fastcall(cpy_r_capi_version);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "is_fastcall_supported", 1110, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    if (cpy_r_r12) goto CPyL12;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL17;
CPyL12: ;
    cpy_r_r14 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "is_fastcall_supported", 1110, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
CPyL13: ;
    cpy_r_r15 = CPyStatics[288]; /* '__init__' */
    cpy_r_r16 = PyUnicode_Compare(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r17 = cpy_r_r16 == -1;
    if (!cpy_r_r17) goto CPyL16;
    cpy_r_r18 = PyErr_Occurred();
    cpy_r_r19 = cpy_r_r18 != NULL;
    if (!cpy_r_r19) goto CPyL16;
    cpy_r_r20 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "is_fastcall_supported", 1110, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
CPyL16: ;
    cpy_r_r21 = cpy_r_r16 != 0;
    cpy_r_r13 = cpy_r_r21;
CPyL17: ;
    return cpy_r_r13;
CPyL18: ;
    cpy_r_r22 = CPyDef_mypyc___common___use_fastcall(cpy_r_capi_version);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "is_fastcall_supported", 1111, CPyStatic_emitmodule___globals);
        goto CPyL20;
    }
    return cpy_r_r22;
CPyL20: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
}

PyObject *CPyPy_emitmodule___is_fastcall_supported(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "capi_version", 0};
    static CPyArg_Parser parser = {"OO:is_fastcall_supported", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_capi_version;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_capi_version)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    tuple_T2II arg_capi_version;
    PyObject *__tmp9652;
    if (unlikely(!(PyTuple_Check(obj_capi_version) && PyTuple_GET_SIZE(obj_capi_version) == 2))) {
        __tmp9652 = NULL;
        goto __LL9653;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_capi_version, 0))))
        __tmp9652 = PyTuple_GET_ITEM(obj_capi_version, 0);
    else {
        __tmp9652 = NULL;
    }
    if (__tmp9652 == NULL) goto __LL9653;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_capi_version, 1))))
        __tmp9652 = PyTuple_GET_ITEM(obj_capi_version, 1);
    else {
        __tmp9652 = NULL;
    }
    if (__tmp9652 == NULL) goto __LL9653;
    __tmp9652 = obj_capi_version;
__LL9653: ;
    if (unlikely(__tmp9652 == NULL)) {
        CPy_TypeError("tuple[int, int]", obj_capi_version); goto fail;
    } else {
        PyObject *__tmp9654 = PyTuple_GET_ITEM(obj_capi_version, 0);
        CPyTagged __tmp9655;
        if (likely(PyLong_Check(__tmp9654)))
            __tmp9655 = CPyTagged_BorrowFromObject(__tmp9654);
        else {
            CPy_TypeError("int", __tmp9654); goto fail;
        }
        arg_capi_version.f0 = __tmp9655;
        PyObject *__tmp9656 = PyTuple_GET_ITEM(obj_capi_version, 1);
        CPyTagged __tmp9657;
        if (likely(PyLong_Check(__tmp9656)))
            __tmp9657 = CPyTagged_BorrowFromObject(__tmp9656);
        else {
            CPy_TypeError("int", __tmp9656); goto fail;
        }
        arg_capi_version.f1 = __tmp9657;
    }
    char retval = CPyDef_emitmodule___is_fastcall_supported(arg_fn, arg_capi_version);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "is_fastcall_supported", 1104, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule___collect_literals(PyObject *cpy_r_fn, PyObject *cpy_r_literals) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_block;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_blocks;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL13;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_ops___BasicBlock))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "collect_literals", 1120, CPyStatic_emitmodule___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r6);
        goto CPyL14;
    }
    cpy_r_block = cpy_r_r7;
    cpy_r_r8 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_block);
    cpy_r_r9 = 0;
CPyL4: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL15;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_ops___Op)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "collect_literals", 1121, CPyStatic_emitmodule___globals, "mypyc.ir.ops.Op", cpy_r_r14);
        goto CPyL16;
    }
    cpy_r_op = cpy_r_r15;
    cpy_r_r16 = (PyObject *)CPyType_ops___LoadLiteral;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___LoadLiteral))
        cpy_r_r20 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "collect_literals", 1123, CPyStatic_emitmodule___globals, "mypyc.ir.ops.LoadLiteral", cpy_r_op);
        goto CPyL18;
    }
    cpy_r_r21 = ((mypyc___ir___ops___LoadLiteralObject *)cpy_r_r20)->_value;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_op);
    cpy_r_r22 = CPyDef_codegen___literals___Literals___record_literal(cpy_r_literals, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "collect_literals", 1123, CPyStatic_emitmodule___globals);
        goto CPyL16;
    }
CPyL9: ;
    cpy_r_r23 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r23;
    goto CPyL4;
CPyL10: ;
    cpy_r_r24 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r24;
    goto CPyL1;
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
CPyL15: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL10;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    goto CPyL12;
CPyL17: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL9;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_op);
    goto CPyL12;
}

PyObject *CPyPy_emitmodule___collect_literals(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "literals", 0};
    static CPyArg_Parser parser = {"OO:collect_literals", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_literals;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_literals)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_literals;
    if (likely(Py_TYPE(obj_literals) == CPyType_codegen___literals___Literals))
        arg_literals = obj_literals;
    else {
        CPy_TypeError("mypyc.codegen.literals.Literals", obj_literals); 
        goto fail;
    }
    char retval = CPyDef_emitmodule___collect_literals(arg_fn, arg_literals);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "collect_literals", 1114, CPyStatic_emitmodule___globals);
    return NULL;
}

PyObject *CPyDef_emitmodule___c_string_array_initializer(PyObject *cpy_r_components) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "c_string_array_initializer", 1127, CPyStatic_emitmodule___globals);
        goto CPyL13;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = CPyStatics[7535]; /* '{\n' */
    cpy_r_r2 = PyList_Append(cpy_r_result, cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "c_string_array_initializer", 1128, CPyStatic_emitmodule___globals);
        goto CPyL14;
    }
    cpy_r_r4 = 0;
CPyL3: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_components)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL10;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_components, cpy_r_r4);
    if (likely(PyBytes_Check(cpy_r_r9) || PyByteArray_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitmodule.py", "c_string_array_initializer", 1129, CPyStatic_emitmodule___globals, "bytes", cpy_r_r9);
        goto CPyL14;
    }
    cpy_r_s = cpy_r_r10;
    cpy_r_r11 = CPyStatics[309]; /* '    ' */
    cpy_r_r12 = CPyDef_cstring___c_string_initializer(cpy_r_s);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "c_string_array_initializer", 1130, CPyStatic_emitmodule___globals);
        goto CPyL14;
    }
    cpy_r_r13 = PyUnicode_Concat(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "c_string_array_initializer", 1130, CPyStatic_emitmodule___globals);
        goto CPyL14;
    }
    cpy_r_r14 = CPyStatics[7536]; /* ',\n' */
    cpy_r_r15 = PyUnicode_Concat(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "c_string_array_initializer", 1130, CPyStatic_emitmodule___globals);
        goto CPyL14;
    }
    cpy_r_r16 = PyList_Append(cpy_r_result, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "c_string_array_initializer", 1130, CPyStatic_emitmodule___globals);
        goto CPyL14;
    }
    cpy_r_r18 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r18;
    goto CPyL3;
CPyL10: ;
    cpy_r_r19 = CPyStatics[1406]; /* '}' */
    cpy_r_r20 = PyList_Append(cpy_r_result, cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "c_string_array_initializer", 1131, CPyStatic_emitmodule___globals);
        goto CPyL14;
    }
    cpy_r_r22 = CPyStatics[163]; /* '' */
    cpy_r_r23 = PyUnicode_Join(cpy_r_r22, cpy_r_result);
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "c_string_array_initializer", 1132, CPyStatic_emitmodule___globals);
        goto CPyL13;
    }
    return cpy_r_r23;
CPyL13: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL14: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL13;
}

PyObject *CPyPy_emitmodule___c_string_array_initializer(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"components", 0};
    static CPyArg_Parser parser = {"O:c_string_array_initializer", kwlist, 0};
    PyObject *obj_components;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_components)) {
        return NULL;
    }
    PyObject *arg_components;
    if (likely(PyList_Check(obj_components)))
        arg_components = obj_components;
    else {
        CPy_TypeError("list", obj_components); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitmodule___c_string_array_initializer(arg_components);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitmodule.py", "c_string_array_initializer", 1126, CPyStatic_emitmodule___globals);
    return NULL;
}

char CPyDef_emitmodule_____top_level__(void) {
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
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
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
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
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
    tuple_T2OO cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    int32_t cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    tuple_T2OO cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    int32_t cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    int32_t cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    int32_t cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    char cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    int32_t cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    int32_t cpy_r_r216;
    char cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    int32_t cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    int32_t cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject **cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    int32_t cpy_r_r249;
    char cpy_r_r250;
    char cpy_r_r251;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", -1, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_emitmodule___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 6, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_json;
    cpy_r_r10 = (PyObject **)&CPyModule_os;
    PyObject **cpy_r_r11[2] = {cpy_r_r9, cpy_r_r10};
    cpy_r_r12 = (void *)&cpy_r_r11;
    int64_t cpy_r_r13[2] = {8, 9};
    cpy_r_r14 = (void *)&cpy_r_r13;
    cpy_r_r15 = CPyStatics[9969]; /* (('json', 'json', 'json'), ('os', 'os', 'os')) */
    cpy_r_r16 = CPyStatic_emitmodule___globals;
    cpy_r_r17 = CPyStatics[7537]; /* 'mypyc/codegen/emitmodule.py' */
    cpy_r_r18 = CPyStatics[17]; /* '<module>' */
    cpy_r_r19 = CPyImport_ImportMany(cpy_r_r15, cpy_r_r12, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r14);
    if (!cpy_r_r19) goto CPyL70;
    cpy_r_r20 = CPyStatics[9970]; /* ('Iterable', 'List', 'Optional', 'Tuple', 'TypeVar') */
    cpy_r_r21 = CPyStatics[21]; /* 'typing' */
    cpy_r_r22 = CPyStatic_emitmodule___globals;
    cpy_r_r23 = CPyImport_ImportFromMany(cpy_r_r21, cpy_r_r20, cpy_r_r20, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 10, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_typing = cpy_r_r23;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r24 = CPyStatics[9971]; /* ('BuildResult', 'BuildSource', 'State', 'build',
                                     'compute_hash', 'create_metastore', 'get_cache_names',
                                     'sorted_components') */
    cpy_r_r25 = CPyStatics[238]; /* 'mypy.build' */
    cpy_r_r26 = CPyStatic_emitmodule___globals;
    cpy_r_r27 = CPyImport_ImportFromMany(cpy_r_r25, cpy_r_r24, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 12, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypy___build = cpy_r_r27;
    CPy_INCREF(CPyModule_mypy___build);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r28 = CPyStatics[9490]; /* ('CompileError',) */
    cpy_r_r29 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r30 = CPyStatic_emitmodule___globals;
    cpy_r_r31 = CPyImport_ImportFromMany(cpy_r_r29, cpy_r_r28, cpy_r_r28, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 22, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypy___errors = cpy_r_r31;
    CPy_INCREF(CPyModule_mypy___errors);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r32 = CPyStatics[9146]; /* ('FileSystemCache',) */
    cpy_r_r33 = CPyStatics[564]; /* 'mypy.fscache' */
    cpy_r_r34 = CPyStatic_emitmodule___globals;
    cpy_r_r35 = CPyImport_ImportFromMany(cpy_r_r33, cpy_r_r32, cpy_r_r32, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 23, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypy___fscache = cpy_r_r35;
    CPy_INCREF(CPyModule_mypy___fscache);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r36 = CPyStatics[9536]; /* ('MypyFile',) */
    cpy_r_r37 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r38 = CPyStatic_emitmodule___globals;
    cpy_r_r39 = CPyImport_ImportFromMany(cpy_r_r37, cpy_r_r36, cpy_r_r36, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 24, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypy___nodes = cpy_r_r39;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r40 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r41 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r42 = CPyStatic_emitmodule___globals;
    cpy_r_r43 = CPyImport_ImportFromMany(cpy_r_r41, cpy_r_r40, cpy_r_r40, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 25, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypy___options = cpy_r_r43;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r44 = CPyStatics[9972]; /* ('Plugin', 'ReportConfigContext') */
    cpy_r_r45 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r46 = CPyStatic_emitmodule___globals;
    cpy_r_r47 = CPyImport_ImportFromMany(cpy_r_r45, cpy_r_r44, cpy_r_r44, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 26, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypy___plugin = cpy_r_r47;
    CPy_INCREF(CPyModule_mypy___plugin);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r48 = CPyStatics[9413]; /* ('hash_digest',) */
    cpy_r_r49 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r50 = CPyStatic_emitmodule___globals;
    cpy_r_r51 = CPyImport_ImportFromMany(cpy_r_r49, cpy_r_r48, cpy_r_r48, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 27, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypy___util = cpy_r_r51;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r52 = CPyStatics[9973]; /* ('c_string_initializer',) */
    cpy_r_r53 = CPyStatics[7543]; /* 'mypyc.codegen.cstring' */
    cpy_r_r54 = CPyStatic_emitmodule___globals;
    cpy_r_r55 = CPyImport_ImportFromMany(cpy_r_r53, cpy_r_r52, cpy_r_r52, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 28, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___codegen___cstring = cpy_r_r55;
    CPy_INCREF(CPyModule_mypyc___codegen___cstring);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r56 = CPyStatics[9974]; /* ('Emitter', 'EmitterContext', 'HeaderDeclaration',
                                     'c_array_initializer') */
    cpy_r_r57 = CPyStatics[7047]; /* 'mypyc.codegen.emit' */
    cpy_r_r58 = CPyStatic_emitmodule___globals;
    cpy_r_r59 = CPyImport_ImportFromMany(cpy_r_r57, cpy_r_r56, cpy_r_r56, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 29, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___codegen___emit = cpy_r_r59;
    CPy_INCREF(CPyModule_mypyc___codegen___emit);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r60 = CPyStatics[9975]; /* ('generate_class', 'generate_class_type_decl') */
    cpy_r_r61 = CPyStatics[7546]; /* 'mypyc.codegen.emitclass' */
    cpy_r_r62 = CPyStatic_emitmodule___globals;
    cpy_r_r63 = CPyImport_ImportFromMany(cpy_r_r61, cpy_r_r60, cpy_r_r60, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 30, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___codegen___emitclass = cpy_r_r63;
    CPy_INCREF(CPyModule_mypyc___codegen___emitclass);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r64 = CPyStatics[9976]; /* ('generate_native_function', 'native_function_header') */
    cpy_r_r65 = CPyStatics[7257]; /* 'mypyc.codegen.emitfunc' */
    cpy_r_r66 = CPyStatic_emitmodule___globals;
    cpy_r_r67 = CPyImport_ImportFromMany(cpy_r_r65, cpy_r_r64, cpy_r_r64, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 31, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___codegen___emitfunc = cpy_r_r67;
    CPy_INCREF(CPyModule_mypyc___codegen___emitfunc);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r68 = CPyStatics[9977]; /* ('generate_legacy_wrapper_function',
                                     'generate_wrapper_function',
                                     'legacy_wrapper_function_header',
                                     'wrapper_function_header') */
    cpy_r_r69 = CPyStatics[7268]; /* 'mypyc.codegen.emitwrapper' */
    cpy_r_r70 = CPyStatic_emitmodule___globals;
    cpy_r_r71 = CPyImport_ImportFromMany(cpy_r_r69, cpy_r_r68, cpy_r_r68, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 32, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___codegen___emitwrapper = cpy_r_r71;
    CPy_INCREF(CPyModule_mypyc___codegen___emitwrapper);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r72 = CPyStatics[9940]; /* ('Literals',) */
    cpy_r_r73 = CPyStatics[7012]; /* 'mypyc.codegen.literals' */
    cpy_r_r74 = CPyStatic_emitmodule___globals;
    cpy_r_r75 = CPyImport_ImportFromMany(cpy_r_r73, cpy_r_r72, cpy_r_r72, cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 38, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___codegen___literals = cpy_r_r75;
    CPy_INCREF(CPyModule_mypyc___codegen___literals);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r76 = CPyStatics[9978]; /* ('MODULE_PREFIX', 'PREFIX', 'RUNTIME_C_FILES',
                                     'TOP_LEVEL_NAME', 'shared_lib_name',
                                     'short_id_from_name', 'use_fastcall', 'use_vectorcall') */
    cpy_r_r77 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r78 = CPyStatic_emitmodule___globals;
    cpy_r_r79 = CPyImport_ImportFromMany(cpy_r_r77, cpy_r_r76, cpy_r_r76, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 39, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___common = cpy_r_r79;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r80 = CPyStatics[9270]; /* ('Errors',) */
    cpy_r_r81 = CPyStatics[6842]; /* 'mypyc.errors' */
    cpy_r_r82 = CPyStatic_emitmodule___globals;
    cpy_r_r83 = CPyImport_ImportFromMany(cpy_r_r81, cpy_r_r80, cpy_r_r80, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 49, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___errors = cpy_r_r83;
    CPy_INCREF(CPyModule_mypyc___errors);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r84 = CPyStatics[9904]; /* ('ClassIR',) */
    cpy_r_r85 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r86 = CPyStatic_emitmodule___globals;
    cpy_r_r87 = CPyImport_ImportFromMany(cpy_r_r85, cpy_r_r84, cpy_r_r84, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 50, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r87;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r88 = CPyStatics[9979]; /* ('FuncIR',) */
    cpy_r_r89 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r90 = CPyStatic_emitmodule___globals;
    cpy_r_r91 = CPyImport_ImportFromMany(cpy_r_r89, cpy_r_r88, cpy_r_r88, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 51, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r91;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r92 = CPyStatics[9980]; /* ('ModuleIR', 'ModuleIRs', 'deserialize_modules') */
    cpy_r_r93 = CPyStatics[7557]; /* 'mypyc.ir.module_ir' */
    cpy_r_r94 = CPyStatic_emitmodule___globals;
    cpy_r_r95 = CPyImport_ImportFromMany(cpy_r_r93, cpy_r_r92, cpy_r_r92, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 52, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___ir___module_ir = cpy_r_r95;
    CPy_INCREF(CPyModule_mypyc___ir___module_ir);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r96 = CPyStatics[9981]; /* ('DeserMaps', 'LoadLiteral') */
    cpy_r_r97 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r98 = CPyStatic_emitmodule___globals;
    cpy_r_r99 = CPyImport_ImportFromMany(cpy_r_r97, cpy_r_r96, cpy_r_r96, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 53, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r99;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r100 = CPyStatics[9982]; /* ('RType',) */
    cpy_r_r101 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r102 = CPyStatic_emitmodule___globals;
    cpy_r_r103 = CPyImport_ImportFromMany(cpy_r_r101, cpy_r_r100, cpy_r_r100, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 54, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r103;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r103);
    cpy_r_r104 = CPyStatics[9983]; /* ('build_ir',) */
    cpy_r_r105 = CPyStatics[7558]; /* 'mypyc.irbuild.main' */
    cpy_r_r106 = CPyStatic_emitmodule___globals;
    cpy_r_r107 = CPyImport_ImportFromMany(cpy_r_r105, cpy_r_r104, cpy_r_r104, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 55, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___irbuild___main = cpy_r_r107;
    CPy_INCREF(CPyModule_mypyc___irbuild___main);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r108 = CPyStatics[9984]; /* ('Mapper',) */
    cpy_r_r109 = CPyStatics[7560]; /* 'mypyc.irbuild.mapper' */
    cpy_r_r110 = CPyStatic_emitmodule___globals;
    cpy_r_r111 = CPyImport_ImportFromMany(cpy_r_r109, cpy_r_r108, cpy_r_r108, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 56, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___irbuild___mapper = cpy_r_r111;
    CPy_INCREF(CPyModule_mypyc___irbuild___mapper);
    CPy_DECREF(cpy_r_r111);
    cpy_r_r112 = CPyStatics[9985]; /* ('load_type_map',) */
    cpy_r_r113 = CPyStatics[7562]; /* 'mypyc.irbuild.prepare' */
    cpy_r_r114 = CPyStatic_emitmodule___globals;
    cpy_r_r115 = CPyImport_ImportFromMany(cpy_r_r113, cpy_r_r112, cpy_r_r112, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 57, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___irbuild___prepare = cpy_r_r115;
    CPy_INCREF(CPyModule_mypyc___irbuild___prepare);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r116 = CPyStatics[9946]; /* ('NameGenerator', 'exported_name') */
    cpy_r_r117 = CPyStatics[6845]; /* 'mypyc.namegen' */
    cpy_r_r118 = CPyStatic_emitmodule___globals;
    cpy_r_r119 = CPyImport_ImportFromMany(cpy_r_r117, cpy_r_r116, cpy_r_r116, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 58, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___namegen = cpy_r_r119;
    CPy_INCREF(CPyModule_mypyc___namegen);
    CPy_DECREF(cpy_r_r119);
    cpy_r_r120 = CPyStatics[9929]; /* ('CompilerOptions',) */
    cpy_r_r121 = CPyStatics[6847]; /* 'mypyc.options' */
    cpy_r_r122 = CPyStatic_emitmodule___globals;
    cpy_r_r123 = CPyImport_ImportFromMany(cpy_r_r121, cpy_r_r120, cpy_r_r120, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 59, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___options = cpy_r_r123;
    CPy_INCREF(CPyModule_mypyc___options);
    CPy_DECREF(cpy_r_r123);
    cpy_r_r124 = CPyStatics[9986]; /* ('insert_exception_handling',) */
    cpy_r_r125 = CPyStatics[7564]; /* 'mypyc.transform.exceptions' */
    cpy_r_r126 = CPyStatic_emitmodule___globals;
    cpy_r_r127 = CPyImport_ImportFromMany(cpy_r_r125, cpy_r_r124, cpy_r_r124, cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 60, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___transform___exceptions = cpy_r_r127;
    CPy_INCREF(CPyModule_mypyc___transform___exceptions);
    CPy_DECREF(cpy_r_r127);
    cpy_r_r128 = CPyStatics[9987]; /* ('insert_ref_count_opcodes',) */
    cpy_r_r129 = CPyStatics[7566]; /* 'mypyc.transform.refcount' */
    cpy_r_r130 = CPyStatic_emitmodule___globals;
    cpy_r_r131 = CPyImport_ImportFromMany(cpy_r_r129, cpy_r_r128, cpy_r_r128, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 61, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___transform___refcount = cpy_r_r131;
    CPy_INCREF(CPyModule_mypyc___transform___refcount);
    CPy_DECREF(cpy_r_r131);
    cpy_r_r132 = CPyStatics[9988]; /* ('insert_uninit_checks',) */
    cpy_r_r133 = CPyStatics[7568]; /* 'mypyc.transform.uninit' */
    cpy_r_r134 = CPyStatic_emitmodule___globals;
    cpy_r_r135 = CPyImport_ImportFromMany(cpy_r_r133, cpy_r_r132, cpy_r_r132, cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 62, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    CPyModule_mypyc___transform___uninit = cpy_r_r135;
    CPy_INCREF(CPyModule_mypyc___transform___uninit);
    CPy_DECREF(cpy_r_r135);
    cpy_r_r136 = CPyStatic_emitmodule___globals;
    cpy_r_r137 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r138 = CPyDict_GetItem(cpy_r_r136, cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 84, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r139 = CPyStatic_emitmodule___globals;
    cpy_r_r140 = CPyStatics[81]; /* 'List' */
    cpy_r_r141 = CPyDict_GetItem(cpy_r_r139, cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 84, CPyStatic_emitmodule___globals);
        goto CPyL71;
    }
    cpy_r_r142 = (PyObject *)CPyType_modulefinder___BuildSource;
    cpy_r_r143 = PyObject_GetItem(cpy_r_r141, cpy_r_r142);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 84, CPyStatic_emitmodule___globals);
        goto CPyL71;
    }
    cpy_r_r144 = CPyStatic_emitmodule___globals;
    cpy_r_r145 = CPyStatics[82]; /* 'Optional' */
    cpy_r_r146 = CPyDict_GetItem(cpy_r_r144, cpy_r_r145);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 84, CPyStatic_emitmodule___globals);
        goto CPyL72;
    }
    cpy_r_r147 = (PyObject *)&PyUnicode_Type;
    cpy_r_r148 = PyObject_GetItem(cpy_r_r146, cpy_r_r147);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 84, CPyStatic_emitmodule___globals);
        goto CPyL72;
    }
    cpy_r_r149.f0 = cpy_r_r143;
    cpy_r_r149.f1 = cpy_r_r148;
    CPy_INCREF(cpy_r_r149.f0);
    CPy_INCREF(cpy_r_r149.f1);
    CPy_DECREF(cpy_r_r143);
    CPy_DECREF(cpy_r_r148);
    cpy_r_r150 = PyTuple_New(2);
    if (unlikely(cpy_r_r150 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9658 = cpy_r_r149.f0;
    PyTuple_SET_ITEM(cpy_r_r150, 0, __tmp9658);
    PyObject *__tmp9659 = cpy_r_r149.f1;
    PyTuple_SET_ITEM(cpy_r_r150, 1, __tmp9659);
    cpy_r_r151 = PyObject_GetItem(cpy_r_r138, cpy_r_r150);
    CPy_DECREF(cpy_r_r138);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 84, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r152 = CPyStatic_emitmodule___globals;
    cpy_r_r153 = CPyStatics[7569]; /* 'Group' */
    cpy_r_r154 = CPyDict_SetItem(cpy_r_r152, cpy_r_r153, cpy_r_r151);
    CPy_DECREF(cpy_r_r151);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 84, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r156 = CPyStatic_emitmodule___globals;
    cpy_r_r157 = CPyStatics[81]; /* 'List' */
    cpy_r_r158 = CPyDict_GetItem(cpy_r_r156, cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 85, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r159 = CPyStatic_emitmodule___globals;
    cpy_r_r160 = CPyStatics[7569]; /* 'Group' */
    cpy_r_r161 = CPyDict_GetItem(cpy_r_r159, cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 85, CPyStatic_emitmodule___globals);
        goto CPyL73;
    }
    cpy_r_r162 = PyObject_GetItem(cpy_r_r158, cpy_r_r161);
    CPy_DECREF(cpy_r_r158);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 85, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r163 = CPyStatic_emitmodule___globals;
    cpy_r_r164 = CPyStatics[7570]; /* 'Groups' */
    cpy_r_r165 = CPyDict_SetItem(cpy_r_r163, cpy_r_r164, cpy_r_r162);
    CPy_DECREF(cpy_r_r162);
    cpy_r_r166 = cpy_r_r165 >= 0;
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 85, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r167 = CPyStatic_emitmodule___globals;
    cpy_r_r168 = CPyStatics[81]; /* 'List' */
    cpy_r_r169 = CPyDict_GetItem(cpy_r_r167, cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 88, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r170 = CPyStatic_emitmodule___globals;
    cpy_r_r171 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r172 = CPyDict_GetItem(cpy_r_r170, cpy_r_r171);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 88, CPyStatic_emitmodule___globals);
        goto CPyL74;
    }
    cpy_r_r173 = (PyObject *)&PyUnicode_Type;
    cpy_r_r174 = (PyObject *)&PyUnicode_Type;
    cpy_r_r175.f0 = cpy_r_r173;
    cpy_r_r175.f1 = cpy_r_r174;
    CPy_INCREF(cpy_r_r175.f0);
    CPy_INCREF(cpy_r_r175.f1);
    cpy_r_r176 = PyTuple_New(2);
    if (unlikely(cpy_r_r176 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9660 = cpy_r_r175.f0;
    PyTuple_SET_ITEM(cpy_r_r176, 0, __tmp9660);
    PyObject *__tmp9661 = cpy_r_r175.f1;
    PyTuple_SET_ITEM(cpy_r_r176, 1, __tmp9661);
    cpy_r_r177 = PyObject_GetItem(cpy_r_r172, cpy_r_r176);
    CPy_DECREF(cpy_r_r172);
    CPy_DECREF(cpy_r_r176);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 88, CPyStatic_emitmodule___globals);
        goto CPyL74;
    }
    cpy_r_r178 = PyObject_GetItem(cpy_r_r169, cpy_r_r177);
    CPy_DECREF(cpy_r_r169);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 88, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r179 = CPyStatic_emitmodule___globals;
    cpy_r_r180 = CPyStatics[7571]; /* 'FileContents' */
    cpy_r_r181 = CPyDict_SetItem(cpy_r_r179, cpy_r_r180, cpy_r_r178);
    CPy_DECREF(cpy_r_r178);
    cpy_r_r182 = cpy_r_r181 >= 0;
    if (unlikely(!cpy_r_r182)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 88, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r183 = NULL;
    cpy_r_r184 = CPyStatics[7572]; /* 'mypyc.codegen.emitmodule' */
    cpy_r_r185 = (PyObject *)CPyType_emitmodule___MarkedDeclaration_template;
    cpy_r_r186 = CPyType_FromTemplate(cpy_r_r185, cpy_r_r183, cpy_r_r184);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 91, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r187 = CPyDef_emitmodule___MarkedDeclaration_trait_vtable_setup();
    if (unlikely(cpy_r_r187 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", -1, CPyStatic_emitmodule___globals);
        goto CPyL75;
    }
    cpy_r_r188 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r189 = CPyStatics[7573]; /* 'declaration' */
    cpy_r_r190 = CPyStatics[7574]; /* 'mark' */
    cpy_r_r191 = PyTuple_Pack(2, cpy_r_r189, cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 91, CPyStatic_emitmodule___globals);
        goto CPyL75;
    }
    cpy_r_r192 = PyObject_SetAttr(cpy_r_r186, cpy_r_r188, cpy_r_r191);
    CPy_DECREF(cpy_r_r191);
    cpy_r_r193 = cpy_r_r192 >= 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 91, CPyStatic_emitmodule___globals);
        goto CPyL75;
    }
    CPyType_emitmodule___MarkedDeclaration = (PyTypeObject *)cpy_r_r186;
    CPy_INCREF(CPyType_emitmodule___MarkedDeclaration);
    cpy_r_r194 = CPyStatic_emitmodule___globals;
    cpy_r_r195 = CPyStatics[7575]; /* 'MarkedDeclaration' */
    cpy_r_r196 = CPyDict_SetItem(cpy_r_r194, cpy_r_r195, cpy_r_r186);
    CPy_DECREF(cpy_r_r186);
    cpy_r_r197 = cpy_r_r196 >= 0;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 91, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r198 = (PyObject *)CPyType_plugin___Plugin;
    cpy_r_r199 = PyTuple_Pack(1, cpy_r_r198);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 99, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r200 = CPyStatics[7572]; /* 'mypyc.codegen.emitmodule' */
    cpy_r_r201 = (PyObject *)CPyType_emitmodule___MypycPlugin_template;
    cpy_r_r202 = CPyType_FromTemplate(cpy_r_r201, cpy_r_r199, cpy_r_r200);
    CPy_DECREF(cpy_r_r199);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 99, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r203 = CPyDef_emitmodule___MypycPlugin_trait_vtable_setup();
    if (unlikely(cpy_r_r203 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", -1, CPyStatic_emitmodule___globals);
        goto CPyL76;
    }
    cpy_r_r204 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r205 = CPyStatics[7054]; /* 'group_map' */
    cpy_r_r206 = CPyStatics[7576]; /* 'compiler_options' */
    cpy_r_r207 = CPyStatics[649]; /* 'metastore' */
    cpy_r_r208 = CPyStatics[1569]; /* 'python_version' */
    cpy_r_r209 = CPyStatics[4380]; /* '_modules' */
    cpy_r_r210 = CPyStatics[159]; /* 'options' */
    cpy_r_r211 = PyTuple_Pack(6, cpy_r_r205, cpy_r_r206, cpy_r_r207, cpy_r_r208, cpy_r_r209, cpy_r_r210);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 99, CPyStatic_emitmodule___globals);
        goto CPyL76;
    }
    cpy_r_r212 = PyObject_SetAttr(cpy_r_r202, cpy_r_r204, cpy_r_r211);
    CPy_DECREF(cpy_r_r211);
    cpy_r_r213 = cpy_r_r212 >= 0;
    if (unlikely(!cpy_r_r213)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 99, CPyStatic_emitmodule___globals);
        goto CPyL76;
    }
    CPyType_emitmodule___MypycPlugin = (PyTypeObject *)cpy_r_r202;
    CPy_INCREF(CPyType_emitmodule___MypycPlugin);
    cpy_r_r214 = CPyStatic_emitmodule___globals;
    cpy_r_r215 = CPyStatics[7577]; /* 'MypycPlugin' */
    cpy_r_r216 = CPyDict_SetItem(cpy_r_r214, cpy_r_r215, cpy_r_r202);
    CPy_DECREF(cpy_r_r202);
    cpy_r_r217 = cpy_r_r216 >= 0;
    if (unlikely(!cpy_r_r217)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 99, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r218 = NULL;
    cpy_r_r219 = CPyStatics[7572]; /* 'mypyc.codegen.emitmodule' */
    cpy_r_r220 = (PyObject *)CPyType_emitmodule___GroupGenerator_template;
    cpy_r_r221 = CPyType_FromTemplate(cpy_r_r220, cpy_r_r218, cpy_r_r219);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 465, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r222 = CPyDef_emitmodule___GroupGenerator_trait_vtable_setup();
    if (unlikely(cpy_r_r222 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", -1, CPyStatic_emitmodule___globals);
        goto CPyL77;
    }
    cpy_r_r223 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r224 = CPyStatics[635]; /* 'modules' */
    cpy_r_r225 = CPyStatics[3890]; /* 'source_paths' */
    cpy_r_r226 = CPyStatics[68]; /* 'context' */
    cpy_r_r227 = CPyStatics[2403]; /* 'names' */
    cpy_r_r228 = CPyStatics[7578]; /* 'simple_inits' */
    cpy_r_r229 = CPyStatics[7053]; /* 'group_name' */
    cpy_r_r230 = CPyStatics[7579]; /* 'use_shared_lib' */
    cpy_r_r231 = CPyStatics[7576]; /* 'compiler_options' */
    cpy_r_r232 = CPyStatics[7580]; /* 'multi_file' */
    cpy_r_r233 = PyTuple_Pack(9, cpy_r_r224, cpy_r_r225, cpy_r_r226, cpy_r_r227, cpy_r_r228, cpy_r_r229, cpy_r_r230, cpy_r_r231, cpy_r_r232);
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 465, CPyStatic_emitmodule___globals);
        goto CPyL77;
    }
    cpy_r_r234 = PyObject_SetAttr(cpy_r_r221, cpy_r_r223, cpy_r_r233);
    CPy_DECREF(cpy_r_r233);
    cpy_r_r235 = cpy_r_r234 >= 0;
    if (unlikely(!cpy_r_r235)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 465, CPyStatic_emitmodule___globals);
        goto CPyL77;
    }
    CPyType_emitmodule___GroupGenerator = (PyTypeObject *)cpy_r_r221;
    CPy_INCREF(CPyType_emitmodule___GroupGenerator);
    cpy_r_r236 = CPyStatic_emitmodule___globals;
    cpy_r_r237 = CPyStatics[7581]; /* 'GroupGenerator' */
    cpy_r_r238 = CPyDict_SetItem(cpy_r_r236, cpy_r_r237, cpy_r_r221);
    CPy_DECREF(cpy_r_r221);
    cpy_r_r239 = cpy_r_r238 >= 0;
    if (unlikely(!cpy_r_r239)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 465, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r240 = CPyStatics[1088]; /* 'T' */
    cpy_r_r241 = CPyStatic_emitmodule___globals;
    cpy_r_r242 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r243 = CPyDict_GetItem(cpy_r_r241, cpy_r_r242);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 1077, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    PyObject *cpy_r_r244[1] = {cpy_r_r240};
    cpy_r_r245 = (PyObject **)&cpy_r_r244;
    cpy_r_r246 = _PyObject_Vectorcall(cpy_r_r243, cpy_r_r245, 1, 0);
    CPy_DECREF(cpy_r_r243);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 1077, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    cpy_r_r247 = CPyStatic_emitmodule___globals;
    cpy_r_r248 = CPyStatics[1088]; /* 'T' */
    cpy_r_r249 = CPyDict_SetItem(cpy_r_r247, cpy_r_r248, cpy_r_r246);
    CPy_DECREF(cpy_r_r246);
    cpy_r_r250 = cpy_r_r249 >= 0;
    if (unlikely(!cpy_r_r250)) {
        CPy_AddTraceback("mypyc/codegen/emitmodule.py", "<module>", 1077, CPyStatic_emitmodule___globals);
        goto CPyL70;
    }
    return 1;
CPyL70: ;
    cpy_r_r251 = 2;
    return cpy_r_r251;
CPyL71: ;
    CPy_DecRef(cpy_r_r138);
    goto CPyL70;
CPyL72: ;
    CPy_DecRef(cpy_r_r138);
    CPy_DecRef(cpy_r_r143);
    goto CPyL70;
CPyL73: ;
    CPy_DecRef(cpy_r_r158);
    goto CPyL70;
CPyL74: ;
    CPy_DecRef(cpy_r_r169);
    goto CPyL70;
CPyL75: ;
    CPy_DecRef(cpy_r_r186);
    goto CPyL70;
CPyL76: ;
    CPy_DecRef(cpy_r_r202);
    goto CPyL70;
CPyL77: ;
    CPy_DecRef(cpy_r_r221);
    goto CPyL70;
}
