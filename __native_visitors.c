#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
visitors___SkippedNodeSearcher_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef visitors___SkippedNodeSearcher_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___test___visitors___SkippedNodeSearcherObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___test___visitors___SkippedNodeSearcherObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *visitors___SkippedNodeSearcher_setup(PyTypeObject *type);
PyObject *CPyDef_visitors___SkippedNodeSearcher(void);

static PyObject *
visitors___SkippedNodeSearcher_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_visitors___SkippedNodeSearcher) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = visitors___SkippedNodeSearcher_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_visitors___SkippedNodeSearcher_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
visitors___SkippedNodeSearcher_traverse(mypy___test___visitors___SkippedNodeSearcherObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_nodes);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___test___visitors___SkippedNodeSearcherObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___test___visitors___SkippedNodeSearcherObject))));
    return 0;
}

static int
visitors___SkippedNodeSearcher_clear(mypy___test___visitors___SkippedNodeSearcherObject *self)
{
    Py_CLEAR(self->_nodes);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___test___visitors___SkippedNodeSearcherObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___test___visitors___SkippedNodeSearcherObject))));
    return 0;
}

static void
visitors___SkippedNodeSearcher_dealloc(mypy___test___visitors___SkippedNodeSearcherObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, visitors___SkippedNodeSearcher_dealloc)
    visitors___SkippedNodeSearcher_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem visitors___SkippedNodeSearcher_vtable[100];
static CPyVTableItem visitors___SkippedNodeSearcher_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t visitors___SkippedNodeSearcher_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem visitors___SkippedNodeSearcher_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t visitors___SkippedNodeSearcher_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem visitors___SkippedNodeSearcher_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t visitors___SkippedNodeSearcher_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem visitors___SkippedNodeSearcher_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t visitors___SkippedNodeSearcher_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_visitors___SkippedNodeSearcher_trait_vtable_setup(void)
{
    CPyVTableItem visitors___SkippedNodeSearcher_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
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
        (CPyVTableItem)CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_visitors___SkippedNodeSearcher___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_visitors___SkippedNodeSearcher___visit_name_expr__NodeVisitor_glue,
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
    memcpy(visitors___SkippedNodeSearcher_mypy___visitor___NodeVisitor_trait_vtable, visitors___SkippedNodeSearcher_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(visitors___SkippedNodeSearcher_mypy___visitor___NodeVisitor_trait_vtable));
    size_t visitors___SkippedNodeSearcher_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(visitors___SkippedNodeSearcher_mypy___visitor___NodeVisitor_offset_table, visitors___SkippedNodeSearcher_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(visitors___SkippedNodeSearcher_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem visitors___SkippedNodeSearcher_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_visitors___SkippedNodeSearcher___visit_int_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_visitors___SkippedNodeSearcher___visit_name_expr__ExpressionVisitor_glue,
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
    memcpy(visitors___SkippedNodeSearcher_mypy___visitor___ExpressionVisitor_trait_vtable, visitors___SkippedNodeSearcher_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(visitors___SkippedNodeSearcher_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t visitors___SkippedNodeSearcher_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(visitors___SkippedNodeSearcher_mypy___visitor___ExpressionVisitor_offset_table, visitors___SkippedNodeSearcher_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(visitors___SkippedNodeSearcher_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem visitors___SkippedNodeSearcher_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt__StatementVisitor_glue,
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
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_match_stmt__StatementVisitor_glue,
    };
    memcpy(visitors___SkippedNodeSearcher_mypy___visitor___StatementVisitor_trait_vtable, visitors___SkippedNodeSearcher_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(visitors___SkippedNodeSearcher_mypy___visitor___StatementVisitor_trait_vtable));
    size_t visitors___SkippedNodeSearcher_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(visitors___SkippedNodeSearcher_mypy___visitor___StatementVisitor_offset_table, visitors___SkippedNodeSearcher_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(visitors___SkippedNodeSearcher_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem visitors___SkippedNodeSearcher_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(visitors___SkippedNodeSearcher_mypy___visitor___PatternVisitor_trait_vtable, visitors___SkippedNodeSearcher_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(visitors___SkippedNodeSearcher_mypy___visitor___PatternVisitor_trait_vtable));
    size_t visitors___SkippedNodeSearcher_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(visitors___SkippedNodeSearcher_mypy___visitor___PatternVisitor_offset_table, visitors___SkippedNodeSearcher_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(visitors___SkippedNodeSearcher_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem visitors___SkippedNodeSearcher_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)visitors___SkippedNodeSearcher_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)visitors___SkippedNodeSearcher_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)visitors___SkippedNodeSearcher_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)visitors___SkippedNodeSearcher_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)visitors___SkippedNodeSearcher_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)visitors___SkippedNodeSearcher_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)visitors___SkippedNodeSearcher_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)visitors___SkippedNodeSearcher_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_visitors___SkippedNodeSearcher_____init__,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_visitors___SkippedNodeSearcher___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_visitors___SkippedNodeSearcher___visit_name_expr__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_visitors___SkippedNodeSearcher_____init__,
        (CPyVTableItem)CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_visitors___SkippedNodeSearcher___visit_name_expr,
        (CPyVTableItem)CPyDef_visitors___SkippedNodeSearcher___visit_int_expr,
    };
    memcpy(visitors___SkippedNodeSearcher_vtable, visitors___SkippedNodeSearcher_vtable_scratch, sizeof(visitors___SkippedNodeSearcher_vtable));
    return 1;
}

