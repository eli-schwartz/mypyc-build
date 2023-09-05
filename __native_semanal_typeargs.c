#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
semanal_typeargs___TypeArgumentAnalyzer_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef semanal_typeargs___TypeArgumentAnalyzer_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___semanal_typeargs___TypeArgumentAnalyzerObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___semanal_typeargs___TypeArgumentAnalyzerObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *semanal_typeargs___TypeArgumentAnalyzer_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_typeargs___TypeArgumentAnalyzer(PyObject *cpy_r_errors, PyObject *cpy_r_options, char cpy_r_is_typeshed_file);

static PyObject *
semanal_typeargs___TypeArgumentAnalyzer_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_typeargs___TypeArgumentAnalyzer) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = semanal_typeargs___TypeArgumentAnalyzer_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_semanal_typeargs___TypeArgumentAnalyzer_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
semanal_typeargs___TypeArgumentAnalyzer_traverse(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_errors);
    Py_VISIT(self->_options);
    Py_VISIT(self->_scope);
    Py_VISIT(self->_seen_aliases);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___semanal_typeargs___TypeArgumentAnalyzerObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_typeargs___TypeArgumentAnalyzerObject))));
    return 0;
}

static int
semanal_typeargs___TypeArgumentAnalyzer_clear(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self)
{
    Py_CLEAR(self->_errors);
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_scope);
    Py_CLEAR(self->_seen_aliases);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___semanal_typeargs___TypeArgumentAnalyzerObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_typeargs___TypeArgumentAnalyzerObject))));
    return 0;
}

static void
semanal_typeargs___TypeArgumentAnalyzer_dealloc(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_typeargs___TypeArgumentAnalyzer_dealloc)
    semanal_typeargs___TypeArgumentAnalyzer_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_vtable[161];
static CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___PatternVisitor_offset_table[1];
static CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_typetraverser___TypeTraverserVisitor_trait_vtable[27];
static size_t semanal_typeargs___TypeArgumentAnalyzer_typetraverser___TypeTraverserVisitor_offset_table[1];
static CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_type_visitor___SyntheticTypeVisitor_trait_vtable[26];
static size_t semanal_typeargs___TypeArgumentAnalyzer_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_type_visitor___TypeVisitor_trait_vtable[21];
static size_t semanal_typeargs___TypeArgumentAnalyzer_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_semanal_typeargs___TypeArgumentAnalyzer_trait_vtable_setup(void)
{
    CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_var__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block__NodeVisitor_glue,
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
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___NodeVisitor_trait_vtable, semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___NodeVisitor_trait_vtable));
    size_t semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___NodeVisitor_offset_table, semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
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
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___ExpressionVisitor_trait_vtable, semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___ExpressionVisitor_offset_table, semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block__StatementVisitor_glue,
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
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___StatementVisitor_trait_vtable, semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___StatementVisitor_trait_vtable));
    size_t semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___StatementVisitor_offset_table, semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___PatternVisitor_trait_vtable, semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___PatternVisitor_trait_vtable));
    size_t semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___PatternVisitor_offset_table, semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_typetraverser___TypeTraverserVisitor_trait_vtable_scratch[] = {
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
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_instance,
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
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_type_alias_type,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type__TypeTraverserVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___traverse_types,
    };
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_typetraverser___TypeTraverserVisitor_trait_vtable, semanal_typeargs___TypeArgumentAnalyzer_typetraverser___TypeTraverserVisitor_trait_vtable_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_typetraverser___TypeTraverserVisitor_trait_vtable));
    size_t semanal_typeargs___TypeArgumentAnalyzer_typetraverser___TypeTraverserVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_typetraverser___TypeTraverserVisitor_offset_table, semanal_typeargs___TypeArgumentAnalyzer_typetraverser___TypeTraverserVisitor_offset_table_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_typetraverser___TypeTraverserVisitor_offset_table));
    CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch[] = {
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
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_type_visitor___SyntheticTypeVisitor_trait_vtable, semanal_typeargs___TypeArgumentAnalyzer_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_type_visitor___SyntheticTypeVisitor_trait_vtable));
    size_t semanal_typeargs___TypeArgumentAnalyzer_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_type_visitor___SyntheticTypeVisitor_offset_table, semanal_typeargs___TypeArgumentAnalyzer_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
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
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_type_visitor___TypeVisitor_trait_vtable, semanal_typeargs___TypeArgumentAnalyzer_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_type_visitor___TypeVisitor_trait_vtable));
    size_t semanal_typeargs___TypeArgumentAnalyzer_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_type_visitor___TypeVisitor_offset_table, semanal_typeargs___TypeArgumentAnalyzer_type_visitor___TypeVisitor_offset_table_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem semanal_typeargs___TypeArgumentAnalyzer_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)semanal_typeargs___TypeArgumentAnalyzer_mypy___visitor___PatternVisitor_offset_table,
        (CPyVTableItem)CPyType_typetraverser___TypeTraverserVisitor, (CPyVTableItem)semanal_typeargs___TypeArgumentAnalyzer_typetraverser___TypeTraverserVisitor_trait_vtable, (CPyVTableItem)semanal_typeargs___TypeArgumentAnalyzer_typetraverser___TypeTraverserVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)semanal_typeargs___TypeArgumentAnalyzer_type_visitor___SyntheticTypeVisitor_trait_vtable, (CPyVTableItem)semanal_typeargs___TypeArgumentAnalyzer_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)semanal_typeargs___TypeArgumentAnalyzer_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)semanal_typeargs___TypeArgumentAnalyzer_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer_____init__,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_mypy_file,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_func__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer_____init__,
        (CPyVTableItem)CPyDef_mixedtraverser___MixedTraverserVisitor___visit_var,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_func__MixedTraverserVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__MixedTraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_instance,
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
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_type_alias_type,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type__TypeTraverserVisitor_glue,
        (CPyVTableItem)CPyDef_typetraverser___TypeTraverserVisitor___traverse_types,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer_____init__,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_mypy_file,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_func,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_type_alias_type,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_instance,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___validate_args,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___check_type_var_values,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___fail,
        (CPyVTableItem)CPyDef_semanal_typeargs___TypeArgumentAnalyzer___note,
    };
    memcpy(semanal_typeargs___TypeArgumentAnalyzer_vtable, semanal_typeargs___TypeArgumentAnalyzer_vtable_scratch, sizeof(semanal_typeargs___TypeArgumentAnalyzer_vtable));
    return 1;
}

static PyObject *
semanal_typeargs___TypeArgumentAnalyzer_get_errors(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, void *closure);
static int
semanal_typeargs___TypeArgumentAnalyzer_set_errors(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, PyObject *value, void *closure);
static PyObject *
semanal_typeargs___TypeArgumentAnalyzer_get_options(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, void *closure);
static int
semanal_typeargs___TypeArgumentAnalyzer_set_options(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, PyObject *value, void *closure);
static PyObject *
semanal_typeargs___TypeArgumentAnalyzer_get_is_typeshed_file(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, void *closure);
static int
semanal_typeargs___TypeArgumentAnalyzer_set_is_typeshed_file(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, PyObject *value, void *closure);
static PyObject *
semanal_typeargs___TypeArgumentAnalyzer_get_scope(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, void *closure);
static int
semanal_typeargs___TypeArgumentAnalyzer_set_scope(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, PyObject *value, void *closure);
static PyObject *
semanal_typeargs___TypeArgumentAnalyzer_get_recurse_into_functions(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, void *closure);
static int
semanal_typeargs___TypeArgumentAnalyzer_set_recurse_into_functions(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, PyObject *value, void *closure);
static PyObject *
semanal_typeargs___TypeArgumentAnalyzer_get_seen_aliases(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, void *closure);
static int
semanal_typeargs___TypeArgumentAnalyzer_set_seen_aliases(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, PyObject *value, void *closure);

