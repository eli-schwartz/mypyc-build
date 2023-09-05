#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef erasetype___EraseTypeVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___erasetype___EraseTypeVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___erasetype___EraseTypeVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *erasetype___EraseTypeVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_erasetype___EraseTypeVisitor(void);

static PyObject *
erasetype___EraseTypeVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_erasetype___EraseTypeVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return erasetype___EraseTypeVisitor_setup(type);
}

static int
erasetype___EraseTypeVisitor_traverse(mypy___erasetype___EraseTypeVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___erasetype___EraseTypeVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___erasetype___EraseTypeVisitorObject))));
    return 0;
}

static int
erasetype___EraseTypeVisitor_clear(mypy___erasetype___EraseTypeVisitorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___erasetype___EraseTypeVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___erasetype___EraseTypeVisitorObject))));
    return 0;
}

static void
erasetype___EraseTypeVisitor_dealloc(mypy___erasetype___EraseTypeVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, erasetype___EraseTypeVisitor_dealloc)
    erasetype___EraseTypeVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem erasetype___EraseTypeVisitor_vtable[24];
static CPyVTableItem erasetype___EraseTypeVisitor_type_visitor___TypeVisitor_trait_vtable[21];
static size_t erasetype___EraseTypeVisitor_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_erasetype___EraseTypeVisitor_trait_vtable_setup(void)
{
    CPyVTableItem erasetype___EraseTypeVisitor_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(erasetype___EraseTypeVisitor_type_visitor___TypeVisitor_trait_vtable, erasetype___EraseTypeVisitor_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(erasetype___EraseTypeVisitor_type_visitor___TypeVisitor_trait_vtable));
    size_t erasetype___EraseTypeVisitor_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(erasetype___EraseTypeVisitor_type_visitor___TypeVisitor_offset_table, erasetype___EraseTypeVisitor_type_visitor___TypeVisitor_offset_table_scratch, sizeof(erasetype___EraseTypeVisitor_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem erasetype___EraseTypeVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)erasetype___EraseTypeVisitor_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)erasetype___EraseTypeVisitor_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_any,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_instance,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_tuple_type,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_typeddict_type,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_union_type,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_type_type,
        (CPyVTableItem)CPyDef_erasetype___EraseTypeVisitor___visit_type_alias_type,
    };
    memcpy(erasetype___EraseTypeVisitor_vtable, erasetype___EraseTypeVisitor_vtable_scratch, sizeof(erasetype___EraseTypeVisitor_vtable));
    return 1;
}


static PyGetSetDef erasetype___EraseTypeVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef erasetype___EraseTypeVisitor_methods[] = {
    {"visit_unbound_type",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_unbound_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_none_type",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_none_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_erased_type",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_erased_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_partial_type",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_partial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_deleted_type",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_deleted_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_parameters",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_parameters,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_overloaded",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_overloaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_literal_type",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_literal_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_type",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_type_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_erasetype___EraseTypeVisitor___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_erasetype___EraseTypeVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "EraseTypeVisitor",
    .tp_new = erasetype___EraseTypeVisitor_new,
    .tp_dealloc = (destructor)erasetype___EraseTypeVisitor_dealloc,
    .tp_traverse = (traverseproc)erasetype___EraseTypeVisitor_traverse,
    .tp_clear = (inquiry)erasetype___EraseTypeVisitor_clear,
    .tp_getset = erasetype___EraseTypeVisitor_getseters,
    .tp_methods = erasetype___EraseTypeVisitor_methods,
    .tp_members = erasetype___EraseTypeVisitor_members,
    .tp_basicsize = sizeof(mypy___erasetype___EraseTypeVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___erasetype___EraseTypeVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___erasetype___EraseTypeVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_erasetype___EraseTypeVisitor_template = &CPyType_erasetype___EraseTypeVisitor_template_;

static PyObject *
erasetype___EraseTypeVisitor_setup(PyTypeObject *type)
{
    mypy___erasetype___EraseTypeVisitorObject *self;
    self = (mypy___erasetype___EraseTypeVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = erasetype___EraseTypeVisitor_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor(void)
{
    PyObject *self = erasetype___EraseTypeVisitor_setup(CPyType_erasetype___EraseTypeVisitor);
    if (self == NULL)
        return NULL;
    return self;
}


static int
erasetype___TypeVarEraser_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef erasetype___TypeVarEraser_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___erasetype___TypeVarEraserObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___erasetype___TypeVarEraserObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *erasetype___TypeVarEraser_setup(PyTypeObject *type);
PyObject *CPyDef_erasetype___TypeVarEraser(PyObject *cpy_r_erase_id, PyObject *cpy_r_replacement);

static PyObject *
erasetype___TypeVarEraser_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_erasetype___TypeVarEraser) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = erasetype___TypeVarEraser_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_erasetype___TypeVarEraser_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
erasetype___TypeVarEraser_traverse(mypy___erasetype___TypeVarEraserObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_erase_id);
    Py_VISIT(self->_replacement);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___erasetype___TypeVarEraserObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___erasetype___TypeVarEraserObject))));
    return 0;
}

static int
erasetype___TypeVarEraser_clear(mypy___erasetype___TypeVarEraserObject *self)
{
    Py_CLEAR(self->_erase_id);
    Py_CLEAR(self->_replacement);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___erasetype___TypeVarEraserObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___erasetype___TypeVarEraserObject))));
    return 0;
}

static void
erasetype___TypeVarEraser_dealloc(mypy___erasetype___TypeVarEraserObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, erasetype___TypeVarEraser_dealloc)
    erasetype___TypeVarEraser_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem erasetype___TypeVarEraser_vtable[31];
static CPyVTableItem erasetype___TypeVarEraser_type_visitor___TypeVisitor_trait_vtable[21];
static size_t erasetype___TypeVarEraser_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_erasetype___TypeVarEraser_trait_vtable_setup(void)
{
    CPyVTableItem erasetype___TypeVarEraser_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___TypeVarEraser___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___TypeVarEraser___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___TypeVarEraser___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___TypeVarEraser___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(erasetype___TypeVarEraser_type_visitor___TypeVisitor_trait_vtable, erasetype___TypeVarEraser_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(erasetype___TypeVarEraser_type_visitor___TypeVisitor_trait_vtable));
    size_t erasetype___TypeVarEraser_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(erasetype___TypeVarEraser_type_visitor___TypeVisitor_offset_table, erasetype___TypeVarEraser_type_visitor___TypeVisitor_offset_table_scratch, sizeof(erasetype___TypeVarEraser_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem erasetype___TypeVarEraser_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)erasetype___TypeVarEraser_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)erasetype___TypeVarEraser_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_any,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_instance,
        (CPyVTableItem)CPyDef_erasetype___TypeVarEraser___visit_type_var,
        (CPyVTableItem)CPyDef_erasetype___TypeVarEraser___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_parameters,
        (CPyVTableItem)CPyDef_erasetype___TypeVarEraser___visit_type_var_tuple,
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
        (CPyVTableItem)CPyDef_erasetype___TypeVarEraser___visit_type_alias_type,
        (CPyVTableItem)CPyDef_erasetype___TypeVarEraser_____init__,
        (CPyVTableItem)CPyDef_erasetype___TypeVarEraser___visit_type_var,
        (CPyVTableItem)CPyDef_erasetype___TypeVarEraser___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_erasetype___TypeVarEraser___visit_param_spec,
        (CPyVTableItem)CPyDef_erasetype___TypeVarEraser___visit_type_alias_type,
    };
    memcpy(erasetype___TypeVarEraser_vtable, erasetype___TypeVarEraser_vtable_scratch, sizeof(erasetype___TypeVarEraser_vtable));
    return 1;
}

static PyObject *
erasetype___TypeVarEraser_get_erase_id(mypy___erasetype___TypeVarEraserObject *self, void *closure);
static int
erasetype___TypeVarEraser_set_erase_id(mypy___erasetype___TypeVarEraserObject *self, PyObject *value, void *closure);
static PyObject *
erasetype___TypeVarEraser_get_replacement(mypy___erasetype___TypeVarEraserObject *self, void *closure);
static int
erasetype___TypeVarEraser_set_replacement(mypy___erasetype___TypeVarEraserObject *self, PyObject *value, void *closure);

static PyGetSetDef erasetype___TypeVarEraser_getseters[] = {
    {"erase_id",
     (getter)erasetype___TypeVarEraser_get_erase_id, (setter)erasetype___TypeVarEraser_set_erase_id,
     NULL, NULL},
    {"replacement",
     (getter)erasetype___TypeVarEraser_get_replacement, (setter)erasetype___TypeVarEraser_set_replacement,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef erasetype___TypeVarEraser_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_erasetype___TypeVarEraser_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var",
     (PyCFunction)CPyPy_erasetype___TypeVarEraser___visit_type_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple",
     (PyCFunction)CPyPy_erasetype___TypeVarEraser___visit_type_var_tuple,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_param_spec",
     (PyCFunction)CPyPy_erasetype___TypeVarEraser___visit_param_spec,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_erasetype___TypeVarEraser___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_erasetype___TypeVarEraser_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeVarEraser",
    .tp_new = erasetype___TypeVarEraser_new,
    .tp_dealloc = (destructor)erasetype___TypeVarEraser_dealloc,
    .tp_traverse = (traverseproc)erasetype___TypeVarEraser_traverse,
    .tp_clear = (inquiry)erasetype___TypeVarEraser_clear,
    .tp_getset = erasetype___TypeVarEraser_getseters,
    .tp_methods = erasetype___TypeVarEraser_methods,
    .tp_init = erasetype___TypeVarEraser_init,
    .tp_members = erasetype___TypeVarEraser_members,
    .tp_basicsize = sizeof(mypy___erasetype___TypeVarEraserObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___erasetype___TypeVarEraserObject),
    .tp_weaklistoffset = sizeof(mypy___erasetype___TypeVarEraserObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_erasetype___TypeVarEraser_template = &CPyType_erasetype___TypeVarEraser_template_;

static PyObject *
erasetype___TypeVarEraser_setup(PyTypeObject *type)
{
    mypy___erasetype___TypeVarEraserObject *self;
    self = (mypy___erasetype___TypeVarEraserObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = erasetype___TypeVarEraser_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_erasetype___TypeVarEraser(PyObject *cpy_r_erase_id, PyObject *cpy_r_replacement)
{
    PyObject *self = erasetype___TypeVarEraser_setup(CPyType_erasetype___TypeVarEraser);
    if (self == NULL)
        return NULL;
    char res = CPyDef_erasetype___TypeVarEraser_____init__(self, cpy_r_erase_id, cpy_r_replacement);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
erasetype___TypeVarEraser_get_erase_id(mypy___erasetype___TypeVarEraserObject *self, void *closure)
{
    if (unlikely(self->_erase_id == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'erase_id' of 'TypeVarEraser' undefined");
        return NULL;
    }
    CPy_INCREF(self->_erase_id);
    PyObject *retval = self->_erase_id;
    return retval;
}

static int
erasetype___TypeVarEraser_set_erase_id(mypy___erasetype___TypeVarEraserObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeVarEraser' object attribute 'erase_id' cannot be deleted");
        return -1;
    }
    if (self->_erase_id != NULL) {
        CPy_DECREF(self->_erase_id);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_erase_id = tmp;
    return 0;
}

static PyObject *
erasetype___TypeVarEraser_get_replacement(mypy___erasetype___TypeVarEraserObject *self, void *closure)
{
    if (unlikely(self->_replacement == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'replacement' of 'TypeVarEraser' undefined");
        return NULL;
    }
    CPy_INCREF(self->_replacement);
    PyObject *retval = self->_replacement;
    return retval;
}

static int
erasetype___TypeVarEraser_set_replacement(mypy___erasetype___TypeVarEraserObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeVarEraser' object attribute 'replacement' cannot be deleted");
        return -1;
    }
    if (self->_replacement != NULL) {
        CPy_DECREF(self->_replacement);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_types___Type)))
        tmp = value;
    else {
        CPy_TypeError("mypy.types.Type", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_replacement = tmp;
    return 0;
}

PyMemberDef erasetype___LastKnownValueEraser_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___erasetype___LastKnownValueEraserObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___erasetype___LastKnownValueEraserObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *erasetype___LastKnownValueEraser_setup(PyTypeObject *type);
PyObject *CPyDef_erasetype___LastKnownValueEraser(void);

static PyObject *
erasetype___LastKnownValueEraser_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_erasetype___LastKnownValueEraser) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return erasetype___LastKnownValueEraser_setup(type);
}

static int
erasetype___LastKnownValueEraser_traverse(mypy___erasetype___LastKnownValueEraserObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___erasetype___LastKnownValueEraserObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___erasetype___LastKnownValueEraserObject))));
    return 0;
}

static int
erasetype___LastKnownValueEraser_clear(mypy___erasetype___LastKnownValueEraserObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___erasetype___LastKnownValueEraserObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___erasetype___LastKnownValueEraserObject))));
    return 0;
}

