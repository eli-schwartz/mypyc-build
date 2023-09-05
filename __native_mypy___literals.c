#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef mypy___literals____Hasher_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___literals____HasherObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___literals____HasherObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *mypy___literals____Hasher_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___literals____Hasher(void);

static PyObject *
mypy___literals____Hasher_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___literals____Hasher) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___literals____Hasher_setup(type);
}

static int
mypy___literals____Hasher_traverse(mypy___literals____HasherObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___literals____HasherObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___literals____HasherObject))));
    return 0;
}

static int
mypy___literals____Hasher_clear(mypy___literals____HasherObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___literals____HasherObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___literals____HasherObject))));
    return 0;
}

static void
mypy___literals____Hasher_dealloc(mypy___literals____HasherObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___literals____Hasher_dealloc)
    mypy___literals____Hasher_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___literals____Hasher_vtable[48];
static CPyVTableItem mypy___literals____Hasher_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t mypy___literals____Hasher_mypy___visitor___ExpressionVisitor_offset_table[1];
static bool
CPyDef_mypy___literals____Hasher_trait_vtable_setup(void)
{
    CPyVTableItem mypy___literals____Hasher_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_int_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_str_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_bytes_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_float_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_complex_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_ellipsis__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_type_application__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_lambda_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_list_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_set_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_dictionary_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_generator_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_slice_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_conditional_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_type_var_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_paramspec_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_type_var_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_type_alias_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_namedtuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_enum_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_typeddict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_newtype_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit__promote_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_await_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_temp_node__ExpressionVisitor_glue,
    };
    memcpy(mypy___literals____Hasher_mypy___visitor___ExpressionVisitor_trait_vtable, mypy___literals____Hasher_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(mypy___literals____Hasher_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t mypy___literals____Hasher_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(mypy___literals____Hasher_mypy___visitor___ExpressionVisitor_offset_table, mypy___literals____Hasher_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(mypy___literals____Hasher_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem mypy___literals____Hasher_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)mypy___literals____Hasher_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)mypy___literals____Hasher_mypy___visitor___ExpressionVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_star_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_name_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_member_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_op_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_comparison_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_unary_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___seq_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_list_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_dict_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_set_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_index_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_assignment_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_call_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_slice_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_cast_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_conditional_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_ellipsis,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_yield_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_reveal_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_super_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_type_application,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_lambda_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_list_comprehension,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_set_comprehension,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_generator_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_type_var_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_newtype_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit__promote_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_await_expr,
        (CPyVTableItem)CPyDef_mypy___literals____Hasher___visit_temp_node,
    };
    memcpy(mypy___literals____Hasher_vtable, mypy___literals____Hasher_vtable_scratch, sizeof(mypy___literals____Hasher_vtable));
    return 1;
}


static PyGetSetDef mypy___literals____Hasher_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef mypy___literals____Hasher_methods[] = {
    {"visit_int_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_int_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_str_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_str_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_bytes_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_bytes_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_float_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_complex_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_complex_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_star_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_star_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_member_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_member_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_op_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_op_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_comparison_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_comparison_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unary_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_unary_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"seq_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___seq_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_list_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_list_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dict_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_dict_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_tuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_set_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_index_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_index_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_assignment_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_slice_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_slice_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_cast_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_cast_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assert_type_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_assert_type_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_conditional_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_conditional_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_ellipsis",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_ellipsis,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_yield_from_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_yield_from_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_yield_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_yield_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_reveal_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_reveal_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_super_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_super_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_application",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_type_application,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_lambda_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_lambda_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_list_comprehension",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_list_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_comprehension",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_set_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dictionary_comprehension",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_dictionary_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_generator_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_generator_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_type_var_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_paramspec_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_paramspec_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_type_var_tuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_type_alias_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_namedtuple_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_namedtuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_enum_call_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_enum_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_typeddict_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_newtype_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_newtype_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit__promote_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit__promote_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_await_expr",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_await_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_temp_node",
     (PyCFunction)CPyPy_mypy___literals____Hasher___visit_temp_node,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___literals____Hasher_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_Hasher",
    .tp_new = mypy___literals____Hasher_new,
    .tp_dealloc = (destructor)mypy___literals____Hasher_dealloc,
    .tp_traverse = (traverseproc)mypy___literals____Hasher_traverse,
    .tp_clear = (inquiry)mypy___literals____Hasher_clear,
    .tp_getset = mypy___literals____Hasher_getseters,
    .tp_methods = mypy___literals____Hasher_methods,
    .tp_members = mypy___literals____Hasher_members,
    .tp_basicsize = sizeof(mypy___literals____HasherObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___literals____HasherObject),
    .tp_weaklistoffset = sizeof(mypy___literals____HasherObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___literals____Hasher_template = &CPyType_mypy___literals____Hasher_template_;

static PyObject *
mypy___literals____Hasher_setup(PyTypeObject *type)
{
    mypy___literals____HasherObject *self;
    self = (mypy___literals____HasherObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___literals____Hasher_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___literals____Hasher(void)
{
    PyObject *self = mypy___literals____Hasher_setup(CPyType_mypy___literals____Hasher);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef mypy___literalsmodule_methods[] = {
    {"literal", (PyCFunction)CPyPy_mypy___literals___literal, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"subkeys", (PyCFunction)CPyPy_mypy___literals___subkeys, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"literal_hash", (PyCFunction)CPyPy_mypy___literals___literal_hash, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"extract_var_from_literal_hash", (PyCFunction)CPyPy_mypy___literals___extract_var_from_literal_hash, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mypy___literalsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.literals",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mypy___literalsmodule_methods
};

PyObject *CPyInit_mypy___literals(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___literals_internal) {
        Py_INCREF(CPyModule_mypy___literals_internal);
        return CPyModule_mypy___literals_internal;
    }
    CPyModule_mypy___literals_internal = PyModule_Create(&mypy___literalsmodule);
    if (unlikely(CPyModule_mypy___literals_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___literals_internal, "__name__");
    CPyStatic_mypy___literals___globals = PyModule_GetDict(CPyModule_mypy___literals_internal);
    if (unlikely(CPyStatic_mypy___literals___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mypy___literals_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___literals_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___literals_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_mypy___literals____hasher);
    CPyStatic_mypy___literals____hasher = NULL;
    Py_CLEAR(CPyType_mypy___literals____Hasher);
    return NULL;
}

CPyTagged CPyDef_mypy___literals___literal(PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_o;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    int64_t cpy_r_r37;
    char cpy_r_r38;
    int64_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_r84;
    CPyPtr cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyTagged cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyTagged cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyPtr cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyPtr cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    CPyPtr cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyPtr cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    CPyPtr cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    CPyPtr cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    CPyPtr cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    int32_t cpy_r_r143;
    char cpy_r_r144;
    char cpy_r_r145;
    CPyTagged cpy_r_r146;
    cpy_r_r0 = (PyObject *)CPyType_nodes___ComparisonExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___ComparisonExpr))
        cpy_r_r4 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 100, CPyStatic_mypy___literals___globals, "mypy.nodes.ComparisonExpr", cpy_r_e);
        goto CPyL87;
    }
    cpy_r_r5 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r4)->_operands;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = PyList_New(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "literal", 100, CPyStatic_mypy___literals___globals);
        goto CPyL88;
    }
    cpy_r_r9 = 0;
CPyL4: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL89;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r9);
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_nodes___Expression)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 100, CPyStatic_mypy___literals___globals, "mypy.nodes.Expression", cpy_r_r14);
        goto CPyL90;
    }
    cpy_r_o = cpy_r_r15;
    cpy_r_r16 = CPyDef_mypy___literals___literal(cpy_r_o);
    CPy_DECREF(cpy_r_o);
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/literals.py", "literal", 100, CPyStatic_mypy___literals___globals);
        goto CPyL90;
    }
    cpy_r_r17 = CPyTagged_StealAsObject(cpy_r_r16);
    cpy_r_r18 = CPyList_SetItemUnsafe(cpy_r_r8, cpy_r_r9, cpy_r_r17);
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/literals.py", "literal", 100, CPyStatic_mypy___literals___globals);
        goto CPyL90;
    }
    cpy_r_r19 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r19;
    goto CPyL4;
