#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *
semanal_shared___SemanticAnalyzerCoreInterface_get_final_iteration(mypy___semanal_shared___SemanticAnalyzerCoreInterfaceObject *self, void *closure);
static PyObject *
semanal_shared___SemanticAnalyzerCoreInterface_get_is_stub_file(mypy___semanal_shared___SemanticAnalyzerCoreInterfaceObject *self, void *closure);
static PyObject *
semanal_shared___SemanticAnalyzerCoreInterface_get_type(mypy___semanal_shared___SemanticAnalyzerCoreInterfaceObject *self, void *closure);

static PyGetSetDef semanal_shared___SemanticAnalyzerCoreInterface_getseters[] = {
    {"final_iteration",
     (getter)semanal_shared___SemanticAnalyzerCoreInterface_get_final_iteration,
    NULL, NULL, NULL},
    {"is_stub_file",
     (getter)semanal_shared___SemanticAnalyzerCoreInterface_get_is_stub_file,
    NULL, NULL, NULL},
    {"type",
     (getter)semanal_shared___SemanticAnalyzerCoreInterface_get_type,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyObject *
semanal_shared___SemanticAnalyzerCoreInterface_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_shared___SemanticAnalyzerCoreInterface) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled traits");
    } else {
        PyErr_SetString(PyExc_TypeError, "traits may not be directly created");
    }
    return NULL;
}
static PyMethodDef semanal_shared___SemanticAnalyzerCoreInterface_methods[] = {
    {"lookup_qualified",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___lookup_qualified,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"lookup_fully_qualified",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___lookup_fully_qualified,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"lookup_fully_qualified_or_none",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___lookup_fully_qualified_or_none,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fail",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___fail,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"note",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___note,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"incomplete_feature_enabled",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___incomplete_feature_enabled,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_incomplete_ref",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___record_incomplete_ref,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"defer",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___defer,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_incomplete_namespace",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___is_incomplete_namespace,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_future_flag_set",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___is_future_flag_set,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_func_scope",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___is_func_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_shared___SemanticAnalyzerCoreInterface_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SemanticAnalyzerCoreInterface",
    .tp_new = semanal_shared___SemanticAnalyzerCoreInterface_new,
    .tp_getset = semanal_shared___SemanticAnalyzerCoreInterface_getseters,
    .tp_methods = semanal_shared___SemanticAnalyzerCoreInterface_methods,
    .tp_basicsize = sizeof(PyObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_semanal_shared___SemanticAnalyzerCoreInterface_template = &CPyType_semanal_shared___SemanticAnalyzerCoreInterface_template_;


static PyObject *
semanal_shared___SemanticAnalyzerCoreInterface_get_final_iteration(mypy___semanal_shared___SemanticAnalyzerCoreInterfaceObject *self, void *closure)
{
    char retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___final_iteration((PyObject *) self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
}

static PyObject *
semanal_shared___SemanticAnalyzerCoreInterface_get_is_stub_file(mypy___semanal_shared___SemanticAnalyzerCoreInterfaceObject *self, void *closure)
{
    char retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___is_stub_file((PyObject *) self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
}

static PyObject *
semanal_shared___SemanticAnalyzerCoreInterface_get_type(mypy___semanal_shared___SemanticAnalyzerCoreInterfaceObject *self, void *closure)
{
    return CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___type((PyObject *) self);
}

static PyObject *
semanal_shared___SemanticAnalyzerInterface_get_is_typeshed_stub_file(mypy___semanal_shared___SemanticAnalyzerInterfaceObject *self, void *closure);

static PyGetSetDef semanal_shared___SemanticAnalyzerInterface_getseters[] = {
    {"is_typeshed_stub_file",
     (getter)semanal_shared___SemanticAnalyzerInterface_get_is_typeshed_stub_file,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyObject *
semanal_shared___SemanticAnalyzerInterface_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_shared___SemanticAnalyzerInterface) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled traits");
    } else {
        PyErr_SetString(PyExc_TypeError, "traits may not be directly created");
    }
    return NULL;
}
static PyMethodDef semanal_shared___SemanticAnalyzerInterface_methods[] = {
    {"lookup",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___lookup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"named_type",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___named_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"named_type_or_none",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___named_type_or_none,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"anal_type",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___anal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_and_bind_all_tvars",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___get_and_bind_all_tvars,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"basic_new_typeinfo",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___basic_new_typeinfo,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"schedule_patch",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___schedule_patch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_symbol_table_node",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___add_symbol_table_node,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"current_symbol_table",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___current_symbol_table,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_symbol",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___add_symbol,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_symbol_skip_local",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___add_symbol_skip_local,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"parse_bool",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___parse_bool,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"qualified_name",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___qualified_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"process_placeholder",
     (PyCFunction)CPyPy_semanal_shared___SemanticAnalyzerInterface___process_placeholder,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_shared___SemanticAnalyzerInterface_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SemanticAnalyzerInterface",
    .tp_new = semanal_shared___SemanticAnalyzerInterface_new,
    .tp_getset = semanal_shared___SemanticAnalyzerInterface_getseters,
    .tp_methods = semanal_shared___SemanticAnalyzerInterface_methods,
    .tp_basicsize = sizeof(PyObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_semanal_shared___SemanticAnalyzerInterface_template = &CPyType_semanal_shared___SemanticAnalyzerInterface_template_;


static PyObject *
semanal_shared___SemanticAnalyzerInterface_get_is_typeshed_stub_file(mypy___semanal_shared___SemanticAnalyzerInterfaceObject *self, void *closure)
{
    char retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___is_typeshed_stub_file((PyObject *) self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
}

PyMemberDef semanal_shared____NamedTypeCallback_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef semanal_shared____NamedTypeCallback_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyObject *
semanal_shared____NamedTypeCallback_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_shared____NamedTypeCallback) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled traits");
    } else {
        PyErr_SetString(PyExc_TypeError, "traits may not be directly created");
    }
    return NULL;
}
static PyMethodDef semanal_shared____NamedTypeCallback_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_semanal_shared____NamedTypeCallback_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_shared____NamedTypeCallback_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_NamedTypeCallback",
    .tp_new = semanal_shared____NamedTypeCallback_new,
    .tp_getset = semanal_shared____NamedTypeCallback_getseters,
    .tp_methods = semanal_shared____NamedTypeCallback_methods,
    .tp_call = PyVectorcall_Call,
    .tp_members = semanal_shared____NamedTypeCallback_members,
    .tp_basicsize = sizeof(PyObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyObject),
    .tp_weaklistoffset = sizeof(PyObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___semanal_shared____NamedTypeCallbackObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_semanal_shared____NamedTypeCallback_template = &CPyType_semanal_shared____NamedTypeCallback_template_;


static int
semanal_shared___HasPlaceholders_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef semanal_shared___HasPlaceholders_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___semanal_shared___HasPlaceholdersObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___semanal_shared___HasPlaceholdersObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *semanal_shared___HasPlaceholders_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_shared___HasPlaceholders(void);

static PyObject *
semanal_shared___HasPlaceholders_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_shared___HasPlaceholders) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = semanal_shared___HasPlaceholders_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_semanal_shared___HasPlaceholders_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
semanal_shared___HasPlaceholders_traverse(mypy___semanal_shared___HasPlaceholdersObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_strategy)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_strategy));
    }
    Py_VISIT(self->_seen_aliases);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___semanal_shared___HasPlaceholdersObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_shared___HasPlaceholdersObject))));
    return 0;
}

static int
semanal_shared___HasPlaceholders_clear(mypy___semanal_shared___HasPlaceholdersObject *self)
{
    if (CPyTagged_CheckLong(self->_strategy)) {
        CPyTagged __tmp = self->_strategy;
        self->_strategy = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_seen_aliases);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___semanal_shared___HasPlaceholdersObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_shared___HasPlaceholdersObject))));
    return 0;
}

static void
semanal_shared___HasPlaceholders_dealloc(mypy___semanal_shared___HasPlaceholdersObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_shared___HasPlaceholders_dealloc)
    semanal_shared___HasPlaceholders_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_shared___HasPlaceholders_vtable[37];
static CPyVTableItem semanal_shared___HasPlaceholders_type_visitor___SyntheticTypeVisitor_trait_vtable[26];
static size_t semanal_shared___HasPlaceholders_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem semanal_shared___HasPlaceholders_type_visitor___TypeVisitor_trait_vtable[21];
static size_t semanal_shared___HasPlaceholders_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_semanal_shared___HasPlaceholders_trait_vtable_setup(void)
{
    CPyVTableItem semanal_shared___HasPlaceholders_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_list__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_callable_argument__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_ellipsis_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_raw_expression_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_shared___HasPlaceholders___visit_placeholder_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(semanal_shared___HasPlaceholders_type_visitor___SyntheticTypeVisitor_trait_vtable, semanal_shared___HasPlaceholders_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch, sizeof(semanal_shared___HasPlaceholders_type_visitor___SyntheticTypeVisitor_trait_vtable));
    size_t semanal_shared___HasPlaceholders_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(semanal_shared___HasPlaceholders_type_visitor___SyntheticTypeVisitor_offset_table, semanal_shared___HasPlaceholders_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(semanal_shared___HasPlaceholders_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem semanal_shared___HasPlaceholders_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(semanal_shared___HasPlaceholders_type_visitor___TypeVisitor_trait_vtable, semanal_shared___HasPlaceholders_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(semanal_shared___HasPlaceholders_type_visitor___TypeVisitor_trait_vtable));
    size_t semanal_shared___HasPlaceholders_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(semanal_shared___HasPlaceholders_type_visitor___TypeVisitor_offset_table, semanal_shared___HasPlaceholders_type_visitor___TypeVisitor_offset_table_scratch, sizeof(semanal_shared___HasPlaceholders_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem semanal_shared___HasPlaceholders_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)semanal_shared___HasPlaceholders_type_visitor___SyntheticTypeVisitor_trait_vtable, (CPyVTableItem)semanal_shared___HasPlaceholders_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)semanal_shared___HasPlaceholders_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)semanal_shared___HasPlaceholders_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_semanal_shared___HasPlaceholders_____init__,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___reset,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_list,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_callable_argument,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_any,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_var,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_unpack_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_instance,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_semanal_shared___HasPlaceholders___visit_placeholder_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___query_types,
        (CPyVTableItem)CPyDef_semanal_shared___HasPlaceholders_____init__,
        (CPyVTableItem)CPyDef_semanal_shared___HasPlaceholders___visit_placeholder_type,
    };
    memcpy(semanal_shared___HasPlaceholders_vtable, semanal_shared___HasPlaceholders_vtable_scratch, sizeof(semanal_shared___HasPlaceholders_vtable));
    return 1;
}