static void
erasetype___LastKnownValueEraser_dealloc(mypy___erasetype___LastKnownValueEraserObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, erasetype___LastKnownValueEraser_dealloc)
    erasetype___LastKnownValueEraser_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem erasetype___LastKnownValueEraser_vtable[29];
static CPyVTableItem erasetype___LastKnownValueEraser_type_visitor___TypeVisitor_trait_vtable[21];
static size_t erasetype___LastKnownValueEraser_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_erasetype___LastKnownValueEraser_trait_vtable_setup(void)
{
    CPyVTableItem erasetype___LastKnownValueEraser_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
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
        (CPyVTableItem)CPyDef_erasetype___LastKnownValueEraser___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___LastKnownValueEraser___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_erasetype___LastKnownValueEraser___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(erasetype___LastKnownValueEraser_type_visitor___TypeVisitor_trait_vtable, erasetype___LastKnownValueEraser_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(erasetype___LastKnownValueEraser_type_visitor___TypeVisitor_trait_vtable));
    size_t erasetype___LastKnownValueEraser_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(erasetype___LastKnownValueEraser_type_visitor___TypeVisitor_offset_table, erasetype___LastKnownValueEraser_type_visitor___TypeVisitor_offset_table_scratch, sizeof(erasetype___LastKnownValueEraser_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem erasetype___LastKnownValueEraser_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)erasetype___LastKnownValueEraser_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)erasetype___LastKnownValueEraser_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unbound_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_any,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_deleted_type,
        (CPyVTableItem)CPyDef_erasetype___LastKnownValueEraser___visit_instance,
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
        (CPyVTableItem)CPyDef_erasetype___LastKnownValueEraser___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___translate_types,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___translate_variables,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_type,
        (CPyVTableItem)CPyDef_erasetype___LastKnownValueEraser___visit_type_alias_type,
        (CPyVTableItem)CPyDef_erasetype___LastKnownValueEraser___visit_instance,
        (CPyVTableItem)CPyDef_erasetype___LastKnownValueEraser___visit_type_alias_type,
        (CPyVTableItem)CPyDef_erasetype___LastKnownValueEraser___visit_union_type,
    };
    memcpy(erasetype___LastKnownValueEraser_vtable, erasetype___LastKnownValueEraser_vtable_scratch, sizeof(erasetype___LastKnownValueEraser_vtable));
    return 1;
}


static PyGetSetDef erasetype___LastKnownValueEraser_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef erasetype___LastKnownValueEraser_methods[] = {
    {"visit_instance",
     (PyCFunction)CPyPy_erasetype___LastKnownValueEraser___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_erasetype___LastKnownValueEraser___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_erasetype___LastKnownValueEraser___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_erasetype___LastKnownValueEraser_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "LastKnownValueEraser",
    .tp_new = erasetype___LastKnownValueEraser_new,
    .tp_dealloc = (destructor)erasetype___LastKnownValueEraser_dealloc,
    .tp_traverse = (traverseproc)erasetype___LastKnownValueEraser_traverse,
    .tp_clear = (inquiry)erasetype___LastKnownValueEraser_clear,
    .tp_getset = erasetype___LastKnownValueEraser_getseters,
    .tp_methods = erasetype___LastKnownValueEraser_methods,
    .tp_members = erasetype___LastKnownValueEraser_members,
    .tp_basicsize = sizeof(mypy___erasetype___LastKnownValueEraserObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___erasetype___LastKnownValueEraserObject),
    .tp_weaklistoffset = sizeof(mypy___erasetype___LastKnownValueEraserObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_erasetype___LastKnownValueEraser_template = &CPyType_erasetype___LastKnownValueEraser_template_;

static PyObject *
erasetype___LastKnownValueEraser_setup(PyTypeObject *type)
{
    mypy___erasetype___LastKnownValueEraserObject *self;
    self = (mypy___erasetype___LastKnownValueEraserObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = erasetype___LastKnownValueEraser_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_erasetype___LastKnownValueEraser(void)
{
    PyObject *self = erasetype___LastKnownValueEraser_setup(CPyType_erasetype___LastKnownValueEraser);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *erasetype___erase_typevars_env_setup(PyTypeObject *type);
PyObject *CPyDef_erasetype___erase_typevars_env(void);

static PyObject *
erasetype___erase_typevars_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_erasetype___erase_typevars_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return erasetype___erase_typevars_env_setup(type);
}

static int
erasetype___erase_typevars_env_traverse(mypy___erasetype___erase_typevars_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_ids_to_erase);
    Py_VISIT(self->_erase_id);
    Py_VISIT(self->_t);
    return 0;
}

static int
erasetype___erase_typevars_env_clear(mypy___erasetype___erase_typevars_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_ids_to_erase);
    Py_CLEAR(self->_erase_id);
    Py_CLEAR(self->_t);
    return 0;
}

static void
erasetype___erase_typevars_env_dealloc(mypy___erasetype___erase_typevars_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, erasetype___erase_typevars_env_dealloc)
    erasetype___erase_typevars_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem erasetype___erase_typevars_env_vtable[1];
static bool
CPyDef_erasetype___erase_typevars_env_trait_vtable_setup(void)
{
    CPyVTableItem erasetype___erase_typevars_env_vtable_scratch[] = {
        NULL
    };
    memcpy(erasetype___erase_typevars_env_vtable, erasetype___erase_typevars_env_vtable_scratch, sizeof(erasetype___erase_typevars_env_vtable));
    return 1;
}

static PyMethodDef erasetype___erase_typevars_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_erasetype___erase_typevars_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "erase_typevars_env",
    .tp_new = erasetype___erase_typevars_env_new,
    .tp_dealloc = (destructor)erasetype___erase_typevars_env_dealloc,
    .tp_traverse = (traverseproc)erasetype___erase_typevars_env_traverse,
    .tp_clear = (inquiry)erasetype___erase_typevars_env_clear,
    .tp_methods = erasetype___erase_typevars_env_methods,
    .tp_basicsize = sizeof(mypy___erasetype___erase_typevars_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_erasetype___erase_typevars_env_template = &CPyType_erasetype___erase_typevars_env_template_;

static PyObject *
erasetype___erase_typevars_env_setup(PyTypeObject *type)
{
    mypy___erasetype___erase_typevars_envObject *self;
    self = (mypy___erasetype___erase_typevars_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = erasetype___erase_typevars_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_erasetype___erase_typevars_env(void)
{
    PyObject *self = erasetype___erase_typevars_env_setup(CPyType_erasetype___erase_typevars_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__erasetype___erase_id_erase_typevars_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_erasetype___erase_id_erase_typevars_obj_____get__(self, instance, owner);
}
PyMemberDef erasetype___erase_id_erase_typevars_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___erasetype___erase_id_erase_typevars_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___erasetype___erase_id_erase_typevars_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *erasetype___erase_id_erase_typevars_obj_setup(PyTypeObject *type);
PyObject *CPyDef_erasetype___erase_id_erase_typevars_obj(void);

static PyObject *
erasetype___erase_id_erase_typevars_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_erasetype___erase_id_erase_typevars_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return erasetype___erase_id_erase_typevars_obj_setup(type);
}

static int
erasetype___erase_id_erase_typevars_obj_traverse(mypy___erasetype___erase_id_erase_typevars_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___erasetype___erase_id_erase_typevars_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___erasetype___erase_id_erase_typevars_objObject))));
    return 0;
}

static int
erasetype___erase_id_erase_typevars_obj_clear(mypy___erasetype___erase_id_erase_typevars_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___erasetype___erase_id_erase_typevars_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___erasetype___erase_id_erase_typevars_objObject))));
    return 0;
}

static void
erasetype___erase_id_erase_typevars_obj_dealloc(mypy___erasetype___erase_id_erase_typevars_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, erasetype___erase_id_erase_typevars_obj_dealloc)
    erasetype___erase_id_erase_typevars_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem erasetype___erase_id_erase_typevars_obj_vtable[2];
static bool
CPyDef_erasetype___erase_id_erase_typevars_obj_trait_vtable_setup(void)
{
    CPyVTableItem erasetype___erase_id_erase_typevars_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_erasetype___erase_id_erase_typevars_obj_____call__,
        (CPyVTableItem)CPyDef_erasetype___erase_id_erase_typevars_obj_____get__,
    };
    memcpy(erasetype___erase_id_erase_typevars_obj_vtable, erasetype___erase_id_erase_typevars_obj_vtable_scratch, sizeof(erasetype___erase_id_erase_typevars_obj_vtable));
    return 1;
}

