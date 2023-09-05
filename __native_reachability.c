#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef reachability___MarkImportsUnreachableVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___reachability___MarkImportsUnreachableVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___reachability___MarkImportsUnreachableVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *reachability___MarkImportsUnreachableVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_reachability___MarkImportsUnreachableVisitor(void);

static PyObject *
reachability___MarkImportsUnreachableVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_reachability___MarkImportsUnreachableVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = reachability___MarkImportsUnreachableVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_traverser___TraverserVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
reachability___MarkImportsUnreachableVisitor_traverse(mypy___reachability___MarkImportsUnreachableVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___reachability___MarkImportsUnreachableVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___reachability___MarkImportsUnreachableVisitorObject))));
    return 0;
}

static int
reachability___MarkImportsUnreachableVisitor_clear(mypy___reachability___MarkImportsUnreachableVisitorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___reachability___MarkImportsUnreachableVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___reachability___MarkImportsUnreachableVisitorObject))));
    return 0;
}

static void
reachability___MarkImportsUnreachableVisitor_dealloc(mypy___reachability___MarkImportsUnreachableVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, reachability___MarkImportsUnreachableVisitor_dealloc)
    reachability___MarkImportsUnreachableVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem reachability___MarkImportsUnreachableVisitor_vtable[99];
static CPyVTableItem reachability___MarkImportsUnreachableVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t reachability___MarkImportsUnreachableVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem reachability___MarkImportsUnreachableVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t reachability___MarkImportsUnreachableVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem reachability___MarkImportsUnreachableVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t reachability___MarkImportsUnreachableVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem reachability___MarkImportsUnreachableVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t reachability___MarkImportsUnreachableVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_reachability___MarkImportsUnreachableVisitor_trait_vtable_setup(void)
{
    CPyVTableItem reachability___MarkImportsUnreachableVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_all__NodeVisitor_glue,
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
    memcpy(reachability___MarkImportsUnreachableVisitor_mypy___visitor___NodeVisitor_trait_vtable, reachability___MarkImportsUnreachableVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(reachability___MarkImportsUnreachableVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t reachability___MarkImportsUnreachableVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(reachability___MarkImportsUnreachableVisitor_mypy___visitor___NodeVisitor_offset_table, reachability___MarkImportsUnreachableVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(reachability___MarkImportsUnreachableVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem reachability___MarkImportsUnreachableVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
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
    memcpy(reachability___MarkImportsUnreachableVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, reachability___MarkImportsUnreachableVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(reachability___MarkImportsUnreachableVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t reachability___MarkImportsUnreachableVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(reachability___MarkImportsUnreachableVisitor_mypy___visitor___ExpressionVisitor_offset_table, reachability___MarkImportsUnreachableVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(reachability___MarkImportsUnreachableVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem reachability___MarkImportsUnreachableVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
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
        (CPyVTableItem)CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_all__StatementVisitor_glue,
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
    memcpy(reachability___MarkImportsUnreachableVisitor_mypy___visitor___StatementVisitor_trait_vtable, reachability___MarkImportsUnreachableVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(reachability___MarkImportsUnreachableVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t reachability___MarkImportsUnreachableVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(reachability___MarkImportsUnreachableVisitor_mypy___visitor___StatementVisitor_offset_table, reachability___MarkImportsUnreachableVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(reachability___MarkImportsUnreachableVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem reachability___MarkImportsUnreachableVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(reachability___MarkImportsUnreachableVisitor_mypy___visitor___PatternVisitor_trait_vtable, reachability___MarkImportsUnreachableVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(reachability___MarkImportsUnreachableVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t reachability___MarkImportsUnreachableVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(reachability___MarkImportsUnreachableVisitor_mypy___visitor___PatternVisitor_offset_table, reachability___MarkImportsUnreachableVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(reachability___MarkImportsUnreachableVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem reachability___MarkImportsUnreachableVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)reachability___MarkImportsUnreachableVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)reachability___MarkImportsUnreachableVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)reachability___MarkImportsUnreachableVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)reachability___MarkImportsUnreachableVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)reachability___MarkImportsUnreachableVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)reachability___MarkImportsUnreachableVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)reachability___MarkImportsUnreachableVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)reachability___MarkImportsUnreachableVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor_____init__,
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
        (CPyVTableItem)CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_all__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import,
        (CPyVTableItem)CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_all,
    };
    memcpy(reachability___MarkImportsUnreachableVisitor_vtable, reachability___MarkImportsUnreachableVisitor_vtable_scratch, sizeof(reachability___MarkImportsUnreachableVisitor_vtable));
    return 1;
}


static PyGetSetDef reachability___MarkImportsUnreachableVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef reachability___MarkImportsUnreachableVisitor_methods[] = {
    {"visit_import",
     (PyCFunction)CPyPy_reachability___MarkImportsUnreachableVisitor___visit_import,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_from",
     (PyCFunction)CPyPy_reachability___MarkImportsUnreachableVisitor___visit_import_from,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_all",
     (PyCFunction)CPyPy_reachability___MarkImportsUnreachableVisitor___visit_import_all,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_reachability___MarkImportsUnreachableVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "MarkImportsUnreachableVisitor",
    .tp_new = reachability___MarkImportsUnreachableVisitor_new,
    .tp_dealloc = (destructor)reachability___MarkImportsUnreachableVisitor_dealloc,
    .tp_traverse = (traverseproc)reachability___MarkImportsUnreachableVisitor_traverse,
    .tp_clear = (inquiry)reachability___MarkImportsUnreachableVisitor_clear,
    .tp_getset = reachability___MarkImportsUnreachableVisitor_getseters,
    .tp_methods = reachability___MarkImportsUnreachableVisitor_methods,
    .tp_members = reachability___MarkImportsUnreachableVisitor_members,
    .tp_basicsize = sizeof(mypy___reachability___MarkImportsUnreachableVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___reachability___MarkImportsUnreachableVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___reachability___MarkImportsUnreachableVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_reachability___MarkImportsUnreachableVisitor_template = &CPyType_reachability___MarkImportsUnreachableVisitor_template_;

static PyObject *
reachability___MarkImportsUnreachableVisitor_setup(PyTypeObject *type)
{
    mypy___reachability___MarkImportsUnreachableVisitorObject *self;
    self = (mypy___reachability___MarkImportsUnreachableVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = reachability___MarkImportsUnreachableVisitor_vtable + 12;
    return (PyObject *)self;
}

PyObject *CPyDef_reachability___MarkImportsUnreachableVisitor(void)
{
    PyObject *self = reachability___MarkImportsUnreachableVisitor_setup(CPyType_reachability___MarkImportsUnreachableVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_traverser___TraverserVisitor_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


PyMemberDef reachability___MarkImportsMypyOnlyVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___reachability___MarkImportsMypyOnlyVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___reachability___MarkImportsMypyOnlyVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *reachability___MarkImportsMypyOnlyVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_reachability___MarkImportsMypyOnlyVisitor(void);

static PyObject *
reachability___MarkImportsMypyOnlyVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_reachability___MarkImportsMypyOnlyVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = reachability___MarkImportsMypyOnlyVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_traverser___TraverserVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
reachability___MarkImportsMypyOnlyVisitor_traverse(mypy___reachability___MarkImportsMypyOnlyVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___reachability___MarkImportsMypyOnlyVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___reachability___MarkImportsMypyOnlyVisitorObject))));
    return 0;
}

static int
reachability___MarkImportsMypyOnlyVisitor_clear(mypy___reachability___MarkImportsMypyOnlyVisitorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___reachability___MarkImportsMypyOnlyVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___reachability___MarkImportsMypyOnlyVisitorObject))));
    return 0;
}

static void
reachability___MarkImportsMypyOnlyVisitor_dealloc(mypy___reachability___MarkImportsMypyOnlyVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, reachability___MarkImportsMypyOnlyVisitor_dealloc)
    reachability___MarkImportsMypyOnlyVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem reachability___MarkImportsMypyOnlyVisitor_vtable[100];
static CPyVTableItem reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_reachability___MarkImportsMypyOnlyVisitor_trait_vtable_setup(void)
{
    CPyVTableItem reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def__NodeVisitor_glue,
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
    memcpy(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___NodeVisitor_trait_vtable, reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___NodeVisitor_offset_table, reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
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
    memcpy(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___ExpressionVisitor_offset_table, reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_all__StatementVisitor_glue,
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
    memcpy(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___StatementVisitor_trait_vtable, reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___StatementVisitor_offset_table, reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___PatternVisitor_trait_vtable, reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___PatternVisitor_offset_table, reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem reachability___MarkImportsMypyOnlyVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)reachability___MarkImportsMypyOnlyVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor_____init__,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_all__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import,
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def,
    };
    memcpy(reachability___MarkImportsMypyOnlyVisitor_vtable, reachability___MarkImportsMypyOnlyVisitor_vtable_scratch, sizeof(reachability___MarkImportsMypyOnlyVisitor_vtable));
    return 1;
}


static PyGetSetDef reachability___MarkImportsMypyOnlyVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef reachability___MarkImportsMypyOnlyVisitor_methods[] = {
    {"visit_import",
     (PyCFunction)CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_import,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_from",
     (PyCFunction)CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_import_from,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_all",
     (PyCFunction)CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_import_all,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_reachability___MarkImportsMypyOnlyVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "MarkImportsMypyOnlyVisitor",
    .tp_new = reachability___MarkImportsMypyOnlyVisitor_new,
    .tp_dealloc = (destructor)reachability___MarkImportsMypyOnlyVisitor_dealloc,
    .tp_traverse = (traverseproc)reachability___MarkImportsMypyOnlyVisitor_traverse,
    .tp_clear = (inquiry)reachability___MarkImportsMypyOnlyVisitor_clear,
    .tp_getset = reachability___MarkImportsMypyOnlyVisitor_getseters,
    .tp_methods = reachability___MarkImportsMypyOnlyVisitor_methods,
    .tp_members = reachability___MarkImportsMypyOnlyVisitor_members,
    .tp_basicsize = sizeof(mypy___reachability___MarkImportsMypyOnlyVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___reachability___MarkImportsMypyOnlyVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___reachability___MarkImportsMypyOnlyVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_reachability___MarkImportsMypyOnlyVisitor_template = &CPyType_reachability___MarkImportsMypyOnlyVisitor_template_;

static PyObject *
reachability___MarkImportsMypyOnlyVisitor_setup(PyTypeObject *type)
{
    mypy___reachability___MarkImportsMypyOnlyVisitorObject *self;
    self = (mypy___reachability___MarkImportsMypyOnlyVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = reachability___MarkImportsMypyOnlyVisitor_vtable + 12;
    return (PyObject *)self;
}

PyObject *CPyDef_reachability___MarkImportsMypyOnlyVisitor(void)
{
    PyObject *self = reachability___MarkImportsMypyOnlyVisitor_setup(CPyType_reachability___MarkImportsMypyOnlyVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_traverser___TraverserVisitor_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyMethodDef reachabilitymodule_methods[] = {
    {"infer_reachability_of_if_statement", (PyCFunction)CPyPy_reachability___infer_reachability_of_if_statement, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"infer_reachability_of_match_statement", (PyCFunction)CPyPy_reachability___infer_reachability_of_match_statement, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"assert_will_always_fail", (PyCFunction)CPyPy_reachability___assert_will_always_fail, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"infer_condition_value", (PyCFunction)CPyPy_reachability___infer_condition_value, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"infer_pattern_value", (PyCFunction)CPyPy_reachability___infer_pattern_value, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"consider_sys_version_info", (PyCFunction)CPyPy_reachability___consider_sys_version_info, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"consider_sys_platform", (PyCFunction)CPyPy_reachability___consider_sys_platform, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"fixed_comparison", (PyCFunction)CPyPy_reachability___fixed_comparison, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"contains_int_or_tuple_of_ints", (PyCFunction)CPyPy_reachability___contains_int_or_tuple_of_ints, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"contains_sys_version_info", (PyCFunction)CPyPy_reachability___contains_sys_version_info, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_sys_attr", (PyCFunction)CPyPy_reachability___is_sys_attr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"mark_block_unreachable", (PyCFunction)CPyPy_reachability___mark_block_unreachable, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"mark_block_mypy_only", (PyCFunction)CPyPy_reachability___mark_block_mypy_only, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef reachabilitymodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.reachability",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    reachabilitymodule_methods
};

PyObject *CPyInit_mypy___reachability(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___reachability_internal) {
        Py_INCREF(CPyModule_mypy___reachability_internal);
        return CPyModule_mypy___reachability_internal;
    }
    CPyModule_mypy___reachability_internal = PyModule_Create(&reachabilitymodule);
    if (unlikely(CPyModule_mypy___reachability_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___reachability_internal, "__name__");
    CPyStatic_reachability___globals = PyModule_GetDict(CPyModule_mypy___reachability_internal);
    if (unlikely(CPyStatic_reachability___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_reachability_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___reachability_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___reachability_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_reachability___inverted_truth_mapping);
    CPyStatic_reachability___inverted_truth_mapping = NULL;
    CPy_XDECREF(CPyStatic_reachability___reverse_op);
    CPyStatic_reachability___reverse_op = NULL;
    Py_CLEAR(CPyType_reachability___MarkImportsUnreachableVisitor);
    Py_CLEAR(CPyType_reachability___MarkImportsMypyOnlyVisitor);
    return NULL;
}

char CPyDef_reachability___infer_reachability_of_if_statement(PyObject *cpy_r_s, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_i;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_result;
    int64_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    int64_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    int64_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    int64_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyPtr cpy_r_r46;
    int64_t cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_body;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    CPyTagged cpy_r_r63;
    char cpy_r_r64;
    cpy_r_r0 = ((mypy___nodes___IfStmtObject *)cpy_r_s)->_expr;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = 0;
    cpy_r_i = cpy_r_r4;
CPyL1: ;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r5) goto CPyL48;
    cpy_r_r6 = ((mypy___nodes___IfStmtObject *)cpy_r_s)->_expr;
    cpy_r_r7 = CPyList_GetItem(cpy_r_r6, cpy_r_i);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 55, CPyStatic_reachability___globals);
        goto CPyL49;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_nodes___Expression)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 55, CPyStatic_reachability___globals, "mypy.nodes.Expression", cpy_r_r7);
        goto CPyL49;
    }
    cpy_r_r9 = CPyDef_reachability___infer_condition_value(cpy_r_r8, cpy_r_options);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 55, CPyStatic_reachability___globals);
        goto CPyL49;
    }
    cpy_r_result = cpy_r_r9;
    cpy_r_r10 = cpy_r_result & 1;
    cpy_r_r11 = cpy_r_r10 == 0;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = cpy_r_result == 6;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL8;
CPyL7: ;
    cpy_r_r14 = CPyTagged_IsEq_(cpy_r_result, 6);
    cpy_r_r13 = cpy_r_r14;
CPyL8: ;
    if (!cpy_r_r13) goto CPyL10;
    cpy_r_r15 = cpy_r_r13;
    goto CPyL14;
CPyL10: ;
    cpy_r_r16 = cpy_r_result & 1;
    cpy_r_r17 = cpy_r_r16 == 0;
    if (!cpy_r_r17) goto CPyL12;
    cpy_r_r18 = cpy_r_result == 8;
    cpy_r_r19 = cpy_r_r18;
    goto CPyL13;
CPyL12: ;
    cpy_r_r20 = CPyTagged_IsEq_(cpy_r_result, 8);
    cpy_r_r19 = cpy_r_r20;
CPyL13: ;
    cpy_r_r15 = cpy_r_r19;
CPyL14: ;
    if (cpy_r_r15) {
        goto CPyL50;
    } else
        goto CPyL18;
CPyL15: ;
    cpy_r_r21 = ((mypy___nodes___IfStmtObject *)cpy_r_s)->_body;
    cpy_r_r22 = CPyList_GetItem(cpy_r_r21, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 58, CPyStatic_reachability___globals);
        goto CPyL47;
    }
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_nodes___Block))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 58, CPyStatic_reachability___globals, "mypy.nodes.Block", cpy_r_r22);
        goto CPyL47;
    }
    cpy_r_r24 = CPyDef_reachability___mark_block_unreachable(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 58, CPyStatic_reachability___globals);
        goto CPyL47;
    } else
        goto CPyL45;
CPyL18: ;
    cpy_r_r25 = cpy_r_result & 1;
    cpy_r_r26 = cpy_r_r25 == 0;
    if (!cpy_r_r26) goto CPyL20;
    cpy_r_r27 = cpy_r_result == 2;
    cpy_r_r28 = cpy_r_r27;
    goto CPyL21;
CPyL20: ;
    cpy_r_r29 = CPyTagged_IsEq_(cpy_r_result, 2);
    cpy_r_r28 = cpy_r_r29;
CPyL21: ;
    if (!cpy_r_r28) goto CPyL23;
    cpy_r_r30 = cpy_r_r28;
    goto CPyL27;
CPyL23: ;
    cpy_r_r31 = cpy_r_result & 1;
    cpy_r_r32 = cpy_r_r31 == 0;
    if (!cpy_r_r32) goto CPyL25;
    cpy_r_r33 = cpy_r_result == 4;
    cpy_r_r34 = cpy_r_r33;
    goto CPyL26;
CPyL25: ;
    cpy_r_r35 = CPyTagged_IsEq_(cpy_r_result, 4);
    cpy_r_r34 = cpy_r_r35;
CPyL26: ;
    cpy_r_r30 = cpy_r_r34;
CPyL27: ;
    if (!cpy_r_r30) goto CPyL51;
    cpy_r_r36 = cpy_r_result == 4;
    CPyTagged_DECREF(cpy_r_result);
    if (!cpy_r_r36) goto CPyL32;
    cpy_r_r37 = ((mypy___nodes___IfStmtObject *)cpy_r_s)->_body;
    cpy_r_r38 = CPyList_GetItem(cpy_r_r37, cpy_r_i);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 65, CPyStatic_reachability___globals);
        goto CPyL49;
    }
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_nodes___Block))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 65, CPyStatic_reachability___globals, "mypy.nodes.Block", cpy_r_r38);
        goto CPyL49;
    }
    cpy_r_r40 = CPyDef_reachability___mark_block_mypy_only(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 65, CPyStatic_reachability___globals);
        goto CPyL49;
    }
CPyL32: ;
    cpy_r_r41 = ((mypy___nodes___IfStmtObject *)cpy_r_s)->_body;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r43 = CPyList_GetSlice(cpy_r_r41, cpy_r_r42, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r41);
    CPyTagged_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 66, CPyStatic_reachability___globals);
        goto CPyL47;
    }
    if (likely(PyList_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 66, CPyStatic_reachability___globals, "list", cpy_r_r43);
        goto CPyL47;
    }
    cpy_r_r45 = 0;
CPyL35: ;
    cpy_r_r46 = (CPyPtr)&((PyVarObject *)cpy_r_r44)->ob_size;
    cpy_r_r47 = *(int64_t *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 << 1;
    cpy_r_r49 = (Py_ssize_t)cpy_r_r45 < (Py_ssize_t)cpy_r_r48;
    if (!cpy_r_r49) goto CPyL52;
    cpy_r_r50 = CPyList_GetItemUnsafe(cpy_r_r44, cpy_r_r45);
    if (likely(Py_TYPE(cpy_r_r50) == CPyType_nodes___Block))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 66, CPyStatic_reachability___globals, "mypy.nodes.Block", cpy_r_r50);
        goto CPyL53;
    }
    cpy_r_body = cpy_r_r51;
    cpy_r_r52 = CPyDef_reachability___mark_block_unreachable(cpy_r_body);
    CPy_DECREF(cpy_r_body);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 67, CPyStatic_reachability___globals);
        goto CPyL53;
    }
    cpy_r_r53 = cpy_r_r45 + 2;
    cpy_r_r45 = cpy_r_r53;
    goto CPyL35;