static PyGetSetDef semanal_shared___HasPlaceholders_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef semanal_shared___HasPlaceholders_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_semanal_shared___HasPlaceholders_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_placeholder_type",
     (PyCFunction)CPyPy_semanal_shared___HasPlaceholders___visit_placeholder_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_shared___HasPlaceholders_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "HasPlaceholders",
    .tp_new = semanal_shared___HasPlaceholders_new,
    .tp_dealloc = (destructor)semanal_shared___HasPlaceholders_dealloc,
    .tp_traverse = (traverseproc)semanal_shared___HasPlaceholders_traverse,
    .tp_clear = (inquiry)semanal_shared___HasPlaceholders_clear,
    .tp_getset = semanal_shared___HasPlaceholders_getseters,
    .tp_methods = semanal_shared___HasPlaceholders_methods,
    .tp_init = semanal_shared___HasPlaceholders_init,
    .tp_members = semanal_shared___HasPlaceholders_members,
    .tp_basicsize = sizeof(mypy___semanal_shared___HasPlaceholdersObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___semanal_shared___HasPlaceholdersObject),
    .tp_weaklistoffset = sizeof(mypy___semanal_shared___HasPlaceholdersObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_semanal_shared___HasPlaceholders_template = &CPyType_semanal_shared___HasPlaceholders_template_;

static PyObject *
semanal_shared___HasPlaceholders_setup(PyTypeObject *type)
{
    mypy___semanal_shared___HasPlaceholdersObject *self;
    self = (mypy___semanal_shared___HasPlaceholdersObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_shared___HasPlaceholders_vtable + 6;
    self->_strategy = CPY_INT_TAG;
    self->_default = 2;
    self->_skip_alias_target = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_shared___HasPlaceholders(void)
{
    PyObject *self = semanal_shared___HasPlaceholders_setup(CPyType_semanal_shared___HasPlaceholders);
    if (self == NULL)
        return NULL;
    char res = CPyDef_semanal_shared___HasPlaceholders_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyMethodDef semanal_sharedmodule_methods[] = {
    {"set_callable_name", (PyCFunction)CPyPy_semanal_shared___set_callable_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"calculate_tuple_fallback", (PyCFunction)CPyPy_semanal_shared___calculate_tuple_fallback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"paramspec_args", (PyCFunction)CPyPy_semanal_shared___paramspec_args, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"paramspec_kwargs", (PyCFunction)CPyPy_semanal_shared___paramspec_kwargs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"has_placeholder", (PyCFunction)CPyPy_semanal_shared___has_placeholder, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_dataclass_transform_spec", (PyCFunction)CPyPy_semanal_shared___find_dataclass_transform_spec, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"require_bool_literal_argument", (PyCFunction)CPyPy_semanal_shared___require_bool_literal_argument, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"parse_bool", (PyCFunction)CPyPy_semanal_shared___parse_bool, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef semanal_sharedmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.semanal_shared",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    semanal_sharedmodule_methods
};

PyObject *CPyInit_mypy___semanal_shared(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___semanal_shared_internal) {
        Py_INCREF(CPyModule_mypy___semanal_shared_internal);
        return CPyModule_mypy___semanal_shared_internal;
    }
    CPyModule_mypy___semanal_shared_internal = PyModule_Create(&semanal_sharedmodule);
    if (unlikely(CPyModule_mypy___semanal_shared_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___semanal_shared_internal, "__name__");
    CPyStatic_semanal_shared___globals = PyModule_GetDict(CPyModule_mypy___semanal_shared_internal);
    if (unlikely(CPyStatic_semanal_shared___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_semanal_shared_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___semanal_shared_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___semanal_shared_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_semanal_shared___ALLOW_INCOMPATIBLE_OVERRIDE.f0);
    CPy_XDECREF(CPyStatic_semanal_shared___ALLOW_INCOMPATIBLE_OVERRIDE.f1);
    CPy_XDECREF(CPyStatic_semanal_shared___ALLOW_INCOMPATIBLE_OVERRIDE.f2);
    CPyStatic_semanal_shared___ALLOW_INCOMPATIBLE_OVERRIDE = (tuple_T3OOO) { NULL, NULL, NULL };
    Py_CLEAR(CPyType_semanal_shared___SemanticAnalyzerCoreInterface);
    Py_CLEAR(CPyType_semanal_shared___SemanticAnalyzerInterface);
    Py_CLEAR(CPyType_semanal_shared____NamedTypeCallback);
    Py_CLEAR(CPyType_semanal_shared___HasPlaceholders);
    return NULL;
}

PyObject *CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___lookup_qualified(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_ctx, char cpy_r_suppress_errors) {
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
        CPy_AddTraceback("mypy/semanal_shared.py", "lookup_qualified", 74, CPyStatic_semanal_shared___globals);
        goto CPyL5;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "lookup_qualified", 74, CPyStatic_semanal_shared___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___lookup_qualified(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerCoreInterface", obj_self); 
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
    PyObject *retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___lookup_qualified(arg_self, arg_name, arg_ctx, arg_suppress_errors);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "lookup_qualified", 71, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___lookup_fully_qualified(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "lookup_fully_qualified", 78, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "lookup_fully_qualified", 78, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___lookup_fully_qualified(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerCoreInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___lookup_fully_qualified(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "lookup_fully_qualified", 77, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___lookup_fully_qualified_or_none(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "lookup_fully_qualified_or_none", 82, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "lookup_fully_qualified_or_none", 82, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___lookup_fully_qualified_or_none(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerCoreInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___lookup_fully_qualified_or_none(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "lookup_fully_qualified_or_none", 81, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___fail(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_ctx, char cpy_r_serious, char cpy_r_blocker, PyObject *cpy_r_code) {
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
        CPy_AddTraceback("mypy/semanal_shared.py", "fail", 94, CPyStatic_semanal_shared___globals);
        goto CPyL9;
    }
    CPy_Raise(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "fail", 94, CPyStatic_semanal_shared___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerCoreInterface", obj_self); 
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
        goto __LL6129;
    }
    if (PyObject_TypeCheck(obj_code, CPyType_errorcodes___ErrorCode))
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL6129;
    if (obj_code == Py_None)
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL6129;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", obj_code); 
    goto fail;
__LL6129: ;
    char retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___fail(arg_self, arg_msg, arg_ctx, arg_serious, arg_blocker, arg_code);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "fail", 85, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___note(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_ctx, PyObject *cpy_r_code) {
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
        CPy_AddTraceback("mypy/semanal_shared.py", "note", 98, CPyStatic_semanal_shared___globals);
        goto CPyL5;
    }
    CPy_Raise(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "note", 98, CPyStatic_semanal_shared___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___note(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "ctx", "code", 0};
    static CPyArg_Parser parser = {"OO|$O:note", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_ctx;
    PyObject *obj_code = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_msg, &obj_ctx, &obj_code)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerCoreInterface", obj_self); 
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
        goto __LL6130;
    }
    if (PyObject_TypeCheck(obj_code, CPyType_errorcodes___ErrorCode))
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL6130;
    if (obj_code == Py_None)
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL6130;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", obj_code); 
    goto fail;
__LL6130: ;
    char retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___note(arg_self, arg_msg, arg_ctx, arg_code);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "note", 97, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___incomplete_feature_enabled(PyObject *cpy_r_self, PyObject *cpy_r_feature, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "incomplete_feature_enabled", 102, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "incomplete_feature_enabled", 102, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___incomplete_feature_enabled(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"feature", "ctx", 0};
    static CPyArg_Parser parser = {"OO:incomplete_feature_enabled", kwlist, 0};
    PyObject *obj_feature;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_feature, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerCoreInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_feature;
    if (likely(PyUnicode_Check(obj_feature)))
        arg_feature = obj_feature;
    else {
        CPy_TypeError("str", obj_feature); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    char retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___incomplete_feature_enabled(arg_self, arg_feature, arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "incomplete_feature_enabled", 101, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___record_incomplete_ref(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "record_incomplete_ref", 106, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "record_incomplete_ref", 106, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___record_incomplete_ref(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":record_incomplete_ref", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerCoreInterface", obj_self); 
        goto fail;
    }
    char retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___record_incomplete_ref(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "record_incomplete_ref", 105, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___defer(PyObject *cpy_r_self, PyObject *cpy_r_debug_context, char cpy_r_force_progress) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    if (cpy_r_debug_context != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_debug_context = cpy_r_r0;
    CPy_DECREF(cpy_r_debug_context);
CPyL2: ;
    if (cpy_r_force_progress != 2) goto CPyL4;
    cpy_r_force_progress = 0;
CPyL4: ;
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "defer", 110, CPyStatic_semanal_shared___globals);
        goto CPyL7;
    }
    CPy_Raise(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "defer", 110, CPyStatic_semanal_shared___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___defer(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"debug_context", "force_progress", 0};
    static CPyArg_Parser parser = {"|OO:defer", kwlist, 0};
    PyObject *obj_debug_context = NULL;
    PyObject *obj_force_progress = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_debug_context, &obj_force_progress)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerCoreInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_debug_context;
    if (obj_debug_context == NULL) {
        arg_debug_context = NULL;
        goto __LL6131;
    }
    if (PyObject_TypeCheck(obj_debug_context, CPyType_nodes___Context))
        arg_debug_context = obj_debug_context;
    else {
        arg_debug_context = NULL;
    }
    if (arg_debug_context != NULL) goto __LL6131;
    if (obj_debug_context == Py_None)
        arg_debug_context = obj_debug_context;
    else {
        arg_debug_context = NULL;
    }
    if (arg_debug_context != NULL) goto __LL6131;
    CPy_TypeError("mypy.nodes.Context or None", obj_debug_context); 
    goto fail;
__LL6131: ;
    char arg_force_progress;
    if (obj_force_progress == NULL) {
        arg_force_progress = 2;
    } else if (unlikely(!PyBool_Check(obj_force_progress))) {
        CPy_TypeError("bool", obj_force_progress); goto fail;
    } else
        arg_force_progress = obj_force_progress == Py_True;
    char retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___defer(arg_self, arg_debug_context, arg_force_progress);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "defer", 109, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___is_incomplete_namespace(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "is_incomplete_namespace", 115, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "is_incomplete_namespace", 115, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___is_incomplete_namespace(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:is_incomplete_namespace", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerCoreInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    char retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___is_incomplete_namespace(arg_self, arg_fullname);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "is_incomplete_namespace", 113, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___final_iteration(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "final_iteration", 121, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "final_iteration", 121, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___final_iteration(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerCoreInterface", obj_self); 
        goto fail;
    }
    char retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___final_iteration(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "final_iteration", 119, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___is_future_flag_set(PyObject *cpy_r_self, PyObject *cpy_r_flag) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "is_future_flag_set", 126, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "is_future_flag_set", 126, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___is_future_flag_set(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"flag", 0};
    static CPyArg_Parser parser = {"O:is_future_flag_set", kwlist, 0};
    PyObject *obj_flag;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_flag)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerCoreInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_flag;
    if (likely(PyUnicode_Check(obj_flag)))
        arg_flag = obj_flag;
    else {
        CPy_TypeError("str", obj_flag); 
        goto fail;
    }
    char retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___is_future_flag_set(arg_self, arg_flag);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "is_future_flag_set", 124, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___is_stub_file(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "is_stub_file", 131, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "is_stub_file", 131, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___is_stub_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerCoreInterface", obj_self); 
        goto fail;
    }
    char retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___is_stub_file(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "is_stub_file", 130, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___is_func_scope(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "is_func_scope", 135, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "is_func_scope", 135, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___is_func_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_func_scope", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerCoreInterface", obj_self); 
        goto fail;
    }
    char retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___is_func_scope(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "is_func_scope", 134, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___type(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "type", 140, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "type", 140, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerCoreInterface___type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":type", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerCoreInterface", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_shared___SemanticAnalyzerCoreInterface___type(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "type", 139, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___SemanticAnalyzerInterface___lookup(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_ctx, char cpy_r_suppress_errors) {
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
        CPy_AddTraceback("mypy/semanal_shared.py", "lookup", 160, CPyStatic_semanal_shared___globals);
        goto CPyL5;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "lookup", 160, CPyStatic_semanal_shared___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___lookup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "ctx", "suppress_errors", 0};
    static CPyArg_Parser parser = {"OO|O:lookup", kwlist, 0};
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
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
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
    PyObject *retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___lookup(arg_self, arg_name, arg_ctx, arg_suppress_errors);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "lookup", 157, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___SemanticAnalyzerInterface___named_type(PyObject *cpy_r_self, PyObject *cpy_r_fullname, PyObject *cpy_r_args) {
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
        CPy_AddTraceback("mypy/semanal_shared.py", "named_type", 164, CPyStatic_semanal_shared___globals);
        goto CPyL5;
    }
    CPy_Raise(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "named_type", 164, CPyStatic_semanal_shared___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___named_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
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
        goto __LL6132;
    }
    if (PyList_Check(obj_args))
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL6132;
    if (obj_args == Py_None)
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL6132;
    CPy_TypeError("list or None", obj_args); 
    goto fail;
__LL6132: ;
    PyObject *retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___named_type(arg_self, arg_fullname, arg_args);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "named_type", 163, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___SemanticAnalyzerInterface___named_type_or_none(PyObject *cpy_r_self, PyObject *cpy_r_fullname, PyObject *cpy_r_args) {
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
        CPy_AddTraceback("mypy/semanal_shared.py", "named_type_or_none", 168, CPyStatic_semanal_shared___globals);
        goto CPyL5;
    }
    CPy_Raise(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "named_type_or_none", 168, CPyStatic_semanal_shared___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___named_type_or_none(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
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
        goto __LL6133;
    }
    if (PyList_Check(obj_args))
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL6133;
    if (obj_args == Py_None)
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL6133;
    CPy_TypeError("list or None", obj_args); 
    goto fail;
__LL6133: ;
    PyObject *retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___named_type_or_none(arg_self, arg_fullname, arg_args);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "named_type_or_none", 167, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerInterface___accept(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "accept", 172, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "accept", 172, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___Node)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Node", obj_node); 
        goto fail;
    }
    char retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___accept(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "accept", 171, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___SemanticAnalyzerInterface___anal_type(PyObject *cpy_r_self, PyObject *cpy_r_t, PyObject *cpy_r_tvar_scope, char cpy_r_allow_tuple_literal, char cpy_r_allow_unbound_tvars, char cpy_r_allow_required, char cpy_r_allow_placeholder, char cpy_r_report_invalid_types, PyObject *cpy_r_prohibit_self_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
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
    if (cpy_r_allow_required != 2) goto CPyL8;
    cpy_r_allow_required = 0;
CPyL8: ;
    if (cpy_r_allow_placeholder != 2) goto CPyL10;
    cpy_r_allow_placeholder = 0;
CPyL10: ;
    if (cpy_r_report_invalid_types != 2) goto CPyL12;
    cpy_r_report_invalid_types = 1;
CPyL12: ;
    if (cpy_r_prohibit_self_type != NULL) goto CPyL14;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_prohibit_self_type = cpy_r_r1;
    CPy_DECREF(cpy_r_prohibit_self_type);
CPyL14: ;
    cpy_r_r2 = CPyModule_builtins;
    cpy_r_r3 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "anal_type", 187, CPyStatic_semanal_shared___globals);
        goto CPyL17;
    }
    CPy_Raise(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "anal_type", 187, CPyStatic_semanal_shared___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___anal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", "tvar_scope", "allow_tuple_literal", "allow_unbound_tvars", "allow_required", "allow_placeholder", "report_invalid_types", "prohibit_self_type", 0};
    static CPyArg_Parser parser = {"O|$OOOOOOO:anal_type", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_tvar_scope = NULL;
    PyObject *obj_allow_tuple_literal = NULL;
    PyObject *obj_allow_unbound_tvars = NULL;
    PyObject *obj_allow_required = NULL;
    PyObject *obj_allow_placeholder = NULL;
    PyObject *obj_report_invalid_types = NULL;
    PyObject *obj_prohibit_self_type = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_t, &obj_tvar_scope, &obj_allow_tuple_literal, &obj_allow_unbound_tvars, &obj_allow_required, &obj_allow_placeholder, &obj_report_invalid_types, &obj_prohibit_self_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
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
        goto __LL6134;
    }
    if (Py_TYPE(obj_tvar_scope) == CPyType_tvar_scope___TypeVarLikeScope)
        arg_tvar_scope = obj_tvar_scope;
    else {
        arg_tvar_scope = NULL;
    }
    if (arg_tvar_scope != NULL) goto __LL6134;
    if (obj_tvar_scope == Py_None)
        arg_tvar_scope = obj_tvar_scope;
    else {
        arg_tvar_scope = NULL;
    }
    if (arg_tvar_scope != NULL) goto __LL6134;
    CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope or None", obj_tvar_scope); 
    goto fail;
__LL6134: ;
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
    char arg_allow_required;
    if (obj_allow_required == NULL) {
        arg_allow_required = 2;
    } else if (unlikely(!PyBool_Check(obj_allow_required))) {
        CPy_TypeError("bool", obj_allow_required); goto fail;
    } else
        arg_allow_required = obj_allow_required == Py_True;
    char arg_allow_placeholder;
    if (obj_allow_placeholder == NULL) {
        arg_allow_placeholder = 2;
    } else if (unlikely(!PyBool_Check(obj_allow_placeholder))) {
        CPy_TypeError("bool", obj_allow_placeholder); goto fail;
    } else
        arg_allow_placeholder = obj_allow_placeholder == Py_True;
    char arg_report_invalid_types;
    if (obj_report_invalid_types == NULL) {
        arg_report_invalid_types = 2;
    } else if (unlikely(!PyBool_Check(obj_report_invalid_types))) {
        CPy_TypeError("bool", obj_report_invalid_types); goto fail;
    } else
        arg_report_invalid_types = obj_report_invalid_types == Py_True;
    PyObject *arg_prohibit_self_type;
    if (obj_prohibit_self_type == NULL) {
        arg_prohibit_self_type = NULL;
        goto __LL6135;
    }
    if (PyUnicode_Check(obj_prohibit_self_type))
        arg_prohibit_self_type = obj_prohibit_self_type;
    else {
        arg_prohibit_self_type = NULL;
    }
    if (arg_prohibit_self_type != NULL) goto __LL6135;
    if (obj_prohibit_self_type == Py_None)
        arg_prohibit_self_type = obj_prohibit_self_type;
    else {
        arg_prohibit_self_type = NULL;
    }
    if (arg_prohibit_self_type != NULL) goto __LL6135;
    CPy_TypeError("str or None", obj_prohibit_self_type); 
    goto fail;
__LL6135: ;
    PyObject *retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___anal_type(arg_self, arg_t, arg_tvar_scope, arg_allow_tuple_literal, arg_allow_unbound_tvars, arg_allow_required, arg_allow_placeholder, arg_report_invalid_types, arg_prohibit_self_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "anal_type", 175, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___SemanticAnalyzerInterface___get_and_bind_all_tvars(PyObject *cpy_r_self, PyObject *cpy_r_type_exprs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "get_and_bind_all_tvars", 191, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "get_and_bind_all_tvars", 191, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___get_and_bind_all_tvars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"type_exprs", 0};
    static CPyArg_Parser parser = {"O:get_and_bind_all_tvars", kwlist, 0};
    PyObject *obj_type_exprs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_type_exprs)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_type_exprs;
    if (likely(PyList_Check(obj_type_exprs)))
        arg_type_exprs = obj_type_exprs;
    else {
        CPy_TypeError("list", obj_type_exprs); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___get_and_bind_all_tvars(arg_self, arg_type_exprs);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "get_and_bind_all_tvars", 190, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___SemanticAnalyzerInterface___basic_new_typeinfo(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_basetype_or_fallback, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "basic_new_typeinfo", 195, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "basic_new_typeinfo", 195, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___basic_new_typeinfo(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
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
    PyObject *retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___basic_new_typeinfo(arg_self, arg_name, arg_basetype_or_fallback, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "basic_new_typeinfo", 194, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerInterface___schedule_patch(PyObject *cpy_r_self, CPyTagged cpy_r_priority, PyObject *cpy_r_fn) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "schedule_patch", 199, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "schedule_patch", 199, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___schedule_patch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"priority", "fn", 0};
    static CPyArg_Parser parser = {"OO:schedule_patch", kwlist, 0};
    PyObject *obj_priority;
    PyObject *obj_fn;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_priority, &obj_fn)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
        goto fail;
    }
    CPyTagged arg_priority;
    if (likely(PyLong_Check(obj_priority)))
        arg_priority = CPyTagged_BorrowFromObject(obj_priority);
    else {
        CPy_TypeError("int", obj_priority); goto fail;
    }
    PyObject *arg_fn = obj_fn;
    char retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___schedule_patch(arg_self, arg_priority, arg_fn);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "schedule_patch", 198, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerInterface___add_symbol_table_node(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_stnode) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "add_symbol_table_node", 204, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "add_symbol_table_node", 204, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___add_symbol_table_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
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
    char retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___add_symbol_table_node(arg_self, arg_name, arg_stnode);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "add_symbol_table_node", 202, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___SemanticAnalyzerInterface___current_symbol_table(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "current_symbol_table", 212, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "current_symbol_table", 212, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___current_symbol_table(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":current_symbol_table", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___current_symbol_table(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "current_symbol_table", 207, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerInterface___add_symbol(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_node, PyObject *cpy_r_context, char cpy_r_module_public, char cpy_r_module_hidden, char cpy_r_can_defer) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    if (cpy_r_module_public != 2) goto CPyL2;
    cpy_r_module_public = 1;
CPyL2: ;
    if (cpy_r_module_hidden != 2) goto CPyL4;
    cpy_r_module_hidden = 0;
CPyL4: ;
    if (cpy_r_can_defer != 2) goto CPyL6;
    cpy_r_can_defer = 1;
CPyL6: ;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "add_symbol", 225, CPyStatic_semanal_shared___globals);
        goto CPyL9;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "add_symbol", 225, CPyStatic_semanal_shared___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___add_symbol(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "node", "context", "module_public", "module_hidden", "can_defer", 0};
    static CPyArg_Parser parser = {"OOO|OOO:add_symbol", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_node;
    PyObject *obj_context;
    PyObject *obj_module_public = NULL;
    PyObject *obj_module_hidden = NULL;
    PyObject *obj_can_defer = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_node, &obj_context, &obj_module_public, &obj_module_hidden, &obj_can_defer)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___SymbolNode)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_node); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    char arg_module_public;
    if (obj_module_public == NULL) {
        arg_module_public = 2;
    } else if (unlikely(!PyBool_Check(obj_module_public))) {
        CPy_TypeError("bool", obj_module_public); goto fail;
    } else
        arg_module_public = obj_module_public == Py_True;
    char arg_module_hidden;
    if (obj_module_hidden == NULL) {
        arg_module_hidden = 2;
    } else if (unlikely(!PyBool_Check(obj_module_hidden))) {
        CPy_TypeError("bool", obj_module_hidden); goto fail;
    } else
        arg_module_hidden = obj_module_hidden == Py_True;
    char arg_can_defer;
    if (obj_can_defer == NULL) {
        arg_can_defer = 2;
    } else if (unlikely(!PyBool_Check(obj_can_defer))) {
        CPy_TypeError("bool", obj_can_defer); goto fail;
    } else
        arg_can_defer = obj_can_defer == Py_True;
    char retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___add_symbol(arg_self, arg_name, arg_node, arg_context, arg_module_public, arg_module_hidden, arg_can_defer);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "add_symbol", 215, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerInterface___add_symbol_skip_local(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "add_symbol_skip_local", 235, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "add_symbol_skip_local", 235, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___add_symbol_skip_local(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "node", 0};
    static CPyArg_Parser parser = {"OO:add_symbol_skip_local", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___SymbolNode)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_node); 
        goto fail;
    }
    char retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___add_symbol_skip_local(arg_self, arg_name, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "add_symbol_skip_local", 228, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___SemanticAnalyzerInterface___parse_bool(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "parse_bool", 239, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "parse_bool", 239, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___parse_bool(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___parse_bool(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "parse_bool", 238, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___SemanticAnalyzerInterface___qualified_name(PyObject *cpy_r_self, PyObject *cpy_r_n) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "qualified_name", 243, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "qualified_name", 243, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___qualified_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_n;
    if (likely(PyUnicode_Check(obj_n)))
        arg_n = obj_n;
    else {
        CPy_TypeError("str", obj_n); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___qualified_name(arg_self, arg_n);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "qualified_name", 242, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerInterface___is_typeshed_stub_file(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "is_typeshed_stub_file", 248, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "is_typeshed_stub_file", 248, CPyStatic_semanal_shared___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___is_typeshed_stub_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_typeshed_stub_file", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
        goto fail;
    }
    char retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___is_typeshed_stub_file(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "is_typeshed_stub_file", 247, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___SemanticAnalyzerInterface___process_placeholder(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_kind, PyObject *cpy_r_ctx, char cpy_r_force_progress) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    if (cpy_r_force_progress != 2) goto CPyL2;
    cpy_r_force_progress = 0;
CPyL2: ;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "process_placeholder", 254, CPyStatic_semanal_shared___globals);
        goto CPyL5;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "process_placeholder", 254, CPyStatic_semanal_shared___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___SemanticAnalyzerInterface___process_placeholder(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "kind", "ctx", "force_progress", 0};
    static CPyArg_Parser parser = {"OOO|O:process_placeholder", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_kind;
    PyObject *obj_ctx;
    PyObject *obj_force_progress = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_kind, &obj_ctx, &obj_force_progress)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (PyUnicode_Check(obj_name))
        arg_name = obj_name;
    else {
        arg_name = NULL;
    }
    if (arg_name != NULL) goto __LL6136;
    if (obj_name == Py_None)
        arg_name = obj_name;
    else {
        arg_name = NULL;
    }
    if (arg_name != NULL) goto __LL6136;
    CPy_TypeError("str or None", obj_name); 
    goto fail;
__LL6136: ;
    PyObject *arg_kind;
    if (likely(PyUnicode_Check(obj_kind)))
        arg_kind = obj_kind;
    else {
        CPy_TypeError("str", obj_kind); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    char arg_force_progress;
    if (obj_force_progress == NULL) {
        arg_force_progress = 2;
    } else if (unlikely(!PyBool_Check(obj_force_progress))) {
        CPy_TypeError("bool", obj_force_progress); goto fail;
    } else
        arg_force_progress = obj_force_progress == Py_True;
    char retval = CPyDef_semanal_shared___SemanticAnalyzerInterface___process_placeholder(arg_self, arg_name, arg_kind, arg_ctx, arg_force_progress);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "process_placeholder", 251, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___set_callable_name(PyObject *cpy_r_sig, PyObject *cpy_r_fdef) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T3OOO cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_class_name;
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
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_sig);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "set_callable_name", 258, CPyStatic_semanal_shared___globals);
        goto CPyL28;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "set_callable_name", 258, CPyStatic_semanal_shared___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL28;
    }
    cpy_r_sig = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_sig)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL5;
CPyL4: ;
    cpy_r_r7 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_sig)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    cpy_r_r6 = cpy_r_r10;
CPyL5: ;
    if (!cpy_r_r6) goto CPyL26;
    cpy_r_r11 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_info;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "set_callable_name", 260, CPyStatic_semanal_shared___globals);
        goto CPyL29;
    }
    if (!cpy_r_r12) goto CPyL22;
    cpy_r_r13 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_info;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPY_GET_ATTR(cpy_r_r13, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "set_callable_name", 261, CPyStatic_semanal_shared___globals);
        goto CPyL29;
    }
CPyL9: ;
    cpy_r_r15 = CPyStatic_types___TPDICT_FB_NAMES;
    if (unlikely(cpy_r_r15.f0 == NULL)) {
        goto CPyL30;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TPDICT_FB_NAMES\" was not set");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "set_callable_name", 261, CPyStatic_semanal_shared___globals);
        goto CPyL28;
    }
    CPy_Unreachable();
CPyL12: ;
    CPy_INCREF(cpy_r_r15.f0);
    CPy_INCREF(cpy_r_r15.f1);
    CPy_INCREF(cpy_r_r15.f2);
    cpy_r_r17 = PyTuple_New(3);
    if (unlikely(cpy_r_r17 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6137 = cpy_r_r15.f0;
    PyTuple_SET_ITEM(cpy_r_r17, 0, __tmp6137);
    PyObject *__tmp6138 = cpy_r_r15.f1;
    PyTuple_SET_ITEM(cpy_r_r17, 1, __tmp6138);
    PyObject *__tmp6139 = cpy_r_r15.f2;
    PyTuple_SET_ITEM(cpy_r_r17, 2, __tmp6139);
    cpy_r_r18 = PySequence_Contains(cpy_r_r17, cpy_r_r14);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "set_callable_name", 261, CPyStatic_semanal_shared___globals);
        goto CPyL29;
    }
    cpy_r_r20 = cpy_r_r18;
    if (!cpy_r_r20) goto CPyL15;
    cpy_r_r21 = CPyStatics[514]; /* 'TypedDict' */
    CPy_INCREF(cpy_r_r21);
    cpy_r_class_name = cpy_r_r21;
    goto CPyL17;
CPyL15: ;
    cpy_r_r22 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_info;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_r22, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "set_callable_name", 265, CPyStatic_semanal_shared___globals);
        goto CPyL29;
    }
CPyL16: ;
    cpy_r_class_name = cpy_r_r23;
CPyL17: ;
    if (likely((Py_TYPE(cpy_r_sig) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_sig) == CPyType_types___Overloaded)))
        cpy_r_r24 = cpy_r_sig;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "set_callable_name", 266, CPyStatic_semanal_shared___globals, "mypy.types.FunctionLike", cpy_r_sig);
        goto CPyL31;
    }
    cpy_r_r25 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "set_callable_name", 266, CPyStatic_semanal_shared___globals);
        goto CPyL32;
    }
CPyL19: ;
    cpy_r_r26 = CPyStatics[3379]; /* ' of ' */
    cpy_r_r27 = CPyStr_Build(3, cpy_r_r25, cpy_r_r26, cpy_r_class_name);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_class_name);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "set_callable_name", 266, CPyStatic_semanal_shared___globals);
        goto CPyL33;
    }
    cpy_r_r28 = CPY_GET_METHOD(cpy_r_r24, CPyType_types___FunctionLike, 19, mypy___types___FunctionLikeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r24, cpy_r_r27); /* with_name */
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "set_callable_name", 266, CPyStatic_semanal_shared___globals);
        goto CPyL28;
    }
    return cpy_r_r28;
CPyL22: ;
    if (likely((Py_TYPE(cpy_r_sig) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_sig) == CPyType_types___Overloaded)))
        cpy_r_r29 = cpy_r_sig;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "set_callable_name", 268, CPyStatic_semanal_shared___globals, "mypy.types.FunctionLike", cpy_r_sig);
        goto CPyL28;
    }
    cpy_r_r30 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "set_callable_name", 268, CPyStatic_semanal_shared___globals);
        goto CPyL34;
    }
