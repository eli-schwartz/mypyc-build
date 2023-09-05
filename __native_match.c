#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
match___MatchVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef match___MatchVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___match___MatchVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___match___MatchVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *match___MatchVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_match___MatchVisitor(PyObject *cpy_r_builder, PyObject *cpy_r_match_node);

static PyObject *
match___MatchVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_match___MatchVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = match___MatchVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_match___MatchVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
match___MatchVisitor_traverse(mypyc___irbuild___match___MatchVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_builder);
    Py_VISIT(self->_code_block);
    Py_VISIT(self->_next_block);
    Py_VISIT(self->_final_block);
    Py_VISIT(self->_subject);
    Py_VISIT(self->_match);
    Py_VISIT(self->_as_pattern);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___match___MatchVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___match___MatchVisitorObject))));
    return 0;
}

static int
match___MatchVisitor_clear(mypyc___irbuild___match___MatchVisitorObject *self)
{
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_code_block);
    Py_CLEAR(self->_next_block);
    Py_CLEAR(self->_final_block);
    Py_CLEAR(self->_subject);
    Py_CLEAR(self->_match);
    Py_CLEAR(self->_as_pattern);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___match___MatchVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___match___MatchVisitorObject))));
    return 0;
}

static void
match___MatchVisitor_dealloc(mypyc___irbuild___match___MatchVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, match___MatchVisitor_dealloc)
    match___MatchVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem match___MatchVisitor_vtable[109];
static CPyVTableItem match___MatchVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t match___MatchVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem match___MatchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t match___MatchVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem match___MatchVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t match___MatchVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem match___MatchVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t match___MatchVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_match___MatchVisitor_trait_vtable_setup(void)
{
    CPyVTableItem match___MatchVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
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
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_match_stmt__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_as_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_or_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_value_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_singleton_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_sequence_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_mapping_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_class_pattern__NodeVisitor_glue,
    };
    memcpy(match___MatchVisitor_mypy___visitor___NodeVisitor_trait_vtable, match___MatchVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(match___MatchVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t match___MatchVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(match___MatchVisitor_mypy___visitor___NodeVisitor_offset_table, match___MatchVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(match___MatchVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem match___MatchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
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
    memcpy(match___MatchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, match___MatchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(match___MatchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t match___MatchVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(match___MatchVisitor_mypy___visitor___ExpressionVisitor_offset_table, match___MatchVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(match___MatchVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem match___MatchVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__StatementVisitor_glue,
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
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_match_stmt__StatementVisitor_glue,
    };
    memcpy(match___MatchVisitor_mypy___visitor___StatementVisitor_trait_vtable, match___MatchVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(match___MatchVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t match___MatchVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(match___MatchVisitor_mypy___visitor___StatementVisitor_offset_table, match___MatchVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(match___MatchVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem match___MatchVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_singleton_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(match___MatchVisitor_mypy___visitor___PatternVisitor_trait_vtable, match___MatchVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(match___MatchVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t match___MatchVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(match___MatchVisitor_mypy___visitor___PatternVisitor_offset_table, match___MatchVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(match___MatchVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem match___MatchVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)match___MatchVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)match___MatchVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)match___MatchVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)match___MatchVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)match___MatchVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)match___MatchVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)match___MatchVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)match___MatchVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_match___MatchVisitor_____init__,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator,
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
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_match_stmt__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_as_pattern__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_or_pattern__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_value_pattern__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_sequence_pattern__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_mapping_pattern__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_class_pattern__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_singleton_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_match___MatchVisitor_____init__,
        (CPyVTableItem)CPyDef_match___MatchVisitor___build_match_body,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_class_pattern,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_match___MatchVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_match___MatchVisitor___bind_as_pattern,
        (CPyVTableItem)CPyDef_match___MatchVisitor___enter_subpattern,
        (CPyVTableItem)CPyDef_match___MatchVisitor_____mypyc_defaults_setup,
    };
    memcpy(match___MatchVisitor_vtable, match___MatchVisitor_vtable_scratch, sizeof(match___MatchVisitor_vtable));
    return 1;
}

static PyObject *
match___MatchVisitor_get_builder(mypyc___irbuild___match___MatchVisitorObject *self, void *closure);
static int
match___MatchVisitor_set_builder(mypyc___irbuild___match___MatchVisitorObject *self, PyObject *value, void *closure);
static PyObject *
match___MatchVisitor_get_code_block(mypyc___irbuild___match___MatchVisitorObject *self, void *closure);
static int
match___MatchVisitor_set_code_block(mypyc___irbuild___match___MatchVisitorObject *self, PyObject *value, void *closure);
static PyObject *
match___MatchVisitor_get_next_block(mypyc___irbuild___match___MatchVisitorObject *self, void *closure);
static int
match___MatchVisitor_set_next_block(mypyc___irbuild___match___MatchVisitorObject *self, PyObject *value, void *closure);
static PyObject *
match___MatchVisitor_get_final_block(mypyc___irbuild___match___MatchVisitorObject *self, void *closure);
static int
match___MatchVisitor_set_final_block(mypyc___irbuild___match___MatchVisitorObject *self, PyObject *value, void *closure);
static PyObject *
match___MatchVisitor_get_subject(mypyc___irbuild___match___MatchVisitorObject *self, void *closure);
static int
match___MatchVisitor_set_subject(mypyc___irbuild___match___MatchVisitorObject *self, PyObject *value, void *closure);
static PyObject *
match___MatchVisitor_get_match(mypyc___irbuild___match___MatchVisitorObject *self, void *closure);
static int
match___MatchVisitor_set_match(mypyc___irbuild___match___MatchVisitorObject *self, PyObject *value, void *closure);
static PyObject *
match___MatchVisitor_get_as_pattern(mypyc___irbuild___match___MatchVisitorObject *self, void *closure);
static int
match___MatchVisitor_set_as_pattern(mypyc___irbuild___match___MatchVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef match___MatchVisitor_getseters[] = {
    {"builder",
     (getter)match___MatchVisitor_get_builder, (setter)match___MatchVisitor_set_builder,
     NULL, NULL},
    {"code_block",
     (getter)match___MatchVisitor_get_code_block, (setter)match___MatchVisitor_set_code_block,
     NULL, NULL},
    {"next_block",
     (getter)match___MatchVisitor_get_next_block, (setter)match___MatchVisitor_set_next_block,
     NULL, NULL},
    {"final_block",
     (getter)match___MatchVisitor_get_final_block, (setter)match___MatchVisitor_set_final_block,
     NULL, NULL},
    {"subject",
     (getter)match___MatchVisitor_get_subject, (setter)match___MatchVisitor_set_subject,
     NULL, NULL},
    {"match",
     (getter)match___MatchVisitor_get_match, (setter)match___MatchVisitor_set_match,
     NULL, NULL},
    {"as_pattern",
     (getter)match___MatchVisitor_get_as_pattern, (setter)match___MatchVisitor_set_as_pattern,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef match___MatchVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_match___MatchVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"build_match_body",
     (PyCFunction)CPyPy_match___MatchVisitor___build_match_body,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_match_stmt",
     (PyCFunction)CPyPy_match___MatchVisitor___visit_match_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_value_pattern",
     (PyCFunction)CPyPy_match___MatchVisitor___visit_value_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_or_pattern",
     (PyCFunction)CPyPy_match___MatchVisitor___visit_or_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_pattern",
     (PyCFunction)CPyPy_match___MatchVisitor___visit_class_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_as_pattern",
     (PyCFunction)CPyPy_match___MatchVisitor___visit_as_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_singleton_pattern",
     (PyCFunction)CPyPy_match___MatchVisitor___visit_singleton_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_mapping_pattern",
     (PyCFunction)CPyPy_match___MatchVisitor___visit_mapping_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_sequence_pattern",
     (PyCFunction)CPyPy_match___MatchVisitor___visit_sequence_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"bind_as_pattern",
     (PyCFunction)CPyPy_match___MatchVisitor___bind_as_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"enter_subpattern",
     (PyCFunction)CPyPy_match___MatchVisitor___enter_subpattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_match___MatchVisitor_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_match___MatchVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "MatchVisitor",
    .tp_new = match___MatchVisitor_new,
    .tp_dealloc = (destructor)match___MatchVisitor_dealloc,
    .tp_traverse = (traverseproc)match___MatchVisitor_traverse,
    .tp_clear = (inquiry)match___MatchVisitor_clear,
    .tp_getset = match___MatchVisitor_getseters,
    .tp_methods = match___MatchVisitor_methods,
    .tp_init = match___MatchVisitor_init,
    .tp_members = match___MatchVisitor_members,
    .tp_basicsize = sizeof(mypyc___irbuild___match___MatchVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___match___MatchVisitorObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___match___MatchVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_match___MatchVisitor_template = &CPyType_match___MatchVisitor_template_;

static PyObject *
match___MatchVisitor_setup(PyTypeObject *type)
{
    mypyc___irbuild___match___MatchVisitorObject *self;
    self = (mypyc___irbuild___match___MatchVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = match___MatchVisitor_vtable + 12;
    if (CPyDef_match___MatchVisitor_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_match___MatchVisitor(PyObject *cpy_r_builder, PyObject *cpy_r_match_node)
{
    PyObject *self = match___MatchVisitor_setup(CPyType_match___MatchVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_match___MatchVisitor_____init__(self, cpy_r_builder, cpy_r_match_node);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
match___MatchVisitor_get_builder(mypyc___irbuild___match___MatchVisitorObject *self, void *closure)
{
    if (unlikely(self->_builder == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'builder' of 'MatchVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_builder);
    PyObject *retval = self->_builder;
    return retval;
}

static int
match___MatchVisitor_set_builder(mypyc___irbuild___match___MatchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MatchVisitor' object attribute 'builder' cannot be deleted");
        return -1;
    }
    if (self->_builder != NULL) {
        CPy_DECREF(self->_builder);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_builder___IRBuilder))
        tmp = value;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_builder = tmp;
    return 0;
}

static PyObject *
match___MatchVisitor_get_code_block(mypyc___irbuild___match___MatchVisitorObject *self, void *closure)
{
    if (unlikely(self->_code_block == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'code_block' of 'MatchVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_code_block);
    PyObject *retval = self->_code_block;
    return retval;
}

static int
match___MatchVisitor_set_code_block(mypyc___irbuild___match___MatchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MatchVisitor' object attribute 'code_block' cannot be deleted");
        return -1;
    }
    if (self->_code_block != NULL) {
        CPy_DECREF(self->_code_block);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_ops___BasicBlock))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_code_block = tmp;
    return 0;
}

static PyObject *
match___MatchVisitor_get_next_block(mypyc___irbuild___match___MatchVisitorObject *self, void *closure)
{
    if (unlikely(self->_next_block == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'next_block' of 'MatchVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_next_block);
    PyObject *retval = self->_next_block;
    return retval;
}

static int
match___MatchVisitor_set_next_block(mypyc___irbuild___match___MatchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MatchVisitor' object attribute 'next_block' cannot be deleted");
        return -1;
    }
    if (self->_next_block != NULL) {
        CPy_DECREF(self->_next_block);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_ops___BasicBlock))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_next_block = tmp;
    return 0;
}

static PyObject *
match___MatchVisitor_get_final_block(mypyc___irbuild___match___MatchVisitorObject *self, void *closure)
{
    if (unlikely(self->_final_block == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'final_block' of 'MatchVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_final_block);
    PyObject *retval = self->_final_block;
    return retval;
}

static int
match___MatchVisitor_set_final_block(mypyc___irbuild___match___MatchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MatchVisitor' object attribute 'final_block' cannot be deleted");
        return -1;
    }
    if (self->_final_block != NULL) {
        CPy_DECREF(self->_final_block);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_ops___BasicBlock))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_final_block = tmp;
    return 0;
}

static PyObject *
match___MatchVisitor_get_subject(mypyc___irbuild___match___MatchVisitorObject *self, void *closure)
{
    if (unlikely(self->_subject == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'subject' of 'MatchVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_subject);
    PyObject *retval = self->_subject;
    return retval;
}

static int
match___MatchVisitor_set_subject(mypyc___irbuild___match___MatchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MatchVisitor' object attribute 'subject' cannot be deleted");
        return -1;
    }
    if (self->_subject != NULL) {
        CPy_DECREF(self->_subject);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_ops___Value)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_subject = tmp;
    return 0;
}

static PyObject *
match___MatchVisitor_get_match(mypyc___irbuild___match___MatchVisitorObject *self, void *closure)
{
    if (unlikely(self->_match == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'match' of 'MatchVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_match);
    PyObject *retval = self->_match;
    return retval;
}

static int
match___MatchVisitor_set_match(mypyc___irbuild___match___MatchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MatchVisitor' object attribute 'match' cannot be deleted");
        return -1;
    }
    if (self->_match != NULL) {
        CPy_DECREF(self->_match);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_nodes___MatchStmt))
        tmp = value;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_match = tmp;
    return 0;
}

static PyObject *
match___MatchVisitor_get_as_pattern(mypyc___irbuild___match___MatchVisitorObject *self, void *closure)
{
    if (unlikely(self->_as_pattern == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'as_pattern' of 'MatchVisitor' undefined");
        return NULL;
    }
    CPy_INCREF(self->_as_pattern);
    PyObject *retval = self->_as_pattern;
    return retval;
}

static int
match___MatchVisitor_set_as_pattern(mypyc___irbuild___match___MatchVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MatchVisitor' object attribute 'as_pattern' cannot be deleted");
        return -1;
    }
    if (self->_as_pattern != NULL) {
        CPy_DECREF(self->_as_pattern);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_patterns___AsPattern)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10379;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10379;
    CPy_TypeError("mypy.patterns.AsPattern or None", value); 
    tmp = NULL;
__LL10379: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_as_pattern = tmp;
    return 0;
}

static PyObject *match___enter_subpattern_MatchVisitor_env_setup(PyTypeObject *type);
PyObject *CPyDef_match___enter_subpattern_MatchVisitor_env(void);

static PyObject *
match___enter_subpattern_MatchVisitor_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_match___enter_subpattern_MatchVisitor_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return match___enter_subpattern_MatchVisitor_env_setup(type);
}

static int
match___enter_subpattern_MatchVisitor_env_traverse(mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_subject);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->_old_subject);
    return 0;
}

static int
match___enter_subpattern_MatchVisitor_env_clear(mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_subject);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_old_subject);
    return 0;
}

static void
match___enter_subpattern_MatchVisitor_env_dealloc(mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, match___enter_subpattern_MatchVisitor_env_dealloc)
    match___enter_subpattern_MatchVisitor_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem match___enter_subpattern_MatchVisitor_env_vtable[1];
static bool
CPyDef_match___enter_subpattern_MatchVisitor_env_trait_vtable_setup(void)
{
    CPyVTableItem match___enter_subpattern_MatchVisitor_env_vtable_scratch[] = {
        NULL
    };
    memcpy(match___enter_subpattern_MatchVisitor_env_vtable, match___enter_subpattern_MatchVisitor_env_vtable_scratch, sizeof(match___enter_subpattern_MatchVisitor_env_vtable));
    return 1;
}

static PyMethodDef match___enter_subpattern_MatchVisitor_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_match___enter_subpattern_MatchVisitor_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_subpattern_MatchVisitor_env",
    .tp_new = match___enter_subpattern_MatchVisitor_env_new,
    .tp_dealloc = (destructor)match___enter_subpattern_MatchVisitor_env_dealloc,
    .tp_traverse = (traverseproc)match___enter_subpattern_MatchVisitor_env_traverse,
    .tp_clear = (inquiry)match___enter_subpattern_MatchVisitor_env_clear,
    .tp_methods = match___enter_subpattern_MatchVisitor_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_match___enter_subpattern_MatchVisitor_env_template = &CPyType_match___enter_subpattern_MatchVisitor_env_template_;

static PyObject *
match___enter_subpattern_MatchVisitor_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *self;
    self = (mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = match___enter_subpattern_MatchVisitor_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_match___enter_subpattern_MatchVisitor_env(void)
{
    PyObject *self = match___enter_subpattern_MatchVisitor_env_setup(CPyType_match___enter_subpattern_MatchVisitor_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *match___enter_subpattern_MatchVisitor_gen_setup(PyTypeObject *type);
PyObject *CPyDef_match___enter_subpattern_MatchVisitor_gen(void);

static PyObject *
match___enter_subpattern_MatchVisitor_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_match___enter_subpattern_MatchVisitor_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return match___enter_subpattern_MatchVisitor_gen_setup(type);
}

static int
match___enter_subpattern_MatchVisitor_gen_traverse(mypyc___irbuild___match___enter_subpattern_MatchVisitor_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
match___enter_subpattern_MatchVisitor_gen_clear(mypyc___irbuild___match___enter_subpattern_MatchVisitor_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
match___enter_subpattern_MatchVisitor_gen_dealloc(mypyc___irbuild___match___enter_subpattern_MatchVisitor_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, match___enter_subpattern_MatchVisitor_gen_dealloc)
    match___enter_subpattern_MatchVisitor_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem match___enter_subpattern_MatchVisitor_gen_vtable[6];
static bool
CPyDef_match___enter_subpattern_MatchVisitor_gen_trait_vtable_setup(void)
{
    CPyVTableItem match___enter_subpattern_MatchVisitor_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_match___enter_subpattern_MatchVisitor_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_match___enter_subpattern_MatchVisitor_gen_____next__,
        (CPyVTableItem)CPyDef_match___enter_subpattern_MatchVisitor_gen___send,
        (CPyVTableItem)CPyDef_match___enter_subpattern_MatchVisitor_gen_____iter__,
        (CPyVTableItem)CPyDef_match___enter_subpattern_MatchVisitor_gen___throw,
        (CPyVTableItem)CPyDef_match___enter_subpattern_MatchVisitor_gen___close,
    };
    memcpy(match___enter_subpattern_MatchVisitor_gen_vtable, match___enter_subpattern_MatchVisitor_gen_vtable_scratch, sizeof(match___enter_subpattern_MatchVisitor_gen_vtable));
    return 1;
}

static PyMethodDef match___enter_subpattern_MatchVisitor_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_match___enter_subpattern_MatchVisitor_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_match___enter_subpattern_MatchVisitor_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_match___enter_subpattern_MatchVisitor_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_match___enter_subpattern_MatchVisitor_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_match___enter_subpattern_MatchVisitor_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_match___enter_subpattern_MatchVisitor_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_match___enter_subpattern_MatchVisitor_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "enter_subpattern_MatchVisitor_gen",
    .tp_new = match___enter_subpattern_MatchVisitor_gen_new,
    .tp_dealloc = (destructor)match___enter_subpattern_MatchVisitor_gen_dealloc,
    .tp_traverse = (traverseproc)match___enter_subpattern_MatchVisitor_gen_traverse,
    .tp_clear = (inquiry)match___enter_subpattern_MatchVisitor_gen_clear,
    .tp_methods = match___enter_subpattern_MatchVisitor_gen_methods,
    .tp_iter = CPyDef_match___enter_subpattern_MatchVisitor_gen_____iter__,
    .tp_iternext = CPyDef_match___enter_subpattern_MatchVisitor_gen_____next__,
    .tp_basicsize = sizeof(mypyc___irbuild___match___enter_subpattern_MatchVisitor_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_match___enter_subpattern_MatchVisitor_gen_template = &CPyType_match___enter_subpattern_MatchVisitor_gen_template_;

static PyObject *
match___enter_subpattern_MatchVisitor_gen_setup(PyTypeObject *type)
{
    mypyc___irbuild___match___enter_subpattern_MatchVisitor_genObject *self;
    self = (mypyc___irbuild___match___enter_subpattern_MatchVisitor_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = match___enter_subpattern_MatchVisitor_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_match___enter_subpattern_MatchVisitor_gen(void)
{
    PyObject *self = match___enter_subpattern_MatchVisitor_gen_setup(CPyType_match___enter_subpattern_MatchVisitor_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef matchmodule_methods[] = {
    {"prep_sequence_pattern", (PyCFunction)CPyPy_match___prep_sequence_pattern, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef matchmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.match",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    matchmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___match(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___match_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___match_internal);
        return CPyModule_mypyc___irbuild___match_internal;
    }
    CPyModule_mypyc___irbuild___match_internal = PyModule_Create(&matchmodule);
    if (unlikely(CPyModule_mypyc___irbuild___match_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___match_internal, "__name__");
    CPyStatic_match___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___match_internal);
    if (unlikely(CPyStatic_match___globals == NULL))
        goto fail;
    CPyType_match___enter_subpattern_MatchVisitor_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_match___enter_subpattern_MatchVisitor_env_template, NULL, modname);
    if (unlikely(!CPyType_match___enter_subpattern_MatchVisitor_env))
        goto fail;
    CPyType_match___enter_subpattern_MatchVisitor_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_match___enter_subpattern_MatchVisitor_gen_template, NULL, modname);
    if (unlikely(!CPyType_match___enter_subpattern_MatchVisitor_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_match_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___match_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___match_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_match___MatchVisitor);
    Py_CLEAR(CPyType_match___enter_subpattern_MatchVisitor_env);
    Py_CLEAR(CPyType_match___enter_subpattern_MatchVisitor_gen);
    return NULL;
}

char CPyDef_match___MatchVisitor_____init__(PyObject *cpy_r_self, PyObject *cpy_r_builder, PyObject *cpy_r_match_node) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder = cpy_r_builder;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "__init__", 62, CPyStatic_match___globals);
        goto CPyL12;
    }
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_ops___BasicBlock(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "__init__", 64, CPyStatic_match___globals);
        goto CPyL12;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "__init__", 64, CPyStatic_match___globals);
        goto CPyL12;
    }
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_ops___BasicBlock(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "__init__", 65, CPyStatic_match___globals);
        goto CPyL12;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "__init__", 65, CPyStatic_match___globals);
        goto CPyL12;
    }
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPyDef_ops___BasicBlock(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "__init__", 66, CPyStatic_match___globals);
        goto CPyL12;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_final_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_final_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_final_block = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "__init__", 66, CPyStatic_match___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_match_node);
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_match != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_match);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_match = cpy_r_match_node;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "__init__", 68, CPyStatic_match___globals);
        goto CPyL12;
    }
    cpy_r_r11 = ((mypy___nodes___MatchStmtObject *)cpy_r_match_node)->_subject;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = 2;
    cpy_r_r13 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "__init__", 69, CPyStatic_match___globals);
        goto CPyL12;
    }
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "__init__", 69, CPyStatic_match___globals, "mypyc.ir.ops.Value", cpy_r_r13);
        goto CPyL12;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject = cpy_r_r14;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "__init__", 69, CPyStatic_match___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
}

PyObject *CPyPy_match___MatchVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"builder", "match_node", 0};
    PyObject *obj_builder;
    PyObject *obj_match_node;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_builder, &obj_match_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_match_node;
    if (likely(Py_TYPE(obj_match_node) == CPyType_nodes___MatchStmt))
        arg_match_node = obj_match_node;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_match_node); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor_____init__(arg_self, arg_builder, arg_match_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "__init__", 61, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___build_match_body(PyObject *cpy_r_self, CPyTagged cpy_r_index) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_guard;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_cond;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "build_match_body", "MatchVisitor", "builder", 72, CPyStatic_match___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "build_match_body", "MatchVisitor", "code_block", 72, CPyStatic_match___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "build_match_body", 72, CPyStatic_match___globals);
        goto CPyL29;
    }
    cpy_r_r3 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_match;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "build_match_body", "MatchVisitor", "match", 74, CPyStatic_match___globals);
        goto CPyL29;
    }
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___MatchStmtObject *)cpy_r_r3)->_guards;
    cpy_r_r5 = CPyList_GetItem(cpy_r_r4, cpy_r_index);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "build_match_body", 74, CPyStatic_match___globals);
        goto CPyL29;
    }
    if (PyObject_TypeCheck(cpy_r_r5, CPyType_nodes___Expression))
        cpy_r_r6 = cpy_r_r5;
    else {
        cpy_r_r6 = NULL;
    }
    if (cpy_r_r6 != NULL) goto __LL10380;
    if (cpy_r_r5 == Py_None)
        cpy_r_r6 = cpy_r_r5;
    else {
        cpy_r_r6 = NULL;
    }
    if (cpy_r_r6 != NULL) goto __LL10380;
    CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "build_match_body", 74, CPyStatic_match___globals, "mypy.nodes.Expression or None", cpy_r_r5);
    goto CPyL29;