static PyGetSetDef semanal_typeargs___TypeArgumentAnalyzer_getseters[] = {
    {"errors",
     (getter)semanal_typeargs___TypeArgumentAnalyzer_get_errors, (setter)semanal_typeargs___TypeArgumentAnalyzer_set_errors,
     NULL, NULL},
    {"options",
     (getter)semanal_typeargs___TypeArgumentAnalyzer_get_options, (setter)semanal_typeargs___TypeArgumentAnalyzer_set_options,
     NULL, NULL},
    {"is_typeshed_file",
     (getter)semanal_typeargs___TypeArgumentAnalyzer_get_is_typeshed_file, (setter)semanal_typeargs___TypeArgumentAnalyzer_set_is_typeshed_file,
     NULL, NULL},
    {"scope",
     (getter)semanal_typeargs___TypeArgumentAnalyzer_get_scope, (setter)semanal_typeargs___TypeArgumentAnalyzer_set_scope,
     NULL, NULL},
    {"recurse_into_functions",
     (getter)semanal_typeargs___TypeArgumentAnalyzer_get_recurse_into_functions, (setter)semanal_typeargs___TypeArgumentAnalyzer_set_recurse_into_functions,
     NULL, NULL},
    {"seen_aliases",
     (getter)semanal_typeargs___TypeArgumentAnalyzer_get_seen_aliases, (setter)semanal_typeargs___TypeArgumentAnalyzer_set_seen_aliases,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef semanal_typeargs___TypeArgumentAnalyzer_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_semanal_typeargs___TypeArgumentAnalyzer_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_mypy_file",
     (PyCFunction)CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_mypy_file,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func",
     (PyCFunction)CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_func,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_def",
     (PyCFunction)CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_block",
     (PyCFunction)CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"validate_args",
     (PyCFunction)CPyPy_semanal_typeargs___TypeArgumentAnalyzer___validate_args,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_unpack_type",
     (PyCFunction)CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_type_var_values",
     (PyCFunction)CPyPy_semanal_typeargs___TypeArgumentAnalyzer___check_type_var_values,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fail",
     (PyCFunction)CPyPy_semanal_typeargs___TypeArgumentAnalyzer___fail,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"note",
     (PyCFunction)CPyPy_semanal_typeargs___TypeArgumentAnalyzer___note,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_typeargs___TypeArgumentAnalyzer_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeArgumentAnalyzer",
    .tp_new = semanal_typeargs___TypeArgumentAnalyzer_new,
    .tp_dealloc = (destructor)semanal_typeargs___TypeArgumentAnalyzer_dealloc,
    .tp_traverse = (traverseproc)semanal_typeargs___TypeArgumentAnalyzer_traverse,
    .tp_clear = (inquiry)semanal_typeargs___TypeArgumentAnalyzer_clear,
    .tp_getset = semanal_typeargs___TypeArgumentAnalyzer_getseters,
    .tp_methods = semanal_typeargs___TypeArgumentAnalyzer_methods,
    .tp_init = semanal_typeargs___TypeArgumentAnalyzer_init,
    .tp_members = semanal_typeargs___TypeArgumentAnalyzer_members,
    .tp_basicsize = sizeof(mypy___semanal_typeargs___TypeArgumentAnalyzerObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___semanal_typeargs___TypeArgumentAnalyzerObject),
    .tp_weaklistoffset = sizeof(mypy___semanal_typeargs___TypeArgumentAnalyzerObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_semanal_typeargs___TypeArgumentAnalyzer_template = &CPyType_semanal_typeargs___TypeArgumentAnalyzer_template_;

static PyObject *
semanal_typeargs___TypeArgumentAnalyzer_setup(PyTypeObject *type)
{
    mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self;
    self = (mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_typeargs___TypeArgumentAnalyzer_vtable + 21;
    self->_in_type_alias_expr = 2;
    self->_is_typeshed_file = 2;
    self->_recurse_into_functions = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_typeargs___TypeArgumentAnalyzer(PyObject *cpy_r_errors, PyObject *cpy_r_options, char cpy_r_is_typeshed_file)
{
    PyObject *self = semanal_typeargs___TypeArgumentAnalyzer_setup(CPyType_semanal_typeargs___TypeArgumentAnalyzer);
    if (self == NULL)
        return NULL;
    char res = CPyDef_semanal_typeargs___TypeArgumentAnalyzer_____init__(self, cpy_r_errors, cpy_r_options, cpy_r_is_typeshed_file);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
semanal_typeargs___TypeArgumentAnalyzer_get_errors(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_errors == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'errors' of 'TypeArgumentAnalyzer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_errors);
    PyObject *retval = self->_errors;
    return retval;
}

static int
semanal_typeargs___TypeArgumentAnalyzer_set_errors(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeArgumentAnalyzer' object attribute 'errors' cannot be deleted");
        return -1;
    }
    if (self->_errors != NULL) {
        CPy_DECREF(self->_errors);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypy___errors___Errors))
        tmp = value;
    else {
        CPy_TypeError("mypy.errors.Errors", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_errors = tmp;
    return 0;
}

static PyObject *
semanal_typeargs___TypeArgumentAnalyzer_get_options(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'TypeArgumentAnalyzer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
semanal_typeargs___TypeArgumentAnalyzer_set_options(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeArgumentAnalyzer' object attribute 'options' cannot be deleted");
        return -1;
    }
    if (self->_options != NULL) {
        CPy_DECREF(self->_options);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypy___options___Options))
        tmp = value;
    else {
        CPy_TypeError("mypy.options.Options", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_options = tmp;
    return 0;
}

static PyObject *
semanal_typeargs___TypeArgumentAnalyzer_get_is_typeshed_file(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_is_typeshed_file == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'is_typeshed_file' of 'TypeArgumentAnalyzer' undefined");
        return NULL;
    }
    PyObject *retval = self->_is_typeshed_file ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
semanal_typeargs___TypeArgumentAnalyzer_set_is_typeshed_file(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeArgumentAnalyzer' object attribute 'is_typeshed_file' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_typeshed_file = tmp;
    return 0;
}

static PyObject *
semanal_typeargs___TypeArgumentAnalyzer_get_scope(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_scope == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'scope' of 'TypeArgumentAnalyzer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_scope);
    PyObject *retval = self->_scope;
    return retval;
}

static int
semanal_typeargs___TypeArgumentAnalyzer_set_scope(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeArgumentAnalyzer' object attribute 'scope' cannot be deleted");
        return -1;
    }
    if (self->_scope != NULL) {
        CPy_DECREF(self->_scope);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_scope___Scope))
        tmp = value;
    else {
        CPy_TypeError("mypy.scope.Scope", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_scope = tmp;
    return 0;
}

static PyObject *
semanal_typeargs___TypeArgumentAnalyzer_get_recurse_into_functions(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_recurse_into_functions == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'recurse_into_functions' of 'TypeArgumentAnalyzer' undefined");
        return NULL;
    }
    PyObject *retval = self->_recurse_into_functions ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
semanal_typeargs___TypeArgumentAnalyzer_set_recurse_into_functions(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeArgumentAnalyzer' object attribute 'recurse_into_functions' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_recurse_into_functions = tmp;
    return 0;
}

static PyObject *
semanal_typeargs___TypeArgumentAnalyzer_get_seen_aliases(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, void *closure)
{
    if (unlikely(self->_seen_aliases == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'seen_aliases' of 'TypeArgumentAnalyzer' undefined");
        return NULL;
    }
    CPy_INCREF(self->_seen_aliases);
    PyObject *retval = self->_seen_aliases;
    return retval;
}

static int
semanal_typeargs___TypeArgumentAnalyzer_set_seen_aliases(mypy___semanal_typeargs___TypeArgumentAnalyzerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeArgumentAnalyzer' object attribute 'seen_aliases' cannot be deleted");
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
static PyMethodDef semanal_typeargsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef semanal_typeargsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.semanal_typeargs",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    semanal_typeargsmodule_methods
};

PyObject *CPyInit_mypy___semanal_typeargs(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___semanal_typeargs_internal) {
        Py_INCREF(CPyModule_mypy___semanal_typeargs_internal);
        return CPyModule_mypy___semanal_typeargs_internal;
    }
    CPyModule_mypy___semanal_typeargs_internal = PyModule_Create(&semanal_typeargsmodule);
    if (unlikely(CPyModule_mypy___semanal_typeargs_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___semanal_typeargs_internal, "__name__");
    CPyStatic_semanal_typeargs___globals = PyModule_GetDict(CPyModule_mypy___semanal_typeargs_internal);
    if (unlikely(CPyStatic_semanal_typeargs___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_semanal_typeargs_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___semanal_typeargs_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___semanal_typeargs_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_semanal_typeargs___TypeArgumentAnalyzer);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer_____init__(PyObject *cpy_r_self, PyObject *cpy_r_errors, PyObject *cpy_r_options, char cpy_r_is_typeshed_file) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = CPyDef_mixedtraverser___MixedTraverserVisitor_____init__(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "__init__", 45, CPyStatic_semanal_typeargs___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_errors);
    if (((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_errors != NULL) {
        CPy_DECREF(((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_errors);
    }
    ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_errors = cpy_r_errors;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "__init__", 46, CPyStatic_semanal_typeargs___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_options);
    if (((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_options != NULL) {
        CPy_DECREF(((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_options);
    }
    ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_options = cpy_r_options;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "__init__", 47, CPyStatic_semanal_typeargs___globals);
        goto CPyL10;
    }
    ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_is_typeshed_file = cpy_r_is_typeshed_file;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "__init__", 48, CPyStatic_semanal_typeargs___globals);
        goto CPyL10;
    }
    cpy_r_r4 = CPyDef_scope___Scope();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "__init__", 49, CPyStatic_semanal_typeargs___globals);
        goto CPyL10;
    }
    if (((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_scope != NULL) {
        CPy_DECREF(((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_scope);
    }
    ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_scope = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "__init__", 49, CPyStatic_semanal_typeargs___globals);
        goto CPyL10;
    }
    ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_recurse_into_functions = 1;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "__init__", 51, CPyStatic_semanal_typeargs___globals);
        goto CPyL10;
    }
    cpy_r_r7 = PySet_New(NULL);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "__init__", 54, CPyStatic_semanal_typeargs___globals);
        goto CPyL10;
    }
    if (((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_seen_aliases != NULL) {
        CPy_DECREF(((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_seen_aliases);
    }
    ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_seen_aliases = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "__init__", 54, CPyStatic_semanal_typeargs___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"errors", "options", "is_typeshed_file", 0};
    PyObject *obj_errors;
    PyObject *obj_options;
    PyObject *obj_is_typeshed_file;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO", "__init__", kwlist, &obj_errors, &obj_options, &obj_is_typeshed_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypy___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_errors); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char arg_is_typeshed_file;
    if (unlikely(!PyBool_Check(obj_is_typeshed_file))) {
        CPy_TypeError("bool", obj_is_typeshed_file); goto fail;
    } else
        arg_is_typeshed_file = obj_is_typeshed_file == Py_True;
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer_____init__(arg_self, arg_errors, arg_options, arg_is_typeshed_file);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "__init__", 44, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_mypy_file(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    tuple_T3OOO cpy_r_r22;
    tuple_T3OOO cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    tuple_T3OOO cpy_r_r34;
    tuple_T3OOO cpy_r_r35;
    tuple_T3OOO cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_errors;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "visit_mypy_file", "TypeArgumentAnalyzer", "errors", 57, CPyStatic_semanal_typeargs___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___MypyFileObject *)cpy_r_o)->_path;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_mypy_file", 57, CPyStatic_semanal_typeargs___globals);
        goto CPyL35;
    }
CPyL2: ;
    cpy_r_r3 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "visit_mypy_file", "TypeArgumentAnalyzer", "scope", 57, CPyStatic_semanal_typeargs___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    cpy_r_r4 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "visit_mypy_file", "TypeArgumentAnalyzer", "options", 57, CPyStatic_semanal_typeargs___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = CPyDef_mypy___errors___Errors___set_file(cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r4, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_mypy_file", 57, CPyStatic_semanal_typeargs___globals);
        goto CPyL34;
    }
    cpy_r_r6 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "visit_mypy_file", "TypeArgumentAnalyzer", "scope", 58, CPyStatic_semanal_typeargs___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r6);
CPyL6: ;
    cpy_r_r7 = CPY_GET_ATTR(cpy_r_o, CPyType_nodes___MypyFile, 8, mypy___nodes___MypyFileObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_mypy_file", 58, CPyStatic_semanal_typeargs___globals);
        goto CPyL38;
    }
CPyL7: ;
    cpy_r_r8 = CPyStatics[693]; /* 'module_scope' */
    PyObject *cpy_r_r9[2] = {cpy_r_r6, cpy_r_r7};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r10, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_mypy_file", 58, CPyStatic_semanal_typeargs___globals);
        goto CPyL39;
    }
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r12 = PyObject_Type(cpy_r_r11);
    cpy_r_r13 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_mypy_file", 58, CPyStatic_semanal_typeargs___globals);
        goto CPyL40;
    }
    cpy_r_r15 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r15);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_mypy_file", 58, CPyStatic_semanal_typeargs___globals);
        goto CPyL41;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_r11};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_mypy_file", 58, CPyStatic_semanal_typeargs___globals);
        goto CPyL41;
    } else
        goto CPyL42;
CPyL11: ;
    cpy_r_r20 = 1;
    cpy_r_r21 = CPyDef_traverser___TraverserVisitor___visit_mypy_file(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_mypy_file", 59, CPyStatic_semanal_typeargs___globals);
    } else
        goto CPyL21;
    cpy_r_r22 = CPy_CatchError();
    cpy_r_r20 = 0;
    cpy_r_r23 = CPy_GetExcInfo();
    cpy_r_r24 = cpy_r_r23.f0;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = cpy_r_r23.f1;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = cpy_r_r23.f2;
    CPy_INCREF(cpy_r_r26);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    PyObject *cpy_r_r27[4] = {cpy_r_r11, cpy_r_r24, cpy_r_r25, cpy_r_r26};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r28, 4, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_mypy_file", 58, CPyStatic_semanal_typeargs___globals);
        goto CPyL43;
    }
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    cpy_r_r30 = PyObject_IsTrue(cpy_r_r29);
    CPy_DecRef(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_mypy_file", 58, CPyStatic_semanal_typeargs___globals);
        goto CPyL19;
    }
    cpy_r_r32 = cpy_r_r30;
    if (cpy_r_r32) goto CPyL18;
    CPy_Reraise();
    if (!0) {
        goto CPyL19;
    } else
        goto CPyL44;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    CPy_RestoreExcInfo(cpy_r_r22);
    CPy_DecRef(cpy_r_r22.f0);
    CPy_DecRef(cpy_r_r22.f1);
    CPy_DecRef(cpy_r_r22.f2);
    goto CPyL21;
CPyL19: ;
    CPy_RestoreExcInfo(cpy_r_r22);
    CPy_DecRef(cpy_r_r22.f0);
    CPy_DecRef(cpy_r_r22.f1);
    CPy_DecRef(cpy_r_r22.f2);
    cpy_r_r33 = CPy_KeepPropagating();
    if (!cpy_r_r33) {
        goto CPyL22;
    } else
        goto CPyL45;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    tuple_T3OOO __tmp6156 = { NULL, NULL, NULL };
    cpy_r_r34 = __tmp6156;
    cpy_r_r35 = cpy_r_r34;
    goto CPyL23;
CPyL22: ;
    cpy_r_r36 = CPy_CatchError();
    cpy_r_r35 = cpy_r_r36;
CPyL23: ;
    if (!cpy_r_r20) goto CPyL46;
    cpy_r_r37 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r38[4] = {cpy_r_r11, cpy_r_r37, cpy_r_r37, cpy_r_r37};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r39, 4, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_mypy_file", 58, CPyStatic_semanal_typeargs___globals);
        goto CPyL47;
    } else
        goto CPyL48;
CPyL25: ;
    CPy_DECREF(cpy_r_r11);
CPyL26: ;
    if (cpy_r_r35.f0 == NULL) goto CPyL33;
    CPy_Reraise();
    if (!0) {
        goto CPyL29;
    } else
        goto CPyL49;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    if (cpy_r_r35.f0 == NULL) goto CPyL31;
    CPy_RestoreExcInfo(cpy_r_r35);
    CPy_XDECREF(cpy_r_r35.f0);
    CPy_XDECREF(cpy_r_r35.f1);
    CPy_XDECREF(cpy_r_r35.f2);
CPyL31: ;
    cpy_r_r41 = CPy_KeepPropagating();
    if (!cpy_r_r41) goto CPyL34;
    CPy_Unreachable();
CPyL33: ;
    return 1;
CPyL34: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL34;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL34;
CPyL38: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL34;
CPyL39: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL34;
CPyL40: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    goto CPyL34;
CPyL41: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    goto CPyL34;
CPyL42: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL11;
CPyL43: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    goto CPyL19;
CPyL44: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r22.f0);
    CPy_DecRef(cpy_r_r22.f1);
    CPy_DecRef(cpy_r_r22.f2);
    goto CPyL17;
CPyL45: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    goto CPyL20;
CPyL46: ;
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r14);
    goto CPyL26;
CPyL47: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL29;
CPyL48: ;
    CPy_DECREF(cpy_r_r40);
    goto CPyL25;
CPyL49: ;
    CPy_XDECREF(cpy_r_r35.f0);
    CPy_XDECREF(cpy_r_r35.f1);
    CPy_XDECREF(cpy_r_r35.f2);
    goto CPyL28;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_mypy_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_mypy_file(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_mypy_file", 56, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

PyObject *CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_mypy_file__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_mypy_file(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_mypy_file__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mypy_file__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MypyFile))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_mypy_file__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_mypy_file__NodeVisitor_glue", -1, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_func(PyObject *cpy_r_self, PyObject *cpy_r_defn) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    tuple_T3OOO cpy_r_r16;
    tuple_T3OOO cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    tuple_T3OOO cpy_r_r28;
    tuple_T3OOO cpy_r_r29;
    tuple_T3OOO cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    cpy_r_r0 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_recurse_into_functions;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "visit_func", "TypeArgumentAnalyzer", "recurse_into_functions", 62, CPyStatic_semanal_typeargs___globals);
        goto CPyL31;
    }
CPyL1: ;
    if (cpy_r_r0) goto CPyL3;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r1 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "visit_func", "TypeArgumentAnalyzer", "scope", 64, CPyStatic_semanal_typeargs___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r1);
CPyL4: ;
    cpy_r_r2 = CPyStatics[705]; /* 'function_scope' */
    PyObject *cpy_r_r3[2] = {cpy_r_r1, cpy_r_defn};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_func", 64, CPyStatic_semanal_typeargs___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r1);
    cpy_r_r6 = PyObject_Type(cpy_r_r5);
    cpy_r_r7 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_func", 64, CPyStatic_semanal_typeargs___globals);
        goto CPyL33;
    }
    cpy_r_r9 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_func", 64, CPyStatic_semanal_typeargs___globals);
        goto CPyL34;
    }
    PyObject *cpy_r_r11[1] = {cpy_r_r5};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_func", 64, CPyStatic_semanal_typeargs___globals);
        goto CPyL34;
    } else
        goto CPyL35;
CPyL8: ;
    cpy_r_r14 = 1;
    cpy_r_r15 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_func(cpy_r_self, cpy_r_defn);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_func", 65, CPyStatic_semanal_typeargs___globals);
    } else
        goto CPyL18;
    cpy_r_r16 = CPy_CatchError();
    cpy_r_r14 = 0;
    cpy_r_r17 = CPy_GetExcInfo();
    cpy_r_r18 = cpy_r_r17.f0;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = cpy_r_r17.f1;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = cpy_r_r17.f2;
    CPy_INCREF(cpy_r_r20);
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    CPy_DecRef(cpy_r_r17.f2);
    PyObject *cpy_r_r21[4] = {cpy_r_r5, cpy_r_r18, cpy_r_r19, cpy_r_r20};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r22, 4, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_func", 64, CPyStatic_semanal_typeargs___globals);
        goto CPyL36;
    }
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    cpy_r_r24 = PyObject_IsTrue(cpy_r_r23);
    CPy_DecRef(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_func", 64, CPyStatic_semanal_typeargs___globals);
        goto CPyL16;
    }
    cpy_r_r26 = cpy_r_r24;
    if (cpy_r_r26) goto CPyL15;
    CPy_Reraise();
    if (!0) {
        goto CPyL16;
    } else
        goto CPyL37;
