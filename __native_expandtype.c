#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
expandtype___HasGenericCallable_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef expandtype___HasGenericCallable_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___expandtype___HasGenericCallableObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___expandtype___HasGenericCallableObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *expandtype___HasGenericCallable_setup(PyTypeObject *type);
PyObject *CPyDef_expandtype___HasGenericCallable(void);

static PyObject *
expandtype___HasGenericCallable_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_expandtype___HasGenericCallable) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = expandtype___HasGenericCallable_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_expandtype___HasGenericCallable_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
expandtype___HasGenericCallable_traverse(mypy___expandtype___HasGenericCallableObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_strategy)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_strategy));
    }
    Py_VISIT(self->_seen_aliases);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___expandtype___HasGenericCallableObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___expandtype___HasGenericCallableObject))));
    return 0;
}

static int
expandtype___HasGenericCallable_clear(mypy___expandtype___HasGenericCallableObject *self)
{
    if (CPyTagged_CheckLong(self->_strategy)) {
        CPyTagged __tmp = self->_strategy;
        self->_strategy = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_seen_aliases);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___expandtype___HasGenericCallableObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___expandtype___HasGenericCallableObject))));
    return 0;
}

static void
expandtype___HasGenericCallable_dealloc(mypy___expandtype___HasGenericCallableObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, expandtype___HasGenericCallable_dealloc)
    expandtype___HasGenericCallable_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem expandtype___HasGenericCallable_vtable[37];
static CPyVTableItem expandtype___HasGenericCallable_type_visitor___SyntheticTypeVisitor_trait_vtable[26];
static size_t expandtype___HasGenericCallable_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem expandtype___HasGenericCallable_type_visitor___TypeVisitor_trait_vtable[21];
static size_t expandtype___HasGenericCallable_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_expandtype___HasGenericCallable_trait_vtable_setup(void)
{
    CPyVTableItem expandtype___HasGenericCallable_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_list__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_callable_argument__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_ellipsis_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_raw_expression_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_placeholder_type__SyntheticTypeVisitor_glue,
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
        (CPyVTableItem)CPyDef_expandtype___HasGenericCallable___visit_callable_type__TypeVisitor_glue,
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
    memcpy(expandtype___HasGenericCallable_type_visitor___SyntheticTypeVisitor_trait_vtable, expandtype___HasGenericCallable_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch, sizeof(expandtype___HasGenericCallable_type_visitor___SyntheticTypeVisitor_trait_vtable));
    size_t expandtype___HasGenericCallable_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(expandtype___HasGenericCallable_type_visitor___SyntheticTypeVisitor_offset_table, expandtype___HasGenericCallable_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(expandtype___HasGenericCallable_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem expandtype___HasGenericCallable_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
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
        (CPyVTableItem)CPyDef_expandtype___HasGenericCallable___visit_callable_type__TypeVisitor_glue,
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
    memcpy(expandtype___HasGenericCallable_type_visitor___TypeVisitor_trait_vtable, expandtype___HasGenericCallable_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(expandtype___HasGenericCallable_type_visitor___TypeVisitor_trait_vtable));
    size_t expandtype___HasGenericCallable_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(expandtype___HasGenericCallable_type_visitor___TypeVisitor_offset_table, expandtype___HasGenericCallable_type_visitor___TypeVisitor_offset_table_scratch, sizeof(expandtype___HasGenericCallable_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem expandtype___HasGenericCallable_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)expandtype___HasGenericCallable_type_visitor___SyntheticTypeVisitor_trait_vtable, (CPyVTableItem)expandtype___HasGenericCallable_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)expandtype___HasGenericCallable_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)expandtype___HasGenericCallable_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_expandtype___HasGenericCallable_____init__,
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
        (CPyVTableItem)CPyDef_expandtype___HasGenericCallable___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_placeholder_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___query_types,
        (CPyVTableItem)CPyDef_expandtype___HasGenericCallable_____init__,
        (CPyVTableItem)CPyDef_expandtype___HasGenericCallable___visit_callable_type,
    };
    memcpy(expandtype___HasGenericCallable_vtable, expandtype___HasGenericCallable_vtable_scratch, sizeof(expandtype___HasGenericCallable_vtable));
    return 1;
}


static PyGetSetDef expandtype___HasGenericCallable_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef expandtype___HasGenericCallable_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_expandtype___HasGenericCallable_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_expandtype___HasGenericCallable___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_expandtype___HasGenericCallable_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "HasGenericCallable",
    .tp_new = expandtype___HasGenericCallable_new,
    .tp_dealloc = (destructor)expandtype___HasGenericCallable_dealloc,
    .tp_traverse = (traverseproc)expandtype___HasGenericCallable_traverse,
    .tp_clear = (inquiry)expandtype___HasGenericCallable_clear,
    .tp_getset = expandtype___HasGenericCallable_getseters,
    .tp_methods = expandtype___HasGenericCallable_methods,
    .tp_init = expandtype___HasGenericCallable_init,
    .tp_members = expandtype___HasGenericCallable_members,
    .tp_basicsize = sizeof(mypy___expandtype___HasGenericCallableObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___expandtype___HasGenericCallableObject),
    .tp_weaklistoffset = sizeof(mypy___expandtype___HasGenericCallableObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_expandtype___HasGenericCallable_template = &CPyType_expandtype___HasGenericCallable_template_;

static PyObject *
expandtype___HasGenericCallable_setup(PyTypeObject *type)
{
    mypy___expandtype___HasGenericCallableObject *self;
    self = (mypy___expandtype___HasGenericCallableObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = expandtype___HasGenericCallable_vtable + 6;
    self->_strategy = CPY_INT_TAG;
    self->_default = 2;
    self->_skip_alias_target = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_expandtype___HasGenericCallable(void)
{
    PyObject *self = expandtype___HasGenericCallable_setup(CPyType_expandtype___HasGenericCallable);
    if (self == NULL)
        return NULL;
    char res = CPyDef_expandtype___HasGenericCallable_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


PyMemberDef expandtype___FreshenCallableVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___expandtype___FreshenCallableVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___expandtype___FreshenCallableVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *expandtype___FreshenCallableVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_expandtype___FreshenCallableVisitor(void);

static PyObject *
expandtype___FreshenCallableVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_expandtype___FreshenCallableVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return expandtype___FreshenCallableVisitor_setup(type);
}

static int
expandtype___FreshenCallableVisitor_traverse(mypy___expandtype___FreshenCallableVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___expandtype___FreshenCallableVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___expandtype___FreshenCallableVisitorObject))));
    return 0;
}

static int
expandtype___FreshenCallableVisitor_clear(mypy___expandtype___FreshenCallableVisitorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___expandtype___FreshenCallableVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___expandtype___FreshenCallableVisitorObject))));
    return 0;
}

static void
expandtype___FreshenCallableVisitor_dealloc(mypy___expandtype___FreshenCallableVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, expandtype___FreshenCallableVisitor_dealloc)
    expandtype___FreshenCallableVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem expandtype___FreshenCallableVisitor_vtable[28];
static CPyVTableItem expandtype___FreshenCallableVisitor_type_visitor___TypeVisitor_trait_vtable[21];
static size_t expandtype___FreshenCallableVisitor_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_expandtype___FreshenCallableVisitor_trait_vtable_setup(void)
{
    CPyVTableItem expandtype___FreshenCallableVisitor_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___FreshenCallableVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___FreshenCallableVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(expandtype___FreshenCallableVisitor_type_visitor___TypeVisitor_trait_vtable, expandtype___FreshenCallableVisitor_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(expandtype___FreshenCallableVisitor_type_visitor___TypeVisitor_trait_vtable));
    size_t expandtype___FreshenCallableVisitor_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(expandtype___FreshenCallableVisitor_type_visitor___TypeVisitor_offset_table, expandtype___FreshenCallableVisitor_type_visitor___TypeVisitor_offset_table_scratch, sizeof(expandtype___FreshenCallableVisitor_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem expandtype___FreshenCallableVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)expandtype___FreshenCallableVisitor_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)expandtype___FreshenCallableVisitor_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_any,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_instance,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_var,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unpack_type,
        (CPyVTableItem)CPyDef_expandtype___FreshenCallableVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___translate_types,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___translate_variables,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_type,
        (CPyVTableItem)CPyDef_expandtype___FreshenCallableVisitor___visit_type_alias_type,
        (CPyVTableItem)CPyDef_expandtype___FreshenCallableVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_expandtype___FreshenCallableVisitor___visit_type_alias_type,
    };
    memcpy(expandtype___FreshenCallableVisitor_vtable, expandtype___FreshenCallableVisitor_vtable_scratch, sizeof(expandtype___FreshenCallableVisitor_vtable));
    return 1;
}


static PyGetSetDef expandtype___FreshenCallableVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef expandtype___FreshenCallableVisitor_methods[] = {
    {"visit_callable_type",
     (PyCFunction)CPyPy_expandtype___FreshenCallableVisitor___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_expandtype___FreshenCallableVisitor___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_expandtype___FreshenCallableVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FreshenCallableVisitor",
    .tp_new = expandtype___FreshenCallableVisitor_new,
    .tp_dealloc = (destructor)expandtype___FreshenCallableVisitor_dealloc,
    .tp_traverse = (traverseproc)expandtype___FreshenCallableVisitor_traverse,
    .tp_clear = (inquiry)expandtype___FreshenCallableVisitor_clear,
    .tp_getset = expandtype___FreshenCallableVisitor_getseters,
    .tp_methods = expandtype___FreshenCallableVisitor_methods,
    .tp_members = expandtype___FreshenCallableVisitor_members,
    .tp_basicsize = sizeof(mypy___expandtype___FreshenCallableVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___expandtype___FreshenCallableVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___expandtype___FreshenCallableVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_expandtype___FreshenCallableVisitor_template = &CPyType_expandtype___FreshenCallableVisitor_template_;

static PyObject *
expandtype___FreshenCallableVisitor_setup(PyTypeObject *type)
{
    mypy___expandtype___FreshenCallableVisitorObject *self;
    self = (mypy___expandtype___FreshenCallableVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = expandtype___FreshenCallableVisitor_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_expandtype___FreshenCallableVisitor(void)
{
    PyObject *self = expandtype___FreshenCallableVisitor_setup(CPyType_expandtype___FreshenCallableVisitor);
    if (self == NULL)
        return NULL;
    return self;
}


static int
expandtype___ExpandTypeVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef expandtype___ExpandTypeVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___expandtype___ExpandTypeVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___expandtype___ExpandTypeVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *expandtype___ExpandTypeVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_expandtype___ExpandTypeVisitor(PyObject *cpy_r_variables);

static PyObject *
expandtype___ExpandTypeVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_expandtype___ExpandTypeVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = expandtype___ExpandTypeVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_expandtype___ExpandTypeVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
expandtype___ExpandTypeVisitor_traverse(mypy___expandtype___ExpandTypeVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_variables);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___expandtype___ExpandTypeVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___expandtype___ExpandTypeVisitorObject))));
    return 0;
}

static int
expandtype___ExpandTypeVisitor_clear(mypy___expandtype___ExpandTypeVisitorObject *self)
{
    Py_CLEAR(self->_variables);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___expandtype___ExpandTypeVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___expandtype___ExpandTypeVisitorObject))));
    return 0;
}

static void
expandtype___ExpandTypeVisitor_dealloc(mypy___expandtype___ExpandTypeVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, expandtype___ExpandTypeVisitor_dealloc)
    expandtype___ExpandTypeVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem expandtype___ExpandTypeVisitor_vtable[60];
static CPyVTableItem expandtype___ExpandTypeVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable[26];
static size_t expandtype___ExpandTypeVisitor_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem expandtype___ExpandTypeVisitor_type_visitor___TypeVisitor_trait_vtable[21];
static size_t expandtype___ExpandTypeVisitor_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_expandtype___ExpandTypeVisitor_trait_vtable_setup(void)
{
    CPyVTableItem expandtype___ExpandTypeVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_types___TrivialSyntheticTypeTranslator___visit_type_list__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TrivialSyntheticTypeTranslator___visit_callable_argument__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TrivialSyntheticTypeTranslator___visit_ellipsis_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TrivialSyntheticTypeTranslator___visit_raw_expression_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TrivialSyntheticTypeTranslator___visit_placeholder_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(expandtype___ExpandTypeVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable, expandtype___ExpandTypeVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch, sizeof(expandtype___ExpandTypeVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable));
    size_t expandtype___ExpandTypeVisitor_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(expandtype___ExpandTypeVisitor_type_visitor___SyntheticTypeVisitor_offset_table, expandtype___ExpandTypeVisitor_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(expandtype___ExpandTypeVisitor_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem expandtype___ExpandTypeVisitor_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(expandtype___ExpandTypeVisitor_type_visitor___TypeVisitor_trait_vtable, expandtype___ExpandTypeVisitor_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(expandtype___ExpandTypeVisitor_type_visitor___TypeVisitor_trait_vtable));
    size_t expandtype___ExpandTypeVisitor_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(expandtype___ExpandTypeVisitor_type_visitor___TypeVisitor_offset_table, expandtype___ExpandTypeVisitor_type_visitor___TypeVisitor_offset_table_scratch, sizeof(expandtype___ExpandTypeVisitor_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem expandtype___ExpandTypeVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)expandtype___ExpandTypeVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable, (CPyVTableItem)expandtype___ExpandTypeVisitor_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)expandtype___ExpandTypeVisitor_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)expandtype___ExpandTypeVisitor_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_any,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_instance,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_callable_type__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_tuple_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_typeddict_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___translate_types,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___translate_variables,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_alias_type,
        (CPyVTableItem)CPyDef_types___TrivialSyntheticTypeTranslator___visit_placeholder_type,
        (CPyVTableItem)CPyDef_types___TrivialSyntheticTypeTranslator___visit_callable_argument,
        (CPyVTableItem)CPyDef_types___TrivialSyntheticTypeTranslator___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_types___TrivialSyntheticTypeTranslator___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_types___TrivialSyntheticTypeTranslator___visit_type_list,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor_____init__,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_any,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_instance,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___expand_unpack,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___interpolate_args_for_unpack,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___expand_types_with_unpack,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_tuple_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_typeddict_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_union_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___visit_type_alias_type,
        (CPyVTableItem)CPyDef_expandtype___ExpandTypeVisitor___expand_types,
    };
    memcpy(expandtype___ExpandTypeVisitor_vtable, expandtype___ExpandTypeVisitor_vtable_scratch, sizeof(expandtype___ExpandTypeVisitor_vtable));
    return 1;
}

static PyObject *
expandtype___ExpandTypeVisitor_get_variables(mypy___expandtype___ExpandTypeVisitorObject *self, void *closure);
static int
expandtype___ExpandTypeVisitor_set_variables(mypy___expandtype___ExpandTypeVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef expandtype___ExpandTypeVisitor_getseters[] = {
    {"variables",
     (getter)expandtype___ExpandTypeVisitor_get_variables, (setter)expandtype___ExpandTypeVisitor_set_variables,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef expandtype___ExpandTypeVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbound_type",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"expand_unpack",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___expand_unpack,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"interpolate_args_for_unpack",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___interpolate_args_for_unpack,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"expand_types_with_unpack",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___expand_types_with_unpack,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"expand_types",
     (PyCFunction)CPyPy_expandtype___ExpandTypeVisitor___expand_types,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_expandtype___ExpandTypeVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ExpandTypeVisitor",
    .tp_new = expandtype___ExpandTypeVisitor_new,
    .tp_dealloc = (destructor)expandtype___ExpandTypeVisitor_dealloc,
    .tp_traverse = (traverseproc)expandtype___ExpandTypeVisitor_traverse,
    .tp_clear = (inquiry)expandtype___ExpandTypeVisitor_clear,
    .tp_getset = expandtype___ExpandTypeVisitor_getseters,
    .tp_methods = expandtype___ExpandTypeVisitor_methods,
    .tp_init = expandtype___ExpandTypeVisitor_init,
    .tp_members = expandtype___ExpandTypeVisitor_members,
    .tp_basicsize = sizeof(mypy___expandtype___ExpandTypeVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___expandtype___ExpandTypeVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___expandtype___ExpandTypeVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_expandtype___ExpandTypeVisitor_template = &CPyType_expandtype___ExpandTypeVisitor_template_;

static PyObject *
expandtype___ExpandTypeVisitor_setup(PyTypeObject *type)
{
    mypy___expandtype___ExpandTypeVisitorObject *self;
    self = (mypy___expandtype___ExpandTypeVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = expandtype___ExpandTypeVisitor_vtable + 6;
    return (PyObject *)self;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor(PyObject *cpy_r_variables)
{
    PyObject *self = expandtype___ExpandTypeVisitor_setup(CPyType_expandtype___ExpandTypeVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_expandtype___ExpandTypeVisitor_____init__(self, cpy_r_variables);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
expandtype___ExpandTypeVisitor_get_variables(mypy___expandtype___ExpandTypeVisitorObject *self, void *closure)
{
    if (unlikely(self->_variables == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'variables' of 'ExpandTypeVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_variables);
    PyObject *retval = self->_variables;
    return retval;
}

static int
expandtype___ExpandTypeVisitor_set_variables(mypy___expandtype___ExpandTypeVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ExpandTypeVisitor' object attribute 'variables' cannot be deleted");
        return -1;
    }
    if (self->_variables != NULL) {
        CPy_DECREF(self->_variables);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_variables = tmp;
    return 0;
}
static PyMethodDef expandtypemodule_methods[] = {
    {"expand_type", (PyCFunction)CPyPy_expandtype___expand_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"expand_type_by_instance", (PyCFunction)CPyPy_expandtype___expand_type_by_instance, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"freshen_function_type_vars", (PyCFunction)CPyPy_expandtype___freshen_function_type_vars, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"freshen_all_functions_type_vars", (PyCFunction)CPyPy_expandtype___freshen_all_functions_type_vars, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"expand_unpack_with_variables", (PyCFunction)CPyPy_expandtype___expand_unpack_with_variables, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"expand_self_type", (PyCFunction)CPyPy_expandtype___expand_self_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"remove_trivial", (PyCFunction)CPyPy_expandtype___remove_trivial, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef expandtypemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.expandtype",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    expandtypemodule_methods
};

PyObject *CPyInit_mypy___expandtype(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___expandtype_internal) {
        Py_INCREF(CPyModule_mypy___expandtype_internal);
        return CPyModule_mypy___expandtype_internal;
    }
    CPyModule_mypy___expandtype_internal = PyModule_Create(&expandtypemodule);
    if (unlikely(CPyModule_mypy___expandtype_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___expandtype_internal, "__name__");
    CPyStatic_expandtype___globals = PyModule_GetDict(CPyModule_mypy___expandtype_internal);
    if (unlikely(CPyStatic_expandtype___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_expandtype_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___expandtype_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___expandtype_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_expandtype___has_generic_callable);
    CPyStatic_expandtype___has_generic_callable = NULL;
    Py_CLEAR(CPyType_expandtype___HasGenericCallable);
    Py_CLEAR(CPyType_expandtype___FreshenCallableVisitor);
    Py_CLEAR(CPyType_expandtype___ExpandTypeVisitor);
    return NULL;
}

PyObject *CPyDef_expandtype___expand_type(PyObject *cpy_r_typ, PyObject *cpy_r_env) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor(cpy_r_env);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type", 72, CPyStatic_expandtype___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_typ, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_typ, cpy_r_r0); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type", 72, CPyStatic_expandtype___globals);
        goto CPyL4;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_type", 72, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_expandtype___expand_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", "env", 0};
    static CPyArg_Parser parser = {"OO:expand_type", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_env;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_env)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_env = obj_env;
    PyObject *retval = CPyDef_expandtype___expand_type(arg_typ, arg_env);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "expand_type", 68, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___expand_type_by_instance(PyObject *cpy_r_typ, PyObject *cpy_r_instance) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_variables;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    tuple_T3OOO cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_args_prefix;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_args_middle;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_args_suffix;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    tuple_T3OOO cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_tvars_prefix;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_tvars_middle;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_tvars_suffix;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_tvar;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_instance_args;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_tvars;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyTagged cpy_r_r61;
    CPyTagged cpy_r_r62;
    CPyPtr cpy_r_r63;
    int64_t cpy_r_r64;
    CPyTagged cpy_r_r65;
    char cpy_r_r66;
    CPyPtr cpy_r_r67;
    int64_t cpy_r_r68;
    CPyTagged cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_binder;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    CPyTagged cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_instance)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 93, CPyStatic_expandtype___globals);
        goto CPyL55;
    }
    cpy_r_r3 = cpy_r_r1;
    if (cpy_r_r3) goto CPyL3;
    CPy_INCREF(cpy_r_typ);
    return cpy_r_typ;
CPyL3: ;
    cpy_r_r4 = PyDict_New();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 96, CPyStatic_expandtype___globals);
        goto CPyL55;
    }
    cpy_r_variables = cpy_r_r4;
    cpy_r_r5 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r6 = ((mypy___nodes___TypeInfoObject *)cpy_r_r5)->_has_type_var_tuple_type;
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AttributeError("mypy/expandtype.py", "expand_type_by_instance", "TypeInfo", "has_type_var_tuple_type", 97, CPyStatic_expandtype___globals);
        goto CPyL56;
    }
CPyL5: ;
    if (cpy_r_r6) {
        goto CPyL57;
    } else
        goto CPyL37;
CPyL6: ;
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r8 = ((mypy___nodes___TypeInfoObject *)cpy_r_r7)->_type_var_tuple_prefix;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/expandtype.py", "expand_type_by_instance", "TypeInfo", "type_var_tuple_prefix", 98, CPyStatic_expandtype___globals);
        goto CPyL55;
    }
CPyL7: ;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 != cpy_r_r9;
    if (cpy_r_r10) goto CPyL10;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 98, CPyStatic_expandtype___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r12 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r13 = ((mypy___nodes___TypeInfoObject *)cpy_r_r12)->_type_var_tuple_suffix;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/expandtype.py", "expand_type_by_instance", "TypeInfo", "type_var_tuple_suffix", 99, CPyStatic_expandtype___globals);
        goto CPyL55;
    }
CPyL11: ;
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_r13 != cpy_r_r14;
    if (cpy_r_r15) goto CPyL14;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 99, CPyStatic_expandtype___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r17 = CPyDef_typevartuples___split_with_instance(cpy_r_instance);
    if (unlikely(cpy_r_r17.f0 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 101, CPyStatic_expandtype___globals);
        goto CPyL55;
    }
    cpy_r_r18 = cpy_r_r17.f0;
    CPy_INCREF(cpy_r_r18);
    cpy_r_args_prefix = cpy_r_r18;
    cpy_r_r19 = cpy_r_r17.f1;
    CPy_INCREF(cpy_r_r19);
    cpy_r_args_middle = cpy_r_r19;
    cpy_r_r20 = cpy_r_r17.f2;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r17.f0);
    CPy_DECREF(cpy_r_r17.f1);
    CPy_DECREF(cpy_r_r17.f2);
    cpy_r_args_suffix = cpy_r_r20;
    cpy_r_r21 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r22 = ((mypy___nodes___TypeInfoObject *)cpy_r_r21)->_defn;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/expandtype.py", "expand_type_by_instance", "TypeInfo", "defn", 103, CPyStatic_expandtype___globals);
        goto CPyL58;
    }
CPyL16: ;
    cpy_r_r23 = ((mypy___nodes___ClassDefObject *)cpy_r_r22)->_type_vars;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = PyList_AsTuple(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 103, CPyStatic_expandtype___globals);
        goto CPyL58;
    }
    cpy_r_r25 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r26 = ((mypy___nodes___TypeInfoObject *)cpy_r_r25)->_type_var_tuple_prefix;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypy/expandtype.py", "expand_type_by_instance", "TypeInfo", "type_var_tuple_prefix", 104, CPyStatic_expandtype___globals);
        goto CPyL59;
    }
    CPy_INCREF(cpy_r_r26);
CPyL18: ;
    if (likely(PyLong_Check(cpy_r_r26)))
        cpy_r_r27 = CPyTagged_FromObject(cpy_r_r26);
    else {
        CPy_TypeError("int", cpy_r_r26); cpy_r_r27 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 104, CPyStatic_expandtype___globals);
        goto CPyL59;
    }
    cpy_r_r28 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r29 = ((mypy___nodes___TypeInfoObject *)cpy_r_r28)->_type_var_tuple_suffix;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypy/expandtype.py", "expand_type_by_instance", "TypeInfo", "type_var_tuple_suffix", 105, CPyStatic_expandtype___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r29);