CPyL9: ;
    cpy_r_r20 = CPyModule_builtins;
    cpy_r_r21 = CPyStatics[469]; /* 'min' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "literal", 100, CPyStatic_mypy___literals___globals);
        goto CPyL91;
    }
    PyObject *cpy_r_r23[1] = {cpy_r_r8};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = _PyObject_Vectorcall(cpy_r_r22, cpy_r_r24, 1, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "literal", 100, CPyStatic_mypy___literals___globals);
        goto CPyL91;
    }
    CPy_DECREF(cpy_r_r8);
    if (likely(PyLong_Check(cpy_r_r25)))
        cpy_r_r26 = CPyTagged_FromObject(cpy_r_r25);
    else {
        CPy_TypeError("int", cpy_r_r25); cpy_r_r26 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/literals.py", "literal", 100, CPyStatic_mypy___literals___globals);
        goto CPyL87;
    }
    return cpy_r_r26;
CPyL13: ;
    cpy_r_r27 = (PyObject *)CPyType_nodes___OpExpr;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    if (!cpy_r_r30) goto CPyL25;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___OpExpr))
        cpy_r_r31 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 103, CPyStatic_mypy___literals___globals, "mypy.nodes.OpExpr", cpy_r_e);
        goto CPyL87;
    }
    cpy_r_r32 = ((mypy___nodes___OpExprObject *)cpy_r_r31)->_left;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyDef_mypy___literals___literal(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/literals.py", "literal", 103, CPyStatic_mypy___literals___globals);
        goto CPyL87;
    }
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___OpExpr))
        cpy_r_r34 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 103, CPyStatic_mypy___literals___globals, "mypy.nodes.OpExpr", cpy_r_e);
        goto CPyL92;
    }
    cpy_r_r35 = ((mypy___nodes___OpExprObject *)cpy_r_r34)->_right;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyDef_mypy___literals___literal(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/literals.py", "literal", 103, CPyStatic_mypy___literals___globals);
        goto CPyL92;
    }
    cpy_r_r37 = cpy_r_r36 & 1;
    cpy_r_r38 = cpy_r_r37 == 0;
    cpy_r_r39 = cpy_r_r33 & 1;
    cpy_r_r40 = cpy_r_r39 == 0;
    cpy_r_r41 = cpy_r_r38 & cpy_r_r40;
    if (!cpy_r_r41) goto CPyL20;
    cpy_r_r42 = (Py_ssize_t)cpy_r_r36 < (Py_ssize_t)cpy_r_r33;
    cpy_r_r43 = cpy_r_r42;
    goto CPyL21;
CPyL20: ;
    cpy_r_r44 = CPyTagged_IsLt_(cpy_r_r36, cpy_r_r33);
    cpy_r_r43 = cpy_r_r44;
CPyL21: ;
    if (cpy_r_r43) {
        goto CPyL93;
    } else
        goto CPyL94;
CPyL22: ;
    cpy_r_r45 = cpy_r_r36;
    goto CPyL24;
CPyL23: ;
    cpy_r_r45 = cpy_r_r33;
CPyL24: ;
    return cpy_r_r45;
CPyL25: ;
    cpy_r_r46 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r47 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 == cpy_r_r46;
    if (!cpy_r_r49) goto CPyL27;
    cpy_r_r50 = cpy_r_r49;
    goto CPyL28;
CPyL27: ;
    cpy_r_r51 = (PyObject *)CPyType_nodes___UnaryExpr;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    cpy_r_r50 = cpy_r_r54;
CPyL28: ;
    if (!cpy_r_r50) goto CPyL30;
    cpy_r_r55 = cpy_r_r50;
    goto CPyL31;
CPyL30: ;
    cpy_r_r56 = (PyObject *)CPyType_nodes___StarExpr;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    cpy_r_r55 = cpy_r_r59;
CPyL31: ;
    if (!cpy_r_r55) goto CPyL43;
    CPy_INCREF(cpy_r_e);
    if (Py_TYPE(cpy_r_e) == CPyType_nodes___MemberExpr)
        cpy_r_r60 = cpy_r_e;
    else {
        cpy_r_r60 = NULL;
    }
    if (cpy_r_r60 != NULL) goto __LL3049;
    if (Py_TYPE(cpy_r_e) == CPyType_nodes___UnaryExpr)
        cpy_r_r60 = cpy_r_e;
    else {
        cpy_r_r60 = NULL;
    }
    if (cpy_r_r60 != NULL) goto __LL3049;
    if (Py_TYPE(cpy_r_e) == CPyType_nodes___StarExpr)
        cpy_r_r60 = cpy_r_e;
    else {
        cpy_r_r60 = NULL;
    }
    if (cpy_r_r60 != NULL) goto __LL3049;
    CPy_TypeErrorTraceback("mypy/literals.py", "literal", 106, CPyStatic_mypy___literals___globals, "union[mypy.nodes.MemberExpr, mypy.nodes.UnaryExpr, mypy.nodes.StarExpr]", cpy_r_e);
    goto CPyL87;
__LL3049: ;
    cpy_r_r61 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r62 = (CPyPtr)&((PyObject *)cpy_r_r60)->ob_type;
    cpy_r_r63 = *(PyObject * *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 == cpy_r_r61;
    if (!cpy_r_r64) goto CPyL36;
    if (likely(Py_TYPE(cpy_r_r60) == CPyType_nodes___MemberExpr))
        cpy_r_r65 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 106, CPyStatic_mypy___literals___globals, "mypy.nodes.MemberExpr", cpy_r_r60);
        goto CPyL87;
    }
    cpy_r_r66 = ((mypy___nodes___MemberExprObject *)cpy_r_r65)->_expr;
    CPy_INCREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r67 = cpy_r_r66;
    goto CPyL41;
CPyL36: ;
    cpy_r_r68 = (PyObject *)CPyType_nodes___UnaryExpr;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_r60)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    if (!cpy_r_r71) goto CPyL39;
    if (likely(Py_TYPE(cpy_r_r60) == CPyType_nodes___UnaryExpr))
        cpy_r_r72 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 106, CPyStatic_mypy___literals___globals, "mypy.nodes.UnaryExpr", cpy_r_r60);
        goto CPyL87;
    }
    cpy_r_r73 = ((mypy___nodes___UnaryExprObject *)cpy_r_r72)->_expr;
    CPy_INCREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r67 = cpy_r_r73;
    goto CPyL41;
CPyL39: ;
    if (likely(Py_TYPE(cpy_r_r60) == CPyType_nodes___StarExpr))
        cpy_r_r74 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 106, CPyStatic_mypy___literals___globals, "mypy.nodes.StarExpr", cpy_r_r60);
        goto CPyL87;
    }
    cpy_r_r75 = ((mypy___nodes___StarExprObject *)cpy_r_r74)->_expr;
    CPy_INCREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r67 = cpy_r_r75;
CPyL41: ;
    cpy_r_r76 = CPyDef_mypy___literals___literal(cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r76 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/literals.py", "literal", 106, CPyStatic_mypy___literals___globals);
        goto CPyL87;
    }
    return cpy_r_r76;
CPyL43: ;
    cpy_r_r77 = (PyObject *)CPyType_nodes___AssignmentExpr;
    cpy_r_r78 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r79 = *(PyObject * *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 == cpy_r_r77;
    if (!cpy_r_r80) goto CPyL47;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___AssignmentExpr))
        cpy_r_r81 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 109, CPyStatic_mypy___literals___globals, "mypy.nodes.AssignmentExpr", cpy_r_e);
        goto CPyL87;
    }
    cpy_r_r82 = ((mypy___nodes___AssignmentExprObject *)cpy_r_r81)->_target;
    CPy_INCREF(cpy_r_r82);
    cpy_r_r83 = CPyDef_mypy___literals___literal(cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/literals.py", "literal", 109, CPyStatic_mypy___literals___globals);
        goto CPyL87;
    }
    return cpy_r_r83;
CPyL47: ;
    cpy_r_r84 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r85 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r86 = *(PyObject * *)cpy_r_r85;
    cpy_r_r87 = cpy_r_r86 == cpy_r_r84;
    if (!cpy_r_r87) goto CPyL55;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___IndexExpr))
        cpy_r_r88 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 112, CPyStatic_mypy___literals___globals, "mypy.nodes.IndexExpr", cpy_r_e);
        goto CPyL87;
    }
    cpy_r_r89 = ((mypy___nodes___IndexExprObject *)cpy_r_r88)->_index;
    CPy_INCREF(cpy_r_r89);
    cpy_r_r90 = CPyDef_mypy___literals___literal(cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/literals.py", "literal", 112, CPyStatic_mypy___literals___globals);
        goto CPyL87;
    }
    cpy_r_r91 = cpy_r_r90 == 4;
    CPyTagged_DECREF(cpy_r_r90);
    if (!cpy_r_r91) goto CPyL54;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___IndexExpr))
        cpy_r_r92 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 113, CPyStatic_mypy___literals___globals, "mypy.nodes.IndexExpr", cpy_r_e);
        goto CPyL87;
    }
    cpy_r_r93 = ((mypy___nodes___IndexExprObject *)cpy_r_r92)->_base;
    CPy_INCREF(cpy_r_r93);
    cpy_r_r94 = CPyDef_mypy___literals___literal(cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/literals.py", "literal", 113, CPyStatic_mypy___literals___globals);
        goto CPyL87;
    }
    return cpy_r_r94;
CPyL54: ;
    return 0;
CPyL55: ;
    cpy_r_r95 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r96 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r97 = *(PyObject * *)cpy_r_r96;
    cpy_r_r98 = cpy_r_r97 == cpy_r_r95;
    if (!cpy_r_r98) goto CPyL66;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___NameExpr))
        cpy_r_r99 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 118, CPyStatic_mypy___literals___globals, "mypy.nodes.NameExpr", cpy_r_e);
        goto CPyL87;
    }
    cpy_r_r100 = ((mypy___nodes___NameExprObject *)cpy_r_r99)->_node;
    cpy_r_r101 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r102 = (CPyPtr)&((PyObject *)cpy_r_r100)->ob_type;
    cpy_r_r103 = *(PyObject * *)cpy_r_r102;
    cpy_r_r104 = cpy_r_r103 == cpy_r_r101;
    if (!cpy_r_r104) goto CPyL65;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___NameExpr))
        cpy_r_r105 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 118, CPyStatic_mypy___literals___globals, "mypy.nodes.NameExpr", cpy_r_e);
        goto CPyL87;
    }
    cpy_r_r106 = ((mypy___nodes___NameExprObject *)cpy_r_r105)->_node;
    if (likely(Py_TYPE(cpy_r_r106) == CPyType_nodes___Var))
        cpy_r_r107 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 118, CPyStatic_mypy___literals___globals, "mypy.nodes.Var", cpy_r_r106);
        goto CPyL87;
    }
    cpy_r_r108 = ((mypy___nodes___VarObject *)cpy_r_r107)->_is_final;
    if (!cpy_r_r108) goto CPyL65;
CPyL61: ;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___NameExpr))
        cpy_r_r109 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 118, CPyStatic_mypy___literals___globals, "mypy.nodes.NameExpr", cpy_r_e);
        goto CPyL87;
    }
    cpy_r_r110 = ((mypy___nodes___NameExprObject *)cpy_r_r109)->_node;
    if (likely(Py_TYPE(cpy_r_r110) == CPyType_nodes___Var))
        cpy_r_r111 = cpy_r_r110;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 118, CPyStatic_mypy___literals___globals, "mypy.nodes.Var", cpy_r_r110);
        goto CPyL87;
    }
    cpy_r_r112 = ((mypy___nodes___VarObject *)cpy_r_r111)->_final_value;
    cpy_r_r113 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r114 = cpy_r_r112 != cpy_r_r113;
    if (!cpy_r_r114) goto CPyL65;
    return 4;
CPyL65: ;
    return 2;
CPyL66: ;
    cpy_r_r115 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r116 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r117 = *(PyObject * *)cpy_r_r116;
    cpy_r_r118 = cpy_r_r117 == cpy_r_r115;
    if (!cpy_r_r118) goto CPyL68;
    cpy_r_r119 = cpy_r_r118;
    goto CPyL69;
CPyL68: ;
    cpy_r_r120 = (PyObject *)CPyType_nodes___FloatExpr;
    cpy_r_r121 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r122 = *(PyObject * *)cpy_r_r121;
    cpy_r_r123 = cpy_r_r122 == cpy_r_r120;
    cpy_r_r119 = cpy_r_r123;
CPyL69: ;
    if (!cpy_r_r119) goto CPyL71;
    cpy_r_r124 = cpy_r_r119;
    goto CPyL72;
CPyL71: ;
    cpy_r_r125 = (PyObject *)CPyType_nodes___ComplexExpr;
    cpy_r_r126 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r127 = *(PyObject * *)cpy_r_r126;
    cpy_r_r128 = cpy_r_r127 == cpy_r_r125;
    cpy_r_r124 = cpy_r_r128;
CPyL72: ;
    if (!cpy_r_r124) goto CPyL74;
    cpy_r_r129 = cpy_r_r124;
    goto CPyL75;
CPyL74: ;
    cpy_r_r130 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r131 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r132 = *(PyObject * *)cpy_r_r131;
    cpy_r_r133 = cpy_r_r132 == cpy_r_r130;
    cpy_r_r129 = cpy_r_r133;
CPyL75: ;
    if (!cpy_r_r129) goto CPyL77;
    cpy_r_r134 = cpy_r_r129;
    goto CPyL78;
CPyL77: ;
    cpy_r_r135 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r136 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r137 = *(PyObject * *)cpy_r_r136;
    cpy_r_r138 = cpy_r_r137 == cpy_r_r135;
    cpy_r_r134 = cpy_r_r138;
CPyL78: ;
    if (!cpy_r_r134) goto CPyL80;
    return 4;
CPyL80: ;
    cpy_r_r139 = CPyDef_mypy___literals___literal_hash(cpy_r_e);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "literal", 125, CPyStatic_mypy___literals___globals);
        goto CPyL87;
    }
    cpy_r_r140 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r141 = cpy_r_r139 != cpy_r_r140;
    if (!cpy_r_r141) goto CPyL95;
    if (likely(cpy_r_r139 != Py_None))
        cpy_r_r142 = cpy_r_r139;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "literal", 125, CPyStatic_mypy___literals___globals, "tuple", cpy_r_r139);
        goto CPyL87;
    }
    cpy_r_r143 = PyObject_IsTrue(cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    cpy_r_r144 = cpy_r_r143 >= 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypy/literals.py", "literal", 125, CPyStatic_mypy___literals___globals);
        goto CPyL87;
    }
    cpy_r_r145 = cpy_r_r143;
    if (!cpy_r_r145) goto CPyL86;
    return 4;
CPyL86: ;
    return 0;
CPyL87: ;
    cpy_r_r146 = CPY_INT_TAG;
    return cpy_r_r146;
CPyL88: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL87;
CPyL89: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL9;
CPyL90: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL87;
CPyL91: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL87;
CPyL92: ;
    CPyTagged_DecRef(cpy_r_r33);
    goto CPyL87;
CPyL93: ;
    CPyTagged_DECREF(cpy_r_r33);
    goto CPyL22;
CPyL94: ;
    CPyTagged_DECREF(cpy_r_r36);
    goto CPyL23;
CPyL95: ;
    CPy_DECREF(cpy_r_r139);
    goto CPyL86;
}

PyObject *CPyPy_mypy___literals___literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:literal", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_e;
    if (likely(PyObject_TypeCheck(obj_e, CPyType_nodes___Expression)))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_e); 
        goto fail;
    }
    CPyTagged retval = CPyDef_mypy___literals___literal(arg_e);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "literal", 98, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals___subkeys(PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_elt;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "subkeys", 135, CPyStatic_mypy___literals___globals);
        goto CPyL10;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_key)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL9;
    cpy_r_r6 = CPySequenceTuple_GetItem(cpy_r_key, cpy_r_r1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "subkeys", 135, CPyStatic_mypy___literals___globals);
        goto CPyL11;
    }
    cpy_r_elt = cpy_r_r6;
    cpy_r_r7 = (PyObject *)&PyTuple_Type;
    cpy_r_r8 = PyObject_IsInstance(cpy_r_elt, cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/literals.py", "subkeys", 135, CPyStatic_mypy___literals___globals);
        goto CPyL12;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL13;
    if (likely(PyTuple_Check(cpy_r_elt)))
        cpy_r_r11 = cpy_r_elt;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "subkeys", 135, CPyStatic_mypy___literals___globals, "tuple", cpy_r_elt);
        goto CPyL11;
    }
    cpy_r_r12 = PyList_Append(cpy_r_r0, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/literals.py", "subkeys", 135, CPyStatic_mypy___literals___globals);
        goto CPyL11;
    }
CPyL8: ;
    cpy_r_r14 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r14;
    goto CPyL2;
CPyL9: ;
    return cpy_r_r0;
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_elt);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_elt);
    goto CPyL8;
}

PyObject *CPyPy_mypy___literals___subkeys(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:subkeys", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject * arg_key;
    if (likely(PyTuple_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("tuple", obj_key); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals___subkeys(arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "subkeys", 134, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals___literal_hash(PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatic_mypy___literals____hasher;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"_hasher\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/literals.py", "literal_hash", 139, CPyStatic_mypy___literals___globals);
        goto CPyL6;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = CPY_GET_METHOD_TRAIT(cpy_r_e, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_e, cpy_r_r0); /* accept */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "literal_hash", 139, CPyStatic_mypy___literals___globals);
        goto CPyL6;
    }
    if (PyTuple_Check(cpy_r_r2))
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL3050;
    if (cpy_r_r2 == Py_None)
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL3050;
    CPy_TypeErrorTraceback("mypy/literals.py", "literal_hash", 139, CPyStatic_mypy___literals___globals, "tuple or None", cpy_r_r2);
    goto CPyL6;