static PyMethodDef erasetype___erase_id_erase_typevars_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_erasetype___erase_id_erase_typevars_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_erasetype___erase_id_erase_typevars_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_erasetype___erase_id_erase_typevars_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "erase_id_erase_typevars_obj",
    .tp_new = erasetype___erase_id_erase_typevars_obj_new,
    .tp_dealloc = (destructor)erasetype___erase_id_erase_typevars_obj_dealloc,
    .tp_traverse = (traverseproc)erasetype___erase_id_erase_typevars_obj_traverse,
    .tp_clear = (inquiry)erasetype___erase_id_erase_typevars_obj_clear,
    .tp_methods = erasetype___erase_id_erase_typevars_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__erasetype___erase_id_erase_typevars_obj,
    .tp_members = erasetype___erase_id_erase_typevars_obj_members,
    .tp_basicsize = sizeof(mypy___erasetype___erase_id_erase_typevars_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___erasetype___erase_id_erase_typevars_objObject),
    .tp_weaklistoffset = sizeof(mypy___erasetype___erase_id_erase_typevars_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___erasetype___erase_id_erase_typevars_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_erasetype___erase_id_erase_typevars_obj_template = &CPyType_erasetype___erase_id_erase_typevars_obj_template_;

static PyObject *
erasetype___erase_id_erase_typevars_obj_setup(PyTypeObject *type)
{
    mypy___erasetype___erase_id_erase_typevars_objObject *self;
    self = (mypy___erasetype___erase_id_erase_typevars_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = erasetype___erase_id_erase_typevars_obj_vtable;
    self->vectorcall = CPyPy_erasetype___erase_id_erase_typevars_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_erasetype___erase_id_erase_typevars_obj(void)
{
    PyObject *self = erasetype___erase_id_erase_typevars_obj_setup(CPyType_erasetype___erase_id_erase_typevars_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *erasetype___replace_meta_vars_env_setup(PyTypeObject *type);
PyObject *CPyDef_erasetype___replace_meta_vars_env(void);

static PyObject *
erasetype___replace_meta_vars_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_erasetype___replace_meta_vars_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return erasetype___replace_meta_vars_env_setup(type);
}

static int
erasetype___replace_meta_vars_env_traverse(mypy___erasetype___replace_meta_vars_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_t);
    Py_VISIT(self->_target_type);
    return 0;
}

static int
erasetype___replace_meta_vars_env_clear(mypy___erasetype___replace_meta_vars_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_t);
    Py_CLEAR(self->_target_type);
    return 0;
}

static void
erasetype___replace_meta_vars_env_dealloc(mypy___erasetype___replace_meta_vars_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, erasetype___replace_meta_vars_env_dealloc)
    erasetype___replace_meta_vars_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem erasetype___replace_meta_vars_env_vtable[1];
static bool
CPyDef_erasetype___replace_meta_vars_env_trait_vtable_setup(void)
{
    CPyVTableItem erasetype___replace_meta_vars_env_vtable_scratch[] = {
        NULL
    };
    memcpy(erasetype___replace_meta_vars_env_vtable, erasetype___replace_meta_vars_env_vtable_scratch, sizeof(erasetype___replace_meta_vars_env_vtable));
    return 1;
}

static PyMethodDef erasetype___replace_meta_vars_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_erasetype___replace_meta_vars_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "replace_meta_vars_env",
    .tp_new = erasetype___replace_meta_vars_env_new,
    .tp_dealloc = (destructor)erasetype___replace_meta_vars_env_dealloc,
    .tp_traverse = (traverseproc)erasetype___replace_meta_vars_env_traverse,
    .tp_clear = (inquiry)erasetype___replace_meta_vars_env_clear,
    .tp_methods = erasetype___replace_meta_vars_env_methods,
    .tp_basicsize = sizeof(mypy___erasetype___replace_meta_vars_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_erasetype___replace_meta_vars_env_template = &CPyType_erasetype___replace_meta_vars_env_template_;

static PyObject *
erasetype___replace_meta_vars_env_setup(PyTypeObject *type)
{
    mypy___erasetype___replace_meta_vars_envObject *self;
    self = (mypy___erasetype___replace_meta_vars_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = erasetype___replace_meta_vars_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_erasetype___replace_meta_vars_env(void)
{
    PyObject *self = erasetype___replace_meta_vars_env_setup(CPyType_erasetype___replace_meta_vars_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__erasetype_____mypyc_lambda__0_replace_meta_vars_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_____get__(self, instance, owner);
}
PyMemberDef erasetype_____mypyc_lambda__0_replace_meta_vars_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *erasetype_____mypyc_lambda__0_replace_meta_vars_obj_setup(PyTypeObject *type);
PyObject *CPyDef_erasetype_____mypyc_lambda__0_replace_meta_vars_obj(void);

static PyObject *
erasetype_____mypyc_lambda__0_replace_meta_vars_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_erasetype_____mypyc_lambda__0_replace_meta_vars_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return erasetype_____mypyc_lambda__0_replace_meta_vars_obj_setup(type);
}

static int
erasetype_____mypyc_lambda__0_replace_meta_vars_obj_traverse(mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject))));
    return 0;
}

static int
erasetype_____mypyc_lambda__0_replace_meta_vars_obj_clear(mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject))));
    return 0;
}

static void
erasetype_____mypyc_lambda__0_replace_meta_vars_obj_dealloc(mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, erasetype_____mypyc_lambda__0_replace_meta_vars_obj_dealloc)
    erasetype_____mypyc_lambda__0_replace_meta_vars_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem erasetype_____mypyc_lambda__0_replace_meta_vars_obj_vtable[2];
static bool
CPyDef_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_trait_vtable_setup(void)
{
    CPyVTableItem erasetype_____mypyc_lambda__0_replace_meta_vars_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_____call__,
        (CPyVTableItem)CPyDef_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_____get__,
    };
    memcpy(erasetype_____mypyc_lambda__0_replace_meta_vars_obj_vtable, erasetype_____mypyc_lambda__0_replace_meta_vars_obj_vtable_scratch, sizeof(erasetype_____mypyc_lambda__0_replace_meta_vars_obj_vtable));
    return 1;
}

static PyMethodDef erasetype_____mypyc_lambda__0_replace_meta_vars_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_replace_meta_vars_obj",
    .tp_new = erasetype_____mypyc_lambda__0_replace_meta_vars_obj_new,
    .tp_dealloc = (destructor)erasetype_____mypyc_lambda__0_replace_meta_vars_obj_dealloc,
    .tp_traverse = (traverseproc)erasetype_____mypyc_lambda__0_replace_meta_vars_obj_traverse,
    .tp_clear = (inquiry)erasetype_____mypyc_lambda__0_replace_meta_vars_obj_clear,
    .tp_methods = erasetype_____mypyc_lambda__0_replace_meta_vars_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__erasetype_____mypyc_lambda__0_replace_meta_vars_obj,
    .tp_members = erasetype_____mypyc_lambda__0_replace_meta_vars_obj_members,
    .tp_basicsize = sizeof(mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject),
    .tp_weaklistoffset = sizeof(mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_template = &CPyType_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_template_;

static PyObject *
erasetype_____mypyc_lambda__0_replace_meta_vars_obj_setup(PyTypeObject *type)
{
    mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject *self;
    self = (mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = erasetype_____mypyc_lambda__0_replace_meta_vars_obj_vtable;
    self->vectorcall = CPyPy_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_erasetype_____mypyc_lambda__0_replace_meta_vars_obj(void)
{
    PyObject *self = erasetype_____mypyc_lambda__0_replace_meta_vars_obj_setup(CPyType_erasetype_____mypyc_lambda__0_replace_meta_vars_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef erasetypemodule_methods[] = {
    {"erase_type", (PyCFunction)CPyPy_erasetype___erase_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"erase_typevars", (PyCFunction)CPyPy_erasetype___erase_typevars, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"replace_meta_vars", (PyCFunction)CPyPy_erasetype___replace_meta_vars, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"remove_instance_last_known_values", (PyCFunction)CPyPy_erasetype___remove_instance_last_known_values, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef erasetypemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.erasetype",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    erasetypemodule_methods
};

PyObject *CPyInit_mypy___erasetype(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___erasetype_internal) {
        Py_INCREF(CPyModule_mypy___erasetype_internal);
        return CPyModule_mypy___erasetype_internal;
    }
    CPyModule_mypy___erasetype_internal = PyModule_Create(&erasetypemodule);
    if (unlikely(CPyModule_mypy___erasetype_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___erasetype_internal, "__name__");
    CPyStatic_erasetype___globals = PyModule_GetDict(CPyModule_mypy___erasetype_internal);
    if (unlikely(CPyStatic_erasetype___globals == NULL))
        goto fail;
    CPyType_erasetype___erase_typevars_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_erasetype___erase_typevars_env_template, NULL, modname);
    if (unlikely(!CPyType_erasetype___erase_typevars_env))
        goto fail;
    CPyType_erasetype___erase_id_erase_typevars_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_erasetype___erase_id_erase_typevars_obj_template, NULL, modname);
    if (unlikely(!CPyType_erasetype___erase_id_erase_typevars_obj))
        goto fail;
    CPyType_erasetype___replace_meta_vars_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_erasetype___replace_meta_vars_env_template, NULL, modname);
    if (unlikely(!CPyType_erasetype___replace_meta_vars_env))
        goto fail;
    CPyType_erasetype_____mypyc_lambda__0_replace_meta_vars_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_template, NULL, modname);
    if (unlikely(!CPyType_erasetype_____mypyc_lambda__0_replace_meta_vars_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_erasetype_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___erasetype_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___erasetype_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_erasetype___EraseTypeVisitor);
    Py_CLEAR(CPyType_erasetype___TypeVarEraser);
    Py_CLEAR(CPyType_erasetype___LastKnownValueEraser);
    Py_CLEAR(CPyType_erasetype___erase_typevars_env);
    Py_CLEAR(CPyType_erasetype___erase_id_erase_typevars_obj);
    Py_CLEAR(CPyType_erasetype___replace_meta_vars_env);
    Py_CLEAR(CPyType_erasetype_____mypyc_lambda__0_replace_meta_vars_obj);
    return NULL;
}

PyObject *CPyDef_erasetype___erase_type(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "erase_type", 51, CPyStatic_erasetype___globals);
        goto CPyL7;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "erase_type", 51, CPyStatic_erasetype___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL7;
    }
    cpy_r_typ = cpy_r_r1;
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___ProperType)))
        cpy_r_r2 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "erase_type", 52, CPyStatic_erasetype___globals, "mypy.types.ProperType", cpy_r_typ);
        goto CPyL7;
    }
    cpy_r_r3 = CPyDef_erasetype___EraseTypeVisitor();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "erase_type", 52, CPyStatic_erasetype___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPY_GET_METHOD(cpy_r_r2, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r2, cpy_r_r3); /* accept */
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "erase_type", 52, CPyStatic_erasetype___globals);
        goto CPyL7;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r4, CPyType_types___ProperType)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "erase_type", 52, CPyStatic_erasetype___globals, "mypy.types.ProperType", cpy_r_r4);
        goto CPyL7;
    }
    return cpy_r_r5;