CPyL20: ;
    if (likely(PyLong_Check(cpy_r_r29)))
        cpy_r_r30 = CPyTagged_FromObject(cpy_r_r29);
    else {
        CPy_TypeError("int", cpy_r_r29); cpy_r_r30 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 105, CPyStatic_expandtype___globals);
        goto CPyL60;
    }
    cpy_r_r31 = CPyDef_types___split_with_prefix_and_suffix(cpy_r_r24, cpy_r_r27, cpy_r_r30);
    CPy_DECREF(cpy_r_r24);
    CPyTagged_DECREF(cpy_r_r27);
    CPyTagged_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31.f0 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 102, CPyStatic_expandtype___globals);
        goto CPyL58;
    }
    cpy_r_r32 = cpy_r_r31.f0;
    CPy_INCREF(cpy_r_r32);
    cpy_r_tvars_prefix = cpy_r_r32;
    cpy_r_r33 = cpy_r_r31.f1;
    CPy_INCREF(cpy_r_r33);
    cpy_r_tvars_middle = cpy_r_r33;
    cpy_r_r34 = cpy_r_r31.f2;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r31.f0);
    CPy_DECREF(cpy_r_r31.f1);
    CPy_DECREF(cpy_r_r31.f2);
    cpy_r_tvars_suffix = cpy_r_r34;
    cpy_r_r35 = CPySequenceTuple_GetItem(cpy_r_tvars_middle, 0);
    CPy_DECREF(cpy_r_tvars_middle);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 107, CPyStatic_expandtype___globals);
        goto CPyL61;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r35, CPyType_types___Type)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_type_by_instance", 107, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r35);
        goto CPyL61;
    }
    cpy_r_tvar = cpy_r_r36;
    cpy_r_r37 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_tvar)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (cpy_r_r40) {
        goto CPyL27;
    } else
        goto CPyL62;
CPyL25: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 108, CPyStatic_expandtype___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL27: ;
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarTupleType))
        cpy_r_r42 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_type_by_instance", 109, CPyStatic_expandtype___globals, "mypy.types.TypeVarTupleType", cpy_r_tvar);
        goto CPyL63;
    }
    cpy_r_r43 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r42)->_id;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = PySequence_List(cpy_r_args_middle);
    CPy_DECREF(cpy_r_args_middle);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 109, CPyStatic_expandtype___globals);
        goto CPyL64;
    }
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarTupleType))
        cpy_r_r45 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_type_by_instance", 109, CPyStatic_expandtype___globals, "mypy.types.TypeVarTupleType", cpy_r_tvar);
        goto CPyL65;
    }
    cpy_r_r46 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r45)->_tuple_fallback;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_tvar);
    cpy_r_r47 = CPY_INT_TAG;
    cpy_r_r48 = CPY_INT_TAG;
    cpy_r_r49 = 2;
    cpy_r_r50 = CPyDef_types___TupleType(cpy_r_r44, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 109, CPyStatic_expandtype___globals);
        goto CPyL66;
    }
    cpy_r_r51 = CPyDict_Build(1, cpy_r_r43, cpy_r_r50);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 109, CPyStatic_expandtype___globals);
        goto CPyL67;
    }
    cpy_r_variables = cpy_r_r51;
    cpy_r_r52 = PyNumber_Add(cpy_r_args_prefix, cpy_r_args_suffix);
    CPy_DECREF(cpy_r_args_prefix);
    CPy_DECREF(cpy_r_args_suffix);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 110, CPyStatic_expandtype___globals);
        goto CPyL68;
    }
    if (likely(PyTuple_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_type_by_instance", 110, CPyStatic_expandtype___globals, "tuple", cpy_r_r52);
        goto CPyL68;
    }
    cpy_r_instance_args = cpy_r_r53;
    cpy_r_r54 = PyNumber_Add(cpy_r_tvars_prefix, cpy_r_tvars_suffix);
    CPy_DECREF(cpy_r_tvars_prefix);
    CPy_DECREF(cpy_r_tvars_suffix);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 111, CPyStatic_expandtype___globals);
        goto CPyL69;
    }
    if (likely(PyTuple_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_type_by_instance", 111, CPyStatic_expandtype___globals, "tuple", cpy_r_r54);
        goto CPyL69;
    }
    cpy_r_tvars = cpy_r_r55;
    goto CPyL40;
CPyL37: ;
    cpy_r_r56 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r57 = ((mypy___nodes___TypeInfoObject *)cpy_r_r56)->_defn;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypy/expandtype.py", "expand_type_by_instance", "TypeInfo", "defn", 113, CPyStatic_expandtype___globals);
        goto CPyL56;
    }
CPyL38: ;
    cpy_r_r58 = ((mypy___nodes___ClassDefObject *)cpy_r_r57)->_type_vars;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = PyList_AsTuple(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 113, CPyStatic_expandtype___globals);
        goto CPyL56;
    }
    cpy_r_tvars = cpy_r_r59;
    cpy_r_r60 = ((mypy___types___InstanceObject *)cpy_r_instance)->_args;
    CPy_INCREF(cpy_r_r60);
    cpy_r_instance_args = cpy_r_r60;
CPyL40: ;
    cpy_r_r61 = 0;
    cpy_r_r62 = 0;
CPyL41: ;
    cpy_r_r63 = (CPyPtr)&((PyVarObject *)cpy_r_tvars)->ob_size;
    cpy_r_r64 = *(int64_t *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 << 1;
    cpy_r_r66 = (Py_ssize_t)cpy_r_r61 < (Py_ssize_t)cpy_r_r65;
    if (!cpy_r_r66) goto CPyL70;
    cpy_r_r67 = (CPyPtr)&((PyVarObject *)cpy_r_instance_args)->ob_size;
    cpy_r_r68 = *(int64_t *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 << 1;
    cpy_r_r70 = (Py_ssize_t)cpy_r_r62 < (Py_ssize_t)cpy_r_r69;
    if (!cpy_r_r70) goto CPyL70;
    cpy_r_r71 = CPySequenceTuple_GetItem(cpy_r_tvars, cpy_r_r61);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 116, CPyStatic_expandtype___globals);
        goto CPyL71;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r71, CPyType_types___Type)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_type_by_instance", 116, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r71);
        goto CPyL71;
    }
    cpy_r_binder = cpy_r_r72;
    cpy_r_r73 = CPySequenceTuple_GetItem(cpy_r_instance_args, cpy_r_r62);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 116, CPyStatic_expandtype___globals);
        goto CPyL72;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r73, CPyType_types___Type)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_type_by_instance", 116, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r73);
        goto CPyL72;
    }
    cpy_r_arg = cpy_r_r74;
    cpy_r_r75 = (PyObject *)CPyType_types___TypeVarLikeType;
    cpy_r_r76 = CPy_TypeCheck(cpy_r_binder, cpy_r_r75);
    if (cpy_r_r76) {
        goto CPyL50;
    } else
        goto CPyL73;
CPyL48: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r77 = 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 117, CPyStatic_expandtype___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL50: ;
    if (likely(PyObject_TypeCheck(cpy_r_binder, CPyType_types___TypeVarLikeType)))
        cpy_r_r78 = cpy_r_binder;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_type_by_instance", 118, CPyStatic_expandtype___globals, "mypy.types.TypeVarLikeType", cpy_r_binder);
        goto CPyL74;
    }
    cpy_r_r79 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_r78)->_id;
    CPy_INCREF(cpy_r_r79);
    CPy_DECREF(cpy_r_binder);
    cpy_r_r80 = CPyDict_SetItem(cpy_r_variables, cpy_r_r79, cpy_r_arg);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 118, CPyStatic_expandtype___globals);
        goto CPyL71;
    }
    cpy_r_r82 = cpy_r_r61 + 2;
    cpy_r_r61 = cpy_r_r82;
    cpy_r_r83 = cpy_r_r62 + 2;
    cpy_r_r62 = cpy_r_r83;
    goto CPyL41;
CPyL53: ;
    cpy_r_r84 = CPyDef_expandtype___expand_type(cpy_r_typ, cpy_r_variables);
    CPy_DECREF(cpy_r_variables);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 120, CPyStatic_expandtype___globals);
        goto CPyL55;
    }
    return cpy_r_r84;
CPyL55: ;
    cpy_r_r85 = NULL;
    return cpy_r_r85;
CPyL56: ;
    CPy_DecRef(cpy_r_variables);
    goto CPyL55;
CPyL57: ;
    CPy_DECREF(cpy_r_variables);
    goto CPyL6;
CPyL58: ;
    CPy_DecRef(cpy_r_args_prefix);
    CPy_DecRef(cpy_r_args_middle);
    CPy_DecRef(cpy_r_args_suffix);
    goto CPyL55;
CPyL59: ;
    CPy_DecRef(cpy_r_args_prefix);
    CPy_DecRef(cpy_r_args_middle);
    CPy_DecRef(cpy_r_args_suffix);
    CPy_DecRef(cpy_r_r24);
    goto CPyL55;
CPyL60: ;
    CPy_DecRef(cpy_r_args_prefix);
    CPy_DecRef(cpy_r_args_middle);
    CPy_DecRef(cpy_r_args_suffix);
    CPy_DecRef(cpy_r_r24);
    CPyTagged_DecRef(cpy_r_r27);
    goto CPyL55;
CPyL61: ;
    CPy_DecRef(cpy_r_args_prefix);
    CPy_DecRef(cpy_r_args_middle);
    CPy_DecRef(cpy_r_args_suffix);
    CPy_DecRef(cpy_r_tvars_prefix);
    CPy_DecRef(cpy_r_tvars_suffix);
    goto CPyL55;
CPyL62: ;
    CPy_DECREF(cpy_r_args_prefix);
    CPy_DECREF(cpy_r_args_middle);
    CPy_DECREF(cpy_r_args_suffix);
    CPy_DECREF(cpy_r_tvars_prefix);
    CPy_DECREF(cpy_r_tvars_suffix);
    CPy_DECREF(cpy_r_tvar);
    goto CPyL25;
CPyL63: ;
    CPy_DecRef(cpy_r_args_prefix);
    CPy_DecRef(cpy_r_args_middle);
    CPy_DecRef(cpy_r_args_suffix);
    CPy_DecRef(cpy_r_tvars_prefix);
    CPy_DecRef(cpy_r_tvars_suffix);
    CPy_DecRef(cpy_r_tvar);
    goto CPyL55;
CPyL64: ;
    CPy_DecRef(cpy_r_args_prefix);
    CPy_DecRef(cpy_r_args_suffix);
    CPy_DecRef(cpy_r_tvars_prefix);
    CPy_DecRef(cpy_r_tvars_suffix);
    CPy_DecRef(cpy_r_tvar);
    CPy_DecRef(cpy_r_r43);
    goto CPyL55;
CPyL65: ;
    CPy_DecRef(cpy_r_args_prefix);
    CPy_DecRef(cpy_r_args_suffix);
    CPy_DecRef(cpy_r_tvars_prefix);
    CPy_DecRef(cpy_r_tvars_suffix);
    CPy_DecRef(cpy_r_tvar);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    goto CPyL55;
CPyL66: ;
    CPy_DecRef(cpy_r_args_prefix);
    CPy_DecRef(cpy_r_args_suffix);
    CPy_DecRef(cpy_r_tvars_prefix);
    CPy_DecRef(cpy_r_tvars_suffix);
    CPy_DecRef(cpy_r_r43);
    goto CPyL55;
CPyL67: ;
    CPy_DecRef(cpy_r_args_prefix);
    CPy_DecRef(cpy_r_args_suffix);
    CPy_DecRef(cpy_r_tvars_prefix);
    CPy_DecRef(cpy_r_tvars_suffix);
    goto CPyL55;
CPyL68: ;
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_tvars_prefix);
    CPy_DecRef(cpy_r_tvars_suffix);
    goto CPyL55;
CPyL69: ;
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_instance_args);
    goto CPyL55;
CPyL70: ;
    CPy_DECREF(cpy_r_instance_args);
    CPy_DECREF(cpy_r_tvars);
    goto CPyL53;
CPyL71: ;
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_tvars);
    goto CPyL55;
CPyL72: ;
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_binder);
    goto CPyL55;
CPyL73: ;
    CPy_DECREF(cpy_r_variables);
    CPy_DECREF(cpy_r_instance_args);
    CPy_DECREF(cpy_r_tvars);
    CPy_DECREF(cpy_r_binder);
    CPy_DECREF(cpy_r_arg);
    goto CPyL48;
CPyL74: ;
    CPy_DecRef(cpy_r_variables);
    CPy_DecRef(cpy_r_instance_args);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_binder);
    CPy_DecRef(cpy_r_arg);
    goto CPyL55;
}

PyObject *CPyPy_expandtype___expand_type_by_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", "instance", 0};
    static CPyArg_Parser parser = {"OO:expand_type_by_instance", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_instance;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_instance)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_instance;
    if (likely(Py_TYPE(obj_instance) == CPyType_types___Instance))
        arg_instance = obj_instance;
    else {
        CPy_TypeError("mypy.types.Instance", obj_instance); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___expand_type_by_instance(arg_typ, arg_instance);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "expand_type_by_instance", 90, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___freshen_function_type_vars(PyObject *cpy_r_callee) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_tvs;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_tvmap;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_tv;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
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
    CPyTagged cpy_r_r31;
    CPyTagged cpy_r_r32;
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
    PyObject *cpy_r_fresh;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    int64_t cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_fresh_overload;
    PyObject *cpy_r_r65;
    cpy_r_r0 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL21;
    CPy_INCREF(cpy_r_callee);
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_types___CallableType))
        cpy_r_r4 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "freshen_function_type_vars", 129, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_callee);
        goto CPyL36;
    }
    cpy_r_r5 = CPyDef_types___CallableType___is_generic(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 129, CPyStatic_expandtype___globals);
        goto CPyL36;
    }
    if (cpy_r_r5) goto CPyL6;
    CPy_INCREF(cpy_r_callee);
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_types___CallableType))
        cpy_r_r6 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "freshen_function_type_vars", 130, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_callee);
        goto CPyL36;
    }
    return cpy_r_r6;
CPyL6: ;
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 131, CPyStatic_expandtype___globals);
        goto CPyL36;
    }
    cpy_r_tvs = cpy_r_r7;
    cpy_r_r8 = PyDict_New();
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 132, CPyStatic_expandtype___globals);
        goto CPyL37;
    }
    cpy_r_tvmap = cpy_r_r8;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_types___CallableType))
        cpy_r_r9 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "freshen_function_type_vars", 133, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_callee);
        goto CPyL38;
    }
    cpy_r_r10 = ((mypy___types___CallableTypeObject *)cpy_r_r9)->_variables;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = PyObject_GetIter(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 133, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
CPyL10: ;
    cpy_r_r12 = PyIter_Next(cpy_r_r11);
    if (cpy_r_r12 == NULL) goto CPyL39;
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_types___TypeVarLikeType)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "freshen_function_type_vars", 133, CPyStatic_expandtype___globals, "mypy.types.TypeVarLikeType", cpy_r_r12);
        goto CPyL40;
    }
    cpy_r_v = cpy_r_r13;
    cpy_r_r14 = CPyDef_types___TypeVarLikeType___new_unification_variable((PyObject *)Py_TYPE(cpy_r_v), cpy_r_v);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 134, CPyStatic_expandtype___globals);
        goto CPyL41;
    }
    cpy_r_tv = cpy_r_r14;
    cpy_r_r15 = PyList_Append(cpy_r_tvs, cpy_r_tv);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 135, CPyStatic_expandtype___globals);
        goto CPyL42;
    }
    cpy_r_r17 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_v)->_id;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_v);
    cpy_r_r18 = CPyDict_SetItem(cpy_r_tvmap, cpy_r_r17, cpy_r_tv);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_tv);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 136, CPyStatic_expandtype___globals);
        goto CPyL40;
    } else
        goto CPyL10;
CPyL15: ;
    cpy_r_r20 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 133, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_callee);
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_types___CallableType))
        cpy_r_r21 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "freshen_function_type_vars", 137, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_callee);
        goto CPyL38;
    }
    cpy_r_r22 = CPyDef_expandtype___expand_type(cpy_r_r21, cpy_r_tvmap);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_tvmap);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 137, CPyStatic_expandtype___globals);
        goto CPyL37;
    }
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_types___CallableType))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "freshen_function_type_vars", 137, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_r22);
        goto CPyL37;
    }
    cpy_r_r24 = NULL;
    cpy_r_r25 = NULL;
    cpy_r_r26 = NULL;
    cpy_r_r27 = NULL;
    cpy_r_r28 = NULL;
    cpy_r_r29 = NULL;
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPY_INT_TAG;
    cpy_r_r32 = CPY_INT_TAG;
    cpy_r_r33 = NULL;
    cpy_r_r34 = NULL;
    cpy_r_r35 = NULL;
    cpy_r_r36 = NULL;
    cpy_r_r37 = NULL;
    cpy_r_r38 = NULL;
    cpy_r_r39 = NULL;
    cpy_r_r40 = NULL;
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPyDef_types___CallableType___copy_modified(cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_tvs, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_tvs);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 137, CPyStatic_expandtype___globals);
        goto CPyL36;
    }
    cpy_r_fresh = cpy_r_r42;
    return cpy_r_fresh;
CPyL21: ;
    cpy_r_r43 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r44 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r45 = *(PyObject * *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 == cpy_r_r43;
    if (cpy_r_r46) goto CPyL24;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r47 = 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 140, CPyStatic_expandtype___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL24: ;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_types___Overloaded))
        cpy_r_r48 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "freshen_function_type_vars", 141, CPyStatic_expandtype___globals, "mypy.types.Overloaded", cpy_r_callee);
        goto CPyL36;
    }
    cpy_r_r49 = CPY_GET_ATTR(cpy_r_r48, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 141, CPyStatic_expandtype___globals);
        goto CPyL36;
    }
CPyL26: ;
    cpy_r_r50 = (CPyPtr)&((PyVarObject *)cpy_r_r49)->ob_size;
    cpy_r_r51 = *(int64_t *)cpy_r_r50;
    cpy_r_r52 = PyList_New(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 141, CPyStatic_expandtype___globals);
        goto CPyL43;
    }
    cpy_r_r53 = 0;
CPyL28: ;
    cpy_r_r54 = (CPyPtr)&((PyVarObject *)cpy_r_r49)->ob_size;
    cpy_r_r55 = *(int64_t *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 << 1;
    cpy_r_r57 = (Py_ssize_t)cpy_r_r53 < (Py_ssize_t)cpy_r_r56;
    if (!cpy_r_r57) goto CPyL44;
    cpy_r_r58 = CPyList_GetItemUnsafe(cpy_r_r49, cpy_r_r53);
    if (likely(Py_TYPE(cpy_r_r58) == CPyType_types___CallableType))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "freshen_function_type_vars", 141, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_r58);
        goto CPyL45;
    }
    cpy_r_item = cpy_r_r59;
    cpy_r_r60 = CPyDef_expandtype___freshen_function_type_vars(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 141, CPyStatic_expandtype___globals);
        goto CPyL45;
    }
    if (likely(Py_TYPE(cpy_r_r60) == CPyType_types___CallableType))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "freshen_function_type_vars", 141, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_r60);
        goto CPyL45;
    }
    cpy_r_r62 = CPyList_SetItemUnsafe(cpy_r_r52, cpy_r_r53, cpy_r_r61);
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 141, CPyStatic_expandtype___globals);
        goto CPyL45;
    }
    cpy_r_r63 = cpy_r_r53 + 2;
    cpy_r_r53 = cpy_r_r63;
    goto CPyL28;
CPyL34: ;
    cpy_r_r64 = CPyDef_types___Overloaded(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 141, CPyStatic_expandtype___globals);
        goto CPyL36;
    }
    cpy_r_fresh_overload = cpy_r_r64;
    return cpy_r_fresh_overload;
CPyL36: ;
    cpy_r_r65 = NULL;
    return cpy_r_r65;
CPyL37: ;
    CPy_DecRef(cpy_r_tvs);
    goto CPyL36;
CPyL38: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tvmap);
    goto CPyL36;
CPyL39: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL15;
CPyL40: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tvmap);
    CPy_DecRef(cpy_r_r11);
    goto CPyL36;
CPyL41: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tvmap);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_v);
    goto CPyL36;
CPyL42: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tvmap);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_v);
    CPy_DecRef(cpy_r_tv);
    goto CPyL36;
CPyL43: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL36;
CPyL44: ;
    CPy_DECREF(cpy_r_r49);
    goto CPyL34;
CPyL45: ;
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r52);
    goto CPyL36;
}

PyObject *CPyPy_expandtype___freshen_function_type_vars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"callee", 0};
    static CPyArg_Parser parser = {"O:freshen_function_type_vars", kwlist, 0};
    PyObject *obj_callee;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_callee)) {
        return NULL;
    }
    PyObject *arg_callee;
    if (likely((Py_TYPE(obj_callee) == CPyType_types___CallableType) || (Py_TYPE(obj_callee) == CPyType_types___Overloaded)))
        arg_callee = obj_callee;
    else {
        CPy_TypeError("mypy.types.FunctionLike", obj_callee); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___freshen_function_type_vars(arg_callee);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "freshen_function_type_vars", 126, CPyStatic_expandtype___globals);
    return NULL;
}

char CPyDef_expandtype___HasGenericCallable_____init__(PyObject *cpy_r_self) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery_____init__(cpy_r_self, 0);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/expandtype.py", "__init__", 147, CPyStatic_expandtype___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___HasGenericCallable_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_expandtype___HasGenericCallable))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.HasGenericCallable", obj_self); 
        goto fail;
    }
    char retval = CPyDef_expandtype___HasGenericCallable_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "__init__", 146, CPyStatic_expandtype___globals);
    return NULL;
}

char CPyDef_expandtype___HasGenericCallable___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_types___CallableType___is_generic(cpy_r_t);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 150, CPyStatic_expandtype___globals);
        goto CPyL6;
    }
    if (!cpy_r_r0) goto CPyL3;
    cpy_r_r1 = cpy_r_r0;
    goto CPyL5;
CPyL3: ;
    cpy_r_r2 = CPyDef_type_visitor___BoolTypeQuery___visit_callable_type(cpy_r_self, cpy_r_t);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 150, CPyStatic_expandtype___globals);
        goto CPyL6;
    }
    cpy_r_r1 = cpy_r_r2;
CPyL5: ;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_expandtype___HasGenericCallable___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_expandtype___HasGenericCallable))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.HasGenericCallable", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_expandtype___HasGenericCallable___visit_callable_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 149, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___HasGenericCallable___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_expandtype___HasGenericCallable___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_expandtype___HasGenericCallable___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_expandtype___HasGenericCallable))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.HasGenericCallable", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___HasGenericCallable___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___freshen_all_functions_type_vars(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyStatic_expandtype___has_generic_callable;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"has_generic_callable\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_all_functions_type_vars", 162, CPyStatic_expandtype___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = CPyDef_type_visitor___BoolTypeQuery___reset(cpy_r_r0);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_all_functions_type_vars", 162, CPyStatic_expandtype___globals);
        goto CPyL19;
    }
    cpy_r_r3 = CPyStatic_expandtype___has_generic_callable;
    if (likely(cpy_r_r3 != NULL)) goto CPyL7;
    PyErr_SetString(PyExc_NameError, "value for final name \"has_generic_callable\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_all_functions_type_vars", 163, CPyStatic_expandtype___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r5 = CPY_GET_METHOD(cpy_r_t, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_r3); /* accept */
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_all_functions_type_vars", 163, CPyStatic_expandtype___globals);
        goto CPyL19;
    }
    if (unlikely(!PyBool_Check(cpy_r_r5))) {
        CPy_TypeError("bool", cpy_r_r5); cpy_r_r6 = 2;
    } else
        cpy_r_r6 = cpy_r_r5 == Py_True;
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_all_functions_type_vars", 163, CPyStatic_expandtype___globals);
        goto CPyL19;
    }
    if (cpy_r_r6) goto CPyL11;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL11: ;
    cpy_r_r7 = CPyDef_expandtype___FreshenCallableVisitor();
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_all_functions_type_vars", 166, CPyStatic_expandtype___globals);
        goto CPyL19;
    }
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_t, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_r7); /* accept */
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_all_functions_type_vars", 166, CPyStatic_expandtype___globals);
        goto CPyL19;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "freshen_all_functions_type_vars", 166, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL19;
    }
    cpy_r_result = cpy_r_r9;
    cpy_r_r10 = PyObject_Type(cpy_r_t);
    cpy_r_r11 = PyObject_IsInstance(cpy_r_result, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_all_functions_type_vars", 167, CPyStatic_expandtype___globals);
        goto CPyL20;
    }
    cpy_r_r13 = cpy_r_r11;
    if (cpy_r_r13) {
        goto CPyL18;
    } else
        goto CPyL21;