CPyL14: ;
    CPy_Unreachable();
CPyL15: ;
    CPy_RestoreExcInfo(cpy_r_r16);
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    CPy_DecRef(cpy_r_r16.f2);
    goto CPyL18;
CPyL16: ;
    CPy_RestoreExcInfo(cpy_r_r16);
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    CPy_DecRef(cpy_r_r16.f2);
    cpy_r_r27 = CPy_KeepPropagating();
    if (!cpy_r_r27) {
        goto CPyL19;
    } else
        goto CPyL38;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    tuple_T3OOO __tmp6157 = { NULL, NULL, NULL };
    cpy_r_r28 = __tmp6157;
    cpy_r_r29 = cpy_r_r28;
    goto CPyL20;
CPyL19: ;
    cpy_r_r30 = CPy_CatchError();
    cpy_r_r29 = cpy_r_r30;
CPyL20: ;
    if (!cpy_r_r14) goto CPyL39;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r32[4] = {cpy_r_r5, cpy_r_r31, cpy_r_r31, cpy_r_r31};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r33, 4, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_func", 64, CPyStatic_semanal_typeargs___globals);
        goto CPyL40;
    } else
        goto CPyL41;
CPyL22: ;
    CPy_DECREF(cpy_r_r5);
CPyL23: ;
    if (cpy_r_r29.f0 == NULL) goto CPyL30;
    CPy_Reraise();
    if (!0) {
        goto CPyL26;
    } else
        goto CPyL42;
CPyL25: ;
    CPy_Unreachable();
CPyL26: ;
    if (cpy_r_r29.f0 == NULL) goto CPyL28;
    CPy_RestoreExcInfo(cpy_r_r29);
    CPy_XDECREF(cpy_r_r29.f0);
    CPy_XDECREF(cpy_r_r29.f1);
    CPy_XDECREF(cpy_r_r29.f2);
CPyL28: ;
    cpy_r_r35 = CPy_KeepPropagating();
    if (!cpy_r_r35) goto CPyL31;
    CPy_Unreachable();
CPyL30: ;
    return 1;
CPyL31: ;
    cpy_r_r36 = 2;
    return cpy_r_r36;
CPyL32: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL31;
CPyL34: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL31;
CPyL35: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL8;
CPyL36: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    goto CPyL16;
CPyL37: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    CPy_DecRef(cpy_r_r16.f2);
    goto CPyL14;
CPyL38: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL17;
CPyL39: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    goto CPyL23;
CPyL40: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL26;
CPyL41: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL22;
CPyL42: ;
    CPy_XDECREF(cpy_r_r29.f0);
    CPy_XDECREF(cpy_r_r29.f1);
    CPy_XDECREF(cpy_r_r29.f2);
    goto CPyL25;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_func(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"defn", 0};
    static CPyArg_Parser parser = {"O:visit_func", kwlist, 0};
    PyObject *obj_defn;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_defn)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_defn;
    if (likely((Py_TYPE(obj_defn) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_defn) == CPyType_nodes___LambdaExpr)))
        arg_defn = obj_defn;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_defn); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_func(arg_self, arg_defn);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_func", 61, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_func__MixedTraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_func(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_func__MixedTraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func__MixedTraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely((Py_TYPE(obj_o) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_func__MixedTraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_func__MixedTraverserVisitor_glue", -1, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_func__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_func(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_func__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely((Py_TYPE(obj_o) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_o) == CPyType_nodes___LambdaExpr)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_func__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_func__TraverserVisitor_glue", -1, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def(PyObject *cpy_r_self, PyObject *cpy_r_defn) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    tuple_T3OOO cpy_r_r16;
    tuple_T3OOO cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    tuple_T3OOO cpy_r_r28;
    tuple_T3OOO cpy_r_r29;
    tuple_T3OOO cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    cpy_r_r0 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_scope;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "visit_class_def", "TypeArgumentAnalyzer", "scope", 68, CPyStatic_semanal_typeargs___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_info;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[698]; /* 'class_scope' */
    PyObject *cpy_r_r3[2] = {cpy_r_r0, cpy_r_r1};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_class_def", 68, CPyStatic_semanal_typeargs___globals);
        goto CPyL29;
    }
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r6 = PyObject_Type(cpy_r_r5);
    cpy_r_r7 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_class_def", 68, CPyStatic_semanal_typeargs___globals);
        goto CPyL30;
    }
    cpy_r_r9 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_class_def", 68, CPyStatic_semanal_typeargs___globals);
        goto CPyL31;
    }
    PyObject *cpy_r_r11[1] = {cpy_r_r5};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_class_def", 68, CPyStatic_semanal_typeargs___globals);
        goto CPyL31;
    } else
        goto CPyL32;
CPyL5: ;
    cpy_r_r14 = 1;
    cpy_r_r15 = CPyDef_mixedtraverser___MixedTraverserVisitor___visit_class_def(cpy_r_self, cpy_r_defn);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_class_def", 69, CPyStatic_semanal_typeargs___globals);
    } else
        goto CPyL15;
    cpy_r_r16 = CPy_CatchError();
    cpy_r_r14 = 0;
    cpy_r_r17 = CPy_GetExcInfo();
    cpy_r_r18 = cpy_r_r17.f0;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = cpy_r_r17.f1;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = cpy_r_r17.f2;
    CPy_INCREF(cpy_r_r20);
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    CPy_DecRef(cpy_r_r17.f2);
    PyObject *cpy_r_r21[4] = {cpy_r_r5, cpy_r_r18, cpy_r_r19, cpy_r_r20};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r22, 4, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_class_def", 68, CPyStatic_semanal_typeargs___globals);
        goto CPyL33;
    }
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    cpy_r_r24 = PyObject_IsTrue(cpy_r_r23);
    CPy_DecRef(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_class_def", 68, CPyStatic_semanal_typeargs___globals);
        goto CPyL13;
    }
    cpy_r_r26 = cpy_r_r24;
    if (cpy_r_r26) goto CPyL12;
    CPy_Reraise();
    if (!0) {
        goto CPyL13;
    } else
        goto CPyL34;
CPyL11: ;
    CPy_Unreachable();
CPyL12: ;
    CPy_RestoreExcInfo(cpy_r_r16);
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    CPy_DecRef(cpy_r_r16.f2);
    goto CPyL15;
CPyL13: ;
    CPy_RestoreExcInfo(cpy_r_r16);
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    CPy_DecRef(cpy_r_r16.f2);
    cpy_r_r27 = CPy_KeepPropagating();
    if (!cpy_r_r27) {
        goto CPyL16;
    } else
        goto CPyL35;
CPyL14: ;
    CPy_Unreachable();
CPyL15: ;
    tuple_T3OOO __tmp6158 = { NULL, NULL, NULL };
    cpy_r_r28 = __tmp6158;
    cpy_r_r29 = cpy_r_r28;
    goto CPyL17;
CPyL16: ;
    cpy_r_r30 = CPy_CatchError();
    cpy_r_r29 = cpy_r_r30;
CPyL17: ;
    if (!cpy_r_r14) goto CPyL36;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r32[4] = {cpy_r_r5, cpy_r_r31, cpy_r_r31, cpy_r_r31};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r33, 4, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_class_def", 68, CPyStatic_semanal_typeargs___globals);
        goto CPyL37;
    } else
        goto CPyL38;
CPyL19: ;
    CPy_DECREF(cpy_r_r5);
CPyL20: ;
    if (cpy_r_r29.f0 == NULL) goto CPyL27;
    CPy_Reraise();
    if (!0) {
        goto CPyL23;
    } else
        goto CPyL39;
CPyL22: ;
    CPy_Unreachable();
CPyL23: ;
    if (cpy_r_r29.f0 == NULL) goto CPyL25;
    CPy_RestoreExcInfo(cpy_r_r29);
    CPy_XDECREF(cpy_r_r29.f0);
    CPy_XDECREF(cpy_r_r29.f1);
    CPy_XDECREF(cpy_r_r29.f2);
CPyL25: ;
    cpy_r_r35 = CPy_KeepPropagating();
    if (!cpy_r_r35) goto CPyL28;
    CPy_Unreachable();
CPyL27: ;
    return 1;
CPyL28: ;
    cpy_r_r36 = 2;
    return cpy_r_r36;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL28;
CPyL32: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL5;
CPyL33: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    goto CPyL13;
CPyL34: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    CPy_DecRef(cpy_r_r16.f2);
    goto CPyL11;
CPyL35: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL14;
CPyL36: ;
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r8);
    goto CPyL20;
CPyL37: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL23;
CPyL38: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL19;
CPyL39: ;
    CPy_XDECREF(cpy_r_r29.f0);
    CPy_XDECREF(cpy_r_r29.f1);
    CPy_XDECREF(cpy_r_r29.f2);
    goto CPyL22;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"defn", 0};
    static CPyArg_Parser parser = {"O:visit_class_def", kwlist, 0};
    PyObject *obj_defn;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_defn)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_defn;
    if (likely(Py_TYPE(obj_defn) == CPyType_nodes___ClassDef))
        arg_defn = obj_defn;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_defn); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def(arg_self, arg_defn);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_class_def", 67, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__MixedTraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__MixedTraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__MixedTraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__MixedTraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_class_def__MixedTraverserVisitor_glue", -1, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_class_def__TraverserVisitor_glue", -1, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

PyObject *CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_class_def__NodeVisitor_glue", -1, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

PyObject *CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_class_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_class_def__StatementVisitor_glue", -1, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___nodes___BlockObject *)cpy_r_o)->_is_unreachable;
    if (cpy_r_r0) goto CPyL2;
CPyL1: ;
    cpy_r_r1 = CPyDef_traverser___TraverserVisitor___visit_block(cpy_r_self, cpy_r_o);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_block", 73, CPyStatic_semanal_typeargs___globals);
        goto CPyL3;
    }
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_block", 71, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_block) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block(cpy_r_self, cpy_r_block);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_block__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:visit_block__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_nodes___Block))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_block); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block__TraverserVisitor_glue(arg_self, arg_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_block__TraverserVisitor_glue", -1, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

PyObject *CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_block__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_block__NodeVisitor_glue", -1, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

PyObject *CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_block__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_block__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_block__StatementVisitor_glue", -1, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_r37;
    int64_t cpy_r_r38;
    char cpy_r_r39;
    int64_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_correct;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyPtr cpy_r_r49;
    int64_t cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    CPyTagged cpy_r_r67;
    CPyPtr cpy_r_r68;
    int64_t cpy_r_r69;
    CPyTagged cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyPtr cpy_r_r87;
    int64_t cpy_r_r88;
    CPyTagged cpy_r_r89;
    CPyTagged cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_exp_len;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    int64_t cpy_r_r98;
    CPyTagged cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject **cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyPtr cpy_r_r109;
    int64_t cpy_r_r110;
    CPyTagged cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    CPyTagged cpy_r_r119;
    CPyTagged cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_is_error;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    cpy_r_r0 = CPyDef_typetraverser___TypeTraverserVisitor___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 76, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    cpy_r_r1 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_seen_aliases;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "visit_type_alias_type", "TypeArgumentAnalyzer", "seen_aliases", 77, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = PySet_Contains(cpy_r_r1, cpy_r_t);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 77, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL5;
    return 1;
CPyL5: ;
    cpy_r_r5 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_seen_aliases;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "visit_type_alias_type", "TypeArgumentAnalyzer", "seen_aliases", 82, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r5);
CPyL6: ;
    cpy_r_r6 = PySet_Add(cpy_r_r5, cpy_r_t);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 82, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    cpy_r_r8 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_alias;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 != cpy_r_r9;
    if (cpy_r_r10) goto CPyL14;
    cpy_r_r11 = CPyStatics[5254]; /* 'Unfixed type alias ' */
    cpy_r_r12 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_type_ref;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = PyObject_Str(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 87, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    cpy_r_r14 = CPyStr_Build(2, cpy_r_r11, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 87, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    cpy_r_r15 = CPyModule_builtins;
    cpy_r_r16 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 87, CPyStatic_semanal_typeargs___globals);
        goto CPyL69;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_r14};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 87, CPyStatic_semanal_typeargs___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r14);
    CPy_Raise(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 87, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r21 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_types___flatten_nested_tuples(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 88, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    cpy_r_args = cpy_r_r22;
    cpy_r_r23 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_alias;
    if (likely(cpy_r_r23 != Py_None))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 89, CPyStatic_semanal_typeargs___globals, "mypy.nodes.TypeAlias", cpy_r_r23);
        goto CPyL70;
    }
    cpy_r_r25 = ((mypy___nodes___TypeAliasObject *)cpy_r_r24)->_tvar_tuple_index;
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_r25 != cpy_r_r26;
    if (!cpy_r_r27) goto CPyL34;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_alias;
    if (likely(cpy_r_r31 != Py_None))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 90, CPyStatic_semanal_typeargs___globals, "mypy.nodes.TypeAlias", cpy_r_r31);
        goto CPyL70;
    }
    cpy_r_r33 = ((mypy___nodes___TypeAliasObject *)cpy_r_r32)->_alias_tvars;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r33)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = CPyTagged_Subtract(cpy_r_r36, 2);
    cpy_r_r38 = cpy_r_r30 & 1;
    cpy_r_r39 = cpy_r_r38 == 0;
    cpy_r_r40 = cpy_r_r37 & 1;
    cpy_r_r41 = cpy_r_r40 == 0;
    cpy_r_r42 = cpy_r_r39 & cpy_r_r41;
    if (!cpy_r_r42) goto CPyL20;
    cpy_r_r43 = (Py_ssize_t)cpy_r_r30 >= (Py_ssize_t)cpy_r_r37;
    CPyTagged_DECREF(cpy_r_r37);
    cpy_r_r44 = cpy_r_r43;
    goto CPyL21;
