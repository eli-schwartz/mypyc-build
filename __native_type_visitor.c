#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef type_visitor___TypeVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef type_visitor___TypeVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyObject *
type_visitor___TypeVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_type_visitor___TypeVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled traits");
    } else {
        PyErr_SetString(PyExc_TypeError, "traits may not be directly created");
    }
    return NULL;
}
static PyMethodDef type_visitor___TypeVisitor_methods[] = {
    {"visit_unbound_type",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_type_visitor___TypeVisitor___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_type_visitor___TypeVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeVisitor",
    .tp_new = type_visitor___TypeVisitor_new,
    .tp_getset = type_visitor___TypeVisitor_getseters,
    .tp_methods = type_visitor___TypeVisitor_methods,
    .tp_members = type_visitor___TypeVisitor_members,
    .tp_basicsize = sizeof(PyObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyObject),
    .tp_weaklistoffset = sizeof(PyObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_type_visitor___TypeVisitor_template = &CPyType_type_visitor___TypeVisitor_template_;


PyMemberDef type_visitor___SyntheticTypeVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef type_visitor___SyntheticTypeVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyObject *
type_visitor___SyntheticTypeVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_type_visitor___SyntheticTypeVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled traits");
    } else {
        PyErr_SetString(PyExc_TypeError, "traits may not be directly created");
    }
    return NULL;
}
static PyMethodDef type_visitor___SyntheticTypeVisitor_methods[] = {
    {"visit_type_list",
     (PyCFunction)CPyPy_type_visitor___SyntheticTypeVisitor___visit_type_list,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_argument",
     (PyCFunction)CPyPy_type_visitor___SyntheticTypeVisitor___visit_callable_argument,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_ellipsis_type",
     (PyCFunction)CPyPy_type_visitor___SyntheticTypeVisitor___visit_ellipsis_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_raw_expression_type",
     (PyCFunction)CPyPy_type_visitor___SyntheticTypeVisitor___visit_raw_expression_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_placeholder_type",
     (PyCFunction)CPyPy_type_visitor___SyntheticTypeVisitor___visit_placeholder_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_type_visitor___SyntheticTypeVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SyntheticTypeVisitor",
    .tp_new = type_visitor___SyntheticTypeVisitor_new,
    .tp_getset = type_visitor___SyntheticTypeVisitor_getseters,
    .tp_methods = type_visitor___SyntheticTypeVisitor_methods,
    .tp_members = type_visitor___SyntheticTypeVisitor_members,
    .tp_basicsize = sizeof(PyObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyObject),
    .tp_weaklistoffset = sizeof(PyObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_type_visitor___SyntheticTypeVisitor_template = &CPyType_type_visitor___SyntheticTypeVisitor_template_;


PyMemberDef type_visitor___TypeTranslator_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___type_visitor___TypeTranslatorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___type_visitor___TypeTranslatorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *type_visitor___TypeTranslator_setup(PyTypeObject *type);
PyObject *CPyDef_type_visitor___TypeTranslator(void);

static PyObject *
type_visitor___TypeTranslator_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    return type_visitor___TypeTranslator_setup(type);
}

static int
type_visitor___TypeTranslator_traverse(mypy___type_visitor___TypeTranslatorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___type_visitor___TypeTranslatorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___type_visitor___TypeTranslatorObject))));
    return 0;
}

static int
type_visitor___TypeTranslator_clear(mypy___type_visitor___TypeTranslatorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___type_visitor___TypeTranslatorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___type_visitor___TypeTranslatorObject))));
    return 0;
}

static void
type_visitor___TypeTranslator_dealloc(mypy___type_visitor___TypeTranslatorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, type_visitor___TypeTranslator_dealloc)
    type_visitor___TypeTranslator_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem type_visitor___TypeTranslator_vtable_shadow[26];
static CPyVTableItem type_visitor___TypeTranslator_type_visitor___TypeVisitor_trait_vtable_shadow[21];
static size_t type_visitor___TypeTranslator_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_type_visitor___TypeTranslator_trait_vtable_setup_shadow(void)
{
    CPyVTableItem type_visitor___TypeTranslator_type_visitor___TypeVisitor_trait_vtable_shadow_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(type_visitor___TypeTranslator_type_visitor___TypeVisitor_trait_vtable_shadow, type_visitor___TypeTranslator_type_visitor___TypeVisitor_trait_vtable_shadow_scratch, sizeof(type_visitor___TypeTranslator_type_visitor___TypeVisitor_trait_vtable_shadow));
    size_t type_visitor___TypeTranslator_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(type_visitor___TypeTranslator_type_visitor___TypeVisitor_offset_table, type_visitor___TypeTranslator_type_visitor___TypeVisitor_offset_table_scratch, sizeof(type_visitor___TypeTranslator_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem type_visitor___TypeTranslator_vtable_shadow_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)type_visitor___TypeTranslator_type_visitor___TypeVisitor_trait_vtable_shadow, (CPyVTableItem)type_visitor___TypeTranslator_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unbound_type__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_any__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_none_type__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_erased_type__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_deleted_type__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_instance__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_var__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_param_spec__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_parameters__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_var_tuple__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_partial_type__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unpack_type__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_callable_type__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_tuple_type__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_typeddict_type__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_literal_type__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_union_type__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___translate_types__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___translate_variables__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_overloaded__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_type__TypeTranslator_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_alias_type__TypeTranslator_glue,
    };
    memcpy(type_visitor___TypeTranslator_vtable_shadow, type_visitor___TypeTranslator_vtable_shadow_scratch, sizeof(type_visitor___TypeTranslator_vtable_shadow));
    return 1;
}

static CPyVTableItem type_visitor___TypeTranslator_vtable[26];
static CPyVTableItem type_visitor___TypeTranslator_type_visitor___TypeVisitor_trait_vtable[21];
static size_t type_visitor___TypeTranslator_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_type_visitor___TypeTranslator_trait_vtable_setup(void)
{
    CPyDef_type_visitor___TypeTranslator_trait_vtable_setup_shadow();
    CPyVTableItem type_visitor___TypeTranslator_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
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
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(type_visitor___TypeTranslator_type_visitor___TypeVisitor_trait_vtable, type_visitor___TypeTranslator_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(type_visitor___TypeTranslator_type_visitor___TypeVisitor_trait_vtable));
    size_t type_visitor___TypeTranslator_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(type_visitor___TypeTranslator_type_visitor___TypeVisitor_offset_table, type_visitor___TypeTranslator_type_visitor___TypeVisitor_offset_table_scratch, sizeof(type_visitor___TypeTranslator_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem type_visitor___TypeTranslator_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)type_visitor___TypeTranslator_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)type_visitor___TypeTranslator_type_visitor___TypeVisitor_offset_table,
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
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___translate_types,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___translate_variables,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_alias_type,
    };
    memcpy(type_visitor___TypeTranslator_vtable, type_visitor___TypeTranslator_vtable_scratch, sizeof(type_visitor___TypeTranslator_vtable));
    return 1;
}


static PyGetSetDef type_visitor___TypeTranslator_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef type_visitor___TypeTranslator_methods[] = {
    {"visit_unbound_type",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"translate_types",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___translate_types,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"translate_variables",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___translate_variables,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_type_visitor___TypeTranslator___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_type_visitor___TypeTranslator_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeTranslator",
    .tp_new = type_visitor___TypeTranslator_new,
    .tp_dealloc = (destructor)type_visitor___TypeTranslator_dealloc,
    .tp_traverse = (traverseproc)type_visitor___TypeTranslator_traverse,
    .tp_clear = (inquiry)type_visitor___TypeTranslator_clear,
    .tp_getset = type_visitor___TypeTranslator_getseters,
    .tp_methods = type_visitor___TypeTranslator_methods,
    .tp_members = type_visitor___TypeTranslator_members,
    .tp_basicsize = sizeof(mypy___type_visitor___TypeTranslatorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___type_visitor___TypeTranslatorObject),
    .tp_weaklistoffset = sizeof(mypy___type_visitor___TypeTranslatorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_type_visitor___TypeTranslator_template = &CPyType_type_visitor___TypeTranslator_template_;

static PyObject *
type_visitor___TypeTranslator_setup(PyTypeObject *type)
{
    mypy___type_visitor___TypeTranslatorObject *self;
    self = (mypy___type_visitor___TypeTranslatorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    if (type != CPyType_type_visitor___TypeTranslator) {
        self->vtable = type_visitor___TypeTranslator_vtable_shadow + 3;
    } else {
        self->vtable = type_visitor___TypeTranslator_vtable + 3;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_type_visitor___TypeTranslator(void)
{
    PyObject *self = type_visitor___TypeTranslator_setup(CPyType_type_visitor___TypeTranslator);
    if (self == NULL)
        return NULL;
    return self;
}


static int
type_visitor___TypeQuery_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return CPyPy_type_visitor___TypeQuery_____init__(self, args, kwds) != NULL ? 0 : -1;
}
PyMemberDef type_visitor___TypeQuery_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___type_visitor___TypeQueryObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___type_visitor___TypeQueryObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *type_visitor___TypeQuery_setup(PyTypeObject *type);
PyObject *CPyDef_type_visitor___TypeQuery(PyObject *cpy_r_strategy);

static PyObject *
type_visitor___TypeQuery_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    return type_visitor___TypeQuery_setup(type);
}

static int
type_visitor___TypeQuery_traverse(mypy___type_visitor___TypeQueryObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_strategy);
    Py_VISIT(self->_seen_aliases);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___type_visitor___TypeQueryObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___type_visitor___TypeQueryObject))));
    return 0;
}

static int
type_visitor___TypeQuery_clear(mypy___type_visitor___TypeQueryObject *self)
{
    Py_CLEAR(self->_strategy);
    Py_CLEAR(self->_seen_aliases);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___type_visitor___TypeQueryObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___type_visitor___TypeQueryObject))));
    return 0;
}

static void
type_visitor___TypeQuery_dealloc(mypy___type_visitor___TypeQueryObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, type_visitor___TypeQuery_dealloc)
    type_visitor___TypeQuery_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem type_visitor___TypeQuery_vtable_shadow[34];
static CPyVTableItem type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable_shadow[26];
static size_t type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem type_visitor___TypeQuery_type_visitor___TypeVisitor_trait_vtable_shadow[21];
static size_t type_visitor___TypeQuery_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_type_visitor___TypeQuery_trait_vtable_setup_shadow(void)
{
    CPyVTableItem type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable_shadow_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___SyntheticTypeVisitor___visit_type_list__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___SyntheticTypeVisitor___visit_callable_argument__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___SyntheticTypeVisitor___visit_ellipsis_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___SyntheticTypeVisitor___visit_raw_expression_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___SyntheticTypeVisitor___visit_placeholder_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_any,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_instance,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unpack_type,
    };
    memcpy(type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable_shadow, type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable_shadow_scratch, sizeof(type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable_shadow));
    size_t type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_offset_table, type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem type_visitor___TypeQuery_type_visitor___TypeVisitor_trait_vtable_shadow_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(type_visitor___TypeQuery_type_visitor___TypeVisitor_trait_vtable_shadow, type_visitor___TypeQuery_type_visitor___TypeVisitor_trait_vtable_shadow_scratch, sizeof(type_visitor___TypeQuery_type_visitor___TypeVisitor_trait_vtable_shadow));
    size_t type_visitor___TypeQuery_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(type_visitor___TypeQuery_type_visitor___TypeVisitor_offset_table, type_visitor___TypeQuery_type_visitor___TypeVisitor_offset_table_scratch, sizeof(type_visitor___TypeQuery_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem type_visitor___TypeQuery_vtable_shadow_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable_shadow, (CPyVTableItem)type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)type_visitor___TypeQuery_type_visitor___TypeVisitor_trait_vtable_shadow, (CPyVTableItem)type_visitor___TypeQuery_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery_____init___3__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_list__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_argument__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_any__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_uninhabited_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_param_spec__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var_tuple__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unpack_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_parameters__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_partial_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_instance__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_tuple_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_typeddict_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_raw_expression_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_literal_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_union_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_overloaded__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_ellipsis_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_placeholder_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_alias_type__TypeQuery_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___query_types__TypeQuery_glue,
    };
    memcpy(type_visitor___TypeQuery_vtable_shadow, type_visitor___TypeQuery_vtable_shadow_scratch, sizeof(type_visitor___TypeQuery_vtable_shadow));
    return 1;
}