CPyL16: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/expandtype.py", "freshen_all_functions_type_vars", 167, CPyStatic_expandtype___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL18: ;
    return cpy_r_result;
CPyL19: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL20: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL19;
CPyL21: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL16;
}

PyObject *CPyPy_expandtype___freshen_all_functions_type_vars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:freshen_all_functions_type_vars", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___freshen_all_functions_type_vars(arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "freshen_all_functions_type_vars", 160, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___FreshenCallableVisitor___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_callable_type(cpy_r_self, cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 173, CPyStatic_expandtype___globals);
        goto CPyL11;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r2 = CPy_TypeCheck(cpy_r_result, cpy_r_r1);
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = cpy_r_r2;
    goto CPyL4;
CPyL3: ;
    cpy_r_r4 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_result)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    cpy_r_r3 = cpy_r_r7;
CPyL4: ;
    if (cpy_r_r3) {
        goto CPyL7;
    } else
        goto CPyL12;
CPyL5: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 174, CPyStatic_expandtype___globals);
        goto CPyL11;
    }
    CPy_Unreachable();
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_result) == CPyType_types___CallableType))
        cpy_r_r9 = cpy_r_result;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 175, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_result);
        goto CPyL11;
    }
    cpy_r_r10 = CPyDef_expandtype___freshen_function_type_vars(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 175, CPyStatic_expandtype___globals);
        goto CPyL11;
    }
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_types___CallableType))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 175, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_r10);
        goto CPyL11;
    }
    return cpy_r_r11;
CPyL11: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL12: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL5;
}

PyObject *CPyPy_expandtype___FreshenCallableVisitor___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_expandtype___FreshenCallableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.FreshenCallableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___FreshenCallableVisitor___visit_callable_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 172, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___FreshenCallableVisitor___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___FreshenCallableVisitor___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___FreshenCallableVisitor___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_expandtype___FreshenCallableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.FreshenCallableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___FreshenCallableVisitor___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___FreshenCallableVisitor___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_alias_type", 179, CPyStatic_expandtype___globals);
        goto CPyL11;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL12;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_types___Type)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_type_alias_type", 179, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r9);
        goto CPyL13;
    }
    cpy_r_arg = cpy_r_r10;
    cpy_r_r11 = CPY_GET_METHOD(cpy_r_arg, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_arg, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_alias_type", 179, CPyStatic_expandtype___globals);
        goto CPyL13;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_type_alias_type", 179, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL13;
    }
    cpy_r_r13 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r12);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_alias_type", 179, CPyStatic_expandtype___globals);
        goto CPyL13;
    }
    cpy_r_r14 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r14;
    goto CPyL2;
CPyL8: ;
    cpy_r_r15 = CPyDef_types___TypeAliasType___copy_modified(cpy_r_t, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_alias_type", 179, CPyStatic_expandtype___globals);
        goto CPyL10;
    }
    return cpy_r_r15;
CPyL10: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
}

PyObject *CPyPy_expandtype___FreshenCallableVisitor___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_expandtype___FreshenCallableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.FreshenCallableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___FreshenCallableVisitor___visit_type_alias_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_type_alias_type", 177, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___FreshenCallableVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___FreshenCallableVisitor___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___FreshenCallableVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_expandtype___FreshenCallableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.FreshenCallableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___FreshenCallableVisitor___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

char CPyDef_expandtype___ExpandTypeVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_variables) {
    char cpy_r_r0;
    char cpy_r_r1;
    CPy_INCREF(cpy_r_variables);
    if (((mypy___expandtype___ExpandTypeVisitorObject *)cpy_r_self)->_variables != NULL) {
        CPy_DECREF(((mypy___expandtype___ExpandTypeVisitorObject *)cpy_r_self)->_variables);
    }
    ((mypy___expandtype___ExpandTypeVisitorObject *)cpy_r_self)->_variables = cpy_r_variables;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/expandtype.py", "__init__", 188, CPyStatic_expandtype___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"variables", 0};
    PyObject *obj_variables;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_variables)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_variables = obj_variables;
    char retval = CPyDef_expandtype___ExpandTypeVisitor_____init__(arg_self, arg_variables);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "__init__", 187, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_unbound_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_unbound_type", 190, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_unbound_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_any(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_any", 193, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_none_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_none_type", 196, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_none_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_uninhabited_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_uninhabited_type", 199, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_deleted_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_deleted_type", 202, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_deleted_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_erased_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_erased_type", 205, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_erased_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PySequence_List(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_instance", 215, CPyStatic_expandtype___globals);
        goto CPyL9;
    }
    cpy_r_r2 = CPyDef_expandtype___ExpandTypeVisitor___expand_types_with_unpack(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_instance", 215, CPyStatic_expandtype___globals);
        goto CPyL9;
    }
    cpy_r_args = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&PyList_Type;
    cpy_r_r4 = PyObject_IsInstance(cpy_r_args, cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_instance", 216, CPyStatic_expandtype___globals);
        goto CPyL10;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL7;
    if (likely(PyList_Check(cpy_r_args)))
        cpy_r_r7 = cpy_r_args;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_instance", 217, CPyStatic_expandtype___globals, "list", cpy_r_args);
        goto CPyL9;
    }
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_types___Instance___copy_modified(cpy_r_t, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_instance", 217, CPyStatic_expandtype___globals);
        goto CPyL9;
    }
    return cpy_r_r9;
CPyL7: ;
    if (Py_TYPE(cpy_r_args) == CPyType_types___AnyType)
        cpy_r_r10 = cpy_r_args;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL2651;
    if (Py_TYPE(cpy_r_args) == CPyType_types___UninhabitedType)
        cpy_r_r10 = cpy_r_args;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL2651;
    if (Py_TYPE(cpy_r_args) == CPyType_types___Instance)
        cpy_r_r10 = cpy_r_args;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL2651;
    CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_instance", 219, CPyStatic_expandtype___globals, "union[mypy.types.AnyType, mypy.types.UninhabitedType, mypy.types.Instance]", cpy_r_args);
    goto CPyL9;
__LL2651: ;
    return cpy_r_r10;
CPyL9: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL10: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL9;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_instance(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_instance", 214, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_repl;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = ((mypy___types___TypeVarTypeObject *)cpy_r_t)->_id;
    cpy_r_r1 = ((mypy___types___TypeVarIdObject *)cpy_r_r0)->_raw_id;
    cpy_r_r2 = cpy_r_r1 == 0;
    if (!cpy_r_r2) goto CPyL16;
    cpy_r_r3 = ((mypy___types___TypeVarTypeObject *)cpy_r_t)->_upper_bound;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPY_GET_METHOD(cpy_r_r3, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r3, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_var", 225, CPyStatic_expandtype___globals);
        goto CPyL15;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r4, CPyType_types___Type)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_type_var", 225, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r4);
        goto CPyL15;
    }
    cpy_r_r6 = PyDict_New();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_var", 225, CPyStatic_expandtype___globals);
        goto CPyL17;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = CPyDef_types___TypeVarType___copy_modified(cpy_r_t, cpy_r_r7, cpy_r_r5, cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_var", 225, CPyStatic_expandtype___globals);
        goto CPyL15;
    }
    cpy_r_t = cpy_r_r12;
CPyL6: ;
    cpy_r_r13 = ((mypy___expandtype___ExpandTypeVisitorObject *)cpy_r_self)->_variables;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/expandtype.py", "visit_type_var", "ExpandTypeVisitor", "variables", 226, CPyStatic_expandtype___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r13);
CPyL7: ;
    cpy_r_r14 = ((mypy___types___TypeVarTypeObject *)cpy_r_t)->_id;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyStatics[308]; /* 'get' */
    PyObject *cpy_r_r16[3] = {cpy_r_r13, cpy_r_r14, cpy_r_t};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_VectorcallMethod(cpy_r_r15, cpy_r_r17, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_var", 226, CPyStatic_expandtype___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_types___Type)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_type_var", 226, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r18);
        goto CPyL15;
    }
    cpy_r_repl = cpy_r_r19;
    cpy_r_r20 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r21 = CPy_TypeCheck(cpy_r_repl, cpy_r_r20);
    if (!cpy_r_r21) goto CPyL14;
    cpy_r_r22 = (PyObject *)CPyType_types___Instance;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    if (!cpy_r_r25) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___Instance))
        cpy_r_r26 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_type_var", 230, CPyStatic_expandtype___globals, "mypy.types.Instance", cpy_r_repl);
        goto CPyL15;
    }
    cpy_r_r27 = NULL;
    cpy_r_r28 = Py_None;
    cpy_r_r29 = CPyDef_types___Instance___copy_modified(cpy_r_r26, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_var", 230, CPyStatic_expandtype___globals);
        goto CPyL15;
    }
    return cpy_r_r29;
CPyL14: ;
    return cpy_r_repl;
CPyL15: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL16: ;
    CPy_INCREF(cpy_r_t);
    goto CPyL6;
CPyL17: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL15;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_type_var(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_type_var", 221, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_repl;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
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
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyPtr cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_param_spec;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyPtr cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
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
    CPyPtr cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
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
    CPyPtr cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
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
    CPyPtr cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    CPyTagged cpy_r_r149;
    CPyTagged cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    cpy_r_r0 = ((mypy___expandtype___ExpandTypeVisitorObject *)cpy_r_self)->_variables;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/expandtype.py", "visit_param_spec", "ExpandTypeVisitor", "variables", 236, CPyStatic_expandtype___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_id;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 236, CPyStatic_expandtype___globals);
        goto CPyL85;
    }
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 236, CPyStatic_expandtype___globals);
        goto CPyL86;
    }
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 236, CPyStatic_expandtype___globals);
        goto CPyL87;
    }
    cpy_r_r5 = NULL;
    cpy_r_r6 = 2;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = CPyDef_types___Parameters(cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 236, CPyStatic_expandtype___globals);
        goto CPyL85;
    }
    cpy_r_r10 = PyDict_New();
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 236, CPyStatic_expandtype___globals);
        goto CPyL88;
    }
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPY_INT_TAG;
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPyDef_types___ParamSpecType___copy_modified(cpy_r_t, cpy_r_r11, cpy_r_r12, cpy_r_r9, cpy_r_r13, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 236, CPyStatic_expandtype___globals);
        goto CPyL85;
    }
    cpy_r_r15 = CPyStatics[308]; /* 'get' */
    PyObject *cpy_r_r16[3] = {cpy_r_r0, cpy_r_r1, cpy_r_r14};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_VectorcallMethod(cpy_r_r15, cpy_r_r17, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 236, CPyStatic_expandtype___globals);
        goto CPyL89;
    }
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_types___Type)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 236, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r18);
        goto CPyL84;
    }
    cpy_r_r20 = CPyDef_types___get_proper_type(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 235, CPyStatic_expandtype___globals);
        goto CPyL84;
    }
    if (likely(cpy_r_r20 != Py_None))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 235, CPyStatic_expandtype___globals, "mypy.types.ProperType", cpy_r_r20);
        goto CPyL84;
    }
    cpy_r_repl = cpy_r_r21;
    cpy_r_r22 = (PyObject *)CPyType_types___Instance;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    if (!cpy_r_r25) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___Instance))
        cpy_r_r26 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 241, CPyStatic_expandtype___globals, "mypy.types.Instance", cpy_r_repl);
        goto CPyL84;
    }
    return cpy_r_r26;
CPyL14: ;
    cpy_r_r27 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    if (!cpy_r_r30) goto CPyL16;
    cpy_r_r31 = cpy_r_r30;
    goto CPyL17;
CPyL16: ;
    cpy_r_r32 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    cpy_r_r31 = cpy_r_r35;
CPyL17: ;
    if (!cpy_r_r31) goto CPyL19;
    cpy_r_r36 = cpy_r_r31;
    goto CPyL20;
CPyL19: ;
    cpy_r_r37 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    cpy_r_r36 = cpy_r_r40;
CPyL20: ;
    if (!cpy_r_r36) goto CPyL83;
    cpy_r_r41 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL36;
    CPy_INCREF(cpy_r_repl);
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___ParamSpecType))
        cpy_r_r45 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 244, CPyStatic_expandtype___globals, "mypy.types.ParamSpecType", cpy_r_repl);
        goto CPyL90;
    }
    cpy_r_r46 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_flavor;
    CPyTagged_INCREF(cpy_r_r46);
    cpy_r_r47 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_prefix;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_prefix;
    cpy_r_r49 = ((mypy___types___ParametersObject *)cpy_r_r48)->_arg_types;
    CPy_INCREF(cpy_r_r49);
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___ParamSpecType))
        cpy_r_r50 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 247, CPyStatic_expandtype___globals, "mypy.types.ParamSpecType", cpy_r_repl);
        goto CPyL91;
    }
    cpy_r_r51 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r50)->_prefix;
    cpy_r_r52 = ((mypy___types___ParametersObject *)cpy_r_r51)->_arg_types;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = PyNumber_Add(cpy_r_r49, cpy_r_r52);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 247, CPyStatic_expandtype___globals);
        goto CPyL92;
    }
    if (likely(PyList_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 247, CPyStatic_expandtype___globals, "list", cpy_r_r53);
        goto CPyL92;
    }
    cpy_r_r55 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_prefix;
    cpy_r_r56 = ((mypy___types___ParametersObject *)cpy_r_r55)->_arg_kinds;
    CPy_INCREF(cpy_r_r56);
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___ParamSpecType))
        cpy_r_r57 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 248, CPyStatic_expandtype___globals, "mypy.types.ParamSpecType", cpy_r_repl);
        goto CPyL93;
    }
    cpy_r_r58 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r57)->_prefix;
    cpy_r_r59 = ((mypy___types___ParametersObject *)cpy_r_r58)->_arg_kinds;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = PyNumber_Add(cpy_r_r56, cpy_r_r59);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 248, CPyStatic_expandtype___globals);
        goto CPyL94;
    }
    if (likely(PyList_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 248, CPyStatic_expandtype___globals, "list", cpy_r_r60);
        goto CPyL94;
    }
    cpy_r_r62 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_prefix;
    cpy_r_r63 = ((mypy___types___ParametersObject *)cpy_r_r62)->_arg_names;
    CPy_INCREF(cpy_r_r63);
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___ParamSpecType))
        cpy_r_r64 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 249, CPyStatic_expandtype___globals, "mypy.types.ParamSpecType", cpy_r_repl);
        goto CPyL95;
    }
    cpy_r_r65 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r64)->_prefix;
    cpy_r_r66 = ((mypy___types___ParametersObject *)cpy_r_r65)->_arg_names;
    CPy_INCREF(cpy_r_r66);
    CPy_DECREF(cpy_r_repl);
    cpy_r_r67 = PyNumber_Add(cpy_r_r63, cpy_r_r66);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 249, CPyStatic_expandtype___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r67)))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 249, CPyStatic_expandtype___globals, "list", cpy_r_r67);
        goto CPyL96;
    }
    cpy_r_r69 = NULL;
    cpy_r_r70 = NULL;
    cpy_r_r71 = CPyDef_types___Parameters___copy_modified(cpy_r_r47, cpy_r_r54, cpy_r_r61, cpy_r_r68, cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 246, CPyStatic_expandtype___globals);
        goto CPyL97;
    }
    cpy_r_r72 = PyDict_New();
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 244, CPyStatic_expandtype___globals);
        goto CPyL98;
    }
    cpy_r_r73 = NULL;
    cpy_r_r74 = NULL;
    cpy_r_r75 = CPyDef_types___ParamSpecType___copy_modified(cpy_r_r45, cpy_r_r73, cpy_r_r46, cpy_r_r71, cpy_r_r74, cpy_r_r72);
    CPyTagged_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 244, CPyStatic_expandtype___globals);
        goto CPyL84;
    }
    return cpy_r_r75;
CPyL36: ;
    cpy_r_r76 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_flavor;
    cpy_r_r77 = cpy_r_r76 != 0;
    if (!cpy_r_r77) goto CPyL48;
    cpy_r_r78 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r79 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r80 = *(PyObject * *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 == cpy_r_r78;
    if (cpy_r_r81) {
        goto CPyL40;
    } else
        goto CPyL99;
CPyL38: ;
    PyErr_SetString(PyExc_AssertionError, "Should not be able to get here.");
    cpy_r_r82 = 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 255, CPyStatic_expandtype___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL40: ;
    CPy_INCREF(cpy_r_repl);
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___CallableType))
        cpy_r_r83 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 257, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_repl);
        goto CPyL90;
    }
    cpy_r_r84 = CPyDef_types___CallableType___param_spec(cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 257, CPyStatic_expandtype___globals);
        goto CPyL90;
    }
    cpy_r_param_spec = cpy_r_r84;
    cpy_r_r85 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r86 = cpy_r_param_spec != cpy_r_r85;
    if (cpy_r_r86) {
        goto CPyL100;
    } else
        goto CPyL101;
CPyL43: ;
    if (likely(cpy_r_param_spec != Py_None))
        cpy_r_r87 = cpy_r_param_spec;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 259, CPyStatic_expandtype___globals, "mypy.types.ParamSpecType", cpy_r_param_spec);
        goto CPyL84;
    }
    cpy_r_r88 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_flavor;
    CPyTagged_INCREF(cpy_r_r88);
    cpy_r_r89 = CPyDef_types___ParamSpecType___with_flavor(cpy_r_r87, cpy_r_r88);
    CPyTagged_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 259, CPyStatic_expandtype___globals);
        goto CPyL84;
    }
    return cpy_r_r89;
CPyL46: ;
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___CallableType))
        cpy_r_r90 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 261, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_repl);
        goto CPyL84;
    }
    return cpy_r_r90;
CPyL48: ;
    cpy_r_r91 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_prefix;
    cpy_r_r92 = ((mypy___types___ParametersObject *)cpy_r_r91)->_arg_types;
    CPy_INCREF(cpy_r_r92);
    CPy_INCREF(cpy_r_repl);
    if (Py_TYPE(cpy_r_repl) == CPyType_types___Parameters)
        cpy_r_r93 = cpy_r_repl;
    else {
        cpy_r_r93 = NULL;
    }
    if (cpy_r_r93 != NULL) goto __LL2652;
    if (Py_TYPE(cpy_r_repl) == CPyType_types___CallableType)
        cpy_r_r93 = cpy_r_repl;
    else {
        cpy_r_r93 = NULL;
    }
    if (cpy_r_r93 != NULL) goto __LL2652;
    CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 264, CPyStatic_expandtype___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_repl);
    goto CPyL102;
__LL2652: ;
    cpy_r_r94 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r95 = (CPyPtr)&((PyObject *)cpy_r_r93)->ob_type;
    cpy_r_r96 = *(PyObject * *)cpy_r_r95;
    cpy_r_r97 = cpy_r_r96 == cpy_r_r94;
    if (!cpy_r_r97) goto CPyL52;
    if (likely(Py_TYPE(cpy_r_r93) == CPyType_types___Parameters))
        cpy_r_r98 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 264, CPyStatic_expandtype___globals, "mypy.types.Parameters", cpy_r_r93);
        goto CPyL102;
    }
    cpy_r_r99 = ((mypy___types___ParametersObject *)cpy_r_r98)->_arg_types;
    CPy_INCREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r100 = cpy_r_r99;
    goto CPyL54;
CPyL52: ;
    if (likely(Py_TYPE(cpy_r_r93) == CPyType_types___CallableType))
        cpy_r_r101 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 264, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_r93);
        goto CPyL102;
    }
    cpy_r_r102 = ((mypy___types___CallableTypeObject *)cpy_r_r101)->_arg_types;
    CPy_INCREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r101);
    cpy_r_r100 = cpy_r_r102;
CPyL54: ;
    cpy_r_r103 = PyNumber_Add(cpy_r_r92, cpy_r_r100);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 264, CPyStatic_expandtype___globals);
        goto CPyL90;
    }
    if (likely(PyList_Check(cpy_r_r103)))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 264, CPyStatic_expandtype___globals, "list", cpy_r_r103);
        goto CPyL90;
    }
    cpy_r_r105 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_prefix;
    cpy_r_r106 = ((mypy___types___ParametersObject *)cpy_r_r105)->_arg_kinds;
    CPy_INCREF(cpy_r_r106);
    CPy_INCREF(cpy_r_repl);
    if (Py_TYPE(cpy_r_repl) == CPyType_types___Parameters)
        cpy_r_r107 = cpy_r_repl;
    else {
        cpy_r_r107 = NULL;
    }
    if (cpy_r_r107 != NULL) goto __LL2653;
    if (Py_TYPE(cpy_r_repl) == CPyType_types___CallableType)
        cpy_r_r107 = cpy_r_repl;
    else {
        cpy_r_r107 = NULL;
    }
    if (cpy_r_r107 != NULL) goto __LL2653;
    CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 265, CPyStatic_expandtype___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_repl);
    goto CPyL103;
__LL2653: ;
    cpy_r_r108 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r109 = (CPyPtr)&((PyObject *)cpy_r_r107)->ob_type;
    cpy_r_r110 = *(PyObject * *)cpy_r_r109;
    cpy_r_r111 = cpy_r_r110 == cpy_r_r108;
    if (!cpy_r_r111) goto CPyL60;
    if (likely(Py_TYPE(cpy_r_r107) == CPyType_types___Parameters))
        cpy_r_r112 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 265, CPyStatic_expandtype___globals, "mypy.types.Parameters", cpy_r_r107);
        goto CPyL103;
    }
    cpy_r_r113 = ((mypy___types___ParametersObject *)cpy_r_r112)->_arg_kinds;
    CPy_INCREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r114 = cpy_r_r113;
    goto CPyL62;
CPyL60: ;
    if (likely(Py_TYPE(cpy_r_r107) == CPyType_types___CallableType))
        cpy_r_r115 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 265, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_r107);
        goto CPyL103;
    }
    cpy_r_r116 = ((mypy___types___CallableTypeObject *)cpy_r_r115)->_arg_kinds;
    CPy_INCREF(cpy_r_r116);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r114 = cpy_r_r116;
CPyL62: ;
    cpy_r_r117 = PyNumber_Add(cpy_r_r106, cpy_r_r114);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 265, CPyStatic_expandtype___globals);
        goto CPyL104;
    }
    if (likely(PyList_Check(cpy_r_r117)))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 265, CPyStatic_expandtype___globals, "list", cpy_r_r117);
        goto CPyL104;
    }
    cpy_r_r119 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_prefix;
    cpy_r_r120 = ((mypy___types___ParametersObject *)cpy_r_r119)->_arg_names;
    CPy_INCREF(cpy_r_r120);
    CPy_INCREF(cpy_r_repl);
    if (Py_TYPE(cpy_r_repl) == CPyType_types___Parameters)
        cpy_r_r121 = cpy_r_repl;
    else {
        cpy_r_r121 = NULL;
    }
    if (cpy_r_r121 != NULL) goto __LL2654;
    if (Py_TYPE(cpy_r_repl) == CPyType_types___CallableType)
        cpy_r_r121 = cpy_r_repl;
    else {
        cpy_r_r121 = NULL;
    }
    if (cpy_r_r121 != NULL) goto __LL2654;
    CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 266, CPyStatic_expandtype___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_repl);
    goto CPyL105;
__LL2654: ;
    cpy_r_r122 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r123 = (CPyPtr)&((PyObject *)cpy_r_r121)->ob_type;
    cpy_r_r124 = *(PyObject * *)cpy_r_r123;
    cpy_r_r125 = cpy_r_r124 == cpy_r_r122;
    if (!cpy_r_r125) goto CPyL68;
    if (likely(Py_TYPE(cpy_r_r121) == CPyType_types___Parameters))
        cpy_r_r126 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 266, CPyStatic_expandtype___globals, "mypy.types.Parameters", cpy_r_r121);
        goto CPyL105;
    }
    cpy_r_r127 = ((mypy___types___ParametersObject *)cpy_r_r126)->_arg_names;
    CPy_INCREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r126);
    cpy_r_r128 = cpy_r_r127;
    goto CPyL70;