__LL3050: ;
    return cpy_r_r3;
CPyL6: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_mypy___literals___literal_hash(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:literal_hash", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_e;
    if (likely(PyObject_TypeCheck(obj_e, CPyType_nodes___Expression)))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals___literal_hash(arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "literal_hash", 138, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals___extract_var_from_literal_hash(PyObject *cpy_r_key) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_key)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = cpy_r_r2 == 4;
    if (!cpy_r_r3) goto CPyL10;
    cpy_r_r4 = CPySequenceTuple_GetItem(cpy_r_key, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "extract_var_from_literal_hash", 147, CPyStatic_mypy___literals___globals);
        goto CPyL11;
    }
    cpy_r_r5 = CPyStatics[104]; /* 'Var' */
    cpy_r_r6 = PyObject_RichCompare(cpy_r_r4, cpy_r_r5, 2);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "extract_var_from_literal_hash", 147, CPyStatic_mypy___literals___globals);
        goto CPyL11;
    }
    cpy_r_r7 = PyObject_IsTrue(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/literals.py", "extract_var_from_literal_hash", 147, CPyStatic_mypy___literals___globals);
        goto CPyL11;
    }
    cpy_r_r9 = cpy_r_r7;
    if (!cpy_r_r9) goto CPyL10;
    cpy_r_r10 = CPySequenceTuple_GetItem(cpy_r_key, 2);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "extract_var_from_literal_hash", 147, CPyStatic_mypy___literals___globals);
        goto CPyL11;
    }
    cpy_r_r11 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_r10)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    CPy_DECREF(cpy_r_r10);
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = CPySequenceTuple_GetItem(cpy_r_key, 2);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "extract_var_from_literal_hash", 148, CPyStatic_mypy___literals___globals);
        goto CPyL11;
    }
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_nodes___Var))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "extract_var_from_literal_hash", 148, CPyStatic_mypy___literals___globals, "mypy.nodes.Var", cpy_r_r15);
        goto CPyL11;
    }
    return cpy_r_r16;
CPyL10: ;
    cpy_r_r17 = Py_None;
    CPy_INCREF(cpy_r_r17);
    return cpy_r_r17;
CPyL11: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
}

PyObject *CPyPy_mypy___literals___extract_var_from_literal_hash(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:extract_var_from_literal_hash", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject * arg_key;
    if (likely(PyTuple_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("tuple", obj_key); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals___extract_var_from_literal_hash(arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "extract_var_from_literal_hash", 142, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_int_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    tuple_T2OI cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[1155]; /* 'Literal' */
    cpy_r_r1 = ((mypy___nodes___IntExprObject *)cpy_r_e)->_value;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPyTagged_INCREF(cpy_r_r2.f1);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3051 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp3051);
    PyObject *__tmp3052 = CPyTagged_StealAsObject(cpy_r_r2.f1);
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp3052);
    return cpy_r_r3;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_int_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___IntExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_int_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_int_expr", 153, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_int_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_int_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_int_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_int_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_int_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_str_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[1155]; /* 'Literal' */
    cpy_r_r1 = ((mypy___nodes___StrExprObject *)cpy_r_e)->_value;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3053 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp3053);
    PyObject *__tmp3054 = cpy_r_r2.f1;
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp3054);
    return cpy_r_r3;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_str_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___StrExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_str_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_str_expr", 156, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_str_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_str_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_str_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StrExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_str_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_str_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_bytes_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[1155]; /* 'Literal' */
    cpy_r_r1 = ((mypy___nodes___BytesExprObject *)cpy_r_e)->_value;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3055 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp3055);
    PyObject *__tmp3056 = cpy_r_r2.f1;
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp3056);
    return cpy_r_r3;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_bytes_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___BytesExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_bytes_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_bytes_expr", 159, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_bytes_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_bytes_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_bytes_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BytesExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_bytes_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_bytes_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_float_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    double cpy_r_r1;
    tuple_T2OF cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[1155]; /* 'Literal' */
    cpy_r_r1 = ((mypy___nodes___FloatExprObject *)cpy_r_e)->_value;
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3057 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp3057);
    PyObject *__tmp3058 = PyFloat_FromDouble(cpy_r_r2.f1);
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp3058);
    return cpy_r_r3;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_float_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___FloatExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_float_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_float_expr", 162, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_float_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_float_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_float_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FloatExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_float_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_float_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_complex_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[1155]; /* 'Literal' */
    cpy_r_r1 = ((mypy___nodes___ComplexExprObject *)cpy_r_e)->_value;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3059 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp3059);
    PyObject *__tmp3060 = cpy_r_r2.f1;
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp3060);
    return cpy_r_r3;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_complex_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___ComplexExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_complex_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_complex_expr", 165, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_complex_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_complex_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_complex_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComplexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_complex_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_complex_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_star_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[2705]; /* 'Star' */
    cpy_r_r1 = ((mypy___nodes___StarExprObject *)cpy_r_e)->_expr;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_mypy___literals___literal_hash(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_star_expr", 169, CPyStatic_mypy___literals___globals);
        goto CPyL2;
    }
    cpy_r_r3.f0 = cpy_r_r0;
    cpy_r_r3.f1 = cpy_r_r2;
    CPy_INCREF(cpy_r_r3.f0);
    CPy_INCREF(cpy_r_r3.f1);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = PyTuple_New(2);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3061 = cpy_r_r3.f0;
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp3061);
    PyObject *__tmp3062 = cpy_r_r3.f1;
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp3062);
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_star_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___StarExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_star_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_star_expr", 168, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_star_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_star_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_star_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_star_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_star_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    tuple_T2OO cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    tuple_T2OO cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = ((mypy___nodes___NameExprObject *)cpy_r_e)->_node;
    cpy_r_r1 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL7;
    cpy_r_r5 = ((mypy___nodes___NameExprObject *)cpy_r_e)->_node;
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_nodes___Var))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "visit_name_expr", 172, CPyStatic_mypy___literals___globals, "mypy.nodes.Var", cpy_r_r5);
        goto CPyL8;
    }
    cpy_r_r7 = ((mypy___nodes___VarObject *)cpy_r_r6)->_is_final;
    if (!cpy_r_r7) goto CPyL7;
