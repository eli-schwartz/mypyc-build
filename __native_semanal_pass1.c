#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef semanal_pass1___SemanticAnalyzerPreAnalysis_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *semanal_pass1___SemanticAnalyzerPreAnalysis_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis(void);

static PyObject *
semanal_pass1___SemanticAnalyzerPreAnalysis_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = semanal_pass1___SemanticAnalyzerPreAnalysis_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_traverser___TraverserVisitor_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
semanal_pass1___SemanticAnalyzerPreAnalysis_traverse(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_platform);
    Py_VISIT(self->_cur_mod_id);
    Py_VISIT(self->_cur_mod_node);
    Py_VISIT(self->_options);
    Py_VISIT(self->_skipped_lines);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject))));
    return 0;
}

static int
semanal_pass1___SemanticAnalyzerPreAnalysis_clear(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self)
{
    Py_CLEAR(self->_platform);
    Py_CLEAR(self->_cur_mod_id);
    Py_CLEAR(self->_cur_mod_node);
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_skipped_lines);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject))));
    return 0;
}

static void
semanal_pass1___SemanticAnalyzerPreAnalysis_dealloc(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_pass1___SemanticAnalyzerPreAnalysis_dealloc)
    semanal_pass1___SemanticAnalyzerPreAnalysis_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_pass1___SemanticAnalyzerPreAnalysis_vtable[109];
static CPyVTableItem semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis_trait_vtable_setup(void)
{
    CPyVTableItem semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_type_alias,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_placeholder_node,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_try_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt__NodeVisitor_glue,
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
    memcpy(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___NodeVisitor_trait_vtable, semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___NodeVisitor_trait_vtable));
    size_t semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___NodeVisitor_offset_table, semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
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
    memcpy(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___ExpressionVisitor_trait_vtable, semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___ExpressionVisitor_offset_table, semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_global_decl,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_nonlocal_decl,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_try_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt__StatementVisitor_glue,
    };
    memcpy(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___StatementVisitor_trait_vtable, semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___StatementVisitor_trait_vtable));
    size_t semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___StatementVisitor_offset_table, semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___PatternVisitor_trait_vtable, semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___PatternVisitor_trait_vtable));
    size_t semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___PatternVisitor_offset_table, semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem semanal_pass1___SemanticAnalyzerPreAnalysis_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)semanal_pass1___SemanticAnalyzerPreAnalysis_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor_____init__,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_try_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt__TraverserVisitor_glue,
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
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from__TraverserVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_file,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt,
        (CPyVTableItem)CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt,
    };
    memcpy(semanal_pass1___SemanticAnalyzerPreAnalysis_vtable, semanal_pass1___SemanticAnalyzerPreAnalysis_vtable_scratch, sizeof(semanal_pass1___SemanticAnalyzerPreAnalysis_vtable));
    return 1;
}

static PyObject *
semanal_pass1___SemanticAnalyzerPreAnalysis_get_platform(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, void *closure);
static int
semanal_pass1___SemanticAnalyzerPreAnalysis_set_platform(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, PyObject *value, void *closure);
static PyObject *
semanal_pass1___SemanticAnalyzerPreAnalysis_get_cur_mod_id(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, void *closure);
static int
semanal_pass1___SemanticAnalyzerPreAnalysis_set_cur_mod_id(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, PyObject *value, void *closure);
static PyObject *
semanal_pass1___SemanticAnalyzerPreAnalysis_get_cur_mod_node(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, void *closure);
static int
semanal_pass1___SemanticAnalyzerPreAnalysis_set_cur_mod_node(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, PyObject *value, void *closure);
static PyObject *
semanal_pass1___SemanticAnalyzerPreAnalysis_get_options(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, void *closure);
static int
semanal_pass1___SemanticAnalyzerPreAnalysis_set_options(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, PyObject *value, void *closure);
static PyObject *
semanal_pass1___SemanticAnalyzerPreAnalysis_get_is_global_scope(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, void *closure);
static int
semanal_pass1___SemanticAnalyzerPreAnalysis_set_is_global_scope(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, PyObject *value, void *closure);
static PyObject *
semanal_pass1___SemanticAnalyzerPreAnalysis_get_skipped_lines(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, void *closure);
static int
semanal_pass1___SemanticAnalyzerPreAnalysis_set_skipped_lines(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, PyObject *value, void *closure);

