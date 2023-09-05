#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
mixedtraverser___MixedTraverserVisitor_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef mixedtraverser___MixedTraverserVisitor_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___mixedtraverser___MixedTraverserVisitorObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___mixedtraverser___MixedTraverserVisitorObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *mixedtraverser___MixedTraverserVisitor_setup(PyTypeObject *type);
PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor(void);

static PyObject *
mixedtraverser___MixedTraverserVisitor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mixedtraverser___MixedTraverserVisitor) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = mixedtraverser___MixedTraverserVisitor_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_mixedtraverser___MixedTraverserVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
mixedtraverser___MixedTraverserVisitor_traverse(mypy___mixedtraverser___MixedTraverserVisitorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___mixedtraverser___MixedTraverserVisitorObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___mixedtraverser___MixedTraverserVisitorObject))));
    return 0;
}

static int
mixedtraverser___MixedTraverserVisitor_clear(mypy___mixedtraverser___MixedTraverserVisitorObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___mixedtraverser___MixedTraverserVisitorObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___mixedtraverser___MixedTraverserVisitorObject))));
    return 0;
}

static void
mixedtraverser___MixedTraverserVisitor_dealloc(mypy___mixedtraverser___MixedTraverserVisitorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mixedtraverser___MixedTraverserVisitor_dealloc)
    mixedtraverser___MixedTraverserVisitor_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mixedtraverser___MixedTraverserVisitor_vtable[149];
