#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
prepare___SingledispatchVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef prepare___SingledispatchVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___prepare___SingledispatchVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___prepare___SingledispatchVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *prepare___SingledispatchVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_prepare___SingledispatchVisitor(PyObject *cpy_r_errors);

static PyObject *
prepare___SingledispatchVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_prepare___SingledispatchVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = prepare___SingledispatchVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_prepare___SingledispatchVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
prepare___SingledispatchVisitor_traverse(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_current_path);
    Py_VISIT(self->_singledispatch_impls);
    Py_VISIT(self->_decorators_to_remove);
    Py_VISIT(self->_errors);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___prepare___SingledispatchVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___prepare___SingledispatchVisitorObject))));
    return 0;
}

static int
prepare___SingledispatchVisitor_clear(mypyc___irbuild___prepare___SingledispatchVisitorObject *self)
{
    Py_CLEAR(self->_current_path);
    Py_CLEAR(self->_singledispatch_impls);
    Py_CLEAR(self->_decorators_to_remove);
    Py_CLEAR(self->_errors);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___prepare___SingledispatchVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___prepare___SingledispatchVisitorObject))));
    return 0;
}

static void
prepare___SingledispatchVisitor_dealloc(mypyc___irbuild___prepare___SingledispatchVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, prepare___SingledispatchVisitor_dealloc)
    prepare___SingledispatchVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem prepare___SingledispatchVisitor_vtable[98];
static CPyVTableItem prepare___SingledispatchVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t prepare___SingledispatchVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem prepare___SingledispatchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t prepare___SingledispatchVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem prepare___SingledispatchVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t prepare___SingledispatchVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem prepare___SingledispatchVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t prepare___SingledispatchVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_prepare___SingledispatchVisitor_trait_vtable_setup(void)
{
    CPyVTableItem prepare___SingledispatchVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_prepare___SingledispatchVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_for_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_return_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_if_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_try_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_match_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_member_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_from_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_op_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_comparison_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_cast_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_type_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_super_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_unary_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_index_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_type_application__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_lambda_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dictionary_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_generator_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_slice_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_conditional_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_await_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__NodeVisitor_glue,
    };
    memcpy(prepare___SingledispatchVisitor_mypy___visitor___NodeVisitor_trait_vtable, prepare___SingledispatchVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(prepare___SingledispatchVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t prepare___SingledispatchVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(prepare___SingledispatchVisitor_mypy___visitor___NodeVisitor_offset_table, prepare___SingledispatchVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(prepare___SingledispatchVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem prepare___SingledispatchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_type_application__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_lambda_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_generator_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_slice_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_conditional_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_await_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
    };
    memcpy(prepare___SingledispatchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, prepare___SingledispatchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(prepare___SingledispatchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t prepare___SingledispatchVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(prepare___SingledispatchVisitor_mypy___visitor___ExpressionVisitor_offset_table, prepare___SingledispatchVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(prepare___SingledispatchVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem prepare___SingledispatchVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_prepare___SingledispatchVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_return_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_if_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_try_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_match_stmt__StatementVisitor_glue,
    };
    memcpy(prepare___SingledispatchVisitor_mypy___visitor___StatementVisitor_trait_vtable, prepare___SingledispatchVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(prepare___SingledispatchVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t prepare___SingledispatchVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(prepare___SingledispatchVisitor_mypy___visitor___StatementVisitor_offset_table, prepare___SingledispatchVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(prepare___SingledispatchVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem prepare___SingledispatchVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(prepare___SingledispatchVisitor_mypy___visitor___PatternVisitor_trait_vtable, prepare___SingledispatchVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(prepare___SingledispatchVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t prepare___SingledispatchVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(prepare___SingledispatchVisitor_mypy___visitor___PatternVisitor_offset_table, prepare___SingledispatchVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(prepare___SingledispatchVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem prepare___SingledispatchVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)prepare___SingledispatchVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)prepare___SingledispatchVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)prepare___SingledispatchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)prepare___SingledispatchVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)prepare___SingledispatchVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)prepare___SingledispatchVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)prepare___SingledispatchVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)prepare___SingledispatchVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_prepare___SingledispatchVisitor_____init__,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_prepare___SingledispatchVisitor___visit_decorator__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_prepare___SingledispatchVisitor_____init__,
        (CPyVTableItem)CPyDef_prepare___SingledispatchVisitor___visit_decorator,
    };
    memcpy(prepare___SingledispatchVisitor_vtable, prepare___SingledispatchVisitor_vtable_scratch, sizeof(prepare___SingledispatchVisitor_vtable));
    return 1;
}

static PyObject *
prepare___SingledispatchVisitor_get_current_path(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, void *closure);
static int
prepare___SingledispatchVisitor_set_current_path(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, PyObject *value, void *closure);
static PyObject *
prepare___SingledispatchVisitor_get_singledispatch_impls(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, void *closure);
static int
prepare___SingledispatchVisitor_set_singledispatch_impls(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, PyObject *value, void *closure);
static PyObject *
prepare___SingledispatchVisitor_get_decorators_to_remove(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, void *closure);
static int
prepare___SingledispatchVisitor_set_decorators_to_remove(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, PyObject *value, void *closure);
static PyObject *
prepare___SingledispatchVisitor_get_errors(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, void *closure);
static int
prepare___SingledispatchVisitor_set_errors(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef prepare___SingledispatchVisitor_getseters[] = {
    {"current_path",
     (getter)prepare___SingledispatchVisitor_get_current_path, (setter)prepare___SingledispatchVisitor_set_current_path,
     NULL, NULL},
    {"singledispatch_impls",
     (getter)prepare___SingledispatchVisitor_get_singledispatch_impls, (setter)prepare___SingledispatchVisitor_set_singledispatch_impls,
     NULL, NULL},
    {"decorators_to_remove",
     (getter)prepare___SingledispatchVisitor_get_decorators_to_remove, (setter)prepare___SingledispatchVisitor_set_decorators_to_remove,
     NULL, NULL},
    {"errors",
     (getter)prepare___SingledispatchVisitor_get_errors, (setter)prepare___SingledispatchVisitor_set_errors,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef prepare___SingledispatchVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_prepare___SingledispatchVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_decorator",
     (PyCFunction)CPyPy_prepare___SingledispatchVisitor___visit_decorator,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_prepare___SingledispatchVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SingledispatchVisitor",
    .tp_new = prepare___SingledispatchVisitor_new,
    .tp_dealloc = (destructor)prepare___SingledispatchVisitor_dealloc,
    .tp_traverse = (traverseproc)prepare___SingledispatchVisitor_traverse,
    .tp_clear = (inquiry)prepare___SingledispatchVisitor_clear,
    .tp_getset = prepare___SingledispatchVisitor_getseters,
    .tp_methods = prepare___SingledispatchVisitor_methods,
    .tp_init = prepare___SingledispatchVisitor_init,
    .tp_members = prepare___SingledispatchVisitor_members,
    .tp_basicsize = sizeof(mypyc___irbuild___prepare___SingledispatchVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___prepare___SingledispatchVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___prepare___SingledispatchVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_prepare___SingledispatchVisitor_template = &CPyType_prepare___SingledispatchVisitor_template_;

static PyObject *
prepare___SingledispatchVisitor_setup(PyTypeObject *type)
{
    mypyc___irbuild___prepare___SingledispatchVisitorObject *self;
    self = (mypyc___irbuild___prepare___SingledispatchVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = prepare___SingledispatchVisitor_vtable + 12;
    return (PyObject *)self;
}

PyObject *CPyDef_prepare___SingledispatchVisitor(PyObject *cpy_r_errors)
{
    PyObject *self = prepare___SingledispatchVisitor_setup(CPyType_prepare___SingledispatchVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_prepare___SingledispatchVisitor_____init__(self, cpy_r_errors);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
prepare___SingledispatchVisitor_get_current_path(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, void *closure)
{
    if (unlikely(self->_current_path == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'current_path' of 'SingledispatchVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_current_path);
    PyObject *retval = self->_current_path;
    return retval;
}

static int
prepare___SingledispatchVisitor_set_current_path(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SingledispatchVisitor' object attribute 'current_path' cannot be deleted");
        return -1;
    }
    if (self->_current_path != NULL) {
        CPy_DECREF(self->_current_path);
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
    self->_current_path = tmp;
    return 0;
}

static PyObject *
prepare___SingledispatchVisitor_get_singledispatch_impls(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, void *closure)
{
    if (unlikely(self->_singledispatch_impls == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'singledispatch_impls' of 'SingledispatchVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_singledispatch_impls);
    PyObject *retval = self->_singledispatch_impls;
    return retval;
}

static int
prepare___SingledispatchVisitor_set_singledispatch_impls(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SingledispatchVisitor' object attribute 'singledispatch_impls' cannot be deleted");
        return -1;
    }
    if (self->_singledispatch_impls != NULL) {
        CPy_DECREF(self->_singledispatch_impls);
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
    self->_singledispatch_impls = tmp;
    return 0;
}

static PyObject *
prepare___SingledispatchVisitor_get_decorators_to_remove(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, void *closure)
{
    if (unlikely(self->_decorators_to_remove == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'decorators_to_remove' of 'SingledispatchVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_decorators_to_remove);
    PyObject *retval = self->_decorators_to_remove;
    return retval;
}

static int
prepare___SingledispatchVisitor_set_decorators_to_remove(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SingledispatchVisitor' object attribute 'decorators_to_remove' cannot be deleted");
        return -1;
    }
    if (self->_decorators_to_remove != NULL) {
        CPy_DECREF(self->_decorators_to_remove);
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
    self->_decorators_to_remove = tmp;
    return 0;
}

static PyObject *
prepare___SingledispatchVisitor_get_errors(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, void *closure)
{
    if (unlikely(self->_errors == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'errors' of 'SingledispatchVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_errors);
    PyObject *retval = self->_errors;
    return retval;
}

static int
prepare___SingledispatchVisitor_set_errors(mypyc___irbuild___prepare___SingledispatchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SingledispatchVisitor' object attribute 'errors' cannot be deleted");
        return -1;
    }
    if (self->_errors != NULL) {
        CPy_DECREF(self->_errors);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypyc___errors___Errors))
        tmp = value;
    else {
        CPy_TypeError("mypyc.errors.Errors", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_errors = tmp;
    return 0;
}

static PyObject *prepare___get_module_func_defs_env_setup(PyTypeObject *type);
PyObject *CPyDef_prepare___get_module_func_defs_env(void);

static PyObject *
prepare___get_module_func_defs_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_prepare___get_module_func_defs_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return prepare___get_module_func_defs_env_setup(type);
}

static int
prepare___get_module_func_defs_env_traverse(mypyc___irbuild___prepare___get_module_func_defs_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_module);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__3);
    Py_VISIT(self->_name);
    Py_VISIT(self->_node);
    return 0;
}

static int
prepare___get_module_func_defs_env_clear(mypyc___irbuild___prepare___get_module_func_defs_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_module);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_temp__3);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_node);
    return 0;
}

static void
prepare___get_module_func_defs_env_dealloc(mypyc___irbuild___prepare___get_module_func_defs_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, prepare___get_module_func_defs_env_dealloc)
    prepare___get_module_func_defs_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem prepare___get_module_func_defs_env_vtable[1];
static bool
CPyDef_prepare___get_module_func_defs_env_trait_vtable_setup(void)
{
    CPyVTableItem prepare___get_module_func_defs_env_vtable_scratch[] = {
        NULL
    };
    memcpy(prepare___get_module_func_defs_env_vtable, prepare___get_module_func_defs_env_vtable_scratch, sizeof(prepare___get_module_func_defs_env_vtable));
    return 1;
}

static PyMethodDef prepare___get_module_func_defs_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_prepare___get_module_func_defs_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_module_func_defs_env",
    .tp_new = prepare___get_module_func_defs_env_new,
    .tp_dealloc = (destructor)prepare___get_module_func_defs_env_dealloc,
    .tp_traverse = (traverseproc)prepare___get_module_func_defs_env_traverse,
    .tp_clear = (inquiry)prepare___get_module_func_defs_env_clear,
    .tp_methods = prepare___get_module_func_defs_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___prepare___get_module_func_defs_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_prepare___get_module_func_defs_env_template = &CPyType_prepare___get_module_func_defs_env_template_;

static PyObject *
prepare___get_module_func_defs_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___prepare___get_module_func_defs_envObject *self;
    self = (mypyc___irbuild___prepare___get_module_func_defs_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = prepare___get_module_func_defs_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__1 = CPY_INT_TAG;
    self->___mypyc_temp__2 = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_prepare___get_module_func_defs_env(void)
{
    PyObject *self = prepare___get_module_func_defs_env_setup(CPyType_prepare___get_module_func_defs_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *prepare___get_module_func_defs_gen_setup(PyTypeObject *type);
PyObject *CPyDef_prepare___get_module_func_defs_gen(void);

static PyObject *
prepare___get_module_func_defs_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_prepare___get_module_func_defs_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return prepare___get_module_func_defs_gen_setup(type);
}

static int
prepare___get_module_func_defs_gen_traverse(mypyc___irbuild___prepare___get_module_func_defs_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
prepare___get_module_func_defs_gen_clear(mypyc___irbuild___prepare___get_module_func_defs_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
prepare___get_module_func_defs_gen_dealloc(mypyc___irbuild___prepare___get_module_func_defs_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, prepare___get_module_func_defs_gen_dealloc)
    prepare___get_module_func_defs_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem prepare___get_module_func_defs_gen_vtable[6];
static bool
CPyDef_prepare___get_module_func_defs_gen_trait_vtable_setup(void)
{
    CPyVTableItem prepare___get_module_func_defs_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_prepare___get_module_func_defs_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_prepare___get_module_func_defs_gen_____next__,
        (CPyVTableItem)CPyDef_prepare___get_module_func_defs_gen___send,
        (CPyVTableItem)CPyDef_prepare___get_module_func_defs_gen_____iter__,
        (CPyVTableItem)CPyDef_prepare___get_module_func_defs_gen___throw,
        (CPyVTableItem)CPyDef_prepare___get_module_func_defs_gen___close,
    };
    memcpy(prepare___get_module_func_defs_gen_vtable, prepare___get_module_func_defs_gen_vtable_scratch, sizeof(prepare___get_module_func_defs_gen_vtable));
    return 1;
}

static PyMethodDef prepare___get_module_func_defs_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_prepare___get_module_func_defs_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_prepare___get_module_func_defs_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_prepare___get_module_func_defs_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_prepare___get_module_func_defs_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_prepare___get_module_func_defs_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_prepare___get_module_func_defs_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_prepare___get_module_func_defs_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_module_func_defs_gen",
    .tp_new = prepare___get_module_func_defs_gen_new,
    .tp_dealloc = (destructor)prepare___get_module_func_defs_gen_dealloc,
    .tp_traverse = (traverseproc)prepare___get_module_func_defs_gen_traverse,
    .tp_clear = (inquiry)prepare___get_module_func_defs_gen_clear,
    .tp_methods = prepare___get_module_func_defs_gen_methods,
    .tp_iter = CPyDef_prepare___get_module_func_defs_gen_____iter__,
    .tp_iternext = CPyDef_prepare___get_module_func_defs_gen_____next__,
    .tp_basicsize = sizeof(mypyc___irbuild___prepare___get_module_func_defs_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_prepare___get_module_func_defs_gen_template = &CPyType_prepare___get_module_func_defs_gen_template_;

static PyObject *
prepare___get_module_func_defs_gen_setup(PyTypeObject *type)
{
    mypyc___irbuild___prepare___get_module_func_defs_genObject *self;
    self = (mypyc___irbuild___prepare___get_module_func_defs_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = prepare___get_module_func_defs_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_prepare___get_module_func_defs_gen(void)
{
    PyObject *self = prepare___get_module_func_defs_gen_setup(CPyType_prepare___get_module_func_defs_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef preparemodule_methods[] = {
    {"build_type_map", (PyCFunction)CPyPy_prepare___build_type_map, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_from_module", (PyCFunction)CPyPy_prepare___is_from_module, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"load_type_map", (PyCFunction)CPyPy_prepare___load_type_map, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_module_func_defs", (PyCFunction)CPyPy_prepare___get_module_func_defs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"prepare_func_def", (PyCFunction)CPyPy_prepare___prepare_func_def, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"prepare_method_def", (PyCFunction)CPyPy_prepare___prepare_method_def, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_valid_multipart_property_def", (PyCFunction)CPyPy_prepare___is_valid_multipart_property_def, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"can_subclass_builtin", (PyCFunction)CPyPy_prepare___can_subclass_builtin, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"prepare_class_def", (PyCFunction)CPyPy_prepare___prepare_class_def, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"prepare_methods_and_attributes", (PyCFunction)CPyPy_prepare___prepare_methods_and_attributes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"prepare_implicit_property_accessors", (PyCFunction)CPyPy_prepare___prepare_implicit_property_accessors, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_property_methods_for_attribute_if_needed", (PyCFunction)CPyPy_prepare___add_property_methods_for_attribute_if_needed, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_getter_declaration", (PyCFunction)CPyPy_prepare___add_getter_declaration, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_setter_declaration", (PyCFunction)CPyPy_prepare___add_setter_declaration, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"prepare_init_method", (PyCFunction)CPyPy_prepare___prepare_init_method, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"prepare_non_ext_class_def", (PyCFunction)CPyPy_prepare___prepare_non_ext_class_def, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_singledispatch_register_impls", (PyCFunction)CPyPy_prepare___find_singledispatch_register_impls, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_singledispatch_register_call_info", (PyCFunction)CPyPy_prepare___get_singledispatch_register_call_info, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"registered_impl_from_possible_register_call", (PyCFunction)CPyPy_prepare___registered_impl_from_possible_register_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef preparemodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.prepare",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    preparemodule_methods
};

PyObject *CPyInit_mypyc___irbuild___prepare(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___prepare_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___prepare_internal);
        return CPyModule_mypyc___irbuild___prepare_internal;
    }
    CPyModule_mypyc___irbuild___prepare_internal = PyModule_Create(&preparemodule);
    if (unlikely(CPyModule_mypyc___irbuild___prepare_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___prepare_internal, "__name__");
    CPyStatic_prepare___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___prepare_internal);
    if (unlikely(CPyStatic_prepare___globals == NULL))
        goto fail;
    CPyType_prepare___get_module_func_defs_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_prepare___get_module_func_defs_env_template, NULL, modname);
    if (unlikely(!CPyType_prepare___get_module_func_defs_env))
        goto fail;
    CPyType_prepare___get_module_func_defs_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_prepare___get_module_func_defs_gen_template, NULL, modname);
    if (unlikely(!CPyType_prepare___get_module_func_defs_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_prepare_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___prepare_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___prepare_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_prepare___SingledispatchInfo);
    Py_CLEAR(CPyType_prepare___SingledispatchVisitor);
    Py_CLEAR(CPyType_prepare___RegisteredImpl);
    Py_CLEAR(CPyType_prepare___get_module_func_defs_env);
    Py_CLEAR(CPyType_prepare___get_module_func_defs_gen);
    return NULL;
}

char CPyDef_prepare___build_type_map(PyObject *cpy_r_mapper, PyObject *cpy_r_modules, PyObject *cpy_r_graph, PyObject *cpy_r_types, PyObject *cpy_r_options, PyObject *cpy_r_errors) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_classes;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_module_classes;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_cdef;
    tuple_T2OO cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyTagged cpy_r_r41;
    CPyPtr cpy_r_r42;
    int64_t cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T2OO cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_cdef_2;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_class_ir;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    CPyTagged cpy_r_r76;
    CPyTagged cpy_r_r77;
    CPyPtr cpy_r_r78;
    int64_t cpy_r_r79;
    CPyTagged cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    tuple_T2OO cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    PyObject *cpy_r_r88;
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
    PyObject **cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    tuple_T3OOO cpy_r_r115;
    tuple_T3OOO cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject **cpy_r_r121;
    PyObject *cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    tuple_T3OOO cpy_r_r127;
    tuple_T3OOO cpy_r_r128;
    tuple_T3OOO cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject **cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    CPyTagged cpy_r_r135;
    CPyTagged cpy_r_r136;
    CPyPtr cpy_r_r137;
    int64_t cpy_r_r138;
    CPyTagged cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    tuple_T2OO cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    CPyTagged cpy_r_r153;
    CPyTagged cpy_r_r154;
    CPyPtr cpy_r_r155;
    int64_t cpy_r_r156;
    CPyTagged cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_func;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    CPyTagged cpy_r_r169;
    CPyTagged cpy_r_r170;
    CPyPtr cpy_r_r171;
    int64_t cpy_r_r172;
    CPyTagged cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    tuple_T2OO cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    CPyTagged cpy_r_r184;
    int64_t cpy_r_r185;
    CPyTagged cpy_r_r186;
    PyObject *cpy_r_r187;
    tuple_T3CIO cpy_r_r188;
    CPyTagged cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    CPyTagged cpy_r_r196;
    CPyPtr cpy_r_r197;
    int64_t cpy_r_r198;
    CPyTagged cpy_r_r199;
    char cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_base_ir;
    PyObject *cpy_r_r203;
    int32_t cpy_r_r204;
    char cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_node_2;
    PyObject *cpy_r_r219;
    char cpy_r_r220;
    char cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_kind;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    CPyTagged cpy_r_r234;
    char cpy_r_r235;
    CPyTagged cpy_r_r236;
    char cpy_r_r237;
    char cpy_r_r238;
    CPyTagged cpy_r_r239;
    char cpy_r_r240;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 75, CPyStatic_prepare___globals);
        goto CPyL138;
    }
    cpy_r_classes = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL20;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_modules, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___MypyFile))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 76, CPyStatic_prepare___globals, "mypy.nodes.MypyFile", cpy_r_r6);
        goto CPyL139;
    }
    cpy_r_module = cpy_r_r7;
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 77, CPyStatic_prepare___globals);
        goto CPyL140;
    }
    cpy_r_r9 = ((mypy___nodes___MypyFileObject *)cpy_r_module)->_defs;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = 0;
CPyL6: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL141;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r9, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_nodes___Statement)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 77, CPyStatic_prepare___globals, "mypy.nodes.Statement", cpy_r_r15);
        goto CPyL142;
    }
    cpy_r_node = cpy_r_r16;
    cpy_r_r17 = (PyObject *)CPyType_nodes___ClassDef;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL143;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___ClassDef))
        cpy_r_r21 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 77, CPyStatic_prepare___globals, "mypy.nodes.ClassDef", cpy_r_node);
        goto CPyL142;
    }
    cpy_r_r22 = PyList_Append(cpy_r_r8, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 77, CPyStatic_prepare___globals);
        goto CPyL142;
    }
CPyL11: ;
    cpy_r_r24 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r24;
    goto CPyL6;
CPyL12: ;
    cpy_r_module_classes = cpy_r_r8;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_module_classes)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = PyList_New(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 78, CPyStatic_prepare___globals);
        goto CPyL144;
    }
    cpy_r_r28 = 0;
CPyL14: ;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_module_classes)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r28 < (Py_ssize_t)cpy_r_r31;
    if (!cpy_r_r32) goto CPyL145;
    cpy_r_r33 = CPyList_GetItemUnsafe(cpy_r_module_classes, cpy_r_r28);
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_nodes___ClassDef))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 78, CPyStatic_prepare___globals, "mypy.nodes.ClassDef", cpy_r_r33);
        goto CPyL146;
    }
    cpy_r_cdef = cpy_r_r34;
    cpy_r_r35.f0 = cpy_r_module;
    cpy_r_r35.f1 = cpy_r_cdef;
    CPy_INCREF(cpy_r_r35.f0);
    CPy_INCREF(cpy_r_r35.f1);
    CPy_DECREF(cpy_r_cdef);
    cpy_r_r36 = PyTuple_New(2);
    if (unlikely(cpy_r_r36 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10398 = cpy_r_r35.f0;
    PyTuple_SET_ITEM(cpy_r_r36, 0, __tmp10398);
    PyObject *__tmp10399 = cpy_r_r35.f1;
    PyTuple_SET_ITEM(cpy_r_r36, 1, __tmp10399);
    cpy_r_r37 = CPyList_SetItemUnsafe(cpy_r_r27, cpy_r_r28, cpy_r_r36);
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 78, CPyStatic_prepare___globals);
        goto CPyL146;
    }
    cpy_r_r38 = cpy_r_r28 + 2;
    cpy_r_r28 = cpy_r_r38;
    goto CPyL14;
CPyL18: ;
    cpy_r_r39 = CPyList_Extend(cpy_r_classes, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 78, CPyStatic_prepare___globals);
        goto CPyL139;
    } else
        goto CPyL147;
CPyL19: ;
    cpy_r_r40 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r40;
    goto CPyL2;
CPyL20: ;
    cpy_r_r41 = 0;
CPyL21: ;
    cpy_r_r42 = (CPyPtr)&((PyVarObject *)cpy_r_classes)->ob_size;
    cpy_r_r43 = *(int64_t *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 << 1;
    cpy_r_r45 = (Py_ssize_t)cpy_r_r41 < (Py_ssize_t)cpy_r_r44;
    if (!cpy_r_r45) goto CPyL37;
    cpy_r_r46 = CPyList_GetItemUnsafe(cpy_r_classes, cpy_r_r41);
    PyObject *__tmp10400;
    if (unlikely(!(PyTuple_Check(cpy_r_r46) && PyTuple_GET_SIZE(cpy_r_r46) == 2))) {
        __tmp10400 = NULL;
        goto __LL10401;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r46, 0)) == CPyType_nodes___MypyFile))
        __tmp10400 = PyTuple_GET_ITEM(cpy_r_r46, 0);
    else {
        __tmp10400 = NULL;
    }
    if (__tmp10400 == NULL) goto __LL10401;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r46, 1)) == CPyType_nodes___ClassDef))
        __tmp10400 = PyTuple_GET_ITEM(cpy_r_r46, 1);
    else {
        __tmp10400 = NULL;
    }
    if (__tmp10400 == NULL) goto __LL10401;
    __tmp10400 = cpy_r_r46;
__LL10401: ;
    if (unlikely(__tmp10400 == NULL)) {
        CPy_TypeError("tuple[mypy.nodes.MypyFile, mypy.nodes.ClassDef]", cpy_r_r46); cpy_r_r47 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10402 = PyTuple_GET_ITEM(cpy_r_r46, 0);
        CPy_INCREF(__tmp10402);
        PyObject *__tmp10403;
        if (likely(Py_TYPE(__tmp10402) == CPyType_nodes___MypyFile))
            __tmp10403 = __tmp10402;
        else {
            CPy_TypeError("mypy.nodes.MypyFile", __tmp10402); 
            __tmp10403 = NULL;
        }
        cpy_r_r47.f0 = __tmp10403;
        PyObject *__tmp10404 = PyTuple_GET_ITEM(cpy_r_r46, 1);
        CPy_INCREF(__tmp10404);
        PyObject *__tmp10405;
        if (likely(Py_TYPE(__tmp10404) == CPyType_nodes___ClassDef))
            __tmp10405 = __tmp10404;
        else {
            CPy_TypeError("mypy.nodes.ClassDef", __tmp10404); 
            __tmp10405 = NULL;
        }
        cpy_r_r47.f1 = __tmp10405;
    }
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 82, CPyStatic_prepare___globals);
        goto CPyL139;
    }
    cpy_r_r48 = cpy_r_r47.f0;
    CPy_INCREF(cpy_r_r48);
    cpy_r_module = cpy_r_r48;
    cpy_r_r49 = cpy_r_r47.f1;
    CPy_INCREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r47.f0);
    CPy_DECREF(cpy_r_r47.f1);
    cpy_r_cdef_2 = cpy_r_r49;
    cpy_r_r50 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef_2)->_name;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = CPY_GET_ATTR(cpy_r_module, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 84, CPyStatic_prepare___globals);
        goto CPyL148;
    }
CPyL24: ;
    cpy_r_r52 = CPyDef_irbuild___util___is_trait(cpy_r_cdef_2);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 84, CPyStatic_prepare___globals);
        goto CPyL149;
    }
    cpy_r_r53 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef_2)->_info;
    cpy_r_r54 = ((mypy___nodes___TypeInfoObject *)cpy_r_r53)->_is_abstract;
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "build_type_map", "TypeInfo", "is_abstract", 84, CPyStatic_prepare___globals);
        goto CPyL149;
    }
CPyL26: ;
    cpy_r_r55 = 2;
    cpy_r_r56 = 2;
    cpy_r_r57 = CPyDef_class_ir___ClassIR(cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r55, cpy_r_r54, cpy_r_r56);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 83, CPyStatic_prepare___globals);
        goto CPyL150;
    }
    cpy_r_class_ir = cpy_r_r57;
    cpy_r_r58 = CPyDef_irbuild___util___is_extension_class(cpy_r_cdef_2);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 86, CPyStatic_prepare___globals);
        goto CPyL151;
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_is_ext_class = cpy_r_r58;
    cpy_r_r60 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_is_ext_class;
    if (!cpy_r_r60) goto CPyL33;
CPyL29: ;
    cpy_r_r61 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef_2)->_info;
    cpy_r_r62 = ((mypy___nodes___TypeInfoObject *)cpy_r_r61)->_deletable_attributes;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "build_type_map", "TypeInfo", "deletable_attributes", 88, CPyStatic_prepare___globals);
        goto CPyL151;
    }
    CPy_INCREF(cpy_r_r62);
CPyL30: ;
    cpy_r_r63 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r64[1] = {cpy_r_r62};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = PyObject_VectorcallMethod(cpy_r_r63, cpy_r_r65, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 88, CPyStatic_prepare___globals);
        goto CPyL152;
    }
    CPy_DECREF(cpy_r_r62);
    if (likely(PyList_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 88, CPyStatic_prepare___globals, "list", cpy_r_r66);
        goto CPyL151;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_deletable != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_deletable);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_deletable = cpy_r_r67;
    cpy_r_r68 = 1;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 88, CPyStatic_prepare___globals);
        goto CPyL151;
    }
CPyL33: ;
    cpy_r_r69 = ((mypyc___options___CompilerOptionsObject *)cpy_r_options)->_global_opts;
    if (cpy_r_r69) goto CPyL35;
CPyL34: ;
    cpy_r_r70 = Py_None;
    CPy_INCREF(cpy_r_r70);
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_children != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_children);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_children = cpy_r_r70;
    cpy_r_r71 = 1;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 91, CPyStatic_prepare___globals);
        goto CPyL151;
    }
CPyL35: ;
    cpy_r_r72 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef_2)->_info;
    CPy_INCREF(cpy_r_r73);
    CPy_DECREF(cpy_r_cdef_2);
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r72, cpy_r_r73, cpy_r_class_ir);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_class_ir);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 92, CPyStatic_prepare___globals);
        goto CPyL139;
    }
    cpy_r_r76 = cpy_r_r41 + 2;
    cpy_r_r41 = cpy_r_r76;
    goto CPyL21;
CPyL37: ;
    cpy_r_r77 = 0;
CPyL38: ;
    cpy_r_r78 = (CPyPtr)&((PyVarObject *)cpy_r_classes)->ob_size;
    cpy_r_r79 = *(int64_t *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 << 1;
    cpy_r_r81 = (Py_ssize_t)cpy_r_r77 < (Py_ssize_t)cpy_r_r80;
    if (!cpy_r_r81) goto CPyL74;
    cpy_r_r82 = CPyList_GetItemUnsafe(cpy_r_classes, cpy_r_r77);
    PyObject *__tmp10406;
    if (unlikely(!(PyTuple_Check(cpy_r_r82) && PyTuple_GET_SIZE(cpy_r_r82) == 2))) {
        __tmp10406 = NULL;
        goto __LL10407;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r82, 0)) == CPyType_nodes___MypyFile))
        __tmp10406 = PyTuple_GET_ITEM(cpy_r_r82, 0);
    else {
        __tmp10406 = NULL;
    }
    if (__tmp10406 == NULL) goto __LL10407;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r82, 1)) == CPyType_nodes___ClassDef))
        __tmp10406 = PyTuple_GET_ITEM(cpy_r_r82, 1);
    else {
        __tmp10406 = NULL;
    }
    if (__tmp10406 == NULL) goto __LL10407;
    __tmp10406 = cpy_r_r82;