static PyObject *
visitors___SkippedNodeSearcher_get_nodes(mypy___test___visitors___SkippedNodeSearcherObject *self, void *closure);
static int
visitors___SkippedNodeSearcher_set_nodes(mypy___test___visitors___SkippedNodeSearcherObject *self, PyObject *value, void *closure);
static PyObject *
visitors___SkippedNodeSearcher_get_ignore_file(mypy___test___visitors___SkippedNodeSearcherObject *self, void *closure);
static int
visitors___SkippedNodeSearcher_set_ignore_file(mypy___test___visitors___SkippedNodeSearcherObject *self, PyObject *value, void *closure);

static PyGetSetDef visitors___SkippedNodeSearcher_getseters[] = {
    {"nodes",
     (getter)visitors___SkippedNodeSearcher_get_nodes, (setter)visitors___SkippedNodeSearcher_set_nodes,
     NULL, NULL},
    {"ignore_file",
     (getter)visitors___SkippedNodeSearcher_get_ignore_file, (setter)visitors___SkippedNodeSearcher_set_ignore_file,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef visitors___SkippedNodeSearcher_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_visitors___SkippedNodeSearcher_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_stmt",
     (PyCFunction)CPyPy_visitors___SkippedNodeSearcher___visit_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_name_expr",
     (PyCFunction)CPyPy_visitors___SkippedNodeSearcher___visit_name_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_int_expr",
     (PyCFunction)CPyPy_visitors___SkippedNodeSearcher___visit_int_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_visitors___SkippedNodeSearcher_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SkippedNodeSearcher",
    .tp_new = visitors___SkippedNodeSearcher_new,
    .tp_dealloc = (destructor)visitors___SkippedNodeSearcher_dealloc,
    .tp_traverse = (traverseproc)visitors___SkippedNodeSearcher_traverse,
    .tp_clear = (inquiry)visitors___SkippedNodeSearcher_clear,
    .tp_getset = visitors___SkippedNodeSearcher_getseters,
    .tp_methods = visitors___SkippedNodeSearcher_methods,
    .tp_init = visitors___SkippedNodeSearcher_init,
    .tp_members = visitors___SkippedNodeSearcher_members,
    .tp_basicsize = sizeof(mypy___test___visitors___SkippedNodeSearcherObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___test___visitors___SkippedNodeSearcherObject),
    .tp_weaklistoffset = sizeof(mypy___test___visitors___SkippedNodeSearcherObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_visitors___SkippedNodeSearcher_template = &CPyType_visitors___SkippedNodeSearcher_template_;

static PyObject *
visitors___SkippedNodeSearcher_setup(PyTypeObject *type)
{
    mypy___test___visitors___SkippedNodeSearcherObject *self;
    self = (mypy___test___visitors___SkippedNodeSearcherObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = visitors___SkippedNodeSearcher_vtable + 12;
    self->_ignore_file = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_visitors___SkippedNodeSearcher(void)
{
    PyObject *self = visitors___SkippedNodeSearcher_setup(CPyType_visitors___SkippedNodeSearcher);
    if (self == NULL)
        return NULL;
    char res = CPyDef_visitors___SkippedNodeSearcher_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
visitors___SkippedNodeSearcher_get_nodes(mypy___test___visitors___SkippedNodeSearcherObject *self, void *closure)
{
    if (unlikely(self->_nodes == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'nodes' of 'SkippedNodeSearcher' undefined");
        return NULL;
    }
    CPy_INCREF(self->_nodes);
    PyObject *retval = self->_nodes;
    return retval;
}

static int
visitors___SkippedNodeSearcher_set_nodes(mypy___test___visitors___SkippedNodeSearcherObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SkippedNodeSearcher' object attribute 'nodes' cannot be deleted");
        return -1;
    }
    if (self->_nodes != NULL) {
        CPy_DECREF(self->_nodes);
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
    self->_nodes = tmp;
    return 0;
}

static PyObject *
visitors___SkippedNodeSearcher_get_ignore_file(mypy___test___visitors___SkippedNodeSearcherObject *self, void *closure)
{
    if (unlikely(self->_ignore_file == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ignore_file' of 'SkippedNodeSearcher' undefined");
        return NULL;
    }
    PyObject *retval = self->_ignore_file ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
visitors___SkippedNodeSearcher_set_ignore_file(mypy___test___visitors___SkippedNodeSearcherObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SkippedNodeSearcher' object attribute 'ignore_file' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_ignore_file = tmp;
    return 0;
}

PyMemberDef visitors___TypeAssertTransformVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___test___visitors___TypeAssertTransformVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___test___visitors___TypeAssertTransformVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *visitors___TypeAssertTransformVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_visitors___TypeAssertTransformVisitor(void);

static PyObject *
visitors___TypeAssertTransformVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_visitors___TypeAssertTransformVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = visitors___TypeAssertTransformVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_treetransform___TransformVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
visitors___TypeAssertTransformVisitor_traverse(mypy___test___visitors___TypeAssertTransformVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_var_map);
    Py_VISIT(self->_func_placeholder_map);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___test___visitors___TypeAssertTransformVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___test___visitors___TypeAssertTransformVisitorObject))));
    return 0;
}

static int
visitors___TypeAssertTransformVisitor_clear(mypy___test___visitors___TypeAssertTransformVisitorObject *self)
{
    Py_CLEAR(self->_var_map);
    Py_CLEAR(self->_func_placeholder_map);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___test___visitors___TypeAssertTransformVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___test___visitors___TypeAssertTransformVisitorObject))));
    return 0;
}