CPyL3: ;
    cpy_r_r8 = ((mypy___nodes___NameExprObject *)cpy_r_e)->_node;
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_nodes___Var))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "visit_name_expr", 172, CPyStatic_mypy___literals___globals, "mypy.nodes.Var", cpy_r_r8);
        goto CPyL8;
    }
    cpy_r_r10 = ((mypy___nodes___VarObject *)cpy_r_r9)->_final_value;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_r10 != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL7;
    cpy_r_r13 = CPyStatics[1155]; /* 'Literal' */
    cpy_r_r14 = ((mypy___nodes___NameExprObject *)cpy_r_e)->_node;
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_nodes___Var))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "visit_name_expr", 173, CPyStatic_mypy___literals___globals, "mypy.nodes.Var", cpy_r_r14);
        goto CPyL8;
    }
    cpy_r_r16 = ((mypy___nodes___VarObject *)cpy_r_r15)->_final_value;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17.f0 = cpy_r_r13;
    cpy_r_r17.f1 = cpy_r_r16;
    CPy_INCREF(cpy_r_r17.f0);
    CPy_INCREF(cpy_r_r17.f1);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = PyTuple_New(2);
    if (unlikely(cpy_r_r18 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3063 = cpy_r_r17.f0;
    PyTuple_SET_ITEM(cpy_r_r18, 0, __tmp3063);
    PyObject *__tmp3064 = cpy_r_r17.f1;
    PyTuple_SET_ITEM(cpy_r_r18, 1, __tmp3064);
    return cpy_r_r18;
CPyL7: ;
    cpy_r_r19 = CPyStatics[104]; /* 'Var' */
    cpy_r_r20 = ((mypy___nodes___NameExprObject *)cpy_r_e)->_node;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21.f0 = cpy_r_r19;
    cpy_r_r21.f1 = cpy_r_r20;
    CPy_INCREF(cpy_r_r21.f0);
    CPy_INCREF(cpy_r_r21.f1);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = PyTuple_New(2);
    if (unlikely(cpy_r_r22 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3065 = cpy_r_r21.f0;
    PyTuple_SET_ITEM(cpy_r_r22, 0, __tmp3065);
    PyObject *__tmp3066 = cpy_r_r21.f1;
    PyTuple_SET_ITEM(cpy_r_r22, 1, __tmp3066);
    return cpy_r_r22;
CPyL8: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___NameExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_name_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_name_expr", 171, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_member_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T3OOO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyStatics[2706]; /* 'Member' */
    cpy_r_r1 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_expr;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_mypy___literals___literal_hash(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_member_expr", 180, CPyStatic_mypy___literals___globals);
        goto CPyL2;
    }
    cpy_r_r3 = ((mypy___nodes___MemberExprObject *)cpy_r_e)->_name;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4.f0 = cpy_r_r0;
    cpy_r_r4.f1 = cpy_r_r2;
    cpy_r_r4.f2 = cpy_r_r3;
    CPy_INCREF(cpy_r_r4.f0);
    CPy_INCREF(cpy_r_r4.f1);
    CPy_INCREF(cpy_r_r4.f2);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = PyTuple_New(3);
    if (unlikely(cpy_r_r5 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3067 = cpy_r_r4.f0;
    PyTuple_SET_ITEM(cpy_r_r5, 0, __tmp3067);
    PyObject *__tmp3068 = cpy_r_r4.f1;
    PyTuple_SET_ITEM(cpy_r_r5, 1, __tmp3068);
    PyObject *__tmp3069 = cpy_r_r4.f2;
    PyTuple_SET_ITEM(cpy_r_r5, 2, __tmp3069);
    return cpy_r_r5;
CPyL2: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_member_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___MemberExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_member_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_member_expr", 179, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_member_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_member_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_member_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_member_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_member_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_op_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T4OOOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[2707]; /* 'Binary' */
    cpy_r_r1 = ((mypy___nodes___OpExprObject *)cpy_r_e)->_op;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___nodes___OpExprObject *)cpy_r_e)->_left;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_mypy___literals___literal_hash(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_op_expr", 183, CPyStatic_mypy___literals___globals);
        goto CPyL4;
    }
    cpy_r_r4 = ((mypy___nodes___OpExprObject *)cpy_r_e)->_right;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_mypy___literals___literal_hash(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_op_expr", 183, CPyStatic_mypy___literals___globals);
        goto CPyL5;
    }
    cpy_r_r6.f0 = cpy_r_r0;
    cpy_r_r6.f1 = cpy_r_r1;
    cpy_r_r6.f2 = cpy_r_r3;
    cpy_r_r6.f3 = cpy_r_r5;
    CPy_INCREF(cpy_r_r6.f0);
    CPy_INCREF(cpy_r_r6.f1);
    CPy_INCREF(cpy_r_r6.f2);
    CPy_INCREF(cpy_r_r6.f3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = PyTuple_New(4);
    if (unlikely(cpy_r_r7 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3070 = cpy_r_r6.f0;
    PyTuple_SET_ITEM(cpy_r_r7, 0, __tmp3070);
    PyObject *__tmp3071 = cpy_r_r6.f1;
    PyTuple_SET_ITEM(cpy_r_r7, 1, __tmp3071);
    PyObject *__tmp3072 = cpy_r_r6.f2;
    PyTuple_SET_ITEM(cpy_r_r7, 2, __tmp3072);
    PyObject *__tmp3073 = cpy_r_r6.f3;
    PyTuple_SET_ITEM(cpy_r_r7, 3, __tmp3073);
    return cpy_r_r7;
CPyL3: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL4: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL3;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_op_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___OpExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_op_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_op_expr", 182, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_op_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_op_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_op_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_op_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_op_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_comparison_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_rest;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_o;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T1O cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = ((mypy___nodes___ComparisonExprObject *)cpy_r_e)->_operators;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_AsTuple(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_comparison_expr", 186, CPyStatic_mypy___literals___globals);
        goto CPyL13;
    }
    cpy_r_rest = cpy_r_r1;
    cpy_r_r2 = ((mypy___nodes___ComparisonExprObject *)cpy_r_e)->_operands;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = PyTuple_New(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_comparison_expr", 187, CPyStatic_mypy___literals___globals);
        goto CPyL14;
    }
    cpy_r_r6 = 0;
CPyL3: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL15;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r6);
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_nodes___Expression)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "visit_comparison_expr", 187, CPyStatic_mypy___literals___globals, "mypy.nodes.Expression", cpy_r_r11);
        goto CPyL16;
    }
    cpy_r_o = cpy_r_r12;
    cpy_r_r13 = CPyDef_mypy___literals___literal_hash(cpy_r_o);
    CPy_DECREF(cpy_r_o);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_comparison_expr", 187, CPyStatic_mypy___literals___globals);
        goto CPyL16;
    }
    cpy_r_r14 = CPySequenceTuple_SetItemUnsafe(cpy_r_r5, cpy_r_r6, cpy_r_r13);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/literals.py", "visit_comparison_expr", 187, CPyStatic_mypy___literals___globals);
        goto CPyL16;
    }
    cpy_r_r15 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r15;
    goto CPyL3;
CPyL8: ;
    cpy_r_r16 = PyNumber_InPlaceAdd(cpy_r_rest, cpy_r_r5);
    CPy_DECREF(cpy_r_rest);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_comparison_expr", 187, CPyStatic_mypy___literals___globals);
        goto CPyL13;
    }
    if (likely(PyTuple_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "visit_comparison_expr", 187, CPyStatic_mypy___literals___globals, "tuple", cpy_r_r16);
        goto CPyL13;
    }
    cpy_r_rest = cpy_r_r17;
    cpy_r_r18 = CPyStatics[2708]; /* 'Comparison' */
    cpy_r_r19.f0 = cpy_r_r18;
    CPy_INCREF(cpy_r_r19.f0);
    cpy_r_r20 = PyTuple_New(1);
    if (unlikely(cpy_r_r20 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3074 = cpy_r_r19.f0;
    PyTuple_SET_ITEM(cpy_r_r20, 0, __tmp3074);
    cpy_r_r21 = PyNumber_Add(cpy_r_r20, cpy_r_rest);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_rest);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_comparison_expr", 188, CPyStatic_mypy___literals___globals);
        goto CPyL13;
    }
    if (likely(PyTuple_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "visit_comparison_expr", 188, CPyStatic_mypy___literals___globals, "tuple", cpy_r_r21);
        goto CPyL13;
    }
    return cpy_r_r22;