__LL10380: ;
    cpy_r_guard = cpy_r_r6;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_guard != cpy_r_r7;
    if (!cpy_r_r8) goto CPyL31;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = CPyDef_ops___BasicBlock(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "build_match_body", 77, CPyStatic_match___globals);
        goto CPyL32;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "build_match_body", 77, CPyStatic_match___globals);
        goto CPyL32;
    }
    cpy_r_r12 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "build_match_body", "MatchVisitor", "builder", 79, CPyStatic_match___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r12);
CPyL10: ;
    if (likely(cpy_r_guard != Py_None))
        cpy_r_r13 = cpy_r_guard;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "build_match_body", 79, CPyStatic_match___globals, "mypy.nodes.Expression", cpy_r_guard);
        goto CPyL33;
    }
    cpy_r_r14 = 2;
    cpy_r_r15 = CPyDef_builder___IRBuilder___accept(cpy_r_r12, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "build_match_body", 79, CPyStatic_match___globals);
        goto CPyL29;
    }
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "build_match_body", 79, CPyStatic_match___globals, "mypyc.ir.ops.Value", cpy_r_r15);
        goto CPyL29;
    }
    cpy_r_cond = cpy_r_r16;
    cpy_r_r17 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "build_match_body", "MatchVisitor", "builder", 80, CPyStatic_match___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r17);
CPyL14: ;
    cpy_r_r18 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "build_match_body", "MatchVisitor", "code_block", 80, CPyStatic_match___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r18);
CPyL15: ;
    cpy_r_r19 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "build_match_body", "MatchVisitor", "next_block", 80, CPyStatic_match___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r19);
CPyL16: ;
    cpy_r_r20 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_r17, cpy_r_cond, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_cond);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "build_match_body", 80, CPyStatic_match___globals);
        goto CPyL29;
    }
    cpy_r_r21 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "build_match_body", "MatchVisitor", "builder", 82, CPyStatic_match___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r21);
CPyL18: ;
    cpy_r_r22 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "build_match_body", "MatchVisitor", "code_block", 82, CPyStatic_match___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r22);
CPyL19: ;
    cpy_r_r23 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "build_match_body", 82, CPyStatic_match___globals);
        goto CPyL29;
    }
CPyL20: ;
    cpy_r_r24 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "build_match_body", "MatchVisitor", "builder", 84, CPyStatic_match___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r24);
CPyL21: ;
    cpy_r_r25 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_match;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "build_match_body", "MatchVisitor", "match", 84, CPyStatic_match___globals);
        goto CPyL38;
    }
CPyL22: ;
    cpy_r_r26 = ((mypy___nodes___MatchStmtObject *)cpy_r_r25)->_bodies;
    cpy_r_r27 = CPyList_GetItem(cpy_r_r26, cpy_r_index);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "build_match_body", 84, CPyStatic_match___globals);
        goto CPyL38;
    }
    if (likely(Py_TYPE(cpy_r_r27) == CPyType_nodes___Block))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "build_match_body", 84, CPyStatic_match___globals, "mypy.nodes.Block", cpy_r_r27);
        goto CPyL38;
    }
    cpy_r_r29 = 2;
    cpy_r_r30 = CPyDef_builder___IRBuilder___accept(cpy_r_r24, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "build_match_body", 84, CPyStatic_match___globals);
        goto CPyL29;
    } else
        goto CPyL39;
CPyL25: ;
    cpy_r_r31 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "build_match_body", "MatchVisitor", "builder", 85, CPyStatic_match___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r31);
CPyL26: ;
    cpy_r_r32 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_final_block;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "build_match_body", "MatchVisitor", "final_block", 85, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r32);
CPyL27: ;
    cpy_r_r33 = CPyDef_builder___IRBuilder___goto(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "build_match_body", 85, CPyStatic_match___globals);
        goto CPyL29;
    }
    return 1;
CPyL29: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL29;
CPyL31: ;
    CPy_DECREF(cpy_r_guard);
    goto CPyL20;
CPyL32: ;
    CPy_DecRef(cpy_r_guard);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL29;
CPyL34: ;
    CPy_DecRef(cpy_r_cond);
    goto CPyL29;
CPyL35: ;
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_r17);
    goto CPyL29;
CPyL36: ;
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL29;
CPyL37: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL29;
CPyL38: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL29;
CPyL39: ;
    CPy_DECREF(cpy_r_r30);
    goto CPyL25;
CPyL40: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL29;
}

PyObject *CPyPy_match___MatchVisitor___build_match_body(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"index", 0};
    static CPyArg_Parser parser = {"O:build_match_body", kwlist, 0};
    PyObject *obj_index;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_index)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    CPyTagged arg_index;
    if (likely(PyLong_Check(obj_index)))
        arg_index = CPyTagged_BorrowFromObject(obj_index);
    else {
        CPy_TypeError("int", obj_index); goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___build_match_body(arg_self, arg_index);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "build_match_body", 71, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_match_stmt(PyObject *cpy_r_self, PyObject *cpy_r_m) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_pattern;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = 0;
    cpy_r_i = 0;
    cpy_r_r1 = ((mypy___nodes___MatchStmtObject *)cpy_r_m)->_patterns;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL1: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL18;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_patterns___Pattern)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_match_stmt", 88, CPyStatic_match___globals, "mypy.patterns.Pattern", cpy_r_r7);
        goto CPyL19;
    }
    cpy_r_pattern = cpy_r_r8;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = CPyDef_ops___BasicBlock(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_match_stmt", 89, CPyStatic_match___globals);
        goto CPyL20;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_match_stmt", 89, CPyStatic_match___globals);
        goto CPyL20;
    }
    cpy_r_r12 = CPY_INT_TAG;
    cpy_r_r13 = CPyDef_ops___BasicBlock(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_match_stmt", 90, CPyStatic_match___globals);
        goto CPyL20;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block = cpy_r_r13;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_match_stmt", 90, CPyStatic_match___globals);
        goto CPyL20;
    }
    cpy_r_r15 = CPY_GET_METHOD_TRAIT(cpy_r_pattern, CPyType_patterns___Pattern, 5, mypy___patterns___PatternObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_pattern, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_pattern);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_match_stmt", 92, CPyStatic_match___globals);
        goto CPyL19;
    } else
        goto CPyL21;
CPyL8: ;
    cpy_r_r16 = CPyDef_match___MatchVisitor___build_match_body(cpy_r_self, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_match_stmt", 94, CPyStatic_match___globals);
        goto CPyL22;
    }
    cpy_r_r17 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_match_stmt", "MatchVisitor", "builder", 95, CPyStatic_match___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r17);
CPyL10: ;
    cpy_r_r18 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_match_stmt", "MatchVisitor", "next_block", 95, CPyStatic_match___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r18);
CPyL11: ;
    cpy_r_r19 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_match_stmt", 95, CPyStatic_match___globals);
        goto CPyL22;
    }
    cpy_r_r20 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r20;
    cpy_r_i = cpy_r_r20;
    cpy_r_r21 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r21;
    goto CPyL1;
CPyL13: ;
    cpy_r_r22 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_match_stmt", "MatchVisitor", "builder", 97, CPyStatic_match___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r22);
CPyL14: ;
    cpy_r_r23 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_final_block;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_match_stmt", "MatchVisitor", "final_block", 97, CPyStatic_match___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r23);
CPyL15: ;
    cpy_r_r24 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_match_stmt", 97, CPyStatic_match___globals);
        goto CPyL17;
    }
    return 1;
CPyL17: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL18: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r1);
    goto CPyL13;
CPyL19: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r1);
    goto CPyL17;
CPyL20: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_pattern);
    goto CPyL17;
CPyL21: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL8;
CPyL22: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL17;
CPyL23: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r17);
    goto CPyL17;
CPyL24: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL17;
}

PyObject *CPyPy_match___MatchVisitor___visit_match_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"m", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt", kwlist, 0};
    PyObject *obj_m;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_m)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_m;
    if (likely(Py_TYPE(obj_m) == CPyType_nodes___MatchStmt))
        arg_m = obj_m;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_m); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_match_stmt(arg_self, arg_m);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_match_stmt", 87, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_match_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_match___MatchVisitor___visit_match_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_match_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_match_stmt__TraverserVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_match_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_match_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_match_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_match_stmt__NodeVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_match_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_match_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_match_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_match_stmt__StatementVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_value_pattern(PyObject *cpy_r_self, PyObject *cpy_r_pattern) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_cond;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_value_pattern", "MatchVisitor", "builder", 100, CPyStatic_match___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___patterns___ValuePatternObject *)cpy_r_pattern)->_expr;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 2;
    cpy_r_r3 = CPyDef_builder___IRBuilder___accept(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_value_pattern", 100, CPyStatic_match___globals);
        goto CPyL13;
    }
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_value_pattern", 100, CPyStatic_match___globals, "mypyc.ir.ops.Value", cpy_r_r3);
        goto CPyL13;
    }
    cpy_r_value = cpy_r_r4;
    cpy_r_r5 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_value_pattern", "MatchVisitor", "builder", 102, CPyStatic_match___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r5);
CPyL4: ;
    cpy_r_r6 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_value_pattern", "MatchVisitor", "subject", 102, CPyStatic_match___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = CPyStatics[860]; /* '==' */
    cpy_r_r8 = ((mypy___patterns___ValuePatternObject *)cpy_r_pattern)->_expr;
    cpy_r_r9 = ((mypy___nodes___ContextObject *)cpy_r_r8)->_line;
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_value_pattern", "Expression", "line", 102, CPyStatic_match___globals);
        goto CPyL16;
    }
    CPyTagged_INCREF(cpy_r_r9);
CPyL6: ;
    cpy_r_r10 = CPyDef_builder___IRBuilder___binary_op(cpy_r_r5, cpy_r_r6, cpy_r_value, cpy_r_r7, cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_value_pattern", 102, CPyStatic_match___globals);
        goto CPyL14;
    }
    cpy_r_cond = cpy_r_r10;
    cpy_r_r11 = 2;
    cpy_r_r12 = CPyDef_match___MatchVisitor___bind_as_pattern(cpy_r_self, cpy_r_value, cpy_r_r11);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_value_pattern", 104, CPyStatic_match___globals);
        goto CPyL17;
    }
    cpy_r_r13 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_value_pattern", "MatchVisitor", "builder", 106, CPyStatic_match___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r13);
CPyL9: ;
    cpy_r_r14 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_value_pattern", "MatchVisitor", "code_block", 106, CPyStatic_match___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r14);
CPyL10: ;
    cpy_r_r15 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_value_pattern", "MatchVisitor", "next_block", 106, CPyStatic_match___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r15);
CPyL11: ;
    cpy_r_r16 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_r13, cpy_r_cond, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_cond);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_value_pattern", 106, CPyStatic_match___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL14: ;
    CPy_DecRef(cpy_r_value);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r5);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_cond);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_r13);
    goto CPyL13;
CPyL19: ;
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL13;
}

PyObject *CPyPy_match___MatchVisitor___visit_value_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"pattern", 0};
    static CPyArg_Parser parser = {"O:visit_value_pattern", kwlist, 0};
    PyObject *obj_pattern;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_pattern)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_pattern;
    if (likely(Py_TYPE(obj_pattern) == CPyType_patterns___ValuePattern))
        arg_pattern = obj_pattern;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_pattern); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_value_pattern(arg_self, arg_pattern);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_value_pattern", 99, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_value_pattern__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_value_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_match___MatchVisitor___visit_value_pattern__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_value_pattern__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ValuePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_o); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_value_pattern__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_value_pattern__TraverserVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_value_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_value_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_value_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_value_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ValuePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_value_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_value_pattern__NodeVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_value_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_value_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_value_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_value_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ValuePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_value_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_value_pattern__PatternVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_or_pattern(PyObject *cpy_r_self, PyObject *cpy_r_pattern) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_backup_block;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_backup;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_or_pattern", "MatchVisitor", "next_block", 109, CPyStatic_match___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_backup_block = cpy_r_r0;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_ops___BasicBlock(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_or_pattern", 110, CPyStatic_match___globals);
        goto CPyL21;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_or_pattern", 110, CPyStatic_match___globals);
        goto CPyL21;
    }
    cpy_r_r4 = ((mypy___patterns___OrPatternObject *)cpy_r_pattern)->_patterns;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = 0;
CPyL4: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL22;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r4, cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_patterns___Pattern)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_or_pattern", 112, CPyStatic_match___globals, "mypy.patterns.Pattern", cpy_r_r10);
        goto CPyL23;
    }
    cpy_r_p = cpy_r_r11;
    cpy_r_r12 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_or_pattern", "MatchVisitor", "as_pattern", 115, CPyStatic_match___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r12);
CPyL7: ;
    cpy_r_backup = cpy_r_r12;
    cpy_r_r13 = CPY_GET_METHOD_TRAIT(cpy_r_p, CPyType_patterns___Pattern, 5, mypy___patterns___PatternObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_p, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_p);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_or_pattern", 116, CPyStatic_match___globals);
        goto CPyL25;
    } else
        goto CPyL26;
CPyL8: ;
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern = cpy_r_backup;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_or_pattern", 117, CPyStatic_match___globals);
        goto CPyL23;
    }
    cpy_r_r15 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_or_pattern", "MatchVisitor", "builder", 119, CPyStatic_match___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r15);
CPyL10: ;
    cpy_r_r16 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_or_pattern", "MatchVisitor", "next_block", 119, CPyStatic_match___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r16);
CPyL11: ;
    cpy_r_r17 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_or_pattern", 119, CPyStatic_match___globals);
        goto CPyL23;
    }
    cpy_r_r18 = CPY_INT_TAG;
    cpy_r_r19 = CPyDef_ops___BasicBlock(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_or_pattern", 120, CPyStatic_match___globals);
        goto CPyL23;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block = cpy_r_r19;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_or_pattern", 120, CPyStatic_match___globals);
        goto CPyL23;
    }
    cpy_r_r21 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r21;
    goto CPyL4;
CPyL15: ;
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block = cpy_r_backup_block;
    cpy_r_r22 = 1;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_or_pattern", 122, CPyStatic_match___globals);
        goto CPyL20;
    }
    cpy_r_r23 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_or_pattern", "MatchVisitor", "builder", 123, CPyStatic_match___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r23);
CPyL17: ;
    cpy_r_r24 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_or_pattern", "MatchVisitor", "next_block", 123, CPyStatic_match___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r24);
CPyL18: ;
    cpy_r_r25 = CPyDef_builder___IRBuilder___goto(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_or_pattern", 123, CPyStatic_match___globals);
        goto CPyL20;
    }
    return 1;
CPyL20: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL21: ;
    CPy_DecRef(cpy_r_backup_block);
    goto CPyL20;
CPyL22: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL15;
CPyL23: ;
    CPy_DecRef(cpy_r_backup_block);
    CPy_DecRef(cpy_r_r4);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_backup_block);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_p);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_backup_block);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_backup);
    goto CPyL20;
CPyL26: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL8;
CPyL27: ;
    CPy_DecRef(cpy_r_backup_block);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r15);
    goto CPyL20;
CPyL28: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL20;
}

PyObject *CPyPy_match___MatchVisitor___visit_or_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"pattern", 0};
    static CPyArg_Parser parser = {"O:visit_or_pattern", kwlist, 0};
    PyObject *obj_pattern;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_pattern)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_pattern;
    if (likely(Py_TYPE(obj_pattern) == CPyType_patterns___OrPattern))
        arg_pattern = obj_pattern;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_pattern); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_or_pattern(arg_self, arg_pattern);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_or_pattern", 108, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_or_pattern__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_or_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_match___MatchVisitor___visit_or_pattern__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_or_pattern__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___OrPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_o); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_or_pattern__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_or_pattern__TraverserVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_or_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_or_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_or_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_or_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___OrPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_or_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_or_pattern__NodeVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_or_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_or_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_or_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_or_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___OrPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_or_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_or_pattern__PatternVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_class_pattern(PyObject *cpy_r_self, PyObject *cpy_r_pattern) {
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
    PyObject *cpy_r_isinstance_op;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_cond;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_ty;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_match_args_type;
    PyObject *cpy_r_r78;
    CPyPtr cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_match_args;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyTagged cpy_r_r86;
    CPyPtr cpy_r_r87;
    int64_t cpy_r_r88;
    CPyTagged cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_proper_item;
    PyObject *cpy_r_r95;
    CPyPtr cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_match_arg;
    PyObject *cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    CPyTagged cpy_r_r119;
    CPyTagged cpy_r_r120;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r121;
    CPyTagged cpy_r_r122;
    CPyPtr cpy_r_r123;
    int64_t cpy_r_r124;
    CPyTagged cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    CPyTagged cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    CPyTagged cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_positional;
    PyObject *cpy_r_r141;
    PyObject **cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject **cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    tuple_T3OOO cpy_r_r155;
    tuple_T3OOO cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject **cpy_r_r161;
    PyObject *cpy_r_r162;
    int32_t cpy_r_r163;
    char cpy_r_r164;
    char cpy_r_r165;
    char cpy_r_r166;
    tuple_T3OOO cpy_r_r167;
    tuple_T3OOO cpy_r_r168;
    tuple_T3OOO cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject **cpy_r_r172;
    PyObject *cpy_r_r173;
    char cpy_r_r174;
    CPyTagged cpy_r_r175;
    CPyTagged cpy_r_r176;
    PyObject *cpy_r_r177;
    CPyTagged cpy_r_r178;
    PyObject *cpy_r_r179;
    CPyTagged cpy_r_r180;
    CPyPtr cpy_r_r181;
    int64_t cpy_r_r182;
    CPyTagged cpy_r_r183;
    char cpy_r_r184;
    CPyPtr cpy_r_r185;
    int64_t cpy_r_r186;
    CPyTagged cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    CPyTagged cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    CPyTagged cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r203;
    PyObject **cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject **cpy_r_r213;
    PyObject *cpy_r_r214;
    char cpy_r_r215;
    PyObject *cpy_r_r216;
    tuple_T3OOO cpy_r_r217;
    tuple_T3OOO cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject **cpy_r_r223;
    PyObject *cpy_r_r224;
    int32_t cpy_r_r225;
    char cpy_r_r226;
    char cpy_r_r227;
    char cpy_r_r228;
    tuple_T3OOO cpy_r_r229;
    tuple_T3OOO cpy_r_r230;
    tuple_T3OOO cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject **cpy_r_r234;
    PyObject *cpy_r_r235;
    char cpy_r_r236;
    CPyTagged cpy_r_r237;
    CPyTagged cpy_r_r238;
    char cpy_r_r239;
    cpy_r_r0 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "builder", 130, CPyStatic_match___globals);
        goto CPyL163;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___patterns___ClassPatternObject *)cpy_r_pattern)->_class_ref;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_builder___IRBuilder___is_builtin_ref_expr(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 130, CPyStatic_match___globals);
        goto CPyL163;
    }
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = CPyStatic_match___globals;
    cpy_r_r4 = CPyStatics[8395]; /* 'fast_isinstance_op' */
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 129, CPyStatic_match___globals);
        goto CPyL163;
    }
    if (likely(PyTuple_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 129, CPyStatic_match___globals, "tuple", cpy_r_r5);
        goto CPyL163;
    }
    cpy_r_r7 = cpy_r_r6;
    goto CPyL9;
CPyL6: ;
    cpy_r_r8 = CPyStatic_match___globals;
    cpy_r_r9 = CPyStatics[8473]; /* 'slow_isinstance_op' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 131, CPyStatic_match___globals);
        goto CPyL163;
    }
    if (likely(PyTuple_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 131, CPyStatic_match___globals, "tuple", cpy_r_r10);
        goto CPyL163;
    }
    cpy_r_r7 = cpy_r_r11;
CPyL9: ;
    cpy_r_isinstance_op = cpy_r_r7;
    cpy_r_r12 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "builder", 134, CPyStatic_match___globals);
        goto CPyL164;
    }
    CPy_INCREF(cpy_r_r12);
CPyL10: ;
    cpy_r_r13 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "subject", 135, CPyStatic_match___globals);
        goto CPyL165;
    }
    CPy_INCREF(cpy_r_r13);
CPyL11: ;
    cpy_r_r14 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "builder", 135, CPyStatic_match___globals);
        goto CPyL166;
    }
    CPy_INCREF(cpy_r_r14);
CPyL12: ;
    cpy_r_r15 = ((mypy___patterns___ClassPatternObject *)cpy_r_pattern)->_class_ref;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = 2;
    cpy_r_r17 = CPyDef_builder___IRBuilder___accept(cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 135, CPyStatic_match___globals);
        goto CPyL166;
    }
    if (likely(cpy_r_r17 != Py_None))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 135, CPyStatic_match___globals, "mypyc.ir.ops.Value", cpy_r_r17);
        goto CPyL166;
    }
    cpy_r_r19 = PyList_New(2);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 135, CPyStatic_match___globals);
        goto CPyL167;
    }
    cpy_r_r20 = (CPyPtr)&((PyListObject *)cpy_r_r19)->ob_item;
    cpy_r_r21 = *(CPyPtr *)cpy_r_r20;
    *(PyObject * *)cpy_r_r21 = cpy_r_r13;
    cpy_r_r22 = cpy_r_r21 + 8;
    *(PyObject * *)cpy_r_r22 = cpy_r_r18;
    cpy_r_r23 = ((mypy___patterns___ClassPatternObject *)cpy_r_pattern)->_line;
    CPyTagged_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyDef_builder___IRBuilder___call_c(cpy_r_r12, cpy_r_isinstance_op, cpy_r_r19, cpy_r_r23);
    CPy_DECREF(cpy_r_isinstance_op);
    CPy_DECREF(cpy_r_r19);
    CPyTagged_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 134, CPyStatic_match___globals);
        goto CPyL163;
    }
    cpy_r_cond = cpy_r_r24;
    cpy_r_r25 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "builder", 138, CPyStatic_match___globals);
        goto CPyL168;
    }
    CPy_INCREF(cpy_r_r25);
CPyL17: ;
    cpy_r_r26 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "code_block", 138, CPyStatic_match___globals);
        goto CPyL169;
    }
    CPy_INCREF(cpy_r_r26);
CPyL18: ;
    cpy_r_r27 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "next_block", 138, CPyStatic_match___globals);
        goto CPyL170;
    }
    CPy_INCREF(cpy_r_r27);
CPyL19: ;
    cpy_r_r28 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_r25, cpy_r_cond, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_cond);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 138, CPyStatic_match___globals);
        goto CPyL163;
    }
    cpy_r_r29 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "subject", 140, CPyStatic_match___globals);
        goto CPyL163;
    }
    CPy_INCREF(cpy_r_r29);
CPyL21: ;
    cpy_r_r30 = CPyDef_match___MatchVisitor___bind_as_pattern(cpy_r_self, cpy_r_r29, 1);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 140, CPyStatic_match___globals);
        goto CPyL163;
    }
    cpy_r_r31 = ((mypy___patterns___ClassPatternObject *)cpy_r_pattern)->_positionals;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_r31)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    CPy_DECREF(cpy_r_r31);
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = cpy_r_r34 != 0;
    if (!cpy_r_r35) goto CPyL121;
    cpy_r_r36 = ((mypy___patterns___ClassPatternObject *)cpy_r_pattern)->_class_ref;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = CPY_GET_ATTR(cpy_r_r36, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 143, CPyStatic_match___globals);
        goto CPyL163;
    }
CPyL24: ;
    cpy_r_r38 = CPyStatic_match___globals;
    cpy_r_r39 = CPyStatics[8474]; /* 'MATCHABLE_BUILTINS' */
    cpy_r_r40 = CPyDict_GetItem(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 143, CPyStatic_match___globals);
        goto CPyL171;
    }
    if (likely(PySet_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 143, CPyStatic_match___globals, "set", cpy_r_r40);
        goto CPyL171;
    }
    cpy_r_r42 = PySet_Contains(cpy_r_r41, cpy_r_r37);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 143, CPyStatic_match___globals);
        goto CPyL163;
    }
    cpy_r_r44 = cpy_r_r42;
    if (!cpy_r_r44) goto CPyL37;
    cpy_r_r45 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "builder", 144, CPyStatic_match___globals);
        goto CPyL163;
    }
    CPy_INCREF(cpy_r_r45);