CPyL20: ;
    cpy_r_r45 = CPyTagged_IsLt_(cpy_r_r30, cpy_r_r37);
    CPyTagged_DECREF(cpy_r_r37);
    cpy_r_r46 = cpy_r_r45 ^ 1;
    cpy_r_r44 = cpy_r_r46;
CPyL21: ;
    cpy_r_correct = cpy_r_r44;
    cpy_r_r47 = 0;
    cpy_r_r48 = 0;
CPyL22: ;
    cpy_r_r49 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r50 = *(int64_t *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 << 1;
    cpy_r_r52 = (Py_ssize_t)cpy_r_r48 < (Py_ssize_t)cpy_r_r51;
    if (!cpy_r_r52) goto CPyL32;
    cpy_r_r53 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r48);
    if (likely(PyObject_TypeCheck(cpy_r_r53, CPyType_types___Type)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 91, CPyStatic_semanal_typeargs___globals, "mypy.types.Type", cpy_r_r53);
        goto CPyL70;
    }
    cpy_r_a = cpy_r_r54;
    cpy_r_r55 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r56 = (CPyPtr)&((PyObject *)cpy_r_a)->ob_type;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 == cpy_r_r55;
    if (cpy_r_r58) {
        goto CPyL26;
    } else
        goto CPyL71;
CPyL25: ;
    cpy_r_r59 = cpy_r_r58;
    goto CPyL29;
CPyL26: ;
    if (likely(Py_TYPE(cpy_r_a) == CPyType_types___UnpackType))
        cpy_r_r60 = cpy_r_a;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 92, CPyStatic_semanal_typeargs___globals, "mypy.types.UnpackType", cpy_r_a);
        goto CPyL72;
    }
    cpy_r_r61 = ((mypy___types___UnpackTypeObject *)cpy_r_r60)->_type;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_a);
    cpy_r_r62 = CPyDef_types___get_proper_type(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 92, CPyStatic_semanal_typeargs___globals);
        goto CPyL70;
    }
    cpy_r_r63 = (PyObject *)CPyType_types___Instance;
    cpy_r_r64 = (CPyPtr)&((PyObject *)cpy_r_r62)->ob_type;
    cpy_r_r65 = *(PyObject * *)cpy_r_r64;
    CPy_DECREF(cpy_r_r62);
    cpy_r_r66 = cpy_r_r65 == cpy_r_r63;
    cpy_r_r59 = cpy_r_r66;
CPyL29: ;
    if (!cpy_r_r59) goto CPyL31;
    cpy_r_r47 = 1;
    goto CPyL32;
CPyL31: ;
    cpy_r_r67 = cpy_r_r48 + 2;
    cpy_r_r48 = cpy_r_r67;
    goto CPyL22;
CPyL32: ;
    if (!cpy_r_r47) goto CPyL36;
    cpy_r_correct = 1;
    goto CPyL36;
CPyL34: ;
    cpy_r_r68 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r69 = *(int64_t *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 << 1;
    cpy_r_r71 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_alias;
    if (likely(cpy_r_r71 != Py_None))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 97, CPyStatic_semanal_typeargs___globals, "mypy.nodes.TypeAlias", cpy_r_r71);
        goto CPyL70;
    }
    cpy_r_r73 = ((mypy___nodes___TypeAliasObject *)cpy_r_r72)->_alias_tvars;
    cpy_r_r74 = (CPyPtr)&((PyVarObject *)cpy_r_r73)->ob_size;
    cpy_r_r75 = *(int64_t *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 << 1;
    cpy_r_r77 = cpy_r_r70 == cpy_r_r76;
    cpy_r_correct = cpy_r_r77;
CPyL36: ;
    if (cpy_r_correct) goto CPyL58;
    cpy_r_r78 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_alias;
    if (likely(cpy_r_r78 != Py_None))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 99, CPyStatic_semanal_typeargs___globals, "mypy.nodes.TypeAlias", cpy_r_r78);
        goto CPyL70;
    }
    cpy_r_r80 = ((mypy___nodes___TypeAliasObject *)cpy_r_r79)->_tvar_tuple_index;
    cpy_r_r81 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r82 = cpy_r_r80 != cpy_r_r81;
    if (!cpy_r_r82) goto CPyL43;
    cpy_r_r83 = CPyStatics[5255]; /* 'at least ' */
    cpy_r_r84 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_alias;
    if (likely(cpy_r_r84 != Py_None))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 100, CPyStatic_semanal_typeargs___globals, "mypy.nodes.TypeAlias", cpy_r_r84);
        goto CPyL70;
    }
    cpy_r_r86 = ((mypy___nodes___TypeAliasObject *)cpy_r_r85)->_alias_tvars;
    cpy_r_r87 = (CPyPtr)&((PyVarObject *)cpy_r_r86)->ob_size;
    cpy_r_r88 = *(int64_t *)cpy_r_r87;
    cpy_r_r89 = cpy_r_r88 << 1;
    cpy_r_r90 = CPyTagged_Subtract(cpy_r_r89, 2);
    cpy_r_r91 = CPyTagged_Str(cpy_r_r90);
    CPyTagged_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 100, CPyStatic_semanal_typeargs___globals);
        goto CPyL70;
    }
    cpy_r_r92 = CPyStr_Build(2, cpy_r_r83, cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 100, CPyStatic_semanal_typeargs___globals);
        goto CPyL70;
    }
    cpy_r_exp_len = cpy_r_r92;
    goto CPyL47;
CPyL43: ;
    cpy_r_r93 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r94 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_alias;
    if (likely(cpy_r_r94 != Py_None))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 102, CPyStatic_semanal_typeargs___globals, "mypy.nodes.TypeAlias", cpy_r_r94);
        goto CPyL70;
    }
    cpy_r_r96 = ((mypy___nodes___TypeAliasObject *)cpy_r_r95)->_alias_tvars;
    cpy_r_r97 = (CPyPtr)&((PyVarObject *)cpy_r_r96)->ob_size;
    cpy_r_r98 = *(int64_t *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 << 1;
    cpy_r_r100 = CPyStatics[163]; /* '' */
    cpy_r_r101 = CPyStatics[193]; /* 'format' */
    cpy_r_r102 = CPyTagged_StealAsObject(cpy_r_r99);
    PyObject *cpy_r_r103[3] = {cpy_r_r93, cpy_r_r102, cpy_r_r100};
    cpy_r_r104 = (PyObject **)&cpy_r_r103;
    cpy_r_r105 = PyObject_VectorcallMethod(cpy_r_r101, cpy_r_r104, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 102, CPyStatic_semanal_typeargs___globals);
        goto CPyL73;
    }
    CPy_DECREF(cpy_r_r102);
    if (likely(PyUnicode_Check(cpy_r_r105)))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 102, CPyStatic_semanal_typeargs___globals, "str", cpy_r_r105);
        goto CPyL70;
    }
    cpy_r_exp_len = cpy_r_r106;
CPyL47: ;
    cpy_r_r107 = CPyStatics[5256]; /* 'Bad number of arguments for type alias, expected: ' */
    cpy_r_r108 = CPyStatics[5257]; /* ', given: ' */
    cpy_r_r109 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r110 = *(int64_t *)cpy_r_r109;
    CPy_DECREF(cpy_r_args);
    cpy_r_r111 = cpy_r_r110 << 1;
    cpy_r_r112 = CPyTagged_Str(cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 104, CPyStatic_semanal_typeargs___globals);
        goto CPyL74;
    }
    cpy_r_r113 = CPyStr_Build(4, cpy_r_r107, cpy_r_exp_len, cpy_r_r108, cpy_r_r112);
    CPy_DECREF(cpy_r_exp_len);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 104, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    cpy_r_r114 = CPyStatic_errorcodes___TYPE_ARG;
    if (unlikely(cpy_r_r114 == NULL)) {
        goto CPyL75;
    } else
        goto CPyL52;
CPyL50: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPE_ARG\" was not set");
    cpy_r_r115 = 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 106, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r116 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___fail(cpy_r_self, cpy_r_r113, cpy_r_t, cpy_r_r114);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r116 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 103, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    cpy_r_r117 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_alias;
    CPy_INCREF(cpy_r_r117);
    if (likely(cpy_r_r117 != Py_None))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 109, CPyStatic_semanal_typeargs___globals, "mypy.nodes.TypeAlias", cpy_r_r117);
        goto CPyL68;
    }
    cpy_r_r119 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_line;
    CPyTagged_INCREF(cpy_r_r119);
    cpy_r_r120 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_column;
    CPyTagged_INCREF(cpy_r_r120);
    cpy_r_r121 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "visit_type_alias_type", "TypeArgumentAnalyzer", "options", 109, CPyStatic_semanal_typeargs___globals);
        goto CPyL76;
    }
    CPy_INCREF(cpy_r_r121);
CPyL55: ;
    cpy_r_r122 = CPyStatics[1204]; /* 'fail' */
    cpy_r_r123 = CPyObject_GetAttr(cpy_r_self, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 109, CPyStatic_semanal_typeargs___globals);
        goto CPyL77;
    }
    cpy_r_r124 = 2;
    cpy_r_r125 = NULL;
    cpy_r_r126 = CPyDef_typeanal___set_any_tvars(cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, 1, cpy_r_r124, cpy_r_r123, cpy_r_r125);
    CPy_DECREF(cpy_r_r118);
    CPyTagged_DECREF(cpy_r_r119);
    CPyTagged_DECREF(cpy_r_r120);
    CPy_DECREF(cpy_r_r121);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 108, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    cpy_r_r127 = ((mypy___types___TypeAliasTypeObject *)cpy_r_r126)->_args;
    CPy_INCREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_args);
    ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_args = cpy_r_r127;
    goto CPyL59;
CPyL58: ;
    CPy_DECREF(((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_args);
    ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_args = cpy_r_args;
CPyL59: ;
    cpy_r_r130 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_alias;
    CPy_INCREF(cpy_r_r130);
    if (likely(cpy_r_r130 != Py_None))
        cpy_r_r131 = cpy_r_r130;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 113, CPyStatic_semanal_typeargs___globals, "mypy.nodes.TypeAlias", cpy_r_r130);
        goto CPyL68;
    }
    cpy_r_r132 = CPY_GET_ATTR(cpy_r_r131, CPyType_nodes___TypeAlias, 8, mypy___nodes___TypeAliasObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 113, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
CPyL61: ;
    cpy_r_r133 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r133);
    cpy_r_r134 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_alias;
    if (likely(cpy_r_r134 != Py_None))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 113, CPyStatic_semanal_typeargs___globals, "mypy.nodes.TypeAlias", cpy_r_r134);
        goto CPyL78;
    }
    cpy_r_r136 = ((mypy___nodes___TypeAliasObject *)cpy_r_r135)->_alias_tvars;
    CPy_INCREF(cpy_r_r136);
    cpy_r_r137 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___validate_args(cpy_r_self, cpy_r_r132, cpy_r_r133, cpy_r_r136, cpy_r_t);
    CPy_DECREF(cpy_r_r132);
    CPy_DECREF(cpy_r_r133);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 113, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    cpy_r_is_error = cpy_r_r137;
    if (cpy_r_is_error) goto CPyL67;
    cpy_r_r138 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 117, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    }
    if (likely(cpy_r_r138 != Py_None))
        cpy_r_r139 = cpy_r_r138;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 117, CPyStatic_semanal_typeargs___globals, "mypy.types.ProperType", cpy_r_r138);
        goto CPyL68;
    }
    cpy_r_r140 = CPY_GET_METHOD(cpy_r_r139, CPyType_types___ProperType, 9, mypy___types___ProperTypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r139, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 117, CPyStatic_semanal_typeargs___globals);
        goto CPyL68;
    } else
        goto CPyL79;
CPyL67: ;
    return 1;
CPyL68: ;
    cpy_r_r141 = 2;
    return cpy_r_r141;
CPyL69: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL68;
CPyL70: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL68;
CPyL71: ;
    CPy_DECREF(cpy_r_a);
    goto CPyL25;
CPyL72: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_a);
    goto CPyL68;
CPyL73: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r102);
    goto CPyL68;
CPyL74: ;
    CPy_DecRef(cpy_r_exp_len);
    goto CPyL68;
CPyL75: ;
    CPy_DecRef(cpy_r_r113);
    goto CPyL50;
CPyL76: ;
    CPy_DecRef(cpy_r_r118);
    CPyTagged_DecRef(cpy_r_r119);
    CPyTagged_DecRef(cpy_r_r120);
    goto CPyL68;
CPyL77: ;
    CPy_DecRef(cpy_r_r118);
    CPyTagged_DecRef(cpy_r_r119);
    CPyTagged_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r121);
    goto CPyL68;
CPyL78: ;
    CPy_DecRef(cpy_r_r132);
    CPy_DecRef(cpy_r_r133);
    goto CPyL68;
CPyL79: ;
    CPy_DECREF(cpy_r_r140);
    goto CPyL67;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_type_alias_type(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type", 75, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

PyObject *CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_info = cpy_r_r0;
    cpy_r_r1 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_info)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (cpy_r_r4) {
        goto CPyL8;
    } else
        goto CPyL2;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r5 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_instance", 125, CPyStatic_semanal_typeargs___globals);
        goto CPyL9;
    }
CPyL3: ;
    cpy_r_r6 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_defn;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "visit_instance", "TypeInfo", "defn", 125, CPyStatic_semanal_typeargs___globals);
        goto CPyL10;
    }