static CPyVTableItem mixedtraverser___MixedTraverserVisitor_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t mixedtraverser___MixedTraverserVisitor_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem mixedtraverser___MixedTraverserVisitor_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t mixedtraverser___MixedTraverserVisitor_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem mixedtraverser___MixedTraverserVisitor_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t mixedtraverser___MixedTraverserVisitor_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem mixedtraverser___MixedTraverserVisitor_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t mixedtraverser___MixedTraverserVisitor_mypy___visitor___PatternVisitor_offset_table[1];
static CPyVTableItem mixedtraverser___MixedTraverserVisitor_typetraverser___TypeTraverserVisitor_trait_vtable[27];
static size_t mixedtraverser___MixedTraverserVisitor_typetraverser___TypeTraverserVisitor_offset_table[1];
static CPyVTableItem mixedtraverser___MixedTraverserVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable[26];
static size_t mixedtraverser___MixedTraverserVisitor_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem mixedtraverser___MixedTraverserVisitor_type_visitor___TypeVisitor_trait_vtable[21];
static size_t mixedtraverser___MixedTraverserVisitor_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_mixedtraverser___MixedTraverserVisitor_trait_vtable_setup(void)
{
    CPyVTableItem mixedtraverser___MixedTraverserVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_var__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_for_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_return_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_if_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_try_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_with_stmt__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_cast_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_super_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_unary_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_index_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_application__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_lambda_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dictionary_comprehension__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_generator_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_slice_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_conditional_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit__promote_expr__NodeVisitor_glue,
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
    memcpy(mixedtraverser___MixedTraverserVisitor_mypy___visitor___NodeVisitor_trait_vtable, mixedtraverser___MixedTraverserVisitor_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_mypy___visitor___NodeVisitor_trait_vtable));
    size_t mixedtraverser___MixedTraverserVisitor_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(mixedtraverser___MixedTraverserVisitor_mypy___visitor___NodeVisitor_offset_table, mixedtraverser___MixedTraverserVisitor_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem mixedtraverser___MixedTraverserVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
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
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_cast_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_reveal_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_super_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_unary_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_tuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_index_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_application__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_lambda_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_list_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_set_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_dictionary_comprehension__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_generator_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_slice_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_conditional_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit__promote_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_await_expr__ExpressionVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
    };
    memcpy(mixedtraverser___MixedTraverserVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, mixedtraverser___MixedTraverserVisitor_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t mixedtraverser___MixedTraverserVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(mixedtraverser___MixedTraverserVisitor_mypy___visitor___ExpressionVisitor_offset_table, mixedtraverser___MixedTraverserVisitor_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem mixedtraverser___MixedTraverserVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_class_def__StatementVisitor_glue,
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
    memcpy(mixedtraverser___MixedTraverserVisitor_mypy___visitor___StatementVisitor_trait_vtable, mixedtraverser___MixedTraverserVisitor_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_mypy___visitor___StatementVisitor_trait_vtable));
    size_t mixedtraverser___MixedTraverserVisitor_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(mixedtraverser___MixedTraverserVisitor_mypy___visitor___StatementVisitor_offset_table, mixedtraverser___MixedTraverserVisitor_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem mixedtraverser___MixedTraverserVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(mixedtraverser___MixedTraverserVisitor_mypy___visitor___PatternVisitor_trait_vtable, mixedtraverser___MixedTraverserVisitor_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_mypy___visitor___PatternVisitor_trait_vtable));
    size_t mixedtraverser___MixedTraverserVisitor_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(mixedtraverser___MixedTraverserVisitor_mypy___visitor___PatternVisitor_offset_table, mixedtraverser___MixedTraverserVisitor_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem mixedtraverser___MixedTraverserVisitor_typetraverser___TypeTraverserVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_any,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_instance,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_argument,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_list,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_placeholder_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_alias_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___traverse_types,
    };
    memcpy(mixedtraverser___MixedTraverserVisitor_typetraverser___TypeTraverserVisitor_trait_vtable, mixedtraverser___MixedTraverserVisitor_typetraverser___TypeTraverserVisitor_trait_vtable_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_typetraverser___TypeTraverserVisitor_trait_vtable));
    size_t mixedtraverser___MixedTraverserVisitor_typetraverser___TypeTraverserVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(mixedtraverser___MixedTraverserVisitor_typetraverser___TypeTraverserVisitor_offset_table, mixedtraverser___MixedTraverserVisitor_typetraverser___TypeTraverserVisitor_offset_table_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_typetraverser___TypeTraverserVisitor_offset_table));
    CPyVTableItem mixedtraverser___MixedTraverserVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_list__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_argument__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_ellipsis_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_raw_expression_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_placeholder_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(mixedtraverser___MixedTraverserVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable, mixedtraverser___MixedTraverserVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable));
    size_t mixedtraverser___MixedTraverserVisitor_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(mixedtraverser___MixedTraverserVisitor_type_visitor___SyntheticTypeVisitor_offset_table, mixedtraverser___MixedTraverserVisitor_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem mixedtraverser___MixedTraverserVisitor_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(mixedtraverser___MixedTraverserVisitor_type_visitor___TypeVisitor_trait_vtable, mixedtraverser___MixedTraverserVisitor_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_type_visitor___TypeVisitor_trait_vtable));
    size_t mixedtraverser___MixedTraverserVisitor_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(mixedtraverser___MixedTraverserVisitor_type_visitor___TypeVisitor_offset_table, mixedtraverser___MixedTraverserVisitor_type_visitor___TypeVisitor_offset_table_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem mixedtraverser___MixedTraverserVisitor_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)mixedtraverser___MixedTraverserVisitor_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)mixedtraverser___MixedTraverserVisitor_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)mixedtraverser___MixedTraverserVisitor_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)mixedtraverser___MixedTraverserVisitor_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)mixedtraverser___MixedTraverserVisitor_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)mixedtraverser___MixedTraverserVisitor_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)mixedtraverser___MixedTraverserVisitor_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)mixedtraverser___MixedTraverserVisitor_mypy___visitor___PatternVisitor_offset_table,
        (CPyVTableItem)CPyType_typetraverser___TypeTraverserVisitor, (CPyVTableItem)mixedtraverser___MixedTraverserVisitor_typetraverser___TypeTraverserVisitor_trait_vtable, (CPyVTableItem)mixedtraverser___MixedTraverserVisitor_typetraverser___TypeTraverserVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)mixedtraverser___MixedTraverserVisitor_type_visitor___SyntheticTypeVisitor_trait_vtable, (CPyVTableItem)mixedtraverser___MixedTraverserVisitor_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)mixedtraverser___MixedTraverserVisitor_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)mixedtraverser___MixedTraverserVisitor_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor_____init__,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_return_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_if_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_match_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_call_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_op_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_comparison_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_slice_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr,
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
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_application,
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
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_var__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_paramspec_expr,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_var_tuple_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_enum_call_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit__promote_expr__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_temp_node,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor_____init__,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_var,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit__promote_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_cast_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_application,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_optional_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_any,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_instance,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_argument,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_list,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_placeholder_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_alias_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___traverse_types,
    };
    memcpy(mixedtraverser___MixedTraverserVisitor_vtable, mixedtraverser___MixedTraverserVisitor_vtable_scratch, sizeof(mixedtraverser___MixedTraverserVisitor_vtable));
    return 1;
}