CPyL68: ;
    if (likely(Py_TYPE(cpy_r_r121) == CPyType_types___CallableType))
        cpy_r_r129 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 266, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_r121);
        goto CPyL105;
    }
    cpy_r_r130 = ((mypy___types___CallableTypeObject *)cpy_r_r129)->_arg_names;
    CPy_INCREF(cpy_r_r130);
    CPy_DECREF(cpy_r_r129);
    cpy_r_r128 = cpy_r_r130;
CPyL70: ;
    cpy_r_r131 = PyNumber_Add(cpy_r_r120, cpy_r_r128);
    CPy_DECREF(cpy_r_r120);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 266, CPyStatic_expandtype___globals);
        goto CPyL106;
    }
    if (likely(PyList_Check(cpy_r_r131)))
        cpy_r_r132 = cpy_r_r131;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 266, CPyStatic_expandtype___globals, "list", cpy_r_r131);
        goto CPyL106;
    }
    cpy_r_r133 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_prefix;
    cpy_r_r134 = ((mypy___types___ParametersObject *)cpy_r_r133)->_variables;
    CPy_INCREF(cpy_r_r134);
    if (Py_TYPE(cpy_r_repl) == CPyType_types___Parameters)
        cpy_r_r135 = cpy_r_repl;
    else {
        cpy_r_r135 = NULL;
    }
    if (cpy_r_r135 != NULL) goto __LL2655;
    if (Py_TYPE(cpy_r_repl) == CPyType_types___CallableType)
        cpy_r_r135 = cpy_r_repl;
    else {
        cpy_r_r135 = NULL;
    }
    if (cpy_r_r135 != NULL) goto __LL2655;
    CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 267, CPyStatic_expandtype___globals, "union[mypy.types.Parameters, mypy.types.CallableType]", cpy_r_repl);
    goto CPyL107;
__LL2655: ;
    cpy_r_r136 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r137 = (CPyPtr)&((PyObject *)cpy_r_r135)->ob_type;
    cpy_r_r138 = *(PyObject * *)cpy_r_r137;
    cpy_r_r139 = cpy_r_r138 == cpy_r_r136;
    if (!cpy_r_r139) goto CPyL76;
    if (likely(Py_TYPE(cpy_r_r135) == CPyType_types___Parameters))
        cpy_r_r140 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 267, CPyStatic_expandtype___globals, "mypy.types.Parameters", cpy_r_r135);
        goto CPyL107;
    }
    cpy_r_r141 = ((mypy___types___ParametersObject *)cpy_r_r140)->_variables;
    CPy_INCREF(cpy_r_r141);
    CPy_DECREF(cpy_r_r140);
    cpy_r_r142 = cpy_r_r141;
    goto CPyL78;
CPyL76: ;
    if (likely(Py_TYPE(cpy_r_r135) == CPyType_types___CallableType))
        cpy_r_r143 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_param_spec", 267, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_r135);
        goto CPyL107;
    }
    cpy_r_r144 = ((mypy___types___CallableTypeObject *)cpy_r_r143)->_variables;
    CPy_INCREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r143);
    cpy_r_r142 = cpy_r_r144;
CPyL78: ;
    cpy_r_r145 = PyList_New(0);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 267, CPyStatic_expandtype___globals);
        goto CPyL108;
    }
    cpy_r_r146 = CPyList_Extend(cpy_r_r145, cpy_r_r134);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 267, CPyStatic_expandtype___globals);
        goto CPyL109;
    } else
        goto CPyL110;
CPyL80: ;
    cpy_r_r147 = CPyList_Extend(cpy_r_r145, cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 267, CPyStatic_expandtype___globals);
        goto CPyL111;
    } else
        goto CPyL112;
CPyL81: ;
    cpy_r_r148 = 2;
    cpy_r_r149 = CPY_INT_TAG;
    cpy_r_r150 = CPY_INT_TAG;
    cpy_r_r151 = CPyDef_types___Parameters(cpy_r_r104, cpy_r_r118, cpy_r_r132, cpy_r_r145, cpy_r_r148, cpy_r_r149, cpy_r_r150);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r118);
    CPy_DECREF(cpy_r_r132);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 263, CPyStatic_expandtype___globals);
        goto CPyL84;
    }
    return cpy_r_r151;
CPyL83: ;
    return cpy_r_repl;
CPyL84: ;
    cpy_r_r152 = NULL;
    return cpy_r_r152;
CPyL85: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL84;
CPyL86: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL84;
CPyL87: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL84;
CPyL88: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r9);
    goto CPyL84;
CPyL89: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r14);
    goto CPyL84;
CPyL90: ;
    CPy_DecRef(cpy_r_repl);
    goto CPyL84;
CPyL91: ;
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r49);
    goto CPyL84;
CPyL92: ;
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    goto CPyL84;
CPyL93: ;
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r56);
    goto CPyL84;
CPyL94: ;
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r54);
    goto CPyL84;
CPyL95: ;
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r63);
    goto CPyL84;
CPyL96: ;
    CPy_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r61);
    goto CPyL84;
CPyL97: ;
    CPy_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_r46);
    goto CPyL84;
CPyL98: ;
    CPy_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r71);
    goto CPyL84;
CPyL99: ;
    CPy_DECREF(cpy_r_repl);
    goto CPyL38;
CPyL100: ;
    CPy_DECREF(cpy_r_repl);
    goto CPyL43;
CPyL101: ;
    CPy_DECREF(cpy_r_param_spec);
    goto CPyL46;
CPyL102: ;
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_r92);
    goto CPyL84;
CPyL103: ;
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    goto CPyL84;
CPyL104: ;
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_r104);
    goto CPyL84;
CPyL105: ;
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r120);
    goto CPyL84;
CPyL106: ;
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r118);
    goto CPyL84;
CPyL107: ;
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r132);
    CPy_DecRef(cpy_r_r134);
    goto CPyL84;
CPyL108: ;
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r132);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r142);
    goto CPyL84;
CPyL109: ;
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r132);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r145);
    goto CPyL84;
CPyL110: ;
    CPy_DECREF(cpy_r_r146);
    goto CPyL80;
CPyL111: ;
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r132);
    CPy_DecRef(cpy_r_r145);
    goto CPyL84;
CPyL112: ;
    CPy_DECREF(cpy_r_r147);
    goto CPyL81;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_param_spec(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec", 233, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_var_tuple", 275, CPyStatic_expandtype___globals);
        goto CPyL3;
    }
    CPy_Raise(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_var_tuple", 275, CPyStatic_expandtype___globals);
        goto CPyL3;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_type_var_tuple(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_type_var_tuple", 274, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___types___UnpackTypeObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_unpack_type", 285, CPyStatic_expandtype___globals);
        goto CPyL4;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_unpack_type", 285, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL4;
    }
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_types___UnpackType(cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_unpack_type", 285, CPyStatic_expandtype___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_unpack_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_unpack_type", 277, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___expand_unpack(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___expandtype___ExpandTypeVisitorObject *)cpy_r_self)->_variables;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/expandtype.py", "expand_unpack", "ExpandTypeVisitor", "variables", 288, CPyStatic_expandtype___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_expandtype___expand_unpack_with_variables(cpy_r_t, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack", 288, CPyStatic_expandtype___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___expand_unpack(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:expand_unpack", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___expand_unpack(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "expand_unpack", 287, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___types___ParametersObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_expandtype___ExpandTypeVisitor___expand_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_parameters", 291, CPyStatic_expandtype___globals);
        goto CPyL3;
    }
    cpy_r_r2 = NULL;
    cpy_r_r3 = NULL;
    cpy_r_r4 = NULL;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_types___Parameters___copy_modified(cpy_r_t, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_parameters", 291, CPyStatic_expandtype___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_parameters(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_parameters", 290, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_parameters(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

tuple_T3OOO CPyDef_expandtype___ExpandTypeVisitor___interpolate_args_for_unpack(PyObject *cpy_r_self, PyObject *cpy_r_t, PyObject *cpy_r_var_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_star_index;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_var_arg_type;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_expanded_tuple;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_expanded_items;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_expanded_items_res;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_arg_types;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    tuple_T3OOO cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    tuple_T3OOO cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_expanded_unpack_index;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyPtr cpy_r_r77;
    CPyPtr cpy_r_r78;
    CPyPtr cpy_r_r79;
    int64_t cpy_r_r80;
    CPyTagged cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyTagged cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_arg_names;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    CPyPtr cpy_r_r98;
    CPyPtr cpy_r_r99;
    int64_t cpy_r_r100;
    CPyTagged cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    CPyTagged cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_arg_kinds;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    CPyTagged cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    CPyTagged cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_expanded_unpack;
    PyObject *cpy_r_r127;
    CPyPtr cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_expanded_unpacked_tvt;
    PyObject *cpy_r_r134;
    CPyPtr cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    CPyPtr cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    int32_t cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    char cpy_r_r155;
    char cpy_r_r156;
    char cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    CPyTagged cpy_r_r160;
    CPyTagged cpy_r_prefix_len;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    CPyPtr cpy_r_r166;
    CPyPtr cpy_r_r167;
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
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    CPyPtr cpy_r_r182;
    CPyPtr cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
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
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    CPyPtr cpy_r_r200;
    int64_t cpy_r_r201;
    CPyTagged cpy_r_r202;
    CPyTagged cpy_r_r203;
    int64_t cpy_r_r204;
    char cpy_r_r205;
    char cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    CPyTagged cpy_r_r210;
    CPyTagged cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    CPyTagged cpy_r_r214;
    CPyTagged cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    CPyPtr cpy_r_r221;
    CPyPtr cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    CPyTagged cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    tuple_T3OOO cpy_r_r232;
    tuple_T3OOO cpy_r_r233;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_kinds;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL159;
    } else
        goto CPyL3;
CPyL1: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 296, CPyStatic_expandtype___globals);
        goto CPyL158;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = CPyList_Index(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 296, CPyStatic_expandtype___globals);
        goto CPyL158;
    }
    cpy_r_star_index = cpy_r_r3;
    cpy_r_r4 = ((mypy___types___UnpackTypeObject *)cpy_r_var_arg)->_type;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_types___get_proper_type(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 299, CPyStatic_expandtype___globals);
        goto CPyL160;
    }
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 299, CPyStatic_expandtype___globals, "mypy.types.ProperType", cpy_r_r5);
        goto CPyL160;
    }
    cpy_r_var_arg_type = cpy_r_r6;
    cpy_r_r7 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_var_arg_type)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL161;
    if (likely(Py_TYPE(cpy_r_var_arg_type) == CPyType_types___TupleType))
        cpy_r_r11 = cpy_r_var_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 301, CPyStatic_expandtype___globals, "mypy.types.TupleType", cpy_r_var_arg_type);
        goto CPyL160;
    }
    cpy_r_r12 = CPyDef_types___TupleType___accept(cpy_r_r11, cpy_r_self);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 301, CPyStatic_expandtype___globals);
        goto CPyL160;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_types___Type)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 301, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r12);
        goto CPyL160;
    }
    cpy_r_expanded_tuple = cpy_r_r13;
    cpy_r_r14 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r15 = CPy_TypeCheck(cpy_r_expanded_tuple, cpy_r_r14);
    if (cpy_r_r15) goto CPyL12;
    cpy_r_r16 = cpy_r_r15;
    goto CPyL13;
CPyL12: ;
    cpy_r_r17 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_expanded_tuple)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    cpy_r_r16 = cpy_r_r20;
CPyL13: ;
    if (cpy_r_r16) {
        goto CPyL16;
    } else
        goto CPyL162;
CPyL14: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 303, CPyStatic_expandtype___globals);
        goto CPyL158;
    }
    CPy_Unreachable();
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_expanded_tuple) == CPyType_types___TupleType))
        cpy_r_r22 = cpy_r_expanded_tuple;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 304, CPyStatic_expandtype___globals, "mypy.types.TupleType", cpy_r_expanded_tuple);
        goto CPyL163;
    }
    cpy_r_r23 = ((mypy___types___TupleTypeObject *)cpy_r_r22)->_items;
    CPy_INCREF(cpy_r_r23);
    CPy_DECREF(cpy_r_expanded_tuple);
    cpy_r_expanded_items = cpy_r_r23;
    goto CPyL44;
CPyL18: ;
    cpy_r_r24 = CPyDef_expandtype___ExpandTypeVisitor___expand_unpack(cpy_r_self, cpy_r_var_arg);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 306, CPyStatic_expandtype___globals);
        goto CPyL160;
    }
    cpy_r_expanded_items_res = cpy_r_r24;
    cpy_r_r25 = (PyObject *)&PyList_Type;
    cpy_r_r26 = PyObject_IsInstance(cpy_r_expanded_items_res, cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 307, CPyStatic_expandtype___globals);
        goto CPyL164;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL23;
    if (likely(PyList_Check(cpy_r_expanded_items_res)))
        cpy_r_r29 = cpy_r_expanded_items_res;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 308, CPyStatic_expandtype___globals, "list", cpy_r_expanded_items_res);
        goto CPyL160;
    }
    cpy_r_expanded_items = cpy_r_r29;
    goto CPyL44;
CPyL23: ;
    cpy_r_r30 = (PyObject *)CPyType_types___Instance;
    cpy_r_r31 = (CPyPtr)&((PyObject *)cpy_r_expanded_items_res)->ob_type;
    cpy_r_r32 = *(PyObject * *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 == cpy_r_r30;
    if (!cpy_r_r33) goto CPyL165;
    if (likely(Py_TYPE(cpy_r_expanded_items_res) == CPyType_types___Instance))
        cpy_r_r34 = cpy_r_expanded_items_res;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 311, CPyStatic_expandtype___globals, "mypy.types.Instance", cpy_r_expanded_items_res);
        goto CPyL164;
    }
    cpy_r_r35 = ((mypy___types___InstanceObject *)cpy_r_r34)->_type;
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_r35, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 311, CPyStatic_expandtype___globals);
        goto CPyL164;
    }
CPyL26: ;
    cpy_r_r37 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r38 = PyUnicode_Compare(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r39 = cpy_r_r38 == -1;
    if (!cpy_r_r39) goto CPyL29;
    cpy_r_r40 = PyErr_Occurred();
    cpy_r_r41 = cpy_r_r40 != NULL;
    if (!cpy_r_r41) goto CPyL29;
    cpy_r_r42 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 311, CPyStatic_expandtype___globals);
        goto CPyL164;
    }
CPyL29: ;
    cpy_r_r43 = cpy_r_r38 == 0;
    if (!cpy_r_r43) goto CPyL165;
    cpy_r_r44 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = CPyList_GetSlice(cpy_r_r44, 0, cpy_r_star_index);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 316, CPyStatic_expandtype___globals);
        goto CPyL164;
    }
    if (likely(PyList_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 316, CPyStatic_expandtype___globals, "list", cpy_r_r45);
        goto CPyL164;
    }
    if (likely(Py_TYPE(cpy_r_expanded_items_res) == CPyType_types___Instance))
        cpy_r_r47 = cpy_r_expanded_items_res;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 317, CPyStatic_expandtype___globals, "mypy.types.Instance", cpy_r_expanded_items_res);
        goto CPyL166;
    }
    cpy_r_r48 = ((mypy___types___InstanceObject *)cpy_r_r47)->_args;
    CPy_INCREF(cpy_r_r48);
    CPy_DECREF(cpy_r_expanded_items_res);
    cpy_r_r49 = CPySequenceTuple_GetItem(cpy_r_r48, 0);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 317, CPyStatic_expandtype___globals);
        goto CPyL167;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r49, CPyType_types___Type)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 317, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r49);
        goto CPyL167;
    }
    cpy_r_r51 = PyList_New(1);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 317, CPyStatic_expandtype___globals);
        goto CPyL168;
    }
    cpy_r_r52 = (CPyPtr)&((PyListObject *)cpy_r_r51)->ob_item;
    cpy_r_r53 = *(CPyPtr *)cpy_r_r52;
    *(PyObject * *)cpy_r_r53 = cpy_r_r50;
    cpy_r_r54 = PyNumber_Add(cpy_r_r46, cpy_r_r51);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 316, CPyStatic_expandtype___globals);
        goto CPyL160;
    }
    if (likely(PyList_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 316, CPyStatic_expandtype___globals, "list", cpy_r_r54);
        goto CPyL160;
    }
    cpy_r_r56 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = CPyTagged_Add(cpy_r_star_index, 2);
    CPyTagged_DECREF(cpy_r_star_index);
    cpy_r_r58 = CPyList_GetSlice(cpy_r_r56, cpy_r_r57, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r56);
    CPyTagged_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 318, CPyStatic_expandtype___globals);
        goto CPyL169;
    }
    if (likely(PyList_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 318, CPyStatic_expandtype___globals, "list", cpy_r_r58);
        goto CPyL169;
    }
    cpy_r_r60 = PyNumber_Add(cpy_r_r55, cpy_r_r59);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 316, CPyStatic_expandtype___globals);
        goto CPyL158;
    }
    if (likely(PyList_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 316, CPyStatic_expandtype___globals, "list", cpy_r_r60);
        goto CPyL158;
    }
    cpy_r_arg_types = cpy_r_r61;
    cpy_r_r62 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_names;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_kinds;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64.f0 = cpy_r_r62;
    cpy_r_r64.f1 = cpy_r_r63;
    cpy_r_r64.f2 = cpy_r_arg_types;
    CPy_INCREF(cpy_r_r64.f0);
    CPy_INCREF(cpy_r_r64.f1);
    CPy_INCREF(cpy_r_r64.f2);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_arg_types);
    return cpy_r_r64;
CPyL43: ;
    cpy_r_r65 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_names;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r66 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_kinds;
    CPy_INCREF(cpy_r_r66);
    cpy_r_r67 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68.f0 = cpy_r_r65;
    cpy_r_r68.f1 = cpy_r_r66;
    cpy_r_r68.f2 = cpy_r_r67;
    CPy_INCREF(cpy_r_r68.f0);
    CPy_INCREF(cpy_r_r68.f1);
    CPy_INCREF(cpy_r_r68.f2);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r67);
    return cpy_r_r68;
CPyL44: ;
    cpy_r_r69 = CPyDef_typevartuples___find_unpack_in_list(cpy_r_expanded_items);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 324, CPyStatic_expandtype___globals);
        goto CPyL170;
    }
    cpy_r_expanded_unpack_index = cpy_r_r69;
    cpy_r_r70 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r71 = cpy_r_expanded_unpack_index == cpy_r_r70;
    if (cpy_r_r71) {
        goto CPyL171;
    } else
        goto CPyL80;
CPyL46: ;
    cpy_r_r72 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_names;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = CPyList_GetSlice(cpy_r_r72, 0, cpy_r_star_index);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 330, CPyStatic_expandtype___globals);
        goto CPyL170;
    }
    if (likely(PyList_Check(cpy_r_r73)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 330, CPyStatic_expandtype___globals, "list", cpy_r_r73);
        goto CPyL170;
    }
    cpy_r_r75 = PyList_New(1);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 331, CPyStatic_expandtype___globals);
        goto CPyL172;
    }
    cpy_r_r76 = Py_None;
    cpy_r_r77 = (CPyPtr)&((PyListObject *)cpy_r_r75)->ob_item;
    cpy_r_r78 = *(CPyPtr *)cpy_r_r77;
    CPy_INCREF(cpy_r_r76);
    *(PyObject * *)cpy_r_r78 = cpy_r_r76;
    cpy_r_r79 = (CPyPtr)&((PyVarObject *)cpy_r_expanded_items)->ob_size;
    cpy_r_r80 = *(int64_t *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 << 1;
    cpy_r_r82 = CPySequence_Multiply(cpy_r_r75, cpy_r_r81);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 331, CPyStatic_expandtype___globals);
        goto CPyL172;
    }
    cpy_r_r83 = PyNumber_Add(cpy_r_r74, cpy_r_r82);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 330, CPyStatic_expandtype___globals);
        goto CPyL170;
    }
    if (likely(PyList_Check(cpy_r_r83)))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 330, CPyStatic_expandtype___globals, "list", cpy_r_r83);
        goto CPyL170;
    }
    cpy_r_r85 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_names;
    CPy_INCREF(cpy_r_r85);
    cpy_r_r86 = CPyTagged_Add(cpy_r_star_index, 2);
    cpy_r_r87 = CPyList_GetSlice(cpy_r_r85, cpy_r_r86, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r85);
    CPyTagged_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 332, CPyStatic_expandtype___globals);
        goto CPyL173;
    }
    if (likely(PyList_Check(cpy_r_r87)))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 332, CPyStatic_expandtype___globals, "list", cpy_r_r87);
        goto CPyL173;
    }
    cpy_r_r89 = PyNumber_Add(cpy_r_r84, cpy_r_r88);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 330, CPyStatic_expandtype___globals);
        goto CPyL170;
    }
    if (likely(PyList_Check(cpy_r_r89)))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 330, CPyStatic_expandtype___globals, "list", cpy_r_r89);
        goto CPyL170;
    }
    cpy_r_arg_names = cpy_r_r90;
    cpy_r_r91 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_kinds;
    CPy_INCREF(cpy_r_r91);
    cpy_r_r92 = CPyList_GetSlice(cpy_r_r91, 0, cpy_r_star_index);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 335, CPyStatic_expandtype___globals);
        goto CPyL174;
    }
    if (likely(PyList_Check(cpy_r_r92)))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 335, CPyStatic_expandtype___globals, "list", cpy_r_r92);
        goto CPyL174;
    }
    cpy_r_r94 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r94 == NULL)) {
        goto CPyL175;
    } else
        goto CPyL61;
CPyL59: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r95 = 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 336, CPyStatic_expandtype___globals);
        goto CPyL158;
    }
    CPy_Unreachable();
CPyL61: ;
    cpy_r_r96 = PyList_New(1);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 336, CPyStatic_expandtype___globals);
        goto CPyL176;
    }
    cpy_r_r97 = (CPyPtr)&((PyListObject *)cpy_r_r96)->ob_item;
    cpy_r_r98 = *(CPyPtr *)cpy_r_r97;
    CPy_INCREF(cpy_r_r94);
    *(PyObject * *)cpy_r_r98 = cpy_r_r94;
    cpy_r_r99 = (CPyPtr)&((PyVarObject *)cpy_r_expanded_items)->ob_size;
    cpy_r_r100 = *(int64_t *)cpy_r_r99;
    cpy_r_r101 = cpy_r_r100 << 1;
    cpy_r_r102 = CPySequence_Multiply(cpy_r_r96, cpy_r_r101);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 336, CPyStatic_expandtype___globals);
        goto CPyL176;
    }
    cpy_r_r103 = PyNumber_Add(cpy_r_r93, cpy_r_r102);
    CPy_DECREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 335, CPyStatic_expandtype___globals);
        goto CPyL174;
    }
    if (likely(PyList_Check(cpy_r_r103)))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 335, CPyStatic_expandtype___globals, "list", cpy_r_r103);
        goto CPyL174;
    }
    cpy_r_r105 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_kinds;
    CPy_INCREF(cpy_r_r105);
    cpy_r_r106 = CPyTagged_Add(cpy_r_star_index, 2);
    cpy_r_r107 = CPyList_GetSlice(cpy_r_r105, cpy_r_r106, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r105);
    CPyTagged_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 337, CPyStatic_expandtype___globals);
        goto CPyL177;
    }
    if (likely(PyList_Check(cpy_r_r107)))
        cpy_r_r108 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 337, CPyStatic_expandtype___globals, "list", cpy_r_r107);
        goto CPyL177;
    }
    cpy_r_r109 = PyNumber_Add(cpy_r_r104, cpy_r_r108);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 335, CPyStatic_expandtype___globals);
        goto CPyL174;
    }
    if (likely(PyList_Check(cpy_r_r109)))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 335, CPyStatic_expandtype___globals, "list", cpy_r_r109);
        goto CPyL174;
    }
    cpy_r_arg_kinds = cpy_r_r110;
    cpy_r_r111 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r111);
    cpy_r_r112 = CPyList_GetSlice(cpy_r_r111, 0, cpy_r_star_index);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 340, CPyStatic_expandtype___globals);
        goto CPyL178;
    }
    if (likely(PyList_Check(cpy_r_r112)))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 340, CPyStatic_expandtype___globals, "list", cpy_r_r112);
        goto CPyL178;
    }
    cpy_r_r114 = CPyDef_expandtype___ExpandTypeVisitor___expand_types(cpy_r_self, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 340, CPyStatic_expandtype___globals);
        goto CPyL178;
    }
    cpy_r_r115 = PyNumber_Add(cpy_r_r114, cpy_r_expanded_items);
    CPy_DECREF(cpy_r_r114);
    CPy_DECREF(cpy_r_expanded_items);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 340, CPyStatic_expandtype___globals);
        goto CPyL179;
    }
    if (likely(PyList_Check(cpy_r_r115)))
        cpy_r_r116 = cpy_r_r115;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 340, CPyStatic_expandtype___globals, "list", cpy_r_r115);
        goto CPyL179;
    }
    cpy_r_r117 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r117);
    cpy_r_r118 = CPyTagged_Add(cpy_r_star_index, 2);
    CPyTagged_DECREF(cpy_r_star_index);
    cpy_r_r119 = CPyList_GetSlice(cpy_r_r117, cpy_r_r118, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r117);
    CPyTagged_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 342, CPyStatic_expandtype___globals);
        goto CPyL180;
    }
    if (likely(PyList_Check(cpy_r_r119)))
        cpy_r_r120 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 342, CPyStatic_expandtype___globals, "list", cpy_r_r119);
        goto CPyL180;
    }
    cpy_r_r121 = CPyDef_expandtype___ExpandTypeVisitor___expand_types(cpy_r_self, cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 342, CPyStatic_expandtype___globals);
        goto CPyL180;
    }
    cpy_r_r122 = PyNumber_Add(cpy_r_r116, cpy_r_r121);
    CPy_DECREF(cpy_r_r116);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 340, CPyStatic_expandtype___globals);
        goto CPyL181;
    }
    if (likely(PyList_Check(cpy_r_r122)))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 340, CPyStatic_expandtype___globals, "list", cpy_r_r122);
        goto CPyL181;
    }
    cpy_r_arg_types = cpy_r_r123;
    goto CPyL157;