static void
visitors___TypeAssertTransformVisitor_dealloc(mypy___test___visitors___TypeAssertTransformVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, visitors___TypeAssertTransformVisitor_dealloc)
    visitors___TypeAssertTransformVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem visitors___TypeAssertTransformVisitor_vtable[119];
static CPyVTableItem visitors___TypeAssertTransformVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t visitors___TypeAssertTransformVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem visitors___TypeAssertTransformVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t visitors___TypeAssertTransformVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem visitors___TypeAssertTransformVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t visitors___TypeAssertTransformVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem visitors___TypeAssertTransformVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t visitors___TypeAssertTransformVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_visitors___TypeAssertTransformVisitor_trait_vtable_setup(void)
{
    CPyVTableItem visitors___TypeAssertTransformVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_var__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_global_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_nonlocal_decl__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_block__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_expression_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_operator_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_while_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_for_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_return_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assert_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_del_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_if_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_break_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_continue_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_pass_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_raise_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_try_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_with_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_match_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_int_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_str_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_bytes_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_float_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_complex_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_ellipsis__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_star_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_name_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_member_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_yield_from_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_yield_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_op_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_comparison_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_cast_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assert_type_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_reveal_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_super_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assignment_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_unary_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_list_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_dict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_set_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_index_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_application__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_lambda_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_list_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_set_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_dictionary_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_generator_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_slice_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_conditional_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_var_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_paramspec_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_var_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_enum_call_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit__promote_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_await_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_temp_node__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_as_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_or_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_value_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_singleton_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_sequence_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_starred_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_mapping_pattern__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_class_pattern__NodeVisitor_glue,
    };
    memcpy(visitors___TypeAssertTransformVisitor_mypy___visitor___NodeVisitor_trait_vtable, visitors___TypeAssertTransformVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(visitors___TypeAssertTransformVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t visitors___TypeAssertTransformVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(visitors___TypeAssertTransformVisitor_mypy___visitor___NodeVisitor_offset_table, visitors___TypeAssertTransformVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(visitors___TypeAssertTransformVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem visitors___TypeAssertTransformVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_int_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_str_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_bytes_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_float_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_complex_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_ellipsis__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_star_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_name_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_member_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_yield_from_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_yield_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_op_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_comparison_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_application__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_lambda_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_list_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_set_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_generator_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_slice_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_conditional_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_var_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_paramspec_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_var_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_alias_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_namedtuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_enum_call_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_typeddict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_newtype_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit__promote_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_await_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_temp_node__ExpressionVisitor_glue,
    };
    memcpy(visitors___TypeAssertTransformVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, visitors___TypeAssertTransformVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(visitors___TypeAssertTransformVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t visitors___TypeAssertTransformVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(visitors___TypeAssertTransformVisitor_mypy___visitor___ExpressionVisitor_offset_table, visitors___TypeAssertTransformVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(visitors___TypeAssertTransformVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem visitors___TypeAssertTransformVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_global_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_nonlocal_decl__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import_all__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_block__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_expression_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_operator_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_while_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_return_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assert_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_if_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_break_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_continue_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_pass_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_raise_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_try_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_match_stmt__StatementVisitor_glue,
    };
    memcpy(visitors___TypeAssertTransformVisitor_mypy___visitor___StatementVisitor_trait_vtable, visitors___TypeAssertTransformVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(visitors___TypeAssertTransformVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t visitors___TypeAssertTransformVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(visitors___TypeAssertTransformVisitor_mypy___visitor___StatementVisitor_offset_table, visitors___TypeAssertTransformVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(visitors___TypeAssertTransformVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem visitors___TypeAssertTransformVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_singleton_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(visitors___TypeAssertTransformVisitor_mypy___visitor___PatternVisitor_trait_vtable, visitors___TypeAssertTransformVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(visitors___TypeAssertTransformVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t visitors___TypeAssertTransformVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(visitors___TypeAssertTransformVisitor_mypy___visitor___PatternVisitor_offset_table, visitors___TypeAssertTransformVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(visitors___TypeAssertTransformVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem visitors___TypeAssertTransformVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)visitors___TypeAssertTransformVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)visitors___TypeAssertTransformVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)visitors___TypeAssertTransformVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)visitors___TypeAssertTransformVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)visitors___TypeAssertTransformVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)visitors___TypeAssertTransformVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)visitors___TypeAssertTransformVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)visitors___TypeAssertTransformVisitor_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor_____init__,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import_from,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___copy_argument,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_lambda_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___copy_function_attributes,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_block,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_var,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___duplicate_assignment,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_as_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_or_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_value_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_starred_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_class_pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_star_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_int_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_str_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_bytes_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_float_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_complex_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_ellipsis,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_name_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___duplicate_name,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___copy_ref,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_await_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_reveal_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_super_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_assignment_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_unary_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_list_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_dict_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_tuple_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_set_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_index_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_list_comprehension,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_set_comprehension,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_dictionary_comprehension,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_generator_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___duplicate_generator,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_conditional_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___node,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___mypyfile,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___stmt,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___pattern,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___optional_expr,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___block,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___optional_block,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___statements,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___expressions,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___optional_expressions,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___blocks,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___names,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___optional_names,
        (CPyVTableItem)CPyDef_visitors___TypeAssertTransformVisitor___type,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___optional_type,
        (CPyVTableItem)CPyDef_treetransform___TransformVisitor___types,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_visitors___TypeAssertTransformVisitor___type,
    };
    memcpy(visitors___TypeAssertTransformVisitor_vtable, visitors___TypeAssertTransformVisitor_vtable_scratch, sizeof(visitors___TypeAssertTransformVisitor_vtable));
    return 1;
}


static PyGetSetDef visitors___TypeAssertTransformVisitor_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef visitors___TypeAssertTransformVisitor_methods[] = {
    {"type",
     (PyCFunction)CPyPy_visitors___TypeAssertTransformVisitor___type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_visitors___TypeAssertTransformVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeAssertTransformVisitor",
    .tp_new = visitors___TypeAssertTransformVisitor_new,
    .tp_dealloc = (destructor)visitors___TypeAssertTransformVisitor_dealloc,
    .tp_traverse = (traverseproc)visitors___TypeAssertTransformVisitor_traverse,
    .tp_clear = (inquiry)visitors___TypeAssertTransformVisitor_clear,
    .tp_getset = visitors___TypeAssertTransformVisitor_getseters,
    .tp_methods = visitors___TypeAssertTransformVisitor_methods,
    .tp_members = visitors___TypeAssertTransformVisitor_members,
    .tp_basicsize = sizeof(mypy___test___visitors___TypeAssertTransformVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___test___visitors___TypeAssertTransformVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___test___visitors___TypeAssertTransformVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_visitors___TypeAssertTransformVisitor_template = &CPyType_visitors___TypeAssertTransformVisitor_template_;

static PyObject *
visitors___TypeAssertTransformVisitor_setup(PyTypeObject *type)
{
    mypy___test___visitors___TypeAssertTransformVisitorObject *self;
    self = (mypy___test___visitors___TypeAssertTransformVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = visitors___TypeAssertTransformVisitor_vtable + 12;
    self->_test_only = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_visitors___TypeAssertTransformVisitor(void)
{
    PyObject *self = visitors___TypeAssertTransformVisitor_setup(CPyType_visitors___TypeAssertTransformVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_treetransform___TransformVisitor_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyMethodDef visitorsmodule_methods[] = {
    {"ignore_node", (PyCFunction)CPyPy_visitors___ignore_node, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef visitorsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.test.visitors",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    visitorsmodule_methods
};

PyObject *CPyInit_mypy___test___visitors(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___test___visitors_internal) {
        Py_INCREF(CPyModule_mypy___test___visitors_internal);
        return CPyModule_mypy___test___visitors_internal;
    }
    CPyModule_mypy___test___visitors_internal = PyModule_Create(&visitorsmodule);
    if (unlikely(CPyModule_mypy___test___visitors_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___test___visitors_internal, "__name__");
    CPyStatic_visitors___globals = PyModule_GetDict(CPyModule_mypy___test___visitors_internal);
    if (unlikely(CPyStatic_visitors___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_visitors_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___test___visitors_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___test___visitors_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_visitors___SkippedNodeSearcher);
    Py_CLEAR(CPyType_visitors___TypeAssertTransformVisitor);
    return NULL;
}

char CPyDef_visitors___SkippedNodeSearcher_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "__init__", 20, CPyStatic_visitors___globals);
        goto CPyL4;
    }
    if (((mypy___test___visitors___SkippedNodeSearcherObject *)cpy_r_self)->_nodes != NULL) {
        CPy_DECREF(((mypy___test___visitors___SkippedNodeSearcherObject *)cpy_r_self)->_nodes);
    }
    ((mypy___test___visitors___SkippedNodeSearcherObject *)cpy_r_self)->_nodes = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/test/visitors.py", "__init__", 20, CPyStatic_visitors___globals);
        goto CPyL4;
    }
    ((mypy___test___visitors___SkippedNodeSearcherObject *)cpy_r_self)->_ignore_file = 0;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/test/visitors.py", "__init__", 21, CPyStatic_visitors___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_visitors___SkippedNodeSearcher_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_visitors___SkippedNodeSearcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.test.visitors.SkippedNodeSearcher", obj_self); 
        goto fail;
    }
    char retval = CPyDef_visitors___SkippedNodeSearcher_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/test/visitors.py", "__init__", 19, CPyStatic_visitors___globals);
    return NULL;
}

char CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_lvalue;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_rvalue;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_visitors___ignore_node(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/test/visitors.py", "visit_assignment_stmt", 24, CPyStatic_visitors___globals);
        goto CPyL13;
    }
    if (!cpy_r_r4) goto CPyL11;
CPyL3: ;
    cpy_r_r5 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_s)->_lvalues;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = 0;
CPyL4: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL14;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_nodes___Expression)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/test/visitors.py", "visit_assignment_stmt", 25, CPyStatic_visitors___globals, "mypy.nodes.Expression", cpy_r_r11);
        goto CPyL15;
    }
    cpy_r_lvalue = cpy_r_r12;
    cpy_r_r13 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL16;
    cpy_r_r17 = ((mypy___test___visitors___SkippedNodeSearcherObject *)cpy_r_self)->_nodes;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/test/visitors.py", "visit_assignment_stmt", "SkippedNodeSearcher", "nodes", 27, CPyStatic_visitors___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r17);
CPyL8: ;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r18 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/test/visitors.py", "visit_assignment_stmt", 27, CPyStatic_visitors___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL18;
    }
    cpy_r_r19 = PySet_Add(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/test/visitors.py", "visit_assignment_stmt", 27, CPyStatic_visitors___globals);
        goto CPyL15;
    }
CPyL10: ;
    cpy_r_r21 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r21;
    goto CPyL4;
CPyL11: ;
    cpy_r_r22 = CPyDef_traverser___TraverserVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_s);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypy/test/visitors.py", "visit_assignment_stmt", 28, CPyStatic_visitors___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL14: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL13;
CPyL16: ;
    CPy_DECREF(cpy_r_lvalue);
    goto CPyL10;
CPyL17: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_lvalue);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r17);
    goto CPyL13;
}