CPyL7: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
}

PyObject *CPyPy_erasetype___erase_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:erase_type", kwlist, 0};
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
    PyObject *retval = CPyDef_erasetype___erase_type(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "erase_type", 39, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_unbound_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = NULL;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_types___AnyType(10, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_unbound_type", 58, CPyStatic_erasetype___globals);
        goto CPyL2;
    }
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_unbound_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_unbound_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_unbound_type", 56, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_unbound_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_unbound_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unbound_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnboundType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnboundType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_unbound_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_unbound_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_any(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_any", 60, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_none_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_none_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_none_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_none_type", 63, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_none_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_none_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_none_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_none_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___NoneType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.NoneType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_none_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_none_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_uninhabited_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_uninhabited_type", 66, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_erased_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_erased_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_erased_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_erased_type", 69, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_erased_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_erased_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_erased_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_erased_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ErasedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ErasedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_erased_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_erased_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_partial_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_partial_type", 74, CPyStatic_erasetype___globals);
        goto CPyL4;
    }
    cpy_r_r3 = _PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_partial_type", 74, CPyStatic_erasetype___globals);
        goto CPyL4;
    }
    CPy_Raise(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_partial_type", 74, CPyStatic_erasetype___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_partial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_partial_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_partial_type", 72, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_partial_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_partial_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_partial_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_partial_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___PartialType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.PartialType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_partial_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_partial_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_deleted_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_deleted_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_deleted_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_deleted_type", 76, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_deleted_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_deleted_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_deleted_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___DeletedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.DeletedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_deleted_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_deleted_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = NULL;
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_types___AnyType(12, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_instance", 80, CPyStatic_erasetype___globals);
        goto CPyL6;
    }
    cpy_r_r6 = PyList_New(1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_instance", 80, CPyStatic_erasetype___globals);
        goto CPyL7;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    *(PyObject * *)cpy_r_r8 = cpy_r_r5;
    cpy_r_r9 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = CPySequence_Multiply(cpy_r_r6, cpy_r_r12);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_instance", 80, CPyStatic_erasetype___globals);
        goto CPyL6;
    }
    cpy_r_r14 = ((mypy___types___InstanceObject *)cpy_r_t)->_line;
    CPyTagged_INCREF(cpy_r_r14);
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = NULL;
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyDef_types___Instance(cpy_r_r0, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_instance", 80, CPyStatic_erasetype___globals);
        goto CPyL5;
    }
    return cpy_r_r18;
CPyL5: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL5;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_instance(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_instance", 79, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = NULL;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_types___AnyType(12, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_var", 83, CPyStatic_erasetype___globals);
        goto CPyL2;
    }
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_type_var(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_var", 82, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = NULL;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_types___AnyType(12, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_param_spec", 86, CPyStatic_erasetype___globals);
        goto CPyL2;
    }
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_param_spec(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_param_spec", 85, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_parameters(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[2020]; /* 'Parameters should have been bound to a class' */
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_parameters", 89, CPyStatic_erasetype___globals);
        goto CPyL4;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_r0};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_parameters", 89, CPyStatic_erasetype___globals);
        goto CPyL4;
    }
    CPy_Raise(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_parameters", 89, CPyStatic_erasetype___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_parameters(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_parameters", 88, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_parameters__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_parameters(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_parameters__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_parameters__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Parameters))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Parameters", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_parameters__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_parameters__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = NULL;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_types___AnyType(12, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_var_tuple", 92, CPyStatic_erasetype___globals);
        goto CPyL2;
    }
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_type_var_tuple(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_var_tuple", 91, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = NULL;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_types___AnyType(12, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_unpack_type", 95, CPyStatic_erasetype___globals);
        goto CPyL2;
    }
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_unpack_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_unpack_type", 94, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_any_type;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    CPyPtr cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    cpy_r_r0 = NULL;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_types___AnyType(12, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_callable_type", 99, CPyStatic_erasetype___globals);
        goto CPyL12;
    }
    cpy_r_any_type = cpy_r_r4;
    cpy_r_r5 = PyList_New(2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_callable_type", 101, CPyStatic_erasetype___globals);
        goto CPyL13;
    }
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r5)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    CPy_INCREF(cpy_r_any_type);
    *(PyObject * *)cpy_r_r7 = cpy_r_any_type;
    cpy_r_r8 = cpy_r_r7 + 8;
    CPy_INCREF(cpy_r_any_type);
    *(PyObject * *)cpy_r_r8 = cpy_r_any_type;
    cpy_r_r9 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r9 == NULL)) {
        goto CPyL14;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_callable_type", 102, CPyStatic_erasetype___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r11 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r11 == NULL)) {
        goto CPyL15;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_callable_type", 102, CPyStatic_erasetype___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r13 = PyList_New(2);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_callable_type", 102, CPyStatic_erasetype___globals);
        goto CPyL16;
    }
    cpy_r_r14 = (CPyPtr)&((PyListObject *)cpy_r_r13)->ob_item;
    cpy_r_r15 = *(CPyPtr *)cpy_r_r14;
    CPy_INCREF(cpy_r_r9);
    *(PyObject * *)cpy_r_r15 = cpy_r_r9;
    cpy_r_r16 = cpy_r_r15 + 8;
    CPy_INCREF(cpy_r_r11);
    *(PyObject * *)cpy_r_r16 = cpy_r_r11;
    cpy_r_r17 = PyList_New(2);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_callable_type", 103, CPyStatic_erasetype___globals);
        goto CPyL17;
    }
    cpy_r_r18 = Py_None;
    cpy_r_r19 = Py_None;
    cpy_r_r20 = (CPyPtr)&((PyListObject *)cpy_r_r17)->ob_item;
    cpy_r_r21 = *(CPyPtr *)cpy_r_r20;
    CPy_INCREF(cpy_r_r18);
    *(PyObject * *)cpy_r_r21 = cpy_r_r18;
    cpy_r_r22 = cpy_r_r21 + 8;
    CPy_INCREF(cpy_r_r19);
    *(PyObject * *)cpy_r_r22 = cpy_r_r19;
    cpy_r_r23 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = NULL;
    cpy_r_r25 = NULL;
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPY_INT_TAG;
    cpy_r_r28 = CPY_INT_TAG;
    cpy_r_r29 = NULL;
    cpy_r_r30 = 2;
    cpy_r_r31 = NULL;
    cpy_r_r32 = NULL;
    cpy_r_r33 = NULL;
    cpy_r_r34 = 2;
    cpy_r_r35 = 2;
    cpy_r_r36 = CPyDef_types___CallableType(cpy_r_r5, cpy_r_r13, cpy_r_r17, cpy_r_any_type, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28, 1, 1, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_any_type);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_callable_type", 100, CPyStatic_erasetype___globals);
        goto CPyL12;
    }
    return cpy_r_r36;
CPyL12: ;
    cpy_r_r37 = NULL;
    return cpy_r_r37;
CPyL13: ;
    CPy_DecRef(cpy_r_any_type);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r5);
    goto CPyL3;
CPyL15: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r5);
    goto CPyL6;
CPyL16: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r5);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r13);
    goto CPyL12;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_callable_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_callable_type", 97, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_overloaded(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___types___OverloadedObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_types___Instance___accept(cpy_r_r0, cpy_r_self);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_overloaded", 111, CPyStatic_erasetype___globals);
        goto CPyL3;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___ProperType)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_overloaded", 111, CPyStatic_erasetype___globals, "mypy.types.ProperType", cpy_r_r1);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_overloaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_overloaded(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_overloaded", 110, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_overloaded__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_overloaded(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_overloaded__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_overloaded__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Overloaded))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Overloaded", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_overloaded__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_overloaded__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_partial_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_types___Instance___accept(cpy_r_r0, cpy_r_self);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_tuple_type", 114, CPyStatic_erasetype___globals);
        goto CPyL3;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___ProperType)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_tuple_type", 114, CPyStatic_erasetype___globals, "mypy.types.ProperType", cpy_r_r1);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_tuple_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_tuple_type", 113, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_types___Instance___accept(cpy_r_r0, cpy_r_self);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_typeddict_type", 117, CPyStatic_erasetype___globals);
        goto CPyL3;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___ProperType)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_typeddict_type", 117, CPyStatic_erasetype___globals, "mypy.types.ProperType", cpy_r_r1);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_typeddict_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_typeddict_type", 116, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_literal_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_literal_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_literal_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_literal_type", 119, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_literal_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_literal_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_literal_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_literal_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___LiteralType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.LiteralType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_literal_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_literal_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
    PyObject *cpy_r_item;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_erased_items;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 126, CPyStatic_erasetype___globals);
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
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 126, CPyStatic_erasetype___globals, "mypy.types.Type", cpy_r_r9);
        goto CPyL13;
    }
    cpy_r_item = cpy_r_r10;
    cpy_r_r11 = CPyDef_erasetype___erase_type(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 126, CPyStatic_erasetype___globals);
        goto CPyL13;
    }
    cpy_r_r12 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 126, CPyStatic_erasetype___globals);
        goto CPyL13;
    }
    cpy_r_r13 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r13;
    goto CPyL2;
CPyL7: ;
    cpy_r_erased_items = cpy_r_r3;
    cpy_r_r14 = CPyStatics[9357]; /* ('make_simplified_union',) */
    cpy_r_r15 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r16 = CPyStatic_erasetype___globals;
    cpy_r_r17 = CPyImport_ImportFromMany(cpy_r_r15, cpy_r_r14, cpy_r_r14, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 127, CPyStatic_erasetype___globals);
        goto CPyL14;
    }
    CPyModule_mypy___typeops = cpy_r_r17;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r18 = CPY_INT_TAG;
    cpy_r_r19 = CPY_INT_TAG;
    cpy_r_r20 = 2;
    cpy_r_r21 = 2;
    cpy_r_r22 = CPyDef_typeops___make_simplified_union(cpy_r_erased_items, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_erased_items);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 129, CPyStatic_erasetype___globals);
        goto CPyL10;
    }
    return cpy_r_r22;