__LL10407: ;
    if (unlikely(__tmp10406 == NULL)) {
        CPy_TypeError("tuple[mypy.nodes.MypyFile, mypy.nodes.ClassDef]", cpy_r_r82); cpy_r_r83 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10408 = PyTuple_GET_ITEM(cpy_r_r82, 0);
        CPy_INCREF(__tmp10408);
        PyObject *__tmp10409;
        if (likely(Py_TYPE(__tmp10408) == CPyType_nodes___MypyFile))
            __tmp10409 = __tmp10408;
        else {
            CPy_TypeError("mypy.nodes.MypyFile", __tmp10408); 
            __tmp10409 = NULL;
        }
        cpy_r_r83.f0 = __tmp10409;
        PyObject *__tmp10410 = PyTuple_GET_ITEM(cpy_r_r82, 1);
        CPy_INCREF(__tmp10410);
        PyObject *__tmp10411;
        if (likely(Py_TYPE(__tmp10410) == CPyType_nodes___ClassDef))
            __tmp10411 = __tmp10410;
        else {
            CPy_TypeError("mypy.nodes.ClassDef", __tmp10410); 
            __tmp10411 = NULL;
        }
        cpy_r_r83.f1 = __tmp10411;
    }
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 95, CPyStatic_prepare___globals);
        goto CPyL139;
    }
    cpy_r_r84 = cpy_r_r83.f0;
    CPy_INCREF(cpy_r_r84);
    cpy_r_module = cpy_r_r84;
    cpy_r_r85 = cpy_r_r83.f1;
    CPy_INCREF(cpy_r_r85);
    CPy_DECREF(cpy_r_r83.f0);
    CPy_DECREF(cpy_r_r83.f1);
    cpy_r_cdef_2 = cpy_r_r85;
    cpy_r_r86 = ((mypy___nodes___MypyFileObject *)cpy_r_module)->_path;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef_2)->_line;
    CPyTagged_INCREF(cpy_r_r87);
    cpy_r_r88 = CPyStatic_prepare___globals;
    cpy_r_r89 = CPyStatics[7743]; /* 'catch_errors' */
    cpy_r_r90 = CPyDict_GetItem(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 96, CPyStatic_prepare___globals);
        goto CPyL153;
    }
    cpy_r_r91 = CPyTagged_StealAsObject(cpy_r_r87);
    PyObject *cpy_r_r92[2] = {cpy_r_r86, cpy_r_r91};
    cpy_r_r93 = (PyObject **)&cpy_r_r92;
    cpy_r_r94 = _PyObject_Vectorcall(cpy_r_r90, cpy_r_r93, 2, 0);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 96, CPyStatic_prepare___globals);
        goto CPyL154;
    }
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r95 = PyObject_Type(cpy_r_r94);
    cpy_r_r96 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r97 = CPyObject_GetAttr(cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 96, CPyStatic_prepare___globals);
        goto CPyL155;
    }
    cpy_r_r98 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r99 = CPyObject_GetAttr(cpy_r_r95, cpy_r_r98);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 96, CPyStatic_prepare___globals);
        goto CPyL156;
    }
    PyObject *cpy_r_r100[1] = {cpy_r_r94};
    cpy_r_r101 = (PyObject **)&cpy_r_r100;
    cpy_r_r102 = _PyObject_Vectorcall(cpy_r_r99, cpy_r_r101, 1, 0);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 96, CPyStatic_prepare___globals);
        goto CPyL156;
    } else
        goto CPyL157;
CPyL45: ;
    cpy_r_r103 = 1;
    cpy_r_r104 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r104);
    cpy_r_r105 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef_2)->_info;
    CPy_INCREF(cpy_r_r105);
    cpy_r_r106 = CPyDict_GetItem(cpy_r_r104, cpy_r_r105);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 97, CPyStatic_prepare___globals);
        goto CPyL158;
    }
    if (likely(Py_TYPE(cpy_r_r106) == CPyType_class_ir___ClassIR))
        cpy_r_r107 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 97, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r106);
        goto CPyL158;
    }
    cpy_r_r108 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r107)->_is_ext_class;
    CPy_DECREF(cpy_r_r107);
    if (!cpy_r_r108) goto CPyL51;
CPyL49: ;
    cpy_r_r109 = ((mypy___nodes___MypyFileObject *)cpy_r_module)->_path;
    CPy_INCREF(cpy_r_r109);
    cpy_r_r110 = CPY_GET_ATTR(cpy_r_module, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 98, CPyStatic_prepare___globals);
        goto CPyL159;
    }
CPyL50: ;
    cpy_r_r111 = CPyDef_prepare___prepare_class_def(cpy_r_r109, cpy_r_r110, cpy_r_cdef_2, cpy_r_errors, cpy_r_mapper);
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_cdef_2);
    if (unlikely(cpy_r_r111 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 98, CPyStatic_prepare___globals);
        goto CPyL53;
    } else
        goto CPyL61;
CPyL51: ;
    cpy_r_r112 = ((mypy___nodes___MypyFileObject *)cpy_r_module)->_path;
    CPy_INCREF(cpy_r_r112);
    cpy_r_r113 = CPY_GET_ATTR(cpy_r_module, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 100, CPyStatic_prepare___globals);
        goto CPyL160;
    }
CPyL52: ;
    cpy_r_r114 = CPyDef_prepare___prepare_non_ext_class_def(cpy_r_r112, cpy_r_r113, cpy_r_cdef_2, cpy_r_errors, cpy_r_mapper);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_cdef_2);
    if (unlikely(cpy_r_r114 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 100, CPyStatic_prepare___globals);
    } else
        goto CPyL61;
CPyL53: ;
    cpy_r_r115 = CPy_CatchError();
    cpy_r_r103 = 0;
    cpy_r_r116 = CPy_GetExcInfo();
    cpy_r_r117 = cpy_r_r116.f0;
    CPy_INCREF(cpy_r_r117);
    cpy_r_r118 = cpy_r_r116.f1;
    CPy_INCREF(cpy_r_r118);
    cpy_r_r119 = cpy_r_r116.f2;
    CPy_INCREF(cpy_r_r119);
    CPy_DecRef(cpy_r_r116.f0);
    CPy_DecRef(cpy_r_r116.f1);
    CPy_DecRef(cpy_r_r116.f2);
    PyObject *cpy_r_r120[4] = {cpy_r_r94, cpy_r_r117, cpy_r_r118, cpy_r_r119};
    cpy_r_r121 = (PyObject **)&cpy_r_r120;
    cpy_r_r122 = _PyObject_Vectorcall(cpy_r_r97, cpy_r_r121, 4, 0);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 96, CPyStatic_prepare___globals);
        goto CPyL161;
    }
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r119);
    cpy_r_r123 = PyObject_IsTrue(cpy_r_r122);
    CPy_DecRef(cpy_r_r122);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 96, CPyStatic_prepare___globals);
        goto CPyL59;
    }
    cpy_r_r125 = cpy_r_r123;
    if (cpy_r_r125) goto CPyL58;
    CPy_Reraise();
    if (!0) {
        goto CPyL59;
    } else
        goto CPyL162;
CPyL57: ;
    CPy_Unreachable();
CPyL58: ;
    CPy_RestoreExcInfo(cpy_r_r115);
    CPy_DecRef(cpy_r_r115.f0);
    CPy_DecRef(cpy_r_r115.f1);
    CPy_DecRef(cpy_r_r115.f2);
    goto CPyL61;
CPyL59: ;
    CPy_RestoreExcInfo(cpy_r_r115);
    CPy_DecRef(cpy_r_r115.f0);
    CPy_DecRef(cpy_r_r115.f1);
    CPy_DecRef(cpy_r_r115.f2);
    cpy_r_r126 = CPy_KeepPropagating();
    if (!cpy_r_r126) {
        goto CPyL62;
    } else
        goto CPyL163;
CPyL60: ;
    CPy_Unreachable();
CPyL61: ;
    tuple_T3OOO __tmp10412 = { NULL, NULL, NULL };
    cpy_r_r127 = __tmp10412;
    cpy_r_r128 = cpy_r_r127;
    goto CPyL63;
CPyL62: ;
    cpy_r_r129 = CPy_CatchError();
    cpy_r_r128 = cpy_r_r129;
CPyL63: ;
    if (!cpy_r_r103) goto CPyL164;
    cpy_r_r130 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r131[4] = {cpy_r_r94, cpy_r_r130, cpy_r_r130, cpy_r_r130};
    cpy_r_r132 = (PyObject **)&cpy_r_r131;
    cpy_r_r133 = _PyObject_Vectorcall(cpy_r_r97, cpy_r_r132, 4, 0);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 96, CPyStatic_prepare___globals);
        goto CPyL165;
    } else
        goto CPyL166;
CPyL65: ;
    CPy_DECREF(cpy_r_r94);
CPyL66: ;
    if (cpy_r_r128.f0 == NULL) {
        goto CPyL73;
    } else
        goto CPyL167;
CPyL67: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL69;
    } else
        goto CPyL168;
CPyL68: ;
    CPy_Unreachable();
CPyL69: ;
    if (cpy_r_r128.f0 == NULL) goto CPyL71;
    CPy_RestoreExcInfo(cpy_r_r128);
    CPy_XDECREF(cpy_r_r128.f0);
    CPy_XDECREF(cpy_r_r128.f1);
    CPy_XDECREF(cpy_r_r128.f2);
CPyL71: ;
    cpy_r_r134 = CPy_KeepPropagating();
    if (!cpy_r_r134) goto CPyL138;
    CPy_Unreachable();
CPyL73: ;
    cpy_r_r135 = cpy_r_r77 + 2;
    cpy_r_r77 = cpy_r_r135;
    goto CPyL38;
CPyL74: ;
    cpy_r_r136 = 0;
CPyL75: ;
    cpy_r_r137 = (CPyPtr)&((PyVarObject *)cpy_r_classes)->ob_size;
    cpy_r_r138 = *(int64_t *)cpy_r_r137;
    cpy_r_r139 = cpy_r_r138 << 1;
    cpy_r_r140 = (Py_ssize_t)cpy_r_r136 < (Py_ssize_t)cpy_r_r139;
    if (!cpy_r_r140) goto CPyL83;
    cpy_r_r141 = CPyList_GetItemUnsafe(cpy_r_classes, cpy_r_r136);
    PyObject *__tmp10413;
    if (unlikely(!(PyTuple_Check(cpy_r_r141) && PyTuple_GET_SIZE(cpy_r_r141) == 2))) {
        __tmp10413 = NULL;
        goto __LL10414;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r141, 0)) == CPyType_nodes___MypyFile))
        __tmp10413 = PyTuple_GET_ITEM(cpy_r_r141, 0);
    else {
        __tmp10413 = NULL;
    }
    if (__tmp10413 == NULL) goto __LL10414;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r141, 1)) == CPyType_nodes___ClassDef))
        __tmp10413 = PyTuple_GET_ITEM(cpy_r_r141, 1);
    else {
        __tmp10413 = NULL;
    }
    if (__tmp10413 == NULL) goto __LL10414;
    __tmp10413 = cpy_r_r141;
__LL10414: ;
    if (unlikely(__tmp10413 == NULL)) {
        CPy_TypeError("tuple[mypy.nodes.MypyFile, mypy.nodes.ClassDef]", cpy_r_r141); cpy_r_r142 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10415 = PyTuple_GET_ITEM(cpy_r_r141, 0);
        CPy_INCREF(__tmp10415);
        PyObject *__tmp10416;
        if (likely(Py_TYPE(__tmp10415) == CPyType_nodes___MypyFile))
            __tmp10416 = __tmp10415;
        else {
            CPy_TypeError("mypy.nodes.MypyFile", __tmp10415); 
            __tmp10416 = NULL;
        }
        cpy_r_r142.f0 = __tmp10416;
        PyObject *__tmp10417 = PyTuple_GET_ITEM(cpy_r_r141, 1);
        CPy_INCREF(__tmp10417);
        PyObject *__tmp10418;
        if (likely(Py_TYPE(__tmp10417) == CPyType_nodes___ClassDef))
            __tmp10418 = __tmp10417;
        else {
            CPy_TypeError("mypy.nodes.ClassDef", __tmp10417); 
            __tmp10418 = NULL;
        }
        cpy_r_r142.f1 = __tmp10418;
    }
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r142.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 103, CPyStatic_prepare___globals);
        goto CPyL139;
    }
    cpy_r_r143 = cpy_r_r142.f0;
    CPy_INCREF(cpy_r_r143);
    cpy_r_module = cpy_r_r143;
    cpy_r_r144 = cpy_r_r142.f1;
    CPy_INCREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r142.f0);
    CPy_DECREF(cpy_r_r142.f1);
    cpy_r_cdef_2 = cpy_r_r144;
    cpy_r_r145 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r145);
    cpy_r_r146 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef_2)->_info;
    CPy_INCREF(cpy_r_r146);
    cpy_r_r147 = CPyDict_GetItem(cpy_r_r145, cpy_r_r146);
    CPy_DECREF(cpy_r_r145);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 104, CPyStatic_prepare___globals);
        goto CPyL169;
    }
    if (likely(Py_TYPE(cpy_r_r147) == CPyType_class_ir___ClassIR))
        cpy_r_r148 = cpy_r_r147;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 104, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r147);
        goto CPyL169;
    }
    cpy_r_class_ir = cpy_r_r148;
    cpy_r_r149 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_is_ext_class;
    if (!cpy_r_r149) goto CPyL170;
CPyL80: ;
    cpy_r_r150 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef_2)->_info;
    CPy_INCREF(cpy_r_r150);
    CPy_DECREF(cpy_r_cdef_2);
    cpy_r_r151 = CPY_GET_ATTR(cpy_r_module, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 106, CPyStatic_prepare___globals);
        goto CPyL171;
    }
CPyL81: ;
    cpy_r_r152 = CPyDef_prepare___prepare_implicit_property_accessors(cpy_r_r150, cpy_r_class_ir, cpy_r_r151, cpy_r_mapper);
    CPy_DECREF(cpy_r_r150);
    CPy_DECREF(cpy_r_class_ir);
    CPy_DECREF(cpy_r_r151);
    if (unlikely(cpy_r_r152 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 106, CPyStatic_prepare___globals);
        goto CPyL139;
    }
CPyL82: ;
    cpy_r_r153 = cpy_r_r136 + 2;
    cpy_r_r136 = cpy_r_r153;
    goto CPyL75;
CPyL83: ;
    cpy_r_r154 = 0;
CPyL84: ;
    cpy_r_r155 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r156 = *(int64_t *)cpy_r_r155;
    cpy_r_r157 = cpy_r_r156 << 1;
    cpy_r_r158 = (Py_ssize_t)cpy_r_r154 < (Py_ssize_t)cpy_r_r157;
    if (!cpy_r_r158) goto CPyL94;
    cpy_r_r159 = CPyList_GetItemUnsafe(cpy_r_modules, cpy_r_r154);
    if (likely(Py_TYPE(cpy_r_r159) == CPyType_nodes___MypyFile))
        cpy_r_r160 = cpy_r_r159;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 111, CPyStatic_prepare___globals, "mypy.nodes.MypyFile", cpy_r_r159);
        goto CPyL139;
    }
    cpy_r_module = cpy_r_r160;
    cpy_r_r161 = CPyDef_prepare___get_module_func_defs(cpy_r_module);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 112, CPyStatic_prepare___globals);
        goto CPyL140;
    }
    cpy_r_r162 = PyObject_GetIter(cpy_r_r161);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 112, CPyStatic_prepare___globals);
        goto CPyL140;
    }
CPyL88: ;
    cpy_r_r163 = PyIter_Next(cpy_r_r162);
    if (cpy_r_r163 == NULL) goto CPyL172;
    if (likely(Py_TYPE(cpy_r_r163) == CPyType_nodes___FuncDef))
        cpy_r_r164 = cpy_r_r163;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 112, CPyStatic_prepare___globals, "mypy.nodes.FuncDef", cpy_r_r163);
        goto CPyL173;
    }
    cpy_r_func = cpy_r_r164;
    cpy_r_r165 = CPY_GET_ATTR(cpy_r_module, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 113, CPyStatic_prepare___globals);
        goto CPyL174;
    }
CPyL91: ;
    cpy_r_r166 = Py_None;
    cpy_r_r167 = CPyDef_prepare___prepare_func_def(cpy_r_r165, cpy_r_r166, cpy_r_func, cpy_r_mapper);
    CPy_DECREF(cpy_r_r165);
    CPy_DECREF(cpy_r_func);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 113, CPyStatic_prepare___globals);
        goto CPyL173;
    } else
        goto CPyL175;
CPyL92: ;
    cpy_r_r168 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 112, CPyStatic_prepare___globals);
        goto CPyL139;
    }
    cpy_r_r169 = cpy_r_r154 + 2;
    cpy_r_r154 = cpy_r_r169;
    goto CPyL84;
CPyL94: ;
    cpy_r_r170 = 0;
CPyL95: ;
    cpy_r_r171 = (CPyPtr)&((PyVarObject *)cpy_r_classes)->ob_size;
    cpy_r_r172 = *(int64_t *)cpy_r_r171;
    cpy_r_r173 = cpy_r_r172 << 1;
    cpy_r_r174 = (Py_ssize_t)cpy_r_r170 < (Py_ssize_t)cpy_r_r173;
    if (!cpy_r_r174) goto CPyL176;
    cpy_r_r175 = CPyList_GetItemUnsafe(cpy_r_classes, cpy_r_r170);
    PyObject *__tmp10419;
    if (unlikely(!(PyTuple_Check(cpy_r_r175) && PyTuple_GET_SIZE(cpy_r_r175) == 2))) {
        __tmp10419 = NULL;
        goto __LL10420;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r175, 0)) == CPyType_nodes___MypyFile))
        __tmp10419 = PyTuple_GET_ITEM(cpy_r_r175, 0);
    else {
        __tmp10419 = NULL;
    }
    if (__tmp10419 == NULL) goto __LL10420;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r175, 1)) == CPyType_nodes___ClassDef))
        __tmp10419 = PyTuple_GET_ITEM(cpy_r_r175, 1);
    else {
        __tmp10419 = NULL;
    }
    if (__tmp10419 == NULL) goto __LL10420;
    __tmp10419 = cpy_r_r175;
__LL10420: ;
    if (unlikely(__tmp10419 == NULL)) {
        CPy_TypeError("tuple[mypy.nodes.MypyFile, mypy.nodes.ClassDef]", cpy_r_r175); cpy_r_r176 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10421 = PyTuple_GET_ITEM(cpy_r_r175, 0);
        CPy_INCREF(__tmp10421);
        PyObject *__tmp10422;
        if (likely(Py_TYPE(__tmp10421) == CPyType_nodes___MypyFile))
            __tmp10422 = __tmp10421;
        else {
            CPy_TypeError("mypy.nodes.MypyFile", __tmp10421); 
            __tmp10422 = NULL;
        }
        cpy_r_r176.f0 = __tmp10422;
        PyObject *__tmp10423 = PyTuple_GET_ITEM(cpy_r_r175, 1);
        CPy_INCREF(__tmp10423);
        PyObject *__tmp10424;
        if (likely(Py_TYPE(__tmp10423) == CPyType_nodes___ClassDef))
            __tmp10424 = __tmp10423;
        else {
            CPy_TypeError("mypy.nodes.ClassDef", __tmp10423); 
            __tmp10424 = NULL;
        }
        cpy_r_r176.f1 = __tmp10424;
    }
    CPy_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r176.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 118, CPyStatic_prepare___globals);
        goto CPyL139;
    }
    cpy_r_r177 = cpy_r_r176.f0;
    CPy_INCREF(cpy_r_r177);
    cpy_r_module = cpy_r_r177;
    cpy_r_r178 = cpy_r_r176.f1;
    CPy_INCREF(cpy_r_r178);
    CPy_DECREF(cpy_r_r176.f0);
    CPy_DECREF(cpy_r_r176.f1);
    cpy_r_cdef_2 = cpy_r_r178;
    cpy_r_r179 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r179);
    cpy_r_r180 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef_2)->_info;
    CPy_INCREF(cpy_r_r180);
    cpy_r_r181 = CPyDict_GetItem(cpy_r_r179, cpy_r_r180);
    CPy_DECREF(cpy_r_r179);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 119, CPyStatic_prepare___globals);
        goto CPyL169;
    }
    if (likely(Py_TYPE(cpy_r_r181) == CPyType_class_ir___ClassIR))
        cpy_r_r182 = cpy_r_r181;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 119, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r181);
        goto CPyL169;
    }
    cpy_r_class_ir = cpy_r_r182;
    cpy_r_r183 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_attributes;
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "build_type_map", "ClassIR", "attributes", 120, CPyStatic_prepare___globals);
        goto CPyL177;
    }
    CPy_INCREF(cpy_r_r183);
CPyL100: ;
    cpy_r_r184 = 0;
    cpy_r_r185 = PyDict_Size(cpy_r_r183);
    cpy_r_r186 = cpy_r_r185 << 1;
    cpy_r_r187 = CPyDict_GetKeysIter(cpy_r_r183);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 120, CPyStatic_prepare___globals);
        goto CPyL178;
    }
CPyL101: ;
    cpy_r_r188 = CPyDict_NextKey(cpy_r_r187, cpy_r_r184);
    cpy_r_r189 = cpy_r_r188.f1;
    cpy_r_r184 = cpy_r_r189;
    cpy_r_r190 = cpy_r_r188.f0;
    if (!cpy_r_r190) goto CPyL179;
    cpy_r_r191 = cpy_r_r188.f2;
    CPy_INCREF(cpy_r_r191);
    CPy_DECREF(cpy_r_r188.f2);
    if (likely(PyUnicode_Check(cpy_r_r191)))
        cpy_r_r192 = cpy_r_r191;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 120, CPyStatic_prepare___globals, "str", cpy_r_r191);
        goto CPyL180;
    }
    cpy_r_attr = cpy_r_r192;
    cpy_r_r193 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_mro;
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "build_type_map", "ClassIR", "mro", 121, CPyStatic_prepare___globals);
        goto CPyL181;
    }
    CPy_INCREF(cpy_r_r193);
CPyL104: ;
    cpy_r_r194 = CPyList_GetSlice(cpy_r_r193, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 121, CPyStatic_prepare___globals);
        goto CPyL181;
    }
    if (likely(PyList_Check(cpy_r_r194)))
        cpy_r_r195 = cpy_r_r194;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 121, CPyStatic_prepare___globals, "list", cpy_r_r194);
        goto CPyL181;
    }
    cpy_r_r196 = 0;
CPyL107: ;
    cpy_r_r197 = (CPyPtr)&((PyVarObject *)cpy_r_r195)->ob_size;
    cpy_r_r198 = *(int64_t *)cpy_r_r197;
    cpy_r_r199 = cpy_r_r198 << 1;
    cpy_r_r200 = (Py_ssize_t)cpy_r_r196 < (Py_ssize_t)cpy_r_r199;
    if (!cpy_r_r200) goto CPyL182;
    cpy_r_r201 = CPyList_GetItemUnsafe(cpy_r_r195, cpy_r_r196);
    if (likely(Py_TYPE(cpy_r_r201) == CPyType_class_ir___ClassIR))
        cpy_r_r202 = cpy_r_r201;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 121, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r201);
        goto CPyL183;
    }
    cpy_r_base_ir = cpy_r_r202;
    cpy_r_r203 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base_ir)->_attributes;
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "build_type_map", "ClassIR", "attributes", 122, CPyStatic_prepare___globals);
        goto CPyL184;
    }
    CPy_INCREF(cpy_r_r203);
CPyL110: ;
    cpy_r_r204 = PyDict_Contains(cpy_r_r203, cpy_r_attr);
    CPy_DECREF(cpy_r_r203);
    cpy_r_r205 = cpy_r_r204 >= 0;
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 122, CPyStatic_prepare___globals);
        goto CPyL184;
    }
    cpy_r_r206 = cpy_r_r204;
    if (!cpy_r_r206) goto CPyL185;
    cpy_r_r207 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_attributes;
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "build_type_map", "ClassIR", "attributes", 123, CPyStatic_prepare___globals);
        goto CPyL184;
    }
    CPy_INCREF(cpy_r_r207);
CPyL113: ;
    cpy_r_r208 = CPyDict_GetItem(cpy_r_r207, cpy_r_attr);
    CPy_DECREF(cpy_r_r207);
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 123, CPyStatic_prepare___globals);
        goto CPyL184;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r208, CPyType_rtypes___RType)))
        cpy_r_r209 = cpy_r_r208;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 123, CPyStatic_prepare___globals, "mypyc.ir.rtypes.RType", cpy_r_r208);
        goto CPyL184;
    }
    cpy_r_r210 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base_ir)->_attributes;
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "build_type_map", "ClassIR", "attributes", 123, CPyStatic_prepare___globals);
        goto CPyL186;
    }
    CPy_INCREF(cpy_r_r210);
CPyL116: ;
    cpy_r_r211 = CPyDict_GetItem(cpy_r_r210, cpy_r_attr);
    CPy_DECREF(cpy_r_r210);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 123, CPyStatic_prepare___globals);
        goto CPyL186;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r211, CPyType_rtypes___RType)))
        cpy_r_r212 = cpy_r_r211;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 123, CPyStatic_prepare___globals, "mypyc.ir.rtypes.RType", cpy_r_r211);
        goto CPyL186;
    }
    cpy_r_r213 = CPyDef_sametype___is_same_type(cpy_r_r209, cpy_r_r212);
    CPy_DECREF(cpy_r_r209);
    CPy_DECREF(cpy_r_r212);
    if (unlikely(cpy_r_r213 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 123, CPyStatic_prepare___globals);
        goto CPyL184;
    }
    if (cpy_r_r213) goto CPyL185;
    cpy_r_r214 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef_2)->_info;
    cpy_r_r215 = ((mypy___nodes___TypeInfoObject *)cpy_r_r214)->_names;
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "build_type_map", "TypeInfo", "names", 124, CPyStatic_prepare___globals);
        goto CPyL184;
    }
    CPy_INCREF(cpy_r_r215);
CPyL121: ;
    cpy_r_r216 = CPyDict_GetItem(cpy_r_r215, cpy_r_attr);
    CPy_DECREF(cpy_r_r215);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 124, CPyStatic_prepare___globals);
        goto CPyL184;
    }
    if (likely(Py_TYPE(cpy_r_r216) == CPyType_nodes___SymbolTableNode))
        cpy_r_r217 = cpy_r_r216;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 124, CPyStatic_prepare___globals, "mypy.nodes.SymbolTableNode", cpy_r_r216);
        goto CPyL184;
    }
    cpy_r_r218 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r217)->_node;
    CPy_INCREF(cpy_r_r218);
    CPy_DECREF(cpy_r_r217);
    cpy_r_node_2 = cpy_r_r218;
    cpy_r_r219 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r220 = cpy_r_node_2 != cpy_r_r219;
    if (cpy_r_r220) {
        goto CPyL126;
    } else
        goto CPyL187;
CPyL124: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r221 = 0;
    if (unlikely(!cpy_r_r221)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 125, CPyStatic_prepare___globals);
        goto CPyL138;
    }
    CPy_Unreachable();
CPyL126: ;
    cpy_r_r222 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base_ir)->_is_trait;
    if (!cpy_r_r222) goto CPyL128;
CPyL127: ;
    cpy_r_r223 = CPyStatics[4047]; /* 'trait' */
    CPy_INCREF(cpy_r_r223);
    cpy_r_r224 = cpy_r_r223;
    goto CPyL129;
CPyL128: ;
    cpy_r_r225 = CPyStatics[4737]; /* 'class' */
    CPy_INCREF(cpy_r_r225);
    cpy_r_r224 = cpy_r_r225;
CPyL129: ;
    cpy_r_kind = cpy_r_r224;
    cpy_r_r226 = CPyStatics[8506]; /* 'Type of "' */
    cpy_r_r227 = CPyStatics[8507]; /* '" is incompatible with definition in ' */
    cpy_r_r228 = CPyStatics[3423]; /* ' "' */
    cpy_r_r229 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base_ir)->_name;
    CPy_INCREF(cpy_r_r229);
    CPy_DECREF(cpy_r_base_ir);
    cpy_r_r230 = CPyStatics[178]; /* '"' */
    cpy_r_r231 = CPyStr_Build(7, cpy_r_r226, cpy_r_attr, cpy_r_r227, cpy_r_kind, cpy_r_r228, cpy_r_r229, cpy_r_r230);
    CPy_DECREF(cpy_r_kind);
    CPy_DECREF(cpy_r_r229);
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 128, CPyStatic_prepare___globals);
        goto CPyL188;
    }
    cpy_r_r232 = ((mypy___nodes___MypyFileObject *)cpy_r_module)->_path;
    CPy_INCREF(cpy_r_r232);
    if (likely(cpy_r_node_2 != Py_None))
        cpy_r_r233 = cpy_r_node_2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "build_type_map", 131, CPyStatic_prepare___globals, "mypy.nodes.SymbolNode", cpy_r_node_2);
        goto CPyL189;
    }
    cpy_r_r234 = ((mypy___nodes___ContextObject *)cpy_r_r233)->_line;
    if (unlikely(cpy_r_r234 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "build_type_map", "SymbolNode", "line", 131, CPyStatic_prepare___globals);
        goto CPyL189;
    }
    CPyTagged_INCREF(cpy_r_r234);
CPyL132: ;
    CPy_DECREF(cpy_r_node_2);
    cpy_r_r235 = CPyDef_mypyc___errors___Errors___error(cpy_r_errors, cpy_r_r231, cpy_r_r232, cpy_r_r234);
    CPy_DECREF(cpy_r_r231);
    CPy_DECREF(cpy_r_r232);
    CPyTagged_DECREF(cpy_r_r234);
    if (unlikely(cpy_r_r235 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 127, CPyStatic_prepare___globals);
        goto CPyL183;
    }
CPyL133: ;
    cpy_r_r236 = cpy_r_r196 + 2;
    cpy_r_r196 = cpy_r_r236;
    goto CPyL107;
CPyL134: ;
    cpy_r_r237 = CPyDict_CheckSize(cpy_r_r183, cpy_r_r186);
    if (unlikely(!cpy_r_r237)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 120, CPyStatic_prepare___globals);
        goto CPyL180;
    } else
        goto CPyL101;
CPyL135: ;
    cpy_r_r238 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r238)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 120, CPyStatic_prepare___globals);
        goto CPyL139;
    }
    cpy_r_r239 = cpy_r_r170 + 2;
    cpy_r_r170 = cpy_r_r239;
    goto CPyL95;
CPyL137: ;
    return 1;
CPyL138: ;
    cpy_r_r240 = 2;
    return cpy_r_r240;
CPyL139: ;
    CPy_DecRef(cpy_r_classes);
    goto CPyL138;
CPyL140: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    goto CPyL138;
CPyL141: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL12;
CPyL142: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL138;
CPyL143: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL11;
CPyL144: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_module_classes);
    goto CPyL138;
CPyL145: ;
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_module_classes);
    goto CPyL18;
CPyL146: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_module_classes);
    CPy_DecRef(cpy_r_r27);
    goto CPyL138;
CPyL147: ;
    CPy_DECREF(cpy_r_r39);
    goto CPyL19;
CPyL148: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_r50);
    goto CPyL138;
CPyL149: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r51);
    goto CPyL138;
CPyL150: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_cdef_2);
    goto CPyL138;
CPyL151: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_class_ir);
    goto CPyL138;
CPyL152: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_r62);
    goto CPyL138;
CPyL153: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_r86);
    CPyTagged_DecRef(cpy_r_r87);
    goto CPyL138;
CPyL154: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r91);
    goto CPyL138;
CPyL155: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r95);
    goto CPyL138;
CPyL156: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r97);
    goto CPyL138;
CPyL157: ;
    CPy_DECREF(cpy_r_r102);
    goto CPyL45;
CPyL158: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    goto CPyL53;
CPyL159: ;
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_r109);
    goto CPyL53;
CPyL160: ;
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_r112);
    goto CPyL53;
CPyL161: ;
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r119);
    goto CPyL59;
CPyL162: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r115.f0);
    CPy_DecRef(cpy_r_r115.f1);
    CPy_DecRef(cpy_r_r115.f2);
    goto CPyL57;
CPyL163: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r97);
    goto CPyL60;
CPyL164: ;
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r97);
    goto CPyL66;
CPyL165: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_r94);
    goto CPyL69;
CPyL166: ;
    CPy_DECREF(cpy_r_r133);
    goto CPyL65;
CPyL167: ;
    CPy_DECREF(cpy_r_classes);
    goto CPyL67;
CPyL168: ;
    CPy_XDECREF(cpy_r_r128.f0);
    CPy_XDECREF(cpy_r_r128.f1);
    CPy_XDECREF(cpy_r_r128.f2);
    goto CPyL68;
CPyL169: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    goto CPyL138;
CPyL170: ;
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_cdef_2);
    CPy_DECREF(cpy_r_class_ir);
    goto CPyL82;
CPyL171: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_r150);
    goto CPyL138;
CPyL172: ;
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_r162);
    goto CPyL92;
CPyL173: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_r162);
    goto CPyL138;
CPyL174: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_r162);
    CPy_DecRef(cpy_r_func);
    goto CPyL138;
CPyL175: ;
    CPy_DECREF(cpy_r_r167);
    goto CPyL88;
CPyL176: ;
    CPy_DECREF(cpy_r_classes);
    goto CPyL137;
CPyL177: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_class_ir);
    goto CPyL138;
CPyL178: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_r183);
    goto CPyL138;
CPyL179: ;
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_cdef_2);
    CPy_DECREF(cpy_r_class_ir);
    CPy_DECREF(cpy_r_r183);
    CPy_DECREF(cpy_r_r187);
    CPy_DECREF(cpy_r_r188.f2);
    goto CPyL135;
CPyL180: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_r187);
    goto CPyL138;
CPyL181: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_attr);
    goto CPyL138;
CPyL182: ;
    CPy_DECREF(cpy_r_attr);
    CPy_DECREF(cpy_r_r195);
    goto CPyL134;
CPyL183: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r195);
    goto CPyL138;
CPyL184: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r195);
    CPy_DecRef(cpy_r_base_ir);
    goto CPyL138;
CPyL185: ;
    CPy_DECREF(cpy_r_base_ir);
    goto CPyL133;
CPyL186: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r195);
    CPy_DecRef(cpy_r_base_ir);
    CPy_DecRef(cpy_r_r209);
    goto CPyL138;
CPyL187: ;
    CPy_DECREF(cpy_r_classes);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_cdef_2);
    CPy_DECREF(cpy_r_class_ir);
    CPy_DECREF(cpy_r_r183);
    CPy_DECREF(cpy_r_r187);
    CPy_DECREF(cpy_r_attr);
    CPy_DECREF(cpy_r_r195);
    CPy_DECREF(cpy_r_base_ir);
    CPy_DECREF(cpy_r_node_2);
    goto CPyL124;
CPyL188: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r195);
    CPy_DecRef(cpy_r_node_2);
    goto CPyL138;
CPyL189: ;
    CPy_DecRef(cpy_r_classes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_cdef_2);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r195);
    CPy_DecRef(cpy_r_node_2);
    CPy_DecRef(cpy_r_r231);
    CPy_DecRef(cpy_r_r232);
    goto CPyL138;
}

