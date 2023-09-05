#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef evalexpr____NodeEvaluator_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___evalexpr____NodeEvaluatorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___evalexpr____NodeEvaluatorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *evalexpr____NodeEvaluator_setup(PyTypeObject *type);
PyObject *CPyDef_evalexpr____NodeEvaluator(void);

static PyObject *
evalexpr____NodeEvaluator_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_evalexpr____NodeEvaluator) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return evalexpr____NodeEvaluator_setup(type);
}

static int
evalexpr____NodeEvaluator_traverse(mypy___evalexpr____NodeEvaluatorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___evalexpr____NodeEvaluatorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___evalexpr____NodeEvaluatorObject))));
    return 0;
}

static int
evalexpr____NodeEvaluator_clear(mypy___evalexpr____NodeEvaluatorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___evalexpr____NodeEvaluatorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___evalexpr____NodeEvaluatorObject))));
    return 0;
}

static void
evalexpr____NodeEvaluator_dealloc(mypy___evalexpr____NodeEvaluatorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, evalexpr____NodeEvaluator_dealloc)
    evalexpr____NodeEvaluator_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem evalexpr____NodeEvaluator_vtable[47];
static CPyVTableItem evalexpr____NodeEvaluator_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t evalexpr____NodeEvaluator_mypy___visitor___ExpressionVisitor_offset_table[1];
static bool
CPyDef_evalexpr____NodeEvaluator_trait_vtable_setup(void)
{
    CPyVTableItem evalexpr____NodeEvaluator_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_int_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_str_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_bytes_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_float_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_complex_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_ellipsis,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_star_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_name_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_member_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_yield_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_call_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_op_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_comparison_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_cast_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_reveal_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_super_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_unary_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_assignment_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_list_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_dict_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_tuple_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_set_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_index_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_type_application,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_lambda_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_list_comprehension,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_set_comprehension,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_generator_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_slice_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_conditional_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_type_var_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_newtype_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit__promote_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_await_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_temp_node,
    };
    memcpy(evalexpr____NodeEvaluator_mypy___visitor___ExpressionVisitor_trait_vtable, evalexpr____NodeEvaluator_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(evalexpr____NodeEvaluator_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t evalexpr____NodeEvaluator_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(evalexpr____NodeEvaluator_mypy___visitor___ExpressionVisitor_offset_table, evalexpr____NodeEvaluator_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(evalexpr____NodeEvaluator_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem evalexpr____NodeEvaluator_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)evalexpr____NodeEvaluator_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)evalexpr____NodeEvaluator_mypy___visitor___ExpressionVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_int_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_str_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_bytes_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_float_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_complex_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_ellipsis,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_star_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_name_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_member_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_yield_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_call_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_op_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_comparison_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_cast_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_reveal_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_super_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_unary_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_assignment_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_list_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_dict_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_tuple_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_set_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_index_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_type_application,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_lambda_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_list_comprehension,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_set_comprehension,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_generator_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_slice_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_conditional_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_type_var_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_newtype_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit__promote_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_await_expr,
        (CPyVTableItem)CPyDef_evalexpr____NodeEvaluator___visit_temp_node,
    };
    memcpy(evalexpr____NodeEvaluator_vtable, evalexpr____NodeEvaluator_vtable_scratch, sizeof(evalexpr____NodeEvaluator_vtable));
    return 1;
}