CPyL80: ;
    if (likely(PyLong_Check(cpy_r_expanded_unpack_index)))
        cpy_r_r124 = CPyTagged_FromObject(cpy_r_expanded_unpack_index);
    else {
        CPy_TypeError("int", cpy_r_expanded_unpack_index); cpy_r_r124 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r124 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 349, CPyStatic_expandtype___globals);
        goto CPyL182;
    }
    cpy_r_r125 = CPyList_GetItem(cpy_r_expanded_items, cpy_r_r124);
    CPyTagged_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 349, CPyStatic_expandtype___globals);
        goto CPyL182;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r125, CPyType_types___Type)))
        cpy_r_r126 = cpy_r_r125;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 349, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r125);
        goto CPyL182;
    }
    cpy_r_expanded_unpack = cpy_r_r126;
    cpy_r_r127 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r128 = (CPyPtr)&((PyObject *)cpy_r_expanded_unpack)->ob_type;
    cpy_r_r129 = *(PyObject * *)cpy_r_r128;
    cpy_r_r130 = cpy_r_r129 == cpy_r_r127;
    if (cpy_r_r130) {
        goto CPyL86;
    } else
        goto CPyL183;
CPyL84: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r131 = 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 350, CPyStatic_expandtype___globals);
        goto CPyL158;
    }
    CPy_Unreachable();
CPyL86: ;
    if (likely(Py_TYPE(cpy_r_expanded_unpack) == CPyType_types___UnpackType))
        cpy_r_r132 = cpy_r_expanded_unpack;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 353, CPyStatic_expandtype___globals, "mypy.types.UnpackType", cpy_r_expanded_unpack);
        goto CPyL184;
    }
    cpy_r_r133 = ((mypy___types___UnpackTypeObject *)cpy_r_r132)->_type;
    CPy_INCREF(cpy_r_r133);
    CPy_DECREF(cpy_r_expanded_unpack);
    cpy_r_expanded_unpacked_tvt = cpy_r_r133;
    cpy_r_r134 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r135 = (CPyPtr)&((PyObject *)cpy_r_expanded_unpacked_tvt)->ob_type;
    cpy_r_r136 = *(PyObject * *)cpy_r_r135;
    cpy_r_r137 = cpy_r_r136 == cpy_r_r134;
    if (!cpy_r_r137) goto CPyL90;
    if (likely(Py_TYPE(cpy_r_expanded_unpacked_tvt) == CPyType_types___TypeVarTupleType))
        cpy_r_r138 = cpy_r_expanded_unpacked_tvt;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 355, CPyStatic_expandtype___globals, "mypy.types.TypeVarTupleType", cpy_r_expanded_unpacked_tvt);
        goto CPyL185;
    }
    cpy_r_r139 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r138)->_tuple_fallback;
    CPy_INCREF(cpy_r_r139);
    CPy_DECREF(cpy_r_expanded_unpacked_tvt);
    cpy_r_fallback = cpy_r_r139;
    goto CPyL106;
CPyL90: ;
    cpy_r_r140 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r141 = CPy_TypeCheck(cpy_r_expanded_unpacked_tvt, cpy_r_r140);
    if (cpy_r_r141) {
        goto CPyL93;
    } else
        goto CPyL186;
CPyL91: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r142 = 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 359, CPyStatic_expandtype___globals);
        goto CPyL158;
    }
    CPy_Unreachable();
CPyL93: ;
    cpy_r_r143 = (PyObject *)CPyType_types___Instance;
    cpy_r_r144 = (CPyPtr)&((PyObject *)cpy_r_expanded_unpacked_tvt)->ob_type;
    cpy_r_r145 = *(PyObject * *)cpy_r_r144;
    cpy_r_r146 = cpy_r_r145 == cpy_r_r143;
    if (cpy_r_r146) {
        goto CPyL96;
    } else
        goto CPyL187;
CPyL94: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r147 = 0;
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 360, CPyStatic_expandtype___globals);
        goto CPyL158;
    }
    CPy_Unreachable();
CPyL96: ;
    if (likely(Py_TYPE(cpy_r_expanded_unpacked_tvt) == CPyType_types___Instance))
        cpy_r_r148 = cpy_r_expanded_unpacked_tvt;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 361, CPyStatic_expandtype___globals, "mypy.types.Instance", cpy_r_expanded_unpacked_tvt);
        goto CPyL185;
    }
    cpy_r_r149 = ((mypy___types___InstanceObject *)cpy_r_r148)->_type;
    cpy_r_r150 = CPY_GET_ATTR(cpy_r_r149, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 361, CPyStatic_expandtype___globals);
        goto CPyL185;
    }
CPyL98: ;
    cpy_r_r151 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r152 = PyUnicode_Compare(cpy_r_r150, cpy_r_r151);
    CPy_DECREF(cpy_r_r150);
    cpy_r_r153 = cpy_r_r152 == -1;
    if (!cpy_r_r153) goto CPyL101;
    cpy_r_r154 = PyErr_Occurred();
    cpy_r_r155 = cpy_r_r154 != NULL;
    if (!cpy_r_r155) goto CPyL101;
    cpy_r_r156 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 361, CPyStatic_expandtype___globals);
        goto CPyL185;
    }
CPyL101: ;
    cpy_r_r157 = cpy_r_r152 == 0;
    if (cpy_r_r157) {
        goto CPyL104;
    } else
        goto CPyL188;
CPyL102: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r158 = 0;
    if (unlikely(!cpy_r_r158)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 361, CPyStatic_expandtype___globals);
        goto CPyL158;
    }
    CPy_Unreachable();
CPyL104: ;
    if (likely(Py_TYPE(cpy_r_expanded_unpacked_tvt) == CPyType_types___Instance))
        cpy_r_r159 = cpy_r_expanded_unpacked_tvt;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 362, CPyStatic_expandtype___globals, "mypy.types.Instance", cpy_r_expanded_unpacked_tvt);
        goto CPyL182;
    }
    cpy_r_fallback = cpy_r_r159;
CPyL106: ;
    if (likely(PyLong_Check(cpy_r_expanded_unpack_index)))
        cpy_r_r160 = CPyTagged_FromObject(cpy_r_expanded_unpack_index);
    else {
        CPy_TypeError("int", cpy_r_expanded_unpack_index); cpy_r_r160 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_expanded_unpack_index);
    if (unlikely(cpy_r_r160 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 364, CPyStatic_expandtype___globals);
        goto CPyL189;
    }
    cpy_r_prefix_len = cpy_r_r160;
    cpy_r_r161 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_names;
    CPy_INCREF(cpy_r_r161);
    cpy_r_r162 = CPyList_GetSlice(cpy_r_r161, 0, cpy_r_star_index);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 365, CPyStatic_expandtype___globals);
        goto CPyL190;
    }
    if (likely(PyList_Check(cpy_r_r162)))
        cpy_r_r163 = cpy_r_r162;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 365, CPyStatic_expandtype___globals, "list", cpy_r_r162);
        goto CPyL190;
    }
    cpy_r_r164 = PyList_New(1);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 365, CPyStatic_expandtype___globals);
        goto CPyL191;
    }
    cpy_r_r165 = Py_None;
    cpy_r_r166 = (CPyPtr)&((PyListObject *)cpy_r_r164)->ob_item;
    cpy_r_r167 = *(CPyPtr *)cpy_r_r166;
    CPy_INCREF(cpy_r_r165);
    *(PyObject * *)cpy_r_r167 = cpy_r_r165;
    cpy_r_r168 = CPySequence_Multiply(cpy_r_r164, cpy_r_prefix_len);
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 365, CPyStatic_expandtype___globals);
        goto CPyL191;
    }
    cpy_r_r169 = PyNumber_Add(cpy_r_r163, cpy_r_r168);
    CPy_DECREF(cpy_r_r163);
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 365, CPyStatic_expandtype___globals);
        goto CPyL190;
    }
    if (likely(PyList_Check(cpy_r_r169)))
        cpy_r_r170 = cpy_r_r169;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 365, CPyStatic_expandtype___globals, "list", cpy_r_r169);
        goto CPyL190;
    }
    cpy_r_r171 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_names;
    CPy_INCREF(cpy_r_r171);
    cpy_r_r172 = CPyList_GetSlice(cpy_r_r171, cpy_r_star_index, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 365, CPyStatic_expandtype___globals);
        goto CPyL192;
    }
    if (likely(PyList_Check(cpy_r_r172)))
        cpy_r_r173 = cpy_r_r172;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 365, CPyStatic_expandtype___globals, "list", cpy_r_r172);
        goto CPyL192;
    }
    cpy_r_r174 = PyNumber_Add(cpy_r_r170, cpy_r_r173);
    CPy_DECREF(cpy_r_r170);
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 365, CPyStatic_expandtype___globals);
        goto CPyL190;
    }
    if (likely(PyList_Check(cpy_r_r174)))
        cpy_r_r175 = cpy_r_r174;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 365, CPyStatic_expandtype___globals, "list", cpy_r_r174);
        goto CPyL190;
    }
    cpy_r_arg_names = cpy_r_r175;
    cpy_r_r176 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_kinds;
    CPy_INCREF(cpy_r_r176);
    cpy_r_r177 = CPyList_GetSlice(cpy_r_r176, 0, cpy_r_star_index);
    CPy_DECREF(cpy_r_r176);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 367, CPyStatic_expandtype___globals);
        goto CPyL193;
    }
    if (likely(PyList_Check(cpy_r_r177)))
        cpy_r_r178 = cpy_r_r177;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 367, CPyStatic_expandtype___globals, "list", cpy_r_r177);
        goto CPyL193;
    }
    cpy_r_r179 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r179 == NULL)) {
        goto CPyL194;
    } else
        goto CPyL122;
CPyL120: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r180 = 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 367, CPyStatic_expandtype___globals);
        goto CPyL158;
    }
    CPy_Unreachable();
CPyL122: ;
    cpy_r_r181 = PyList_New(1);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 367, CPyStatic_expandtype___globals);
        goto CPyL195;
    }
    cpy_r_r182 = (CPyPtr)&((PyListObject *)cpy_r_r181)->ob_item;
    cpy_r_r183 = *(CPyPtr *)cpy_r_r182;
    CPy_INCREF(cpy_r_r179);
    *(PyObject * *)cpy_r_r183 = cpy_r_r179;
    cpy_r_r184 = CPySequence_Multiply(cpy_r_r181, cpy_r_prefix_len);
    CPy_DECREF(cpy_r_r181);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 367, CPyStatic_expandtype___globals);
        goto CPyL195;
    }
    cpy_r_r185 = PyNumber_Add(cpy_r_r178, cpy_r_r184);
    CPy_DECREF(cpy_r_r178);
    CPy_DECREF(cpy_r_r184);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 367, CPyStatic_expandtype___globals);
        goto CPyL193;
    }
    if (likely(PyList_Check(cpy_r_r185)))
        cpy_r_r186 = cpy_r_r185;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 367, CPyStatic_expandtype___globals, "list", cpy_r_r185);
        goto CPyL193;
    }
    cpy_r_r187 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_kinds;
    CPy_INCREF(cpy_r_r187);
    cpy_r_r188 = CPyList_GetSlice(cpy_r_r187, cpy_r_star_index, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r187);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 367, CPyStatic_expandtype___globals);
        goto CPyL196;
    }
    if (likely(PyList_Check(cpy_r_r188)))
        cpy_r_r189 = cpy_r_r188;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 367, CPyStatic_expandtype___globals, "list", cpy_r_r188);
        goto CPyL196;
    }
    cpy_r_r190 = PyNumber_Add(cpy_r_r186, cpy_r_r189);
    CPy_DECREF(cpy_r_r186);
    CPy_DECREF(cpy_r_r189);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 367, CPyStatic_expandtype___globals);
        goto CPyL193;
    }
    if (likely(PyList_Check(cpy_r_r190)))
        cpy_r_r191 = cpy_r_r190;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 367, CPyStatic_expandtype___globals, "list", cpy_r_r190);
        goto CPyL193;
    }
    cpy_r_arg_kinds = cpy_r_r191;
    cpy_r_r192 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r192);
    cpy_r_r193 = CPyList_GetSlice(cpy_r_r192, 0, cpy_r_star_index);
    CPy_DECREF(cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 370, CPyStatic_expandtype___globals);
        goto CPyL197;
    }
    if (likely(PyList_Check(cpy_r_r193)))
        cpy_r_r194 = cpy_r_r193;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 370, CPyStatic_expandtype___globals, "list", cpy_r_r193);
        goto CPyL197;
    }
    cpy_r_r195 = CPyDef_expandtype___ExpandTypeVisitor___expand_types(cpy_r_self, cpy_r_r194);
    CPy_DECREF(cpy_r_r194);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 370, CPyStatic_expandtype___globals);
        goto CPyL197;
    }
    cpy_r_r196 = CPyList_GetSlice(cpy_r_expanded_items, 0, cpy_r_prefix_len);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 371, CPyStatic_expandtype___globals);
        goto CPyL198;
    }
    if (likely(PyList_Check(cpy_r_r196)))
        cpy_r_r197 = cpy_r_r196;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 371, CPyStatic_expandtype___globals, "list", cpy_r_r196);
        goto CPyL198;
    }
    cpy_r_r198 = PyNumber_Add(cpy_r_r195, cpy_r_r197);
    CPy_DECREF(cpy_r_r195);
    CPy_DECREF(cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 370, CPyStatic_expandtype___globals);
        goto CPyL197;
    }
    if (likely(PyList_Check(cpy_r_r198)))
        cpy_r_r199 = cpy_r_r198;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 370, CPyStatic_expandtype___globals, "list", cpy_r_r198);
        goto CPyL197;
    }
    cpy_r_r200 = (CPyPtr)&((PyVarObject *)cpy_r_expanded_items)->ob_size;
    cpy_r_r201 = *(int64_t *)cpy_r_r200;
    cpy_r_r202 = cpy_r_r201 << 1;
    cpy_r_r203 = CPyTagged_Subtract(cpy_r_r202, cpy_r_prefix_len);
    cpy_r_r204 = cpy_r_r203 & 1;
    cpy_r_r205 = cpy_r_r204 != 0;
    if (!cpy_r_r205) goto CPyL139;
    cpy_r_r206 = CPyTagged_IsLt_(2, cpy_r_r203);
    CPyTagged_DECREF(cpy_r_r203);
    if (cpy_r_r206) {
        goto CPyL140;
    } else
        goto CPyL199;
CPyL139: ;
    cpy_r_r207 = (Py_ssize_t)cpy_r_r203 > (Py_ssize_t)2;
    CPyTagged_DECREF(cpy_r_r203);
    if (!cpy_r_r207) goto CPyL199;
CPyL140: ;
    cpy_r_r208 = CPyList_GetSlice(cpy_r_expanded_items, cpy_r_prefix_len, 9223372036854775806LL);
    CPy_DECREF(cpy_r_expanded_items);
    CPyTagged_DECREF(cpy_r_prefix_len);
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 374, CPyStatic_expandtype___globals);
        goto CPyL200;
    }
    if (likely(PyList_Check(cpy_r_r208)))
        cpy_r_r209 = cpy_r_r208;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 374, CPyStatic_expandtype___globals, "list", cpy_r_r208);
        goto CPyL200;
    }
    cpy_r_r210 = CPY_INT_TAG;
    cpy_r_r211 = CPY_INT_TAG;
    cpy_r_r212 = 2;
    cpy_r_r213 = CPyDef_types___TupleType(cpy_r_r209, cpy_r_fallback, cpy_r_r210, cpy_r_r211, cpy_r_r212);
    CPy_DECREF(cpy_r_r209);
    CPy_DECREF(cpy_r_fallback);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 374, CPyStatic_expandtype___globals);
        goto CPyL201;
    }
    cpy_r_r214 = CPY_INT_TAG;
    cpy_r_r215 = CPY_INT_TAG;
    cpy_r_r216 = CPyDef_types___UnpackType(cpy_r_r213, cpy_r_r214, cpy_r_r215);
    CPy_DECREF(cpy_r_r213);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 374, CPyStatic_expandtype___globals);
        goto CPyL201;
    }
    cpy_r_r217 = cpy_r_r216;
    goto CPyL148;
CPyL145: ;
    cpy_r_r218 = CPyList_GetItemShort(cpy_r_expanded_items, 0);
    CPy_DECREF(cpy_r_expanded_items);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 376, CPyStatic_expandtype___globals);
        goto CPyL201;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r218, CPyType_types___Type)))
        cpy_r_r219 = cpy_r_r218;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 376, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r218);
        goto CPyL201;
    }
    cpy_r_r217 = cpy_r_r219;
CPyL148: ;
    cpy_r_r220 = PyList_New(1);
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 373, CPyStatic_expandtype___globals);
        goto CPyL202;
    }
    cpy_r_r221 = (CPyPtr)&((PyListObject *)cpy_r_r220)->ob_item;
    cpy_r_r222 = *(CPyPtr *)cpy_r_r221;
    *(PyObject * *)cpy_r_r222 = cpy_r_r217;
    cpy_r_r223 = PyNumber_Add(cpy_r_r199, cpy_r_r220);
    CPy_DECREF(cpy_r_r199);
    CPy_DECREF(cpy_r_r220);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 370, CPyStatic_expandtype___globals);
        goto CPyL179;
    }
    if (likely(PyList_Check(cpy_r_r223)))
        cpy_r_r224 = cpy_r_r223;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 370, CPyStatic_expandtype___globals, "list", cpy_r_r223);
        goto CPyL179;
    }
    cpy_r_r225 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r225);
    cpy_r_r226 = CPyTagged_Add(cpy_r_star_index, 2);
    CPyTagged_DECREF(cpy_r_star_index);
    cpy_r_r227 = CPyList_GetSlice(cpy_r_r225, cpy_r_r226, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r225);
    CPyTagged_DECREF(cpy_r_r226);
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 378, CPyStatic_expandtype___globals);
        goto CPyL203;
    }
    if (likely(PyList_Check(cpy_r_r227)))
        cpy_r_r228 = cpy_r_r227;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 378, CPyStatic_expandtype___globals, "list", cpy_r_r227);
        goto CPyL203;
    }
    cpy_r_r229 = CPyDef_expandtype___ExpandTypeVisitor___expand_types(cpy_r_self, cpy_r_r228);
    CPy_DECREF(cpy_r_r228);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 378, CPyStatic_expandtype___globals);
        goto CPyL203;
    }
    cpy_r_r230 = PyNumber_Add(cpy_r_r224, cpy_r_r229);
    CPy_DECREF(cpy_r_r224);
    CPy_DECREF(cpy_r_r229);
    if (unlikely(cpy_r_r230 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 370, CPyStatic_expandtype___globals);
        goto CPyL181;
    }
    if (likely(PyList_Check(cpy_r_r230)))
        cpy_r_r231 = cpy_r_r230;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 370, CPyStatic_expandtype___globals, "list", cpy_r_r230);
        goto CPyL181;
    }
    cpy_r_arg_types = cpy_r_r231;
CPyL157: ;
    cpy_r_r232.f0 = cpy_r_arg_names;
    cpy_r_r232.f1 = cpy_r_arg_kinds;
    cpy_r_r232.f2 = cpy_r_arg_types;
    CPy_INCREF(cpy_r_r232.f0);
    CPy_INCREF(cpy_r_r232.f1);
    CPy_INCREF(cpy_r_r232.f2);
    CPy_DECREF(cpy_r_arg_names);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_arg_types);
    return cpy_r_r232;
CPyL158: ;
    tuple_T3OOO __tmp2656 = { NULL, NULL, NULL };
    cpy_r_r233 = __tmp2656;
    return cpy_r_r233;
CPyL159: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL1;
CPyL160: ;
    CPyTagged_DecRef(cpy_r_star_index);
    goto CPyL158;
CPyL161: ;
    CPy_DECREF(cpy_r_var_arg_type);
    goto CPyL18;
CPyL162: ;
    CPyTagged_DECREF(cpy_r_star_index);
    CPy_DECREF(cpy_r_expanded_tuple);
    goto CPyL14;
CPyL163: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_tuple);
    goto CPyL158;
CPyL164: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items_res);
    goto CPyL158;
CPyL165: ;
    CPyTagged_DECREF(cpy_r_star_index);
    CPy_DECREF(cpy_r_expanded_items_res);
    goto CPyL43;
CPyL166: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items_res);
    CPy_DecRef(cpy_r_r46);
    goto CPyL158;
CPyL167: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r46);
    goto CPyL158;
CPyL168: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r50);
    goto CPyL158;
CPyL169: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL158;
CPyL170: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    goto CPyL158;
CPyL171: ;
    CPy_DECREF(cpy_r_expanded_unpack_index);
    goto CPyL46;
CPyL172: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_r74);
    goto CPyL158;
CPyL173: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_r84);
    goto CPyL158;
CPyL174: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_arg_names);
    goto CPyL158;
CPyL175: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_r93);
    goto CPyL59;
CPyL176: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_r93);
    goto CPyL158;
CPyL177: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_r104);
    goto CPyL158;
CPyL178: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    goto CPyL158;
CPyL179: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    goto CPyL158;
CPyL180: ;
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_r116);
    goto CPyL158;
CPyL181: ;
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    goto CPyL158;
CPyL182: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_expanded_unpack_index);
    goto CPyL158;
CPyL183: ;
    CPyTagged_DECREF(cpy_r_star_index);
    CPy_DECREF(cpy_r_expanded_items);
    CPy_DECREF(cpy_r_expanded_unpack_index);
    CPy_DECREF(cpy_r_expanded_unpack);
    goto CPyL84;
CPyL184: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_expanded_unpack_index);
    CPy_DecRef(cpy_r_expanded_unpack);
    goto CPyL158;
CPyL185: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_expanded_unpack_index);
    CPy_DecRef(cpy_r_expanded_unpacked_tvt);
    goto CPyL158;
CPyL186: ;
    CPyTagged_DECREF(cpy_r_star_index);
    CPy_DECREF(cpy_r_expanded_items);
    CPy_DECREF(cpy_r_expanded_unpack_index);
    CPy_DECREF(cpy_r_expanded_unpacked_tvt);
    goto CPyL91;
CPyL187: ;
    CPyTagged_DECREF(cpy_r_star_index);
    CPy_DECREF(cpy_r_expanded_items);
    CPy_DECREF(cpy_r_expanded_unpack_index);
    CPy_DECREF(cpy_r_expanded_unpacked_tvt);
    goto CPyL94;