CPyL29: ;
    cpy_r_r46 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "code_block", 144, CPyStatic_match___globals);
        goto CPyL172;
    }
    CPy_INCREF(cpy_r_r46);
CPyL30: ;
    cpy_r_r47 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 144, CPyStatic_match___globals);
        goto CPyL163;
    }
    cpy_r_r48 = CPY_INT_TAG;
    cpy_r_r49 = CPyDef_ops___BasicBlock(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 145, CPyStatic_match___globals);
        goto CPyL163;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block = cpy_r_r49;
    cpy_r_r50 = 1;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 145, CPyStatic_match___globals);
        goto CPyL163;
    }
    cpy_r_r51 = ((mypy___patterns___ClassPatternObject *)cpy_r_pattern)->_positionals;
    cpy_r_r52 = CPyList_GetItemShort(cpy_r_r51, 0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 147, CPyStatic_match___globals);
        goto CPyL163;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r52, CPyType_patterns___Pattern)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 147, CPyStatic_match___globals, "mypy.patterns.Pattern", cpy_r_r52);
        goto CPyL163;
    }
    cpy_r_r54 = CPY_GET_METHOD_TRAIT(cpy_r_r53, CPyType_patterns___Pattern, 5, mypy___patterns___PatternObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r53, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 147, CPyStatic_match___globals);
        goto CPyL163;
    } else
        goto CPyL173;
CPyL36: ;
    return 1;
CPyL37: ;
    cpy_r_r55 = ((mypy___patterns___ClassPatternObject *)cpy_r_pattern)->_class_ref;
    cpy_r_r56 = ((mypy___nodes___RefExprObject *)cpy_r_r55)->_node;
    CPy_INCREF(cpy_r_r56);
    cpy_r_node = cpy_r_r56;
    cpy_r_r57 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    if (!cpy_r_r60) goto CPyL39;
    cpy_r_r61 = cpy_r_r60;
    goto CPyL40;
CPyL39: ;
    cpy_r_r62 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r63 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r64 = *(PyObject * *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 == cpy_r_r62;
    cpy_r_r61 = cpy_r_r65;
CPyL40: ;
    if (cpy_r_r61) {
        goto CPyL43;
    } else
        goto CPyL174;
CPyL41: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r66 = 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 152, CPyStatic_match___globals);
        goto CPyL163;
    }
    CPy_Unreachable();
CPyL43: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r67 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 154, CPyStatic_match___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL175;
    }
    cpy_r_r68 = ((mypy___nodes___TypeInfoObject *)cpy_r_r67)->_names;
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "TypeInfo", "names", 154, CPyStatic_match___globals);
        goto CPyL175;
    }
    CPy_INCREF(cpy_r_r68);
CPyL45: ;
    CPy_DECREF(cpy_r_node);
    cpy_r_r69 = CPyStatics[786]; /* '__match_args__' */
    cpy_r_r70 = CPyDict_GetWithNone(cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 154, CPyStatic_match___globals);
        goto CPyL163;
    }
    if (Py_TYPE(cpy_r_r70) == CPyType_nodes___SymbolTableNode)
        cpy_r_r71 = cpy_r_r70;
    else {
        cpy_r_r71 = NULL;
    }
    if (cpy_r_r71 != NULL) goto __LL10381;
    if (cpy_r_r70 == Py_None)
        cpy_r_r71 = cpy_r_r70;
    else {
        cpy_r_r71 = NULL;
    }
    if (cpy_r_r71 != NULL) goto __LL10381;
    CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 154, CPyStatic_match___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r70);
    goto CPyL163;
__LL10381: ;
    cpy_r_ty = cpy_r_r71;
    cpy_r_r72 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r73 = cpy_r_ty != cpy_r_r72;
    if (cpy_r_r73) {
        goto CPyL50;
    } else
        goto CPyL176;
CPyL48: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r74 = 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 155, CPyStatic_match___globals);
        goto CPyL163;
    }
    CPy_Unreachable();
CPyL50: ;
    if (likely(cpy_r_ty != Py_None))
        cpy_r_r75 = cpy_r_ty;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 157, CPyStatic_match___globals, "mypy.nodes.SymbolTableNode", cpy_r_ty);
        goto CPyL163;
    }
    cpy_r_r76 = CPY_GET_ATTR(cpy_r_r75, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 157, CPyStatic_match___globals);
        goto CPyL163;
    }
CPyL52: ;
    cpy_r_r77 = CPyDef_types___get_proper_type(cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 157, CPyStatic_match___globals);
        goto CPyL163;
    }
    cpy_r_match_args_type = cpy_r_r77;
    cpy_r_r78 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r79 = (CPyPtr)&((PyObject *)cpy_r_match_args_type)->ob_type;
    cpy_r_r80 = *(PyObject * *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 == cpy_r_r78;
    if (cpy_r_r81) {
        goto CPyL56;
    } else
        goto CPyL177;
CPyL54: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r82 = 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 158, CPyStatic_match___globals);
        goto CPyL163;
    }
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r83 = PyList_New(0);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 160, CPyStatic_match___globals);
        goto CPyL178;
    }
    cpy_r_match_args = cpy_r_r83;
    if (likely(Py_TYPE(cpy_r_match_args_type) == CPyType_types___TupleType))
        cpy_r_r84 = cpy_r_match_args_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 162, CPyStatic_match___globals, "mypy.types.TupleType", cpy_r_match_args_type);
        goto CPyL179;
    }
    cpy_r_r85 = ((mypy___types___TupleTypeObject *)cpy_r_r84)->_items;
    CPy_INCREF(cpy_r_r85);
    CPy_DECREF(cpy_r_match_args_type);
    cpy_r_r86 = 0;
CPyL59: ;
    cpy_r_r87 = (CPyPtr)&((PyVarObject *)cpy_r_r85)->ob_size;
    cpy_r_r88 = *(int64_t *)cpy_r_r87;
    cpy_r_r89 = cpy_r_r88 << 1;
    cpy_r_r90 = (Py_ssize_t)cpy_r_r86 < (Py_ssize_t)cpy_r_r89;
    if (!cpy_r_r90) goto CPyL180;
    cpy_r_r91 = CPyList_GetItemUnsafe(cpy_r_r85, cpy_r_r86);
    if (likely(PyObject_TypeCheck(cpy_r_r91, CPyType_types___Type)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 162, CPyStatic_match___globals, "mypy.types.Type", cpy_r_r91);
        goto CPyL181;
    }
    cpy_r_item = cpy_r_r92;
    cpy_r_r93 = CPyDef_types___get_proper_type(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 163, CPyStatic_match___globals);
        goto CPyL181;
    }
    if (likely(cpy_r_r93 != Py_None))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 163, CPyStatic_match___globals, "mypy.types.ProperType", cpy_r_r93);
        goto CPyL181;
    }
    cpy_r_proper_item = cpy_r_r94;
    cpy_r_r95 = (PyObject *)CPyType_types___Instance;
    cpy_r_r96 = (CPyPtr)&((PyObject *)cpy_r_proper_item)->ob_type;
    cpy_r_r97 = *(PyObject * *)cpy_r_r96;
    cpy_r_r98 = cpy_r_r97 == cpy_r_r95;
    if (cpy_r_r98) goto CPyL65;
    cpy_r_r99 = cpy_r_r98 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r99);
    cpy_r_r100 = cpy_r_r99;
    goto CPyL67;
CPyL65: ;
    if (likely(Py_TYPE(cpy_r_proper_item) == CPyType_types___Instance))
        cpy_r_r101 = cpy_r_proper_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 164, CPyStatic_match___globals, "mypy.types.Instance", cpy_r_proper_item);
        goto CPyL182;
    }
    cpy_r_r102 = ((mypy___types___InstanceObject *)cpy_r_r101)->_last_known_value;
    CPy_INCREF(cpy_r_r102);
    cpy_r_r100 = cpy_r_r102;
CPyL67: ;
    cpy_r_r103 = PyObject_IsTrue(cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", -1, CPyStatic_match___globals);
        goto CPyL182;
    }
    cpy_r_r105 = cpy_r_r103;
    if (cpy_r_r105) {
        goto CPyL71;
    } else
        goto CPyL183;
CPyL69: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r106 = 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 164, CPyStatic_match___globals);
        goto CPyL163;
    }
    CPy_Unreachable();
CPyL71: ;
    if (likely(Py_TYPE(cpy_r_proper_item) == CPyType_types___Instance))
        cpy_r_r107 = cpy_r_proper_item;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 166, CPyStatic_match___globals, "mypy.types.Instance", cpy_r_proper_item);
        goto CPyL182;
    }
    cpy_r_r108 = ((mypy___types___InstanceObject *)cpy_r_r107)->_last_known_value;
    if (likely(cpy_r_r108 != Py_None))
        cpy_r_r109 = cpy_r_r108;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 166, CPyStatic_match___globals, "mypy.types.LiteralType", cpy_r_r108);
        goto CPyL182;
    }
    cpy_r_r110 = ((mypy___types___LiteralTypeObject *)cpy_r_r109)->_value;
    CPy_INCREF(cpy_r_r110);
    CPy_DECREF(cpy_r_proper_item);
    cpy_r_match_arg = cpy_r_r110;
    cpy_r_r111 = (PyObject *)&PyUnicode_Type;
    cpy_r_r112 = PyObject_IsInstance(cpy_r_match_arg, cpy_r_r111);
    cpy_r_r113 = cpy_r_r112 >= 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 167, CPyStatic_match___globals);
        goto CPyL184;
    }
    cpy_r_r114 = cpy_r_r112;
    if (cpy_r_r114) {
        goto CPyL77;
    } else
        goto CPyL185;
CPyL75: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r115 = 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 167, CPyStatic_match___globals);
        goto CPyL163;
    }
    CPy_Unreachable();
CPyL77: ;
    if (likely(PyUnicode_Check(cpy_r_match_arg)))
        cpy_r_r116 = cpy_r_match_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 169, CPyStatic_match___globals, "str", cpy_r_match_arg);
        goto CPyL181;
    }
    cpy_r_r117 = PyList_Append(cpy_r_match_args, cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 169, CPyStatic_match___globals);
        goto CPyL181;
    }
    cpy_r_r119 = cpy_r_r86 + 2;
    cpy_r_r86 = cpy_r_r119;
    goto CPyL59;
CPyL80: ;
    cpy_r_r120 = 0;
    cpy_r_i = 0;
    cpy_r_r121 = ((mypy___patterns___ClassPatternObject *)cpy_r_pattern)->_positionals;
    CPy_INCREF(cpy_r_r121);
    cpy_r_r122 = 0;
CPyL81: ;
    cpy_r_r123 = (CPyPtr)&((PyVarObject *)cpy_r_r121)->ob_size;
    cpy_r_r124 = *(int64_t *)cpy_r_r123;
    cpy_r_r125 = cpy_r_r124 << 1;
    cpy_r_r126 = (Py_ssize_t)cpy_r_r122 < (Py_ssize_t)cpy_r_r125;
    if (!cpy_r_r126) goto CPyL186;
    cpy_r_r127 = CPyList_GetItemUnsafe(cpy_r_r121, cpy_r_r122);
    if (likely(PyObject_TypeCheck(cpy_r_r127, CPyType_patterns___Pattern)))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 171, CPyStatic_match___globals, "mypy.patterns.Pattern", cpy_r_r127);
        goto CPyL187;
    }
    cpy_r_expr = cpy_r_r128;
    cpy_r_r129 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "builder", 172, CPyStatic_match___globals);
        goto CPyL188;
    }
    CPy_INCREF(cpy_r_r129);
CPyL84: ;
    cpy_r_r130 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "code_block", 172, CPyStatic_match___globals);
        goto CPyL189;
    }
    CPy_INCREF(cpy_r_r130);
CPyL85: ;
    cpy_r_r131 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r129, cpy_r_r130);
    CPy_DECREF(cpy_r_r130);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r131 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 172, CPyStatic_match___globals);
        goto CPyL188;
    }
    cpy_r_r132 = CPY_INT_TAG;
    cpy_r_r133 = CPyDef_ops___BasicBlock(cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 173, CPyStatic_match___globals);
        goto CPyL188;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block = cpy_r_r133;
    cpy_r_r134 = 1;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 173, CPyStatic_match___globals);
        goto CPyL188;
    }
    cpy_r_r135 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "builder", 177, CPyStatic_match___globals);
        goto CPyL188;
    }
    CPy_INCREF(cpy_r_r135);
CPyL89: ;
    cpy_r_r136 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "subject", 177, CPyStatic_match___globals);
        goto CPyL190;
    }
    CPy_INCREF(cpy_r_r136);
CPyL90: ;
    cpy_r_r137 = CPyList_GetItem(cpy_r_match_args, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 177, CPyStatic_match___globals);
        goto CPyL191;
    }
    if (likely(PyUnicode_Check(cpy_r_r137)))
        cpy_r_r138 = cpy_r_r137;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 177, CPyStatic_match___globals, "str", cpy_r_r137);
        goto CPyL191;
    }
    cpy_r_r139 = ((mypy___nodes___ContextObject *)cpy_r_expr)->_line;
    if (unlikely(cpy_r_r139 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "Pattern", "line", 177, CPyStatic_match___globals);
        goto CPyL192;
    }
    CPyTagged_INCREF(cpy_r_r139);
CPyL93: ;
    cpy_r_r140 = CPyDef_builder___IRBuilder___py_get_attr(cpy_r_r135, cpy_r_r136, cpy_r_r138, cpy_r_r139);
    CPy_DECREF(cpy_r_r136);
    CPy_DECREF(cpy_r_r138);
    CPyTagged_DECREF(cpy_r_r139);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 177, CPyStatic_match___globals);
        goto CPyL193;
    }
    cpy_r_positional = cpy_r_r140;
    cpy_r_r141 = CPyStatics[8475]; /* 'enter_subpattern' */
    PyObject *cpy_r_r142[2] = {cpy_r_self, cpy_r_positional};
    cpy_r_r143 = (PyObject **)&cpy_r_r142;
    cpy_r_r144 = PyObject_VectorcallMethod(cpy_r_r141, cpy_r_r143, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 179, CPyStatic_match___globals);
        goto CPyL194;
    }
    CPy_DECREF(cpy_r_positional);
    cpy_r_r145 = PyObject_Type(cpy_r_r144);
    cpy_r_r146 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r147 = CPyObject_GetAttr(cpy_r_r145, cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 179, CPyStatic_match___globals);
        goto CPyL195;
    }
    cpy_r_r148 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r149 = CPyObject_GetAttr(cpy_r_r145, cpy_r_r148);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 179, CPyStatic_match___globals);
        goto CPyL196;
    }
    PyObject *cpy_r_r150[1] = {cpy_r_r144};
    cpy_r_r151 = (PyObject **)&cpy_r_r150;
    cpy_r_r152 = _PyObject_Vectorcall(cpy_r_r149, cpy_r_r151, 1, 0);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 179, CPyStatic_match___globals);
        goto CPyL196;
    } else
        goto CPyL197;
CPyL98: ;
    cpy_r_r153 = 1;
    cpy_r_r154 = CPY_GET_METHOD_TRAIT(cpy_r_expr, CPyType_patterns___Pattern, 5, mypy___patterns___PatternObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_expr, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_expr);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 180, CPyStatic_match___globals);
    } else
        goto CPyL198;
    cpy_r_r155 = CPy_CatchError();
    cpy_r_r153 = 0;
    cpy_r_r156 = CPy_GetExcInfo();
    cpy_r_r157 = cpy_r_r156.f0;
    CPy_INCREF(cpy_r_r157);
    cpy_r_r158 = cpy_r_r156.f1;
    CPy_INCREF(cpy_r_r158);
    cpy_r_r159 = cpy_r_r156.f2;
    CPy_INCREF(cpy_r_r159);
    CPy_DecRef(cpy_r_r156.f0);
    CPy_DecRef(cpy_r_r156.f1);
    CPy_DecRef(cpy_r_r156.f2);
    PyObject *cpy_r_r160[4] = {cpy_r_r144, cpy_r_r157, cpy_r_r158, cpy_r_r159};
    cpy_r_r161 = (PyObject **)&cpy_r_r160;
    cpy_r_r162 = _PyObject_Vectorcall(cpy_r_r147, cpy_r_r161, 4, 0);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 179, CPyStatic_match___globals);
        goto CPyL199;
    }
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_r159);
    cpy_r_r163 = PyObject_IsTrue(cpy_r_r162);
    CPy_DecRef(cpy_r_r162);
    cpy_r_r164 = cpy_r_r163 >= 0;
    if (unlikely(!cpy_r_r164)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 179, CPyStatic_match___globals);
        goto CPyL106;
    }
    cpy_r_r165 = cpy_r_r163;
    if (cpy_r_r165) goto CPyL105;
    CPy_Reraise();
    if (!0) {
        goto CPyL106;
    } else
        goto CPyL200;
CPyL104: ;
    CPy_Unreachable();
CPyL105: ;
    CPy_RestoreExcInfo(cpy_r_r155);
    CPy_DecRef(cpy_r_r155.f0);
    CPy_DecRef(cpy_r_r155.f1);
    CPy_DecRef(cpy_r_r155.f2);
    goto CPyL108;
CPyL106: ;
    CPy_RestoreExcInfo(cpy_r_r155);
    CPy_DecRef(cpy_r_r155.f0);
    CPy_DecRef(cpy_r_r155.f1);
    CPy_DecRef(cpy_r_r155.f2);
    cpy_r_r166 = CPy_KeepPropagating();
    if (!cpy_r_r166) {
        goto CPyL109;
    } else
        goto CPyL201;
CPyL107: ;
    CPy_Unreachable();
CPyL108: ;
    tuple_T3OOO __tmp10382 = { NULL, NULL, NULL };
    cpy_r_r167 = __tmp10382;
    cpy_r_r168 = cpy_r_r167;
    goto CPyL110;
CPyL109: ;
    cpy_r_r169 = CPy_CatchError();
    cpy_r_r168 = cpy_r_r169;
CPyL110: ;
    if (!cpy_r_r153) goto CPyL202;
    cpy_r_r170 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r171[4] = {cpy_r_r144, cpy_r_r170, cpy_r_r170, cpy_r_r170};
    cpy_r_r172 = (PyObject **)&cpy_r_r171;
    cpy_r_r173 = _PyObject_Vectorcall(cpy_r_r147, cpy_r_r172, 4, 0);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 179, CPyStatic_match___globals);
        goto CPyL203;
    } else
        goto CPyL204;
CPyL112: ;
    CPy_DECREF(cpy_r_r144);
CPyL113: ;
    if (cpy_r_r168.f0 == NULL) {
        goto CPyL120;
    } else
        goto CPyL205;
CPyL114: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL116;
    } else
        goto CPyL206;
CPyL115: ;
    CPy_Unreachable();
CPyL116: ;
    if (cpy_r_r168.f0 == NULL) goto CPyL118;
    CPy_RestoreExcInfo(cpy_r_r168);
    CPy_XDECREF(cpy_r_r168.f0);
    CPy_XDECREF(cpy_r_r168.f1);
    CPy_XDECREF(cpy_r_r168.f2);
CPyL118: ;
    cpy_r_r174 = CPy_KeepPropagating();
    if (!cpy_r_r174) goto CPyL163;
    CPy_Unreachable();
CPyL120: ;
    cpy_r_r175 = cpy_r_r120 + 2;
    cpy_r_r120 = cpy_r_r175;
    cpy_r_i = cpy_r_r175;
    cpy_r_r176 = cpy_r_r122 + 2;
    cpy_r_r122 = cpy_r_r176;
    goto CPyL81;
CPyL121: ;
    cpy_r_r177 = ((mypy___patterns___ClassPatternObject *)cpy_r_pattern)->_keyword_keys;
    CPy_INCREF(cpy_r_r177);
    cpy_r_r178 = 0;
    cpy_r_r179 = ((mypy___patterns___ClassPatternObject *)cpy_r_pattern)->_keyword_values;
    CPy_INCREF(cpy_r_r179);
    cpy_r_r180 = 0;
CPyL122: ;
    cpy_r_r181 = (CPyPtr)&((PyVarObject *)cpy_r_r177)->ob_size;
    cpy_r_r182 = *(int64_t *)cpy_r_r181;
    cpy_r_r183 = cpy_r_r182 << 1;
    cpy_r_r184 = (Py_ssize_t)cpy_r_r178 < (Py_ssize_t)cpy_r_r183;
    if (!cpy_r_r184) goto CPyL207;
    cpy_r_r185 = (CPyPtr)&((PyVarObject *)cpy_r_r179)->ob_size;
    cpy_r_r186 = *(int64_t *)cpy_r_r185;
    cpy_r_r187 = cpy_r_r186 << 1;
    cpy_r_r188 = (Py_ssize_t)cpy_r_r180 < (Py_ssize_t)cpy_r_r187;
    if (!cpy_r_r188) goto CPyL207;
    cpy_r_r189 = CPyList_GetItemUnsafe(cpy_r_r177, cpy_r_r178);
    if (likely(PyUnicode_Check(cpy_r_r189)))
        cpy_r_r190 = cpy_r_r189;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 182, CPyStatic_match___globals, "str", cpy_r_r189);
        goto CPyL208;
    }
    cpy_r_key = cpy_r_r190;
    cpy_r_r191 = CPyList_GetItemUnsafe(cpy_r_r179, cpy_r_r180);
    if (likely(PyObject_TypeCheck(cpy_r_r191, CPyType_patterns___Pattern)))
        cpy_r_r192 = cpy_r_r191;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 182, CPyStatic_match___globals, "mypy.patterns.Pattern", cpy_r_r191);
        goto CPyL209;
    }
    cpy_r_value = cpy_r_r192;
    cpy_r_r193 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "builder", 183, CPyStatic_match___globals);
        goto CPyL210;
    }
    CPy_INCREF(cpy_r_r193);
CPyL127: ;
    cpy_r_r194 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "code_block", 183, CPyStatic_match___globals);
        goto CPyL211;
    }
    CPy_INCREF(cpy_r_r194);
CPyL128: ;
    cpy_r_r195 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r193, cpy_r_r194);
    CPy_DECREF(cpy_r_r194);
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r195 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 183, CPyStatic_match___globals);
        goto CPyL210;
    }
    cpy_r_r196 = CPY_INT_TAG;
    cpy_r_r197 = CPyDef_ops___BasicBlock(cpy_r_r196);
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 184, CPyStatic_match___globals);
        goto CPyL210;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block = cpy_r_r197;
    cpy_r_r198 = 1;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 184, CPyStatic_match___globals);
        goto CPyL210;
    }
    cpy_r_r199 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "builder", 187, CPyStatic_match___globals);
        goto CPyL210;
    }
    CPy_INCREF(cpy_r_r199);