static PyGetSetDef evalexpr____NodeEvaluator_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef evalexpr____NodeEvaluator_methods[] = {
    {"visit_int_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_int_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_str_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_str_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_bytes_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_bytes_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_float_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_float_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_complex_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_complex_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_ellipsis",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_ellipsis,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_star_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_star_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_member_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_member_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_yield_from_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_yield_from_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_yield_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_yield_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_op_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_op_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_comparison_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_comparison_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_cast_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_cast_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assert_type_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_assert_type_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_reveal_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_reveal_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_super_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_super_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unary_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_unary_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_assignment_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_list_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_list_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dict_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_dict_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_tuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_set_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_index_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_index_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_application",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_type_application,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_lambda_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_lambda_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_list_comprehension",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_list_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_set_comprehension",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_set_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_dictionary_comprehension",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_dictionary_comprehension,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_generator_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_generator_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_slice_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_slice_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_conditional_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_conditional_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_type_var_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_paramspec_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_paramspec_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_tuple_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_type_var_tuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_type_alias_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_namedtuple_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_namedtuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_enum_call_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_enum_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_typeddict_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_newtype_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_newtype_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit__promote_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit__promote_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_await_expr",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_await_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_temp_node",
     (PyCFunction)CPyPy_evalexpr____NodeEvaluator___visit_temp_node,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_evalexpr____NodeEvaluator_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_NodeEvaluator",
    .tp_new = evalexpr____NodeEvaluator_new,
    .tp_dealloc = (destructor)evalexpr____NodeEvaluator_dealloc,
    .tp_traverse = (traverseproc)evalexpr____NodeEvaluator_traverse,
    .tp_clear = (inquiry)evalexpr____NodeEvaluator_clear,
    .tp_getset = evalexpr____NodeEvaluator_getseters,
    .tp_methods = evalexpr____NodeEvaluator_methods,
    .tp_members = evalexpr____NodeEvaluator_members,
    .tp_basicsize = sizeof(mypy___evalexpr____NodeEvaluatorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___evalexpr____NodeEvaluatorObject),
    .tp_weaklistoffset = sizeof(mypy___evalexpr____NodeEvaluatorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_evalexpr____NodeEvaluator_template = &CPyType_evalexpr____NodeEvaluator_template_;

static PyObject *
evalexpr____NodeEvaluator_setup(PyTypeObject *type)
{
    mypy___evalexpr____NodeEvaluatorObject *self;
    self = (mypy___evalexpr____NodeEvaluatorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = evalexpr____NodeEvaluator_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_evalexpr____NodeEvaluator(void)
{
    PyObject *self = evalexpr____NodeEvaluator_setup(CPyType_evalexpr____NodeEvaluator);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef evalexprmodule_methods[] = {
    {"evaluate_expression", (PyCFunction)CPyPy_evalexpr___evaluate_expression, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef evalexprmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.evalexpr",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    evalexprmodule_methods
};

PyObject *CPyInit_mypy___evalexpr(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___evalexpr_internal) {
        Py_INCREF(CPyModule_mypy___evalexpr_internal);
        return CPyModule_mypy___evalexpr_internal;
    }
    CPyModule_mypy___evalexpr_internal = PyModule_Create(&evalexprmodule);
    if (unlikely(CPyModule_mypy___evalexpr_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___evalexpr_internal, "__name__");
    CPyStatic_evalexpr___globals = PyModule_GetDict(CPyModule_mypy___evalexpr_internal);
    if (unlikely(CPyStatic_evalexpr___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_evalexpr_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___evalexpr_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___evalexpr_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_evalexpr____evaluator);
    CPyStatic_evalexpr____evaluator = NULL;
    Py_CLEAR(CPyType_evalexpr____NodeEvaluator);
    return NULL;
}

CPyTagged CPyDef_evalexpr____NodeEvaluator___visit_int_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    CPyTagged cpy_r_r0;
    cpy_r_r0 = ((mypy___nodes___IntExprObject *)cpy_r_o)->_value;
    CPyTagged_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_int_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    CPyTagged retval = CPyDef_evalexpr____NodeEvaluator___visit_int_expr(arg_self, arg_o);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_int_expr", 19, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_int_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_evalexpr____NodeEvaluator___visit_int_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == CPY_INT_TAG) goto CPyL2;
    cpy_r_r1 = CPyTagged_StealAsObject(cpy_r_r0);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_int_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_int_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_int_expr__ExpressionVisitor_glue", -1, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_str_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = ((mypy___nodes___StrExprObject *)cpy_r_o)->_value;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_str_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StrExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_str_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_str_expr", 22, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_str_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_evalexpr____NodeEvaluator___visit_str_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_str_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_str_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StrExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StrExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_str_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_str_expr__ExpressionVisitor_glue", -1, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_bytes_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T3OOO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = CPyStatics[2306]; /* "b'" */
    cpy_r_r1 = ((mypy___nodes___BytesExprObject *)cpy_r_o)->_value;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[385]; /* "'" */
    cpy_r_r3 = CPyStr_Build(3, cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_bytes_expr", 29, CPyStatic_evalexpr___globals);
        goto CPyL5;
    }
    cpy_r_r4 = CPyModule_ast;
    cpy_r_r5 = CPyStatics[2307]; /* 'literal_eval' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_bytes_expr", 29, CPyStatic_evalexpr___globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r7[1] = {cpy_r_r3};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_bytes_expr", 29, CPyStatic_evalexpr___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r3);
    return cpy_r_r9;
CPyL5: ;
    cpy_r_r10 = CPy_CatchError();
    cpy_r_r11 = CPyModule_builtins;
    cpy_r_r12 = CPyStatics[2308]; /* 'SyntaxError' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_bytes_expr", 30, CPyStatic_evalexpr___globals);
        goto CPyL13;
    }
    cpy_r_r14 = CPy_ExceptionMatches(cpy_r_r13);
    CPy_DecRef(cpy_r_r13);
    if (!cpy_r_r14) goto CPyL11;
    cpy_r_r15 = CPyStatics[2309]; /* 'b"' */
    cpy_r_r16 = ((mypy___nodes___BytesExprObject *)cpy_r_o)->_value;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[178]; /* '"' */
    cpy_r_r18 = CPyStr_Build(3, cpy_r_r15, cpy_r_r16, cpy_r_r17);
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_bytes_expr", 31, CPyStatic_evalexpr___globals);
        goto CPyL13;
    }
    cpy_r_r19 = CPyModule_ast;
    cpy_r_r20 = CPyStatics[2307]; /* 'literal_eval' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_bytes_expr", 31, CPyStatic_evalexpr___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r22[1] = {cpy_r_r18};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 1, 0);
    CPy_DecRef(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_bytes_expr", 31, CPyStatic_evalexpr___globals);
        goto CPyL17;
    }
    CPy_DecRef(cpy_r_r18);
    CPy_RestoreExcInfo(cpy_r_r10);
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    return cpy_r_r24;
CPyL11: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL13;
    } else
        goto CPyL18;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    CPy_RestoreExcInfo(cpy_r_r10);
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    cpy_r_r25 = CPy_KeepPropagating();
    if (!cpy_r_r25) goto CPyL15;
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL16: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL5;
CPyL17: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    goto CPyL12;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_bytes_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_bytes_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___BytesExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.BytesExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_bytes_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_bytes_expr", 25, CPyStatic_evalexpr___globals);
    return NULL;
}

double CPyDef_evalexpr____NodeEvaluator___visit_float_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    double cpy_r_r0;
    cpy_r_r0 = ((mypy___nodes___FloatExprObject *)cpy_r_o)->_value;
    return cpy_r_r0;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_float_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FloatExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_o); 
        goto fail;
    }
    double retval = CPyDef_evalexpr____NodeEvaluator___visit_float_expr(arg_self, arg_o);
    if (retval == -113.0 && PyErr_Occurred()) {
        return NULL;
    }
    PyObject *retbox = PyFloat_FromDouble(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_float_expr", 33, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_float_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    double cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyDef_evalexpr____NodeEvaluator___visit_float_expr(cpy_r_self, cpy_r_o);
    cpy_r_r1 = cpy_r_r0 == -113.0;
    if (unlikely(cpy_r_r1)) goto CPyL2;
CPyL1: ;
    cpy_r_r2 = PyFloat_FromDouble(cpy_r_r0);
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = PyErr_Occurred();
    if (cpy_r_r3 == NULL) goto CPyL1;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_float_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_float_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FloatExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FloatExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_float_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_float_expr__ExpressionVisitor_glue", -1, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_complex_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = ((mypy___nodes___ComplexExprObject *)cpy_r_o)->_value;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_complex_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_complex_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComplexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComplexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_complex_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_complex_expr", 36, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_ellipsis(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[2310]; /* 'Ellipsis' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_ellipsis", 40, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_ellipsis(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_ellipsis", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EllipsisExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EllipsisExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_ellipsis(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_ellipsis", 39, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_star_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_star_expr", 43, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_star_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_star_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___StarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.StarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_star_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_star_expr", 42, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[1151]; /* 'True' */
    cpy_r_r2 = PyUnicode_Compare(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 == -1;
    if (!cpy_r_r3) goto CPyL3;
    cpy_r_r4 = PyErr_Occurred();
    cpy_r_r5 = cpy_r_r4 != NULL;
    if (!cpy_r_r5) goto CPyL3;
    cpy_r_r6 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_name_expr", 46, CPyStatic_evalexpr___globals);
        goto CPyL17;
    }
CPyL3: ;
    cpy_r_r7 = cpy_r_r2 == 0;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = 1 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r8);
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyStatics[1152]; /* 'False' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL8;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL8;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_name_expr", 48, CPyStatic_evalexpr___globals);
        goto CPyL17;
    }
CPyL8: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    if (!cpy_r_r16) goto CPyL10;
    cpy_r_r17 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r17);
    return cpy_r_r17;
CPyL10: ;
    cpy_r_r18 = ((mypy___nodes___NameExprObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyStatics[423]; /* 'None' */
    cpy_r_r20 = PyUnicode_Compare(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 == -1;
    if (!cpy_r_r21) goto CPyL13;
    cpy_r_r22 = PyErr_Occurred();
    cpy_r_r23 = cpy_r_r22 != NULL;
    if (!cpy_r_r23) goto CPyL13;
    cpy_r_r24 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_name_expr", 50, CPyStatic_evalexpr___globals);
        goto CPyL17;
    }
CPyL13: ;
    cpy_r_r25 = cpy_r_r20 == 0;
    if (!cpy_r_r25) goto CPyL15;
    cpy_r_r26 = Py_None;
    CPy_INCREF(cpy_r_r26);
    return cpy_r_r26;
CPyL15: ;
    cpy_r_r27 = CPyStatic_evalexpr___globals;
    cpy_r_r28 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_name_expr", 54, CPyStatic_evalexpr___globals);
        goto CPyL17;
    }
    return cpy_r_r29;
CPyL17: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_name_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_name_expr", 45, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_member_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_member_expr", 57, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_member_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_member_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MemberExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_member_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_member_expr", 56, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_yield_from_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_yield_from_expr", 60, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_yield_from_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_from_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_yield_from_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_yield_from_expr", 59, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_yield_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_yield_expr", 63, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_yield_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_yield_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_yield_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_yield_expr", 62, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_call_expr", 66, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_call_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_call_expr", 65, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_op_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_op_expr", 69, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_op_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_op_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OpExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OpExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_op_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_op_expr", 68, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_comparison_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_comparison_expr", 72, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_comparison_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_comparison_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ComparisonExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ComparisonExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_comparison_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_comparison_expr", 71, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_cast_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___CastExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_cast_expr", 75, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_cast_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_cast_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_cast_expr", 74, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_assert_type_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___AssertTypeExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_assert_type_expr", 78, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_assert_type_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_assert_type_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_assert_type_expr", 77, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_reveal_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_reveal_expr", 81, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_reveal_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_reveal_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___RevealExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.RevealExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_reveal_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_reveal_expr", 80, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_super_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_super_expr", 84, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_super_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_super_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SuperExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SuperExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_super_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_super_expr", 83, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_unary_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_operand;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    tuple_T3OOO cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    tuple_T3OOO cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    tuple_T5OOOOO cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    cpy_r_r0 = ((mypy___nodes___UnaryExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 87, CPyStatic_evalexpr___globals);
        goto CPyL42;
    }
    cpy_r_operand = cpy_r_r1;
    cpy_r_r2 = CPyStatic_evalexpr___globals;
    cpy_r_r3 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 88, CPyStatic_evalexpr___globals);
        goto CPyL43;
    }
    cpy_r_r5 = cpy_r_operand == cpy_r_r4;
    CPy_DECREF(cpy_r_r4);
    if (cpy_r_r5) {
        goto CPyL44;
    } else
        goto CPyL5;
CPyL3: ;
    cpy_r_r6 = CPyStatic_evalexpr___globals;
    cpy_r_r7 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 89, CPyStatic_evalexpr___globals);
        goto CPyL42;
    }
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = ((mypy___nodes___UnaryExprObject *)cpy_r_o)->_op;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyStatics[1198]; /* '-' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL8;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL8;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 90, CPyStatic_evalexpr___globals);
        goto CPyL43;
    }
CPyL8: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    if (!cpy_r_r16) goto CPyL14;
    cpy_r_r17 = (PyObject *)&PyLong_Type;
    cpy_r_r18 = (PyObject *)&PyFloat_Type;
    cpy_r_r19 = CPyModule_builtins;
    cpy_r_r20 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 91, CPyStatic_evalexpr___globals);
        goto CPyL43;
    }
    cpy_r_r22.f0 = cpy_r_r17;
    cpy_r_r22.f1 = cpy_r_r18;
    cpy_r_r22.f2 = cpy_r_r21;
    CPy_INCREF(cpy_r_r22.f0);
    CPy_INCREF(cpy_r_r22.f1);
    CPy_INCREF(cpy_r_r22.f2);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = PyTuple_New(3);
    if (unlikely(cpy_r_r23 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2623 = cpy_r_r22.f0;
    PyTuple_SET_ITEM(cpy_r_r23, 0, __tmp2623);
    PyObject *__tmp2624 = cpy_r_r22.f1;
    PyTuple_SET_ITEM(cpy_r_r23, 1, __tmp2624);
    PyObject *__tmp2625 = cpy_r_r22.f2;
    PyTuple_SET_ITEM(cpy_r_r23, 2, __tmp2625);
    cpy_r_r24 = PyObject_IsInstance(cpy_r_operand, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 91, CPyStatic_evalexpr___globals);
        goto CPyL43;
    }
    cpy_r_r26 = cpy_r_r24;
    if (!cpy_r_r26) goto CPyL45;
    cpy_r_r27 = PyNumber_Negative(cpy_r_operand);
    CPy_DECREF(cpy_r_operand);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 92, CPyStatic_evalexpr___globals);
        goto CPyL42;
    }
    return cpy_r_r27;
CPyL14: ;
    cpy_r_r28 = ((mypy___nodes___UnaryExprObject *)cpy_r_o)->_op;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[886]; /* '+' */
    cpy_r_r30 = PyUnicode_Compare(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r31 = cpy_r_r30 == -1;
    if (!cpy_r_r31) goto CPyL17;
    cpy_r_r32 = PyErr_Occurred();
    cpy_r_r33 = cpy_r_r32 != NULL;
    if (!cpy_r_r33) goto CPyL17;
    cpy_r_r34 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 93, CPyStatic_evalexpr___globals);
        goto CPyL43;
    }