static PyGetSetDef semanal_pass1___SemanticAnalyzerPreAnalysis_getseters[] = {
    {"platform",
     (getter)semanal_pass1___SemanticAnalyzerPreAnalysis_get_platform, (setter)semanal_pass1___SemanticAnalyzerPreAnalysis_set_platform,
     NULL, NULL},
    {"cur_mod_id",
     (getter)semanal_pass1___SemanticAnalyzerPreAnalysis_get_cur_mod_id, (setter)semanal_pass1___SemanticAnalyzerPreAnalysis_set_cur_mod_id,
     NULL, NULL},
    {"cur_mod_node",
     (getter)semanal_pass1___SemanticAnalyzerPreAnalysis_get_cur_mod_node, (setter)semanal_pass1___SemanticAnalyzerPreAnalysis_set_cur_mod_node,
     NULL, NULL},
    {"options",
     (getter)semanal_pass1___SemanticAnalyzerPreAnalysis_get_options, (setter)semanal_pass1___SemanticAnalyzerPreAnalysis_set_options,
     NULL, NULL},
    {"is_global_scope",
     (getter)semanal_pass1___SemanticAnalyzerPreAnalysis_get_is_global_scope, (setter)semanal_pass1___SemanticAnalyzerPreAnalysis_set_is_global_scope,
     NULL, NULL},
    {"skipped_lines",
     (getter)semanal_pass1___SemanticAnalyzerPreAnalysis_get_skipped_lines, (setter)semanal_pass1___SemanticAnalyzerPreAnalysis_set_skipped_lines,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef semanal_pass1___SemanticAnalyzerPreAnalysis_methods[] = {
    {"visit_file",
     (PyCFunction)CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_file,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_def",
     (PyCFunction)CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_from",
     (PyCFunction)CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import_all",
     (PyCFunction)CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_import",
     (PyCFunction)CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_if_stmt",
     (PyCFunction)CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_block",
     (PyCFunction)CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_match_stmt",
     (PyCFunction)CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_assignment_stmt",
     (PyCFunction)CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_expression_stmt",
     (PyCFunction)CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return_stmt",
     (PyCFunction)CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_for_stmt",
     (PyCFunction)CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SemanticAnalyzerPreAnalysis",
    .tp_new = semanal_pass1___SemanticAnalyzerPreAnalysis_new,
    .tp_dealloc = (destructor)semanal_pass1___SemanticAnalyzerPreAnalysis_dealloc,
    .tp_traverse = (traverseproc)semanal_pass1___SemanticAnalyzerPreAnalysis_traverse,
    .tp_clear = (inquiry)semanal_pass1___SemanticAnalyzerPreAnalysis_clear,
    .tp_getset = semanal_pass1___SemanticAnalyzerPreAnalysis_getseters,
    .tp_methods = semanal_pass1___SemanticAnalyzerPreAnalysis_methods,
    .tp_members = semanal_pass1___SemanticAnalyzerPreAnalysis_members,
    .tp_basicsize = sizeof(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject),
    .tp_weaklistoffset = sizeof(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis_template = &CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis_template_;

static PyObject *
semanal_pass1___SemanticAnalyzerPreAnalysis_setup(PyTypeObject *type)
{
    mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self;
    self = (mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_pass1___SemanticAnalyzerPreAnalysis_vtable + 12;
    self->_is_global_scope = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis(void)
{
    PyObject *self = semanal_pass1___SemanticAnalyzerPreAnalysis_setup(CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis);
    if (self == NULL)
        return NULL;
    char res = CPyDef_traverser___TraverserVisitor_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
semanal_pass1___SemanticAnalyzerPreAnalysis_get_platform(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, void *closure)
{
    if (unlikely(self->_platform == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'platform' of 'SemanticAnalyzerPreAnalysis' undefined");
        return NULL;
    }
    CPy_INCREF(self->_platform);
    PyObject *retval = self->_platform;
    return retval;
}

static int
semanal_pass1___SemanticAnalyzerPreAnalysis_set_platform(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SemanticAnalyzerPreAnalysis' object attribute 'platform' cannot be deleted");
        return -1;
    }
    if (self->_platform != NULL) {
        CPy_DECREF(self->_platform);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_platform = tmp;
    return 0;
}

static PyObject *
semanal_pass1___SemanticAnalyzerPreAnalysis_get_cur_mod_id(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, void *closure)
{
    if (unlikely(self->_cur_mod_id == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'cur_mod_id' of 'SemanticAnalyzerPreAnalysis' undefined");
        return NULL;
    }
    CPy_INCREF(self->_cur_mod_id);
    PyObject *retval = self->_cur_mod_id;
    return retval;
}

static int
semanal_pass1___SemanticAnalyzerPreAnalysis_set_cur_mod_id(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SemanticAnalyzerPreAnalysis' object attribute 'cur_mod_id' cannot be deleted");
        return -1;
    }
    if (self->_cur_mod_id != NULL) {
        CPy_DECREF(self->_cur_mod_id);
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
    self->_cur_mod_id = tmp;
    return 0;
}

static PyObject *
semanal_pass1___SemanticAnalyzerPreAnalysis_get_cur_mod_node(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, void *closure)
{
    if (unlikely(self->_cur_mod_node == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'cur_mod_node' of 'SemanticAnalyzerPreAnalysis' undefined");
        return NULL;
    }
    CPy_INCREF(self->_cur_mod_node);
    PyObject *retval = self->_cur_mod_node;
    return retval;
}

static int
semanal_pass1___SemanticAnalyzerPreAnalysis_set_cur_mod_node(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SemanticAnalyzerPreAnalysis' object attribute 'cur_mod_node' cannot be deleted");
        return -1;
    }
    if (self->_cur_mod_node != NULL) {
        CPy_DECREF(self->_cur_mod_node);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_nodes___MypyFile))
        tmp = value;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_cur_mod_node = tmp;
    return 0;
}

static PyObject *
semanal_pass1___SemanticAnalyzerPreAnalysis_get_options(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'SemanticAnalyzerPreAnalysis' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
semanal_pass1___SemanticAnalyzerPreAnalysis_set_options(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SemanticAnalyzerPreAnalysis' object attribute 'options' cannot be deleted");
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
semanal_pass1___SemanticAnalyzerPreAnalysis_get_is_global_scope(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, void *closure)
{
    if (unlikely(self->_is_global_scope == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'is_global_scope' of 'SemanticAnalyzerPreAnalysis' undefined");
        return NULL;
    }
    PyObject *retval = self->_is_global_scope ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
semanal_pass1___SemanticAnalyzerPreAnalysis_set_is_global_scope(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SemanticAnalyzerPreAnalysis' object attribute 'is_global_scope' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_global_scope = tmp;
    return 0;
}

static PyObject *
semanal_pass1___SemanticAnalyzerPreAnalysis_get_skipped_lines(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, void *closure)
{
    if (unlikely(self->_skipped_lines == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'skipped_lines' of 'SemanticAnalyzerPreAnalysis' undefined");
        return NULL;
    }
    CPy_INCREF(self->_skipped_lines);
    PyObject *retval = self->_skipped_lines;
    return retval;
}

static int
semanal_pass1___SemanticAnalyzerPreAnalysis_set_skipped_lines(mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SemanticAnalyzerPreAnalysis' object attribute 'skipped_lines' cannot be deleted");
        return -1;
    }
    if (self->_skipped_lines != NULL) {
        CPy_DECREF(self->_skipped_lines);
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
    self->_skipped_lines = tmp;
    return 0;
}
static PyMethodDef semanal_pass1module_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef semanal_pass1module = {
    PyModuleDef_HEAD_INIT,
    "mypy.semanal_pass1",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    semanal_pass1module_methods
};

PyObject *CPyInit_mypy___semanal_pass1(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___semanal_pass1_internal) {
        Py_INCREF(CPyModule_mypy___semanal_pass1_internal);
        return CPyModule_mypy___semanal_pass1_internal;
    }
    CPyModule_mypy___semanal_pass1_internal = PyModule_Create(&semanal_pass1module);
    if (unlikely(CPyModule_mypy___semanal_pass1_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___semanal_pass1_internal, "__name__");
    CPyStatic_semanal_pass1___globals = PyModule_GetDict(CPyModule_mypy___semanal_pass1_internal);
    if (unlikely(CPyStatic_semanal_pass1___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_semanal_pass1_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___semanal_pass1_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___semanal_pass1_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_file(PyObject *cpy_r_self, PyObject *cpy_r_file, PyObject *cpy_r_fnam, PyObject *cpy_r_mod_id, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_defn;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    CPyTagged cpy_r_r28;
    int64_t cpy_r_r29;
    char cpy_r_r30;
    int64_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_next_def;
    PyObject *cpy_r_last;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    CPyTagged cpy_r_r71;
    CPyTagged cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    cpy_r_r0 = ((mypy___options___OptionsObject *)cpy_r_options)->_platform;
    CPy_INCREF(cpy_r_r0);
    if (((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_platform != NULL) {
        CPy_DECREF(((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_platform);
    }
    ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_platform = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 60, CPyStatic_semanal_pass1___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_mod_id);
    if (((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_cur_mod_id != NULL) {
        CPy_DECREF(((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_cur_mod_id);
    }
    ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_cur_mod_id = cpy_r_mod_id;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 61, CPyStatic_semanal_pass1___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_file);
    if (((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_cur_mod_node != NULL) {
        CPy_DECREF(((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_cur_mod_node);
    }
    ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_cur_mod_node = cpy_r_file;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 62, CPyStatic_semanal_pass1___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_options);
    if (((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_options != NULL) {
        CPy_DECREF(((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_options);
    }
    ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_options = cpy_r_options;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 63, CPyStatic_semanal_pass1___globals);
        goto CPyL40;
    }
    ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_is_global_scope = 1;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 64, CPyStatic_semanal_pass1___globals);
        goto CPyL40;
    }
    cpy_r_r6 = PySet_New(NULL);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 65, CPyStatic_semanal_pass1___globals);
        goto CPyL40;
    }
    if (((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_skipped_lines != NULL) {
        CPy_DECREF(((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_skipped_lines);
    }
    ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_skipped_lines = cpy_r_r6;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 65, CPyStatic_semanal_pass1___globals);
        goto CPyL40;
    }
    cpy_r_r8 = 0;
    cpy_r_i = 0;
    cpy_r_r9 = ((mypy___nodes___MypyFileObject *)cpy_r_file)->_defs;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = 0;
CPyL8: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL41;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r9, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_nodes___Statement)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_file", 67, CPyStatic_semanal_pass1___globals, "mypy.nodes.Statement", cpy_r_r15);
        goto CPyL42;
    }
    cpy_r_defn = cpy_r_r16;
    cpy_r_r17 = CPY_GET_METHOD_TRAIT(cpy_r_defn, CPyType_nodes___Statement, 5, mypy___nodes___StatementObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_defn, cpy_r_self); /* accept */
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 68, CPyStatic_semanal_pass1___globals);
        goto CPyL43;
    } else
        goto CPyL44;
CPyL11: ;
    cpy_r_r18 = (PyObject *)CPyType_nodes___AssertStmt;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_defn)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL45;
    if (likely(Py_TYPE(cpy_r_defn) == CPyType_nodes___AssertStmt))
        cpy_r_r22 = cpy_r_defn;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_file", 69, CPyStatic_semanal_pass1___globals, "mypy.nodes.AssertStmt", cpy_r_defn);
        goto CPyL42;
    }
    cpy_r_r23 = CPyDef_reachability___assert_will_always_fail(cpy_r_r22, cpy_r_options);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 69, CPyStatic_semanal_pass1___globals);
        goto CPyL42;
    }
    if (cpy_r_r23) {
        goto CPyL46;
    } else
        goto CPyL47;
CPyL15: ;
    cpy_r_r24 = ((mypy___nodes___MypyFileObject *)cpy_r_file)->_defs;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_r24)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = CPyTagged_Subtract(cpy_r_r27, 2);
    cpy_r_r29 = cpy_r_i & 1;
    cpy_r_r30 = cpy_r_r29 != 0;
    if (cpy_r_r30) goto CPyL17;
    cpy_r_r31 = cpy_r_r28 & 1;
    cpy_r_r32 = cpy_r_r31 != 0;
    if (!cpy_r_r32) goto CPyL18;
CPyL17: ;
    cpy_r_r33 = CPyTagged_IsLt_(cpy_r_i, cpy_r_r28);
    CPyTagged_DECREF(cpy_r_r28);
    if (cpy_r_r33) {
        goto CPyL19;
    } else
        goto CPyL35;
CPyL18: ;
    cpy_r_r34 = (Py_ssize_t)cpy_r_i < (Py_ssize_t)cpy_r_r28;
    CPyTagged_DECREF(cpy_r_r28);
    if (!cpy_r_r34) goto CPyL35;
CPyL19: ;
    cpy_r_r35 = ((mypy___nodes___MypyFileObject *)cpy_r_file)->_defs;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r37 = CPyList_GetItem(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    CPyTagged_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 74, CPyStatic_semanal_pass1___globals);
        goto CPyL48;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r37, CPyType_nodes___Statement)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_file", 74, CPyStatic_semanal_pass1___globals, "mypy.nodes.Statement", cpy_r_r37);
        goto CPyL48;
    }
    cpy_r_r39 = cpy_r_r38;
    cpy_r_r40 = ((mypy___nodes___MypyFileObject *)cpy_r_file)->_defs;
    cpy_r_r41 = CPyList_GetItemShort(cpy_r_r40, -2);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 74, CPyStatic_semanal_pass1___globals);
        goto CPyL49;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r41, CPyType_nodes___Statement)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_file", 74, CPyStatic_semanal_pass1___globals, "mypy.nodes.Statement", cpy_r_r41);
        goto CPyL49;
    }
    cpy_r_r43 = cpy_r_r42;
    cpy_r_next_def = cpy_r_r39;
    cpy_r_last = cpy_r_r43;
    cpy_r_r44 = ((mypy___nodes___ContextObject *)cpy_r_last)->_end_line;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypy/semanal_pass1.py", "visit_file", "Statement", "end_line", 75, CPyStatic_semanal_pass1___globals);
        goto CPyL50;
    }
CPyL24: ;
    cpy_r_r45 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r46 = cpy_r_r44 != cpy_r_r45;
    if (!cpy_r_r46) goto CPyL51;
    cpy_r_r47 = ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_skipped_lines;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypy/semanal_pass1.py", "visit_file", "SemanticAnalyzerPreAnalysis", "skipped_lines", 77, CPyStatic_semanal_pass1___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r47);
CPyL26: ;
    cpy_r_r48 = ((mypy___nodes___ContextObject *)cpy_r_next_def)->_line;
    if (unlikely(cpy_r_r48 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'Statement' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r48);
    }
    CPy_DECREF(cpy_r_next_def);
    if (unlikely(cpy_r_r48 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 77, CPyStatic_semanal_pass1___globals);
        goto CPyL52;
    }
CPyL27: ;
    cpy_r_r49 = ((mypy___nodes___ContextObject *)cpy_r_last)->_end_line;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/semanal_pass1.py", "visit_file", "Statement", "end_line", 77, CPyStatic_semanal_pass1___globals);
        goto CPyL53;
    }
CPyL28: ;
    if (likely(PyLong_Check(cpy_r_r49)))
        cpy_r_r50 = CPyTagged_FromObject(cpy_r_r49);
    else {
        CPy_TypeError("int", cpy_r_r49); cpy_r_r50 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r50 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 77, CPyStatic_semanal_pass1___globals);
        goto CPyL53;
    }
    cpy_r_r51 = CPyTagged_Add(cpy_r_r50, 2);
    CPyTagged_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_last);
    cpy_r_r52 = (PyObject *)&PyRange_Type;
    cpy_r_r53 = CPyTagged_StealAsObject(cpy_r_r48);
    cpy_r_r54 = CPyTagged_StealAsObject(cpy_r_r51);
    PyObject *cpy_r_r55[2] = {cpy_r_r53, cpy_r_r54};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = _PyObject_Vectorcall(cpy_r_r52, cpy_r_r56, 2, 0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 77, CPyStatic_semanal_pass1___globals);
        goto CPyL54;
    }
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r54);
    if (likely(PyRange_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_file", 77, CPyStatic_semanal_pass1___globals, "range", cpy_r_r57);
        goto CPyL55;
    }
    cpy_r_r59 = PySet_New(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 77, CPyStatic_semanal_pass1___globals);
        goto CPyL55;
    }
    cpy_r_r60 = PyNumber_InPlaceOr(cpy_r_r47, cpy_r_r59);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 77, CPyStatic_semanal_pass1___globals);
        goto CPyL48;
    }
    if (likely(PySet_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_file", 77, CPyStatic_semanal_pass1___globals, "set", cpy_r_r60);
        goto CPyL48;
    }
    if (((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_skipped_lines != NULL) {
        CPy_DECREF(((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_skipped_lines);
    }
    ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_skipped_lines = cpy_r_r61;
    cpy_r_r62 = 1;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 77, CPyStatic_semanal_pass1___globals);
        goto CPyL48;
    }
CPyL35: ;
    cpy_r_r63 = ((mypy___nodes___MypyFileObject *)cpy_r_file)->_defs;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r65 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r66 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r67 = CPyTagged_StealAsObject(cpy_r_r64);
    cpy_r_r68 = PySlice_New(cpy_r_r67, cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 78, CPyStatic_semanal_pass1___globals);
        goto CPyL56;
    }
    cpy_r_r69 = PyObject_DelItem(cpy_r_r63, cpy_r_r68);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 78, CPyStatic_semanal_pass1___globals);
        goto CPyL40;
    } else
        goto CPyL38;
CPyL37: ;
    cpy_r_r71 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r71;
    cpy_r_i = cpy_r_r71;
    cpy_r_r72 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r72;
    goto CPyL8;
CPyL38: ;
    cpy_r_r73 = ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_skipped_lines;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypy/semanal_pass1.py", "visit_file", "SemanticAnalyzerPreAnalysis", "skipped_lines", 80, CPyStatic_semanal_pass1___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r73);
CPyL39: ;
    CPy_DECREF(((mypy___nodes___MypyFileObject *)cpy_r_file)->_skipped_lines);
    ((mypy___nodes___MypyFileObject *)cpy_r_file)->_skipped_lines = cpy_r_r73;
    return 1;
CPyL40: ;
    cpy_r_r75 = 2;
    return cpy_r_r75;
CPyL41: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r9);
    goto CPyL38;
CPyL42: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r9);
    goto CPyL40;
CPyL43: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_defn);
    goto CPyL40;
CPyL44: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL11;
CPyL45: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_defn);
    goto CPyL37;
CPyL46: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL15;
CPyL47: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL37;
CPyL48: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL40;
CPyL49: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r39);
    goto CPyL40;