static CPyVTableItem type_visitor___TypeQuery_vtable[34];
static CPyVTableItem type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable[26];
static size_t type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem type_visitor___TypeQuery_type_visitor___TypeVisitor_trait_vtable[21];
static size_t type_visitor___TypeQuery_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_type_visitor___TypeQuery_trait_vtable_setup(void)
{
    CPyDef_type_visitor___TypeQuery_trait_vtable_setup_shadow();
    CPyVTableItem type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_list,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_argument,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_placeholder_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_any,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_instance,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unpack_type,
    };
    memcpy(type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable, type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch, sizeof(type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable));
    size_t type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_offset_table, type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem type_visitor___TypeQuery_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_any,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_instance,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unpack_type,
    };
    memcpy(type_visitor___TypeQuery_type_visitor___TypeVisitor_trait_vtable, type_visitor___TypeQuery_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(type_visitor___TypeQuery_type_visitor___TypeVisitor_trait_vtable));
    size_t type_visitor___TypeQuery_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(type_visitor___TypeQuery_type_visitor___TypeVisitor_offset_table, type_visitor___TypeQuery_type_visitor___TypeVisitor_offset_table_scratch, sizeof(type_visitor___TypeQuery_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem type_visitor___TypeQuery_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable, (CPyVTableItem)type_visitor___TypeQuery_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)type_visitor___TypeQuery_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)type_visitor___TypeQuery_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery_____init__,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_list,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_argument,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_any,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_unpack_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_instance,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_placeholder_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeQuery___query_types,
    };
    memcpy(type_visitor___TypeQuery_vtable, type_visitor___TypeQuery_vtable_scratch, sizeof(type_visitor___TypeQuery_vtable));
    return 1;
}

static PyObject *
type_visitor___TypeQuery_get_strategy(mypy___type_visitor___TypeQueryObject *self, void *closure);
static int
type_visitor___TypeQuery_set_strategy(mypy___type_visitor___TypeQueryObject *self, PyObject *value, void *closure);
static PyObject *
type_visitor___TypeQuery_get_seen_aliases(mypy___type_visitor___TypeQueryObject *self, void *closure);
static int
type_visitor___TypeQuery_set_seen_aliases(mypy___type_visitor___TypeQueryObject *self, PyObject *value, void *closure);
static PyObject *
type_visitor___TypeQuery_get_skip_alias_target(mypy___type_visitor___TypeQueryObject *self, void *closure);
static int
type_visitor___TypeQuery_set_skip_alias_target(mypy___type_visitor___TypeQueryObject *self, PyObject *value, void *closure);

static PyGetSetDef type_visitor___TypeQuery_getseters[] = {
    {"strategy",
     (getter)type_visitor___TypeQuery_get_strategy, (setter)type_visitor___TypeQuery_set_strategy,
     NULL, NULL},
    {"seen_aliases",
     (getter)type_visitor___TypeQuery_get_seen_aliases, (setter)type_visitor___TypeQuery_set_seen_aliases,
     NULL, NULL},
    {"skip_alias_target",
     (getter)type_visitor___TypeQuery_get_skip_alias_target, (setter)type_visitor___TypeQuery_set_skip_alias_target,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef type_visitor___TypeQuery_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_type_visitor___TypeQuery_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbound_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_list",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_type_list,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_argument",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_callable_argument,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_raw_expression_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_raw_expression_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_ellipsis_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_ellipsis_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_placeholder_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_placeholder_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"query_types",
     (PyCFunction)CPyPy_type_visitor___TypeQuery___query_types,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_type_visitor___TypeQuery_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeQuery",
    .tp_new = type_visitor___TypeQuery_new,
    .tp_dealloc = (destructor)type_visitor___TypeQuery_dealloc,
    .tp_traverse = (traverseproc)type_visitor___TypeQuery_traverse,
    .tp_clear = (inquiry)type_visitor___TypeQuery_clear,
    .tp_getset = type_visitor___TypeQuery_getseters,
    .tp_methods = type_visitor___TypeQuery_methods,
    .tp_init = type_visitor___TypeQuery_init,
    .tp_members = type_visitor___TypeQuery_members,
    .tp_basicsize = sizeof(mypy___type_visitor___TypeQueryObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___type_visitor___TypeQueryObject),
    .tp_weaklistoffset = sizeof(mypy___type_visitor___TypeQueryObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_type_visitor___TypeQuery_template = &CPyType_type_visitor___TypeQuery_template_;

static PyObject *
type_visitor___TypeQuery_setup(PyTypeObject *type)
{
    mypy___type_visitor___TypeQueryObject *self;
    self = (mypy___type_visitor___TypeQueryObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    if (type != CPyType_type_visitor___TypeQuery) {
        self->vtable = type_visitor___TypeQuery_vtable_shadow + 6;
    } else {
        self->vtable = type_visitor___TypeQuery_vtable + 6;
    }
    self->_skip_alias_target = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_type_visitor___TypeQuery(PyObject *cpy_r_strategy)
{
    PyObject *self = type_visitor___TypeQuery_setup(CPyType_type_visitor___TypeQuery);
    if (self == NULL)
        return NULL;
    char res = CPyDef_type_visitor___TypeQuery_____init__(self, cpy_r_strategy);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
type_visitor___TypeQuery_get_strategy(mypy___type_visitor___TypeQueryObject *self, void *closure)
{
    if (unlikely(self->_strategy == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'strategy' of 'TypeQuery' undefined");
        return NULL;
    }
    CPy_INCREF(self->_strategy);
    PyObject *retval = self->_strategy;
    return retval;
}

static int
type_visitor___TypeQuery_set_strategy(mypy___type_visitor___TypeQueryObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeQuery' object attribute 'strategy' cannot be deleted");
        return -1;
    }
    if (self->_strategy != NULL) {
        CPy_DECREF(self->_strategy);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_strategy = tmp;
    return 0;
}

static PyObject *
type_visitor___TypeQuery_get_seen_aliases(mypy___type_visitor___TypeQueryObject *self, void *closure)
{
    if (unlikely(self->_seen_aliases == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'seen_aliases' of 'TypeQuery' undefined");
        return NULL;
    }
    CPy_INCREF(self->_seen_aliases);
    PyObject *retval = self->_seen_aliases;
    return retval;
}

static int
type_visitor___TypeQuery_set_seen_aliases(mypy___type_visitor___TypeQueryObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeQuery' object attribute 'seen_aliases' cannot be deleted");
        return -1;
    }
    if (self->_seen_aliases != NULL) {
        CPy_DECREF(self->_seen_aliases);
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
    self->_seen_aliases = tmp;
    return 0;
}

static PyObject *
type_visitor___TypeQuery_get_skip_alias_target(mypy___type_visitor___TypeQueryObject *self, void *closure)
{
    if (unlikely(self->_skip_alias_target == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'skip_alias_target' of 'TypeQuery' undefined");
        return NULL;
    }
    PyObject *retval = self->_skip_alias_target ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
type_visitor___TypeQuery_set_skip_alias_target(mypy___type_visitor___TypeQueryObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeQuery' object attribute 'skip_alias_target' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_skip_alias_target = tmp;
    return 0;
}

static int
type_visitor___BoolTypeQuery_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef type_visitor___BoolTypeQuery_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___type_visitor___BoolTypeQueryObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___type_visitor___BoolTypeQueryObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *type_visitor___BoolTypeQuery_setup(PyTypeObject *type);
PyObject *CPyDef_type_visitor___BoolTypeQuery(CPyTagged cpy_r_strategy);

static PyObject *
type_visitor___BoolTypeQuery_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_type_visitor___BoolTypeQuery) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = type_visitor___BoolTypeQuery_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_type_visitor___BoolTypeQuery_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
type_visitor___BoolTypeQuery_traverse(mypy___type_visitor___BoolTypeQueryObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_strategy)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_strategy));
    }
    Py_VISIT(self->_seen_aliases);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___type_visitor___BoolTypeQueryObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___type_visitor___BoolTypeQueryObject))));
    return 0;
}

static int
type_visitor___BoolTypeQuery_clear(mypy___type_visitor___BoolTypeQueryObject *self)
{
    if (CPyTagged_CheckLong(self->_strategy)) {
        CPyTagged __tmp = self->_strategy;
        self->_strategy = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_seen_aliases);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___type_visitor___BoolTypeQueryObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___type_visitor___BoolTypeQueryObject))));
    return 0;
}

static void
type_visitor___BoolTypeQuery_dealloc(mypy___type_visitor___BoolTypeQueryObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, type_visitor___BoolTypeQuery_dealloc)
    type_visitor___BoolTypeQuery_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem type_visitor___BoolTypeQuery_vtable[35];