static PyObject *
mixedtraverser___MixedTraverserVisitor_get_in_type_alias_expr(mypy___mixedtraverser___MixedTraverserVisitorObject *self, void *closure);
static int
mixedtraverser___MixedTraverserVisitor_set_in_type_alias_expr(mypy___mixedtraverser___MixedTraverserVisitorObject *self, PyObject *value, void *closure);

static PyGetSetDef mixedtraverser___MixedTraverserVisitor_getseters[] = {
    {"in_type_alias_expr",
     (getter)mixedtraverser___MixedTraverserVisitor_get_in_type_alias_expr, (setter)mixedtraverser___MixedTraverserVisitor_set_in_type_alias_expr,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef mixedtraverser___MixedTraverserVisitor_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_var",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_func,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_def",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_class_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_expr",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_var_expr",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_expr",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_namedtuple_expr",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit__promote_expr",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit__promote_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_newtype_expr",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_stmt",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_for_stmt",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_for_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_with_stmt",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_with_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_cast_expr",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_cast_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assert_type_expr",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_application",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_type_application,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_optional_type",
     (PyCFunction)CPyPy_mixedtraverser___MixedTraverserVisitor___visit_optional_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mixedtraverser___MixedTraverserVisitor_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "MixedTraverserVisitor",
    .tp_new = mixedtraverser___MixedTraverserVisitor_new,
    .tp_dealloc = (destructor)mixedtraverser___MixedTraverserVisitor_dealloc,
    .tp_traverse = (traverseproc)mixedtraverser___MixedTraverserVisitor_traverse,
    .tp_clear = (inquiry)mixedtraverser___MixedTraverserVisitor_clear,
    .tp_getset = mixedtraverser___MixedTraverserVisitor_getseters,
    .tp_methods = mixedtraverser___MixedTraverserVisitor_methods,
    .tp_init = mixedtraverser___MixedTraverserVisitor_init,
    .tp_members = mixedtraverser___MixedTraverserVisitor_members,
    .tp_basicsize = sizeof(mypy___mixedtraverser___MixedTraverserVisitorObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___mixedtraverser___MixedTraverserVisitorObject),
    .tp_weaklistoffset = sizeof(mypy___mixedtraverser___MixedTraverserVisitorObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mixedtraverser___MixedTraverserVisitor_template = &CPyType_mixedtraverser___MixedTraverserVisitor_template_;

static PyObject *
mixedtraverser___MixedTraverserVisitor_setup(PyTypeObject *type)
{
    mypy___mixedtraverser___MixedTraverserVisitorObject *self;
    self = (mypy___mixedtraverser___MixedTraverserVisitorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mixedtraverser___MixedTraverserVisitor_vtable + 21;
    self->_in_type_alias_expr = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor(void)
{
    PyObject *self = mixedtraverser___MixedTraverserVisitor_setup(CPyType_mixedtraverser___MixedTraverserVisitor);
    if (self == NULL)
        return NULL;
    char res = CPyDef_mixedtraverser___MixedTraverserVisitor_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
mixedtraverser___MixedTraverserVisitor_get_in_type_alias_expr(mypy___mixedtraverser___MixedTraverserVisitorObject *self, void *closure)
{
    if (unlikely(self->_in_type_alias_expr == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'in_type_alias_expr' of 'MixedTraverserVisitor' undefined");
        return NULL;
    }
    PyObject *retval = self->_in_type_alias_expr ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mixedtraverser___MixedTraverserVisitor_set_in_type_alias_expr(mypy___mixedtraverser___MixedTraverserVisitorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MixedTraverserVisitor' object attribute 'in_type_alias_expr' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_in_type_alias_expr = tmp;
    return 0;
}
static PyMethodDef mixedtraversermodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mixedtraversermodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.mixedtraverser",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mixedtraversermodule_methods
};

PyObject *CPyInit_mypy___mixedtraverser(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___mixedtraverser_internal) {
        Py_INCREF(CPyModule_mypy___mixedtraverser_internal);
        return CPyModule_mypy___mixedtraverser_internal;
    }
    CPyModule_mypy___mixedtraverser_internal = PyModule_Create(&mixedtraversermodule);
    if (unlikely(CPyModule_mypy___mixedtraverser_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___mixedtraverser_internal, "__name__");
    CPyStatic_mixedtraverser___globals = PyModule_GetDict(CPyModule_mypy___mixedtraverser_internal);
    if (unlikely(CPyStatic_mixedtraverser___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mixedtraverser_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___mixedtraverser_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___mixedtraverser_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_mixedtraverser___MixedTraverserVisitor);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor_____init__(PyObject *cpy_r_self) {
    char cpy_r_r0;
    char cpy_r_r1;
    ((mypy___mixedtraverser___MixedTraverserVisitorObject *)cpy_r_self)->_in_type_alias_expr = 0;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "__init__", 29, CPyStatic_mixedtraverser___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "__init__", 28, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_var(PyObject *cpy_r_self, PyObject *cpy_r_var) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___VarObject *)cpy_r_var)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_optional_type(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_var", 34, CPyStatic_mixedtraverser___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"var", 0};
    static CPyArg_Parser parser = {"O:visit_var", kwlist, 0};
    PyObject *obj_var;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_var)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_var;
    if (likely(Py_TYPE(obj_var) == CPyType_nodes___Var))
        arg_var = obj_var;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_var); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_var(arg_self, arg_var);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_var", 33, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_var__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_var(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_var__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_var__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Var))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Var", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_var__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_var__NodeVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_func(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_func(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_func", 37, CPyStatic_mixedtraverser___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypy___nodes___FuncItemObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_optional_type(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_func", 38, CPyStatic_mixedtraverser___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_func(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely((Py_TYPE(obj_o) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_o); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_func(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_func", 36, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_class_def(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_info;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_class_def", 43, CPyStatic_mixedtraverser___globals);
        goto CPyL10;
    }
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_o)->_info;
    CPy_INCREF(cpy_r_r1);
    cpy_r_info = cpy_r_r1;
    cpy_r_r2 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_info);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_class_def", 44, CPyStatic_mixedtraverser___globals);
        goto CPyL11;
    }
    if (!cpy_r_r2) goto CPyL12;
    cpy_r_r3 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_bases;
    if (unlikely(cpy_r_r3 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'bases' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r3);
    }
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_class_def", 46, CPyStatic_mixedtraverser___globals);
        goto CPyL10;
    }
CPyL4: ;
    cpy_r_r4 = 0;
CPyL5: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL13;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_types___Instance))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/mixedtraverser.py", "visit_class_def", 46, CPyStatic_mixedtraverser___globals, "mypy.types.Instance", cpy_r_r9);
        goto CPyL14;
    }
    cpy_r_base = cpy_r_r10;
    cpy_r_r11 = CPyDef_types___Instance___accept(cpy_r_base, cpy_r_self);
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_class_def", 47, CPyStatic_mixedtraverser___globals);
        goto CPyL14;
    } else
        goto CPyL15;
CPyL8: ;
    cpy_r_r12 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r12;
    goto CPyL5;
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL11: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL9;
CPyL13: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
CPyL15: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL8;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_class_def(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_class_def", 40, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_class_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_class_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_class_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_class_def__NodeVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_class_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_class_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_class_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_class_def__StatementVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyDef_mypy___visitor___NodeVisitor___visit_type_alias_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_alias_expr", 50, CPyStatic_mixedtraverser___globals);
        goto CPyL5;
    } else
        goto CPyL6;
CPyL1: ;
    ((mypy___mixedtraverser___MixedTraverserVisitorObject *)cpy_r_self)->_in_type_alias_expr = 1;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_alias_expr", 51, CPyStatic_mixedtraverser___globals);
        goto CPyL5;
    }
    cpy_r_r2 = ((mypy___nodes___TypeAliasExprObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r2, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_alias_expr", 52, CPyStatic_mixedtraverser___globals);
        goto CPyL5;
    } else
        goto CPyL7;
CPyL3: ;
    ((mypy___mixedtraverser___MixedTraverserVisitorObject *)cpy_r_self)->_in_type_alias_expr = 0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_alias_expr", 53, CPyStatic_mixedtraverser___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
CPyL6: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
CPyL7: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL3;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_alias_expr", 49, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_alias_expr__NodeVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeAliasExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeAliasExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_alias_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_alias_expr__ExpressionVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = CPyDef_mypy___visitor___NodeVisitor___visit_type_var_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_var_expr", 56, CPyStatic_mixedtraverser___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___TypeVarExprObject *)cpy_r_o)->_upper_bound;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_r1, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r1, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_var_expr", 57, CPyStatic_mixedtraverser___globals);
        goto CPyL8;
    } else
        goto CPyL10;