CPyL39: ;
    cpy_r_r54 = ((mypy___nodes___IfStmtObject *)cpy_r_s)->_else_body;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r56 = cpy_r_r54 != cpy_r_r55;
    CPy_DECREF(cpy_r_r54);
    if (cpy_r_r56) goto CPyL43;
    cpy_r_r57 = PyList_New(0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 74, CPyStatic_reachability___globals);
        goto CPyL47;
    }
    cpy_r_r58 = CPyDef_nodes___Block(cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 74, CPyStatic_reachability___globals);
        goto CPyL47;
    }
    CPy_DECREF(((mypy___nodes___IfStmtObject *)cpy_r_s)->_else_body);
    ((mypy___nodes___IfStmtObject *)cpy_r_s)->_else_body = cpy_r_r58;
CPyL43: ;
    cpy_r_r60 = ((mypy___nodes___IfStmtObject *)cpy_r_s)->_else_body;
    CPy_INCREF(cpy_r_r60);
    if (likely(cpy_r_r60 != Py_None))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 75, CPyStatic_reachability___globals, "mypy.nodes.Block", cpy_r_r60);
        goto CPyL47;
    }
    cpy_r_r62 = CPyDef_reachability___mark_block_unreachable(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 75, CPyStatic_reachability___globals);
        goto CPyL47;
    } else
        goto CPyL46;
CPyL45: ;
    cpy_r_r63 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r63;
    cpy_r_i = cpy_r_r63;
    goto CPyL1;
CPyL46: ;
    return 1;
CPyL47: ;
    cpy_r_r64 = 2;
    return cpy_r_r64;
CPyL48: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL46;
CPyL49: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL47;
CPyL50: ;
    CPyTagged_DECREF(cpy_r_result);
    goto CPyL15;
CPyL51: ;
    CPyTagged_DECREF(cpy_r_i);
    CPyTagged_DECREF(cpy_r_result);
    goto CPyL45;
CPyL52: ;
    CPy_DECREF(cpy_r_r44);
    goto CPyL39;
CPyL53: ;
    CPy_DecRef(cpy_r_r44);
    goto CPyL47;
}

PyObject *CPyPy_reachability___infer_reachability_of_if_statement(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", "options", 0};
    static CPyArg_Parser parser = {"OO:infer_reachability_of_if_statement", kwlist, 0};
    PyObject *obj_s;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_s, &obj_options)) {
        return NULL;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___IfStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_s); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_reachability___infer_reachability_of_if_statement(arg_s, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_if_statement", 53, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___infer_reachability_of_match_statement(PyObject *cpy_r_s, PyObject *cpy_r_options) {
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
    PyObject *cpy_r_guard;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_pattern_value;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_guard_value;
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
    int64_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    int64_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    int64_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    int64_t cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    int64_t cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    int64_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyTagged cpy_r_r69;
    CPyPtr cpy_r_r70;
    int64_t cpy_r_r71;
    CPyTagged cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_body;
    char cpy_r_r76;
    CPyTagged cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    CPyTagged cpy_r_r83;
    CPyTagged cpy_r_r84;
    char cpy_r_r85;
    cpy_r_r0 = 0;
    cpy_r_i = 0;
    cpy_r_r1 = ((mypy___nodes___MatchStmtObject *)cpy_r_s)->_guards;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL1: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL68;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (PyObject_TypeCheck(cpy_r_r7, CPyType_nodes___Expression))
        cpy_r_r8 = cpy_r_r7;
    else {
        cpy_r_r8 = NULL;
    }
    if (cpy_r_r8 != NULL) goto __LL4951;
    if (cpy_r_r7 == Py_None)
        cpy_r_r8 = cpy_r_r7;
    else {
        cpy_r_r8 = NULL;
    }
    if (cpy_r_r8 != NULL) goto __LL4951;
    CPy_TypeErrorTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 80, CPyStatic_reachability___globals, "mypy.nodes.Expression or None", cpy_r_r7);
    goto CPyL69;
__LL4951: ;
    cpy_r_guard = cpy_r_r8;
    cpy_r_r9 = ((mypy___nodes___MatchStmtObject *)cpy_r_s)->_patterns;
    cpy_r_r10 = CPyList_GetItem(cpy_r_r9, cpy_r_i);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 81, CPyStatic_reachability___globals);
        goto CPyL70;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_patterns___Pattern)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 81, CPyStatic_reachability___globals, "mypy.patterns.Pattern", cpy_r_r10);
        goto CPyL70;
    }
    cpy_r_r12 = CPyDef_reachability___infer_pattern_value(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 81, CPyStatic_reachability___globals);
        goto CPyL70;
    }
    cpy_r_pattern_value = cpy_r_r12;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_guard != cpy_r_r13;
    if (!cpy_r_r14) goto CPyL71;
    if (likely(cpy_r_guard != Py_None))
        cpy_r_r15 = cpy_r_guard;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 84, CPyStatic_reachability___globals, "mypy.nodes.Expression", cpy_r_guard);
        goto CPyL72;
    }
    cpy_r_r16 = CPyDef_reachability___infer_condition_value(cpy_r_r15, cpy_r_options);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 84, CPyStatic_reachability___globals);
        goto CPyL72;
    }
    cpy_r_guard_value = cpy_r_r16;
    goto CPyL11;
CPyL10: ;
    cpy_r_guard_value = 2;
CPyL11: ;
    cpy_r_r17 = cpy_r_pattern_value & 1;
    cpy_r_r18 = cpy_r_r17 == 0;
    if (!cpy_r_r18) goto CPyL13;
    cpy_r_r19 = cpy_r_pattern_value == 6;
    cpy_r_r20 = cpy_r_r19;
    goto CPyL14;
CPyL13: ;
    cpy_r_r21 = CPyTagged_IsEq_(cpy_r_pattern_value, 6);
    cpy_r_r20 = cpy_r_r21;
CPyL14: ;
    if (!cpy_r_r20) goto CPyL16;
    cpy_r_r22 = cpy_r_r20;
    goto CPyL20;
CPyL16: ;
    cpy_r_r23 = cpy_r_pattern_value & 1;
    cpy_r_r24 = cpy_r_r23 == 0;
    if (!cpy_r_r24) goto CPyL18;
    cpy_r_r25 = cpy_r_pattern_value == 8;
    cpy_r_r26 = cpy_r_r25;
    goto CPyL19;
CPyL18: ;
    cpy_r_r27 = CPyTagged_IsEq_(cpy_r_pattern_value, 8);
    cpy_r_r26 = cpy_r_r27;
CPyL19: ;
    cpy_r_r22 = cpy_r_r26;
CPyL20: ;
    if (cpy_r_r22) goto CPyL73;
    cpy_r_r28 = cpy_r_guard_value & 1;
    cpy_r_r29 = cpy_r_r28 == 0;
    if (!cpy_r_r29) goto CPyL23;
    cpy_r_r30 = cpy_r_guard_value == 6;
    cpy_r_r31 = cpy_r_r30;
    goto CPyL24;
CPyL23: ;
    cpy_r_r32 = CPyTagged_IsEq_(cpy_r_guard_value, 6);
    cpy_r_r31 = cpy_r_r32;
CPyL24: ;
    if (!cpy_r_r31) goto CPyL26;
    cpy_r_r33 = cpy_r_r31;
    goto CPyL30;
CPyL26: ;
    cpy_r_r34 = cpy_r_guard_value & 1;
    cpy_r_r35 = cpy_r_r34 == 0;
    if (!cpy_r_r35) goto CPyL28;
    cpy_r_r36 = cpy_r_guard_value == 8;
    cpy_r_r37 = cpy_r_r36;
    goto CPyL29;
CPyL28: ;
    cpy_r_r38 = CPyTagged_IsEq_(cpy_r_guard_value, 8);
    cpy_r_r37 = cpy_r_r38;
CPyL29: ;
    cpy_r_r33 = cpy_r_r37;
CPyL30: ;
    if (cpy_r_r33) {
        goto CPyL73;
    } else
        goto CPyL34;
CPyL31: ;
    cpy_r_r39 = ((mypy___nodes___MatchStmtObject *)cpy_r_s)->_bodies;
    cpy_r_r40 = CPyList_GetItem(cpy_r_r39, cpy_r_i);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 93, CPyStatic_reachability___globals);
        goto CPyL74;
    }
    if (likely(Py_TYPE(cpy_r_r40) == CPyType_nodes___Block))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 93, CPyStatic_reachability___globals, "mypy.nodes.Block", cpy_r_r40);
        goto CPyL74;
    }
    cpy_r_r42 = CPyDef_reachability___mark_block_unreachable(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 93, CPyStatic_reachability___globals);
        goto CPyL74;
    } else
        goto CPyL61;
CPyL34: ;
    cpy_r_r43 = cpy_r_pattern_value & 1;
    cpy_r_r44 = cpy_r_r43 == 0;
    if (!cpy_r_r44) goto CPyL36;
    cpy_r_r45 = cpy_r_pattern_value == 6;
    cpy_r_r46 = cpy_r_r45;
    goto CPyL37;
CPyL36: ;
    cpy_r_r47 = CPyTagged_IsEq_(cpy_r_pattern_value, 6);
    cpy_r_r46 = cpy_r_r47;
CPyL37: ;
    if (cpy_r_r46) {
        goto CPyL75;
    } else
        goto CPyL39;
CPyL38: ;
    cpy_r_r48 = cpy_r_r46;
    goto CPyL43;
CPyL39: ;
    cpy_r_r49 = cpy_r_pattern_value & 1;
    cpy_r_r50 = cpy_r_r49 == 0;
    if (!cpy_r_r50) goto CPyL41;
    cpy_r_r51 = cpy_r_pattern_value == 4;
    CPyTagged_DECREF(cpy_r_pattern_value);
    cpy_r_r52 = cpy_r_r51;
    goto CPyL42;
CPyL41: ;
    cpy_r_r53 = CPyTagged_IsEq_(cpy_r_pattern_value, 4);
    CPyTagged_DECREF(cpy_r_pattern_value);
    cpy_r_r52 = cpy_r_r53;
CPyL42: ;
    cpy_r_r48 = cpy_r_r52;
CPyL43: ;
    if (!cpy_r_r48) goto CPyL61;
    cpy_r_r54 = cpy_r_guard_value & 1;
    cpy_r_r55 = cpy_r_r54 == 0;
    if (!cpy_r_r55) goto CPyL46;
    cpy_r_r56 = cpy_r_guard_value == 2;
    cpy_r_r57 = cpy_r_r56;
    goto CPyL47;
CPyL46: ;
    cpy_r_r58 = CPyTagged_IsEq_(cpy_r_guard_value, 2);
    cpy_r_r57 = cpy_r_r58;
CPyL47: ;
    if (!cpy_r_r57) goto CPyL49;
    cpy_r_r59 = cpy_r_r57;
    goto CPyL53;
CPyL49: ;
    cpy_r_r60 = cpy_r_guard_value & 1;
    cpy_r_r61 = cpy_r_r60 == 0;
    if (!cpy_r_r61) goto CPyL51;
    cpy_r_r62 = cpy_r_guard_value == 4;
    cpy_r_r63 = cpy_r_r62;
    goto CPyL52;
CPyL51: ;
    cpy_r_r64 = CPyTagged_IsEq_(cpy_r_guard_value, 4);
    cpy_r_r63 = cpy_r_r64;
CPyL52: ;
    cpy_r_r59 = cpy_r_r63;
CPyL53: ;
    if (!cpy_r_r59) goto CPyL61;
    cpy_r_r65 = ((mypy___nodes___MatchStmtObject *)cpy_r_s)->_bodies;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r66 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r67 = CPyList_GetSlice(cpy_r_r65, cpy_r_r66, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r65);
    CPyTagged_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 98, CPyStatic_reachability___globals);
        goto CPyL74;
    }
    if (likely(PyList_Check(cpy_r_r67)))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 98, CPyStatic_reachability___globals, "list", cpy_r_r67);
        goto CPyL74;
    }
    cpy_r_r69 = 0;
CPyL57: ;
    cpy_r_r70 = (CPyPtr)&((PyVarObject *)cpy_r_r68)->ob_size;
    cpy_r_r71 = *(int64_t *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 << 1;
    cpy_r_r73 = (Py_ssize_t)cpy_r_r69 < (Py_ssize_t)cpy_r_r72;
    if (!cpy_r_r73) goto CPyL76;
    cpy_r_r74 = CPyList_GetItemUnsafe(cpy_r_r68, cpy_r_r69);
    if (likely(Py_TYPE(cpy_r_r74) == CPyType_nodes___Block))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 98, CPyStatic_reachability___globals, "mypy.nodes.Block", cpy_r_r74);
        goto CPyL77;
    }
    cpy_r_body = cpy_r_r75;
    cpy_r_r76 = CPyDef_reachability___mark_block_unreachable(cpy_r_body);
    CPy_DECREF(cpy_r_body);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 99, CPyStatic_reachability___globals);
        goto CPyL77;
    }
    cpy_r_r77 = cpy_r_r69 + 2;
    cpy_r_r69 = cpy_r_r77;
    goto CPyL57;
CPyL61: ;
    cpy_r_r78 = cpy_r_guard_value == 4;
    CPyTagged_DECREF(cpy_r_guard_value);
    if (!cpy_r_r78) goto CPyL78;
    cpy_r_r79 = ((mypy___nodes___MatchStmtObject *)cpy_r_s)->_bodies;
    cpy_r_r80 = CPyList_GetItem(cpy_r_r79, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 104, CPyStatic_reachability___globals);
        goto CPyL79;
    }
    if (likely(Py_TYPE(cpy_r_r80) == CPyType_nodes___Block))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 104, CPyStatic_reachability___globals, "mypy.nodes.Block", cpy_r_r80);
        goto CPyL79;
    }
    cpy_r_r82 = CPyDef_reachability___mark_block_mypy_only(cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 104, CPyStatic_reachability___globals);
        goto CPyL79;
    }
CPyL65: ;
    cpy_r_r83 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r83;
    cpy_r_i = cpy_r_r83;
    cpy_r_r84 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r84;
    goto CPyL1;
CPyL66: ;
    return 1;
CPyL67: ;
    cpy_r_r85 = 2;
    return cpy_r_r85;
CPyL68: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r1);
    goto CPyL66;
CPyL69: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r1);
    goto CPyL67;
CPyL70: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_guard);
    goto CPyL67;
CPyL71: ;
    CPy_DECREF(cpy_r_guard);
    goto CPyL10;
CPyL72: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_pattern_value);
    goto CPyL67;
CPyL73: ;
    CPyTagged_DECREF(cpy_r_pattern_value);
    goto CPyL31;
CPyL74: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_guard_value);
    goto CPyL67;
CPyL75: ;
    CPyTagged_DECREF(cpy_r_pattern_value);
    goto CPyL38;
CPyL76: ;
    CPy_DECREF(cpy_r_r68);
    goto CPyL61;
CPyL77: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_guard_value);
    CPy_DecRef(cpy_r_r68);
    goto CPyL67;
CPyL78: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL65;
CPyL79: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL67;
}

PyObject *CPyPy_reachability___infer_reachability_of_match_statement(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", "options", 0};
    static CPyArg_Parser parser = {"OO:infer_reachability_of_match_statement", kwlist, 0};
    PyObject *obj_s;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_s, &obj_options)) {
        return NULL;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___MatchStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_s); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_reachability___infer_reachability_of_match_statement(arg_s, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "infer_reachability_of_match_statement", 79, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___assert_will_always_fail(PyObject *cpy_r_s, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    int64_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypy___nodes___AssertStmtObject *)cpy_r_s)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_reachability___infer_condition_value(cpy_r_r0, cpy_r_options);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "assert_will_always_fail", 108, CPyStatic_reachability___globals);
        goto CPyL12;
    }
    cpy_r_r2 = cpy_r_r1 & 1;
    cpy_r_r3 = cpy_r_r2 == 0;
    if (!cpy_r_r3) goto CPyL3;
    cpy_r_r4 = cpy_r_r1 == 6;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r5 = cpy_r_r4;
    goto CPyL4;
CPyL3: ;
    cpy_r_r6 = CPyTagged_IsEq_(cpy_r_r1, 6);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r5 = cpy_r_r6;
CPyL4: ;
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r7 = cpy_r_r5;
    goto CPyL11;
CPyL6: ;
    cpy_r_r8 = ((mypy___nodes___AssertStmtObject *)cpy_r_s)->_expr;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_reachability___infer_condition_value(cpy_r_r8, cpy_r_options);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "assert_will_always_fail", 108, CPyStatic_reachability___globals);
        goto CPyL12;
    }
    cpy_r_r10 = cpy_r_r9 & 1;
    cpy_r_r11 = cpy_r_r10 == 0;
    if (!cpy_r_r11) goto CPyL9;
    cpy_r_r12 = cpy_r_r9 == 8;
    CPyTagged_DECREF(cpy_r_r9);
    cpy_r_r13 = cpy_r_r12;
    goto CPyL10;
CPyL9: ;
    cpy_r_r14 = CPyTagged_IsEq_(cpy_r_r9, 8);
    CPyTagged_DECREF(cpy_r_r9);
    cpy_r_r13 = cpy_r_r14;
CPyL10: ;
    cpy_r_r7 = cpy_r_r13;
CPyL11: ;
    return cpy_r_r7;
CPyL12: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
}

PyObject *CPyPy_reachability___assert_will_always_fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", "options", 0};
    static CPyArg_Parser parser = {"OO:assert_will_always_fail", kwlist, 0};
    PyObject *obj_s;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_s, &obj_options)) {
        return NULL;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___AssertStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.AssertStmt", obj_s); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_reachability___assert_will_always_fail(arg_s, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "assert_will_always_fail", 107, CPyStatic_reachability___globals);
    return NULL;
}

CPyTagged CPyDef_reachability___infer_condition_value(PyObject *cpy_r_expr, PyObject *cpy_r_options) {
    tuple_T2II cpy_r_r0;
    tuple_T2II cpy_r_pyversion;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_name;
    char cpy_r_negated;
    PyObject *cpy_r_alias;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_result;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_left;
    int64_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    int64_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    int64_t cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    int64_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyTagged cpy_r_r97;
    PyObject *cpy_r_r98;
    CPyTagged cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    CPyTagged cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    int32_t cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    int32_t cpy_r_r134;
    char cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    CPyTagged cpy_r_r145;
    CPyTagged cpy_r_r146;
    cpy_r_r0 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_version;
    CPyTagged_INCREF(cpy_r_r0.f0);
    CPyTagged_INCREF(cpy_r_r0.f1);
    cpy_r_pyversion = cpy_r_r0;
    cpy_r_r1 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r1);
    cpy_r_name = cpy_r_r1;
    cpy_r_negated = 0;
    CPy_INCREF(cpy_r_expr);
    cpy_r_alias = cpy_r_expr;
    cpy_r_r2 = (PyObject *)CPyType_nodes___UnaryExpr;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_alias)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL103;
    if (likely(Py_TYPE(cpy_r_alias) == CPyType_nodes___UnaryExpr))
        cpy_r_r6 = cpy_r_alias;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_condition_value", 123, CPyStatic_reachability___globals, "mypy.nodes.UnaryExpr", cpy_r_alias);
        goto CPyL104;
    }
    cpy_r_r7 = ((mypy___nodes___UnaryExprObject *)cpy_r_r6)->_op;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyStatics[869]; /* 'not' */
    cpy_r_r9 = PyUnicode_Compare(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r10 = cpy_r_r9 == -1;
    if (!cpy_r_r10) goto CPyL5;
    cpy_r_r11 = PyErr_Occurred();
    cpy_r_r12 = cpy_r_r11 != NULL;
    if (!cpy_r_r12) goto CPyL5;
    cpy_r_r13 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 123, CPyStatic_reachability___globals);
        goto CPyL104;
    }