CPyL17: ;
    cpy_r_r35 = cpy_r_r30 == 0;
    if (!cpy_r_r35) goto CPyL23;
    cpy_r_r36 = (PyObject *)&PyLong_Type;
    cpy_r_r37 = (PyObject *)&PyFloat_Type;
    cpy_r_r38 = CPyModule_builtins;
    cpy_r_r39 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 94, CPyStatic_evalexpr___globals);
        goto CPyL43;
    }
    cpy_r_r41.f0 = cpy_r_r36;
    cpy_r_r41.f1 = cpy_r_r37;
    cpy_r_r41.f2 = cpy_r_r40;
    CPy_INCREF(cpy_r_r41.f0);
    CPy_INCREF(cpy_r_r41.f1);
    CPy_INCREF(cpy_r_r41.f2);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = PyTuple_New(3);
    if (unlikely(cpy_r_r42 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2626 = cpy_r_r41.f0;
    PyTuple_SET_ITEM(cpy_r_r42, 0, __tmp2626);
    PyObject *__tmp2627 = cpy_r_r41.f1;
    PyTuple_SET_ITEM(cpy_r_r42, 1, __tmp2627);
    PyObject *__tmp2628 = cpy_r_r41.f2;
    PyTuple_SET_ITEM(cpy_r_r42, 2, __tmp2628);
    cpy_r_r43 = PyObject_IsInstance(cpy_r_operand, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 94, CPyStatic_evalexpr___globals);
        goto CPyL43;
    }
    cpy_r_r45 = cpy_r_r43;
    if (!cpy_r_r45) goto CPyL45;
    cpy_r_r46 = PyNumber_Positive(cpy_r_operand);
    CPy_DECREF(cpy_r_operand);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 95, CPyStatic_evalexpr___globals);
        goto CPyL42;
    }
    return cpy_r_r46;