CPyL4: ;
    cpy_r_r8 = ((mypy___nodes___ClassDefObject *)cpy_r_r7)->_type_vars;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_info);
    cpy_r_r9 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___validate_args(cpy_r_self, cpy_r_r5, cpy_r_r6, cpy_r_r8, cpy_r_t);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_instance", 125, CPyStatic_semanal_typeargs___globals);
        goto CPyL7;
    }
    cpy_r_r10 = CPyDef_typetraverser___TypeTraverserVisitor___visit_instance(cpy_r_self, cpy_r_t);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_instance", 126, CPyStatic_semanal_typeargs___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL8: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL1;
CPyL9: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL7;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_instance(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_instance", 119, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

PyObject *CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___validate_args(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_args, PyObject *cpy_r_type_vars, PyObject *cpy_r_ctx) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_v_2;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_prefix;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_tvt;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyTagged cpy_r_r41;
    tuple_T3OOO cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_start;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_middle;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_end;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyPtr cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_is_error;
    CPyTagged cpy_r_r62;
    CPyTagged cpy_r_i_2;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    int64_t cpy_r_r67;
    CPyTagged cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_tvar;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    int64_t cpy_r_r98;
    CPyTagged cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyPtr cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_arg_values;
    CPyPtr cpy_r_r108;
    int64_t cpy_r_r109;
    CPyTagged cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject **cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    CPyPtr cpy_r_r124;
    CPyPtr cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    CPyPtr cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    CPyTagged cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    CPyTagged cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject **cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    CPyPtr cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    CPyPtr cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    CPyPtr cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    CPyPtr cpy_r_r181;
    PyObject *cpy_r_r182;
    char cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    CPyPtr cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    CPyTagged cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    CPyTagged cpy_r_r197;
    CPyTagged cpy_r_r198;
    char cpy_r_r199;
    char cpy_r_r200;
    cpy_r_r0 = 0;
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_type_vars)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_type_vars, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___TypeVarLikeType)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 133, CPyStatic_semanal_typeargs___globals, "mypy.types.TypeVarLikeType", cpy_r_r6);
        goto CPyL104;
    }
    cpy_r_v = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_v)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    CPy_DECREF(cpy_r_v);
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL5;
    cpy_r_r0 = 1;
    goto CPyL6;
CPyL5: ;
    cpy_r_r12 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r12;
    goto CPyL1;
CPyL6: ;
    if (!cpy_r_r0) goto CPyL105;
    cpy_r_r13 = 0;
    cpy_r_i = 0;
    cpy_r_r14 = 0;
CPyL8: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_type_vars)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL106;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_type_vars, cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_types___TypeVarLikeType)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 134, CPyStatic_semanal_typeargs___globals, "mypy.types.TypeVarLikeType", cpy_r_r19);
        goto CPyL107;
    }
    cpy_r_v_2 = cpy_r_r20;
    cpy_r_r21 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_v_2)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    CPy_DECREF(cpy_r_v_2);
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL108;
    cpy_r_r25 = cpy_r_i;
    goto CPyL15;
CPyL12: ;
    cpy_r_r26 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r26;
    cpy_r_i = cpy_r_r26;
    cpy_r_r27 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r27;
    goto CPyL8;
CPyL13: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 134, CPyStatic_semanal_typeargs___globals);
        goto CPyL104;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_prefix = cpy_r_r25;
    cpy_r_r29 = CPyList_GetItem(cpy_r_type_vars, cpy_r_prefix);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 135, CPyStatic_semanal_typeargs___globals);
        goto CPyL109;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r29, CPyType_types___TypeVarLikeType)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 135, CPyStatic_semanal_typeargs___globals, "mypy.types.TypeVarLikeType", cpy_r_r29);
        goto CPyL109;
    }
    cpy_r_tvt = cpy_r_r30;
    cpy_r_r31 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_tvt)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (cpy_r_r34) {
        goto CPyL20;
    } else
        goto CPyL110;
CPyL18: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r35 = 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 136, CPyStatic_semanal_typeargs___globals);
        goto CPyL104;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r36 = PySequence_Tuple(cpy_r_args);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 138, CPyStatic_semanal_typeargs___globals);
        goto CPyL111;
    }
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_type_vars)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = CPyTagged_Subtract(cpy_r_r39, cpy_r_prefix);
    cpy_r_r41 = CPyTagged_Subtract(cpy_r_r40, 2);
    CPyTagged_DECREF(cpy_r_r40);
    cpy_r_r42 = CPyDef_types___split_with_prefix_and_suffix(cpy_r_r36, cpy_r_prefix, cpy_r_r41);
    CPy_DECREF(cpy_r_r36);
    CPyTagged_DECREF(cpy_r_prefix);
    CPyTagged_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 137, CPyStatic_semanal_typeargs___globals);
        goto CPyL112;
    }
    cpy_r_r43 = cpy_r_r42.f0;
    CPy_INCREF(cpy_r_r43);
    cpy_r_start = cpy_r_r43;
    cpy_r_r44 = cpy_r_r42.f1;
    CPy_INCREF(cpy_r_r44);
    cpy_r_middle = cpy_r_r44;
    cpy_r_r45 = cpy_r_r42.f2;
    CPy_INCREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r42.f0);
    CPy_DECREF(cpy_r_r42.f1);
    CPy_DECREF(cpy_r_r42.f2);
    cpy_r_end = cpy_r_r45;
    cpy_r_r46 = PySequence_List(cpy_r_start);
    CPy_DECREF(cpy_r_start);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 140, CPyStatic_semanal_typeargs___globals);
        goto CPyL113;
    }
    cpy_r_r47 = PySequence_List(cpy_r_middle);
    CPy_DECREF(cpy_r_middle);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 140, CPyStatic_semanal_typeargs___globals);
        goto CPyL114;
    }
    if (likely(Py_TYPE(cpy_r_tvt) == CPyType_types___TypeVarTupleType))
        cpy_r_r48 = cpy_r_tvt;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 140, CPyStatic_semanal_typeargs___globals, "mypy.types.TypeVarTupleType", cpy_r_tvt);
        goto CPyL115;
    }
    cpy_r_r49 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r48)->_tuple_fallback;
    CPy_INCREF(cpy_r_r49);
    CPy_DECREF(cpy_r_tvt);
    cpy_r_r50 = CPY_INT_TAG;
    cpy_r_r51 = CPY_INT_TAG;
    cpy_r_r52 = 2;
    cpy_r_r53 = CPyDef_types___TupleType(cpy_r_r47, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 140, CPyStatic_semanal_typeargs___globals);
        goto CPyL116;
    }
    cpy_r_r54 = PyList_New(1);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 140, CPyStatic_semanal_typeargs___globals);
        goto CPyL117;
    }
    cpy_r_r55 = (CPyPtr)&((PyListObject *)cpy_r_r54)->ob_item;
    cpy_r_r56 = *(CPyPtr *)cpy_r_r55;
    *(PyObject * *)cpy_r_r56 = cpy_r_r53;
    cpy_r_r57 = PyNumber_Add(cpy_r_r46, cpy_r_r54);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 140, CPyStatic_semanal_typeargs___globals);
        goto CPyL118;
    }
    if (likely(PyList_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 140, CPyStatic_semanal_typeargs___globals, "list", cpy_r_r57);
        goto CPyL118;
    }
    cpy_r_r59 = PySequence_List(cpy_r_end);
    CPy_DECREF(cpy_r_end);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 140, CPyStatic_semanal_typeargs___globals);
        goto CPyL119;
    }
    cpy_r_r60 = PyNumber_Add(cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 140, CPyStatic_semanal_typeargs___globals);
        goto CPyL104;
    }
    if (likely(PyList_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 140, CPyStatic_semanal_typeargs___globals, "list", cpy_r_r60);
        goto CPyL104;
    }
    cpy_r_args = cpy_r_r61;
CPyL33: ;
    cpy_r_is_error = 0;
    cpy_r_r62 = 0;
    cpy_r_i_2 = 0;
    CPyTagged_DECREF(cpy_r_i_2);
    cpy_r_r63 = PyObject_GetIter(cpy_r_args);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 143, CPyStatic_semanal_typeargs___globals);
        goto CPyL104;
    }
    cpy_r_r64 = 0;
CPyL35: ;
    cpy_r_r65 = PyIter_Next(cpy_r_r63);
    if (cpy_r_r65 == NULL) goto CPyL120;
    cpy_r_r66 = (CPyPtr)&((PyVarObject *)cpy_r_type_vars)->ob_size;
    cpy_r_r67 = *(int64_t *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 << 1;
    cpy_r_r69 = (Py_ssize_t)cpy_r_r64 < (Py_ssize_t)cpy_r_r68;
    if (!cpy_r_r69) goto CPyL121;
    if (likely(PyObject_TypeCheck(cpy_r_r65, CPyType_types___Type)))
        cpy_r_r70 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 143, CPyStatic_semanal_typeargs___globals, "mypy.types.Type", cpy_r_r65);
        goto CPyL122;
    }
    cpy_r_arg = cpy_r_r70;
    cpy_r_r71 = CPyList_GetItemUnsafe(cpy_r_type_vars, cpy_r_r64);
    if (likely(PyObject_TypeCheck(cpy_r_r71, CPyType_types___TypeVarLikeType)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 143, CPyStatic_semanal_typeargs___globals, "mypy.types.TypeVarLikeType", cpy_r_r71);
        goto CPyL123;
    }
    cpy_r_tvar = cpy_r_r72;
    cpy_r_r73 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r74 = (CPyPtr)&((PyObject *)cpy_r_tvar)->ob_type;
    cpy_r_r75 = *(PyObject * *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 == cpy_r_r73;
    if (!cpy_r_r76) goto CPyL85;
    cpy_r_r77 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r78 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r79 = *(PyObject * *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 == cpy_r_r77;
    if (cpy_r_r80) {
        goto CPyL124;
    } else
        goto CPyL47;
CPyL41: ;
    cpy_r_is_error = 1;
    cpy_r_r81 = CPyStatics[5258]; /* 'Invalid location for ParamSpec "' */
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_types___ParamSpecType))
        cpy_r_r82 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 148, CPyStatic_semanal_typeargs___globals, "mypy.types.ParamSpecType", cpy_r_arg);
        goto CPyL123;
    }
    cpy_r_r83 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r82)->_name;
    CPy_INCREF(cpy_r_r83);
    cpy_r_r84 = CPyStatics[178]; /* '"' */
    cpy_r_r85 = CPyStr_Build(3, cpy_r_r81, cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 148, CPyStatic_semanal_typeargs___globals);
        goto CPyL123;
    }
    cpy_r_r86 = NULL;
    cpy_r_r87 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___fail(cpy_r_self, cpy_r_r85, cpy_r_ctx, cpy_r_r86);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r87 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 148, CPyStatic_semanal_typeargs___globals);
        goto CPyL123;
    }
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_types___ParamSpecType))
        cpy_r_r88 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 151, CPyStatic_semanal_typeargs___globals, "mypy.types.ParamSpecType", cpy_r_arg);
        goto CPyL123;
    }
    cpy_r_r89 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r88)->_name;
    CPy_INCREF(cpy_r_r89);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r90 = CPyStatics[5259]; /* ('You can use ParamSpec as the first argument to '
                                     "Callable, e.g., 'Callable[") */
    cpy_r_r91 = CPyStatics[5260]; /* ", int]'" */
    cpy_r_r92 = CPyStr_Build(3, cpy_r_r90, cpy_r_r89, cpy_r_r91);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 150, CPyStatic_semanal_typeargs___globals);
        goto CPyL122;
    }
    cpy_r_r93 = NULL;
    cpy_r_r94 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___note(cpy_r_self, cpy_r_r92, cpy_r_ctx, cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r94 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 149, CPyStatic_semanal_typeargs___globals);
        goto CPyL122;
    } else
        goto CPyL101;
CPyL47: ;
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarType))
        cpy_r_r95 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 155, CPyStatic_semanal_typeargs___globals, "mypy.types.TypeVarType", cpy_r_tvar);
        goto CPyL125;
    }
    cpy_r_r96 = ((mypy___types___TypeVarTypeObject *)cpy_r_r95)->_values;
    CPy_INCREF(cpy_r_r96);
    cpy_r_r97 = (CPyPtr)&((PyVarObject *)cpy_r_r96)->ob_size;
    cpy_r_r98 = *(int64_t *)cpy_r_r97;
    CPy_DECREF(cpy_r_r96);
    cpy_r_r99 = cpy_r_r98 << 1;
    cpy_r_r100 = cpy_r_r99 != 0;
    if (!cpy_r_r100) goto CPyL68;
    cpy_r_r101 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r102 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r103 = *(PyObject * *)cpy_r_r102;
    cpy_r_r104 = cpy_r_r103 == cpy_r_r101;
    if (!cpy_r_r104) goto CPyL61;
    cpy_r_r105 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_in_type_alias_expr;
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "validate_args", "TypeArgumentAnalyzer", "in_type_alias_expr", 157, CPyStatic_semanal_typeargs___globals);
        goto CPyL125;
    }
CPyL51: ;
    if (cpy_r_r105) goto CPyL126;
CPyL52: ;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_types___TypeVarType))
        cpy_r_r106 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 161, CPyStatic_semanal_typeargs___globals, "mypy.types.TypeVarType", cpy_r_arg);
        goto CPyL125;
    }
    cpy_r_r107 = ((mypy___types___TypeVarTypeObject *)cpy_r_r106)->_values;
    CPy_INCREF(cpy_r_r107);
    cpy_r_arg_values = cpy_r_r107;
    cpy_r_r108 = (CPyPtr)&((PyVarObject *)cpy_r_arg_values)->ob_size;
    cpy_r_r109 = *(int64_t *)cpy_r_r108;
    cpy_r_r110 = cpy_r_r109 << 1;
    cpy_r_r111 = cpy_r_r110 != 0;
    if (cpy_r_r111) {
        goto CPyL63;
    } else
        goto CPyL127;