PyObject *CPyPy_visitors___SkippedNodeSearcher___visit_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_visitors___SkippedNodeSearcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.test.visitors.SkippedNodeSearcher", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___AssignmentStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_s); 
        goto fail;
    }
    char retval = CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt(arg_self, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/test/visitors.py", "visit_assignment_stmt", 23, CPyStatic_visitors___globals);
    return NULL;
}

char CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_visitors___SkippedNodeSearcher___visit_assignment_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_visitors___SkippedNodeSearcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.test.visitors.SkippedNodeSearcher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/test/visitors.py", "visit_assignment_stmt__TraverserVisitor_glue", -1, CPyStatic_visitors___globals);
    return NULL;
}

PyObject *CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_visitors___SkippedNodeSearcher___visit_assignment_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_visitors___SkippedNodeSearcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.test.visitors.SkippedNodeSearcher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/test/visitors.py", "visit_assignment_stmt__NodeVisitor_glue", -1, CPyStatic_visitors___globals);
    return NULL;
}

PyObject *CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_visitors___SkippedNodeSearcher___visit_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_visitors___SkippedNodeSearcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.test.visitors.SkippedNodeSearcher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_visitors___SkippedNodeSearcher___visit_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/test/visitors.py", "visit_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_visitors___globals);
    return NULL;
}