CPyL24: ;
    cpy_r_r31 = CPY_GET_METHOD(cpy_r_r29, CPyType_types___FunctionLike, 19, mypy___types___FunctionLikeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r29, cpy_r_r30); /* with_name */
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "set_callable_name", 268, CPyStatic_semanal_shared___globals);
        goto CPyL28;
    }
    return cpy_r_r31;
CPyL26: ;
    if (likely(PyObject_TypeCheck(cpy_r_sig, CPyType_types___ProperType)))
        cpy_r_r32 = cpy_r_sig;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "set_callable_name", 270, CPyStatic_semanal_shared___globals, "mypy.types.ProperType", cpy_r_sig);
        goto CPyL28;
    }
    return cpy_r_r32;
CPyL28: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL29: ;
    CPy_DecRef(cpy_r_sig);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_sig);
    CPy_DecRef(cpy_r_r14);
    goto CPyL10;
CPyL31: ;
    CPy_DecRef(cpy_r_class_name);
    goto CPyL28;
CPyL32: ;
    CPy_DecRef(cpy_r_class_name);
    CPy_DecRef(cpy_r_r24);
    goto CPyL28;
CPyL33: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL28;
CPyL34: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL28;
}

PyObject *CPyPy_semanal_shared___set_callable_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"sig", "fdef", 0};
    static CPyArg_Parser parser = {"OO:set_callable_name", kwlist, 0};
    PyObject *obj_sig;
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sig, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_sig;
    if (likely(PyObject_TypeCheck(obj_sig, CPyType_types___Type)))
        arg_sig = obj_sig;
    else {
        CPy_TypeError("mypy.types.Type", obj_sig); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_shared___set_callable_name(arg_sig, arg_fdef);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "set_callable_name", 257, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___calculate_tuple_fallback(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    tuple_T1O cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    cpy_r_r0 = ((mypy___types___TupleTypeObject *)cpy_r_typ)->_partial_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_fallback = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___InstanceObject *)cpy_r_fallback)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_r1, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "calculate_tuple_fallback", 288, CPyStatic_semanal_shared___globals);
        goto CPyL15;
    }