CPyL54: ;
    cpy_r_is_error = 1;
    cpy_r_r112 = CPyStatics[3247]; /* ('Type variable "{}" not valid as type argument value '
                                      'for "{}"') */
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_types___TypeVarType))
        cpy_r_r113 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 165, CPyStatic_semanal_typeargs___globals, "mypy.types.TypeVarType", cpy_r_arg);
        goto CPyL123;
    }
    cpy_r_r114 = ((mypy___types___TypeVarTypeObject *)cpy_r_r113)->_name;
    CPy_INCREF(cpy_r_r114);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r115 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r116[3] = {cpy_r_r112, cpy_r_r114, cpy_r_name};
    cpy_r_r117 = (PyObject **)&cpy_r_r116;
    cpy_r_r118 = PyObject_VectorcallMethod(cpy_r_r115, cpy_r_r117, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 165, CPyStatic_semanal_typeargs___globals);
        goto CPyL128;
    }
    CPy_DECREF(cpy_r_r114);
    if (likely(PyUnicode_Check(cpy_r_r118)))
        cpy_r_r119 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 165, CPyStatic_semanal_typeargs___globals, "str", cpy_r_r118);
        goto CPyL122;
    }
    cpy_r_r120 = CPyStatic_errorcodes___TYPE_VAR;
    if (unlikely(cpy_r_r120 == NULL)) {
        goto CPyL129;
    } else
        goto CPyL60;
CPyL58: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPE_VAR\" was not set");
    cpy_r_r121 = 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 167, CPyStatic_semanal_typeargs___globals);
        goto CPyL104;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r122 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___fail(cpy_r_self, cpy_r_r119, cpy_r_ctx, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r122 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 164, CPyStatic_semanal_typeargs___globals);
        goto CPyL122;
    } else
        goto CPyL101;
CPyL61: ;
    cpy_r_r123 = PyList_New(1);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 171, CPyStatic_semanal_typeargs___globals);
        goto CPyL125;
    }
    cpy_r_r124 = (CPyPtr)&((PyListObject *)cpy_r_r123)->ob_item;
    cpy_r_r125 = *(CPyPtr *)cpy_r_r124;
    CPy_INCREF(cpy_r_arg);
    *(PyObject * *)cpy_r_r125 = cpy_r_arg;
    cpy_r_arg_values = cpy_r_r123;
CPyL63: ;
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarType))
        cpy_r_r126 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 172, CPyStatic_semanal_typeargs___globals, "mypy.types.TypeVarType", cpy_r_tvar);
        goto CPyL130;
    }
    cpy_r_r127 = ((mypy___types___TypeVarTypeObject *)cpy_r_r126)->_name;
    CPy_INCREF(cpy_r_r127);
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarType))
        cpy_r_r128 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 172, CPyStatic_semanal_typeargs___globals, "mypy.types.TypeVarType", cpy_r_tvar);
        goto CPyL131;
    }
    cpy_r_r129 = ((mypy___types___TypeVarTypeObject *)cpy_r_r128)->_values;
    CPy_INCREF(cpy_r_r129);
    cpy_r_r130 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___check_type_var_values(cpy_r_self, cpy_r_name, cpy_r_arg_values, cpy_r_r127, cpy_r_r129, cpy_r_ctx);
    CPy_DECREF(cpy_r_arg_values);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r130 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 172, CPyStatic_semanal_typeargs___globals);
        goto CPyL125;
    }
    if (!cpy_r_r130) goto CPyL68;
    cpy_r_is_error = 1;
CPyL68: ;
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarType))
        cpy_r_r131 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 174, CPyStatic_semanal_typeargs___globals, "mypy.types.TypeVarType", cpy_r_tvar);
        goto CPyL125;
    }
    cpy_r_r132 = ((mypy___types___TypeVarTypeObject *)cpy_r_r131)->_upper_bound;
    CPy_INCREF(cpy_r_r132);
    cpy_r_r133 = NULL;
    cpy_r_r134 = 2;
    cpy_r_r135 = 2;
    cpy_r_r136 = 2;
    cpy_r_r137 = 2;
    cpy_r_r138 = 2;
    cpy_r_r139 = NULL;
    cpy_r_r140 = CPyDef_subtypes___is_subtype(cpy_r_arg, cpy_r_r132, cpy_r_r133, cpy_r_r134, cpy_r_r135, cpy_r_r136, cpy_r_r137, cpy_r_r138, cpy_r_r139);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r140 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 174, CPyStatic_semanal_typeargs___globals);
        goto CPyL125;
    }
    if (cpy_r_r140) goto CPyL126;
    cpy_r_r141 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_in_type_alias_expr;
    if (unlikely(cpy_r_r141 == 2)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "validate_args", "TypeArgumentAnalyzer", "in_type_alias_expr", 175, CPyStatic_semanal_typeargs___globals);
        goto CPyL125;
    }
CPyL72: ;
    if (!cpy_r_r141) goto CPyL74;
CPyL73: ;
    cpy_r_r142 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r143 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r144 = *(PyObject * *)cpy_r_r143;
    cpy_r_r145 = cpy_r_r144 == cpy_r_r142;
    if (cpy_r_r145) goto CPyL126;
CPyL74: ;
    cpy_r_is_error = 1;
    cpy_r_r146 = CPyStatics[3249]; /* 'Type argument {} of "{}" must be a subtype of {}' */
    cpy_r_r147 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "validate_args", "TypeArgumentAnalyzer", "options", 182, CPyStatic_semanal_typeargs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r147);
CPyL75: ;
    cpy_r_r148 = CPY_INT_TAG;
    cpy_r_r149 = 2;
    cpy_r_r150 = CPyDef_messages___format_type(cpy_r_arg, cpy_r_r147, cpy_r_r148, cpy_r_r149);
    CPy_DECREF(cpy_r_arg);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 182, CPyStatic_semanal_typeargs___globals);
        goto CPyL132;
    }
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarType))
        cpy_r_r151 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 184, CPyStatic_semanal_typeargs___globals, "mypy.types.TypeVarType", cpy_r_tvar);
        goto CPyL133;
    }
    cpy_r_r152 = ((mypy___types___TypeVarTypeObject *)cpy_r_r151)->_upper_bound;
    CPy_INCREF(cpy_r_r152);
    CPy_DECREF(cpy_r_tvar);
    cpy_r_r153 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "validate_args", "TypeArgumentAnalyzer", "options", 184, CPyStatic_semanal_typeargs___globals);
        goto CPyL134;
    }
    CPy_INCREF(cpy_r_r153);
CPyL78: ;
    cpy_r_r154 = CPY_INT_TAG;
    cpy_r_r155 = 2;
    cpy_r_r156 = CPyDef_messages___format_type(cpy_r_r152, cpy_r_r153, cpy_r_r154, cpy_r_r155);
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 184, CPyStatic_semanal_typeargs___globals);
        goto CPyL135;
    }
    cpy_r_r157 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r158[4] = {cpy_r_r146, cpy_r_r150, cpy_r_name, cpy_r_r156};
    cpy_r_r159 = (PyObject **)&cpy_r_r158;
    cpy_r_r160 = PyObject_VectorcallMethod(cpy_r_r157, cpy_r_r159, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 181, CPyStatic_semanal_typeargs___globals);
        goto CPyL136;
    }
    CPy_DECREF(cpy_r_r150);
    CPy_DECREF(cpy_r_r156);
    if (likely(PyUnicode_Check(cpy_r_r160)))
        cpy_r_r161 = cpy_r_r160;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "validate_args", 181, CPyStatic_semanal_typeargs___globals, "str", cpy_r_r160);
        goto CPyL122;
    }
    cpy_r_r162 = CPyStatic_errorcodes___TYPE_VAR;
    if (unlikely(cpy_r_r162 == NULL)) {
        goto CPyL137;
    } else
        goto CPyL84;
CPyL82: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPE_VAR\" was not set");
    cpy_r_r163 = 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 187, CPyStatic_semanal_typeargs___globals);
        goto CPyL104;
    }
    CPy_Unreachable();
CPyL84: ;
    cpy_r_r164 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___fail(cpy_r_self, cpy_r_r161, cpy_r_ctx, cpy_r_r162);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r164 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 180, CPyStatic_semanal_typeargs___globals);
        goto CPyL122;
    } else
        goto CPyL101;
CPyL85: ;
    cpy_r_r165 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r166 = (CPyPtr)&((PyObject *)cpy_r_tvar)->ob_type;
    cpy_r_r167 = *(PyObject * *)cpy_r_r166;
    CPy_DECREF(cpy_r_tvar);
    cpy_r_r168 = cpy_r_r167 == cpy_r_r165;
    if (!cpy_r_r168) goto CPyL138;
    cpy_r_r169 = CPyDef_types___get_proper_type(cpy_r_arg);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 191, CPyStatic_semanal_typeargs___globals);
        goto CPyL123;
    }
    cpy_r_r170 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r171 = (CPyPtr)&((PyObject *)cpy_r_r169)->ob_type;
    cpy_r_r172 = *(PyObject * *)cpy_r_r171;
    cpy_r_r173 = cpy_r_r172 == cpy_r_r170;
    if (!cpy_r_r173) goto CPyL89;
    cpy_r_r174 = cpy_r_r173;
    goto CPyL90;
CPyL89: ;
    cpy_r_r175 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r176 = (CPyPtr)&((PyObject *)cpy_r_r169)->ob_type;
    cpy_r_r177 = *(PyObject * *)cpy_r_r176;
    cpy_r_r178 = cpy_r_r177 == cpy_r_r175;
    cpy_r_r174 = cpy_r_r178;
CPyL90: ;
    if (!cpy_r_r174) goto CPyL92;
    cpy_r_r179 = cpy_r_r174;
    goto CPyL93;
CPyL92: ;
    cpy_r_r180 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r181 = (CPyPtr)&((PyObject *)cpy_r_r169)->ob_type;
    cpy_r_r182 = *(PyObject * *)cpy_r_r181;
    cpy_r_r183 = cpy_r_r182 == cpy_r_r180;
    cpy_r_r179 = cpy_r_r183;
CPyL93: ;
    if (cpy_r_r179) {
        goto CPyL139;
    } else
        goto CPyL95;
CPyL94: ;
    cpy_r_r184 = cpy_r_r179;
    goto CPyL96;
CPyL95: ;
    cpy_r_r185 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r186 = (CPyPtr)&((PyObject *)cpy_r_r169)->ob_type;
    cpy_r_r187 = *(PyObject * *)cpy_r_r186;
    CPy_DECREF(cpy_r_r169);
    cpy_r_r188 = cpy_r_r187 == cpy_r_r185;
    cpy_r_r184 = cpy_r_r188;
CPyL96: ;
    if (cpy_r_r184) goto CPyL138;
    cpy_r_r189 = CPyStatics[5261]; /* ('Can only replace ParamSpec with a parameter types '
                                      'list or another ParamSpec, got ') */
    cpy_r_r190 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "validate_args", "TypeArgumentAnalyzer", "options", 195, CPyStatic_semanal_typeargs___globals);
        goto CPyL123;
    }
    CPy_INCREF(cpy_r_r190);
CPyL98: ;
    cpy_r_r191 = CPY_INT_TAG;
    cpy_r_r192 = 2;
    cpy_r_r193 = CPyDef_messages___format_type(cpy_r_arg, cpy_r_r190, cpy_r_r191, cpy_r_r192);
    CPy_DECREF(cpy_r_arg);
    CPy_DECREF(cpy_r_r190);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 194, CPyStatic_semanal_typeargs___globals);
        goto CPyL122;
    }
    cpy_r_r194 = CPyStr_Build(2, cpy_r_r189, cpy_r_r193);
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 194, CPyStatic_semanal_typeargs___globals);
        goto CPyL122;
    }
    cpy_r_r195 = NULL;
    cpy_r_r196 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___fail(cpy_r_self, cpy_r_r194, cpy_r_ctx, cpy_r_r195);
    CPy_DECREF(cpy_r_r194);
    if (unlikely(cpy_r_r196 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 193, CPyStatic_semanal_typeargs___globals);
        goto CPyL122;
    }
CPyL101: ;
    cpy_r_r197 = cpy_r_r62 + 2;
    cpy_r_r62 = cpy_r_r197;
    cpy_r_i_2 = cpy_r_r197;
    CPyTagged_DECREF(cpy_r_i_2);
    cpy_r_r198 = cpy_r_r64 + 2;
    cpy_r_r64 = cpy_r_r198;
    goto CPyL35;
CPyL102: ;
    cpy_r_r199 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r199)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 143, CPyStatic_semanal_typeargs___globals);
        goto CPyL104;
    }
    return cpy_r_is_error;
CPyL104: ;
    cpy_r_r200 = 2;
    return cpy_r_r200;
CPyL105: ;
    CPy_INCREF(cpy_r_args);
    goto CPyL33;
CPyL106: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL13;
CPyL107: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL104;
CPyL108: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL12;
CPyL109: ;
    CPyTagged_DecRef(cpy_r_prefix);
    goto CPyL104;
CPyL110: ;
    CPyTagged_DECREF(cpy_r_prefix);
    CPy_DECREF(cpy_r_tvt);
    goto CPyL18;
CPyL111: ;
    CPyTagged_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_tvt);
    goto CPyL104;
CPyL112: ;
    CPy_DecRef(cpy_r_tvt);
    goto CPyL104;
CPyL113: ;
    CPy_DecRef(cpy_r_tvt);
    CPy_DecRef(cpy_r_middle);
    CPy_DecRef(cpy_r_end);
    goto CPyL104;
CPyL114: ;
    CPy_DecRef(cpy_r_tvt);
    CPy_DecRef(cpy_r_end);
    CPy_DecRef(cpy_r_r46);
    goto CPyL104;