CPyL188: ;
    CPyTagged_DECREF(cpy_r_star_index);
    CPy_DECREF(cpy_r_expanded_items);
    CPy_DECREF(cpy_r_expanded_unpack_index);
    CPy_DECREF(cpy_r_expanded_unpacked_tvt);
    goto CPyL102;
CPyL189: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_fallback);
    goto CPyL158;
CPyL190: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_fallback);
    CPyTagged_DecRef(cpy_r_prefix_len);
    goto CPyL158;
CPyL191: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_fallback);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r163);
    goto CPyL158;
CPyL192: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_fallback);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r170);
    goto CPyL158;
CPyL193: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_fallback);
    CPyTagged_DecRef(cpy_r_prefix_len);
    goto CPyL158;
CPyL194: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_fallback);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r178);
    goto CPyL120;
CPyL195: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_fallback);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r178);
    goto CPyL158;
CPyL196: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_fallback);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r186);
    goto CPyL158;
CPyL197: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_fallback);
    CPyTagged_DecRef(cpy_r_prefix_len);
    goto CPyL158;
CPyL198: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_items);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_fallback);
    CPyTagged_DecRef(cpy_r_prefix_len);
    CPy_DecRef(cpy_r_r195);
    goto CPyL158;
CPyL199: ;
    CPy_DECREF(cpy_r_fallback);
    CPyTagged_DECREF(cpy_r_prefix_len);
    goto CPyL145;
CPyL200: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_fallback);
    CPy_DecRef(cpy_r_r199);
    goto CPyL158;
CPyL201: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_r199);
    goto CPyL158;
CPyL202: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_r199);
    CPy_DecRef(cpy_r_r217);
    goto CPyL158;
CPyL203: ;
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_r224);
    goto CPyL158;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___interpolate_args_for_unpack(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", "var_arg", 0};
    static CPyArg_Parser parser = {"OO:interpolate_args_for_unpack", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_var_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_var_arg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *arg_var_arg;
    if (likely(Py_TYPE(obj_var_arg) == CPyType_types___UnpackType))
        arg_var_arg = obj_var_arg;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_var_arg); 
        goto fail;
    }
    tuple_T3OOO retval = CPyDef_expandtype___ExpandTypeVisitor___interpolate_args_for_unpack(arg_self, arg_t, arg_var_arg);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2657 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp2657);
    PyObject *__tmp2658 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp2658);
    PyObject *__tmp2659 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp2659);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "interpolate_args_for_unpack", 293, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_param_spec;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_repl;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_prefix;
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
    char cpy_r_r43;
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
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_r55;
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
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyPtr cpy_r_r70;
    int64_t cpy_r_r71;
    CPyTagged cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_old_prefix;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
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
    CPyTagged cpy_r_r114;
    CPyTagged cpy_r_r115;
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
    PyObject *cpy_r_var_arg;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    CPyPtr cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    tuple_T3OOO cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_arg_names;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_arg_kinds;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_arg_types;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
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
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    CPyTagged cpy_r_r162;
    CPyTagged cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    cpy_r_r0 = CPyDef_types___CallableType___param_spec(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 383, CPyStatic_expandtype___globals);
        goto CPyL79;
    }
    cpy_r_param_spec = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_param_spec != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL80;
    cpy_r_r3 = ((mypy___expandtype___ExpandTypeVisitorObject *)cpy_r_self)->_variables;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/expandtype.py", "visit_callable_type", "ExpandTypeVisitor", "variables", 385, CPyStatic_expandtype___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    if (likely(cpy_r_param_spec != Py_None))
        cpy_r_r4 = cpy_r_param_spec;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 385, CPyStatic_expandtype___globals, "mypy.types.ParamSpecType", cpy_r_param_spec);
        goto CPyL82;
    }
    cpy_r_r5 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r4)->_id;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatics[308]; /* 'get' */
    PyObject *cpy_r_r7[2] = {cpy_r_r3, cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 385, CPyStatic_expandtype___globals);
        goto CPyL83;
    }
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    if (PyObject_TypeCheck(cpy_r_r9, CPyType_types___Type))
        cpy_r_r10 = cpy_r_r9;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL2660;
    if (cpy_r_r9 == Py_None)
        cpy_r_r10 = cpy_r_r9;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL2660;
    CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 385, CPyStatic_expandtype___globals, "mypy.types.Type or None", cpy_r_r9);
    goto CPyL81;
__LL2660: ;
    cpy_r_r11 = CPyDef_types___get_proper_type(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 385, CPyStatic_expandtype___globals);
        goto CPyL81;
    }
    cpy_r_repl = cpy_r_r11;
    cpy_r_r12 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (!cpy_r_r15) goto CPyL9;
    cpy_r_r16 = cpy_r_r15;
    goto CPyL10;
CPyL9: ;
    cpy_r_r17 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    cpy_r_r16 = cpy_r_r20;
CPyL10: ;
    if (!cpy_r_r16) goto CPyL31;
    if (likely(cpy_r_param_spec != Py_None))
        cpy_r_r21 = cpy_r_param_spec;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 395, CPyStatic_expandtype___globals, "mypy.types.ParamSpecType", cpy_r_param_spec);
        goto CPyL84;
    }
    cpy_r_r22 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r21)->_prefix;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_param_spec);
    cpy_r_prefix = cpy_r_r22;
    if (Py_TYPE(cpy_r_repl) == CPyType_types___CallableType)
        cpy_r_r23 = cpy_r_repl;
    else {
        cpy_r_r23 = NULL;
    }
    if (cpy_r_r23 != NULL) goto __LL2661;
    if (Py_TYPE(cpy_r_repl) == CPyType_types___Parameters)
        cpy_r_r23 = cpy_r_repl;
    else {
        cpy_r_r23 = NULL;
    }
    if (cpy_r_r23 != NULL) goto __LL2661;
    CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 398, CPyStatic_expandtype___globals, "union[mypy.types.CallableType, mypy.types.Parameters]", cpy_r_repl);
    goto CPyL85;
__LL2661: ;
    cpy_r_r24 = CPyDef_types___CallableType___expand_param_spec(cpy_r_t, cpy_r_r23, 1);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 398, CPyStatic_expandtype___globals);
        goto CPyL85;
    }
    cpy_r_t = cpy_r_r24;
    cpy_r_r25 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_types;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyDef_expandtype___ExpandTypeVisitor___expand_types(cpy_r_self, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 400, CPyStatic_expandtype___globals);
        goto CPyL86;
    }
    cpy_r_r27 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = PyNumber_Add(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 400, CPyStatic_expandtype___globals);
        goto CPyL86;
    }
    if (likely(PyList_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 400, CPyStatic_expandtype___globals, "list", cpy_r_r28);
        goto CPyL86;
    }
    cpy_r_r30 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_kinds;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_kinds;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = PyNumber_Add(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 401, CPyStatic_expandtype___globals);
        goto CPyL87;
    }
    if (likely(PyList_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 401, CPyStatic_expandtype___globals, "list", cpy_r_r32);
        goto CPyL87;
    }
    cpy_r_r34 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_names;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_prefix);
    cpy_r_r35 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_names;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = PyNumber_Add(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 402, CPyStatic_expandtype___globals);
        goto CPyL88;
    }
    if (likely(PyList_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 402, CPyStatic_expandtype___globals, "list", cpy_r_r36);
        goto CPyL88;
    }
    cpy_r_r38 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPY_GET_METHOD(cpy_r_r38, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r38, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 403, CPyStatic_expandtype___globals);
        goto CPyL89;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r39, CPyType_types___Type)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 403, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r39);
        goto CPyL89;
    }
    cpy_r_r41 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_type_guard;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_r41 != cpy_r_r42;
    if (!cpy_r_r43) goto CPyL28;
    cpy_r_r44 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_type_guard;
    CPy_INCREF(cpy_r_r44);
    if (likely(cpy_r_r44 != Py_None))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 404, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r44);
        goto CPyL90;
    }
    cpy_r_r46 = CPY_GET_METHOD(cpy_r_r45, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r45, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 404, CPyStatic_expandtype___globals);
        goto CPyL90;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_types___Type)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 404, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r46);
        goto CPyL90;
    }
    cpy_r_r48 = cpy_r_r47;
    goto CPyL29;
CPyL28: ;
    cpy_r_r49 = Py_None;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r48 = cpy_r_r49;
CPyL29: ;
    cpy_r_r50 = NULL;
    cpy_r_r51 = NULL;
    cpy_r_r52 = NULL;
    cpy_r_r53 = NULL;
    cpy_r_r54 = CPY_INT_TAG;
    cpy_r_r55 = CPY_INT_TAG;
    cpy_r_r56 = NULL;
    cpy_r_r57 = NULL;
    cpy_r_r58 = NULL;
    cpy_r_r59 = NULL;
    cpy_r_r60 = NULL;
    cpy_r_r61 = NULL;
    cpy_r_r62 = NULL;
    cpy_r_r63 = NULL;
    cpy_r_r64 = CPyDef_types___CallableType___copy_modified(cpy_r_t, cpy_r_r29, cpy_r_r33, cpy_r_r37, cpy_r_r40, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r48, cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 399, CPyStatic_expandtype___globals);
        goto CPyL79;
    }
    return cpy_r_r64;
CPyL31: ;
    cpy_r_r65 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    if (!cpy_r_r68) goto CPyL91;
    cpy_r_r69 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    cpy_r_r70 = (CPyPtr)&((PyVarObject *)cpy_r_r69)->ob_size;
    cpy_r_r71 = *(int64_t *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 << 1;
    cpy_r_r73 = cpy_r_r72 == 4;
    if (!cpy_r_r73) goto CPyL91;
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___ParamSpecType))
        cpy_r_r74 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 412, CPyStatic_expandtype___globals, "mypy.types.ParamSpecType", cpy_r_repl);
        goto CPyL84;
    }
    cpy_r_r75 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r74)->_prefix;
    CPy_INCREF(cpy_r_r75);
    CPy_DECREF(cpy_r_repl);
    cpy_r_prefix = cpy_r_r75;
    if (likely(cpy_r_param_spec != Py_None))
        cpy_r_r76 = cpy_r_param_spec;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 413, CPyStatic_expandtype___globals, "mypy.types.ParamSpecType", cpy_r_param_spec);
        goto CPyL92;
    }
    cpy_r_r77 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r76)->_prefix;
    CPy_INCREF(cpy_r_r77);
    CPy_DECREF(cpy_r_param_spec);
    cpy_r_old_prefix = cpy_r_r77;
    cpy_r_r78 = ((mypy___types___ParametersObject *)cpy_r_old_prefix)->_arg_types;
    CPy_INCREF(cpy_r_r78);
    cpy_r_r79 = PyObject_Not(cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 416, CPyStatic_expandtype___globals);
        goto CPyL93;
    }
    cpy_r_r81 = cpy_r_r79;
    if (!cpy_r_r81) goto CPyL38;
    cpy_r_r82 = cpy_r_r81;
    goto CPyL40;
CPyL38: ;
    cpy_r_r83 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_types;
    CPy_INCREF(cpy_r_r83);
    cpy_r_r84 = PyObject_Not(cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 416, CPyStatic_expandtype___globals);
        goto CPyL93;
    }
    cpy_r_r86 = cpy_r_r84;
    cpy_r_r82 = cpy_r_r86;
CPyL40: ;
    if (cpy_r_r82) {
        goto CPyL43;
    } else
        goto CPyL94;
CPyL41: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r87 = 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 416, CPyStatic_expandtype___globals);
        goto CPyL79;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r88 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_types;
    CPy_INCREF(cpy_r_r88);
    cpy_r_r89 = ((mypy___types___ParametersObject *)cpy_r_old_prefix)->_arg_types;
    CPy_INCREF(cpy_r_r89);
    cpy_r_r90 = PyNumber_Add(cpy_r_r88, cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 419, CPyStatic_expandtype___globals);
        goto CPyL93;
    }
    if (likely(PyList_Check(cpy_r_r90)))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 419, CPyStatic_expandtype___globals, "list", cpy_r_r90);
        goto CPyL93;
    }
    cpy_r_r92 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r92);
    cpy_r_r93 = PyNumber_Add(cpy_r_r91, cpy_r_r92);
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 419, CPyStatic_expandtype___globals);
        goto CPyL93;
    }
    if (likely(PyList_Check(cpy_r_r93)))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 419, CPyStatic_expandtype___globals, "list", cpy_r_r93);
        goto CPyL93;
    }
    cpy_r_r95 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_kinds;
    CPy_INCREF(cpy_r_r95);
    cpy_r_r96 = ((mypy___types___ParametersObject *)cpy_r_old_prefix)->_arg_kinds;
    CPy_INCREF(cpy_r_r96);
    cpy_r_r97 = PyNumber_Add(cpy_r_r95, cpy_r_r96);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 420, CPyStatic_expandtype___globals);
        goto CPyL95;
    }
    if (likely(PyList_Check(cpy_r_r97)))
        cpy_r_r98 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 420, CPyStatic_expandtype___globals, "list", cpy_r_r97);
        goto CPyL95;
    }
    cpy_r_r99 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_kinds;
    CPy_INCREF(cpy_r_r99);
    cpy_r_r100 = PyNumber_Add(cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 420, CPyStatic_expandtype___globals);
        goto CPyL95;
    }
    if (likely(PyList_Check(cpy_r_r100)))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 420, CPyStatic_expandtype___globals, "list", cpy_r_r100);
        goto CPyL95;
    }
    cpy_r_r102 = ((mypy___types___ParametersObject *)cpy_r_prefix)->_arg_names;
    CPy_INCREF(cpy_r_r102);
    CPy_DECREF(cpy_r_prefix);
    cpy_r_r103 = ((mypy___types___ParametersObject *)cpy_r_old_prefix)->_arg_names;
    CPy_INCREF(cpy_r_r103);
    CPy_DECREF(cpy_r_old_prefix);
    cpy_r_r104 = PyNumber_Add(cpy_r_r102, cpy_r_r103);
    CPy_DECREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 421, CPyStatic_expandtype___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r104)))
        cpy_r_r105 = cpy_r_r104;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 421, CPyStatic_expandtype___globals, "list", cpy_r_r104);
        goto CPyL96;
    }
    cpy_r_r106 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_names;
    CPy_INCREF(cpy_r_r106);
    cpy_r_r107 = PyNumber_Add(cpy_r_r105, cpy_r_r106);
    CPy_DECREF(cpy_r_r105);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 421, CPyStatic_expandtype___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r107)))
        cpy_r_r108 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 421, CPyStatic_expandtype___globals, "list", cpy_r_r107);
        goto CPyL96;
    }
    cpy_r_r109 = NULL;
    cpy_r_r110 = NULL;
    cpy_r_r111 = NULL;
    cpy_r_r112 = NULL;
    cpy_r_r113 = NULL;
    cpy_r_r114 = CPY_INT_TAG;
    cpy_r_r115 = CPY_INT_TAG;
    cpy_r_r116 = NULL;
    cpy_r_r117 = NULL;
    cpy_r_r118 = NULL;
    cpy_r_r119 = NULL;
    cpy_r_r120 = NULL;
    cpy_r_r121 = NULL;
    cpy_r_r122 = NULL;
    cpy_r_r123 = NULL;
    cpy_r_r124 = NULL;
    cpy_r_r125 = CPyDef_types___CallableType___copy_modified(cpy_r_t, cpy_r_r94, cpy_r_r101, cpy_r_r108, cpy_r_r109, cpy_r_r110, cpy_r_r111, cpy_r_r112, cpy_r_r113, cpy_r_r114, cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r101);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 418, CPyStatic_expandtype___globals);
        goto CPyL79;
    }
    cpy_r_t = cpy_r_r125;
CPyL57: ;
    cpy_r_r126 = CPyDef_types___CallableType___var_arg(cpy_r_t);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 424, CPyStatic_expandtype___globals);
        goto CPyL97;
    }
    cpy_r_var_arg = cpy_r_r126;
    cpy_r_r127 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r128 = cpy_r_var_arg != cpy_r_r127;
    if (!cpy_r_r128) goto CPyL98;
    CPy_INCREF(cpy_r_var_arg);
    if (likely(cpy_r_var_arg != Py_None))
        cpy_r_r129 = cpy_r_var_arg;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 425, CPyStatic_expandtype___globals, "tuple", cpy_r_var_arg);
        goto CPyL99;
    }
    cpy_r_r130 = CPySequenceTuple_GetItem(cpy_r_r129, 4);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 425, CPyStatic_expandtype___globals);
        goto CPyL99;
    }
    cpy_r_r131 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r132 = (CPyPtr)&((PyObject *)cpy_r_r130)->ob_type;
    cpy_r_r133 = *(PyObject * *)cpy_r_r132;
    CPy_DECREF(cpy_r_r130);
    cpy_r_r134 = cpy_r_r133 == cpy_r_r131;
    if (!cpy_r_r134) goto CPyL98;
    if (likely(cpy_r_var_arg != Py_None))
        cpy_r_r135 = cpy_r_var_arg;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 426, CPyStatic_expandtype___globals, "tuple", cpy_r_var_arg);
        goto CPyL97;
    }
    cpy_r_r136 = CPySequenceTuple_GetItem(cpy_r_r135, 4);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 426, CPyStatic_expandtype___globals);
        goto CPyL97;
    }
    if (likely(Py_TYPE(cpy_r_r136) == CPyType_types___UnpackType))
        cpy_r_r137 = cpy_r_r136;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 426, CPyStatic_expandtype___globals, "mypy.types.UnpackType", cpy_r_r136);
        goto CPyL97;
    }
    cpy_r_r138 = CPyDef_expandtype___ExpandTypeVisitor___interpolate_args_for_unpack(cpy_r_self, cpy_r_t, cpy_r_r137);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138.f0 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 426, CPyStatic_expandtype___globals);
        goto CPyL97;
    }
    cpy_r_r139 = cpy_r_r138.f0;
    CPy_INCREF(cpy_r_r139);
    cpy_r_arg_names = cpy_r_r139;
    cpy_r_r140 = cpy_r_r138.f1;
    CPy_INCREF(cpy_r_r140);
    cpy_r_arg_kinds = cpy_r_r140;
    cpy_r_r141 = cpy_r_r138.f2;
    CPy_INCREF(cpy_r_r141);
    CPy_DECREF(cpy_r_r138.f0);
    CPy_DECREF(cpy_r_r138.f1);
    CPy_DECREF(cpy_r_r138.f2);
    cpy_r_arg_types = cpy_r_r141;
    goto CPyL69;
CPyL67: ;
    cpy_r_r142 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_names;
    CPy_INCREF(cpy_r_r142);
    cpy_r_arg_names = cpy_r_r142;
    cpy_r_r143 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_kinds;
    CPy_INCREF(cpy_r_r143);
    cpy_r_arg_kinds = cpy_r_r143;
    cpy_r_r144 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r144);
    cpy_r_r145 = CPyDef_expandtype___ExpandTypeVisitor___expand_types(cpy_r_self, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 430, CPyStatic_expandtype___globals);
        goto CPyL100;
    }
    cpy_r_arg_types = cpy_r_r145;
CPyL69: ;
    cpy_r_r146 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r146);
    cpy_r_r147 = CPY_GET_METHOD(cpy_r_r146, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r146, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 436, CPyStatic_expandtype___globals);
        goto CPyL101;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r147, CPyType_types___Type)))
        cpy_r_r148 = cpy_r_r147;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 436, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r147);
        goto CPyL101;
    }
    cpy_r_r149 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_type_guard;
    cpy_r_r150 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r151 = cpy_r_r149 != cpy_r_r150;
    if (!cpy_r_r151) goto CPyL76;
    cpy_r_r152 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_type_guard;
    CPy_INCREF(cpy_r_r152);
    if (likely(cpy_r_r152 != Py_None))
        cpy_r_r153 = cpy_r_r152;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 437, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r152);
        goto CPyL102;
    }
    cpy_r_r154 = CPY_GET_METHOD(cpy_r_r153, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r153, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 437, CPyStatic_expandtype___globals);
        goto CPyL102;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r154, CPyType_types___Type)))
        cpy_r_r155 = cpy_r_r154;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_callable_type", 437, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r154);
        goto CPyL102;
    }
    cpy_r_r156 = cpy_r_r155;
    goto CPyL77;
CPyL76: ;
    cpy_r_r157 = Py_None;
    CPy_INCREF(cpy_r_r157);
    cpy_r_r156 = cpy_r_r157;
CPyL77: ;
    cpy_r_r158 = NULL;
    cpy_r_r159 = NULL;
    cpy_r_r160 = NULL;
    cpy_r_r161 = NULL;
    cpy_r_r162 = CPY_INT_TAG;
    cpy_r_r163 = CPY_INT_TAG;
    cpy_r_r164 = NULL;
    cpy_r_r165 = NULL;
    cpy_r_r166 = NULL;
    cpy_r_r167 = NULL;
    cpy_r_r168 = NULL;
    cpy_r_r169 = NULL;
    cpy_r_r170 = NULL;
    cpy_r_r171 = NULL;
    cpy_r_r172 = CPyDef_types___CallableType___copy_modified(cpy_r_t, cpy_r_arg_types, cpy_r_arg_kinds, cpy_r_arg_names, cpy_r_r148, cpy_r_r158, cpy_r_r159, cpy_r_r160, cpy_r_r161, cpy_r_r162, cpy_r_r163, cpy_r_r164, cpy_r_r165, cpy_r_r166, cpy_r_r167, cpy_r_r168, cpy_r_r169, cpy_r_r156, cpy_r_r170, cpy_r_r171);
    CPy_DECREF(cpy_r_arg_types);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_arg_names);
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_r156);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 432, CPyStatic_expandtype___globals);
        goto CPyL79;
    }
    return cpy_r_r172;
CPyL79: ;
    cpy_r_r173 = NULL;
    return cpy_r_r173;
CPyL80: ;
    CPy_DECREF(cpy_r_param_spec);
    CPy_INCREF(cpy_r_t);
    goto CPyL57;
CPyL81: ;
    CPy_DecRef(cpy_r_param_spec);
    goto CPyL79;
CPyL82: ;
    CPy_DecRef(cpy_r_param_spec);
    CPy_DecRef(cpy_r_r3);
    goto CPyL79;
CPyL83: ;
    CPy_DecRef(cpy_r_param_spec);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL79;
CPyL84: ;
    CPy_DecRef(cpy_r_param_spec);
    CPy_DecRef(cpy_r_repl);
    goto CPyL79;
CPyL85: ;
    CPy_DecRef(cpy_r_prefix);
    goto CPyL79;
CPyL86: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_prefix);
    goto CPyL79;
CPyL87: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r29);
    goto CPyL79;
CPyL88: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    goto CPyL79;
CPyL89: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r37);
    goto CPyL79;
CPyL90: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r40);
    goto CPyL79;
CPyL91: ;
    CPy_DECREF(cpy_r_param_spec);
    CPy_DECREF(cpy_r_repl);
    CPy_INCREF(cpy_r_t);
    goto CPyL57;
CPyL92: ;
    CPy_DecRef(cpy_r_param_spec);
    CPy_DecRef(cpy_r_prefix);
    goto CPyL79;
CPyL93: ;
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_old_prefix);
    goto CPyL79;
CPyL94: ;
    CPy_DECREF(cpy_r_prefix);
    CPy_DECREF(cpy_r_old_prefix);
    goto CPyL41;
CPyL95: ;
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_old_prefix);
    CPy_DecRef(cpy_r_r94);
    goto CPyL79;
CPyL96: ;
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r101);
    goto CPyL79;
CPyL97: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL79;
CPyL98: ;
    CPy_DECREF(cpy_r_var_arg);
    goto CPyL67;
CPyL99: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_var_arg);
    goto CPyL79;
CPyL100: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    goto CPyL79;
CPyL101: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_types);
    goto CPyL79;
CPyL102: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_r148);
    goto CPyL79;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_callable_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type", 382, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_callable_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_callable_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_callable_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type__TypeTranslator_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_new_item;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_overloaded", 441, CPyStatic_expandtype___globals);
        goto CPyL18;
    }
    cpy_r_items = cpy_r_r0;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_t, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_overloaded", 442, CPyStatic_expandtype___globals);
        goto CPyL19;
    }