CPyL1: ;
    cpy_r_r3 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL4;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "calculate_tuple_fallback", 288, CPyStatic_semanal_shared___globals);
        goto CPyL15;
    }
CPyL4: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (cpy_r_r9) {
        goto CPyL7;
    } else
        goto CPyL16;
CPyL5: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "calculate_tuple_fallback", 288, CPyStatic_semanal_shared___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r11 = ((mypy___types___TupleTypeObject *)cpy_r_typ)->_items;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = PySequence_List(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "calculate_tuple_fallback", 289, CPyStatic_semanal_shared___globals);
        goto CPyL15;
    }
    cpy_r_r13 = CPyDef_join___join_type_list(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "calculate_tuple_fallback", 289, CPyStatic_semanal_shared___globals);
        goto CPyL15;
    }
    cpy_r_r14.f0 = cpy_r_r13;
    CPy_INCREF(cpy_r_r14.f0);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = ((mypy___types___InstanceObject *)cpy_r_fallback)->_args;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPySequenceTuple_GetSlice(cpy_r_r15, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "calculate_tuple_fallback", 289, CPyStatic_semanal_shared___globals);
        goto CPyL17;
    }
    if (likely(PyTuple_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "calculate_tuple_fallback", 289, CPyStatic_semanal_shared___globals, "tuple", cpy_r_r16);
        goto CPyL17;
    }
    cpy_r_r18 = PyTuple_New(1);
    if (unlikely(cpy_r_r18 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6140 = cpy_r_r14.f0;
    PyTuple_SET_ITEM(cpy_r_r18, 0, __tmp6140);
    cpy_r_r19 = PyNumber_Add(cpy_r_r18, cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "calculate_tuple_fallback", 289, CPyStatic_semanal_shared___globals);
        goto CPyL15;
    }
    if (likely(PyTuple_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "calculate_tuple_fallback", 289, CPyStatic_semanal_shared___globals, "tuple", cpy_r_r19);
        goto CPyL15;
    }
    CPy_DECREF(((mypy___types___InstanceObject *)cpy_r_fallback)->_args);
    ((mypy___types___InstanceObject *)cpy_r_fallback)->_args = cpy_r_r20;
    CPy_DECREF(cpy_r_fallback);
    return 1;
CPyL14: ;
    cpy_r_r22 = 2;
    return cpy_r_r22;
CPyL15: ;
    CPy_DecRef(cpy_r_fallback);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_fallback);
    goto CPyL5;
CPyL17: ;
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r14.f0);
    goto CPyL14;
}

PyObject *CPyPy_semanal_shared___calculate_tuple_fallback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:calculate_tuple_fallback", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TupleType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_semanal_shared___calculate_tuple_fallback(arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "calculate_tuple_fallback", 273, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared____NamedTypeCallback_____call__(PyObject *cpy_r_self, PyObject *cpy_r_fully_qualified_name, PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    if (cpy_r_args != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_args = cpy_r_r0;
    CPy_DECREF(cpy_r_args);
CPyL2: ;
    cpy_r_r1 = (PyObject *)&_Py_EllipsisObject;
    CPy_Unreachable();
}

PyObject *CPyPy_semanal_shared____NamedTypeCallback_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fully_qualified_name", "args", 0};
    static CPyArg_Parser parser = {"O|O:__call__", kwlist, 0};
    PyObject *obj_fully_qualified_name;
    PyObject *obj_args = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_fully_qualified_name, &obj_args)) {
        return NULL;
    }
    PyObject *arg_self;
    if (PyObject_TypeCheck(obj_self, CPyType_semanal_shared____NamedTypeCallback))
        arg_self = obj_self;
    else {
        arg_self = NULL;
    }
    if (arg_self != NULL) goto __LL6141;
    arg_self = obj_self;
    if (arg_self != NULL) goto __LL6141;
    CPy_TypeError("union[mypy.semanal_shared._NamedTypeCallback, object]", obj_self); 
    goto fail;
__LL6141: ;
    PyObject *arg_fully_qualified_name;
    if (likely(PyUnicode_Check(obj_fully_qualified_name)))
        arg_fully_qualified_name = obj_fully_qualified_name;
    else {
        CPy_TypeError("str", obj_fully_qualified_name); 
        goto fail;
    }
    PyObject *arg_args;
    if (obj_args == NULL) {
        arg_args = NULL;
        goto __LL6142;
    }
    if (PyList_Check(obj_args))
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL6142;
    if (obj_args == Py_None)
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL6142;
    CPy_TypeError("list or None", obj_args); 
    goto fail;