CPyL10: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_erased_items);
    goto CPyL10;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_union_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 125, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_type_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_type", 132, CPyStatic_erasetype___globals);
        goto CPyL4;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___ProperType)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_type_type", 132, CPyStatic_erasetype___globals, "mypy.types.ProperType", cpy_r_r1);
        goto CPyL4;
    }
    cpy_r_r3 = ((mypy___types___TypeTypeObject *)cpy_r_t)->_line;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_types___TypeType___make_normalized(cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_type", 132, CPyStatic_erasetype___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_type_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_type_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_type", 131, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_type_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_type_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_type_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_type_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[2021]; /* ('Type aliases should be expanded before accepting this '
                                    'visitor') */
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_alias_type", 135, CPyStatic_erasetype___globals);
        goto CPyL4;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_r0};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_alias_type", 135, CPyStatic_erasetype___globals);
        goto CPyL4;
    }
    CPy_Raise(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_alias_type", 135, CPyStatic_erasetype___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_type_alias_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_alias_type", 134, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___EraseTypeVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___EraseTypeVisitor___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___EraseTypeVisitor___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___EraseTypeVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.EraseTypeVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___EraseTypeVisitor___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___erase_id_erase_typevars_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_erasetype___erase_id_erase_typevars_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_erasetype___erase_id_erase_typevars_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "__get__", -1, CPyStatic_erasetype___globals);
    return NULL;
}

char CPyDef_erasetype___erase_id_erase_typevars_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_erase_id;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypy___erasetype___erase_id_erase_typevars_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/erasetype.py", "erase_id", "erase_id_erase_typevars_obj", "__mypyc_env__", 143, CPyStatic_erasetype___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___erasetype___erase_typevars_envObject *)cpy_r_r0)->_erase_id;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/erasetype.py", "erase_id", "erase_typevars_env", "erase_id", -1, CPyStatic_erasetype___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_erase_id = cpy_r_r1;
    CPy_DECREF(cpy_r_erase_id);
    cpy_r_r2 = ((mypy___erasetype___erase_typevars_envObject *)cpy_r_r0)->_ids_to_erase;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/erasetype.py", "erase_id", "erase_typevars_env", "ids_to_erase", 144, CPyStatic_erasetype___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 == cpy_r_r3;
    CPy_DECREF(cpy_r_r2);
    if (cpy_r_r4) {
        goto CPyL10;
    } else
        goto CPyL5;
CPyL4: ;
    return 1;
CPyL5: ;
    cpy_r_r5 = ((mypy___erasetype___erase_typevars_envObject *)cpy_r_r0)->_ids_to_erase;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'ids_to_erase' of 'erase_typevars_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "erase_id", 146, CPyStatic_erasetype___globals);
        goto CPyL8;
    }
CPyL6: ;
    cpy_r_r6 = PySequence_Contains(cpy_r_r5, cpy_r_id);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/erasetype.py", "erase_id", 146, CPyStatic_erasetype___globals);
        goto CPyL8;
    }
    cpy_r_r8 = cpy_r_r6;
    return cpy_r_r8;
CPyL8: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_erasetype___erase_id_erase_typevars_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"id", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_id;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_id)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_id;
    if (likely(Py_TYPE(obj_id) == CPyType_types___TypeVarId))
        arg_id = obj_id;
    else {
        CPy_TypeError("mypy.types.TypeVarId", obj_id); 
        goto fail;
    }
    char retval = CPyDef_erasetype___erase_id_erase_typevars_obj_____call__(arg___mypyc_self__, arg_id);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "erase_id", 143, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___erase_typevars(PyObject *cpy_r_t, PyObject *cpy_r_ids_to_erase) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    if (cpy_r_ids_to_erase != NULL) goto CPyL14;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_ids_to_erase = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyDef_erasetype___erase_typevars_env();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "erase_typevars", 138, CPyStatic_erasetype___globals);
        goto CPyL15;
    }
    if (((mypy___erasetype___erase_typevars_envObject *)cpy_r_r1)->_ids_to_erase != NULL) {
        CPy_DECREF(((mypy___erasetype___erase_typevars_envObject *)cpy_r_r1)->_ids_to_erase);
    }
    ((mypy___erasetype___erase_typevars_envObject *)cpy_r_r1)->_ids_to_erase = cpy_r_ids_to_erase;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/erasetype.py", "erase_typevars", 138, CPyStatic_erasetype___globals);
        goto CPyL16;
    }
    cpy_r_r3 = CPyDef_erasetype___erase_id_erase_typevars_obj();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "erase_typevars", 143, CPyStatic_erasetype___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r1);
    if (((mypy___erasetype___erase_id_erase_typevars_objObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___erasetype___erase_id_erase_typevars_objObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___erasetype___erase_id_erase_typevars_objObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r1;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/erasetype.py", "erase_typevars", 143, CPyStatic_erasetype___globals);
        goto CPyL17;
    }
    if (((mypy___erasetype___erase_typevars_envObject *)cpy_r_r1)->_erase_id != NULL) {
        CPy_DECREF(((mypy___erasetype___erase_typevars_envObject *)cpy_r_r1)->_erase_id);
    }
    ((mypy___erasetype___erase_typevars_envObject *)cpy_r_r1)->_erase_id = cpy_r_r3;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/erasetype.py", "erase_typevars", 143, CPyStatic_erasetype___globals);
        goto CPyL16;
    }
    cpy_r_r6 = ((mypy___erasetype___erase_typevars_envObject *)cpy_r_r1)->_erase_id;
    if (unlikely(cpy_r_r6 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'erase_id' of 'erase_typevars_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r6);
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "erase_typevars", 148, CPyStatic_erasetype___globals);
        goto CPyL13;
    }
CPyL8: ;
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPyDef_types___AnyType(12, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "erase_typevars", 148, CPyStatic_erasetype___globals);
        goto CPyL18;
    }
    cpy_r_r12 = CPyDef_erasetype___TypeVarEraser(cpy_r_r6, cpy_r_r11);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "erase_typevars", 148, CPyStatic_erasetype___globals);
        goto CPyL13;
    }
    cpy_r_r13 = CPY_GET_METHOD(cpy_r_t, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_r12); /* accept */
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "erase_typevars", 148, CPyStatic_erasetype___globals);
        goto CPyL13;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_types___Type)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "erase_typevars", 148, CPyStatic_erasetype___globals, "mypy.types.Type", cpy_r_r13);
        goto CPyL13;
    }
    return cpy_r_r14;
CPyL13: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL14: ;
    CPy_INCREF(cpy_r_ids_to_erase);
    goto CPyL2;
CPyL15: ;
    CPy_DecRef(cpy_r_ids_to_erase);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
}

PyObject *CPyPy_erasetype___erase_typevars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", "ids_to_erase", 0};
    static CPyArg_Parser parser = {"O|O:erase_typevars", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_ids_to_erase = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_ids_to_erase)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    PyObject *arg_ids_to_erase;
    if (obj_ids_to_erase == NULL) {
        arg_ids_to_erase = NULL;
        goto __LL2027;
    }
    arg_ids_to_erase = obj_ids_to_erase;
    if (arg_ids_to_erase != NULL) goto __LL2027;
    if (obj_ids_to_erase == Py_None)
        arg_ids_to_erase = obj_ids_to_erase;
    else {
        arg_ids_to_erase = NULL;
    }
    if (arg_ids_to_erase != NULL) goto __LL2027;
    CPy_TypeError("object or None", obj_ids_to_erase); 
    goto fail;
__LL2027: ;
    PyObject *retval = CPyDef_erasetype___erase_typevars(arg_t, arg_ids_to_erase);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "erase_typevars", 138, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "__get__", -1, CPyStatic_erasetype___globals);
    return NULL;
}

char CPyDef_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_id) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/erasetype.py", "<lambda>", "__mypyc_lambda__0_replace_meta_vars_obj", "__mypyc_env__", 153, CPyStatic_erasetype___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL4;
CPyL1: ;
    cpy_r_r1 = CPyDef_types___TypeVarId___is_meta_var(cpy_r_id);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/erasetype.py", "<lambda>", 153, CPyStatic_erasetype___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
CPyL4: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"id", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_id;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_id)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_id;
    if (likely(Py_TYPE(obj_id) == CPyType_types___TypeVarId))
        arg_id = obj_id;
    else {
        CPy_TypeError("mypy.types.TypeVarId", obj_id); 
        goto fail;
    }
    char retval = CPyDef_erasetype_____mypyc_lambda__0_replace_meta_vars_obj_____call__(arg___mypyc_self__, arg_id);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "<lambda>", 153, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___replace_meta_vars(PyObject *cpy_r_t, PyObject *cpy_r_target_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_erasetype___replace_meta_vars_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "replace_meta_vars", 151, CPyStatic_erasetype___globals);
        goto CPyL7;
    }
    cpy_r_r1 = CPyDef_erasetype_____mypyc_lambda__0_replace_meta_vars_obj();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "replace_meta_vars", 153, CPyStatic_erasetype___globals);
        goto CPyL8;
    }
    if (((mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject *)cpy_r_r1)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject *)cpy_r_r1)->___mypyc_env__);
    }
    ((mypy___erasetype_____mypyc_lambda__0_replace_meta_vars_objObject *)cpy_r_r1)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/erasetype.py", "replace_meta_vars", 153, CPyStatic_erasetype___globals);
        goto CPyL9;
    }
    cpy_r_r3 = CPyDef_erasetype___TypeVarEraser(cpy_r_r1, cpy_r_target_type);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "replace_meta_vars", 153, CPyStatic_erasetype___globals);
        goto CPyL7;
    }
    cpy_r_r4 = CPY_GET_METHOD(cpy_r_t, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_r3); /* accept */
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "replace_meta_vars", 153, CPyStatic_erasetype___globals);
        goto CPyL7;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r4, CPyType_types___Type)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "replace_meta_vars", 153, CPyStatic_erasetype___globals, "mypy.types.Type", cpy_r_r4);
        goto CPyL7;
    }
    return cpy_r_r5;
CPyL7: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
}

PyObject *CPyPy_erasetype___replace_meta_vars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", "target_type", 0};
    static CPyArg_Parser parser = {"OO:replace_meta_vars", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_target_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_target_type)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    PyObject *arg_target_type;
    if (likely(PyObject_TypeCheck(obj_target_type, CPyType_types___Type)))
        arg_target_type = obj_target_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_target_type); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___replace_meta_vars(arg_t, arg_target_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "replace_meta_vars", 151, CPyStatic_erasetype___globals);
    return NULL;
}