CPyL50: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_next_def);
    CPy_DecRef(cpy_r_last);
    goto CPyL40;
CPyL51: ;
    CPy_DECREF(cpy_r_next_def);
    CPy_DECREF(cpy_r_last);
    goto CPyL35;
CPyL52: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_last);
    CPy_DecRef(cpy_r_r47);
    goto CPyL40;
CPyL53: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_last);
    CPy_DecRef(cpy_r_r47);
    CPyTagged_DecRef(cpy_r_r48);
    goto CPyL40;
CPyL54: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    goto CPyL40;
CPyL55: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r47);
    goto CPyL40;
CPyL56: ;
    CPy_DecRef(cpy_r_r63);
    goto CPyL40;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", "fnam", "mod_id", "options", 0};
    static CPyArg_Parser parser = {"OOOO:visit_file", kwlist, 0};
    PyObject *obj_file;
    PyObject *obj_fnam;
    PyObject *obj_mod_id;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_file, &obj_fnam, &obj_mod_id, &obj_options)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(Py_TYPE(obj_file) == CPyType_nodes___MypyFile))
        arg_file = obj_file;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_file); 
        goto fail;
    }
    PyObject *arg_fnam;
    if (likely(PyUnicode_Check(obj_fnam)))
        arg_fnam = obj_fnam;
    else {
        CPy_TypeError("str", obj_fnam); 
        goto fail;
    }
    PyObject *arg_mod_id;
    if (likely(PyUnicode_Check(obj_mod_id)))
        arg_mod_id = obj_mod_id;
    else {
        CPy_TypeError("str", obj_mod_id); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_file(arg_self, arg_file, arg_fnam, arg_mod_id, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_file", 59, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    char cpy_r_old_global_scope;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_file_node;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_is_global_scope;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/semanal_pass1.py", "visit_func_def", "SemanticAnalyzerPreAnalysis", "is_global_scope", 83, CPyStatic_semanal_pass1___globals);
        goto CPyL17;
    }