static CPyVTableItem type_visitor___BoolTypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable[26];
static size_t type_visitor___BoolTypeQuery_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem type_visitor___BoolTypeQuery_type_visitor___TypeVisitor_trait_vtable[21];
static size_t type_visitor___BoolTypeQuery_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_type_visitor___BoolTypeQuery_trait_vtable_setup(void)
{
    CPyVTableItem type_visitor___BoolTypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch[] = {
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
    memcpy(type_visitor___BoolTypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable, type_visitor___BoolTypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch, sizeof(type_visitor___BoolTypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable));
    size_t type_visitor___BoolTypeQuery_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(type_visitor___BoolTypeQuery_type_visitor___SyntheticTypeVisitor_offset_table, type_visitor___BoolTypeQuery_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(type_visitor___BoolTypeQuery_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem type_visitor___BoolTypeQuery_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
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
    memcpy(type_visitor___BoolTypeQuery_type_visitor___TypeVisitor_trait_vtable, type_visitor___BoolTypeQuery_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(type_visitor___BoolTypeQuery_type_visitor___TypeVisitor_trait_vtable));
    size_t type_visitor___BoolTypeQuery_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(type_visitor___BoolTypeQuery_type_visitor___TypeVisitor_offset_table, type_visitor___BoolTypeQuery_type_visitor___TypeVisitor_offset_table_scratch, sizeof(type_visitor___BoolTypeQuery_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem type_visitor___BoolTypeQuery_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)type_visitor___BoolTypeQuery_type_visitor___SyntheticTypeVisitor_trait_vtable, (CPyVTableItem)type_visitor___BoolTypeQuery_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)type_visitor___BoolTypeQuery_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)type_visitor___BoolTypeQuery_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery_____init__,
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
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_placeholder_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___visit_type_alias_type,
        (CPyVTableItem)CPyDef_type_visitor___BoolTypeQuery___query_types,
    };
    memcpy(type_visitor___BoolTypeQuery_vtable, type_visitor___BoolTypeQuery_vtable_scratch, sizeof(type_visitor___BoolTypeQuery_vtable));
    return 1;
}

static PyObject *
type_visitor___BoolTypeQuery_get_strategy(mypy___type_visitor___BoolTypeQueryObject *self, void *closure);
static int
type_visitor___BoolTypeQuery_set_strategy(mypy___type_visitor___BoolTypeQueryObject *self, PyObject *value, void *closure);
static PyObject *
type_visitor___BoolTypeQuery_get_default(mypy___type_visitor___BoolTypeQueryObject *self, void *closure);
static int
type_visitor___BoolTypeQuery_set_default(mypy___type_visitor___BoolTypeQueryObject *self, PyObject *value, void *closure);
static PyObject *
type_visitor___BoolTypeQuery_get_seen_aliases(mypy___type_visitor___BoolTypeQueryObject *self, void *closure);
static int
type_visitor___BoolTypeQuery_set_seen_aliases(mypy___type_visitor___BoolTypeQueryObject *self, PyObject *value, void *closure);
static PyObject *
type_visitor___BoolTypeQuery_get_skip_alias_target(mypy___type_visitor___BoolTypeQueryObject *self, void *closure);
static int
type_visitor___BoolTypeQuery_set_skip_alias_target(mypy___type_visitor___BoolTypeQueryObject *self, PyObject *value, void *closure);

static PyGetSetDef type_visitor___BoolTypeQuery_getseters[] = {
    {"strategy",
     (getter)type_visitor___BoolTypeQuery_get_strategy, (setter)type_visitor___BoolTypeQuery_set_strategy,
     NULL, NULL},
    {"default",
     (getter)type_visitor___BoolTypeQuery_get_default, (setter)type_visitor___BoolTypeQuery_set_default,
     NULL, NULL},
    {"seen_aliases",
     (getter)type_visitor___BoolTypeQuery_get_seen_aliases, (setter)type_visitor___BoolTypeQuery_set_seen_aliases,
     NULL, NULL},
    {"skip_alias_target",
     (getter)type_visitor___BoolTypeQuery_get_skip_alias_target, (setter)type_visitor___BoolTypeQuery_set_skip_alias_target,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef type_visitor___BoolTypeQuery_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"reset",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___reset,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unbound_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_list",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_type_list,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_argument",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_callable_argument,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_raw_expression_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_raw_expression_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_ellipsis_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_ellipsis_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_placeholder_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_placeholder_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"query_types",
     (PyCFunction)CPyPy_type_visitor___BoolTypeQuery___query_types,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_type_visitor___BoolTypeQuery_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "BoolTypeQuery",
    .tp_new = type_visitor___BoolTypeQuery_new,
    .tp_dealloc = (destructor)type_visitor___BoolTypeQuery_dealloc,
    .tp_traverse = (traverseproc)type_visitor___BoolTypeQuery_traverse,
    .tp_clear = (inquiry)type_visitor___BoolTypeQuery_clear,
    .tp_getset = type_visitor___BoolTypeQuery_getseters,
    .tp_methods = type_visitor___BoolTypeQuery_methods,
    .tp_init = type_visitor___BoolTypeQuery_init,
    .tp_members = type_visitor___BoolTypeQuery_members,
    .tp_basicsize = sizeof(mypy___type_visitor___BoolTypeQueryObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___type_visitor___BoolTypeQueryObject),
    .tp_weaklistoffset = sizeof(mypy___type_visitor___BoolTypeQueryObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_type_visitor___BoolTypeQuery_template = &CPyType_type_visitor___BoolTypeQuery_template_;

static PyObject *
type_visitor___BoolTypeQuery_setup(PyTypeObject *type)
{
    mypy___type_visitor___BoolTypeQueryObject *self;
    self = (mypy___type_visitor___BoolTypeQueryObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = type_visitor___BoolTypeQuery_vtable + 6;
    self->_strategy = CPY_INT_TAG;
    self->_default = 2;
    self->_skip_alias_target = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery(CPyTagged cpy_r_strategy)
{
    PyObject *self = type_visitor___BoolTypeQuery_setup(CPyType_type_visitor___BoolTypeQuery);
    if (self == NULL)
        return NULL;
    char res = CPyDef_type_visitor___BoolTypeQuery_____init__(self, cpy_r_strategy);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
type_visitor___BoolTypeQuery_get_strategy(mypy___type_visitor___BoolTypeQueryObject *self, void *closure)
{
    if (unlikely(self->_strategy == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'strategy' of 'BoolTypeQuery' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_strategy);
    PyObject *retval = CPyTagged_StealAsObject(self->_strategy);
    return retval;
}

static int
type_visitor___BoolTypeQuery_set_strategy(mypy___type_visitor___BoolTypeQueryObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BoolTypeQuery' object attribute 'strategy' cannot be deleted");
        return -1;
    }
    if (self->_strategy != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_strategy);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_strategy = tmp;
    return 0;
}

static PyObject *
type_visitor___BoolTypeQuery_get_default(mypy___type_visitor___BoolTypeQueryObject *self, void *closure)
{
    if (unlikely(self->_default == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'default' of 'BoolTypeQuery' undefined");
        return NULL;
    }
    PyObject *retval = self->_default ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
type_visitor___BoolTypeQuery_set_default(mypy___type_visitor___BoolTypeQueryObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BoolTypeQuery' object attribute 'default' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_default = tmp;
    return 0;
}

static PyObject *
type_visitor___BoolTypeQuery_get_seen_aliases(mypy___type_visitor___BoolTypeQueryObject *self, void *closure)
{
    if (unlikely(self->_seen_aliases == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'seen_aliases' of 'BoolTypeQuery' undefined");
        return NULL;
    }
    CPy_INCREF(self->_seen_aliases);
    PyObject *retval = self->_seen_aliases;
    return retval;
}

static int
type_visitor___BoolTypeQuery_set_seen_aliases(mypy___type_visitor___BoolTypeQueryObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BoolTypeQuery' object attribute 'seen_aliases' cannot be deleted");
        return -1;
    }
    if (self->_seen_aliases != NULL) {
        CPy_DECREF(self->_seen_aliases);
    }
    PyObject *tmp;
    if (PySet_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL7569;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL7569;
    CPy_TypeError("set or None", value); 
    tmp = NULL;
__LL7569: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_seen_aliases = tmp;
    return 0;
}

static PyObject *
type_visitor___BoolTypeQuery_get_skip_alias_target(mypy___type_visitor___BoolTypeQueryObject *self, void *closure)
{
    if (unlikely(self->_skip_alias_target == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'skip_alias_target' of 'BoolTypeQuery' undefined");
        return NULL;
    }
    PyObject *retval = self->_skip_alias_target ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
type_visitor___BoolTypeQuery_set_skip_alias_target(mypy___type_visitor___BoolTypeQueryObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BoolTypeQuery' object attribute 'skip_alias_target' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_skip_alias_target = tmp;
    return 0;
}
static PyMethodDef type_visitormodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef type_visitormodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.type_visitor",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    type_visitormodule_methods
};

PyObject *CPyInit_mypy___type_visitor(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___type_visitor_internal) {
        Py_INCREF(CPyModule_mypy___type_visitor_internal);
        return CPyModule_mypy___type_visitor_internal;
    }
    CPyModule_mypy___type_visitor_internal = PyModule_Create(&type_visitormodule);
    if (unlikely(CPyModule_mypy___type_visitor_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___type_visitor_internal, "__name__");
    CPyStatic_type_visitor___globals = PyModule_GetDict(CPyModule_mypy___type_visitor_internal);
    if (unlikely(CPyStatic_type_visitor___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_type_visitor_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___type_visitor_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___type_visitor_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_type_visitor___TypeVisitor);
    Py_CLEAR(CPyType_type_visitor___SyntheticTypeVisitor);
    Py_CLEAR(CPyType_type_visitor___TypeTranslator);
    Py_CLEAR(CPyType_type_visitor___TypeQuery);
    Py_CLEAR(CPyType_type_visitor___BoolTypeQuery);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_unbound_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unbound_type", 65, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6189]; /* 'visit_unbound_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_any(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_any", 69, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6190]; /* 'visit_any' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_none_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_none_type", 73, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6191]; /* 'visit_none_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_uninhabited_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_uninhabited_type", 77, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6192]; /* 'visit_uninhabited_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_erased_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_erased_type", 81, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6193]; /* 'visit_erased_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_deleted_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_deleted_type", 85, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6194]; /* 'visit_deleted_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_type_var(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var", 89, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6195]; /* 'visit_type_var' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_param_spec(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_param_spec", 93, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6196]; /* 'visit_param_spec' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_parameters(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_parameters", 97, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6197]; /* 'visit_parameters' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_type_var_tuple(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var_tuple", 101, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6198]; /* 'visit_type_var_tuple' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_instance(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_instance", 105, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6199]; /* 'visit_instance' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_callable_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type", 109, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6200]; /* 'visit_callable_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_overloaded(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded", 113, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6201]; /* 'visit_overloaded' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_tuple_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_tuple_type", 117, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6202]; /* 'visit_tuple_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_typeddict_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 121, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6203]; /* 'visit_typeddict_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_literal_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_literal_type", 125, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6204]; /* 'visit_literal_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_union_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_union_type", 129, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6205]; /* 'visit_union_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_partial_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_partial_type", 133, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6206]; /* 'visit_partial_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_type_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_type", 137, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6207]; /* 'visit_type_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_type_alias_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 141, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6208]; /* 'visit_type_alias_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_unpack_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type", 145, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6209]; /* 'visit_unpack_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeVisitor___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___SyntheticTypeVisitor___visit_type_list(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___SyntheticTypeVisitor___visit_type_list(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_list", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___SyntheticTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.SyntheticTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeList))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeList", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___SyntheticTypeVisitor___visit_type_list(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_list", 158, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___SyntheticTypeVisitor___visit_type_list__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6210]; /* 'visit_type_list' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___SyntheticTypeVisitor___visit_type_list__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_list__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___SyntheticTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.SyntheticTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeList))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeList", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___SyntheticTypeVisitor___visit_type_list__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_list__SyntheticTypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___SyntheticTypeVisitor___visit_callable_argument(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___SyntheticTypeVisitor___visit_callable_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_argument", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___SyntheticTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.SyntheticTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableArgument))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableArgument", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___SyntheticTypeVisitor___visit_callable_argument(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_argument", 162, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___SyntheticTypeVisitor___visit_callable_argument__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6211]; /* 'visit_callable_argument' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___SyntheticTypeVisitor___visit_callable_argument__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_argument__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___SyntheticTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.SyntheticTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableArgument))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableArgument", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___SyntheticTypeVisitor___visit_callable_argument__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_argument__SyntheticTypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___SyntheticTypeVisitor___visit_ellipsis_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___SyntheticTypeVisitor___visit_ellipsis_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___SyntheticTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.SyntheticTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___EllipsisType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.EllipsisType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___SyntheticTypeVisitor___visit_ellipsis_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_ellipsis_type", 166, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___SyntheticTypeVisitor___visit_ellipsis_type__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6212]; /* 'visit_ellipsis_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___SyntheticTypeVisitor___visit_ellipsis_type__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis_type__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___SyntheticTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.SyntheticTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___EllipsisType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.EllipsisType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___SyntheticTypeVisitor___visit_ellipsis_type__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_ellipsis_type__SyntheticTypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___SyntheticTypeVisitor___visit_raw_expression_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___SyntheticTypeVisitor___visit_raw_expression_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_raw_expression_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___SyntheticTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.SyntheticTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___RawExpressionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.RawExpressionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___SyntheticTypeVisitor___visit_raw_expression_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_raw_expression_type", 170, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___SyntheticTypeVisitor___visit_raw_expression_type__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6213]; /* 'visit_raw_expression_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___SyntheticTypeVisitor___visit_raw_expression_type__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_raw_expression_type__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___SyntheticTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.SyntheticTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___RawExpressionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.RawExpressionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___SyntheticTypeVisitor___visit_raw_expression_type__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_raw_expression_type__SyntheticTypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___SyntheticTypeVisitor___visit_placeholder_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_type_visitor___SyntheticTypeVisitor___visit_placeholder_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_placeholder_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___SyntheticTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.SyntheticTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PlaceholderType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PlaceholderType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___SyntheticTypeVisitor___visit_placeholder_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_placeholder_type", 174, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___SyntheticTypeVisitor___visit_placeholder_type__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6214]; /* 'visit_placeholder_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___SyntheticTypeVisitor___visit_placeholder_type__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_placeholder_type__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___SyntheticTypeVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.SyntheticTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PlaceholderType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PlaceholderType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___SyntheticTypeVisitor___visit_placeholder_type__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_placeholder_type__SyntheticTypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_unbound_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unbound_type", 186, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_unbound_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_unbound_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6189]; /* 'visit_unbound_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_unbound_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_unbound_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unbound_type__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_any(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_any", 189, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_any__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6190]; /* 'visit_any' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_any__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_any__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_any__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_none_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_none_type", 192, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_none_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_none_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6191]; /* 'visit_none_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_none_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_none_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_none_type__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_uninhabited_type", 195, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6192]; /* 'visit_uninhabited_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_uninhabited_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_uninhabited_type__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_erased_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_erased_type", 198, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_erased_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_erased_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6193]; /* 'visit_erased_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_erased_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_erased_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_erased_type__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_deleted_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_deleted_type", 201, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_deleted_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_deleted_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6194]; /* 'visit_deleted_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_deleted_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_deleted_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_deleted_type__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_last_known_value;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_raw_last_known_value;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_last_known_value = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___InstanceObject *)cpy_r_t)->_last_known_value;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL13;
    } else
        goto CPyL9;
CPyL1: ;
    cpy_r_r4 = ((mypy___types___InstanceObject *)cpy_r_t)->_last_known_value;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_instance", 207, CPyStatic_type_visitor___globals, "mypy.types.LiteralType", cpy_r_r4);
        goto CPyL12;
    }
    cpy_r_r6 = CPyDef_types___LiteralType___accept(cpy_r_r5, cpy_r_self);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_instance", 207, CPyStatic_type_visitor___globals);
        goto CPyL12;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_instance", 207, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r6);
        goto CPyL12;
    }
    cpy_r_raw_last_known_value = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_raw_last_known_value)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (cpy_r_r11) {
        goto CPyL7;
    } else
        goto CPyL14;
CPyL5: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_instance", 208, CPyStatic_type_visitor___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_raw_last_known_value) == CPyType_types___LiteralType))
        cpy_r_r13 = cpy_r_raw_last_known_value;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_instance", 209, CPyStatic_type_visitor___globals, "mypy.types.LiteralType", cpy_r_raw_last_known_value);
        goto CPyL12;
    }
    cpy_r_last_known_value = cpy_r_r13;
CPyL9: ;
    cpy_r_r14 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeTranslator, 18, mypy___type_visitor___TypeTranslatorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r15); /* translate_types */
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_instance", 212, CPyStatic_type_visitor___globals);
        goto CPyL15;
    }
    cpy_r_r17 = ((mypy___types___InstanceObject *)cpy_r_t)->_line;
    CPyTagged_INCREF(cpy_r_r17);
    cpy_r_r18 = ((mypy___types___InstanceObject *)cpy_r_t)->_column;
    CPyTagged_INCREF(cpy_r_r18);
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_types___Instance(cpy_r_r14, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_last_known_value, cpy_r_r19);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r16);
    CPyTagged_DECREF(cpy_r_r17);
    CPyTagged_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_last_known_value);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_instance", 210, CPyStatic_type_visitor___globals);
        goto CPyL12;
    }
    return cpy_r_r20;
CPyL12: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL13: ;
    CPy_DECREF(cpy_r_last_known_value);
    goto CPyL1;
CPyL14: ;
    CPy_DECREF(cpy_r_raw_last_known_value);
    goto CPyL5;
CPyL15: ;
    CPy_DecRef(cpy_r_last_known_value);
    CPy_DecRef(cpy_r_r14);
    goto CPyL12;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_instance(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_instance", 204, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_instance__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6199]; /* 'visit_instance' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_instance__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_instance__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_instance__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_type_var(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var", 218, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_type_var__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6195]; /* 'visit_type_var' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_type_var__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_type_var__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_param_spec(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_param_spec", 221, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_param_spec__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6196]; /* 'visit_param_spec' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_param_spec__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_param_spec__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_param_spec__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeTranslator, 18, mypy___type_visitor___TypeTranslatorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r0); /* translate_types */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_parameters", 225, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    cpy_r_r2 = NULL;
    cpy_r_r3 = NULL;
    cpy_r_r4 = NULL;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_types___Parameters___copy_modified(cpy_r_t, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_parameters", 225, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_parameters(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_parameters", 224, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_parameters(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_parameters__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6197]; /* 'visit_parameters' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_parameters__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_parameters__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_parameters__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_type_var_tuple(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var_tuple", 227, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_type_var_tuple__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6198]; /* 'visit_type_var_tuple' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_type_var_tuple__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_type_var_tuple__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var_tuple__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_partial_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_partial_type", 230, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_partial_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_partial_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6206]; /* 'visit_partial_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_partial_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_partial_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_partial_type__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
        CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type", 234, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_unpack_type", 234, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL4;
    }
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_types___UnpackType(cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type", 234, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_unpack_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type", 233, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_unpack_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6209]; /* 'visit_unpack_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_unpack_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_unpack_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
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
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeTranslator, 18, mypy___type_visitor___TypeTranslatorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r0); /* translate_types */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type", 238, CPyStatic_type_visitor___globals);
        goto CPyL6;
    }
    cpy_r_r2 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r2, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type", 239, CPyStatic_type_visitor___globals);
        goto CPyL7;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_callable_type", 239, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r3);
        goto CPyL7;
    }
    cpy_r_r5 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_variables;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeTranslator, 19, mypy___type_visitor___TypeTranslatorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r5); /* translate_variables */
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type", 240, CPyStatic_type_visitor___globals);
        goto CPyL8;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = NULL;
    cpy_r_r10 = NULL;
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPY_INT_TAG;
    cpy_r_r13 = CPY_INT_TAG;
    cpy_r_r14 = NULL;
    cpy_r_r15 = NULL;
    cpy_r_r16 = NULL;
    cpy_r_r17 = NULL;
    cpy_r_r18 = NULL;
    cpy_r_r19 = NULL;
    cpy_r_r20 = NULL;
    cpy_r_r21 = NULL;
    cpy_r_r22 = NULL;
    cpy_r_r23 = CPyDef_types___CallableType___copy_modified(cpy_r_t, cpy_r_r1, cpy_r_r7, cpy_r_r8, cpy_r_r4, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r6, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type", 237, CPyStatic_type_visitor___globals);
        goto CPyL6;
    }
    return cpy_r_r23;
CPyL6: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL6;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_callable_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type", 236, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_callable_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6200]; /* 'visit_callable_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_callable_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_callable_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeTranslator, 18, mypy___type_visitor___TypeTranslatorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r0); /* translate_types */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_tuple_type", 245, CPyStatic_type_visitor___globals);
        goto CPyL6;
    }
    cpy_r_r2 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_partial_fallback;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_types___Instance___accept(cpy_r_r2, cpy_r_self);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_tuple_type", 247, CPyStatic_type_visitor___globals);
        goto CPyL7;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_tuple_type", 247, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r3);
        goto CPyL7;
    }
    cpy_r_r5 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_line;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_column;
    CPyTagged_INCREF(cpy_r_r6);
    if (likely(Py_TYPE(cpy_r_r4) == CPyType_types___Instance))
        cpy_r_r7 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_tuple_type", 244, CPyStatic_type_visitor___globals, "mypy.types.Instance", cpy_r_r4);
        goto CPyL8;
    }
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_types___TupleType(cpy_r_r1, cpy_r_r7, cpy_r_r5, cpy_r_r6, cpy_r_r8);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_tuple_type", 244, CPyStatic_type_visitor___globals);
        goto CPyL6;
    }
    return cpy_r_r9;
CPyL6: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_r5);
    CPyTagged_DecRef(cpy_r_r6);
    goto CPyL6;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_tuple_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_tuple_type", 243, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_tuple_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6202]; /* 'visit_tuple_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_tuple_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_tuple_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_tuple_type__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
    PyObject *cpy_r_item_name;
    PyObject *cpy_r_item_type;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 253, CPyStatic_type_visitor___globals);
        goto CPyL15;
    }
    cpy_r_r1 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
    cpy_r_r3 = PyDict_Size(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyDict_GetItemsIter(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 253, CPyStatic_type_visitor___globals);
        goto CPyL16;
    }