CPyL13: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL14: ;
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_r2);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL8;
CPyL16: ;
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL13;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_comparison_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___ComparisonExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_comparison_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_comparison_expr", 185, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_comparison_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_comparison_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_comparison_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_comparison_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_comparison_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_unary_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T3OOO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyStatics[2709]; /* 'Unary' */
    cpy_r_r1 = ((mypy___nodes___UnaryExprObject *)cpy_r_e)->_op;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___nodes___UnaryExprObject *)cpy_r_e)->_expr;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_mypy___literals___literal_hash(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_unary_expr", 191, CPyStatic_mypy___literals___globals);
        goto CPyL3;
    }
    cpy_r_r4.f0 = cpy_r_r0;
    cpy_r_r4.f1 = cpy_r_r1;
    cpy_r_r4.f2 = cpy_r_r3;
    CPy_INCREF(cpy_r_r4.f0);
    CPy_INCREF(cpy_r_r4.f1);
    CPy_INCREF(cpy_r_r4.f2);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = PyTuple_New(3);
    if (unlikely(cpy_r_r5 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3075 = cpy_r_r4.f0;
    PyTuple_SET_ITEM(cpy_r_r5, 0, __tmp3075);
    PyObject *__tmp3076 = cpy_r_r4.f1;
    PyTuple_SET_ITEM(cpy_r_r5, 1, __tmp3076);
    PyObject *__tmp3077 = cpy_r_r4.f2;
    PyTuple_SET_ITEM(cpy_r_r5, 2, __tmp3077);
    return cpy_r_r5;
CPyL2: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL3: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_unary_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___UnaryExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_unary_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_unary_expr", 190, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_unary_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_unary_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_unary_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_unary_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_unary_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___seq_expr(PyObject *cpy_r_self, PyObject *cpy_r_e, PyObject *cpy_r_name) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_x;
    CPyTagged cpy_r_r23;
    int64_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyPtr cpy_r_r46;
    int64_t cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    CPyPtr cpy_r_r50;
    int64_t cpy_r_r51;
    CPyTagged cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_x_2;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    CPyTagged cpy_r_r58;
    PyObject *cpy_r_rest;
    tuple_T1O cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    cpy_r_r0 = 1;
    cpy_r_r1 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL3;
    CPy_INCREF(cpy_r_e);
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___ListExpr))
        cpy_r_r5 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "seq_expr", 194, CPyStatic_mypy___literals___globals, "mypy.nodes.ListExpr", cpy_r_e);
        goto CPyL38;
    }
    cpy_r_r6 = ((mypy___nodes___ListExprObject *)cpy_r_r5)->_items;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6;
    goto CPyL8;
CPyL3: ;
    cpy_r_r8 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL6;
    CPy_INCREF(cpy_r_e);
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___TupleExpr))
        cpy_r_r12 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "seq_expr", 194, CPyStatic_mypy___literals___globals, "mypy.nodes.TupleExpr", cpy_r_e);
        goto CPyL38;
    }
    cpy_r_r13 = ((mypy___nodes___TupleExprObject *)cpy_r_r12)->_items;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r7 = cpy_r_r13;
    goto CPyL8;
CPyL6: ;
    CPy_INCREF(cpy_r_e);
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___SetExpr))
        cpy_r_r14 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "seq_expr", 194, CPyStatic_mypy___literals___globals, "mypy.nodes.SetExpr", cpy_r_e);
        goto CPyL38;
    }
    cpy_r_r15 = ((mypy___nodes___SetExprObject *)cpy_r_r14)->_items;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r7 = cpy_r_r15;
CPyL8: ;
    cpy_r_r16 = 0;
CPyL9: ;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = (Py_ssize_t)cpy_r_r16 < (Py_ssize_t)cpy_r_r19;
    if (!cpy_r_r20) goto CPyL39;
    cpy_r_r21 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r16);
    if (likely(PyObject_TypeCheck(cpy_r_r21, CPyType_nodes___Expression)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "seq_expr", 194, CPyStatic_mypy___literals___globals, "mypy.nodes.Expression", cpy_r_r21);
        goto CPyL40;
    }
    cpy_r_x = cpy_r_r22;
    cpy_r_r23 = CPyDef_mypy___literals___literal(cpy_r_x);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r23 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/literals.py", "seq_expr", 194, CPyStatic_mypy___literals___globals);
        goto CPyL40;
    }
    cpy_r_r24 = cpy_r_r23 & 1;
    cpy_r_r25 = cpy_r_r24 == 0;
    if (!cpy_r_r25) goto CPyL14;
    cpy_r_r26 = cpy_r_r23 == 4;
    CPyTagged_DECREF(cpy_r_r23);
    cpy_r_r27 = cpy_r_r26;
    goto CPyL15;
CPyL14: ;
    cpy_r_r28 = CPyTagged_IsEq_(cpy_r_r23, 4);
    CPyTagged_DECREF(cpy_r_r23);
    cpy_r_r27 = cpy_r_r28;
CPyL15: ;
    cpy_r_r29 = cpy_r_r27 ^ 1;
    if (cpy_r_r29) {
        goto CPyL41;
    } else
        goto CPyL17;
CPyL16: ;
    cpy_r_r0 = 0;
    goto CPyL18;
CPyL17: ;
    cpy_r_r30 = cpy_r_r16 + 2;
    cpy_r_r16 = cpy_r_r30;
    goto CPyL9;
CPyL18: ;
    if (!cpy_r_r0) goto CPyL37;
    cpy_r_r31 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL22;
    CPy_INCREF(cpy_r_e);
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___ListExpr))
        cpy_r_r35 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "seq_expr", 195, CPyStatic_mypy___literals___globals, "mypy.nodes.ListExpr", cpy_r_e);
        goto CPyL38;
    }
    cpy_r_r36 = ((mypy___nodes___ListExprObject *)cpy_r_r35)->_items;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36;
    goto CPyL27;
CPyL22: ;
    cpy_r_r38 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r39 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r40 = *(PyObject * *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 == cpy_r_r38;
    if (!cpy_r_r41) goto CPyL25;
    CPy_INCREF(cpy_r_e);
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___TupleExpr))
        cpy_r_r42 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "seq_expr", 195, CPyStatic_mypy___literals___globals, "mypy.nodes.TupleExpr", cpy_r_e);
        goto CPyL38;
    }
    cpy_r_r43 = ((mypy___nodes___TupleExprObject *)cpy_r_r42)->_items;
    CPy_INCREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r37 = cpy_r_r43;
    goto CPyL27;
CPyL25: ;
    CPy_INCREF(cpy_r_e);
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___SetExpr))
        cpy_r_r44 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "seq_expr", 195, CPyStatic_mypy___literals___globals, "mypy.nodes.SetExpr", cpy_r_e);
        goto CPyL38;
    }
    cpy_r_r45 = ((mypy___nodes___SetExprObject *)cpy_r_r44)->_items;
    CPy_INCREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r37 = cpy_r_r45;
CPyL27: ;
    cpy_r_r46 = (CPyPtr)&((PyVarObject *)cpy_r_r37)->ob_size;
    cpy_r_r47 = *(int64_t *)cpy_r_r46;
    cpy_r_r48 = PyTuple_New(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "seq_expr", 195, CPyStatic_mypy___literals___globals);
        goto CPyL42;
    }
    cpy_r_r49 = 0;
CPyL29: ;
    cpy_r_r50 = (CPyPtr)&((PyVarObject *)cpy_r_r37)->ob_size;
    cpy_r_r51 = *(int64_t *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 << 1;
    cpy_r_r53 = (Py_ssize_t)cpy_r_r49 < (Py_ssize_t)cpy_r_r52;
    if (!cpy_r_r53) goto CPyL43;
    cpy_r_r54 = CPyList_GetItemUnsafe(cpy_r_r37, cpy_r_r49);
    if (likely(PyObject_TypeCheck(cpy_r_r54, CPyType_nodes___Expression)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "seq_expr", 195, CPyStatic_mypy___literals___globals, "mypy.nodes.Expression", cpy_r_r54);
        goto CPyL44;
    }
    cpy_r_x_2 = cpy_r_r55;
    cpy_r_r56 = CPyDef_mypy___literals___literal_hash(cpy_r_x_2);
    CPy_DECREF(cpy_r_x_2);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "seq_expr", 195, CPyStatic_mypy___literals___globals);
        goto CPyL44;
    }
    cpy_r_r57 = CPySequenceTuple_SetItemUnsafe(cpy_r_r48, cpy_r_r49, cpy_r_r56);
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/literals.py", "seq_expr", 195, CPyStatic_mypy___literals___globals);
        goto CPyL44;
    }
    cpy_r_r58 = cpy_r_r49 + 2;
    cpy_r_r49 = cpy_r_r58;
    goto CPyL29;
CPyL34: ;
    cpy_r_rest = cpy_r_r48;
    cpy_r_r59.f0 = cpy_r_name;
    CPy_INCREF(cpy_r_r59.f0);
    cpy_r_r60 = PyTuple_New(1);
    if (unlikely(cpy_r_r60 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3078 = cpy_r_r59.f0;
    PyTuple_SET_ITEM(cpy_r_r60, 0, __tmp3078);
    cpy_r_r61 = PyNumber_Add(cpy_r_r60, cpy_r_rest);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_rest);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "seq_expr", 196, CPyStatic_mypy___literals___globals);
        goto CPyL38;
    }
    if (likely(PyTuple_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "seq_expr", 196, CPyStatic_mypy___literals___globals, "tuple", cpy_r_r61);
        goto CPyL38;
    }
    return cpy_r_r62;
CPyL37: ;
    cpy_r_r63 = Py_None;
    CPy_INCREF(cpy_r_r63);
    return cpy_r_r63;
CPyL38: ;
    cpy_r_r64 = NULL;
    return cpy_r_r64;
CPyL39: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL18;
CPyL40: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL38;
CPyL41: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL16;
CPyL42: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL38;
CPyL43: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL34;
CPyL44: ;
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r48);
    goto CPyL38;
}