CPyL5: ;
    cpy_r_r14 = cpy_r_r9 == 0;
    if (!cpy_r_r14) goto CPyL103;
    if (likely(Py_TYPE(cpy_r_alias) == CPyType_nodes___UnaryExpr))
        cpy_r_r15 = cpy_r_alias;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_condition_value", 124, CPyStatic_reachability___globals, "mypy.nodes.UnaryExpr", cpy_r_alias);
        goto CPyL104;
    }
    cpy_r_r16 = ((mypy___nodes___UnaryExprObject *)cpy_r_r15)->_expr;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_alias);
    cpy_r_expr = cpy_r_r16;
    cpy_r_negated = 1;
CPyL8: ;
    cpy_r_result = 10;
    cpy_r_r17 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (cpy_r_r20) {
        goto CPyL105;
    } else
        goto CPyL11;
CPyL9: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r21 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_condition_value", 128, CPyStatic_reachability___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL106;
    }
    cpy_r_r22 = ((mypy___nodes___NameExprObject *)cpy_r_r21)->_name;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_expr);
    cpy_r_name = cpy_r_r22;
    goto CPyL68;
CPyL11: ;
    cpy_r_r23 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (cpy_r_r26) {
        goto CPyL107;
    } else
        goto CPyL108;
CPyL12: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr))
        cpy_r_r27 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_condition_value", 130, CPyStatic_reachability___globals, "mypy.nodes.MemberExpr", cpy_r_expr);
        goto CPyL106;
    }
    cpy_r_r28 = ((mypy___nodes___MemberExprObject *)cpy_r_r27)->_name;
    CPy_INCREF(cpy_r_r28);
    CPy_DECREF(cpy_r_expr);
    cpy_r_name = cpy_r_r28;
    goto CPyL68;
CPyL14: ;
    cpy_r_r29 = (PyObject *)CPyType_nodes___OpExpr;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL63;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r33 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_condition_value", 131, CPyStatic_reachability___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL109;
    }
    cpy_r_r34 = ((mypy___nodes___OpExprObject *)cpy_r_r33)->_op;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[838]; /* 'and' */
    cpy_r_r36 = PyUnicode_Compare(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r37 = cpy_r_r36 == -1;
    if (!cpy_r_r37) goto CPyL19;
    cpy_r_r38 = PyErr_Occurred();
    cpy_r_r39 = cpy_r_r38 != NULL;
    if (!cpy_r_r39) goto CPyL19;
    cpy_r_r40 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", -1, CPyStatic_reachability___globals);
        goto CPyL109;
    }
CPyL19: ;
    cpy_r_r41 = cpy_r_r36 == 0;
    if (!cpy_r_r41) goto CPyL21;
    cpy_r_r42 = cpy_r_r41;
    goto CPyL26;
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r43 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_condition_value", 131, CPyStatic_reachability___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL109;
    }
    cpy_r_r44 = ((mypy___nodes___OpExprObject *)cpy_r_r43)->_op;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[868]; /* 'or' */
    cpy_r_r46 = PyUnicode_Compare(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r47 = cpy_r_r46 == -1;
    if (!cpy_r_r47) goto CPyL25;
    cpy_r_r48 = PyErr_Occurred();
    cpy_r_r49 = cpy_r_r48 != NULL;
    if (!cpy_r_r49) goto CPyL25;
    cpy_r_r50 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", -1, CPyStatic_reachability___globals);
        goto CPyL109;
    }
CPyL25: ;
    cpy_r_r51 = cpy_r_r46 == 0;
    cpy_r_r42 = cpy_r_r51;
CPyL26: ;
    if (cpy_r_r42) {
        goto CPyL110;
    } else
        goto CPyL63;
CPyL27: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r52 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_condition_value", 132, CPyStatic_reachability___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL111;
    }
    cpy_r_r53 = ((mypy___nodes___OpExprObject *)cpy_r_r52)->_left;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = CPyDef_reachability___infer_condition_value(cpy_r_r53, cpy_r_options);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 132, CPyStatic_reachability___globals);
        goto CPyL111;
    }
    cpy_r_left = cpy_r_r54;
    cpy_r_r55 = cpy_r_left & 1;
    cpy_r_r56 = cpy_r_r55 == 0;
    if (!cpy_r_r56) goto CPyL31;
    cpy_r_r57 = cpy_r_left == 2;
    cpy_r_r58 = cpy_r_r57;
    goto CPyL32;
CPyL31: ;
    cpy_r_r59 = CPyTagged_IsEq_(cpy_r_left, 2);
    cpy_r_r58 = cpy_r_r59;
CPyL32: ;
    if (!cpy_r_r58) goto CPyL34;
    cpy_r_r60 = cpy_r_r58;
    goto CPyL38;
CPyL34: ;
    cpy_r_r61 = cpy_r_left & 1;
    cpy_r_r62 = cpy_r_r61 == 0;
    if (!cpy_r_r62) goto CPyL36;
    cpy_r_r63 = cpy_r_left == 4;
    cpy_r_r64 = cpy_r_r63;
    goto CPyL37;
CPyL36: ;
    cpy_r_r65 = CPyTagged_IsEq_(cpy_r_left, 4);
    cpy_r_r64 = cpy_r_r65;
CPyL37: ;
    cpy_r_r60 = cpy_r_r64;
CPyL38: ;
    if (!cpy_r_r60) goto CPyL44;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r66 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_condition_value", 133, CPyStatic_reachability___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL112;
    }
    cpy_r_r67 = ((mypy___nodes___OpExprObject *)cpy_r_r66)->_op;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = CPyStatics[838]; /* 'and' */
    cpy_r_r69 = PyUnicode_Compare(cpy_r_r67, cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r70 = cpy_r_r69 == -1;
    if (!cpy_r_r70) goto CPyL43;
    cpy_r_r71 = PyErr_Occurred();
    cpy_r_r72 = cpy_r_r71 != NULL;
    if (!cpy_r_r72) goto CPyL43;
    cpy_r_r73 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 133, CPyStatic_reachability___globals);
        goto CPyL112;
    }
CPyL43: ;
    cpy_r_r74 = cpy_r_r69 == 0;
    if (cpy_r_r74) goto CPyL113;
CPyL44: ;
    cpy_r_r75 = cpy_r_left & 1;
    cpy_r_r76 = cpy_r_r75 == 0;
    if (!cpy_r_r76) goto CPyL46;
    cpy_r_r77 = cpy_r_left == 6;
    cpy_r_r78 = cpy_r_r77;
    goto CPyL47;
CPyL46: ;
    cpy_r_r79 = CPyTagged_IsEq_(cpy_r_left, 6);
    cpy_r_r78 = cpy_r_r79;
CPyL47: ;
    if (!cpy_r_r78) goto CPyL49;
    cpy_r_r80 = cpy_r_r78;
    goto CPyL53;
CPyL49: ;
    cpy_r_r81 = cpy_r_left & 1;
    cpy_r_r82 = cpy_r_r81 == 0;
    if (!cpy_r_r82) goto CPyL51;
    cpy_r_r83 = cpy_r_left == 8;
    cpy_r_r84 = cpy_r_r83;
    goto CPyL52;
CPyL51: ;
    cpy_r_r85 = CPyTagged_IsEq_(cpy_r_left, 8);
    cpy_r_r84 = cpy_r_r85;
CPyL52: ;
    cpy_r_r80 = cpy_r_r84;
CPyL53: ;
    if (!cpy_r_r80) goto CPyL114;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r86 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_condition_value", 134, CPyStatic_reachability___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL112;
    }
    cpy_r_r87 = ((mypy___nodes___OpExprObject *)cpy_r_r86)->_op;
    CPy_INCREF(cpy_r_r87);
    cpy_r_r88 = CPyStatics[868]; /* 'or' */
    cpy_r_r89 = PyUnicode_Compare(cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r90 = cpy_r_r89 == -1;
    if (!cpy_r_r90) goto CPyL58;
    cpy_r_r91 = PyErr_Occurred();
    cpy_r_r92 = cpy_r_r91 != NULL;
    if (!cpy_r_r92) goto CPyL58;
    cpy_r_r93 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 134, CPyStatic_reachability___globals);
        goto CPyL112;
    }
CPyL58: ;
    cpy_r_r94 = cpy_r_r89 == 0;
    if (cpy_r_r94) {
        goto CPyL113;
    } else
        goto CPyL114;
CPyL59: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r95 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_condition_value", 138, CPyStatic_reachability___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL111;
    }
    cpy_r_r96 = ((mypy___nodes___OpExprObject *)cpy_r_r95)->_right;
    CPy_INCREF(cpy_r_r96);
    CPy_DECREF(cpy_r_expr);
    cpy_r_r97 = CPyDef_reachability___infer_condition_value(cpy_r_r96, cpy_r_options);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 138, CPyStatic_reachability___globals);
        goto CPyL102;
    }
    return cpy_r_r97;
CPyL62: ;
    return cpy_r_left;
CPyL63: ;
    cpy_r_r98 = PyTuple_New(2);
    if (unlikely(cpy_r_r98 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4952 = CPyTagged_StealAsObject(cpy_r_pyversion.f0);
    PyTuple_SET_ITEM(cpy_r_r98, 0, __tmp4952);
    PyObject *__tmp4953 = CPyTagged_StealAsObject(cpy_r_pyversion.f1);
    PyTuple_SET_ITEM(cpy_r_r98, 1, __tmp4953);
    cpy_r_r99 = CPyDef_reachability___consider_sys_version_info(cpy_r_expr, cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 144, CPyStatic_reachability___globals);
        goto CPyL115;
    }
    cpy_r_result = cpy_r_r99;
    cpy_r_r100 = cpy_r_result == 10;
    if (cpy_r_r100) {
        goto CPyL116;
    } else
        goto CPyL117;
CPyL65: ;
    cpy_r_r101 = ((mypy___options___OptionsObject *)cpy_r_options)->_platform;
    CPy_INCREF(cpy_r_r101);
    if (likely(PyUnicode_Check(cpy_r_r101)))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_condition_value", 146, CPyStatic_reachability___globals, "str", cpy_r_r101);
        goto CPyL115;
    }
    cpy_r_r103 = CPyDef_reachability___consider_sys_platform(cpy_r_expr, cpy_r_r102);
    CPy_DECREF(cpy_r_expr);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 146, CPyStatic_reachability___globals);
        goto CPyL118;
    }
    cpy_r_result = cpy_r_r103;
CPyL68: ;
    cpy_r_r104 = cpy_r_result == 10;
    if (!cpy_r_r104) goto CPyL119;
    cpy_r_r105 = CPyStatics[4647]; /* 'PY2' */
    cpy_r_r106 = PyUnicode_Compare(cpy_r_name, cpy_r_r105);
    cpy_r_r107 = cpy_r_r106 == -1;
    if (!cpy_r_r107) goto CPyL72;
    cpy_r_r108 = PyErr_Occurred();
    cpy_r_r109 = cpy_r_r108 != NULL;
    if (!cpy_r_r109) goto CPyL72;
    cpy_r_r110 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 148, CPyStatic_reachability___globals);
        goto CPyL120;
    }
CPyL72: ;
    cpy_r_r111 = cpy_r_r106 == 0;
    if (cpy_r_r111) {
        goto CPyL121;
    } else
        goto CPyL74;
CPyL73: ;
    cpy_r_result = 6;
    goto CPyL94;
CPyL74: ;
    cpy_r_r112 = CPyStatics[4648]; /* 'PY3' */
    cpy_r_r113 = PyUnicode_Compare(cpy_r_name, cpy_r_r112);
    cpy_r_r114 = cpy_r_r113 == -1;
    if (!cpy_r_r114) goto CPyL77;
    cpy_r_r115 = PyErr_Occurred();
    cpy_r_r116 = cpy_r_r115 != NULL;
    if (!cpy_r_r116) goto CPyL77;
    cpy_r_r117 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 150, CPyStatic_reachability___globals);
        goto CPyL120;
    }
CPyL77: ;
    cpy_r_r118 = cpy_r_r113 == 0;
    if (cpy_r_r118) {
        goto CPyL122;
    } else
        goto CPyL79;
CPyL78: ;
    cpy_r_result = 2;
    goto CPyL94;
CPyL79: ;
    cpy_r_r119 = CPyStatics[4649]; /* 'MYPY' */
    cpy_r_r120 = PyUnicode_Compare(cpy_r_name, cpy_r_r119);
    cpy_r_r121 = cpy_r_r120 == -1;
    if (!cpy_r_r121) goto CPyL82;
    cpy_r_r122 = PyErr_Occurred();
    cpy_r_r123 = cpy_r_r122 != NULL;
    if (!cpy_r_r123) goto CPyL82;
    cpy_r_r124 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 152, CPyStatic_reachability___globals);
        goto CPyL120;
    }
CPyL82: ;
    cpy_r_r125 = cpy_r_r120 == 0;
    if (cpy_r_r125) goto CPyL123;
    cpy_r_r126 = CPyStatics[58]; /* 'TYPE_CHECKING' */
    cpy_r_r127 = PyUnicode_Compare(cpy_r_name, cpy_r_r126);
    cpy_r_r128 = cpy_r_r127 == -1;
    if (!cpy_r_r128) goto CPyL86;
    cpy_r_r129 = PyErr_Occurred();
    cpy_r_r130 = cpy_r_r129 != NULL;
    if (!cpy_r_r130) goto CPyL86;
    cpy_r_r131 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 152, CPyStatic_reachability___globals);
        goto CPyL120;
    }
CPyL86: ;
    cpy_r_r132 = cpy_r_r127 == 0;
    if (cpy_r_r132) {
        goto CPyL123;
    } else
        goto CPyL88;
CPyL87: ;
    cpy_r_result = 4;
    goto CPyL94;
CPyL88: ;
    cpy_r_r133 = ((mypy___options___OptionsObject *)cpy_r_options)->_always_true;
    CPy_INCREF(cpy_r_r133);
    cpy_r_r134 = PySequence_Contains(cpy_r_r133, cpy_r_name);
    CPy_DECREF(cpy_r_r133);
    cpy_r_r135 = cpy_r_r134 >= 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 154, CPyStatic_reachability___globals);
        goto CPyL120;
    }
    cpy_r_r136 = cpy_r_r134;
    if (cpy_r_r136) {
        goto CPyL124;
    } else
        goto CPyL91;
CPyL90: ;
    cpy_r_result = 2;
    goto CPyL94;
CPyL91: ;
    cpy_r_r137 = ((mypy___options___OptionsObject *)cpy_r_options)->_always_false;
    CPy_INCREF(cpy_r_r137);
    cpy_r_r138 = PySequence_Contains(cpy_r_r137, cpy_r_name);
    CPy_DECREF(cpy_r_r137);
    CPy_DECREF(cpy_r_name);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 156, CPyStatic_reachability___globals);
        goto CPyL125;
    }
    cpy_r_r140 = cpy_r_r138;
    if (cpy_r_r140) {
        goto CPyL126;
    } else
        goto CPyL94;
CPyL93: ;
    cpy_r_result = 6;
CPyL94: ;
    if (!cpy_r_negated) goto CPyL101;
    cpy_r_r141 = CPyStatic_reachability___inverted_truth_mapping;
    if (unlikely(cpy_r_r141 == NULL)) {
        goto CPyL127;
    } else
        goto CPyL98;
CPyL96: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"inverted_truth_mapping\" was not set");
    cpy_r_r142 = 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 159, CPyStatic_reachability___globals);
        goto CPyL102;
    }
    CPy_Unreachable();
CPyL98: ;
    cpy_r_r143 = CPyTagged_StealAsObject(cpy_r_result);
    cpy_r_r144 = CPyDict_GetItem(cpy_r_r141, cpy_r_r143);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 159, CPyStatic_reachability___globals);
        goto CPyL102;
    }
    if (likely(PyLong_Check(cpy_r_r144)))
        cpy_r_r145 = CPyTagged_FromObject(cpy_r_r144);
    else {
        CPy_TypeError("int", cpy_r_r144); cpy_r_r145 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r145 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 159, CPyStatic_reachability___globals);
        goto CPyL102;
    }
    cpy_r_result = cpy_r_r145;
CPyL101: ;
    return cpy_r_result;
CPyL102: ;
    cpy_r_r146 = CPY_INT_TAG;
    return cpy_r_r146;
CPyL103: ;
    CPy_DECREF(cpy_r_alias);
    CPy_INCREF(cpy_r_expr);
    goto CPyL8;
CPyL104: ;
    CPyTagged_DecRef(cpy_r_pyversion.f0);
    CPyTagged_DecRef(cpy_r_pyversion.f1);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_alias);
    goto CPyL102;
CPyL105: ;
    CPyTagged_DECREF(cpy_r_pyversion.f0);
    CPyTagged_DECREF(cpy_r_pyversion.f1);
    CPy_DECREF(cpy_r_name);
    goto CPyL9;
CPyL106: ;
    CPy_DecRef(cpy_r_expr);
    CPyTagged_DecRef(cpy_r_result);
    goto CPyL102;
CPyL107: ;
    CPyTagged_DECREF(cpy_r_pyversion.f0);
    CPyTagged_DECREF(cpy_r_pyversion.f1);
    CPy_DECREF(cpy_r_name);
    goto CPyL12;
CPyL108: ;
    CPyTagged_DECREF(cpy_r_result);
    goto CPyL14;
CPyL109: ;
    CPy_DecRef(cpy_r_expr);
    CPyTagged_DecRef(cpy_r_pyversion.f0);
    CPyTagged_DecRef(cpy_r_pyversion.f1);
    CPy_DecRef(cpy_r_name);
    goto CPyL102;
CPyL110: ;
    CPyTagged_DECREF(cpy_r_pyversion.f0);
    CPyTagged_DECREF(cpy_r_pyversion.f1);
    CPy_DECREF(cpy_r_name);
    goto CPyL27;
CPyL111: ;
    CPy_DecRef(cpy_r_expr);
    goto CPyL102;
CPyL112: ;
    CPy_DecRef(cpy_r_expr);
    CPyTagged_DecRef(cpy_r_left);
    goto CPyL102;
CPyL113: ;
    CPyTagged_DECREF(cpy_r_left);
    goto CPyL59;
CPyL114: ;
    CPy_DECREF(cpy_r_expr);
    goto CPyL62;
CPyL115: ;
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_name);
    goto CPyL102;
CPyL116: ;
    CPyTagged_DECREF(cpy_r_result);
    goto CPyL65;