PyObject *CPyPy_prepare___build_type_map(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"mapper", "modules", "graph", "types", "options", "errors", 0};
    static CPyArg_Parser parser = {"OOOOOO:build_type_map", kwlist, 0};
    PyObject *obj_mapper;
    PyObject *obj_modules;
    PyObject *obj_graph;
    PyObject *obj_types;
    PyObject *obj_options;
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_mapper, &obj_modules, &obj_graph, &obj_types, &obj_options, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyList_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("list", obj_modules); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_types;
    if (likely(PyDict_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("dict", obj_types); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypyc___options___CompilerOptions))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", obj_options); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypyc___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_errors); 
        goto fail;
    }
    char retval = CPyDef_prepare___build_type_map(arg_mapper, arg_modules, arg_graph, arg_types, arg_options, arg_errors);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "build_type_map", 66, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___is_from_module(PyObject *cpy_r_node, PyObject *cpy_r_module) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPY_GET_ATTR_TRAIT(cpy_r_node, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "is_from_module", 136, CPyStatic_prepare___globals);
        goto CPyL9;
    }
CPyL1: ;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_module, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "is_from_module", 136, CPyStatic_prepare___globals);
        goto CPyL10;
    }
CPyL2: ;
    cpy_r_r2 = CPyStatics[224]; /* '.' */
    cpy_r_r3 = PyUnicode_Concat(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "is_from_module", 136, CPyStatic_prepare___globals);
        goto CPyL10;
    }
    cpy_r_r4 = CPY_GET_ATTR_TRAIT(cpy_r_node, CPyType_nodes___SymbolNode, 5, mypy___nodes___SymbolNodeObject, PyObject *); /* name */
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "is_from_module", 136, CPyStatic_prepare___globals);
        goto CPyL11;
    }
CPyL4: ;
    cpy_r_r5 = PyUnicode_Concat(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "is_from_module", 136, CPyStatic_prepare___globals);
        goto CPyL10;
    }
    cpy_r_r6 = PyUnicode_Compare(cpy_r_r0, cpy_r_r5);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 == -1;
    if (!cpy_r_r7) goto CPyL8;
    cpy_r_r8 = PyErr_Occurred();
    cpy_r_r9 = cpy_r_r8 != NULL;
    if (!cpy_r_r9) goto CPyL8;
    cpy_r_r10 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "is_from_module", 136, CPyStatic_prepare___globals);
        goto CPyL9;
    }
CPyL8: ;
    cpy_r_r11 = cpy_r_r6 == 0;
    return cpy_r_r11;
CPyL9: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL9;
}

PyObject *CPyPy_prepare___is_from_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"node", "module", 0};
    static CPyArg_Parser parser = {"OO:is_from_module", kwlist, 0};
    PyObject *obj_node;
    PyObject *obj_module;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_node, &obj_module)) {
        return NULL;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___SymbolNode)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_node); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(Py_TYPE(obj_module) == CPyType_nodes___MypyFile))
        arg_module = obj_module;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_module); 
        goto fail;
    }
    char retval = CPyDef_prepare___is_from_module(arg_node, arg_module);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "is_from_module", 135, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___load_type_map(PyObject *cpy_r_mapper, PyObject *cpy_r_modules, PyObject *cpy_r_deser_ctx) {
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    tuple_T4CIOO cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_name;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
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
    PyObject *cpy_r_r38;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_func;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_func_id;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    CPyTagged cpy_r_r77;
    char cpy_r_r78;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL29;
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_modules, cpy_r_r0);
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_nodes___MypyFile))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "load_type_map", 141, CPyStatic_prepare___globals, "mypy.nodes.MypyFile", cpy_r_r5);
        goto CPyL47;
    }
    cpy_r_module = cpy_r_r6;
    cpy_r_r7 = ((mypy___nodes___MypyFileObject *)cpy_r_module)->_names;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "load_type_map", "MypyFile", "names", 142, CPyStatic_prepare___globals);
        goto CPyL48;
    }
    CPy_INCREF(cpy_r_r7);
CPyL4: ;
    cpy_r_r8 = 0;
    cpy_r_r9 = PyDict_Size(cpy_r_r7);
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = CPyDict_GetItemsIter(cpy_r_r7);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 142, CPyStatic_prepare___globals);
        goto CPyL49;
    }
CPyL5: ;
    cpy_r_r12 = CPyDict_NextItem(cpy_r_r11, cpy_r_r8);
    cpy_r_r13 = cpy_r_r12.f1;
    cpy_r_r8 = cpy_r_r13;
    cpy_r_r14 = cpy_r_r12.f0;
    if (!cpy_r_r14) goto CPyL50;
    cpy_r_r15 = cpy_r_r12.f2;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = cpy_r_r12.f3;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r12.f2);
    CPy_DECREF(cpy_r_r12.f3);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r17 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "load_type_map", 142, CPyStatic_prepare___globals, "str", cpy_r_r15);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r16) == CPyType_nodes___SymbolTableNode))
        cpy_r_r18 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "load_type_map", 142, CPyStatic_prepare___globals, "mypy.nodes.SymbolTableNode", cpy_r_r16);
        goto CPyL52;
    }
    cpy_r_name = cpy_r_r17;
    CPy_DECREF(cpy_r_name);
    cpy_r_node = cpy_r_r18;
    cpy_r_r19 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    cpy_r_r20 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_r19)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (!cpy_r_r23) goto CPyL10;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL11;
CPyL10: ;
    cpy_r_r25 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_r19)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    cpy_r_r24 = cpy_r_r28;
CPyL11: ;
    if (!cpy_r_r24) goto CPyL53;
    cpy_r_r29 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r29);
    if (likely((Py_TYPE(cpy_r_r29) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r29) == CPyType_nodes___TypeInfo)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "load_type_map", 143, CPyStatic_prepare___globals, "mypy.nodes.TypeInfo", cpy_r_r29);
        goto CPyL54;
    }
    cpy_r_r31 = CPyDef_prepare___is_from_module(cpy_r_r30, cpy_r_module);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 143, CPyStatic_prepare___globals);
        goto CPyL54;
    }
    if (!cpy_r_r31) goto CPyL53;
    cpy_r_r32 = CPySequenceTuple_GetItem(cpy_r_deser_ctx, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 144, CPyStatic_prepare___globals);
        goto CPyL54;
    }
    if (likely(PyDict_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "load_type_map", 144, CPyStatic_prepare___globals, "dict", cpy_r_r32);
        goto CPyL54;
    }
    cpy_r_r34 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r34);
    if (likely((Py_TYPE(cpy_r_r34) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r34) == CPyType_nodes___TypeInfo)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "load_type_map", 144, CPyStatic_prepare___globals, "mypy.nodes.TypeInfo", cpy_r_r34);
        goto CPyL55;
    }
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_r35, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 144, CPyStatic_prepare___globals);
        goto CPyL55;
    }
CPyL19: ;
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r33, cpy_r_r36);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 144, CPyStatic_prepare___globals);
        goto CPyL54;
    }
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_class_ir___ClassIR))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "load_type_map", 144, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r37);
        goto CPyL54;
    }
    cpy_r_ir = cpy_r_r38;
    cpy_r_r39 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r40);
    if (likely((Py_TYPE(cpy_r_r40) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r40) == CPyType_nodes___TypeInfo)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "load_type_map", 145, CPyStatic_prepare___globals, "mypy.nodes.TypeInfo", cpy_r_r40);
        goto CPyL56;
    }
    cpy_r_r42 = CPyDict_SetItem(cpy_r_r39, cpy_r_r41, cpy_r_ir);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 145, CPyStatic_prepare___globals);
        goto CPyL57;
    }
    cpy_r_r44 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_ctor;
    if (unlikely(cpy_r_r44 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'ctor' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r44);
    }
    CPy_DECREF(cpy_r_ir);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 146, CPyStatic_prepare___globals);
        goto CPyL54;
    }
CPyL24: ;
    cpy_r_r45 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_func_to_decl;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_node);
    if (likely((Py_TYPE(cpy_r_r46) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r46) == CPyType_nodes___TypeInfo)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "load_type_map", 146, CPyStatic_prepare___globals, "mypy.nodes.TypeInfo", cpy_r_r46);
        goto CPyL58;
    }
    cpy_r_r48 = CPyDict_SetItem(cpy_r_r45, cpy_r_r47, cpy_r_r44);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 146, CPyStatic_prepare___globals);
        goto CPyL59;
    }
CPyL26: ;
    cpy_r_r50 = CPyDict_CheckSize(cpy_r_r7, cpy_r_r10);
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 142, CPyStatic_prepare___globals);
        goto CPyL59;
    } else
        goto CPyL5;
CPyL27: ;
    cpy_r_r51 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 142, CPyStatic_prepare___globals);
        goto CPyL47;
    }
    cpy_r_r52 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r52;
    goto CPyL1;
CPyL29: ;
    cpy_r_r53 = 0;
CPyL30: ;
    cpy_r_r54 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r55 = *(int64_t *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 << 1;
    cpy_r_r57 = (Py_ssize_t)cpy_r_r53 < (Py_ssize_t)cpy_r_r56;
    if (!cpy_r_r57) goto CPyL46;
    cpy_r_r58 = CPyList_GetItemUnsafe(cpy_r_modules, cpy_r_r53);
    if (likely(Py_TYPE(cpy_r_r58) == CPyType_nodes___MypyFile))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "load_type_map", 148, CPyStatic_prepare___globals, "mypy.nodes.MypyFile", cpy_r_r58);
        goto CPyL47;
    }
    cpy_r_module = cpy_r_r59;
    cpy_r_r60 = CPyDef_prepare___get_module_func_defs(cpy_r_module);
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 149, CPyStatic_prepare___globals);
        goto CPyL47;
    }
    cpy_r_r61 = PyObject_GetIter(cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 149, CPyStatic_prepare___globals);
        goto CPyL47;
    }
CPyL34: ;
    cpy_r_r62 = PyIter_Next(cpy_r_r61);
    if (cpy_r_r62 == NULL) goto CPyL60;
    if (likely(Py_TYPE(cpy_r_r62) == CPyType_nodes___FuncDef))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "load_type_map", 149, CPyStatic_prepare___globals, "mypy.nodes.FuncDef", cpy_r_r62);
        goto CPyL61;
    }
    cpy_r_func = cpy_r_r63;
    cpy_r_r64 = CPY_GET_ATTR(cpy_r_func, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 150, CPyStatic_prepare___globals);
        goto CPyL62;
    }
CPyL37: ;
    cpy_r_r65 = CPY_GET_ATTR(cpy_r_func, CPyType_nodes___FuncDef, 7, mypy___nodes___FuncDefObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 150, CPyStatic_prepare___globals);
        goto CPyL63;
    }
CPyL38: ;
    cpy_r_r66 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->_line;
    CPyTagged_INCREF(cpy_r_r66);
    cpy_r_r67 = CPyDef_mypyc___common___get_id_from_name(cpy_r_r64, cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r65);
    CPyTagged_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 150, CPyStatic_prepare___globals);
        goto CPyL62;
    }
    cpy_r_func_id = cpy_r_r67;
    cpy_r_r68 = CPySequenceTuple_GetItem(cpy_r_deser_ctx, 2);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 151, CPyStatic_prepare___globals);
        goto CPyL64;
    }
    if (likely(PyDict_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "load_type_map", 151, CPyStatic_prepare___globals, "dict", cpy_r_r68);
        goto CPyL64;
    }
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r69, cpy_r_func_id);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_func_id);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 151, CPyStatic_prepare___globals);
        goto CPyL62;
    }
    if (likely(Py_TYPE(cpy_r_r70) == CPyType_func_ir___FuncIR))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "load_type_map", 151, CPyStatic_prepare___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_r70);
        goto CPyL62;
    }
    cpy_r_r72 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_r71)->_decl;
    CPy_INCREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r73 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_func_to_decl;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r73, cpy_r_func, cpy_r_r72);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_func);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 151, CPyStatic_prepare___globals);
        goto CPyL61;
    } else
        goto CPyL34;
CPyL44: ;
    cpy_r_r76 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 149, CPyStatic_prepare___globals);
        goto CPyL47;
    }
    cpy_r_r77 = cpy_r_r53 + 2;
    cpy_r_r53 = cpy_r_r77;
    goto CPyL30;
CPyL46: ;
    return 1;
CPyL47: ;
    cpy_r_r78 = 2;
    return cpy_r_r78;
CPyL48: ;
    CPy_DecRef(cpy_r_module);
    goto CPyL47;
CPyL49: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_r7);
    goto CPyL47;
CPyL50: ;
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12.f2);
    CPy_DECREF(cpy_r_r12.f3);
    goto CPyL27;
CPyL51: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r16);
    goto CPyL47;
CPyL52: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r17);
    goto CPyL47;
CPyL53: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL26;
CPyL54: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_node);
    goto CPyL47;
CPyL55: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r33);
    goto CPyL47;
CPyL56: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_r39);
    goto CPyL47;
CPyL57: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_ir);
    goto CPyL47;
CPyL58: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r45);
    goto CPyL47;
CPyL59: ;
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r11);
    goto CPyL47;
CPyL60: ;
    CPy_DECREF(cpy_r_r61);
    goto CPyL44;
CPyL61: ;
    CPy_DecRef(cpy_r_r61);
    goto CPyL47;
CPyL62: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_func);
    goto CPyL47;
CPyL63: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r64);
    goto CPyL47;
CPyL64: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_func_id);
    goto CPyL47;
}

PyObject *CPyPy_prepare___load_type_map(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"mapper", "modules", "deser_ctx", 0};
    static CPyArg_Parser parser = {"OOO:load_type_map", kwlist, 0};
    PyObject *obj_mapper;
    PyObject *obj_modules;
    PyObject *obj_deser_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_mapper, &obj_modules, &obj_deser_ctx)) {
        return NULL;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    PyObject *arg_modules;
    if (likely(PyList_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("list", obj_modules); 
        goto fail;
    }
    PyObject * arg_deser_ctx;
    if (likely(PyTuple_Check(obj_deser_ctx)))
        arg_deser_ctx = obj_deser_ctx;
    else {
        CPy_TypeError("tuple", obj_deser_ctx); 
        goto fail;
    }
    char retval = CPyDef_prepare___load_type_map(arg_mapper, arg_modules, arg_deser_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "load_type_map", 139, CPyStatic_prepare___globals);
    return NULL;
}

PyObject *CPyDef_prepare___get_module_func_defs_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    tuple_T4CIOO cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    int64_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    int64_t cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    cpy_r_r0 = ((mypyc___irbuild___prepare___get_module_func_defs_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "get_module_func_defs", "get_module_func_defs_gen", "__mypyc_env__", 154, CPyStatic_prepare___globals);
        goto CPyL59;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "get_module_func_defs", "get_module_func_defs_env", "__mypyc_next_label__", 154, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL49;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL61;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 154, CPyStatic_prepare___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->_module;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "get_module_func_defs", "get_module_func_defs_env", "module", 156, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___nodes___MypyFileObject *)cpy_r_r4)->_names;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'MypyFile' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 156, CPyStatic_prepare___globals);
        goto CPyL60;
    }
CPyL7: ;
    CPy_INCREF(cpy_r_r5);
    if (((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_temp__0);
    }
    ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_temp__0 = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", -1, CPyStatic_prepare___globals);
        goto CPyL62;
    }
    ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_temp__1 = 0;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", -1, CPyStatic_prepare___globals);
        goto CPyL62;
    }
    cpy_r_r8 = ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_temp__0;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "get_module_func_defs", "get_module_func_defs_env", "__mypyc_temp__0", 156, CPyStatic_prepare___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r8);
CPyL10: ;
    cpy_r_r9 = PyDict_Size(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 << 1;
    ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_temp__2 = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", -1, CPyStatic_prepare___globals);
        goto CPyL62;
    }
    cpy_r_r12 = CPyDict_GetItemsIter(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 156, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    if (((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_temp__3 != NULL) {
        CPy_DECREF(((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_temp__3);
    }
    ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_temp__3 = cpy_r_r12;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", -1, CPyStatic_prepare___globals);
        goto CPyL60;
    }
CPyL13: ;
    cpy_r_r14 = ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_temp__3;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "get_module_func_defs", "get_module_func_defs_env", "__mypyc_temp__3", 156, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r14);
CPyL14: ;
    cpy_r_r15 = ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_temp__1;
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "get_module_func_defs", "get_module_func_defs_env", "__mypyc_temp__1", 156, CPyStatic_prepare___globals);
        goto CPyL63;
    }
CPyL15: ;
    cpy_r_r16 = CPyDict_NextItem(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r17 = cpy_r_r16.f1;
    ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_temp__1 = cpy_r_r17;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 156, CPyStatic_prepare___globals);
        goto CPyL64;
    }
    cpy_r_r19 = cpy_r_r16.f0;
    if (!cpy_r_r19) goto CPyL65;
    cpy_r_r20 = cpy_r_r16.f2;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = cpy_r_r16.f3;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r16.f2);
    CPy_DECREF(cpy_r_r16.f3);
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r22 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 156, CPyStatic_prepare___globals, "str", cpy_r_r20);
        goto CPyL66;
    }
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_nodes___SymbolTableNode))
        cpy_r_r23 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 156, CPyStatic_prepare___globals, "mypy.nodes.SymbolTableNode", cpy_r_r21);
        goto CPyL67;
    }
    if (((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->_name != NULL) {
        CPy_DECREF(((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->_name);
    }
    ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->_name = cpy_r_r22;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 156, CPyStatic_prepare___globals);
        goto CPyL68;
    }
    if (((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->_node != NULL) {
        CPy_DECREF(((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->_node);
    }
    ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->_node = cpy_r_r23;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 156, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    cpy_r_r26 = ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->_node;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "get_module_func_defs", "get_module_func_defs_env", "node", 160, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r26);
CPyL22: ;
    cpy_r_r27 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r26)->_node;
    cpy_r_r28 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_r27)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    if (!cpy_r_r31) goto CPyL24;
    cpy_r_r32 = cpy_r_r31;
    goto CPyL25;
CPyL24: ;
    cpy_r_r33 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_r27)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    cpy_r_r32 = cpy_r_r36;
CPyL25: ;
    if (!cpy_r_r32) goto CPyL27;
    cpy_r_r37 = cpy_r_r32;
    goto CPyL28;
CPyL27: ;
    cpy_r_r38 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r39 = (CPyPtr)&((PyObject *)cpy_r_r27)->ob_type;
    cpy_r_r40 = *(PyObject * *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 == cpy_r_r38;
    cpy_r_r37 = cpy_r_r41;
CPyL28: ;
    CPy_DECREF(cpy_r_r26);
    if (!cpy_r_r37) goto CPyL42;
    cpy_r_r42 = ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->_node;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "get_module_func_defs", "get_module_func_defs_env", "node", 161, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r42);
CPyL30: ;
    cpy_r_r43 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r42)->_node;
    CPy_INCREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    if (Py_TYPE(cpy_r_r43) == CPyType_nodes___FuncDef)
        cpy_r_r44 = cpy_r_r43;
    else {
        cpy_r_r44 = NULL;
    }
    if (cpy_r_r44 != NULL) goto __LL10425;
    if (Py_TYPE(cpy_r_r43) == CPyType_nodes___Decorator)
        cpy_r_r44 = cpy_r_r43;
    else {
        cpy_r_r44 = NULL;
    }
    if (cpy_r_r44 != NULL) goto __LL10425;
    if (Py_TYPE(cpy_r_r43) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r44 = cpy_r_r43;
    else {
        cpy_r_r44 = NULL;
    }
    if (cpy_r_r44 != NULL) goto __LL10425;
    CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 161, CPyStatic_prepare___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator, mypy.nodes.OverloadedFuncDef]", cpy_r_r43);
    goto CPyL60;
__LL10425: ;
    cpy_r_r45 = ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->_module;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "get_module_func_defs", "get_module_func_defs_env", "module", 161, CPyStatic_prepare___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r45);
CPyL32: ;
    cpy_r_r46 = CPyDef_prepare___is_from_module(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 160, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    if (!cpy_r_r46) goto CPyL42;
    cpy_r_r47 = ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->_node;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "get_module_func_defs", "get_module_func_defs_env", "node", 163, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r47);
CPyL35: ;
    cpy_r_r48 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r47)->_node;
    CPy_INCREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (Py_TYPE(cpy_r_r48) == CPyType_nodes___FuncDef)
        cpy_r_r49 = cpy_r_r48;
    else {
        cpy_r_r49 = NULL;
    }
    if (cpy_r_r49 != NULL) goto __LL10426;
    if (Py_TYPE(cpy_r_r48) == CPyType_nodes___Decorator)
        cpy_r_r49 = cpy_r_r48;
    else {
        cpy_r_r49 = NULL;
    }
    if (cpy_r_r49 != NULL) goto __LL10426;
    if (Py_TYPE(cpy_r_r48) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r49 = cpy_r_r48;
    else {
        cpy_r_r49 = NULL;
    }
    if (cpy_r_r49 != NULL) goto __LL10426;
    CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 163, CPyStatic_prepare___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator, mypy.nodes.OverloadedFuncDef]", cpy_r_r48);
    goto CPyL60;
__LL10426: ;
    cpy_r_r50 = CPyDef_irbuild___util___get_func_def(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 163, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    if (((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r51 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 163, CPyStatic_prepare___globals);
        goto CPyL70;
    }
    return cpy_r_r50;
CPyL39: ;
    cpy_r_r52 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r53 = cpy_r_type != cpy_r_r52;
    if (cpy_r_r53) {
        goto CPyL71;
    } else
        goto CPyL42;
CPyL40: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 163, CPyStatic_prepare___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r54 = ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_temp__0;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "get_module_func_defs", "get_module_func_defs_env", "__mypyc_temp__0", 156, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r54);
CPyL43: ;
    cpy_r_r55 = ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_temp__2;
    if (unlikely(cpy_r_r55 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "get_module_func_defs", "get_module_func_defs_env", "__mypyc_temp__2", 156, CPyStatic_prepare___globals);
        goto CPyL72;
    }
CPyL44: ;
    cpy_r_r56 = CPyDict_CheckSize(cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 156, CPyStatic_prepare___globals);
        goto CPyL60;
    } else
        goto CPyL13;
CPyL45: ;
    cpy_r_r57 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 156, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    cpy_r_r58 = Py_None;
    if (((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r59 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 154, CPyStatic_prepare___globals);
        goto CPyL59;
    }
    CPyGen_SetStopIterationValue(cpy_r_r58);
    if (!0) goto CPyL59;
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r60 = cpy_r_r1 & 1;
    cpy_r_r61 = cpy_r_r60 == 0;
    if (!cpy_r_r61) goto CPyL51;
    cpy_r_r62 = cpy_r_r1 == 0;
    cpy_r_r63 = cpy_r_r62;
    goto CPyL52;
CPyL51: ;
    cpy_r_r64 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r63 = cpy_r_r64;
CPyL52: ;
    if (cpy_r_r63) goto CPyL73;
    cpy_r_r65 = cpy_r_r1 & 1;
    cpy_r_r66 = cpy_r_r65 == 0;
    if (!cpy_r_r66) goto CPyL55;
    cpy_r_r67 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r68 = cpy_r_r67;
    goto CPyL56;
CPyL55: ;
    cpy_r_r69 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r68 = cpy_r_r69;
CPyL56: ;
    if (cpy_r_r68) {
        goto CPyL39;
    } else
        goto CPyL74;
CPyL57: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r70 = 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 154, CPyStatic_prepare___globals);
        goto CPyL59;
    }
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r71 = NULL;
    return cpy_r_r71;
CPyL60: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL59;
CPyL61: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL59;
CPyL63: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r14);
    goto CPyL59;
CPyL64: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16.f2);
    CPy_DecRef(cpy_r_r16.f3);
    goto CPyL59;
CPyL65: ;
    CPy_DECREF(cpy_r_r16.f2);
    CPy_DECREF(cpy_r_r16.f3);
    goto CPyL45;
CPyL66: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    goto CPyL59;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r22);
    goto CPyL59;
CPyL68: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r23);
    goto CPyL59;
CPyL69: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r44);
    goto CPyL59;
CPyL70: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL59;
CPyL71: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL40;
CPyL72: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r54);
    goto CPyL59;
CPyL73: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL74: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL57;
}

PyObject *CPyPy_prepare___get_module_func_defs_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_prepare___get_module_func_defs_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 154, CPyStatic_prepare___globals);
    return NULL;
}

PyObject *CPyDef_prepare___get_module_func_defs_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_prepare___get_module_func_defs_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prepare___get_module_func_defs_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_prepare___get_module_func_defs_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.prepare.get_module_func_defs_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_prepare___get_module_func_defs_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "__next__", -1, CPyStatic_prepare___globals);
    return NULL;
}

PyObject *CPyDef_prepare___get_module_func_defs_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_prepare___get_module_func_defs_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prepare___get_module_func_defs_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_prepare___get_module_func_defs_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.prepare.get_module_func_defs_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_prepare___get_module_func_defs_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "send", -1, CPyStatic_prepare___globals);
    return NULL;
}

PyObject *CPyDef_prepare___get_module_func_defs_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_prepare___get_module_func_defs_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_prepare___get_module_func_defs_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.prepare.get_module_func_defs_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_prepare___get_module_func_defs_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "__iter__", -1, CPyStatic_prepare___globals);
    return NULL;
}

PyObject *CPyDef_prepare___get_module_func_defs_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_prepare___get_module_func_defs_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_prepare___get_module_func_defs_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_prepare___get_module_func_defs_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.prepare.get_module_func_defs_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_prepare___get_module_func_defs_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "throw", -1, CPyStatic_prepare___globals);
    return NULL;
}

PyObject *CPyDef_prepare___get_module_func_defs_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[74]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_prepare___get_module_func_defs_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[75]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    CPy_INCREF(cpy_r_r10.f0);
    CPy_INCREF(cpy_r_r10.f1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10427 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp10427);
    PyObject *__tmp10428 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp10428);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_prepare___get_module_func_defs_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_prepare___get_module_func_defs_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.prepare.get_module_func_defs_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_prepare___get_module_func_defs_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "close", -1, CPyStatic_prepare___globals);
    return NULL;
}

PyObject *CPyDef_prepare___get_module_func_defs(PyObject *cpy_r_module) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_prepare___get_module_func_defs_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 154, CPyStatic_prepare___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_module);
    if (((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->_module != NULL) {
        CPy_DECREF(((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->_module);
    }
    ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->_module = cpy_r_module;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 154, CPyStatic_prepare___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_prepare___get_module_func_defs_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 154, CPyStatic_prepare___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___prepare___get_module_func_defs_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___prepare___get_module_func_defs_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypyc___irbuild___prepare___get_module_func_defs_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 154, CPyStatic_prepare___globals);
        goto CPyL8;
    }
    if (((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypyc___irbuild___prepare___get_module_func_defs_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 154, CPyStatic_prepare___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_prepare___get_module_func_defs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module", 0};
    static CPyArg_Parser parser = {"O:get_module_func_defs", kwlist, 0};
    PyObject *obj_module;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_module)) {
        return NULL;
    }
    PyObject *arg_module;
    if (likely(Py_TYPE(obj_module) == CPyType_nodes___MypyFile))
        arg_module = obj_module;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_module); 
        goto fail;
    }
    PyObject *retval = CPyDef_prepare___get_module_func_defs(arg_module);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_module_func_defs", 154, CPyStatic_prepare___globals);
    return NULL;
}

PyObject *CPyDef_prepare___prepare_func_def(PyObject *cpy_r_module_name, PyObject *cpy_r_class_name, PyObject *cpy_r_fdef, PyObject *cpy_r_mapper) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_kind;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_decl;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_is_static;
    if (!cpy_r_r0) goto CPyL2;
CPyL1: ;
    cpy_r_r1 = 2;
    goto CPyL6;
CPyL2: ;
    cpy_r_r2 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_is_class;
    if (!cpy_r_r2) goto CPyL4;
CPyL3: ;
    cpy_r_r3 = 4;
    goto CPyL5;
CPyL4: ;
    cpy_r_r3 = 0;
CPyL5: ;
    cpy_r_r1 = cpy_r_r3;
CPyL6: ;
    cpy_r_kind = cpy_r_r1;
    cpy_r_r4 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_func_def", 174, CPyStatic_prepare___globals);
        goto CPyL12;
    }
CPyL7: ;
    cpy_r_r5 = CPyDef_mapper___Mapper___fdef_to_sig(cpy_r_mapper, cpy_r_fdef);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_func_def", 174, CPyStatic_prepare___globals);
        goto CPyL13;
    }
    cpy_r_r6 = 2;
    cpy_r_r7 = 2;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_func_ir___FuncDecl(cpy_r_r4, cpy_r_class_name, cpy_r_module_name, cpy_r_r5, cpy_r_kind, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_kind);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_func_def", 174, CPyStatic_prepare___globals);
        goto CPyL11;
    }
    cpy_r_decl = cpy_r_r9;
    cpy_r_r10 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_func_to_decl;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDict_SetItem(cpy_r_r10, cpy_r_fdef, cpy_r_decl);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_func_def", 175, CPyStatic_prepare___globals);
        goto CPyL14;
    }
    return cpy_r_decl;
CPyL11: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL12: ;
    CPyTagged_DecRef(cpy_r_kind);
    goto CPyL11;
CPyL13: ;
    CPyTagged_DecRef(cpy_r_kind);
    CPy_DecRef(cpy_r_r4);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_decl);
    goto CPyL11;
}

PyObject *CPyPy_prepare___prepare_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module_name", "class_name", "fdef", "mapper", 0};
    static CPyArg_Parser parser = {"OOOO:prepare_func_def", kwlist, 0};
    PyObject *obj_module_name;
    PyObject *obj_class_name;
    PyObject *obj_fdef;
    PyObject *obj_mapper;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module_name, &obj_class_name, &obj_fdef, &obj_mapper)) {
        return NULL;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_class_name;
    if (PyUnicode_Check(obj_class_name))
        arg_class_name = obj_class_name;
    else {
        arg_class_name = NULL;
    }
    if (arg_class_name != NULL) goto __LL10429;
    if (obj_class_name == Py_None)
        arg_class_name = obj_class_name;
    else {
        arg_class_name = NULL;
    }
    if (arg_class_name != NULL) goto __LL10429;
    CPy_TypeError("str or None", obj_class_name); 
    goto fail;
__LL10429: ;
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    PyObject *retval = CPyDef_prepare___prepare_func_def(arg_module_name, arg_class_name, arg_fdef, arg_mapper);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_func_def", 166, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___prepare_method_def(PyObject *cpy_r_ir, PyObject *cpy_r_module_name, PyObject *cpy_r_cdef, PyObject *cpy_r_mapper, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_decl;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    cpy_r_r0 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL7;
    cpy_r_r4 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_name;
    CPy_INCREF(cpy_r_r4);
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef))
        cpy_r_r5 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 183, CPyStatic_prepare___globals, "mypy.nodes.FuncDef", cpy_r_node);
        goto CPyL51;
    }
    cpy_r_r6 = CPyDef_prepare___prepare_func_def(cpy_r_module_name, cpy_r_r4, cpy_r_r5, cpy_r_mapper);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 183, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    cpy_r_r7 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "prepare_method_def", "ClassIR", "method_decls", 183, CPyStatic_prepare___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r7);
CPyL4: ;
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef))
        cpy_r_r8 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 183, CPyStatic_prepare___globals, "mypy.nodes.FuncDef", cpy_r_node);
        goto CPyL53;
    }
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_r8, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 183, CPyStatic_prepare___globals);
        goto CPyL53;
    }
CPyL6: ;
    cpy_r_r10 = CPyDict_SetItem(cpy_r_r7, cpy_r_r9, cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 183, CPyStatic_prepare___globals);
        goto CPyL50;
    } else
        goto CPyL49;
CPyL7: ;
    cpy_r_r12 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (!cpy_r_r15) goto CPyL49;
    cpy_r_r16 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_name;
    CPy_INCREF(cpy_r_r16);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r17 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 187, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL54;
    }
    cpy_r_r18 = ((mypy___nodes___DecoratorObject *)cpy_r_r17)->_func;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_prepare___prepare_func_def(cpy_r_module_name, cpy_r_r16, cpy_r_r18, cpy_r_mapper);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 187, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    cpy_r_decl = cpy_r_r19;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r20 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 188, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL55;
    }
    cpy_r_r21 = ((mypy___nodes___DecoratorObject *)cpy_r_r20)->_decorators;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    CPy_DECREF(cpy_r_r21);
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = cpy_r_r24 != 0;
    if (cpy_r_r25) goto CPyL16;
    cpy_r_r26 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "prepare_method_def", "ClassIR", "method_decls", 189, CPyStatic_prepare___globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r26);
CPyL13: ;
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r27 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 189, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL56;
    }
    cpy_r_r28 = CPY_GET_ATTR(cpy_r_r27, CPyType_nodes___Decorator, 6, mypy___nodes___DecoratorObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 189, CPyStatic_prepare___globals);
        goto CPyL56;
    }