CPyL132: ;
    cpy_r_r200 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "MatchVisitor", "subject", 187, CPyStatic_match___globals);
        goto CPyL212;
    }
    CPy_INCREF(cpy_r_r200);
CPyL133: ;
    cpy_r_r201 = ((mypy___nodes___ContextObject *)cpy_r_value)->_line;
    if (unlikely(cpy_r_r201 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_class_pattern", "Pattern", "line", 187, CPyStatic_match___globals);
        goto CPyL213;
    }
    CPyTagged_INCREF(cpy_r_r201);
CPyL134: ;
    cpy_r_r202 = CPyDef_builder___IRBuilder___py_get_attr(cpy_r_r199, cpy_r_r200, cpy_r_key, cpy_r_r201);
    CPy_DECREF(cpy_r_r200);
    CPy_DECREF(cpy_r_key);
    CPyTagged_DECREF(cpy_r_r201);
    CPy_DECREF(cpy_r_r199);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 187, CPyStatic_match___globals);
        goto CPyL214;
    }
    cpy_r_attr = cpy_r_r202;
    cpy_r_r203 = CPyStatics[8475]; /* 'enter_subpattern' */
    PyObject *cpy_r_r204[2] = {cpy_r_self, cpy_r_attr};
    cpy_r_r205 = (PyObject **)&cpy_r_r204;
    cpy_r_r206 = PyObject_VectorcallMethod(cpy_r_r203, cpy_r_r205, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 189, CPyStatic_match___globals);
        goto CPyL215;
    }
    CPy_DECREF(cpy_r_attr);
    cpy_r_r207 = PyObject_Type(cpy_r_r206);
    cpy_r_r208 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r209 = CPyObject_GetAttr(cpy_r_r207, cpy_r_r208);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 189, CPyStatic_match___globals);
        goto CPyL216;
    }
    cpy_r_r210 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r211 = CPyObject_GetAttr(cpy_r_r207, cpy_r_r210);
    CPy_DECREF(cpy_r_r207);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 189, CPyStatic_match___globals);
        goto CPyL217;
    }
    PyObject *cpy_r_r212[1] = {cpy_r_r206};
    cpy_r_r213 = (PyObject **)&cpy_r_r212;
    cpy_r_r214 = _PyObject_Vectorcall(cpy_r_r211, cpy_r_r213, 1, 0);
    CPy_DECREF(cpy_r_r211);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 189, CPyStatic_match___globals);
        goto CPyL217;
    } else
        goto CPyL218;
CPyL139: ;
    cpy_r_r215 = 1;
    cpy_r_r216 = CPY_GET_METHOD_TRAIT(cpy_r_value, CPyType_patterns___Pattern, 5, mypy___patterns___PatternObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_value, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 190, CPyStatic_match___globals);
    } else
        goto CPyL219;
    cpy_r_r217 = CPy_CatchError();
    cpy_r_r215 = 0;
    cpy_r_r218 = CPy_GetExcInfo();
    cpy_r_r219 = cpy_r_r218.f0;
    CPy_INCREF(cpy_r_r219);
    cpy_r_r220 = cpy_r_r218.f1;
    CPy_INCREF(cpy_r_r220);
    cpy_r_r221 = cpy_r_r218.f2;
    CPy_INCREF(cpy_r_r221);
    CPy_DecRef(cpy_r_r218.f0);
    CPy_DecRef(cpy_r_r218.f1);
    CPy_DecRef(cpy_r_r218.f2);
    PyObject *cpy_r_r222[4] = {cpy_r_r206, cpy_r_r219, cpy_r_r220, cpy_r_r221};
    cpy_r_r223 = (PyObject **)&cpy_r_r222;
    cpy_r_r224 = _PyObject_Vectorcall(cpy_r_r209, cpy_r_r223, 4, 0);
    if (unlikely(cpy_r_r224 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 189, CPyStatic_match___globals);
        goto CPyL220;
    }
    CPy_DecRef(cpy_r_r219);
    CPy_DecRef(cpy_r_r220);
    CPy_DecRef(cpy_r_r221);
    cpy_r_r225 = PyObject_IsTrue(cpy_r_r224);
    CPy_DecRef(cpy_r_r224);
    cpy_r_r226 = cpy_r_r225 >= 0;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 189, CPyStatic_match___globals);
        goto CPyL147;
    }
    cpy_r_r227 = cpy_r_r225;
    if (cpy_r_r227) goto CPyL146;
    CPy_Reraise();
    if (!0) {
        goto CPyL147;
    } else
        goto CPyL221;
CPyL145: ;
    CPy_Unreachable();
CPyL146: ;
    CPy_RestoreExcInfo(cpy_r_r217);
    CPy_DecRef(cpy_r_r217.f0);
    CPy_DecRef(cpy_r_r217.f1);
    CPy_DecRef(cpy_r_r217.f2);
    goto CPyL149;
CPyL147: ;
    CPy_RestoreExcInfo(cpy_r_r217);
    CPy_DecRef(cpy_r_r217.f0);
    CPy_DecRef(cpy_r_r217.f1);
    CPy_DecRef(cpy_r_r217.f2);
    cpy_r_r228 = CPy_KeepPropagating();
    if (!cpy_r_r228) {
        goto CPyL150;
    } else
        goto CPyL222;
CPyL148: ;
    CPy_Unreachable();
CPyL149: ;
    tuple_T3OOO __tmp10383 = { NULL, NULL, NULL };
    cpy_r_r229 = __tmp10383;
    cpy_r_r230 = cpy_r_r229;
    goto CPyL151;
CPyL150: ;
    cpy_r_r231 = CPy_CatchError();
    cpy_r_r230 = cpy_r_r231;
CPyL151: ;
    if (!cpy_r_r215) goto CPyL223;
    cpy_r_r232 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r233[4] = {cpy_r_r206, cpy_r_r232, cpy_r_r232, cpy_r_r232};
    cpy_r_r234 = (PyObject **)&cpy_r_r233;
    cpy_r_r235 = _PyObject_Vectorcall(cpy_r_r209, cpy_r_r234, 4, 0);
    CPy_DECREF(cpy_r_r209);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 189, CPyStatic_match___globals);
        goto CPyL224;
    } else
        goto CPyL225;
CPyL153: ;
    CPy_DECREF(cpy_r_r206);
CPyL154: ;
    if (cpy_r_r230.f0 == NULL) {
        goto CPyL161;
    } else
        goto CPyL226;
CPyL155: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL157;
    } else
        goto CPyL227;
CPyL156: ;
    CPy_Unreachable();
CPyL157: ;
    if (cpy_r_r230.f0 == NULL) goto CPyL159;
    CPy_RestoreExcInfo(cpy_r_r230);
    CPy_XDECREF(cpy_r_r230.f0);
    CPy_XDECREF(cpy_r_r230.f1);
    CPy_XDECREF(cpy_r_r230.f2);
CPyL159: ;
    cpy_r_r236 = CPy_KeepPropagating();
    if (!cpy_r_r236) goto CPyL163;
    CPy_Unreachable();
CPyL161: ;
    cpy_r_r237 = cpy_r_r178 + 2;
    cpy_r_r178 = cpy_r_r237;
    cpy_r_r238 = cpy_r_r180 + 2;
    cpy_r_r180 = cpy_r_r238;
    goto CPyL122;
CPyL162: ;
    return 1;
CPyL163: ;
    cpy_r_r239 = 2;
    return cpy_r_r239;
CPyL164: ;
    CPy_DecRef(cpy_r_isinstance_op);
    goto CPyL163;
CPyL165: ;
    CPy_DecRef(cpy_r_isinstance_op);
    CPy_DecRef(cpy_r_r12);
    goto CPyL163;
CPyL166: ;
    CPy_DecRef(cpy_r_isinstance_op);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    goto CPyL163;
CPyL167: ;
    CPy_DecRef(cpy_r_isinstance_op);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r18);
    goto CPyL163;
CPyL168: ;
    CPy_DecRef(cpy_r_cond);
    goto CPyL163;
CPyL169: ;
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_r25);
    goto CPyL163;
CPyL170: ;
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    goto CPyL163;
CPyL171: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL163;
CPyL172: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL163;
CPyL173: ;
    CPy_DECREF(cpy_r_r54);
    goto CPyL36;
CPyL174: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL41;
CPyL175: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL163;
CPyL176: ;
    CPy_DECREF(cpy_r_ty);
    goto CPyL48;
CPyL177: ;
    CPy_DECREF(cpy_r_match_args_type);
    goto CPyL54;
CPyL178: ;
    CPy_DecRef(cpy_r_match_args_type);
    goto CPyL163;
CPyL179: ;
    CPy_DecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_match_args);
    goto CPyL163;
CPyL180: ;
    CPy_DECREF(cpy_r_r85);
    goto CPyL80;
CPyL181: ;
    CPy_DecRef(cpy_r_match_args);
    CPy_DecRef(cpy_r_r85);
    goto CPyL163;
CPyL182: ;
    CPy_DecRef(cpy_r_match_args);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_proper_item);
    goto CPyL163;
CPyL183: ;
    CPy_DECREF(cpy_r_match_args);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_proper_item);
    goto CPyL69;
CPyL184: ;
    CPy_DecRef(cpy_r_match_args);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_match_arg);
    goto CPyL163;
CPyL185: ;
    CPy_DECREF(cpy_r_match_args);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_match_arg);
    goto CPyL75;
CPyL186: ;
    CPy_DECREF(cpy_r_match_args);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r121);
    goto CPyL121;
CPyL187: ;
    CPy_DecRef(cpy_r_match_args);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r121);
    goto CPyL163;
CPyL188: ;
    CPy_DecRef(cpy_r_match_args);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_expr);
    goto CPyL163;
CPyL189: ;
    CPy_DecRef(cpy_r_match_args);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_r129);
    goto CPyL163;
CPyL190: ;
    CPy_DecRef(cpy_r_match_args);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_r135);
    goto CPyL163;
CPyL191: ;
    CPy_DecRef(cpy_r_match_args);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r136);
    goto CPyL163;
CPyL192: ;
    CPy_DecRef(cpy_r_match_args);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r138);
    goto CPyL163;
CPyL193: ;
    CPy_DecRef(cpy_r_match_args);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_expr);
    goto CPyL163;
CPyL194: ;
    CPy_DecRef(cpy_r_match_args);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_positional);
    goto CPyL163;
CPyL195: ;
    CPy_DecRef(cpy_r_match_args);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r145);
    goto CPyL163;
CPyL196: ;
    CPy_DecRef(cpy_r_match_args);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r147);
    goto CPyL163;
CPyL197: ;
    CPy_DECREF(cpy_r_r152);
    goto CPyL98;
CPyL198: ;
    CPy_DECREF(cpy_r_r154);
    goto CPyL108;
CPyL199: ;
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_r159);
    goto CPyL106;
CPyL200: ;
    CPy_DecRef(cpy_r_match_args);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r147);
    CPy_DecRef(cpy_r_r155.f0);
    CPy_DecRef(cpy_r_r155.f1);
    CPy_DecRef(cpy_r_r155.f2);
    goto CPyL104;
CPyL201: ;
    CPy_DecRef(cpy_r_match_args);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r147);
    goto CPyL107;
CPyL202: ;
    CPy_DECREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r147);
    goto CPyL113;
CPyL203: ;
    CPy_DecRef(cpy_r_match_args);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r144);
    goto CPyL116;
CPyL204: ;
    CPy_DECREF(cpy_r_r173);
    goto CPyL112;
CPyL205: ;
    CPy_DECREF(cpy_r_match_args);
    CPy_DECREF(cpy_r_r121);
    goto CPyL114;
CPyL206: ;
    CPy_XDECREF(cpy_r_r168.f0);
    CPy_XDECREF(cpy_r_r168.f1);
    CPy_XDECREF(cpy_r_r168.f2);
    goto CPyL115;
CPyL207: ;
    CPy_DECREF(cpy_r_r177);
    CPy_DECREF(cpy_r_r179);
    goto CPyL162;
CPyL208: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r179);
    goto CPyL163;
CPyL209: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_key);
    goto CPyL163;
CPyL210: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    goto CPyL163;
CPyL211: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r193);
    goto CPyL163;
CPyL212: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r199);
    goto CPyL163;
CPyL213: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r199);
    CPy_DecRef(cpy_r_r200);
    goto CPyL163;
CPyL214: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_value);
    goto CPyL163;
CPyL215: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_attr);
    goto CPyL163;
CPyL216: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r206);
    CPy_DecRef(cpy_r_r207);
    goto CPyL163;
CPyL217: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r206);
    CPy_DecRef(cpy_r_r209);
    goto CPyL163;
CPyL218: ;
    CPy_DECREF(cpy_r_r214);
    goto CPyL139;
CPyL219: ;
    CPy_DECREF(cpy_r_r216);
    goto CPyL149;
CPyL220: ;
    CPy_DecRef(cpy_r_r219);
    CPy_DecRef(cpy_r_r220);
    CPy_DecRef(cpy_r_r221);
    goto CPyL147;
CPyL221: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_r206);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r217.f0);
    CPy_DecRef(cpy_r_r217.f1);
    CPy_DecRef(cpy_r_r217.f2);
    goto CPyL145;
CPyL222: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_r206);
    CPy_DecRef(cpy_r_r209);
    goto CPyL148;
CPyL223: ;
    CPy_DECREF(cpy_r_r206);
    CPy_DECREF(cpy_r_r209);
    goto CPyL154;
CPyL224: ;
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_r206);
    goto CPyL157;
CPyL225: ;
    CPy_DECREF(cpy_r_r235);
    goto CPyL153;
CPyL226: ;
    CPy_DECREF(cpy_r_r177);
    CPy_DECREF(cpy_r_r179);
    goto CPyL155;
CPyL227: ;
    CPy_XDECREF(cpy_r_r230.f0);
    CPy_XDECREF(cpy_r_r230.f1);
    CPy_XDECREF(cpy_r_r230.f2);
    goto CPyL156;
}

PyObject *CPyPy_match___MatchVisitor___visit_class_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"pattern", 0};
    static CPyArg_Parser parser = {"O:visit_class_pattern", kwlist, 0};
    PyObject *obj_pattern;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_pattern)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_pattern;
    if (likely(Py_TYPE(obj_pattern) == CPyType_patterns___ClassPattern))
        arg_pattern = obj_pattern;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_pattern); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_class_pattern(arg_self, arg_pattern);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern", 125, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_class_pattern__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_class_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_match___MatchVisitor___visit_class_pattern__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_pattern__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ClassPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_o); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_class_pattern__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern__TraverserVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_class_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_class_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_class_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ClassPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_class_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern__NodeVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_class_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_class_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_class_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ClassPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_class_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_class_pattern__PatternVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_as_pattern(PyObject *cpy_r_self, PyObject *cpy_r_pattern) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_old_pattern;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = ((mypy___patterns___AsPatternObject *)cpy_r_pattern)->_pattern;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_as_pattern", "MatchVisitor", "as_pattern", 194, CPyStatic_match___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r3);
CPyL2: ;
    cpy_r_old_pattern = cpy_r_r3;
    CPy_INCREF(cpy_r_pattern);
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern = cpy_r_pattern;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_as_pattern", 195, CPyStatic_match___globals);
        goto CPyL18;
    }
    cpy_r_r5 = ((mypy___patterns___AsPatternObject *)cpy_r_pattern)->_pattern;
    CPy_INCREF(cpy_r_r5);
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_as_pattern", 196, CPyStatic_match___globals, "mypy.patterns.Pattern", cpy_r_r5);
        goto CPyL18;
    }
    cpy_r_r7 = CPY_GET_METHOD_TRAIT(cpy_r_r6, CPyType_patterns___Pattern, 5, mypy___patterns___PatternObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r6, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_as_pattern", 196, CPyStatic_match___globals);
        goto CPyL18;
    } else
        goto CPyL19;
CPyL5: ;
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern = cpy_r_old_pattern;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_as_pattern", 197, CPyStatic_match___globals);
        goto CPyL17;
    } else
        goto CPyL13;
CPyL6: ;
    cpy_r_r9 = ((mypy___patterns___AsPatternObject *)cpy_r_pattern)->_name;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_r9 != cpy_r_r10;
    CPy_DECREF(cpy_r_r9);
    if (!cpy_r_r11) goto CPyL13;
    cpy_r_r12 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_as_pattern", "MatchVisitor", "builder", 200, CPyStatic_match___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r12);
CPyL8: ;
    cpy_r_r13 = ((mypy___patterns___AsPatternObject *)cpy_r_pattern)->_name;
    CPy_INCREF(cpy_r_r13);
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_as_pattern", 200, CPyStatic_match___globals, "mypy.nodes.NameExpr", cpy_r_r13);
        goto CPyL20;
    }
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = 2;
    cpy_r_r17 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_r12, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_as_pattern", 200, CPyStatic_match___globals);
        goto CPyL17;
    }
    cpy_r_target = cpy_r_r17;
    cpy_r_r18 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_as_pattern", "MatchVisitor", "builder", 202, CPyStatic_match___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r18);
CPyL11: ;
    cpy_r_r19 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_as_pattern", "MatchVisitor", "subject", 202, CPyStatic_match___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r19);
CPyL12: ;
    cpy_r_r20 = ((mypy___patterns___AsPatternObject *)cpy_r_pattern)->_line;
    CPyTagged_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyDef_builder___IRBuilder___assign(cpy_r_r18, cpy_r_target, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_r19);
    CPyTagged_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_as_pattern", 202, CPyStatic_match___globals);
        goto CPyL17;
    }
CPyL13: ;
    cpy_r_r22 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_as_pattern", "MatchVisitor", "builder", 204, CPyStatic_match___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r22);
CPyL14: ;
    cpy_r_r23 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_as_pattern", "MatchVisitor", "code_block", 204, CPyStatic_match___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r23);
CPyL15: ;
    cpy_r_r24 = CPyDef_builder___IRBuilder___goto(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_as_pattern", 204, CPyStatic_match___globals);
        goto CPyL17;
    }
    return 1;
CPyL17: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL18: ;
    CPy_DecRef(cpy_r_old_pattern);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL5;
CPyL20: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r18);
    goto CPyL17;
CPyL23: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL17;
}

PyObject *CPyPy_match___MatchVisitor___visit_as_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"pattern", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern", kwlist, 0};
    PyObject *obj_pattern;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_pattern)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_pattern;
    if (likely(Py_TYPE(obj_pattern) == CPyType_patterns___AsPattern))
        arg_pattern = obj_pattern;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_pattern); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_as_pattern(arg_self, arg_pattern);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_as_pattern", 192, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_as_pattern__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_as_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_match___MatchVisitor___visit_as_pattern__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___AsPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_o); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_as_pattern__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_as_pattern__TraverserVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_as_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_as_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_as_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___AsPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_as_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_as_pattern__NodeVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_as_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_as_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_as_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___AsPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_as_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_as_pattern__PatternVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_singleton_pattern(PyObject *cpy_r_self, PyObject *cpy_r_pattern) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_cond;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = ((mypy___patterns___SingletonPatternObject *)cpy_r_pattern)->_value;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_singleton_pattern", "MatchVisitor", "builder", 208, CPyStatic_match___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r3);
CPyL2: ;
    cpy_r_r4 = CPyDef_builder___IRBuilder___none_object(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_singleton_pattern", 208, CPyStatic_match___globals);
        goto CPyL20;
    }
    cpy_r_obj = cpy_r_r4;
    goto CPyL12;
CPyL4: ;
    cpy_r_r5 = ((mypy___patterns___SingletonPatternObject *)cpy_r_pattern)->_value;
    CPy_INCREF(cpy_r_r5);
    if (unlikely(!PyBool_Check(cpy_r_r5))) {
        CPy_TypeError("bool", cpy_r_r5); cpy_r_r6 = 2;
    } else
        cpy_r_r6 = cpy_r_r5 == Py_True;
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_singleton_pattern", 209, CPyStatic_match___globals);
        goto CPyL20;
    }
    cpy_r_r7 = cpy_r_r6 ? Py_True : Py_False;
    cpy_r_r8 = 1 ? Py_True : Py_False;
    cpy_r_r9 = cpy_r_r7 == cpy_r_r8;
    if (!cpy_r_r9) goto CPyL9;
    cpy_r_r10 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_singleton_pattern", "MatchVisitor", "builder", 210, CPyStatic_match___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r10);
CPyL7: ;
    cpy_r_r11 = CPyDef_builder___IRBuilder___true(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_singleton_pattern", 210, CPyStatic_match___globals);
        goto CPyL20;
    }
    cpy_r_obj = cpy_r_r11;
    goto CPyL12;
CPyL9: ;
    cpy_r_r12 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_singleton_pattern", "MatchVisitor", "builder", 212, CPyStatic_match___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r12);
CPyL10: ;
    cpy_r_r13 = CPyDef_builder___IRBuilder___false(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_singleton_pattern", 212, CPyStatic_match___globals);
        goto CPyL20;
    }
    cpy_r_obj = cpy_r_r13;
CPyL12: ;
    cpy_r_r14 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_singleton_pattern", "MatchVisitor", "builder", 214, CPyStatic_match___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r14);
CPyL13: ;
    cpy_r_r15 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_singleton_pattern", "MatchVisitor", "subject", 214, CPyStatic_match___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r15);
CPyL14: ;
    cpy_r_r16 = CPyStatics[861]; /* 'is' */
    cpy_r_r17 = ((mypy___patterns___SingletonPatternObject *)cpy_r_pattern)->_line;
    CPyTagged_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyDef_builder___IRBuilder___binary_op(cpy_r_r14, cpy_r_r15, cpy_r_obj, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_obj);
    CPyTagged_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_singleton_pattern", 214, CPyStatic_match___globals);
        goto CPyL20;
    }
    cpy_r_cond = cpy_r_r18;
    cpy_r_r19 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_singleton_pattern", "MatchVisitor", "builder", 216, CPyStatic_match___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r19);
CPyL16: ;
    cpy_r_r20 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_singleton_pattern", "MatchVisitor", "code_block", 216, CPyStatic_match___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r20);
CPyL17: ;
    cpy_r_r21 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_singleton_pattern", "MatchVisitor", "next_block", 216, CPyStatic_match___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r21);
CPyL18: ;
    cpy_r_r22 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_r19, cpy_r_cond, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_cond);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_singleton_pattern", 216, CPyStatic_match___globals);
        goto CPyL20;
    }
    return 1;
CPyL20: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL21: ;
    CPy_DecRef(cpy_r_obj);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r14);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_cond);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_r19);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    goto CPyL20;
}