CPyL117: ;
    CPy_DECREF(cpy_r_expr);
    goto CPyL68;
CPyL118: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL102;
CPyL119: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL94;
CPyL120: ;
    CPy_DecRef(cpy_r_name);
    CPyTagged_DecRef(cpy_r_result);
    goto CPyL102;
CPyL121: ;
    CPy_DECREF(cpy_r_name);
    CPyTagged_DECREF(cpy_r_result);
    goto CPyL73;
CPyL122: ;
    CPy_DECREF(cpy_r_name);
    CPyTagged_DECREF(cpy_r_result);
    goto CPyL78;
CPyL123: ;
    CPy_DECREF(cpy_r_name);
    CPyTagged_DECREF(cpy_r_result);
    goto CPyL87;
CPyL124: ;
    CPy_DECREF(cpy_r_name);
    CPyTagged_DECREF(cpy_r_result);
    goto CPyL90;
CPyL125: ;
    CPyTagged_DecRef(cpy_r_result);
    goto CPyL102;
CPyL126: ;
    CPyTagged_DECREF(cpy_r_result);
    goto CPyL93;
CPyL127: ;
    CPyTagged_DecRef(cpy_r_result);
    goto CPyL96;
}

PyObject *CPyPy_reachability___infer_condition_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", "options", 0};
    static CPyArg_Parser parser = {"OO:infer_condition_value", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_options)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    CPyTagged retval = CPyDef_reachability___infer_condition_value(arg_expr, arg_options);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "infer_condition_value", 111, CPyStatic_reachability___globals);
    return NULL;
}

CPyTagged CPyDef_reachability___infer_pattern_value(PyObject *cpy_r_pattern) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_p;
    CPyTagged cpy_r_r22;
    int64_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyTagged cpy_r_r29;
    cpy_r_r0 = (PyObject *)CPyType_patterns___AsPattern;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_pattern)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL4;
    if (likely(Py_TYPE(cpy_r_pattern) == CPyType_patterns___AsPattern))
        cpy_r_r4 = cpy_r_pattern;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_pattern_value", 164, CPyStatic_reachability___globals, "mypy.patterns.AsPattern", cpy_r_pattern);
        goto CPyL19;
    }
    cpy_r_r5 = ((mypy___patterns___AsPatternObject *)cpy_r_r4)->_pattern;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 == cpy_r_r6;
    if (!cpy_r_r7) goto CPyL4;
    return 2;
CPyL4: ;
    cpy_r_r8 = (PyObject *)CPyType_patterns___OrPattern;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_pattern)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL18;
    cpy_r_r12 = 0;
    if (likely(Py_TYPE(cpy_r_pattern) == CPyType_patterns___OrPattern))
        cpy_r_r13 = cpy_r_pattern;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_pattern_value", 167, CPyStatic_reachability___globals, "mypy.patterns.OrPattern", cpy_r_pattern);
        goto CPyL19;
    }
    cpy_r_r14 = ((mypy___patterns___OrPatternObject *)cpy_r_r13)->_patterns;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = 0;
CPyL7: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL20;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    if (likely(PyObject_TypeCheck(cpy_r_r20, CPyType_patterns___Pattern)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "infer_pattern_value", 166, CPyStatic_reachability___globals, "mypy.patterns.Pattern", cpy_r_r20);
        goto CPyL21;
    }
    cpy_r_p = cpy_r_r21;
    cpy_r_r22 = CPyDef_reachability___infer_pattern_value(cpy_r_p);
    CPy_DECREF(cpy_r_p);
    if (unlikely(cpy_r_r22 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "infer_pattern_value", 167, CPyStatic_reachability___globals);
        goto CPyL21;
    }
    cpy_r_r23 = cpy_r_r22 & 1;
    cpy_r_r24 = cpy_r_r23 == 0;
    if (!cpy_r_r24) goto CPyL12;
    cpy_r_r25 = cpy_r_r22 == 2;
    CPyTagged_DECREF(cpy_r_r22);
    cpy_r_r26 = cpy_r_r25;
    goto CPyL13;
CPyL12: ;
    cpy_r_r27 = CPyTagged_IsEq_(cpy_r_r22, 2);
    CPyTagged_DECREF(cpy_r_r22);
    cpy_r_r26 = cpy_r_r27;
CPyL13: ;
    if (cpy_r_r26) {
        goto CPyL22;
    } else
        goto CPyL15;
CPyL14: ;
    cpy_r_r12 = 1;
    goto CPyL16;
CPyL15: ;
    cpy_r_r28 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r28;
    goto CPyL7;
CPyL16: ;
    if (!cpy_r_r12) goto CPyL18;
    return 2;
CPyL18: ;
    return 10;
CPyL19: ;
    cpy_r_r29 = CPY_INT_TAG;
    return cpy_r_r29;
CPyL20: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL19;
CPyL22: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL14;
}

PyObject *CPyPy_reachability___infer_pattern_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"pattern", 0};
    static CPyArg_Parser parser = {"O:infer_pattern_value", kwlist, 0};
    PyObject *obj_pattern;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_pattern)) {
        return NULL;
    }
    PyObject *arg_pattern;
    if (likely(PyObject_TypeCheck(obj_pattern, CPyType_patterns___Pattern)))
        arg_pattern = obj_pattern;
    else {
        CPy_TypeError("mypy.patterns.Pattern", obj_pattern); 
        goto fail;
    }
    CPyTagged retval = CPyDef_reachability___infer_pattern_value(arg_pattern);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "infer_pattern_value", 163, CPyStatic_reachability___globals);
    return NULL;
}

CPyTagged CPyDef_reachability___consider_sys_version_info(PyObject *cpy_r_expr, PyObject *cpy_r_pyversion) {
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
    PyObject *cpy_r_op;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_index;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_thing;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
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
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    CPyTagged cpy_r_r97;
    int64_t cpy_r_r98;
    char cpy_r_r99;
    int64_t cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    int64_t cpy_r_r108;
    char cpy_r_r109;
    int64_t cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    CPyTagged cpy_r_r117;
    PyObject *cpy_r_r118;
    CPyTagged cpy_r_r119;
    CPyTagged cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    CPyTagged cpy_r_r123;
    PyObject *cpy_r_r124;
    int32_t cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    tuple_T2OO cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_lo;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_hi;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    CPyTagged cpy_r_r141;
    int64_t cpy_r_r142;
    char cpy_r_r143;
    int64_t cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    char cpy_r_r148;
    char cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    CPyTagged cpy_r_r152;
    int64_t cpy_r_r153;
    char cpy_r_r154;
    int64_t cpy_r_r155;
    char cpy_r_r156;
    char cpy_r_r157;
    char cpy_r_r158;
    char cpy_r_r159;
    char cpy_r_r160;
    char cpy_r_r161;
    int64_t cpy_r_r162;
    char cpy_r_r163;
    int64_t cpy_r_r164;
    char cpy_r_r165;
    char cpy_r_r166;
    char cpy_r_r167;
    char cpy_r_r168;
    char cpy_r_r169;
    char cpy_r_r170;
    CPyTagged cpy_r_r171;
    CPyTagged cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_val;
    CPyPtr cpy_r_r175;
    int64_t cpy_r_r176;
    CPyTagged cpy_r_r177;
    PyObject *cpy_r_r178;
    CPyPtr cpy_r_r179;
    int64_t cpy_r_r180;
    CPyTagged cpy_r_r181;
    char cpy_r_r182;
    CPyPtr cpy_r_r183;
    int64_t cpy_r_r184;
    CPyTagged cpy_r_r185;
    PyObject *cpy_r_r186;
    CPyPtr cpy_r_r187;
    int64_t cpy_r_r188;
    CPyTagged cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    int32_t cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    char cpy_r_r196;
    char cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    int32_t cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    char cpy_r_r203;
    char cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    CPyTagged cpy_r_r207;
    CPyTagged cpy_r_r208;
    cpy_r_r0 = (PyObject *)CPyType_nodes___ComparisonExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    return 10;
CPyL2: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ComparisonExpr))
        cpy_r_r4 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 187, CPyStatic_reachability___globals, "mypy.nodes.ComparisonExpr", cpy_r_expr);
        goto CPyL138;
    }
    cpy_r_r5 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r4)->_operators;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r8 > (Py_ssize_t)2;
    if (!cpy_r_r9) goto CPyL5;
    return 10;
CPyL5: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ComparisonExpr))
        cpy_r_r10 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 189, CPyStatic_reachability___globals, "mypy.nodes.ComparisonExpr", cpy_r_expr);
        goto CPyL138;
    }
    cpy_r_r11 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r10)->_operators;
    cpy_r_r12 = CPyList_GetItemShort(cpy_r_r11, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 189, CPyStatic_reachability___globals);
        goto CPyL138;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 189, CPyStatic_reachability___globals, "str", cpy_r_r12);
        goto CPyL138;
    }
    cpy_r_op = cpy_r_r13;
    cpy_r_r14 = CPyStatics[860]; /* '==' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_op, cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL11;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL11;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", -1, CPyStatic_reachability___globals);
        goto CPyL139;
    }
CPyL11: ;
    cpy_r_r20 = cpy_r_r15 != 0;
    if (cpy_r_r20) goto CPyL13;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL17;
CPyL13: ;
    cpy_r_r22 = CPyStatics[863]; /* '!=' */
    cpy_r_r23 = PyUnicode_Compare(cpy_r_op, cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 == -1;
    if (!cpy_r_r24) goto CPyL16;
    cpy_r_r25 = PyErr_Occurred();
    cpy_r_r26 = cpy_r_r25 != NULL;
    if (!cpy_r_r26) goto CPyL16;
    cpy_r_r27 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", -1, CPyStatic_reachability___globals);
        goto CPyL139;
    }
CPyL16: ;
    cpy_r_r28 = cpy_r_r23 != 0;
    cpy_r_r21 = cpy_r_r28;
CPyL17: ;
    if (cpy_r_r21) goto CPyL19;
    cpy_r_r29 = cpy_r_r21;
    goto CPyL23;
CPyL19: ;
    cpy_r_r30 = CPyStatics[2470]; /* '<=' */
    cpy_r_r31 = PyUnicode_Compare(cpy_r_op, cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 == -1;
    if (!cpy_r_r32) goto CPyL22;
    cpy_r_r33 = PyErr_Occurred();
    cpy_r_r34 = cpy_r_r33 != NULL;
    if (!cpy_r_r34) goto CPyL22;
    cpy_r_r35 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", -1, CPyStatic_reachability___globals);
        goto CPyL139;
    }
CPyL22: ;
    cpy_r_r36 = cpy_r_r31 != 0;
    cpy_r_r29 = cpy_r_r36;
CPyL23: ;
    if (cpy_r_r29) goto CPyL25;
    cpy_r_r37 = cpy_r_r29;
    goto CPyL29;
CPyL25: ;
    cpy_r_r38 = CPyStatics[2468]; /* '>=' */
    cpy_r_r39 = PyUnicode_Compare(cpy_r_op, cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 == -1;
    if (!cpy_r_r40) goto CPyL28;
    cpy_r_r41 = PyErr_Occurred();
    cpy_r_r42 = cpy_r_r41 != NULL;
    if (!cpy_r_r42) goto CPyL28;
    cpy_r_r43 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", -1, CPyStatic_reachability___globals);
        goto CPyL139;
    }
CPyL28: ;
    cpy_r_r44 = cpy_r_r39 != 0;
    cpy_r_r37 = cpy_r_r44;
CPyL29: ;
    if (cpy_r_r37) goto CPyL31;
    cpy_r_r45 = cpy_r_r37;
    goto CPyL35;
CPyL31: ;
    cpy_r_r46 = CPyStatics[2465]; /* '<' */
    cpy_r_r47 = PyUnicode_Compare(cpy_r_op, cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 == -1;
    if (!cpy_r_r48) goto CPyL34;
    cpy_r_r49 = PyErr_Occurred();
    cpy_r_r50 = cpy_r_r49 != NULL;
    if (!cpy_r_r50) goto CPyL34;
    cpy_r_r51 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", -1, CPyStatic_reachability___globals);
        goto CPyL139;
    }
CPyL34: ;
    cpy_r_r52 = cpy_r_r47 != 0;
    cpy_r_r45 = cpy_r_r52;
CPyL35: ;
    if (cpy_r_r45) goto CPyL37;
    cpy_r_r53 = cpy_r_r45;
    goto CPyL41;
CPyL37: ;
    cpy_r_r54 = CPyStatics[840]; /* '>' */
    cpy_r_r55 = PyUnicode_Compare(cpy_r_op, cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 == -1;
    if (!cpy_r_r56) goto CPyL40;
    cpy_r_r57 = PyErr_Occurred();
    cpy_r_r58 = cpy_r_r57 != NULL;
    if (!cpy_r_r58) goto CPyL40;
    cpy_r_r59 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", -1, CPyStatic_reachability___globals);
        goto CPyL139;
    }
CPyL40: ;
    cpy_r_r60 = cpy_r_r55 != 0;
    cpy_r_r53 = cpy_r_r60;
CPyL41: ;
    if (cpy_r_r53) {
        goto CPyL140;
    } else
        goto CPyL43;
CPyL42: ;
    return 10;
CPyL43: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ComparisonExpr))
        cpy_r_r61 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 193, CPyStatic_reachability___globals, "mypy.nodes.ComparisonExpr", cpy_r_expr);
        goto CPyL139;
    }
    cpy_r_r62 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r61)->_operands;
    cpy_r_r63 = CPyList_GetItemShort(cpy_r_r62, 0);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 193, CPyStatic_reachability___globals);
        goto CPyL139;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r63, CPyType_nodes___Expression)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 193, CPyStatic_reachability___globals, "mypy.nodes.Expression", cpy_r_r63);
        goto CPyL139;
    }
    cpy_r_r65 = CPyDef_reachability___contains_sys_version_info(cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 193, CPyStatic_reachability___globals);
        goto CPyL139;
    }
    cpy_r_index = cpy_r_r65;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ComparisonExpr))
        cpy_r_r66 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 194, CPyStatic_reachability___globals, "mypy.nodes.ComparisonExpr", cpy_r_expr);
        goto CPyL141;
    }
    cpy_r_r67 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r66)->_operands;
    cpy_r_r68 = CPyList_GetItemShort(cpy_r_r67, 2);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 194, CPyStatic_reachability___globals);
        goto CPyL141;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r68, CPyType_nodes___Expression)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 194, CPyStatic_reachability___globals, "mypy.nodes.Expression", cpy_r_r68);
        goto CPyL141;
    }
    cpy_r_r70 = CPyDef_reachability___contains_int_or_tuple_of_ints(cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 194, CPyStatic_reachability___globals);
        goto CPyL141;
    }
    cpy_r_thing = cpy_r_r70;
    cpy_r_r71 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r72 = cpy_r_index == cpy_r_r71;
    if (cpy_r_r72) goto CPyL142;
    cpy_r_r73 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r74 = cpy_r_thing == cpy_r_r73;
    if (cpy_r_r74) {
        goto CPyL142;
    } else
        goto CPyL67;
CPyL53: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ComparisonExpr))
        cpy_r_r75 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 196, CPyStatic_reachability___globals, "mypy.nodes.ComparisonExpr", cpy_r_expr);
        goto CPyL139;
    }
    cpy_r_r76 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r75)->_operands;
    cpy_r_r77 = CPyList_GetItemShort(cpy_r_r76, 2);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 196, CPyStatic_reachability___globals);
        goto CPyL139;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r77, CPyType_nodes___Expression)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 196, CPyStatic_reachability___globals, "mypy.nodes.Expression", cpy_r_r77);
        goto CPyL139;
    }
    cpy_r_r79 = CPyDef_reachability___contains_sys_version_info(cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 196, CPyStatic_reachability___globals);
        goto CPyL139;
    }
    cpy_r_index = cpy_r_r79;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ComparisonExpr))
        cpy_r_r80 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 197, CPyStatic_reachability___globals, "mypy.nodes.ComparisonExpr", cpy_r_expr);
        goto CPyL141;
    }
    cpy_r_r81 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r80)->_operands;
    cpy_r_r82 = CPyList_GetItemShort(cpy_r_r81, 0);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 197, CPyStatic_reachability___globals);
        goto CPyL141;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r82, CPyType_nodes___Expression)))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 197, CPyStatic_reachability___globals, "mypy.nodes.Expression", cpy_r_r82);
        goto CPyL141;
    }
    cpy_r_r84 = CPyDef_reachability___contains_int_or_tuple_of_ints(cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 197, CPyStatic_reachability___globals);
        goto CPyL141;
    }
    cpy_r_thing = cpy_r_r84;
    cpy_r_r85 = CPyStatic_reachability___reverse_op;
    if (unlikely(cpy_r_r85 == NULL)) {
        goto CPyL143;
    } else
        goto CPyL64;
CPyL62: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"reverse_op\" was not set");
    cpy_r_r86 = 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 198, CPyStatic_reachability___globals);
        goto CPyL138;
    }
    CPy_Unreachable();
CPyL64: ;
    cpy_r_r87 = CPyDict_GetItem(cpy_r_r85, cpy_r_op);
    CPy_DECREF(cpy_r_op);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 198, CPyStatic_reachability___globals);
        goto CPyL144;
    }
    if (likely(PyUnicode_Check(cpy_r_r87)))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 198, CPyStatic_reachability___globals, "str", cpy_r_r87);
        goto CPyL144;
    }
    cpy_r_op = cpy_r_r88;
CPyL67: ;
    cpy_r_r89 = (PyObject *)&PyLong_Type;
    cpy_r_r90 = PyObject_IsInstance(cpy_r_index, cpy_r_r89);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 199, CPyStatic_reachability___globals);
        goto CPyL145;
    }
    cpy_r_r92 = cpy_r_r90;
    if (!cpy_r_r92) goto CPyL89;
    cpy_r_r93 = (PyObject *)&PyLong_Type;
    cpy_r_r94 = PyObject_IsInstance(cpy_r_thing, cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 199, CPyStatic_reachability___globals);
        goto CPyL145;
    }
    cpy_r_r96 = cpy_r_r94;
    if (!cpy_r_r96) goto CPyL89;
    if (likely(PyLong_Check(cpy_r_index)))
        cpy_r_r97 = CPyTagged_FromObject(cpy_r_index);
    else {
        CPy_TypeError("int", cpy_r_index); cpy_r_r97 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r97 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 201, CPyStatic_reachability___globals);
        goto CPyL145;
    }
    cpy_r_r98 = 0 & 1;
    cpy_r_r99 = cpy_r_r98 == 0;
    cpy_r_r100 = cpy_r_r97 & 1;
    cpy_r_r101 = cpy_r_r100 == 0;
    cpy_r_r102 = cpy_r_r99 & cpy_r_r101;
    if (!cpy_r_r102) goto CPyL74;
    cpy_r_r103 = (Py_ssize_t)0 <= (Py_ssize_t)cpy_r_r97;
    cpy_r_r104 = cpy_r_r103;
    goto CPyL75;
CPyL74: ;
    cpy_r_r105 = CPyTagged_IsLt_(cpy_r_r97, 0);
    cpy_r_r106 = cpy_r_r105 ^ 1;
    cpy_r_r104 = cpy_r_r106;
CPyL75: ;
    if (cpy_r_r104) {
        goto CPyL77;
    } else
        goto CPyL146;
CPyL76: ;
    cpy_r_r107 = cpy_r_r104;
    goto CPyL81;