CPyL2: ;
    cpy_r_r6 = CPyDict_NextItem(cpy_r_r5, cpy_r_r2);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r2 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL17;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = cpy_r_r6.f3;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r11 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_typeddict_type", 253, CPyStatic_type_visitor___globals, "str", cpy_r_r9);
        goto CPyL18;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_typeddict_type", 253, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r10);
        goto CPyL19;
    }
    cpy_r_item_name = cpy_r_r11;
    cpy_r_item_type = cpy_r_r12;
    cpy_r_r13 = CPY_GET_METHOD(cpy_r_item_type, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_item_type, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_item_type);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 253, CPyStatic_type_visitor___globals);
        goto CPyL20;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_types___Type)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_typeddict_type", 253, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r13);
        goto CPyL20;
    }
    cpy_r_r15 = CPyDict_SetItem(cpy_r_r0, cpy_r_item_name, cpy_r_r14);
    CPy_DECREF(cpy_r_item_name);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 253, CPyStatic_type_visitor___globals);
        goto CPyL21;
    }
    cpy_r_r17 = CPyDict_CheckSize(cpy_r_r1, cpy_r_r4);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 253, CPyStatic_type_visitor___globals);
        goto CPyL21;
    } else
        goto CPyL2;
CPyL9: ;
    cpy_r_r18 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 253, CPyStatic_type_visitor___globals);
        goto CPyL22;
    }
    cpy_r_items = cpy_r_r0;
    cpy_r_r19 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_required_keys;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyDef_types___Instance___accept(cpy_r_r20, cpy_r_self);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 258, CPyStatic_type_visitor___globals);
        goto CPyL23;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r21, CPyType_types___Type)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_typeddict_type", 258, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r21);
        goto CPyL23;
    }
    cpy_r_r23 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_line;
    CPyTagged_INCREF(cpy_r_r23);
    cpy_r_r24 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_column;
    CPyTagged_INCREF(cpy_r_r24);
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_types___Instance))
        cpy_r_r25 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_typeddict_type", 254, CPyStatic_type_visitor___globals, "mypy.types.Instance", cpy_r_r22);
        goto CPyL24;
    }
    cpy_r_r26 = CPyDef_types___TypedDictType(cpy_r_items, cpy_r_r19, cpy_r_r25, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r25);
    CPyTagged_DECREF(cpy_r_r23);
    CPyTagged_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 254, CPyStatic_type_visitor___globals);
        goto CPyL15;
    }
    return cpy_r_r26;
CPyL15: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    goto CPyL9;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_item_name);
    goto CPyL15;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL15;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL15;
CPyL23: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r19);
    goto CPyL15;