PyObject *CPyPy_match___MatchVisitor___visit_singleton_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"pattern", 0};
    static CPyArg_Parser parser = {"O:visit_singleton_pattern", kwlist, 0};
    PyObject *obj_pattern;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_pattern)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_pattern;
    if (likely(Py_TYPE(obj_pattern) == CPyType_patterns___SingletonPattern))
        arg_pattern = obj_pattern;
    else {
        CPy_TypeError("mypy.patterns.SingletonPattern", obj_pattern); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_singleton_pattern(arg_self, arg_pattern);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_singleton_pattern", 206, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_singleton_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_singleton_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_singleton_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_singleton_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SingletonPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SingletonPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_singleton_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_singleton_pattern__NodeVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_singleton_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_singleton_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_singleton_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_singleton_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SingletonPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SingletonPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_singleton_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_singleton_pattern__PatternVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_mapping_pattern(PyObject *cpy_r_self, PyObject *cpy_r_pattern) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_is_dict;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_keys;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_key_value;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    CPyPtr cpy_r_r52;
    CPyPtr cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_exists;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyPtr cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    CPyTagged cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r78;
    PyObject **cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    tuple_T3OOO cpy_r_r92;
    tuple_T3OOO cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    tuple_T3OOO cpy_r_r104;
    tuple_T3OOO cpy_r_r105;
    tuple_T3OOO cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject **cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    CPyTagged cpy_r_r112;
    CPyTagged cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    CPyTagged cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    CPyPtr cpy_r_r130;
    CPyPtr cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    CPyTagged cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_rest;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    CPyTagged cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    CPyTagged cpy_r_r145;
    char cpy_r_r146;
    CPyTagged cpy_r_r147;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r148;
    CPyPtr cpy_r_r149;
    int64_t cpy_r_r150;
    CPyTagged cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_key_name;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    CPyPtr cpy_r_r161;
    CPyPtr cpy_r_r162;
    CPyPtr cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    CPyTagged cpy_r_r167;
    PyObject *cpy_r_r168;
    CPyTagged cpy_r_r169;
    CPyTagged cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    char cpy_r_r174;
    cpy_r_r0 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "builder", 219, CPyStatic_match___globals);
        goto CPyL109;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatic_match___globals;
    cpy_r_r2 = CPyStatics[8476]; /* 'supports_mapping_protocol' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 219, CPyStatic_match___globals);
        goto CPyL110;
    }
    if (likely(PyTuple_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 219, CPyStatic_match___globals, "tuple", cpy_r_r3);
        goto CPyL110;
    }
    cpy_r_r5 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "subject", 219, CPyStatic_match___globals);
        goto CPyL111;
    }
    CPy_INCREF(cpy_r_r5);
CPyL4: ;
    cpy_r_r6 = PyList_New(1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 219, CPyStatic_match___globals);
        goto CPyL112;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    *(PyObject * *)cpy_r_r8 = cpy_r_r5;
    cpy_r_r9 = ((mypy___patterns___MappingPatternObject *)cpy_r_pattern)->_line;
    CPyTagged_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyDef_builder___IRBuilder___call_c(cpy_r_r0, cpy_r_r4, cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 219, CPyStatic_match___globals);
        goto CPyL109;
    }
    cpy_r_is_dict = cpy_r_r10;
    cpy_r_r11 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "builder", 221, CPyStatic_match___globals);
        goto CPyL113;
    }
    CPy_INCREF(cpy_r_r11);
CPyL7: ;
    cpy_r_r12 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "code_block", 221, CPyStatic_match___globals);
        goto CPyL114;
    }
    CPy_INCREF(cpy_r_r12);
CPyL8: ;
    cpy_r_r13 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "next_block", 221, CPyStatic_match___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r13);
CPyL9: ;
    cpy_r_r14 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_r11, cpy_r_is_dict, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_is_dict);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 221, CPyStatic_match___globals);
        goto CPyL109;
    }
    cpy_r_r15 = PyList_New(0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 223, CPyStatic_match___globals);
        goto CPyL109;
    }
    cpy_r_keys = cpy_r_r15;
    cpy_r_r16 = ((mypy___patterns___MappingPatternObject *)cpy_r_pattern)->_keys;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = 0;
    cpy_r_r18 = ((mypy___patterns___MappingPatternObject *)cpy_r_pattern)->_values;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = 0;
CPyL12: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL116;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r26;
    if (!cpy_r_r27) goto CPyL116;
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r17);
    if (likely(PyObject_TypeCheck(cpy_r_r28, CPyType_nodes___Expression)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 225, CPyStatic_match___globals, "mypy.nodes.Expression", cpy_r_r28);
        goto CPyL117;
    }
    cpy_r_key = cpy_r_r29;
    cpy_r_r30 = CPyList_GetItemUnsafe(cpy_r_r18, cpy_r_r19);
    if (likely(PyObject_TypeCheck(cpy_r_r30, CPyType_patterns___Pattern)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 225, CPyStatic_match___globals, "mypy.patterns.Pattern", cpy_r_r30);
        goto CPyL118;
    }
    cpy_r_value = cpy_r_r31;
    cpy_r_r32 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "builder", 226, CPyStatic_match___globals);
        goto CPyL119;
    }
    CPy_INCREF(cpy_r_r32);
CPyL17: ;
    cpy_r_r33 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "code_block", 226, CPyStatic_match___globals);
        goto CPyL120;
    }
    CPy_INCREF(cpy_r_r33);
CPyL18: ;
    cpy_r_r34 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 226, CPyStatic_match___globals);
        goto CPyL119;
    }
    cpy_r_r35 = CPY_INT_TAG;
    cpy_r_r36 = CPyDef_ops___BasicBlock(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 227, CPyStatic_match___globals);
        goto CPyL119;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block = cpy_r_r36;
    cpy_r_r37 = 1;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 227, CPyStatic_match___globals);
        goto CPyL119;
    }
    cpy_r_r38 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "builder", 229, CPyStatic_match___globals);
        goto CPyL119;
    }
    CPy_INCREF(cpy_r_r38);
CPyL22: ;
    cpy_r_r39 = 2;
    cpy_r_r40 = CPyDef_builder___IRBuilder___accept(cpy_r_r38, cpy_r_key, cpy_r_r39);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 229, CPyStatic_match___globals);
        goto CPyL121;
    }
    if (likely(cpy_r_r40 != Py_None))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 229, CPyStatic_match___globals, "mypyc.ir.ops.Value", cpy_r_r40);
        goto CPyL121;
    }
    cpy_r_key_value = cpy_r_r41;
    cpy_r_r42 = PyList_Append(cpy_r_keys, cpy_r_key_value);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 230, CPyStatic_match___globals);
        goto CPyL122;
    }
    cpy_r_r44 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "builder", 232, CPyStatic_match___globals);
        goto CPyL122;
    }
    CPy_INCREF(cpy_r_r44);
CPyL26: ;
    cpy_r_r45 = CPyStatic_match___globals;
    cpy_r_r46 = CPyStatics[8477]; /* 'mapping_has_key' */
    cpy_r_r47 = CPyDict_GetItem(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 232, CPyStatic_match___globals);
        goto CPyL123;
    }
    if (likely(PyTuple_Check(cpy_r_r47)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 232, CPyStatic_match___globals, "tuple", cpy_r_r47);
        goto CPyL123;
    }
    cpy_r_r49 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "subject", 232, CPyStatic_match___globals);
        goto CPyL124;
    }
    CPy_INCREF(cpy_r_r49);
CPyL29: ;
    cpy_r_r50 = PyList_New(2);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 232, CPyStatic_match___globals);
        goto CPyL125;
    }
    cpy_r_r51 = (CPyPtr)&((PyListObject *)cpy_r_r50)->ob_item;
    cpy_r_r52 = *(CPyPtr *)cpy_r_r51;
    *(PyObject * *)cpy_r_r52 = cpy_r_r49;
    cpy_r_r53 = cpy_r_r52 + 8;
    CPy_INCREF(cpy_r_key_value);
    *(PyObject * *)cpy_r_r53 = cpy_r_key_value;
    cpy_r_r54 = ((mypy___patterns___MappingPatternObject *)cpy_r_pattern)->_line;
    CPyTagged_INCREF(cpy_r_r54);
    cpy_r_r55 = CPyDef_builder___IRBuilder___call_c(cpy_r_r44, cpy_r_r48, cpy_r_r50, cpy_r_r54);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r50);
    CPyTagged_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 232, CPyStatic_match___globals);
        goto CPyL122;
    }
    cpy_r_exists = cpy_r_r55;
    cpy_r_r56 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "builder", 234, CPyStatic_match___globals);
        goto CPyL126;
    }
    CPy_INCREF(cpy_r_r56);
CPyL32: ;
    cpy_r_r57 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "code_block", 234, CPyStatic_match___globals);
        goto CPyL127;
    }
    CPy_INCREF(cpy_r_r57);
CPyL33: ;
    cpy_r_r58 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "next_block", 234, CPyStatic_match___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r58);
CPyL34: ;
    cpy_r_r59 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_r56, cpy_r_exists, cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_exists);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 234, CPyStatic_match___globals);
        goto CPyL122;
    }
    cpy_r_r60 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "builder", 235, CPyStatic_match___globals);
        goto CPyL122;
    }
    CPy_INCREF(cpy_r_r60);
CPyL36: ;
    cpy_r_r61 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "code_block", 235, CPyStatic_match___globals);
        goto CPyL129;
    }
    CPy_INCREF(cpy_r_r61);
CPyL37: ;
    cpy_r_r62 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 235, CPyStatic_match___globals);
        goto CPyL122;
    }
    cpy_r_r63 = CPY_INT_TAG;
    cpy_r_r64 = CPyDef_ops___BasicBlock(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 236, CPyStatic_match___globals);
        goto CPyL122;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block = cpy_r_r64;
    cpy_r_r65 = 1;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 236, CPyStatic_match___globals);
        goto CPyL122;
    }
    cpy_r_r66 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "builder", 238, CPyStatic_match___globals);
        goto CPyL122;
    }
    CPy_INCREF(cpy_r_r66);
CPyL41: ;
    cpy_r_r67 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "subject", 239, CPyStatic_match___globals);
        goto CPyL130;
    }
    CPy_INCREF(cpy_r_r67);
CPyL42: ;
    cpy_r_r68 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r69 = PyList_New(1);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 239, CPyStatic_match___globals);
        goto CPyL131;
    }
    cpy_r_r70 = (CPyPtr)&((PyListObject *)cpy_r_r69)->ob_item;
    cpy_r_r71 = *(CPyPtr *)cpy_r_r70;
    *(PyObject * *)cpy_r_r71 = cpy_r_key_value;
    cpy_r_r72 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r72 == NULL)) {
        goto CPyL132;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r73 = 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 239, CPyStatic_match___globals);
        goto CPyL109;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r74 = ((mypy___patterns___MappingPatternObject *)cpy_r_pattern)->_line;
    CPyTagged_INCREF(cpy_r_r74);
    cpy_r_r75 = NULL;
    cpy_r_r76 = NULL;
    cpy_r_r77 = CPyDef_builder___IRBuilder___gen_method_call(cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r72, cpy_r_r74, cpy_r_r75, cpy_r_r76);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r69);
    CPyTagged_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 238, CPyStatic_match___globals);
        goto CPyL121;
    }
    cpy_r_item = cpy_r_r77;
    cpy_r_r78 = CPyStatics[8475]; /* 'enter_subpattern' */
    PyObject *cpy_r_r79[2] = {cpy_r_self, cpy_r_item};
    cpy_r_r80 = (PyObject **)&cpy_r_r79;
    cpy_r_r81 = PyObject_VectorcallMethod(cpy_r_r78, cpy_r_r80, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 242, CPyStatic_match___globals);
        goto CPyL133;
    }
    CPy_DECREF(cpy_r_item);
    cpy_r_r82 = PyObject_Type(cpy_r_r81);
    cpy_r_r83 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r84 = CPyObject_GetAttr(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 242, CPyStatic_match___globals);
        goto CPyL134;
    }
    cpy_r_r85 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r82, cpy_r_r85);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 242, CPyStatic_match___globals);
        goto CPyL135;
    }
    PyObject *cpy_r_r87[1] = {cpy_r_r81};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = _PyObject_Vectorcall(cpy_r_r86, cpy_r_r88, 1, 0);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 242, CPyStatic_match___globals);
        goto CPyL135;
    } else
        goto CPyL136;
CPyL51: ;
    cpy_r_r90 = 1;
    cpy_r_r91 = CPY_GET_METHOD_TRAIT(cpy_r_value, CPyType_patterns___Pattern, 5, mypy___patterns___PatternObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_value, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 243, CPyStatic_match___globals);
    } else
        goto CPyL137;
    cpy_r_r92 = CPy_CatchError();
    cpy_r_r90 = 0;
    cpy_r_r93 = CPy_GetExcInfo();
    cpy_r_r94 = cpy_r_r93.f0;
    CPy_INCREF(cpy_r_r94);
    cpy_r_r95 = cpy_r_r93.f1;
    CPy_INCREF(cpy_r_r95);
    cpy_r_r96 = cpy_r_r93.f2;
    CPy_INCREF(cpy_r_r96);
    CPy_DecRef(cpy_r_r93.f0);
    CPy_DecRef(cpy_r_r93.f1);
    CPy_DecRef(cpy_r_r93.f2);
    PyObject *cpy_r_r97[4] = {cpy_r_r81, cpy_r_r94, cpy_r_r95, cpy_r_r96};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = _PyObject_Vectorcall(cpy_r_r84, cpy_r_r98, 4, 0);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 242, CPyStatic_match___globals);
        goto CPyL138;
    }
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r96);
    cpy_r_r100 = PyObject_IsTrue(cpy_r_r99);
    CPy_DecRef(cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 242, CPyStatic_match___globals);
        goto CPyL59;
    }
    cpy_r_r102 = cpy_r_r100;
    if (cpy_r_r102) goto CPyL58;
    CPy_Reraise();
    if (!0) {
        goto CPyL59;
    } else
        goto CPyL139;
CPyL57: ;
    CPy_Unreachable();
CPyL58: ;
    CPy_RestoreExcInfo(cpy_r_r92);
    CPy_DecRef(cpy_r_r92.f0);
    CPy_DecRef(cpy_r_r92.f1);
    CPy_DecRef(cpy_r_r92.f2);
    goto CPyL61;
CPyL59: ;
    CPy_RestoreExcInfo(cpy_r_r92);
    CPy_DecRef(cpy_r_r92.f0);
    CPy_DecRef(cpy_r_r92.f1);
    CPy_DecRef(cpy_r_r92.f2);
    cpy_r_r103 = CPy_KeepPropagating();
    if (!cpy_r_r103) {
        goto CPyL62;
    } else
        goto CPyL140;
CPyL60: ;
    CPy_Unreachable();
CPyL61: ;
    tuple_T3OOO __tmp10384 = { NULL, NULL, NULL };
    cpy_r_r104 = __tmp10384;
    cpy_r_r105 = cpy_r_r104;
    goto CPyL63;
CPyL62: ;
    cpy_r_r106 = CPy_CatchError();
    cpy_r_r105 = cpy_r_r106;
CPyL63: ;
    if (!cpy_r_r90) goto CPyL141;
    cpy_r_r107 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r108[4] = {cpy_r_r81, cpy_r_r107, cpy_r_r107, cpy_r_r107};
    cpy_r_r109 = (PyObject **)&cpy_r_r108;
    cpy_r_r110 = _PyObject_Vectorcall(cpy_r_r84, cpy_r_r109, 4, 0);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 242, CPyStatic_match___globals);
        goto CPyL142;
    } else
        goto CPyL143;
CPyL65: ;
    CPy_DECREF(cpy_r_r81);
CPyL66: ;
    if (cpy_r_r105.f0 == NULL) {
        goto CPyL73;
    } else
        goto CPyL144;
CPyL67: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL69;
    } else
        goto CPyL145;
CPyL68: ;
    CPy_Unreachable();
CPyL69: ;
    if (cpy_r_r105.f0 == NULL) goto CPyL71;
    CPy_RestoreExcInfo(cpy_r_r105);
    CPy_XDECREF(cpy_r_r105.f0);
    CPy_XDECREF(cpy_r_r105.f1);
    CPy_XDECREF(cpy_r_r105.f2);
CPyL71: ;
    cpy_r_r111 = CPy_KeepPropagating();
    if (!cpy_r_r111) goto CPyL109;
    CPy_Unreachable();
CPyL73: ;
    cpy_r_r112 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r112;
    cpy_r_r113 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r113;
    goto CPyL12;
CPyL74: ;
    cpy_r_r114 = ((mypy___patterns___MappingPatternObject *)cpy_r_pattern)->_rest;
    CPy_INCREF(cpy_r_r114);
    cpy_r_r115 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r116 = cpy_r_r114 != cpy_r_r115;
    CPy_DECREF(cpy_r_r114);
    if (!cpy_r_r116) goto CPyL146;
    cpy_r_r117 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "builder", 246, CPyStatic_match___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_r117);
CPyL76: ;
    cpy_r_r118 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "code_block", 246, CPyStatic_match___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r118);
CPyL77: ;
    cpy_r_r119 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r117, cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r119 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 246, CPyStatic_match___globals);
        goto CPyL147;
    }
    cpy_r_r120 = CPY_INT_TAG;
    cpy_r_r121 = CPyDef_ops___BasicBlock(cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 247, CPyStatic_match___globals);
        goto CPyL147;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block = cpy_r_r121;
    cpy_r_r122 = 1;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 247, CPyStatic_match___globals);
        goto CPyL147;
    }
    cpy_r_r123 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "builder", 249, CPyStatic_match___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_r123);
CPyL81: ;
    cpy_r_r124 = CPyStatic_match___globals;
    cpy_r_r125 = CPyStatics[8478]; /* 'dict_copy' */
    cpy_r_r126 = CPyDict_GetItem(cpy_r_r124, cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 249, CPyStatic_match___globals);
        goto CPyL149;
    }
    if (likely(PyTuple_Check(cpy_r_r126)))
        cpy_r_r127 = cpy_r_r126;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 249, CPyStatic_match___globals, "tuple", cpy_r_r126);
        goto CPyL149;
    }
    cpy_r_r128 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "subject", 249, CPyStatic_match___globals);
        goto CPyL150;
    }
    CPy_INCREF(cpy_r_r128);
CPyL84: ;
    cpy_r_r129 = PyList_New(1);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 249, CPyStatic_match___globals);
        goto CPyL151;
    }
    cpy_r_r130 = (CPyPtr)&((PyListObject *)cpy_r_r129)->ob_item;
    cpy_r_r131 = *(CPyPtr *)cpy_r_r130;
    *(PyObject * *)cpy_r_r131 = cpy_r_r128;
    cpy_r_r132 = ((mypy___patterns___MappingPatternObject *)cpy_r_pattern)->_rest;
    if (likely(cpy_r_r132 != Py_None))
        cpy_r_r133 = cpy_r_r132;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 249, CPyStatic_match___globals, "mypy.nodes.NameExpr", cpy_r_r132);
        goto CPyL152;
    }
    cpy_r_r134 = ((mypy___nodes___NameExprObject *)cpy_r_r133)->_line;
    CPyTagged_INCREF(cpy_r_r134);
    cpy_r_r135 = CPyDef_builder___IRBuilder___call_c(cpy_r_r123, cpy_r_r127, cpy_r_r129, cpy_r_r134);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r129);
    CPyTagged_DECREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 249, CPyStatic_match___globals);
        goto CPyL147;
    }
    cpy_r_rest = cpy_r_r135;
    cpy_r_r136 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "builder", 251, CPyStatic_match___globals);
        goto CPyL153;
    }
    CPy_INCREF(cpy_r_r136);
CPyL88: ;
    cpy_r_r137 = ((mypy___patterns___MappingPatternObject *)cpy_r_pattern)->_rest;
    CPy_INCREF(cpy_r_r137);
    if (likely(cpy_r_r137 != Py_None))
        cpy_r_r138 = cpy_r_r137;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 251, CPyStatic_match___globals, "mypy.nodes.NameExpr", cpy_r_r137);
        goto CPyL154;
    }
    cpy_r_r139 = CPY_INT_TAG;
    cpy_r_r140 = 2;
    cpy_r_r141 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_r136, cpy_r_r138, cpy_r_r139, cpy_r_r140);
    CPy_DECREF(cpy_r_r138);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 251, CPyStatic_match___globals);
        goto CPyL153;
    }
    cpy_r_target = cpy_r_r141;
    cpy_r_r142 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "builder", 253, CPyStatic_match___globals);
        goto CPyL155;
    }
    CPy_INCREF(cpy_r_r142);
CPyL91: ;
    cpy_r_r143 = ((mypy___patterns___MappingPatternObject *)cpy_r_pattern)->_rest;
    if (likely(cpy_r_r143 != Py_None))
        cpy_r_r144 = cpy_r_r143;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 253, CPyStatic_match___globals, "mypy.nodes.NameExpr", cpy_r_r143);
        goto CPyL156;
    }
    cpy_r_r145 = ((mypy___nodes___NameExprObject *)cpy_r_r144)->_line;
    CPyTagged_INCREF(cpy_r_r145);
    cpy_r_r146 = CPyDef_builder___IRBuilder___assign(cpy_r_r142, cpy_r_target, cpy_r_rest, cpy_r_r145);
    CPy_DECREF(cpy_r_target);
    CPyTagged_DECREF(cpy_r_r145);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r146 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 253, CPyStatic_match___globals);
        goto CPyL153;
    }
    cpy_r_r147 = 0;
    cpy_r_i = 0;
    cpy_r_r148 = 0;
CPyL94: ;
    cpy_r_r149 = (CPyPtr)&((PyVarObject *)cpy_r_keys)->ob_size;
    cpy_r_r150 = *(int64_t *)cpy_r_r149;
    cpy_r_r151 = cpy_r_r150 << 1;
    cpy_r_r152 = (Py_ssize_t)cpy_r_r148 < (Py_ssize_t)cpy_r_r151;
    if (!cpy_r_r152) goto CPyL157;
    cpy_r_r153 = CPyList_GetItemUnsafe(cpy_r_keys, cpy_r_r148);
    if (likely(PyObject_TypeCheck(cpy_r_r153, CPyType_ops___Value)))
        cpy_r_r154 = cpy_r_r153;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 255, CPyStatic_match___globals, "mypyc.ir.ops.Value", cpy_r_r153);
        goto CPyL158;
    }
    cpy_r_key_name = cpy_r_r154;
    cpy_r_r155 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "builder", 256, CPyStatic_match___globals);
        goto CPyL159;
    }
    CPy_INCREF(cpy_r_r155);
CPyL97: ;
    cpy_r_r156 = CPyStatic_match___globals;
    cpy_r_r157 = CPyStatics[8479]; /* 'dict_del_item' */
    cpy_r_r158 = CPyDict_GetItem(cpy_r_r156, cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 256, CPyStatic_match___globals);
        goto CPyL160;
    }
    if (likely(PyTuple_Check(cpy_r_r158)))
        cpy_r_r159 = cpy_r_r158;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 256, CPyStatic_match___globals, "tuple", cpy_r_r158);
        goto CPyL160;
    }
    cpy_r_r160 = PyList_New(2);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 256, CPyStatic_match___globals);
        goto CPyL161;
    }
    cpy_r_r161 = (CPyPtr)&((PyListObject *)cpy_r_r160)->ob_item;
    cpy_r_r162 = *(CPyPtr *)cpy_r_r161;
    CPy_INCREF(cpy_r_rest);
    *(PyObject * *)cpy_r_r162 = cpy_r_rest;
    cpy_r_r163 = cpy_r_r162 + 8;
    *(PyObject * *)cpy_r_r163 = cpy_r_key_name;
    cpy_r_r164 = ((mypy___patterns___MappingPatternObject *)cpy_r_pattern)->_keys;
    cpy_r_r165 = CPyList_GetItemBorrow(cpy_r_r164, cpy_r_i);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 256, CPyStatic_match___globals);
        goto CPyL162;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r165, CPyType_nodes___Expression)))
        cpy_r_r166 = cpy_r_r165;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 256, CPyStatic_match___globals, "mypy.nodes.Expression", cpy_r_r165);
        goto CPyL162;
    }
    cpy_r_r167 = ((mypy___nodes___ContextObject *)cpy_r_r166)->_line;
    if (unlikely(cpy_r_r167 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "Expression", "line", 256, CPyStatic_match___globals);
        goto CPyL162;
    }
    CPyTagged_INCREF(cpy_r_r167);
CPyL103: ;
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r168 = CPyDef_builder___IRBuilder___call_c(cpy_r_r155, cpy_r_r159, cpy_r_r160, cpy_r_r167);
    CPy_DECREF(cpy_r_r159);
    CPy_DECREF(cpy_r_r160);
    CPyTagged_DECREF(cpy_r_r167);
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 256, CPyStatic_match___globals);
        goto CPyL153;
    } else
        goto CPyL163;