CPyL77: ;
    cpy_r_r108 = cpy_r_r97 & 1;
    cpy_r_r109 = cpy_r_r108 == 0;
    cpy_r_r110 = 2 & 1;
    cpy_r_r111 = cpy_r_r110 == 0;
    cpy_r_r112 = cpy_r_r109 & cpy_r_r111;
    if (!cpy_r_r112) goto CPyL79;
    cpy_r_r113 = (Py_ssize_t)cpy_r_r97 <= (Py_ssize_t)2;
    CPyTagged_DECREF(cpy_r_r97);
    cpy_r_r114 = cpy_r_r113;
    goto CPyL80;
CPyL79: ;
    cpy_r_r115 = CPyTagged_IsLt_(2, cpy_r_r97);
    CPyTagged_DECREF(cpy_r_r97);
    cpy_r_r116 = cpy_r_r115 ^ 1;
    cpy_r_r114 = cpy_r_r116;
CPyL80: ;
    cpy_r_r107 = cpy_r_r114;
CPyL81: ;
    if (!cpy_r_r107) goto CPyL147;
    if (likely(PyLong_Check(cpy_r_index)))
        cpy_r_r117 = CPyTagged_FromObject(cpy_r_index);
    else {
        CPy_TypeError("int", cpy_r_index); cpy_r_r117 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_index);
    if (unlikely(cpy_r_r117 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 202, CPyStatic_reachability___globals);
        goto CPyL148;
    }
    cpy_r_r118 = CPySequenceTuple_GetItem(cpy_r_pyversion, cpy_r_r117);
    CPyTagged_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 202, CPyStatic_reachability___globals);
        goto CPyL148;
    }
    if (likely(PyLong_Check(cpy_r_r118)))
        cpy_r_r119 = CPyTagged_FromObject(cpy_r_r118);
    else {
        CPy_TypeError("int", cpy_r_r118); cpy_r_r119 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 202, CPyStatic_reachability___globals);
        goto CPyL148;
    }
    if (likely(PyLong_Check(cpy_r_thing)))
        cpy_r_r120 = CPyTagged_FromObject(cpy_r_thing);
    else {
        CPy_TypeError("int", cpy_r_thing); cpy_r_r120 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_thing);
    if (unlikely(cpy_r_r120 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 202, CPyStatic_reachability___globals);
        goto CPyL149;
    }
    cpy_r_r121 = CPyTagged_StealAsObject(cpy_r_r119);
    cpy_r_r122 = CPyTagged_StealAsObject(cpy_r_r120);
    cpy_r_r123 = CPyDef_reachability___fixed_comparison(cpy_r_r121, cpy_r_op, cpy_r_r122);
    CPy_DECREF(cpy_r_r121);
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r123 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 202, CPyStatic_reachability___globals);
        goto CPyL138;
    }
    return cpy_r_r123;
CPyL88: ;
    return 10;
CPyL89: ;
    cpy_r_r124 = (PyObject *)&PyTuple_Type;
    cpy_r_r125 = PyObject_IsInstance(cpy_r_index, cpy_r_r124);
    cpy_r_r126 = cpy_r_r125 >= 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 205, CPyStatic_reachability___globals);
        goto CPyL145;
    }
    cpy_r_r127 = cpy_r_r125;
    if (!cpy_r_r127) goto CPyL150;
    cpy_r_r128 = (PyObject *)&PyTuple_Type;
    cpy_r_r129 = PyObject_IsInstance(cpy_r_thing, cpy_r_r128);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 205, CPyStatic_reachability___globals);
        goto CPyL145;
    }
    cpy_r_r131 = cpy_r_r129;
    if (!cpy_r_r131) goto CPyL150;
    PyObject *__tmp4954;
    if (unlikely(!(PyTuple_Check(cpy_r_index) && PyTuple_GET_SIZE(cpy_r_index) == 2))) {
        __tmp4954 = NULL;
        goto __LL4955;
    }
    if (PyLong_Check(PyTuple_GET_ITEM(cpy_r_index, 0)))
        __tmp4954 = PyTuple_GET_ITEM(cpy_r_index, 0);
    else {
        __tmp4954 = NULL;
    }
    if (__tmp4954 != NULL) goto __LL4956;
    if (PyTuple_GET_ITEM(cpy_r_index, 0) == Py_None)
        __tmp4954 = PyTuple_GET_ITEM(cpy_r_index, 0);
    else {
        __tmp4954 = NULL;
    }
    if (__tmp4954 != NULL) goto __LL4956;
    __tmp4954 = NULL;
__LL4956: ;
    if (__tmp4954 == NULL) goto __LL4955;
    if (PyLong_Check(PyTuple_GET_ITEM(cpy_r_index, 1)))
        __tmp4954 = PyTuple_GET_ITEM(cpy_r_index, 1);
    else {
        __tmp4954 = NULL;
    }
    if (__tmp4954 != NULL) goto __LL4957;
    if (PyTuple_GET_ITEM(cpy_r_index, 1) == Py_None)
        __tmp4954 = PyTuple_GET_ITEM(cpy_r_index, 1);
    else {
        __tmp4954 = NULL;
    }
    if (__tmp4954 != NULL) goto __LL4957;
    __tmp4954 = NULL;
__LL4957: ;
    if (__tmp4954 == NULL) goto __LL4955;
    __tmp4954 = cpy_r_index;
__LL4955: ;
    if (unlikely(__tmp4954 == NULL)) {
        CPy_TypeError("tuple[union[int, None], union[int, None]]", cpy_r_index); cpy_r_r132 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp4958 = PyTuple_GET_ITEM(cpy_r_index, 0);
        CPy_INCREF(__tmp4958);
        PyObject *__tmp4959;
        if (PyLong_Check(__tmp4958))
            __tmp4959 = __tmp4958;
        else {
            __tmp4959 = NULL;
        }
        if (__tmp4959 != NULL) goto __LL4960;
        if (__tmp4958 == Py_None)
            __tmp4959 = __tmp4958;
        else {
            __tmp4959 = NULL;
        }
        if (__tmp4959 != NULL) goto __LL4960;
        CPy_TypeError("int or None", __tmp4958); 
        __tmp4959 = NULL;
__LL4960: ;
        cpy_r_r132.f0 = __tmp4959;
        PyObject *__tmp4961 = PyTuple_GET_ITEM(cpy_r_index, 1);
        CPy_INCREF(__tmp4961);
        PyObject *__tmp4962;
        if (PyLong_Check(__tmp4961))
            __tmp4962 = __tmp4961;
        else {
            __tmp4962 = NULL;
        }
        if (__tmp4962 != NULL) goto __LL4963;
        if (__tmp4961 == Py_None)
            __tmp4962 = __tmp4961;
        else {
            __tmp4962 = NULL;
        }
        if (__tmp4962 != NULL) goto __LL4963;
        CPy_TypeError("int or None", __tmp4961); 
        __tmp4962 = NULL;
__LL4963: ;
        cpy_r_r132.f1 = __tmp4962;
    }
    CPy_DECREF(cpy_r_index);
    if (unlikely(cpy_r_r132.f0 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 206, CPyStatic_reachability___globals);
        goto CPyL148;
    }
    cpy_r_r133 = cpy_r_r132.f0;
    CPy_INCREF(cpy_r_r133);
    cpy_r_lo = cpy_r_r133;
    cpy_r_r134 = cpy_r_r132.f1;
    CPy_INCREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r132.f0);
    CPy_DECREF(cpy_r_r132.f1);
    cpy_r_hi = cpy_r_r134;
    cpy_r_r135 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r136 = cpy_r_lo == cpy_r_r135;
    if (cpy_r_r136) {
        goto CPyL151;
    } else
        goto CPyL96;
CPyL95: ;
    cpy_r_r137 = CPyStatics[9015]; /* 0 */
    CPy_INCREF(cpy_r_r137);
    cpy_r_lo = cpy_r_r137;
CPyL96: ;
    cpy_r_r138 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r139 = cpy_r_hi == cpy_r_r138;
    if (cpy_r_r139) {
        goto CPyL152;
    } else
        goto CPyL98;
CPyL97: ;
    cpy_r_r140 = CPyStatics[9018]; /* 2 */
    CPy_INCREF(cpy_r_r140);
    cpy_r_hi = cpy_r_r140;
CPyL98: ;
    if (likely(PyLong_Check(cpy_r_lo)))
        cpy_r_r141 = CPyTagged_FromObject(cpy_r_lo);
    else {
        CPy_TypeError("int", cpy_r_lo); cpy_r_r141 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r141 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 211, CPyStatic_reachability___globals);
        goto CPyL153;
    }
    cpy_r_r142 = 0 & 1;
    cpy_r_r143 = cpy_r_r142 == 0;
    cpy_r_r144 = cpy_r_r141 & 1;
    cpy_r_r145 = cpy_r_r144 == 0;
    cpy_r_r146 = cpy_r_r143 & cpy_r_r145;
    if (!cpy_r_r146) goto CPyL101;
    cpy_r_r147 = (Py_ssize_t)0 <= (Py_ssize_t)cpy_r_r141;
    cpy_r_r148 = cpy_r_r147;
    goto CPyL102;
CPyL101: ;
    cpy_r_r149 = CPyTagged_IsLt_(cpy_r_r141, 0);
    cpy_r_r150 = cpy_r_r149 ^ 1;
    cpy_r_r148 = cpy_r_r150;
CPyL102: ;
    if (cpy_r_r148) {
        goto CPyL104;
    } else
        goto CPyL154;
CPyL103: ;
    cpy_r_r151 = cpy_r_r148;
    goto CPyL115;
CPyL104: ;
    if (likely(PyLong_Check(cpy_r_hi)))
        cpy_r_r152 = CPyTagged_FromObject(cpy_r_hi);
    else {
        CPy_TypeError("int", cpy_r_hi); cpy_r_r152 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r152 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 211, CPyStatic_reachability___globals);
        goto CPyL155;
    }
    cpy_r_r153 = cpy_r_r141 & 1;
    cpy_r_r154 = cpy_r_r153 == 0;
    cpy_r_r155 = cpy_r_r152 & 1;
    cpy_r_r156 = cpy_r_r155 == 0;
    cpy_r_r157 = cpy_r_r154 & cpy_r_r156;
    if (!cpy_r_r157) goto CPyL107;
    cpy_r_r158 = (Py_ssize_t)cpy_r_r141 < (Py_ssize_t)cpy_r_r152;
    CPyTagged_DECREF(cpy_r_r141);
    cpy_r_r159 = cpy_r_r158;
    goto CPyL108;
CPyL107: ;
    cpy_r_r160 = CPyTagged_IsLt_(cpy_r_r141, cpy_r_r152);
    CPyTagged_DECREF(cpy_r_r141);
    cpy_r_r159 = cpy_r_r160;
CPyL108: ;
    if (cpy_r_r159) {
        goto CPyL110;
    } else
        goto CPyL156;
CPyL109: ;
    cpy_r_r161 = cpy_r_r159;
    goto CPyL114;
CPyL110: ;
    cpy_r_r162 = cpy_r_r152 & 1;
    cpy_r_r163 = cpy_r_r162 == 0;
    cpy_r_r164 = 4 & 1;
    cpy_r_r165 = cpy_r_r164 == 0;
    cpy_r_r166 = cpy_r_r163 & cpy_r_r165;
    if (!cpy_r_r166) goto CPyL112;
    cpy_r_r167 = (Py_ssize_t)cpy_r_r152 <= (Py_ssize_t)4;
    CPyTagged_DECREF(cpy_r_r152);
    cpy_r_r168 = cpy_r_r167;
    goto CPyL113;
CPyL112: ;
    cpy_r_r169 = CPyTagged_IsLt_(4, cpy_r_r152);
    CPyTagged_DECREF(cpy_r_r152);
    cpy_r_r170 = cpy_r_r169 ^ 1;
    cpy_r_r168 = cpy_r_r170;
CPyL113: ;
    cpy_r_r161 = cpy_r_r168;
CPyL114: ;
    cpy_r_r151 = cpy_r_r161;
CPyL115: ;
    if (!cpy_r_r151) goto CPyL157;
    if (likely(PyLong_Check(cpy_r_lo)))
        cpy_r_r171 = CPyTagged_FromObject(cpy_r_lo);
    else {
        CPy_TypeError("int", cpy_r_lo); cpy_r_r171 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_lo);
    if (unlikely(cpy_r_r171 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 212, CPyStatic_reachability___globals);
        goto CPyL158;
    }
    if (likely(PyLong_Check(cpy_r_hi)))
        cpy_r_r172 = CPyTagged_FromObject(cpy_r_hi);
    else {
        CPy_TypeError("int", cpy_r_hi); cpy_r_r172 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_hi);
    if (unlikely(cpy_r_r172 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 212, CPyStatic_reachability___globals);
        goto CPyL159;
    }
    cpy_r_r173 = CPySequenceTuple_GetSlice(cpy_r_pyversion, cpy_r_r171, cpy_r_r172);
    CPyTagged_DECREF(cpy_r_r171);
    CPyTagged_DECREF(cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 212, CPyStatic_reachability___globals);
        goto CPyL148;
    }
    if (likely(PyTuple_Check(cpy_r_r173)))
        cpy_r_r174 = cpy_r_r173;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 212, CPyStatic_reachability___globals, "tuple", cpy_r_r173);
        goto CPyL148;
    }
    cpy_r_val = cpy_r_r174;
    cpy_r_r175 = (CPyPtr)&((PyVarObject *)cpy_r_val)->ob_size;
    cpy_r_r176 = *(int64_t *)cpy_r_r175;
    cpy_r_r177 = cpy_r_r176 << 1;
    CPy_INCREF(cpy_r_thing);
    if (likely(PyTuple_Check(cpy_r_thing)))
        cpy_r_r178 = cpy_r_thing;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 213, CPyStatic_reachability___globals, "tuple", cpy_r_thing);
        goto CPyL160;
    }
    cpy_r_r179 = (CPyPtr)&((PyVarObject *)cpy_r_r178)->ob_size;
    cpy_r_r180 = *(int64_t *)cpy_r_r179;
    CPy_DECREF(cpy_r_r178);
    cpy_r_r181 = cpy_r_r180 << 1;
    cpy_r_r182 = cpy_r_r177 == cpy_r_r181;
    if (cpy_r_r182) goto CPyL134;
    cpy_r_r183 = (CPyPtr)&((PyVarObject *)cpy_r_val)->ob_size;
    cpy_r_r184 = *(int64_t *)cpy_r_r183;
    cpy_r_r185 = cpy_r_r184 << 1;
    CPy_INCREF(cpy_r_thing);
    if (likely(PyTuple_Check(cpy_r_thing)))
        cpy_r_r186 = cpy_r_thing;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 213, CPyStatic_reachability___globals, "tuple", cpy_r_thing);
        goto CPyL160;
    }
    cpy_r_r187 = (CPyPtr)&((PyVarObject *)cpy_r_r186)->ob_size;
    cpy_r_r188 = *(int64_t *)cpy_r_r187;
    CPy_DECREF(cpy_r_r186);
    cpy_r_r189 = cpy_r_r188 << 1;
    cpy_r_r190 = (Py_ssize_t)cpy_r_r185 > (Py_ssize_t)cpy_r_r189;
    if (!cpy_r_r190) goto CPyL161;
    cpy_r_r191 = CPyStatics[860]; /* '==' */
    cpy_r_r192 = PyUnicode_Compare(cpy_r_op, cpy_r_r191);
    cpy_r_r193 = cpy_r_r192 == -1;
    if (!cpy_r_r193) goto CPyL127;
    cpy_r_r194 = PyErr_Occurred();
    cpy_r_r195 = cpy_r_r194 != NULL;
    if (!cpy_r_r195) goto CPyL127;
    cpy_r_r196 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", -1, CPyStatic_reachability___globals);
        goto CPyL160;
    }
CPyL127: ;
    cpy_r_r197 = cpy_r_r192 != 0;
    if (cpy_r_r197) goto CPyL129;
    cpy_r_r198 = cpy_r_r197;
    goto CPyL133;
CPyL129: ;
    cpy_r_r199 = CPyStatics[863]; /* '!=' */
    cpy_r_r200 = PyUnicode_Compare(cpy_r_op, cpy_r_r199);
    cpy_r_r201 = cpy_r_r200 == -1;
    if (!cpy_r_r201) goto CPyL132;
    cpy_r_r202 = PyErr_Occurred();
    cpy_r_r203 = cpy_r_r202 != NULL;
    if (!cpy_r_r203) goto CPyL132;
    cpy_r_r204 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r204)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", -1, CPyStatic_reachability___globals);
        goto CPyL160;
    }
CPyL132: ;
    cpy_r_r205 = cpy_r_r200 != 0;
    cpy_r_r198 = cpy_r_r205;
CPyL133: ;
    if (!cpy_r_r198) goto CPyL161;
CPyL134: ;
    if (likely(PyTuple_Check(cpy_r_thing)))
        cpy_r_r206 = cpy_r_thing;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_version_info", 214, CPyStatic_reachability___globals, "tuple", cpy_r_thing);
        goto CPyL162;
    }
    cpy_r_r207 = CPyDef_reachability___fixed_comparison(cpy_r_val, cpy_r_op, cpy_r_r206);
    CPy_DECREF(cpy_r_val);
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r207 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 214, CPyStatic_reachability___globals);
        goto CPyL138;
    }
    return cpy_r_r207;
CPyL137: ;
    return 10;
CPyL138: ;
    cpy_r_r208 = CPY_INT_TAG;
    return cpy_r_r208;
CPyL139: ;
    CPy_DecRef(cpy_r_op);
    goto CPyL138;
CPyL140: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL42;
CPyL141: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_index);
    goto CPyL138;
CPyL142: ;
    CPy_DECREF(cpy_r_index);
    CPy_DECREF(cpy_r_thing);
    goto CPyL53;
CPyL143: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_thing);
    goto CPyL62;
CPyL144: ;
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_thing);
    goto CPyL138;
CPyL145: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_thing);
    goto CPyL138;
CPyL146: ;
    CPyTagged_DECREF(cpy_r_r97);
    goto CPyL76;
CPyL147: ;
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_index);
    CPy_DECREF(cpy_r_thing);
    goto CPyL88;
CPyL148: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_thing);
    goto CPyL138;
CPyL149: ;
    CPy_DecRef(cpy_r_op);
    CPyTagged_DecRef(cpy_r_r119);
    goto CPyL138;
CPyL150: ;
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_index);
    CPy_DECREF(cpy_r_thing);
    goto CPyL137;
CPyL151: ;
    CPy_DECREF(cpy_r_lo);
    goto CPyL95;
CPyL152: ;
    CPy_DECREF(cpy_r_hi);
    goto CPyL97;
CPyL153: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_thing);
    CPy_DecRef(cpy_r_lo);
    CPy_DecRef(cpy_r_hi);
    goto CPyL138;
CPyL154: ;
    CPyTagged_DECREF(cpy_r_r141);
    goto CPyL103;
CPyL155: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_thing);
    CPy_DecRef(cpy_r_lo);
    CPy_DecRef(cpy_r_hi);
    CPyTagged_DecRef(cpy_r_r141);
    goto CPyL138;
CPyL156: ;
    CPyTagged_DECREF(cpy_r_r152);
    goto CPyL109;