CPyL115: ;
    CPy_DecRef(cpy_r_tvt);
    CPy_DecRef(cpy_r_end);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    goto CPyL104;
CPyL116: ;
    CPy_DecRef(cpy_r_end);
    CPy_DecRef(cpy_r_r46);
    goto CPyL104;
CPyL117: ;
    CPy_DecRef(cpy_r_end);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r53);
    goto CPyL104;
CPyL118: ;
    CPy_DecRef(cpy_r_end);
    goto CPyL104;
CPyL119: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL104;
CPyL120: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL102;
CPyL121: ;
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r65);
    goto CPyL102;
CPyL122: ;
    CPy_DecRef(cpy_r_r63);
    goto CPyL104;
CPyL123: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_arg);
    goto CPyL104;
CPyL124: ;
    CPy_DECREF(cpy_r_tvar);
    goto CPyL41;
CPyL125: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_tvar);
    goto CPyL104;
CPyL126: ;
    CPy_DECREF(cpy_r_arg);
    CPy_DECREF(cpy_r_tvar);
    goto CPyL101;
CPyL127: ;
    CPy_DECREF(cpy_r_tvar);
    CPy_DECREF(cpy_r_arg_values);
    goto CPyL54;
CPyL128: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r114);
    goto CPyL104;
CPyL129: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r119);
    goto CPyL58;
CPyL130: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_tvar);
    CPy_DecRef(cpy_r_arg_values);
    goto CPyL104;
CPyL131: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_tvar);
    CPy_DecRef(cpy_r_arg_values);
    CPy_DecRef(cpy_r_r127);
    goto CPyL104;
CPyL132: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_tvar);
    goto CPyL104;
CPyL133: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_tvar);
    CPy_DecRef(cpy_r_r150);
    goto CPyL104;
CPyL134: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r152);
    goto CPyL104;
CPyL135: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r150);
    goto CPyL104;
CPyL136: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r156);
    goto CPyL104;
CPyL137: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r161);
    goto CPyL82;
CPyL138: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL101;
CPyL139: ;
    CPy_DECREF(cpy_r_r169);
    goto CPyL94;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___validate_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "args", "type_vars", "ctx", 0};
    static CPyArg_Parser parser = {"OOOO:validate_args", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_args;
    PyObject *obj_type_vars;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_args, &obj_type_vars, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_args = obj_args;
    PyObject *arg_type_vars;
    if (likely(PyList_Check(obj_type_vars)))
        arg_type_vars = obj_type_vars;
    else {
        CPy_TypeError("list", obj_type_vars); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___validate_args(arg_self, arg_name, arg_args, arg_type_vars, arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "validate_args", 128, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_proper_type;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    cpy_r_r0 = ((mypy___types___UnpackTypeObject *)cpy_r_typ)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_types___get_proper_type(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_unpack_type", 201, CPyStatic_semanal_typeargs___globals);
        goto CPyL28;
    }
    if (likely(cpy_r_r1 != Py_None))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_unpack_type", 201, CPyStatic_semanal_typeargs___globals, "mypy.types.ProperType", cpy_r_r1);
        goto CPyL28;
    }
    cpy_r_proper_type = cpy_r_r2;
    cpy_r_r3 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_proper_type)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (cpy_r_r6) {
        goto CPyL29;
    } else
        goto CPyL4;
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r7 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_proper_type)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (cpy_r_r10) {
        goto CPyL30;
    } else
        goto CPyL6;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r11 = (PyObject *)CPyType_types___Instance;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_proper_type)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_proper_type) == CPyType_types___Instance))
        cpy_r_r15 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_unpack_type", 206, CPyStatic_semanal_typeargs___globals, "mypy.types.Instance", cpy_r_proper_type);
        goto CPyL31;
    }
    cpy_r_r16 = ((mypy___types___InstanceObject *)cpy_r_r15)->_type;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPY_GET_ATTR(cpy_r_r16, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_unpack_type", 206, CPyStatic_semanal_typeargs___globals);
        goto CPyL31;
    }
CPyL9: ;
    cpy_r_r18 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r19 = PyUnicode_Compare(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r20 = cpy_r_r19 == -1;
    if (!cpy_r_r20) goto CPyL12;
    cpy_r_r21 = PyErr_Occurred();
    cpy_r_r22 = cpy_r_r21 != NULL;
    if (!cpy_r_r22) goto CPyL12;
    cpy_r_r23 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_unpack_type", 206, CPyStatic_semanal_typeargs___globals);
        goto CPyL31;
    }
CPyL12: ;
    cpy_r_r24 = cpy_r_r19 == 0;
    if (cpy_r_r24) {
        goto CPyL32;
    } else
        goto CPyL14;
CPyL13: ;
    return 1;
CPyL14: ;
    cpy_r_r25 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_proper_type)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (cpy_r_r28) goto CPyL33;
    cpy_r_r29 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_proper_type)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL19;
    if (likely(Py_TYPE(cpy_r_proper_type) == CPyType_types___AnyType))
        cpy_r_r33 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_unpack_type", 211, CPyStatic_semanal_typeargs___globals, "mypy.types.AnyType", cpy_r_proper_type);
        goto CPyL31;
    }
    cpy_r_r34 = ((mypy___types___AnyTypeObject *)cpy_r_r33)->_type_of_any;
    cpy_r_r35 = cpy_r_r34 == 10;
    if (cpy_r_r35) {
        goto CPyL33;
    } else
        goto CPyL19;
CPyL18: ;
    return 1;
CPyL19: ;
    cpy_r_r36 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r37 = CPyStatics[905]; /* 'message_registry' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_unpack_type", 218, CPyStatic_semanal_typeargs___globals);
        goto CPyL31;
    }
    cpy_r_r39 = CPyStatics[3243]; /* 'INVALID_UNPACK' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_unpack_type", 218, CPyStatic_semanal_typeargs___globals);
        goto CPyL31;
    }
    if (likely(PyUnicode_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_unpack_type", 218, CPyStatic_semanal_typeargs___globals, "str", cpy_r_r40);
        goto CPyL31;
    }
    cpy_r_r42 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "visit_unpack_type", "TypeArgumentAnalyzer", "options", 218, CPyStatic_semanal_typeargs___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r42);
CPyL23: ;
    cpy_r_r43 = CPY_INT_TAG;
    cpy_r_r44 = 2;
    cpy_r_r45 = CPyDef_messages___format_type(cpy_r_proper_type, cpy_r_r42, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_proper_type);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_unpack_type", 218, CPyStatic_semanal_typeargs___globals);
        goto CPyL35;
    }
    cpy_r_r46 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r47[2] = {cpy_r_r41, cpy_r_r45};
    cpy_r_r48 = (PyObject **)&cpy_r_r47;
    cpy_r_r49 = PyObject_VectorcallMethod(cpy_r_r46, cpy_r_r48, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_unpack_type", 218, CPyStatic_semanal_typeargs___globals);
        goto CPyL36;
    }
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r45);
    if (likely(PyUnicode_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "visit_unpack_type", 218, CPyStatic_semanal_typeargs___globals, "str", cpy_r_r49);
        goto CPyL28;
    }
    cpy_r_r51 = NULL;
    cpy_r_r52 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___fail(cpy_r_self, cpy_r_r50, cpy_r_typ, cpy_r_r51);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_unpack_type", 217, CPyStatic_semanal_typeargs___globals);
        goto CPyL28;
    }
    return 1;
CPyL28: ;
    cpy_r_r53 = 2;
    return cpy_r_r53;
CPyL29: ;
    CPy_DECREF(cpy_r_proper_type);
    goto CPyL3;
CPyL30: ;
    CPy_DECREF(cpy_r_proper_type);
    goto CPyL5;
CPyL31: ;
    CPy_DecRef(cpy_r_proper_type);
    goto CPyL28;
CPyL32: ;
    CPy_DECREF(cpy_r_proper_type);
    goto CPyL13;
CPyL33: ;
    CPy_DECREF(cpy_r_proper_type);
    goto CPyL18;
CPyL34: ;
    CPy_DecRef(cpy_r_proper_type);
    CPy_DecRef(cpy_r_r41);
    goto CPyL28;
CPyL35: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL28;
CPyL36: ;
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r45);
    goto CPyL28;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___UnpackType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_unpack_type", 200, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type__TypeTraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type__TypeTraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeTraverserVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type__TypeTraverserVisitor_glue(arg_self, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_unpack_type__TypeTraverserVisitor_glue", -1, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

PyObject *CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_unpack_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnpackType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnpackType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___visit_unpack_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "visit_unpack_type__TypeVisitor_glue", -1, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___check_type_var_values(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_actuals, PyObject *cpy_r_arg_name, PyObject *cpy_r_valids, PyObject *cpy_r_context) {
    char cpy_r_is_error;
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_actual;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_value;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_class_name;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_actual_type_name;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    cpy_r_is_error = 0;
    cpy_r_r0 = CPyDef_types___get_proper_types(cpy_r_actuals);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 225, CPyStatic_semanal_typeargs___globals);
        goto CPyL36;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL37;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___ProperType)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 225, CPyStatic_semanal_typeargs___globals, "mypy.types.ProperType", cpy_r_r6);
        goto CPyL38;
    }
    cpy_r_actual = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL6;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL7;
CPyL6: ;
    cpy_r_r13 = (PyObject *)CPyType_types___UnboundType;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    cpy_r_r12 = cpy_r_r16;
CPyL7: ;
    if (cpy_r_r12) goto CPyL39;
    cpy_r_r17 = 0;
    cpy_r_r18 = 0;
CPyL9: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_valids)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL15;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_valids, cpy_r_r18);
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_types___Type)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 229, CPyStatic_semanal_typeargs___globals, "mypy.types.Type", cpy_r_r23);
        goto CPyL40;
    }
    cpy_r_value = cpy_r_r24;
    cpy_r_r25 = 2;
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPyDef_subtypes___is_same_type(cpy_r_actual, cpy_r_value, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 230, CPyStatic_semanal_typeargs___globals);
        goto CPyL40;
    }
    if (!cpy_r_r27) goto CPyL14;
    cpy_r_r17 = 1;
    goto CPyL15;
CPyL14: ;
    cpy_r_r28 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r28;
    goto CPyL9;
CPyL15: ;
    if (cpy_r_r17) goto CPyL39;
    cpy_r_is_error = 1;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_actuals)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r31 > (Py_ssize_t)2;
    if (cpy_r_r32) goto CPyL41;
    cpy_r_r33 = (PyObject *)CPyType_types___Instance;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_actual)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    if (cpy_r_r36) {
        goto CPyL24;
    } else
        goto CPyL41;
CPyL18: ;
    cpy_r_r37 = CPyStatics[3251]; /* 'Invalid type argument value for "{}"' */
    cpy_r_r38 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r39[2] = {cpy_r_r37, cpy_r_name};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = PyObject_VectorcallMethod(cpy_r_r38, cpy_r_r40, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 235, CPyStatic_semanal_typeargs___globals);
        goto CPyL38;
    }
    if (likely(PyUnicode_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 235, CPyStatic_semanal_typeargs___globals, "str", cpy_r_r41);
        goto CPyL38;
    }
    cpy_r_r43 = CPyStatic_errorcodes___TYPE_VAR;
    if (unlikely(cpy_r_r43 == NULL)) {
        goto CPyL42;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPE_VAR\" was not set");
    cpy_r_r44 = 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 237, CPyStatic_semanal_typeargs___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r45 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___fail(cpy_r_self, cpy_r_r42, cpy_r_context, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 234, CPyStatic_semanal_typeargs___globals);
        goto CPyL38;
    } else
        goto CPyL34;
CPyL24: ;
    cpy_r_r46 = CPyStatics[178]; /* '"' */
    cpy_r_r47 = CPyStatics[178]; /* '"' */
    cpy_r_r48 = CPyStr_Build(3, cpy_r_r46, cpy_r_name, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 240, CPyStatic_semanal_typeargs___globals);
        goto CPyL40;
    }
    cpy_r_class_name = cpy_r_r48;
    cpy_r_r49 = CPyStatics[178]; /* '"' */
    if (likely(Py_TYPE(cpy_r_actual) == CPyType_types___Instance))
        cpy_r_r50 = cpy_r_actual;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 241, CPyStatic_semanal_typeargs___globals, "mypy.types.Instance", cpy_r_actual);
        goto CPyL43;
    }
    cpy_r_r51 = ((mypy___types___InstanceObject *)cpy_r_r50)->_type;
    CPy_INCREF(cpy_r_r51);
    CPy_DECREF(cpy_r_actual);
    cpy_r_r52 = CPY_GET_ATTR(cpy_r_r51, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 241, CPyStatic_semanal_typeargs___globals);
        goto CPyL44;
    }
CPyL27: ;
    cpy_r_r53 = CPyStatics[178]; /* '"' */
    cpy_r_r54 = CPyStr_Build(3, cpy_r_r49, cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 241, CPyStatic_semanal_typeargs___globals);
        goto CPyL44;
    }
    cpy_r_actual_type_name = cpy_r_r54;
    cpy_r_r55 = CPyStatics[3244]; /* 'Value of type variable "{}" of {} cannot be {}' */
    cpy_r_r56 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r57[4] = {
        cpy_r_r55, cpy_r_arg_name, cpy_r_class_name,
        cpy_r_actual_type_name
    };
    cpy_r_r58 = (PyObject **)&cpy_r_r57;
    cpy_r_r59 = PyObject_VectorcallMethod(cpy_r_r56, cpy_r_r58, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 243, CPyStatic_semanal_typeargs___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_class_name);
    CPy_DECREF(cpy_r_actual_type_name);
    if (likely(PyUnicode_Check(cpy_r_r59)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 243, CPyStatic_semanal_typeargs___globals, "str", cpy_r_r59);
        goto CPyL38;
    }
    cpy_r_r61 = CPyStatic_errorcodes___TYPE_VAR;
    if (unlikely(cpy_r_r61 == NULL)) {
        goto CPyL46;
    } else
        goto CPyL33;