CPyL104: ;
    cpy_r_r169 = cpy_r_r147 + 2;
    cpy_r_r147 = cpy_r_r169;
    cpy_r_i = cpy_r_r169;
    cpy_r_r170 = cpy_r_r148 + 2;
    cpy_r_r148 = cpy_r_r170;
    goto CPyL94;
CPyL105: ;
    cpy_r_r171 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "builder", 258, CPyStatic_match___globals);
        goto CPyL109;
    }
    CPy_INCREF(cpy_r_r171);
CPyL106: ;
    cpy_r_r172 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_mapping_pattern", "MatchVisitor", "code_block", 258, CPyStatic_match___globals);
        goto CPyL164;
    }
    CPy_INCREF(cpy_r_r172);
CPyL107: ;
    cpy_r_r173 = CPyDef_builder___IRBuilder___goto(cpy_r_r171, cpy_r_r172);
    CPy_DECREF(cpy_r_r172);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r173 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 258, CPyStatic_match___globals);
        goto CPyL109;
    }
CPyL108: ;
    return 1;
CPyL109: ;
    cpy_r_r174 = 2;
    return cpy_r_r174;
CPyL110: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL109;
CPyL111: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL109;
CPyL112: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL109;
CPyL113: ;
    CPy_DecRef(cpy_r_is_dict);
    goto CPyL109;
CPyL114: ;
    CPy_DecRef(cpy_r_is_dict);
    CPy_DecRef(cpy_r_r11);
    goto CPyL109;
CPyL115: ;
    CPy_DecRef(cpy_r_is_dict);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    goto CPyL109;
CPyL116: ;
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r18);
    goto CPyL74;
CPyL117: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL109;
CPyL118: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_key);
    goto CPyL109;
CPyL119: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    goto CPyL109;
CPyL120: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r32);
    goto CPyL109;
CPyL121: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    goto CPyL109;
CPyL122: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_key_value);
    goto CPyL109;
CPyL123: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_key_value);
    CPy_DecRef(cpy_r_r44);
    goto CPyL109;
CPyL124: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_key_value);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r48);
    goto CPyL109;
CPyL125: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_key_value);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    goto CPyL109;
CPyL126: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_key_value);
    CPy_DecRef(cpy_r_exists);
    goto CPyL109;
CPyL127: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_key_value);
    CPy_DecRef(cpy_r_exists);
    CPy_DecRef(cpy_r_r56);
    goto CPyL109;
CPyL128: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_key_value);
    CPy_DecRef(cpy_r_exists);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r57);
    goto CPyL109;
CPyL129: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_key_value);
    CPy_DecRef(cpy_r_r60);
    goto CPyL109;
CPyL130: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_key_value);
    CPy_DecRef(cpy_r_r66);
    goto CPyL109;
CPyL131: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_key_value);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r67);
    goto CPyL109;
CPyL132: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r69);
    goto CPyL44;
CPyL133: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_item);
    goto CPyL109;
CPyL134: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r81);
    CPy_DecRef(cpy_r_r82);
    goto CPyL109;
CPyL135: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r81);
    CPy_DecRef(cpy_r_r84);
    goto CPyL109;
CPyL136: ;
    CPy_DECREF(cpy_r_r89);
    goto CPyL51;
CPyL137: ;
    CPy_DECREF(cpy_r_r91);
    goto CPyL61;
CPyL138: ;
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r96);
    goto CPyL59;
CPyL139: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r81);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_r92.f0);
    CPy_DecRef(cpy_r_r92.f1);
    CPy_DecRef(cpy_r_r92.f2);
    goto CPyL57;
CPyL140: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r81);
    CPy_DecRef(cpy_r_r84);
    goto CPyL60;
CPyL141: ;
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r84);
    goto CPyL66;
CPyL142: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r81);
    goto CPyL69;
CPyL143: ;
    CPy_DECREF(cpy_r_r110);
    goto CPyL65;
CPyL144: ;
    CPy_DECREF(cpy_r_keys);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r18);
    goto CPyL67;
CPyL145: ;
    CPy_XDECREF(cpy_r_r105.f0);
    CPy_XDECREF(cpy_r_r105.f1);
    CPy_XDECREF(cpy_r_r105.f2);
    goto CPyL68;
CPyL146: ;
    CPy_DECREF(cpy_r_keys);
    goto CPyL108;
CPyL147: ;
    CPy_DecRef(cpy_r_keys);
    goto CPyL109;
CPyL148: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r117);
    goto CPyL109;
CPyL149: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r123);
    goto CPyL109;
CPyL150: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r127);
    goto CPyL109;
CPyL151: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r127);
    CPy_DecRef(cpy_r_r128);
    goto CPyL109;
CPyL152: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r127);
    CPy_DecRef(cpy_r_r129);
    goto CPyL109;
CPyL153: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_rest);
    goto CPyL109;
CPyL154: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_r136);
    goto CPyL109;
CPyL155: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_target);
    goto CPyL109;
CPyL156: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r142);
    goto CPyL109;
CPyL157: ;
    CPy_DECREF(cpy_r_keys);
    CPy_DECREF(cpy_r_rest);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL105;
CPyL158: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_rest);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL109;
CPyL159: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_rest);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_key_name);
    goto CPyL109;
CPyL160: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_rest);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_key_name);
    CPy_DecRef(cpy_r_r155);
    goto CPyL109;
CPyL161: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_rest);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_key_name);
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r159);
    goto CPyL109;
CPyL162: ;
    CPy_DecRef(cpy_r_keys);
    CPy_DecRef(cpy_r_rest);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r159);
    CPy_DecRef(cpy_r_r160);
    goto CPyL109;
CPyL163: ;
    CPy_DECREF(cpy_r_r168);
    goto CPyL104;
CPyL164: ;
    CPy_DecRef(cpy_r_r171);
    goto CPyL109;
}

PyObject *CPyPy_match___MatchVisitor___visit_mapping_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"pattern", 0};
    static CPyArg_Parser parser = {"O:visit_mapping_pattern", kwlist, 0};
    PyObject *obj_pattern;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_pattern)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_pattern;
    if (likely(Py_TYPE(obj_pattern) == CPyType_patterns___MappingPattern))
        arg_pattern = obj_pattern;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_pattern); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_mapping_pattern(arg_self, arg_pattern);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern", 218, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_mapping_pattern__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_mapping_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_match___MatchVisitor___visit_mapping_pattern__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mapping_pattern__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___MappingPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_o); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_mapping_pattern__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern__TraverserVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_mapping_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_mapping_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_mapping_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mapping_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___MappingPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_mapping_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern__NodeVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_mapping_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_mapping_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_mapping_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mapping_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___MappingPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_mapping_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_mapping_pattern__PatternVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_sequence_pattern(PyObject *cpy_r_self, PyObject *cpy_r_seq_pattern) {
    tuple_T3OOO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_star_index;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_capture;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_patterns;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_is_list;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    CPyPtr cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_actual_len;
    CPyPtr cpy_r_r36;
    int64_t cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_min_len;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_is_long_enough;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r54;
    CPyPtr cpy_r_r55;
    int64_t cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_pattern;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    CPyTagged cpy_r_r69;
    int64_t cpy_r_r70;
    char cpy_r_r71;
    int64_t cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyTagged cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_current;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyPtr cpy_r_r92;
    CPyPtr cpy_r_r93;
    CPyPtr cpy_r_r94;
    CPyTagged cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r97;
    PyObject **cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject **cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    tuple_T3OOO cpy_r_r111;
    tuple_T3OOO cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject **cpy_r_r117;
    PyObject *cpy_r_r118;
    int32_t cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    tuple_T3OOO cpy_r_r123;
    tuple_T3OOO cpy_r_r124;
    tuple_T3OOO cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject **cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    CPyTagged cpy_r_r131;
    CPyTagged cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    CPyTagged cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    CPyTagged cpy_r_r145;
    CPyTagged cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyTagged cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_capture_end;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    CPyTagged cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    CPyPtr cpy_r_r162;
    CPyPtr cpy_r_r163;
    CPyPtr cpy_r_r164;
    CPyPtr cpy_r_r165;
    PyObject *cpy_r_r166;
    CPyTagged cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_rest;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    CPyTagged cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    CPyTagged cpy_r_r176;
    char cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    char cpy_r_r180;
    char cpy_r_r181;
    cpy_r_r0 = CPyDef_match___prep_sequence_pattern(cpy_r_seq_pattern);
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 261, CPyStatic_match___globals);
        goto CPyL123;
    }
    cpy_r_r1 = cpy_r_r0.f0;
    CPy_INCREF(cpy_r_r1);
    cpy_r_star_index = cpy_r_r1;
    cpy_r_r2 = cpy_r_r0.f1;
    CPy_INCREF(cpy_r_r2);
    cpy_r_capture = cpy_r_r2;
    cpy_r_r3 = cpy_r_r0.f2;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r0.f0);
    CPy_DECREF(cpy_r_r0.f1);
    CPy_DECREF(cpy_r_r0.f2);
    cpy_r_patterns = cpy_r_r3;
    cpy_r_r4 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 263, CPyStatic_match___globals);
        goto CPyL124;
    }
    CPy_INCREF(cpy_r_r4);
CPyL2: ;
    cpy_r_r5 = CPyStatic_match___globals;
    cpy_r_r6 = CPyStatics[8480]; /* 'supports_sequence_protocol' */
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 263, CPyStatic_match___globals);
        goto CPyL125;
    }
    if (likely(PyTuple_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 263, CPyStatic_match___globals, "tuple", cpy_r_r7);
        goto CPyL125;
    }
    cpy_r_r9 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "subject", 263, CPyStatic_match___globals);
        goto CPyL126;
    }
    CPy_INCREF(cpy_r_r9);
CPyL5: ;
    cpy_r_r10 = PyList_New(1);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 263, CPyStatic_match___globals);
        goto CPyL127;
    }
    cpy_r_r11 = (CPyPtr)&((PyListObject *)cpy_r_r10)->ob_item;
    cpy_r_r12 = *(CPyPtr *)cpy_r_r11;
    *(PyObject * *)cpy_r_r12 = cpy_r_r9;
    cpy_r_r13 = ((mypy___patterns___SequencePatternObject *)cpy_r_seq_pattern)->_line;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_builder___IRBuilder___call_c(cpy_r_r4, cpy_r_r8, cpy_r_r10, cpy_r_r13);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 263, CPyStatic_match___globals);
        goto CPyL124;
    }
    cpy_r_is_list = cpy_r_r14;
    cpy_r_r15 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 265, CPyStatic_match___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r15);
CPyL8: ;
    cpy_r_r16 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "code_block", 265, CPyStatic_match___globals);
        goto CPyL129;
    }
    CPy_INCREF(cpy_r_r16);
CPyL9: ;
    cpy_r_r17 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "next_block", 265, CPyStatic_match___globals);
        goto CPyL130;
    }
    CPy_INCREF(cpy_r_r17);
CPyL10: ;
    cpy_r_r18 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_r15, cpy_r_is_list, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_is_list);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 265, CPyStatic_match___globals);
        goto CPyL124;
    }
    cpy_r_r19 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 267, CPyStatic_match___globals);
        goto CPyL124;
    }
    CPy_INCREF(cpy_r_r19);
CPyL12: ;
    cpy_r_r20 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "code_block", 267, CPyStatic_match___globals);
        goto CPyL131;
    }
    CPy_INCREF(cpy_r_r20);
CPyL13: ;
    cpy_r_r21 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 267, CPyStatic_match___globals);
        goto CPyL124;
    }
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPyDef_ops___BasicBlock(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 268, CPyStatic_match___globals);
        goto CPyL124;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block = cpy_r_r23;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 268, CPyStatic_match___globals);
        goto CPyL124;
    }
    cpy_r_r25 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 270, CPyStatic_match___globals);
        goto CPyL124;
    }
    CPy_INCREF(cpy_r_r25);
CPyL17: ;
    cpy_r_r26 = CPyStatic_match___globals;
    cpy_r_r27 = CPyStatics[8431]; /* 'generic_ssize_t_len_op' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 270, CPyStatic_match___globals);
        goto CPyL132;
    }
    if (likely(PyTuple_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 270, CPyStatic_match___globals, "tuple", cpy_r_r28);
        goto CPyL132;
    }
    cpy_r_r30 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "subject", 270, CPyStatic_match___globals);
        goto CPyL133;
    }
    CPy_INCREF(cpy_r_r30);
CPyL20: ;
    cpy_r_r31 = PyList_New(1);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 270, CPyStatic_match___globals);
        goto CPyL134;
    }
    cpy_r_r32 = (CPyPtr)&((PyListObject *)cpy_r_r31)->ob_item;
    cpy_r_r33 = *(CPyPtr *)cpy_r_r32;
    *(PyObject * *)cpy_r_r33 = cpy_r_r30;
    cpy_r_r34 = ((mypy___patterns___SequencePatternObject *)cpy_r_seq_pattern)->_line;
    CPyTagged_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyDef_builder___IRBuilder___call_c(cpy_r_r25, cpy_r_r29, cpy_r_r31, cpy_r_r34);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r31);
    CPyTagged_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 270, CPyStatic_match___globals);
        goto CPyL124;
    }
    cpy_r_actual_len = cpy_r_r35;
    cpy_r_r36 = (CPyPtr)&((PyVarObject *)cpy_r_patterns)->ob_size;
    cpy_r_r37 = *(int64_t *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 << 1;
    cpy_r_min_len = cpy_r_r38;
    cpy_r_r39 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 273, CPyStatic_match___globals);
        goto CPyL135;
    }
    CPy_INCREF(cpy_r_r39);
CPyL23: ;
    cpy_r_r40 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 275, CPyStatic_match___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r40);
CPyL24: ;
    cpy_r_r41 = CPyDef_builder___IRBuilder___load_int(cpy_r_r40, cpy_r_min_len);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 275, CPyStatic_match___globals);
        goto CPyL136;
    }
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_star_index == cpy_r_r42;
    if (!cpy_r_r43) goto CPyL27;
    cpy_r_r44 = CPyStatics[860]; /* '==' */
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = cpy_r_r44;
    goto CPyL28;
CPyL27: ;
    cpy_r_r46 = CPyStatics[2468]; /* '>=' */
    CPy_INCREF(cpy_r_r46);
    cpy_r_r45 = cpy_r_r46;
CPyL28: ;
    cpy_r_r47 = ((mypy___patterns___SequencePatternObject *)cpy_r_seq_pattern)->_line;
    CPyTagged_INCREF(cpy_r_r47);
    cpy_r_r48 = CPyDef_builder___IRBuilder___binary_op(cpy_r_r39, cpy_r_actual_len, cpy_r_r41, cpy_r_r45, cpy_r_r47);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r45);
    CPyTagged_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 273, CPyStatic_match___globals);
        goto CPyL135;
    }
    cpy_r_is_long_enough = cpy_r_r48;
    cpy_r_r49 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 280, CPyStatic_match___globals);
        goto CPyL137;
    }
    CPy_INCREF(cpy_r_r49);
CPyL30: ;
    cpy_r_r50 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "code_block", 280, CPyStatic_match___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r50);
CPyL31: ;
    cpy_r_r51 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_next_block;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "next_block", 280, CPyStatic_match___globals);
        goto CPyL139;
    }
    CPy_INCREF(cpy_r_r51);
CPyL32: ;
    cpy_r_r52 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_r49, cpy_r_is_long_enough, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_is_long_enough);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 280, CPyStatic_match___globals);
        goto CPyL135;
    }
    cpy_r_r53 = 0;
    cpy_r_i = 0;
    cpy_r_r54 = 0;
CPyL34: ;
    cpy_r_r55 = (CPyPtr)&((PyVarObject *)cpy_r_patterns)->ob_size;
    cpy_r_r56 = *(int64_t *)cpy_r_r55;
    cpy_r_r57 = cpy_r_r56 << 1;
    cpy_r_r58 = (Py_ssize_t)cpy_r_r54 < (Py_ssize_t)cpy_r_r57;
    if (!cpy_r_r58) goto CPyL140;
    cpy_r_r59 = CPyList_GetItemUnsafe(cpy_r_patterns, cpy_r_r54);
    if (likely(PyObject_TypeCheck(cpy_r_r59, CPyType_patterns___Pattern)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 282, CPyStatic_match___globals, "mypy.patterns.Pattern", cpy_r_r59);
        goto CPyL141;
    }
    cpy_r_pattern = cpy_r_r60;
    cpy_r_r61 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 283, CPyStatic_match___globals);
        goto CPyL142;
    }
    CPy_INCREF(cpy_r_r61);
CPyL37: ;
    cpy_r_r62 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "code_block", 283, CPyStatic_match___globals);
        goto CPyL143;
    }
    CPy_INCREF(cpy_r_r62);
CPyL38: ;
    cpy_r_r63 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 283, CPyStatic_match___globals);
        goto CPyL142;
    }
    cpy_r_r64 = CPY_INT_TAG;
    cpy_r_r65 = CPyDef_ops___BasicBlock(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 284, CPyStatic_match___globals);
        goto CPyL142;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block = cpy_r_r65;
    cpy_r_r66 = 1;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 284, CPyStatic_match___globals);
        goto CPyL142;
    }
    cpy_r_r67 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r68 = cpy_r_star_index != cpy_r_r67;
    if (!cpy_r_r68) goto CPyL53;
    if (likely(PyLong_Check(cpy_r_star_index)))
        cpy_r_r69 = CPyTagged_FromObject(cpy_r_star_index);
    else {
        CPy_TypeError("int", cpy_r_star_index); cpy_r_r69 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r69 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 286, CPyStatic_match___globals);
        goto CPyL142;
    }
    cpy_r_r70 = cpy_r_i & 1;
    cpy_r_r71 = cpy_r_r70 != 0;
    if (cpy_r_r71) goto CPyL45;
    cpy_r_r72 = cpy_r_r69 & 1;
    cpy_r_r73 = cpy_r_r72 != 0;
    if (!cpy_r_r73) goto CPyL46;
CPyL45: ;
    cpy_r_r74 = CPyTagged_IsLt_(cpy_r_i, cpy_r_r69);
    CPyTagged_DECREF(cpy_r_r69);
    if (cpy_r_r74) {
        goto CPyL53;
    } else
        goto CPyL47;
CPyL46: ;
    cpy_r_r75 = (Py_ssize_t)cpy_r_i >= (Py_ssize_t)cpy_r_r69;
    CPyTagged_DECREF(cpy_r_r69);
    if (!cpy_r_r75) goto CPyL53;
CPyL47: ;
    cpy_r_r76 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 287, CPyStatic_match___globals);
        goto CPyL142;
    }
    CPy_INCREF(cpy_r_r76);
CPyL48: ;
    cpy_r_r77 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 288, CPyStatic_match___globals);
        goto CPyL144;
    }
    CPy_INCREF(cpy_r_r77);
CPyL49: ;
    cpy_r_r78 = CPyTagged_Subtract(cpy_r_min_len, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r79 = CPyDef_builder___IRBuilder___load_int(cpy_r_r77, cpy_r_r78);
    CPyTagged_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 288, CPyStatic_match___globals);
        goto CPyL145;
    }
    cpy_r_r80 = CPyStatics[1198]; /* '-' */
    cpy_r_r81 = ((mypy___nodes___ContextObject *)cpy_r_pattern)->_line;
    if (unlikely(cpy_r_r81 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "Pattern", "line", 288, CPyStatic_match___globals);
        goto CPyL146;
    }
    CPyTagged_INCREF(cpy_r_r81);
CPyL51: ;
    cpy_r_r82 = CPyDef_builder___IRBuilder___binary_op(cpy_r_r76, cpy_r_actual_len, cpy_r_r79, cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r79);
    CPyTagged_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 287, CPyStatic_match___globals);
        goto CPyL147;
    }
    cpy_r_current = cpy_r_r82;
    goto CPyL56;
CPyL53: ;
    cpy_r_r83 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 292, CPyStatic_match___globals);
        goto CPyL142;
    }
    CPy_INCREF(cpy_r_r83);
CPyL54: ;
    cpy_r_r84 = CPyDef_builder___IRBuilder___load_int(cpy_r_r83, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 292, CPyStatic_match___globals);
        goto CPyL147;
    }
    cpy_r_current = cpy_r_r84;
CPyL56: ;
    cpy_r_r85 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 294, CPyStatic_match___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r85);
CPyL57: ;
    cpy_r_r86 = CPyStatic_match___globals;
    cpy_r_r87 = CPyStatics[8481]; /* 'sequence_get_item' */
    cpy_r_r88 = CPyDict_GetItem(cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 294, CPyStatic_match___globals);
        goto CPyL149;
    }
    if (likely(PyTuple_Check(cpy_r_r88)))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 294, CPyStatic_match___globals, "tuple", cpy_r_r88);
        goto CPyL149;
    }
    cpy_r_r90 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "subject", 294, CPyStatic_match___globals);
        goto CPyL150;
    }
    CPy_INCREF(cpy_r_r90);
CPyL60: ;
    cpy_r_r91 = PyList_New(2);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 294, CPyStatic_match___globals);
        goto CPyL151;
    }
    cpy_r_r92 = (CPyPtr)&((PyListObject *)cpy_r_r91)->ob_item;
    cpy_r_r93 = *(CPyPtr *)cpy_r_r92;
    *(PyObject * *)cpy_r_r93 = cpy_r_r90;
    cpy_r_r94 = cpy_r_r93 + 8;
    *(PyObject * *)cpy_r_r94 = cpy_r_current;
    cpy_r_r95 = ((mypy___nodes___ContextObject *)cpy_r_pattern)->_line;
    if (unlikely(cpy_r_r95 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "Pattern", "line", 294, CPyStatic_match___globals);
        goto CPyL152;
    }
    CPyTagged_INCREF(cpy_r_r95);
CPyL62: ;
    cpy_r_r96 = CPyDef_builder___IRBuilder___call_c(cpy_r_r85, cpy_r_r89, cpy_r_r91, cpy_r_r95);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r91);
    CPyTagged_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 294, CPyStatic_match___globals);
        goto CPyL147;
    }
    cpy_r_item = cpy_r_r96;
    cpy_r_r97 = CPyStatics[8475]; /* 'enter_subpattern' */
    PyObject *cpy_r_r98[2] = {cpy_r_self, cpy_r_item};
    cpy_r_r99 = (PyObject **)&cpy_r_r98;
    cpy_r_r100 = PyObject_VectorcallMethod(cpy_r_r97, cpy_r_r99, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 296, CPyStatic_match___globals);
        goto CPyL153;
    }
    CPy_DECREF(cpy_r_item);
    cpy_r_r101 = PyObject_Type(cpy_r_r100);
    cpy_r_r102 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r103 = CPyObject_GetAttr(cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 296, CPyStatic_match___globals);
        goto CPyL154;
    }
    cpy_r_r104 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r105 = CPyObject_GetAttr(cpy_r_r101, cpy_r_r104);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 296, CPyStatic_match___globals);
        goto CPyL155;
    }
    PyObject *cpy_r_r106[1] = {cpy_r_r100};
    cpy_r_r107 = (PyObject **)&cpy_r_r106;
    cpy_r_r108 = _PyObject_Vectorcall(cpy_r_r105, cpy_r_r107, 1, 0);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 296, CPyStatic_match___globals);
        goto CPyL155;
    } else
        goto CPyL156;