CPyL2: ;
    cpy_r_r3 = ((mypy___nodes___TypeVarExprObject *)cpy_r_o)->_values;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
CPyL3: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL11;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_types___Type)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/mixedtraverser.py", "visit_type_var_expr", 58, CPyStatic_mixedtraverser___globals, "mypy.types.Type", cpy_r_r9);
        goto CPyL12;
    }
    cpy_r_value = cpy_r_r10;
    cpy_r_r11 = CPY_GET_METHOD(cpy_r_value, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_value, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_var_expr", 59, CPyStatic_mixedtraverser___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL6: ;
    cpy_r_r12 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r12;
    goto CPyL3;
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL9: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
CPyL10: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL2;
CPyL11: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL7;
CPyL12: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL8;
CPyL13: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL6;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_var_expr", 55, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_var_expr__NodeVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_var_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeVarExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeVarExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_var_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_var_expr__ExpressionVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPyDef_mypy___visitor___NodeVisitor___visit_typeddict_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_typeddict_expr", 62, CPyStatic_mixedtraverser___globals);
        goto CPyL4;
    } else
        goto CPyL5;
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___TypedDictExprObject *)cpy_r_o)->_info;
    cpy_r_r2 = ((mypy___nodes___TypeInfoObject *)cpy_r_r1)->_typeddict_type;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/mixedtraverser.py", "visit_typeddict_expr", "TypeInfo", "typeddict_type", 63, CPyStatic_mixedtraverser___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r2);