CPyL157: ;
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_thing);
    CPy_DECREF(cpy_r_lo);
    CPy_DECREF(cpy_r_hi);
    goto CPyL137;
CPyL158: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_thing);
    CPy_DecRef(cpy_r_hi);
    goto CPyL138;
CPyL159: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_thing);
    CPyTagged_DecRef(cpy_r_r171);
    goto CPyL138;
CPyL160: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_thing);
    CPy_DecRef(cpy_r_val);
    goto CPyL138;
CPyL161: ;
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_thing);
    CPy_DECREF(cpy_r_val);
    goto CPyL137;
CPyL162: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_val);
    goto CPyL138;
}

PyObject *CPyPy_reachability___consider_sys_version_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", "pyversion", 0};
    static CPyArg_Parser parser = {"OO:consider_sys_version_info", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_pyversion;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_pyversion)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject * arg_pyversion;
    if (likely(PyTuple_Check(obj_pyversion)))
        arg_pyversion = obj_pyversion;
    else {
        CPy_TypeError("tuple", obj_pyversion); 
        goto fail;
    }
    CPyTagged retval = CPyDef_reachability___consider_sys_version_info(arg_expr, arg_pyversion);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "consider_sys_version_info", 174, CPyStatic_reachability___globals);
    return NULL;
}

CPyTagged CPyDef_reachability___consider_sys_platform(PyObject *cpy_r_expr, PyObject *cpy_r_platform) {
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
    PyObject *cpy_r_op;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
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
    PyObject *cpy_r_right;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    int64_t cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
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
    int32_t cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    CPyTagged cpy_r_r92;
    cpy_r_r0 = (PyObject *)CPyType_nodes___ComparisonExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL32;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ComparisonExpr))
        cpy_r_r4 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 229, CPyStatic_reachability___globals, "mypy.nodes.ComparisonExpr", cpy_r_expr);
        goto CPyL61;
    }
    cpy_r_r5 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r4)->_operators;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r8 > (Py_ssize_t)2;
    if (!cpy_r_r9) goto CPyL4;
    return 10;
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ComparisonExpr))
        cpy_r_r10 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 231, CPyStatic_reachability___globals, "mypy.nodes.ComparisonExpr", cpy_r_expr);
        goto CPyL61;
    }
    cpy_r_r11 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r10)->_operators;
    cpy_r_r12 = CPyList_GetItemShort(cpy_r_r11, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_platform", 231, CPyStatic_reachability___globals);
        goto CPyL61;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 231, CPyStatic_reachability___globals, "str", cpy_r_r12);
        goto CPyL61;
    }
    cpy_r_op = cpy_r_r13;
    cpy_r_r14 = CPyStatics[860]; /* '==' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_op, cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL10;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL10;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_platform", -1, CPyStatic_reachability___globals);
        goto CPyL62;
    }
CPyL10: ;
    cpy_r_r20 = cpy_r_r15 != 0;
    if (cpy_r_r20) goto CPyL12;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL16;
CPyL12: ;
    cpy_r_r22 = CPyStatics[863]; /* '!=' */
    cpy_r_r23 = PyUnicode_Compare(cpy_r_op, cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 == -1;
    if (!cpy_r_r24) goto CPyL15;
    cpy_r_r25 = PyErr_Occurred();
    cpy_r_r26 = cpy_r_r25 != NULL;
    if (!cpy_r_r26) goto CPyL15;
    cpy_r_r27 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_platform", -1, CPyStatic_reachability___globals);
        goto CPyL62;
    }
CPyL15: ;
    cpy_r_r28 = cpy_r_r23 != 0;
    cpy_r_r21 = cpy_r_r28;
CPyL16: ;
    if (cpy_r_r21) {
        goto CPyL63;
    } else
        goto CPyL18;
CPyL17: ;
    return 10;
CPyL18: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ComparisonExpr))
        cpy_r_r29 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 234, CPyStatic_reachability___globals, "mypy.nodes.ComparisonExpr", cpy_r_expr);
        goto CPyL62;
    }
    cpy_r_r30 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r29)->_operands;
    cpy_r_r31 = CPyList_GetItemShort(cpy_r_r30, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_platform", 234, CPyStatic_reachability___globals);
        goto CPyL62;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r31, CPyType_nodes___Expression)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 234, CPyStatic_reachability___globals, "mypy.nodes.Expression", cpy_r_r31);
        goto CPyL62;
    }
    cpy_r_r33 = CPyStatics[305]; /* 'platform' */
    cpy_r_r34 = CPyDef_reachability___is_sys_attr(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_platform", 234, CPyStatic_reachability___globals);
        goto CPyL62;
    }
    if (cpy_r_r34) {
        goto CPyL24;
    } else
        goto CPyL64;
CPyL23: ;
    return 10;
CPyL24: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ComparisonExpr))
        cpy_r_r35 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 236, CPyStatic_reachability___globals, "mypy.nodes.ComparisonExpr", cpy_r_expr);
        goto CPyL62;
    }
    cpy_r_r36 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r35)->_operands;
    cpy_r_r37 = CPyList_GetItemShort(cpy_r_r36, 2);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_platform", 236, CPyStatic_reachability___globals);
        goto CPyL62;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r37, CPyType_nodes___Expression)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 236, CPyStatic_reachability___globals, "mypy.nodes.Expression", cpy_r_r37);
        goto CPyL62;
    }
    cpy_r_right = cpy_r_r38;
    cpy_r_r39 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_right)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (cpy_r_r42) {
        goto CPyL29;
    } else
        goto CPyL65;
CPyL28: ;
    return 10;
CPyL29: ;
    if (likely(Py_TYPE(cpy_r_right) == CPyType_nodes___StrExpr))
        cpy_r_r43 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 239, CPyStatic_reachability___globals, "mypy.nodes.StrExpr", cpy_r_right);
        goto CPyL66;
    }
    cpy_r_r44 = ((mypy___nodes___StrExprObject *)cpy_r_r43)->_value;
    CPy_INCREF(cpy_r_r44);
    CPy_DECREF(cpy_r_right);
    cpy_r_r45 = CPyDef_reachability___fixed_comparison(cpy_r_platform, cpy_r_op, cpy_r_r44);
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_platform", 239, CPyStatic_reachability___globals);
        goto CPyL61;
    }
    return cpy_r_r45;
CPyL32: ;
    cpy_r_r46 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r47 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 == cpy_r_r46;
    if (!cpy_r_r49) goto CPyL60;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r50 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 241, CPyStatic_reachability___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL61;
    }
    cpy_r_r51 = ((mypy___nodes___CallExprObject *)cpy_r_r50)->_callee;
    cpy_r_r52 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r53 = (CPyPtr)&((PyObject *)cpy_r_r51)->ob_type;
    cpy_r_r54 = *(PyObject * *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 == cpy_r_r52;
    if (cpy_r_r55) goto CPyL36;
    return 10;
CPyL36: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r56 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 243, CPyStatic_reachability___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL61;
    }
    cpy_r_r57 = ((mypy___nodes___CallExprObject *)cpy_r_r56)->_args;
    cpy_r_r58 = (CPyPtr)&((PyVarObject *)cpy_r_r57)->ob_size;
    cpy_r_r59 = *(int64_t *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 << 1;
    cpy_r_r61 = cpy_r_r60 != 2;
    if (cpy_r_r61) goto CPyL41;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r62 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 243, CPyStatic_reachability___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL61;
    }
    cpy_r_r63 = ((mypy___nodes___CallExprObject *)cpy_r_r62)->_args;
    cpy_r_r64 = CPyList_GetItemShortBorrow(cpy_r_r63, 0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_platform", 243, CPyStatic_reachability___globals);
        goto CPyL61;
    }
    cpy_r_r65 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_r64)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    if (cpy_r_r68) goto CPyL42;
CPyL41: ;
    return 10;
CPyL42: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r69 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 245, CPyStatic_reachability___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL61;
    }
    cpy_r_r70 = ((mypy___nodes___CallExprObject *)cpy_r_r69)->_callee;
    if (likely(Py_TYPE(cpy_r_r70) == CPyType_nodes___MemberExpr))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 245, CPyStatic_reachability___globals, "mypy.nodes.MemberExpr", cpy_r_r70);
        goto CPyL61;
    }
    cpy_r_r72 = ((mypy___nodes___MemberExprObject *)cpy_r_r71)->_expr;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = CPyStatics[305]; /* 'platform' */
    cpy_r_r74 = CPyDef_reachability___is_sys_attr(cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_platform", 245, CPyStatic_reachability___globals);
        goto CPyL61;
    }
    if (cpy_r_r74) goto CPyL47;
    return 10;
CPyL47: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r75 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 247, CPyStatic_reachability___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL61;
    }
    cpy_r_r76 = ((mypy___nodes___CallExprObject *)cpy_r_r75)->_callee;
    if (likely(Py_TYPE(cpy_r_r76) == CPyType_nodes___MemberExpr))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 247, CPyStatic_reachability___globals, "mypy.nodes.MemberExpr", cpy_r_r76);
        goto CPyL61;
    }
    cpy_r_r78 = ((mypy___nodes___MemberExprObject *)cpy_r_r77)->_name;
    CPy_INCREF(cpy_r_r78);
    cpy_r_r79 = CPyStatics[4225]; /* 'startswith' */
    cpy_r_r80 = PyUnicode_Compare(cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r81 = cpy_r_r80 == -1;
    if (!cpy_r_r81) goto CPyL52;
    cpy_r_r82 = PyErr_Occurred();
    cpy_r_r83 = cpy_r_r82 != NULL;
    if (!cpy_r_r83) goto CPyL52;
    cpy_r_r84 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_platform", 247, CPyStatic_reachability___globals);
        goto CPyL61;
    }
CPyL52: ;
    cpy_r_r85 = cpy_r_r80 != 0;
    if (!cpy_r_r85) goto CPyL54;
    return 10;
CPyL54: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r86 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 249, CPyStatic_reachability___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL61;
    }
    cpy_r_r87 = ((mypy___nodes___CallExprObject *)cpy_r_r86)->_args;
    cpy_r_r88 = CPyList_GetItemShortBorrow(cpy_r_r87, 0);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "consider_sys_platform", 249, CPyStatic_reachability___globals);
        goto CPyL61;
    }
    if (likely(Py_TYPE(cpy_r_r88) == CPyType_nodes___StrExpr))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "consider_sys_platform", 249, CPyStatic_reachability___globals, "mypy.nodes.StrExpr", cpy_r_r88);
        goto CPyL61;
    }
    cpy_r_r90 = ((mypy___nodes___StrExprObject *)cpy_r_r89)->_value;
    CPy_INCREF(cpy_r_r90);
    cpy_r_r91 = CPyStr_Startswith(cpy_r_platform, cpy_r_r90);
    CPy_DECREF(cpy_r_r90);
    if (!cpy_r_r91) goto CPyL59;
    return 2;
CPyL59: ;
    return 6;
CPyL60: ;
    return 10;
CPyL61: ;
    cpy_r_r92 = CPY_INT_TAG;
    return cpy_r_r92;
CPyL62: ;
    CPy_DecRef(cpy_r_op);
    goto CPyL61;
CPyL63: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL17;
CPyL64: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL23;
CPyL65: ;
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_right);
    goto CPyL28;
CPyL66: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_right);
    goto CPyL61;
}

PyObject *CPyPy_reachability___consider_sys_platform(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", "platform", 0};
    static CPyArg_Parser parser = {"OO:consider_sys_platform", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_platform;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_platform)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *arg_platform;
    if (likely(PyUnicode_Check(obj_platform)))
        arg_platform = obj_platform;
    else {
        CPy_TypeError("str", obj_platform); 
        goto fail;
    }
    CPyTagged retval = CPyDef_reachability___consider_sys_platform(arg_expr, arg_platform);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "consider_sys_platform", 218, CPyStatic_reachability___globals);
    return NULL;
}

CPyTagged CPyDef_reachability___fixed_comparison(PyObject *cpy_r_left, PyObject *cpy_r_op, PyObject *cpy_r_right) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_rmap;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    CPyTagged cpy_r_r77;
    cpy_r_r0 = 0 ? Py_True : Py_False;
    cpy_r_r1 = CPyStatics[9026]; /* 3 */
    cpy_r_r2 = 1 ? Py_True : Py_False;
    cpy_r_r3 = CPyStatics[9016]; /* 1 */
    cpy_r_r4 = CPyDict_Build(2, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 261, CPyStatic_reachability___globals);
        goto CPyL56;
    }
    cpy_r_rmap = cpy_r_r4;
    cpy_r_r5 = CPyStatics[860]; /* '==' */
    cpy_r_r6 = PyUnicode_Compare(cpy_r_op, cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 == -1;
    if (!cpy_r_r7) goto CPyL4;
    cpy_r_r8 = PyErr_Occurred();
    cpy_r_r9 = cpy_r_r8 != NULL;
    if (!cpy_r_r9) goto CPyL4;
    cpy_r_r10 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 262, CPyStatic_reachability___globals);
        goto CPyL57;
    }
CPyL4: ;
    cpy_r_r11 = cpy_r_r6 == 0;
    if (!cpy_r_r11) goto CPyL10;
    cpy_r_r12 = PyObject_RichCompare(cpy_r_left, cpy_r_right, 2);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 263, CPyStatic_reachability___globals);
        goto CPyL57;
    }
    if (unlikely(!PyBool_Check(cpy_r_r12))) {
        CPy_TypeError("bool", cpy_r_r12); cpy_r_r13 = 2;
    } else
        cpy_r_r13 = cpy_r_r12 == Py_True;
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 263, CPyStatic_reachability___globals);
        goto CPyL57;
    }
    cpy_r_r14 = cpy_r_r13 ? Py_True : Py_False;
    cpy_r_r15 = CPyDict_GetItem(cpy_r_rmap, cpy_r_r14);
    CPy_DECREF(cpy_r_rmap);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 263, CPyStatic_reachability___globals);
        goto CPyL56;
    }
    if (likely(PyLong_Check(cpy_r_r15)))
        cpy_r_r16 = CPyTagged_FromObject(cpy_r_r15);
    else {
        CPy_TypeError("int", cpy_r_r15); cpy_r_r16 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 263, CPyStatic_reachability___globals);
        goto CPyL56;
    }
    return cpy_r_r16;
CPyL10: ;
    cpy_r_r17 = CPyStatics[863]; /* '!=' */
    cpy_r_r18 = PyUnicode_Compare(cpy_r_op, cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 == -1;
    if (!cpy_r_r19) goto CPyL13;
    cpy_r_r20 = PyErr_Occurred();
    cpy_r_r21 = cpy_r_r20 != NULL;
    if (!cpy_r_r21) goto CPyL13;
    cpy_r_r22 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 264, CPyStatic_reachability___globals);
        goto CPyL57;
    }
CPyL13: ;
    cpy_r_r23 = cpy_r_r18 == 0;
    if (!cpy_r_r23) goto CPyL19;
    cpy_r_r24 = PyObject_RichCompare(cpy_r_left, cpy_r_right, 3);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 265, CPyStatic_reachability___globals);
        goto CPyL57;
    }
    if (unlikely(!PyBool_Check(cpy_r_r24))) {
        CPy_TypeError("bool", cpy_r_r24); cpy_r_r25 = 2;
    } else
        cpy_r_r25 = cpy_r_r24 == Py_True;
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 265, CPyStatic_reachability___globals);
        goto CPyL57;
    }
    cpy_r_r26 = cpy_r_r25 ? Py_True : Py_False;
    cpy_r_r27 = CPyDict_GetItem(cpy_r_rmap, cpy_r_r26);
    CPy_DECREF(cpy_r_rmap);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 265, CPyStatic_reachability___globals);
        goto CPyL56;
    }
    if (likely(PyLong_Check(cpy_r_r27)))
        cpy_r_r28 = CPyTagged_FromObject(cpy_r_r27);
    else {
        CPy_TypeError("int", cpy_r_r27); cpy_r_r28 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 265, CPyStatic_reachability___globals);
        goto CPyL56;
    }
    return cpy_r_r28;
CPyL19: ;
    cpy_r_r29 = CPyStatics[2470]; /* '<=' */
    cpy_r_r30 = PyUnicode_Compare(cpy_r_op, cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 == -1;
    if (!cpy_r_r31) goto CPyL22;
    cpy_r_r32 = PyErr_Occurred();
    cpy_r_r33 = cpy_r_r32 != NULL;
    if (!cpy_r_r33) goto CPyL22;
    cpy_r_r34 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 266, CPyStatic_reachability___globals);
        goto CPyL57;
    }
CPyL22: ;
    cpy_r_r35 = cpy_r_r30 == 0;
    if (!cpy_r_r35) goto CPyL28;
    cpy_r_r36 = PyObject_RichCompare(cpy_r_left, cpy_r_right, 1);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 267, CPyStatic_reachability___globals);
        goto CPyL57;
    }
    if (unlikely(!PyBool_Check(cpy_r_r36))) {
        CPy_TypeError("bool", cpy_r_r36); cpy_r_r37 = 2;
    } else
        cpy_r_r37 = cpy_r_r36 == Py_True;
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 267, CPyStatic_reachability___globals);
        goto CPyL57;
    }
    cpy_r_r38 = cpy_r_r37 ? Py_True : Py_False;
    cpy_r_r39 = CPyDict_GetItem(cpy_r_rmap, cpy_r_r38);
    CPy_DECREF(cpy_r_rmap);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 267, CPyStatic_reachability___globals);
        goto CPyL56;
    }
    if (likely(PyLong_Check(cpy_r_r39)))
        cpy_r_r40 = CPyTagged_FromObject(cpy_r_r39);
    else {
        CPy_TypeError("int", cpy_r_r39); cpy_r_r40 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 267, CPyStatic_reachability___globals);
        goto CPyL56;
    }
    return cpy_r_r40;
CPyL28: ;
    cpy_r_r41 = CPyStatics[2468]; /* '>=' */
    cpy_r_r42 = PyUnicode_Compare(cpy_r_op, cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 == -1;
    if (!cpy_r_r43) goto CPyL31;
    cpy_r_r44 = PyErr_Occurred();
    cpy_r_r45 = cpy_r_r44 != NULL;
    if (!cpy_r_r45) goto CPyL31;
    cpy_r_r46 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 268, CPyStatic_reachability___globals);
        goto CPyL57;
    }
CPyL31: ;
    cpy_r_r47 = cpy_r_r42 == 0;
    if (!cpy_r_r47) goto CPyL37;
    cpy_r_r48 = PyObject_RichCompare(cpy_r_left, cpy_r_right, 5);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 269, CPyStatic_reachability___globals);
        goto CPyL57;
    }
    if (unlikely(!PyBool_Check(cpy_r_r48))) {
        CPy_TypeError("bool", cpy_r_r48); cpy_r_r49 = 2;
    } else
        cpy_r_r49 = cpy_r_r48 == Py_True;
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 269, CPyStatic_reachability___globals);
        goto CPyL57;
    }
    cpy_r_r50 = cpy_r_r49 ? Py_True : Py_False;
    cpy_r_r51 = CPyDict_GetItem(cpy_r_rmap, cpy_r_r50);
    CPy_DECREF(cpy_r_rmap);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 269, CPyStatic_reachability___globals);
        goto CPyL56;
    }
    if (likely(PyLong_Check(cpy_r_r51)))
        cpy_r_r52 = CPyTagged_FromObject(cpy_r_r51);
    else {
        CPy_TypeError("int", cpy_r_r51); cpy_r_r52 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 269, CPyStatic_reachability___globals);
        goto CPyL56;
    }
    return cpy_r_r52;