CPyL24: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r23);
    CPyTagged_DecRef(cpy_r_r24);
    goto CPyL15;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_typeddict_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 252, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_typeddict_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6203]; /* 'visit_typeddict_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_typeddict_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_typeddict_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = ((mypy___types___LiteralTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_types___Instance___accept(cpy_r_r0, cpy_r_self);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_literal_type", 264, CPyStatic_type_visitor___globals);
        goto CPyL8;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_literal_type", 264, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL8;
    }
    cpy_r_fallback = cpy_r_r2;
    cpy_r_r3 = (PyObject *)CPyType_types___Instance;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_fallback)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (cpy_r_r6) {
        goto CPyL5;
    } else
        goto CPyL9;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_literal_type", 265, CPyStatic_type_visitor___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r8 = ((mypy___types___LiteralTypeObject *)cpy_r_t)->_value;
    CPy_INCREF(cpy_r_r8);
    if (likely(Py_TYPE(cpy_r_fallback) == CPyType_types___Instance))
        cpy_r_r9 = cpy_r_fallback;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_literal_type", 266, CPyStatic_type_visitor___globals, "mypy.types.Instance", cpy_r_fallback);
        goto CPyL10;
    }
    cpy_r_r10 = ((mypy___types___LiteralTypeObject *)cpy_r_t)->_line;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r11 = ((mypy___types___LiteralTypeObject *)cpy_r_t)->_column;
    CPyTagged_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_types___LiteralType(cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    CPyTagged_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_literal_type", 266, CPyStatic_type_visitor___globals);
        goto CPyL8;
    }
    return cpy_r_r12;
CPyL8: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL9: ;
    CPy_DECREF(cpy_r_fallback);
    goto CPyL3;
CPyL10: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL8;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_literal_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_literal_type", 263, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_literal_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_literal_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6204]; /* 'visit_literal_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_literal_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_literal_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_literal_type__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeTranslator, 18, mypy___type_visitor___TypeTranslatorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r0); /* translate_types */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_union_type", 269, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    cpy_r_r2 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_line;
    CPyTagged_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_column;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = 2;
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_types___UnionType(cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_union_type", 269, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_union_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_union_type", 268, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_union_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6205]; /* 'visit_union_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_union_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_union_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_union_type__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___translate_types(PyObject *cpy_r_self, PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
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
        CPy_AddTraceback("mypy/type_visitor.py", "translate_types", 272, CPyStatic_type_visitor___globals);
        goto CPyL9;
    }
    cpy_r_r1 = PyObject_GetIter(cpy_r_types);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "translate_types", 272, CPyStatic_type_visitor___globals);
        goto CPyL10;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL11;
    if (likely(PyObject_TypeCheck(cpy_r_r2, CPyType_types___Type)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "translate_types", 272, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r2);
        goto CPyL12;
    }
    cpy_r_t = cpy_r_r3;
    cpy_r_r4 = CPY_GET_METHOD(cpy_r_t, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "translate_types", 272, CPyStatic_type_visitor___globals);
        goto CPyL12;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r4, CPyType_types___Type)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "translate_types", 272, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r4);
        goto CPyL12;
    }
    cpy_r_r6 = PyList_Append(cpy_r_r0, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/type_visitor.py", "translate_types", 272, CPyStatic_type_visitor___globals);
        goto CPyL12;
    } else
        goto CPyL2;
CPyL7: ;
    cpy_r_r8 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/type_visitor.py", "translate_types", 272, CPyStatic_type_visitor___globals);
        goto CPyL10;
    }
    return cpy_r_r0;
CPyL9: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
}

PyObject *CPyPy_type_visitor___TypeTranslator___translate_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:translate_types", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_types = obj_types;
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___translate_types(arg_self, arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "translate_types", 271, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___translate_types__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6215]; /* 'translate_types' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_types};
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

PyObject *CPyPy_type_visitor___TypeTranslator___translate_types__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:translate_types__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_types = obj_types;
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___translate_types__TypeTranslator_glue(arg_self, arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "translate_types__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___translate_variables(PyObject *cpy_r_self, PyObject *cpy_r_variables) {
    CPy_INCREF(cpy_r_variables);
    return cpy_r_variables;
}

PyObject *CPyPy_type_visitor___TypeTranslator___translate_variables(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"variables", 0};
    static CPyArg_Parser parser = {"O:translate_variables", kwlist, 0};
    PyObject *obj_variables;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_variables)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_variables = obj_variables;
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___translate_variables(arg_self, arg_variables);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "translate_variables", 274, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___translate_variables__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_variables) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6216]; /* 'translate_variables' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_variables};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeTranslator___translate_variables__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"variables", 0};
    static CPyArg_Parser parser = {"O:translate_variables__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_variables;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_variables)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_variables = obj_variables;
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___translate_variables__TypeTranslator_glue(arg_self, arg_variables);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "translate_variables__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
    PyObject *cpy_r_new;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded", 280, CPyStatic_type_visitor___globals);
        goto CPyL15;
    }
    cpy_r_items = cpy_r_r0;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_t, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded", 281, CPyStatic_type_visitor___globals);
        goto CPyL16;
    }
CPyL2: ;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL17;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_types___CallableType))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_overloaded", 281, CPyStatic_type_visitor___globals, "mypy.types.CallableType", cpy_r_r7);
        goto CPyL18;
    }
    cpy_r_item = cpy_r_r8;
    cpy_r_r9 = CPyDef_types___CallableType___accept(cpy_r_item, cpy_r_self);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded", 282, CPyStatic_type_visitor___globals);
        goto CPyL18;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_types___Type)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_overloaded", 282, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r9);
        goto CPyL18;
    }
    cpy_r_new = cpy_r_r10;
    cpy_r_r11 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_new)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (cpy_r_r14) {
        goto CPyL10;
    } else
        goto CPyL19;
CPyL8: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded", 283, CPyStatic_type_visitor___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_new) == CPyType_types___CallableType))
        cpy_r_r16 = cpy_r_new;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_overloaded", 284, CPyStatic_type_visitor___globals, "mypy.types.CallableType", cpy_r_new);
        goto CPyL18;
    }
    cpy_r_r17 = PyList_Append(cpy_r_items, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded", 284, CPyStatic_type_visitor___globals);
        goto CPyL18;
    }
    cpy_r_r19 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r19;
    goto CPyL3;
CPyL13: ;
    cpy_r_r20 = CPyDef_types___Overloaded(cpy_r_items);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded", 285, CPyStatic_type_visitor___globals);
        goto CPyL15;
    }
    return cpy_r_r20;
CPyL15: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL16: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r1);
    goto CPyL15;
CPyL19: ;
    CPy_DECREF(cpy_r_items);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_new);
    goto CPyL8;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_overloaded(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded", 279, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_overloaded(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_overloaded__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6201]; /* 'visit_overloaded' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_overloaded__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_overloaded__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_item;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_type", 288, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_type_type", 288, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL4;
    }
    cpy_r_r3 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_line;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_column;
    CPyTagged_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_types___TypeType___make_normalized(cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_type", 288, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_type_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_type", 287, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_type_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_type_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6207]; /* 'visit_type_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_type_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_type_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_type__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_Unreachable();
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_type_alias_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 291, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeTranslator___visit_type_alias_type__TypeTranslator_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[6208]; /* 'visit_type_alias_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_type_visitor___TypeTranslator___visit_type_alias_type__TypeTranslator_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeTranslator_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeTranslator)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeTranslator", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeTranslator___visit_type_alias_type__TypeTranslator_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type__TypeTranslator_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___TypeQuery_____init__(PyObject *cpy_r_self, PyObject *cpy_r_strategy) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    CPy_INCREF(cpy_r_strategy);
    if (((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_strategy != NULL) {
        CPy_DECREF(((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_strategy);
    }
    ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_strategy = cpy_r_strategy;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/type_visitor.py", "__init__", 314, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "__init__", 317, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    if (((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_seen_aliases != NULL) {
        CPy_DECREF(((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_seen_aliases);
    }
    ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_seen_aliases = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "__init__", 317, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_skip_alias_target = 0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/type_visitor.py", "__init__", 321, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"strategy", 0};
    PyObject *obj_strategy;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_strategy)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_strategy = obj_strategy;
    char retval = CPyDef_type_visitor___TypeQuery_____init__(arg_self, arg_strategy);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "__init__", 313, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___TypeQuery_____init___3__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_strategy) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[288]; /* '__init__' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_strategy};
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

PyObject *CPyPy_type_visitor___TypeQuery_____init___3__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"strategy", 0};
    static CPyArg_Parser parser = {"O:__init____TypeQuery_glue", kwlist, 0};
    PyObject *obj_strategy;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_strategy)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_strategy = obj_strategy;
    char retval = CPyDef_type_visitor___TypeQuery_____init___3__TypeQuery_glue(arg_self, arg_strategy);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "__init____TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___UnboundTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r0); /* query_types */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_unbound_type", 324, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_unbound_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unbound_type", 323, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_unbound_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6189]; /* 'visit_unbound_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_unbound_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_unbound_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unbound_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_type_list(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___TypeListObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r0); /* query_types */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_list", 327, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_type_list(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_list", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeList))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeList", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_type_list(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_list", 326, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_type_list__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6210]; /* 'visit_type_list' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_type_list__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_list__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeList))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeList", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_type_list__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_list__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_callable_argument(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___CallableArgumentObject *)cpy_r_t)->_typ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_argument", 330, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_callable_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_argument", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableArgument))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableArgument", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_callable_argument(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_argument", 329, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_callable_argument__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6211]; /* 'visit_callable_argument' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_callable_argument__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_argument__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableArgument))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableArgument", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_callable_argument__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_argument__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_any", 333, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_strategy;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_any", "TypeQuery", "strategy", 333, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_any", 333, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_any(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_any", 332, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_any__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6190]; /* 'visit_any' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_any__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_any__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_any__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_uninhabited_type", 336, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_strategy;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_uninhabited_type", "TypeQuery", "strategy", 336, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_uninhabited_type", 336, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_uninhabited_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_uninhabited_type", 335, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_uninhabited_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6192]; /* 'visit_uninhabited_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_uninhabited_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_uninhabited_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_uninhabited_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_none_type", 339, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_strategy;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_none_type", "TypeQuery", "strategy", 339, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_none_type", 339, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_none_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_none_type", 338, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_none_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6191]; /* 'visit_none_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_none_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_none_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_none_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_erased_type", 342, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_strategy;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_erased_type", "TypeQuery", "strategy", 342, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_erased_type", 342, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_erased_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_erased_type", 341, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_erased_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6193]; /* 'visit_erased_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_erased_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_erased_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_erased_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_deleted_type", 345, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_strategy;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_deleted_type", "TypeQuery", "strategy", 345, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_deleted_type", 345, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_deleted_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_deleted_type", 344, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_deleted_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6194]; /* 'visit_deleted_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_deleted_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_deleted_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_deleted_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___types___TypeVarTypeObject *)cpy_r_t)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___TypeVarTypeObject *)cpy_r_t)->_default;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var", 348, CPyStatic_type_visitor___globals);
        goto CPyL6;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = ((mypy___types___TypeVarTypeObject *)cpy_r_t)->_values;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = PyNumber_Add(cpy_r_r2, cpy_r_r6);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var", 348, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    if (likely(PyList_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_type_var", 348, CPyStatic_type_visitor___globals, "list", cpy_r_r7);
        goto CPyL5;
    }
    cpy_r_r9 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r8); /* query_types */
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var", 348, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    return cpy_r_r9;
CPyL5: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_type_var(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var", 347, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_type_var__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6195]; /* 'visit_type_var' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_type_var__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_type_var__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_default;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_param_spec", 351, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r2); /* query_types */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_param_spec", 351, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_param_spec(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_param_spec", 350, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_param_spec__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6196]; /* 'visit_param_spec' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_param_spec__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_param_spec__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_param_spec__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_default;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var_tuple", 354, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r2); /* query_types */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var_tuple", 354, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_type_var_tuple(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var_tuple", 353, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_type_var_tuple__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6198]; /* 'visit_type_var_tuple' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_type_var_tuple__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_type_var_tuple__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var_tuple__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((mypy___types___UnpackTypeObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type", 357, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r1); /* query_types */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type", 357, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_unpack_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type", 356, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_unpack_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6209]; /* 'visit_unpack_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_unpack_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_unpack_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___ParametersObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r0); /* query_types */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_parameters", 360, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_parameters(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_parameters", 359, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_parameters__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6197]; /* 'visit_parameters' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_parameters__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_parameters__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_parameters__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_partial_type", 363, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_strategy;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_partial_type", "TypeQuery", "strategy", 363, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_partial_type", 363, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_partial_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_partial_type", 362, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_partial_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6206]; /* 'visit_partial_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_partial_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_partial_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_partial_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r0); /* query_types */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_instance", 366, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_instance(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_instance", 365, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_instance__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6199]; /* 'visit_instance' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_instance__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_instance__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_instance__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type", 370, CPyStatic_type_visitor___globals);
        goto CPyL6;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r1;
    cpy_r_r5 = PyNumber_Add(cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type", 370, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_callable_type", 370, CPyStatic_type_visitor___globals, "list", cpy_r_r5);
        goto CPyL5;
    }
    cpy_r_r7 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r6); /* query_types */
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type", 370, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    return cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_callable_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type", 368, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_callable_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6200]; /* 'visit_callable_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_callable_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_callable_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r0); /* query_types */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_tuple_type", 373, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_tuple_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_tuple_type", 372, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_tuple_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6202]; /* 'visit_tuple_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_tuple_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_tuple_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_tuple_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDict_ValuesView(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 376, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r1); /* query_types */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 376, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_typeddict_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 375, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_typeddict_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6203]; /* 'visit_typeddict_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_typeddict_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_typeddict_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_raw_expression_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_raw_expression_type", 379, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_strategy;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_raw_expression_type", "TypeQuery", "strategy", 379, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_raw_expression_type", 379, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_raw_expression_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_raw_expression_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___RawExpressionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.RawExpressionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_raw_expression_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_raw_expression_type", 378, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_raw_expression_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6213]; /* 'visit_raw_expression_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_raw_expression_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_raw_expression_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___RawExpressionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.RawExpressionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_raw_expression_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_raw_expression_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_literal_type", 382, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_strategy;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_literal_type", "TypeQuery", "strategy", 382, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_literal_type", 382, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_literal_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_literal_type", 381, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_literal_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6204]; /* 'visit_literal_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_literal_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_literal_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_literal_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r0); /* query_types */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_union_type", 385, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_union_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_union_type", 384, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_union_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6205]; /* 'visit_union_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_union_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_union_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_union_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_t, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded", 388, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
CPyL1: ;
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r0); /* query_types */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded", 388, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_overloaded(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded", 387, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_overloaded__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6201]; /* 'visit_overloaded' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_overloaded__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_overloaded__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_item;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_type", 391, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_type_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_type", 390, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_type_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6207]; /* 'visit_type_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_type_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_type_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_ellipsis_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_ellipsis_type", 394, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_strategy;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_ellipsis_type", "TypeQuery", "strategy", 394, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_ellipsis_type", 394, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_ellipsis_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___EllipsisType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.EllipsisType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_ellipsis_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_ellipsis_type", 393, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_ellipsis_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6212]; /* 'visit_ellipsis_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_ellipsis_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___EllipsisType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.EllipsisType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_ellipsis_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_ellipsis_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_placeholder_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___types___PlaceholderTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r0); /* query_types */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_placeholder_type", 397, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_placeholder_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_placeholder_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PlaceholderType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PlaceholderType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_placeholder_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_placeholder_type", 396, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_placeholder_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6214]; /* 'visit_placeholder_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_placeholder_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_placeholder_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PlaceholderType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PlaceholderType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_placeholder_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_placeholder_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_seen_aliases;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_type_alias_type", "TypeQuery", "seen_aliases", 403, CPyStatic_type_visitor___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PySet_Contains(cpy_r_r0, cpy_r_t);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 403, CPyStatic_type_visitor___globals);
        goto CPyL17;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL7;
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 404, CPyStatic_type_visitor___globals);
        goto CPyL17;
    }
    cpy_r_r5 = ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_strategy;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_type_alias_type", "TypeQuery", "strategy", 404, CPyStatic_type_visitor___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    PyObject *cpy_r_r6[1] = {cpy_r_r4};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 1, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 404, CPyStatic_type_visitor___globals);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_r4);
    return cpy_r_r8;
CPyL7: ;
    cpy_r_r9 = ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_seen_aliases;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_type_alias_type", "TypeQuery", "seen_aliases", 405, CPyStatic_type_visitor___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r9);
CPyL8: ;
    cpy_r_r10 = PySet_Add(cpy_r_r9, cpy_r_t);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 405, CPyStatic_type_visitor___globals);
        goto CPyL17;
    }
    cpy_r_r12 = ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_skip_alias_target;
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_type_alias_type", "TypeQuery", "skip_alias_target", 406, CPyStatic_type_visitor___globals);
        goto CPyL17;
    }
CPyL10: ;
    if (!cpy_r_r12) goto CPyL13;
CPyL11: ;
    cpy_r_r13 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPY_GET_METHOD(cpy_r_self, CPyType_type_visitor___TypeQuery, 27, mypy___type_visitor___TypeQueryObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_self, cpy_r_r13); /* query_types */
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 407, CPyStatic_type_visitor___globals);
        goto CPyL17;
    }
    return cpy_r_r14;