__LL6142: ;
    PyObject *retval = CPyDef_semanal_shared____NamedTypeCallback_____call__(arg_self, arg_fully_qualified_name, arg_args);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "__call__", 293, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___paramspec_args(PyObject *cpy_r_name, PyObject *cpy_r_fullname, PyObject *cpy_r_id, PyObject *cpy_r_named_type_func, CPyTagged cpy_r_line, CPyTagged cpy_r_column, PyObject *cpy_r_prefix) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    if (cpy_r_line != CPY_INT_TAG) goto CPyL15;
    cpy_r_line = -2;
CPyL2: ;
    if (cpy_r_column != CPY_INT_TAG) goto CPyL16;
    cpy_r_column = -2;
CPyL4: ;
    if (cpy_r_prefix != NULL) goto CPyL17;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_prefix = cpy_r_r0;
CPyL6: ;
    cpy_r_r1 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r2 = CPyStatics[736]; /* 'builtins.object' */
    PyObject *cpy_r_r3[1] = {cpy_r_r2};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_named_type_func, cpy_r_r4, 1, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "paramspec_args", 312, CPyStatic_semanal_shared___globals);
        goto CPyL18;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "paramspec_args", 312, CPyStatic_semanal_shared___globals, "mypy.types.Instance", cpy_r_r5);
        goto CPyL18;
    }
    cpy_r_r7 = PyList_New(1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "paramspec_args", 312, CPyStatic_semanal_shared___globals);
        goto CPyL19;
    }
    cpy_r_r8 = (CPyPtr)&((PyListObject *)cpy_r_r7)->ob_item;
    cpy_r_r9 = *(CPyPtr *)cpy_r_r8;
    *(PyObject * *)cpy_r_r9 = cpy_r_r6;
    PyObject *cpy_r_r10[2] = {cpy_r_r1, cpy_r_r7};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_named_type_func, cpy_r_r11, 2, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "paramspec_args", 312, CPyStatic_semanal_shared___globals);
        goto CPyL20;
    }
    CPy_DECREF(cpy_r_r7);
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_types___Instance))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "paramspec_args", 312, CPyStatic_semanal_shared___globals, "mypy.types.Instance", cpy_r_r12);
        goto CPyL18;
    }
    cpy_r_r14 = NULL;
    cpy_r_r15 = NULL;
    cpy_r_r16 = CPY_INT_TAG;
    cpy_r_r17 = CPY_INT_TAG;
    cpy_r_r18 = CPyDef_types___AnyType(8, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "paramspec_args", 313, CPyStatic_semanal_shared___globals);
        goto CPyL21;
    }
    cpy_r_r19 = CPyDef_types___ParamSpecType(cpy_r_name, cpy_r_fullname, cpy_r_id, 2, cpy_r_r13, cpy_r_r18, cpy_r_line, cpy_r_column, cpy_r_prefix);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r18);
    CPyTagged_DECREF(cpy_r_line);
    CPyTagged_DECREF(cpy_r_column);
    CPy_DECREF(cpy_r_prefix);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "paramspec_args", 307, CPyStatic_semanal_shared___globals);
        goto CPyL14;
    }
    return cpy_r_r19;
CPyL14: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL15: ;
    CPyTagged_INCREF(cpy_r_line);
    goto CPyL2;
CPyL16: ;
    CPyTagged_INCREF(cpy_r_column);
    goto CPyL4;
CPyL17: ;
    CPy_INCREF(cpy_r_prefix);
    goto CPyL6;
CPyL18: ;
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_prefix);
    goto CPyL14;
CPyL19: ;
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r6);
    goto CPyL14;
CPyL20: ;
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r7);
    goto CPyL14;
CPyL21: ;
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r13);
    goto CPyL14;
}

PyObject *CPyPy_semanal_shared___paramspec_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "fullname", "id", "line", "column", "prefix", "named_type_func", 0};
    static CPyArg_Parser parser = {"OOO|$OOO@O:paramspec_args", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_fullname;
    PyObject *obj_id;
    PyObject *obj_named_type_func;
    PyObject *obj_line = NULL;
    PyObject *obj_column = NULL;
    PyObject *obj_prefix = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_name, &obj_fullname, &obj_id, &obj_line, &obj_column, &obj_prefix, &obj_named_type_func)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *arg_id;
    if (Py_TYPE(obj_id) == CPyType_types___TypeVarId)
        arg_id = obj_id;
    else {
        arg_id = NULL;
    }
    if (arg_id != NULL) goto __LL6143;
    if (PyLong_Check(obj_id))
        arg_id = obj_id;
    else {
        arg_id = NULL;
    }
    if (arg_id != NULL) goto __LL6143;
    CPy_TypeError("union[mypy.types.TypeVarId, int]", obj_id); 
    goto fail;
__LL6143: ;
    PyObject *arg_named_type_func;
    if (PyObject_TypeCheck(obj_named_type_func, CPyType_semanal_shared____NamedTypeCallback))
        arg_named_type_func = obj_named_type_func;
    else {
        arg_named_type_func = NULL;
    }
    if (arg_named_type_func != NULL) goto __LL6144;
    arg_named_type_func = obj_named_type_func;
    if (arg_named_type_func != NULL) goto __LL6144;
    CPy_TypeError("union[mypy.semanal_shared._NamedTypeCallback, object]", obj_named_type_func); 
    goto fail;
__LL6144: ;
    CPyTagged arg_line;
    if (obj_line == NULL) {
        arg_line = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    CPyTagged arg_column;
    if (obj_column == NULL) {
        arg_column = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_column)))
        arg_column = CPyTagged_BorrowFromObject(obj_column);
    else {
        CPy_TypeError("int", obj_column); goto fail;
    }
    PyObject *arg_prefix;
    if (obj_prefix == NULL) {
        arg_prefix = NULL;
        goto __LL6145;
    }
    if (Py_TYPE(obj_prefix) == CPyType_types___Parameters)
        arg_prefix = obj_prefix;
    else {
        arg_prefix = NULL;
    }
    if (arg_prefix != NULL) goto __LL6145;
    if (obj_prefix == Py_None)
        arg_prefix = obj_prefix;
    else {
        arg_prefix = NULL;
    }
    if (arg_prefix != NULL) goto __LL6145;
    CPy_TypeError("mypy.types.Parameters or None", obj_prefix); 
    goto fail;
__LL6145: ;
    PyObject *retval = CPyDef_semanal_shared___paramspec_args(arg_name, arg_fullname, arg_id, arg_named_type_func, arg_line, arg_column, arg_prefix);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "paramspec_args", 297, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___paramspec_kwargs(PyObject *cpy_r_name, PyObject *cpy_r_fullname, PyObject *cpy_r_id, PyObject *cpy_r_named_type_func, CPyTagged cpy_r_line, CPyTagged cpy_r_column, PyObject *cpy_r_prefix) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    if (cpy_r_line != CPY_INT_TAG) goto CPyL17;
    cpy_r_line = -2;
CPyL2: ;
    if (cpy_r_column != CPY_INT_TAG) goto CPyL18;
    cpy_r_column = -2;
CPyL4: ;
    if (cpy_r_prefix != NULL) goto CPyL19;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_prefix = cpy_r_r0;
CPyL6: ;
    cpy_r_r1 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r2 = CPyStatics[697]; /* 'builtins.str' */
    PyObject *cpy_r_r3[1] = {cpy_r_r2};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_named_type_func, cpy_r_r4, 1, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "paramspec_kwargs", 336, CPyStatic_semanal_shared___globals);
        goto CPyL20;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "paramspec_kwargs", 336, CPyStatic_semanal_shared___globals, "mypy.types.Instance", cpy_r_r5);
        goto CPyL20;
    }
    cpy_r_r7 = CPyStatics[736]; /* 'builtins.object' */
    PyObject *cpy_r_r8[1] = {cpy_r_r7};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_named_type_func, cpy_r_r9, 1, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "paramspec_kwargs", 336, CPyStatic_semanal_shared___globals);
        goto CPyL21;
    }
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_types___Instance))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "paramspec_kwargs", 336, CPyStatic_semanal_shared___globals, "mypy.types.Instance", cpy_r_r10);
        goto CPyL21;
    }
    cpy_r_r12 = PyList_New(2);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "paramspec_kwargs", 336, CPyStatic_semanal_shared___globals);
        goto CPyL22;
    }
    cpy_r_r13 = (CPyPtr)&((PyListObject *)cpy_r_r12)->ob_item;
    cpy_r_r14 = *(CPyPtr *)cpy_r_r13;
    *(PyObject * *)cpy_r_r14 = cpy_r_r6;
    cpy_r_r15 = cpy_r_r14 + 8;
    *(PyObject * *)cpy_r_r15 = cpy_r_r11;
    PyObject *cpy_r_r16[2] = {cpy_r_r1, cpy_r_r12};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_named_type_func, cpy_r_r17, 2, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "paramspec_kwargs", 335, CPyStatic_semanal_shared___globals);
        goto CPyL23;
    }
    CPy_DECREF(cpy_r_r12);
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_types___Instance))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "paramspec_kwargs", 335, CPyStatic_semanal_shared___globals, "mypy.types.Instance", cpy_r_r18);
        goto CPyL20;
    }
    cpy_r_r20 = NULL;
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPY_INT_TAG;
    cpy_r_r24 = CPyDef_types___AnyType(8, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "paramspec_kwargs", 338, CPyStatic_semanal_shared___globals);
        goto CPyL24;
    }
    cpy_r_r25 = CPyDef_types___ParamSpecType(cpy_r_name, cpy_r_fullname, cpy_r_id, 4, cpy_r_r19, cpy_r_r24, cpy_r_line, cpy_r_column, cpy_r_prefix);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r24);
    CPyTagged_DECREF(cpy_r_line);
    CPyTagged_DECREF(cpy_r_column);
    CPy_DECREF(cpy_r_prefix);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "paramspec_kwargs", 330, CPyStatic_semanal_shared___globals);
        goto CPyL16;
    }
    return cpy_r_r25;
CPyL16: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL17: ;
    CPyTagged_INCREF(cpy_r_line);
    goto CPyL2;
CPyL18: ;
    CPyTagged_INCREF(cpy_r_column);
    goto CPyL4;
CPyL19: ;
    CPy_INCREF(cpy_r_prefix);
    goto CPyL6;
CPyL20: ;
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_prefix);
    goto CPyL16;
CPyL21: ;
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r6);
    goto CPyL16;
CPyL22: ;
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r11);
    goto CPyL16;
CPyL23: ;
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r12);
    goto CPyL16;
CPyL24: ;
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r19);
    goto CPyL16;
}

PyObject *CPyPy_semanal_shared___paramspec_kwargs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "fullname", "id", "line", "column", "prefix", "named_type_func", 0};
    static CPyArg_Parser parser = {"OOO|$OOO@O:paramspec_kwargs", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_fullname;
    PyObject *obj_id;
    PyObject *obj_named_type_func;
    PyObject *obj_line = NULL;
    PyObject *obj_column = NULL;
    PyObject *obj_prefix = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_name, &obj_fullname, &obj_id, &obj_line, &obj_column, &obj_prefix, &obj_named_type_func)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *arg_id;
    if (Py_TYPE(obj_id) == CPyType_types___TypeVarId)
        arg_id = obj_id;
    else {
        arg_id = NULL;
    }
    if (arg_id != NULL) goto __LL6146;
    if (PyLong_Check(obj_id))
        arg_id = obj_id;
    else {
        arg_id = NULL;
    }
    if (arg_id != NULL) goto __LL6146;
    CPy_TypeError("union[mypy.types.TypeVarId, int]", obj_id); 
    goto fail;
__LL6146: ;
    PyObject *arg_named_type_func;
    if (PyObject_TypeCheck(obj_named_type_func, CPyType_semanal_shared____NamedTypeCallback))
        arg_named_type_func = obj_named_type_func;
    else {
        arg_named_type_func = NULL;
    }
    if (arg_named_type_func != NULL) goto __LL6147;
    arg_named_type_func = obj_named_type_func;
    if (arg_named_type_func != NULL) goto __LL6147;
    CPy_TypeError("union[mypy.semanal_shared._NamedTypeCallback, object]", obj_named_type_func); 
    goto fail;