CPyL37: ;
    cpy_r_r53 = CPyStatics[2465]; /* '<' */
    cpy_r_r54 = PyUnicode_Compare(cpy_r_op, cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 == -1;
    if (!cpy_r_r55) goto CPyL40;
    cpy_r_r56 = PyErr_Occurred();
    cpy_r_r57 = cpy_r_r56 != NULL;
    if (!cpy_r_r57) goto CPyL40;
    cpy_r_r58 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 270, CPyStatic_reachability___globals);
        goto CPyL57;
    }
CPyL40: ;
    cpy_r_r59 = cpy_r_r54 == 0;
    if (!cpy_r_r59) goto CPyL46;
    cpy_r_r60 = PyObject_RichCompare(cpy_r_left, cpy_r_right, 0);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 271, CPyStatic_reachability___globals);
        goto CPyL57;
    }
    if (unlikely(!PyBool_Check(cpy_r_r60))) {
        CPy_TypeError("bool", cpy_r_r60); cpy_r_r61 = 2;
    } else
        cpy_r_r61 = cpy_r_r60 == Py_True;
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 271, CPyStatic_reachability___globals);
        goto CPyL57;
    }
    cpy_r_r62 = cpy_r_r61 ? Py_True : Py_False;
    cpy_r_r63 = CPyDict_GetItem(cpy_r_rmap, cpy_r_r62);
    CPy_DECREF(cpy_r_rmap);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 271, CPyStatic_reachability___globals);
        goto CPyL56;
    }
    if (likely(PyLong_Check(cpy_r_r63)))
        cpy_r_r64 = CPyTagged_FromObject(cpy_r_r63);
    else {
        CPy_TypeError("int", cpy_r_r63); cpy_r_r64 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 271, CPyStatic_reachability___globals);
        goto CPyL56;
    }
    return cpy_r_r64;
CPyL46: ;
    cpy_r_r65 = CPyStatics[840]; /* '>' */
    cpy_r_r66 = PyUnicode_Compare(cpy_r_op, cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 == -1;
    if (!cpy_r_r67) goto CPyL49;
    cpy_r_r68 = PyErr_Occurred();
    cpy_r_r69 = cpy_r_r68 != NULL;
    if (!cpy_r_r69) goto CPyL49;
    cpy_r_r70 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 272, CPyStatic_reachability___globals);
        goto CPyL57;
    }
CPyL49: ;
    cpy_r_r71 = cpy_r_r66 == 0;
    if (!cpy_r_r71) goto CPyL58;
    cpy_r_r72 = PyObject_RichCompare(cpy_r_left, cpy_r_right, 4);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 273, CPyStatic_reachability___globals);
        goto CPyL57;
    }
    if (unlikely(!PyBool_Check(cpy_r_r72))) {
        CPy_TypeError("bool", cpy_r_r72); cpy_r_r73 = 2;
    } else
        cpy_r_r73 = cpy_r_r72 == Py_True;
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 273, CPyStatic_reachability___globals);
        goto CPyL57;
    }
    cpy_r_r74 = cpy_r_r73 ? Py_True : Py_False;
    cpy_r_r75 = CPyDict_GetItem(cpy_r_rmap, cpy_r_r74);
    CPy_DECREF(cpy_r_rmap);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 273, CPyStatic_reachability___globals);
        goto CPyL56;
    }
    if (likely(PyLong_Check(cpy_r_r75)))
        cpy_r_r76 = CPyTagged_FromObject(cpy_r_r75);
    else {
        CPy_TypeError("int", cpy_r_r75); cpy_r_r76 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 273, CPyStatic_reachability___globals);
        goto CPyL56;
    }
    return cpy_r_r76;
CPyL55: ;
    return 10;
CPyL56: ;
    cpy_r_r77 = CPY_INT_TAG;
    return cpy_r_r77;
CPyL57: ;
    CPy_DecRef(cpy_r_rmap);
    goto CPyL56;
CPyL58: ;
    CPy_DECREF(cpy_r_rmap);
    goto CPyL55;
}

PyObject *CPyPy_reachability___fixed_comparison(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"left", "op", "right", 0};
    static CPyArg_Parser parser = {"OOO:fixed_comparison", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_op;
    PyObject *obj_right;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_left, &obj_op, &obj_right)) {
        return NULL;
    }
    PyObject *arg_left = obj_left;
    PyObject *arg_op;
    if (likely(PyUnicode_Check(obj_op)))
        arg_op = obj_op;
    else {
        CPy_TypeError("str", obj_op); 
        goto fail;
    }
    PyObject *arg_right = obj_right;
    CPyTagged retval = CPyDef_reachability___fixed_comparison(arg_left, arg_op, arg_right);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "fixed_comparison", 260, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___contains_int_or_tuple_of_ints(PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_thing;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    cpy_r_r0 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL3;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IntExpr))
        cpy_r_r4 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_int_or_tuple_of_ints", 279, CPyStatic_reachability___globals, "mypy.nodes.IntExpr", cpy_r_expr);
        goto CPyL20;
    }
    cpy_r_r5 = ((mypy___nodes___IntExprObject *)cpy_r_r4)->_value;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyTagged_StealAsObject(cpy_r_r5);
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL19;
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___TupleExpr))
        cpy_r_r11 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_int_or_tuple_of_ints", 281, CPyStatic_reachability___globals, "mypy.nodes.TupleExpr", cpy_r_expr);
        goto CPyL20;
    }
    cpy_r_r12 = CPyDef_mypy___literals___literal(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/reachability.py", "contains_int_or_tuple_of_ints", 281, CPyStatic_reachability___globals);
        goto CPyL20;
    }
    cpy_r_r13 = cpy_r_r12 == 4;
    CPyTagged_DECREF(cpy_r_r12);
    if (!cpy_r_r13) goto CPyL19;
    cpy_r_r14 = PyList_New(0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "contains_int_or_tuple_of_ints", 282, CPyStatic_reachability___globals);
        goto CPyL20;
    }
    cpy_r_thing = cpy_r_r14;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___TupleExpr))
        cpy_r_r15 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_int_or_tuple_of_ints", 283, CPyStatic_reachability___globals, "mypy.nodes.TupleExpr", cpy_r_expr);
        goto CPyL21;
    }
    cpy_r_r16 = ((mypy___nodes___TupleExprObject *)cpy_r_r15)->_items;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = 0;
CPyL10: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL22;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r17);
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_nodes___Expression)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_int_or_tuple_of_ints", 283, CPyStatic_reachability___globals, "mypy.nodes.Expression", cpy_r_r22);
        goto CPyL23;
    }
    cpy_r_x = cpy_r_r23;
    cpy_r_r24 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_x)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (cpy_r_r27) {
        goto CPyL14;
    } else
        goto CPyL24;
CPyL13: ;
    cpy_r_r28 = Py_None;
    CPy_INCREF(cpy_r_r28);
    return cpy_r_r28;
CPyL14: ;
    if (likely(Py_TYPE(cpy_r_x) == CPyType_nodes___IntExpr))
        cpy_r_r29 = cpy_r_x;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_int_or_tuple_of_ints", 286, CPyStatic_reachability___globals, "mypy.nodes.IntExpr", cpy_r_x);
        goto CPyL25;
    }
    cpy_r_r30 = ((mypy___nodes___IntExprObject *)cpy_r_r29)->_value;
    CPyTagged_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_x);
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_r30);
    cpy_r_r32 = PyList_Append(cpy_r_thing, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/reachability.py", "contains_int_or_tuple_of_ints", 286, CPyStatic_reachability___globals);
        goto CPyL23;
    }
    cpy_r_r34 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r34;
    goto CPyL10;
CPyL17: ;
    cpy_r_r35 = PyList_AsTuple(cpy_r_thing);
    CPy_DECREF(cpy_r_thing);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "contains_int_or_tuple_of_ints", 287, CPyStatic_reachability___globals);
        goto CPyL20;
    }
    return cpy_r_r35;
CPyL19: ;
    cpy_r_r36 = Py_None;
    CPy_INCREF(cpy_r_r36);
    return cpy_r_r36;
CPyL20: ;
    cpy_r_r37 = NULL;
    return cpy_r_r37;
CPyL21: ;
    CPy_DecRef(cpy_r_thing);
    goto CPyL20;
CPyL22: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL17;
CPyL23: ;
    CPy_DecRef(cpy_r_thing);
    CPy_DecRef(cpy_r_r16);
    goto CPyL20;
CPyL24: ;
    CPy_DECREF(cpy_r_thing);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_x);
    goto CPyL13;
CPyL25: ;
    CPy_DecRef(cpy_r_thing);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_x);
    goto CPyL20;
}

PyObject *CPyPy_reachability___contains_int_or_tuple_of_ints(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:contains_int_or_tuple_of_ints", kwlist, 0};
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
    PyObject *retval = CPyDef_reachability___contains_int_or_tuple_of_ints(arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "contains_int_or_tuple_of_ints", 277, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___contains_sys_version_info(PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    tuple_T2CC cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_index;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_begin;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_end;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyTagged cpy_r_r73;
    PyObject *cpy_r_r74;
    tuple_T2OO cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    cpy_r_r0 = CPyStatics[1562]; /* 'version_info' */
    cpy_r_r1 = CPyDef_reachability___is_sys_attr(cpy_r_expr, cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "contains_sys_version_info", 292, CPyStatic_reachability___globals);
        goto CPyL38;
    }
    if (!cpy_r_r1) goto CPyL3;
    cpy_r_r2.f0 = 1;
    cpy_r_r2.f1 = 1;
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4964 = Py_None;
    CPy_INCREF(__tmp4964);
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp4964);
    PyObject *__tmp4965 = Py_None;
    CPy_INCREF(__tmp4965);
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp4965);
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL37;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r8 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 294, CPyStatic_reachability___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL38;
    }
    cpy_r_r9 = ((mypy___nodes___IndexExprObject *)cpy_r_r8)->_base;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyStatics[1562]; /* 'version_info' */
    cpy_r_r11 = CPyDef_reachability___is_sys_attr(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "contains_sys_version_info", 294, CPyStatic_reachability___globals);
        goto CPyL38;
    }
    if (!cpy_r_r11) goto CPyL37;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r12 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 295, CPyStatic_reachability___globals, "mypy.nodes.IndexExpr", cpy_r_expr);
        goto CPyL38;
    }
    cpy_r_r13 = ((mypy___nodes___IndexExprObject *)cpy_r_r12)->_index;
    CPy_INCREF(cpy_r_r13);
    cpy_r_index = cpy_r_r13;
    cpy_r_r14 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_index)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL11;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___IntExpr))
        cpy_r_r18 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 297, CPyStatic_reachability___globals, "mypy.nodes.IntExpr", cpy_r_index);
        goto CPyL39;
    }
    cpy_r_r19 = ((mypy___nodes___IntExprObject *)cpy_r_r18)->_value;
    CPyTagged_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_index);
    cpy_r_r20 = CPyTagged_StealAsObject(cpy_r_r19);
    return cpy_r_r20;
CPyL11: ;
    cpy_r_r21 = (PyObject *)CPyType_nodes___SliceExpr;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_index)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL40;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___SliceExpr))
        cpy_r_r25 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 299, CPyStatic_reachability___globals, "mypy.nodes.SliceExpr", cpy_r_index);
        goto CPyL39;
    }
    cpy_r_r26 = ((mypy___nodes___SliceExprObject *)cpy_r_r25)->_stride;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_r26 != cpy_r_r27;
    if (!cpy_r_r28) goto CPyL20;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___SliceExpr))
        cpy_r_r29 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 300, CPyStatic_reachability___globals, "mypy.nodes.SliceExpr", cpy_r_index);
        goto CPyL39;
    }
    cpy_r_r30 = ((mypy___nodes___SliceExprObject *)cpy_r_r29)->_stride;
    cpy_r_r31 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL41;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___SliceExpr))
        cpy_r_r35 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 300, CPyStatic_reachability___globals, "mypy.nodes.SliceExpr", cpy_r_index);
        goto CPyL39;
    }
    cpy_r_r36 = ((mypy___nodes___SliceExprObject *)cpy_r_r35)->_stride;
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_nodes___IntExpr))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 300, CPyStatic_reachability___globals, "mypy.nodes.IntExpr", cpy_r_r36);
        goto CPyL39;
    }
    cpy_r_r38 = ((mypy___nodes___IntExprObject *)cpy_r_r37)->_value;
    cpy_r_r39 = cpy_r_r38 != 2;
    if (cpy_r_r39) {
        goto CPyL41;
    } else
        goto CPyL20;
CPyL19: ;
    cpy_r_r40 = Py_None;
    CPy_INCREF(cpy_r_r40);
    return cpy_r_r40;
CPyL20: ;
    cpy_r_r41 = Py_None;
    CPy_INCREF(cpy_r_r41);
    cpy_r_begin = cpy_r_r41;
    cpy_r_r42 = Py_None;
    CPy_INCREF(cpy_r_r42);
    cpy_r_end = cpy_r_r42;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___SliceExpr))
        cpy_r_r43 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 303, CPyStatic_reachability___globals, "mypy.nodes.SliceExpr", cpy_r_index);
        goto CPyL42;
    }
    cpy_r_r44 = ((mypy___nodes___SliceExprObject *)cpy_r_r43)->_begin_index;
    cpy_r_r45 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r46 = cpy_r_r44 != cpy_r_r45;
    if (cpy_r_r46) {
        goto CPyL43;
    } else
        goto CPyL28;
CPyL22: ;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___SliceExpr))
        cpy_r_r47 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 304, CPyStatic_reachability___globals, "mypy.nodes.SliceExpr", cpy_r_index);
        goto CPyL44;
    }
    cpy_r_r48 = ((mypy___nodes___SliceExprObject *)cpy_r_r47)->_begin_index;
    cpy_r_r49 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_r48)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (cpy_r_r52) {
        goto CPyL25;
    } else
        goto CPyL45;
CPyL24: ;
    cpy_r_r53 = Py_None;
    CPy_INCREF(cpy_r_r53);
    return cpy_r_r53;
CPyL25: ;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___SliceExpr))
        cpy_r_r54 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 306, CPyStatic_reachability___globals, "mypy.nodes.SliceExpr", cpy_r_index);
        goto CPyL44;
    }
    cpy_r_r55 = ((mypy___nodes___SliceExprObject *)cpy_r_r54)->_begin_index;
    if (likely(Py_TYPE(cpy_r_r55) == CPyType_nodes___IntExpr))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 306, CPyStatic_reachability___globals, "mypy.nodes.IntExpr", cpy_r_r55);
        goto CPyL44;
    }
    cpy_r_r57 = ((mypy___nodes___IntExprObject *)cpy_r_r56)->_value;
    CPyTagged_INCREF(cpy_r_r57);
    cpy_r_r58 = CPyTagged_StealAsObject(cpy_r_r57);
    cpy_r_begin = cpy_r_r58;
CPyL28: ;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___SliceExpr))
        cpy_r_r59 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 307, CPyStatic_reachability___globals, "mypy.nodes.SliceExpr", cpy_r_index);
        goto CPyL42;
    }
    cpy_r_r60 = ((mypy___nodes___SliceExprObject *)cpy_r_r59)->_end_index;
    cpy_r_r61 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r62 = cpy_r_r60 != cpy_r_r61;
    if (cpy_r_r62) {
        goto CPyL46;
    } else
        goto CPyL47;
CPyL30: ;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___SliceExpr))
        cpy_r_r63 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 308, CPyStatic_reachability___globals, "mypy.nodes.SliceExpr", cpy_r_index);
        goto CPyL48;
    }
    cpy_r_r64 = ((mypy___nodes___SliceExprObject *)cpy_r_r63)->_end_index;
    cpy_r_r65 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_r64)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    if (cpy_r_r68) {
        goto CPyL33;
    } else
        goto CPyL49;
CPyL32: ;
    cpy_r_r69 = Py_None;
    CPy_INCREF(cpy_r_r69);
    return cpy_r_r69;
CPyL33: ;
    if (likely(Py_TYPE(cpy_r_index) == CPyType_nodes___SliceExpr))
        cpy_r_r70 = cpy_r_index;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 310, CPyStatic_reachability___globals, "mypy.nodes.SliceExpr", cpy_r_index);
        goto CPyL48;
    }
    cpy_r_r71 = ((mypy___nodes___SliceExprObject *)cpy_r_r70)->_end_index;
    if (likely(Py_TYPE(cpy_r_r71) == CPyType_nodes___IntExpr))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "contains_sys_version_info", 310, CPyStatic_reachability___globals, "mypy.nodes.IntExpr", cpy_r_r71);
        goto CPyL48;
    }
    cpy_r_r73 = ((mypy___nodes___IntExprObject *)cpy_r_r72)->_value;
    CPyTagged_INCREF(cpy_r_r73);
    CPy_DECREF(cpy_r_index);
    cpy_r_r74 = CPyTagged_StealAsObject(cpy_r_r73);
    cpy_r_end = cpy_r_r74;
CPyL36: ;
    cpy_r_r75.f0 = cpy_r_begin;
    cpy_r_r75.f1 = cpy_r_end;
    CPy_INCREF(cpy_r_r75.f0);
    CPy_INCREF(cpy_r_r75.f1);
    CPy_DECREF(cpy_r_begin);
    CPy_DECREF(cpy_r_end);
    cpy_r_r76 = PyTuple_New(2);
    if (unlikely(cpy_r_r76 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4966 = cpy_r_r75.f0;
    PyTuple_SET_ITEM(cpy_r_r76, 0, __tmp4966);
    PyObject *__tmp4967 = cpy_r_r75.f1;
    PyTuple_SET_ITEM(cpy_r_r76, 1, __tmp4967);
    return cpy_r_r76;
CPyL37: ;
    cpy_r_r77 = Py_None;
    CPy_INCREF(cpy_r_r77);
    return cpy_r_r77;
CPyL38: ;
    cpy_r_r78 = NULL;
    return cpy_r_r78;
CPyL39: ;
    CPy_DecRef(cpy_r_index);
    goto CPyL38;
CPyL40: ;
    CPy_DECREF(cpy_r_index);
    goto CPyL37;
CPyL41: ;
    CPy_DECREF(cpy_r_index);
    goto CPyL19;
CPyL42: ;
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_begin);
    CPy_DecRef(cpy_r_end);
    goto CPyL38;
CPyL43: ;
    CPy_DECREF(cpy_r_begin);
    goto CPyL22;
CPyL44: ;
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_end);
    goto CPyL38;
CPyL45: ;
    CPy_DECREF(cpy_r_index);
    CPy_DECREF(cpy_r_end);
    goto CPyL24;
CPyL46: ;
    CPy_DECREF(cpy_r_end);
    goto CPyL30;
CPyL47: ;
    CPy_DECREF(cpy_r_index);
    goto CPyL36;
CPyL48: ;
    CPy_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_begin);
    goto CPyL38;
CPyL49: ;
    CPy_DECREF(cpy_r_index);
    CPy_DECREF(cpy_r_begin);
    goto CPyL32;
}