CPyL31: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPE_VAR\" was not set");
    cpy_r_r62 = 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 247, CPyStatic_semanal_typeargs___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r63 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___fail(cpy_r_self, cpy_r_r60, cpy_r_context, cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 242, CPyStatic_semanal_typeargs___globals);
        goto CPyL38;
    }
CPyL34: ;
    cpy_r_r64 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r64;
    goto CPyL2;
CPyL35: ;
    return cpy_r_is_error;
CPyL36: ;
    cpy_r_r65 = 2;
    return cpy_r_r65;
CPyL37: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL35;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL36;
CPyL39: ;
    CPy_DECREF(cpy_r_actual);
    goto CPyL34;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_actual);
    goto CPyL36;
CPyL41: ;
    CPy_DECREF(cpy_r_actual);
    goto CPyL18;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r42);
    goto CPyL21;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_actual);
    CPy_DecRef(cpy_r_class_name);
    goto CPyL36;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_class_name);
    goto CPyL36;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_class_name);
    CPy_DecRef(cpy_r_actual_type_name);
    goto CPyL36;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r60);
    goto CPyL31;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___check_type_var_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "actuals", "arg_name", "valids", "context", 0};
    static CPyArg_Parser parser = {"OOOOO:check_type_var_values", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_actuals;
    PyObject *obj_arg_name;
    PyObject *obj_valids;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_actuals, &obj_arg_name, &obj_valids, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_actuals;
    if (likely(PyList_Check(obj_actuals)))
        arg_actuals = obj_actuals;
    else {
        CPy_TypeError("list", obj_actuals); 
        goto fail;
    }
    PyObject *arg_arg_name;
    if (likely(PyUnicode_Check(obj_arg_name)))
        arg_arg_name = obj_arg_name;
    else {
        CPy_TypeError("str", obj_arg_name); 
        goto fail;
    }
    PyObject *arg_valids;
    if (likely(PyList_Check(obj_valids)))
        arg_valids = obj_valids;
    else {
        CPy_TypeError("list", obj_valids); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___check_type_var_values(arg_self, arg_name, arg_actuals, arg_arg_name, arg_valids, arg_context);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "check_type_var_values", 221, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___fail(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_context, PyObject *cpy_r_code) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    if (cpy_r_code != NULL) goto CPyL8;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_code = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_errors;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "fail", "TypeArgumentAnalyzer", "errors", 252, CPyStatic_semanal_typeargs___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
CPyL3: ;
    cpy_r_r2 = ((mypy___nodes___ContextObject *)cpy_r_context)->_line;
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "fail", "Context", "line", 252, CPyStatic_semanal_typeargs___globals);
        goto CPyL10;
    }
    CPyTagged_INCREF(cpy_r_r2);
CPyL4: ;
    cpy_r_r3 = ((mypy___nodes___ContextObject *)cpy_r_context)->_column;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "fail", "Context", "column", 252, CPyStatic_semanal_typeargs___globals);
        goto CPyL11;
    }
    CPyTagged_INCREF(cpy_r_r3);
CPyL5: ;
    cpy_r_r4 = CPyTagged_StealAsObject(cpy_r_r3);
    cpy_r_r5 = 2;
    cpy_r_r6 = NULL;
    cpy_r_r7 = NULL;
    cpy_r_r8 = 2;
    cpy_r_r9 = 2;
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = NULL;
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPyDef_mypy___errors___Errors___report(cpy_r_r1, cpy_r_r2, cpy_r_r4, cpy_r_msg, cpy_r_code, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_code);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "fail", 252, CPyStatic_semanal_typeargs___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL8: ;
    CPy_INCREF(cpy_r_code);
    goto CPyL2;
CPyL9: ;
    CPy_DecRef(cpy_r_code);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
CPyL11: ;
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_r2);
    goto CPyL7;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "context", "code", 0};
    static CPyArg_Parser parser = {"OO|$O:fail", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_context;
    PyObject *obj_code = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_msg, &obj_context, &obj_code)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *arg_code;
    if (obj_code == NULL) {
        arg_code = NULL;
        goto __LL6159;
    }
    if (PyObject_TypeCheck(obj_code, CPyType_errorcodes___ErrorCode))
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL6159;
    if (obj_code == Py_None)
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL6159;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", obj_code); 
    goto fail;
__LL6159: ;
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___fail(arg_self, arg_msg, arg_context, arg_code);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "fail", 251, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs___TypeArgumentAnalyzer___note(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_context, PyObject *cpy_r_code) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    if (cpy_r_code != NULL) goto CPyL8;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_code = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_self)->_errors;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "note", "TypeArgumentAnalyzer", "errors", 255, CPyStatic_semanal_typeargs___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
CPyL3: ;
    cpy_r_r2 = ((mypy___nodes___ContextObject *)cpy_r_context)->_line;
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "note", "Context", "line", 255, CPyStatic_semanal_typeargs___globals);
        goto CPyL10;
    }
    CPyTagged_INCREF(cpy_r_r2);
CPyL4: ;
    cpy_r_r3 = ((mypy___nodes___ContextObject *)cpy_r_context)->_column;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/semanal_typeargs.py", "note", "Context", "column", 255, CPyStatic_semanal_typeargs___globals);
        goto CPyL11;
    }
    CPyTagged_INCREF(cpy_r_r3);
CPyL5: ;
    cpy_r_r4 = CPyStatics[413]; /* 'note' */
    cpy_r_r5 = CPyTagged_StealAsObject(cpy_r_r3);
    cpy_r_r6 = 2;
    cpy_r_r7 = NULL;
    cpy_r_r8 = 2;
    cpy_r_r9 = 2;
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = NULL;
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPyDef_mypy___errors___Errors___report(cpy_r_r1, cpy_r_r2, cpy_r_r5, cpy_r_msg, cpy_r_code, cpy_r_r6, cpy_r_r4, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_code);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "note", 255, CPyStatic_semanal_typeargs___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL8: ;
    CPy_INCREF(cpy_r_code);
    goto CPyL2;
CPyL9: ;
    CPy_DecRef(cpy_r_code);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
CPyL11: ;
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_r2);
    goto CPyL7;
}

PyObject *CPyPy_semanal_typeargs___TypeArgumentAnalyzer___note(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "context", "code", 0};
    static CPyArg_Parser parser = {"OO|$O:note", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_context;
    PyObject *obj_code = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_msg, &obj_context, &obj_code)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_typeargs___TypeArgumentAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_typeargs.TypeArgumentAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *arg_code;
    if (obj_code == NULL) {
        arg_code = NULL;
        goto __LL6160;
    }
    if (PyObject_TypeCheck(obj_code, CPyType_errorcodes___ErrorCode))
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL6160;
    if (obj_code == Py_None)
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL6160;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", obj_code); 
    goto fail;
__LL6160: ;
    char retval = CPyDef_semanal_typeargs___TypeArgumentAnalyzer___note(arg_self, arg_msg, arg_context, arg_code);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_typeargs.py", "note", 254, CPyStatic_semanal_typeargs___globals);
    return NULL;
}

char CPyDef_semanal_typeargs_____top_level__(void) {
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
    char cpy_r_r63;
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
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", -1, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 8, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9736]; /* ('Sequence',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 10, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9513]; /* ('errorcodes', 'message_registry') */
    cpy_r_r14 = CPyStatics[9514]; /* ('codes', 'message_registry') */
    cpy_r_r15 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r16 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r17 = CPyImport_ImportFromMany(cpy_r_r15, cpy_r_r13, cpy_r_r14, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 12, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    CPyModule_mypy = cpy_r_r17;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r18 = CPyStatics[9515]; /* ('ErrorCode',) */
    cpy_r_r19 = CPyStatics[924]; /* 'mypy.errorcodes' */
    cpy_r_r20 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r21 = CPyImport_ImportFromMany(cpy_r_r19, cpy_r_r18, cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 13, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    CPyModule_mypy___errorcodes = cpy_r_r21;
    CPy_INCREF(CPyModule_mypy___errorcodes);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[9270]; /* ('Errors',) */
    cpy_r_r23 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r24 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r25 = CPyImport_ImportFromMany(cpy_r_r23, cpy_r_r22, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 14, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    CPyModule_mypy___errors = cpy_r_r25;
    CPy_INCREF(CPyModule_mypy___errors);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[9432]; /* ('format_type',) */
    cpy_r_r27 = CPyStatics[530]; /* 'mypy.messages' */
    cpy_r_r28 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r29 = CPyImport_ImportFromMany(cpy_r_r27, cpy_r_r26, cpy_r_r26, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 15, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    CPyModule_mypy___messages = cpy_r_r29;
    CPy_INCREF(CPyModule_mypy___messages);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r30 = CPyStatics[9737]; /* ('MixedTraverserVisitor',) */
    cpy_r_r31 = CPyStatics[3823]; /* 'mypy.mixedtraverser' */
    cpy_r_r32 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r33 = CPyImport_ImportFromMany(cpy_r_r31, cpy_r_r30, cpy_r_r30, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 16, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    CPyModule_mypy___mixedtraverser = cpy_r_r33;
    CPy_INCREF(CPyModule_mypy___mixedtraverser);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r34 = CPyStatics[9738]; /* ('Block', 'ClassDef', 'Context', 'FakeInfo', 'FuncItem',
                                     'MypyFile') */
    cpy_r_r35 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r36 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r37 = CPyImport_ImportFromMany(cpy_r_r35, cpy_r_r34, cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 17, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    CPyModule_mypy___nodes = cpy_r_r37;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r38 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r39 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r40 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r41 = CPyImport_ImportFromMany(cpy_r_r39, cpy_r_r38, cpy_r_r38, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 18, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    CPyModule_mypy___options = cpy_r_r41;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r42 = CPyStatics[9197]; /* ('Scope',) */
    cpy_r_r43 = CPyStatics[1010]; /* 'mypy.scope' */
    cpy_r_r44 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r45 = CPyImport_ImportFromMany(cpy_r_r43, cpy_r_r42, cpy_r_r42, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 19, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    CPyModule_mypy___scope = cpy_r_r45;
    CPy_INCREF(CPyModule_mypy___scope);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r46 = CPyStatics[9092]; /* ('is_same_type', 'is_subtype') */
    cpy_r_r47 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r48 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r49 = CPyImport_ImportFromMany(cpy_r_r47, cpy_r_r46, cpy_r_r46, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 20, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    CPyModule_mypy___subtypes = cpy_r_r49;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r50 = CPyStatics[9739]; /* ('set_any_tvars',) */
    cpy_r_r51 = CPyStatics[1035]; /* 'mypy.typeanal' */
    cpy_r_r52 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r53 = CPyImport_ImportFromMany(cpy_r_r51, cpy_r_r50, cpy_r_r50, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 21, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    CPyModule_mypy___typeanal = cpy_r_r53;
    CPy_INCREF(CPyModule_mypy___typeanal);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r54 = CPyStatics[9740]; /* ('AnyType', 'Instance', 'Parameters', 'ParamSpecType',
                                     'TupleType', 'Type', 'TypeAliasType', 'TypeOfAny',
                                     'TypeVarLikeType', 'TypeVarTupleType', 'TypeVarType',
                                     'UnboundType', 'UnpackType', 'flatten_nested_tuples',
                                     'get_proper_type', 'get_proper_types',
                                     'split_with_prefix_and_suffix') */
    cpy_r_r55 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r56 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r57 = CPyImport_ImportFromMany(cpy_r_r55, cpy_r_r54, cpy_r_r54, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 22, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    CPyModule_mypy___types = cpy_r_r57;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r58 = (PyObject *)CPyType_mixedtraverser___MixedTraverserVisitor;
    cpy_r_r59 = PyTuple_Pack(1, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 43, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    cpy_r_r60 = CPyStatics[5189]; /* 'mypy.semanal_typeargs' */
    cpy_r_r61 = (PyObject *)CPyType_semanal_typeargs___TypeArgumentAnalyzer_template;
    cpy_r_r62 = CPyType_FromTemplate(cpy_r_r61, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 43, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    cpy_r_r63 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer_trait_vtable_setup();
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", -1, CPyStatic_semanal_typeargs___globals);
        goto CPyL24;
    }
    cpy_r_r64 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r65 = CPyStatics[610]; /* 'errors' */
    cpy_r_r66 = CPyStatics[159]; /* 'options' */
    cpy_r_r67 = CPyStatics[550]; /* 'is_typeshed_file' */
    cpy_r_r68 = CPyStatics[1104]; /* 'scope' */
    cpy_r_r69 = CPyStatics[1120]; /* 'recurse_into_functions' */
    cpy_r_r70 = CPyStatics[1132]; /* 'seen_aliases' */
    cpy_r_r71 = CPyStatics[3824]; /* 'in_type_alias_expr' */
    cpy_r_r72 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r73 = PyTuple_Pack(8, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 43, CPyStatic_semanal_typeargs___globals);
        goto CPyL24;
    }
    cpy_r_r74 = PyObject_SetAttr(cpy_r_r62, cpy_r_r64, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 43, CPyStatic_semanal_typeargs___globals);
        goto CPyL24;
    }
    CPyType_semanal_typeargs___TypeArgumentAnalyzer = (PyTypeObject *)cpy_r_r62;
    CPy_INCREF(CPyType_semanal_typeargs___TypeArgumentAnalyzer);
    cpy_r_r76 = CPyStatic_semanal_typeargs___globals;
    cpy_r_r77 = CPyStatics[5188]; /* 'TypeArgumentAnalyzer' */
    cpy_r_r78 = CPyDict_SetItem(cpy_r_r76, cpy_r_r77, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/semanal_typeargs.py", "<module>", 43, CPyStatic_semanal_typeargs___globals);
        goto CPyL23;
    }
    return 1;
CPyL23: ;
    cpy_r_r80 = 2;
    return cpy_r_r80;
CPyL24: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL23;
}