__LL6147: ;
    CPyTagged arg_line;
    if (obj_line == NULL) {
        arg_line = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    CPyTagged arg_column;
    if (obj_column == NULL) {
        arg_column = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_column)))
        arg_column = CPyTagged_BorrowFromObject(obj_column);
    else {
        CPy_TypeError("int", obj_column); goto fail;
    }
    PyObject *arg_prefix;
    if (obj_prefix == NULL) {
        arg_prefix = NULL;
        goto __LL6148;
    }
    if (Py_TYPE(obj_prefix) == CPyType_types___Parameters)
        arg_prefix = obj_prefix;
    else {
        arg_prefix = NULL;
    }
    if (arg_prefix != NULL) goto __LL6148;
    if (obj_prefix == Py_None)
        arg_prefix = obj_prefix;
    else {
        arg_prefix = NULL;
    }
    if (arg_prefix != NULL) goto __LL6148;
    CPy_TypeError("mypy.types.Parameters or None", obj_prefix); 
    goto fail;
__LL6148: ;
    PyObject *retval = CPyDef_semanal_shared___paramspec_kwargs(arg_name, arg_fullname, arg_id, arg_named_type_func, arg_line, arg_column, arg_prefix);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "paramspec_kwargs", 320, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___HasPlaceholders_____init__(PyObject *cpy_r_self) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery_____init__(cpy_r_self, 0);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "__init__", 347, CPyStatic_semanal_shared___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_shared___HasPlaceholders_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_shared___HasPlaceholders))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.HasPlaceholders", obj_self); 
        goto fail;
    }
    char retval = CPyDef_semanal_shared___HasPlaceholders_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "__init__", 346, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___HasPlaceholders___visit_placeholder_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    return 1;
}

PyObject *CPyPy_semanal_shared___HasPlaceholders___visit_placeholder_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_placeholder_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_shared___HasPlaceholders))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.HasPlaceholders", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PlaceholderType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PlaceholderType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_semanal_shared___HasPlaceholders___visit_placeholder_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "visit_placeholder_type", 349, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___HasPlaceholders___visit_placeholder_type__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_shared___HasPlaceholders___visit_placeholder_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_shared___HasPlaceholders___visit_placeholder_type__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_placeholder_type__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_shared___HasPlaceholders))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_shared.HasPlaceholders", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PlaceholderType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PlaceholderType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_shared___HasPlaceholders___visit_placeholder_type__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "visit_placeholder_type__SyntheticTypeVisitor_glue", -1, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared___has_placeholder(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_semanal_shared___HasPlaceholders();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "has_placeholder", 355, CPyStatic_semanal_shared___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_typ, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_typ, cpy_r_r0); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "has_placeholder", 355, CPyStatic_semanal_shared___globals);
        goto CPyL4;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "has_placeholder", 355, CPyStatic_semanal_shared___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_shared___has_placeholder(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:has_placeholder", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_semanal_shared___has_placeholder(arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "has_placeholder", 353, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___find_dataclass_transform_spec(PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyPtr cpy_r_r35;
    int64_t cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_candidate;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_spec;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
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
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyTagged cpy_r_r74;
    CPyPtr cpy_r_r75;
    int64_t cpy_r_r76;
    CPyTagged cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyTagged cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_metaclass_type;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    cpy_r_r0 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL64;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r4 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 379, CPyStatic_semanal_shared___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL63;
    }
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_r4)->_callee;
    CPy_INCREF(cpy_r_r5);
    cpy_r_node = cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL5;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL6;
CPyL5: ;
    cpy_r_r11 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    cpy_r_r10 = cpy_r_r14;
CPyL6: ;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r15 = cpy_r_r10;
    goto CPyL9;
CPyL8: ;
    cpy_r_r16 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    cpy_r_r15 = cpy_r_r19;
CPyL9: ;
    if (!cpy_r_r15) goto CPyL12;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_node) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_node) == CPyType_nodes___RefExpr)))
        cpy_r_r20 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 382, CPyStatic_semanal_shared___globals, "mypy.nodes.RefExpr", cpy_r_node);
        goto CPyL65;
    }
    cpy_r_r21 = ((mypy___nodes___RefExprObject *)cpy_r_r20)->_node;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_node);
    cpy_r_node = cpy_r_r21;
CPyL12: ;
    cpy_r_r22 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    if (!cpy_r_r25) goto CPyL15;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r26 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 387, CPyStatic_semanal_shared___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL65;
    }
    cpy_r_r27 = ((mypy___nodes___DecoratorObject *)cpy_r_r26)->_func;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_node);
    cpy_r_node = cpy_r_r27;
CPyL15: ;
    cpy_r_r28 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    if (!cpy_r_r31) goto CPyL28;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r32 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 394, CPyStatic_semanal_shared___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_node);
        goto CPyL65;
    }
    cpy_r_r33 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r32)->_items;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = 0;
CPyL18: ;
    cpy_r_r35 = (CPyPtr)&((PyVarObject *)cpy_r_r33)->ob_size;
    cpy_r_r36 = *(int64_t *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 << 1;
    cpy_r_r38 = (Py_ssize_t)cpy_r_r34 < (Py_ssize_t)cpy_r_r37;
    if (!cpy_r_r38) goto CPyL66;
    cpy_r_r39 = CPyList_GetItemUnsafe(cpy_r_r33, cpy_r_r34);
    if (Py_TYPE(cpy_r_r39) == CPyType_nodes___FuncDef)
        cpy_r_r40 = cpy_r_r39;
    else {
        cpy_r_r40 = NULL;
    }
    if (cpy_r_r40 != NULL) goto __LL6149;
    if (Py_TYPE(cpy_r_r39) == CPyType_nodes___Decorator)
        cpy_r_r40 = cpy_r_r39;
    else {
        cpy_r_r40 = NULL;
    }
    if (cpy_r_r40 != NULL) goto __LL6149;
    CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 394, CPyStatic_semanal_shared___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r39);
    goto CPyL67;
__LL6149: ;
    cpy_r_candidate = cpy_r_r40;
    cpy_r_r41 = CPyDef_semanal_shared___find_dataclass_transform_spec(cpy_r_candidate);
    CPy_DECREF(cpy_r_candidate);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 395, CPyStatic_semanal_shared___globals);
        goto CPyL67;
    }
    cpy_r_spec = cpy_r_r41;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_spec != cpy_r_r42;
    if (cpy_r_r43) {
        goto CPyL68;
    } else
        goto CPyL69;
CPyL22: ;
    if (likely(cpy_r_spec != Py_None))
        cpy_r_r44 = cpy_r_spec;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 397, CPyStatic_semanal_shared___globals, "mypy.nodes.DataclassTransformSpec", cpy_r_spec);
        goto CPyL63;
    }
    return cpy_r_r44;
CPyL24: ;
    cpy_r_r45 = cpy_r_r34 + 2;
    cpy_r_r34 = cpy_r_r45;
    goto CPyL18;
CPyL25: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r46 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 398, CPyStatic_semanal_shared___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_node);
        goto CPyL65;
    }
    cpy_r_r47 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r46)->_impl;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_node);
    cpy_r_r48 = CPyDef_semanal_shared___find_dataclass_transform_spec(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 398, CPyStatic_semanal_shared___globals);
        goto CPyL63;
    }
    return cpy_r_r48;
CPyL28: ;
    cpy_r_r49 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (!cpy_r_r52) goto CPyL32;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef))
        cpy_r_r53 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 402, CPyStatic_semanal_shared___globals, "mypy.nodes.FuncDef", cpy_r_node);
        goto CPyL65;
    }
    cpy_r_r54 = ((mypy___nodes___FuncDefObject *)cpy_r_r53)->_dataclass_transform_spec;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("mypy/semanal_shared.py", "find_dataclass_transform_spec", "FuncDef", "dataclass_transform_spec", 402, CPyStatic_semanal_shared___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r54);
CPyL31: ;
    CPy_DECREF(cpy_r_node);
    return cpy_r_r54;
CPyL32: ;
    cpy_r_r55 = (PyObject *)CPyType_nodes___ClassDef;
    cpy_r_r56 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 == cpy_r_r55;
    if (!cpy_r_r58) goto CPyL35;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___ClassDef))
        cpy_r_r59 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 405, CPyStatic_semanal_shared___globals, "mypy.nodes.ClassDef", cpy_r_node);
        goto CPyL65;
    }
    cpy_r_r60 = ((mypy___nodes___ClassDefObject *)cpy_r_r59)->_info;
    CPy_INCREF(cpy_r_r60);
    CPy_DECREF(cpy_r_node);
    cpy_r_node = cpy_r_r60;
CPyL35: ;
    cpy_r_r61 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r62 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r63 = *(PyObject * *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 == cpy_r_r61;
    if (!cpy_r_r64) goto CPyL37;
    cpy_r_r65 = cpy_r_r64;
    goto CPyL38;
CPyL37: ;
    cpy_r_r66 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    cpy_r_r65 = cpy_r_r69;
CPyL38: ;
    if (!cpy_r_r65) goto CPyL70;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r70 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 408, CPyStatic_semanal_shared___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL65;
    }
    cpy_r_r71 = ((mypy___nodes___TypeInfoObject *)cpy_r_r70)->_mro;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypy/semanal_shared.py", "find_dataclass_transform_spec", "TypeInfo", "mro", 408, CPyStatic_semanal_shared___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r71);
CPyL41: ;
    cpy_r_r72 = CPyList_GetSlice(cpy_r_r71, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 408, CPyStatic_semanal_shared___globals);
        goto CPyL65;
    }
    if (likely(PyList_Check(cpy_r_r72)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 408, CPyStatic_semanal_shared___globals, "list", cpy_r_r72);
        goto CPyL65;
    }
    cpy_r_r74 = 0;
CPyL44: ;
    cpy_r_r75 = (CPyPtr)&((PyVarObject *)cpy_r_r73)->ob_size;
    cpy_r_r76 = *(int64_t *)cpy_r_r75;
    cpy_r_r77 = cpy_r_r76 << 1;
    cpy_r_r78 = (Py_ssize_t)cpy_r_r74 < (Py_ssize_t)cpy_r_r77;
    if (!cpy_r_r78) goto CPyL71;
    cpy_r_r79 = CPyList_GetItemUnsafe(cpy_r_r73, cpy_r_r74);
    if (likely((Py_TYPE(cpy_r_r79) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r79) == CPyType_nodes___TypeInfo)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 408, CPyStatic_semanal_shared___globals, "mypy.nodes.TypeInfo", cpy_r_r79);
        goto CPyL72;
    }
    cpy_r_base = cpy_r_r80;
    cpy_r_r81 = ((mypy___nodes___TypeInfoObject *)cpy_r_base)->_dataclass_transform_spec;
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AttributeError("mypy/semanal_shared.py", "find_dataclass_transform_spec", "TypeInfo", "dataclass_transform_spec", 409, CPyStatic_semanal_shared___globals);
        goto CPyL73;
    }
CPyL47: ;
    cpy_r_r82 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r83 = cpy_r_r81 != cpy_r_r82;
    if (cpy_r_r83) {
        goto CPyL74;
    } else
        goto CPyL75;
CPyL48: ;
    cpy_r_r84 = ((mypy___nodes___TypeInfoObject *)cpy_r_base)->_dataclass_transform_spec;
    if (unlikely(cpy_r_r84 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'dataclass_transform_spec' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r84);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 410, CPyStatic_semanal_shared___globals);
        goto CPyL63;
    }
CPyL49: ;
    if (likely(cpy_r_r84 != Py_None))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 410, CPyStatic_semanal_shared___globals, "mypy.nodes.DataclassTransformSpec", cpy_r_r84);
        goto CPyL63;
    }
    return cpy_r_r85;
CPyL51: ;
    cpy_r_r86 = cpy_r_r74 + 2;
    cpy_r_r74 = cpy_r_r86;
    goto CPyL44;