PyObject *CPyPy_mypy___literals____Hasher___seq_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", "name", 0};
    static CPyArg_Parser parser = {"OO:seq_expr", kwlist, 0};
    PyObject *obj_e;
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_e, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (Py_TYPE(obj_e) == CPyType_nodes___ListExpr)
        arg_e = obj_e;
    else {
        arg_e = NULL;
    }
    if (arg_e != NULL) goto __LL3079;
    if (Py_TYPE(obj_e) == CPyType_nodes___TupleExpr)
        arg_e = obj_e;
    else {
        arg_e = NULL;
    }
    if (arg_e != NULL) goto __LL3079;
    if (Py_TYPE(obj_e) == CPyType_nodes___SetExpr)
        arg_e = obj_e;
    else {
        arg_e = NULL;
    }
    if (arg_e != NULL) goto __LL3079;
    CPy_TypeError("union[mypy.nodes.ListExpr, mypy.nodes.TupleExpr, mypy.nodes.SetExpr]", obj_e); 
    goto fail;
__LL3079: ;
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___seq_expr(arg_self, arg_e, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "seq_expr", 193, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_list_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyStatics[81]; /* 'List' */
    cpy_r_r1 = CPyDef_mypy___literals____Hasher___seq_expr(cpy_r_self, cpy_r_e, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_list_expr", 200, CPyStatic_mypy___literals___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_list_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___ListExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_list_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_list_expr", 199, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_list_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_list_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_list_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_list_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_list_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_dict_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
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
    PyObject *cpy_r_a;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_b;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_r16;
    int64_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    int64_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    tuple_T2OO cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_a_2;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_b_2;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    tuple_T2OO cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    PyObject *cpy_r_rest;
    PyObject *cpy_r_r57;
    tuple_T1O cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    cpy_r_r0 = 1;
    cpy_r_r1 = ((mypy___nodes___DictExprObject *)cpy_r_e)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL1: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL40;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    PyObject *__tmp3080;
    if (unlikely(!(PyTuple_Check(cpy_r_r7) && PyTuple_GET_SIZE(cpy_r_r7) == 2))) {
        __tmp3080 = NULL;
        goto __LL3081;
    }
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r7, 0), CPyType_nodes___Expression))
        __tmp3080 = PyTuple_GET_ITEM(cpy_r_r7, 0);
    else {
        __tmp3080 = NULL;
    }
    if (__tmp3080 != NULL) goto __LL3082;
    if (PyTuple_GET_ITEM(cpy_r_r7, 0) == Py_None)
        __tmp3080 = PyTuple_GET_ITEM(cpy_r_r7, 0);
    else {
        __tmp3080 = NULL;
    }
    if (__tmp3080 != NULL) goto __LL3082;
    __tmp3080 = NULL;
__LL3082: ;
    if (__tmp3080 == NULL) goto __LL3081;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r7, 1), CPyType_nodes___Expression)))
        __tmp3080 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp3080 = NULL;
    }
    if (__tmp3080 == NULL) goto __LL3081;
    __tmp3080 = cpy_r_r7;
__LL3081: ;
    if (unlikely(__tmp3080 == NULL)) {
        CPy_TypeError("tuple[union[mypy.nodes.Expression, None], mypy.nodes.Expression]", cpy_r_r7); cpy_r_r8 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3083 = PyTuple_GET_ITEM(cpy_r_r7, 0);
        CPy_INCREF(__tmp3083);
        PyObject *__tmp3084;
        if (PyObject_TypeCheck(__tmp3083, CPyType_nodes___Expression))
            __tmp3084 = __tmp3083;
        else {
            __tmp3084 = NULL;
        }
        if (__tmp3084 != NULL) goto __LL3085;
        if (__tmp3083 == Py_None)
            __tmp3084 = __tmp3083;
        else {
            __tmp3084 = NULL;
        }
        if (__tmp3084 != NULL) goto __LL3085;
        CPy_TypeError("mypy.nodes.Expression or None", __tmp3083); 
        __tmp3084 = NULL;
__LL3085: ;
        cpy_r_r8.f0 = __tmp3084;
        PyObject *__tmp3086 = PyTuple_GET_ITEM(cpy_r_r7, 1);
        CPy_INCREF(__tmp3086);
        PyObject *__tmp3087;
        if (likely(PyObject_TypeCheck(__tmp3086, CPyType_nodes___Expression)))
            __tmp3087 = __tmp3086;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp3086); 
            __tmp3087 = NULL;
        }
        cpy_r_r8.f1 = __tmp3087;
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_dict_expr", 203, CPyStatic_mypy___literals___globals);
        goto CPyL41;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r9);
    cpy_r_a = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f1;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r8.f1);
    cpy_r_b = cpy_r_r10;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_a != cpy_r_r11;
    if (cpy_r_r12) {
        goto CPyL5;
    } else
        goto CPyL42;
CPyL4: ;
    cpy_r_r13 = cpy_r_a;
    goto CPyL18;
CPyL5: ;
    if (likely(cpy_r_a != Py_None))
        cpy_r_r14 = cpy_r_a;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "visit_dict_expr", 203, CPyStatic_mypy___literals___globals, "mypy.nodes.Expression", cpy_r_a);
        goto CPyL43;
    }
    cpy_r_r15 = CPyDef_mypy___literals___literal(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/literals.py", "visit_dict_expr", 203, CPyStatic_mypy___literals___globals);
        goto CPyL43;
    }
    cpy_r_r16 = CPyDef_mypy___literals___literal(cpy_r_b);
    CPy_DECREF(cpy_r_b);
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/literals.py", "visit_dict_expr", 203, CPyStatic_mypy___literals___globals);
        goto CPyL44;
    }
    cpy_r_r17 = cpy_r_r15 & 1;
    cpy_r_r18 = cpy_r_r17 == 0;
    if (!cpy_r_r18) goto CPyL10;
    cpy_r_r19 = cpy_r_r15 == cpy_r_r16;
    CPyTagged_DECREF(cpy_r_r15);
    cpy_r_r20 = cpy_r_r19;
    goto CPyL11;
CPyL10: ;
    cpy_r_r21 = CPyTagged_IsEq_(cpy_r_r15, cpy_r_r16);
    CPyTagged_DECREF(cpy_r_r15);
    cpy_r_r20 = cpy_r_r21;
CPyL11: ;
    if (cpy_r_r20) {
        goto CPyL13;
    } else
        goto CPyL45;
CPyL12: ;
    cpy_r_r22 = cpy_r_r20;
    goto CPyL17;
CPyL13: ;
    cpy_r_r23 = cpy_r_r16 & 1;
    cpy_r_r24 = cpy_r_r23 == 0;
    if (!cpy_r_r24) goto CPyL15;
    cpy_r_r25 = cpy_r_r16 == 4;
    CPyTagged_DECREF(cpy_r_r16);
    cpy_r_r26 = cpy_r_r25;
    goto CPyL16;
CPyL15: ;
    cpy_r_r27 = CPyTagged_IsEq_(cpy_r_r16, 4);
    CPyTagged_DECREF(cpy_r_r16);
    cpy_r_r26 = cpy_r_r27;
CPyL16: ;
    cpy_r_r22 = cpy_r_r26;
CPyL17: ;
    cpy_r_r28 = cpy_r_r22 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r13 = cpy_r_r28;
CPyL18: ;
    cpy_r_r29 = PyObject_Not(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/literals.py", "visit_dict_expr", 203, CPyStatic_mypy___literals___globals);
        goto CPyL41;
    }
    cpy_r_r31 = cpy_r_r29;
    if (cpy_r_r31) {
        goto CPyL46;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r0 = 0;
    goto CPyL22;
CPyL21: ;
    cpy_r_r32 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r32;
    goto CPyL1;
CPyL22: ;
    if (!cpy_r_r0) goto CPyL38;
    cpy_r_r33 = ((mypy___nodes___DictExprObject *)cpy_r_e)->_items;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r33)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = PyTuple_New(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_dict_expr", 204, CPyStatic_mypy___literals___globals);
        goto CPyL47;
    }
    cpy_r_r37 = 0;
CPyL25: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r33)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r40;
    if (!cpy_r_r41) goto CPyL48;
    cpy_r_r42 = CPyList_GetItemUnsafe(cpy_r_r33, cpy_r_r37);
    PyObject *__tmp3088;
    if (unlikely(!(PyTuple_Check(cpy_r_r42) && PyTuple_GET_SIZE(cpy_r_r42) == 2))) {
        __tmp3088 = NULL;
        goto __LL3089;
    }
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r42, 0), CPyType_nodes___Expression))
        __tmp3088 = PyTuple_GET_ITEM(cpy_r_r42, 0);
    else {
        __tmp3088 = NULL;
    }
    if (__tmp3088 != NULL) goto __LL3090;
    if (PyTuple_GET_ITEM(cpy_r_r42, 0) == Py_None)
        __tmp3088 = PyTuple_GET_ITEM(cpy_r_r42, 0);
    else {
        __tmp3088 = NULL;
    }
    if (__tmp3088 != NULL) goto __LL3090;
    __tmp3088 = NULL;
__LL3090: ;
    if (__tmp3088 == NULL) goto __LL3089;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r42, 1), CPyType_nodes___Expression)))
        __tmp3088 = PyTuple_GET_ITEM(cpy_r_r42, 1);
    else {
        __tmp3088 = NULL;
    }
    if (__tmp3088 == NULL) goto __LL3089;
    __tmp3088 = cpy_r_r42;