CPyL67: ;
    cpy_r_r109 = 1;
    cpy_r_r110 = CPY_GET_METHOD_TRAIT(cpy_r_pattern, CPyType_patterns___Pattern, 5, mypy___patterns___PatternObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_pattern, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_pattern);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 297, CPyStatic_match___globals);
    } else
        goto CPyL157;
    cpy_r_r111 = CPy_CatchError();
    cpy_r_r109 = 0;
    cpy_r_r112 = CPy_GetExcInfo();
    cpy_r_r113 = cpy_r_r112.f0;
    CPy_INCREF(cpy_r_r113);
    cpy_r_r114 = cpy_r_r112.f1;
    CPy_INCREF(cpy_r_r114);
    cpy_r_r115 = cpy_r_r112.f2;
    CPy_INCREF(cpy_r_r115);
    CPy_DecRef(cpy_r_r112.f0);
    CPy_DecRef(cpy_r_r112.f1);
    CPy_DecRef(cpy_r_r112.f2);
    PyObject *cpy_r_r116[4] = {cpy_r_r100, cpy_r_r113, cpy_r_r114, cpy_r_r115};
    cpy_r_r117 = (PyObject **)&cpy_r_r116;
    cpy_r_r118 = _PyObject_Vectorcall(cpy_r_r103, cpy_r_r117, 4, 0);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 296, CPyStatic_match___globals);
        goto CPyL158;
    }
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r115);
    cpy_r_r119 = PyObject_IsTrue(cpy_r_r118);
    CPy_DecRef(cpy_r_r118);
    cpy_r_r120 = cpy_r_r119 >= 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 296, CPyStatic_match___globals);
        goto CPyL75;
    }
    cpy_r_r121 = cpy_r_r119;
    if (cpy_r_r121) goto CPyL74;
    CPy_Reraise();
    if (!0) {
        goto CPyL75;
    } else
        goto CPyL159;
CPyL73: ;
    CPy_Unreachable();
CPyL74: ;
    CPy_RestoreExcInfo(cpy_r_r111);
    CPy_DecRef(cpy_r_r111.f0);
    CPy_DecRef(cpy_r_r111.f1);
    CPy_DecRef(cpy_r_r111.f2);
    goto CPyL77;
CPyL75: ;
    CPy_RestoreExcInfo(cpy_r_r111);
    CPy_DecRef(cpy_r_r111.f0);
    CPy_DecRef(cpy_r_r111.f1);
    CPy_DecRef(cpy_r_r111.f2);
    cpy_r_r122 = CPy_KeepPropagating();
    if (!cpy_r_r122) {
        goto CPyL78;
    } else
        goto CPyL160;
CPyL76: ;
    CPy_Unreachable();
CPyL77: ;
    tuple_T3OOO __tmp10385 = { NULL, NULL, NULL };
    cpy_r_r123 = __tmp10385;
    cpy_r_r124 = cpy_r_r123;
    goto CPyL79;
CPyL78: ;
    cpy_r_r125 = CPy_CatchError();
    cpy_r_r124 = cpy_r_r125;
CPyL79: ;
    if (!cpy_r_r109) goto CPyL161;
    cpy_r_r126 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r127[4] = {cpy_r_r100, cpy_r_r126, cpy_r_r126, cpy_r_r126};
    cpy_r_r128 = (PyObject **)&cpy_r_r127;
    cpy_r_r129 = _PyObject_Vectorcall(cpy_r_r103, cpy_r_r128, 4, 0);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 296, CPyStatic_match___globals);
        goto CPyL162;
    } else
        goto CPyL163;
CPyL81: ;
    CPy_DECREF(cpy_r_r100);
CPyL82: ;
    if (cpy_r_r124.f0 == NULL) {
        goto CPyL89;
    } else
        goto CPyL164;
CPyL83: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL85;
    } else
        goto CPyL165;
CPyL84: ;
    CPy_Unreachable();
CPyL85: ;
    if (cpy_r_r124.f0 == NULL) goto CPyL87;
    CPy_RestoreExcInfo(cpy_r_r124);
    CPy_XDECREF(cpy_r_r124.f0);
    CPy_XDECREF(cpy_r_r124.f1);
    CPy_XDECREF(cpy_r_r124.f2);
CPyL87: ;
    cpy_r_r130 = CPy_KeepPropagating();
    if (!cpy_r_r130) goto CPyL123;
    CPy_Unreachable();
CPyL89: ;
    cpy_r_r131 = cpy_r_r53 + 2;
    cpy_r_r53 = cpy_r_r131;
    cpy_r_i = cpy_r_r131;
    cpy_r_r132 = cpy_r_r54 + 2;
    cpy_r_r54 = cpy_r_r132;
    goto CPyL34;
CPyL90: ;
    cpy_r_r133 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r134 = cpy_r_capture != cpy_r_r133;
    if (!cpy_r_r134) goto CPyL166;
    cpy_r_r135 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r136 = cpy_r_star_index != cpy_r_r135;
    if (!cpy_r_r136) goto CPyL166;
    cpy_r_r137 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 300, CPyStatic_match___globals);
        goto CPyL167;
    }
    CPy_INCREF(cpy_r_r137);
CPyL93: ;
    cpy_r_r138 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "code_block", 300, CPyStatic_match___globals);
        goto CPyL168;
    }
    CPy_INCREF(cpy_r_r138);
CPyL94: ;
    cpy_r_r139 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r137, cpy_r_r138);
    CPy_DECREF(cpy_r_r138);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r139 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 300, CPyStatic_match___globals);
        goto CPyL167;
    }
    cpy_r_r140 = CPY_INT_TAG;
    cpy_r_r141 = CPyDef_ops___BasicBlock(cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 301, CPyStatic_match___globals);
        goto CPyL167;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block = cpy_r_r141;
    cpy_r_r142 = 1;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 301, CPyStatic_match___globals);
        goto CPyL167;
    }
    cpy_r_r143 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 303, CPyStatic_match___globals);
        goto CPyL167;
    }
    CPy_INCREF(cpy_r_r143);
CPyL98: ;
    cpy_r_r144 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 304, CPyStatic_match___globals);
        goto CPyL169;
    }
    CPy_INCREF(cpy_r_r144);
CPyL99: ;
    if (likely(PyLong_Check(cpy_r_star_index)))
        cpy_r_r145 = CPyTagged_FromObject(cpy_r_star_index);
    else {
        CPy_TypeError("int", cpy_r_star_index); cpy_r_r145 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r145 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 304, CPyStatic_match___globals);
        goto CPyL170;
    }
    cpy_r_r146 = CPyTagged_Subtract(cpy_r_min_len, cpy_r_r145);
    CPyTagged_DECREF(cpy_r_min_len);
    CPyTagged_DECREF(cpy_r_r145);
    cpy_r_r147 = CPyDef_builder___IRBuilder___load_int(cpy_r_r144, cpy_r_r146);
    CPyTagged_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 304, CPyStatic_match___globals);
        goto CPyL171;
    }
    cpy_r_r148 = CPyStatics[1198]; /* '-' */
    if (likely(cpy_r_capture != Py_None))
        cpy_r_r149 = cpy_r_capture;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 304, CPyStatic_match___globals, "mypy.nodes.NameExpr", cpy_r_capture);
        goto CPyL172;
    }
    cpy_r_r150 = ((mypy___nodes___NameExprObject *)cpy_r_r149)->_line;
    CPyTagged_INCREF(cpy_r_r150);
    cpy_r_r151 = CPyDef_builder___IRBuilder___binary_op(cpy_r_r143, cpy_r_actual_len, cpy_r_r147, cpy_r_r148, cpy_r_r150);
    CPy_DECREF(cpy_r_actual_len);
    CPy_DECREF(cpy_r_r147);
    CPyTagged_DECREF(cpy_r_r150);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 303, CPyStatic_match___globals);
        goto CPyL173;
    }
    cpy_r_capture_end = cpy_r_r151;
    cpy_r_r152 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 307, CPyStatic_match___globals);
        goto CPyL174;
    }
    CPy_INCREF(cpy_r_r152);
CPyL104: ;
    cpy_r_r153 = CPyStatic_match___globals;
    cpy_r_r154 = CPyStatics[8482]; /* 'sequence_get_slice' */
    cpy_r_r155 = CPyDict_GetItem(cpy_r_r153, cpy_r_r154);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 308, CPyStatic_match___globals);
        goto CPyL175;
    }
    if (likely(PyTuple_Check(cpy_r_r155)))
        cpy_r_r156 = cpy_r_r155;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 308, CPyStatic_match___globals, "tuple", cpy_r_r155);
        goto CPyL175;
    }
    cpy_r_r157 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_subject;
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "subject", 309, CPyStatic_match___globals);
        goto CPyL176;
    }
    CPy_INCREF(cpy_r_r157);
CPyL107: ;
    cpy_r_r158 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 309, CPyStatic_match___globals);
        goto CPyL177;
    }
    CPy_INCREF(cpy_r_r158);
CPyL108: ;
    if (likely(PyLong_Check(cpy_r_star_index)))
        cpy_r_r159 = CPyTagged_FromObject(cpy_r_star_index);
    else {
        CPy_TypeError("int", cpy_r_star_index); cpy_r_r159 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_star_index);
    if (unlikely(cpy_r_r159 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 309, CPyStatic_match___globals);
        goto CPyL178;
    }
    cpy_r_r160 = CPyDef_builder___IRBuilder___load_int(cpy_r_r158, cpy_r_r159);
    CPyTagged_DECREF(cpy_r_r159);
    CPy_DECREF(cpy_r_r158);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 309, CPyStatic_match___globals);
        goto CPyL179;
    }
    cpy_r_r161 = PyList_New(3);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 309, CPyStatic_match___globals);
        goto CPyL180;
    }
    cpy_r_r162 = (CPyPtr)&((PyListObject *)cpy_r_r161)->ob_item;
    cpy_r_r163 = *(CPyPtr *)cpy_r_r162;
    *(PyObject * *)cpy_r_r163 = cpy_r_r157;
    cpy_r_r164 = cpy_r_r163 + 8;
    *(PyObject * *)cpy_r_r164 = cpy_r_r160;
    cpy_r_r165 = cpy_r_r163 + 16;
    *(PyObject * *)cpy_r_r165 = cpy_r_capture_end;
    if (likely(cpy_r_capture != Py_None))
        cpy_r_r166 = cpy_r_capture;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 310, CPyStatic_match___globals, "mypy.nodes.NameExpr", cpy_r_capture);
        goto CPyL181;
    }
    cpy_r_r167 = ((mypy___nodes___NameExprObject *)cpy_r_r166)->_line;
    CPyTagged_INCREF(cpy_r_r167);
    cpy_r_r168 = CPyDef_builder___IRBuilder___call_c(cpy_r_r152, cpy_r_r156, cpy_r_r161, cpy_r_r167);
    CPy_DECREF(cpy_r_r156);
    CPy_DECREF(cpy_r_r161);
    CPyTagged_DECREF(cpy_r_r167);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 307, CPyStatic_match___globals);
        goto CPyL182;
    }
    cpy_r_rest = cpy_r_r168;
    cpy_r_r169 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 313, CPyStatic_match___globals);
        goto CPyL183;
    }
    CPy_INCREF(cpy_r_r169);
CPyL114: ;
    CPy_INCREF(cpy_r_capture);
    if (likely(cpy_r_capture != Py_None))
        cpy_r_r170 = cpy_r_capture;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 313, CPyStatic_match___globals, "mypy.nodes.NameExpr", cpy_r_capture);
        goto CPyL184;
    }
    cpy_r_r171 = CPY_INT_TAG;
    cpy_r_r172 = 2;
    cpy_r_r173 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_r169, cpy_r_r170, cpy_r_r171, cpy_r_r172);
    CPy_DECREF(cpy_r_r170);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 313, CPyStatic_match___globals);
        goto CPyL183;
    }
    cpy_r_target = cpy_r_r173;
    cpy_r_r174 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 314, CPyStatic_match___globals);
        goto CPyL185;
    }
    CPy_INCREF(cpy_r_r174);
CPyL117: ;
    if (likely(cpy_r_capture != Py_None))
        cpy_r_r175 = cpy_r_capture;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 314, CPyStatic_match___globals, "mypy.nodes.NameExpr", cpy_r_capture);
        goto CPyL186;
    }
    cpy_r_r176 = ((mypy___nodes___NameExprObject *)cpy_r_r175)->_line;
    CPyTagged_INCREF(cpy_r_r176);
    CPy_DECREF(cpy_r_capture);
    cpy_r_r177 = CPyDef_builder___IRBuilder___assign(cpy_r_r174, cpy_r_target, cpy_r_rest, cpy_r_r176);
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_rest);
    CPyTagged_DECREF(cpy_r_r176);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r177 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 314, CPyStatic_match___globals);
        goto CPyL123;
    }
    cpy_r_r178 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "builder", 316, CPyStatic_match___globals);
        goto CPyL123;
    }
    CPy_INCREF(cpy_r_r178);
CPyL120: ;
    cpy_r_r179 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "visit_sequence_pattern", "MatchVisitor", "code_block", 316, CPyStatic_match___globals);
        goto CPyL187;
    }
    CPy_INCREF(cpy_r_r179);
CPyL121: ;
    cpy_r_r180 = CPyDef_builder___IRBuilder___goto(cpy_r_r178, cpy_r_r179);
    CPy_DECREF(cpy_r_r179);
    CPy_DECREF(cpy_r_r178);
    if (unlikely(cpy_r_r180 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 316, CPyStatic_match___globals);
        goto CPyL123;
    }
CPyL122: ;
    return 1;
CPyL123: ;
    cpy_r_r181 = 2;
    return cpy_r_r181;
CPyL124: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    goto CPyL123;
CPyL125: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_r4);
    goto CPyL123;
CPyL126: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    goto CPyL123;
CPyL127: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL123;
CPyL128: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_is_list);
    goto CPyL123;
CPyL129: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_is_list);
    CPy_DecRef(cpy_r_r15);
    goto CPyL123;
CPyL130: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_is_list);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    goto CPyL123;
CPyL131: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_r19);
    goto CPyL123;
CPyL132: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_r25);
    goto CPyL123;
CPyL133: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r29);
    goto CPyL123;
CPyL134: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    goto CPyL123;
CPyL135: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    goto CPyL123;
CPyL136: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_r39);
    goto CPyL123;
CPyL137: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_is_long_enough);
    goto CPyL123;
CPyL138: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_is_long_enough);
    CPy_DecRef(cpy_r_r49);
    goto CPyL123;
CPyL139: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_is_long_enough);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r50);
    goto CPyL123;
CPyL140: ;
    CPy_DECREF(cpy_r_patterns);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL90;
CPyL141: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL123;
CPyL142: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_pattern);
    goto CPyL123;
CPyL143: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_r61);
    goto CPyL123;
CPyL144: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_r76);
    goto CPyL123;
CPyL145: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_r76);
    goto CPyL123;
CPyL146: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r79);
    goto CPyL123;
CPyL147: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_pattern);
    goto CPyL123;
CPyL148: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_current);
    goto CPyL123;
CPyL149: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_current);
    CPy_DecRef(cpy_r_r85);
    goto CPyL123;
CPyL150: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_current);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r89);
    goto CPyL123;
CPyL151: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_current);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r90);
    goto CPyL123;
CPyL152: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r91);
    goto CPyL123;
CPyL153: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_item);
    goto CPyL123;
CPyL154: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r101);
    goto CPyL123;
CPyL155: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r103);
    goto CPyL123;
CPyL156: ;
    CPy_DECREF(cpy_r_r108);
    goto CPyL67;
CPyL157: ;
    CPy_DECREF(cpy_r_r110);
    goto CPyL77;
CPyL158: ;
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r115);
    goto CPyL75;
CPyL159: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r111.f0);
    CPy_DecRef(cpy_r_r111.f1);
    CPy_DecRef(cpy_r_r111.f2);
    goto CPyL73;
CPyL160: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r103);
    goto CPyL76;
CPyL161: ;
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r103);
    goto CPyL82;
CPyL162: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_r100);
    goto CPyL85;
CPyL163: ;
    CPy_DECREF(cpy_r_r129);
    goto CPyL81;
CPyL164: ;
    CPy_DECREF(cpy_r_star_index);
    CPy_DECREF(cpy_r_capture);
    CPy_DECREF(cpy_r_patterns);
    CPy_DECREF(cpy_r_actual_len);
    CPyTagged_DECREF(cpy_r_min_len);
    goto CPyL83;
CPyL165: ;
    CPy_XDECREF(cpy_r_r124.f0);
    CPy_XDECREF(cpy_r_r124.f1);
    CPy_XDECREF(cpy_r_r124.f2);
    goto CPyL84;
CPyL166: ;
    CPy_DECREF(cpy_r_star_index);
    CPy_DECREF(cpy_r_capture);
    CPy_DECREF(cpy_r_actual_len);
    CPyTagged_DECREF(cpy_r_min_len);
    goto CPyL122;
CPyL167: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    goto CPyL123;
CPyL168: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_r137);
    goto CPyL123;
CPyL169: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_r143);
    goto CPyL123;
CPyL170: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_actual_len);
    CPyTagged_DecRef(cpy_r_min_len);
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_r144);
    goto CPyL123;
CPyL171: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_actual_len);
    CPy_DecRef(cpy_r_r143);
    goto CPyL123;
CPyL172: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_actual_len);
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_r147);
    goto CPyL123;
CPyL173: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    goto CPyL123;
CPyL174: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_capture_end);
    goto CPyL123;
CPyL175: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_capture_end);
    CPy_DecRef(cpy_r_r152);
    goto CPyL123;
CPyL176: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_capture_end);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r156);
    goto CPyL123;
CPyL177: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_capture_end);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r157);
    goto CPyL123;
CPyL178: ;
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_capture_end);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r158);
    goto CPyL123;
CPyL179: ;
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_capture_end);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r157);
    goto CPyL123;
CPyL180: ;
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_capture_end);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r160);
    goto CPyL123;
CPyL181: ;
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r161);
    goto CPyL123;
CPyL182: ;
    CPy_DecRef(cpy_r_capture);
    goto CPyL123;
CPyL183: ;
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_rest);
    goto CPyL123;
CPyL184: ;
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_r169);
    goto CPyL123;
CPyL185: ;
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_target);
    goto CPyL123;
CPyL186: ;
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r174);
    goto CPyL123;
CPyL187: ;
    CPy_DecRef(cpy_r_r178);
    goto CPyL123;
}

PyObject *CPyPy_match___MatchVisitor___visit_sequence_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"seq_pattern", 0};
    static CPyArg_Parser parser = {"O:visit_sequence_pattern", kwlist, 0};
    PyObject *obj_seq_pattern;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_seq_pattern)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_seq_pattern;
    if (likely(Py_TYPE(obj_seq_pattern) == CPyType_patterns___SequencePattern))
        arg_seq_pattern = obj_seq_pattern;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_seq_pattern); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_sequence_pattern(arg_self, arg_seq_pattern);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern", 260, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___visit_sequence_pattern__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_sequence_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_match___MatchVisitor___visit_sequence_pattern__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_sequence_pattern__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SequencePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_o); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor___visit_sequence_pattern__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern__TraverserVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_sequence_pattern__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_sequence_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_sequence_pattern__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_sequence_pattern__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SequencePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_sequence_pattern__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern__NodeVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___visit_sequence_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor___visit_sequence_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___MatchVisitor___visit_sequence_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_sequence_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SequencePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___visit_sequence_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "visit_sequence_pattern__PatternVisitor_glue", -1, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor___bind_as_pattern(PyObject *cpy_r_self, PyObject *cpy_r_value, char cpy_r_new_block) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
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
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    if (cpy_r_new_block != 2) goto CPyL2;
    cpy_r_new_block = 0;
CPyL2: ;
    cpy_r_r0 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "bind_as_pattern", "MatchVisitor", "as_pattern", 319, CPyStatic_match___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r0);
CPyL3: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL32;
    cpy_r_r3 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "bind_as_pattern", "MatchVisitor", "as_pattern", 319, CPyStatic_match___globals);
        goto CPyL33;
    }
CPyL5: ;
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "bind_as_pattern", 319, CPyStatic_match___globals, "mypy.patterns.AsPattern", cpy_r_r3);
        goto CPyL33;
    }
    cpy_r_r5 = ((mypy___patterns___AsPatternObject *)cpy_r_r4)->_pattern;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 != cpy_r_r6;
    CPy_DECREF(cpy_r_r5);
    if (!cpy_r_r7) goto CPyL32;
    cpy_r_r8 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "bind_as_pattern", "MatchVisitor", "as_pattern", 319, CPyStatic_match___globals);
        goto CPyL33;
    }
CPyL8: ;
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "bind_as_pattern", 319, CPyStatic_match___globals, "mypy.patterns.AsPattern", cpy_r_r8);
        goto CPyL33;
    }
    cpy_r_r10 = ((mypy___patterns___AsPatternObject *)cpy_r_r9)->_name;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_r10 != cpy_r_r11;
    CPy_DECREF(cpy_r_r10);
    if (!cpy_r_r12) goto CPyL32;
    if (!cpy_r_new_block) goto CPyL16;
    cpy_r_r13 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "bind_as_pattern", "MatchVisitor", "builder", 321, CPyStatic_match___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r13);
CPyL12: ;
    cpy_r_r14 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "bind_as_pattern", "MatchVisitor", "code_block", 321, CPyStatic_match___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r14);
CPyL13: ;
    cpy_r_r15 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "bind_as_pattern", 321, CPyStatic_match___globals);
        goto CPyL33;
    }
    cpy_r_r16 = CPY_INT_TAG;
    cpy_r_r17 = CPyDef_ops___BasicBlock(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "bind_as_pattern", 322, CPyStatic_match___globals);
        goto CPyL33;
    }
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block = cpy_r_r17;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "bind_as_pattern", 322, CPyStatic_match___globals);
        goto CPyL33;
    }
CPyL16: ;
    cpy_r_r19 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "bind_as_pattern", "MatchVisitor", "builder", 324, CPyStatic_match___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r19);
CPyL17: ;
    cpy_r_r20 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "bind_as_pattern", "MatchVisitor", "as_pattern", 324, CPyStatic_match___globals);
        goto CPyL35;
    }
CPyL18: ;
    if (likely(cpy_r_r20 != Py_None))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "bind_as_pattern", 324, CPyStatic_match___globals, "mypy.patterns.AsPattern", cpy_r_r20);
        goto CPyL35;
    }
    cpy_r_r22 = ((mypy___patterns___AsPatternObject *)cpy_r_r21)->_name;
    CPy_INCREF(cpy_r_r22);
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "bind_as_pattern", 324, CPyStatic_match___globals, "mypy.nodes.NameExpr", cpy_r_r22);
        goto CPyL35;
    }
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = 2;
    cpy_r_r26 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_r19, cpy_r_r23, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "bind_as_pattern", 324, CPyStatic_match___globals);
        goto CPyL33;
    }
    cpy_r_target = cpy_r_r26;
    cpy_r_r27 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "bind_as_pattern", "MatchVisitor", "builder", 325, CPyStatic_match___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r27);
CPyL22: ;
    cpy_r_r28 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "bind_as_pattern", "MatchVisitor", "as_pattern", 325, CPyStatic_match___globals);
        goto CPyL37;
    }
CPyL23: ;
    if (likely(cpy_r_r28 != Py_None))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "bind_as_pattern", 325, CPyStatic_match___globals, "mypy.patterns.AsPattern", cpy_r_r28);
        goto CPyL37;
    }
    cpy_r_r30 = ((mypy___patterns___AsPatternObject *)cpy_r_r29)->_pattern;
    if (likely(cpy_r_r30 != Py_None))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "bind_as_pattern", 325, CPyStatic_match___globals, "mypy.patterns.Pattern", cpy_r_r30);
        goto CPyL37;
    }
    cpy_r_r32 = ((mypy___nodes___ContextObject *)cpy_r_r31)->_line;
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "bind_as_pattern", "Pattern", "line", 325, CPyStatic_match___globals);
        goto CPyL37;
    }
    CPyTagged_INCREF(cpy_r_r32);