CPyL1: ;
    cpy_r_old_global_scope = cpy_r_r0;
    ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_is_global_scope = 0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_func_def", 84, CPyStatic_semanal_pass1___globals);
        goto CPyL17;
    }
    cpy_r_r2 = CPyDef_traverser___TraverserVisitor___visit_func_def(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_func_def", 85, CPyStatic_semanal_pass1___globals);
        goto CPyL17;
    }
    ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_is_global_scope = cpy_r_old_global_scope;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_func_def", 86, CPyStatic_semanal_pass1___globals);
        goto CPyL17;
    }
    cpy_r_r4 = ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_cur_mod_node;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/semanal_pass1.py", "visit_func_def", "SemanticAnalyzerPreAnalysis", "cur_mod_node", 87, CPyStatic_semanal_pass1___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_file_node = cpy_r_r4;
    cpy_r_r5 = ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_is_global_scope;
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AttributeError("mypy/semanal_pass1.py", "visit_func_def", "SemanticAnalyzerPreAnalysis", "is_global_scope", 89, CPyStatic_semanal_pass1___globals);
        goto CPyL18;
    }
CPyL6: ;
    if (!cpy_r_r5) goto CPyL19;
CPyL7: ;
    cpy_r_r6 = ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_is_stub;
    if (!cpy_r_r6) goto CPyL19;