CPyL23: ;
    cpy_r_r47 = ((mypy___nodes___UnaryExprObject *)cpy_r_o)->_op;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = CPyStatics[1602]; /* '~' */
    cpy_r_r49 = PyUnicode_Compare(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r50 = cpy_r_r49 == -1;
    if (!cpy_r_r50) goto CPyL26;
    cpy_r_r51 = PyErr_Occurred();
    cpy_r_r52 = cpy_r_r51 != NULL;
    if (!cpy_r_r52) goto CPyL26;
    cpy_r_r53 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 96, CPyStatic_evalexpr___globals);
        goto CPyL43;
    }
CPyL26: ;
    cpy_r_r54 = cpy_r_r49 == 0;
    if (!cpy_r_r54) goto CPyL31;
    cpy_r_r55 = (PyObject *)&PyLong_Type;
    cpy_r_r56 = PyObject_IsInstance(cpy_r_operand, cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 97, CPyStatic_evalexpr___globals);
        goto CPyL43;
    }
    cpy_r_r58 = cpy_r_r56;
    if (!cpy_r_r58) goto CPyL45;
    if (likely(PyLong_Check(cpy_r_operand)))
        cpy_r_r59 = CPyTagged_FromObject(cpy_r_operand);
    else {
        CPy_TypeError("int", cpy_r_operand); cpy_r_r59 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_operand);
    if (unlikely(cpy_r_r59 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 98, CPyStatic_evalexpr___globals);
        goto CPyL42;
    }
    cpy_r_r60 = CPyTagged_Invert(cpy_r_r59);
    CPyTagged_DECREF(cpy_r_r59);
    cpy_r_r61 = CPyTagged_StealAsObject(cpy_r_r60);
    return cpy_r_r61;
CPyL31: ;
    cpy_r_r62 = ((mypy___nodes___UnaryExprObject *)cpy_r_o)->_op;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = CPyStatics[869]; /* 'not' */
    cpy_r_r64 = PyUnicode_Compare(cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r65 = cpy_r_r64 == -1;
    if (!cpy_r_r65) goto CPyL34;
    cpy_r_r66 = PyErr_Occurred();
    cpy_r_r67 = cpy_r_r66 != NULL;
    if (!cpy_r_r67) goto CPyL34;
    cpy_r_r68 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 99, CPyStatic_evalexpr___globals);
        goto CPyL43;
    }
CPyL34: ;
    cpy_r_r69 = cpy_r_r64 == 0;
    if (!cpy_r_r69) goto CPyL45;
    cpy_r_r70 = (PyObject *)&PyBool_Type;
    cpy_r_r71 = (PyObject *)&PyLong_Type;
    cpy_r_r72 = (PyObject *)&PyFloat_Type;
    cpy_r_r73 = (PyObject *)&PyUnicode_Type;
    cpy_r_r74 = (PyObject *)&PyBytes_Type;
    cpy_r_r75.f0 = cpy_r_r70;
    cpy_r_r75.f1 = cpy_r_r71;
    cpy_r_r75.f2 = cpy_r_r72;
    cpy_r_r75.f3 = cpy_r_r73;
    cpy_r_r75.f4 = cpy_r_r74;
    CPy_INCREF(cpy_r_r75.f0);
    CPy_INCREF(cpy_r_r75.f1);
    CPy_INCREF(cpy_r_r75.f2);
    CPy_INCREF(cpy_r_r75.f3);
    CPy_INCREF(cpy_r_r75.f4);
    cpy_r_r76 = PyTuple_New(5);
    if (unlikely(cpy_r_r76 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2629 = cpy_r_r75.f0;
    PyTuple_SET_ITEM(cpy_r_r76, 0, __tmp2629);
    PyObject *__tmp2630 = cpy_r_r75.f1;
    PyTuple_SET_ITEM(cpy_r_r76, 1, __tmp2630);
    PyObject *__tmp2631 = cpy_r_r75.f2;
    PyTuple_SET_ITEM(cpy_r_r76, 2, __tmp2631);
    PyObject *__tmp2632 = cpy_r_r75.f3;
    PyTuple_SET_ITEM(cpy_r_r76, 3, __tmp2632);
    PyObject *__tmp2633 = cpy_r_r75.f4;
    PyTuple_SET_ITEM(cpy_r_r76, 4, __tmp2633);
    cpy_r_r77 = PyObject_IsInstance(cpy_r_operand, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 100, CPyStatic_evalexpr___globals);
        goto CPyL43;
    }
    cpy_r_r79 = cpy_r_r77;
    if (!cpy_r_r79) goto CPyL45;
    if (PyLong_Check(cpy_r_operand))
        cpy_r_r80 = cpy_r_operand;
    else {
        cpy_r_r80 = NULL;
    }
    if (cpy_r_r80 != NULL) goto __LL2634;
    if (CPyFloat_Check(cpy_r_operand))
        cpy_r_r80 = cpy_r_operand;
    else {
        cpy_r_r80 = NULL;
    }
    if (cpy_r_r80 != NULL) goto __LL2634;
    if (PyUnicode_Check(cpy_r_operand))
        cpy_r_r80 = cpy_r_operand;
    else {
        cpy_r_r80 = NULL;
    }
    if (cpy_r_r80 != NULL) goto __LL2634;
    if (PyBytes_Check(cpy_r_operand) || PyByteArray_Check(cpy_r_operand))
        cpy_r_r80 = cpy_r_operand;
    else {
        cpy_r_r80 = NULL;
    }
    if (cpy_r_r80 != NULL) goto __LL2634;
    CPy_TypeErrorTraceback("mypy/evalexpr.py", "visit_unary_expr", 101, CPyStatic_evalexpr___globals, "union[int, float, str, bytes]", cpy_r_operand);
    goto CPyL42;
__LL2634: ;
    cpy_r_r81 = PyObject_Not(cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 101, CPyStatic_evalexpr___globals);
        goto CPyL42;
    }
    cpy_r_r83 = cpy_r_r81;
    cpy_r_r84 = cpy_r_r83 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r84);
    return cpy_r_r84;