CPyL15: ;
    cpy_r_r29 = CPyDict_SetItem(cpy_r_r26, cpy_r_r28, cpy_r_decl);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 189, CPyStatic_prepare___globals);
        goto CPyL55;
    } else
        goto CPyL34;
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r31 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 190, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL55;
    }
    cpy_r_r32 = ((mypy___nodes___DecoratorObject *)cpy_r_r31)->_decorators;
    cpy_r_r33 = CPyList_GetItemShortBorrow(cpy_r_r32, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 190, CPyStatic_prepare___globals);
        goto CPyL55;
    }
    cpy_r_r34 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_r33)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    if (!cpy_r_r37) goto CPyL34;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r38 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 190, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL55;
    }
    cpy_r_r39 = ((mypy___nodes___DecoratorObject *)cpy_r_r38)->_decorators;
    cpy_r_r40 = CPyList_GetItemShortBorrow(cpy_r_r39, 0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 190, CPyStatic_prepare___globals);
        goto CPyL55;
    }
    if (likely(Py_TYPE(cpy_r_r40) == CPyType_nodes___MemberExpr))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 190, CPyStatic_prepare___globals, "mypy.nodes.MemberExpr", cpy_r_r40);
        goto CPyL55;
    }
    cpy_r_r42 = ((mypy___nodes___MemberExprObject *)cpy_r_r41)->_name;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[4851]; /* 'setter' */
    cpy_r_r44 = PyUnicode_Compare(cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r45 = cpy_r_r44 == -1;
    if (!cpy_r_r45) goto CPyL25;
    cpy_r_r46 = PyErr_Occurred();
    cpy_r_r47 = cpy_r_r46 != NULL;
    if (!cpy_r_r47) goto CPyL25;
    cpy_r_r48 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 190, CPyStatic_prepare___globals);
        goto CPyL55;
    }
CPyL25: ;
    cpy_r_r49 = cpy_r_r44 == 0;
    if (!cpy_r_r49) goto CPyL34;
    cpy_r_r50 = CPyStatics[7714]; /* '__mypyc_setter__' */
    cpy_r_r51 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_name;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = PyUnicode_Concat(cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 194, CPyStatic_prepare___globals);
        goto CPyL55;
    }
    CPy_DECREF(((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_name);
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_name = cpy_r_r52;
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_is_prop_setter = 1;
    cpy_r_r55 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_sig;
    cpy_r_r56 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r55)->_args;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = CPySequenceTuple_GetItem(cpy_r_r56, 2);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 197, CPyStatic_prepare___globals);
        goto CPyL55;
    }
    if (likely(Py_TYPE(cpy_r_r57) == CPyType_func_ir___RuntimeArg))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 197, CPyStatic_prepare___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r57);
        goto CPyL55;
    }
    ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r58)->_pos_only = 1;
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "prepare_method_def", "ClassIR", "method_decls", 198, CPyStatic_prepare___globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r60);
CPyL30: ;
    cpy_r_r61 = CPyStatics[7714]; /* '__mypyc_setter__' */
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r62 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 198, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL57;
    }
    cpy_r_r63 = CPY_GET_ATTR(cpy_r_r62, CPyType_nodes___Decorator, 6, mypy___nodes___DecoratorObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 198, CPyStatic_prepare___globals);
        goto CPyL57;
    }
CPyL32: ;
    cpy_r_r64 = PyUnicode_Concat(cpy_r_r61, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 198, CPyStatic_prepare___globals);
        goto CPyL57;
    }
    cpy_r_r65 = CPyDict_SetItem(cpy_r_r60, cpy_r_r64, cpy_r_decl);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 198, CPyStatic_prepare___globals);
        goto CPyL55;
    }
CPyL34: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r67 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 200, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL55;
    }
    cpy_r_r68 = ((mypy___nodes___DecoratorObject *)cpy_r_r67)->_func;
    cpy_r_r69 = ((mypy___nodes___FuncDefObject *)cpy_r_r68)->_is_property;
    if (!cpy_r_r69) goto CPyL58;
CPyL36: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r70 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 201, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL55;
    }
    cpy_r_r71 = ((mypy___nodes___DecoratorObject *)cpy_r_r70)->_func;
    cpy_r_r72 = ((mypy___nodes___FuncDefObject *)cpy_r_r71)->_type;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r74 = cpy_r_r72 != cpy_r_r73;
    CPy_DECREF(cpy_r_r72);
    if (cpy_r_r74) {
        goto CPyL45;
    } else
        goto CPyL59;
CPyL38: ;
    cpy_r_r75 = CPyStatics[8508]; /* "Expected return type annotation for property '" */
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r76 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 201, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL50;
    }
    cpy_r_r77 = CPY_GET_ATTR(cpy_r_r76, CPyType_nodes___Decorator, 6, mypy___nodes___DecoratorObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 201, CPyStatic_prepare___globals);
        goto CPyL50;
    }
CPyL40: ;
    cpy_r_r78 = CPyStatics[385]; /* "'" */
    cpy_r_r79 = CPyStr_Build(3, cpy_r_r75, cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 201, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    cpy_r_r80 = CPyModule_builtins;
    cpy_r_r81 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r82 = CPyObject_GetAttr(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 201, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    PyObject *cpy_r_r83[1] = {cpy_r_r79};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = _PyObject_Vectorcall(cpy_r_r82, cpy_r_r84, 1, 0);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 201, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    CPy_DECREF(cpy_r_r79);
    CPy_Raise(cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 201, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL45: ;
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_is_prop_getter = 1;
    cpy_r_r87 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_sig;
    cpy_r_r88 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r87)->_ret_type;
    CPy_INCREF(cpy_r_r88);
    CPy_DECREF(cpy_r_decl);
    cpy_r_r89 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_property_types;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "prepare_method_def", "ClassIR", "property_types", 203, CPyStatic_prepare___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r89);
CPyL46: ;
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r90 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 203, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL62;
    }
    cpy_r_r91 = CPY_GET_ATTR(cpy_r_r90, CPyType_nodes___Decorator, 6, mypy___nodes___DecoratorObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 203, CPyStatic_prepare___globals);
        goto CPyL62;
    }
CPyL48: ;
    cpy_r_r92 = CPyDict_SetItem(cpy_r_r89, cpy_r_r91, cpy_r_r88);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 203, CPyStatic_prepare___globals);
        goto CPyL50;
    }
CPyL49: ;
    return 1;
CPyL50: ;
    cpy_r_r94 = 2;
    return cpy_r_r94;
CPyL51: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL50;
CPyL52: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL50;
CPyL53: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL50;
CPyL54: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL50;
CPyL55: ;
    CPy_DecRef(cpy_r_decl);
    goto CPyL50;
CPyL56: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_r26);
    goto CPyL50;
CPyL57: ;
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_r60);
    goto CPyL50;
CPyL58: ;
    CPy_DECREF(cpy_r_decl);
    goto CPyL49;
CPyL59: ;
    CPy_DECREF(cpy_r_decl);
    goto CPyL38;
CPyL60: ;
    CPy_DecRef(cpy_r_r79);
    goto CPyL50;
CPyL61: ;
    CPy_DecRef(cpy_r_r88);
    goto CPyL50;
CPyL62: ;
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r89);
    goto CPyL50;
}

PyObject *CPyPy_prepare___prepare_method_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ir", "module_name", "cdef", "mapper", "node", 0};
    static CPyArg_Parser parser = {"OOOOO:prepare_method_def", kwlist, 0};
    PyObject *obj_ir;
    PyObject *obj_module_name;
    PyObject *obj_cdef;
    PyObject *obj_mapper;
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ir, &obj_module_name, &obj_cdef, &obj_mapper, &obj_node)) {
        return NULL;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    PyObject *arg_node;
    if (Py_TYPE(obj_node) == CPyType_nodes___FuncDef)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL10430;
    if (Py_TYPE(obj_node) == CPyType_nodes___Decorator)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL10430;
    CPy_TypeError("union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", obj_node); 
    goto fail;
__LL10430: ;
    char retval = CPyDef_prepare___prepare_method_def(arg_ir, arg_module_name, arg_cdef, arg_mapper, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_method_def", 179, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___is_valid_multipart_property_def(PyObject *cpy_r_prop) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_getter;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_setter;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    cpy_r_r0 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_prop)->_items;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 4;
    if (!cpy_r_r4) goto CPyL2;
    return 0;
CPyL2: ;
    cpy_r_r5 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_prop)->_items;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "is_valid_multipart_property_def", 211, CPyStatic_prepare___globals);
        goto CPyL32;
    }
    if (Py_TYPE(cpy_r_r6) == CPyType_nodes___FuncDef)
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL10431;
    if (Py_TYPE(cpy_r_r6) == CPyType_nodes___Decorator)
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL10431;
    CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "is_valid_multipart_property_def", 211, CPyStatic_prepare___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r6);
    goto CPyL32;
__LL10431: ;
    cpy_r_getter = cpy_r_r7;
    cpy_r_r8 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_prop)->_items;
    cpy_r_r9 = CPyList_GetItemShort(cpy_r_r8, 2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "is_valid_multipart_property_def", 212, CPyStatic_prepare___globals);
        goto CPyL33;
    }
    if (Py_TYPE(cpy_r_r9) == CPyType_nodes___FuncDef)
        cpy_r_r10 = cpy_r_r9;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL10432;
    if (Py_TYPE(cpy_r_r9) == CPyType_nodes___Decorator)
        cpy_r_r10 = cpy_r_r9;
    else {
        cpy_r_r10 = NULL;
    }
    if (cpy_r_r10 != NULL) goto __LL10432;
    CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "is_valid_multipart_property_def", 212, CPyStatic_prepare___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r9);
    goto CPyL33;
__LL10432: ;
    cpy_r_setter = cpy_r_r10;
    cpy_r_r11 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_getter)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (cpy_r_r14) {
        goto CPyL8;
    } else
        goto CPyL34;
CPyL7: ;
    cpy_r_r15 = cpy_r_r14;
    goto CPyL31;
CPyL8: ;
    cpy_r_r16 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_setter)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (cpy_r_r19) {
        goto CPyL10;
    } else
        goto CPyL35;
CPyL9: ;
    cpy_r_r20 = cpy_r_r19;
    goto CPyL30;
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_getter) == CPyType_nodes___Decorator))
        cpy_r_r21 = cpy_r_getter;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "is_valid_multipart_property_def", 217, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_getter);
        goto CPyL36;
    }
    cpy_r_r22 = ((mypy___nodes___DecoratorObject *)cpy_r_r21)->_func;
    cpy_r_r23 = ((mypy___nodes___FuncDefObject *)cpy_r_r22)->_is_property;
    CPy_DECREF(cpy_r_getter);
    if (cpy_r_r23) {
        goto CPyL13;
    } else
        goto CPyL37;
CPyL12: ;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL29;
CPyL13: ;
    if (likely(Py_TYPE(cpy_r_setter) == CPyType_nodes___Decorator))
        cpy_r_r25 = cpy_r_setter;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "is_valid_multipart_property_def", 218, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_setter);
        goto CPyL38;
    }
    cpy_r_r26 = ((mypy___nodes___DecoratorObject *)cpy_r_r25)->_decorators;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_r26)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = cpy_r_r29 == 2;
    if (cpy_r_r30) {
        goto CPyL16;
    } else
        goto CPyL39;
CPyL15: ;
    cpy_r_r31 = cpy_r_r30;
    goto CPyL28;
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_setter) == CPyType_nodes___Decorator))
        cpy_r_r32 = cpy_r_setter;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "is_valid_multipart_property_def", 219, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_setter);
        goto CPyL38;
    }
    cpy_r_r33 = ((mypy___nodes___DecoratorObject *)cpy_r_r32)->_decorators;
    cpy_r_r34 = CPyList_GetItemShortBorrow(cpy_r_r33, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "is_valid_multipart_property_def", 219, CPyStatic_prepare___globals);
        goto CPyL38;
    }
    cpy_r_r35 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r36 = (CPyPtr)&((PyObject *)cpy_r_r34)->ob_type;
    cpy_r_r37 = *(PyObject * *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 == cpy_r_r35;
    if (cpy_r_r38) {
        goto CPyL20;
    } else
        goto CPyL40;
CPyL19: ;
    cpy_r_r39 = cpy_r_r38;
    goto CPyL27;
CPyL20: ;
    if (likely(Py_TYPE(cpy_r_setter) == CPyType_nodes___Decorator))
        cpy_r_r40 = cpy_r_setter;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "is_valid_multipart_property_def", 220, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_setter);
        goto CPyL38;
    }
    cpy_r_r41 = ((mypy___nodes___DecoratorObject *)cpy_r_r40)->_decorators;
    cpy_r_r42 = CPyList_GetItemShortBorrow(cpy_r_r41, 0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "is_valid_multipart_property_def", 220, CPyStatic_prepare___globals);
        goto CPyL38;
    }
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_nodes___MemberExpr))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "is_valid_multipart_property_def", 220, CPyStatic_prepare___globals, "mypy.nodes.MemberExpr", cpy_r_r42);
        goto CPyL38;
    }
    cpy_r_r44 = ((mypy___nodes___MemberExprObject *)cpy_r_r43)->_name;
    CPy_INCREF(cpy_r_r44);
    CPy_DECREF(cpy_r_setter);
    cpy_r_r45 = CPyStatics[4851]; /* 'setter' */
    cpy_r_r46 = PyUnicode_Compare(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r47 = cpy_r_r46 == -1;
    if (!cpy_r_r47) goto CPyL26;
    cpy_r_r48 = PyErr_Occurred();
    cpy_r_r49 = cpy_r_r48 != NULL;
    if (!cpy_r_r49) goto CPyL26;
    cpy_r_r50 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "is_valid_multipart_property_def", 220, CPyStatic_prepare___globals);
        goto CPyL32;
    }
CPyL26: ;
    cpy_r_r51 = cpy_r_r46 == 0;
    cpy_r_r39 = cpy_r_r51;
CPyL27: ;
    cpy_r_r31 = cpy_r_r39;
CPyL28: ;
    cpy_r_r24 = cpy_r_r31;
CPyL29: ;
    cpy_r_r20 = cpy_r_r24;
CPyL30: ;
    cpy_r_r15 = cpy_r_r20;
CPyL31: ;
    return cpy_r_r15;
CPyL32: ;
    cpy_r_r52 = 2;
    return cpy_r_r52;
CPyL33: ;
    CPy_DecRef(cpy_r_getter);
    goto CPyL32;
CPyL34: ;
    CPy_DECREF(cpy_r_getter);
    CPy_DECREF(cpy_r_setter);
    goto CPyL7;
CPyL35: ;
    CPy_DECREF(cpy_r_getter);
    CPy_DECREF(cpy_r_setter);
    goto CPyL9;
CPyL36: ;
    CPy_DecRef(cpy_r_getter);
    CPy_DecRef(cpy_r_setter);
    goto CPyL32;
CPyL37: ;
    CPy_DECREF(cpy_r_setter);
    goto CPyL12;
CPyL38: ;
    CPy_DecRef(cpy_r_setter);
    goto CPyL32;
CPyL39: ;
    CPy_DECREF(cpy_r_setter);
    goto CPyL15;
CPyL40: ;
    CPy_DECREF(cpy_r_setter);
    goto CPyL19;
}

PyObject *CPyPy_prepare___is_valid_multipart_property_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"prop", 0};
    static CPyArg_Parser parser = {"O:is_valid_multipart_property_def", kwlist, 0};
    PyObject *obj_prop;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_prop)) {
        return NULL;
    }
    PyObject *arg_prop;
    if (likely(Py_TYPE(obj_prop) == CPyType_nodes___OverloadedFuncDef))
        arg_prop = obj_prop;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_prop); 
        goto fail;
    }
    char retval = CPyDef_prepare___is_valid_multipart_property_def(arg_prop);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "is_valid_multipart_property_def", 206, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___can_subclass_builtin(PyObject *cpy_r_builtin_base) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    cpy_r_r0 = CPyStatics[819]; /* 'builtins.Exception' */
    cpy_r_r1 = PyUnicode_Compare(cpy_r_builtin_base, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 == -1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = PyErr_Occurred();
    cpy_r_r4 = cpy_r_r3 != NULL;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "can_subclass_builtin", -1, CPyStatic_prepare___globals);
        goto CPyL40;
    }
CPyL3: ;
    cpy_r_r6 = cpy_r_r1 == 0;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = cpy_r_r6;
    goto CPyL9;
CPyL5: ;
    cpy_r_r8 = CPyStatics[8509]; /* 'builtins.LookupError' */
    cpy_r_r9 = PyUnicode_Compare(cpy_r_builtin_base, cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 == -1;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = PyErr_Occurred();
    cpy_r_r12 = cpy_r_r11 != NULL;
    if (!cpy_r_r12) goto CPyL8;
    cpy_r_r13 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "can_subclass_builtin", -1, CPyStatic_prepare___globals);
        goto CPyL40;
    }
CPyL8: ;
    cpy_r_r14 = cpy_r_r9 == 0;
    cpy_r_r7 = cpy_r_r14;
CPyL9: ;
    if (!cpy_r_r7) goto CPyL11;
    cpy_r_r15 = cpy_r_r7;
    goto CPyL15;
CPyL11: ;
    cpy_r_r16 = CPyStatics[8510]; /* 'builtins.IndexError' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_builtin_base, cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL14;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL14;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "can_subclass_builtin", -1, CPyStatic_prepare___globals);
        goto CPyL40;
    }
CPyL14: ;
    cpy_r_r22 = cpy_r_r17 == 0;
    cpy_r_r15 = cpy_r_r22;
CPyL15: ;
    if (!cpy_r_r15) goto CPyL17;
    cpy_r_r23 = cpy_r_r15;
    goto CPyL21;
CPyL17: ;
    cpy_r_r24 = CPyStatics[8511]; /* 'builtins.Warning' */
    cpy_r_r25 = PyUnicode_Compare(cpy_r_builtin_base, cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 == -1;
    if (!cpy_r_r26) goto CPyL20;
    cpy_r_r27 = PyErr_Occurred();
    cpy_r_r28 = cpy_r_r27 != NULL;
    if (!cpy_r_r28) goto CPyL20;
    cpy_r_r29 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "can_subclass_builtin", -1, CPyStatic_prepare___globals);
        goto CPyL40;
    }
CPyL20: ;
    cpy_r_r30 = cpy_r_r25 == 0;
    cpy_r_r23 = cpy_r_r30;
CPyL21: ;
    if (!cpy_r_r23) goto CPyL23;
    cpy_r_r31 = cpy_r_r23;
    goto CPyL27;
CPyL23: ;
    cpy_r_r32 = CPyStatics[8512]; /* 'builtins.UserWarning' */
    cpy_r_r33 = PyUnicode_Compare(cpy_r_builtin_base, cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 == -1;
    if (!cpy_r_r34) goto CPyL26;
    cpy_r_r35 = PyErr_Occurred();
    cpy_r_r36 = cpy_r_r35 != NULL;
    if (!cpy_r_r36) goto CPyL26;
    cpy_r_r37 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "can_subclass_builtin", -1, CPyStatic_prepare___globals);
        goto CPyL40;
    }
CPyL26: ;
    cpy_r_r38 = cpy_r_r33 == 0;
    cpy_r_r31 = cpy_r_r38;
CPyL27: ;
    if (!cpy_r_r31) goto CPyL29;
    cpy_r_r39 = cpy_r_r31;
    goto CPyL33;
CPyL29: ;
    cpy_r_r40 = CPyStatics[8513]; /* 'builtins.ValueError' */
    cpy_r_r41 = PyUnicode_Compare(cpy_r_builtin_base, cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 == -1;
    if (!cpy_r_r42) goto CPyL32;
    cpy_r_r43 = PyErr_Occurred();
    cpy_r_r44 = cpy_r_r43 != NULL;
    if (!cpy_r_r44) goto CPyL32;
    cpy_r_r45 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "can_subclass_builtin", -1, CPyStatic_prepare___globals);
        goto CPyL40;
    }
CPyL32: ;
    cpy_r_r46 = cpy_r_r41 == 0;
    cpy_r_r39 = cpy_r_r46;
CPyL33: ;
    if (!cpy_r_r39) goto CPyL35;
    cpy_r_r47 = cpy_r_r39;
    goto CPyL39;
CPyL35: ;
    cpy_r_r48 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r49 = PyUnicode_Compare(cpy_r_builtin_base, cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 == -1;
    if (!cpy_r_r50) goto CPyL38;
    cpy_r_r51 = PyErr_Occurred();
    cpy_r_r52 = cpy_r_r51 != NULL;
    if (!cpy_r_r52) goto CPyL38;
    cpy_r_r53 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "can_subclass_builtin", -1, CPyStatic_prepare___globals);
        goto CPyL40;
    }
CPyL38: ;
    cpy_r_r54 = cpy_r_r49 == 0;
    cpy_r_r47 = cpy_r_r54;
CPyL39: ;
    return cpy_r_r47;
CPyL40: ;
    cpy_r_r55 = 2;
    return cpy_r_r55;
}

PyObject *CPyPy_prepare___can_subclass_builtin(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builtin_base", 0};
    static CPyArg_Parser parser = {"O:can_subclass_builtin", kwlist, 0};
    PyObject *obj_builtin_base;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_builtin_base)) {
        return NULL;
    }
    PyObject *arg_builtin_base;
    if (likely(PyUnicode_Check(obj_builtin_base)))
        arg_builtin_base = obj_builtin_base;
    else {
        CPy_TypeError("str", obj_builtin_base); 
        goto fail;
    }
    char retval = CPyDef_prepare___can_subclass_builtin(arg_builtin_base);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "can_subclass_builtin", 224, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___prepare_class_def(PyObject *cpy_r_path, PyObject *cpy_r_module_name, PyObject *cpy_r_cdef, PyObject *cpy_r_errors, PyObject *cpy_r_mapper) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_attrs;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    CPyPtr cpy_r_r56;
    int64_t cpy_r_r57;
    CPyTagged cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    CPyTagged cpy_r_r73;
    PyObject *cpy_r_bases;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyPtr cpy_r_r80;
    int64_t cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_c;
    char cpy_r_r86;
    char cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyTagged cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyTagged cpy_r_r96;
    CPyPtr cpy_r_r97;
    int64_t cpy_r_r98;
    CPyTagged cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_c_2;
    char cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    CPyTagged cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_mro;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_base_mro;
    PyObject *cpy_r_r110;
    CPyTagged cpy_r_r111;
    CPyPtr cpy_r_r112;
    int64_t cpy_r_r113;
    CPyTagged cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    int32_t cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    int32_t cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_base_ir;
    char cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    CPyPtr cpy_r_r142;
    int64_t cpy_r_r143;
    CPyTagged cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    CPyTagged cpy_r_r148;
    char cpy_r_r149;
    CPyTagged cpy_r_r150;
    CPyTagged cpy_r_base_idx;
    CPyPtr cpy_r_r151;
    int64_t cpy_r_r152;
    CPyTagged cpy_r_r153;
    int64_t cpy_r_r154;
    char cpy_r_r155;
    int64_t cpy_r_r156;
    char cpy_r_r157;
    char cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    char cpy_r_r163;
    char cpy_r_r164;
    char cpy_r_r165;
    char cpy_r_r166;
    CPyTagged cpy_r_r167;
    CPyPtr cpy_r_r168;
    int64_t cpy_r_r169;
    CPyTagged cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_base_2;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    int32_t cpy_r_r179;
    char cpy_r_r180;
    CPyTagged cpy_r_r181;
    char cpy_r_r182;
    char cpy_r_r183;
    char cpy_r_r184;
    cpy_r_r0 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 248, CPyStatic_prepare___globals);
        goto CPyL114;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_class_ir___ClassIR))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 248, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r2);
        goto CPyL114;
    }
    cpy_r_ir = cpy_r_r3;
    cpy_r_r4 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r4);
    cpy_r_info = cpy_r_r4;
    cpy_r_r5 = CPyDef_irbuild___util___get_mypyc_attrs(cpy_r_cdef);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 251, CPyStatic_prepare___globals);
        goto CPyL115;
    }
    cpy_r_attrs = cpy_r_r5;
    cpy_r_r6 = CPyStatics[7758]; /* 'allow_interpreted_subclasses' */
    cpy_r_r7 = CPyDict_GetWithNone(cpy_r_attrs, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 252, CPyStatic_prepare___globals);
        goto CPyL116;
    }
    cpy_r_r8 = 1 ? Py_True : Py_False;
    cpy_r_r9 = cpy_r_r7 == cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r9) goto CPyL6;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_allow_interpreted_subclasses = 1;
CPyL6: ;
    cpy_r_r11 = CPyStatics[8514]; /* 'serializable' */
    cpy_r_r12 = CPyDict_GetWithNone(cpy_r_attrs, cpy_r_r11);
    CPy_DECREF(cpy_r_attrs);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 254, CPyStatic_prepare___globals);
        goto CPyL115;
    }
    cpy_r_r13 = 1 ? Py_True : Py_False;
    cpy_r_r14 = cpy_r_r12 == cpy_r_r13;
    CPy_DECREF(cpy_r_r12);
    if (!cpy_r_r14) goto CPyL9;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->__serializable = 1;
CPyL9: ;
    cpy_r_r16 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "prepare_class_def", "TypeInfo", "mro", 259, CPyStatic_prepare___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r16);
CPyL10: ;
    cpy_r_r17 = 0;
CPyL11: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL117;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r17);
    if (likely((Py_TYPE(cpy_r_r22) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r22) == CPyType_nodes___TypeInfo)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 259, CPyStatic_prepare___globals, "mypy.nodes.TypeInfo", cpy_r_r22);
        goto CPyL118;
    }
    cpy_r_cls = cpy_r_r23;
    cpy_r_r24 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 262, CPyStatic_prepare___globals);
        goto CPyL119;
    }
CPyL14: ;
    cpy_r_r25 = CPyStatics[815]; /* 'builtins.BaseException' */
    cpy_r_r26 = PyUnicode_Compare(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 == -1;
    if (!cpy_r_r27) goto CPyL17;
    cpy_r_r28 = PyErr_Occurred();
    cpy_r_r29 = cpy_r_r28 != NULL;
    if (!cpy_r_r29) goto CPyL17;
    cpy_r_r30 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 262, CPyStatic_prepare___globals);
        goto CPyL119;
    }
CPyL17: ;
    cpy_r_r31 = cpy_r_r26 == 0;
    if (cpy_r_r31) {
        goto CPyL120;
    } else
        goto CPyL19;
CPyL18: ;
    cpy_r_r32 = CPyStatics[7255]; /* 'PyBaseExceptionObject' */
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_builtin_base);
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_builtin_base = cpy_r_r32;
    goto CPyL31;
CPyL19: ;
    cpy_r_r34 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 264, CPyStatic_prepare___globals);
        goto CPyL119;
    }
CPyL20: ;
    cpy_r_r35 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r36 = PyUnicode_Compare(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r37 = cpy_r_r36 == -1;
    if (!cpy_r_r37) goto CPyL23;
    cpy_r_r38 = PyErr_Occurred();
    cpy_r_r39 = cpy_r_r38 != NULL;
    if (!cpy_r_r39) goto CPyL23;
    cpy_r_r40 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 264, CPyStatic_prepare___globals);
        goto CPyL119;
    }
CPyL23: ;
    cpy_r_r41 = cpy_r_r36 == 0;
    if (cpy_r_r41) {
        goto CPyL121;
    } else
        goto CPyL25;
CPyL24: ;
    cpy_r_r42 = CPyStatics[8515]; /* 'PyDictObject' */
    CPy_INCREF(cpy_r_r42);
    CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_builtin_base);
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_builtin_base = cpy_r_r42;
    goto CPyL31;
CPyL25: ;
    cpy_r_r44 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 266, CPyStatic_prepare___globals);
        goto CPyL119;
    }
CPyL26: ;
    cpy_r_r45 = CPyStatics[1360]; /* 'builtins.' */
    cpy_r_r46 = CPyStr_Startswith(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    if (!cpy_r_r46) goto CPyL122;
    cpy_r_r47 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_cls);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 267, CPyStatic_prepare___globals);
        goto CPyL118;
    }
CPyL28: ;
    cpy_r_r48 = CPyDef_prepare___can_subclass_builtin(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 267, CPyStatic_prepare___globals);
        goto CPyL118;
    }
    if (cpy_r_r48) goto CPyL31;
    cpy_r_r49 = CPyStatics[8516]; /* 'Inheriting from most builtin types is unimplemented' */
    cpy_r_r50 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r50);
    cpy_r_r51 = CPyDef_mypyc___errors___Errors___error(cpy_r_errors, cpy_r_r49, cpy_r_path, cpy_r_r50);
    CPyTagged_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 272, CPyStatic_prepare___globals);
        goto CPyL118;
    }
CPyL31: ;
    cpy_r_r52 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r52;
    goto CPyL11;
CPyL32: ;
    cpy_r_r53 = PyList_New(0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 277, CPyStatic_prepare___globals);
        goto CPyL115;
    }
    cpy_r_r54 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_bases;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "prepare_class_def", "TypeInfo", "bases", 277, CPyStatic_prepare___globals);
        goto CPyL123;
    }
    CPy_INCREF(cpy_r_r54);
CPyL34: ;
    cpy_r_r55 = 0;
CPyL35: ;
    cpy_r_r56 = (CPyPtr)&((PyVarObject *)cpy_r_r54)->ob_size;
    cpy_r_r57 = *(int64_t *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 << 1;
    cpy_r_r59 = (Py_ssize_t)cpy_r_r55 < (Py_ssize_t)cpy_r_r58;
    if (!cpy_r_r59) goto CPyL124;
    cpy_r_r60 = CPyList_GetItemUnsafe(cpy_r_r54, cpy_r_r55);
    if (likely(Py_TYPE(cpy_r_r60) == CPyType_types___Instance))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 277, CPyStatic_prepare___globals, "mypy.types.Instance", cpy_r_r60);
        goto CPyL125;
    }
    cpy_r_base = cpy_r_r61;
    cpy_r_r62 = ((mypy___types___InstanceObject *)cpy_r_base)->_type;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = PyDict_Contains(cpy_r_r63, cpy_r_r62);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 277, CPyStatic_prepare___globals);
        goto CPyL126;
    }
    cpy_r_r66 = cpy_r_r64;
    if (!cpy_r_r66) goto CPyL127;
    cpy_r_r67 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = ((mypy___types___InstanceObject *)cpy_r_base)->_type;
    CPy_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_base);
    cpy_r_r69 = CPyDict_GetItem(cpy_r_r67, cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 277, CPyStatic_prepare___globals);
        goto CPyL125;
    }
    if (likely(Py_TYPE(cpy_r_r69) == CPyType_class_ir___ClassIR))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 277, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r69);
        goto CPyL125;
    }
    cpy_r_r71 = PyList_Append(cpy_r_r53, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 277, CPyStatic_prepare___globals);
        goto CPyL125;
    }
CPyL42: ;
    cpy_r_r73 = cpy_r_r55 + 2;
    cpy_r_r55 = cpy_r_r73;
    goto CPyL35;
CPyL43: ;
    cpy_r_bases = cpy_r_r53;
    cpy_r_r74 = (CPyPtr)&((PyVarObject *)cpy_r_bases)->ob_size;
    cpy_r_r75 = *(int64_t *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 << 1;
    cpy_r_r77 = (Py_ssize_t)cpy_r_r76 > (Py_ssize_t)2;
    if (!cpy_r_r77) goto CPyL55;
    cpy_r_r78 = 0;
    cpy_r_r79 = 0;
CPyL45: ;
    cpy_r_r80 = (CPyPtr)&((PyVarObject *)cpy_r_bases)->ob_size;
    cpy_r_r81 = *(int64_t *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 << 1;
    cpy_r_r83 = (Py_ssize_t)cpy_r_r79 < (Py_ssize_t)cpy_r_r82;
    if (!cpy_r_r83) goto CPyL50;
    cpy_r_r84 = CPyList_GetItemUnsafe(cpy_r_bases, cpy_r_r79);
    if (likely(Py_TYPE(cpy_r_r84) == CPyType_class_ir___ClassIR))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 278, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r84);
        goto CPyL128;
    }
    cpy_r_c = cpy_r_r85;
    cpy_r_r86 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_c)->_is_trait;
    CPy_DECREF(cpy_r_c);
    cpy_r_r87 = cpy_r_r86 ^ 1;
    if (!cpy_r_r87) goto CPyL49;
    cpy_r_r78 = 1;
    goto CPyL50;
CPyL49: ;
    cpy_r_r88 = cpy_r_r79 + 2;
    cpy_r_r79 = cpy_r_r88;
    goto CPyL45;
CPyL50: ;
    if (!cpy_r_r78) goto CPyL55;
    cpy_r_r89 = CPyList_GetItemShortBorrow(cpy_r_bases, 0);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 278, CPyStatic_prepare___globals);
        goto CPyL128;
    }
    if (likely(Py_TYPE(cpy_r_r89) == CPyType_class_ir___ClassIR))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 278, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r89);
        goto CPyL128;
    }
    cpy_r_r91 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r90)->_is_trait;
    if (!cpy_r_r91) goto CPyL55;
CPyL54: ;
    cpy_r_r92 = CPyStatics[8517]; /* 'Non-trait base must appear first in parent list' */
    cpy_r_r93 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r93);
    cpy_r_r94 = CPyDef_mypyc___errors___Errors___error(cpy_r_errors, cpy_r_r92, cpy_r_path, cpy_r_r93);
    CPyTagged_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 283, CPyStatic_prepare___globals);
        goto CPyL128;
    }
CPyL55: ;
    cpy_r_r95 = PyList_New(0);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 284, CPyStatic_prepare___globals);
        goto CPyL128;
    }
    cpy_r_r96 = 0;
CPyL57: ;
    cpy_r_r97 = (CPyPtr)&((PyVarObject *)cpy_r_bases)->ob_size;
    cpy_r_r98 = *(int64_t *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 << 1;
    cpy_r_r100 = (Py_ssize_t)cpy_r_r96 < (Py_ssize_t)cpy_r_r99;
    if (!cpy_r_r100) goto CPyL62;
    cpy_r_r101 = CPyList_GetItemUnsafe(cpy_r_bases, cpy_r_r96);
    if (likely(Py_TYPE(cpy_r_r101) == CPyType_class_ir___ClassIR))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 284, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r101);
        goto CPyL129;
    }
    cpy_r_c_2 = cpy_r_r102;
    cpy_r_r103 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_c_2)->_is_trait;
    if (!cpy_r_r103) goto CPyL130;
CPyL60: ;
    cpy_r_r104 = PyList_Append(cpy_r_r95, cpy_r_c_2);
    CPy_DECREF(cpy_r_c_2);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 284, CPyStatic_prepare___globals);
        goto CPyL129;
    }