CPyL8: ;
    cpy_r_r7 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_func_def", 91, CPyStatic_semanal_pass1___globals);
        goto CPyL18;
    }
CPyL9: ;
    cpy_r_r8 = CPyStatics[725]; /* '__getattr__' */
    cpy_r_r9 = PyUnicode_Compare(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r10 = cpy_r_r9 == -1;
    if (!cpy_r_r10) goto CPyL12;
    cpy_r_r11 = PyErr_Occurred();
    cpy_r_r12 = cpy_r_r11 != NULL;
    if (!cpy_r_r12) goto CPyL12;
    cpy_r_r13 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_func_def", 91, CPyStatic_semanal_pass1___globals);
        goto CPyL18;
    }
CPyL12: ;
    cpy_r_r14 = cpy_r_r9 == 0;
    if (!cpy_r_r14) goto CPyL19;
    cpy_r_r15 = CPyDef_nodes___MypyFile___is_package_init_file(cpy_r_file_node);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_func_def", 92, CPyStatic_semanal_pass1___globals);
        goto CPyL18;
    }
    if (!cpy_r_r15) goto CPyL19;
    ((mypy___nodes___MypyFileObject *)cpy_r_file_node)->_is_partial_stub_package = 1;
    CPy_DECREF(cpy_r_file_node);
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL18: ;
    CPy_DecRef(cpy_r_file_node);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_file_node);
    goto CPyL16;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___FuncDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_node); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_func_def", 82, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_func_def__TraverserVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    char cpy_r_old_global_scope;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_is_global_scope;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/semanal_pass1.py", "visit_class_def", "SemanticAnalyzerPreAnalysis", "is_global_scope", 100, CPyStatic_semanal_pass1___globals);
        goto CPyL5;
    }
CPyL1: ;
    cpy_r_old_global_scope = cpy_r_r0;
    ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_is_global_scope = 0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_class_def", 101, CPyStatic_semanal_pass1___globals);
        goto CPyL5;
    }
    cpy_r_r2 = CPyDef_traverser___TraverserVisitor___visit_class_def(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_class_def", 102, CPyStatic_semanal_pass1___globals);
        goto CPyL5;
    }
    ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_is_global_scope = cpy_r_old_global_scope;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_class_def", 103, CPyStatic_semanal_pass1___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_class_def", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ClassDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_node); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_class_def", 99, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_class_def__TraverserVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_class_def__NodeVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ClassDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_class_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_class_def__StatementVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_is_global_scope;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/semanal_pass1.py", "visit_import_from", "SemanticAnalyzerPreAnalysis", "is_global_scope", 106, CPyStatic_semanal_pass1___globals);
        goto CPyL3;
    }