CPyL2: ;
    cpy_r_r3 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_optional_type(cpy_r_self, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_typeddict_expr", 63, CPyStatic_mixedtraverser___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
CPyL5: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_typeddict_expr", 61, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_typeddict_expr__NodeVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypedDictExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypedDictExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_typeddict_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_typeddict_expr__ExpressionVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = CPyDef_mypy___visitor___NodeVisitor___visit_namedtuple_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_namedtuple_expr", 66, CPyStatic_mixedtraverser___globals);
        goto CPyL9;
    } else
        goto CPyL10;
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___NamedTupleExprObject *)cpy_r_o)->_info;
    cpy_r_r2 = ((mypy___nodes___TypeInfoObject *)cpy_r_r1)->_tuple_type;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/mixedtraverser.py", "visit_namedtuple_expr", "TypeInfo", "tuple_type", 67, CPyStatic_mixedtraverser___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r2);
CPyL2: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    CPy_DECREF(cpy_r_r2);
    if (cpy_r_r4) goto CPyL5;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_namedtuple_expr", 67, CPyStatic_mixedtraverser___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = ((mypy___nodes___NamedTupleExprObject *)cpy_r_o)->_info;
    cpy_r_r7 = ((mypy___nodes___TypeInfoObject *)cpy_r_r6)->_tuple_type;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/mixedtraverser.py", "visit_namedtuple_expr", "TypeInfo", "tuple_type", 68, CPyStatic_mixedtraverser___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r7);