char CPyDef_erasetype___TypeVarEraser_____init__(PyObject *cpy_r_self, PyObject *cpy_r_erase_id, PyObject *cpy_r_replacement) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    CPy_INCREF(cpy_r_erase_id);
    if (((mypy___erasetype___TypeVarEraserObject *)cpy_r_self)->_erase_id != NULL) {
        CPy_DECREF(((mypy___erasetype___TypeVarEraserObject *)cpy_r_self)->_erase_id);
    }
    ((mypy___erasetype___TypeVarEraserObject *)cpy_r_self)->_erase_id = cpy_r_erase_id;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/erasetype.py", "__init__", 160, CPyStatic_erasetype___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_replacement);
    if (((mypy___erasetype___TypeVarEraserObject *)cpy_r_self)->_replacement != NULL) {
        CPy_DECREF(((mypy___erasetype___TypeVarEraserObject *)cpy_r_self)->_replacement);
    }
    ((mypy___erasetype___TypeVarEraserObject *)cpy_r_self)->_replacement = cpy_r_replacement;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/erasetype.py", "__init__", 161, CPyStatic_erasetype___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_erasetype___TypeVarEraser_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"erase_id", "replacement", 0};
    PyObject *obj_erase_id;
    PyObject *obj_replacement;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_erase_id, &obj_replacement)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___TypeVarEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.TypeVarEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_erase_id = obj_erase_id;
    PyObject *arg_replacement;
    if (likely(PyObject_TypeCheck(obj_replacement, CPyType_types___Type)))
        arg_replacement = obj_replacement;
    else {
        CPy_TypeError("mypy.types.Type", obj_replacement); 
        goto fail;
    }
    char retval = CPyDef_erasetype___TypeVarEraser_____init__(arg_self, arg_erase_id, arg_replacement);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "__init__", 159, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___TypeVarEraser___visit_type_var(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___types___TypeVarTypeObject *)cpy_r_t)->_id;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___erasetype___TypeVarEraserObject *)cpy_r_self)->_erase_id;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/erasetype.py", "visit_type_var", "TypeVarEraser", "erase_id", 164, CPyStatic_erasetype___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_var", 164, CPyStatic_erasetype___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_var", 164, CPyStatic_erasetype___globals);
        goto CPyL7;
    }
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r6 = ((mypy___erasetype___TypeVarEraserObject *)cpy_r_self)->_replacement;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/erasetype.py", "visit_type_var", "TypeVarEraser", "replacement", 165, CPyStatic_erasetype___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    return cpy_r_r6;
CPyL6: ;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL7: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
}

PyObject *CPyPy_erasetype___TypeVarEraser___visit_type_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___TypeVarEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.TypeVarEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___TypeVarEraser___visit_type_var(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_var", 163, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___TypeVarEraser___visit_type_var__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___TypeVarEraser___visit_type_var(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___TypeVarEraser___visit_type_var__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___TypeVarEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.TypeVarEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___TypeVarEraser___visit_type_var__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_var__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___TypeVarEraser___visit_type_var_tuple(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_t)->_id;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___erasetype___TypeVarEraserObject *)cpy_r_self)->_erase_id;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/erasetype.py", "visit_type_var_tuple", "TypeVarEraser", "erase_id", 169, CPyStatic_erasetype___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_var_tuple", 169, CPyStatic_erasetype___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_var_tuple", 169, CPyStatic_erasetype___globals);
        goto CPyL7;
    }
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r6 = ((mypy___erasetype___TypeVarEraserObject *)cpy_r_self)->_replacement;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/erasetype.py", "visit_type_var_tuple", "TypeVarEraser", "replacement", 170, CPyStatic_erasetype___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    return cpy_r_r6;
CPyL6: ;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL7: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
}

PyObject *CPyPy_erasetype___TypeVarEraser___visit_type_var_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___TypeVarEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.TypeVarEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___TypeVarEraser___visit_type_var_tuple(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_var_tuple", 168, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___TypeVarEraser___visit_type_var_tuple__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___TypeVarEraser___visit_type_var_tuple(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___TypeVarEraser___visit_type_var_tuple__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___TypeVarEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.TypeVarEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeVarTupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeVarTupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___TypeVarEraser___visit_type_var_tuple__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_var_tuple__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___TypeVarEraser___visit_param_spec(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___types___ParamSpecTypeObject *)cpy_r_t)->_id;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___erasetype___TypeVarEraserObject *)cpy_r_self)->_erase_id;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/erasetype.py", "visit_param_spec", "TypeVarEraser", "erase_id", 174, CPyStatic_erasetype___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_param_spec", 174, CPyStatic_erasetype___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_param_spec", 174, CPyStatic_erasetype___globals);
        goto CPyL7;
    }
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r6 = ((mypy___erasetype___TypeVarEraserObject *)cpy_r_self)->_replacement;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/erasetype.py", "visit_param_spec", "TypeVarEraser", "replacement", 175, CPyStatic_erasetype___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    return cpy_r_r6;
CPyL6: ;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL7: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
}

PyObject *CPyPy_erasetype___TypeVarEraser___visit_param_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___TypeVarEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.TypeVarEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___TypeVarEraser___visit_param_spec(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_param_spec", 173, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___TypeVarEraser___visit_param_spec__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___TypeVarEraser___visit_param_spec(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___TypeVarEraser___visit_param_spec__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_param_spec__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___TypeVarEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.TypeVarEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___ParamSpecType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.ParamSpecType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___TypeVarEraser___visit_param_spec__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_param_spec__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___TypeVarEraser___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
    PyObject *cpy_r_a;
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
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_alias_type", 181, CPyStatic_erasetype___globals);
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
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_type_alias_type", 181, CPyStatic_erasetype___globals, "mypy.types.Type", cpy_r_r9);
        goto CPyL13;
    }
    cpy_r_a = cpy_r_r10;
    cpy_r_r11 = CPY_GET_METHOD(cpy_r_a, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_a, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_alias_type", 181, CPyStatic_erasetype___globals);
        goto CPyL13;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_type_alias_type", 181, CPyStatic_erasetype___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL13;
    }
    cpy_r_r13 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r12);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_alias_type", 181, CPyStatic_erasetype___globals);
        goto CPyL13;
    }
    cpy_r_r14 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r14;
    goto CPyL2;
CPyL8: ;
    cpy_r_r15 = CPyDef_types___TypeAliasType___copy_modified(cpy_r_t, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_type_alias_type", 181, CPyStatic_erasetype___globals);
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

PyObject *CPyPy_erasetype___TypeVarEraser___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___TypeVarEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.TypeVarEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___TypeVarEraser___visit_type_alias_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_alias_type", 178, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___TypeVarEraser___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___TypeVarEraser___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___TypeVarEraser___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___TypeVarEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.TypeVarEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___TypeVarEraser___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___remove_instance_last_known_values(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_erasetype___LastKnownValueEraser();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "remove_instance_last_known_values", 185, CPyStatic_erasetype___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_t, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_r0); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "remove_instance_last_known_values", 185, CPyStatic_erasetype___globals);
        goto CPyL4;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "remove_instance_last_known_values", 185, CPyStatic_erasetype___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_erasetype___remove_instance_last_known_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:remove_instance_last_known_values", kwlist, 0};
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
    PyObject *retval = CPyDef_erasetype___remove_instance_last_known_values(arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "remove_instance_last_known_values", 184, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___LastKnownValueEraser___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
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
    PyObject *cpy_r_a;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_t)->_last_known_value;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r2) goto CPyL4;
    cpy_r_r3 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PyObject_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_instance", 193, CPyStatic_erasetype___globals);
        goto CPyL15;
    }
    cpy_r_r6 = cpy_r_r4;
    if (cpy_r_r6) goto CPyL4;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL4: ;
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = PyList_New(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_instance", 195, CPyStatic_erasetype___globals);
        goto CPyL16;
    }
    cpy_r_r11 = 0;
CPyL6: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL17;
    cpy_r_r16 = CPySequenceTuple_GetItem(cpy_r_r7, cpy_r_r11);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_instance", 195, CPyStatic_erasetype___globals);
        goto CPyL18;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_types___Type)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_instance", 195, CPyStatic_erasetype___globals, "mypy.types.Type", cpy_r_r16);
        goto CPyL18;
    }
    cpy_r_a = cpy_r_r17;
    cpy_r_r18 = CPY_GET_METHOD(cpy_r_a, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_a, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_instance", 195, CPyStatic_erasetype___globals);
        goto CPyL18;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_types___Type)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_instance", 195, CPyStatic_erasetype___globals, "mypy.types.Type", cpy_r_r18);
        goto CPyL18;
    }
    cpy_r_r20 = CPyList_SetItemUnsafe(cpy_r_r10, cpy_r_r11, cpy_r_r19);
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_instance", 195, CPyStatic_erasetype___globals);
        goto CPyL18;
    }
    cpy_r_r21 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r21;
    goto CPyL6;
CPyL13: ;
    cpy_r_r22 = Py_None;
    cpy_r_r23 = CPyDef_types___Instance___copy_modified(cpy_r_t, cpy_r_r10, cpy_r_r22);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_instance", 195, CPyStatic_erasetype___globals);
        goto CPyL15;
    }
    return cpy_r_r23;
CPyL15: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL16: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL15;
}

PyObject *CPyPy_erasetype___LastKnownValueEraser___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___LastKnownValueEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.LastKnownValueEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___LastKnownValueEraser___visit_instance(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_instance", 192, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___LastKnownValueEraser___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___LastKnownValueEraser___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___LastKnownValueEraser___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___LastKnownValueEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.LastKnownValueEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___LastKnownValueEraser___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___LastKnownValueEraser___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
}

PyObject *CPyPy_erasetype___LastKnownValueEraser___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___LastKnownValueEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.LastKnownValueEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___LastKnownValueEraser___visit_type_alias_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_alias_type", 197, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___LastKnownValueEraser___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___LastKnownValueEraser___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___LastKnownValueEraser___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___LastKnownValueEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.LastKnownValueEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___LastKnownValueEraser___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___LastKnownValueEraser___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_instances;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_instances_by_name;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_p_new_items;
    CPyTagged cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_p_item;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_merged;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_item_2;
    PyObject *cpy_r_orig_item;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyPtr cpy_r_r79;
    int64_t cpy_r_r80;
    CPyTagged cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyTagged cpy_r_r91;
    CPyTagged cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    CPyTagged cpy_r_r105;
    CPyTagged cpy_r_r106;
    CPyTagged cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    cpy_r_r0 = CPyDef_type_visitor___TypeTranslator___visit_union_type(cpy_r_self, cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 203, CPyStatic_erasetype___globals);
        goto CPyL58;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_types___UnionType))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 203, CPyStatic_erasetype___globals, "mypy.types.UnionType", cpy_r_r0);
        goto CPyL58;
    }
    cpy_r_new = cpy_r_r1;
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 208, CPyStatic_erasetype___globals);
        goto CPyL59;
    }
    cpy_r_r3 = ((mypy___types___UnionTypeObject *)cpy_r_new)->_items;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