CPyL26: ;
    cpy_r_r33 = CPyDef_builder___IRBuilder___assign(cpy_r_r27, cpy_r_target, cpy_r_value, cpy_r_r32);
    CPy_DECREF(cpy_r_target);
    CPyTagged_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "bind_as_pattern", 325, CPyStatic_match___globals);
        goto CPyL33;
    }
    cpy_r_r34 = Py_None;
    CPy_INCREF(cpy_r_r34);
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_as_pattern = cpy_r_r34;
    cpy_r_r35 = 1;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "bind_as_pattern", 327, CPyStatic_match___globals);
        goto CPyL33;
    }
    if (!cpy_r_new_block) goto CPyL32;
    cpy_r_r36 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_builder;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "bind_as_pattern", "MatchVisitor", "builder", 330, CPyStatic_match___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r36);
CPyL30: ;
    cpy_r_r37 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_self)->_code_block;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "bind_as_pattern", "MatchVisitor", "code_block", 330, CPyStatic_match___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r37);
CPyL31: ;
    cpy_r_r38 = CPyDef_builder___IRBuilder___goto(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "bind_as_pattern", 330, CPyStatic_match___globals);
        goto CPyL33;
    }
CPyL32: ;
    return 1;
CPyL33: ;
    cpy_r_r39 = 2;
    return cpy_r_r39;
CPyL34: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL33;
CPyL35: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL33;
CPyL36: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r27);
    goto CPyL33;
CPyL38: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL33;
}

PyObject *CPyPy_match___MatchVisitor___bind_as_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", "new_block", 0};
    static CPyArg_Parser parser = {"O|O:bind_as_pattern", kwlist, 0};
    PyObject *obj_value;
    PyObject *obj_new_block = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_value, &obj_new_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_value;
    if (likely(PyObject_TypeCheck(obj_value, CPyType_ops___Value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_value); 
        goto fail;
    }
    char arg_new_block;
    if (obj_new_block == NULL) {
        arg_new_block = 2;
    } else if (unlikely(!PyBool_Check(obj_new_block))) {
        CPy_TypeError("bool", obj_new_block); goto fail;
    } else
        arg_new_block = obj_new_block == Py_True;
    char retval = CPyDef_match___MatchVisitor___bind_as_pattern(arg_self, arg_value, arg_new_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "bind_as_pattern", 318, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___enter_subpattern_MatchVisitor_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    int64_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    int64_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = ((mypyc___irbuild___match___enter_subpattern_MatchVisitor_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "enter_subpattern", "enter_subpattern_MatchVisitor_gen", "__mypyc_env__", 333, CPyStatic_match___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "enter_subpattern", "enter_subpattern_MatchVisitor_env", "__mypyc_next_label__", 333, CPyStatic_match___globals);
        goto CPyL33;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL22;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL34;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 333, CPyStatic_match___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "enter_subpattern", "enter_subpattern_MatchVisitor_env", "self", 334, CPyStatic_match___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_r4)->_subject;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'subject' of 'MatchVisitor' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 334, CPyStatic_match___globals);
        goto CPyL33;
    }
CPyL7: ;
    if (((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->_old_subject != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->_old_subject);
    }
    ((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->_old_subject = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 334, CPyStatic_match___globals);
        goto CPyL33;
    }
    cpy_r_r7 = ((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->_subject;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "enter_subpattern", "enter_subpattern_MatchVisitor_env", "subject", 335, CPyStatic_match___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r7);
CPyL9: ;
    cpy_r_r8 = ((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "enter_subpattern", "enter_subpattern_MatchVisitor_env", "self", 335, CPyStatic_match___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r8);
CPyL10: ;
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_r8)->_subject != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_r8)->_subject);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_r8)->_subject = cpy_r_r7;
    cpy_r_r9 = 1;
    CPy_DECREF(cpy_r_r8);
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 335, CPyStatic_match___globals);
        goto CPyL33;
    }
    cpy_r_r10 = Py_None;
    if (((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r11 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 336, CPyStatic_match___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r10);
    return cpy_r_r10;
CPyL13: ;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_type != cpy_r_r12;
    if (cpy_r_r13) {
        goto CPyL36;
    } else
        goto CPyL16;
CPyL14: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 336, CPyStatic_match___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r14 = ((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->_old_subject;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "enter_subpattern", "enter_subpattern_MatchVisitor_env", "old_subject", 337, CPyStatic_match___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r14);
CPyL17: ;
    cpy_r_r15 = ((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/match.py", "enter_subpattern", "enter_subpattern_MatchVisitor_env", "self", 337, CPyStatic_match___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r15);
CPyL18: ;
    if (((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_r15)->_subject != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_r15)->_subject);
    }
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r_r15)->_subject = cpy_r_r14;
    cpy_r_r16 = 1;
    CPy_DECREF(cpy_r_r15);
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 337, CPyStatic_match___globals);
        goto CPyL33;
    }
    cpy_r_r17 = Py_None;
    if (((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r18 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 333, CPyStatic_match___globals);
        goto CPyL32;
    }
    CPyGen_SetStopIterationValue(cpy_r_r17);
    if (!0) goto CPyL32;
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r19 = cpy_r_r1 & 1;
    cpy_r_r20 = cpy_r_r19 == 0;
    if (!cpy_r_r20) goto CPyL24;
    cpy_r_r21 = cpy_r_r1 == 0;
    cpy_r_r22 = cpy_r_r21;
    goto CPyL25;
CPyL24: ;
    cpy_r_r23 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r22 = cpy_r_r23;
CPyL25: ;
    if (cpy_r_r22) goto CPyL38;
    cpy_r_r24 = cpy_r_r1 & 1;
    cpy_r_r25 = cpy_r_r24 == 0;
    if (!cpy_r_r25) goto CPyL28;
    cpy_r_r26 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r27 = cpy_r_r26;
    goto CPyL29;
CPyL28: ;
    cpy_r_r28 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r27 = cpy_r_r28;
CPyL29: ;
    if (cpy_r_r27) {
        goto CPyL13;
    } else
        goto CPyL39;
CPyL30: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 333, CPyStatic_match___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL32;
CPyL34: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    goto CPyL32;
CPyL36: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL14;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r14);
    goto CPyL32;
CPyL38: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL39: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL30;
}

PyObject *CPyPy_match___enter_subpattern_MatchVisitor_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_match___enter_subpattern_MatchVisitor_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 333, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___enter_subpattern_MatchVisitor_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_match___enter_subpattern_MatchVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___enter_subpattern_MatchVisitor_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_match___enter_subpattern_MatchVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.match.enter_subpattern_MatchVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___enter_subpattern_MatchVisitor_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "__next__", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___enter_subpattern_MatchVisitor_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_match___enter_subpattern_MatchVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_match___enter_subpattern_MatchVisitor_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_match___enter_subpattern_MatchVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.match.enter_subpattern_MatchVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_match___enter_subpattern_MatchVisitor_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "send", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___enter_subpattern_MatchVisitor_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_match___enter_subpattern_MatchVisitor_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_match___enter_subpattern_MatchVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.match.enter_subpattern_MatchVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___enter_subpattern_MatchVisitor_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "__iter__", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___enter_subpattern_MatchVisitor_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_match___enter_subpattern_MatchVisitor_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_match___enter_subpattern_MatchVisitor_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_match___enter_subpattern_MatchVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.match.enter_subpattern_MatchVisitor_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_match___enter_subpattern_MatchVisitor_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "throw", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___enter_subpattern_MatchVisitor_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_match___enter_subpattern_MatchVisitor_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp10386 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp10386);
    PyObject *__tmp10387 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp10387);
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

PyObject *CPyPy_match___enter_subpattern_MatchVisitor_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_match___enter_subpattern_MatchVisitor_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.match.enter_subpattern_MatchVisitor_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___enter_subpattern_MatchVisitor_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "close", -1, CPyStatic_match___globals);
    return NULL;
}

PyObject *CPyDef_match___MatchVisitor___enter_subpattern(PyObject *cpy_r_self, PyObject *cpy_r_subject) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_match___enter_subpattern_MatchVisitor_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 333, CPyStatic_match___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->_self);
    }
    ((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 333, CPyStatic_match___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_subject);
    if (((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->_subject != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->_subject);
    }
    ((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->_subject = cpy_r_subject;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 333, CPyStatic_match___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_match___enter_subpattern_MatchVisitor_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 333, CPyStatic_match___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___match___enter_subpattern_MatchVisitor_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___match___enter_subpattern_MatchVisitor_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypyc___irbuild___match___enter_subpattern_MatchVisitor_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 333, CPyStatic_match___globals);
        goto CPyL9;
    }
    if (((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypyc___irbuild___match___enter_subpattern_MatchVisitor_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 333, CPyStatic_match___globals);
        goto CPyL10;
    }
    return cpy_r_r3;
CPyL7: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
}

PyObject *CPyPy_match___MatchVisitor___enter_subpattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"subject", 0};
    static CPyArg_Parser parser = {"O:enter_subpattern", kwlist, 0};
    PyObject *obj_subject;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_subject)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_match___MatchVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_subject;
    if (likely(PyObject_TypeCheck(obj_subject, CPyType_ops___Value)))
        arg_subject = obj_subject;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_subject); 
        goto fail;
    }
    PyObject *retval = CPyDef_match___MatchVisitor___enter_subpattern(arg_self, arg_subject);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "enter_subpattern", 333, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match___MatchVisitor_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    ((mypyc___irbuild___match___MatchVisitorObject *)cpy_r___mypyc_self__)->_as_pattern = cpy_r_r0;
    return 1;
}

PyObject *CPyPy_match___MatchVisitor_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_match___MatchVisitor))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypyc.irbuild.match.MatchVisitor", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_match___MatchVisitor_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "__mypyc_defaults_setup", -1, CPyStatic_match___globals);
    return NULL;
}

tuple_T3OOO CPyDef_match___prep_sequence_pattern(PyObject *cpy_r_seq_pattern) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_star_index;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_capture;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_patterns;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_pattern;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    tuple_T3OOO cpy_r_r23;
    tuple_T3OOO cpy_r_r24;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_star_index = cpy_r_r0;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_capture = cpy_r_r1;
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "prep_sequence_pattern", 345, CPyStatic_match___globals);
        goto CPyL11;
    }
    cpy_r_patterns = cpy_r_r2;
    cpy_r_r3 = 0;
    cpy_r_i = 0;
    cpy_r_r4 = ((mypy___patterns___SequencePatternObject *)cpy_r_seq_pattern)->_patterns;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = 0;
CPyL2: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL12;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r4, cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_patterns___Pattern)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "prep_sequence_pattern", 347, CPyStatic_match___globals, "mypy.patterns.Pattern", cpy_r_r10);
        goto CPyL13;
    }
    cpy_r_pattern = cpy_r_r11;
    cpy_r_r12 = (PyObject *)CPyType_patterns___StarredPattern;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_pattern)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (cpy_r_r15) {
        goto CPyL14;
    } else
        goto CPyL15;
CPyL5: ;
    cpy_r_r16 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_star_index = cpy_r_r16;
    if (likely(Py_TYPE(cpy_r_pattern) == CPyType_patterns___StarredPattern))
        cpy_r_r17 = cpy_r_pattern;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/match.py", "prep_sequence_pattern", 350, CPyStatic_match___globals, "mypy.patterns.StarredPattern", cpy_r_pattern);
        goto CPyL16;
    }
    cpy_r_r18 = ((mypy___patterns___StarredPatternObject *)cpy_r_r17)->_capture;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_pattern);
    cpy_r_capture = cpy_r_r18;
    goto CPyL8;
CPyL7: ;
    cpy_r_r19 = PyList_Append(cpy_r_patterns, cpy_r_pattern);
    CPy_DECREF(cpy_r_pattern);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "prep_sequence_pattern", 353, CPyStatic_match___globals);
        goto CPyL17;
    }
CPyL8: ;
    cpy_r_r21 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r21;
    cpy_r_i = cpy_r_r21;
    cpy_r_r22 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r22;
    goto CPyL2;
CPyL9: ;
    cpy_r_r23.f0 = cpy_r_star_index;
    cpy_r_r23.f1 = cpy_r_capture;
    cpy_r_r23.f2 = cpy_r_patterns;
    CPy_INCREF(cpy_r_r23.f0);
    CPy_INCREF(cpy_r_r23.f1);
    CPy_INCREF(cpy_r_r23.f2);
    CPy_DECREF(cpy_r_star_index);
    CPy_DECREF(cpy_r_capture);
    CPy_DECREF(cpy_r_patterns);
    return cpy_r_r23;
CPyL10: ;
    tuple_T3OOO __tmp10388 = { NULL, NULL, NULL };
    cpy_r_r24 = __tmp10388;
    return cpy_r_r24;
CPyL11: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    goto CPyL10;
CPyL12: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r4);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r4);
    goto CPyL10;
CPyL14: ;
    CPy_DECREF(cpy_r_star_index);
    CPy_DECREF(cpy_r_capture);
    goto CPyL5;
CPyL15: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL7;
CPyL16: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_pattern);
    goto CPyL10;
CPyL17: ;
    CPy_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_capture);
    CPy_DecRef(cpy_r_patterns);
    CPy_DecRef(cpy_r_r4);
    goto CPyL10;
}

PyObject *CPyPy_match___prep_sequence_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"seq_pattern", 0};
    static CPyArg_Parser parser = {"O:prep_sequence_pattern", kwlist, 0};
    PyObject *obj_seq_pattern;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_seq_pattern)) {
        return NULL;
    }
    PyObject *arg_seq_pattern;
    if (likely(Py_TYPE(obj_seq_pattern) == CPyType_patterns___SequencePattern))
        arg_seq_pattern = obj_seq_pattern;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_seq_pattern); 
        goto fail;
    }
    tuple_T3OOO retval = CPyDef_match___prep_sequence_pattern(arg_seq_pattern);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10389 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp10389);
    PyObject *__tmp10390 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp10390);
    PyObject *__tmp10391 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp10391);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/match.py", "prep_sequence_pattern", 340, CPyStatic_match___globals);
    return NULL;
}

char CPyDef_match_____top_level__(void) {
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
    int32_t cpy_r_r69;
    char cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
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
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject **cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", -1, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9084]; /* ('contextmanager',) */
    cpy_r_r6 = CPyStatics[78]; /* 'contextlib' */
    cpy_r_r7 = CPyStatic_match___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 1, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPyModule_contextlib = cpy_r_r8;
    CPy_INCREF(CPyModule_contextlib);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10193]; /* ('Generator', 'List', 'Optional', 'Tuple') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_match___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 2, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10194]; /* ('MatchStmt', 'NameExpr', 'TypeInfo') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_match___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 4, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9262]; /* ('AsPattern', 'ClassPattern', 'MappingPattern',
                                     'OrPattern', 'Pattern', 'SequencePattern',
                                     'SingletonPattern', 'StarredPattern', 'ValuePattern') */
    cpy_r_r18 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r19 = CPyStatic_match___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 5, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPyModule_mypy___patterns = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___patterns);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r22 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r23 = CPyStatic_match___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 16, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPyModule_mypy___traverser = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10195]; /* ('Instance', 'TupleType', 'get_proper_type') */
    cpy_r_r26 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r27 = CPyStatic_match___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 17, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPyModule_mypy___types = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9944]; /* ('BasicBlock', 'Value') */
    cpy_r_r30 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r31 = CPyStatic_match___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 18, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[10196]; /* ('object_rprimitive',) */
    cpy_r_r34 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r35 = CPyStatic_match___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 19, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r36;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[10034]; /* ('IRBuilder',) */
    cpy_r_r38 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r39 = CPyStatic_match___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 20, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[10197]; /* ('dict_copy', 'dict_del_item', 'mapping_has_key',
                                      'supports_mapping_protocol') */
    cpy_r_r42 = CPyStatics[8102]; /* 'mypyc.primitives.dict_ops' */
    cpy_r_r43 = CPyStatic_match___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 21, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPyModule_mypyc___primitives___dict_ops = cpy_r_r44;
    CPy_INCREF(CPyModule_mypyc___primitives___dict_ops);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[10198]; /* ('generic_ssize_t_len_op',) */
    cpy_r_r46 = CPyStatics[8103]; /* 'mypyc.primitives.generic_ops' */
    cpy_r_r47 = CPyStatic_match___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 27, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPyModule_mypyc___primitives___generic_ops = cpy_r_r48;
    CPy_INCREF(CPyModule_mypyc___primitives___generic_ops);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[10199]; /* ('sequence_get_item', 'sequence_get_slice',
                                      'supports_sequence_protocol') */
    cpy_r_r50 = CPyStatics[8104]; /* 'mypyc.primitives.list_ops' */
    cpy_r_r51 = CPyStatic_match___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 28, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPyModule_mypyc___primitives___list_ops = cpy_r_r52;
    CPy_INCREF(CPyModule_mypyc___primitives___list_ops);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[10200]; /* ('fast_isinstance_op', 'slow_isinstance_op') */
    cpy_r_r54 = CPyStatics[8105]; /* 'mypyc.primitives.misc_ops' */
    cpy_r_r55 = CPyStatic_match___globals;
    cpy_r_r56 = CPyImport_ImportFromMany(cpy_r_r54, cpy_r_r53, cpy_r_r53, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 33, CPyStatic_match___globals);
        goto CPyL40;
    }
    CPyModule_mypyc___primitives___misc_ops = cpy_r_r56;
    CPy_INCREF(CPyModule_mypyc___primitives___misc_ops);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r57 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r58 = CPyStatics[1222]; /* 'builtins.bytearray' */
    cpy_r_r59 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r60 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r61 = CPyStatics[1180]; /* 'builtins.float' */
    cpy_r_r62 = CPyStatics[889]; /* 'builtins.frozenset' */
    cpy_r_r63 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r64 = CPyStatics[796]; /* 'builtins.list' */
    cpy_r_r65 = CPyStatics[797]; /* 'builtins.set' */
    cpy_r_r66 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r67 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r68 = PySet_New(NULL);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 36, CPyStatic_match___globals);
        goto CPyL40;
    }
    cpy_r_r69 = PySet_Add(cpy_r_r68, cpy_r_r57);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 36, CPyStatic_match___globals);
        goto CPyL41;
    }
    cpy_r_r71 = PySet_Add(cpy_r_r68, cpy_r_r58);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 36, CPyStatic_match___globals);
        goto CPyL41;
    }
    cpy_r_r73 = PySet_Add(cpy_r_r68, cpy_r_r59);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 36, CPyStatic_match___globals);
        goto CPyL41;
    }
    cpy_r_r75 = PySet_Add(cpy_r_r68, cpy_r_r60);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 36, CPyStatic_match___globals);
        goto CPyL41;
    }
    cpy_r_r77 = PySet_Add(cpy_r_r68, cpy_r_r61);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 36, CPyStatic_match___globals);
        goto CPyL41;
    }
    cpy_r_r79 = PySet_Add(cpy_r_r68, cpy_r_r62);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 36, CPyStatic_match___globals);
        goto CPyL41;
    }
    cpy_r_r81 = PySet_Add(cpy_r_r68, cpy_r_r63);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 36, CPyStatic_match___globals);
        goto CPyL41;
    }
    cpy_r_r83 = PySet_Add(cpy_r_r68, cpy_r_r64);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 36, CPyStatic_match___globals);
        goto CPyL41;
    }
    cpy_r_r85 = PySet_Add(cpy_r_r68, cpy_r_r65);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 36, CPyStatic_match___globals);
        goto CPyL41;
    }
    cpy_r_r87 = PySet_Add(cpy_r_r68, cpy_r_r66);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 36, CPyStatic_match___globals);
        goto CPyL41;
    }
    cpy_r_r89 = PySet_Add(cpy_r_r68, cpy_r_r67);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 36, CPyStatic_match___globals);
        goto CPyL41;
    }
    cpy_r_r91 = CPyStatic_match___globals;
    cpy_r_r92 = CPyStatics[8474]; /* 'MATCHABLE_BUILTINS' */
    cpy_r_r93 = CPyDict_SetItem(cpy_r_r91, cpy_r_r92, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 36, CPyStatic_match___globals);
        goto CPyL40;
    }
    cpy_r_r95 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r96 = PyTuple_Pack(1, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 51, CPyStatic_match___globals);
        goto CPyL40;
    }
    cpy_r_r97 = CPyStatics[8483]; /* 'mypyc.irbuild.match' */
    cpy_r_r98 = (PyObject *)CPyType_match___MatchVisitor_template;
    cpy_r_r99 = CPyType_FromTemplate(cpy_r_r98, cpy_r_r96, cpy_r_r97);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 51, CPyStatic_match___globals);
        goto CPyL40;
    }
    cpy_r_r100 = CPyDef_match___MatchVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r100 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", -1, CPyStatic_match___globals);
        goto CPyL42;
    }
    cpy_r_r101 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r102 = CPyStatics[8112]; /* 'builder' */
    cpy_r_r103 = CPyStatics[8484]; /* 'code_block' */
    cpy_r_r104 = CPyStatics[7413]; /* 'next_block' */
    cpy_r_r105 = CPyStatics[8485]; /* 'final_block' */
    cpy_r_r106 = CPyStatics[1375]; /* 'subject' */
    cpy_r_r107 = CPyStatics[210]; /* 'match' */
    cpy_r_r108 = CPyStatics[8486]; /* 'as_pattern' */
    cpy_r_r109 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r110 = PyTuple_Pack(8, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r107, cpy_r_r108, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 51, CPyStatic_match___globals);
        goto CPyL42;
    }
    cpy_r_r111 = PyObject_SetAttr(cpy_r_r99, cpy_r_r101, cpy_r_r110);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 51, CPyStatic_match___globals);
        goto CPyL42;
    }
    CPyType_match___MatchVisitor = (PyTypeObject *)cpy_r_r99;
    CPy_INCREF(CPyType_match___MatchVisitor);
    cpy_r_r113 = CPyStatic_match___globals;
    cpy_r_r114 = CPyStatics[8487]; /* 'MatchVisitor' */
    cpy_r_r115 = CPyDict_SetItem(cpy_r_r113, cpy_r_r114, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 51, CPyStatic_match___globals);
        goto CPyL40;
    }
    cpy_r_r117 = (PyObject *)CPyType_match___MatchVisitor;
    cpy_r_r118 = CPyStatics[8475]; /* 'enter_subpattern' */
    cpy_r_r119 = CPyObject_GetAttr(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 333, CPyStatic_match___globals);
        goto CPyL40;
    }
    cpy_r_r120 = CPyStatic_match___globals;
    cpy_r_r121 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r122 = CPyDict_GetItem(cpy_r_r120, cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 332, CPyStatic_match___globals);
        goto CPyL43;
    }
    PyObject *cpy_r_r123[1] = {cpy_r_r119};
    cpy_r_r124 = (PyObject **)&cpy_r_r123;
    cpy_r_r125 = _PyObject_Vectorcall(cpy_r_r122, cpy_r_r124, 1, 0);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 333, CPyStatic_match___globals);
        goto CPyL43;
    }
    CPy_DECREF(cpy_r_r119);
    cpy_r_r126 = CPyStatics[8475]; /* 'enter_subpattern' */
    cpy_r_r127 = PyObject_SetAttr(cpy_r_r117, cpy_r_r126, cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypyc/irbuild/match.py", "<module>", 333, CPyStatic_match___globals);
        goto CPyL40;
    }
    return 1;
CPyL40: ;
    cpy_r_r129 = 2;
    return cpy_r_r129;
CPyL41: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL40;
CPyL42: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL40;
CPyL43: ;
    CPy_DecRef(cpy_r_r119);
    goto CPyL40;
}