CPyL13: ;
    cpy_r_r15 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 408, CPyStatic_type_visitor___globals);
        goto CPyL17;
    }
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_type_alias_type", 408, CPyStatic_type_visitor___globals, "mypy.types.ProperType", cpy_r_r15);
        goto CPyL17;
    }
    cpy_r_r17 = CPY_GET_METHOD(cpy_r_r16, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r16, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 408, CPyStatic_type_visitor___globals);
        goto CPyL17;
    }
    return cpy_r_r17;
CPyL17: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL18: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL17;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_type_alias_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 399, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___visit_type_alias_type__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6208]; /* 'visit_type_alias_type' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_t};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___visit_type_alias_type__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeQuery_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___TypeQuery___visit_type_alias_type__TypeQuery_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___query_types(PyObject *cpy_r_self, PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 412, CPyStatic_type_visitor___globals);
        goto CPyL10;
    }
    cpy_r_r1 = PyObject_GetIter(cpy_r_types);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 412, CPyStatic_type_visitor___globals);
        goto CPyL11;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL12;
    if (likely(PyObject_TypeCheck(cpy_r_r2, CPyType_types___Type)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "query_types", 412, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r2);
        goto CPyL13;
    }
    cpy_r_t = cpy_r_r3;
    cpy_r_r4 = CPY_GET_METHOD(cpy_r_t, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 412, CPyStatic_type_visitor___globals);
        goto CPyL13;
    }
    cpy_r_r5 = PyList_Append(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 412, CPyStatic_type_visitor___globals);
        goto CPyL13;
    } else
        goto CPyL2;
CPyL6: ;
    cpy_r_r7 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 412, CPyStatic_type_visitor___globals);
        goto CPyL11;
    }
    cpy_r_r8 = ((mypy___type_visitor___TypeQueryObject *)cpy_r_self)->_strategy;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "query_types", "TypeQuery", "strategy", 412, CPyStatic_type_visitor___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r8);
CPyL8: ;
    PyObject *cpy_r_r9[1] = {cpy_r_r0};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 412, CPyStatic_type_visitor___globals);
        goto CPyL11;
    }
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r11;
CPyL10: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
}

PyObject *CPyPy_type_visitor___TypeQuery___query_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:query_types", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_types = obj_types;
    PyObject *retval = CPyDef_type_visitor___TypeQuery___query_types(arg_self, arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "query_types", 410, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___TypeQuery___query_types__TypeQuery_glue(PyObject *cpy_r_self, PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[6217]; /* 'query_types' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_types};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_type_visitor___TypeQuery___query_types__TypeQuery_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:query_types__TypeQuery_glue", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___TypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.TypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_types = obj_types;
    PyObject *retval = CPyDef_type_visitor___TypeQuery___query_types__TypeQuery_glue(arg_self, arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "query_types__TypeQuery_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery_____init__(PyObject *cpy_r_self, CPyTagged cpy_r_strategy) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    CPyTagged_INCREF(cpy_r_strategy);
    if (((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_strategy != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_strategy);
    }
    ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_strategy = cpy_r_strategy;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/type_visitor.py", "__init__", 435, CPyStatic_type_visitor___globals);
        goto CPyL13;
    }
    cpy_r_r1 = cpy_r_strategy == 0;
    if (!cpy_r_r1) goto CPyL3;
    ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_default = 0;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "__init__", 437, CPyStatic_type_visitor___globals);
        goto CPyL13;
    } else
        goto CPyL10;
CPyL3: ;
    cpy_r_r3 = cpy_r_strategy & 1;
    cpy_r_r4 = cpy_r_r3 == 0;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = cpy_r_strategy == 2;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL6;
CPyL5: ;
    cpy_r_r7 = CPyTagged_IsEq_(cpy_r_strategy, 2);
    cpy_r_r6 = cpy_r_r7;
CPyL6: ;
    if (cpy_r_r6) goto CPyL9;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/type_visitor.py", "__init__", 439, CPyStatic_type_visitor___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL9: ;
    ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_default = 1;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/type_visitor.py", "__init__", 440, CPyStatic_type_visitor___globals);
        goto CPyL13;
    }
CPyL10: ;
    cpy_r_r10 = Py_None;
    CPy_INCREF(cpy_r_r10);
    if (((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_seen_aliases != NULL) {
        CPy_DECREF(((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_seen_aliases);
    }
    ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_seen_aliases = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/type_visitor.py", "__init__", 444, CPyStatic_type_visitor___globals);
        goto CPyL13;
    }
    ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_skip_alias_target = 0;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/type_visitor.py", "__init__", 448, CPyStatic_type_visitor___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"strategy", 0};
    PyObject *obj_strategy;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_strategy)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    CPyTagged arg_strategy;
    if (likely(PyLong_Check(obj_strategy)))
        arg_strategy = CPyTagged_BorrowFromObject(obj_strategy);
    else {
        CPy_TypeError("int", obj_strategy); goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery_____init__(arg_self, arg_strategy);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "__init__", 434, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___reset(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    if (((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_seen_aliases != NULL) {
        CPy_DECREF(((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_seen_aliases);
    }
    ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_seen_aliases = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/type_visitor.py", "reset", 455, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___reset(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":reset", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___reset(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "reset", 450, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___UnboundTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_unbound_type", 458, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_unbound_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unbound_type", 457, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_unbound_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_type_list(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___TypeListObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_list", 461, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_type_list(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_list", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeList))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeList", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_type_list(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_list", 460, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_type_list__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_type_list(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_type_list__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_list__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeList))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeList", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_type_list__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_list__SyntheticTypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_callable_argument(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___types___CallableArgumentObject *)cpy_r_t)->_typ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_argument", 464, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_argument", 464, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_callable_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_argument", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableArgument))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableArgument", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_callable_argument(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_argument", 463, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_callable_argument__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_callable_argument(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_callable_argument__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_argument__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableArgument))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableArgument", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_callable_argument__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_argument__SyntheticTypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_default;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_any", "BoolTypeQuery", "default", 467, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_any(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_any", 466, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_default;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_uninhabited_type", "BoolTypeQuery", "default", 470, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_uninhabited_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_uninhabited_type", 469, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_default;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_none_type", "BoolTypeQuery", "default", 473, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_none_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_none_type", 472, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_none_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_default;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_erased_type", "BoolTypeQuery", "default", 476, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_erased_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_erased_type", 475, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_erased_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_default;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_deleted_type", "BoolTypeQuery", "default", 479, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_deleted_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_deleted_type", 478, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_deleted_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypy___types___TypeVarTypeObject *)cpy_r_t)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___TypeVarTypeObject *)cpy_r_t)->_default;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var", 482, CPyStatic_type_visitor___globals);
        goto CPyL6;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = ((mypy___types___TypeVarTypeObject *)cpy_r_t)->_values;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = PyNumber_Add(cpy_r_r2, cpy_r_r6);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var", 482, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    if (likely(PyList_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_type_var", 482, CPyStatic_type_visitor___globals, "list", cpy_r_r7);
        goto CPyL5;
    }
    cpy_r_r9 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var", 482, CPyStatic_type_visitor___globals);
        goto CPyL5;
    }
    return cpy_r_r9;
CPyL5: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_type_var(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var", 481, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_default;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_param_spec", 485, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_param_spec", 485, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_param_spec(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_param_spec", 484, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_upper_bound;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_default;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var_tuple", 488, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    cpy_r_r6 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var_tuple", 488, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_type_var_tuple(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var_tuple", 487, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypy___types___UnpackTypeObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type", 491, CPyStatic_type_visitor___globals);
        goto CPyL4;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type", 491, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_unpack_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type", 490, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___ParametersObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_parameters", 494, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_parameters(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_parameters", 493, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_parameters(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_default;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_partial_type", "BoolTypeQuery", "default", 497, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_partial_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_partial_type", 496, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_partial_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_instance", 500, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_instance(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_instance", 499, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_args;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_ret;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type", 505, CPyStatic_type_visitor___globals);
        goto CPyL13;
    }
    cpy_r_args = cpy_r_r1;
    cpy_r_r2 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r2, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type", 506, CPyStatic_type_visitor___globals);
        goto CPyL13;
    }
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type", 506, CPyStatic_type_visitor___globals);
        goto CPyL13;
    }
    cpy_r_ret = cpy_r_r4;
    cpy_r_r5 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_strategy;
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_callable_type", "BoolTypeQuery", "strategy", 507, CPyStatic_type_visitor___globals);
        goto CPyL13;
    }
CPyL4: ;
    cpy_r_r6 = cpy_r_r5 == 0;
    if (!cpy_r_r6) goto CPyL9;
    if (!cpy_r_args) goto CPyL7;
    cpy_r_r7 = cpy_r_args;
    goto CPyL8;
CPyL7: ;
    cpy_r_r7 = cpy_r_ret;
CPyL8: ;
    return cpy_r_r7;
CPyL9: ;
    if (cpy_r_args) goto CPyL11;
    cpy_r_r8 = cpy_r_args;
    goto CPyL12;
CPyL11: ;
    cpy_r_r8 = cpy_r_ret;
CPyL12: ;
    return cpy_r_r8;
CPyL13: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_callable_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type", 502, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_tuple_type", 513, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_tuple_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_tuple_type", 512, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDict_Values(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 516, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 516, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_typeddict_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type", 515, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_raw_expression_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_default;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_raw_expression_type", "BoolTypeQuery", "default", 519, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_raw_expression_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_raw_expression_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___RawExpressionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.RawExpressionType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_raw_expression_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_raw_expression_type", 518, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_raw_expression_type__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_raw_expression_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_raw_expression_type__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_raw_expression_type__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___RawExpressionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.RawExpressionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_raw_expression_type__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_raw_expression_type__SyntheticTypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_default;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_literal_type", "BoolTypeQuery", "default", 522, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_literal_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_literal_type", 521, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_literal_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_union_type", 525, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_union_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_union_type", 524, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_t, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded", 528, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
CPyL1: ;
    cpy_r_r1 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded", 528, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_overloaded(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded", 527, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_overloaded(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_item;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_r0, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_type", 531, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_type", 531, CPyStatic_type_visitor___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_type_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_type", 530, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_type_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_ellipsis_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_default;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_ellipsis_type", "BoolTypeQuery", "default", 534, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
CPyL1: ;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_ellipsis_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___EllipsisType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.EllipsisType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_ellipsis_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_ellipsis_type", 533, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_ellipsis_type__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_ellipsis_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_ellipsis_type__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis_type__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___EllipsisType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.EllipsisType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_ellipsis_type__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_ellipsis_type__SyntheticTypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_placeholder_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___types___PlaceholderTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_placeholder_type", 537, CPyStatic_type_visitor___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_placeholder_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_placeholder_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PlaceholderType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PlaceholderType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_placeholder_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_placeholder_type", 536, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_placeholder_type__SyntheticTypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_placeholder_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_placeholder_type__SyntheticTypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_placeholder_type__SyntheticTypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PlaceholderType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PlaceholderType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_placeholder_type__SyntheticTypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_placeholder_type__SyntheticTypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    cpy_r_r0 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_seen_aliases;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_type_alias_type", "BoolTypeQuery", "seen_aliases", 543, CPyStatic_type_visitor___globals);
        goto CPyL22;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = PySet_New(NULL);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 544, CPyStatic_type_visitor___globals);
        goto CPyL22;
    }
    if (((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_seen_aliases != NULL) {
        CPy_DECREF(((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_seen_aliases);
    }
    ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_seen_aliases = cpy_r_r3;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 544, CPyStatic_type_visitor___globals);
        goto CPyL22;
    } else
        goto CPyL10;
CPyL4: ;
    cpy_r_r5 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_seen_aliases;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_type_alias_type", "BoolTypeQuery", "seen_aliases", 545, CPyStatic_type_visitor___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_type_alias_type", 545, CPyStatic_type_visitor___globals, "set", cpy_r_r5);
        goto CPyL22;
    }
    cpy_r_r7 = PySet_Contains(cpy_r_r6, cpy_r_t);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 545, CPyStatic_type_visitor___globals);
        goto CPyL22;
    }
    cpy_r_r9 = cpy_r_r7;
    if (!cpy_r_r9) goto CPyL10;
    cpy_r_r10 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_default;
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_type_alias_type", "BoolTypeQuery", "default", 546, CPyStatic_type_visitor___globals);
        goto CPyL22;
    }
CPyL9: ;
    return cpy_r_r10;
CPyL10: ;
    cpy_r_r11 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_seen_aliases;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_type_alias_type", "BoolTypeQuery", "seen_aliases", 547, CPyStatic_type_visitor___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r11);
CPyL11: ;
    if (likely(cpy_r_r11 != Py_None))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_type_alias_type", 547, CPyStatic_type_visitor___globals, "set", cpy_r_r11);
        goto CPyL22;
    }
    cpy_r_r13 = PySet_Add(cpy_r_r12, cpy_r_t);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 547, CPyStatic_type_visitor___globals);
        goto CPyL22;
    }
    cpy_r_r15 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_skip_alias_target;
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AttributeError("mypy/type_visitor.py", "visit_type_alias_type", "BoolTypeQuery", "skip_alias_target", 548, CPyStatic_type_visitor___globals);
        goto CPyL22;
    }
CPyL14: ;
    if (!cpy_r_r15) goto CPyL17;
CPyL15: ;
    cpy_r_r16 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDef_type_visitor___BoolTypeQuery___query_types(cpy_r_self, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 549, CPyStatic_type_visitor___globals);
        goto CPyL22;
    }
    return cpy_r_r17;
CPyL17: ;
    cpy_r_r18 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 550, CPyStatic_type_visitor___globals);
        goto CPyL22;
    }
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "visit_type_alias_type", 550, CPyStatic_type_visitor___globals, "mypy.types.ProperType", cpy_r_r18);
        goto CPyL22;
    }
    cpy_r_r20 = CPY_GET_METHOD(cpy_r_r19, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r19, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 550, CPyStatic_type_visitor___globals);
        goto CPyL22;
    }
    if (unlikely(!PyBool_Check(cpy_r_r20))) {
        CPy_TypeError("bool", cpy_r_r20); cpy_r_r21 = 2;
    } else
        cpy_r_r21 = cpy_r_r20 == Py_True;
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 550, CPyStatic_type_visitor___globals);
        goto CPyL22;
    }
    return cpy_r_r21;
CPyL22: ;
    cpy_r_r22 = 2;
    return cpy_r_r22;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_type_visitor___BoolTypeQuery___visit_type_alias_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type", 539, CPyStatic_type_visitor___globals);
    return NULL;
}

PyObject *CPyDef_type_visitor___BoolTypeQuery___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_type_visitor___BoolTypeQuery___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = cpy_r_r0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_type_visitor___BoolTypeQuery___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor___BoolTypeQuery___query_types(PyObject *cpy_r_self, PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_t_2;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyPtr cpy_r_r36;
    int64_t cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_t_3;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_t_4;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    cpy_r_r0 = (PyObject *)&PyList_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_types, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 555, CPyStatic_type_visitor___globals);
        goto CPyL48;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL24;
    cpy_r_r4 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_strategy;
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/type_visitor.py", "query_types", "BoolTypeQuery", "strategy", 556, CPyStatic_type_visitor___globals);
        goto CPyL48;
    }
CPyL3: ;
    cpy_r_r5 = cpy_r_r4 == 0;
    if (!cpy_r_r5) goto CPyL14;
    cpy_r_r6 = 0;
    CPy_INCREF(cpy_r_types);
    if (likely(PyList_Check(cpy_r_types)))
        cpy_r_r7 = cpy_r_types;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "query_types", 557, CPyStatic_type_visitor___globals, "list", cpy_r_types);
        goto CPyL48;
    }
    cpy_r_r8 = 0;
CPyL6: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL49;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r8);
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_types___Type)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "query_types", 557, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r13);
        goto CPyL50;
    }
    cpy_r_t = cpy_r_r14;
    cpy_r_r15 = CPY_GET_METHOD(cpy_r_t, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 557, CPyStatic_type_visitor___globals);
        goto CPyL50;
    }
    if (unlikely(!PyBool_Check(cpy_r_r15))) {
        CPy_TypeError("bool", cpy_r_r15); cpy_r_r16 = 2;
    } else
        cpy_r_r16 = cpy_r_r15 == Py_True;
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 557, CPyStatic_type_visitor___globals);
        goto CPyL50;
    }
    if (cpy_r_r16) {
        goto CPyL51;
    } else
        goto CPyL12;
CPyL11: ;
    cpy_r_r6 = 1;
    goto CPyL13;
CPyL12: ;
    cpy_r_r17 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r17;
    goto CPyL6;
CPyL13: ;
    return cpy_r_r6;
CPyL14: ;
    cpy_r_r18 = 1;
    CPy_INCREF(cpy_r_types);
    if (likely(PyList_Check(cpy_r_types)))
        cpy_r_r19 = cpy_r_types;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "query_types", 559, CPyStatic_type_visitor___globals, "list", cpy_r_types);
        goto CPyL48;
    }
    cpy_r_r20 = 0;
CPyL16: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL52;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_r19, cpy_r_r20);
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_types___Type)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "query_types", 559, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r25);
        goto CPyL53;
    }
    cpy_r_t_2 = cpy_r_r26;
    cpy_r_r27 = CPY_GET_METHOD(cpy_r_t_2, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t_2, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_t_2);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 559, CPyStatic_type_visitor___globals);
        goto CPyL53;
    }
    if (unlikely(!PyBool_Check(cpy_r_r27))) {
        CPy_TypeError("bool", cpy_r_r27); cpy_r_r28 = 2;
    } else
        cpy_r_r28 = cpy_r_r27 == Py_True;
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 559, CPyStatic_type_visitor___globals);
        goto CPyL53;
    }
    cpy_r_r29 = cpy_r_r28 ^ 1;
    if (cpy_r_r29) {
        goto CPyL54;
    } else
        goto CPyL22;
CPyL21: ;
    cpy_r_r18 = 0;
    goto CPyL23;
CPyL22: ;
    cpy_r_r30 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r30;
    goto CPyL16;
CPyL23: ;
    return cpy_r_r18;
CPyL24: ;
    cpy_r_r31 = ((mypy___type_visitor___BoolTypeQueryObject *)cpy_r_self)->_strategy;
    if (unlikely(cpy_r_r31 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/type_visitor.py", "query_types", "BoolTypeQuery", "strategy", 561, CPyStatic_type_visitor___globals);
        goto CPyL48;
    }
CPyL25: ;
    cpy_r_r32 = cpy_r_r31 == 0;
    if (!cpy_r_r32) goto CPyL37;
    cpy_r_r33 = 0;
    CPy_INCREF(cpy_r_types);
    if (likely(PyTuple_Check(cpy_r_types)))
        cpy_r_r34 = cpy_r_types;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "query_types", 562, CPyStatic_type_visitor___globals, "tuple", cpy_r_types);
        goto CPyL48;
    }
    cpy_r_r35 = 0;
CPyL28: ;
    cpy_r_r36 = (CPyPtr)&((PyVarObject *)cpy_r_r34)->ob_size;
    cpy_r_r37 = *(int64_t *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 << 1;
    cpy_r_r39 = (Py_ssize_t)cpy_r_r35 < (Py_ssize_t)cpy_r_r38;
    if (!cpy_r_r39) goto CPyL55;
    cpy_r_r40 = CPySequenceTuple_GetItem(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 562, CPyStatic_type_visitor___globals);
        goto CPyL56;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r40, CPyType_types___Type)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "query_types", 562, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r40);
        goto CPyL56;
    }
    cpy_r_t_3 = cpy_r_r41;
    cpy_r_r42 = CPY_GET_METHOD(cpy_r_t_3, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t_3, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_t_3);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 562, CPyStatic_type_visitor___globals);
        goto CPyL56;
    }
    if (unlikely(!PyBool_Check(cpy_r_r42))) {
        CPy_TypeError("bool", cpy_r_r42); cpy_r_r43 = 2;
    } else
        cpy_r_r43 = cpy_r_r42 == Py_True;
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 562, CPyStatic_type_visitor___globals);
        goto CPyL56;
    }
    if (cpy_r_r43) {
        goto CPyL57;
    } else
        goto CPyL35;
CPyL34: ;
    cpy_r_r33 = 1;
    goto CPyL36;
CPyL35: ;
    cpy_r_r44 = cpy_r_r35 + 2;
    cpy_r_r35 = cpy_r_r44;
    goto CPyL28;
CPyL36: ;
    return cpy_r_r33;
CPyL37: ;
    cpy_r_r45 = 1;
    CPy_INCREF(cpy_r_types);
    if (likely(PyTuple_Check(cpy_r_types)))
        cpy_r_r46 = cpy_r_types;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "query_types", 564, CPyStatic_type_visitor___globals, "tuple", cpy_r_types);
        goto CPyL48;
    }
    cpy_r_r47 = 0;
CPyL39: ;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_r46)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r47 < (Py_ssize_t)cpy_r_r50;
    if (!cpy_r_r51) goto CPyL58;
    cpy_r_r52 = CPySequenceTuple_GetItem(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 564, CPyStatic_type_visitor___globals);
        goto CPyL59;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r52, CPyType_types___Type)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/type_visitor.py", "query_types", 564, CPyStatic_type_visitor___globals, "mypy.types.Type", cpy_r_r52);
        goto CPyL59;
    }
    cpy_r_t_4 = cpy_r_r53;
    cpy_r_r54 = CPY_GET_METHOD(cpy_r_t_4, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t_4, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_t_4);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 564, CPyStatic_type_visitor___globals);
        goto CPyL59;
    }
    if (unlikely(!PyBool_Check(cpy_r_r54))) {
        CPy_TypeError("bool", cpy_r_r54); cpy_r_r55 = 2;
    } else
        cpy_r_r55 = cpy_r_r54 == Py_True;
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "query_types", 564, CPyStatic_type_visitor___globals);
        goto CPyL59;
    }
    cpy_r_r56 = cpy_r_r55 ^ 1;
    if (cpy_r_r56) {
        goto CPyL60;
    } else
        goto CPyL46;
CPyL45: ;
    cpy_r_r45 = 0;
    goto CPyL47;
CPyL46: ;
    cpy_r_r57 = cpy_r_r47 + 2;
    cpy_r_r47 = cpy_r_r57;
    goto CPyL39;
CPyL47: ;
    return cpy_r_r45;
CPyL48: ;
    cpy_r_r58 = 2;
    return cpy_r_r58;
CPyL49: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL13;
CPyL50: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL48;
CPyL51: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL11;
CPyL52: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL23;
CPyL53: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL48;
CPyL54: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL21;
CPyL55: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL36;
CPyL56: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL48;
CPyL57: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL34;
CPyL58: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL47;
CPyL59: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL48;
CPyL60: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL45;
}

PyObject *CPyPy_type_visitor___BoolTypeQuery___query_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:query_types", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_type_visitor___BoolTypeQuery)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.type_visitor.BoolTypeQuery", obj_self); 
        goto fail;
    }
    PyObject *arg_types;
    if (PyList_Check(obj_types))
        arg_types = obj_types;
    else {
        arg_types = NULL;
    }
    if (arg_types != NULL) goto __LL7570;
    if (PyTuple_Check(obj_types))
        arg_types = obj_types;
    else {
        arg_types = NULL;
    }
    if (arg_types != NULL) goto __LL7570;
    CPy_TypeError("union[list, tuple]", obj_types); 
    goto fail;
__LL7570: ;
    char retval = CPyDef_type_visitor___BoolTypeQuery___query_types(arg_self, arg_types);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/type_visitor.py", "query_types", 552, CPyStatic_type_visitor___globals);
    return NULL;
}

char CPyDef_type_visitor_____top_level__(void) {
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
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
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
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
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
    int32_t cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", -1, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_type_visitor___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 14, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9527]; /* ('abstractmethod',) */
    cpy_r_r10 = CPyStatics[602]; /* 'abc' */
    cpy_r_r11 = CPyStatic_type_visitor___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 16, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    CPyModule_abc = cpy_r_r12;
    CPy_INCREF(CPyModule_abc);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9849]; /* ('Any', 'Callable', 'Final', 'Generic', 'Iterable',
                                     'Sequence', 'TypeVar', 'cast') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_type_visitor___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 17, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9573]; /* ('mypyc_attr', 'trait') */
    cpy_r_r18 = CPyStatics[599]; /* 'mypy_extensions' */
    cpy_r_r19 = CPyStatic_type_visitor___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 19, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    CPyModule_mypy_extensions = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9850]; /* ('AnyType', 'CallableArgument', 'CallableType',
                                     'DeletedType', 'EllipsisType', 'ErasedType', 'Instance',
                                     'LiteralType', 'NoneType', 'Overloaded', 'Parameters',
                                     'ParamSpecType', 'PartialType', 'PlaceholderType',
                                     'RawExpressionType', 'TupleType', 'Type',
                                     'TypeAliasType', 'TypedDictType', 'TypeList',
                                     'TypeType', 'TypeVarLikeType', 'TypeVarTupleType',
                                     'TypeVarType', 'UnboundType', 'UninhabitedType',
                                     'UnionType', 'UnpackType', 'get_proper_type') */
    cpy_r_r22 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r23 = CPyStatic_type_visitor___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 21, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    CPyModule_mypy___types = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[1088]; /* 'T' */
    cpy_r_r26 = CPyStatic_type_visitor___globals;
    cpy_r_r27 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 53, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_r25};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 53, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r32 = CPyStatic_type_visitor___globals;
    cpy_r_r33 = CPyStatics[1088]; /* 'T' */
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r32, cpy_r_r33, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 53, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r36 = CPyStatic_type_visitor___globals;
    cpy_r_r37 = CPyStatics[900]; /* 'Generic' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 58, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r39 = CPyStatic_type_visitor___globals;
    cpy_r_r40 = CPyStatics[1088]; /* 'T' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 58, CPyStatic_type_visitor___globals);
        goto CPyL52;
    }
    cpy_r_r42 = PyObject_GetItem(cpy_r_r38, cpy_r_r41);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 58, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r43 = PyTuple_Pack(1, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 58, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r44 = CPyStatics[1267]; /* 'mypy.type_visitor' */
    cpy_r_r45 = (PyObject *)CPyType_type_visitor___TypeVisitor_template;
    cpy_r_r46 = CPyType_FromTemplate(cpy_r_r45, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 58, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r47 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r48 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r49 = PyTuple_Pack(1, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 58, CPyStatic_type_visitor___globals);
        goto CPyL53;
    }
    cpy_r_r50 = PyObject_SetAttr(cpy_r_r46, cpy_r_r47, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 58, CPyStatic_type_visitor___globals);
        goto CPyL53;
    }
    CPyType_type_visitor___TypeVisitor = (PyTypeObject *)cpy_r_r46;
    CPy_INCREF(CPyType_type_visitor___TypeVisitor);
    cpy_r_r52 = CPyStatic_type_visitor___globals;
    cpy_r_r53 = CPyStatics[1620]; /* 'TypeVisitor' */
    cpy_r_r54 = CPyDict_SetItem(cpy_r_r52, cpy_r_r53, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 58, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r56 = (PyObject *)CPyType_type_visitor___TypeVisitor;
    cpy_r_r57 = CPyStatic_type_visitor___globals;
    cpy_r_r58 = CPyStatics[1088]; /* 'T' */
    cpy_r_r59 = CPyDict_GetItem(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 151, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r60 = PyObject_GetItem(cpy_r_r56, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 151, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r61 = PyTuple_Pack(1, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 151, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r62 = CPyStatics[1267]; /* 'mypy.type_visitor' */
    cpy_r_r63 = (PyObject *)CPyType_type_visitor___SyntheticTypeVisitor_template;
    cpy_r_r64 = CPyType_FromTemplate(cpy_r_r63, cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 151, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r65 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r66 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r67 = PyTuple_Pack(1, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 151, CPyStatic_type_visitor___globals);
        goto CPyL54;
    }
    cpy_r_r68 = PyObject_SetAttr(cpy_r_r64, cpy_r_r65, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 151, CPyStatic_type_visitor___globals);
        goto CPyL54;
    }
    CPyType_type_visitor___SyntheticTypeVisitor = (PyTypeObject *)cpy_r_r64;
    CPy_INCREF(CPyType_type_visitor___SyntheticTypeVisitor);
    cpy_r_r70 = CPyStatic_type_visitor___globals;
    cpy_r_r71 = CPyStatics[5302]; /* 'SyntheticTypeVisitor' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r70, cpy_r_r71, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 151, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r74 = (PyObject *)CPyType_type_visitor___TypeVisitor;
    cpy_r_r75 = (PyObject *)CPyType_types___Type;
    cpy_r_r76 = PyObject_GetItem(cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 179, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r77 = PyTuple_Pack(1, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 179, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r78 = CPyStatics[1267]; /* 'mypy.type_visitor' */
    cpy_r_r79 = (PyObject *)CPyType_type_visitor___TypeTranslator_template;
    cpy_r_r80 = CPyType_FromTemplate(cpy_r_r79, cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 179, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r81 = CPyDef_type_visitor___TypeTranslator_trait_vtable_setup();
    if (unlikely(cpy_r_r81 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", -1, CPyStatic_type_visitor___globals);
        goto CPyL55;
    }
    cpy_r_r82 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r83 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r84 = PyTuple_Pack(1, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 179, CPyStatic_type_visitor___globals);
        goto CPyL55;
    }
    cpy_r_r85 = PyObject_SetAttr(cpy_r_r80, cpy_r_r82, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 179, CPyStatic_type_visitor___globals);
        goto CPyL55;
    }
    CPyType_type_visitor___TypeTranslator = (PyTypeObject *)cpy_r_r80;
    CPy_INCREF(CPyType_type_visitor___TypeTranslator);
    cpy_r_r87 = CPyStatic_type_visitor___globals;
    cpy_r_r88 = CPyStatics[1068]; /* 'TypeTranslator' */
    cpy_r_r89 = CPyDict_SetItem(cpy_r_r87, cpy_r_r88, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 179, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r91 = (PyObject *)CPyType_type_visitor___SyntheticTypeVisitor;
    cpy_r_r92 = CPyStatic_type_visitor___globals;
    cpy_r_r93 = CPyStatics[1088]; /* 'T' */
    cpy_r_r94 = CPyDict_GetItem(cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 300, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r95 = PyObject_GetItem(cpy_r_r91, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 300, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r96 = PyTuple_Pack(1, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 300, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r97 = CPyStatics[1267]; /* 'mypy.type_visitor' */
    cpy_r_r98 = (PyObject *)CPyType_type_visitor___TypeQuery_template;
    cpy_r_r99 = CPyType_FromTemplate(cpy_r_r98, cpy_r_r96, cpy_r_r97);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 300, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r100 = CPyDef_type_visitor___TypeQuery_trait_vtable_setup();
    if (unlikely(cpy_r_r100 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", -1, CPyStatic_type_visitor___globals);
        goto CPyL56;
    }
    cpy_r_r101 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r102 = CPyStatics[1131]; /* 'strategy' */
    cpy_r_r103 = CPyStatics[1132]; /* 'seen_aliases' */
    cpy_r_r104 = CPyStatics[1133]; /* 'skip_alias_target' */
    cpy_r_r105 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r106 = PyTuple_Pack(4, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 300, CPyStatic_type_visitor___globals);
        goto CPyL56;
    }
    cpy_r_r107 = PyObject_SetAttr(cpy_r_r99, cpy_r_r101, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 300, CPyStatic_type_visitor___globals);
        goto CPyL56;
    }
    CPyType_type_visitor___TypeQuery = (PyTypeObject *)cpy_r_r99;
    CPy_INCREF(CPyType_type_visitor___TypeQuery);
    cpy_r_r109 = CPyStatic_type_visitor___globals;
    cpy_r_r110 = CPyStatics[1619]; /* 'TypeQuery' */
    cpy_r_r111 = CPyDict_SetItem(cpy_r_r109, cpy_r_r110, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 300, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r113 = CPyStatic_type_visitor___globals;
    cpy_r_r114 = CPyStatics[1056]; /* 'ANY_STRATEGY' */
    cpy_r_r115 = CPyStatics[9015]; /* 0 */
    cpy_r_r116 = CPyDict_SetItem(cpy_r_r113, cpy_r_r114, cpy_r_r115);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 416, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r118 = CPyStatic_type_visitor___globals;
    cpy_r_r119 = CPyStatics[6218]; /* 'ALL_STRATEGY' */
    cpy_r_r120 = CPyStatics[9016]; /* 1 */
    cpy_r_r121 = CPyDict_SetItem(cpy_r_r118, cpy_r_r119, cpy_r_r120);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 418, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r123 = (PyObject *)CPyType_type_visitor___SyntheticTypeVisitor;
    cpy_r_r124 = (PyObject *)&PyBool_Type;
    cpy_r_r125 = PyObject_GetItem(cpy_r_r123, cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 421, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r126 = PyTuple_Pack(1, cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 421, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r127 = CPyStatics[1267]; /* 'mypy.type_visitor' */
    cpy_r_r128 = (PyObject *)CPyType_type_visitor___BoolTypeQuery_template;
    cpy_r_r129 = CPyType_FromTemplate(cpy_r_r128, cpy_r_r126, cpy_r_r127);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 421, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    cpy_r_r130 = CPyDef_type_visitor___BoolTypeQuery_trait_vtable_setup();
    if (unlikely(cpy_r_r130 == 2)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", -1, CPyStatic_type_visitor___globals);
        goto CPyL57;
    }
    cpy_r_r131 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r132 = CPyStatics[1131]; /* 'strategy' */
    cpy_r_r133 = CPyStatics[748]; /* 'default' */
    cpy_r_r134 = CPyStatics[1132]; /* 'seen_aliases' */
    cpy_r_r135 = CPyStatics[1133]; /* 'skip_alias_target' */
    cpy_r_r136 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r137 = PyTuple_Pack(5, cpy_r_r132, cpy_r_r133, cpy_r_r134, cpy_r_r135, cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 421, CPyStatic_type_visitor___globals);
        goto CPyL57;
    }
    cpy_r_r138 = PyObject_SetAttr(cpy_r_r129, cpy_r_r131, cpy_r_r137);
    CPy_DECREF(cpy_r_r137);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 421, CPyStatic_type_visitor___globals);
        goto CPyL57;
    }
    CPyType_type_visitor___BoolTypeQuery = (PyTypeObject *)cpy_r_r129;
    CPy_INCREF(CPyType_type_visitor___BoolTypeQuery);
    cpy_r_r140 = CPyStatic_type_visitor___globals;
    cpy_r_r141 = CPyStatics[1059]; /* 'BoolTypeQuery' */
    cpy_r_r142 = CPyDict_SetItem(cpy_r_r140, cpy_r_r141, cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/type_visitor.py", "<module>", 421, CPyStatic_type_visitor___globals);
        goto CPyL51;
    }
    return 1;
CPyL51: ;
    cpy_r_r144 = 2;
    return cpy_r_r144;
CPyL52: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL51;
CPyL53: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL51;
CPyL54: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL51;
CPyL55: ;
    CPy_DecRef(cpy_r_r80);
    goto CPyL51;
CPyL56: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL51;
CPyL57: ;
    CPy_DecRef(cpy_r_r129);
    goto CPyL51;
}