CPyL61: ;
    cpy_r_r106 = cpy_r_r96 + 2;
    cpy_r_r96 = cpy_r_r106;
    goto CPyL57;
CPyL62: ;
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_traits != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_traits);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_traits = cpy_r_r95;
    cpy_r_r107 = 1;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 284, CPyStatic_prepare___globals);
        goto CPyL128;
    }
    cpy_r_r108 = PyList_New(0);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 286, CPyStatic_prepare___globals);
        goto CPyL128;
    }
    cpy_r_mro = cpy_r_r108;
    cpy_r_r109 = PyList_New(0);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 287, CPyStatic_prepare___globals);
        goto CPyL131;
    }
    cpy_r_base_mro = cpy_r_r109;
    cpy_r_r110 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r110 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'mro' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r110);
    }
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 288, CPyStatic_prepare___globals);
        goto CPyL132;
    }
CPyL66: ;
    cpy_r_r111 = 0;
CPyL67: ;
    cpy_r_r112 = (CPyPtr)&((PyVarObject *)cpy_r_r110)->ob_size;
    cpy_r_r113 = *(int64_t *)cpy_r_r112;
    cpy_r_r114 = cpy_r_r113 << 1;
    cpy_r_r115 = (Py_ssize_t)cpy_r_r111 < (Py_ssize_t)cpy_r_r114;
    if (!cpy_r_r115) goto CPyL133;
    cpy_r_r116 = CPyList_GetItemUnsafe(cpy_r_r110, cpy_r_r111);
    if (likely((Py_TYPE(cpy_r_r116) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r116) == CPyType_nodes___TypeInfo)))
        cpy_r_r117 = cpy_r_r116;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 288, CPyStatic_prepare___globals, "mypy.nodes.TypeInfo", cpy_r_r116);
        goto CPyL134;
    }
    cpy_r_cls = cpy_r_r117;
    cpy_r_r118 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r118);
    cpy_r_r119 = PyDict_Contains(cpy_r_r118, cpy_r_cls);
    CPy_DECREF(cpy_r_r118);
    cpy_r_r120 = cpy_r_r119 >= 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 289, CPyStatic_prepare___globals);
        goto CPyL135;
    }
    cpy_r_r121 = cpy_r_r119;
    cpy_r_r122 = cpy_r_r121 ^ 1;
    if (!cpy_r_r122) goto CPyL77;
    cpy_r_r123 = CPY_GET_ATTR(cpy_r_cls, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_cls);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 290, CPyStatic_prepare___globals);
        goto CPyL134;
    }
CPyL72: ;
    cpy_r_r124 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r125 = PyUnicode_Compare(cpy_r_r123, cpy_r_r124);
    CPy_DECREF(cpy_r_r123);
    cpy_r_r126 = cpy_r_r125 == -1;
    if (!cpy_r_r126) goto CPyL75;
    cpy_r_r127 = PyErr_Occurred();
    cpy_r_r128 = cpy_r_r127 != NULL;
    if (!cpy_r_r128) goto CPyL75;
    cpy_r_r129 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 290, CPyStatic_prepare___globals);
        goto CPyL134;
    }
CPyL75: ;
    cpy_r_r130 = cpy_r_r125 != 0;
    if (!cpy_r_r130) goto CPyL86;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_inherits_python = 1;
    goto CPyL86;
CPyL77: ;
    cpy_r_r132 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r132);
    cpy_r_r133 = CPyDict_GetItem(cpy_r_r132, cpy_r_cls);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 293, CPyStatic_prepare___globals);
        goto CPyL135;
    }
    if (likely(Py_TYPE(cpy_r_r133) == CPyType_class_ir___ClassIR))
        cpy_r_r134 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 293, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r133);
        goto CPyL135;
    }
    cpy_r_base_ir = cpy_r_r134;
    cpy_r_r135 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base_ir)->_is_trait;
    if (cpy_r_r135) goto CPyL81;
CPyL80: ;
    cpy_r_r136 = PyList_Append(cpy_r_base_mro, cpy_r_base_ir);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 295, CPyStatic_prepare___globals);
        goto CPyL136;
    }
CPyL81: ;
    cpy_r_r138 = PyList_Append(cpy_r_mro, cpy_r_base_ir);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 296, CPyStatic_prepare___globals);
        goto CPyL136;
    }
    cpy_r_r140 = ((mypy___nodes___TypeInfoObject *)cpy_r_cls)->_defn;
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "prepare_class_def", "TypeInfo", "defn", 298, CPyStatic_prepare___globals);
        goto CPyL136;
    }
CPyL83: ;
    cpy_r_r141 = ((mypy___nodes___ClassDefObject *)cpy_r_r140)->_removed_base_type_exprs;
    CPy_INCREF(cpy_r_r141);
    CPy_DECREF(cpy_r_cls);
    cpy_r_r142 = (CPyPtr)&((PyVarObject *)cpy_r_r141)->ob_size;
    cpy_r_r143 = *(int64_t *)cpy_r_r142;
    CPy_DECREF(cpy_r_r141);
    cpy_r_r144 = cpy_r_r143 << 1;
    cpy_r_r145 = cpy_r_r144 != 0;
    if (cpy_r_r145) goto CPyL137;
    cpy_r_r146 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base_ir)->_is_ext_class;
    CPy_DECREF(cpy_r_base_ir);
    if (cpy_r_r146) goto CPyL86;
CPyL85: ;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_inherits_python = 1;
CPyL86: ;
    cpy_r_r148 = cpy_r_r111 + 2;
    cpy_r_r111 = cpy_r_r148;
    goto CPyL67;
CPyL87: ;
    cpy_r_r149 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_trait;
    if (cpy_r_r149) goto CPyL89;
CPyL88: ;
    cpy_r_r150 = 2;
    goto CPyL90;
CPyL89: ;
    cpy_r_r150 = 0;
CPyL90: ;
    cpy_r_base_idx = cpy_r_r150;
    cpy_r_r151 = (CPyPtr)&((PyVarObject *)cpy_r_base_mro)->ob_size;
    cpy_r_r152 = *(int64_t *)cpy_r_r151;
    cpy_r_r153 = cpy_r_r152 << 1;
    cpy_r_r154 = cpy_r_r153 & 1;
    cpy_r_r155 = cpy_r_r154 != 0;
    if (cpy_r_r155) goto CPyL92;
    cpy_r_r156 = cpy_r_base_idx & 1;
    cpy_r_r157 = cpy_r_r156 != 0;
    if (!cpy_r_r157) goto CPyL93;
CPyL92: ;
    cpy_r_r158 = CPyTagged_IsLt_(cpy_r_base_idx, cpy_r_r153);
    if (cpy_r_r158) {
        goto CPyL94;
    } else
        goto CPyL138;
CPyL93: ;
    cpy_r_r159 = (Py_ssize_t)cpy_r_r153 > (Py_ssize_t)cpy_r_base_idx;
    if (!cpy_r_r159) goto CPyL138;
CPyL94: ;
    cpy_r_r160 = CPyList_GetItem(cpy_r_base_mro, cpy_r_base_idx);
    CPyTagged_DECREF(cpy_r_base_idx);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 303, CPyStatic_prepare___globals);
        goto CPyL132;
    }
    if (likely(Py_TYPE(cpy_r_r160) == CPyType_class_ir___ClassIR))
        cpy_r_r161 = cpy_r_r160;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 303, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r160);
        goto CPyL132;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base = cpy_r_r161;
    cpy_r_r162 = 1;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 303, CPyStatic_prepare___globals);
        goto CPyL132;
    }
CPyL97: ;
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_mro != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_mro);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_mro = cpy_r_mro;
    cpy_r_r163 = 1;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 304, CPyStatic_prepare___globals);
        goto CPyL139;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base_mro != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base_mro);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base_mro = cpy_r_base_mro;
    cpy_r_r164 = 1;
    if (unlikely(!cpy_r_r164)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 305, CPyStatic_prepare___globals);
        goto CPyL140;
    }
    cpy_r_r165 = CPyDef_prepare___prepare_methods_and_attributes(cpy_r_cdef, cpy_r_ir, cpy_r_path, cpy_r_module_name, cpy_r_errors, cpy_r_mapper);
    if (unlikely(cpy_r_r165 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 307, CPyStatic_prepare___globals);
        goto CPyL140;
    }
    cpy_r_r166 = CPyDef_prepare___prepare_init_method(cpy_r_cdef, cpy_r_ir, cpy_r_module_name, cpy_r_mapper);
    if (unlikely(cpy_r_r166 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 308, CPyStatic_prepare___globals);
        goto CPyL140;
    }
    cpy_r_r167 = 0;
CPyL102: ;
    cpy_r_r168 = (CPyPtr)&((PyVarObject *)cpy_r_bases)->ob_size;
    cpy_r_r169 = *(int64_t *)cpy_r_r168;
    cpy_r_r170 = cpy_r_r169 << 1;
    cpy_r_r171 = (Py_ssize_t)cpy_r_r167 < (Py_ssize_t)cpy_r_r170;
    if (!cpy_r_r171) goto CPyL141;
    cpy_r_r172 = CPyList_GetItemUnsafe(cpy_r_bases, cpy_r_r167);
    if (likely(Py_TYPE(cpy_r_r172) == CPyType_class_ir___ClassIR))
        cpy_r_r173 = cpy_r_r172;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 310, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r172);
        goto CPyL140;
    }
    cpy_r_base_2 = cpy_r_r173;
    cpy_r_r174 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base_2)->_children;
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "prepare_class_def", "ClassIR", "children", 311, CPyStatic_prepare___globals);
        goto CPyL142;
    }
CPyL105: ;
    cpy_r_r175 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r176 = cpy_r_r174 != cpy_r_r175;
    if (!cpy_r_r176) goto CPyL143;
    cpy_r_r177 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base_2)->_children;
    if (unlikely(cpy_r_r177 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'children' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r177);
    }
    CPy_DECREF(cpy_r_base_2);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 312, CPyStatic_prepare___globals);
        goto CPyL140;
    }
CPyL107: ;
    if (likely(cpy_r_r177 != Py_None))
        cpy_r_r178 = cpy_r_r177;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 312, CPyStatic_prepare___globals, "list", cpy_r_r177);
        goto CPyL140;
    }
    cpy_r_r179 = PyList_Append(cpy_r_r178, cpy_r_ir);
    CPy_DECREF(cpy_r_r178);
    cpy_r_r180 = cpy_r_r179 >= 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 312, CPyStatic_prepare___globals);
        goto CPyL140;
    }
CPyL109: ;
    cpy_r_r181 = cpy_r_r167 + 2;
    cpy_r_r167 = cpy_r_r181;
    goto CPyL102;
CPyL110: ;
    cpy_r_r182 = CPyDef_irbuild___util___is_dataclass(cpy_r_cdef);
    if (unlikely(cpy_r_r182 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 314, CPyStatic_prepare___globals);
        goto CPyL144;
    }
    if (!cpy_r_r182) goto CPyL145;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_augmented = 1;
    CPy_DECREF(cpy_r_ir);
CPyL113: ;
    return 1;
CPyL114: ;
    cpy_r_r184 = 2;
    return cpy_r_r184;
CPyL115: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    goto CPyL114;
CPyL116: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attrs);
    goto CPyL114;
CPyL117: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL32;
CPyL118: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r16);
    goto CPyL114;
CPyL119: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_cls);
    goto CPyL114;
CPyL120: ;
    CPy_DECREF(cpy_r_cls);
    goto CPyL18;
CPyL121: ;
    CPy_DECREF(cpy_r_cls);
    goto CPyL24;
CPyL122: ;
    CPy_DECREF(cpy_r_cls);
    goto CPyL31;
CPyL123: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r53);
    goto CPyL114;
CPyL124: ;
    CPy_DECREF(cpy_r_r54);
    goto CPyL43;
CPyL125: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    goto CPyL114;
CPyL126: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_base);
    goto CPyL114;
CPyL127: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL42;
CPyL128: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_bases);
    goto CPyL114;
CPyL129: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_r95);
    goto CPyL114;
CPyL130: ;
    CPy_DECREF(cpy_r_c_2);
    goto CPyL61;
CPyL131: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_mro);
    goto CPyL114;
CPyL132: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_mro);
    CPy_DecRef(cpy_r_base_mro);
    goto CPyL114;
CPyL133: ;
    CPy_DECREF(cpy_r_r110);
    goto CPyL87;
CPyL134: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_mro);
    CPy_DecRef(cpy_r_base_mro);
    CPy_DecRef(cpy_r_r110);
    goto CPyL114;
CPyL135: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_mro);
    CPy_DecRef(cpy_r_base_mro);
    CPy_DecRef(cpy_r_r110);
    goto CPyL114;
CPyL136: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_mro);
    CPy_DecRef(cpy_r_base_mro);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_base_ir);
    goto CPyL114;
CPyL137: ;
    CPy_DECREF(cpy_r_base_ir);
    goto CPyL85;
CPyL138: ;
    CPyTagged_DECREF(cpy_r_base_idx);
    goto CPyL97;
CPyL139: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_base_mro);
    goto CPyL114;
CPyL140: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    goto CPyL114;
CPyL141: ;
    CPy_DECREF(cpy_r_bases);
    goto CPyL110;
CPyL142: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_base_2);
    goto CPyL114;
CPyL143: ;
    CPy_DECREF(cpy_r_base_2);
    goto CPyL109;
CPyL144: ;
    CPy_DecRef(cpy_r_ir);
    goto CPyL114;
CPyL145: ;
    CPy_DECREF(cpy_r_ir);
    goto CPyL113;
}

PyObject *CPyPy_prepare___prepare_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"path", "module_name", "cdef", "errors", "mapper", 0};
    static CPyArg_Parser parser = {"OOOOO:prepare_class_def", kwlist, 0};
    PyObject *obj_path;
    PyObject *obj_module_name;
    PyObject *obj_cdef;
    PyObject *obj_errors;
    PyObject *obj_mapper;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_path, &obj_module_name, &obj_cdef, &obj_errors, &obj_mapper)) {
        return NULL;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypyc___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_errors); 
        goto fail;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    char retval = CPyDef_prepare___prepare_class_def(arg_path, arg_module_name, arg_cdef, arg_errors, arg_mapper);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_class_def", 239, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___prepare_methods_and_attributes(PyObject *cpy_r_cdef, PyObject *cpy_r_ir, PyObject *cpy_r_path, PyObject *cpy_r_module_name, PyObject *cpy_r_errors, PyObject *cpy_r_mapper) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_info;
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
    PyObject *cpy_r_name;
    PyObject *cpy_r_node;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_attr_rtype;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyPtr cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyPtr cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
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
    PyObject *cpy_r_item;
    char cpy_r_r97;
    CPyTagged cpy_r_r98;
    PyObject *cpy_r_r99;
    CPyTagged cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_info = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 323, CPyStatic_prepare___globals);
        goto CPyL70;
    }
CPyL1: ;
    cpy_r_r2 = 0;
    cpy_r_r3 = PyDict_Size(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyDict_GetItemsIter(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 323, CPyStatic_prepare___globals);
        goto CPyL71;
    }
CPyL2: ;
    cpy_r_r6 = CPyDict_NextItem(cpy_r_r5, cpy_r_r2);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r2 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL72;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = cpy_r_r6.f3;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r11 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 323, CPyStatic_prepare___globals, "str", cpy_r_r9);
        goto CPyL73;
    }
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_nodes___SymbolTableNode))
        cpy_r_r12 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 323, CPyStatic_prepare___globals, "mypy.nodes.SymbolTableNode", cpy_r_r10);
        goto CPyL74;
    }
    cpy_r_name = cpy_r_r11;
    cpy_r_node = cpy_r_r12;
    cpy_r_r13 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_plugin_generated;
    if (cpy_r_r13) goto CPyL75;
CPyL6: ;
    cpy_r_r14 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    cpy_r_r15 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_r14)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL76;
    cpy_r_r19 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_nodes___Var))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 329, CPyStatic_prepare___globals, "mypy.nodes.Var", cpy_r_r19);
        goto CPyL77;
    }
    cpy_r_r21 = ((mypy___nodes___VarObject *)cpy_r_r20)->_type;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_r21 != cpy_r_r22;
    CPy_DECREF(cpy_r_r21);
    if (cpy_r_r23) {
        goto CPyL14;
    } else
        goto CPyL78;
CPyL9: ;
    cpy_r_r24 = CPyStatics[8518]; /* 'Class member ' */
    cpy_r_r25 = CPyStatics[8519]; /* ' missing type' */
    cpy_r_r26 = CPyStr_Build(3, cpy_r_r24, cpy_r_name, cpy_r_r25);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 329, CPyStatic_prepare___globals);
        goto CPyL70;
    }
    cpy_r_r27 = CPyModule_builtins;
    cpy_r_r28 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 329, CPyStatic_prepare___globals);
        goto CPyL79;
    }
    PyObject *cpy_r_r30[1] = {cpy_r_r26};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_r29, cpy_r_r31, 1, 0);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 329, CPyStatic_prepare___globals);
        goto CPyL79;
    }
    CPy_DECREF(cpy_r_r26);
    CPy_Raise(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 329, CPyStatic_prepare___globals);
        goto CPyL70;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r33 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_nodes___Var))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 330, CPyStatic_prepare___globals, "mypy.nodes.Var", cpy_r_r33);
        goto CPyL77;
    }
    cpy_r_r35 = ((mypy___nodes___VarObject *)cpy_r_r34)->_is_classvar;
    if (cpy_r_r35) goto CPyL75;
CPyL16: ;
    cpy_r_r36 = CPyStatics[785]; /* '__slots__' */
    cpy_r_r37 = PyUnicode_Compare(cpy_r_name, cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 == -1;
    if (!cpy_r_r38) goto CPyL19;
    cpy_r_r39 = PyErr_Occurred();
    cpy_r_r40 = cpy_r_r39 != NULL;
    if (!cpy_r_r40) goto CPyL19;
    cpy_r_r41 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", -1, CPyStatic_prepare___globals);
        goto CPyL77;
    }
CPyL19: ;
    cpy_r_r42 = cpy_r_r37 != 0;
    if (cpy_r_r42) goto CPyL21;
    cpy_r_r43 = cpy_r_r42;
    goto CPyL25;
CPyL21: ;
    cpy_r_r44 = CPyStatics[4998]; /* '__deletable__' */
    cpy_r_r45 = PyUnicode_Compare(cpy_r_name, cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 == -1;
    if (!cpy_r_r46) goto CPyL24;
    cpy_r_r47 = PyErr_Occurred();
    cpy_r_r48 = cpy_r_r47 != NULL;
    if (!cpy_r_r48) goto CPyL24;
    cpy_r_r49 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", -1, CPyStatic_prepare___globals);
        goto CPyL77;
    }
CPyL24: ;
    cpy_r_r50 = cpy_r_r45 != 0;
    cpy_r_r43 = cpy_r_r50;
CPyL25: ;
    if (!cpy_r_r43) goto CPyL75;
    cpy_r_r51 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely(Py_TYPE(cpy_r_r51) == CPyType_nodes___Var))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 331, CPyStatic_prepare___globals, "mypy.nodes.Var", cpy_r_r51);
        goto CPyL77;
    }
    cpy_r_r53 = ((mypy___nodes___VarObject *)cpy_r_r52)->_type;
    CPy_INCREF(cpy_r_r53);
    if (likely(cpy_r_r53 != Py_None))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 331, CPyStatic_prepare___globals, "mypy.types.Type", cpy_r_r53);
        goto CPyL77;
    }
    CPy_DECREF(cpy_r_node);
    cpy_r_r55 = CPyDef_mapper___Mapper___type_to_rtype(cpy_r_mapper, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 331, CPyStatic_prepare___globals);
        goto CPyL80;
    }
    cpy_r_attr_rtype = cpy_r_r55;
    cpy_r_r56 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_trait;
    if (!cpy_r_r56) goto CPyL33;
CPyL30: ;
    cpy_r_r57 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_attr_rtype)->_error_overlap;
    if (!cpy_r_r57) goto CPyL33;
CPyL31: ;
    cpy_r_r58 = CPyDef_prepare___add_getter_declaration(cpy_r_ir, cpy_r_name, cpy_r_attr_rtype, cpy_r_module_name);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 337, CPyStatic_prepare___globals);
        goto CPyL81;
    }
    cpy_r_r59 = CPyDef_prepare___add_setter_declaration(cpy_r_ir, cpy_r_name, cpy_r_attr_rtype, cpy_r_module_name);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 338, CPyStatic_prepare___globals);
        goto CPyL81;
    }
CPyL33: ;
    cpy_r_r60 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_attributes;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", "ClassIR", "attributes", 339, CPyStatic_prepare___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r60);
CPyL34: ;
    cpy_r_r61 = CPyDict_SetItem(cpy_r_r60, cpy_r_name, cpy_r_attr_rtype);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_attr_rtype);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 339, CPyStatic_prepare___globals);
        goto CPyL82;
    } else
        goto CPyL62;
CPyL35: ;
    cpy_r_r63 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    cpy_r_r64 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r65 = (CPyPtr)&((PyObject *)cpy_r_r63)->ob_type;
    cpy_r_r66 = *(PyObject * *)cpy_r_r65;
    cpy_r_r67 = cpy_r_r66 == cpy_r_r64;
    if (!cpy_r_r67) goto CPyL37;
    cpy_r_r68 = cpy_r_r67;
    goto CPyL38;
CPyL37: ;
    cpy_r_r69 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r70 = (CPyPtr)&((PyObject *)cpy_r_r63)->ob_type;
    cpy_r_r71 = *(PyObject * *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 == cpy_r_r69;
    cpy_r_r68 = cpy_r_r72;
CPyL38: ;
    if (!cpy_r_r68) goto CPyL41;
    cpy_r_r73 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r73);
    CPy_DECREF(cpy_r_node);
    if (Py_TYPE(cpy_r_r73) == CPyType_nodes___FuncDef)
        cpy_r_r74 = cpy_r_r73;
    else {
        cpy_r_r74 = NULL;
    }
    if (cpy_r_r74 != NULL) goto __LL10433;
    if (Py_TYPE(cpy_r_r73) == CPyType_nodes___Decorator)
        cpy_r_r74 = cpy_r_r73;
    else {
        cpy_r_r74 = NULL;
    }
    if (cpy_r_r74 != NULL) goto __LL10433;
    CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 341, CPyStatic_prepare___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r73);
    goto CPyL82;
__LL10433: ;
    cpy_r_r75 = CPyDef_prepare___prepare_method_def(cpy_r_ir, cpy_r_module_name, cpy_r_cdef, cpy_r_mapper, cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 341, CPyStatic_prepare___globals);
        goto CPyL82;
    } else
        goto CPyL62;
CPyL41: ;
    cpy_r_r76 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    cpy_r_r77 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r78 = (CPyPtr)&((PyObject *)cpy_r_r76)->ob_type;
    cpy_r_r79 = *(PyObject * *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 == cpy_r_r77;
    if (!cpy_r_r80) goto CPyL83;
    cpy_r_r81 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely(Py_TYPE(cpy_r_r81) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 344, CPyStatic_prepare___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r81);
        goto CPyL84;
    }
    cpy_r_r83 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r82)->_is_property;
    if (!cpy_r_r83) goto CPyL54;
CPyL44: ;
    cpy_r_r84 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r84);
    if (likely(Py_TYPE(cpy_r_r84) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 345, CPyStatic_prepare___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r84);
        goto CPyL84;
    }
    cpy_r_r86 = CPyDef_prepare___is_valid_multipart_property_def(cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 345, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    if (!cpy_r_r86) goto CPyL85;
    cpy_r_r87 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely(Py_TYPE(cpy_r_r87) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 346, CPyStatic_prepare___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r87);
        goto CPyL84;
    }
    cpy_r_r89 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r88)->_items;
    CPy_INCREF(cpy_r_r89);
    CPy_DECREF(cpy_r_node);
    cpy_r_r90 = 0;
CPyL49: ;
    cpy_r_r91 = (CPyPtr)&((PyVarObject *)cpy_r_r89)->ob_size;
    cpy_r_r92 = *(int64_t *)cpy_r_r91;
    cpy_r_r93 = cpy_r_r92 << 1;
    cpy_r_r94 = (Py_ssize_t)cpy_r_r90 < (Py_ssize_t)cpy_r_r93;
    if (!cpy_r_r94) goto CPyL86;
    cpy_r_r95 = CPyList_GetItemUnsafe(cpy_r_r89, cpy_r_r90);
    if (Py_TYPE(cpy_r_r95) == CPyType_nodes___FuncDef)
        cpy_r_r96 = cpy_r_r95;
    else {
        cpy_r_r96 = NULL;
    }
    if (cpy_r_r96 != NULL) goto __LL10434;
    if (Py_TYPE(cpy_r_r95) == CPyType_nodes___Decorator)
        cpy_r_r96 = cpy_r_r95;
    else {
        cpy_r_r96 = NULL;
    }
    if (cpy_r_r96 != NULL) goto __LL10434;
    CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 346, CPyStatic_prepare___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r95);
    goto CPyL87;
__LL10434: ;
    cpy_r_item = cpy_r_r96;
    cpy_r_r97 = CPyDef_prepare___prepare_method_def(cpy_r_ir, cpy_r_module_name, cpy_r_cdef, cpy_r_mapper, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r97 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 347, CPyStatic_prepare___globals);
        goto CPyL87;
    }
    cpy_r_r98 = cpy_r_r90 + 2;
    cpy_r_r90 = cpy_r_r98;
    goto CPyL49;
CPyL53: ;
    cpy_r_r99 = CPyStatics[8520]; /* 'Unsupported property decorator semantics' */
    cpy_r_r100 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r100);
    cpy_r_r101 = CPyDef_mypyc___errors___Errors___error(cpy_r_errors, cpy_r_r99, cpy_r_path, cpy_r_r100);
    CPyTagged_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r101 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 349, CPyStatic_prepare___globals);
        goto CPyL82;
    } else
        goto CPyL62;
CPyL54: ;
    cpy_r_r102 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely(Py_TYPE(cpy_r_r102) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 353, CPyStatic_prepare___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r102);
        goto CPyL84;
    }
    cpy_r_r104 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r103)->_impl;
    CPy_INCREF(cpy_r_r104);
    cpy_r_r105 = PyObject_IsTrue(cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 353, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r107 = cpy_r_r105;
    if (cpy_r_r107) {
        goto CPyL59;
    } else
        goto CPyL88;
CPyL57: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r108 = 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 353, CPyStatic_prepare___globals);
        goto CPyL70;
    }
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r109 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely(Py_TYPE(cpy_r_r109) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 354, CPyStatic_prepare___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r109);
        goto CPyL84;
    }
    cpy_r_r111 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r110)->_impl;
    CPy_INCREF(cpy_r_r111);
    if (Py_TYPE(cpy_r_r111) == CPyType_nodes___FuncDef)
        cpy_r_r112 = cpy_r_r111;
    else {
        cpy_r_r112 = NULL;
    }
    if (cpy_r_r112 != NULL) goto __LL10435;
    if (Py_TYPE(cpy_r_r111) == CPyType_nodes___Decorator)
        cpy_r_r112 = cpy_r_r111;
    else {
        cpy_r_r112 = NULL;
    }
    if (cpy_r_r112 != NULL) goto __LL10435;
    CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 354, CPyStatic_prepare___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r111);
    goto CPyL84;
__LL10435: ;
    CPy_DECREF(cpy_r_node);
    cpy_r_r113 = CPyDef_prepare___prepare_method_def(cpy_r_ir, cpy_r_module_name, cpy_r_cdef, cpy_r_mapper, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 354, CPyStatic_prepare___globals);
        goto CPyL82;
    }
CPyL62: ;
    cpy_r_r114 = CPyDict_CheckSize(cpy_r_r1, cpy_r_r4);
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 323, CPyStatic_prepare___globals);
        goto CPyL82;
    } else
        goto CPyL2;
CPyL63: ;
    cpy_r_r115 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 323, CPyStatic_prepare___globals);
        goto CPyL70;
    }
    cpy_r_r116 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_builtin_base;
    CPy_INCREF(cpy_r_r116);
    cpy_r_r117 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r118 = cpy_r_r116 != cpy_r_r117;
    if (!cpy_r_r118) goto CPyL89;
    if (likely(cpy_r_r116 != Py_None))
        cpy_r_r119 = cpy_r_r116;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 356, CPyStatic_prepare___globals, "str", cpy_r_r116);
        goto CPyL70;
    }
    cpy_r_r120 = CPyStr_IsTrue(cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    if (!cpy_r_r120) goto CPyL69;
    cpy_r_r121 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_attributes;
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", "ClassIR", "attributes", 357, CPyStatic_prepare___globals);
        goto CPyL70;
    }
    CPy_INCREF(cpy_r_r121);
CPyL68: ;
    cpy_r_r122 = CPyDict_Clear(cpy_r_r121);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 357, CPyStatic_prepare___globals);
        goto CPyL70;
    }
CPyL69: ;
    return 1;
CPyL70: ;
    cpy_r_r123 = 2;
    return cpy_r_r123;
CPyL71: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL70;
CPyL72: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    CPy_DECREF(cpy_r_r6.f3);
    goto CPyL63;
CPyL73: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    goto CPyL70;
CPyL74: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    goto CPyL70;
CPyL75: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_node);
    goto CPyL62;
CPyL76: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL35;
CPyL77: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_node);
    goto CPyL70;
CPyL78: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_node);
    goto CPyL9;
CPyL79: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL70;
CPyL80: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_name);
    goto CPyL70;
CPyL81: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_attr_rtype);
    goto CPyL70;
CPyL82: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL70;
CPyL83: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL62;
CPyL84: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_node);
    goto CPyL70;
CPyL85: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL53;
CPyL86: ;
    CPy_DECREF(cpy_r_r89);
    goto CPyL62;
CPyL87: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r89);
    goto CPyL70;
CPyL88: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_node);
    goto CPyL57;
CPyL89: ;
    CPy_DECREF(cpy_r_r116);
    goto CPyL69;
}

PyObject *CPyPy_prepare___prepare_methods_and_attributes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cdef", "ir", "path", "module_name", "errors", "mapper", 0};
    static CPyArg_Parser parser = {"OOOOOO:prepare_methods_and_attributes", kwlist, 0};
    PyObject *obj_cdef;
    PyObject *obj_ir;
    PyObject *obj_path;
    PyObject *obj_module_name;
    PyObject *obj_errors;
    PyObject *obj_mapper;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cdef, &obj_ir, &obj_path, &obj_module_name, &obj_errors, &obj_mapper)) {
        return NULL;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypyc___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_errors); 
        goto fail;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    char retval = CPyDef_prepare___prepare_methods_and_attributes(arg_cdef, arg_ir, arg_path, arg_module_name, arg_errors, arg_mapper);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_methods_and_attributes", 318, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___prepare_implicit_property_accessors(PyObject *cpy_r_info, PyObject *cpy_r_ir, PyObject *cpy_r_module_name, PyObject *cpy_r_mapper) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_concrete_attributes;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    tuple_T4CIOO cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_name;
    PyObject *cpy_r_attr_rtype;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
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
    int32_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 363, CPyStatic_prepare___globals);
        goto CPyL34;
    }
    cpy_r_concrete_attributes = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_base_mro;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", "ClassIR", "base_mro", 364, CPyStatic_prepare___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL36;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_class_ir___ClassIR))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 364, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r7);
        goto CPyL37;
    }
    cpy_r_base = cpy_r_r8;
    cpy_r_r9 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_attributes;
    if (unlikely(cpy_r_r9 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'attributes' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r9);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 365, CPyStatic_prepare___globals);
        goto CPyL37;
    }
CPyL6: ;
    cpy_r_r10 = 0;
    cpy_r_r11 = PyDict_Size(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = CPyDict_GetItemsIter(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 365, CPyStatic_prepare___globals);
        goto CPyL38;
    }
CPyL7: ;
    cpy_r_r14 = CPyDict_NextItem(cpy_r_r13, cpy_r_r10);
    cpy_r_r15 = cpy_r_r14.f1;
    cpy_r_r10 = cpy_r_r15;
    cpy_r_r16 = cpy_r_r14.f0;
    if (!cpy_r_r16) goto CPyL39;
    cpy_r_r17 = cpy_r_r14.f2;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = cpy_r_r14.f3;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r14.f2);
    CPy_DECREF(cpy_r_r14.f3);
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r19 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 365, CPyStatic_prepare___globals, "str", cpy_r_r17);
        goto CPyL40;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_rtypes___RType)))
        cpy_r_r20 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 365, CPyStatic_prepare___globals, "mypyc.ir.rtypes.RType", cpy_r_r18);
        goto CPyL41;
    }
    cpy_r_name = cpy_r_r19;
    cpy_r_attr_rtype = cpy_r_r20;
    cpy_r_r21 = PySet_Add(cpy_r_concrete_attributes, cpy_r_name);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 366, CPyStatic_prepare___globals);
        goto CPyL42;
    }
    cpy_r_r23 = CPyDef_prepare___add_property_methods_for_attribute_if_needed(cpy_r_info, cpy_r_ir, cpy_r_name, cpy_r_attr_rtype, cpy_r_module_name, cpy_r_mapper);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_attr_rtype);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 367, CPyStatic_prepare___globals);
        goto CPyL43;
    }
    cpy_r_r24 = CPyDict_CheckSize(cpy_r_r9, cpy_r_r12);
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 365, CPyStatic_prepare___globals);
        goto CPyL43;
    } else
        goto CPyL7;
CPyL13: ;
    cpy_r_r25 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 365, CPyStatic_prepare___globals);
        goto CPyL37;
    }
    cpy_r_r26 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r26;
    goto CPyL3;
CPyL15: ;
    cpy_r_r27 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_mro;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", "ClassIR", "mro", 370, CPyStatic_prepare___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r27);