char CPyDef_visitors___SkippedNodeSearcher___visit_name_expr(PyObject *cpy_r_self, PyObject *cpy_r_n) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypy___test___visitors___SkippedNodeSearcherObject *)cpy_r_self)->_ignore_file;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/test/visitors.py", "visit_name_expr", "SkippedNodeSearcher", "ignore_file", 31, CPyStatic_visitors___globals);
        goto CPyL6;
    }
CPyL1: ;
    if (!cpy_r_r0) goto CPyL4;
CPyL2: ;
    cpy_r_r1 = ((mypy___test___visitors___SkippedNodeSearcherObject *)cpy_r_self)->_nodes;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/test/visitors.py", "visit_name_expr", "SkippedNodeSearcher", "nodes", 32, CPyStatic_visitors___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r1);
CPyL3: ;
    cpy_r_r2 = PySet_Add(cpy_r_r1, cpy_r_n);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/test/visitors.py", "visit_name_expr", 32, CPyStatic_visitors___globals);
        goto CPyL6;
    }
CPyL4: ;
    cpy_r_r4 = CPyDef_mypy___visitor___NodeVisitor___visit_name_expr(cpy_r_self, cpy_r_n);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "visit_name_expr", 33, CPyStatic_visitors___globals);
        goto CPyL6;
    } else
        goto CPyL7;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