PyObject *CPyPy_reachability___contains_sys_version_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:contains_sys_version_info", kwlist, 0};
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
    PyObject *retval = CPyDef_reachability___contains_sys_version_info(arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "contains_sys_version_info", 291, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___is_sys_attr(PyObject *cpy_r_expr, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL15;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr))
        cpy_r_r4 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "is_sys_attr", 319, CPyStatic_reachability___globals, "mypy.nodes.MemberExpr", cpy_r_expr);
        goto CPyL16;
    }
    cpy_r_r5 = ((mypy___nodes___MemberExprObject *)cpy_r_r4)->_name;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = PyUnicode_Compare(cpy_r_r5, cpy_r_name);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 == -1;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = PyErr_Occurred();
    cpy_r_r9 = cpy_r_r8 != NULL;
    if (!cpy_r_r9) goto CPyL5;
    cpy_r_r10 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/reachability.py", "is_sys_attr", 319, CPyStatic_reachability___globals);
        goto CPyL16;
    }
CPyL5: ;
    cpy_r_r11 = cpy_r_r6 == 0;
    if (!cpy_r_r11) goto CPyL15;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr))
        cpy_r_r12 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "is_sys_attr", 320, CPyStatic_reachability___globals, "mypy.nodes.MemberExpr", cpy_r_expr);
        goto CPyL16;
    }
    cpy_r_r13 = ((mypy___nodes___MemberExprObject *)cpy_r_r12)->_expr;
    cpy_r_r14 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_r13)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL15;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr))
        cpy_r_r18 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "is_sys_attr", 320, CPyStatic_reachability___globals, "mypy.nodes.MemberExpr", cpy_r_expr);
        goto CPyL16;
    }
    cpy_r_r19 = ((mypy___nodes___MemberExprObject *)cpy_r_r18)->_expr;
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_nodes___NameExpr))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/reachability.py", "is_sys_attr", 320, CPyStatic_reachability___globals, "mypy.nodes.NameExpr", cpy_r_r19);
        goto CPyL16;
    }
    cpy_r_r21 = ((mypy___nodes___NameExprObject *)cpy_r_r20)->_name;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[15]; /* 'sys' */
    cpy_r_r23 = PyUnicode_Compare(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r24 = cpy_r_r23 == -1;
    if (!cpy_r_r24) goto CPyL13;
    cpy_r_r25 = PyErr_Occurred();
    cpy_r_r26 = cpy_r_r25 != NULL;
    if (!cpy_r_r26) goto CPyL13;
    cpy_r_r27 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/reachability.py", "is_sys_attr", 320, CPyStatic_reachability___globals);
        goto CPyL16;
    }
CPyL13: ;
    cpy_r_r28 = cpy_r_r23 == 0;
    if (!cpy_r_r28) goto CPyL15;
    return 1;
CPyL15: ;
    return 0;
CPyL16: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
}

PyObject *CPyPy_reachability___is_sys_attr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", "name", 0};
    static CPyArg_Parser parser = {"OO:is_sys_attr", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_name)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char retval = CPyDef_reachability___is_sys_attr(arg_expr, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "is_sys_attr", 315, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___mark_block_unreachable(PyObject *cpy_r_block) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    ((mypy___nodes___BlockObject *)cpy_r_block)->_is_unreachable = 1;
    cpy_r_r1 = CPyDef_reachability___MarkImportsUnreachableVisitor();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "mark_block_unreachable", 329, CPyStatic_reachability___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_nodes___Block___accept(cpy_r_block, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "mark_block_unreachable", 329, CPyStatic_reachability___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
CPyL4: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL2;
}

PyObject *CPyPy_reachability___mark_block_unreachable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:mark_block_unreachable", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_nodes___Block))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_block); 
        goto fail;
    }
    char retval = CPyDef_reachability___mark_block_unreachable(arg_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "mark_block_unreachable", 327, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    ((mypy___nodes___ImportObject *)cpy_r_node)->_is_unreachable = 1;
    return 1;
}

PyObject *CPyPy_reachability___MarkImportsUnreachableVisitor___visit_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsUnreachableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsUnreachableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___Import))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_node); 
        goto fail;
    }
    char retval = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import", 335, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_reachability___MarkImportsUnreachableVisitor___visit_import__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsUnreachableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsUnreachableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    char retval = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import__TraverserVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_reachability___MarkImportsUnreachableVisitor___visit_import__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsUnreachableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsUnreachableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import__NodeVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_reachability___MarkImportsUnreachableVisitor___visit_import__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsUnreachableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsUnreachableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import__StatementVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    ((mypy___nodes___ImportFromObject *)cpy_r_node)->_is_unreachable = 1;
    return 1;
}

PyObject *CPyPy_reachability___MarkImportsUnreachableVisitor___visit_import_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import_from", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsUnreachableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsUnreachableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ImportFrom))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_node); 
        goto fail;
    }
    char retval = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import_from", 338, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_reachability___MarkImportsUnreachableVisitor___visit_import_from__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsUnreachableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsUnreachableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    char retval = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import_from__TraverserVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_reachability___MarkImportsUnreachableVisitor___visit_import_from__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsUnreachableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsUnreachableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import_from__NodeVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_reachability___MarkImportsUnreachableVisitor___visit_import_from__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsUnreachableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsUnreachableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_from__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import_from__StatementVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_all(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    ((mypy___nodes___ImportAllObject *)cpy_r_node)->_is_unreachable = 1;
    return 1;
}

PyObject *CPyPy_reachability___MarkImportsUnreachableVisitor___visit_import_all(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import_all", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsUnreachableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsUnreachableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ImportAll))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_node); 
        goto fail;
    }
    char retval = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_all(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import_all", 341, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_all__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_reachability___MarkImportsUnreachableVisitor___visit_import_all__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsUnreachableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsUnreachableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_all__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import_all__NodeVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_all__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_reachability___MarkImportsUnreachableVisitor___visit_import_all__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsUnreachableVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsUnreachableVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_reachability___MarkImportsUnreachableVisitor___visit_import_all__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import_all__StatementVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___mark_block_mypy_only(PyObject *cpy_r_block) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsMypyOnlyVisitor();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "mark_block_mypy_only", 346, CPyStatic_reachability___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_nodes___Block___accept(cpy_r_block, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "mark_block_mypy_only", 346, CPyStatic_reachability___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
CPyL4: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL2;
}

PyObject *CPyPy_reachability___mark_block_mypy_only(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:mark_block_mypy_only", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_nodes___Block))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_block); 
        goto fail;
    }
    char retval = CPyDef_reachability___mark_block_mypy_only(arg_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "mark_block_mypy_only", 345, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    ((mypy___nodes___ImportObject *)cpy_r_node)->_is_mypy_only = 1;
    return 1;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___Import))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_node); 
        goto fail;
    }
    char retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import", 352, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_import__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    char retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import__TraverserVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_import__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import__NodeVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_import__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import__StatementVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    ((mypy___nodes___ImportFromObject *)cpy_r_node)->_is_mypy_only = 1;
    return 1;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_import_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import_from", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ImportFrom))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_node); 
        goto fail;
    }
    char retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import_from", 355, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_import_from__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    char retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import_from__TraverserVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_import_from__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import_from__NodeVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_import_from__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_from__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import_from__StatementVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_all(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    ((mypy___nodes___ImportAllObject *)cpy_r_node)->_is_mypy_only = 1;
    return 1;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_import_all(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import_all", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ImportAll))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_node); 
        goto fail;
    }
    char retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_all(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import_all", 358, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_all__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_import_all__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_all__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import_all__NodeVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_all__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_import_all__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_import_all__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_import_all__StatementVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    char cpy_r_r1;
    ((mypy___nodes___FuncDefObject *)cpy_r_node)->_is_mypy_only = 1;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/reachability.py", "visit_func_def", 362, CPyStatic_reachability___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___FuncDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_node); 
        goto fail;
    }
    char retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_func_def", 361, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_func_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_func_def__TraverserVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

PyObject *CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_reachability___MarkImportsMypyOnlyVisitor___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_reachability___MarkImportsMypyOnlyVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.reachability.MarkImportsMypyOnlyVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_reachability___MarkImportsMypyOnlyVisitor___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/reachability.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_reachability___globals);
    return NULL;
}

char CPyDef_reachability_____top_level__(void) {
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
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
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
    int32_t cpy_r_r71;
    char cpy_r_r72;
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
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    tuple_T2OO cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject **cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    int32_t cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    int32_t cpy_r_r139;
    char cpy_r_r140;
    char cpy_r_r141;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", -1, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_reachability___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 3, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9636]; /* ('Final', 'Tuple', 'TypeVar') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_reachability___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 5, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9229]; /* ('literal',) */
    cpy_r_r14 = CPyStatics[97]; /* 'mypy.literals' */
    cpy_r_r15 = CPyStatic_reachability___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 7, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    CPyModule_mypy___literals = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___literals);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9637]; /* ('LITERAL_YES', 'AssertStmt', 'Block', 'CallExpr',
                                     'ComparisonExpr', 'Expression', 'FuncDef', 'IfStmt',
                                     'Import', 'ImportAll', 'ImportFrom', 'IndexExpr',
                                     'IntExpr', 'MatchStmt', 'MemberExpr', 'NameExpr',
                                     'OpExpr', 'SliceExpr', 'StrExpr', 'TupleExpr',
                                     'UnaryExpr') */
    cpy_r_r18 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r19 = CPyStatic_reachability___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 8, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    CPyModule_mypy___nodes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r22 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r23 = CPyStatic_reachability___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 31, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    CPyModule_mypy___options = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9638]; /* ('AsPattern', 'OrPattern', 'Pattern') */
    cpy_r_r26 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r27 = CPyStatic_reachability___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 32, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    CPyModule_mypy___patterns = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___patterns);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r30 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r31 = CPyStatic_reachability___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 33, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    CPyModule_mypy___traverser = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatic_reachability___globals;
    cpy_r_r34 = CPyStatics[4318]; /* 'ALWAYS_TRUE' */
    cpy_r_r35 = CPyStatics[9016]; /* 1 */
    cpy_r_r36 = CPyDict_SetItem(cpy_r_r33, cpy_r_r34, cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 36, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r38 = CPyStatic_reachability___globals;
    cpy_r_r39 = CPyStatics[4650]; /* 'MYPY_TRUE' */
    cpy_r_r40 = CPyStatics[9018]; /* 2 */
    cpy_r_r41 = CPyDict_SetItem(cpy_r_r38, cpy_r_r39, cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 37, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r43 = CPyStatic_reachability___globals;
    cpy_r_r44 = CPyStatics[4651]; /* 'ALWAYS_FALSE' */
    cpy_r_r45 = CPyStatics[9026]; /* 3 */
    cpy_r_r46 = CPyDict_SetItem(cpy_r_r43, cpy_r_r44, cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 38, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r48 = CPyStatic_reachability___globals;
    cpy_r_r49 = CPyStatics[4652]; /* 'MYPY_FALSE' */
    cpy_r_r50 = CPyStatics[9025]; /* 4 */
    cpy_r_r51 = CPyDict_SetItem(cpy_r_r48, cpy_r_r49, cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 39, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r53 = CPyStatic_reachability___globals;
    cpy_r_r54 = CPyStatics[4653]; /* 'TRUTH_VALUE_UNKNOWN' */
    cpy_r_r55 = CPyStatics[9021]; /* 5 */
    cpy_r_r56 = CPyDict_SetItem(cpy_r_r53, cpy_r_r54, cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 40, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r58 = CPyStatics[9016]; /* 1 */
    cpy_r_r59 = CPyStatics[9026]; /* 3 */
    cpy_r_r60 = CPyStatics[9026]; /* 3 */
    cpy_r_r61 = CPyStatics[9016]; /* 1 */
    cpy_r_r62 = CPyStatics[9021]; /* 5 */
    cpy_r_r63 = CPyStatics[9021]; /* 5 */
    cpy_r_r64 = CPyStatics[9018]; /* 2 */
    cpy_r_r65 = CPyStatics[9025]; /* 4 */
    cpy_r_r66 = CPyStatics[9025]; /* 4 */
    cpy_r_r67 = CPyStatics[9018]; /* 2 */
    cpy_r_r68 = CPyDict_Build(5, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 42, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    CPyStatic_reachability___inverted_truth_mapping = cpy_r_r68;
    CPy_INCREF(CPyStatic_reachability___inverted_truth_mapping);
    cpy_r_r69 = CPyStatic_reachability___globals;
    cpy_r_r70 = CPyStatics[4654]; /* 'inverted_truth_mapping' */
    cpy_r_r71 = CPyDict_SetItem(cpy_r_r69, cpy_r_r70, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 42, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r73 = CPyStatics[860]; /* '==' */
    cpy_r_r74 = CPyStatics[860]; /* '==' */
    cpy_r_r75 = CPyStatics[863]; /* '!=' */
    cpy_r_r76 = CPyStatics[863]; /* '!=' */
    cpy_r_r77 = CPyStatics[2465]; /* '<' */
    cpy_r_r78 = CPyStatics[840]; /* '>' */
    cpy_r_r79 = CPyStatics[840]; /* '>' */
    cpy_r_r80 = CPyStatics[2465]; /* '<' */
    cpy_r_r81 = CPyStatics[2470]; /* '<=' */
    cpy_r_r82 = CPyStatics[2468]; /* '>=' */
    cpy_r_r83 = CPyStatics[2468]; /* '>=' */
    cpy_r_r84 = CPyStatics[2470]; /* '<=' */
    cpy_r_r85 = CPyDict_Build(6, cpy_r_r73, cpy_r_r74, cpy_r_r75, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 50, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    CPyStatic_reachability___reverse_op = cpy_r_r85;
    CPy_INCREF(CPyStatic_reachability___reverse_op);
    cpy_r_r86 = CPyStatic_reachability___globals;
    cpy_r_r87 = CPyStatics[4655]; /* 'reverse_op' */
    cpy_r_r88 = CPyDict_SetItem(cpy_r_r86, cpy_r_r87, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 50, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r90 = CPyStatics[4656]; /* 'Targ' */
    cpy_r_r91 = (PyObject *)&PyLong_Type;
    cpy_r_r92 = (PyObject *)&PyUnicode_Type;
    cpy_r_r93 = CPyStatic_reachability___globals;
    cpy_r_r94 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r95 = CPyDict_GetItem(cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 257, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r96 = (PyObject *)&PyLong_Type;
    cpy_r_r97 = (PyObject *)&_Py_EllipsisObject;
    cpy_r_r98.f0 = cpy_r_r96;
    cpy_r_r98.f1 = cpy_r_r97;
    CPy_INCREF(cpy_r_r98.f0);
    CPy_INCREF(cpy_r_r98.f1);
    cpy_r_r99 = PyTuple_New(2);
    if (unlikely(cpy_r_r99 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4968 = cpy_r_r98.f0;
    PyTuple_SET_ITEM(cpy_r_r99, 0, __tmp4968);
    PyObject *__tmp4969 = cpy_r_r98.f1;
    PyTuple_SET_ITEM(cpy_r_r99, 1, __tmp4969);
    cpy_r_r100 = PyObject_GetItem(cpy_r_r95, cpy_r_r99);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 257, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r101 = CPyStatic_reachability___globals;
    cpy_r_r102 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r103 = CPyDict_GetItem(cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 257, CPyStatic_reachability___globals);
        goto CPyL38;
    }
    PyObject *cpy_r_r104[4] = {cpy_r_r90, cpy_r_r91, cpy_r_r92, cpy_r_r100};
    cpy_r_r105 = (PyObject **)&cpy_r_r104;
    cpy_r_r106 = _PyObject_Vectorcall(cpy_r_r103, cpy_r_r105, 4, 0);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 257, CPyStatic_reachability___globals);
        goto CPyL38;
    }
    CPy_DECREF(cpy_r_r100);
    cpy_r_r107 = CPyStatic_reachability___globals;
    cpy_r_r108 = CPyStatics[4656]; /* 'Targ' */
    cpy_r_r109 = CPyDict_SetItem(cpy_r_r107, cpy_r_r108, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 257, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r111 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r112 = PyTuple_Pack(1, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 332, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r113 = CPyStatics[2491]; /* 'mypy.reachability' */
    cpy_r_r114 = (PyObject *)CPyType_reachability___MarkImportsUnreachableVisitor_template;
    cpy_r_r115 = CPyType_FromTemplate(cpy_r_r114, cpy_r_r112, cpy_r_r113);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 332, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r116 = CPyDef_reachability___MarkImportsUnreachableVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r116 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", -1, CPyStatic_reachability___globals);
        goto CPyL39;
    }
    cpy_r_r117 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r118 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r119 = PyTuple_Pack(1, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 332, CPyStatic_reachability___globals);
        goto CPyL39;
    }
    cpy_r_r120 = PyObject_SetAttr(cpy_r_r115, cpy_r_r117, cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 332, CPyStatic_reachability___globals);
        goto CPyL39;
    }
    CPyType_reachability___MarkImportsUnreachableVisitor = (PyTypeObject *)cpy_r_r115;
    CPy_INCREF(CPyType_reachability___MarkImportsUnreachableVisitor);
    cpy_r_r122 = CPyStatic_reachability___globals;
    cpy_r_r123 = CPyStatics[4657]; /* 'MarkImportsUnreachableVisitor' */
    cpy_r_r124 = CPyDict_SetItem(cpy_r_r122, cpy_r_r123, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 332, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r126 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r127 = PyTuple_Pack(1, cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 349, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r128 = CPyStatics[2491]; /* 'mypy.reachability' */
    cpy_r_r129 = (PyObject *)CPyType_reachability___MarkImportsMypyOnlyVisitor_template;
    cpy_r_r130 = CPyType_FromTemplate(cpy_r_r129, cpy_r_r127, cpy_r_r128);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 349, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    cpy_r_r131 = CPyDef_reachability___MarkImportsMypyOnlyVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r131 == 2)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", -1, CPyStatic_reachability___globals);
        goto CPyL40;
    }
    cpy_r_r132 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r133 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r134 = PyTuple_Pack(1, cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 349, CPyStatic_reachability___globals);
        goto CPyL40;
    }
    cpy_r_r135 = PyObject_SetAttr(cpy_r_r130, cpy_r_r132, cpy_r_r134);
    CPy_DECREF(cpy_r_r134);
    cpy_r_r136 = cpy_r_r135 >= 0;
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 349, CPyStatic_reachability___globals);
        goto CPyL40;
    }
    CPyType_reachability___MarkImportsMypyOnlyVisitor = (PyTypeObject *)cpy_r_r130;
    CPy_INCREF(CPyType_reachability___MarkImportsMypyOnlyVisitor);
    cpy_r_r137 = CPyStatic_reachability___globals;
    cpy_r_r138 = CPyStatics[4658]; /* 'MarkImportsMypyOnlyVisitor' */
    cpy_r_r139 = CPyDict_SetItem(cpy_r_r137, cpy_r_r138, cpy_r_r130);
    CPy_DECREF(cpy_r_r130);
    cpy_r_r140 = cpy_r_r139 >= 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypy/reachability.py", "<module>", 349, CPyStatic_reachability___globals);
        goto CPyL37;
    }
    return 1;
CPyL37: ;
    cpy_r_r141 = 2;
    return cpy_r_r141;
CPyL38: ;
    CPy_DecRef(cpy_r_r100);
    goto CPyL37;
CPyL39: ;
    CPy_DecRef(cpy_r_r115);
    goto CPyL37;
CPyL40: ;
    CPy_DecRef(cpy_r_r130);
    goto CPyL37;
}