CPyL16: ;
    cpy_r_r28 = CPyList_GetSlice(cpy_r_r27, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 370, CPyStatic_prepare___globals);
        goto CPyL35;
    }
    if (likely(PyList_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 370, CPyStatic_prepare___globals, "list", cpy_r_r28);
        goto CPyL35;
    }
    cpy_r_r30 = 0;
CPyL19: ;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = (Py_ssize_t)cpy_r_r30 < (Py_ssize_t)cpy_r_r33;
    if (!cpy_r_r34) goto CPyL44;
    cpy_r_r35 = CPyList_GetItemUnsafe(cpy_r_r29, cpy_r_r30);
    if (likely(Py_TYPE(cpy_r_r35) == CPyType_class_ir___ClassIR))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 370, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r35);
        goto CPyL45;
    }
    cpy_r_base = cpy_r_r36;
    cpy_r_r37 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_is_trait;
    if (!cpy_r_r37) goto CPyL46;
CPyL22: ;
    cpy_r_r38 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_attributes;
    if (unlikely(cpy_r_r38 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'attributes' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r38);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 372, CPyStatic_prepare___globals);
        goto CPyL45;
    }
CPyL23: ;
    cpy_r_r39 = 0;
    cpy_r_r40 = PyDict_Size(cpy_r_r38);
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = CPyDict_GetItemsIter(cpy_r_r38);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 372, CPyStatic_prepare___globals);
        goto CPyL47;
    }
CPyL24: ;
    cpy_r_r43 = CPyDict_NextItem(cpy_r_r42, cpy_r_r39);
    cpy_r_r44 = cpy_r_r43.f1;
    cpy_r_r39 = cpy_r_r44;
    cpy_r_r45 = cpy_r_r43.f0;
    if (!cpy_r_r45) goto CPyL48;
    cpy_r_r46 = cpy_r_r43.f2;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = cpy_r_r43.f3;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r43.f2);
    CPy_DECREF(cpy_r_r43.f3);
    if (likely(PyUnicode_Check(cpy_r_r46)))
        cpy_r_r48 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 372, CPyStatic_prepare___globals, "str", cpy_r_r46);
        goto CPyL49;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r47, CPyType_rtypes___RType)))
        cpy_r_r49 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 372, CPyStatic_prepare___globals, "mypyc.ir.rtypes.RType", cpy_r_r47);
        goto CPyL50;
    }
    cpy_r_name = cpy_r_r48;
    cpy_r_attr_rtype = cpy_r_r49;
    cpy_r_r50 = PySet_Contains(cpy_r_concrete_attributes, cpy_r_name);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 373, CPyStatic_prepare___globals);
        goto CPyL51;
    }
    cpy_r_r52 = cpy_r_r50;
    cpy_r_r53 = cpy_r_r52 ^ 1;
    if (!cpy_r_r53) goto CPyL52;
    cpy_r_r54 = CPyDef_prepare___add_property_methods_for_attribute_if_needed(cpy_r_info, cpy_r_ir, cpy_r_name, cpy_r_attr_rtype, cpy_r_module_name, cpy_r_mapper);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_attr_rtype);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 374, CPyStatic_prepare___globals);
        goto CPyL53;
    }
CPyL30: ;
    cpy_r_r55 = CPyDict_CheckSize(cpy_r_r38, cpy_r_r41);
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 372, CPyStatic_prepare___globals);
        goto CPyL53;
    } else
        goto CPyL24;
CPyL31: ;
    cpy_r_r56 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 372, CPyStatic_prepare___globals);
        goto CPyL45;
    }
CPyL32: ;
    cpy_r_r57 = cpy_r_r30 + 2;
    cpy_r_r30 = cpy_r_r57;
    goto CPyL19;
CPyL33: ;
    return 1;
CPyL34: ;
    cpy_r_r58 = 2;
    return cpy_r_r58;
CPyL35: ;
    CPy_DecRef(cpy_r_concrete_attributes);
    goto CPyL34;
CPyL36: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL15;
CPyL37: ;
    CPy_DecRef(cpy_r_concrete_attributes);
    CPy_DecRef(cpy_r_r1);
    goto CPyL34;
CPyL38: ;
    CPy_DecRef(cpy_r_concrete_attributes);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r9);
    goto CPyL34;
CPyL39: ;
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14.f2);
    CPy_DECREF(cpy_r_r14.f3);
    goto CPyL13;
CPyL40: ;
    CPy_DecRef(cpy_r_concrete_attributes);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r18);
    goto CPyL34;
CPyL41: ;
    CPy_DecRef(cpy_r_concrete_attributes);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r19);
    goto CPyL34;
CPyL42: ;
    CPy_DecRef(cpy_r_concrete_attributes);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_attr_rtype);
    goto CPyL34;
CPyL43: ;
    CPy_DecRef(cpy_r_concrete_attributes);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r13);
    goto CPyL34;
CPyL44: ;
    CPy_DECREF(cpy_r_concrete_attributes);
    CPy_DECREF(cpy_r_r29);
    goto CPyL33;
CPyL45: ;
    CPy_DecRef(cpy_r_concrete_attributes);
    CPy_DecRef(cpy_r_r29);
    goto CPyL34;
CPyL46: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL32;
CPyL47: ;
    CPy_DecRef(cpy_r_concrete_attributes);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r38);
    goto CPyL34;
CPyL48: ;
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r43.f2);
    CPy_DECREF(cpy_r_r43.f3);
    goto CPyL31;
CPyL49: ;
    CPy_DecRef(cpy_r_concrete_attributes);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r47);
    goto CPyL34;
CPyL50: ;
    CPy_DecRef(cpy_r_concrete_attributes);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r48);
    goto CPyL34;
CPyL51: ;
    CPy_DecRef(cpy_r_concrete_attributes);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_attr_rtype);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    goto CPyL34;
CPyL52: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_attr_rtype);
    goto CPyL30;
CPyL53: ;
    CPy_DecRef(cpy_r_concrete_attributes);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    goto CPyL34;
}

PyObject *CPyPy_prepare___prepare_implicit_property_accessors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", "ir", "module_name", "mapper", 0};
    static CPyArg_Parser parser = {"OOOO:prepare_implicit_property_accessors", kwlist, 0};
    PyObject *obj_info;
    PyObject *obj_ir;
    PyObject *obj_module_name;
    PyObject *obj_mapper;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_info, &obj_ir, &obj_module_name, &obj_mapper)) {
        return NULL;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    char retval = CPyDef_prepare___prepare_implicit_property_accessors(arg_info, arg_ir, arg_module_name, arg_mapper);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_implicit_property_accessors", 360, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___add_property_methods_for_attribute_if_needed(PyObject *cpy_r_info, PyObject *cpy_r_ir, PyObject *cpy_r_attr_name, PyObject *cpy_r_attr_rtype, PyObject *cpy_r_module_name, PyObject *cpy_r_mapper) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_base_ir;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_n;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    cpy_r_r0 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", "TypeInfo", "mro", 391, CPyStatic_prepare___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyList_GetSlice(cpy_r_r0, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 391, CPyStatic_prepare___globals);
        goto CPyL34;
    }
    if (likely(PyList_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 391, CPyStatic_prepare___globals, "list", cpy_r_r1);
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
    if (likely((Py_TYPE(cpy_r_r8) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r8) == CPyType_nodes___TypeInfo)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 391, CPyStatic_prepare___globals, "mypy.nodes.TypeInfo", cpy_r_r8);
        goto CPyL36;
    }
    cpy_r_base = cpy_r_r9;
    cpy_r_r10 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = PyDict_Contains(cpy_r_r10, cpy_r_base);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 392, CPyStatic_prepare___globals);
        goto CPyL37;
    }
    cpy_r_r13 = cpy_r_r11;
    if (!cpy_r_r13) goto CPyL38;
    cpy_r_r14 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyDict_GetItem(cpy_r_r14, cpy_r_base);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 393, CPyStatic_prepare___globals);
        goto CPyL37;
    }
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_class_ir___ClassIR))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 393, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r15);
        goto CPyL37;
    }
    cpy_r_base_ir = cpy_r_r16;
    cpy_r_r17 = ((mypy___nodes___TypeInfoObject *)cpy_r_base)->_names;
    if (unlikely(cpy_r_r17 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r17);
    }
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 394, CPyStatic_prepare___globals);
        goto CPyL39;
    }
CPyL11: ;
    cpy_r_r18 = CPyDict_GetWithNone(cpy_r_r17, cpy_r_attr_name);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 394, CPyStatic_prepare___globals);
        goto CPyL39;
    }
    if (Py_TYPE(cpy_r_r18) == CPyType_nodes___SymbolTableNode)
        cpy_r_r19 = cpy_r_r18;
    else {
        cpy_r_r19 = NULL;
    }
    if (cpy_r_r19 != NULL) goto __LL10436;
    if (cpy_r_r18 == Py_None)
        cpy_r_r19 = cpy_r_r18;
    else {
        cpy_r_r19 = NULL;
    }
    if (cpy_r_r19 != NULL) goto __LL10436;
    CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 394, CPyStatic_prepare___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r18);
    goto CPyL39;
__LL10436: ;
    cpy_r_n = cpy_r_r19;
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_n == cpy_r_r20;
    if (cpy_r_r21) goto CPyL40;
    if (likely(cpy_r_n != Py_None))
        cpy_r_r22 = cpy_r_n;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 397, CPyStatic_prepare___globals, "mypy.nodes.SymbolTableNode", cpy_r_n);
        goto CPyL41;
    }
    cpy_r_r23 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r22)->_node;
    CPy_INCREF(cpy_r_r23);
    CPy_DECREF(cpy_r_n);
    cpy_r_node = cpy_r_r23;
    cpy_r_r24 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL22;
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r28 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 398, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL42;
    }
    cpy_r_r29 = CPY_GET_ATTR(cpy_r_r28, CPyType_nodes___Decorator, 6, mypy___nodes___DecoratorObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 398, CPyStatic_prepare___globals);
        goto CPyL42;
    }
CPyL18: ;
    cpy_r_r30 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", "ClassIR", "method_decls", 398, CPyStatic_prepare___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r30);
CPyL19: ;
    cpy_r_r31 = PyDict_Contains(cpy_r_r30, cpy_r_r29);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 398, CPyStatic_prepare___globals);
        goto CPyL42;
    }
    cpy_r_r33 = cpy_r_r31;
    cpy_r_r34 = cpy_r_r33 ^ 1;
    if (cpy_r_r34) {
        goto CPyL44;
    } else
        goto CPyL22;
CPyL21: ;
    cpy_r_r35 = CPyDef_prepare___add_getter_declaration(cpy_r_ir, cpy_r_attr_name, cpy_r_attr_rtype, cpy_r_module_name);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 400, CPyStatic_prepare___globals);
        goto CPyL36;
    } else
        goto CPyL32;
CPyL22: ;
    cpy_r_r36 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    if (!cpy_r_r39) goto CPyL45;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r40 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 401, CPyStatic_prepare___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_node);
        goto CPyL39;
    }
    cpy_r_r41 = CPyDef_prepare___is_valid_multipart_property_def(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 401, CPyStatic_prepare___globals);
        goto CPyL39;
    }
    if (cpy_r_r41) {
        goto CPyL46;
    } else
        goto CPyL28;
CPyL26: ;
    cpy_r_r42 = CPyDef_prepare___add_getter_declaration(cpy_r_ir, cpy_r_attr_name, cpy_r_attr_rtype, cpy_r_module_name);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 403, CPyStatic_prepare___globals);
        goto CPyL36;
    }
    cpy_r_r43 = CPyDef_prepare___add_setter_declaration(cpy_r_ir, cpy_r_attr_name, cpy_r_attr_rtype, cpy_r_module_name);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 404, CPyStatic_prepare___globals);
        goto CPyL36;
    } else
        goto CPyL32;
CPyL28: ;
    cpy_r_r44 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base_ir)->_is_trait;
    CPy_DECREF(cpy_r_base_ir);
    if (!cpy_r_r44) goto CPyL32;
CPyL29: ;
    cpy_r_r45 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_attr_rtype)->_error_overlap;
    if (!cpy_r_r45) goto CPyL32;
CPyL30: ;
    cpy_r_r46 = CPyDef_prepare___add_getter_declaration(cpy_r_ir, cpy_r_attr_name, cpy_r_attr_rtype, cpy_r_module_name);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 406, CPyStatic_prepare___globals);
        goto CPyL36;
    }
    cpy_r_r47 = CPyDef_prepare___add_setter_declaration(cpy_r_ir, cpy_r_attr_name, cpy_r_attr_rtype, cpy_r_module_name);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 407, CPyStatic_prepare___globals);
        goto CPyL36;
    }
CPyL32: ;
    cpy_r_r48 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r48;
    goto CPyL4;
CPyL33: ;
    return 1;
CPyL34: ;
    cpy_r_r49 = 2;
    return cpy_r_r49;
CPyL35: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL33;
CPyL36: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL34;
CPyL37: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_base);
    goto CPyL34;
CPyL38: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL32;
CPyL39: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_base_ir);
    goto CPyL34;
CPyL40: ;
    CPy_DECREF(cpy_r_base_ir);
    CPy_DECREF(cpy_r_n);
    goto CPyL32;
CPyL41: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_base_ir);
    CPy_DecRef(cpy_r_n);
    goto CPyL34;
CPyL42: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_base_ir);
    CPy_DecRef(cpy_r_node);
    goto CPyL34;
CPyL43: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_base_ir);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r29);
    goto CPyL34;
CPyL44: ;
    CPy_DECREF(cpy_r_base_ir);
    CPy_DECREF(cpy_r_node);
    goto CPyL21;
CPyL45: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL28;
CPyL46: ;
    CPy_DECREF(cpy_r_base_ir);
    goto CPyL26;
}

PyObject *CPyPy_prepare___add_property_methods_for_attribute_if_needed(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", "ir", "attr_name", "attr_rtype", "module_name", "mapper", 0};
    static CPyArg_Parser parser = {"OOOOOO:add_property_methods_for_attribute_if_needed", kwlist, 0};
    PyObject *obj_info;
    PyObject *obj_ir;
    PyObject *obj_attr_name;
    PyObject *obj_attr_rtype;
    PyObject *obj_module_name;
    PyObject *obj_mapper;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_info, &obj_ir, &obj_attr_name, &obj_attr_rtype, &obj_module_name, &obj_mapper)) {
        return NULL;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    PyObject *arg_attr_name;
    if (likely(PyUnicode_Check(obj_attr_name)))
        arg_attr_name = obj_attr_name;
    else {
        CPy_TypeError("str", obj_attr_name); 
        goto fail;
    }
    PyObject *arg_attr_rtype;
    if (likely(PyObject_TypeCheck(obj_attr_rtype, CPyType_rtypes___RType)))
        arg_attr_rtype = obj_attr_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_attr_rtype); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    char retval = CPyDef_prepare___add_property_methods_for_attribute_if_needed(arg_info, arg_ir, arg_attr_name, arg_attr_rtype, arg_module_name, arg_mapper);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_property_methods_for_attribute_if_needed", 379, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___add_getter_declaration(PyObject *cpy_r_ir, PyObject *cpy_r_attr_name, PyObject *cpy_r_attr_rtype, PyObject *cpy_r_module_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_self_arg;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_sig;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_decl;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = CPyStatics[729]; /* 'self' */
    cpy_r_r1 = CPyDef_rtypes___RInstance(cpy_r_ir);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_getter_declaration", 413, CPyStatic_prepare___globals);
        goto CPyL10;
    }
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPyDef_func_ir___RuntimeArg(cpy_r_r0, cpy_r_r1, cpy_r_r2, 1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_getter_declaration", 413, CPyStatic_prepare___globals);
        goto CPyL10;
    }
    cpy_r_self_arg = cpy_r_r3;
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_getter_declaration", 414, CPyStatic_prepare___globals);
        goto CPyL11;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    *(PyObject * *)cpy_r_r6 = cpy_r_self_arg;
    cpy_r_r7 = CPyDef_func_ir___FuncSignature(cpy_r_r4, cpy_r_attr_rtype);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_getter_declaration", 414, CPyStatic_prepare___globals);
        goto CPyL10;
    }
    cpy_r_sig = cpy_r_r7;
    cpy_r_r8 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_name;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = 2;
    cpy_r_r10 = 2;
    cpy_r_r11 = 2;
    cpy_r_r12 = CPyDef_func_ir___FuncDecl(cpy_r_attr_name, cpy_r_r8, cpy_r_module_name, cpy_r_sig, 0, cpy_r_r9, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_sig);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_getter_declaration", 415, CPyStatic_prepare___globals);
        goto CPyL10;
    }
    cpy_r_decl = cpy_r_r12;
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_is_prop_getter = 1;
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_implicit = 1;
    cpy_r_r15 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "add_getter_declaration", "ClassIR", "method_decls", 418, CPyStatic_prepare___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r15);
CPyL6: ;
    cpy_r_r16 = CPyDict_SetItem(cpy_r_r15, cpy_r_attr_name, cpy_r_decl);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_decl);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_getter_declaration", 418, CPyStatic_prepare___globals);
        goto CPyL10;
    }
    cpy_r_r18 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_property_types;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "add_getter_declaration", "ClassIR", "property_types", 419, CPyStatic_prepare___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r18);
CPyL8: ;
    cpy_r_r19 = CPyDict_SetItem(cpy_r_r18, cpy_r_attr_name, cpy_r_attr_rtype);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_getter_declaration", 419, CPyStatic_prepare___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL11: ;
    CPy_DecRef(cpy_r_self_arg);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_decl);
    goto CPyL10;
}

PyObject *CPyPy_prepare___add_getter_declaration(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ir", "attr_name", "attr_rtype", "module_name", 0};
    static CPyArg_Parser parser = {"OOOO:add_getter_declaration", kwlist, 0};
    PyObject *obj_ir;
    PyObject *obj_attr_name;
    PyObject *obj_attr_rtype;
    PyObject *obj_module_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ir, &obj_attr_name, &obj_attr_rtype, &obj_module_name)) {
        return NULL;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    PyObject *arg_attr_name;
    if (likely(PyUnicode_Check(obj_attr_name)))
        arg_attr_name = obj_attr_name;
    else {
        CPy_TypeError("str", obj_attr_name); 
        goto fail;
    }
    PyObject *arg_attr_rtype;
    if (likely(PyObject_TypeCheck(obj_attr_rtype, CPyType_rtypes___RType)))
        arg_attr_rtype = obj_attr_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_attr_rtype); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    char retval = CPyDef_prepare___add_getter_declaration(arg_ir, arg_attr_name, arg_attr_rtype, arg_module_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_getter_declaration", 410, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___add_setter_declaration(PyObject *cpy_r_ir, PyObject *cpy_r_attr_name, PyObject *cpy_r_attr_rtype, PyObject *cpy_r_module_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_self_arg;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_value_arg;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_sig;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_setter_name;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_decl;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = CPyStatics[729]; /* 'self' */
    cpy_r_r1 = CPyDef_rtypes___RInstance(cpy_r_ir);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_setter_declaration", 425, CPyStatic_prepare___globals);
        goto CPyL13;
    }
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPyDef_func_ir___RuntimeArg(cpy_r_r0, cpy_r_r1, cpy_r_r2, 1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_setter_declaration", 425, CPyStatic_prepare___globals);
        goto CPyL13;
    }
    cpy_r_self_arg = cpy_r_r3;
    cpy_r_r4 = CPyStatics[2242]; /* 'value' */
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_func_ir___RuntimeArg(cpy_r_r4, cpy_r_attr_rtype, cpy_r_r5, 1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_setter_declaration", 426, CPyStatic_prepare___globals);
        goto CPyL14;
    }
    cpy_r_value_arg = cpy_r_r6;
    cpy_r_r7 = PyList_New(2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_setter_declaration", 427, CPyStatic_prepare___globals);
        goto CPyL15;
    }
    cpy_r_r8 = (CPyPtr)&((PyListObject *)cpy_r_r7)->ob_item;
    cpy_r_r9 = *(CPyPtr *)cpy_r_r8;
    *(PyObject * *)cpy_r_r9 = cpy_r_self_arg;
    cpy_r_r10 = cpy_r_r9 + 8;
    *(PyObject * *)cpy_r_r10 = cpy_r_value_arg;
    cpy_r_r11 = CPyStatic_rtypes___none_rprimitive;
    if (unlikely(cpy_r_r11 == NULL)) {
        goto CPyL16;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"none_rprimitive\" was not set");
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_setter_declaration", 427, CPyStatic_prepare___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r13 = CPyDef_func_ir___FuncSignature(cpy_r_r7, cpy_r_r11);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_setter_declaration", 427, CPyStatic_prepare___globals);
        goto CPyL13;
    }
    cpy_r_sig = cpy_r_r13;
    cpy_r_r14 = CPyStatics[7714]; /* '__mypyc_setter__' */
    cpy_r_r15 = PyUnicode_Concat(cpy_r_r14, cpy_r_attr_name);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_setter_declaration", 428, CPyStatic_prepare___globals);
        goto CPyL17;
    }
    cpy_r_setter_name = cpy_r_r15;
    cpy_r_r16 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_name;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = 2;
    cpy_r_r18 = 2;
    cpy_r_r19 = 2;
    cpy_r_r20 = CPyDef_func_ir___FuncDecl(cpy_r_setter_name, cpy_r_r16, cpy_r_module_name, cpy_r_sig, 0, cpy_r_r17, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_sig);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_setter_declaration", 429, CPyStatic_prepare___globals);
        goto CPyL18;
    }
    cpy_r_decl = cpy_r_r20;
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_is_prop_setter = 1;
    ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_implicit = 1;
    cpy_r_r23 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_method_decls;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "add_setter_declaration", "ClassIR", "method_decls", 432, CPyStatic_prepare___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r23);
CPyL11: ;
    cpy_r_r24 = CPyDict_SetItem(cpy_r_r23, cpy_r_setter_name, cpy_r_decl);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_setter_name);
    CPy_DECREF(cpy_r_decl);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_setter_declaration", 432, CPyStatic_prepare___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL14: ;
    CPy_DecRef(cpy_r_self_arg);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_self_arg);
    CPy_DecRef(cpy_r_value_arg);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL5;
CPyL17: ;
    CPy_DecRef(cpy_r_sig);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_setter_name);
    goto CPyL13;
CPyL19: ;
    CPy_DecRef(cpy_r_setter_name);
    CPy_DecRef(cpy_r_decl);
    goto CPyL13;
}

PyObject *CPyPy_prepare___add_setter_declaration(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ir", "attr_name", "attr_rtype", "module_name", 0};
    static CPyArg_Parser parser = {"OOOO:add_setter_declaration", kwlist, 0};
    PyObject *obj_ir;
    PyObject *obj_attr_name;
    PyObject *obj_attr_rtype;
    PyObject *obj_module_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ir, &obj_attr_name, &obj_attr_rtype, &obj_module_name)) {
        return NULL;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    PyObject *arg_attr_name;
    if (likely(PyUnicode_Check(obj_attr_name)))
        arg_attr_name = obj_attr_name;
    else {
        CPy_TypeError("str", obj_attr_name); 
        goto fail;
    }
    PyObject *arg_attr_rtype;
    if (likely(PyObject_TypeCheck(obj_attr_rtype, CPyType_rtypes___RType)))
        arg_attr_rtype = obj_attr_rtype;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_attr_rtype); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    char retval = CPyDef_prepare___add_setter_declaration(arg_ir, arg_attr_name, arg_attr_rtype, arg_module_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "add_setter_declaration", 422, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___prepare_init_method(PyObject *cpy_r_cdef, PyObject *cpy_r_ir, PyObject *cpy_r_module_name, PyObject *cpy_r_mapper) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_init_node;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_init_sig;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_defining_ir;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    CPyPtr cpy_r_r58;
    CPyPtr cpy_r_r59;
    CPyPtr cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
    int64_t cpy_r_r65;
    CPyTagged cpy_r_r66;
    CPyTagged cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyTagged cpy_r_last_arg;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_ctor_sig;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[288]; /* '__init__' */
    cpy_r_r2 = CPyDef_nodes___TypeInfo_____getitem__(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 437, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    cpy_r_r3 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r2)->_node;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_init_node = cpy_r_r3;
    cpy_r_r4 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_trait;
    if (cpy_r_r4) goto CPyL51;
CPyL2: ;
    cpy_r_r5 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_builtin_base;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 != cpy_r_r6;
    if (!cpy_r_r7) goto CPyL52;
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r8 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 438, CPyStatic_prepare___globals, "str", cpy_r_r5);
        goto CPyL53;
    }
    cpy_r_r9 = CPyStr_IsTrue(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (cpy_r_r9) goto CPyL51;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_init_node)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL51;
    CPy_INCREF(cpy_r_init_node);
    if (likely(Py_TYPE(cpy_r_init_node) == CPyType_nodes___FuncDef))
        cpy_r_r14 = cpy_r_init_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 439, CPyStatic_prepare___globals, "mypy.nodes.FuncDef", cpy_r_init_node);
        goto CPyL53;
    }
    cpy_r_r15 = CPyDef_mapper___Mapper___fdef_to_sig(cpy_r_mapper, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 439, CPyStatic_prepare___globals);
        goto CPyL53;
    }
    cpy_r_init_sig = cpy_r_r15;
    cpy_r_r16 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r16);
    if (likely(Py_TYPE(cpy_r_init_node) == CPyType_nodes___FuncDef))
        cpy_r_r17 = cpy_r_init_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 441, CPyStatic_prepare___globals, "mypy.nodes.FuncDef", cpy_r_init_node);
        goto CPyL54;
    }
    cpy_r_r18 = ((mypy___nodes___FuncDefObject *)cpy_r_r17)->_info;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDict_GetWithNone(cpy_r_r16, cpy_r_r18);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 441, CPyStatic_prepare___globals);
        goto CPyL55;
    }
    if (Py_TYPE(cpy_r_r19) == CPyType_class_ir___ClassIR)
        cpy_r_r20 = cpy_r_r19;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL10437;
    if (cpy_r_r19 == Py_None)
        cpy_r_r20 = cpy_r_r19;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL10437;
    CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 441, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR or None", cpy_r_r19);
    goto CPyL55;
__LL10437: ;
    cpy_r_defining_ir = cpy_r_r20;
    cpy_r_r21 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r22 = cpy_r_defining_ir == cpy_r_r21;
    if (cpy_r_r22) goto CPyL56;
    if (likely(cpy_r_defining_ir != Py_None))
        cpy_r_r23 = cpy_r_defining_ir;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 447, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_defining_ir);
        goto CPyL57;
    }
    cpy_r_r24 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r23)->_is_ext_class;
    CPy_DECREF(cpy_r_defining_ir);
    if (!cpy_r_r24) goto CPyL16;
CPyL14: ;
    cpy_r_r25 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[288]; /* '__init__' */
    cpy_r_r27 = CPyDef_nodes___TypeInfo_____getitem__(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 448, CPyStatic_prepare___globals);
        goto CPyL55;
    }
    cpy_r_r28 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r27)->_plugin_generated;
    CPy_DECREF(cpy_r_r27);
    if (!cpy_r_r28) goto CPyL58;
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_init_node) == CPyType_nodes___FuncDef))
        cpy_r_r29 = cpy_r_init_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 449, CPyStatic_prepare___globals, "mypy.nodes.FuncDef", cpy_r_init_node);
        goto CPyL55;
    }
    cpy_r_r30 = ((mypy___nodes___FuncDefObject *)cpy_r_r29)->_info;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_init_node);
    cpy_r_r31 = CPY_GET_ATTR(cpy_r_r30, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 449, CPyStatic_prepare___globals);
        goto CPyL59;
    }
CPyL18: ;
    cpy_r_r32 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r33 = PyUnicode_Compare(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r34 = cpy_r_r33 == -1;
    if (!cpy_r_r34) goto CPyL21;
    cpy_r_r35 = PyErr_Occurred();
    cpy_r_r36 = cpy_r_r35 != NULL;
    if (!cpy_r_r36) goto CPyL21;
    cpy_r_r37 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 449, CPyStatic_prepare___globals);
        goto CPyL59;
    }
CPyL21: ;
    cpy_r_r38 = cpy_r_r33 != 0;
    if (!cpy_r_r38) goto CPyL41;
    cpy_r_r39 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_init_sig)->_args;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = CPySequenceTuple_GetItem(cpy_r_r39, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 452, CPyStatic_prepare___globals);
        goto CPyL59;
    }
    if (likely(Py_TYPE(cpy_r_r40) == CPyType_func_ir___RuntimeArg))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 452, CPyStatic_prepare___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r40);
        goto CPyL59;
    }
    cpy_r_r42 = CPyStatics[1678]; /* 'args' */
    cpy_r_r43 = CPyStatic_rtypes___tuple_rprimitive;
    if (unlikely(cpy_r_r43 == NULL)) {
        goto CPyL60;
    } else
        goto CPyL27;
CPyL25: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"tuple_rprimitive\" was not set");
    cpy_r_r44 = 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 453, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r45 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r45 == NULL)) {
        goto CPyL61;
    } else
        goto CPyL30;
CPyL28: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 453, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r47 = 2;
    cpy_r_r48 = CPyDef_func_ir___RuntimeArg(cpy_r_r42, cpy_r_r43, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 453, CPyStatic_prepare___globals);
        goto CPyL62;
    }
    cpy_r_r49 = CPyStatics[5036]; /* 'kwargs' */
    cpy_r_r50 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r50 == NULL)) {
        goto CPyL63;
    } else
        goto CPyL34;
CPyL32: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 454, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r52 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r52 == NULL)) {
        goto CPyL64;
    } else
        goto CPyL37;
CPyL35: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r53 = 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 454, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r54 = 2;
    cpy_r_r55 = CPyDef_func_ir___RuntimeArg(cpy_r_r49, cpy_r_r50, cpy_r_r52, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 454, CPyStatic_prepare___globals);
        goto CPyL65;
    }
    cpy_r_r56 = PyList_New(3);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 451, CPyStatic_prepare___globals);
        goto CPyL66;
    }
    cpy_r_r57 = (CPyPtr)&((PyListObject *)cpy_r_r56)->ob_item;
    cpy_r_r58 = *(CPyPtr *)cpy_r_r57;
    *(PyObject * *)cpy_r_r58 = cpy_r_r41;
    cpy_r_r59 = cpy_r_r58 + 8;
    *(PyObject * *)cpy_r_r59 = cpy_r_r48;
    cpy_r_r60 = cpy_r_r58 + 16;
    *(PyObject * *)cpy_r_r60 = cpy_r_r55;
    cpy_r_r61 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_init_sig)->_ret_type;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_init_sig);
    cpy_r_r62 = CPyDef_func_ir___FuncSignature(cpy_r_r56, cpy_r_r61);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 450, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    cpy_r_init_sig = cpy_r_r62;
CPyL41: ;
    cpy_r_r63 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_init_sig)->_args;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = (CPyPtr)&((PyVarObject *)cpy_r_r63)->ob_size;
    cpy_r_r65 = *(int64_t *)cpy_r_r64;
    CPy_DECREF(cpy_r_r63);
    cpy_r_r66 = cpy_r_r65 << 1;
    cpy_r_r67 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_init_sig)->_num_bitmap_args;
    cpy_r_r68 = CPyTagged_Subtract(cpy_r_r66, cpy_r_r67);
    cpy_r_last_arg = cpy_r_r68;
    cpy_r_r69 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_init_sig)->_args;
    CPy_INCREF(cpy_r_r69);
    CPy_DECREF(cpy_r_init_sig);
    cpy_r_r70 = CPySequenceTuple_GetSlice(cpy_r_r69, 2, cpy_r_last_arg);
    CPy_DECREF(cpy_r_r69);
    CPyTagged_DECREF(cpy_r_last_arg);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 460, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    if (likely(PyTuple_Check(cpy_r_r70)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 460, CPyStatic_prepare___globals, "tuple", cpy_r_r70);
        goto CPyL50;
    }
    cpy_r_r72 = CPyDef_rtypes___RInstance(cpy_r_ir);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 460, CPyStatic_prepare___globals);
        goto CPyL67;
    }
    cpy_r_r73 = CPyDef_func_ir___FuncSignature(cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 460, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    cpy_r_ctor_sig = cpy_r_r73;
    cpy_r_r74 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_name;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = Py_None;
    cpy_r_r76 = CPY_INT_TAG;
    cpy_r_r77 = 2;
    cpy_r_r78 = 2;
    cpy_r_r79 = 2;
    cpy_r_r80 = CPyDef_func_ir___FuncDecl(cpy_r_r74, cpy_r_r75, cpy_r_module_name, cpy_r_ctor_sig, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_ctor_sig);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 461, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_ctor != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_ctor);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_ctor = cpy_r_r80;
    cpy_r_r81 = 1;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 461, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    cpy_r_r82 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_ctor;
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "prepare_init_method", "ClassIR", "ctor", 462, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r82);
CPyL48: ;
    cpy_r_r83 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_func_to_decl;
    CPy_INCREF(cpy_r_r83);
    cpy_r_r84 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r84);
    cpy_r_r85 = CPyDict_SetItem(cpy_r_r83, cpy_r_r84, cpy_r_r82);
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 462, CPyStatic_prepare___globals);
        goto CPyL50;
    }
CPyL49: ;
    return 1;
CPyL50: ;
    cpy_r_r87 = 2;
    return cpy_r_r87;
CPyL51: ;
    CPy_DECREF(cpy_r_init_node);
    goto CPyL49;
CPyL52: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL5;
CPyL53: ;
    CPy_DecRef(cpy_r_init_node);
    goto CPyL50;
CPyL54: ;
    CPy_DecRef(cpy_r_init_node);
    CPy_DecRef(cpy_r_init_sig);
    CPy_DecRef(cpy_r_r16);
    goto CPyL50;