CPyL4: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL60;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_types___Type)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 208, CPyStatic_erasetype___globals, "mypy.types.Type", cpy_r_r9);
        goto CPyL61;
    }
    cpy_r_item = cpy_r_r10;
    cpy_r_r11 = CPyDef_types___get_proper_type(cpy_r_item);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 208, CPyStatic_erasetype___globals);
        goto CPyL62;
    }
    cpy_r_r12 = (PyObject *)CPyType_types___Instance;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_r11)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    CPy_DECREF(cpy_r_r11);
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (!cpy_r_r15) goto CPyL63;
    cpy_r_r16 = PyList_Append(cpy_r_r2, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 208, CPyStatic_erasetype___globals);
        goto CPyL61;
    }
CPyL9: ;
    cpy_r_r18 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r18;
    goto CPyL4;
CPyL10: ;
    cpy_r_instances = cpy_r_r2;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_instances)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    CPy_DECREF(cpy_r_instances);
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r21 > (Py_ssize_t)2;
    if (!cpy_r_r22) goto CPyL57;
    cpy_r_r23 = PyDict_New();
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 211, CPyStatic_erasetype___globals);
        goto CPyL59;
    }
    cpy_r_instances_by_name = cpy_r_r23;
    cpy_r_r24 = ((mypy___types___UnionTypeObject *)cpy_r_new)->_items;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyDef_types___get_proper_types(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 212, CPyStatic_erasetype___globals);
        goto CPyL64;
    }
    cpy_r_p_new_items = cpy_r_r25;
    cpy_r_r26 = 0;
CPyL14: ;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_p_new_items)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r26 < (Py_ssize_t)cpy_r_r29;
    if (!cpy_r_r30) goto CPyL65;
    cpy_r_r31 = CPyList_GetItemUnsafe(cpy_r_p_new_items, cpy_r_r26);
    if (likely(PyObject_TypeCheck(cpy_r_r31, CPyType_types___ProperType)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 213, CPyStatic_erasetype___globals, "mypy.types.ProperType", cpy_r_r31);
        goto CPyL66;
    }
    cpy_r_p_item = cpy_r_r32;
    cpy_r_r33 = (PyObject *)CPyType_types___Instance;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_p_item)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    if (!cpy_r_r36) goto CPyL67;
    if (likely(Py_TYPE(cpy_r_p_item) == CPyType_types___Instance))
        cpy_r_r37 = cpy_r_p_item;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 214, CPyStatic_erasetype___globals, "mypy.types.Instance", cpy_r_p_item);
        goto CPyL68;
    }
    cpy_r_r38 = ((mypy___types___InstanceObject *)cpy_r_r37)->_args;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = PyObject_IsTrue(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 214, CPyStatic_erasetype___globals);
        goto CPyL68;
    }
    cpy_r_r41 = cpy_r_r39;
    if (cpy_r_r41) goto CPyL67;
    if (likely(Py_TYPE(cpy_r_p_item) == CPyType_types___Instance))
        cpy_r_r42 = cpy_r_p_item;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 215, CPyStatic_erasetype___globals, "mypy.types.Instance", cpy_r_p_item);
        goto CPyL68;
    }
    cpy_r_r43 = ((mypy___types___InstanceObject *)cpy_r_r42)->_type;
    cpy_r_r44 = CPY_GET_ATTR(cpy_r_r43, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 215, CPyStatic_erasetype___globals);
        goto CPyL68;
    }
CPyL22: ;
    cpy_r_r45 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_instances_by_name, cpy_r_r44, 1);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 215, CPyStatic_erasetype___globals);
        goto CPyL68;
    }
    if (likely(PyList_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 215, CPyStatic_erasetype___globals, "list", cpy_r_r45);
        goto CPyL68;
    }
    if (likely(Py_TYPE(cpy_r_p_item) == CPyType_types___Instance))
        cpy_r_r47 = cpy_r_p_item;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 215, CPyStatic_erasetype___globals, "mypy.types.Instance", cpy_r_p_item);
        goto CPyL69;
    }
    cpy_r_r48 = PyList_Append(cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 215, CPyStatic_erasetype___globals);
        goto CPyL66;
    }
CPyL26: ;
    cpy_r_r50 = cpy_r_r26 + 2;
    cpy_r_r26 = cpy_r_r50;
    goto CPyL14;
CPyL27: ;
    cpy_r_r51 = PyList_New(0);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 216, CPyStatic_erasetype___globals);
        goto CPyL64;
    }
    cpy_r_merged = cpy_r_r51;
    cpy_r_r52 = ((mypy___types___UnionTypeObject *)cpy_r_new)->_items;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_new);
    cpy_r_r53 = 0;
CPyL29: ;
    cpy_r_r54 = (CPyPtr)&((PyVarObject *)cpy_r_r52)->ob_size;
    cpy_r_r55 = *(int64_t *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 << 1;
    cpy_r_r57 = (Py_ssize_t)cpy_r_r53 < (Py_ssize_t)cpy_r_r56;
    if (!cpy_r_r57) goto CPyL70;
    cpy_r_r58 = CPyList_GetItemUnsafe(cpy_r_r52, cpy_r_r53);
    if (likely(PyObject_TypeCheck(cpy_r_r58, CPyType_types___Type)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 217, CPyStatic_erasetype___globals, "mypy.types.Type", cpy_r_r58);
        goto CPyL71;
    }
    cpy_r_item_2 = cpy_r_r59;
    CPy_INCREF(cpy_r_item_2);
    cpy_r_orig_item = cpy_r_item_2;
    cpy_r_r60 = CPyDef_types___get_proper_type(cpy_r_item_2);
    CPy_DECREF(cpy_r_item_2);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 219, CPyStatic_erasetype___globals);
        goto CPyL72;
    }
    if (likely(cpy_r_r60 != Py_None))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 219, CPyStatic_erasetype___globals, "mypy.types.ProperType", cpy_r_r60);
        goto CPyL72;
    }
    cpy_r_item_2 = cpy_r_r61;
    cpy_r_r62 = (PyObject *)CPyType_types___Instance;
    cpy_r_r63 = (CPyPtr)&((PyObject *)cpy_r_item_2)->ob_type;
    cpy_r_r64 = *(PyObject * *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 == cpy_r_r62;
    if (!cpy_r_r65) goto CPyL73;
    if (likely(Py_TYPE(cpy_r_item_2) == CPyType_types___Instance))
        cpy_r_r66 = cpy_r_item_2;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 220, CPyStatic_erasetype___globals, "mypy.types.Instance", cpy_r_item_2);
        goto CPyL74;
    }
    cpy_r_r67 = ((mypy___types___InstanceObject *)cpy_r_r66)->_args;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = PyObject_IsTrue(cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 220, CPyStatic_erasetype___globals);
        goto CPyL74;
    }
    cpy_r_r70 = cpy_r_r68;
    if (cpy_r_r70) {
        goto CPyL73;
    } else
        goto CPyL75;
CPyL37: ;
    if (likely(Py_TYPE(cpy_r_item_2) == CPyType_types___Instance))
        cpy_r_r71 = cpy_r_item_2;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 221, CPyStatic_erasetype___globals, "mypy.types.Instance", cpy_r_item_2);
        goto CPyL76;
    }
    cpy_r_r72 = ((mypy___types___InstanceObject *)cpy_r_r71)->_type;
    cpy_r_r73 = CPY_GET_ATTR(cpy_r_r72, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 221, CPyStatic_erasetype___globals);
        goto CPyL76;
    }
CPyL39: ;
    cpy_r_r74 = CPyDict_GetWithNone(cpy_r_instances_by_name, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 221, CPyStatic_erasetype___globals);
        goto CPyL76;
    }
    if (PyList_Check(cpy_r_r74))
        cpy_r_r75 = cpy_r_r74;
    else {
        cpy_r_r75 = NULL;
    }
    if (cpy_r_r75 != NULL) goto __LL2028;
    if (cpy_r_r74 == Py_None)
        cpy_r_r75 = cpy_r_r74;
    else {
        cpy_r_r75 = NULL;
    }
    if (cpy_r_r75 != NULL) goto __LL2028;
    CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 221, CPyStatic_erasetype___globals, "list or None", cpy_r_r74);
    goto CPyL76;
__LL2028: ;
    cpy_r_types = cpy_r_r75;
    cpy_r_r76 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r77 = cpy_r_types != cpy_r_r76;
    if (!cpy_r_r77) goto CPyL77;
    if (likely(cpy_r_types != Py_None))
        cpy_r_r78 = cpy_r_types;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 223, CPyStatic_erasetype___globals, "list", cpy_r_types);
        goto CPyL78;
    }
    cpy_r_r79 = (CPyPtr)&((PyVarObject *)cpy_r_r78)->ob_size;
    cpy_r_r80 = *(int64_t *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 << 1;
    cpy_r_r82 = cpy_r_r81 == 2;
    if (cpy_r_r82) {
        goto CPyL79;
    } else
        goto CPyL46;
CPyL44: ;
    if (likely(Py_TYPE(cpy_r_item_2) == CPyType_types___Instance))
        cpy_r_r83 = cpy_r_item_2;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 224, CPyStatic_erasetype___globals, "mypy.types.Instance", cpy_r_item_2);
        goto CPyL71;
    }
    cpy_r_r84 = PyList_Append(cpy_r_merged, cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 224, CPyStatic_erasetype___globals);
        goto CPyL71;
    } else
        goto CPyL54;
CPyL46: ;
    cpy_r_r86 = CPyStatics[9357]; /* ('make_simplified_union',) */
    cpy_r_r87 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r88 = CPyStatic_erasetype___globals;
    cpy_r_r89 = CPyImport_ImportFromMany(cpy_r_r87, cpy_r_r86, cpy_r_r86, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 226, CPyStatic_erasetype___globals);
        goto CPyL78;
    }
    CPyModule_mypy___typeops = cpy_r_r89;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r89);
    if (likely(cpy_r_types != Py_None))
        cpy_r_r90 = cpy_r_types;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 228, CPyStatic_erasetype___globals, "list", cpy_r_types);
        goto CPyL76;
    }
    cpy_r_r91 = CPY_INT_TAG;
    cpy_r_r92 = CPY_INT_TAG;
    cpy_r_r93 = 2;
    cpy_r_r94 = 2;
    cpy_r_r95 = CPyDef_typeops___make_simplified_union(cpy_r_r90, cpy_r_r91, cpy_r_r92, cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 228, CPyStatic_erasetype___globals);
        goto CPyL76;
    }
    cpy_r_r96 = PyList_Append(cpy_r_merged, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 228, CPyStatic_erasetype___globals);
        goto CPyL76;
    }
    if (likely(Py_TYPE(cpy_r_item_2) == CPyType_types___Instance))
        cpy_r_r98 = cpy_r_item_2;
    else {
        CPy_TypeErrorTraceback("mypy/erasetype.py", "visit_union_type", 229, CPyStatic_erasetype___globals, "mypy.types.Instance", cpy_r_item_2);
        goto CPyL76;
    }
    cpy_r_r99 = ((mypy___types___InstanceObject *)cpy_r_r98)->_type;
    cpy_r_r100 = CPY_GET_ATTR(cpy_r_r99, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 229, CPyStatic_erasetype___globals);
        goto CPyL76;
    }