CPyL1: ;
    ((mypy___nodes___ImportFromObject *)cpy_r_node)->_is_top_level = cpy_r_r0;
    cpy_r_r2 = CPyDef_traverser___TraverserVisitor___visit_import_from(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_import_from", 107, CPyStatic_semanal_pass1___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import_from", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ImportFrom))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_node); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_import_from", 105, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_import_from__TraverserVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_import_from__NodeVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_from__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportFrom))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_from__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_import_from__StatementVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_is_global_scope;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/semanal_pass1.py", "visit_import_all", "SemanticAnalyzerPreAnalysis", "is_global_scope", 110, CPyStatic_semanal_pass1___globals);
        goto CPyL3;
    }
CPyL1: ;
    ((mypy___nodes___ImportAllObject *)cpy_r_node)->_is_top_level = cpy_r_r0;
    cpy_r_r2 = CPyDef_mypy___visitor___NodeVisitor___visit_import_all(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_import_all", 111, CPyStatic_semanal_pass1___globals);
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

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import_all", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ImportAll))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_node); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_import_all", 109, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_import_all__NodeVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import_all__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ImportAll))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import_all__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_import_all__StatementVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_is_global_scope;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/semanal_pass1.py", "visit_import", "SemanticAnalyzerPreAnalysis", "is_global_scope", 114, CPyStatic_semanal_pass1___globals);
        goto CPyL3;
    }
CPyL1: ;
    ((mypy___nodes___ImportObject *)cpy_r_node)->_is_top_level = cpy_r_r0;
    cpy_r_r2 = CPyDef_traverser___TraverserVisitor___visit_import(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_import", 115, CPyStatic_semanal_pass1___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:visit_import", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___Import))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_node); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_import", 113, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_import__TraverserVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_import__NodeVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_import__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Import))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_import__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_import__StatementVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt(PyObject *cpy_r_self, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    cpy_r_r0 = ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_pass1.py", "visit_if_stmt", "SemanticAnalyzerPreAnalysis", "options", 118, CPyStatic_semanal_pass1___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_reachability___infer_reachability_of_if_statement(cpy_r_s, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_if_stmt", 118, CPyStatic_semanal_pass1___globals);
        goto CPyL16;
    }
    cpy_r_r2 = ((mypy___nodes___IfStmtObject *)cpy_r_s)->_expr;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
CPyL3: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL17;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_nodes___Expression)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_if_stmt", 119, CPyStatic_semanal_pass1___globals, "mypy.nodes.Expression", cpy_r_r8);
        goto CPyL18;
    }
    cpy_r_expr = cpy_r_r9;
    cpy_r_r10 = CPY_GET_METHOD_TRAIT(cpy_r_expr, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_expr, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_expr);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_if_stmt", 120, CPyStatic_semanal_pass1___globals);
        goto CPyL18;
    } else
        goto CPyL19;
CPyL6: ;
    cpy_r_r11 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r11;
    goto CPyL3;
CPyL7: ;
    cpy_r_r12 = ((mypy___nodes___IfStmtObject *)cpy_r_s)->_body;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = 0;
CPyL8: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL20;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_r12, cpy_r_r13);
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_nodes___Block))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_if_stmt", 121, CPyStatic_semanal_pass1___globals, "mypy.nodes.Block", cpy_r_r18);
        goto CPyL21;
    }
    cpy_r_node = cpy_r_r19;
    cpy_r_r20 = CPyDef_nodes___Block___accept(cpy_r_node, cpy_r_self);
    CPy_DECREF(cpy_r_node);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_if_stmt", 122, CPyStatic_semanal_pass1___globals);
        goto CPyL21;
    } else
        goto CPyL22;
CPyL11: ;
    cpy_r_r21 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r21;
    goto CPyL8;
CPyL12: ;
    cpy_r_r22 = ((mypy___nodes___IfStmtObject *)cpy_r_s)->_else_body;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_r22 != cpy_r_r23;
    CPy_DECREF(cpy_r_r22);
    if (!cpy_r_r24) goto CPyL15;
    cpy_r_r25 = ((mypy___nodes___IfStmtObject *)cpy_r_s)->_else_body;
    CPy_INCREF(cpy_r_r25);
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_if_stmt", 124, CPyStatic_semanal_pass1___globals, "mypy.nodes.Block", cpy_r_r25);
        goto CPyL16;
    }
    cpy_r_r27 = CPyDef_nodes___Block___accept(cpy_r_r26, cpy_r_self);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_if_stmt", 124, CPyStatic_semanal_pass1___globals);
        goto CPyL16;
    } else
        goto CPyL23;
CPyL15: ;
    return 1;