__LL3089: ;
    if (unlikely(__tmp3088 == NULL)) {
        CPy_TypeError("tuple[union[mypy.nodes.Expression, None], mypy.nodes.Expression]", cpy_r_r42); cpy_r_r43 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp3091 = PyTuple_GET_ITEM(cpy_r_r42, 0);
        CPy_INCREF(__tmp3091);
        PyObject *__tmp3092;
        if (PyObject_TypeCheck(__tmp3091, CPyType_nodes___Expression))
            __tmp3092 = __tmp3091;
        else {
            __tmp3092 = NULL;
        }
        if (__tmp3092 != NULL) goto __LL3093;
        if (__tmp3091 == Py_None)
            __tmp3092 = __tmp3091;
        else {
            __tmp3092 = NULL;
        }
        if (__tmp3092 != NULL) goto __LL3093;
        CPy_TypeError("mypy.nodes.Expression or None", __tmp3091); 
        __tmp3092 = NULL;
__LL3093: ;
        cpy_r_r43.f0 = __tmp3092;
        PyObject *__tmp3094 = PyTuple_GET_ITEM(cpy_r_r42, 1);
        CPy_INCREF(__tmp3094);
        PyObject *__tmp3095;
        if (likely(PyObject_TypeCheck(__tmp3094, CPyType_nodes___Expression)))
            __tmp3095 = __tmp3094;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp3094); 
            __tmp3095 = NULL;
        }
        cpy_r_r43.f1 = __tmp3095;
    }
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43.f0 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_dict_expr", 204, CPyStatic_mypy___literals___globals);
        goto CPyL49;
    }
    cpy_r_r44 = cpy_r_r43.f0;
    CPy_INCREF(cpy_r_r44);
    cpy_r_a_2 = cpy_r_r44;
    cpy_r_r45 = cpy_r_r43.f1;
    CPy_INCREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r43.f0);
    CPy_DECREF(cpy_r_r43.f1);
    cpy_r_b_2 = cpy_r_r45;
    cpy_r_r46 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r47 = cpy_r_a_2 != cpy_r_r46;
    if (!cpy_r_r47) goto CPyL50;
    if (likely(cpy_r_a_2 != Py_None))
        cpy_r_r48 = cpy_r_a_2;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "visit_dict_expr", 205, CPyStatic_mypy___literals___globals, "mypy.nodes.Expression", cpy_r_a_2);
        goto CPyL51;
    }
    cpy_r_r49 = CPyDef_mypy___literals___literal_hash(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_dict_expr", 205, CPyStatic_mypy___literals___globals);
        goto CPyL51;
    }
    cpy_r_r50 = cpy_r_r49;
    goto CPyL32;
CPyL31: ;
    cpy_r_r51 = Py_None;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r50 = cpy_r_r51;
CPyL32: ;
    cpy_r_r52 = CPyDef_mypy___literals___literal_hash(cpy_r_b_2);
    CPy_DECREF(cpy_r_b_2);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_dict_expr", 205, CPyStatic_mypy___literals___globals);
        goto CPyL52;
    }
    cpy_r_r53.f0 = cpy_r_r50;
    cpy_r_r53.f1 = cpy_r_r52;
    CPy_INCREF(cpy_r_r53.f0);
    CPy_INCREF(cpy_r_r53.f1);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = PyTuple_New(2);
    if (unlikely(cpy_r_r54 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3096 = cpy_r_r53.f0;
    PyTuple_SET_ITEM(cpy_r_r54, 0, __tmp3096);
    PyObject *__tmp3097 = cpy_r_r53.f1;
    PyTuple_SET_ITEM(cpy_r_r54, 1, __tmp3097);
    cpy_r_r55 = CPySequenceTuple_SetItemUnsafe(cpy_r_r36, cpy_r_r37, cpy_r_r54);
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/literals.py", "visit_dict_expr", 204, CPyStatic_mypy___literals___globals);
        goto CPyL49;
    }
    cpy_r_r56 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r56;
    goto CPyL25;
CPyL35: ;
    cpy_r_rest = cpy_r_r36;
    cpy_r_r57 = CPyStatics[509]; /* 'Dict' */
    cpy_r_r58.f0 = cpy_r_r57;
    CPy_INCREF(cpy_r_r58.f0);
    cpy_r_r59 = PyTuple_New(1);
    if (unlikely(cpy_r_r59 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3098 = cpy_r_r58.f0;
    PyTuple_SET_ITEM(cpy_r_r59, 0, __tmp3098);
    cpy_r_r60 = PyNumber_Add(cpy_r_r59, cpy_r_rest);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_rest);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_dict_expr", 207, CPyStatic_mypy___literals___globals);
        goto CPyL39;
    }
    if (likely(PyTuple_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/literals.py", "visit_dict_expr", 207, CPyStatic_mypy___literals___globals, "tuple", cpy_r_r60);
        goto CPyL39;
    }
    return cpy_r_r61;
CPyL38: ;
    cpy_r_r62 = Py_None;
    CPy_INCREF(cpy_r_r62);
    return cpy_r_r62;
CPyL39: ;
    cpy_r_r63 = NULL;
    return cpy_r_r63;
CPyL40: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL22;
CPyL41: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL39;
CPyL42: ;
    CPy_DECREF(cpy_r_b);
    goto CPyL4;
CPyL43: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_b);
    goto CPyL39;
CPyL44: ;
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_r15);
    goto CPyL39;
CPyL45: ;
    CPyTagged_DECREF(cpy_r_r16);
    goto CPyL12;
CPyL46: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL20;
CPyL47: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL39;
CPyL48: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL35;
CPyL49: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r36);
    goto CPyL39;
CPyL50: ;
    CPy_DECREF(cpy_r_a_2);
    goto CPyL31;
CPyL51: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_b_2);
    goto CPyL39;