CPyL6: ;
    if (likely(cpy_r_r7 != Py_None))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/mixedtraverser.py", "visit_namedtuple_expr", 68, CPyStatic_mixedtraverser___globals, "mypy.types.TupleType", cpy_r_r7);
        goto CPyL9;
    }
    cpy_r_r9 = CPyDef_types___TupleType___accept(cpy_r_r8, cpy_r_self);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_namedtuple_expr", 68, CPyStatic_mixedtraverser___globals);
        goto CPyL9;
    } else
        goto CPyL11;
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL10: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
CPyL11: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL8;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_namedtuple_expr", 65, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_namedtuple_expr__NodeVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_namedtuple_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NamedTupleExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NamedTupleExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_namedtuple_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_namedtuple_expr__ExpressionVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit__promote_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_mypy___visitor___NodeVisitor___visit__promote_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit__promote_expr", 71, CPyStatic_mixedtraverser___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___PromoteExprObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_r1, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r1, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit__promote_expr", 72, CPyStatic_mixedtraverser___globals);
        goto CPyL3;
    } else
        goto CPyL5;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
CPyL4: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
CPyL5: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit__promote_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PromoteExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit__promote_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit__promote_expr", 70, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit__promote_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit__promote_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit__promote_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PromoteExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit__promote_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit__promote_expr__NodeVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit__promote_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit__promote_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit__promote_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit__promote_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___PromoteExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.PromoteExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit__promote_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit__promote_expr__ExpressionVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_mypy___visitor___NodeVisitor___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_newtype_expr", 75, CPyStatic_mixedtraverser___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___NewTypeExprObject *)cpy_r_o)->_old_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_optional_type(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_newtype_expr", 76, CPyStatic_mixedtraverser___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
CPyL4: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_newtype_expr", 74, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_newtype_expr__NodeVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_newtype_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___NewTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.NewTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_newtype_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_newtype_expr__ExpressionVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_assignment_stmt", 81, CPyStatic_mixedtraverser___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_optional_type(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_assignment_stmt", 82, CPyStatic_mixedtraverser___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_assignment_stmt", 80, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_assignment_stmt__NodeVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_for_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_for_stmt", 85, CPyStatic_mixedtraverser___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypy___nodes___ForStmtObject *)cpy_r_o)->_index_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_optional_type(cpy_r_self, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_for_stmt", 86, CPyStatic_mixedtraverser___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_for_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_for_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_for_stmt", 84, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_for_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_for_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_for_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_for_stmt__NodeVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_for_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_for_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_for_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_for_stmt__StatementVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_with_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_with_stmt", 89, CPyStatic_mixedtraverser___globals);
        goto CPyL7;
    }
    cpy_r_r1 = ((mypy___nodes___WithStmtObject *)cpy_r_o)->_analyzed_types;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL8;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/mixedtraverser.py", "visit_with_stmt", 90, CPyStatic_mixedtraverser___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL9;
    }
    cpy_r_typ = cpy_r_r8;
    cpy_r_r9 = CPY_GET_METHOD(cpy_r_typ, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_typ, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_with_stmt", 91, CPyStatic_mixedtraverser___globals);
        goto CPyL9;
    } else
        goto CPyL10;