CPyL16: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
CPyL17: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL7;
CPyL18: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL16;
CPyL19: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL6;
CPyL20: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL12;
CPyL21: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL16;
CPyL22: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL11;
CPyL23: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL15;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___IfStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_s); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt(arg_self, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_if_stmt", 117, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IfStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_if_stmt__TraverserVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IfStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_if_stmt__NodeVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_if_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___IfStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_if_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_if_stmt__StatementVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block(PyObject *cpy_r_self, PyObject *cpy_r_b) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = ((mypy___nodes___BlockObject *)cpy_r_b)->_is_unreachable;
    if (!cpy_r_r0) goto CPyL11;
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___BlockObject *)cpy_r_b)->_end_line;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL10;
    cpy_r_r4 = ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_skipped_lines;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/semanal_pass1.py", "visit_block", "SemanticAnalyzerPreAnalysis", "skipped_lines", 130, CPyStatic_semanal_pass1___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = ((mypy___nodes___BlockObject *)cpy_r_b)->_line;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypy___nodes___BlockObject *)cpy_r_b)->_end_line;
    if (likely(PyLong_Check(cpy_r_r6)))
        cpy_r_r7 = CPyTagged_FromObject(cpy_r_r6);
    else {
        CPy_TypeError("int", cpy_r_r6); cpy_r_r7 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_block", 130, CPyStatic_semanal_pass1___globals);
        goto CPyL14;
    }
    cpy_r_r8 = CPyTagged_Add(cpy_r_r7, 2);
    CPyTagged_DECREF(cpy_r_r7);
    cpy_r_r9 = (PyObject *)&PyRange_Type;
    cpy_r_r10 = CPyTagged_StealAsObject(cpy_r_r5);
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_r8);
    PyObject *cpy_r_r12[2] = {cpy_r_r10, cpy_r_r11};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r13, 2, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_block", 130, CPyStatic_semanal_pass1___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    if (likely(PyRange_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_block", 130, CPyStatic_semanal_pass1___globals, "range", cpy_r_r14);
        goto CPyL16;
    }
    cpy_r_r16 = PySet_New(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_block", 130, CPyStatic_semanal_pass1___globals);
        goto CPyL16;
    }
    cpy_r_r17 = PyNumber_InPlaceOr(cpy_r_r4, cpy_r_r16);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_block", 130, CPyStatic_semanal_pass1___globals);
        goto CPyL13;
    }
    if (likely(PySet_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_block", 130, CPyStatic_semanal_pass1___globals, "set", cpy_r_r17);
        goto CPyL13;
    }
    if (((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_skipped_lines != NULL) {
        CPy_DECREF(((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_skipped_lines);
    }
    ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_skipped_lines = cpy_r_r18;
    cpy_r_r19 = 1;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_block", 130, CPyStatic_semanal_pass1___globals);
        goto CPyL13;
    }
CPyL10: ;
    return 1;
CPyL11: ;
    cpy_r_r20 = CPyDef_traverser___TraverserVisitor___visit_block(cpy_r_self, cpy_r_b);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_block", 132, CPyStatic_semanal_pass1___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL14: ;
    CPy_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r5);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r11);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL13;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"b", 0};
    static CPyArg_Parser parser = {"O:visit_block", kwlist, 0};
    PyObject *obj_b;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_b)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_b;
    if (likely(Py_TYPE(obj_b) == CPyType_nodes___Block))
        arg_b = obj_b;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_b); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block(arg_self, arg_b);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_block", 126, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_block) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block(cpy_r_self, cpy_r_block);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:visit_block__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_nodes___Block))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_block); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block__TraverserVisitor_glue(arg_self, arg_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_block__TraverserVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_block__NodeVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_block__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___Block))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_block__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_block__StatementVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt(PyObject *cpy_r_self, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_guard;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_body;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = ((mypy___semanal_pass1___SemanticAnalyzerPreAnalysisObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_pass1.py", "visit_match_stmt", "SemanticAnalyzerPreAnalysis", "options", 135, CPyStatic_semanal_pass1___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_reachability___infer_reachability_of_match_statement(cpy_r_s, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_match_stmt", 135, CPyStatic_semanal_pass1___globals);
        goto CPyL15;
    }
    cpy_r_r2 = ((mypy___nodes___MatchStmtObject *)cpy_r_s)->_guards;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
CPyL3: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL16;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (PyObject_TypeCheck(cpy_r_r8, CPyType_nodes___Expression))
        cpy_r_r9 = cpy_r_r8;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL6128;
    if (cpy_r_r8 == Py_None)
        cpy_r_r9 = cpy_r_r8;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL6128;
    CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_match_stmt", 136, CPyStatic_semanal_pass1___globals, "mypy.nodes.Expression or None", cpy_r_r8);
    goto CPyL17;
__LL6128: ;
    cpy_r_guard = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_guard != cpy_r_r10;
    if (!cpy_r_r11) goto CPyL18;
    if (likely(cpy_r_guard != Py_None))
        cpy_r_r12 = cpy_r_guard;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_match_stmt", 138, CPyStatic_semanal_pass1___globals, "mypy.nodes.Expression", cpy_r_guard);
        goto CPyL17;
    }
    cpy_r_r13 = CPY_GET_METHOD_TRAIT(cpy_r_r12, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r12, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_match_stmt", 138, CPyStatic_semanal_pass1___globals);
        goto CPyL17;
    } else
        goto CPyL19;
CPyL8: ;
    cpy_r_r14 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r14;
    goto CPyL3;
CPyL9: ;
    cpy_r_r15 = ((mypy___nodes___MatchStmtObject *)cpy_r_s)->_bodies;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = 0;
CPyL10: ;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_r15)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = (Py_ssize_t)cpy_r_r16 < (Py_ssize_t)cpy_r_r19;
    if (!cpy_r_r20) goto CPyL20;
    cpy_r_r21 = CPyList_GetItemUnsafe(cpy_r_r15, cpy_r_r16);
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_nodes___Block))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_match_stmt", 139, CPyStatic_semanal_pass1___globals, "mypy.nodes.Block", cpy_r_r21);
        goto CPyL21;
    }
    cpy_r_body = cpy_r_r22;
    cpy_r_r23 = CPyDef_nodes___Block___accept(cpy_r_body, cpy_r_self);
    CPy_DECREF(cpy_r_body);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_match_stmt", 140, CPyStatic_semanal_pass1___globals);
        goto CPyL21;
    } else
        goto CPyL22;
CPyL13: ;
    cpy_r_r24 = cpy_r_r16 + 2;
    cpy_r_r16 = cpy_r_r24;
    goto CPyL10;
CPyL14: ;
    return 1;
CPyL15: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL16: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL9;
CPyL17: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL15;
CPyL18: ;
    CPy_DECREF(cpy_r_guard);
    goto CPyL8;
CPyL19: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL8;
CPyL20: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL14;
CPyL21: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL15;
CPyL22: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL13;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___MatchStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_s); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt(arg_self, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_match_stmt", 134, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_match_stmt__TraverserVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_match_stmt__NodeVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_match_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___MatchStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_match_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_match_stmt__StatementVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt(PyObject *cpy_r_self, PyObject *cpy_r_s) {
    return 1;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___AssignmentStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_s); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt(arg_self, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_assignment_stmt", 145, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_assignment_stmt__TraverserVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_assignment_stmt__NodeVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_assignment_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AssignmentStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_assignment_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_assignment_stmt__StatementVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt(PyObject *cpy_r_self, PyObject *cpy_r_s) {
    return 1;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___ExpressionStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_s); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt(arg_self, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_expression_stmt", 148, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_expression_stmt__TraverserVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_expression_stmt__NodeVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_expression_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ExpressionStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_expression_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_expression_stmt__StatementVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt(PyObject *cpy_r_self, PyObject *cpy_r_s) {
    return 1;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___ReturnStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_s); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt(arg_self, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_return_stmt", 151, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_return_stmt__TraverserVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_return_stmt__NodeVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_return_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_return_stmt__StatementVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt(PyObject *cpy_r_self, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypy___nodes___ForStmtObject *)cpy_r_s)->_body;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_nodes___Block___accept(cpy_r_r0, cpy_r_self);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_for_stmt", 155, CPyStatic_semanal_pass1___globals);
        goto CPyL5;
    } else
        goto CPyL6;