CPyL40: ;
    cpy_r_r85 = CPyStatic_evalexpr___globals;
    cpy_r_r86 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r87 = CPyDict_GetItem(cpy_r_r85, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 102, CPyStatic_evalexpr___globals);
        goto CPyL42;
    }
    return cpy_r_r87;
CPyL42: ;
    cpy_r_r88 = NULL;
    return cpy_r_r88;
CPyL43: ;
    CPy_DecRef(cpy_r_operand);
    goto CPyL42;
CPyL44: ;
    CPy_DECREF(cpy_r_operand);
    goto CPyL3;
CPyL45: ;
    CPy_DECREF(cpy_r_operand);
    goto CPyL40;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_unary_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_unary_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___UnaryExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.UnaryExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_unary_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_unary_expr", 86, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_assignment_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___AssignmentExprObject *)cpy_r_o)->_value;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r0, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_assignment_expr", 105, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_assignment_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_assignment_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_assignment_expr", 104, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_list_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
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
    PyObject *cpy_r_items;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_item_2;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    cpy_r_r0 = ((mypy___nodes___ListExprObject *)cpy_r_o)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_list_expr", 108, CPyStatic_evalexpr___globals);
        goto CPyL18;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL19;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_nodes___Expression)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/evalexpr.py", "visit_list_expr", 108, CPyStatic_evalexpr___globals, "mypy.nodes.Expression", cpy_r_r9);
        goto CPyL20;
    }
    cpy_r_item = cpy_r_r10;
    cpy_r_r11 = CPY_GET_METHOD_TRAIT(cpy_r_item, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_item, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_list_expr", 108, CPyStatic_evalexpr___globals);
        goto CPyL20;
    }
    cpy_r_r12 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_list_expr", 108, CPyStatic_evalexpr___globals);
        goto CPyL20;
    }
    cpy_r_r13 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r13;
    goto CPyL2;
CPyL7: ;
    cpy_r_items = cpy_r_r3;
    cpy_r_r14 = 1;
    cpy_r_r15 = 0;
CPyL8: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL13;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r15);
    cpy_r_item_2 = cpy_r_r20;
    cpy_r_r21 = CPyStatic_evalexpr___globals;
    cpy_r_r22 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_list_expr", 109, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    cpy_r_r24 = cpy_r_item_2 == cpy_r_r23;
    CPy_DECREF(cpy_r_item_2);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 ^ 1;
    cpy_r_r26 = cpy_r_r25 ^ 1;
    if (!cpy_r_r26) goto CPyL12;
    cpy_r_r14 = 0;
    goto CPyL13;
CPyL12: ;
    cpy_r_r27 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r27;
    goto CPyL8;
CPyL13: ;
    if (!cpy_r_r14) goto CPyL22;
    return cpy_r_items;
CPyL15: ;
    cpy_r_r28 = CPyStatic_evalexpr___globals;
    cpy_r_r29 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r30 = CPyDict_GetItem(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_list_expr", 111, CPyStatic_evalexpr___globals);
        goto CPyL17;
    }
    return cpy_r_r30;
CPyL17: ;
    cpy_r_r31 = NULL;
    return cpy_r_r31;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_item_2);
    goto CPyL17;
CPyL22: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL15;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_list_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_list_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_list_expr", 107, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_dict_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
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
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    tuple_T2OO cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_items;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    tuple_T2OO cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_key_2;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_value_2;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    cpy_r_r0 = ((mypy___nodes___DictExprObject *)cpy_r_o)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_dict_expr", 114, CPyStatic_evalexpr___globals);
        goto CPyL29;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL30;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    PyObject *__tmp2635;
    if (unlikely(!(PyTuple_Check(cpy_r_r9) && PyTuple_GET_SIZE(cpy_r_r9) == 2))) {
        __tmp2635 = NULL;
        goto __LL2636;
    }
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r9, 0), CPyType_nodes___Expression))
        __tmp2635 = PyTuple_GET_ITEM(cpy_r_r9, 0);
    else {
        __tmp2635 = NULL;
    }
    if (__tmp2635 != NULL) goto __LL2637;
    if (PyTuple_GET_ITEM(cpy_r_r9, 0) == Py_None)
        __tmp2635 = PyTuple_GET_ITEM(cpy_r_r9, 0);
    else {
        __tmp2635 = NULL;
    }
    if (__tmp2635 != NULL) goto __LL2637;
    __tmp2635 = NULL;
__LL2637: ;
    if (__tmp2635 == NULL) goto __LL2636;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r9, 1), CPyType_nodes___Expression)))
        __tmp2635 = PyTuple_GET_ITEM(cpy_r_r9, 1);
    else {
        __tmp2635 = NULL;
    }
    if (__tmp2635 == NULL) goto __LL2636;
    __tmp2635 = cpy_r_r9;
__LL2636: ;
    if (unlikely(__tmp2635 == NULL)) {
        CPy_TypeError("tuple[union[mypy.nodes.Expression, None], mypy.nodes.Expression]", cpy_r_r9); cpy_r_r10 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2638 = PyTuple_GET_ITEM(cpy_r_r9, 0);
        CPy_INCREF(__tmp2638);
        PyObject *__tmp2639;
        if (PyObject_TypeCheck(__tmp2638, CPyType_nodes___Expression))
            __tmp2639 = __tmp2638;
        else {
            __tmp2639 = NULL;
        }
        if (__tmp2639 != NULL) goto __LL2640;
        if (__tmp2638 == Py_None)
            __tmp2639 = __tmp2638;
        else {
            __tmp2639 = NULL;
        }
        if (__tmp2639 != NULL) goto __LL2640;
        CPy_TypeError("mypy.nodes.Expression or None", __tmp2638); 
        __tmp2639 = NULL;
__LL2640: ;
        cpy_r_r10.f0 = __tmp2639;
        PyObject *__tmp2641 = PyTuple_GET_ITEM(cpy_r_r9, 1);
        CPy_INCREF(__tmp2641);
        PyObject *__tmp2642;
        if (likely(PyObject_TypeCheck(__tmp2641, CPyType_nodes___Expression)))
            __tmp2642 = __tmp2641;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp2641); 
            __tmp2642 = NULL;
        }
        cpy_r_r10.f1 = __tmp2642;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10.f0 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_dict_expr", 114, CPyStatic_evalexpr___globals);
        goto CPyL31;
    }
    cpy_r_r11 = cpy_r_r10.f0;
    CPy_INCREF(cpy_r_r11);
    cpy_r_key = cpy_r_r11;
    cpy_r_r12 = cpy_r_r10.f1;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r10.f0);
    CPy_DECREF(cpy_r_r10.f1);
    cpy_r_value = cpy_r_r12;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_key == cpy_r_r13;
    if (cpy_r_r14) {
        goto CPyL32;
    } else
        goto CPyL7;