CPyL5: ;
    cpy_r_r10 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r10;
    goto CPyL2;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL8: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
CPyL10: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL5;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_with_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_with_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_with_stmt", 88, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_with_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_with_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_with_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_with_stmt__NodeVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_with_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_with_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_with_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_with_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_with_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_with_stmt__StatementVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_cast_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_cast_expr", 96, CPyStatic_mixedtraverser___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypy___nodes___CastExprObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_r1, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r1, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_cast_expr", 97, CPyStatic_mixedtraverser___globals);
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

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_cast_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_cast_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_cast_expr", 95, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_cast_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_cast_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_cast_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_cast_expr__NodeVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_cast_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_cast_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_cast_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_cast_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CastExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CastExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_cast_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_cast_expr__ExpressionVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_assert_type_expr", 100, CPyStatic_mixedtraverser___globals);
        goto CPyL3;
    }
    cpy_r_r1 = ((mypy___nodes___AssertTypeExprObject *)cpy_r_o)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPY_GET_METHOD(cpy_r_r1, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r1, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_assert_type_expr", 101, CPyStatic_mixedtraverser___globals);
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

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_assert_type_expr", 99, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_assert_type_expr__NodeVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assert_type_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssertTypeExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssertTypeExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assert_type_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_assert_type_expr__ExpressionVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_application(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPyDef_traverser___TraverserVisitor___visit_type_application(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_application", 104, CPyStatic_mixedtraverser___globals);
        goto CPyL7;
    }
    cpy_r_r1 = ((mypy___nodes___TypeApplicationObject *)cpy_r_o)->_types;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL8;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/mixedtraverser.py", "visit_type_application", 105, CPyStatic_mixedtraverser___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL9;
    }
    cpy_r_t = cpy_r_r8;
    cpy_r_r9 = CPY_GET_METHOD(cpy_r_t, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_application", 106, CPyStatic_mixedtraverser___globals);
        goto CPyL9;
    } else
        goto CPyL10;
CPyL5: ;
    cpy_r_r10 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r10;
    goto CPyL2;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL8: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
CPyL10: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL5;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_type_application(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_application(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_application", 103, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_application__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_type_application__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_application__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_application__NodeVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

PyObject *CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_application__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_application(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_type_application__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_type_application__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___TypeApplication))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.TypeApplication", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_type_application__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_type_application__ExpressionVisitor_glue", -1, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser___MixedTraverserVisitor___visit_optional_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_t != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL3;
    CPy_INCREF(cpy_r_t);
    if (likely(cpy_r_t != Py_None))
        cpy_r_r2 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/mixedtraverser.py", "visit_optional_type", 112, CPyStatic_mixedtraverser___globals, "mypy.types.Type", cpy_r_t);
        goto CPyL4;
    }
    cpy_r_r3 = CPY_GET_METHOD(cpy_r_r2, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r2, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "visit_optional_type", 112, CPyStatic_mixedtraverser___globals);
        goto CPyL4;
    } else
        goto CPyL5;
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
CPyL5: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL3;
}

PyObject *CPyPy_mixedtraverser___MixedTraverserVisitor___visit_optional_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_optional_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_stubgen___ReferenceFinder) || (Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer) || (Py_TYPE(obj_self) == CPyType_mixedtraverser___MixedTraverserVisitor)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.mixedtraverser.MixedTraverserVisitor", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (PyObject_TypeCheck(obj_t, CPyType_types___Type))
        arg_t = obj_t;
    else {
        arg_t = NULL;
    }
    if (arg_t != NULL) goto __LL3472;
    if (obj_t == Py_None)
        arg_t = obj_t;
    else {
        arg_t = NULL;
    }
    if (arg_t != NULL) goto __LL3472;
    CPy_TypeError("mypy.types.Type or None", obj_t); 
    goto fail;