CPyL7: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL5;
}

PyObject *CPyPy_visitors___SkippedNodeSearcher___visit_name_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"n", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr", kwlist, 0};
    PyObject *obj_n;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_n)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_visitors___SkippedNodeSearcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.test.visitors.SkippedNodeSearcher", obj_self); 
        goto fail;
    }
    PyObject *arg_n;
    if (likely(Py_TYPE(obj_n) == CPyType_nodes___NameExpr))
        arg_n = obj_n;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_n); 
        goto fail;
    }
    char retval = CPyDef_visitors___SkippedNodeSearcher___visit_name_expr(arg_self, arg_n);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/test/visitors.py", "visit_name_expr", 30, CPyStatic_visitors___globals);
    return NULL;
}

PyObject *CPyDef_visitors___SkippedNodeSearcher___visit_name_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_visitors___SkippedNodeSearcher___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_visitors___SkippedNodeSearcher___visit_name_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_visitors___SkippedNodeSearcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.test.visitors.SkippedNodeSearcher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_visitors___SkippedNodeSearcher___visit_name_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/test/visitors.py", "visit_name_expr__NodeVisitor_glue", -1, CPyStatic_visitors___globals);
    return NULL;
}

PyObject *CPyDef_visitors___SkippedNodeSearcher___visit_name_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_visitors___SkippedNodeSearcher___visit_name_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_visitors___SkippedNodeSearcher___visit_name_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_name_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_visitors___SkippedNodeSearcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.test.visitors.SkippedNodeSearcher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NameExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_visitors___SkippedNodeSearcher___visit_name_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/test/visitors.py", "visit_name_expr__ExpressionVisitor_glue", -1, CPyStatic_visitors___globals);
    return NULL;
}

char CPyDef_visitors___SkippedNodeSearcher___visit_int_expr(PyObject *cpy_r_self, PyObject *cpy_r_n) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypy___test___visitors___SkippedNodeSearcherObject *)cpy_r_self)->_ignore_file;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/test/visitors.py", "visit_int_expr", "SkippedNodeSearcher", "ignore_file", 36, CPyStatic_visitors___globals);
        goto CPyL6;
    }
CPyL1: ;
    if (!cpy_r_r0) goto CPyL4;
CPyL2: ;
    cpy_r_r1 = ((mypy___test___visitors___SkippedNodeSearcherObject *)cpy_r_self)->_nodes;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/test/visitors.py", "visit_int_expr", "SkippedNodeSearcher", "nodes", 37, CPyStatic_visitors___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r1);
CPyL3: ;
    cpy_r_r2 = PySet_Add(cpy_r_r1, cpy_r_n);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/test/visitors.py", "visit_int_expr", 37, CPyStatic_visitors___globals);
        goto CPyL6;
    }
CPyL4: ;
    cpy_r_r4 = CPyDef_mypy___visitor___NodeVisitor___visit_int_expr(cpy_r_self, cpy_r_n);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "visit_int_expr", 38, CPyStatic_visitors___globals);
        goto CPyL6;
    } else
        goto CPyL7;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
CPyL7: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL5;
}

PyObject *CPyPy_visitors___SkippedNodeSearcher___visit_int_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"n", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr", kwlist, 0};
    PyObject *obj_n;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_n)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_visitors___SkippedNodeSearcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.test.visitors.SkippedNodeSearcher", obj_self); 
        goto fail;
    }
    PyObject *arg_n;
    if (likely(Py_TYPE(obj_n) == CPyType_nodes___IntExpr))
        arg_n = obj_n;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_n); 
        goto fail;
    }
    char retval = CPyDef_visitors___SkippedNodeSearcher___visit_int_expr(arg_self, arg_n);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/test/visitors.py", "visit_int_expr", 35, CPyStatic_visitors___globals);
    return NULL;
}

PyObject *CPyDef_visitors___SkippedNodeSearcher___visit_int_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_visitors___SkippedNodeSearcher___visit_int_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_visitors___SkippedNodeSearcher___visit_int_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_visitors___SkippedNodeSearcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.test.visitors.SkippedNodeSearcher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_visitors___SkippedNodeSearcher___visit_int_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/test/visitors.py", "visit_int_expr__NodeVisitor_glue", -1, CPyStatic_visitors___globals);
    return NULL;
}