CPyL55: ;
    CPy_DecRef(cpy_r_init_node);
    CPy_DecRef(cpy_r_init_sig);
    goto CPyL50;
CPyL56: ;
    CPy_DECREF(cpy_r_defining_ir);
    goto CPyL16;
CPyL57: ;
    CPy_DecRef(cpy_r_init_node);
    CPy_DecRef(cpy_r_init_sig);
    CPy_DecRef(cpy_r_defining_ir);
    goto CPyL50;
CPyL58: ;
    CPy_DECREF(cpy_r_init_node);
    goto CPyL41;
CPyL59: ;
    CPy_DecRef(cpy_r_init_sig);
    goto CPyL50;
CPyL60: ;
    CPy_DecRef(cpy_r_init_sig);
    CPy_DecRef(cpy_r_r41);
    goto CPyL25;
CPyL61: ;
    CPy_DecRef(cpy_r_init_sig);
    CPy_DecRef(cpy_r_r41);
    goto CPyL28;
CPyL62: ;
    CPy_DecRef(cpy_r_init_sig);
    CPy_DecRef(cpy_r_r41);
    goto CPyL50;
CPyL63: ;
    CPy_DecRef(cpy_r_init_sig);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r48);
    goto CPyL32;
CPyL64: ;
    CPy_DecRef(cpy_r_init_sig);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r48);
    goto CPyL35;
CPyL65: ;
    CPy_DecRef(cpy_r_init_sig);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r48);
    goto CPyL50;
CPyL66: ;
    CPy_DecRef(cpy_r_init_sig);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r55);
    goto CPyL50;
CPyL67: ;
    CPy_DecRef(cpy_r_r71);
    goto CPyL50;
}

PyObject *CPyPy_prepare___prepare_init_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cdef", "ir", "module_name", "mapper", 0};
    static CPyArg_Parser parser = {"OOOO:prepare_init_method", kwlist, 0};
    PyObject *obj_cdef;
    PyObject *obj_ir;
    PyObject *obj_module_name;
    PyObject *obj_mapper;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cdef, &obj_ir, &obj_module_name, &obj_mapper)) {
        return NULL;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    char retval = CPyDef_prepare___prepare_init_method(arg_cdef, arg_ir, arg_module_name, arg_mapper);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_init_method", 435, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___prepare_non_ext_class_def(PyObject *cpy_r_path, PyObject *cpy_r_module_name, PyObject *cpy_r_cdef, PyObject *cpy_r_errors, PyObject *cpy_r_mapper) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_ir;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T4CIOO cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_name;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_item;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyPtr cpy_r_r65;
    int64_t cpy_r_r66;
    CPyTagged cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    cpy_r_r0 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 468, CPyStatic_prepare___globals);
        goto CPyL47;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_class_ir___ClassIR))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 468, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r2);
        goto CPyL47;
    }
    cpy_r_ir = cpy_r_r3;
    cpy_r_r4 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r4);
    cpy_r_info = cpy_r_r4;
    cpy_r_r5 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", "TypeInfo", "names", 471, CPyStatic_prepare___globals);
        goto CPyL48;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    cpy_r_r6 = 0;
    cpy_r_r7 = PyDict_Size(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = CPyDict_GetItemsIter(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 471, CPyStatic_prepare___globals);
        goto CPyL49;
    }
CPyL4: ;
    cpy_r_r10 = CPyDict_NextItem(cpy_r_r9, cpy_r_r6);
    cpy_r_r11 = cpy_r_r10.f1;
    cpy_r_r6 = cpy_r_r11;
    cpy_r_r12 = cpy_r_r10.f0;
    if (!cpy_r_r12) goto CPyL50;
    cpy_r_r13 = cpy_r_r10.f2;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = cpy_r_r10.f3;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r10.f2);
    CPy_DECREF(cpy_r_r10.f3);
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r15 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 471, CPyStatic_prepare___globals, "str", cpy_r_r13);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_nodes___SymbolTableNode))
        cpy_r_r16 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 471, CPyStatic_prepare___globals, "mypy.nodes.SymbolTableNode", cpy_r_r14);
        goto CPyL52;
    }
    cpy_r_name = cpy_r_r15;
    CPy_DECREF(cpy_r_name);
    cpy_r_node = cpy_r_r16;
    cpy_r_r17 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    cpy_r_r18 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_r17)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL9;
    cpy_r_r22 = cpy_r_r21;
    goto CPyL10;
CPyL9: ;
    cpy_r_r23 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r17)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    cpy_r_r22 = cpy_r_r26;
CPyL10: ;
    if (!cpy_r_r22) goto CPyL13;
    cpy_r_r27 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_node);
    if (Py_TYPE(cpy_r_r27) == CPyType_nodes___FuncDef)
        cpy_r_r28 = cpy_r_r27;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL10438;
    if (Py_TYPE(cpy_r_r27) == CPyType_nodes___Decorator)
        cpy_r_r28 = cpy_r_r27;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL10438;
    CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 473, CPyStatic_prepare___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r27);
    goto CPyL53;
__LL10438: ;
    cpy_r_r29 = CPyDef_prepare___prepare_method_def(cpy_r_ir, cpy_r_module_name, cpy_r_cdef, cpy_r_mapper, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 473, CPyStatic_prepare___globals);
        goto CPyL53;
    } else
        goto CPyL29;
CPyL13: ;
    cpy_r_r30 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    cpy_r_r31 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL54;
    cpy_r_r35 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely(Py_TYPE(cpy_r_r35) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 476, CPyStatic_prepare___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r35);
        goto CPyL55;
    }
    cpy_r_r37 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r36)->_is_property;
    if (!cpy_r_r37) goto CPyL26;
CPyL16: ;
    cpy_r_r38 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r38);
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 477, CPyStatic_prepare___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r38);
        goto CPyL55;
    }
    cpy_r_r40 = CPyDef_prepare___is_valid_multipart_property_def(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 477, CPyStatic_prepare___globals);
        goto CPyL55;
    }
    if (cpy_r_r40) goto CPyL20;
    cpy_r_r41 = CPyStatics[8520]; /* 'Unsupported property decorator semantics' */
    cpy_r_r42 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r42);
    cpy_r_r43 = CPyDef_mypyc___errors___Errors___error(cpy_r_errors, cpy_r_r41, cpy_r_path, cpy_r_r42);
    CPyTagged_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 478, CPyStatic_prepare___globals);
        goto CPyL55;
    }
CPyL20: ;
    cpy_r_r44 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    if (likely(Py_TYPE(cpy_r_r44) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 479, CPyStatic_prepare___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r44);
        goto CPyL55;
    }
    cpy_r_r46 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r45)->_items;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_node);
    cpy_r_r47 = 0;
CPyL22: ;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_r46)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r47 < (Py_ssize_t)cpy_r_r50;
    if (!cpy_r_r51) goto CPyL56;
    cpy_r_r52 = CPyList_GetItemUnsafe(cpy_r_r46, cpy_r_r47);
    if (Py_TYPE(cpy_r_r52) == CPyType_nodes___FuncDef)
        cpy_r_r53 = cpy_r_r52;
    else {
        cpy_r_r53 = NULL;
    }
    if (cpy_r_r53 != NULL) goto __LL10439;
    if (Py_TYPE(cpy_r_r52) == CPyType_nodes___Decorator)
        cpy_r_r53 = cpy_r_r52;
    else {
        cpy_r_r53 = NULL;
    }
    if (cpy_r_r53 != NULL) goto __LL10439;
    CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 479, CPyStatic_prepare___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r52);
    goto CPyL57;
__LL10439: ;
    cpy_r_item = cpy_r_r53;
    cpy_r_r54 = CPyDef_prepare___prepare_method_def(cpy_r_ir, cpy_r_module_name, cpy_r_cdef, cpy_r_mapper, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 480, CPyStatic_prepare___globals);
        goto CPyL57;
    }
    cpy_r_r55 = cpy_r_r47 + 2;
    cpy_r_r47 = cpy_r_r55;
    goto CPyL22;
CPyL26: ;
    cpy_r_r56 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r56);
    CPy_DECREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 483, CPyStatic_prepare___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r56);
        goto CPyL53;
    }
    cpy_r_r58 = CPyDef_irbuild___util___get_func_def(cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 483, CPyStatic_prepare___globals);
        goto CPyL53;
    }
    cpy_r_r59 = CPyDef_prepare___prepare_method_def(cpy_r_ir, cpy_r_module_name, cpy_r_cdef, cpy_r_mapper, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 483, CPyStatic_prepare___globals);
        goto CPyL53;
    }
CPyL29: ;
    cpy_r_r60 = CPyDict_CheckSize(cpy_r_r5, cpy_r_r8);
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 471, CPyStatic_prepare___globals);
        goto CPyL53;
    } else
        goto CPyL4;
CPyL30: ;
    cpy_r_r61 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 471, CPyStatic_prepare___globals);
        goto CPyL58;
    }
    cpy_r_r62 = 0;
    cpy_r_r63 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r63 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'mro' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r63);
    }
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 485, CPyStatic_prepare___globals);
        goto CPyL47;
    }
CPyL32: ;
    cpy_r_r64 = 0;
CPyL33: ;
    cpy_r_r65 = (CPyPtr)&((PyVarObject *)cpy_r_r63)->ob_size;
    cpy_r_r66 = *(int64_t *)cpy_r_r65;
    cpy_r_r67 = cpy_r_r66 << 1;
    cpy_r_r68 = (Py_ssize_t)cpy_r_r64 < (Py_ssize_t)cpy_r_r67;
    if (!cpy_r_r68) goto CPyL59;
    cpy_r_r69 = CPyList_GetItemUnsafe(cpy_r_r63, cpy_r_r64);
    if (likely((Py_TYPE(cpy_r_r69) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r69) == CPyType_nodes___TypeInfo)))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 485, CPyStatic_prepare___globals, "mypy.nodes.TypeInfo", cpy_r_r69);
        goto CPyL60;
    }
    cpy_r_cls = cpy_r_r70;
    cpy_r_r71 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r71);
    cpy_r_r72 = PyDict_Contains(cpy_r_r71, cpy_r_cls);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 485, CPyStatic_prepare___globals);
        goto CPyL61;
    }
    cpy_r_r74 = cpy_r_r72;
    if (cpy_r_r74) {
        goto CPyL38;
    } else
        goto CPyL62;
CPyL37: ;
    cpy_r_r75 = cpy_r_r74;
    goto CPyL41;
CPyL38: ;
    cpy_r_r76 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_mapper)->_type_to_ir;
    CPy_INCREF(cpy_r_r76);
    cpy_r_r77 = CPyDict_GetItem(cpy_r_r76, cpy_r_cls);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_cls);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 485, CPyStatic_prepare___globals);
        goto CPyL60;
    }
    if (likely(Py_TYPE(cpy_r_r77) == CPyType_class_ir___ClassIR))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 485, CPyStatic_prepare___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r77);
        goto CPyL60;
    }
    cpy_r_r79 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r78)->_is_ext_class;
    CPy_DECREF(cpy_r_r78);
    cpy_r_r75 = cpy_r_r79;
CPyL41: ;
    if (cpy_r_r75) {
        goto CPyL63;
    } else
        goto CPyL43;
CPyL42: ;
    cpy_r_r62 = 1;
    goto CPyL44;
CPyL43: ;
    cpy_r_r80 = cpy_r_r64 + 2;
    cpy_r_r64 = cpy_r_r80;
    goto CPyL33;
CPyL44: ;
    if (!cpy_r_r62) goto CPyL46;
    cpy_r_r81 = CPyStatics[8521]; /* ('Non-extension classes may not inherit from extension '
                                     'classes') */
    cpy_r_r82 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_line;
    CPyTagged_INCREF(cpy_r_r82);
    cpy_r_r83 = CPyDef_mypyc___errors___Errors___error(cpy_r_errors, cpy_r_r81, cpy_r_path, cpy_r_r82);
    CPyTagged_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 486, CPyStatic_prepare___globals);
        goto CPyL47;
    }
CPyL46: ;
    return 1;
CPyL47: ;
    cpy_r_r84 = 2;
    return cpy_r_r84;
CPyL48: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    goto CPyL47;
CPyL49: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r5);
    goto CPyL47;
CPyL50: ;
    CPy_DECREF(cpy_r_ir);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10.f2);
    CPy_DECREF(cpy_r_r10.f3);
    goto CPyL30;
CPyL51: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r14);
    goto CPyL47;
CPyL52: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r15);
    goto CPyL47;
CPyL53: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    goto CPyL47;
CPyL54: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL29;
CPyL55: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_node);
    goto CPyL47;
CPyL56: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL29;
CPyL57: ;
    CPy_DecRef(cpy_r_ir);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r46);
    goto CPyL47;
CPyL58: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL47;
CPyL59: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL44;
CPyL60: ;
    CPy_DecRef(cpy_r_r63);
    goto CPyL47;
CPyL61: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_cls);
    goto CPyL47;
CPyL62: ;
    CPy_DECREF(cpy_r_cls);
    goto CPyL37;
CPyL63: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL42;
}

PyObject *CPyPy_prepare___prepare_non_ext_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"path", "module_name", "cdef", "errors", "mapper", 0};
    static CPyArg_Parser parser = {"OOOOO:prepare_non_ext_class_def", kwlist, 0};
    PyObject *obj_path;
    PyObject *obj_module_name;
    PyObject *obj_cdef;
    PyObject *obj_errors;
    PyObject *obj_mapper;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_path, &obj_module_name, &obj_cdef, &obj_errors, &obj_mapper)) {
        return NULL;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypyc___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_errors); 
        goto fail;
    }
    PyObject *arg_mapper;
    if (likely(Py_TYPE(obj_mapper) == CPyType_mapper___Mapper))
        arg_mapper = obj_mapper;
    else {
        CPy_TypeError("mypyc.irbuild.mapper.Mapper", obj_mapper); 
        goto fail;
    }
    char retval = CPyDef_prepare___prepare_non_ext_class_def(arg_path, arg_module_name, arg_cdef, arg_errors, arg_mapper);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "prepare_non_ext_class_def", 465, CPyStatic_prepare___globals);
    return NULL;
}

PyObject *CPyDef_prepare___find_singledispatch_register_impls(PyObject *cpy_r_modules, PyObject *cpy_r_errors) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_visitor;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = CPyDef_prepare___SingledispatchVisitor(cpy_r_errors);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "find_singledispatch_register_impls", 502, CPyStatic_prepare___globals);
        goto CPyL13;
    }
    cpy_r_visitor = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL7;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_modules, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___MypyFile))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "find_singledispatch_register_impls", 503, CPyStatic_prepare___globals, "mypy.nodes.MypyFile", cpy_r_r6);
        goto CPyL14;
    }
    cpy_r_module = cpy_r_r7;
    cpy_r_r8 = ((mypy___nodes___MypyFileObject *)cpy_r_module)->_path;
    CPy_INCREF(cpy_r_r8);
    if (((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_visitor)->_current_path != NULL) {
        CPy_DECREF(((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_visitor)->_current_path);
    }
    ((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_visitor)->_current_path = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "find_singledispatch_register_impls", 504, CPyStatic_prepare___globals);
        goto CPyL15;
    }
    cpy_r_r10 = CPyDef_nodes___MypyFile___accept(cpy_r_module, cpy_r_visitor);
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "find_singledispatch_register_impls", 505, CPyStatic_prepare___globals);
        goto CPyL14;
    } else
        goto CPyL16;
CPyL6: ;
    cpy_r_r11 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r11;
    goto CPyL2;
CPyL7: ;
    cpy_r_r12 = ((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_visitor)->_singledispatch_impls;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "find_singledispatch_register_impls", "SingledispatchVisitor", "singledispatch_impls", 506, CPyStatic_prepare___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r12);
CPyL8: ;
    cpy_r_r13 = ((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_visitor)->_decorators_to_remove;
    if (unlikely(cpy_r_r13 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'decorators_to_remove' of 'SingledispatchVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r13);
    }
    CPy_DECREF(cpy_r_visitor);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "find_singledispatch_register_impls", 506, CPyStatic_prepare___globals);
        goto CPyL17;
    }
CPyL9: ;
    cpy_r_r14 = CPyStatic_prepare___globals;
    cpy_r_r15 = CPyStatics[8522]; /* 'SingledispatchInfo' */
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "find_singledispatch_register_impls", 506, CPyStatic_prepare___globals);
        goto CPyL18;
    }
    PyObject *cpy_r_r17[2] = {cpy_r_r12, cpy_r_r13};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 2, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "find_singledispatch_register_impls", 506, CPyStatic_prepare___globals);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    if (likely(PyTuple_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "find_singledispatch_register_impls", 506, CPyStatic_prepare___globals, "tuple", cpy_r_r19);
        goto CPyL13;
    }
    return cpy_r_r20;
CPyL13: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL14: ;
    CPy_DecRef(cpy_r_visitor);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_visitor);
    CPy_DecRef(cpy_r_module);
    goto CPyL13;
CPyL16: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL6;
CPyL17: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    goto CPyL13;
}

PyObject *CPyPy_prepare___find_singledispatch_register_impls(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"modules", "errors", 0};
    static CPyArg_Parser parser = {"OO:find_singledispatch_register_impls", kwlist, 0};
    PyObject *obj_modules;
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_modules, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_modules;
    if (likely(PyList_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("list", obj_modules); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypyc___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_errors); 
        goto fail;
    }
    PyObject *retval = CPyDef_prepare___find_singledispatch_register_impls(arg_modules, arg_errors);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "find_singledispatch_register_impls", 499, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___SingledispatchVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_errors) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor_____init__(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "__init__", 513, CPyStatic_prepare___globals);
        goto CPyL9;
    }
    cpy_r_r1 = (PyObject *)&PyList_Type;
    cpy_r_r2 = CPyStatic_prepare___globals;
    cpy_r_r3 = CPyStatics[73]; /* 'defaultdict' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "__init__", 516, CPyStatic_prepare___globals);
        goto CPyL9;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "__init__", 516, CPyStatic_prepare___globals);
        goto CPyL9;
    }
    if (likely(PyDict_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "__init__", 516, CPyStatic_prepare___globals, "dict", cpy_r_r7);
        goto CPyL9;
    }
    if (((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_self)->_singledispatch_impls != NULL) {
        CPy_DECREF(((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_self)->_singledispatch_impls);
    }
    ((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_self)->_singledispatch_impls = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "__init__", 516, CPyStatic_prepare___globals);
        goto CPyL9;
    }
    cpy_r_r10 = PyDict_New();
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "__init__", 519, CPyStatic_prepare___globals);
        goto CPyL9;
    }
    if (((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_self)->_decorators_to_remove != NULL) {
        CPy_DECREF(((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_self)->_decorators_to_remove);
    }
    ((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_self)->_decorators_to_remove = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "__init__", 519, CPyStatic_prepare___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_errors);
    if (((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_self)->_errors != NULL) {
        CPy_DECREF(((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_self)->_errors);
    }
    ((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_self)->_errors = cpy_r_errors;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "__init__", 521, CPyStatic_prepare___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}

PyObject *CPyPy_prepare___SingledispatchVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"errors", 0};
    PyObject *obj_errors;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prepare___SingledispatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prepare.SingledispatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypyc___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_errors); 
        goto fail;
    }
    char retval = CPyDef_prepare___SingledispatchVisitor_____init__(arg_self, arg_errors);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "__init__", 512, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___SingledispatchVisitor___visit_decorator(PyObject *cpy_r_self, PyObject *cpy_r_dec) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_decorators_to_store;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_decorators_to_remove;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_last_non_register;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_d;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_impl;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
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
    tuple_T2OO cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
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
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    cpy_r_r0 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_decorators;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (!cpy_r_r4) goto CPyL38;
    cpy_r_r5 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_decorators;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r7[1] = {cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 525, CPyStatic_prepare___globals);
        goto CPyL41;
    }
    CPy_DECREF(cpy_r_r5);
    if (likely(PyList_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 525, CPyStatic_prepare___globals, "list", cpy_r_r9);
        goto CPyL40;
    }
    cpy_r_decorators_to_store = cpy_r_r10;
    cpy_r_r11 = PyList_New(0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 526, CPyStatic_prepare___globals);
        goto CPyL42;
    }
    cpy_r_decorators_to_remove = cpy_r_r11;
    cpy_r_r12 = Py_None;
    CPy_INCREF(cpy_r_r12);
    cpy_r_last_non_register = cpy_r_r12;
    cpy_r_r13 = 0;
    cpy_r_i = 0;
    cpy_r_r14 = 0;
CPyL5: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_decorators_to_store)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL43;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_decorators_to_store, cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_nodes___Expression)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 530, CPyStatic_prepare___globals, "mypy.nodes.Expression", cpy_r_r19);
        goto CPyL44;
    }
    cpy_r_d = cpy_r_r20;
    cpy_r_r21 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_prepare___get_singledispatch_register_call_info(cpy_r_d, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 531, CPyStatic_prepare___globals);
        goto CPyL45;
    }
    cpy_r_impl = cpy_r_r22;
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_impl != cpy_r_r23;
    if (cpy_r_r24) {
        goto CPyL46;
    } else
        goto CPyL47;
CPyL9: ;
    cpy_r_r25 = ((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_self)->_singledispatch_impls;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "visit_decorator", "SingledispatchVisitor", "singledispatch_impls", 533, CPyStatic_prepare___globals);
        goto CPyL48;
    }
    CPy_INCREF(cpy_r_r25);
CPyL10: ;
    CPy_INCREF(cpy_r_impl);
    if (likely(cpy_r_impl != Py_None))
        cpy_r_r26 = cpy_r_impl;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 533, CPyStatic_prepare___globals, "tuple", cpy_r_impl);
        goto CPyL49;
    }
    cpy_r_r27 = CPySequenceTuple_GetItem(cpy_r_r26, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 533, CPyStatic_prepare___globals);
        goto CPyL49;
    }
    if (likely(Py_TYPE(cpy_r_r27) == CPyType_nodes___FuncDef))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 533, CPyStatic_prepare___globals, "mypy.nodes.FuncDef", cpy_r_r27);
        goto CPyL49;
    }
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r25, cpy_r_r28);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 533, CPyStatic_prepare___globals);
        goto CPyL48;
    }
    if (likely(PyList_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 533, CPyStatic_prepare___globals, "list", cpy_r_r29);
        goto CPyL48;
    }
    if (likely(cpy_r_impl != Py_None))
        cpy_r_r31 = cpy_r_impl;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 534, CPyStatic_prepare___globals, "tuple", cpy_r_impl);
        goto CPyL50;
    }
    cpy_r_r32 = CPySequenceTuple_GetItem(cpy_r_r31, 2);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 534, CPyStatic_prepare___globals);
        goto CPyL50;
    }
    if (likely((Py_TYPE(cpy_r_r32) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r32) == CPyType_nodes___TypeInfo)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 534, CPyStatic_prepare___globals, "mypy.nodes.TypeInfo", cpy_r_r32);
        goto CPyL50;
    }
    cpy_r_r34 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35.f0 = cpy_r_r33;
    cpy_r_r35.f1 = cpy_r_r34;
    CPy_INCREF(cpy_r_r35.f0);
    CPy_INCREF(cpy_r_r35.f1);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = PyTuple_New(2);
    if (unlikely(cpy_r_r36 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10440 = cpy_r_r35.f0;
    PyTuple_SET_ITEM(cpy_r_r36, 0, __tmp10440);
    PyObject *__tmp10441 = cpy_r_r35.f1;
    PyTuple_SET_ITEM(cpy_r_r36, 1, __tmp10441);
    cpy_r_r37 = PyList_Append(cpy_r_r30, cpy_r_r36);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 533, CPyStatic_prepare___globals);
        goto CPyL44;
    }
    cpy_r_r39 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r40 = PyList_Append(cpy_r_decorators_to_remove, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 536, CPyStatic_prepare___globals);
        goto CPyL51;
    }
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_last_non_register != cpy_r_r42;
    if (!cpy_r_r43) goto CPyL34;
    cpy_r_r44 = ((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_self)->_errors;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "visit_decorator", "SingledispatchVisitor", "errors", 542, CPyStatic_prepare___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r44);
CPyL22: ;
    cpy_r_r45 = CPyStatics[8523]; /* ('Calling decorator after registering function not '
                                     'supported') */
    cpy_r_r46 = ((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_self)->_current_path;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "visit_decorator", "SingledispatchVisitor", "current_path", 544, CPyStatic_prepare___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r46);
CPyL23: ;
    if (likely(PyLong_Check(cpy_r_last_non_register)))
        cpy_r_r47 = CPyTagged_FromObject(cpy_r_last_non_register);
    else {
        CPy_TypeError("int", cpy_r_last_non_register); cpy_r_r47 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r47 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 545, CPyStatic_prepare___globals);
        goto CPyL53;
    }
    cpy_r_r48 = CPyList_GetItemBorrow(cpy_r_decorators_to_store, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 545, CPyStatic_prepare___globals);
        goto CPyL54;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r48, CPyType_nodes___Expression)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 545, CPyStatic_prepare___globals, "mypy.nodes.Expression", cpy_r_r48);
        goto CPyL54;
    }
    cpy_r_r50 = ((mypy___nodes___ContextObject *)cpy_r_r49)->_line;
    if (unlikely(cpy_r_r50 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "visit_decorator", "Expression", "line", 545, CPyStatic_prepare___globals);
        goto CPyL54;
    }
    CPyTagged_INCREF(cpy_r_r50);
CPyL27: ;
    CPyTagged_DECREF(cpy_r_r47);
    cpy_r_r51 = CPyDef_mypyc___errors___Errors___error(cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r50);
    CPy_DECREF(cpy_r_r46);
    CPyTagged_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 542, CPyStatic_prepare___globals);
        goto CPyL51;
    } else
        goto CPyL34;
CPyL28: ;
    cpy_r_r52 = CPyStatics[4550]; /* 'functools.singledispatch' */
    cpy_r_r53 = CPyDef_semanal___refers_to_fullname(cpy_r_d, cpy_r_r52);
    CPy_DECREF(cpy_r_d);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 548, CPyStatic_prepare___globals);
        goto CPyL55;
    }
    if (!cpy_r_r53) goto CPyL33;
    CPyTagged_INCREF(cpy_r_i);
    cpy_r_r54 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r55 = PyList_Append(cpy_r_decorators_to_remove, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 549, CPyStatic_prepare___globals);
        goto CPyL55;
    }
    cpy_r_r57 = ((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_self)->_singledispatch_impls;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "visit_decorator", "SingledispatchVisitor", "singledispatch_impls", 553, CPyStatic_prepare___globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r57);
CPyL32: ;
    cpy_r_r58 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r57, cpy_r_r58, 1);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 553, CPyStatic_prepare___globals);
        goto CPyL55;
    } else
        goto CPyL56;
CPyL33: ;
    cpy_r_r60 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_last_non_register = cpy_r_r60;
CPyL34: ;
    cpy_r_r61 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r61;
    cpy_r_i = cpy_r_r61;
    cpy_r_r62 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r62;
    goto CPyL5;
CPyL35: ;
    cpy_r_r63 = (CPyPtr)&((PyVarObject *)cpy_r_decorators_to_remove)->ob_size;
    cpy_r_r64 = *(int64_t *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 << 1;
    cpy_r_r66 = cpy_r_r65 != 0;
    if (!cpy_r_r66) goto CPyL57;
    cpy_r_r67 = ((mypyc___irbuild___prepare___SingledispatchVisitorObject *)cpy_r_self)->_decorators_to_remove;
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "visit_decorator", "SingledispatchVisitor", "decorators_to_remove", 560, CPyStatic_prepare___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r67);
CPyL37: ;
    cpy_r_r68 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = CPyDict_SetItem(cpy_r_r67, cpy_r_r68, cpy_r_decorators_to_remove);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_decorators_to_remove);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 560, CPyStatic_prepare___globals);
        goto CPyL40;
    }
CPyL38: ;
    cpy_r_r71 = CPyDef_traverser___TraverserVisitor___visit_decorator(cpy_r_self, cpy_r_dec);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 562, CPyStatic_prepare___globals);
        goto CPyL40;
    }
    return 1;
CPyL40: ;
    cpy_r_r72 = 2;
    return cpy_r_r72;
CPyL41: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL40;
CPyL42: ;
    CPy_DecRef(cpy_r_decorators_to_store);
    goto CPyL40;
CPyL43: ;
    CPy_DECREF(cpy_r_decorators_to_store);
    CPy_DECREF(cpy_r_last_non_register);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL35;
CPyL44: ;
    CPy_DecRef(cpy_r_decorators_to_store);
    CPy_DecRef(cpy_r_decorators_to_remove);
    CPy_DecRef(cpy_r_last_non_register);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL40;
CPyL45: ;
    CPy_DecRef(cpy_r_decorators_to_store);
    CPy_DecRef(cpy_r_decorators_to_remove);
    CPy_DecRef(cpy_r_last_non_register);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_d);
    goto CPyL40;
CPyL46: ;
    CPy_DECREF(cpy_r_d);
    goto CPyL9;
CPyL47: ;
    CPy_DECREF(cpy_r_last_non_register);
    CPy_DECREF(cpy_r_impl);
    goto CPyL28;
CPyL48: ;
    CPy_DecRef(cpy_r_decorators_to_store);
    CPy_DecRef(cpy_r_decorators_to_remove);
    CPy_DecRef(cpy_r_last_non_register);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_impl);
    goto CPyL40;
CPyL49: ;
    CPy_DecRef(cpy_r_decorators_to_store);
    CPy_DecRef(cpy_r_decorators_to_remove);
    CPy_DecRef(cpy_r_last_non_register);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_impl);
    CPy_DecRef(cpy_r_r25);
    goto CPyL40;
CPyL50: ;
    CPy_DecRef(cpy_r_decorators_to_store);
    CPy_DecRef(cpy_r_decorators_to_remove);
    CPy_DecRef(cpy_r_last_non_register);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r30);
    goto CPyL40;
CPyL51: ;
    CPy_DecRef(cpy_r_decorators_to_store);
    CPy_DecRef(cpy_r_decorators_to_remove);
    CPy_DecRef(cpy_r_last_non_register);
    goto CPyL40;
CPyL52: ;
    CPy_DecRef(cpy_r_decorators_to_store);
    CPy_DecRef(cpy_r_decorators_to_remove);
    CPy_DecRef(cpy_r_last_non_register);
    CPy_DecRef(cpy_r_r44);
    goto CPyL40;
CPyL53: ;
    CPy_DecRef(cpy_r_decorators_to_store);
    CPy_DecRef(cpy_r_decorators_to_remove);
    CPy_DecRef(cpy_r_last_non_register);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r46);
    goto CPyL40;
CPyL54: ;
    CPy_DecRef(cpy_r_decorators_to_store);
    CPy_DecRef(cpy_r_decorators_to_remove);
    CPy_DecRef(cpy_r_last_non_register);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r46);
    CPyTagged_DecRef(cpy_r_r47);
    goto CPyL40;
CPyL55: ;
    CPy_DecRef(cpy_r_decorators_to_store);
    CPy_DecRef(cpy_r_decorators_to_remove);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL40;
CPyL56: ;
    CPy_DECREF(cpy_r_r59);
    goto CPyL33;
CPyL57: ;
    CPy_DECREF(cpy_r_decorators_to_remove);
    goto CPyL38;
CPyL58: ;
    CPy_DecRef(cpy_r_decorators_to_remove);
    goto CPyL40;
}

PyObject *CPyPy_prepare___SingledispatchVisitor___visit_decorator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"dec", 0};
    static CPyArg_Parser parser = {"O:visit_decorator", kwlist, 0};
    PyObject *obj_dec;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_dec)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prepare___SingledispatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prepare.SingledispatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_dec;
    if (likely(Py_TYPE(obj_dec) == CPyType_nodes___Decorator))
        arg_dec = obj_dec;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_dec); 
        goto fail;
    }
    char retval = CPyDef_prepare___SingledispatchVisitor___visit_decorator(arg_self, arg_dec);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator", 523, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare___SingledispatchVisitor___visit_decorator__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_prepare___SingledispatchVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_prepare___SingledispatchVisitor___visit_decorator__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prepare___SingledispatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prepare.SingledispatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    char retval = CPyDef_prepare___SingledispatchVisitor___visit_decorator__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator__TraverserVisitor_glue", -1, CPyStatic_prepare___globals);
    return NULL;
}

PyObject *CPyDef_prepare___SingledispatchVisitor___visit_decorator__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prepare___SingledispatchVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prepare___SingledispatchVisitor___visit_decorator__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prepare___SingledispatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prepare.SingledispatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prepare___SingledispatchVisitor___visit_decorator__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator__NodeVisitor_glue", -1, CPyStatic_prepare___globals);
    return NULL;
}

PyObject *CPyDef_prepare___SingledispatchVisitor___visit_decorator__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_prepare___SingledispatchVisitor___visit_decorator(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_prepare___SingledispatchVisitor___visit_decorator__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_decorator__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_prepare___SingledispatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.prepare.SingledispatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Decorator))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_prepare___SingledispatchVisitor___visit_decorator__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "visit_decorator__StatementVisitor_glue", -1, CPyStatic_prepare___globals);
    return NULL;
}