CPyL1: ;
    cpy_r_r2 = ((mypy___nodes___ForStmtObject *)cpy_r_s)->_else_body;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL4;
    cpy_r_r5 = ((mypy___nodes___ForStmtObject *)cpy_r_s)->_else_body;
    CPy_INCREF(cpy_r_r5);
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_pass1.py", "visit_for_stmt", 157, CPyStatic_semanal_pass1___globals, "mypy.nodes.Block", cpy_r_r5);
        goto CPyL5;
    }
    cpy_r_r7 = CPyDef_nodes___Block___accept(cpy_r_r6, cpy_r_self);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "visit_for_stmt", 157, CPyStatic_semanal_pass1___globals);
        goto CPyL5;
    } else
        goto CPyL7;
CPyL4: ;
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL1;
CPyL7: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL4;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___ForStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_s); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt(arg_self, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_for_stmt", 154, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt__TraverserVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt__TraverserVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__TraverserVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt__TraverserVisitor_glue(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_for_stmt__TraverserVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_for_stmt__NodeVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

PyObject *CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_for_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal_pass1.SemanticAnalyzerPreAnalysis", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ForStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis___visit_for_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_pass1.py", "visit_for_stmt__StatementVisitor_glue", -1, CPyStatic_semanal_pass1___globals);
    return NULL;
}

char CPyDef_semanal_pass1_____top_level__(void) {
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
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "<module>", -1, CPyStatic_semanal_pass1___globals);
        goto CPyL15;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_semanal_pass1___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "<module>", 3, CPyStatic_semanal_pass1___globals);
        goto CPyL15;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9728]; /* ('AssertStmt', 'AssignmentStmt', 'Block', 'ClassDef',
                                    'ExpressionStmt', 'ForStmt', 'FuncDef', 'IfStmt',
                                    'Import', 'ImportAll', 'ImportFrom', 'MatchStmt',
                                    'MypyFile', 'ReturnStmt') */
    cpy_r_r10 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r11 = CPyStatic_semanal_pass1___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "<module>", 5, CPyStatic_semanal_pass1___globals);
        goto CPyL15;
    }
    CPyModule_mypy___nodes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r14 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r15 = CPyStatic_semanal_pass1___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "<module>", 21, CPyStatic_semanal_pass1___globals);
        goto CPyL15;
    }
    CPyModule_mypy___options = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9729]; /* ('assert_will_always_fail',
                                     'infer_reachability_of_if_statement',
                                     'infer_reachability_of_match_statement') */
    cpy_r_r18 = CPyStatics[2491]; /* 'mypy.reachability' */
    cpy_r_r19 = CPyStatic_semanal_pass1___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "<module>", 22, CPyStatic_semanal_pass1___globals);
        goto CPyL15;
    }
    CPyModule_mypy___reachability = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___reachability);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r22 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r23 = CPyStatic_semanal_pass1___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "<module>", 27, CPyStatic_semanal_pass1___globals);
        goto CPyL15;
    }
    CPyModule_mypy___traverser = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r26 = PyTuple_Pack(1, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "<module>", 30, CPyStatic_semanal_pass1___globals);
        goto CPyL15;
    }
    cpy_r_r27 = CPyStatics[542]; /* 'mypy.semanal_pass1' */
    cpy_r_r28 = (PyObject *)CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis_template;
    cpy_r_r29 = CPyType_FromTemplate(cpy_r_r28, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "<module>", 30, CPyStatic_semanal_pass1___globals);
        goto CPyL15;
    }
    cpy_r_r30 = CPyDef_semanal_pass1___SemanticAnalyzerPreAnalysis_trait_vtable_setup();
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "<module>", -1, CPyStatic_semanal_pass1___globals);
        goto CPyL16;
    }
    cpy_r_r31 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r32 = CPyStatics[305]; /* 'platform' */
    cpy_r_r33 = CPyStatics[4371]; /* 'cur_mod_id' */
    cpy_r_r34 = CPyStatics[5146]; /* 'cur_mod_node' */
    cpy_r_r35 = CPyStatics[159]; /* 'options' */
    cpy_r_r36 = CPyStatics[5248]; /* 'is_global_scope' */
    cpy_r_r37 = CPyStatics[2293]; /* 'skipped_lines' */
    cpy_r_r38 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r39 = PyTuple_Pack(7, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "<module>", 30, CPyStatic_semanal_pass1___globals);
        goto CPyL16;
    }
    cpy_r_r40 = PyObject_SetAttr(cpy_r_r29, cpy_r_r31, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "<module>", 30, CPyStatic_semanal_pass1___globals);
        goto CPyL16;
    }
    CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis = (PyTypeObject *)cpy_r_r29;
    CPy_INCREF(CPyType_semanal_pass1___SemanticAnalyzerPreAnalysis);
    cpy_r_r42 = CPyStatic_semanal_pass1___globals;
    cpy_r_r43 = CPyStatics[541]; /* 'SemanticAnalyzerPreAnalysis' */
    cpy_r_r44 = CPyDict_SetItem(cpy_r_r42, cpy_r_r43, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/semanal_pass1.py", "<module>", 30, CPyStatic_semanal_pass1___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r46 = 2;
    return cpy_r_r46;
CPyL16: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL15;
}