CPyL2: ;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL20;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_types___CallableType))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_overloaded", 442, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_r7);
        goto CPyL21;
    }
    cpy_r_item = cpy_r_r8;
    cpy_r_r9 = CPyDef_types___CallableType___accept(cpy_r_item, cpy_r_self);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_overloaded", 443, CPyStatic_expandtype___globals);
        goto CPyL21;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_types___Type)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_overloaded", 443, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r9);
        goto CPyL21;
    }
    cpy_r_new_item = cpy_r_r10;
    cpy_r_r11 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r12 = CPy_TypeCheck(cpy_r_new_item, cpy_r_r11);
    if (cpy_r_r12) {
        goto CPyL10;
    } else
        goto CPyL22;
CPyL8: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_overloaded", 444, CPyStatic_expandtype___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r14 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_new_item)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (cpy_r_r17) {
        goto CPyL13;
    } else
        goto CPyL23;
CPyL11: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_overloaded", 445, CPyStatic_expandtype___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL13: ;
    if (likely(Py_TYPE(cpy_r_new_item) == CPyType_types___CallableType))
        cpy_r_r19 = cpy_r_new_item;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_overloaded", 446, CPyStatic_expandtype___globals, "mypy.types.CallableType", cpy_r_new_item);
        goto CPyL21;
    }
    cpy_r_r20 = PyList_Append(cpy_r_items, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_overloaded", 446, CPyStatic_expandtype___globals);
        goto CPyL21;
    }
    cpy_r_r22 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r22;
    goto CPyL3;
CPyL16: ;
    cpy_r_r23 = CPyDef_types___Overloaded(cpy_r_items);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_overloaded", 447, CPyStatic_expandtype___globals);
        goto CPyL18;
    }
    return cpy_r_r23;
CPyL18: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL19: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL18;
CPyL20: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r1);
    goto CPyL18;
CPyL22: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_new_item);
    goto CPyL8;
CPyL23: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_new_item);
    goto CPyL11;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_overloaded(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_overloaded", 440, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_overloaded(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___expand_types_with_unpack(PyObject *cpy_r_self, PyObject *cpy_r_typs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_unpacked_items;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    cpy_r_r0 = CPyDef_types___flatten_nested_tuples(cpy_r_typs);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_types_with_unpack", 460, CPyStatic_expandtype___globals);
        goto CPyL32;
    }
    cpy_r_typs = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_types_with_unpack", 461, CPyStatic_expandtype___globals);
        goto CPyL33;
    }
    cpy_r_items = cpy_r_r1;
    CPy_INCREF(cpy_r_typs);
    if (likely(PyList_Check(cpy_r_typs)))
        cpy_r_r2 = cpy_r_typs;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_types_with_unpack", 462, CPyStatic_expandtype___globals, "list", cpy_r_typs);
        goto CPyL34;
    }
    cpy_r_r3 = 0;
CPyL4: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL35;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_types_with_unpack", 462, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL36;
    }
    cpy_r_item = cpy_r_r9;
    cpy_r_r10 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL27;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_types___UnpackType))
        cpy_r_r14 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_types_with_unpack", 463, CPyStatic_expandtype___globals, "mypy.types.UnpackType", cpy_r_item);
        goto CPyL37;
    }
    cpy_r_r15 = ((mypy___types___UnpackTypeObject *)cpy_r_r14)->_type;
    cpy_r_r16 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL27;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_types___UnpackType))
        cpy_r_r20 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_types_with_unpack", 464, CPyStatic_expandtype___globals, "mypy.types.UnpackType", cpy_r_item);
        goto CPyL36;
    }
    cpy_r_r21 = CPyDef_expandtype___ExpandTypeVisitor___expand_unpack(cpy_r_self, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_types_with_unpack", 464, CPyStatic_expandtype___globals);
        goto CPyL36;
    }
    cpy_r_unpacked_items = cpy_r_r21;
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_unpacked_items == cpy_r_r22;
    if (cpy_r_r23) {
        goto CPyL38;
    } else
        goto CPyL14;
CPyL12: ;
    cpy_r_r24 = 2;
    cpy_r_r25 = CPY_INT_TAG;
    cpy_r_r26 = CPY_INT_TAG;
    cpy_r_r27 = CPyDef_types___UninhabitedType(cpy_r_r24, cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_types_with_unpack", 467, CPyStatic_expandtype___globals);
        goto CPyL32;
    }
    return cpy_r_r27;
CPyL14: ;
    cpy_r_r28 = (PyObject *)CPyType_types___Instance;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_unpacked_items)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    if (!cpy_r_r31) goto CPyL22;
    if (likely(PyList_Check(cpy_r_typs)))
        cpy_r_r32 = cpy_r_typs;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_types_with_unpack", 469, CPyStatic_expandtype___globals, "list", cpy_r_typs);
        goto CPyL39;
    }
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 << 1;
    cpy_r_r36 = cpy_r_r35 == 2;
    if (cpy_r_r36) {
        goto CPyL40;
    } else
        goto CPyL41;
CPyL17: ;
    if (likely(Py_TYPE(cpy_r_unpacked_items) == CPyType_types___Instance))
        cpy_r_r37 = cpy_r_unpacked_items;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_types_with_unpack", 470, CPyStatic_expandtype___globals, "mypy.types.Instance", cpy_r_unpacked_items);
        goto CPyL32;
    }
    return cpy_r_r37;
CPyL19: ;
    if (0) {
        goto CPyL30;
    } else
        goto CPyL42;
CPyL20: ;
    PyErr_SetString(PyExc_AssertionError, "Invalid unpack of variable length tuple");
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_types_with_unpack", 472, CPyStatic_expandtype___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r39 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_unpacked_items)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (cpy_r_r42) {
        goto CPyL43;
    } else
        goto CPyL25;
CPyL23: ;
    if (likely(Py_TYPE(cpy_r_unpacked_items) == CPyType_types___AnyType))
        cpy_r_r43 = cpy_r_unpacked_items;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_types_with_unpack", 474, CPyStatic_expandtype___globals, "mypy.types.AnyType", cpy_r_unpacked_items);
        goto CPyL32;
    }
    return cpy_r_r43;
CPyL25: ;
    if (likely(PyList_Check(cpy_r_unpacked_items)))
        cpy_r_r44 = cpy_r_unpacked_items;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_types_with_unpack", 476, CPyStatic_expandtype___globals, "list", cpy_r_unpacked_items);
        goto CPyL36;
    }
    cpy_r_r45 = CPyList_Extend(cpy_r_items, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_types_with_unpack", 476, CPyStatic_expandtype___globals);
        goto CPyL36;
    } else
        goto CPyL44;
CPyL27: ;
    cpy_r_r46 = CPY_GET_METHOD(cpy_r_item, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_item, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_types_with_unpack", 479, CPyStatic_expandtype___globals);
        goto CPyL36;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_types___Type)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_types_with_unpack", 479, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r46);
        goto CPyL36;
    }
    cpy_r_r48 = PyList_Append(cpy_r_items, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_types_with_unpack", 479, CPyStatic_expandtype___globals);
        goto CPyL36;
    }
CPyL30: ;
    cpy_r_r50 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r50;
    goto CPyL4;
CPyL31: ;
    return cpy_r_items;
CPyL32: ;
    cpy_r_r51 = NULL;
    return cpy_r_r51;
CPyL33: ;
    CPy_DecRef(cpy_r_typs);
    goto CPyL32;
CPyL34: ;
    CPy_DecRef(cpy_r_typs);
    CPy_DecRef(cpy_r_items);
    goto CPyL32;
CPyL35: ;
    CPy_DECREF(cpy_r_typs);
    CPy_DECREF(cpy_r_r2);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_typs);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r2);
    goto CPyL32;
CPyL37: ;
    CPy_DecRef(cpy_r_typs);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_item);
    goto CPyL32;
CPyL38: ;
    CPy_DECREF(cpy_r_typs);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_unpacked_items);
    goto CPyL12;
CPyL39: ;
    CPy_DecRef(cpy_r_typs);
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_unpacked_items);
    goto CPyL32;
CPyL40: ;
    CPy_DECREF(cpy_r_typs);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_r2);
    goto CPyL17;
CPyL41: ;
    CPy_DECREF(cpy_r_unpacked_items);
    goto CPyL19;
CPyL42: ;
    CPy_DECREF(cpy_r_typs);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_r2);
    goto CPyL20;
CPyL43: ;
    CPy_DECREF(cpy_r_typs);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_r2);
    goto CPyL23;
CPyL44: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL30;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___expand_types_with_unpack(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typs", 0};
    static CPyArg_Parser parser = {"O:expand_types_with_unpack", kwlist, 0};
    PyObject *obj_typs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typs)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_typs = obj_typs;
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___expand_types_with_unpack(arg_self, arg_typs);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "expand_types_with_unpack", 449, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_expandtype___ExpandTypeVisitor___expand_types_with_unpack(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_tuple_type", 483, CPyStatic_expandtype___globals);
        goto CPyL17;
    }
    cpy_r_items = cpy_r_r1;
    cpy_r_r2 = (PyObject *)&PyList_Type;
    cpy_r_r3 = PyObject_IsInstance(cpy_r_items, cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_tuple_type", 484, CPyStatic_expandtype___globals);
        goto CPyL18;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL15;
    cpy_r_r6 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_partial_fallback;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_types___Instance___accept(cpy_r_r6, cpy_r_self);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_tuple_type", 485, CPyStatic_expandtype___globals);
        goto CPyL18;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_tuple_type", 485, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL18;
    }
    cpy_r_fallback = cpy_r_r8;
    cpy_r_r9 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r10 = CPy_TypeCheck(cpy_r_fallback, cpy_r_r9);
    if (cpy_r_r10) goto CPyL7;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL8;
CPyL7: ;
    cpy_r_r12 = (PyObject *)CPyType_types___Instance;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_fallback)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    cpy_r_r11 = cpy_r_r15;
CPyL8: ;
    if (cpy_r_r11) {
        goto CPyL11;
    } else
        goto CPyL19;
CPyL9: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_tuple_type", 486, CPyStatic_expandtype___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL11: ;
    if (likely(PyList_Check(cpy_r_items)))
        cpy_r_r17 = cpy_r_items;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_tuple_type", 487, CPyStatic_expandtype___globals, "list", cpy_r_items);
        goto CPyL20;
    }
    if (likely(Py_TYPE(cpy_r_fallback) == CPyType_types___Instance))
        cpy_r_r18 = cpy_r_fallback;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_tuple_type", 487, CPyStatic_expandtype___globals, "mypy.types.Instance", cpy_r_fallback);
        goto CPyL21;
    }
    cpy_r_r19 = CPyDef_types___TupleType___copy_modified(cpy_r_t, cpy_r_r18, cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_tuple_type", 487, CPyStatic_expandtype___globals);
        goto CPyL17;
    }
    return cpy_r_r19;
CPyL15: ;
    if (Py_TYPE(cpy_r_items) == CPyType_types___AnyType)
        cpy_r_r20 = cpy_r_items;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL2662;
    if (Py_TYPE(cpy_r_items) == CPyType_types___UninhabitedType)
        cpy_r_r20 = cpy_r_items;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL2662;
    if (Py_TYPE(cpy_r_items) == CPyType_types___Instance)
        cpy_r_r20 = cpy_r_items;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL2662;
    CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_tuple_type", 489, CPyStatic_expandtype___globals, "union[mypy.types.AnyType, mypy.types.UninhabitedType, mypy.types.Instance]", cpy_r_items);
    goto CPyL17;
__LL2662: ;
    return cpy_r_r20;
CPyL17: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL18: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_fallback);
    goto CPyL9;
CPyL20: ;
    CPy_DecRef(cpy_r_fallback);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL17;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_tuple_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_tuple_type", 482, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_types___Instance___accept(cpy_r_r0, cpy_r_self);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_typeddict_type", 492, CPyStatic_expandtype___globals);
        goto CPyL13;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_typeddict_type", 492, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL13;
    }
    cpy_r_fallback = cpy_r_r2;
    cpy_r_r3 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r4 = CPy_TypeCheck(cpy_r_fallback, cpy_r_r3);
    if (cpy_r_r4) goto CPyL4;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL5;
CPyL4: ;
    cpy_r_r6 = (PyObject *)CPyType_types___Instance;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_fallback)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    cpy_r_r5 = cpy_r_r9;
CPyL5: ;
    if (cpy_r_r5) {
        goto CPyL8;
    } else
        goto CPyL14;
CPyL6: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_typeddict_type", 493, CPyStatic_expandtype___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r11 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDict_ValuesView(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_typeddict_type", 494, CPyStatic_expandtype___globals);
        goto CPyL15;
    }
    cpy_r_r13 = CPyDef_expandtype___ExpandTypeVisitor___expand_types(cpy_r_self, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_typeddict_type", 494, CPyStatic_expandtype___globals);
        goto CPyL15;
    }
    if (likely(Py_TYPE(cpy_r_fallback) == CPyType_types___Instance))
        cpy_r_r14 = cpy_r_fallback;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_typeddict_type", 494, CPyStatic_expandtype___globals, "mypy.types.Instance", cpy_r_fallback);
        goto CPyL16;
    }
    cpy_r_r15 = NULL;
    cpy_r_r16 = NULL;
    cpy_r_r17 = CPyDef_types___TypedDictType___copy_modified(cpy_r_t, cpy_r_r14, cpy_r_r13, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_typeddict_type", 494, CPyStatic_expandtype___globals);
        goto CPyL13;
    }
    return cpy_r_r17;
CPyL13: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL14: ;
    CPy_DECREF(cpy_r_fallback);
    goto CPyL6;
CPyL15: ;
    CPy_DecRef(cpy_r_fallback);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL13;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_typeddict_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_typeddict_type", 491, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_literal_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_literal_type", 496, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_literal_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_expanded;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_simplified;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_expandtype___ExpandTypeVisitor___expand_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_union_type", 501, CPyStatic_expandtype___globals);
        goto CPyL7;
    }
    cpy_r_expanded = cpy_r_r1;
    cpy_r_r2 = 2;
    cpy_r_r3 = CPyDef_types___flatten_nested_unions(cpy_r_expanded, cpy_r_r2);
    CPy_DECREF(cpy_r_expanded);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_union_type", 506, CPyStatic_expandtype___globals);
        goto CPyL7;
    }
    cpy_r_r4 = CPyDef_expandtype___remove_trivial(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_union_type", 506, CPyStatic_expandtype___globals);
        goto CPyL7;
    }
    cpy_r_r5 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_line;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_column;
    CPyTagged_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_types___UnionType___make_union(cpy_r_r4, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_union_type", 505, CPyStatic_expandtype___globals);
        goto CPyL7;
    }
    cpy_r_simplified = cpy_r_r7;
    cpy_r_r8 = CPyDef_types___get_proper_type(cpy_r_simplified);
    CPy_DECREF(cpy_r_simplified);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_union_type", 513, CPyStatic_expandtype___globals);
        goto CPyL7;
    }
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_union_type", 513, CPyStatic_expandtype___globals, "mypy.types.ProperType", cpy_r_r8);
        goto CPyL7;
    }
    return cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_union_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_union_type", 500, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_partial_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_partial_type", 515, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_partial_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_item;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_item;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_type", 522, CPyStatic_expandtype___globals);
        goto CPyL4;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_type_type", 522, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL4;
    }
    cpy_r_item = cpy_r_r2;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_types___TypeType___make_normalized(cpy_r_item, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_type", 523, CPyStatic_expandtype___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_type_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_type_type", 518, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_type_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_expandtype___ExpandTypeVisitor___expand_types_with_unpack(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_alias_type", 528, CPyStatic_expandtype___globals);
        goto CPyL8;
    }
    cpy_r_args = cpy_r_r1;
    cpy_r_r2 = (PyObject *)&PyList_Type;
    cpy_r_r3 = PyObject_IsInstance(cpy_r_args, cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_alias_type", 529, CPyStatic_expandtype___globals);
        goto CPyL9;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL6;
    if (likely(PyList_Check(cpy_r_args)))
        cpy_r_r6 = cpy_r_args;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_type_alias_type", 530, CPyStatic_expandtype___globals, "list", cpy_r_args);
        goto CPyL8;
    }
    cpy_r_r7 = CPyDef_types___TypeAliasType___copy_modified(cpy_r_t, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "visit_type_alias_type", 530, CPyStatic_expandtype___globals);
        goto CPyL8;
    }
    return cpy_r_r7;
CPyL6: ;
    if (Py_TYPE(cpy_r_args) == CPyType_types___AnyType)
        cpy_r_r8 = cpy_r_args;
    else {
        cpy_r_r8 = NULL;
    }
    if (cpy_r_r8 != NULL) goto __LL2663;
    if (Py_TYPE(cpy_r_args) == CPyType_types___UninhabitedType)
        cpy_r_r8 = cpy_r_args;
    else {
        cpy_r_r8 = NULL;
    }
    if (cpy_r_r8 != NULL) goto __LL2663;
    if (Py_TYPE(cpy_r_args) == CPyType_types___Instance)
        cpy_r_r8 = cpy_r_args;
    else {
        cpy_r_r8 = NULL;
    }
    if (cpy_r_r8 != NULL) goto __LL2663;
    CPy_TypeErrorTraceback("mypy/expandtype.py", "visit_type_alias_type", 532, CPyStatic_expandtype___globals, "union[mypy.types.AnyType, mypy.types.UninhabitedType, mypy.types.Instance]", cpy_r_args);
    goto CPyL8;
__LL2663: ;
    return cpy_r_r8;
CPyL8: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL9: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL8;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_type_alias_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_type_alias_type", 525, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_expandtype___ExpandTypeVisitor___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___ExpandTypeVisitor___expand_types(PyObject *cpy_r_self, PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_types", 535, CPyStatic_expandtype___globals);
        goto CPyL9;
    }
    cpy_r_a = cpy_r_r0;
    cpy_r_r1 = PyObject_GetIter(cpy_r_types);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_types", 536, CPyStatic_expandtype___globals);
        goto CPyL10;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL11;
    if (likely(PyObject_TypeCheck(cpy_r_r2, CPyType_types___Type)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_types", 536, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r2);
        goto CPyL12;
    }
    cpy_r_t = cpy_r_r3;
    cpy_r_r4 = CPY_GET_METHOD(cpy_r_t, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_types", 537, CPyStatic_expandtype___globals);
        goto CPyL12;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r4, CPyType_types___Type)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_types", 537, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r4);
        goto CPyL12;
    }
    cpy_r_r6 = PyList_Append(cpy_r_a, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_types", 537, CPyStatic_expandtype___globals);
        goto CPyL12;
    } else
        goto CPyL2;
CPyL7: ;
    cpy_r_r8 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_types", 536, CPyStatic_expandtype___globals);
        goto CPyL10;
    }
    return cpy_r_a;
CPyL9: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL10: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL9;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL12: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
}

PyObject *CPyPy_expandtype___ExpandTypeVisitor___expand_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:expand_types", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_types___InstantiateAliasVisitor) || (Py_TYPE(obj_self) == CPyType_expandtype___ExpandTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.expandtype.ExpandTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_types = obj_types;
    PyObject *retval = CPyDef_expandtype___ExpandTypeVisitor___expand_types(arg_self, arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "expand_types", 534, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___expand_unpack_with_variables(PyObject *cpy_r_t, PyObject *cpy_r_variables) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_repl;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyPtr cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject **cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    cpy_r_r0 = ((mypy___types___UnpackTypeObject *)cpy_r_t)->_type;
    cpy_r_r1 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL38;
    cpy_r_r5 = ((mypy___types___UnpackTypeObject *)cpy_r_t)->_type;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___TypeVarTupleType))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 548, CPyStatic_expandtype___globals, "mypy.types.TypeVarTupleType", cpy_r_r5);
        goto CPyL44;
    }
    cpy_r_r7 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r6)->_id;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyStatics[308]; /* 'get' */
    PyObject *cpy_r_r9[3] = {cpy_r_variables, cpy_r_r7, cpy_r_t};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r10, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 548, CPyStatic_expandtype___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_r7);
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 548, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL44;
    }
    cpy_r_r13 = CPyDef_types___get_proper_type(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 548, CPyStatic_expandtype___globals);
        goto CPyL44;
    }
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 548, CPyStatic_expandtype___globals, "mypy.types.ProperType", cpy_r_r13);
        goto CPyL44;
    }
    cpy_r_repl = cpy_r_r14;
    cpy_r_r15 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL9;
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___TupleType))
        cpy_r_r19 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 550, CPyStatic_expandtype___globals, "mypy.types.TupleType", cpy_r_repl);
        goto CPyL46;
    }
    cpy_r_r20 = ((mypy___types___TupleTypeObject *)cpy_r_r19)->_items;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_repl);
    return cpy_r_r20;
CPyL9: ;
    cpy_r_r21 = (PyObject *)CPyType_types___Instance;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL18;
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___Instance))
        cpy_r_r25 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 551, CPyStatic_expandtype___globals, "mypy.types.Instance", cpy_r_repl);
        goto CPyL46;
    }
    cpy_r_r26 = ((mypy___types___InstanceObject *)cpy_r_r25)->_type;
    cpy_r_r27 = CPY_GET_ATTR(cpy_r_r26, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 551, CPyStatic_expandtype___globals);
        goto CPyL46;
    }
CPyL12: ;
    cpy_r_r28 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r29 = PyUnicode_Compare(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r30 = cpy_r_r29 == -1;
    if (!cpy_r_r30) goto CPyL15;
    cpy_r_r31 = PyErr_Occurred();
    cpy_r_r32 = cpy_r_r31 != NULL;
    if (!cpy_r_r32) goto CPyL15;
    cpy_r_r33 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 551, CPyStatic_expandtype___globals);
        goto CPyL46;
    }
CPyL15: ;
    cpy_r_r34 = cpy_r_r29 == 0;
    if (!cpy_r_r34) goto CPyL18;
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___Instance))
        cpy_r_r35 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 552, CPyStatic_expandtype___globals, "mypy.types.Instance", cpy_r_repl);
        goto CPyL44;
    }
    return cpy_r_r35;
CPyL18: ;
    cpy_r_r36 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    if (!cpy_r_r39) goto CPyL21;
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___AnyType))
        cpy_r_r40 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 556, CPyStatic_expandtype___globals, "mypy.types.AnyType", cpy_r_repl);
        goto CPyL44;
    }
    return cpy_r_r40;
CPyL21: ;
    cpy_r_r41 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL26;
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___TypeVarTupleType))
        cpy_r_r45 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 558, CPyStatic_expandtype___globals, "mypy.types.TypeVarTupleType", cpy_r_repl);
        goto CPyL44;
    }
    cpy_r_r46 = CPY_INT_TAG;
    cpy_r_r47 = CPY_INT_TAG;
    cpy_r_r48 = CPyDef_types___UnpackType(cpy_r_r45, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 558, CPyStatic_expandtype___globals);
        goto CPyL44;
    }
    cpy_r_r49 = PyList_New(1);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 558, CPyStatic_expandtype___globals);
        goto CPyL47;
    }
    cpy_r_r50 = (CPyPtr)&((PyListObject *)cpy_r_r49)->ob_item;
    cpy_r_r51 = *(CPyPtr *)cpy_r_r50;
    *(PyObject * *)cpy_r_r51 = cpy_r_r48;
    return cpy_r_r49;
CPyL26: ;
    cpy_r_r52 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r53 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r54 = *(PyObject * *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 == cpy_r_r52;
    if (!cpy_r_r55) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_types___UnpackType))
        cpy_r_r56 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 560, CPyStatic_expandtype___globals, "mypy.types.UnpackType", cpy_r_repl);
        goto CPyL44;
    }
    cpy_r_r57 = PyList_New(1);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 560, CPyStatic_expandtype___globals);
        goto CPyL48;
    }
    cpy_r_r58 = (CPyPtr)&((PyListObject *)cpy_r_r57)->ob_item;
    cpy_r_r59 = *(CPyPtr *)cpy_r_r58;
    *(PyObject * *)cpy_r_r59 = cpy_r_r56;
    return cpy_r_r57;