CPyL5: ;
    cpy_r_r15 = CPyStatic_evalexpr___globals;
    cpy_r_r16 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_dict_expr", 115, CPyStatic_evalexpr___globals);
        goto CPyL33;
    }
    cpy_r_r18 = cpy_r_r17;
    goto CPyL10;
CPyL7: ;
    if (likely(cpy_r_key != Py_None))
        cpy_r_r19 = cpy_r_key;
    else {
        CPy_TypeErrorTraceback("mypy/evalexpr.py", "visit_dict_expr", 115, CPyStatic_evalexpr___globals, "mypy.nodes.Expression", cpy_r_key);
        goto CPyL33;
    }
    cpy_r_r20 = CPY_GET_METHOD_TRAIT(cpy_r_r19, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r19, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_dict_expr", 115, CPyStatic_evalexpr___globals);
        goto CPyL33;
    }
    cpy_r_r18 = cpy_r_r20;
CPyL10: ;
    cpy_r_r21 = CPY_GET_METHOD_TRAIT(cpy_r_value, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_value, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_dict_expr", 115, CPyStatic_evalexpr___globals);
        goto CPyL34;
    }
    cpy_r_r22.f0 = cpy_r_r18;
    cpy_r_r22.f1 = cpy_r_r21;
    CPy_INCREF(cpy_r_r22.f0);
    CPy_INCREF(cpy_r_r22.f1);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = PyTuple_New(2);
    if (unlikely(cpy_r_r23 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2643 = cpy_r_r22.f0;
    PyTuple_SET_ITEM(cpy_r_r23, 0, __tmp2643);
    PyObject *__tmp2644 = cpy_r_r22.f1;
    PyTuple_SET_ITEM(cpy_r_r23, 1, __tmp2644);
    cpy_r_r24 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r23);
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_dict_expr", 114, CPyStatic_evalexpr___globals);
        goto CPyL31;
    }
    cpy_r_r25 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r25;
    goto CPyL2;
CPyL13: ;
    cpy_r_items = cpy_r_r3;
    cpy_r_r26 = 1;
    cpy_r_r27 = 0;
CPyL14: ;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = (Py_ssize_t)cpy_r_r27 < (Py_ssize_t)cpy_r_r30;
    if (!cpy_r_r31) goto CPyL23;
    cpy_r_r32 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r27);
    PyObject *__tmp2645;
    if (unlikely(!(PyTuple_Check(cpy_r_r32) && PyTuple_GET_SIZE(cpy_r_r32) == 2))) {
        __tmp2645 = NULL;
        goto __LL2646;
    }
    __tmp2645 = PyTuple_GET_ITEM(cpy_r_r32, 0);
    if (__tmp2645 == NULL) goto __LL2646;
    __tmp2645 = PyTuple_GET_ITEM(cpy_r_r32, 1);
    if (__tmp2645 == NULL) goto __LL2646;
    __tmp2645 = cpy_r_r32;
__LL2646: ;
    if (unlikely(__tmp2645 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r32); cpy_r_r33 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2647 = PyTuple_GET_ITEM(cpy_r_r32, 0);
        CPy_INCREF(__tmp2647);
        PyObject *__tmp2648;
        __tmp2648 = __tmp2647;
        cpy_r_r33.f0 = __tmp2648;
        PyObject *__tmp2649 = PyTuple_GET_ITEM(cpy_r_r32, 1);
        CPy_INCREF(__tmp2649);
        PyObject *__tmp2650;
        __tmp2650 = __tmp2649;
        cpy_r_r33.f1 = __tmp2650;
    }
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33.f0 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_dict_expr", 118, CPyStatic_evalexpr___globals);
        goto CPyL35;
    }
    cpy_r_r34 = cpy_r_r33.f0;
    CPy_INCREF(cpy_r_r34);
    cpy_r_key_2 = cpy_r_r34;
    cpy_r_r35 = cpy_r_r33.f1;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r33.f0);
    CPy_DECREF(cpy_r_r33.f1);
    cpy_r_value_2 = cpy_r_r35;
    cpy_r_r36 = CPyStatic_evalexpr___globals;
    cpy_r_r37 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_dict_expr", 118, CPyStatic_evalexpr___globals);
        goto CPyL36;
    }
    cpy_r_r39 = cpy_r_key_2 == cpy_r_r38;
    CPy_DECREF(cpy_r_key_2);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 ^ 1;
    if (cpy_r_r40) {
        goto CPyL19;
    } else
        goto CPyL37;
CPyL18: ;
    cpy_r_r41 = cpy_r_r40;
    goto CPyL20;
CPyL19: ;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_value_2 != cpy_r_r42;
    CPy_DECREF(cpy_r_value_2);
    cpy_r_r41 = cpy_r_r43;
CPyL20: ;
    cpy_r_r44 = cpy_r_r41 ^ 1;
    if (!cpy_r_r44) goto CPyL22;
    cpy_r_r26 = 0;
    goto CPyL23;
CPyL22: ;
    cpy_r_r45 = cpy_r_r27 + 2;
    cpy_r_r27 = cpy_r_r45;
    goto CPyL14;
CPyL23: ;
    if (!cpy_r_r26) goto CPyL38;
    cpy_r_r46 = CPyDict_FromAny(cpy_r_items);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_dict_expr", 119, CPyStatic_evalexpr___globals);
        goto CPyL28;
    }
    return cpy_r_r46;
CPyL26: ;
    cpy_r_r47 = CPyStatic_evalexpr___globals;
    cpy_r_r48 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r49 = CPyDict_GetItem(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_dict_expr", 120, CPyStatic_evalexpr___globals);
        goto CPyL28;
    }
    return cpy_r_r49;
CPyL28: ;
    cpy_r_r50 = NULL;
    return cpy_r_r50;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL28;
CPyL30: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL13;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL28;
CPyL32: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL5;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_value);
    goto CPyL28;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r18);
    goto CPyL28;
CPyL35: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL28;
CPyL36: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_key_2);
    CPy_DecRef(cpy_r_value_2);
    goto CPyL28;
CPyL37: ;
    CPy_DECREF(cpy_r_value_2);
    goto CPyL18;