CPyL52: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r87 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 424, CPyStatic_semanal_shared___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL65;
    }
    cpy_r_r88 = ((mypy___nodes___TypeInfoObject *)cpy_r_r87)->_metaclass_type;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("mypy/semanal_shared.py", "find_dataclass_transform_spec", "TypeInfo", "metaclass_type", 424, CPyStatic_semanal_shared___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r88);
CPyL54: ;
    CPy_DECREF(cpy_r_node);
    cpy_r_metaclass_type = cpy_r_r88;
    cpy_r_r89 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r90 = cpy_r_metaclass_type != cpy_r_r89;
    if (!cpy_r_r90) goto CPyL76;
    if (likely(cpy_r_metaclass_type != Py_None))
        cpy_r_r91 = cpy_r_metaclass_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 425, CPyStatic_semanal_shared___globals, "mypy.types.Instance", cpy_r_metaclass_type);
        goto CPyL77;
    }
    cpy_r_r92 = ((mypy___types___InstanceObject *)cpy_r_r91)->_type;
    cpy_r_r93 = ((mypy___nodes___TypeInfoObject *)cpy_r_r92)->_dataclass_transform_spec;
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AttributeError("mypy/semanal_shared.py", "find_dataclass_transform_spec", "TypeInfo", "dataclass_transform_spec", 425, CPyStatic_semanal_shared___globals);
        goto CPyL77;
    }
CPyL57: ;
    cpy_r_r94 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r95 = cpy_r_r93 != cpy_r_r94;
    if (!cpy_r_r95) goto CPyL76;
    if (likely(cpy_r_metaclass_type != Py_None))
        cpy_r_r96 = cpy_r_metaclass_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 426, CPyStatic_semanal_shared___globals, "mypy.types.Instance", cpy_r_metaclass_type);
        goto CPyL77;
    }
    cpy_r_r97 = ((mypy___types___InstanceObject *)cpy_r_r96)->_type;
    cpy_r_r98 = ((mypy___nodes___TypeInfoObject *)cpy_r_r97)->_dataclass_transform_spec;
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AttributeError("mypy/semanal_shared.py", "find_dataclass_transform_spec", "TypeInfo", "dataclass_transform_spec", 426, CPyStatic_semanal_shared___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r98);
CPyL60: ;
    if (likely(cpy_r_r98 != Py_None))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 426, CPyStatic_semanal_shared___globals, "mypy.nodes.DataclassTransformSpec", cpy_r_r98);
        goto CPyL77;
    }
    CPy_DECREF(cpy_r_metaclass_type);
    return cpy_r_r99;
CPyL62: ;
    cpy_r_r100 = Py_None;
    CPy_INCREF(cpy_r_r100);
    return cpy_r_r100;
CPyL63: ;
    cpy_r_r101 = NULL;
    return cpy_r_r101;
CPyL64: ;
    CPy_INCREF(cpy_r_node);
    goto CPyL3;
CPyL65: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL63;
CPyL66: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL25;
CPyL67: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r33);
    goto CPyL63;
CPyL68: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_r33);
    goto CPyL22;
CPyL69: ;
    CPy_DECREF(cpy_r_spec);
    goto CPyL24;
CPyL70: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL62;
CPyL71: ;
    CPy_DECREF(cpy_r_r73);
    goto CPyL52;
CPyL72: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r73);
    goto CPyL63;
CPyL73: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_base);
    goto CPyL63;
CPyL74: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_r73);
    goto CPyL48;
CPyL75: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL51;
CPyL76: ;
    CPy_DECREF(cpy_r_metaclass_type);
    goto CPyL62;
CPyL77: ;
    CPy_DecRef(cpy_r_metaclass_type);
    goto CPyL63;
}

PyObject *CPyPy_semanal_shared___find_dataclass_transform_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:find_dataclass_transform_spec", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_node;
    if (PyObject_TypeCheck(obj_node, CPyType_nodes___Node))
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL6150;
    if (obj_node == Py_None)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL6150;
    CPy_TypeError("mypy.nodes.Node or None", obj_node); 
    goto fail;
__LL6150: ;
    PyObject *retval = CPyDef_semanal_shared___find_dataclass_transform_spec(arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "find_dataclass_transform_spec", 358, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___require_bool_literal_argument(PyObject *cpy_r_api, PyObject *cpy_r_expression, PyObject *cpy_r_name, PyObject *cpy_r_default) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    if (cpy_r_default != NULL) goto CPyL19;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_default = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyDef_semanal_shared___parse_bool(cpy_r_expression);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "require_bool_literal_argument", 459, CPyStatic_semanal_shared___globals);
        goto CPyL20;
    }
    cpy_r_value = cpy_r_r1;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_value == cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL21;
    } else
        goto CPyL22;
CPyL4: ;
    cpy_r_r4 = CPyStatics[178]; /* '"' */
    cpy_r_r5 = CPyStatics[5249]; /* '" argument must be a True or False literal' */
    cpy_r_r6 = CPyStr_Build(3, cpy_r_r4, cpy_r_name, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "require_bool_literal_argument", 462, CPyStatic_semanal_shared___globals);
        goto CPyL20;
    }
    cpy_r_r7 = CPyStatic_errorcodes___LITERAL_REQ;
    if (unlikely(cpy_r_r7 == NULL)) {
        goto CPyL23;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"LITERAL_REQ\" was not set");
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "require_bool_literal_argument", 462, CPyStatic_semanal_shared___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r9 = (PyObject *)CPyType_semanal___SemanticAnalyzer;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_api)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL12;
    CPy_INCREF(cpy_r_api);
    if (likely(Py_TYPE(cpy_r_api) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r13 = cpy_r_api;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "require_bool_literal_argument", 461, CPyStatic_semanal_shared___globals, "mypy.semanal_shared.SemanticAnalyzerInterface", cpy_r_api);
        goto CPyL24;
    }
    cpy_r_r14 = 2;
    cpy_r_r15 = 2;
    cpy_r_r16 = CPY_GET_METHOD_TRAIT(cpy_r_r13, CPyType_semanal_shared___SemanticAnalyzerInterface, 19, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r13, cpy_r_r6, cpy_r_expression, cpy_r_r14, cpy_r_r15, cpy_r_r7); /* fail */
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "require_bool_literal_argument", 461, CPyStatic_semanal_shared___globals);
        goto CPyL20;
    }
    cpy_r_r17 = cpy_r_r16;
    goto CPyL15;
CPyL12: ;
    CPy_INCREF(cpy_r_api);
    if (likely(Py_TYPE(cpy_r_api) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r18 = cpy_r_api;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "require_bool_literal_argument", 461, CPyStatic_semanal_shared___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_api);
        goto CPyL24;
    }
    cpy_r_r19 = 2;
    cpy_r_r20 = 2;
    cpy_r_r21 = CPY_GET_METHOD_TRAIT(cpy_r_r18, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r18, cpy_r_r6, cpy_r_expression, cpy_r_r19, cpy_r_r20, cpy_r_r7); /* fail */
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "require_bool_literal_argument", 461, CPyStatic_semanal_shared___globals);
        goto CPyL20;
    }
    cpy_r_r17 = cpy_r_r21;
CPyL15: ;
    return cpy_r_default;
CPyL16: ;
    if (unlikely(!PyBool_Check(cpy_r_value))) {
        CPy_TypeError("bool", cpy_r_value); cpy_r_r22 = 2;
    } else
        cpy_r_r22 = cpy_r_value == Py_True;
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "require_bool_literal_argument", 466, CPyStatic_semanal_shared___globals);
        goto CPyL18;
    }
    cpy_r_r23 = cpy_r_r22 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r23);
    return cpy_r_r23;
CPyL18: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL19: ;
    CPy_INCREF(cpy_r_default);
    goto CPyL2;
CPyL20: ;
    CPy_DecRef(cpy_r_default);
    goto CPyL18;
CPyL21: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL4;
CPyL22: ;
    CPy_DECREF(cpy_r_default);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_r6);
    goto CPyL6;
CPyL24: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_r6);
    goto CPyL18;
}

PyObject *CPyPy_semanal_shared___require_bool_literal_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"api", "expression", "name", "default", 0};
    static CPyArg_Parser parser = {"OOO|O:require_bool_literal_argument", kwlist, 0};
    PyObject *obj_api;
    PyObject *obj_expression;
    PyObject *obj_name;
    PyObject *obj_default = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_api, &obj_expression, &obj_name, &obj_default)) {
        return NULL;
    }
    PyObject *arg_api;
    if (Py_TYPE(obj_api) == CPyType_semanal___SemanticAnalyzer)
        arg_api = obj_api;
    else {
        arg_api = NULL;
    }
    if (arg_api != NULL) goto __LL6151;
    if (Py_TYPE(obj_api) == CPyType_semanal___SemanticAnalyzer)
        arg_api = obj_api;
    else {
        arg_api = NULL;
    }
    if (arg_api != NULL) goto __LL6151;
    CPy_TypeError("union[mypy.semanal_shared.SemanticAnalyzerInterface, mypy.plugin.SemanticAnalyzerPluginInterface]", obj_api); 
    goto fail;
__LL6151: ;
    PyObject *arg_expression;
    if (likely(PyObject_TypeCheck(obj_expression, CPyType_nodes___Expression)))
        arg_expression = obj_expression;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expression); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_default;
    if (obj_default == NULL) {
        arg_default = NULL;
        goto __LL6152;
    }
    if (PyBool_Check(obj_default))
        arg_default = obj_default;
    else {
        arg_default = NULL;
    }
    if (arg_default != NULL) goto __LL6152;
    if (obj_default == Py_None)
        arg_default = obj_default;
    else {
        arg_default = NULL;
    }
    if (arg_default != NULL) goto __LL6152;
    CPy_TypeError("bool or None", obj_default); 
    goto fail;
__LL6152: ;
    PyObject *retval = CPyDef_semanal_shared___require_bool_literal_argument(arg_api, arg_expression, arg_name, arg_default);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "require_bool_literal_argument", 452, CPyStatic_semanal_shared___globals);
    return NULL;
}

PyObject *CPyDef_semanal_shared___parse_bool(PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
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
    cpy_r_r0 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL15;
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r4 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "parse_bool", 471, CPyStatic_semanal_shared___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL16;
    }
    cpy_r_r5 = CPY_GET_ATTR(cpy_r_r4, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "parse_bool", 471, CPyStatic_semanal_shared___globals);
        goto CPyL16;
    }
CPyL3: ;
    cpy_r_r6 = CPyStatics[887]; /* 'builtins.True' */
    cpy_r_r7 = PyUnicode_Compare(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 == -1;
    if (!cpy_r_r8) goto CPyL6;
    cpy_r_r9 = PyErr_Occurred();
    cpy_r_r10 = cpy_r_r9 != NULL;
    if (!cpy_r_r10) goto CPyL6;
    cpy_r_r11 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "parse_bool", 471, CPyStatic_semanal_shared___globals);
        goto CPyL16;
    }
CPyL6: ;
    cpy_r_r12 = cpy_r_r7 == 0;
    if (!cpy_r_r12) goto CPyL8;
    cpy_r_r13 = 1 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL8: ;
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r14 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_shared.py", "parse_bool", 473, CPyStatic_semanal_shared___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL16;
    }
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_r14, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "parse_bool", 473, CPyStatic_semanal_shared___globals);
        goto CPyL16;
    }