__LL3472: ;
    char retval = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_optional_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mixedtraverser.py", "visit_optional_type", 110, CPyStatic_mixedtraverser___globals);
    return NULL;
}

char CPyDef_mixedtraverser_____top_level__(void) {
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
    char cpy_r_r31;
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
    char cpy_r_r42;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "<module>", -1, CPyStatic_mixedtraverser___globals);
        goto CPyL15;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_mixedtraverser___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "<module>", 1, CPyStatic_mixedtraverser___globals);
        goto CPyL15;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9529]; /* ('AssertTypeExpr', 'AssignmentStmt', 'CastExpr',
                                    'ClassDef', 'ForStmt', 'FuncItem', 'NamedTupleExpr',
                                    'NewTypeExpr', 'PromoteExpr', 'TypeAliasExpr',
                                    'TypeApplication', 'TypedDictExpr', 'TypeVarExpr', 'Var',
                                    'WithStmt') */
    cpy_r_r10 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r11 = CPyStatic_mixedtraverser___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "<module>", 3, CPyStatic_mixedtraverser___globals);
        goto CPyL15;
    }
    CPyModule_mypy___nodes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r14 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r15 = CPyStatic_mixedtraverser___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "<module>", 20, CPyStatic_mixedtraverser___globals);
        goto CPyL15;
    }
    CPyModule_mypy___traverser = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9157]; /* ('Type',) */
    cpy_r_r18 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r19 = CPyStatic_mixedtraverser___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "<module>", 21, CPyStatic_mixedtraverser___globals);
        goto CPyL15;
    }
    CPyModule_mypy___types = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9209]; /* ('TypeTraverserVisitor',) */
    cpy_r_r22 = CPyStatics[1081]; /* 'mypy.typetraverser' */
    cpy_r_r23 = CPyStatic_mixedtraverser___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "<module>", 22, CPyStatic_mixedtraverser___globals);
        goto CPyL15;
    }
    CPyModule_mypy___typetraverser = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___typetraverser);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r26 = (PyObject *)CPyType_typetraverser___TypeTraverserVisitor;
    cpy_r_r27 = PyTuple_Pack(2, cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "<module>", 25, CPyStatic_mixedtraverser___globals);
        goto CPyL15;
    }
    cpy_r_r28 = CPyStatics[3823]; /* 'mypy.mixedtraverser' */
    cpy_r_r29 = (PyObject *)CPyType_mixedtraverser___MixedTraverserVisitor_template;
    cpy_r_r30 = CPyType_FromTemplate(cpy_r_r29, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "<module>", 25, CPyStatic_mixedtraverser___globals);
        goto CPyL15;
    }
    cpy_r_r31 = CPyDef_mixedtraverser___MixedTraverserVisitor_trait_vtable_setup();
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "<module>", -1, CPyStatic_mixedtraverser___globals);
        goto CPyL16;
    }
    cpy_r_r32 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r33 = CPyStatics[3824]; /* 'in_type_alias_expr' */
    cpy_r_r34 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r35 = PyTuple_Pack(2, cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "<module>", 25, CPyStatic_mixedtraverser___globals);
        goto CPyL16;
    }
    cpy_r_r36 = PyObject_SetAttr(cpy_r_r30, cpy_r_r32, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "<module>", 25, CPyStatic_mixedtraverser___globals);
        goto CPyL16;
    }
    CPyType_mixedtraverser___MixedTraverserVisitor = (PyTypeObject *)cpy_r_r30;
    CPy_INCREF(CPyType_mixedtraverser___MixedTraverserVisitor);
    cpy_r_r38 = CPyStatic_mixedtraverser___globals;
    cpy_r_r39 = CPyStatics[3825]; /* 'MixedTraverserVisitor' */
    cpy_r_r40 = CPyDict_SetItem(cpy_r_r38, cpy_r_r39, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/mixedtraverser.py", "<module>", 25, CPyStatic_mixedtraverser___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL16: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL15;
}