CPyL38: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL26;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_dict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dict_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_dict_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_dict_expr", 113, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_tuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
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
    PyObject *cpy_r_items;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_item_2;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = ((mypy___nodes___TupleExprObject *)cpy_r_o)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_tuple_expr", 123, CPyStatic_evalexpr___globals);
        goto CPyL19;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL20;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_nodes___Expression)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/evalexpr.py", "visit_tuple_expr", 123, CPyStatic_evalexpr___globals, "mypy.nodes.Expression", cpy_r_r9);
        goto CPyL21;
    }
    cpy_r_item = cpy_r_r10;
    cpy_r_r11 = CPY_GET_METHOD_TRAIT(cpy_r_item, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_item, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_tuple_expr", 123, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    cpy_r_r12 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_tuple_expr", 123, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    cpy_r_r13 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r13;
    goto CPyL2;
CPyL7: ;
    cpy_r_items = cpy_r_r3;
    cpy_r_r14 = 1;
    cpy_r_r15 = 0;
CPyL8: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL13;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r15);
    cpy_r_item_2 = cpy_r_r20;
    cpy_r_r21 = CPyStatic_evalexpr___globals;
    cpy_r_r22 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_tuple_expr", 124, CPyStatic_evalexpr___globals);
        goto CPyL22;
    }
    cpy_r_r24 = cpy_r_item_2 == cpy_r_r23;
    CPy_DECREF(cpy_r_item_2);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 ^ 1;
    cpy_r_r26 = cpy_r_r25 ^ 1;
    if (!cpy_r_r26) goto CPyL12;
    cpy_r_r14 = 0;
    goto CPyL13;
CPyL12: ;
    cpy_r_r27 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r27;
    goto CPyL8;
CPyL13: ;
    if (!cpy_r_r14) goto CPyL23;
    cpy_r_r28 = PyList_AsTuple(cpy_r_items);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_tuple_expr", 125, CPyStatic_evalexpr___globals);
        goto CPyL18;
    }
    return cpy_r_r28;
CPyL16: ;
    cpy_r_r29 = CPyStatic_evalexpr___globals;
    cpy_r_r30 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_tuple_expr", 126, CPyStatic_evalexpr___globals);
        goto CPyL18;
    }
    return cpy_r_r31;
CPyL18: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL18;
CPyL20: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_item_2);
    goto CPyL18;
CPyL23: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL16;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_tuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_tuple_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_tuple_expr", 122, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_set_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
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
    PyObject *cpy_r_items;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_item_2;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = ((mypy___nodes___SetExprObject *)cpy_r_o)->_items;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_set_expr", 129, CPyStatic_evalexpr___globals);
        goto CPyL19;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL20;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_nodes___Expression)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/evalexpr.py", "visit_set_expr", 129, CPyStatic_evalexpr___globals, "mypy.nodes.Expression", cpy_r_r9);
        goto CPyL21;
    }
    cpy_r_item = cpy_r_r10;
    cpy_r_r11 = CPY_GET_METHOD_TRAIT(cpy_r_item, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_item, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_set_expr", 129, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    cpy_r_r12 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_set_expr", 129, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    cpy_r_r13 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r13;
    goto CPyL2;
CPyL7: ;
    cpy_r_items = cpy_r_r3;
    cpy_r_r14 = 1;
    cpy_r_r15 = 0;
CPyL8: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL13;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r15);
    cpy_r_item_2 = cpy_r_r20;
    cpy_r_r21 = CPyStatic_evalexpr___globals;
    cpy_r_r22 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_set_expr", 130, CPyStatic_evalexpr___globals);
        goto CPyL22;
    }
    cpy_r_r24 = cpy_r_item_2 == cpy_r_r23;
    CPy_DECREF(cpy_r_item_2);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 ^ 1;
    cpy_r_r26 = cpy_r_r25 ^ 1;
    if (!cpy_r_r26) goto CPyL12;
    cpy_r_r14 = 0;
    goto CPyL13;
CPyL12: ;
    cpy_r_r27 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r27;
    goto CPyL8;
CPyL13: ;
    if (!cpy_r_r14) goto CPyL23;
    cpy_r_r28 = PySet_New(cpy_r_items);
    CPy_DECREF(cpy_r_items);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_set_expr", 131, CPyStatic_evalexpr___globals);
        goto CPyL18;
    }
    return cpy_r_r28;
CPyL16: ;
    cpy_r_r29 = CPyStatic_evalexpr___globals;
    cpy_r_r30 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_set_expr", 132, CPyStatic_evalexpr___globals);
        goto CPyL18;
    }
    return cpy_r_r31;
CPyL18: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL18;
CPyL20: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_item_2);
    goto CPyL18;