CPyL52: ;
    CPy_DECREF(cpy_r_item_2);
    cpy_r_r101 = PyObject_DelItem(cpy_r_instances_by_name, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 229, CPyStatic_erasetype___globals);
        goto CPyL71;
    } else
        goto CPyL54;
CPyL53: ;
    cpy_r_r103 = PyList_Append(cpy_r_merged, cpy_r_orig_item);
    CPy_DECREF(cpy_r_orig_item);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 231, CPyStatic_erasetype___globals);
        goto CPyL71;
    }
CPyL54: ;
    cpy_r_r105 = cpy_r_r53 + 2;
    cpy_r_r53 = cpy_r_r105;
    goto CPyL29;
CPyL55: ;
    cpy_r_r106 = CPY_INT_TAG;
    cpy_r_r107 = CPY_INT_TAG;
    cpy_r_r108 = CPyDef_types___UnionType___make_union(cpy_r_merged, cpy_r_r106, cpy_r_r107);
    CPy_DECREF(cpy_r_merged);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 232, CPyStatic_erasetype___globals);
        goto CPyL58;
    }
    return cpy_r_r108;
CPyL57: ;
    return cpy_r_new;
CPyL58: ;
    cpy_r_r109 = NULL;
    return cpy_r_r109;
CPyL59: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL58;
CPyL60: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL10;
CPyL61: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL58;
CPyL62: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_item);
    goto CPyL58;
CPyL63: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL9;
CPyL64: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_instances_by_name);
    goto CPyL58;
CPyL65: ;
    CPy_DECREF(cpy_r_p_new_items);
    goto CPyL27;
CPyL66: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_instances_by_name);
    CPy_DecRef(cpy_r_p_new_items);
    goto CPyL58;
CPyL67: ;
    CPy_DECREF(cpy_r_p_item);
    goto CPyL26;
CPyL68: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_instances_by_name);
    CPy_DecRef(cpy_r_p_new_items);
    CPy_DecRef(cpy_r_p_item);
    goto CPyL58;
CPyL69: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_instances_by_name);
    CPy_DecRef(cpy_r_p_new_items);
    CPy_DecRef(cpy_r_r46);
    goto CPyL58;
CPyL70: ;
    CPy_DECREF(cpy_r_instances_by_name);
    CPy_DECREF(cpy_r_r52);
    goto CPyL55;
CPyL71: ;
    CPy_DecRef(cpy_r_instances_by_name);
    CPy_DecRef(cpy_r_merged);
    CPy_DecRef(cpy_r_r52);
    goto CPyL58;
CPyL72: ;
    CPy_DecRef(cpy_r_instances_by_name);
    CPy_DecRef(cpy_r_merged);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_orig_item);
    goto CPyL58;
CPyL73: ;
    CPy_DECREF(cpy_r_item_2);
    goto CPyL53;
CPyL74: ;
    CPy_DecRef(cpy_r_instances_by_name);
    CPy_DecRef(cpy_r_merged);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_item_2);
    CPy_DecRef(cpy_r_orig_item);
    goto CPyL58;
CPyL75: ;
    CPy_DECREF(cpy_r_orig_item);
    goto CPyL37;
CPyL76: ;
    CPy_DecRef(cpy_r_instances_by_name);
    CPy_DecRef(cpy_r_merged);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_item_2);
    goto CPyL58;
CPyL77: ;
    CPy_DECREF(cpy_r_item_2);
    CPy_DECREF(cpy_r_types);
    goto CPyL54;
CPyL78: ;
    CPy_DecRef(cpy_r_instances_by_name);
    CPy_DecRef(cpy_r_merged);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_item_2);
    CPy_DecRef(cpy_r_types);
    goto CPyL58;
CPyL79: ;
    CPy_DECREF(cpy_r_types);
    goto CPyL44;
}

PyObject *CPyPy_erasetype___LastKnownValueEraser___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___LastKnownValueEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.LastKnownValueEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___LastKnownValueEraser___visit_union_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_union_type", 202, CPyStatic_erasetype___globals);
    return NULL;
}

PyObject *CPyDef_erasetype___LastKnownValueEraser___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_erasetype___LastKnownValueEraser___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_erasetype___LastKnownValueEraser___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_erasetype___LastKnownValueEraser))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.erasetype.LastKnownValueEraser", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_erasetype___LastKnownValueEraser___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/erasetype.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_erasetype___globals);
    return NULL;
}

char CPyDef_erasetype_____top_level__(void) {
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
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
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
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", -1, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_erasetype___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 1, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9358]; /* ('Callable', 'Container', 'cast') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_erasetype___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 3, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9359]; /* ('ARG_STAR', 'ARG_STAR2') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_erasetype___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 5, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9360]; /* ('AnyType', 'CallableType', 'DeletedType', 'ErasedType',
                                     'Instance', 'LiteralType', 'NoneType', 'Overloaded',
                                     'Parameters', 'ParamSpecType', 'PartialType',
                                     'ProperType', 'TupleType', 'Type', 'TypeAliasType',
                                     'TypedDictType', 'TypeOfAny', 'TypeTranslator',
                                     'TypeType', 'TypeVarId', 'TypeVarTupleType',
                                     'TypeVarType', 'TypeVisitor', 'UnboundType',
                                     'UninhabitedType', 'UnionType', 'UnpackType',
                                     'get_proper_type', 'get_proper_types') */
    cpy_r_r18 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r19 = CPyStatic_erasetype___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 6, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    CPyModule_mypy___types = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = (PyObject *)CPyType_type_visitor___TypeVisitor;
    cpy_r_r22 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r23 = PyObject_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 55, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    cpy_r_r24 = PyTuple_Pack(1, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 55, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    cpy_r_r25 = CPyStatics[90]; /* 'mypy.erasetype' */
    cpy_r_r26 = (PyObject *)CPyType_erasetype___EraseTypeVisitor_template;
    cpy_r_r27 = CPyType_FromTemplate(cpy_r_r26, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 55, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    cpy_r_r28 = CPyDef_erasetype___EraseTypeVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", -1, CPyStatic_erasetype___globals);
        goto CPyL28;
    }
    cpy_r_r29 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r30 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r31 = PyTuple_Pack(1, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 55, CPyStatic_erasetype___globals);
        goto CPyL28;
    }
    cpy_r_r32 = PyObject_SetAttr(cpy_r_r27, cpy_r_r29, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 55, CPyStatic_erasetype___globals);
        goto CPyL28;
    }
    CPyType_erasetype___EraseTypeVisitor = (PyTypeObject *)cpy_r_r27;
    CPy_INCREF(CPyType_erasetype___EraseTypeVisitor);
    cpy_r_r34 = CPyStatic_erasetype___globals;
    cpy_r_r35 = CPyStatics[2023]; /* 'EraseTypeVisitor' */
    cpy_r_r36 = CPyDict_SetItem(cpy_r_r34, cpy_r_r35, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 55, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    cpy_r_r38 = (PyObject *)CPyType_type_visitor___TypeTranslator;
    cpy_r_r39 = PyTuple_Pack(1, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 156, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    cpy_r_r40 = CPyStatics[90]; /* 'mypy.erasetype' */
    cpy_r_r41 = (PyObject *)CPyType_erasetype___TypeVarEraser_template;
    cpy_r_r42 = CPyType_FromTemplate(cpy_r_r41, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 156, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    cpy_r_r43 = CPyDef_erasetype___TypeVarEraser_trait_vtable_setup();
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", -1, CPyStatic_erasetype___globals);
        goto CPyL29;
    }
    cpy_r_r44 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r45 = CPyStatics[2024]; /* 'erase_id' */
    cpy_r_r46 = CPyStatics[2025]; /* 'replacement' */
    cpy_r_r47 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r48 = PyTuple_Pack(3, cpy_r_r45, cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 156, CPyStatic_erasetype___globals);
        goto CPyL29;
    }
    cpy_r_r49 = PyObject_SetAttr(cpy_r_r42, cpy_r_r44, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 156, CPyStatic_erasetype___globals);
        goto CPyL29;
    }
    CPyType_erasetype___TypeVarEraser = (PyTypeObject *)cpy_r_r42;
    CPy_INCREF(CPyType_erasetype___TypeVarEraser);
    cpy_r_r51 = CPyStatic_erasetype___globals;
    cpy_r_r52 = CPyStatics[2026]; /* 'TypeVarEraser' */
    cpy_r_r53 = CPyDict_SetItem(cpy_r_r51, cpy_r_r52, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 156, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    cpy_r_r55 = (PyObject *)CPyType_type_visitor___TypeTranslator;
    cpy_r_r56 = PyTuple_Pack(1, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 188, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    cpy_r_r57 = CPyStatics[90]; /* 'mypy.erasetype' */
    cpy_r_r58 = (PyObject *)CPyType_erasetype___LastKnownValueEraser_template;
    cpy_r_r59 = CPyType_FromTemplate(cpy_r_r58, cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 188, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    cpy_r_r60 = CPyDef_erasetype___LastKnownValueEraser_trait_vtable_setup();
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", -1, CPyStatic_erasetype___globals);
        goto CPyL30;
    }
    cpy_r_r61 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r62 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r63 = PyTuple_Pack(1, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 188, CPyStatic_erasetype___globals);
        goto CPyL30;
    }
    cpy_r_r64 = PyObject_SetAttr(cpy_r_r59, cpy_r_r61, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 188, CPyStatic_erasetype___globals);
        goto CPyL30;
    }
    CPyType_erasetype___LastKnownValueEraser = (PyTypeObject *)cpy_r_r59;
    CPy_INCREF(CPyType_erasetype___LastKnownValueEraser);
    cpy_r_r66 = CPyStatic_erasetype___globals;
    cpy_r_r67 = CPyStatics[2027]; /* 'LastKnownValueEraser' */
    cpy_r_r68 = CPyDict_SetItem(cpy_r_r66, cpy_r_r67, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/erasetype.py", "<module>", 188, CPyStatic_erasetype___globals);
        goto CPyL27;
    }
    return 1;
CPyL27: ;
    cpy_r_r70 = 2;
    return cpy_r_r70;
CPyL28: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r59);
    goto CPyL27;
}