PyObject *CPyDef_visitors___SkippedNodeSearcher___visit_int_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_visitors___SkippedNodeSearcher___visit_int_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_visitors___SkippedNodeSearcher___visit_int_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_int_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_visitors___SkippedNodeSearcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.test.visitors.SkippedNodeSearcher", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IntExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IntExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_visitors___SkippedNodeSearcher___visit_int_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/test/visitors.py", "visit_int_expr__ExpressionVisitor_glue", -1, CPyStatic_visitors___globals);
    return NULL;
}

char CPyDef_visitors___ignore_node(PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
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
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    cpy_r_r0 = (PyObject *)CPyType_nodes___TypeVarExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    return 1;
CPyL2: ;
    cpy_r_r4 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL10;
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___NameExpr))
        cpy_r_r8 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/test/visitors.py", "ignore_node", 49, CPyStatic_visitors___globals, "mypy.nodes.NameExpr", cpy_r_node);
        goto CPyL26;
    }
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_r8, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "ignore_node", 49, CPyStatic_visitors___globals);
        goto CPyL26;
    }
CPyL5: ;
    cpy_r_r10 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL8;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL8;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/test/visitors.py", "ignore_node", 49, CPyStatic_visitors___globals);
        goto CPyL26;
    }
CPyL8: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    if (!cpy_r_r16) goto CPyL10;
    return 1;
CPyL10: ;
    cpy_r_r17 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL18;
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___NameExpr))
        cpy_r_r21 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/test/visitors.py", "ignore_node", 51, CPyStatic_visitors___globals, "mypy.nodes.NameExpr", cpy_r_node);
        goto CPyL26;
    }
    cpy_r_r22 = CPY_GET_ATTR(cpy_r_r21, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "ignore_node", 51, CPyStatic_visitors___globals);
        goto CPyL26;
    }
CPyL13: ;
    cpy_r_r23 = CPyStatics[743]; /* 'builtins.None' */
    cpy_r_r24 = PyUnicode_Compare(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r25 = cpy_r_r24 == -1;
    if (!cpy_r_r25) goto CPyL16;
    cpy_r_r26 = PyErr_Occurred();
    cpy_r_r27 = cpy_r_r26 != NULL;
    if (!cpy_r_r27) goto CPyL16;
    cpy_r_r28 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/test/visitors.py", "ignore_node", 51, CPyStatic_visitors___globals);
        goto CPyL26;
    }
CPyL16: ;
    cpy_r_r29 = cpy_r_r24 == 0;
    if (!cpy_r_r29) goto CPyL18;
    return 1;
CPyL18: ;
    cpy_r_r30 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r31 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r32 = *(PyObject * *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 == cpy_r_r30;
    if (!cpy_r_r33) goto CPyL25;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r34 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/test/visitors.py", "ignore_node", 53, CPyStatic_visitors___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL26;
    }
    cpy_r_r35 = ((mypy___nodes___CallExprObject *)cpy_r_r34)->_callee;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyDef_visitors___ignore_node(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/test/visitors.py", "ignore_node", 53, CPyStatic_visitors___globals);
        goto CPyL26;
    }
    if (cpy_r_r36) goto CPyL24;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r37 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/test/visitors.py", "ignore_node", 53, CPyStatic_visitors___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL26;
    }
    cpy_r_r38 = ((mypy___nodes___CallExprObject *)cpy_r_r37)->_analyzed;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r40 = cpy_r_r38 != cpy_r_r39;
    CPy_DECREF(cpy_r_r38);
    if (!cpy_r_r40) goto CPyL25;
CPyL24: ;
    return 1;
CPyL25: ;
    return 0;
CPyL26: ;
    cpy_r_r41 = 2;
    return cpy_r_r41;
}

PyObject *CPyPy_visitors___ignore_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:ignore_node", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_node;
    if (likely(PyObject_TypeCheck(obj_node, CPyType_nodes___Expression)))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_node); 
        goto fail;
    }
    char retval = CPyDef_visitors___ignore_node(arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/test/visitors.py", "ignore_node", 41, CPyStatic_visitors___globals);
    return NULL;
}

PyObject *CPyDef_visitors___TypeAssertTransformVisitor___type(PyObject *cpy_r_self, PyObject *cpy_r_type) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_type != cpy_r_r0;
    if (cpy_r_r1) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/test/visitors.py", "type", 62, CPyStatic_visitors___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL3: ;
    CPy_INCREF(cpy_r_type);
    return cpy_r_type;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_visitors___TypeAssertTransformVisitor___type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"type", 0};
    static CPyArg_Parser parser = {"O:type", kwlist, 0};
    PyObject *obj_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_visitors___TypeAssertTransformVisitor))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.test.visitors.TypeAssertTransformVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_types___Type)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_type); 
        goto fail;
    }
    PyObject *retval = CPyDef_visitors___TypeAssertTransformVisitor___type(arg_self, arg_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/test/visitors.py", "type", 61, CPyStatic_visitors___globals);
    return NULL;
}