CPyL23: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL16;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_set_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_set_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_set_expr", 128, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_index_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_index_expr", 135, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_index_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_index_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IndexExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IndexExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_index_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_index_expr", 134, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_type_application(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_type_application", 138, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_type_application(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_type_application(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_type_application", 137, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_lambda_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_lambda_expr", 141, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_lambda_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_lambda_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_lambda_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_lambda_expr", 140, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_list_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_list_comprehension", 144, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_list_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_list_comprehension", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ListComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ListComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_list_comprehension(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_list_comprehension", 143, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_set_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_set_comprehension", 147, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_set_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_set_comprehension", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SetComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SetComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_set_comprehension(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_set_comprehension", 146, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_dictionary_comprehension(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_dictionary_comprehension", 150, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_dictionary_comprehension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_dictionary_comprehension", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DictionaryComprehension))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DictionaryComprehension", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_dictionary_comprehension(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_dictionary_comprehension", 149, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_generator_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_generator_expr", 153, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_generator_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_generator_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___GeneratorExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.GeneratorExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_generator_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_generator_expr", 152, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_slice_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_slice_expr", 156, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_slice_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_slice_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___SliceExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.SliceExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_slice_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_slice_expr", 155, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_conditional_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_conditional_expr", 159, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_conditional_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_conditional_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ConditionalExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ConditionalExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_conditional_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_conditional_expr", 158, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_type_var_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_type_var_expr", 162, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_type_var_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_type_var_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_type_var_expr", 161, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_paramspec_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_paramspec_expr", 165, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_paramspec_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_paramspec_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ParamSpecExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ParamSpecExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_paramspec_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_paramspec_expr", 164, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_type_var_tuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_type_var_tuple_expr", 168, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_type_var_tuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_tuple_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_type_var_tuple_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_type_var_tuple_expr", 167, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_type_alias_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_type_alias_expr", 171, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_type_alias_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_type_alias_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_type_alias_expr", 170, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_namedtuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_namedtuple_expr", 174, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_namedtuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_namedtuple_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_namedtuple_expr", 173, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_enum_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_enum_call_expr", 177, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_enum_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_enum_call_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___EnumCallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.EnumCallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_enum_call_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_enum_call_expr", 176, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_typeddict_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_typeddict_expr", 180, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_typeddict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_typeddict_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_typeddict_expr", 179, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_newtype_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_newtype_expr", 183, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_newtype_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_newtype_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_newtype_expr", 182, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit__promote_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit__promote_expr", 186, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit__promote_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PromoteExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit__promote_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit__promote_expr", 185, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_await_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_await_expr", 189, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_await_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_await_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_await_expr(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_await_expr", 188, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr____NodeEvaluator___visit_temp_node(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr___globals;
    cpy_r_r1 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "visit_temp_node", 192, CPyStatic_evalexpr___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr____NodeEvaluator___visit_temp_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_temp_node", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_evalexpr____NodeEvaluator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.evalexpr._NodeEvaluator", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TempNode))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TempNode", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_evalexpr____NodeEvaluator___visit_temp_node(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "visit_temp_node", 191, CPyStatic_evalexpr___globals);
    return NULL;
}

PyObject *CPyDef_evalexpr___evaluate_expression(PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatic_evalexpr____evaluator;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"_evaluator\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/evalexpr.py", "evaluate_expression", 204, CPyStatic_evalexpr___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = CPY_GET_METHOD_TRAIT(cpy_r_expr, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_expr, cpy_r_r0); /* accept */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "evaluate_expression", 204, CPyStatic_evalexpr___globals);
        goto CPyL5;
    }
    return cpy_r_r2;
CPyL5: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_evalexpr___evaluate_expression(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:evaluate_expression", kwlist, 0};
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
    PyObject *retval = CPyDef_evalexpr___evaluate_expression(arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/evalexpr.py", "evaluate_expression", 198, CPyStatic_evalexpr___globals);
    return NULL;
}

char CPyDef_evalexpr_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    void *cpy_r_r7;
    void *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r19;
    void *cpy_r_r21;
    void *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
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
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", -1, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_ast;
    PyObject **cpy_r_r6[1] = {cpy_r_r5};
    cpy_r_r7 = (void *)&cpy_r_r6;
    int64_t cpy_r_r8[1] = {9};
    cpy_r_r9 = (void *)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[9372]; /* (('ast', 'ast', 'ast'),) */
    cpy_r_r11 = CPyStatic_evalexpr___globals;
    cpy_r_r12 = CPyStatics[2313]; /* 'mypy/evalexpr.py' */
    cpy_r_r13 = CPyStatics[17]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL21;
    cpy_r_r15 = CPyStatics[9301]; /* ('Final',) */
    cpy_r_r16 = CPyStatics[21]; /* 'typing' */
    cpy_r_r17 = CPyStatic_evalexpr___globals;
    cpy_r_r18 = CPyImport_ImportFromMany(cpy_r_r16, cpy_r_r15, cpy_r_r15, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", 10, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    CPyModule_typing = cpy_r_r18;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r19 = (PyObject **)&CPyModule_mypy___nodes;
    PyObject **cpy_r_r20[1] = {cpy_r_r19};
    cpy_r_r21 = (void *)&cpy_r_r20;
    int64_t cpy_r_r22[1] = {12};
    cpy_r_r23 = (void *)&cpy_r_r22;
    cpy_r_r24 = CPyStatics[9374]; /* (('mypy.nodes', 'mypy', 'mypy'),) */
    cpy_r_r25 = CPyStatic_evalexpr___globals;
    cpy_r_r26 = CPyStatics[2313]; /* 'mypy/evalexpr.py' */
    cpy_r_r27 = CPyStatics[17]; /* '<module>' */
    cpy_r_r28 = CPyImport_ImportMany(cpy_r_r24, cpy_r_r21, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r23);
    if (!cpy_r_r28) goto CPyL21;
    cpy_r_r29 = CPyStatics[9245]; /* ('ExpressionVisitor',) */
    cpy_r_r30 = CPyStatics[1087]; /* 'mypy.visitor' */
    cpy_r_r31 = CPyStatic_evalexpr___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", 13, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    CPyModule_mypy___visitor = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___visitor);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyModule_builtins;
    cpy_r_r34 = CPyStatics[2314]; /* 'object' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", 15, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    cpy_r_r36 = _PyObject_Vectorcall(cpy_r_r35, 0, 0, 0);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", 15, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    cpy_r_r37 = CPyStatic_evalexpr___globals;
    cpy_r_r38 = CPyStatics[2311]; /* 'UNKNOWN' */
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r37, cpy_r_r38, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", 15, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    cpy_r_r41 = (PyObject *)CPyType_mypy___visitor___ExpressionVisitor;
    cpy_r_r42 = CPyModule_builtins;
    cpy_r_r43 = CPyStatics[2314]; /* 'object' */
    cpy_r_r44 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", 18, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    cpy_r_r45 = PyObject_GetItem(cpy_r_r41, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", 18, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    cpy_r_r46 = PyTuple_Pack(1, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", 18, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    cpy_r_r47 = CPyStatics[2315]; /* 'mypy.evalexpr' */
    cpy_r_r48 = (PyObject *)CPyType_evalexpr____NodeEvaluator_template;
    cpy_r_r49 = CPyType_FromTemplate(cpy_r_r48, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", 18, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    cpy_r_r50 = CPyDef_evalexpr____NodeEvaluator_trait_vtable_setup();
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", -1, CPyStatic_evalexpr___globals);
        goto CPyL22;
    }
    cpy_r_r51 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r52 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r53 = PyTuple_Pack(1, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", 18, CPyStatic_evalexpr___globals);
        goto CPyL22;
    }
    cpy_r_r54 = PyObject_SetAttr(cpy_r_r49, cpy_r_r51, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", 18, CPyStatic_evalexpr___globals);
        goto CPyL22;
    }
    CPyType_evalexpr____NodeEvaluator = (PyTypeObject *)cpy_r_r49;
    CPy_INCREF(CPyType_evalexpr____NodeEvaluator);
    cpy_r_r56 = CPyStatic_evalexpr___globals;
    cpy_r_r57 = CPyStatics[2316]; /* '_NodeEvaluator' */
    cpy_r_r58 = CPyDict_SetItem(cpy_r_r56, cpy_r_r57, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", 18, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    cpy_r_r60 = CPyDef_evalexpr____NodeEvaluator();
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", 195, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    CPyStatic_evalexpr____evaluator = cpy_r_r60;
    CPy_INCREF(CPyStatic_evalexpr____evaluator);
    cpy_r_r61 = CPyStatic_evalexpr___globals;
    cpy_r_r62 = CPyStatics[2317]; /* '_evaluator' */
    cpy_r_r63 = CPyDict_SetItem(cpy_r_r61, cpy_r_r62, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/evalexpr.py", "<module>", 195, CPyStatic_evalexpr___globals);
        goto CPyL21;
    }
    return 1;
CPyL21: ;
    cpy_r_r65 = 2;
    return cpy_r_r65;
CPyL22: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL21;
}