CPyL52: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r50);
    goto CPyL39;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_dict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___DictExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_dict_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_dict_expr", 202, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_dict_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_dict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_dict_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_dict_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_dict_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_tuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r1 = CPyDef_mypy___literals____Hasher___seq_expr(cpy_r_self, cpy_r_e, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_tuple_expr", 211, CPyStatic_mypy___literals___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_tuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___TupleExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_tuple_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_tuple_expr", 210, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_tuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_tuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_tuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_tuple_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_set_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyStatics[2633]; /* 'Set' */
    cpy_r_r1 = CPyDef_mypy___literals____Hasher___seq_expr(cpy_r_self, cpy_r_e, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_set_expr", 214, CPyStatic_mypy___literals___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_set_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___SetExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_set_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_set_expr", 213, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_set_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_set_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_set_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_set_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_set_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_index_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T3OOO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = ((mypy___nodes___IndexExprObject *)cpy_r_e)->_index;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_mypy___literals___literal(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/literals.py", "visit_index_expr", 217, CPyStatic_mypy___literals___globals);
        goto CPyL6;
    }
    cpy_r_r2 = cpy_r_r1 == 4;
    CPyTagged_DECREF(cpy_r_r1);
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = CPyStatics[2500]; /* 'Index' */
    cpy_r_r4 = ((mypy___nodes___IndexExprObject *)cpy_r_e)->_base;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_mypy___literals___literal_hash(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_index_expr", 218, CPyStatic_mypy___literals___globals);
        goto CPyL6;
    }
    cpy_r_r6 = ((mypy___nodes___IndexExprObject *)cpy_r_e)->_index;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_mypy___literals___literal_hash(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_index_expr", 218, CPyStatic_mypy___literals___globals);
        goto CPyL7;
    }
    cpy_r_r8.f0 = cpy_r_r3;
    cpy_r_r8.f1 = cpy_r_r5;
    cpy_r_r8.f2 = cpy_r_r7;
    CPy_INCREF(cpy_r_r8.f0);
    CPy_INCREF(cpy_r_r8.f1);
    CPy_INCREF(cpy_r_r8.f2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = PyTuple_New(3);
    if (unlikely(cpy_r_r9 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3099 = cpy_r_r8.f0;
    PyTuple_SET_ITEM(cpy_r_r9, 0, __tmp3099);
    PyObject *__tmp3100 = cpy_r_r8.f1;
    PyTuple_SET_ITEM(cpy_r_r9, 1, __tmp3100);
    PyObject *__tmp3101 = cpy_r_r8.f2;
    PyTuple_SET_ITEM(cpy_r_r9, 2, __tmp3101);
    return cpy_r_r9;
CPyL5: ;
    cpy_r_r10 = Py_None;
    CPy_INCREF(cpy_r_r10);
    return cpy_r_r10;
CPyL6: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL7: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL6;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_index_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___IndexExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_index_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_index_expr", 216, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_index_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_index_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_index_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_index_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_index_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_assignment_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___AssignmentExprObject *)cpy_r_e)->_target;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_mypy___literals___literal_hash(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "visit_assignment_expr", 222, CPyStatic_mypy___literals___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_assignment_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___AssignmentExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_assignment_expr(arg_self, arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_assignment_expr", 221, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_assignment_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_assignment_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_assignment_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_assignment_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_assignment_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___CallExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_call_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_call_expr", 224, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_call_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_slice_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_slice_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___SliceExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_slice_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_slice_expr", 227, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_slice_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_slice_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_slice_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SliceExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_slice_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_slice_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_cast_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_cast_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___CastExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_cast_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_cast_expr", 230, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_cast_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_cast_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_cast_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_cast_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_assert_type_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_assert_type_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___AssertTypeExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_assert_type_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_assert_type_expr", 233, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_assert_type_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_assert_type_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_conditional_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_conditional_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___ConditionalExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_conditional_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_conditional_expr", 236, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_conditional_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_conditional_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_conditional_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ConditionalExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_conditional_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_conditional_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_ellipsis(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_ellipsis(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___EllipsisExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_ellipsis(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_ellipsis", 239, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_ellipsis__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_ellipsis(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_ellipsis__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EllipsisExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_ellipsis__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_ellipsis__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_yield_from_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_yield_from_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___YieldFromExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_yield_from_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_yield_from_expr", 242, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_yield_from_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_yield_from_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_yield_from_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_yield_from_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_yield_from_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_yield_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_yield_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___YieldExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_yield_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_yield_expr", 245, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_yield_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_yield_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_yield_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_yield_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_yield_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_reveal_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_reveal_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___RevealExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_reveal_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_reveal_expr", 248, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_reveal_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_reveal_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_reveal_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RevealExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_reveal_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_reveal_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_super_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_super_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___SuperExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_super_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_super_expr", 251, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_super_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_super_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_super_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_super_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_super_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_type_application(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_type_application(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_type_application", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___TypeApplication))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_type_application(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_type_application", 254, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_type_application__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_type_application__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_type_application__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_type_application__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_lambda_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_lambda_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___LambdaExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_lambda_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_lambda_expr", 257, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_lambda_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_lambda_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_lambda_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_lambda_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_lambda_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_list_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_list_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___ListComprehension))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_list_comprehension(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_list_comprehension", 260, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_list_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_list_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_list_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_list_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_list_comprehension__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_set_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_set_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___SetComprehension))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_set_comprehension(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_set_comprehension", 263, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_set_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_set_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_set_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_set_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_set_comprehension__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_dictionary_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_dictionary_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___DictionaryComprehension))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_dictionary_comprehension(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_dictionary_comprehension", 266, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_dictionary_comprehension__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_dictionary_comprehension(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_dictionary_comprehension__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_dictionary_comprehension__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_dictionary_comprehension__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_generator_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_generator_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___GeneratorExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_generator_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_generator_expr", 269, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_generator_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_generator_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_generator_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_generator_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_generator_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_type_var_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_type_var_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___TypeVarExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_type_var_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_type_var_expr", 272, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_type_var_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_type_var_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_type_var_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_type_var_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_type_var_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_paramspec_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_paramspec_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_paramspec_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___ParamSpecExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.ParamSpecExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_paramspec_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_paramspec_expr", 275, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_paramspec_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_paramspec_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_paramspec_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_paramspec_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ParamSpecExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ParamSpecExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_paramspec_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_paramspec_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_type_var_tuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_type_var_tuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___TypeVarTupleExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.TypeVarTupleExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_type_var_tuple_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_type_var_tuple_expr", 278, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_type_var_tuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_type_var_tuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_type_var_tuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_type_var_tuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_type_var_tuple_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_type_alias_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_type_alias_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___TypeAliasExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_type_alias_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_type_alias_expr", 281, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_type_alias_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_type_alias_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_type_alias_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_type_alias_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_type_alias_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_namedtuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_namedtuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___NamedTupleExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_namedtuple_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_namedtuple_expr", 284, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_namedtuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_namedtuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_namedtuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_namedtuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_namedtuple_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_enum_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_enum_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_enum_call_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___EnumCallExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.EnumCallExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_enum_call_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_enum_call_expr", 287, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_enum_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_enum_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_enum_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_enum_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EnumCallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EnumCallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_enum_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_enum_call_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_typeddict_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_typeddict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___TypedDictExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_typeddict_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_typeddict_expr", 290, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_typeddict_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_typeddict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_typeddict_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_typeddict_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_typeddict_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_newtype_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_newtype_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___NewTypeExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_newtype_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_newtype_expr", 293, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_newtype_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_newtype_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_newtype_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_newtype_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit__promote_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit__promote_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___PromoteExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit__promote_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit__promote_expr", 296, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit__promote_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit__promote_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit__promote_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PromoteExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit__promote_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit__promote_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_await_expr(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_await_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___AwaitExpr))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_await_expr(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_await_expr", 299, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_await_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_await_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_await_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_await_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_await_expr__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals____Hasher___visit_temp_node(PyObject *cpy_r_self, PyObject *cpy_r_e) {
    return 1;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_temp_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:visit_temp_node", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(Py_TYPE(obj_e) == CPyType_nodes___TempNode))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.TempNode", obj_e); 
        goto fail;
    }
    char retval = CPyDef_mypy___literals____Hasher___visit_temp_node(arg_self, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_temp_node", 302, CPyStatic_mypy___literals___globals);
    return NULL;
}

PyObject *CPyDef_mypy___literals____Hasher___visit_temp_node__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mypy___literals____Hasher___visit_temp_node(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypy___literals____Hasher___visit_temp_node__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_temp_node__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___literals____Hasher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.literals._Hasher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TempNode))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TempNode", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___literals____Hasher___visit_temp_node__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/literals.py", "visit_temp_node__ExpressionVisitor_glue", -1, CPyStatic_mypy___literals___globals);
    return NULL;
}

char CPyDef_mypy___literals_____top_level__(void) {
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
    tuple_T2OO cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
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
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", -1, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_mypy___literals___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 1, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9452]; /* ('Any', 'Final', 'Iterable', 'Optional', 'Tuple') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_mypy___literals___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 3, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9086]; /* ('TypeAlias',) */
    cpy_r_r14 = CPyStatics[9087]; /* ('_TypeAlias',) */
    cpy_r_r15 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r16 = CPyStatic_mypy___literals___globals;
    cpy_r_r17 = CPyImport_ImportFromMany(cpy_r_r15, cpy_r_r13, cpy_r_r14, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 4, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    CPyModule_typing_extensions = cpy_r_r17;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r18 = CPyStatics[9453]; /* ('LITERAL_NO', 'LITERAL_TYPE', 'LITERAL_YES',
                                     'AssertTypeExpr', 'AssignmentExpr', 'AwaitExpr',
                                     'BytesExpr', 'CallExpr', 'CastExpr', 'ComparisonExpr',
                                     'ComplexExpr', 'ConditionalExpr', 'DictExpr',
                                     'DictionaryComprehension', 'EllipsisExpr',
                                     'EnumCallExpr', 'Expression', 'FloatExpr',
                                     'GeneratorExpr', 'IndexExpr', 'IntExpr', 'LambdaExpr',
                                     'ListComprehension', 'ListExpr', 'MemberExpr',
                                     'NamedTupleExpr', 'NameExpr', 'NewTypeExpr', 'OpExpr',
                                     'ParamSpecExpr', 'PromoteExpr', 'RevealExpr',
                                     'SetComprehension', 'SetExpr', 'SliceExpr', 'StarExpr',
                                     'StrExpr', 'SuperExpr', 'TempNode', 'TupleExpr',
                                     'TypeAliasExpr', 'TypeApplication', 'TypedDictExpr',
                                     'TypeVarExpr', 'TypeVarTupleExpr', 'UnaryExpr', 'Var',
                                     'YieldExpr', 'YieldFromExpr') */
    cpy_r_r19 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r20 = CPyStatic_mypy___literals___globals;
    cpy_r_r21 = CPyImport_ImportFromMany(cpy_r_r19, cpy_r_r18, cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 6, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    CPyModule_mypy___nodes = cpy_r_r21;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[9245]; /* ('ExpressionVisitor',) */
    cpy_r_r23 = CPyStatics[1087]; /* 'mypy.visitor' */
    cpy_r_r24 = CPyStatic_mypy___literals___globals;
    cpy_r_r25 = CPyImport_ImportFromMany(cpy_r_r23, cpy_r_r22, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 57, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    CPyModule_mypy___visitor = cpy_r_r25;
    CPy_INCREF(CPyModule_mypy___visitor);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r26 = CPyStatic_mypy___literals___globals;
    cpy_r_r27 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 131, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    cpy_r_r29 = CPyStatic_mypy___literals___globals;
    cpy_r_r30 = CPyStatics[507]; /* 'Any' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 131, CPyStatic_mypy___literals___globals);
        goto CPyL26;
    }
    cpy_r_r32 = (PyObject *)&_Py_EllipsisObject;
    cpy_r_r33.f0 = cpy_r_r31;
    cpy_r_r33.f1 = cpy_r_r32;
    CPy_INCREF(cpy_r_r33.f0);
    CPy_INCREF(cpy_r_r33.f1);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r34 = PyTuple_New(2);
    if (unlikely(cpy_r_r34 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3102 = cpy_r_r33.f0;
    PyTuple_SET_ITEM(cpy_r_r34, 0, __tmp3102);
    PyObject *__tmp3103 = cpy_r_r33.f1;
    PyTuple_SET_ITEM(cpy_r_r34, 1, __tmp3103);
    cpy_r_r35 = PyObject_GetItem(cpy_r_r28, cpy_r_r34);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 131, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    cpy_r_r36 = CPyStatic_mypy___literals___globals;
    cpy_r_r37 = CPyStatics[93]; /* 'Key' */
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r36, cpy_r_r37, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 131, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    cpy_r_r40 = (PyObject *)CPyType_mypy___visitor___ExpressionVisitor;
    cpy_r_r41 = CPyStatic_mypy___literals___globals;
    cpy_r_r42 = CPyStatics[82]; /* 'Optional' */
    cpy_r_r43 = CPyDict_GetItem(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 152, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    cpy_r_r44 = CPyStatic_mypy___literals___globals;
    cpy_r_r45 = CPyStatics[93]; /* 'Key' */
    cpy_r_r46 = CPyDict_GetItem(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 152, CPyStatic_mypy___literals___globals);
        goto CPyL27;
    }
    cpy_r_r47 = PyObject_GetItem(cpy_r_r43, cpy_r_r46);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 152, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    cpy_r_r48 = PyObject_GetItem(cpy_r_r40, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 152, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    cpy_r_r49 = PyTuple_Pack(1, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 152, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    cpy_r_r50 = CPyStatics[97]; /* 'mypy.literals' */
    cpy_r_r51 = (PyObject *)CPyType_mypy___literals____Hasher_template;
    cpy_r_r52 = CPyType_FromTemplate(cpy_r_r51, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 152, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    cpy_r_r53 = CPyDef_mypy___literals____Hasher_trait_vtable_setup();
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", -1, CPyStatic_mypy___literals___globals);
        goto CPyL28;
    }
    cpy_r_r54 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r55 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r56 = PyTuple_Pack(1, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 152, CPyStatic_mypy___literals___globals);
        goto CPyL28;
    }
    cpy_r_r57 = PyObject_SetAttr(cpy_r_r52, cpy_r_r54, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 152, CPyStatic_mypy___literals___globals);
        goto CPyL28;
    }
    CPyType_mypy___literals____Hasher = (PyTypeObject *)cpy_r_r52;
    CPy_INCREF(CPyType_mypy___literals____Hasher);
    cpy_r_r59 = CPyStatic_mypy___literals___globals;
    cpy_r_r60 = CPyStatics[2712]; /* '_Hasher' */
    cpy_r_r61 = CPyDict_SetItem(cpy_r_r59, cpy_r_r60, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 152, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    cpy_r_r63 = CPyDef_mypy___literals____Hasher();
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 306, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    CPyStatic_mypy___literals____hasher = cpy_r_r63;
    CPy_INCREF(CPyStatic_mypy___literals____hasher);
    cpy_r_r64 = CPyStatic_mypy___literals___globals;
    cpy_r_r65 = CPyStatics[2713]; /* '_hasher' */
    cpy_r_r66 = CPyDict_SetItem(cpy_r_r64, cpy_r_r65, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/literals.py", "<module>", 306, CPyStatic_mypy___literals___globals);
        goto CPyL25;
    }
    return 1;
CPyL25: ;
    cpy_r_r68 = 2;
    return cpy_r_r68;
CPyL26: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL25;
CPyL27: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL25;
}