char CPyDef_visitors_____top_level__(void) {
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
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", -1, CPyStatic_visitors___globals);
        goto CPyL21;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_visitors___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 9, CPyStatic_visitors___globals);
        goto CPyL21;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9841]; /* ('AssignmentStmt', 'CallExpr', 'Expression', 'IntExpr',
                                    'NameExpr', 'Node', 'TypeVarExpr') */
    cpy_r_r10 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r11 = CPyStatic_visitors___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 11, CPyStatic_visitors___globals);
        goto CPyL21;
    }
    CPyModule_mypy___nodes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r14 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r15 = CPyStatic_visitors___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 12, CPyStatic_visitors___globals);
        goto CPyL21;
    }
    CPyModule_mypy___traverser = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9204]; /* ('TransformVisitor',) */
    cpy_r_r18 = CPyStatics[1031]; /* 'mypy.treetransform' */
    cpy_r_r19 = CPyStatic_visitors___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 13, CPyStatic_visitors___globals);
        goto CPyL21;
    }
    CPyModule_mypy___treetransform = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___treetransform);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9157]; /* ('Type',) */
    cpy_r_r22 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r23 = CPyStatic_visitors___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 14, CPyStatic_visitors___globals);
        goto CPyL21;
    }
    CPyModule_mypy___types = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r26 = PyTuple_Pack(1, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 18, CPyStatic_visitors___globals);
        goto CPyL21;
    }
    cpy_r_r27 = CPyStatics[6106]; /* 'mypy.test.visitors' */
    cpy_r_r28 = (PyObject *)CPyType_visitors___SkippedNodeSearcher_template;
    cpy_r_r29 = CPyType_FromTemplate(cpy_r_r28, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 18, CPyStatic_visitors___globals);
        goto CPyL21;
    }
    cpy_r_r30 = CPyDef_visitors___SkippedNodeSearcher_trait_vtable_setup();
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", -1, CPyStatic_visitors___globals);
        goto CPyL22;
    }
    cpy_r_r31 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r32 = CPyStatics[59]; /* 'nodes' */
    cpy_r_r33 = CPyStatics[6107]; /* 'ignore_file' */
    cpy_r_r34 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r35 = PyTuple_Pack(3, cpy_r_r32, cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 18, CPyStatic_visitors___globals);
        goto CPyL22;
    }
    cpy_r_r36 = PyObject_SetAttr(cpy_r_r29, cpy_r_r31, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 18, CPyStatic_visitors___globals);
        goto CPyL22;
    }
    CPyType_visitors___SkippedNodeSearcher = (PyTypeObject *)cpy_r_r29;
    CPy_INCREF(CPyType_visitors___SkippedNodeSearcher);
    cpy_r_r38 = CPyStatic_visitors___globals;
    cpy_r_r39 = CPyStatics[6108]; /* 'SkippedNodeSearcher' */
    cpy_r_r40 = CPyDict_SetItem(cpy_r_r38, cpy_r_r39, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 18, CPyStatic_visitors___globals);
        goto CPyL21;
    }
    cpy_r_r42 = (PyObject *)CPyType_treetransform___TransformVisitor;
    cpy_r_r43 = PyTuple_Pack(1, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 60, CPyStatic_visitors___globals);
        goto CPyL21;
    }
    cpy_r_r44 = CPyStatics[6106]; /* 'mypy.test.visitors' */
    cpy_r_r45 = (PyObject *)CPyType_visitors___TypeAssertTransformVisitor_template;
    cpy_r_r46 = CPyType_FromTemplate(cpy_r_r45, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 60, CPyStatic_visitors___globals);
        goto CPyL21;
    }
    cpy_r_r47 = CPyDef_visitors___TypeAssertTransformVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", -1, CPyStatic_visitors___globals);
        goto CPyL23;
    }
    cpy_r_r48 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r49 = CPyStatics[1127]; /* 'test_only' */
    cpy_r_r50 = CPyStatics[1128]; /* 'var_map' */
    cpy_r_r51 = CPyStatics[1129]; /* 'func_placeholder_map' */
    cpy_r_r52 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r53 = PyTuple_Pack(4, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 60, CPyStatic_visitors___globals);
        goto CPyL23;
    }
    cpy_r_r54 = PyObject_SetAttr(cpy_r_r46, cpy_r_r48, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 60, CPyStatic_visitors___globals);
        goto CPyL23;
    }
    CPyType_visitors___TypeAssertTransformVisitor = (PyTypeObject *)cpy_r_r46;
    CPy_INCREF(CPyType_visitors___TypeAssertTransformVisitor);
    cpy_r_r56 = CPyStatic_visitors___globals;
    cpy_r_r57 = CPyStatics[6109]; /* 'TypeAssertTransformVisitor' */
    cpy_r_r58 = CPyDict_SetItem(cpy_r_r56, cpy_r_r57, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/test/visitors.py", "<module>", 60, CPyStatic_visitors___globals);
        goto CPyL21;
    }
    return 1;
CPyL21: ;
    cpy_r_r60 = 2;
    return cpy_r_r60;
CPyL22: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL21;
}