PyObject *CPyDef_prepare___get_singledispatch_register_call_info(PyObject *cpy_r_decorator, PyObject *cpy_r_func) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_callee;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_dispatch_type;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    int64_t cpy_r_r57;
    CPyTagged cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_arg_type;
    PyObject *cpy_r_r67;
    CPyPtr cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    cpy_r_r0 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_decorator)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL26;
    if (likely(Py_TYPE(cpy_r_decorator) == CPyType_nodes___CallExpr))
        cpy_r_r4 = cpy_r_decorator;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 577, CPyStatic_prepare___globals, "mypy.nodes.CallExpr", cpy_r_decorator);
        goto CPyL41;
    }
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_r4)->_args;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = cpy_r_r8 == 2;
    if (!cpy_r_r9) goto CPyL26;
    if (likely(Py_TYPE(cpy_r_decorator) == CPyType_nodes___CallExpr))
        cpy_r_r10 = cpy_r_decorator;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 578, CPyStatic_prepare___globals, "mypy.nodes.CallExpr", cpy_r_decorator);
        goto CPyL41;
    }
    cpy_r_r11 = ((mypy___nodes___CallExprObject *)cpy_r_r10)->_args;
    cpy_r_r12 = CPyList_GetItemShortBorrow(cpy_r_r11, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 578, CPyStatic_prepare___globals);
        goto CPyL41;
    }
    cpy_r_r13 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_r12)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL7;
    cpy_r_r17 = cpy_r_r16;
    goto CPyL8;
CPyL7: ;
    cpy_r_r18 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_r12)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    cpy_r_r17 = cpy_r_r21;
CPyL8: ;
    if (!cpy_r_r17) goto CPyL10;
    cpy_r_r22 = cpy_r_r17;
    goto CPyL11;
CPyL10: ;
    cpy_r_r23 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r12)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    cpy_r_r22 = cpy_r_r26;
CPyL11: ;
    if (!cpy_r_r22) goto CPyL26;
    if (likely(Py_TYPE(cpy_r_decorator) == CPyType_nodes___CallExpr))
        cpy_r_r27 = cpy_r_decorator;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 580, CPyStatic_prepare___globals, "mypy.nodes.CallExpr", cpy_r_decorator);
        goto CPyL41;
    }
    cpy_r_r28 = ((mypy___nodes___CallExprObject *)cpy_r_r27)->_callee;
    CPy_INCREF(cpy_r_r28);
    cpy_r_callee = cpy_r_r28;
    if (likely(Py_TYPE(cpy_r_decorator) == CPyType_nodes___CallExpr))
        cpy_r_r29 = cpy_r_decorator;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 581, CPyStatic_prepare___globals, "mypy.nodes.CallExpr", cpy_r_decorator);
        goto CPyL42;
    }
    cpy_r_r30 = ((mypy___nodes___CallExprObject *)cpy_r_r29)->_args;
    cpy_r_r31 = CPyList_GetItemShortBorrow(cpy_r_r30, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 581, CPyStatic_prepare___globals);
        goto CPyL42;
    }
    if (likely((Py_TYPE(cpy_r_r31) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r31) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r31) == CPyType_nodes___RefExpr)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 581, CPyStatic_prepare___globals, "mypy.nodes.RefExpr", cpy_r_r31);
        goto CPyL42;
    }
    cpy_r_r33 = ((mypy___nodes___RefExprObject *)cpy_r_r32)->_node;
    CPy_INCREF(cpy_r_r33);
    cpy_r_dispatch_type = cpy_r_r33;
    cpy_r_r34 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_dispatch_type)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    if (!cpy_r_r37) goto CPyL18;
    cpy_r_r38 = cpy_r_r37;
    goto CPyL19;
CPyL18: ;
    cpy_r_r39 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_dispatch_type)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    cpy_r_r38 = cpy_r_r42;
CPyL19: ;
    if (cpy_r_r38) {
        goto CPyL21;
    } else
        goto CPyL43;
CPyL20: ;
    cpy_r_r43 = Py_None;
    CPy_INCREF(cpy_r_r43);
    return cpy_r_r43;
CPyL21: ;
    cpy_r_r44 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r45 = (CPyPtr)&((PyObject *)cpy_r_callee)->ob_type;
    cpy_r_r46 = *(PyObject * *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 == cpy_r_r44;
    if (!cpy_r_r47) goto CPyL44;
    if (likely(Py_TYPE(cpy_r_callee) == CPyType_nodes___MemberExpr))
        cpy_r_r48 = cpy_r_callee;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 586, CPyStatic_prepare___globals, "mypy.nodes.MemberExpr", cpy_r_callee);
        goto CPyL45;
    }
    if (likely((Py_TYPE(cpy_r_dispatch_type) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_dispatch_type) == CPyType_nodes___TypeInfo)))
        cpy_r_r49 = cpy_r_dispatch_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 586, CPyStatic_prepare___globals, "mypy.nodes.TypeInfo", cpy_r_dispatch_type);
        goto CPyL46;
    }
    cpy_r_r50 = CPyDef_prepare___registered_impl_from_possible_register_call(cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 586, CPyStatic_prepare___globals);
        goto CPyL41;
    }
    return cpy_r_r50;
CPyL26: ;
    cpy_r_r51 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_decorator)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    if (!cpy_r_r54) goto CPyL40;
    cpy_r_r55 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->_arguments;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", "FuncDef", "arguments", 592, CPyStatic_prepare___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r55);
CPyL28: ;
    cpy_r_r56 = (CPyPtr)&((PyVarObject *)cpy_r_r55)->ob_size;
    cpy_r_r57 = *(int64_t *)cpy_r_r56;
    CPy_DECREF(cpy_r_r55);
    cpy_r_r58 = cpy_r_r57 << 1;
    cpy_r_r59 = cpy_r_r58 != 0;
    if (cpy_r_r59) goto CPyL30;
    cpy_r_r60 = Py_None;
    CPy_INCREF(cpy_r_r60);
    return cpy_r_r60;
CPyL30: ;
    cpy_r_r61 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->_arguments;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", "FuncDef", "arguments", 594, CPyStatic_prepare___globals);
        goto CPyL41;
    }
CPyL31: ;
    cpy_r_r62 = CPyList_GetItemShortBorrow(cpy_r_r61, 0);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 594, CPyStatic_prepare___globals);
        goto CPyL41;
    }
    if (likely(Py_TYPE(cpy_r_r62) == CPyType_nodes___Argument))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 594, CPyStatic_prepare___globals, "mypy.nodes.Argument", cpy_r_r62);
        goto CPyL41;
    }
    cpy_r_r64 = ((mypy___nodes___ArgumentObject *)cpy_r_r63)->_variable;
    cpy_r_r65 = ((mypy___nodes___VarObject *)cpy_r_r64)->_type;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r66 = CPyDef_types___get_proper_type(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 594, CPyStatic_prepare___globals);
        goto CPyL41;
    }
    cpy_r_arg_type = cpy_r_r66;
    cpy_r_r67 = (PyObject *)CPyType_types___Instance;
    cpy_r_r68 = (CPyPtr)&((PyObject *)cpy_r_arg_type)->ob_type;
    cpy_r_r69 = *(PyObject * *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 == cpy_r_r67;
    if (cpy_r_r70) {
        goto CPyL36;
    } else
        goto CPyL47;
CPyL35: ;
    cpy_r_r71 = Py_None;
    CPy_INCREF(cpy_r_r71);
    return cpy_r_r71;
CPyL36: ;
    if (likely(Py_TYPE(cpy_r_arg_type) == CPyType_types___Instance))
        cpy_r_r72 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 597, CPyStatic_prepare___globals, "mypy.types.Instance", cpy_r_arg_type);
        goto CPyL48;
    }
    cpy_r_r73 = ((mypy___types___InstanceObject *)cpy_r_r72)->_type;
    CPy_INCREF(cpy_r_r73);
    CPy_DECREF(cpy_r_arg_type);
    cpy_r_info = cpy_r_r73;
    CPy_INCREF(cpy_r_decorator);
    if (likely(Py_TYPE(cpy_r_decorator) == CPyType_nodes___MemberExpr))
        cpy_r_r74 = cpy_r_decorator;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 598, CPyStatic_prepare___globals, "mypy.nodes.MemberExpr", cpy_r_decorator);
        goto CPyL49;
    }
    cpy_r_r75 = CPyDef_prepare___registered_impl_from_possible_register_call(cpy_r_r74, cpy_r_info);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 598, CPyStatic_prepare___globals);
        goto CPyL41;
    }
    return cpy_r_r75;
CPyL40: ;
    cpy_r_r76 = Py_None;
    CPy_INCREF(cpy_r_r76);
    return cpy_r_r76;
CPyL41: ;
    cpy_r_r77 = NULL;
    return cpy_r_r77;
CPyL42: ;
    CPy_DecRef(cpy_r_callee);
    goto CPyL41;
CPyL43: ;
    CPy_DECREF(cpy_r_callee);
    CPy_DECREF(cpy_r_dispatch_type);
    goto CPyL20;
CPyL44: ;
    CPy_DECREF(cpy_r_callee);
    CPy_DECREF(cpy_r_dispatch_type);
    goto CPyL40;
CPyL45: ;
    CPy_DecRef(cpy_r_dispatch_type);
    goto CPyL41;
CPyL46: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL41;
CPyL47: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL35;
CPyL48: ;
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL41;
CPyL49: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL41;
}

PyObject *CPyPy_prepare___get_singledispatch_register_call_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"decorator", "func", 0};
    static CPyArg_Parser parser = {"OO:get_singledispatch_register_call_info", kwlist, 0};
    PyObject *obj_decorator;
    PyObject *obj_func;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_decorator, &obj_func)) {
        return NULL;
    }
    PyObject *arg_decorator;
    if (likely(PyObject_TypeCheck(obj_decorator, CPyType_nodes___Expression)))
        arg_decorator = obj_decorator;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_decorator); 
        goto fail;
    }
    PyObject *arg_func;
    if (likely(Py_TYPE(obj_func) == CPyType_nodes___FuncDef))
        arg_func = obj_func;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_func); 
        goto fail;
    }
    PyObject *retval = CPyDef_prepare___get_singledispatch_register_call_info(arg_decorator, arg_func);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "get_singledispatch_register_call_info", 570, CPyStatic_prepare___globals);
    return NULL;
}

PyObject *CPyDef_prepare___registered_impl_from_possible_register_call(PyObject *cpy_r_expr, PyObject *cpy_r_dispatch_type) {
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
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[8346]; /* 'register' */
    cpy_r_r2 = PyUnicode_Compare(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 == -1;
    if (!cpy_r_r3) goto CPyL3;
    cpy_r_r4 = PyErr_Occurred();
    cpy_r_r5 = cpy_r_r4 != NULL;
    if (!cpy_r_r5) goto CPyL3;
    cpy_r_r6 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "registered_impl_from_possible_register_call", 605, CPyStatic_prepare___globals);
        goto CPyL13;
    }
CPyL3: ;
    cpy_r_r7 = cpy_r_r2 == 0;
    if (!cpy_r_r7) goto CPyL12;
    cpy_r_r8 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_expr;
    cpy_r_r9 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_r8)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL12;
    cpy_r_r13 = ((mypy___nodes___MemberExprObject *)cpy_r_expr)->_expr;
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_nodes___NameExpr))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "registered_impl_from_possible_register_call", 606, CPyStatic_prepare___globals, "mypy.nodes.NameExpr", cpy_r_r13);
        goto CPyL13;
    }
    cpy_r_r15 = ((mypy___nodes___NameExprObject *)cpy_r_r14)->_node;
    CPy_INCREF(cpy_r_r15);
    cpy_r_node = cpy_r_r15;
    cpy_r_r16 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r20 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "registered_impl_from_possible_register_call", 608, CPyStatic_prepare___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL15;
    }
    cpy_r_r21 = ((mypy___nodes___DecoratorObject *)cpy_r_r20)->_func;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_node);
    cpy_r_r22 = CPyStatic_prepare___globals;
    cpy_r_r23 = CPyStatics[8524]; /* 'RegisteredImpl' */
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "registered_impl_from_possible_register_call", 608, CPyStatic_prepare___globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r25[2] = {cpy_r_r21, cpy_r_dispatch_type};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r26, 2, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "registered_impl_from_possible_register_call", 608, CPyStatic_prepare___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r21);
    if (likely(PyTuple_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "registered_impl_from_possible_register_call", 608, CPyStatic_prepare___globals, "tuple", cpy_r_r27);
        goto CPyL13;
    }
    return cpy_r_r28;
CPyL12: ;
    cpy_r_r29 = Py_None;
    CPy_INCREF(cpy_r_r29);
    return cpy_r_r29;
CPyL13: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL14: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL13;
}

PyObject *CPyPy_prepare___registered_impl_from_possible_register_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", "dispatch_type", 0};
    static CPyArg_Parser parser = {"OO:registered_impl_from_possible_register_call", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_dispatch_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_dispatch_type)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___MemberExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.MemberExpr", obj_expr); 
        goto fail;
    }
    PyObject *arg_dispatch_type;
    if (likely((Py_TYPE(obj_dispatch_type) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_dispatch_type) == CPyType_nodes___TypeInfo)))
        arg_dispatch_type = obj_dispatch_type;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_dispatch_type); 
        goto fail;
    }
    PyObject *retval = CPyDef_prepare___registered_impl_from_possible_register_call(arg_expr, arg_dispatch_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/prepare.py", "registered_impl_from_possible_register_call", 602, CPyStatic_prepare___globals);
    return NULL;
}

char CPyDef_prepare_____top_level__(void) {
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
    tuple_T2OO cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
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
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject **cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    int32_t cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    int32_t cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    PyObject **cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    int32_t cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    int32_t cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    int32_t cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject **cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    int32_t cpy_r_r208;
    char cpy_r_r209;
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
    int32_t cpy_r_r220;
    char cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    int32_t cpy_r_r224;
    char cpy_r_r225;
    PyObject **cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    int32_t cpy_r_r231;
    char cpy_r_r232;
    PyObject *cpy_r_r233;
    char cpy_r_r234;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", -1, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_prepare___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 14, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9083]; /* ('defaultdict',) */
    cpy_r_r10 = CPyStatics[76]; /* 'collections' */
    cpy_r_r11 = CPyStatic_prepare___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 16, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_collections = cpy_r_r12;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10205]; /* ('Iterable', 'NamedTuple', 'Tuple') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_prepare___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 17, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10036]; /* ('Graph',) */
    cpy_r_r18 = CPyStatics[238]; /* 'mypy.build' */
    cpy_r_r19 = CPyStatic_prepare___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 19, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypy___build = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___build);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10206]; /* ('ARG_STAR', 'ARG_STAR2', 'CallExpr', 'ClassDef',
                                      'Decorator', 'Expression', 'FuncDef', 'MemberExpr',
                                      'MypyFile', 'NameExpr', 'OverloadedFuncDef', 'RefExpr',
                                      'SymbolNode', 'TypeInfo', 'Var') */
    cpy_r_r22 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r23 = CPyStatic_prepare___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 20, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypy___nodes = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10207]; /* ('refers_to_fullname',) */
    cpy_r_r26 = CPyStatics[540]; /* 'mypy.semanal' */
    cpy_r_r27 = CPyStatic_prepare___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 37, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypy___semanal = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___semanal);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r30 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r31 = CPyStatic_prepare___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 38, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypy___traverser = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[10208]; /* ('Instance', 'Type', 'get_proper_type') */
    cpy_r_r34 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r35 = CPyStatic_prepare___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 39, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypy___types = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[10209]; /* ('PROPSET_PREFIX', 'get_id_from_name') */
    cpy_r_r38 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r39 = CPyStatic_prepare___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 40, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypyc___common = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[10041]; /* ('catch_errors',) */
    cpy_r_r42 = CPyStatics[8079]; /* 'mypyc.crash' */
    cpy_r_r43 = CPyStatic_prepare___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 41, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypyc___crash = cpy_r_r44;
    CPy_INCREF(CPyModule_mypyc___crash);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[9270]; /* ('Errors',) */
    cpy_r_r46 = CPyStatics[6842]; /* 'mypyc.errors' */
    cpy_r_r47 = CPyStatic_prepare___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 42, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypyc___errors = cpy_r_r48;
    CPy_INCREF(CPyModule_mypyc___errors);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[9904]; /* ('ClassIR',) */
    cpy_r_r50 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r51 = CPyStatic_prepare___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 43, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r52;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[10210]; /* ('FUNC_CLASSMETHOD', 'FUNC_NORMAL', 'FUNC_STATICMETHOD',
                                      'FuncDecl', 'FuncSignature', 'RuntimeArg') */
    cpy_r_r54 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r55 = CPyStatic_prepare___globals;
    cpy_r_r56 = CPyImport_ImportFromMany(cpy_r_r54, cpy_r_r53, cpy_r_r53, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 44, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r56;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r57 = CPyStatics[10018]; /* ('DeserMaps',) */
    cpy_r_r58 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r59 = CPyStatic_prepare___globals;
    cpy_r_r60 = CPyImport_ImportFromMany(cpy_r_r58, cpy_r_r57, cpy_r_r57, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 52, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r60;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r61 = CPyStatics[10211]; /* ('RInstance', 'RType', 'dict_rprimitive',
                                      'none_rprimitive', 'tuple_rprimitive') */
    cpy_r_r62 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r63 = CPyStatic_prepare___globals;
    cpy_r_r64 = CPyImport_ImportFromMany(cpy_r_r62, cpy_r_r61, cpy_r_r61, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 53, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r64;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r65 = CPyStatics[9984]; /* ('Mapper',) */
    cpy_r_r66 = CPyStatics[7560]; /* 'mypyc.irbuild.mapper' */
    cpy_r_r67 = CPyStatic_prepare___globals;
    cpy_r_r68 = CPyImport_ImportFromMany(cpy_r_r66, cpy_r_r65, cpy_r_r65, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 54, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypyc___irbuild___mapper = cpy_r_r68;
    CPy_INCREF(CPyModule_mypyc___irbuild___mapper);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r69 = CPyStatics[10212]; /* ('get_func_def', 'get_mypyc_attrs', 'is_dataclass',
                                      'is_extension_class', 'is_trait') */
    cpy_r_r70 = CPyStatics[8101]; /* 'mypyc.irbuild.util' */
    cpy_r_r71 = CPyStatic_prepare___globals;
    cpy_r_r72 = CPyImport_ImportFromMany(cpy_r_r70, cpy_r_r69, cpy_r_r69, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 55, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypyc___irbuild___util = cpy_r_r72;
    CPy_INCREF(CPyModule_mypyc___irbuild___util);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r73 = CPyStatics[9929]; /* ('CompilerOptions',) */
    cpy_r_r74 = CPyStatics[6847]; /* 'mypyc.options' */
    cpy_r_r75 = CPyStatic_prepare___globals;
    cpy_r_r76 = CPyImport_ImportFromMany(cpy_r_r74, cpy_r_r73, cpy_r_r73, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 62, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypyc___options = cpy_r_r76;
    CPy_INCREF(CPyModule_mypyc___options);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r77 = CPyStatics[9947]; /* ('is_same_type',) */
    cpy_r_r78 = CPyStatics[7045]; /* 'mypyc.sametype' */
    cpy_r_r79 = CPyStatic_prepare___globals;
    cpy_r_r80 = CPyImport_ImportFromMany(cpy_r_r78, cpy_r_r77, cpy_r_r77, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 63, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_mypyc___sametype = cpy_r_r80;
    CPy_INCREF(CPyModule_mypyc___sametype);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r81 = CPyStatic_prepare___globals;
    cpy_r_r82 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r83 = CPyDict_GetItem(cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 491, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r84 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r85 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r86.f0 = cpy_r_r84;
    cpy_r_r86.f1 = cpy_r_r85;
    CPy_INCREF(cpy_r_r86.f0);
    CPy_INCREF(cpy_r_r86.f1);
    cpy_r_r87 = PyTuple_New(2);
    if (unlikely(cpy_r_r87 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10442 = cpy_r_r86.f0;
    PyTuple_SET_ITEM(cpy_r_r87, 0, __tmp10442);
    PyObject *__tmp10443 = cpy_r_r86.f1;
    PyTuple_SET_ITEM(cpy_r_r87, 1, __tmp10443);
    cpy_r_r88 = PyObject_GetItem(cpy_r_r83, cpy_r_r87);
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 491, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r89 = CPyStatic_prepare___globals;
    cpy_r_r90 = CPyStatics[8092]; /* 'RegisterImplInfo' */
    cpy_r_r91 = CPyDict_SetItem(cpy_r_r89, cpy_r_r90, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 491, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r93 = CPyModule_typing;
    cpy_r_r94 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r95 = cpy_r_r93 != cpy_r_r94;
    if (cpy_r_r95) goto CPyL28;
    cpy_r_r96 = CPyStatics[21]; /* 'typing' */
    cpy_r_r97 = PyImport_Import(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_typing = cpy_r_r97;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r97);
CPyL28: ;
    cpy_r_r98 = PyImport_GetModuleDict();
    cpy_r_r99 = CPyStatics[21]; /* 'typing' */
    cpy_r_r100 = CPyDict_GetItem(cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r101 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r102 = CPyObject_GetAttr(cpy_r_r100, cpy_r_r101);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r103 = PyTuple_Pack(1, cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r104 = CPyModule_typing;
    cpy_r_r105 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r106 = cpy_r_r104 != cpy_r_r105;
    if (cpy_r_r106) goto CPyL34;
    cpy_r_r107 = CPyStatics[21]; /* 'typing' */
    cpy_r_r108 = PyImport_Import(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL85;
    }
    CPyModule_typing = cpy_r_r108;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r108);
CPyL34: ;
    cpy_r_r109 = PyImport_GetModuleDict();
    cpy_r_r110 = CPyStatics[21]; /* 'typing' */
    cpy_r_r111 = CPyDict_GetItem(cpy_r_r109, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL85;
    }
    cpy_r_r112 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r113 = CPyObject_GetAttr(cpy_r_r111, cpy_r_r112);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL85;
    }
    cpy_r_r114 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r115 = PyObject_HasAttr(cpy_r_r113, cpy_r_r114);
    if (!cpy_r_r115) goto CPyL41;
    cpy_r_r116 = CPyStatics[8522]; /* 'SingledispatchInfo' */
    cpy_r_r117 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r118 = CPyObject_GetAttr(cpy_r_r113, cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL86;
    }
    PyObject *cpy_r_r119[2] = {cpy_r_r116, cpy_r_r103};
    cpy_r_r120 = (PyObject **)&cpy_r_r119;
    cpy_r_r121 = _PyObject_Vectorcall(cpy_r_r118, cpy_r_r120, 2, 0);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL86;
    }
    if (likely(PyDict_Check(cpy_r_r121)))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals, "dict", cpy_r_r121);
        goto CPyL86;
    }
    cpy_r_r123 = cpy_r_r122;
    goto CPyL43;
CPyL41: ;
    cpy_r_r124 = PyDict_New();
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL86;
    }
    cpy_r_r123 = cpy_r_r124;
CPyL43: ;
    cpy_r_r125 = PyDict_New();
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL87;
    }
    cpy_r_r126 = (PyObject *)&PyDict_Type;
    cpy_r_r127 = CPyStatics[8129]; /* 'singledispatch_impls' */
    cpy_r_r128 = CPyDict_SetItem(cpy_r_r125, cpy_r_r127, cpy_r_r126);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 495, CPyStatic_prepare___globals);
        goto CPyL88;
    }
    cpy_r_r130 = (PyObject *)&PyDict_Type;
    cpy_r_r131 = CPyStatics[8503]; /* 'decorators_to_remove' */
    cpy_r_r132 = CPyDict_SetItem(cpy_r_r125, cpy_r_r131, cpy_r_r130);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 496, CPyStatic_prepare___globals);
        goto CPyL88;
    }
    cpy_r_r134 = CPyStatics[8522]; /* 'SingledispatchInfo' */
    cpy_r_r135 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r136 = CPyDict_SetItem(cpy_r_r123, cpy_r_r135, cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL87;
    }
    cpy_r_r138 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r139 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r140 = CPyDict_SetItem(cpy_r_r123, cpy_r_r139, cpy_r_r138);
    cpy_r_r141 = cpy_r_r140 >= 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL87;
    }
    cpy_r_r142 = CPyStatics[7562]; /* 'mypyc.irbuild.prepare' */
    cpy_r_r143 = CPyStatics[619]; /* '__module__' */
    cpy_r_r144 = CPyDict_SetItem(cpy_r_r123, cpy_r_r143, cpy_r_r142);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL87;
    }
    PyObject *cpy_r_r146[3] = {cpy_r_r134, cpy_r_r103, cpy_r_r123};
    cpy_r_r147 = (PyObject **)&cpy_r_r146;
    cpy_r_r148 = _PyObject_Vectorcall(cpy_r_r113, cpy_r_r147, 3, 0);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL89;
    }
    CPy_DECREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r123);
    CPyType_prepare___SingledispatchInfo = (PyTypeObject *)cpy_r_r148;
    CPy_INCREF(CPyType_prepare___SingledispatchInfo);
    cpy_r_r149 = CPyStatic_prepare___globals;
    cpy_r_r150 = CPyStatics[8522]; /* 'SingledispatchInfo' */
    cpy_r_r151 = CPyDict_SetItem(cpy_r_r149, cpy_r_r150, cpy_r_r148);
    CPy_DECREF(cpy_r_r148);
    cpy_r_r152 = cpy_r_r151 >= 0;
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 494, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r153 = (PyObject *)CPyType_prepare___SingledispatchInfo;
    cpy_r_r154 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r155 = PyTuple_Pack(1, cpy_r_r154);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 509, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r156 = CPyStatics[7562]; /* 'mypyc.irbuild.prepare' */
    cpy_r_r157 = (PyObject *)CPyType_prepare___SingledispatchVisitor_template;
    cpy_r_r158 = CPyType_FromTemplate(cpy_r_r157, cpy_r_r155, cpy_r_r156);
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 509, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r159 = CPyDef_prepare___SingledispatchVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r159 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", -1, CPyStatic_prepare___globals);
        goto CPyL90;
    }
    cpy_r_r160 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r161 = CPyStatics[8528]; /* 'current_path' */
    cpy_r_r162 = CPyStatics[8129]; /* 'singledispatch_impls' */
    cpy_r_r163 = CPyStatics[8503]; /* 'decorators_to_remove' */
    cpy_r_r164 = CPyStatics[610]; /* 'errors' */
    cpy_r_r165 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r166 = PyTuple_Pack(5, cpy_r_r161, cpy_r_r162, cpy_r_r163, cpy_r_r164, cpy_r_r165);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 509, CPyStatic_prepare___globals);
        goto CPyL90;
    }
    cpy_r_r167 = PyObject_SetAttr(cpy_r_r158, cpy_r_r160, cpy_r_r166);
    CPy_DECREF(cpy_r_r166);
    cpy_r_r168 = cpy_r_r167 >= 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 509, CPyStatic_prepare___globals);
        goto CPyL90;
    }
    CPyType_prepare___SingledispatchVisitor = (PyTypeObject *)cpy_r_r158;
    CPy_INCREF(CPyType_prepare___SingledispatchVisitor);
    cpy_r_r169 = CPyStatic_prepare___globals;
    cpy_r_r170 = CPyStatics[8529]; /* 'SingledispatchVisitor' */
    cpy_r_r171 = CPyDict_SetItem(cpy_r_r169, cpy_r_r170, cpy_r_r158);
    CPy_DECREF(cpy_r_r158);
    cpy_r_r172 = cpy_r_r171 >= 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 509, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r173 = CPyModule_typing;
    cpy_r_r174 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r175 = cpy_r_r173 != cpy_r_r174;
    if (cpy_r_r175) goto CPyL60;
    cpy_r_r176 = CPyStatics[21]; /* 'typing' */
    cpy_r_r177 = PyImport_Import(cpy_r_r176);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    CPyModule_typing = cpy_r_r177;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r177);
CPyL60: ;
    cpy_r_r178 = PyImport_GetModuleDict();
    cpy_r_r179 = CPyStatics[21]; /* 'typing' */
    cpy_r_r180 = CPyDict_GetItem(cpy_r_r178, cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r181 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r182 = CPyObject_GetAttr(cpy_r_r180, cpy_r_r181);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r183 = PyTuple_Pack(1, cpy_r_r182);
    CPy_DECREF(cpy_r_r182);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r184 = CPyModule_typing;
    cpy_r_r185 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r186 = cpy_r_r184 != cpy_r_r185;
    if (cpy_r_r186) goto CPyL66;
    cpy_r_r187 = CPyStatics[21]; /* 'typing' */
    cpy_r_r188 = PyImport_Import(cpy_r_r187);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL91;
    }
    CPyModule_typing = cpy_r_r188;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r188);
CPyL66: ;
    cpy_r_r189 = PyImport_GetModuleDict();
    cpy_r_r190 = CPyStatics[21]; /* 'typing' */
    cpy_r_r191 = CPyDict_GetItem(cpy_r_r189, cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL91;
    }
    cpy_r_r192 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r193 = CPyObject_GetAttr(cpy_r_r191, cpy_r_r192);
    CPy_DECREF(cpy_r_r191);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL91;
    }
    cpy_r_r194 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r195 = PyObject_HasAttr(cpy_r_r193, cpy_r_r194);
    if (!cpy_r_r195) goto CPyL73;
    cpy_r_r196 = CPyStatics[8524]; /* 'RegisteredImpl' */
    cpy_r_r197 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r198 = CPyObject_GetAttr(cpy_r_r193, cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL92;
    }
    PyObject *cpy_r_r199[2] = {cpy_r_r196, cpy_r_r183};
    cpy_r_r200 = (PyObject **)&cpy_r_r199;
    cpy_r_r201 = _PyObject_Vectorcall(cpy_r_r198, cpy_r_r200, 2, 0);
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL92;
    }
    if (likely(PyDict_Check(cpy_r_r201)))
        cpy_r_r202 = cpy_r_r201;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals, "dict", cpy_r_r201);
        goto CPyL92;
    }
    cpy_r_r203 = cpy_r_r202;
    goto CPyL75;
CPyL73: ;
    cpy_r_r204 = PyDict_New();
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL92;
    }
    cpy_r_r203 = cpy_r_r204;
CPyL75: ;
    cpy_r_r205 = PyDict_New();
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL93;
    }
    cpy_r_r206 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r207 = CPyStatics[8530]; /* 'singledispatch_func' */
    cpy_r_r208 = CPyDict_SetItem(cpy_r_r205, cpy_r_r207, cpy_r_r206);
    cpy_r_r209 = cpy_r_r208 >= 0;
    if (unlikely(!cpy_r_r209)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 566, CPyStatic_prepare___globals);
        goto CPyL94;
    }
    cpy_r_r210 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r211 = CPyStatics[8531]; /* 'dispatch_type' */
    cpy_r_r212 = CPyDict_SetItem(cpy_r_r205, cpy_r_r211, cpy_r_r210);
    cpy_r_r213 = cpy_r_r212 >= 0;
    if (unlikely(!cpy_r_r213)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 567, CPyStatic_prepare___globals);
        goto CPyL94;
    }
    cpy_r_r214 = CPyStatics[8524]; /* 'RegisteredImpl' */
    cpy_r_r215 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r216 = CPyDict_SetItem(cpy_r_r203, cpy_r_r215, cpy_r_r205);
    CPy_DECREF(cpy_r_r205);
    cpy_r_r217 = cpy_r_r216 >= 0;
    if (unlikely(!cpy_r_r217)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL93;
    }
    cpy_r_r218 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r219 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r220 = CPyDict_SetItem(cpy_r_r203, cpy_r_r219, cpy_r_r218);
    cpy_r_r221 = cpy_r_r220 >= 0;
    if (unlikely(!cpy_r_r221)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL93;
    }
    cpy_r_r222 = CPyStatics[7562]; /* 'mypyc.irbuild.prepare' */
    cpy_r_r223 = CPyStatics[619]; /* '__module__' */
    cpy_r_r224 = CPyDict_SetItem(cpy_r_r203, cpy_r_r223, cpy_r_r222);
    cpy_r_r225 = cpy_r_r224 >= 0;
    if (unlikely(!cpy_r_r225)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL93;
    }
    PyObject *cpy_r_r226[3] = {cpy_r_r214, cpy_r_r183, cpy_r_r203};
    cpy_r_r227 = (PyObject **)&cpy_r_r226;
    cpy_r_r228 = _PyObject_Vectorcall(cpy_r_r193, cpy_r_r227, 3, 0);
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL95;
    }
    CPy_DECREF(cpy_r_r183);
    CPy_DECREF(cpy_r_r203);
    CPyType_prepare___RegisteredImpl = (PyTypeObject *)cpy_r_r228;
    CPy_INCREF(CPyType_prepare___RegisteredImpl);
    cpy_r_r229 = CPyStatic_prepare___globals;
    cpy_r_r230 = CPyStatics[8524]; /* 'RegisteredImpl' */
    cpy_r_r231 = CPyDict_SetItem(cpy_r_r229, cpy_r_r230, cpy_r_r228);
    CPy_DECREF(cpy_r_r228);
    cpy_r_r232 = cpy_r_r231 >= 0;
    if (unlikely(!cpy_r_r232)) {
        CPy_AddTraceback("mypyc/irbuild/prepare.py", "<module>", 565, CPyStatic_prepare___globals);
        goto CPyL84;
    }
    cpy_r_r233 = (PyObject *)CPyType_prepare___RegisteredImpl;
    return 1;
CPyL84: ;
    cpy_r_r234 = 2;
    return cpy_r_r234;
CPyL85: ;
    CPy_DecRef(cpy_r_r103);
    goto CPyL84;
CPyL86: ;
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r113);
    goto CPyL84;
CPyL87: ;
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r123);
    goto CPyL84;
CPyL88: ;
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r125);
    goto CPyL84;
CPyL89: ;
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r123);
    goto CPyL84;
CPyL90: ;
    CPy_DecRef(cpy_r_r158);
    goto CPyL84;
CPyL91: ;
    CPy_DecRef(cpy_r_r183);
    goto CPyL84;
CPyL92: ;
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_r193);
    goto CPyL84;
CPyL93: ;
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_r193);
    CPy_DecRef(cpy_r_r203);
    goto CPyL84;
CPyL94: ;
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_r193);
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    goto CPyL84;
CPyL95: ;
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_r203);
    goto CPyL84;
}