CPyL10: ;
    cpy_r_r16 = CPyStatics[766]; /* 'builtins.False' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL13;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL13;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "parse_bool", 473, CPyStatic_semanal_shared___globals);
        goto CPyL16;
    }
CPyL13: ;
    cpy_r_r22 = cpy_r_r17 == 0;
    if (!cpy_r_r22) goto CPyL15;
    cpy_r_r23 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r23);
    return cpy_r_r23;
CPyL15: ;
    cpy_r_r24 = Py_None;
    CPy_INCREF(cpy_r_r24);
    return cpy_r_r24;
CPyL16: ;
    cpy_r_r25 = NULL;
    return cpy_r_r25;
}

PyObject *CPyPy_semanal_shared___parse_bool(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:parse_bool", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_shared___parse_bool(arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_shared.py", "parse_bool", 469, CPyStatic_semanal_shared___globals);
    return NULL;
}

char CPyDef_semanal_shared_____top_level__(void) {
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
    tuple_T3OOO cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
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
    int32_t cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
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
    int32_t cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    int32_t cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", -1, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_semanal_shared___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 3, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9527]; /* ('abstractmethod',) */
    cpy_r_r10 = CPyStatics[602]; /* 'abc' */
    cpy_r_r11 = CPyStatic_semanal_shared___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 5, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    CPyModule_abc = cpy_r_r12;
    CPy_INCREF(CPyModule_abc);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9730]; /* ('Callable', 'Final', 'overload') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_semanal_shared___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 6, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9731]; /* ('Literal', 'Protocol') */
    cpy_r_r18 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r19 = CPyStatic_semanal_shared___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 7, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    CPyModule_typing_extensions = cpy_r_r20;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9554]; /* ('trait',) */
    cpy_r_r22 = CPyStatics[599]; /* 'mypy_extensions' */
    cpy_r_r23 = CPyStatic_semanal_shared___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 9, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    CPyModule_mypy_extensions = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9497]; /* ('join',) */
    cpy_r_r26 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r27 = CPyStatic_semanal_shared___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 11, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    CPyModule_mypy = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9732]; /* ('LITERAL_REQ', 'ErrorCode') */
    cpy_r_r30 = CPyStatics[924]; /* 'mypy.errorcodes' */
    cpy_r_r31 = CPyStatic_semanal_shared___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 12, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    CPyModule_mypy___errorcodes = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___errorcodes);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9733]; /* ('CallExpr', 'ClassDef', 'Context',
                                     'DataclassTransformSpec', 'Decorator', 'Expression',
                                     'FuncDef', 'NameExpr', 'Node', 'OverloadedFuncDef',
                                     'RefExpr', 'SymbolNode', 'SymbolTable',
                                     'SymbolTableNode', 'TypeInfo') */
    cpy_r_r34 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r35 = CPyStatic_semanal_shared___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 13, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    CPyModule_mypy___nodes = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9589]; /* ('SemanticAnalyzerPluginInterface',) */
    cpy_r_r38 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r39 = CPyStatic_semanal_shared___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 30, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    CPyModule_mypy___plugin = cpy_r_r40;
    CPy_INCREF(CPyModule_mypy___plugin);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[9575]; /* ('TypeVarLikeScope',) */
    cpy_r_r42 = CPyStatics[4366]; /* 'mypy.tvar_scope' */
    cpy_r_r43 = CPyStatic_semanal_shared___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 31, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    CPyModule_mypy___tvar_scope = cpy_r_r44;
    CPy_INCREF(CPyModule_mypy___tvar_scope);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[9734]; /* ('ANY_STRATEGY', 'BoolTypeQuery') */
    cpy_r_r46 = CPyStatics[1267]; /* 'mypy.type_visitor' */
    cpy_r_r47 = CPyStatic_semanal_shared___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 32, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    CPyModule_mypy___type_visitor = cpy_r_r48;
    CPy_INCREF(CPyModule_mypy___type_visitor);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[9735]; /* ('TPDICT_FB_NAMES', 'AnyType', 'FunctionLike',
                                     'Instance', 'Parameters', 'ParamSpecFlavor',
                                     'ParamSpecType', 'PlaceholderType', 'ProperType',
                                     'TupleType', 'Type', 'TypeOfAny', 'TypeVarId',
                                     'TypeVarLikeType', 'get_proper_type') */
    cpy_r_r50 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r51 = CPyStatic_semanal_shared___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 33, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    CPyModule_mypy___types = cpy_r_r52;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[785]; /* '__slots__' */
    cpy_r_r54 = CPyStatics[4998]; /* '__deletable__' */
    cpy_r_r55 = CPyStatics[786]; /* '__match_args__' */
    cpy_r_r56.f0 = cpy_r_r53;
    cpy_r_r56.f1 = cpy_r_r54;
    cpy_r_r56.f2 = cpy_r_r55;
    CPy_INCREF(cpy_r_r56.f0);
    CPy_INCREF(cpy_r_r56.f1);
    CPy_INCREF(cpy_r_r56.f2);
    CPyStatic_semanal_shared___ALLOW_INCOMPATIBLE_OVERRIDE = cpy_r_r56;
    CPy_INCREF(CPyStatic_semanal_shared___ALLOW_INCOMPATIBLE_OVERRIDE.f0);
    CPy_INCREF(CPyStatic_semanal_shared___ALLOW_INCOMPATIBLE_OVERRIDE.f1);
    CPy_INCREF(CPyStatic_semanal_shared___ALLOW_INCOMPATIBLE_OVERRIDE.f2);
    cpy_r_r57 = CPyStatic_semanal_shared___globals;
    cpy_r_r58 = CPyStatics[4475]; /* 'ALLOW_INCOMPATIBLE_OVERRIDE' */
    cpy_r_r59 = PyTuple_New(3);
    if (unlikely(cpy_r_r59 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6153 = cpy_r_r56.f0;
    PyTuple_SET_ITEM(cpy_r_r59, 0, __tmp6153);
    PyObject *__tmp6154 = cpy_r_r56.f1;
    PyTuple_SET_ITEM(cpy_r_r59, 1, __tmp6154);
    PyObject *__tmp6155 = cpy_r_r56.f2;
    PyTuple_SET_ITEM(cpy_r_r59, 2, __tmp6155);
    cpy_r_r60 = CPyDict_SetItem(cpy_r_r57, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 53, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    cpy_r_r62 = CPyStatic_semanal_shared___globals;
    cpy_r_r63 = CPyStatics[5069]; /* 'PRIORITY_FALLBACKS' */
    cpy_r_r64 = CPyStatics[9016]; /* 1 */
    cpy_r_r65 = CPyDict_SetItem(cpy_r_r62, cpy_r_r63, cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 60, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    cpy_r_r67 = NULL;
    cpy_r_r68 = CPyStatics[4478]; /* 'mypy.semanal_shared' */
    cpy_r_r69 = (PyObject *)CPyType_semanal_shared___SemanticAnalyzerCoreInterface_template;
    cpy_r_r70 = CPyType_FromTemplate(cpy_r_r69, cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 64, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    cpy_r_r71 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r72 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 64, CPyStatic_semanal_shared___globals);
        goto CPyL40;
    }
    cpy_r_r73 = PyObject_SetAttr(cpy_r_r70, cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 64, CPyStatic_semanal_shared___globals);
        goto CPyL40;
    }
    CPyType_semanal_shared___SemanticAnalyzerCoreInterface = (PyTypeObject *)cpy_r_r70;
    CPy_INCREF(CPyType_semanal_shared___SemanticAnalyzerCoreInterface);
    cpy_r_r75 = CPyStatic_semanal_shared___globals;
    cpy_r_r76 = CPyStatics[5251]; /* 'SemanticAnalyzerCoreInterface' */
    cpy_r_r77 = CPyDict_SetItem(cpy_r_r75, cpy_r_r76, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 64, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    cpy_r_r79 = (PyObject *)CPyType_semanal_shared___SemanticAnalyzerCoreInterface;
    cpy_r_r80 = PyTuple_Pack(1, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 144, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    cpy_r_r81 = CPyStatics[4478]; /* 'mypy.semanal_shared' */
    cpy_r_r82 = (PyObject *)CPyType_semanal_shared___SemanticAnalyzerInterface_template;
    cpy_r_r83 = CPyType_FromTemplate(cpy_r_r82, cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 144, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    cpy_r_r84 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r85 = CPyStatics[5128]; /* 'tvar_scope' */
    cpy_r_r86 = PyTuple_Pack(1, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 144, CPyStatic_semanal_shared___globals);
        goto CPyL41;
    }
    cpy_r_r87 = PyObject_SetAttr(cpy_r_r83, cpy_r_r84, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 144, CPyStatic_semanal_shared___globals);
        goto CPyL41;
    }
    CPyType_semanal_shared___SemanticAnalyzerInterface = (PyTypeObject *)cpy_r_r83;
    CPy_INCREF(CPyType_semanal_shared___SemanticAnalyzerInterface);
    cpy_r_r89 = CPyStatic_semanal_shared___globals;
    cpy_r_r90 = CPyStatics[5070]; /* 'SemanticAnalyzerInterface' */
    cpy_r_r91 = CPyDict_SetItem(cpy_r_r89, cpy_r_r90, cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 144, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    cpy_r_r93 = CPyStatic_semanal_shared___globals;
    cpy_r_r94 = CPyStatics[5250]; /* 'Protocol' */
    cpy_r_r95 = CPyDict_GetItem(cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 292, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    cpy_r_r96 = PyTuple_Pack(1, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 292, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    cpy_r_r97 = CPyStatics[4478]; /* 'mypy.semanal_shared' */
    cpy_r_r98 = (PyObject *)CPyType_semanal_shared____NamedTypeCallback_template;
    cpy_r_r99 = CPyType_FromTemplate(cpy_r_r98, cpy_r_r96, cpy_r_r97);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 292, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    cpy_r_r100 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r101 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r102 = PyTuple_Pack(1, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 292, CPyStatic_semanal_shared___globals);
        goto CPyL42;
    }
    cpy_r_r103 = PyObject_SetAttr(cpy_r_r99, cpy_r_r100, cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 292, CPyStatic_semanal_shared___globals);
        goto CPyL42;
    }
    CPyType_semanal_shared____NamedTypeCallback = (PyTypeObject *)cpy_r_r99;
    CPy_INCREF(CPyType_semanal_shared____NamedTypeCallback);
    cpy_r_r105 = CPyStatic_semanal_shared___globals;
    cpy_r_r106 = CPyStatics[5252]; /* '_NamedTypeCallback' */
    cpy_r_r107 = CPyDict_SetItem(cpy_r_r105, cpy_r_r106, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 292, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    cpy_r_r109 = (PyObject *)CPyType_type_visitor___BoolTypeQuery;
    cpy_r_r110 = PyTuple_Pack(1, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 345, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    cpy_r_r111 = CPyStatics[4478]; /* 'mypy.semanal_shared' */
    cpy_r_r112 = (PyObject *)CPyType_semanal_shared___HasPlaceholders_template;
    cpy_r_r113 = CPyType_FromTemplate(cpy_r_r112, cpy_r_r110, cpy_r_r111);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 345, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    cpy_r_r114 = CPyDef_semanal_shared___HasPlaceholders_trait_vtable_setup();
    if (unlikely(cpy_r_r114 == 2)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", -1, CPyStatic_semanal_shared___globals);
        goto CPyL43;
    }
    cpy_r_r115 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r116 = CPyStatics[1131]; /* 'strategy' */
    cpy_r_r117 = CPyStatics[748]; /* 'default' */
    cpy_r_r118 = CPyStatics[1132]; /* 'seen_aliases' */
    cpy_r_r119 = CPyStatics[1133]; /* 'skip_alias_target' */
    cpy_r_r120 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r121 = PyTuple_Pack(5, cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 345, CPyStatic_semanal_shared___globals);
        goto CPyL43;
    }
    cpy_r_r122 = PyObject_SetAttr(cpy_r_r113, cpy_r_r115, cpy_r_r121);
    CPy_DECREF(cpy_r_r121);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 345, CPyStatic_semanal_shared___globals);
        goto CPyL43;
    }
    CPyType_semanal_shared___HasPlaceholders = (PyTypeObject *)cpy_r_r113;
    CPy_INCREF(CPyType_semanal_shared___HasPlaceholders);
    cpy_r_r124 = CPyStatic_semanal_shared___globals;
    cpy_r_r125 = CPyStatics[5253]; /* 'HasPlaceholders' */
    cpy_r_r126 = CPyDict_SetItem(cpy_r_r124, cpy_r_r125, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/semanal_shared.py", "<module>", 345, CPyStatic_semanal_shared___globals);
        goto CPyL39;
    }
    return 1;
CPyL39: ;
    cpy_r_r128 = 2;
    return cpy_r_r128;
CPyL40: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL39;
CPyL41: ;
    CPy_DecRef(cpy_r_r83);
    goto CPyL39;
CPyL42: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL39;
CPyL43: ;
    CPy_DecRef(cpy_r_r113);
    goto CPyL39;
}