CPyL30: ;
    cpy_r_r60 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r61 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r62 = *(PyObject * *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 == cpy_r_r60;
    if (cpy_r_r63) {
        goto CPyL49;
    } else
        goto CPyL32;
CPyL31: ;
    cpy_r_r64 = Py_None;
    CPy_INCREF(cpy_r_r64);
    return cpy_r_r64;
CPyL32: ;
    cpy_r_r65 = CPyStatics[2318]; /* 'Invalid type replacement to expand: ' */
    cpy_r_r66 = PyObject_Str(cpy_r_repl);
    CPy_DECREF(cpy_r_repl);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 564, CPyStatic_expandtype___globals);
        goto CPyL44;
    }
    cpy_r_r67 = CPyStr_Build(2, cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 564, CPyStatic_expandtype___globals);
        goto CPyL44;
    }
    cpy_r_r68 = CPyModule_builtins;
    cpy_r_r69 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r70 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 564, CPyStatic_expandtype___globals);
        goto CPyL50;
    }
    PyObject *cpy_r_r71[1] = {cpy_r_r67};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = _PyObject_Vectorcall(cpy_r_r70, cpy_r_r72, 1, 0);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 564, CPyStatic_expandtype___globals);
        goto CPyL50;
    }
    CPy_DECREF(cpy_r_r67);
    CPy_Raise(cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 564, CPyStatic_expandtype___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r74 = CPyStatics[2319]; /* 'Invalid type to expand: ' */
    cpy_r_r75 = ((mypy___types___UnpackTypeObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = PyObject_Str(cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 566, CPyStatic_expandtype___globals);
        goto CPyL44;
    }
    cpy_r_r77 = CPyStr_Build(2, cpy_r_r74, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 566, CPyStatic_expandtype___globals);
        goto CPyL44;
    }
    cpy_r_r78 = CPyModule_builtins;
    cpy_r_r79 = CPyStatics[1325]; /* 'NotImplementedError' */
    cpy_r_r80 = CPyObject_GetAttr(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 566, CPyStatic_expandtype___globals);
        goto CPyL51;
    }
    PyObject *cpy_r_r81[1] = {cpy_r_r77};
    cpy_r_r82 = (PyObject **)&cpy_r_r81;
    cpy_r_r83 = _PyObject_Vectorcall(cpy_r_r80, cpy_r_r82, 1, 0);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 566, CPyStatic_expandtype___globals);
        goto CPyL51;
    }
    CPy_DECREF(cpy_r_r77);
    CPy_Raise(cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 566, CPyStatic_expandtype___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r84 = NULL;
    return cpy_r_r84;
CPyL45: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL44;
CPyL46: ;
    CPy_DecRef(cpy_r_repl);
    goto CPyL44;
CPyL47: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL44;
CPyL48: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL44;
CPyL49: ;
    CPy_DECREF(cpy_r_repl);
    goto CPyL31;
CPyL50: ;
    CPy_DecRef(cpy_r_r67);
    goto CPyL44;
CPyL51: ;
    CPy_DecRef(cpy_r_r77);
    goto CPyL44;
}

PyObject *CPyPy_expandtype___expand_unpack_with_variables(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", "variables", 0};
    static CPyArg_Parser parser = {"OO:expand_unpack_with_variables", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_variables;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_variables)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *arg_variables = obj_variables;
    PyObject *retval = CPyDef_expandtype___expand_unpack_with_variables(arg_t, arg_variables);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "expand_unpack_with_variables", 541, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___expand_self_type(PyObject *cpy_r_var, PyObject *cpy_r_typ, PyObject *cpy_r_replacement) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = ((mypy___nodes___VarObject *)cpy_r_var)->_info;
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_r0)->_self_type;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/expandtype.py", "expand_self_type", "TypeInfo", "self_type", 581, CPyStatic_expandtype___globals);
        goto CPyL9;
    }
CPyL1: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL8;
    cpy_r_r4 = ((mypy___nodes___VarObject *)cpy_r_var)->_is_property;
    if (cpy_r_r4) goto CPyL8;
CPyL3: ;
    cpy_r_r5 = ((mypy___nodes___VarObject *)cpy_r_var)->_info;
    cpy_r_r6 = ((mypy___nodes___TypeInfoObject *)cpy_r_r5)->_self_type;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/expandtype.py", "expand_self_type", "TypeInfo", "self_type", 582, CPyStatic_expandtype___globals);
        goto CPyL9;
    }
CPyL4: ;
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "expand_self_type", 582, CPyStatic_expandtype___globals, "mypy.types.TypeVarType", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_r8 = ((mypy___types___TypeVarTypeObject *)cpy_r_r7)->_id;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDict_Build(1, cpy_r_r8, cpy_r_replacement);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_self_type", 582, CPyStatic_expandtype___globals);
        goto CPyL9;
    }
    cpy_r_r10 = CPyDef_expandtype___expand_type(cpy_r_typ, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "expand_self_type", 582, CPyStatic_expandtype___globals);
        goto CPyL9;
    }
    return cpy_r_r10;
CPyL8: ;
    CPy_INCREF(cpy_r_typ);
    return cpy_r_typ;
CPyL9: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
}

PyObject *CPyPy_expandtype___expand_self_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"var", "typ", "replacement", 0};
    static CPyArg_Parser parser = {"OOO:expand_self_type", kwlist, 0};
    PyObject *obj_var;
    PyObject *obj_typ;
    PyObject *obj_replacement;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_var, &obj_typ, &obj_replacement)) {
        return NULL;
    }
    PyObject *arg_var;
    if (likely(Py_TYPE(obj_var) == CPyType_nodes___Var))
        arg_var = obj_var;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_var); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_replacement;
    if (likely(PyObject_TypeCheck(obj_replacement, CPyType_types___Type)))
        arg_replacement = obj_replacement;
    else {
        CPy_TypeError("mypy.types.Type", obj_replacement); 
        goto fail;
    }
    PyObject *retval = CPyDef_expandtype___expand_self_type(arg_var, arg_typ, arg_replacement);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "expand_self_type", 579, CPyStatic_expandtype___globals);
    return NULL;
}

PyObject *CPyDef_expandtype___remove_trivial(PyObject *cpy_r_types) {
    char cpy_r_removed_none;
    PyObject *cpy_r_r0;
    PyObject *cpy_r_new_types;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_all_types;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_p_t;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    CPyPtr cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    CPyPtr cpy_r_r45;
    int64_t cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    CPyPtr cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyPtr cpy_r_r60;
    CPyPtr cpy_r_r61;
    PyObject *cpy_r_r62;
    cpy_r_removed_none = 0;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 595, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_new_types = cpy_r_r0;
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 596, CPyStatic_expandtype___globals);
        goto CPyL39;
    }
    cpy_r_all_types = cpy_r_r1;
    cpy_r_r2 = PyObject_GetIter(cpy_r_types);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 597, CPyStatic_expandtype___globals);
        goto CPyL40;
    }
CPyL3: ;
    cpy_r_r3 = PyIter_Next(cpy_r_r2);
    if (cpy_r_r3 == NULL) goto CPyL41;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "remove_trivial", 597, CPyStatic_expandtype___globals, "mypy.types.Type", cpy_r_r3);
        goto CPyL42;
    }
    cpy_r_t = cpy_r_r4;
    cpy_r_r5 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 598, CPyStatic_expandtype___globals);
        goto CPyL43;
    }
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "remove_trivial", 598, CPyStatic_expandtype___globals, "mypy.types.ProperType", cpy_r_r5);
        goto CPyL43;
    }
    cpy_r_p_t = cpy_r_r6;
    cpy_r_r7 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_p_t)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (cpy_r_r10) goto CPyL44;
    cpy_r_r11 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_p_t)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL14;
    cpy_r_r15 = CPyStatic_state___state;
    if (unlikely(cpy_r_r15 == NULL)) {
        goto CPyL45;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 601, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r17 = ((mypy___state___StrictOptionalStateObject *)cpy_r_r15)->_strict_optional;
    if (cpy_r_r17) {
        goto CPyL14;
    } else
        goto CPyL46;
CPyL13: ;
    cpy_r_removed_none = 1;
    goto CPyL3;
CPyL14: ;
    cpy_r_r18 = (PyObject *)CPyType_types___Instance;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_p_t)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL24;
    if (likely(Py_TYPE(cpy_r_p_t) == CPyType_types___Instance))
        cpy_r_r22 = cpy_r_p_t;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "remove_trivial", 604, CPyStatic_expandtype___globals, "mypy.types.Instance", cpy_r_p_t);
        goto CPyL47;
    }
    cpy_r_r23 = ((mypy___types___InstanceObject *)cpy_r_r22)->_type;
    cpy_r_r24 = CPY_GET_ATTR(cpy_r_r23, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 604, CPyStatic_expandtype___globals);
        goto CPyL47;
    }
CPyL17: ;
    cpy_r_r25 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r26 = PyUnicode_Compare(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 == -1;
    if (!cpy_r_r27) goto CPyL20;
    cpy_r_r28 = PyErr_Occurred();
    cpy_r_r29 = cpy_r_r28 != NULL;
    if (!cpy_r_r29) goto CPyL20;
    cpy_r_r30 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 604, CPyStatic_expandtype___globals);
        goto CPyL47;
    }
CPyL20: ;
    cpy_r_r31 = cpy_r_r26 == 0;
    if (cpy_r_r31) {
        goto CPyL48;
    } else
        goto CPyL24;
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_p_t) == CPyType_types___Instance))
        cpy_r_r32 = cpy_r_p_t;
    else {
        CPy_TypeErrorTraceback("mypy/expandtype.py", "remove_trivial", 605, CPyStatic_expandtype___globals, "mypy.types.Instance", cpy_r_p_t);
        goto CPyL38;
    }
    cpy_r_r33 = PyList_New(1);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 605, CPyStatic_expandtype___globals);
        goto CPyL49;
    }
    cpy_r_r34 = (CPyPtr)&((PyListObject *)cpy_r_r33)->ob_item;
    cpy_r_r35 = *(CPyPtr *)cpy_r_r34;
    *(PyObject * *)cpy_r_r35 = cpy_r_r32;
    return cpy_r_r33;
CPyL24: ;
    cpy_r_r36 = PySet_Contains(cpy_r_all_types, cpy_r_p_t);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 606, CPyStatic_expandtype___globals);
        goto CPyL47;
    }
    cpy_r_r38 = cpy_r_r36;
    cpy_r_r39 = cpy_r_r38 ^ 1;
    if (!cpy_r_r39) goto CPyL44;
    cpy_r_r40 = PyList_Append(cpy_r_new_types, cpy_r_t);
    CPy_DECREF(cpy_r_t);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 607, CPyStatic_expandtype___globals);
        goto CPyL50;
    }
    cpy_r_r42 = PySet_Add(cpy_r_all_types, cpy_r_p_t);
    CPy_DECREF(cpy_r_p_t);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 608, CPyStatic_expandtype___globals);
        goto CPyL42;
    } else
        goto CPyL3;
CPyL28: ;
    cpy_r_r44 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 597, CPyStatic_expandtype___globals);
        goto CPyL39;
    }
    cpy_r_r45 = (CPyPtr)&((PyVarObject *)cpy_r_new_types)->ob_size;
    cpy_r_r46 = *(int64_t *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 << 1;
    cpy_r_r48 = cpy_r_r47 != 0;
    if (!cpy_r_r48) goto CPyL51;
    return cpy_r_new_types;
CPyL31: ;
    if (!cpy_r_removed_none) goto CPyL35;
    cpy_r_r49 = CPY_INT_TAG;
    cpy_r_r50 = CPY_INT_TAG;
    cpy_r_r51 = CPyDef_types___NoneType(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 612, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r52 = PyList_New(1);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 612, CPyStatic_expandtype___globals);
        goto CPyL52;
    }
    cpy_r_r53 = (CPyPtr)&((PyListObject *)cpy_r_r52)->ob_item;
    cpy_r_r54 = *(CPyPtr *)cpy_r_r53;
    *(PyObject * *)cpy_r_r54 = cpy_r_r51;
    return cpy_r_r52;
CPyL35: ;
    cpy_r_r55 = 2;
    cpy_r_r56 = CPY_INT_TAG;
    cpy_r_r57 = CPY_INT_TAG;
    cpy_r_r58 = CPyDef_types___UninhabitedType(cpy_r_r55, cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 613, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r59 = PyList_New(1);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 613, CPyStatic_expandtype___globals);
        goto CPyL53;
    }
    cpy_r_r60 = (CPyPtr)&((PyListObject *)cpy_r_r59)->ob_item;
    cpy_r_r61 = *(CPyPtr *)cpy_r_r60;
    *(PyObject * *)cpy_r_r61 = cpy_r_r58;
    return cpy_r_r59;
CPyL38: ;
    cpy_r_r62 = NULL;
    return cpy_r_r62;
CPyL39: ;
    CPy_DecRef(cpy_r_new_types);
    goto CPyL38;
CPyL40: ;
    CPy_DecRef(cpy_r_new_types);
    CPy_DecRef(cpy_r_all_types);
    goto CPyL38;
CPyL41: ;
    CPy_DECREF(cpy_r_all_types);
    CPy_DECREF(cpy_r_r2);
    goto CPyL28;
CPyL42: ;
    CPy_DecRef(cpy_r_new_types);
    CPy_DecRef(cpy_r_all_types);
    CPy_DecRef(cpy_r_r2);
    goto CPyL38;
CPyL43: ;
    CPy_DecRef(cpy_r_new_types);
    CPy_DecRef(cpy_r_all_types);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_t);
    goto CPyL38;
CPyL44: ;
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_p_t);
    goto CPyL3;
CPyL45: ;
    CPy_DecRef(cpy_r_new_types);
    CPy_DecRef(cpy_r_all_types);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_p_t);
    goto CPyL10;
CPyL46: ;
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_p_t);
    goto CPyL13;
CPyL47: ;
    CPy_DecRef(cpy_r_new_types);
    CPy_DecRef(cpy_r_all_types);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_p_t);
    goto CPyL38;
CPyL48: ;
    CPy_DECREF(cpy_r_new_types);
    CPy_DECREF(cpy_r_all_types);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_t);
    goto CPyL21;
CPyL49: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL38;
CPyL50: ;
    CPy_DecRef(cpy_r_new_types);
    CPy_DecRef(cpy_r_all_types);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_p_t);
    goto CPyL38;
CPyL51: ;
    CPy_DECREF(cpy_r_new_types);
    goto CPyL31;
CPyL52: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL38;
CPyL53: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL38;
}

PyObject *CPyPy_expandtype___remove_trivial(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:remove_trivial", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_types = obj_types;
    PyObject *retval = CPyDef_expandtype___remove_trivial(arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/expandtype.py", "remove_trivial", 586, CPyStatic_expandtype___globals);
    return NULL;
}

char CPyDef_expandtype_____top_level__(void) {
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
    PyObject **cpy_r_r29;
    void *cpy_r_r31;
    void *cpy_r_r33;
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
    PyObject **cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject **cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
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
    char cpy_r_r122;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", -1, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_expandtype___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 1, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9375]; /* ('Final', 'Iterable', 'Mapping', 'Sequence', 'TypeVar',
                                    'cast', 'overload') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_expandtype___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 3, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9376]; /* ('ARG_POS', 'ARG_STAR', 'ArgKind', 'Var') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_expandtype___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 5, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9201]; /* ('state',) */
    cpy_r_r18 = CPyStatics[1020]; /* 'mypy.state' */
    cpy_r_r19 = CPyStatic_expandtype___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 6, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    CPyModule_mypy___state = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___state);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9377]; /* ('ANY_STRATEGY', 'AnyType', 'BoolTypeQuery',
                                     'CallableType', 'DeletedType', 'ErasedType',
                                     'FunctionLike', 'Instance', 'LiteralType', 'NoneType',
                                     'Overloaded', 'Parameters', 'ParamSpecFlavor',
                                     'ParamSpecType', 'PartialType', 'ProperType',
                                     'TrivialSyntheticTypeTranslator', 'TupleType', 'Type',
                                     'TypeAliasType', 'TypedDictType', 'TypeType',
                                     'TypeVarId', 'TypeVarLikeType', 'TypeVarTupleType',
                                     'TypeVarType', 'UnboundType', 'UninhabitedType',
                                     'UnionType', 'UnpackType', 'flatten_nested_tuples',
                                     'flatten_nested_unions', 'get_proper_type',
                                     'split_with_prefix_and_suffix') */
    cpy_r_r22 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r23 = CPyStatic_expandtype___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 7, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    CPyModule_mypy___types = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9378]; /* ('find_unpack_in_list', 'split_with_instance') */
    cpy_r_r26 = CPyStatics[52]; /* 'mypy.typevartuples' */
    cpy_r_r27 = CPyStatic_expandtype___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 43, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    CPyModule_mypy___typevartuples = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___typevartuples);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = (PyObject **)&CPyModule_mypy___type_visitor;
    PyObject **cpy_r_r30[1] = {cpy_r_r29};
    cpy_r_r31 = (void *)&cpy_r_r30;
    int64_t cpy_r_r32[1] = {46};
    cpy_r_r33 = (void *)&cpy_r_r32;
    cpy_r_r34 = CPyStatics[9380]; /* (('mypy.type_visitor', 'mypy', 'mypy'),) */
    cpy_r_r35 = CPyStatic_expandtype___globals;
    cpy_r_r36 = CPyStatics[2322]; /* 'mypy/expandtype.py' */
    cpy_r_r37 = CPyStatics[17]; /* '<module>' */
    cpy_r_r38 = CPyImport_ImportMany(cpy_r_r34, cpy_r_r31, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r33);
    if (!cpy_r_r38) goto CPyL38;
    cpy_r_r39 = CPyStatics[1467]; /* 'F' */
    cpy_r_r40 = (PyObject *)CPyType_types___FunctionLike;
    cpy_r_r41 = CPyStatic_expandtype___globals;
    cpy_r_r42 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r43 = CPyDict_GetItem(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 123, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    PyObject *cpy_r_r44[2] = {cpy_r_r39, cpy_r_r40};
    cpy_r_r45 = (PyObject **)&cpy_r_r44;
    cpy_r_r46 = CPyStatics[9381]; /* ('bound',) */
    cpy_r_r47 = _PyObject_Vectorcall(cpy_r_r43, cpy_r_r45, 1, cpy_r_r46);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 123, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r48 = CPyStatic_expandtype___globals;
    cpy_r_r49 = CPyStatics[1467]; /* 'F' */
    cpy_r_r50 = CPyDict_SetItem(cpy_r_r48, cpy_r_r49, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 123, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r52 = (PyObject *)CPyType_type_visitor___BoolTypeQuery;
    cpy_r_r53 = PyTuple_Pack(1, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 145, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r54 = CPyStatics[31]; /* 'mypy.expandtype' */
    cpy_r_r55 = (PyObject *)CPyType_expandtype___HasGenericCallable_template;
    cpy_r_r56 = CPyType_FromTemplate(cpy_r_r55, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 145, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r57 = CPyDef_expandtype___HasGenericCallable_trait_vtable_setup();
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", -1, CPyStatic_expandtype___globals);
        goto CPyL39;
    }
    cpy_r_r58 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r59 = CPyStatics[1131]; /* 'strategy' */
    cpy_r_r60 = CPyStatics[748]; /* 'default' */
    cpy_r_r61 = CPyStatics[1132]; /* 'seen_aliases' */
    cpy_r_r62 = CPyStatics[1133]; /* 'skip_alias_target' */
    cpy_r_r63 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r64 = PyTuple_Pack(5, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 145, CPyStatic_expandtype___globals);
        goto CPyL39;
    }
    cpy_r_r65 = PyObject_SetAttr(cpy_r_r56, cpy_r_r58, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 145, CPyStatic_expandtype___globals);
        goto CPyL39;
    }
    CPyType_expandtype___HasGenericCallable = (PyTypeObject *)cpy_r_r56;
    CPy_INCREF(CPyType_expandtype___HasGenericCallable);
    cpy_r_r67 = CPyStatic_expandtype___globals;
    cpy_r_r68 = CPyStatics[2324]; /* 'HasGenericCallable' */
    cpy_r_r69 = CPyDict_SetItem(cpy_r_r67, cpy_r_r68, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 145, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r71 = CPyDef_expandtype___HasGenericCallable();
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 154, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    CPyStatic_expandtype___has_generic_callable = cpy_r_r71;
    CPy_INCREF(CPyStatic_expandtype___has_generic_callable);
    cpy_r_r72 = CPyStatic_expandtype___globals;
    cpy_r_r73 = CPyStatics[2325]; /* 'has_generic_callable' */
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r72, cpy_r_r73, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 154, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r76 = CPyStatics[1088]; /* 'T' */
    cpy_r_r77 = (PyObject *)CPyType_types___Type;
    cpy_r_r78 = CPyStatic_expandtype___globals;
    cpy_r_r79 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r80 = CPyDict_GetItem(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 157, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    PyObject *cpy_r_r81[2] = {cpy_r_r76, cpy_r_r77};
    cpy_r_r82 = (PyObject **)&cpy_r_r81;
    cpy_r_r83 = CPyStatics[9381]; /* ('bound',) */
    cpy_r_r84 = _PyObject_Vectorcall(cpy_r_r80, cpy_r_r82, 1, cpy_r_r83);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 157, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r85 = CPyStatic_expandtype___globals;
    cpy_r_r86 = CPyStatics[1088]; /* 'T' */
    cpy_r_r87 = CPyDict_SetItem(cpy_r_r85, cpy_r_r86, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 157, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r89 = CPyModule_mypy___type_visitor;
    cpy_r_r90 = CPyStatics[1068]; /* 'TypeTranslator' */
    cpy_r_r91 = CPyObject_GetAttr(cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 171, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r92 = PyTuple_Pack(1, cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 171, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r93 = CPyStatics[31]; /* 'mypy.expandtype' */
    cpy_r_r94 = (PyObject *)CPyType_expandtype___FreshenCallableVisitor_template;
    cpy_r_r95 = CPyType_FromTemplate(cpy_r_r94, cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 171, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r96 = CPyDef_expandtype___FreshenCallableVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", -1, CPyStatic_expandtype___globals);
        goto CPyL40;
    }
    cpy_r_r97 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r98 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r99 = PyTuple_Pack(1, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 171, CPyStatic_expandtype___globals);
        goto CPyL40;
    }
    cpy_r_r100 = PyObject_SetAttr(cpy_r_r95, cpy_r_r97, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 171, CPyStatic_expandtype___globals);
        goto CPyL40;
    }
    CPyType_expandtype___FreshenCallableVisitor = (PyTypeObject *)cpy_r_r95;
    CPy_INCREF(CPyType_expandtype___FreshenCallableVisitor);
    cpy_r_r102 = CPyStatic_expandtype___globals;
    cpy_r_r103 = CPyStatics[2326]; /* 'FreshenCallableVisitor' */
    cpy_r_r104 = CPyDict_SetItem(cpy_r_r102, cpy_r_r103, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 171, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r106 = (PyObject *)CPyType_types___TrivialSyntheticTypeTranslator;
    cpy_r_r107 = PyTuple_Pack(1, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 182, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r108 = CPyStatics[31]; /* 'mypy.expandtype' */
    cpy_r_r109 = (PyObject *)CPyType_expandtype___ExpandTypeVisitor_template;
    cpy_r_r110 = CPyType_FromTemplate(cpy_r_r109, cpy_r_r107, cpy_r_r108);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 182, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    cpy_r_r111 = CPyDef_expandtype___ExpandTypeVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r111 == 2)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", -1, CPyStatic_expandtype___globals);
        goto CPyL41;
    }
    cpy_r_r112 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r113 = CPyStatics[803]; /* 'variables' */
    cpy_r_r114 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r115 = PyTuple_Pack(2, cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 182, CPyStatic_expandtype___globals);
        goto CPyL41;
    }
    cpy_r_r116 = PyObject_SetAttr(cpy_r_r110, cpy_r_r112, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 182, CPyStatic_expandtype___globals);
        goto CPyL41;
    }
    CPyType_expandtype___ExpandTypeVisitor = (PyTypeObject *)cpy_r_r110;
    CPy_INCREF(CPyType_expandtype___ExpandTypeVisitor);
    cpy_r_r118 = CPyStatic_expandtype___globals;
    cpy_r_r119 = CPyStatics[2327]; /* 'ExpandTypeVisitor' */
    cpy_r_r120 = CPyDict_SetItem(cpy_r_r118, cpy_r_r119, cpy_r_r110);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/expandtype.py", "<module>", 182, CPyStatic_expandtype___globals);
        goto CPyL38;
    }
    return 1;
CPyL38: ;
    cpy_r_r122 = 2;
    return cpy_r_r122;
CPyL39: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL38;
CPyL40: ;
    CPy_DecRef(cpy_r_r95);
    goto CPyL38;
CPyL41: ;
    CPy_DecRef(cpy_r_r110);
    goto CPyL38;
}
